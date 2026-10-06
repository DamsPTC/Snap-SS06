/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10322c184; end: 10322c53b;  */

long FUN_10322c184(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10322c53c; end: 10322cc8f;  */

undefined1 * FUN_10322c53c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x20) = lVar4;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 8,param_2 + 8);
      param_1[0x30] = param_2[0x30];
      param_1[0x31] = param_2[0x31];
      uVar3 = *(ulong *)(param_2 + 0x38);
      if (10 < uVar3) {
        func_0x000107c61434();
      }
      *(ulong *)(param_1 + 0x38) = uVar3;
      goto LAB_10322c68c;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x30);
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    uVar13 = *(undefined8 *)(param_2 + 0x31);
    *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
    *(undefined8 *)(param_1 + 0x31) = uVar13;
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 8) = uVar7;
  }
  else if (lVar4 == 0) {
    FUN_10322b438(param_1 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    uVar12 = *(undefined8 *)(param_2 + 0x39);
    uVar11 = *(undefined8 *)(param_2 + 0x31);
    uVar13 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar13;
    *(undefined8 *)(param_1 + 0x39) = uVar12;
    *(undefined8 *)(param_1 + 0x31) = uVar11;
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined8 *)(param_1 + 0x18) = uVar7;
  }
  else {
    func_0x000100083374(param_1 + 8,param_2 + 8);
    puVar5 = (ulong *)(param_1 + 0x38);
    uVar6 = *puVar5;
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    uVar3 = *(ulong *)(param_2 + 0x38);
    if (uVar6 < 0xb) {
      if (uVar3 < 0xb) {
        *puVar5 = uVar3;
      }
      else {
        *puVar5 = uVar3;
        func_0x000107c61434();
      }
    }
    else if (uVar3 < 0xb) {
      func_0x00010322ecf4(puVar5,0x112f4da78,&UNK_10db9fed0);
      *puVar5 = *(ulong *)(param_2 + 0x38);
    }
    else {
      *puVar5 = uVar3;
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
    }
LAB_10322c68c:
    param_1[0x40] = param_2[0x40];
  }
  lVar4 = *(long *)(param_2 + 0x60);
  if (*(long *)(param_1 + 0x60) == 0) {
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x60) = lVar4;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 0x48,param_2 + 0x48);
      param_1[0x70] = param_2[0x70];
      param_1[0x71] = param_2[0x71];
      uVar3 = *(ulong *)(param_2 + 0x78);
      if (10 < uVar3) {
        func_0x000107c61434();
      }
      *(ulong *)(param_1 + 0x78) = uVar3;
      goto LAB_10322c7c4;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    uVar10 = *(undefined8 *)(param_2 + 0x60);
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    uVar11 = *(undefined8 *)(param_2 + 0x68);
    uVar13 = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x79) = *(undefined8 *)(param_2 + 0x79);
    *(undefined8 *)(param_1 + 0x71) = uVar13;
    *(undefined8 *)(param_1 + 0x70) = uVar12;
    *(undefined8 *)(param_1 + 0x68) = uVar11;
    *(undefined8 *)(param_1 + 0x60) = uVar10;
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    *(undefined8 *)(param_1 + 0x48) = uVar7;
  }
  else if (lVar4 == 0) {
    FUN_10322b438(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uVar12 = *(undefined8 *)(param_2 + 0x79);
    uVar11 = *(undefined8 *)(param_2 + 0x71);
    uVar13 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    *(undefined8 *)(param_1 + 0x79) = uVar12;
    *(undefined8 *)(param_1 + 0x71) = uVar11;
    *(undefined8 *)(param_1 + 0x70) = uVar10;
    *(undefined8 *)(param_1 + 0x68) = uVar9;
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *(undefined8 *)(param_1 + 0x58) = uVar7;
  }
  else {
    func_0x000100083374(param_1 + 0x48,param_2 + 0x48);
    puVar5 = (ulong *)(param_1 + 0x78);
    uVar6 = *puVar5;
    param_1[0x70] = param_2[0x70];
    param_1[0x71] = param_2[0x71];
    uVar3 = *(ulong *)(param_2 + 0x78);
    if (uVar6 < 0xb) {
      if (uVar3 < 0xb) {
        *puVar5 = uVar3;
      }
      else {
        *puVar5 = uVar3;
        func_0x000107c61434();
      }
    }
    else if (uVar3 < 0xb) {
      func_0x00010322ecf4(puVar5,0x112f4da78,&UNK_10db9fed0);
      *puVar5 = *(ulong *)(param_2 + 0x78);
    }
    else {
      *puVar5 = uVar3;
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
    }
LAB_10322c7c4:
    param_1[0x80] = param_2[0x80];
  }
  lVar4 = *(long *)(param_2 + 0xa0);
  if (*(long *)(param_1 + 0xa0) == 0) {
    if (lVar4 != 0) {
      *(long *)(param_1 + 0xa0) = lVar4;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 0x88,param_2 + 0x88);
      param_1[0xb0] = param_2[0xb0];
      param_1[0xb1] = param_2[0xb1];
      uVar3 = *(ulong *)(param_2 + 0xb8);
      if (10 < uVar3) {
        func_0x000107c61434();
      }
      *(ulong *)(param_1 + 0xb8) = uVar3;
      goto LAB_10322c8fc;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    uVar10 = *(undefined8 *)(param_2 + 0xa0);
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    uVar12 = *(undefined8 *)(param_2 + 0xb0);
    uVar11 = *(undefined8 *)(param_2 + 0xa8);
    uVar13 = *(undefined8 *)(param_2 + 0xb1);
    *(undefined8 *)(param_1 + 0xb9) = *(undefined8 *)(param_2 + 0xb9);
    *(undefined8 *)(param_1 + 0xb1) = uVar13;
    *(undefined8 *)(param_1 + 0xb0) = uVar12;
    *(undefined8 *)(param_1 + 0xa8) = uVar11;
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    *(undefined8 *)(param_1 + 0x88) = uVar7;
  }
  else if (lVar4 == 0) {
    FUN_10322b438(param_1 + 0x88);
    uVar8 = *(undefined8 *)(param_2 + 0xa0);
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    uVar10 = *(undefined8 *)(param_2 + 0xb0);
    uVar9 = *(undefined8 *)(param_2 + 0xa8);
    uVar12 = *(undefined8 *)(param_2 + 0xb9);
    uVar11 = *(undefined8 *)(param_2 + 0xb1);
    uVar13 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar13;
    *(undefined8 *)(param_1 + 0xb9) = uVar12;
    *(undefined8 *)(param_1 + 0xb1) = uVar11;
    *(undefined8 *)(param_1 + 0xb0) = uVar10;
    *(undefined8 *)(param_1 + 0xa8) = uVar9;
    *(undefined8 *)(param_1 + 0xa0) = uVar8;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
  }
  else {
    func_0x000100083374(param_1 + 0x88,param_2 + 0x88);
    puVar5 = (ulong *)(param_1 + 0xb8);
    uVar6 = *puVar5;
    param_1[0xb0] = param_2[0xb0];
    param_1[0xb1] = param_2[0xb1];
    uVar3 = *(ulong *)(param_2 + 0xb8);
    if (uVar6 < 0xb) {
      if (uVar3 < 0xb) {
        *puVar5 = uVar3;
      }
      else {
        *puVar5 = uVar3;
        func_0x000107c61434();
      }
    }
    else if (uVar3 < 0xb) {
      func_0x00010322ecf4(puVar5,0x112f4da78,&UNK_10db9fed0);
      *puVar5 = *(ulong *)(param_2 + 0xb8);
    }
    else {
      *puVar5 = uVar3;
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
    }
LAB_10322c8fc:
    param_1[0xc0] = param_2[0xc0];
  }
  lVar4 = *(long *)(param_2 + 0xe0);
  if (*(long *)(param_1 + 0xe0) == 0) {
    if (lVar4 != 0) {
      *(long *)(param_1 + 0xe0) = lVar4;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 200,param_2 + 200);
      param_1[0xf0] = param_2[0xf0];
      param_1[0xf1] = param_2[0xf1];
      uVar3 = *(ulong *)(param_2 + 0xf8);
      if (10 < uVar3) {
        func_0x000107c61434();
      }
      *(ulong *)(param_1 + 0xf8) = uVar3;
      goto LAB_10322ca34;
    }
    uVar8 = *(undefined8 *)(param_2 + 0xd0);
    uVar7 = *(undefined8 *)(param_2 + 200);
    uVar10 = *(undefined8 *)(param_2 + 0xe0);
    uVar9 = *(undefined8 *)(param_2 + 0xd8);
    uVar12 = *(undefined8 *)(param_2 + 0xf0);
    uVar11 = *(undefined8 *)(param_2 + 0xe8);
    uVar13 = *(undefined8 *)(param_2 + 0xf1);
    *(undefined8 *)(param_1 + 0xf9) = *(undefined8 *)(param_2 + 0xf9);
    *(undefined8 *)(param_1 + 0xf1) = uVar13;
    *(undefined8 *)(param_1 + 0xf0) = uVar12;
    *(undefined8 *)(param_1 + 0xe8) = uVar11;
    *(undefined8 *)(param_1 + 0xe0) = uVar10;
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    *(undefined8 *)(param_1 + 0xd0) = uVar8;
    *(undefined8 *)(param_1 + 200) = uVar7;
  }
  else if (lVar4 == 0) {
    FUN_10322b438(param_1 + 200);
    uVar8 = *(undefined8 *)(param_2 + 0xe0);
    uVar7 = *(undefined8 *)(param_2 + 0xd8);
    uVar10 = *(undefined8 *)(param_2 + 0xf0);
    uVar9 = *(undefined8 *)(param_2 + 0xe8);
    uVar12 = *(undefined8 *)(param_2 + 0xf9);
    uVar11 = *(undefined8 *)(param_2 + 0xf1);
    uVar13 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = uVar13;
    *(undefined8 *)(param_1 + 0xf9) = uVar12;
    *(undefined8 *)(param_1 + 0xf1) = uVar11;
    *(undefined8 *)(param_1 + 0xf0) = uVar10;
    *(undefined8 *)(param_1 + 0xe8) = uVar9;
    *(undefined8 *)(param_1 + 0xe0) = uVar8;
    *(undefined8 *)(param_1 + 0xd8) = uVar7;
  }
  else {
    func_0x000100083374(param_1 + 200,param_2 + 200);
    puVar5 = (ulong *)(param_1 + 0xf8);
    uVar6 = *puVar5;
    param_1[0xf0] = param_2[0xf0];
    param_1[0xf1] = param_2[0xf1];
    uVar3 = *(ulong *)(param_2 + 0xf8);
    if (uVar6 < 0xb) {
      if (uVar3 < 0xb) {
        *puVar5 = uVar3;
      }
      else {
        *puVar5 = uVar3;
        func_0x000107c61434();
      }
    }
    else if (uVar3 < 0xb) {
      func_0x00010322ecf4(puVar5,0x112f4da78,&UNK_10db9fed0);
      *puVar5 = *(ulong *)(param_2 + 0xf8);
    }
    else {
      *puVar5 = uVar3;
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
    }
LAB_10322ca34:
    param_1[0x100] = param_2[0x100];
  }
  puVar1 = (undefined8 *)(param_1 + 0x108);
  puVar2 = (undefined8 *)(param_2 + 0x108);
  lVar4 = *(long *)(param_2 + 0x120);
  if (*(long *)(param_1 + 0x120) == 0) {
    if (lVar4 != 0) {
      *(long *)(param_1 + 0x120) = lVar4;
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
      (*(code *)**(undefined8 **)(lVar4 + -8))(puVar1,puVar2);
      param_1[0x130] = param_2[0x130];
      param_1[0x131] = param_2[0x131];
      uVar3 = *(ulong *)(param_2 + 0x138);
      if (10 < uVar3) {
        func_0x000107c61434();
      }
LAB_10322cad0:
      *(ulong *)(param_1 + 0x138) = uVar3;
      goto LAB_10322cb54;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x110);
    uVar7 = *puVar2;
    uVar10 = *(undefined8 *)(param_2 + 0x120);
    uVar9 = *(undefined8 *)(param_2 + 0x118);
    uVar12 = *(undefined8 *)(param_2 + 0x130);
    uVar11 = *(undefined8 *)(param_2 + 0x128);
    uVar13 = *(undefined8 *)(param_2 + 0x131);
    *(undefined8 *)(param_1 + 0x139) = *(undefined8 *)(param_2 + 0x139);
    *(undefined8 *)(param_1 + 0x131) = uVar13;
    *(undefined8 *)(param_1 + 0x120) = uVar10;
    *(undefined8 *)(param_1 + 0x118) = uVar9;
    *(undefined8 *)(param_1 + 0x130) = uVar12;
    *(undefined8 *)(param_1 + 0x128) = uVar11;
    *(undefined8 *)(param_1 + 0x110) = uVar8;
    *puVar1 = uVar7;
  }
  else if (lVar4 == 0) {
    FUN_10322b438();
    uVar11 = *(undefined8 *)(param_2 + 0x120);
    uVar10 = *(undefined8 *)(param_2 + 0x118);
    uVar8 = *(undefined8 *)(param_2 + 0x130);
    uVar7 = *(undefined8 *)(param_2 + 0x128);
    uVar9 = *(undefined8 *)(param_2 + 0x131);
    uVar13 = *(undefined8 *)(param_2 + 0x110);
    uVar12 = *puVar2;
    *(undefined8 *)(param_1 + 0x139) = *(undefined8 *)(param_2 + 0x139);
    *(undefined8 *)(param_1 + 0x131) = uVar9;
    *(undefined8 *)(param_1 + 0x120) = uVar11;
    *(undefined8 *)(param_1 + 0x118) = uVar10;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined8 *)(param_1 + 0x110) = uVar13;
    *puVar1 = uVar12;
  }
  else {
    func_0x000100083374(puVar1,puVar2);
    param_1[0x130] = param_2[0x130];
    param_1[0x131] = param_2[0x131];
    uVar6 = *(ulong *)(param_1 + 0x138);
    uVar3 = *(ulong *)(param_2 + 0x138);
    if (uVar6 < 0xb) {
      if (uVar3 < 0xb) goto LAB_10322cad0;
      *(ulong *)(param_1 + 0x138) = uVar3;
      func_0x000107c61434();
    }
    else if (uVar3 < 0xb) {
      func_0x00010322ecf4(param_1 + 0x138,0x112f4da78,&UNK_10db9fed0);
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    }
    else {
      *(ulong *)(param_1 + 0x138) = uVar3;
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
    }
LAB_10322cb54:
    param_1[0x140] = param_2[0x140];
  }
  puVar1 = (undefined8 *)(param_1 + 0x148);
  puVar2 = (undefined8 *)(param_2 + 0x148);
  lVar4 = *(long *)(param_2 + 0x160);
  if (*(long *)(param_1 + 0x160) == 0) {
    if (lVar4 == 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x150);
      uVar7 = *puVar2;
      uVar10 = *(undefined8 *)(param_2 + 0x160);
      uVar9 = *(undefined8 *)(param_2 + 0x158);
      uVar12 = *(undefined8 *)(param_2 + 0x170);
      uVar11 = *(undefined8 *)(param_2 + 0x168);
      uVar13 = *(undefined8 *)(param_2 + 0x171);
      *(undefined8 *)(param_1 + 0x179) = *(undefined8 *)(param_2 + 0x179);
      *(undefined8 *)(param_1 + 0x171) = uVar13;
      *(undefined8 *)(param_1 + 0x160) = uVar10;
      *(undefined8 *)(param_1 + 0x158) = uVar9;
      *(undefined8 *)(param_1 + 0x170) = uVar12;
      *(undefined8 *)(param_1 + 0x168) = uVar11;
      *(undefined8 *)(param_1 + 0x150) = uVar8;
      *puVar1 = uVar7;
      return param_1;
    }
    *(long *)(param_1 + 0x160) = lVar4;
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
    (*(code *)**(undefined8 **)(lVar4 + -8))(puVar1,puVar2);
    param_1[0x170] = param_2[0x170];
    param_1[0x171] = param_2[0x171];
    uVar3 = *(ulong *)(param_2 + 0x178);
    if (10 < uVar3) {
      func_0x000107c61434();
    }
  }
  else {
    if (lVar4 == 0) {
      FUN_10322b438();
      uVar11 = *(undefined8 *)(param_2 + 0x160);
      uVar10 = *(undefined8 *)(param_2 + 0x158);
      uVar8 = *(undefined8 *)(param_2 + 0x170);
      uVar7 = *(undefined8 *)(param_2 + 0x168);
      uVar9 = *(undefined8 *)(param_2 + 0x171);
      uVar13 = *(undefined8 *)(param_2 + 0x150);
      uVar12 = *puVar2;
      *(undefined8 *)(param_1 + 0x179) = *(undefined8 *)(param_2 + 0x179);
      *(undefined8 *)(param_1 + 0x171) = uVar9;
      *(undefined8 *)(param_1 + 0x160) = uVar11;
      *(undefined8 *)(param_1 + 0x158) = uVar10;
      *(undefined8 *)(param_1 + 0x170) = uVar8;
      *(undefined8 *)(param_1 + 0x168) = uVar7;
      *(undefined8 *)(param_1 + 0x150) = uVar13;
      *puVar1 = uVar12;
      return param_1;
    }
    func_0x000100083374(puVar1,puVar2);
    param_1[0x170] = param_2[0x170];
    param_1[0x171] = param_2[0x171];
    uVar6 = *(ulong *)(param_1 + 0x178);
    uVar3 = *(ulong *)(param_2 + 0x178);
    if (10 < uVar6) {
      if (uVar3 < 0xb) {
        func_0x00010322ecf4(param_1 + 0x178,0x112f4da78,&UNK_10db9fed0);
        *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
      }
      else {
        *(ulong *)(param_1 + 0x178) = uVar3;
        func_0x000107c61434();
        func_0x000107c6142c(uVar6);
      }
      goto LAB_10322cc74;
    }
    if (10 < uVar3) {
      *(ulong *)(param_1 + 0x178) = uVar3;
      func_0x000107c61434();
      goto LAB_10322cc74;
    }
  }
  *(ulong *)(param_1 + 0x178) = uVar3;
LAB_10322cc74:
  param_1[0x180] = param_2[0x180];
  return param_1;
}



/* Entry: 10322cc90; end: 10322cc97;  */

void FUN_10322cc90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x181);
  return;
}



/* Entry: 10322cc98; end: 10322d133;  */

undefined1 * FUN_10322cc98(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_10322cd40:
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x31);
    *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
    *(undefined8 *)(param_1 + 0x31) = uVar4;
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_10322ce04;
LAB_10322cd84:
    if (*(long *)(param_2 + 0x60) == 0) {
      FUN_10322b438(param_1 + 0x48);
      goto LAB_10322ce04;
    }
    func_0x0001000834e4(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    puVar3 = (ulong *)(param_1 + 0x78);
    param_1[0x70] = param_2[0x70];
    param_1[0x71] = param_2[0x71];
    uVar2 = *(ulong *)(param_2 + 0x78);
    if (*puVar3 < 0xb) {
LAB_10322cdf4:
      *puVar3 = uVar2;
    }
    else {
      if (uVar2 < 0xb) {
        func_0x00010322ecf4(puVar3,0x112f4da78,&UNK_10db9fed0);
        uVar2 = *(ulong *)(param_2 + 0x78);
        goto LAB_10322cdf4;
      }
      *puVar3 = uVar2;
      func_0x000107c6142c();
    }
    param_1[0x80] = param_2[0x80];
    if (*(long *)(param_1 + 0xa0) != 0) goto LAB_10322ce48;
LAB_10322cec8:
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xb1);
    *(undefined8 *)(param_1 + 0xb9) = *(undefined8 *)(param_2 + 0xb9);
    *(undefined8 *)(param_1 + 0xb1) = uVar4;
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_10322cf8c;
LAB_10322cf0c:
    if (*(long *)(param_2 + 0xe0) == 0) {
      FUN_10322b438(param_1 + 200);
      goto LAB_10322cf8c;
    }
    func_0x0001000834e4(param_1 + 200);
    uVar4 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    puVar3 = (ulong *)(param_1 + 0xf8);
    param_1[0xf0] = param_2[0xf0];
    param_1[0xf1] = param_2[0xf1];
    uVar2 = *(ulong *)(param_2 + 0xf8);
    if (*puVar3 < 0xb) {
LAB_10322cf7c:
      *puVar3 = uVar2;
    }
    else {
      if (uVar2 < 0xb) {
        func_0x00010322ecf4(puVar3,0x112f4da78,&UNK_10db9fed0);
        uVar2 = *(ulong *)(param_2 + 0xf8);
        goto LAB_10322cf7c;
      }
      *puVar3 = uVar2;
      func_0x000107c6142c();
    }
    param_1[0x100] = param_2[0x100];
  }
  else {
    if (*(long *)(param_2 + 0x20) == 0) {
      FUN_10322b438(param_1 + 8);
      goto LAB_10322cd40;
    }
    func_0x0001000834e4(param_1 + 8);
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    puVar3 = (ulong *)(param_1 + 0x38);
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    uVar2 = *(ulong *)(param_2 + 0x38);
    if (*puVar3 < 0xb) {
LAB_10322cd30:
      *puVar3 = uVar2;
    }
    else {
      if (uVar2 < 0xb) {
        func_0x00010322ecf4(puVar3,0x112f4da78,&UNK_10db9fed0);
        uVar2 = *(ulong *)(param_2 + 0x38);
        goto LAB_10322cd30;
      }
      *puVar3 = uVar2;
      func_0x000107c6142c();
    }
    param_1[0x40] = param_2[0x40];
    if (*(long *)(param_1 + 0x60) != 0) goto LAB_10322cd84;
LAB_10322ce04:
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x71);
    *(undefined8 *)(param_1 + 0x79) = *(undefined8 *)(param_2 + 0x79);
    *(undefined8 *)(param_1 + 0x71) = uVar4;
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_10322cec8;
LAB_10322ce48:
    if (*(long *)(param_2 + 0xa0) == 0) {
      FUN_10322b438(param_1 + 0x88);
      goto LAB_10322cec8;
    }
    func_0x0001000834e4(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    puVar3 = (ulong *)(param_1 + 0xb8);
    param_1[0xb0] = param_2[0xb0];
    param_1[0xb1] = param_2[0xb1];
    uVar2 = *(ulong *)(param_2 + 0xb8);
    if (*puVar3 < 0xb) {
LAB_10322ceb8:
      *puVar3 = uVar2;
    }
    else {
      if (uVar2 < 0xb) {
        func_0x00010322ecf4(puVar3,0x112f4da78,&UNK_10db9fed0);
        uVar2 = *(ulong *)(param_2 + 0xb8);
        goto LAB_10322ceb8;
      }
      *puVar3 = uVar2;
      func_0x000107c6142c();
    }
    param_1[0xc0] = param_2[0xc0];
    if (*(long *)(param_1 + 0xe0) != 0) goto LAB_10322cf0c;
LAB_10322cf8c:
    uVar4 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xf1);
    *(undefined8 *)(param_1 + 0xf9) = *(undefined8 *)(param_2 + 0xf9);
    *(undefined8 *)(param_1 + 0xf1) = uVar4;
  }
  puVar1 = (undefined8 *)(param_1 + 0x108);
  if (*(long *)(param_1 + 0x120) == 0) {
LAB_10322d044:
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    uVar6 = *(undefined8 *)(param_2 + 0x120);
    uVar5 = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *puVar1 = uVar4;
    *(undefined8 *)(param_1 + 0x120) = uVar6;
    *(undefined8 *)(param_1 + 0x118) = uVar5;
    uVar4 = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x128) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x131);
    *(undefined8 *)(param_1 + 0x139) = *(undefined8 *)(param_2 + 0x139);
    *(undefined8 *)(param_1 + 0x131) = uVar4;
  }
  else {
    if (*(long *)(param_2 + 0x120) == 0) {
      FUN_10322b438(puVar1);
      goto LAB_10322d044;
    }
    func_0x0001000834e4(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    uVar6 = *(undefined8 *)(param_2 + 0x120);
    uVar5 = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *puVar1 = uVar4;
    *(undefined8 *)(param_1 + 0x120) = uVar6;
    *(undefined8 *)(param_1 + 0x118) = uVar5;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    param_1[0x130] = param_2[0x130];
    param_1[0x131] = param_2[0x131];
    uVar2 = *(ulong *)(param_2 + 0x138);
    if (*(ulong *)(param_1 + 0x138) < 0xb) {
LAB_10322d034:
      *(ulong *)(param_1 + 0x138) = uVar2;
    }
    else {
      if (uVar2 < 0xb) {
        func_0x00010322ecf4(param_1 + 0x138,0x112f4da78,&UNK_10db9fed0);
        uVar2 = *(ulong *)(param_2 + 0x138);
        goto LAB_10322d034;
      }
      *(ulong *)(param_1 + 0x138) = uVar2;
      func_0x000107c6142c();
    }
    param_1[0x140] = param_2[0x140];
  }
  puVar1 = (undefined8 *)(param_1 + 0x148);
  if (*(long *)(param_1 + 0x160) == 0) {
LAB_10322d0f4:
    uVar4 = *(undefined8 *)(param_2 + 0x148);
    uVar6 = *(undefined8 *)(param_2 + 0x160);
    uVar5 = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *puVar1 = uVar4;
    *(undefined8 *)(param_1 + 0x160) = uVar6;
    *(undefined8 *)(param_1 + 0x158) = uVar5;
    uVar4 = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_1 + 0x168) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x171);
    *(undefined8 *)(param_1 + 0x179) = *(undefined8 *)(param_2 + 0x179);
    *(undefined8 *)(param_1 + 0x171) = uVar4;
    return param_1;
  }
  if (*(long *)(param_2 + 0x160) == 0) {
    FUN_10322b438(puVar1);
    goto LAB_10322d0f4;
  }
  func_0x0001000834e4(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x160);
  uVar5 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *puVar1 = uVar4;
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  *(undefined8 *)(param_1 + 0x158) = uVar5;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  param_1[0x170] = param_2[0x170];
  param_1[0x171] = param_2[0x171];
  uVar2 = *(ulong *)(param_2 + 0x178);
  if (10 < *(ulong *)(param_1 + 0x178)) {
    if (10 < uVar2) {
      *(ulong *)(param_1 + 0x178) = uVar2;
      func_0x000107c6142c();
      goto LAB_10322d118;
    }
    func_0x00010322ecf4(param_1 + 0x178,0x112f4da78,&UNK_10db9fed0);
    uVar2 = *(ulong *)(param_2 + 0x178);
  }
  *(ulong *)(param_1 + 0x178) = uVar2;
LAB_10322d118:
  param_1[0x180] = param_2[0x180];
  return param_1;
}



/* Entry: 10322d134; end: 10322d25b;  */

int FUN_10322d134(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x181) != '\0')) {
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



/* Entry: 10322d25c; end: 10322e85f;  */

void FUN_10322d25c(undefined1 *param_1,long param_2,ulong param_3,byte *param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long extraout_x8;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 *puStack_7f0;
  long lStack_7e8;
  undefined8 *puStack_7e0;
  undefined1 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  uint uStack_7bc;
  ulong uStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 *puStack_7a0;
  ulong uStack_798;
  undefined8 uStack_790;
  long lStack_788;
  uint uStack_77c;
  undefined1 *puStack_778;
  undefined1 auStack_770 [40];
  undefined1 auStack_748 [24];
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined1 auStack_720 [8];
  undefined8 uStack_718;
  long lStack_708;
  long lStack_700;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  undefined1 *puStack_6c0;
  undefined1 uStack_6b8;
  undefined1 uStack_6b7;
  undefined6 uStack_6b6;
  undefined1 uStack_6b0;
  undefined7 uStack_6af;
  undefined1 uStack_6a8;
  ulong uStack_610;
  undefined1 auStack_558 [8];
  undefined8 uStack_550;
  undefined1 auStack_548 [24];
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined1 *puStack_4d0;
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 uStack_4c0;
  undefined8 uStack_4bf;
  undefined1 auStack_4b0 [208];
  long lStack_3e0;
  undefined1 auStack_3d8 [208];
  ulong uStack_308;
  undefined1 auStack_300 [208];
  ulong uStack_230;
  undefined1 auStack_228 [208];
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  long lStack_80;
  
  ppuVar3 = &puStack_7f0;
  puStack_7d0 = (undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *puStack_7d0 = 0;
  puStack_7a0 = (undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *puStack_7a0 = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puStack_7c8 = (undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *puStack_7c8 = 0;
  puVar17 = (undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *puVar17 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  puStack_7b0 = (undefined8 *)(param_1 + 0x108);
  puVar6 = (undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf9) = 0;
  *(undefined8 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0x139) = 0;
  *(undefined8 *)(param_1 + 0x131) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *puStack_7b0 = 0;
  *(undefined8 *)(param_1 + 0x179) = 0;
  *(undefined8 *)(param_1 + 0x171) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *puVar6 = 0;
  uStack_4bf = 0;
  uStack_4c0 = 0;
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4c7 = 0;
  puStack_4d0 = (undefined1 *)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_790 = param_6;
  lStack_788 = param_7;
  FUN_10322ec18(param_4);
  uStack_77c = (uint)param_3;
  if (*param_4 != 2) {
    uStack_77c = (uint)*param_4;
  }
  uStack_7b8 = param_3 >> 6 & 1;
  *param_1 = (char)uStack_7b8;
  lVar16 = *(long *)(param_2 + 0x10);
  uStack_798 = param_3;
  if (lVar16 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    lVar18 = param_2 + 0x20;
    uStack_7bc = (uint)param_3 >> 10 & 1;
    lStack_7e8 = param_2;
    puStack_7e0 = puVar6;
    puStack_7d8 = param_1;
    puStack_7a8 = puVar17;
    do {
      FUN_1031ddb84(lVar18,&uStack_520);
      FUN_1031ddc20(&uStack_520,auStack_548);
      lVar5 = lStack_788;
      uVar8 = uStack_790;
      if (param_5 == 0) {
LAB_10322d4b8:
        puVar4 = puStack_528;
        uVar8 = uStack_530;
        func_0x0001000a8868(auStack_548,uStack_530);
        lVar5 = 0;
        func_0x000107c614b8(0,puVar4,uVar8,&UNK_10e804840,&UNK_10e804858);
        lVar19 = *(long *)(lVar5 + -8);
        puStack_778 = (undefined1 *)ppuVar3;
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar12 = (long)ppuVar3 - extraout_x8;
        (**(code **)(puVar4 + 0x28))(lVar12,uVar8,puVar4);
        puVar6 = &uStack_6e0;
        func_0x000107c6147c(puVar6,lVar12,lVar5,&UNK_11076ad50,0);
        if (((int)puVar6 != 0) &&
           (func_0x000107c6142c(uStack_6d8), puVar6 = puStack_7a0,
           ((uint)uStack_798 >> 0xd & 1) == 0)) goto LAB_10322d5dc;
        puVar17 = &uStack_6e0;
        func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076af50,0);
        puVar6 = puStack_7a0;
        if ((int)puVar17 == 0) {
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b450,0);
          if ((int)puVar17 != 0) goto LAB_10322d5d4;
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076bbd0,0);
          if ((int)puVar17 != 0) goto LAB_10322d5d4;
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b550,0);
          if (((int)puVar17 != 0) &&
             (func_0x000107c6142c(uStack_6d8), ((uint)uStack_798 >> 2 & 1) == 0))
          goto LAB_10322d5dc;
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b850,0);
          if ((int)puVar17 != 0) {
            func_0x000107c6142c(uStack_6d8);
            puVar4 = puStack_528;
            uVar8 = uStack_530;
            if (((uint)uStack_798 >> 0xc & 1) == 0) {
              func_0x0001000a8868(auStack_548,uStack_530);
              puVar6 = puStack_7a0;
              (**(code **)(puVar4 + 0x30))(auStack_3d8,uVar8,puVar4);
              uVar13 = uStack_308;
              FUN_103202330(uStack_308);
              func_0x00010322ed34(auStack_3d8);
              uVar9 = uVar13;
              func_0x0001044109f4(uVar13,3);
              func_0x00010321d6b8(uVar13);
              if ((uVar9 & 1) == 0) goto LAB_10322d83c;
            }
            goto LAB_10322d5dc;
          }
LAB_10322d83c:
          puVar17 = &uStack_150;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076afd0,0);
          if ((int)puVar17 != 0) {
            func_0x000107c6142c(uStack_148);
            puVar4 = puStack_528;
            uVar8 = uStack_530;
            if (((uint)uStack_798 >> 0xb & 1) == 0) {
              func_0x0001000a8868(auStack_548,uStack_530);
              (**(code **)(puVar4 + 0x30))(auStack_300,uVar8,puVar4);
              uVar13 = uStack_230;
              FUN_103202330(uStack_230);
              func_0x00010322ed34(auStack_300);
              uVar9 = uVar13;
              func_0x0001044109f4(uVar13,0);
              func_0x00010321d6b8(uVar13);
              puVar4 = puStack_528;
              uVar8 = uStack_530;
              func_0x0001000a8868(auStack_548,uStack_530);
              if ((uVar9 & 1) == 0) {
                (**(code **)(puVar4 + 0x30))(auStack_228,uVar8,puVar4);
                uVar13 = uStack_158;
                FUN_103202330(uStack_158);
                func_0x00010322ed34(auStack_228);
                uVar9 = uVar13;
                func_0x0001044109f4(uVar13,1);
                func_0x00010321d6b8(uVar13);
                puVar4 = puStack_528;
                if ((uVar9 & 1) == 0) goto LAB_10322de48;
                func_0x0001000a8868(auStack_548,uStack_530);
                puVar17 = puStack_7d0;
                if ((uStack_7b8 & 1) == 0) {
                  puStack_7f0 = puVar4;
                  func_0x00010322ecac(puStack_7d0,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
                }
                else {
                  uStack_6af = 0;
                  uStack_6a8 = 0;
                  uStack_6b0 = 0;
                  lStack_6c8 = 0;
                  uStack_6d0 = 0;
                  uStack_6b8 = 0;
                  uStack_6b7 = 0;
                  uStack_6b6 = 0;
                  puStack_6c0 = (undefined1 *)0x0;
                  uStack_6d8 = 0;
                  uStack_6e0 = 0;
                }
LAB_10322de38:
                FUN_103250620();
                goto LAB_10322de44;
              }
              FUN_103250620();
              uStack_7b8 = 1;
              *puStack_7d8 = 1;
            }
LAB_10322de48:
            (**(code **)(lVar19 + 8))(lVar12,lVar5);
            ppuVar3 = (undefined1 **)puStack_778;
            goto LAB_10322d3a4;
          }
          puVar17 = &uStack_150;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b650,0);
          if (((int)puVar17 != 0) &&
             (func_0x000107c6142c(uStack_148), ((uint)uStack_798 >> 5 & 1) == 0)) {
            func_0x0001000a8868(auStack_548,uStack_530);
            puVar17 = puStack_7d0;
            if (((uint)uStack_798 >> 8 & 1) != 0) {
              FUN_103250620();
              goto LAB_10322de48;
            }
LAB_10322db98:
            if ((uStack_7b8 & 1) == 0) {
              func_0x00010322ecac(puStack_7d0,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
              puVar17 = puStack_7d0;
            }
            else {
              uStack_6af = 0;
              uStack_6a8 = 0;
              uStack_6b0 = 0;
              lStack_6c8 = 0;
              uStack_6d0 = 0;
              uStack_6b8 = 0;
              uStack_6b7 = 0;
              uStack_6b6 = 0;
              puStack_6c0 = (undefined1 *)0x0;
              uStack_6d8 = 0;
              uStack_6e0 = 0;
            }
            FUN_103250620();
LAB_10322de44:
            func_0x00010322eda4(&uStack_6e0,puVar17);
            goto LAB_10322de48;
          }
          puVar10 = &uStack_150;
          func_0x000107c6147c(puVar10,lVar12,lVar5,&UNK_11076acd0,0);
          puVar17 = puStack_7d0;
          if (((int)puVar10 != 0) &&
             (func_0x000107c6142c(uStack_148), ((uint)uStack_798 >> 5 & 1) != 0)) {
            func_0x0001000a8868(auStack_548,uStack_530);
            goto LAB_10322db98;
          }
          puVar17 = &uStack_150;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076ac50,0);
          if ((int)puVar17 != 0) {
            func_0x000107c6142c(uStack_148);
            puVar4 = auStack_548;
            func_0x0001000a8868(puVar4,uStack_530);
            if (((uint)uStack_798 >> 7 & 1) == 0) {
              if (((uint)uStack_798 >> 9 & 1) == 0) {
                puVar17 = puVar6;
                if ((uStack_7b8 & 1) == 0) {
                  puStack_7f0 = puVar4;
                  func_0x00010322ecac(puVar6,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
                }
                else {
                  uStack_6af = 0;
                  uStack_6a8 = 0;
                  uStack_6b0 = 0;
                  lStack_6c8 = 0;
                  uStack_6d0 = 0;
                  uStack_6b8 = 0;
                  uStack_6b7 = 0;
                  uStack_6b6 = 0;
                  puStack_6c0 = (undefined1 *)0x0;
                  uStack_6d8 = 0;
                  uStack_6e0 = 0;
                }
              }
              else if ((uStack_7b8 & 1) == 0) {
                func_0x00010322ecac(puStack_7d0,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
                puVar17 = puStack_7d0;
              }
              else {
                uStack_6af = 0;
                uStack_6a8 = 0;
                uStack_6b0 = 0;
                lStack_6c8 = 0;
                uStack_6d0 = 0;
                uStack_6b8 = 0;
                uStack_6b7 = 0;
                uStack_6b6 = 0;
                puStack_6c0 = (undefined1 *)0x0;
                uStack_6d8 = 0;
                uStack_6e0 = 0;
                puVar17 = puStack_7d0;
              }
              goto LAB_10322de38;
            }
            FUN_103250620();
            goto LAB_10322de48;
          }
          puVar4 = auStack_558;
          func_0x000107c6147c(puVar4,lVar12,lVar5,&UNK_11076b0d0,0);
          puVar6 = puStack_7c8;
          if (((int)puVar4 != 0) &&
             (func_0x000107c6142c(uStack_550), ((uint)uStack_798 >> 1 & 1) != 0)) {
            if ((uStack_7b8 & 1) == 0) {
              func_0x00010322ecac(puVar6,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
              func_0x0001000a8868(auStack_548,uStack_530);
              func_0x00010322ecac(puStack_7c8,&uStack_150,0x112f4da60,&UNK_10db9feb0);
              puVar6 = puStack_7c8;
            }
            else {
              uStack_6af = 0;
              uStack_6a8 = 0;
              uStack_6b0 = 0;
              lStack_6c8 = 0;
              uStack_6d0 = 0;
              uStack_6b8 = 0;
              uStack_6b7 = 0;
              uStack_6b6 = 0;
              puStack_6c0 = (undefined1 *)0x0;
              uStack_6d8 = 0;
              uStack_6e0 = 0;
              func_0x0001000a8868(auStack_548,uStack_530);
              uStack_11f = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_127 = 0;
              puStack_130 = (undefined1 *)0x0;
              lStack_138 = 0;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
            }
            FUN_103250620();
            func_0x00010322eda4(&uStack_150,puVar6);
            if ((uStack_7b8 & 1) == 0) {
              func_0x00010322ecac(puVar6,&uStack_150,0x112f4da60,&UNK_10db9feb0);
              if (lStack_138 == 0) goto LAB_10322e020;
              func_0x00010322ed68(&uStack_150,auStack_720);
              func_0x00010322ecf4(&uStack_150,0x112f4da60,&UNK_10db9feb0);
              FUN_1031ddb84(auStack_720,auStack_770);
              FUN_10322b438(auStack_720);
              FUN_1031ddc20(auStack_770,auStack_748);
              uVar8 = uStack_730;
              puStack_7f0 = puStack_728;
              puVar4 = auStack_748;
              func_0x0001000a8868(puVar4,uStack_730);
              FUN_1031ddb84(auStack_548,&uStack_150);
              func_0x00010440e61c(puVar4,&uStack_150,uVar8,puStack_7f0);
              func_0x00010322ecf4(&uStack_150,0x112f4b310,&UNK_10db9fef0);
              if (((ulong)puVar4 & 1) != 0) {
                func_0x00010322ecf4(&uStack_4f0,0x112f4da60,&UNK_10db9feb0);
                uStack_4e8 = uStack_6d8;
                uStack_4f0 = uStack_6e0;
                lStack_4d8 = lStack_6c8;
                uStack_4e0 = uStack_6d0;
                uStack_4c8 = uStack_6b8;
                puStack_4d0 = puStack_6c0;
                uStack_4bf = CONCAT17(uStack_6a8,uStack_6af);
                uStack_4c7 = CONCAT61(uStack_6b6,uStack_6b7);
                uStack_4c0 = uStack_6b0;
                func_0x0001000834e4(auStack_748);
                goto LAB_10322de48;
              }
              func_0x0001000834e4(auStack_748);
            }
            else {
              uStack_11f = 0;
              uStack_120 = 0;
              uStack_128 = 0;
              uStack_127 = 0;
              puStack_130 = (undefined1 *)0x0;
              lStack_138 = 0;
              uStack_140 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
LAB_10322e020:
              func_0x00010322ecf4(&uStack_150,0x112f4da60,&UNK_10db9feb0);
            }
            func_0x0001000a8868(auStack_548,uStack_530);
            FUN_103250620();
            func_0x00010322ecf4(&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
            goto LAB_10322de48;
          }
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b5d0,0);
          if ((int)puVar17 != 0) {
LAB_10322dab0:
            func_0x000107c6142c(uStack_6d8);
            (**(code **)(lVar19 + 8))(lVar12,lVar5);
            ppuVar3 = (undefined1 **)puStack_778;
            func_0x0001000a8868(auStack_548,uStack_530);
            if ((uStack_7b8 & 1) == 0) {
              func_0x00010322ecac(puStack_7c8,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
              puVar6 = puStack_7c8;
            }
            else {
              uStack_6af = 0;
              uStack_6a8 = 0;
              uStack_6b0 = 0;
              lStack_6c8 = 0;
              uStack_6d0 = 0;
              uStack_6b8 = 0;
              uStack_6b7 = 0;
              uStack_6b6 = 0;
              puStack_6c0 = (undefined1 *)0x0;
              uStack_6d8 = 0;
              uStack_6e0 = 0;
            }
            FUN_103250620();
            func_0x00010322eda4(&uStack_6e0,puVar6);
            goto LAB_10322d3a4;
          }
          puVar17 = &uStack_6e0;
          func_0x000107c6147c(puVar17,lVar12,lVar5,&UNK_11076b0d0,0);
          if ((int)puVar17 != 0) goto LAB_10322dab0;
          puVar6 = &uStack_6e0;
          func_0x000107c6147c(puVar6,lVar12,lVar5,&UNK_11076b050,0);
          if ((int)puVar6 == 0) {
            puVar6 = &uStack_6e0;
            func_0x000107c6147c(puVar6,lVar12,lVar5,&UNK_11076bad0,0);
            if ((int)puVar6 == 0) goto LAB_10322de48;
          }
          func_0x000107c6142c(uStack_6d8);
          (**(code **)(lVar19 + 8))(lVar12,lVar5);
          ppuVar3 = (undefined1 **)puStack_778;
          func_0x0001000a8868(auStack_548,uStack_530);
        }
        else {
LAB_10322d5d4:
          func_0x000107c6142c(uStack_6d8);
LAB_10322d5dc:
          (**(code **)(lVar19 + 8))(lVar12,lVar5);
          puVar4 = puStack_528;
          uVar8 = uStack_530;
          ppuVar3 = (undefined1 **)puStack_778;
          func_0x0001000a8868(auStack_548,uStack_530);
          pcVar15 = *(code **)(puVar4 + 0x28);
          lVar5 = 0;
          func_0x000107c614b8(0,puVar4,uVar8,&UNK_10e804840,&UNK_10e804858);
          puVar7 = puVar4;
          lStack_6c8 = lVar5;
          func_0x000107c614b4(puVar4,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
          puVar17 = &uStack_6e0;
          puStack_6c0 = puVar7;
          func_0x0001000c5db4(puVar17);
          (*pcVar15)(puVar17,uVar8,puVar4);
          uVar8 = 0x112f4daa8;
          func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
          puVar17 = &uStack_150;
          func_0x000107c6147c(puVar17,&uStack_6e0,uVar8,&UNK_11076af50,6);
          if ((((ulong)puVar17 & 1) != 0) &&
             (func_0x000107c6142c(uStack_148), ((uint)uStack_798 >> 9 & 1) != 0)) {
            func_0x0001000a8868(auStack_548,uStack_530);
            if ((uStack_7b8 & 1) == 0) {
              func_0x00010322ecac(puVar6,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
            }
            else {
              uStack_6af = 0;
              uStack_6a8 = 0;
              uStack_6b0 = 0;
              lStack_6c8 = 0;
              uStack_6d0 = 0;
              uStack_6b8 = 0;
              uStack_6b7 = 0;
              uStack_6b6 = 0;
              puStack_6c0 = (undefined1 *)0x0;
              uStack_6d8 = 0;
              uStack_6e0 = 0;
            }
            FUN_103250620();
            func_0x00010322eda4(&uStack_6e0,puVar6);
            goto LAB_10322d3a4;
          }
          func_0x0001000a8868(auStack_548,uStack_530);
        }
        FUN_103250620();
      }
      else {
        func_0x00010322b5bc(param_5,uStack_790,lStack_788);
        puVar4 = auStack_548;
        FUN_10322ba6c(puVar4,param_5);
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(param_5);
        FUN_10322b6cc(lVar5);
        puVar7 = puStack_528;
        uVar8 = uStack_530;
        if (((ulong)puVar4 & 1) == 0) goto LAB_10322d4b8;
        puVar4 = auStack_548;
        func_0x0001000a8868(puVar4,uStack_530);
        lVar5 = lStack_788;
        uVar1 = uStack_790;
        func_0x00010322b5bc(param_5,uStack_790,lStack_788);
        FUN_10322b5f4(lVar5);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_5);
        FUN_10322b6cc(lVar5);
        puVar2 = puStack_528;
        uVar1 = uStack_530;
        if (lVar5 == 0xb) {
          func_0x0001000a8868(auStack_548,uStack_530);
          (**(code **)(puVar2 + 0x30))(auStack_4b0,uVar1,puVar2);
          lVar12 = lStack_3e0;
          FUN_103202330(lStack_3e0);
          func_0x00010322ed34(auStack_4b0);
          lVar5 = 0;
          if (lVar12 != 1) {
            lVar5 = lVar12;
          }
        }
        FUN_103250620(puVar4,puStack_7b0,uStack_77c & 1,lVar5,1,1,uVar8,puVar7);
        func_0x00010321d6b8(lVar5);
      }
LAB_10322d3a4:
      func_0x0001000834e4(auStack_548);
      lVar18 = lVar18 + 0x28;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    func_0x000107c6142c(lStack_7e8);
    param_1 = puStack_7d8;
    puVar6 = puStack_7e0;
    puVar17 = puStack_7a8;
  }
  puVar10 = puStack_7c8;
  func_0x00010322ec4c(param_1,&uStack_6e0);
  uVar13 = uStack_798;
  uVar9 = uStack_798;
  FUN_10322e950();
  func_0x00010322ec80(&uStack_6e0);
  if ((uVar9 & 1) != 0) {
    func_0x00010322ecf4(puVar17,0x112f4da60,&UNK_10db9feb0);
    if ((uStack_7b8 & 1) == 0) {
      func_0x00010322ecac(puVar10,puVar17,0x112f4da60,&UNK_10db9feb0);
    }
    else {
      *(undefined8 *)((long)puVar17 + 0x31) = 0;
      *(undefined8 *)((long)puVar17 + 0x29) = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
    }
    func_0x00010322ecac(&uStack_4f0,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
    if (lStack_6c8 == 0) {
      func_0x00010322ecf4(&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
      uStack_6af = 0;
      uStack_6a8 = 0;
      uStack_6b0 = 0;
      lStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0;
      uStack_6b7 = 0;
      uStack_6b6 = 0;
      puStack_6c0 = (undefined1 *)0x0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      puVar11 = &uStack_6e0;
    }
    else {
      uStack_148 = uStack_6d8;
      uStack_150 = uStack_6e0;
      lStack_138 = lStack_6c8;
      uStack_140 = uStack_6d0;
      uStack_128 = uStack_6b8;
      puStack_130 = puStack_6c0;
      uStack_11f = CONCAT17(uStack_6a8,uStack_6af);
      uStack_127 = CONCAT61(uStack_6b6,uStack_6b7);
      uStack_120 = uStack_6b0;
      puVar11 = &uStack_150;
    }
    func_0x00010322eda4(puVar11,puVar10);
  }
  func_0x00010322ecac(puVar17,&uStack_150,0x112f4da60,&UNK_10db9feb0);
  puVar4 = puStack_130;
  lVar16 = lStack_138;
  if (lStack_138 == 0) {
    func_0x00010322ecf4(&uStack_150,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_6b8 = uStack_128;
    puStack_6c0 = puStack_130;
    uStack_6af = (undefined7)uStack_11f;
    uStack_6a8 = (undefined1)((ulong)uStack_11f >> 0x38);
    uStack_6b6 = (undefined6)((uint7)uStack_127 >> 8);
    uStack_6b0 = uStack_120;
    uStack_6d8 = uStack_148;
    uStack_6e0 = uStack_150;
    lStack_6c8 = lStack_138;
    uStack_6d0 = uStack_140;
    uStack_6b7 = 1;
    func_0x0001000a8868(&uStack_6e0,lStack_138);
    pcVar15 = *(code **)(puVar4 + 0x30);
    if (((uint)uVar13 >> 9 & 1) == 0) {
      (*pcVar15)();
      FUN_103202330(lStack_80);
      func_0x00010322ed34(&uStack_150);
      lVar16 = 0;
      if (lStack_80 != 1) {
        lVar16 = lStack_80;
      }
    }
    else {
      (*pcVar15)(&uStack_150,lVar16,puVar4);
      FUN_103202330(lStack_80);
      func_0x00010322ed34(&uStack_150);
      lVar16 = lStack_80;
    }
    func_0x00010321d6b8(CONCAT71(uStack_6af,uStack_6b0));
    uStack_6b0 = (undefined1)lVar16;
    uStack_6af = (undefined7)((ulong)lVar16 >> 8);
    uStack_6b8 = 1;
    func_0x00010322ecf4(puVar17,0x112f4da60,&UNK_10db9feb0);
    func_0x00010322ed68(&uStack_6e0,puVar17);
    FUN_10322b438(&uStack_6e0);
  }
  func_0x00010322ecac(puStack_7b0,&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_6c8 == 0) {
    func_0x00010322b694(param_5,uStack_790,lStack_788);
    func_0x00010322ecf4(&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    func_0x00010322ecf4(&uStack_6e0,0x112f4da60,&UNK_10db9feb0);
    if (param_5 != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        puStack_6c0 = (undefined1 *)0x0;
        uStack_6d8 = 0;
        uStack_6e0 = 0;
        lStack_6c8 = 0;
        uStack_6d0 = 0;
      }
      else {
        FUN_1031ddb84(puVar17,&uStack_6e0);
      }
      uVar8 = uStack_790;
      puVar10 = &uStack_6e0;
      FUN_10322bc0c(puVar10,uStack_790);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(param_5);
      FUN_10322b6cc(lStack_788);
      func_0x00010322ecf4(&uStack_6e0,0x112f4b310,&UNK_10db9fef0);
      if (((ulong)puVar10 & 1) != 0) goto LAB_10322e3c0;
    }
    puVar10 = puStack_7b0;
    func_0x00010322ecf4(puStack_7b0,0x112f4da60,&UNK_10db9feb0);
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x31) = 0;
    *(undefined8 *)((long)puVar10 + 0x29) = 0;
  }
LAB_10322e3c0:
  if (*(long *)(param_1 + 0xe0) == 0) {
    uStack_500 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
  }
  else {
    FUN_1031ddb84(puVar17,&uStack_520);
  }
  func_0x00010322ecac(&uStack_520,auStack_720,0x112f4b310,&UNK_10db9fef0);
  lVar18 = lStack_700;
  lVar16 = lStack_708;
  if (lStack_708 == 0) {
    func_0x00010322ecf4(auStack_720,0x112f4b310,&UNK_10db9fef0);
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    lStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6c0 = (undefined1 *)0x0;
LAB_10322e524:
    func_0x00010322ecf4(&uStack_6e0,0x112f4daa0,&UNK_10dba00d8);
  }
  else {
    func_0x0001000a8868(auStack_720,lStack_708);
    pcVar15 = *(code **)(lVar18 + 0x28);
    lVar12 = 0;
    func_0x000107c614b8(0,lVar18,lVar16,&UNK_10e804840,&UNK_10e804858);
    lVar5 = lVar18;
    lStack_6c8 = lVar12;
    func_0x000107c614b4(lVar18,lVar16,lVar12,&UNK_10e804840,&UNK_10e804850);
    puVar17 = &uStack_6e0;
    puStack_6c0 = (undefined1 *)lVar5;
    func_0x0001000c5db4(puVar17);
    (*pcVar15)(puVar17,lVar16,lVar18);
    func_0x0001000834e4(auStack_720);
    if (lStack_6c8 == 0) goto LAB_10322e524;
    uVar8 = 0x112f4daa8;
    func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
    puVar4 = auStack_720;
    func_0x000107c6147c(puVar4,&uStack_6e0,uVar8,&UNK_11076af50,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010322ecf4(&uStack_520,0x112f4b310,&UNK_10db9fef0);
      func_0x00010322ecf4(&uStack_4f0,0x112f4da60,&UNK_10db9feb0);
      func_0x000107c6142c(uStack_718);
      return;
    }
  }
  func_0x00010322ecac(&uStack_520,auStack_720,0x112f4b310,&UNK_10db9fef0);
  lVar18 = lStack_700;
  lVar16 = lStack_708;
  if (lStack_708 == 0) {
    func_0x00010322ecf4(&uStack_520,0x112f4b310,&UNK_10db9fef0);
    func_0x00010322ecf4(&uStack_4f0,0x112f4da60,&UNK_10db9feb0);
    func_0x00010322ecf4(auStack_720,0x112f4b310,&UNK_10db9fef0);
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    lStack_6c8 = 0;
    uStack_6d0 = 0;
    puStack_6c0 = (undefined1 *)0x0;
LAB_10322e764:
    uVar8 = 0x112f4daa0;
    puVar14 = &UNK_10dba00d8;
    puVar17 = &uStack_6e0;
  }
  else {
    func_0x0001000a8868(auStack_720,lStack_708);
    pcVar15 = *(code **)(lVar18 + 0x28);
    lVar12 = 0;
    func_0x000107c614b8(0,lVar18,lVar16,&UNK_10e804840,&UNK_10e804858);
    lVar5 = lVar18;
    lStack_6c8 = lVar12;
    func_0x000107c614b4(lVar18,lVar16,lVar12,&UNK_10e804840,&UNK_10e804850);
    puVar17 = &uStack_6e0;
    puStack_6c0 = (undefined1 *)lVar5;
    func_0x0001000c5db4(puVar17);
    (*pcVar15)(puVar17,lVar16,lVar18);
    func_0x0001000834e4(auStack_720);
    if (lStack_6c8 == 0) {
      func_0x00010322ecf4(&uStack_520,0x112f4b310,&UNK_10db9fef0);
      func_0x00010322ecf4(&uStack_4f0,0x112f4da60,&UNK_10db9feb0);
      goto LAB_10322e764;
    }
    uVar8 = 0x112f4daa8;
    func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
    puVar4 = auStack_720;
    func_0x000107c6147c(puVar4,&uStack_6e0,uVar8,&UNK_11076b850,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000107c6142c(uStack_718);
      func_0x00010322ecac(&uStack_520,auStack_720,0x112f4b310,&UNK_10db9fef0);
      lVar16 = lStack_708;
      if (lStack_708 != 0) {
        func_0x0001000a8868(auStack_720,lStack_708);
        (**(code **)(lStack_700 + 0x30))(&uStack_6e0,lVar16,lStack_700);
        FUN_103202330(uStack_610);
        func_0x00010322ed34(&uStack_6e0);
        func_0x0001000834e4(auStack_720);
        uVar13 = uStack_610;
        func_0x0001044109f4(uStack_610,3);
        func_0x00010321d6b8(uStack_610);
        func_0x00010322ecf4(&uStack_520,0x112f4b310,&UNK_10db9fef0);
        func_0x00010322ecf4(&uStack_4f0,0x112f4da60,&UNK_10db9feb0);
        if ((uVar13 & 1) != 0) {
          return;
        }
        goto LAB_10322e7dc;
      }
      func_0x00010322ecf4(auStack_720,0x112f4b310,&UNK_10db9fef0);
    }
    func_0x00010322ecf4(&uStack_520,0x112f4b310,&UNK_10db9fef0);
    uVar8 = 0x112f4da60;
    puVar14 = &UNK_10db9feb0;
    puVar17 = &uStack_4f0;
  }
  func_0x00010322ecf4(puVar17,uVar8,puVar14);
LAB_10322e7dc:
  func_0x00010322ecac(puVar6,auStack_720,0x112f4da60,&UNK_10db9feb0);
  func_0x00010322ecf4(auStack_720,0x112f4da60,&UNK_10db9feb0);
  if (lStack_708 != 0) {
    func_0x00010322ecf4(puVar6,0x112f4da60,&UNK_10db9feb0);
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x31) = 0;
    *(undefined8 *)((long)puVar6 + 0x29) = 0;
  }
  return;
}



/* Entry: 10322e860; end: 10322e94f;  */

void FUN_10322e860(undefined8 *param_1)

{
  char *unaff_x20;
  
  if (*unaff_x20 == '\x01') {
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  func_0x00010322ecac(unaff_x20 + 0x48,param_1,0x112f4da60,&UNK_10db9feb0);
  return;
}



/* Entry: 10322e950; end: 10322eb47;  */

uint FUN_10322e950(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  char *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_6f;
  
  if (*unaff_x20 == '\x01') {
    uStack_af = 0;
    uStack_b0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    lStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010322ecac(unaff_x20 + 0x88,&uStack_e0,0x112f4da60,&UNK_10db9feb0);
    lVar4 = lStack_c8;
    if (lStack_c8 != 0) {
      lStack_88 = lStack_c8;
      uStack_90 = uStack_d0;
      lStack_80 = lStack_c0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_6f = uStack_af;
      func_0x0001000a8868(&uStack_a0,lStack_c8);
      lVar2 = 0;
      func_0x000107c614b8(0,lStack_c0,lVar4,&UNK_10e804840,&UNK_10e804858);
      lVar7 = *(long *)(lVar2 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uVar6 = (long)&uStack_e0 - extraout_x8;
      (**(code **)(lStack_c0 + 0x28))(uVar6,lVar4,lStack_c0);
      lVar3 = lStack_c0;
      func_0x000107c614b4(lStack_c0,lVar4,lVar2,&UNK_10e804840,&UNK_10e804850);
      lVar4 = lVar3;
      func_0x00010322b1e0();
      uVar5 = uVar6;
      FUN_10322b46c(uVar6,lVar2,&UNK_11076b5d0,lVar3,lVar4);
      (**(code **)(lVar7 + 8))(uVar6,lVar2);
      if ((uVar5 & 1) != 0) {
        FUN_10322b438(&uStack_a0);
        return 0;
      }
      func_0x00010322ecac(unaff_x20 + 200,&uStack_e0,0x112f4da60,&UNK_10db9feb0);
      func_0x00010322ecf4(&uStack_e0,0x112f4da60,&UNK_10db9feb0);
      uVar1 = 0;
      if (lStack_c8 == 0) {
        uVar1 = (uint)(param_1 >> 1) & 1;
      }
      FUN_10322b438(&uStack_a0);
      return uVar1;
    }
  }
  func_0x00010322ecf4(&uStack_e0,0x112f4da60,&UNK_10db9feb0);
  return 0;
}



/* Entry: 10322eb48; end: 10322ebf3;  */

long FUN_10322eb48(long param_1)

{
  undefined *puVar1;
  
  FUN_103230884();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 0xd;
  *(undefined8 *)(param_1 + 0x10) = 6;
  puVar1 = &UNK_10dba00e8;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &UNK_10dba0108;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = &UNK_10dba0128;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x30) = puVar1;
  puVar1 = &UNK_10dba0150;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x38) = puVar1;
  puVar1 = &UNK_10dba0178;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x40) = puVar1;
  puVar1 = &UNK_10dba01a0;
  func_0x000107c614e0();
  *(undefined **)(param_1 + 0x48) = puVar1;
  return param_1;
}



/* Entry: 10322ebf4; end: 10322ec07;  */

void FUN_10322ebf4(void)

{
  FUN_10322eb48();
  return;
}



/* Entry: 10322ec08; end: 10322ec17;  */

uint FUN_10322ec08(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  uVar4 = 0x112f4da60;
  uStack_70 = param_2;
  lStack_68 = param_3;
  uStack_60 = param_1;
  func_0x00010002969c(0x112f4da60,&UNK_10db9feb0);
  uVar3 = 0xff;
  func_0x000107c606f0(0xff,param_2,uVar4);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  uVar1 = 0;
  func_0x000107c5fc18(FUN_10324b3c4,auStack_80,uVar4,puVar5);
  func_0x000107c6142c(uVar2);
  return uVar1 & 1;
}



/* Entry: 10322ec18; end: 10322ee43;  */

undefined8 FUN_10322ec18(undefined8 param_1)

{
  (*(code *)&DAT_10441524c)();
  return param_1;
}



/* Entry: 10322ee44; end: 10322f207;  */

void FUN_10322ee44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_180 [88];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined6 uStack_11e;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  long lStack_80;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x1a;
  *(undefined8 *)(lVar1 + 0x10) = 0xd;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076acd0;
  lVar2 = lVar1;
  FUN_10322afa0();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x654d6e6f69746361;
  *(undefined8 *)(lVar1 + 0x28) = 0xea0000000000756e;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076ad50;
  func_0x00010322afe0();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x656d686361747461;
  *(undefined8 *)(lVar1 + 0x50) = 0xea0000000000746e;
  *(undefined **)(lVar1 + 0x88) = &UNK_11076ac50;
  func_0x00010322b020();
  *(long *)(lVar1 + 0x90) = lVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0x6172656d6163;
  *(undefined8 *)(lVar1 + 0x78) = 0xe600000000000000;
  *(undefined1 *)(lVar1 + 0x80) = 0;
  *(undefined **)(lVar1 + 0xb0) = &UNK_11076af50;
  func_0x00010322b060();
  *(long *)(lVar1 + 0xb8) = lVar2;
  *(undefined8 *)(lVar1 + 0x98) = 0x74616863;
  *(undefined8 *)(lVar1 + 0xa0) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0xd8) = &UNK_11076b050;
  func_0x00010322b0a0();
  *(long *)(lVar1 + 0xe0) = lVar2;
  *(undefined8 *)(lVar1 + 0xc0) = 0x6563634174616863;
  *(undefined8 *)(lVar1 + 200) = 0xed000079726f7373;
  *(undefined **)(lVar1 + 0x100) = &UNK_11076b0d0;
  func_0x00010322b0e0();
  *(long *)(lVar1 + 0x108) = lVar2;
  *(undefined8 *)(lVar1 + 0xe8) = 0x747865746e6f63;
  *(undefined8 *)(lVar1 + 0xf0) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x128) = &UNK_11076b450;
  func_0x00010322b120();
  *(long *)(lVar1 + 0x130) = lVar2;
  *(undefined8 *)(lVar1 + 0x110) = 0x696472616f626e6f;
  *(undefined8 *)(lVar1 + 0x118) = 0xea0000000000676e;
  *(undefined **)(lVar1 + 0x150) = &UNK_11076b550;
  func_0x00010322b160();
  *(long *)(lVar1 + 0x158) = lVar2;
  *(undefined8 *)(lVar1 + 0x138) = 0x656c69666f7270;
  *(undefined8 *)(lVar1 + 0x140) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x178) = &UNK_11076afd0;
  func_0x00010322b1a0();
  *(long *)(lVar1 + 0x180) = lVar2;
  *(undefined8 *)(lVar1 + 0x160) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x168) = 0x800000010f131200;
  *(undefined **)(lVar1 + 0x1a0) = &UNK_11076b5d0;
  func_0x00010322b1e0();
  *(long *)(lVar1 + 0x1a8) = lVar2;
  *(undefined8 *)(lVar1 + 0x188) = 0x6e616373;
  *(undefined8 *)(lVar1 + 400) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0x1c8) = &UNK_11076b650;
  func_0x00010322b220();
  *(long *)(lVar1 + 0x1d0) = lVar2;
  *(undefined8 *)(lVar1 + 0x1b0) = 0x6572616873;
  *(undefined8 *)(lVar1 + 0x1b8) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0x1f0) = &UNK_11076b850;
  func_0x00010322b260();
  *(long *)(lVar1 + 0x1f8) = lVar2;
  *(undefined8 *)(lVar1 + 0x1d8) = 0x746e656d6d6f63;
  *(undefined8 *)(lVar1 + 0x1e0) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x218) = &UNK_11076bbd0;
  func_0x00010322b2a0();
  *(long *)(lVar1 + 0x220) = lVar2;
  *(undefined8 *)(lVar1 + 0x200) = 0x6853746365726964;
  *(undefined8 *)(lVar1 + 0x208) = 0xeb00000000657261;
  uStack_f5 = (undefined1)param_12;
  uStack_f4 = param_12._1_1_;
  uStack_f3 = param_12._2_1_;
  uStack_f2 = param_12._3_1_;
  uStack_f0 = param_14;
  uStack_e8 = param_15;
  uStack_e0 = 0;
  uStack_9d = (undefined1)param_12;
  uStack_98 = param_14;
  uStack_90 = param_15;
  uStack_88 = 0;
  uStack_128 = param_2;
  uStack_120 = param_4;
  uStack_11f = param_5;
  uStack_118 = param_6;
  uStack_110 = param_3;
  uStack_108 = param_7;
  uStack_100 = param_8;
  uStack_f8 = param_9;
  uStack_f7 = param_10;
  uStack_f6 = param_11;
  lStack_d8 = lVar1;
  uStack_d0 = param_2;
  uStack_c8 = param_4;
  uStack_c7 = param_5;
  uStack_c0 = param_6;
  uStack_b8 = param_3;
  uStack_b0 = param_7;
  uStack_a8 = param_8;
  uStack_a0 = param_9;
  uStack_9f = param_10;
  uStack_9e = param_11;
  lStack_80 = lVar1;
  FUN_10322f208(&uStack_128,auStack_180);
  func_0x00010322f23c(&uStack_d0);
  param_1[5] = uStack_100;
  param_1[4] = uStack_108;
  param_1[7] = uStack_f0;
  param_1[6] = CONCAT17(uStack_f1,
                        CONCAT16(uStack_f2,
                                 CONCAT15(uStack_f3,
                                          CONCAT14(uStack_f4,
                                                   CONCAT13(uStack_f5,
                                                            CONCAT12(uStack_f6,
                                                                     CONCAT11(uStack_f7,uStack_f8)))
                                                  ))));
  param_1[9] = CONCAT62(uStack_de,uStack_e0);
  param_1[8] = uStack_e8;
  param_1[10] = lStack_d8;
  param_1[1] = CONCAT62(uStack_11e,CONCAT11(uStack_11f,uStack_120));
  *param_1 = uStack_128;
  param_1[3] = uStack_110;
  param_1[2] = uStack_118;
  return;
}



/* Entry: 10322f208; end: 10322f26b;  */

undefined8 FUN_10322f208(undefined8 param_1,undefined8 param_2)

{
  func_0x0001032305cc(param_2,param_1,&UNK_110628f30);
  return param_2;
}



/* Entry: 10322f26c; end: 1032304b7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322f26c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  double *pdVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  byte bVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *unaff_x20;
  ulong uVar26;
  long lVar27;
  code *pcVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_100 [40];
  undefined8 *******apppppppuStack_d8 [3];
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  
  uVar24 = unaff_x20[2];
  if ((long)uVar24 < 0x14) {
    if (uVar24 != 0xf) {
      if (uVar24 != 0x10) goto LAB_10322f358;
      goto LAB_10322f33c;
    }
LAB_10322f2e4:
    if ((*(byte *)((long)unaff_x20 + 0x34) & 1) == 0) {
      if ((*(byte *)((long)unaff_x20 + 0x35) & 1) == 0) {
        if ((uVar24 < 0x15) && ((1L << (uVar24 & 0x3f) & 0x118000U) != 0)) {
          bVar4 = *(byte *)((long)unaff_x20 + 0x31);
          bVar21 = *(byte *)((long)unaff_x20 + 0x33);
          if (uVar24 == 0xf) {
            bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
            if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
              if ((bVar4 & 1) == 0) {
                uVar22 = 0x307;
                if (bVar6) {
                  uVar22 = 0x207;
                }
                uVar26 = 7;
                uVar23 = 0x107;
              }
              else {
                uVar22 = 0x387;
                if (bVar6) {
                  uVar22 = 0x287;
                }
                uVar26 = 0x87;
                uVar23 = 0x187;
              }
            }
            else if ((bVar4 & 1) == 0) {
              uVar22 = 0x327;
              if (bVar6) {
                uVar22 = 0x227;
              }
              uVar26 = 0x27;
              uVar23 = 0x127;
            }
            else {
              uVar22 = 0x3a7;
              if (bVar6) {
                uVar22 = 0x2a7;
              }
              uVar26 = 0xa7;
              uVar23 = 0x1a7;
            }
            if (bVar6) {
              uVar23 = uVar26;
            }
            uVar26 = 1;
            if ((bVar21 & 1) == 0) {
              lVar27 = 0;
              lStack_128 = 0;
              lStack_120 = 0;
              goto LAB_10322fb38;
            }
            goto LAB_10322f8c0;
          }
          bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
          if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
            if ((bVar4 & 1) == 0) {
              uVar22 = 0xb07;
              if (bVar6) {
                uVar22 = 0xa07;
              }
              uVar26 = 0x807;
              uVar23 = 0x907;
            }
            else {
              uVar22 = 0xb87;
              if (bVar6) {
                uVar22 = 0xa87;
              }
              uVar26 = 0x887;
              uVar23 = 0x987;
            }
          }
          else if ((bVar4 & 1) == 0) {
            uVar22 = 0xb27;
            if (bVar6) {
              uVar22 = 0xa27;
            }
            uVar26 = 0x827;
            uVar23 = 0x927;
          }
          else {
            uVar22 = 0xba7;
            if (bVar6) {
              uVar22 = 0xaa7;
            }
            uVar26 = 0x8a7;
            uVar23 = 0x9a7;
          }
        }
        else {
          bVar21 = *(byte *)((long)unaff_x20 + 0x33);
          bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
          if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
            if ((*(byte *)((long)unaff_x20 + 0x31) & 1) == 0) {
              uVar22 = 0xb02;
              if (bVar6) {
                uVar22 = 0xa02;
              }
              uVar26 = 0x802;
              uVar23 = 0x902;
            }
            else {
              uVar22 = 0xb82;
              if (bVar6) {
                uVar22 = 0xa82;
              }
              uVar26 = 0x882;
              uVar23 = 0x982;
            }
          }
          else if ((*(byte *)((long)unaff_x20 + 0x31) & 1) == 0) {
            uVar22 = 0xb22;
            if (bVar6) {
              uVar22 = 0xa22;
            }
            uVar26 = 0x822;
            uVar23 = 0x922;
          }
          else {
            uVar22 = 0xba2;
            if (bVar6) {
              uVar22 = 0xaa2;
            }
            uVar26 = 0x8a2;
            uVar23 = 0x9a2;
          }
        }
        if (bVar6) {
          uVar23 = uVar26;
        }
        uVar26 = 1;
        if ((bVar21 & 1) != 0) goto LAB_10322f8c0;
      }
      else {
        if (uVar24 < 0x15 && (1L << (uVar24 & 0x3f) & 0x118000U) != 0) {
          bVar4 = *(byte *)((long)unaff_x20 + 0x31);
          bVar21 = *(byte *)((long)unaff_x20 + 0x33);
          if (uVar24 == 0xf) {
            bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
            if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
              if ((bVar4 & 1) == 0) {
                uVar22 = 0x307;
                if (bVar6) {
                  uVar22 = 0x207;
                }
                uVar26 = 7;
                uVar23 = 0x107;
              }
              else {
                uVar22 = 0x387;
                if (bVar6) {
                  uVar22 = 0x287;
                }
                uVar26 = 0x87;
                uVar23 = 0x187;
              }
            }
            else if ((bVar4 & 1) == 0) {
              uVar22 = 0x327;
              if (bVar6) {
                uVar22 = 0x227;
              }
              uVar26 = 0x27;
              uVar23 = 0x127;
            }
            else {
              uVar22 = 0x3a7;
              if (bVar6) {
                uVar22 = 0x2a7;
              }
              uVar26 = 0xa7;
              uVar23 = 0x1a7;
            }
          }
          else {
            bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
            if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
              if ((bVar4 & 1) == 0) {
                uVar22 = 0xb07;
                if (bVar6) {
                  uVar22 = 0xa07;
                }
                uVar26 = 0x807;
                uVar23 = 0x907;
              }
              else {
                uVar22 = 0xb87;
                if (bVar6) {
                  uVar22 = 0xa87;
                }
                uVar26 = 0x887;
                uVar23 = 0x987;
              }
            }
            else if ((bVar4 & 1) == 0) {
              uVar22 = 0xb27;
              if (bVar6) {
                uVar22 = 0xa27;
              }
              uVar26 = 0x827;
              uVar23 = 0x927;
            }
            else {
              uVar22 = 0xba7;
              if (bVar6) {
                uVar22 = 0xaa7;
              }
              uVar26 = 0x8a7;
              uVar23 = 0x9a7;
            }
          }
        }
        else {
          bVar21 = *(byte *)((long)unaff_x20 + 0x33);
          bVar6 = (*(byte *)((long)unaff_x20 + 0x32) & 1) == 0;
          if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
            if ((*(byte *)((long)unaff_x20 + 0x31) & 1) == 0) {
              uVar22 = 0xb02;
              if (bVar6) {
                uVar22 = 0xa02;
              }
              uVar26 = 0x802;
              uVar23 = 0x902;
            }
            else {
              uVar22 = 0xb82;
              if (bVar6) {
                uVar22 = 0xa82;
              }
              uVar26 = 0x882;
              uVar23 = 0x982;
            }
          }
          else if ((*(byte *)((long)unaff_x20 + 0x31) & 1) == 0) {
            uVar22 = 0xb22;
            if (bVar6) {
              uVar22 = 0xa22;
            }
            uVar26 = 0x822;
            uVar23 = 0x922;
          }
          else {
            uVar22 = 0xba2;
            if (bVar6) {
              uVar22 = 0xaa2;
            }
            uVar26 = 0x8a2;
            uVar23 = 0x9a2;
          }
        }
        if (bVar6) {
          uVar23 = uVar26;
        }
        uVar26 = 0x10;
        if ((bVar21 & 1) != 0) goto LAB_10322f8c0;
        uVar23 = uVar23 | 0x400;
      }
      goto LAB_10322f8cc;
    }
    if (0x14 < uVar24 || (1L << (uVar24 & 0x3f) & 0x118000U) == 0) {
      bVar21 = *(byte *)((long)unaff_x20 + 0x32);
      bVar4 = *(byte *)((long)unaff_x20 + 0x33);
      if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
        if ((*(byte *)((long)unaff_x20 + 0x31) & 1) == 0) {
          if ((bVar21 & 1) == 0) {
            if ((bVar4 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x802;
              goto joined_r0x000103230474;
            }
            uVar26 = 8;
            uVar22 = 0xa02;
          }
          else {
            if ((bVar4 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x902;
joined_r0x000103230474:
              uVar26 = 8;
              goto joined_r0x000103230424;
            }
            uVar26 = 8;
            uVar22 = 0xb02;
          }
        }
        else if ((bVar21 & 1) == 0) {
          if ((bVar4 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x882;
            goto joined_r0x000103230488;
          }
          uVar26 = 8;
          uVar22 = 0xa82;
        }
        else {
          if ((bVar4 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x982;
            goto joined_r0x000103230488;
          }
          uVar26 = 8;
          uVar22 = 0xb82;
        }
LAB_10322f8c0:
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = uVar22;
      }
      else {
        if ((*(byte *)((long)unaff_x20 + 0x31) & 1) != 0) {
          if ((bVar21 & 1) == 0) {
            if ((bVar4 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x8a2;
              goto joined_r0x000103230474;
            }
            uVar26 = 8;
            uVar22 = 0xaa2;
          }
          else {
            if ((bVar4 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x9a2;
              goto joined_r0x000103230424;
            }
            uVar26 = 8;
            uVar22 = 0xba2;
          }
          goto LAB_10322f8c0;
        }
        if ((bVar21 & 1) == 0) {
          if ((bVar4 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x822;
            goto joined_r0x000103230488;
          }
          uVar26 = 8;
          uVar22 = 0xa22;
          goto LAB_10322f8c0;
        }
        if ((bVar4 & 1) != 0) {
          uVar26 = 8;
          uVar22 = 0xb22;
          goto LAB_10322f8c0;
        }
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = 0x922;
joined_r0x000103230488:
        uVar26 = 8;
      }
joined_r0x000103230424:
      if ((bVar21 & 1) == 0) goto LAB_10322f8cc;
LAB_10322f8c8:
      uVar23 = uVar23 | 0x400;
      goto LAB_10322f8cc;
    }
    bVar21 = *(byte *)((long)unaff_x20 + 0x31);
    bVar4 = *(byte *)((long)unaff_x20 + 0x32);
    bVar5 = *(byte *)((long)unaff_x20 + 0x33);
    if (uVar24 != 0xf) {
      if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
        if ((bVar21 & 1) == 0) {
          if ((bVar4 & 1) == 0) {
            if ((bVar5 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x807;
              goto joined_r0x000103230474;
            }
            uVar26 = 8;
            uVar22 = 0xa07;
          }
          else {
            if ((bVar5 & 1) == 0) {
              bVar21 = *(byte *)((long)unaff_x20 + 0x35);
              uVar23 = 0x907;
              goto joined_r0x000103230424;
            }
            uVar26 = 8;
            uVar22 = 0xb07;
          }
        }
        else if ((bVar4 & 1) == 0) {
          if ((bVar5 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x887;
            goto joined_r0x000103230424;
          }
          uVar26 = 8;
          uVar22 = 0xa87;
        }
        else {
          if ((bVar5 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x987;
joined_r0x000103230424:
            uVar26 = 8;
            goto joined_r0x000103230424;
          }
          uVar26 = 8;
          uVar22 = 0xb87;
        }
      }
      else if ((bVar21 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          if ((bVar5 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x827;
            goto joined_r0x000103230424;
          }
          uVar26 = 8;
          uVar22 = 0xa27;
        }
        else {
          if ((bVar5 & 1) == 0) {
            bVar21 = *(byte *)((long)unaff_x20 + 0x35);
            uVar23 = 0x927;
            goto joined_r0x000103230488;
          }
          uVar26 = 8;
          uVar22 = 0xb27;
        }
      }
      else if ((bVar4 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          bVar21 = *(byte *)((long)unaff_x20 + 0x35);
          uVar23 = 0x8a7;
          goto joined_r0x000103230488;
        }
        uVar26 = 8;
        uVar22 = 0xaa7;
      }
      else {
        if ((bVar5 & 1) == 0) {
          bVar21 = *(byte *)((long)unaff_x20 + 0x35);
          uVar23 = 0x9a7;
          goto joined_r0x000103230474;
        }
        uVar26 = 8;
        uVar22 = 0xba7;
      }
      goto LAB_10322f8c0;
    }
    if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
      if ((bVar21 & 1) == 0) {
        if ((bVar4 & 1) == 0) {
          if ((bVar5 & 1) != 0) {
            uVar26 = 8;
            uVar22 = 0x207;
            goto LAB_10322f8c0;
          }
          bVar21 = *(byte *)((long)unaff_x20 + 0x35);
          uVar23 = 7;
        }
        else {
          if ((bVar5 & 1) != 0) {
            uVar26 = 8;
            uVar22 = 0x307;
            goto LAB_10322f8c0;
          }
          bVar21 = *(byte *)((long)unaff_x20 + 0x35);
          uVar23 = 0x107;
        }
      }
      else if ((bVar4 & 1) == 0) {
        if ((bVar5 & 1) != 0) {
          uVar26 = 8;
          uVar22 = 0x287;
          goto LAB_10322f8c0;
        }
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = 0x87;
      }
      else {
        if ((bVar5 & 1) != 0) {
          uVar26 = 8;
          uVar22 = 0x387;
          goto LAB_10322f8c0;
        }
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = 0x187;
      }
      goto joined_r0x00010322fb2c;
    }
    if ((bVar21 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        if ((bVar5 & 1) != 0) {
          uVar26 = 8;
          uVar22 = 0x227;
          goto LAB_10322f8c0;
        }
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = 0x27;
      }
      else {
        if ((bVar5 & 1) != 0) {
          uVar26 = 8;
          uVar22 = 0x327;
          goto LAB_10322f8c0;
        }
        bVar21 = *(byte *)((long)unaff_x20 + 0x35);
        uVar23 = 0x127;
      }
    }
    else if ((bVar4 & 1) == 0) {
      if ((bVar5 & 1) != 0) {
        uVar26 = 8;
        uVar22 = 0x2a7;
        goto LAB_10322f8c0;
      }
      bVar21 = *(byte *)((long)unaff_x20 + 0x35);
      uVar23 = 0xa7;
    }
    else {
      if ((bVar5 & 1) != 0) {
        uVar26 = 8;
        uVar22 = 0x3a7;
        goto LAB_10322f8c0;
      }
      bVar21 = *(byte *)((long)unaff_x20 + 0x35);
      uVar23 = 0x1a7;
    }
joined_r0x00010322fb2c:
    uVar26 = 8;
    if ((bVar21 & 1) != 0) goto LAB_10322f8c8;
  }
  else {
    if (uVar24 == 0x18) {
LAB_10322f33c:
      bVar21 = *(byte *)((long)unaff_x20 + 9);
      uVar22 = 0x807;
      uVar23 = 0x827;
    }
    else {
      if (uVar24 == 0x14) goto LAB_10322f2e4;
LAB_10322f358:
      bVar21 = *(byte *)((long)unaff_x20 + 9);
      if (uVar24 == 0xf) {
        lVar27 = 0;
        lStack_128 = 0;
        lStack_120 = 0;
        uVar23 = 0x22;
        if ((bVar21 & 1) == 0) {
          uVar23 = 2;
        }
        uVar26 = 1;
        goto LAB_10322fb38;
      }
      uVar22 = 0x802;
      uVar23 = 0x822;
    }
    if ((bVar21 & 1) == 0) {
      uVar23 = uVar22;
    }
    uVar26 = 1;
LAB_10322f8cc:
    lVar27 = 0;
    if ((0x1e < uVar24) || ((1L << (uVar24 & 0x3f) & 0x62000000U) == 0)) {
      lStack_128 = 0;
      lStack_120 = 0;
      goto LAB_10322fb38;
    }
    uVar23 = uVar23 | 0x3044;
    if (((*(int *)(unaff_x20 + 8) == 0x65) && (lVar25 = unaff_x20[7], lVar25 != 0)) &&
       (lVar27 = lVar25, func_0x000107c4d174(lVar25,param_3,1), (int)lVar27 != 0)) {
      lStack_120 = 0x112f4d830;
      func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
      lVar27 = lStack_120;
      func_0x000107c613fc();
      *(undefined8 *)(lVar27 + 0x18) = 2;
      *(undefined8 *)(lVar27 + 0x10) = 1;
      *(undefined **)(lVar27 + 0x38) = &UNK_11076b650;
      lVar7 = lVar27;
      func_0x00010322b220();
      *(long *)(lVar27 + 0x40) = lVar7;
      *(undefined8 *)(lVar27 + 0x20) = 0x6572616873;
      *(undefined8 *)(lVar27 + 0x28) = 0xe500000000000000;
      func_0x000107c613fc(lStack_120,0x48,7);
      *(undefined8 *)(lStack_120 + 0x18) = 2;
      *(undefined8 *)(lStack_120 + 0x10) = 1;
      *(undefined **)(lStack_120 + 0x38) = &UNK_11076bbd0;
      lVar7 = lStack_120;
      func_0x00010322b2a0();
      *(long *)(lStack_120 + 0x40) = lVar7;
      *(undefined8 *)(lStack_120 + 0x20) = 0x6853746365726964;
      *(undefined8 *)(lStack_120 + 0x28) = 0xeb00000000657261;
      func_0x000107c4d178();
      lStack_128 = 2;
      if ((int)lVar25 != 0) {
        uVar26 = uVar26 | 4;
      }
      goto LAB_10322fb38;
    }
  }
  lVar27 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
LAB_10322fb38:
  if (((uVar24 == 0x14 || uVar24 == 0xf) & *(byte *)((long)unaff_x20 + 0x36)) == 0) {
    dStack_a8 = (double)unaff_x20[3];
    if (dStack_a8 <= 0.0) {
      dStack_a8 = 0.0;
      uStack_a0 = 1;
    }
    else {
      uStack_a0 = 0;
    }
  }
  else {
    dStack_a8 = 0.0;
    uStack_a0 = 0;
  }
  auStack_b0[0] = *(undefined1 *)(unaff_x20 + 1);
  puStack_98 = &UNK_11062c140;
  ppuStack_90 = &PTR_DAT_11062c0c8;
  FUN_1032304d4(auStack_b0,apppppppuStack_d8);
  uVar8 = 0;
  FUN_10324f680();
  func_0x000107c613fc();
  pppppppuVar9 = apppppppuStack_d8;
  FUN_10324f14c();
  uVar20 = *unaff_x20;
  ppuStack_b8 = &PTR_DAT_11062b7d8;
  lVar10 = 0;
  apppppppuStack_d8[0] = pppppppuVar9;
  uStack_c0 = uVar8;
  func_0x00010322b2e0();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar25 = _DAT_112f4d8a0;
  uVar31 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8;
  uVar32 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8);
  uVar33 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10);
  uVar34 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18);
  func_0x000103258af0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(pppppppuVar9);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  lVar7 = lVar27;
  func_0x00010322b5bc(lVar27,lStack_120,lStack_128);
  func_0x000103258a9c(uVar31,uVar32,uVar33,uVar34);
  *(long *)(lVar11 + lVar25) = lVar7;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d8b8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 1;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x179) = 0;
  *(undefined8 *)((long)puVar1 + 0x171) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d8c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar25 = lVar11 + _DAT_112f4d8c8;
  *(undefined8 *)(lVar25 + 8) = 0;
  func_0x000107c61614(lVar25,0);
  lVar7 = _DAT_112f4d8d0;
  uVar12 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar11 + lVar7) = uVar12;
  *(undefined8 *)(lVar11 + _DAT_112f4d8f8) = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d900);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d908);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d910);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d918);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d920);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d928);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar11 + _DAT_112f4d930) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f4d938) = 0;
  *(undefined8 *)(lVar25 + 8) = param_3;
  func_0x000107c61604(lVar25,param_2);
  FUN_1032304d4(apppppppuStack_d8,auStack_100);
  func_0x000107c613fc(uVar8,0x40,7);
  puVar13 = auStack_100;
  FUN_10324f14c();
  *(undefined1 **)(lVar11 + _DAT_112f4d8b0) = puVar13;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f4d8a8);
  *puVar1 = uVar20;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(ulong *)(lVar11 + _DAT_112f4d8e0) = uVar23;
  *(ulong *)(lVar11 + _DAT_112f4d8e8) = uVar26;
  plVar2 = (long *)(lVar11 + _DAT_112f4d8f0);
  *plVar2 = lVar27;
  plVar2[1] = lStack_120;
  plVar2[2] = lStack_128;
  lVar14 = 0;
  FUN_103255900();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(long *)(lVar11 + _DAT_112f4d8d8) = lVar14;
  func_0x000103258a9c(uVar31,uVar32,uVar33,uVar34);
  func_0x000107c61180();
  func_0x000107c61174();
  pcVar15 = FUN_1032288a0;
  func_0x0001000bfde0(FUN_1032288a0,0,&UNK_11062b990);
  pcVar28 = pcVar15;
  FUN_103230518();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar15);
  puVar19 = &UNK_110628eb0;
  func_0x000107c613fc(&UNK_110628eb0,0x18,7);
  func_0x000107c61614(puVar19 + 0x10,lVar14);
  func_0x000107c61170(lVar14);
  pcVar15 = FUN_103230558;
  puVar16 = puVar19;
  (**(code **)(*(long *)pcVar28 + 0x60))();
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(puVar19);
  func_0x000107c614f0();
  uVar8 = *(undefined8 *)(lVar14 + _DAT_112f4d8d0);
  pcVar28 = *(code **)(puVar16 + 0x10);
  func_0x000107c6157c(uVar8);
  (*pcVar28)();
  func_0x000107c615e8(pcVar15);
  func_0x000107c61574(uVar8);
  lVar7 = _DAT_112f4d8d8;
  func_0x000107c5a050(*(undefined8 *)(lVar14 + _DAT_112f4d8d8));
  lVar11 = lVar14;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  lVar25 = _DAT_112f4d8a0;
  func_0x000107c5a050(*(undefined8 *)(lVar11 + _DAT_112f4d8a0));
  func_0x000107c3d89c(*(undefined8 *)(lVar14 + lVar7));
  uVar20 = *(undefined8 *)(lVar14 + lVar7);
  func_0x000107c4ac04();
  func_0x000107c61180();
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar17 = puVar16;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar17 + 0x18) = 0x11;
  *(undefined8 *)(puVar17 + 0x10) = 8;
  uVar12 = *(undefined8 *)(lVar14 + lVar7);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar18 = lVar11;
  func_0x000107c5cbe4(lVar11);
  func_0x000107c61180();
  uVar8 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar18);
  *(undefined8 *)(puVar17 + 0x20) = uVar8;
  uVar12 = *(undefined8 *)(lVar14 + lVar7);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar18 = lVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar8 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar18);
  *(undefined8 *)(puVar17 + 0x28) = uVar8;
  uVar12 = *(undefined8 *)(lVar14 + lVar7);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar18 = lVar11;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar8 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar18);
  *(undefined8 *)(puVar17 + 0x30) = uVar8;
  uVar12 = *(undefined8 *)(lVar14 + lVar7);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar7 = lVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar8 = uVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(puVar17 + 0x38) = uVar8;
  uVar31 = *(undefined8 *)(lVar11 + lVar25);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar12 = uVar20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = uVar31;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar17 + 0x40) = uVar8;
  uVar31 = *(undefined8 *)(lVar11 + lVar25);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar12 = uVar20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar8 = uVar31;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar17 + 0x48) = uVar8;
  uVar31 = *(undefined8 *)(lVar11 + lVar25);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar12 = uVar20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar8 = uVar31;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar17 + 0x50) = uVar8;
  uVar31 = *(undefined8 *)(lVar11 + lVar25);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar12 = uVar20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar8 = uVar31;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(puVar17 + 0x58) = uVar8;
  uVar8 = 0;
  func_0x000100847984();
  puVar19 = puVar17;
  func_0x000107c5fc48(puVar17,uVar8);
  func_0x000107c61574(puVar17);
  func_0x000107c3d048(puVar16);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(lVar11);
  func_0x000107c61574(param_4);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar20);
  func_0x0001000834e4(apppppppuStack_d8);
  if (*(char *)(unaff_x20 + 6) != '\x01') {
    dVar30 = (double)unaff_x20[4];
    dVar29 = (double)unaff_x20[5];
    pdVar3 = (double *)(lVar11 + _DAT_112f4eef0);
    func_0x000107c61428(pdVar3,apppppppuStack_d8,1,0);
    *pdVar3 = -dVar30;
    pdVar3[1] = -12.0;
    pdVar3[2] = -dVar29;
    pdVar3[3] = -12.0;
    FUN_103228718();
  }
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_110628a90;
  func_0x00010322b694(lVar27,lStack_120,lStack_128);
  func_0x000107c61574(pppppppuVar9);
  *param_1 = lVar11;
  func_0x0001000834e4(auStack_b0);
  return;
}



/* Entry: 1032304b8; end: 1032304d3;  */

undefined1 FUN_1032304b8(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x48);
}



/* Entry: 1032304d4; end: 103230517;  */

long FUN_1032304d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103230518; end: 103230557;  */

void FUN_103230518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4dab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1aa4;
  func_0x000107c61520(&UNK_10dba1aa4,&UNK_11062b990);
  puRam0000000112f4dab0 = puVar1;
  return;
}



/* Entry: 103230558; end: 103230577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103230558(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    plVar3 = *(long **)(lVar1 + _DAT_112f4d8b0);
    func_0x000107c6157c(plVar3);
    func_0x000107c61170(lVar1);
    pcVar4 = *(code **)(*plVar3 + 0x68);
    func_0x000107c61174(uVar2);
    (*pcVar4)(uVar2);
    func_0x000107c61574(plVar3);
  }
  return;
}



/* Entry: 103230578; end: 10323063f;  */

long FUN_103230578(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103230640; end: 10323071b;  */

undefined8 * FUN_103230640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined1 *)((long)param_1 + 0x35) = *(undefined1 *)((long)param_2 + 0x35);
  *(undefined1 *)((long)param_1 + 0x36) = *(undefined1 *)((long)param_2 + 0x36);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10323071c; end: 1032307d7;  */

undefined8 * FUN_10323071c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined1 *)((long)param_1 + 0x35) = *(undefined1 *)((long)param_2 + 0x35);
  *(undefined1 *)((long)param_1 + 0x36) = *(undefined1 *)((long)param_2 + 0x36);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615e8(uVar1);
  param_1[8] = param_2[8];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1032307d8; end: 103230883;  */

int FUN_1032307d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x14);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103230884; end: 1032308eb;  */

/* WARNING: Possible PIC construction at 0x0001032308b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032308b8) */
/* WARNING: Removing unreachable block (ram,0x0001032308bc) */

void FUN_103230884(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f4db00;
    plVar5 = (long *)&UNK_10dba0200;
  }
  else {
    puVar3 = (ulong *)0x112f4db08;
    plVar5 = (long *)&UNK_10dba0208;
    unaff_x30 = 0x1032308b8;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1032308ec; end: 10323098f;  */

void FUN_1032308ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  puVar1 = &UNK_110629048;
  func_0x000107c613fc(&UNK_110629048,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103230990,puVar1);
  return;
}



/* Entry: 103230990; end: 103230b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103230990(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&lStack_90);
  lVar2 = lStack_90;
  func_0x000100083b20(&lStack_90);
  lVar3 = lStack_90;
  lVar1 = _DAT_1130190c8;
  lVar4 = *(long *)(lStack_90 + _DAT_1130190c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5d87c();
    func_0x000107c615e8(lVar4);
    if ((int)lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + lVar1);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      func_0x000100083b20(&lStack_90);
      lVar1 = lStack_90;
      uVar7 = *(undefined8 *)(lStack_90 + _DAT_11302e640);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lVar1);
      uVar8 = uVar7;
      func_0x000107c5c734(uVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      lVar1 = _DAT_1130778f0;
      func_0x000108437a30(*(undefined8 *)(lVar2 + _DAT_1130778f0));
      func_0x000107c4ab80(*(undefined8 *)(lVar2 + lVar1));
      func_0x000100083b20(auStack_98);
      func_0x000107c615f0(uVar8);
      func_0x000107c615f0(uVar6);
      FUN_103233b80(&lStack_90);
      param_1[3] = &UNK_110629260;
      param_1[4] = &PTR_DAT_112f4dbc8;
      puVar9 = &UNK_110629090;
      func_0x000107c613fc(&UNK_110629090,0x40,7);
      *param_1 = puVar9;
      func_0x000107c615e8(uVar6);
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      *(undefined8 *)(puVar9 + 0x18) = uStack_88;
      *(long *)(puVar9 + 0x10) = lStack_90;
      *(undefined8 *)(puVar9 + 0x28) = uStack_78;
      *(undefined8 *)(puVar9 + 0x20) = uStack_80;
      *(undefined8 *)(puVar9 + 0x38) = uStack_68;
      *(undefined8 *)(puVar9 + 0x30) = uStack_70;
      return;
    }
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103230b8c; end: 103230b9b;  */

undefined1  [16] FUN_103230b8c(void)

{
  return ZEXT816(0x110629070);
}



/* Entry: 103230b9c; end: 103230c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103230b9c(void)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112f4db78;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112f4db78);
  if (*(byte *)(unaff_x20 + _DAT_112f4db78) == 2) {
    if (*(long *)(unaff_x20 + _DAT_112f4db60) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f4db60) + _DAT_113043d30);
      func_0x000107c6157c(uVar3);
      func_0x0001000d224c(&uStack_38);
      func_0x000107c61574(uVar3);
      uVar3 = uStack_38;
      func_0x000107c426d0();
      uVar2 = (uint)uVar3;
      func_0x000107c615e8(uStack_38);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 103230c44; end: 103230cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103230c44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f4db80;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_112f4db80);
  if (*(byte *)(unaff_x20 + _DAT_112f4db80) == 2) {
    if (*(char *)(unaff_x20 + _DAT_112f4db50) == '\x01') {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f4db40);
      if (lVar3 != 0) {
        func_0x000107c5dd30(lVar3,param_2,*(undefined8 *)(unaff_x20 + _DAT_112f4db58));
      }
    }
    else {
      lVar3 = 0;
    }
    uVar2 = (uint)lVar3;
    *(char *)(unaff_x20 + lVar1) = (char)lVar3;
  }
  return uVar2 & 1;
}



/* Entry: 103230cb4; end: 103230cd7;  */

byte FUN_103230cb4(long *param_1,long *param_2)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + *param_1);
  if (bVar1 == 2) {
    bVar1 = *(byte *)(unaff_x20 + *param_2);
    *(byte *)(unaff_x20 + *param_1) = bVar1;
  }
  return bVar1 & 1;
}



/* Entry: 103230cd8; end: 103230cff; -[_TtC32SCContextVerticalActionsRenderer30ContextVerticalActionsRenderer initWithCoder:] */

void FUN_103230cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103232850();
  return;
}



/* Entry: 103230d00; end: 1032316e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103230d00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_340 [8];
  undefined1 auStack_2f8 [24];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
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
  undefined8 uStack_210;
  undefined8 uStack_1ff;
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
  undefined8 uStack_13f;
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
  undefined8 uStack_8f;
  
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar17);
  (**(code **)(lVar6 + 0x30))(auStack_2b8,uVar17,lVar6);
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_a0 = uStack_210;
  uStack_8f = uStack_1ff;
  uStack_e8 = uStack_258;
  uStack_f0 = uStack_260;
  uStack_d8 = uStack_248;
  uStack_e0 = uStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  uStack_128 = uStack_298;
  uStack_130 = uStack_2a0;
  uStack_118 = uStack_288;
  uStack_120 = uStack_290;
  uStack_108 = uStack_278;
  uStack_110 = uStack_280;
  uStack_f8 = uStack_268;
  uStack_100 = uStack_270;
  puVar2 = &uStack_130;
  FUN_103233944();
  if ((int)puVar2 == 1) {
    func_0x00010322ed34(auStack_2b8);
  }
  else {
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_150 = uStack_a0;
    uStack_13f = uStack_8f;
    uStack_198 = uStack_e8;
    uStack_1a0 = uStack_f0;
    uStack_188 = uStack_d8;
    uStack_190 = uStack_e0;
    uStack_178 = uStack_c8;
    uStack_180 = uStack_d0;
    uStack_168 = uStack_b8;
    uStack_170 = uStack_c0;
    uStack_1d8 = uStack_128;
    uStack_1e0 = uStack_130;
    uStack_1c8 = uStack_118;
    uStack_1d0 = uStack_120;
    uStack_1b8 = uStack_108;
    uStack_1c0 = uStack_110;
    uStack_1a8 = uStack_f8;
    uStack_1b0 = uStack_100;
    func_0x000104411f90();
    func_0x00010322ed34(auStack_2b8);
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c61170(puVar2);
      lVar6 = _DAT_112f4db30;
      func_0x000107c61428(unaff_x20 + _DAT_112f4db30,auStack_2d0,0,0);
      lVar3 = *(long *)(unaff_x20 + lVar6);
      lVar10 = *(long *)(lVar3 + 0x10);
      func_0x000107c61434();
      uVar12 = 0xffffffffffffffff;
      lVar6 = lVar3 + 0x20;
      do {
        if (uVar12 - lVar10 == -1) {
          func_0x000107c6142c(lVar3);
          goto LAB_1032316b4;
        }
        uVar12 = uVar12 + 1;
        if (*(ulong *)(lVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1032314e0);
          (*pcVar14)();
        }
        func_0x000103233900(lVar6,auStack_2f8);
        uVar1 = uStack_2d8;
        uVar9 = uStack_2e0;
        puVar4 = auStack_2f8;
        func_0x0001000a8868(puVar4,uStack_2e0);
        uVar17 = *(undefined8 *)(param_2 + 0x18);
        lVar15 = *(long *)(param_2 + 0x20);
        func_0x0001000a8868(param_2,uVar17);
        lVar5 = 0;
        func_0x000107c614b8(0,lVar15,uVar17,&UNK_10e804840,&UNK_10e804858);
        lVar11 = *(long *)(lVar5 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar15 + 0x28))(auStack_340 + -extraout_x8,uVar17,lVar15);
        func_0x000107c614b4(lVar15,uVar17,lVar5,&UNK_10e804840,&UNK_10e804850);
        FUN_10322b46c(puVar4,uVar9,lVar5,uVar1,lVar15);
        (**(code **)(lVar11 + 8))(auStack_340 + -extraout_x8,lVar5);
        func_0x0001000834e4(auStack_2f8);
        lVar6 = lVar6 + 0x28;
      } while (((ulong)puVar4 & 1) == 0);
      func_0x000107c6142c(lVar3);
      uVar17 = *(undefined8 *)(param_2 + 0x18);
      lVar6 = *(long *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar17);
      lVar10 = 0;
      func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
      lVar15 = *(long *)(lVar10 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar13 = auStack_340 + -extraout_x8_00;
      (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
      func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
      lVar3 = lVar6;
      func_0x000103231a4c();
      puVar4 = puVar13;
      FUN_10322b46c(puVar13,lVar10,&UNK_11076b250,lVar6,lVar3);
      (**(code **)(lVar15 + 8))(puVar13,lVar10);
      if (((ulong)puVar4 & 1) == 0) {
        uVar17 = *(undefined8 *)(param_2 + 0x18);
        lVar6 = *(long *)(param_2 + 0x20);
        func_0x0001000a8868(param_2,uVar17);
        lVar10 = 0;
        func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
        lVar15 = *(long *)(lVar10 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar13 = auStack_340 + -extraout_x8_01;
        (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
        func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
        lVar3 = lVar6;
        func_0x00010322b220();
        puVar4 = puVar13;
        FUN_10322b46c(puVar13,lVar10,&UNK_11076b650,lVar6,lVar3);
        (**(code **)(lVar15 + 8))(puVar13,lVar10);
        if (((ulong)puVar4 & 1) == 0) {
          uVar17 = *(undefined8 *)(param_2 + 0x18);
          lVar6 = *(long *)(param_2 + 0x20);
          func_0x0001000a8868(param_2,uVar17);
          lVar10 = 0;
          func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
          lVar15 = *(long *)(lVar10 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
          puVar13 = auStack_340 + -extraout_x8_02;
          (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
          func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
          lVar3 = lVar6;
          func_0x000103231a8c();
          puVar4 = puVar13;
          FUN_10322b46c(puVar13,lVar10,&UNK_11076b3d0,lVar6,lVar3);
          (**(code **)(lVar15 + 8))(puVar13,lVar10);
          if (((ulong)puVar4 & 1) == 0) {
            uVar17 = *(undefined8 *)(param_2 + 0x18);
            lVar6 = *(long *)(param_2 + 0x20);
            func_0x0001000a8868(param_2,uVar17);
            lVar10 = 0;
            func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
            lVar15 = *(long *)(lVar10 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
            puVar13 = auStack_340 + -extraout_x8_03;
            (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
            func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
            lVar3 = lVar6;
            func_0x000103231a0c();
            puVar4 = puVar13;
            FUN_10322b46c(puVar13,lVar10,&UNK_11076b750,lVar6,lVar3);
            (**(code **)(lVar15 + 8))(puVar13,lVar10);
            if (((ulong)puVar4 & 1) == 0) {
              uVar17 = *(undefined8 *)(param_2 + 0x18);
              lVar6 = *(long *)(param_2 + 0x20);
              func_0x0001000a8868(param_2,uVar17);
              lVar10 = 0;
              func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
              lVar15 = *(long *)(lVar10 + -8);
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
              puVar13 = auStack_340 + -extraout_x8_04;
              (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
              func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
              lVar3 = lVar6;
              func_0x00010322b260();
              puVar4 = puVar13;
              FUN_10322b46c(puVar13,lVar10,&UNK_11076b850,lVar6,lVar3);
              if (((ulong)puVar4 & 1) == 0) {
                uVar17 = *(undefined8 *)(param_2 + 0x18);
                lVar6 = *(long *)(param_2 + 0x20);
                func_0x0001000a8868(param_2,uVar17);
                lVar5 = 0;
                func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
                lVar11 = *(long *)(lVar5 + -8);
                (*(code *)PTR____chkstk_darwin_11034bd40)
                          (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
                uVar16 = (long)puVar13 - extraout_x8_05;
                (**(code **)(lVar6 + 0x28))(uVar16,uVar17,lVar6);
                func_0x000107c614b4(lVar6,uVar17,lVar5,&UNK_10e804840,&UNK_10e804850);
                lVar3 = lVar6;
                func_0x00010322b060();
                uVar12 = uVar16;
                FUN_10322b46c(uVar16,lVar5,&UNK_11076af50,lVar6,lVar3);
                (**(code **)(lVar11 + 8))(uVar16,lVar5);
                (**(code **)(lVar15 + 8))(puVar13,lVar10);
                if ((uVar12 & 1) == 0) {
                  uVar17 = *(undefined8 *)(param_2 + 0x18);
                  lVar6 = *(long *)(param_2 + 0x20);
                  func_0x0001000a8868(param_2,uVar17);
                  lVar10 = 0;
                  func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
                  lVar15 = *(long *)(lVar10 + -8);
                  (*(code *)PTR____chkstk_darwin_11034bd40)
                            (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
                  puVar13 = auStack_340 + -extraout_x8_06;
                  (**(code **)(lVar6 + 0x28))(puVar13,uVar17,lVar6);
                  func_0x000107c614b4(lVar6,uVar17,lVar10,&UNK_10e804840,&UNK_10e804850);
                  lVar3 = lVar6;
                  func_0x00010322afa0();
                  puVar4 = puVar13;
                  FUN_10322b46c(puVar13,lVar10,&UNK_11076acd0,lVar6,lVar3);
                  (**(code **)(lVar15 + 8))(puVar13,lVar10);
                  if (((ulong)puVar4 & 1) == 0) goto LAB_1032316b4;
                }
              }
              else {
                (**(code **)(lVar15 + 8))(puVar13,lVar10);
              }
            }
          }
        }
      }
      puVar7 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f4db38);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c45098(uVar17,uVar17);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar7 != (undefined *)0x0) {
        uVar17 = *(undefined8 *)(param_2 + 0x18);
        lVar6 = *(long *)(param_2 + 0x20);
        func_0x0001000a8868(param_2,uVar17);
        pcVar14 = *(code **)(lVar6 + 0x28);
        uVar9 = 0;
        func_0x000107c614b8(0,lVar6,uVar17,&UNK_10e804840,&UNK_10e804858);
        param_1[4] = uVar9;
        lVar3 = lVar6;
        func_0x000107c614b4(lVar6,uVar17,uVar9,&UNK_10e804840,&UNK_10e804850);
        param_1[5] = lVar3;
        puVar2 = param_1 + 1;
        func_0x0001000c5db4(puVar2);
        (*pcVar14)(puVar2,uVar17,lVar6);
        *param_1 = puVar7;
        return;
      }
    }
  }
LAB_1032316b4:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1032316e8; end: 1032318c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1032316e8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_112f4db30;
  func_0x000107c61428(param_3 + _DAT_112f4db30,auStack_78,0,0);
  lVar10 = *(long *)(param_3 + lVar9);
  uVar8 = *(ulong *)(lVar10 + 0x10);
  func_0x000107c61434(lVar10);
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar11 = lVar10 + 0x20;
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1032318c4);
        (*pcVar5)();
      }
      func_0x000103233900(lVar11,auStack_a0);
      uVar4 = uStack_80;
      uVar3 = uStack_88;
      puVar6 = auStack_a0;
      func_0x0001000a8868(puVar6,uStack_88);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x0001000a8868(param_1 + 8,uVar1);
      FUN_10322b46c(puVar6,uVar3,uVar1,uVar4,uVar2);
      func_0x0001000834e4(auStack_a0);
      if (((ulong)puVar6 & 1) != 0) {
        func_0x000107c6142c(lVar10);
        lVar10 = *(long *)(param_3 + lVar9);
        uVar8 = *(ulong *)(lVar10 + 0x10);
        func_0x000107c61434(lVar10);
        if (uVar8 != 0) {
          uVar12 = 0;
          lVar9 = lVar10 + 0x20;
          do {
            if (*(ulong *)(lVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1032318c8);
              (*pcVar5)();
            }
            func_0x000103233900(lVar9,auStack_a0);
            uVar4 = uStack_80;
            uVar3 = uStack_88;
            puVar6 = auStack_a0;
            func_0x0001000a8868(puVar6,uStack_88);
            uVar1 = *(undefined8 *)(param_2 + 0x20);
            uVar2 = *(undefined8 *)(param_2 + 0x28);
            func_0x0001000a8868(param_2 + 8,uVar1);
            FUN_10322b46c(puVar6,uVar3,uVar1,uVar4,uVar2);
            func_0x0001000834e4(auStack_a0);
            if (((ulong)puVar6 & 1) != 0) {
              func_0x000107c6142c(lVar10);
              return uVar7 < uVar12;
            }
            uVar12 = uVar12 + 1;
            lVar9 = lVar9 + 0x28;
          } while (uVar8 != uVar12);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 0x28;
    } while (uVar8 != uVar7);
  }
  func_0x000107c6142c(lVar10);
  return false;
}



/* Entry: 1032318c8; end: 103231927; -[_TtC32SCContextVerticalActionsRenderer30ContextVerticalActionsRenderer initWithFrame:] */

void FUN_1032318c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextVerticalActionsRenderer.ContextVerticalActionsRenderer",0x3f,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032318f4);
  (*pcVar1)();
}



/* Entry: 103231928; end: 1032319af; -[_TtC32SCContextVerticalActionsRenderer30ContextVerticalActionsRenderer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103231964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103231968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103231928(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4db28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f4db30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f4db40));
  return;
}



/* Entry: 1032319b0; end: 103231a03;  */

void FUN_1032319b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c453e4();
  func_0x000107c5a568();
  func_0x000107c3e2c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103231a04; end: 103231a0b;  */

undefined8 FUN_103231a04(void)

{
  return 1;
}



/* Entry: 103231a0c; end: 103231aeb;  */

void FUN_103231a0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4db10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfb330;
  func_0x000107c61520(&DAT_10dcfb330,&UNK_11076b750);
  puRam0000000112f4db10 = puVar1;
  return;
}



/* Entry: 103231aec; end: 103231c2f;  */

undefined * FUN_103231aec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103231c30);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f4d830;
    func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f4daa8;
    func_0x0001000285a8(0x112f4daa8,&UNK_10dba00e0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103231c30; end: 103232023;  */

undefined8
FUN_103231c30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  
  lVar4 = ((long)param_2 - (long)param_1) / 0x30;
  lVar1 = ((long)param_3 - (long)param_2) / 0x30;
  if (lVar4 < lVar1) {
    if (((param_4 < param_1) || (param_1 + lVar4 * 6 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar4 * 0x30);
    }
    puVar8 = param_4 + lVar4 * 6;
    puVar3 = param_1;
    if (0x2f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        FUN_103233830(param_2,auStack_90);
        FUN_103233830(param_4,auStack_c0);
        puVar2 = auStack_90;
        FUN_1032316e8(puVar2,auStack_c0,param_5);
        if (unaff_x21 != 0) {
          func_0x0001032338cc(auStack_c0);
          func_0x0001032338cc(auStack_90);
          lVar4 = ((long)puVar8 - (long)param_4) / 0x30;
          if (((param_4 <= puVar3) && (puVar3 < param_4 + lVar4 * 6)) && (puVar3 == param_4))
          goto LAB_103231fd8;
          lVar4 = lVar4 * 0x30;
          goto LAB_103231fd0;
        }
        func_0x0001032338cc(auStack_c0);
        func_0x0001032338cc(auStack_90);
        if (((ulong)puVar2 & 1) == 0) {
          puVar5 = param_4 + 6;
          puVar7 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar7 = param_2;
          param_2 = param_2 + 6;
        }
        param_4 = puVar5;
        if (puVar3 != puVar7) {
          uVar10 = puVar7[1];
          uVar9 = *puVar7;
          uVar11 = puVar7[2];
          uVar13 = puVar7[5];
          uVar12 = puVar7[4];
          puVar3[3] = puVar7[3];
          puVar3[2] = uVar11;
          puVar3[5] = uVar13;
          puVar3[4] = uVar12;
          puVar3[1] = uVar10;
          *puVar3 = uVar9;
        }
        puVar3 = puVar3 + 6;
      } while (param_4 < puVar8);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar1 * 6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar1 * 0x30);
    }
    puVar7 = param_4 + lVar1 * 6;
    puVar3 = param_2;
    puVar8 = puVar7;
    if ((0x2f < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
      do {
        puVar6 = puVar3 + -6;
        lVar4 = (long)puVar7 - (long)param_4;
        puVar5 = param_3;
        while( true ) {
          puVar8 = puVar7 + -6;
          param_3 = puVar5 + -6;
          FUN_103233830(puVar8,auStack_90);
          FUN_103233830(puVar6,auStack_c0);
          puVar2 = auStack_90;
          FUN_1032316e8(puVar2,auStack_c0,param_5);
          if (unaff_x21 != 0) {
            func_0x0001032338cc(auStack_c0);
            func_0x0001032338cc(auStack_90);
            lVar4 = lVar4 / 0x30;
            if ((puVar3 < param_4) || (param_4 + lVar4 * 6 <= puVar3)) {
              func_0x000107c610b8(puVar3,param_4,lVar4 * 0x30);
              goto LAB_103231fd8;
            }
            if (puVar3 == param_4) goto LAB_103231fd8;
            lVar4 = lVar4 * 0x30;
            goto LAB_103231fd0;
          }
          func_0x0001032338cc(auStack_c0);
          func_0x0001032338cc(auStack_90);
          if (((ulong)puVar2 & 1) != 0) break;
          if (puVar5 != puVar7) {
            uVar10 = puVar7[-5];
            uVar9 = *puVar8;
            uVar11 = puVar7[-4];
            uVar13 = puVar7[-1];
            uVar12 = puVar7[-2];
            puVar5[-3] = puVar7[-3];
            puVar5[-4] = uVar11;
            puVar5[-1] = uVar13;
            puVar5[-2] = uVar12;
            puVar5[-5] = uVar10;
            *param_3 = uVar9;
          }
          lVar4 = lVar4 + -0x30;
          puVar5 = param_3;
          puVar7 = puVar8;
          if (puVar8 <= param_4) goto LAB_103231f8c;
        }
        if (puVar5 != puVar3) {
          uVar10 = puVar3[-5];
          uVar9 = *puVar6;
          uVar11 = puVar3[-4];
          uVar13 = puVar3[-1];
          uVar12 = puVar3[-2];
          puVar5[-3] = puVar3[-3];
          puVar5[-4] = uVar11;
          puVar5[-1] = uVar13;
          puVar5[-2] = uVar12;
          puVar5[-5] = uVar10;
          *param_3 = uVar9;
        }
        puVar3 = puVar6;
        puVar8 = puVar7;
      } while ((param_4 < puVar7) && (param_1 < puVar6));
    }
  }
LAB_103231f8c:
  lVar4 = ((long)puVar8 - (long)param_4) / 0x30;
  if (((puVar3 < param_4) || (param_4 + lVar4 * 6 <= puVar3)) || (puVar3 != param_4)) {
    lVar4 = lVar4 * 0x30;
LAB_103231fd0:
    func_0x000107c610b8(puVar3,param_4,lVar4);
  }
LAB_103231fd8:
  func_0x000107c61170(param_5);
  return 1;
}



/* Entry: 103232024; end: 10323204f;  */

void FUN_103232024(long param_1)

{
  FUN_103232050(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 103232050; end: 103232177;  */

undefined *
FUN_103232050(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103232178);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f4dbc0;
    func_0x0001000285a8(0x112f4dbc0,&UNK_10dba02e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106291d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 103232178; end: 10323284f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103232178(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [24];
  
  puVar8 = &uStack_c0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f4db28;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f4db30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db38) = 0x4040000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db70) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db78) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db80) = 2;
  uVar9 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db88) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db40) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db48) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db68) = param_6;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c61154(0,0,0,0,puVar3,puVar2);
  func_0x000107c61180();
  func_0x000107c5381c(0x443b8000);
  func_0x000107c5381c(0x443b8000,puVar3);
  func_0x000107c537fc(0x443b8000,puVar3);
  func_0x000107c537fc(0x443b8000,puVar3);
  lVar1 = _DAT_112f4db28;
  func_0x000107c52b2c(*(undefined8 *)(puVar3 + _DAT_112f4db28));
  func_0x000107c59594(0x4030000000000000,*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c5a050(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c3d89c(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar7 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4(uVar5);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  *(undefined1 **)(puVar4 + 0x20) = puVar12;
  puVar7 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0(uVar5);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  *(undefined1 **)(puVar4 + 0x28) = puVar12;
  puVar7 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c(uVar5);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  *(undefined1 **)(puVar4 + 0x30) = puVar12;
  puVar7 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c(uVar5);
  func_0x000107c61180();
  puVar12 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  *(undefined1 **)(puVar4 + 0x38) = puVar12;
  uVar5 = 0;
  FUN_10323388c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar6 = puVar4;
  func_0x000107c5fc48(puVar4,uVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar6);
  FUN_103230cb4(&DAT_112f4db88,&DAT_112f4db50);
  uVar10 = uVar9;
  FUN_103230c44();
  lVar1 = _DAT_112f4db30;
  func_0x000107c61428(puVar3 + _DAT_112f4db30,auStack_98,0x21,0);
  puVar12 = *(undefined1 **)(puVar3 + lVar1);
  puVar7 = puVar12;
  func_0x000107c61558();
  *(undefined1 **)(puVar3 + lVar1) = puVar12;
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = (undefined1 *)0x0;
    FUN_103231aec(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
    *(undefined1 **)(puVar3 + lVar1) = puVar7;
    puVar12 = puVar7;
  }
  uVar13 = *(ulong *)(puVar12 + 0x10);
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar13) {
    puVar7 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_103231aec(puVar7,uVar13 + 1,1,puVar12);
    puVar12 = puVar7;
  }
  puStack_a8 = &UNK_11076b250;
  func_0x000103231a4c();
  uStack_c0 = 0x657469726f766166;
  uStack_b8 = 0xe800000000000000;
  *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
  puStack_a0 = puVar7;
  func_0x00010323396c(&uStack_c0,puVar12 + uVar13 * 0x28 + 0x20);
  *(undefined1 **)(puVar3 + lVar1) = puVar12;
  uVar13 = *(ulong *)(puVar12 + 0x10);
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar13) {
    puVar8 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_103231aec(puVar8,uVar13 + 1,1,puVar12);
    puVar12 = (undefined1 *)puVar8;
  }
  puStack_a8 = &UNK_11076af50;
  func_0x00010322b060();
  uStack_c0 = 0x74616863;
  uStack_b8 = 0xe400000000000000;
  *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
  puStack_a0 = (undefined1 *)puVar8;
  func_0x00010323396c(&uStack_c0,puVar12 + uVar13 * 0x28 + 0x20);
  *(undefined1 **)(puVar3 + lVar1) = puVar12;
  func_0x000107c614a8(auStack_98);
  if ((uVar9 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      return puVar3;
    }
    func_0x000107c61428(puVar3 + lVar1,auStack_98,0x21,0);
    uVar10 = *(ulong *)(puVar3 + lVar1);
    uVar9 = uVar10;
    func_0x000107c61558();
    *(ulong *)(puVar3 + lVar1) = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
      FUN_103231aec(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(puVar3 + lVar1) = uVar9;
      uVar10 = uVar9;
    }
    uVar13 = *(ulong *)(uVar10 + 0x10);
    lVar11 = uVar13 + 1;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar13) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_103231aec(uVar9,lVar11,1,uVar10);
      uVar10 = uVar9;
    }
    puStack_a8 = &UNK_11076acd0;
    func_0x00010322afa0();
    uStack_c0 = 0x654d6e6f69746361;
    uStack_b8 = 0xea0000000000756e;
    puStack_a0 = (undefined1 *)uVar9;
  }
  else {
    uVar9 = 0;
    FUN_103230cb4(&DAT_112f4db70,&DAT_112f4db48);
    if (((uVar9 & 1) != 0) && (FUN_103230b9c(), (uVar9 & 1) == 0)) {
      return puVar3;
    }
    func_0x000107c61428(puVar3 + lVar1,auStack_98,0x21,0);
    uVar10 = *(ulong *)(puVar3 + lVar1);
    uVar9 = uVar10;
    func_0x000107c61558();
    *(ulong *)(puVar3 + lVar1) = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
      FUN_103231aec(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(puVar3 + lVar1) = uVar9;
      uVar10 = uVar9;
    }
    uVar13 = *(ulong *)(uVar10 + 0x10);
    lVar11 = uVar13 + 1;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar13) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_103231aec(uVar9,lVar11,1,uVar10);
      uVar10 = uVar9;
    }
    puStack_a8 = &UNK_11076b650;
    func_0x00010322b220();
    uStack_c0 = 0x6572616873;
    uStack_b8 = 0xe500000000000000;
    puStack_a0 = (undefined1 *)uVar9;
  }
  *(long *)(uVar10 + 0x10) = lVar11;
  func_0x00010323396c(&uStack_c0,uVar10 + uVar13 * 0x28 + 0x20);
  *(ulong *)(puVar3 + lVar1) = uVar10;
  func_0x000107c614a8(auStack_98);
  return puVar3;
}



/* Entry: 103232850; end: 10323291f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103232850(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f4db28;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112f4db30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f4db38) = 0x4040000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db70) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db78) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db80) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112f4db88) = 2;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextVerticalActionsRenderer/ContextVerticalActionsRenderer.swift",0x45,2
                      ,0x57,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103232920);
  (*pcVar2)();
}



/* Entry: 103232920; end: 103232a37;  */

void FUN_103232920(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  long unaff_x21;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    puVar4 = (undefined8 *)(lVar7 + param_3 * 0x30);
    param_1 = param_1 - param_3;
    lVar8 = param_1;
    puVar5 = puVar4;
LAB_103232994:
    do {
      FUN_103233830(puVar4,auStack_90);
      puVar6 = puVar4 + -6;
      FUN_103233830(puVar6,auStack_c0);
      puVar3 = auStack_90;
      FUN_1032316e8(puVar3,auStack_c0,param_5);
      func_0x0001032338cc(auStack_c0);
      func_0x0001032338cc(auStack_90);
      if (unaff_x21 != 0) {
        return;
      }
      if (((ulong)puVar3 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103232a38);
          (*pcVar1)();
        }
        uVar12 = puVar4[3];
        uVar11 = puVar4[2];
        uVar10 = puVar4[5];
        uVar9 = puVar4[4];
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar4[1] = puVar4[-5];
        *puVar4 = *puVar6;
        puVar4[3] = puVar4[-3];
        puVar4[2] = puVar4[-4];
        puVar4[5] = puVar4[-1];
        puVar4[4] = puVar4[-2];
        puVar4[-5] = uVar14;
        *puVar6 = uVar13;
        puVar4[-3] = uVar12;
        puVar4[-4] = uVar11;
        puVar4[-1] = uVar10;
        puVar4[-2] = uVar9;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar6;
        if (bVar2) goto LAB_103232994;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 6;
      param_1 = lVar8 + -1;
      lVar8 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 103232a38; end: 103232ce7;  */

undefined8 FUN_103232a38(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = *param_1;
  if (1 < *(ulong *)(uVar13 + 0x10)) {
    func_0x000107c61174();
    uVar6 = uVar13;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar13;
    uVar6 = *(ulong *)(uVar13 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar4 = SBORROW8(*(long *)(uVar13 + 0x28),*(long *)(uVar13 + 0x20));
          lVar7 = *(long *)(uVar13 + 0x28) - *(long *)(uVar13 + 0x20);
          goto LAB_103232b1c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cc8);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar13 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar8 = plVar1[1];
        bVar4 = SBORROW8(lVar8,lVar7);
        lVar8 = lVar8 - lVar7;
LAB_103232b80:
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cb8);
          (*pcVar3)();
        }
        lVar7 = uVar13 + lVar9 * 0x10;
        lVar11 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cc0);
          (*pcVar3)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar11 < lVar8) break;
      }
      else {
        lVar8 = uVar13 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232ca0);
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232ca4);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar13 + uVar6 * 0x10);
        lVar11 = *plVar1;
        lVar10 = plVar1[1];
        lVar2 = lVar10 - lVar11;
        if (SBORROW8(lVar10,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cac);
          (*pcVar3)();
        }
        if (SCARRY8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cb4);
          (*pcVar3)();
        }
        bVar4 = false;
        if (lVar7 + lVar2 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_103232b1c:
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103232ca8);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar13 + uVar6 * 0x10);
          lVar11 = *plVar1;
          lVar10 = plVar1[1];
          lVar8 = lVar10 - lVar11;
          if (SBORROW8(lVar10,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cb0);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar13 + 0x20 + lVar9 * 0x10);
          lVar11 = *plVar1;
          lVar10 = plVar1[1];
          lVar2 = lVar10 - lVar11;
          if (SBORROW8(lVar10,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cbc);
            (*pcVar3)();
          }
          if (SCARRY8(lVar8,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103232cc4);
            (*pcVar3)();
          }
          bVar4 = false;
          if (lVar8 + lVar2 < lVar7) goto LAB_103232b80;
          lVar10 = uVar6 - 2;
          if (lVar2 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar13 + 0x20 + lVar9 * 0x10);
          lVar8 = *plVar1;
          lVar11 = plVar1[1];
          if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103232ccc);
            (*pcVar3)();
          }
          lVar10 = uVar6 - 2;
          if (lVar11 - lVar8 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar12 = lVar10 - 1;
      if (uVar6 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103232c94);
        (*pcVar3)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
        func_0x000107c61170(param_4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103232ce8);
        (*pcVar3)();
      }
      lVar11 = *(long *)(uVar13 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar13 + 0x20 + lVar10 * 0x10);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      uVar5 = param_4;
      func_0x000107c61174(param_4);
      FUN_103231c30(lVar9 + lVar11 * 0x30,lVar9 + lVar7 * 0x30,lVar9 + lVar8 * 0x30,param_2,uVar5);
      if (unaff_x21 != 0) break;
      if (lVar8 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103232c98);
        (*pcVar3)();
      }
      uVar6 = uVar13;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103232c9c);
        (*pcVar3)();
      }
      lVar9 = uVar13 + uVar12 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar11;
      *(long *)(lVar9 + 0x28) = lVar8;
      *param_1 = uVar13;
      func_0x0001000a97cc(lVar10);
      uVar13 = *param_1;
      uVar6 = *(ulong *)(uVar13 + 0x10);
    } while (1 < uVar6);
    func_0x000107c61170(param_4);
  }
  return 1;
}



/* Entry: 103232ce8; end: 10323326f;  */

void FUN_103232ce8(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x21;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [56];
  undefined *puStack_58;
  
  lVar17 = param_3[1];
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61174();
  func_0x000107c61174();
  if (0 < lVar17) {
    lVar9 = 0;
    do {
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar17) {
        lVar12 = *param_3;
        FUN_103233830(lVar12 + lVar18 * 0x30,auStack_98);
        FUN_103233830(lVar12 + lVar9 * 0x30,auStack_c8);
        puVar3 = auStack_98;
        FUN_1032316e8(puVar3,auStack_c8,param_5);
        func_0x0001032338cc(auStack_c8);
        func_0x0001032338cc(auStack_98);
        if (unaff_x21 != 0) goto LAB_10323319c;
        lVar12 = lVar12 + lVar9 * 0x30 + 0x60;
        lVar8 = lVar9 + 2;
        do {
          lVar16 = lVar8;
          lVar18 = lVar17;
          if (lVar17 == lVar16) break;
          FUN_103233830(lVar12,auStack_98);
          FUN_103233830(lVar12 + -0x30,auStack_c8);
          puVar4 = auStack_98;
          FUN_1032316e8(puVar4,auStack_c8,param_5);
          func_0x0001032338cc(auStack_c8);
          func_0x0001032338cc(auStack_98);
          lVar12 = lVar12 + 0x30;
          lVar8 = lVar16 + 1;
          lVar18 = lVar16;
        } while (((uint)puVar3 & 1) == ((uint)puVar4 & 1));
        if (((ulong)puVar3 & 1) != 0) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103233204);
            (*pcVar1)();
          }
          if (lVar9 < lVar18) {
            lVar8 = *param_3;
            puVar15 = (undefined8 *)(lVar8 + lVar9 * 0x30);
            lVar12 = lVar18;
            lVar17 = lVar9;
            puVar11 = (undefined8 *)(lVar8 + lVar18 * 0x30);
            do {
              puVar10 = puVar11 + -6;
              lVar12 = lVar12 + -1;
              if (lVar17 != lVar12) {
                if (lVar8 == 0) {
                  func_0x000107c61170(param_5);
                  func_0x000107c61170(param_5);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103233244);
                  (*pcVar1)();
                }
                uVar20 = puVar15[1];
                uVar19 = *puVar15;
                uVar22 = puVar15[3];
                uVar21 = puVar15[2];
                uVar24 = puVar15[5];
                uVar23 = puVar15[4];
                uVar28 = puVar11[-3];
                uVar27 = puVar11[-4];
                uVar26 = puVar11[-1];
                uVar25 = puVar11[-2];
                uVar29 = *puVar10;
                puVar15[1] = puVar11[-5];
                *puVar15 = uVar29;
                puVar15[3] = uVar28;
                puVar15[2] = uVar27;
                puVar15[5] = uVar26;
                puVar15[4] = uVar25;
                puVar11[-3] = uVar22;
                puVar11[-4] = uVar21;
                puVar11[-1] = uVar24;
                puVar11[-2] = uVar23;
                puVar11[-5] = uVar20;
                *puVar10 = uVar19;
              }
              lVar17 = lVar17 + 1;
              puVar15 = puVar15 + 6;
              puVar11 = puVar10;
            } while (lVar17 < lVar12);
          }
        }
      }
      lVar17 = param_3[1];
      lVar12 = lVar18;
      puVar7 = puStack_58;
      if (lVar18 < lVar17) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032331e8);
          (*pcVar1)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032331fc);
            (*pcVar1)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar17 <= lVar9 + param_4) {
            lVar8 = lVar17;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103233200);
            (*pcVar1)();
          }
          if (lVar18 != lVar8) {
            lVar13 = *param_3;
            puVar15 = (undefined8 *)(lVar13 + lVar18 * 0x30);
            lVar17 = lVar9 - lVar18;
            puVar11 = puVar15;
            lVar16 = lVar17;
LAB_103232fa8:
            do {
              FUN_103233830(puVar15,auStack_98);
              puVar10 = puVar15 + -6;
              FUN_103233830(puVar10,auStack_c8);
              puVar3 = auStack_98;
              FUN_1032316e8(puVar3,auStack_c8,param_5);
              func_0x0001032338cc(auStack_c8);
              func_0x0001032338cc(auStack_98);
              if (unaff_x21 != 0) goto LAB_10323319c;
              if (((ulong)puVar3 & 1) != 0) {
                if (lVar13 == 0) {
                  func_0x000107c61170(param_5);
                  func_0x000107c61170(param_5);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103233218);
                  (*pcVar1)();
                }
                uVar22 = puVar15[3];
                uVar21 = puVar15[2];
                uVar20 = puVar15[5];
                uVar19 = puVar15[4];
                uVar24 = puVar15[1];
                uVar23 = *puVar15;
                puVar15[1] = puVar15[-5];
                *puVar15 = *puVar10;
                puVar15[3] = puVar15[-3];
                puVar15[2] = puVar15[-4];
                puVar15[5] = puVar15[-1];
                puVar15[4] = puVar15[-2];
                puVar15[-5] = uVar24;
                *puVar10 = uVar23;
                puVar15[-3] = uVar22;
                puVar15[-4] = uVar21;
                puVar15[-1] = uVar20;
                puVar15[-2] = uVar19;
                bVar2 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                puVar15 = puVar10;
                if (bVar2) goto LAB_103232fa8;
              }
              lVar18 = lVar18 + 1;
              puVar15 = puVar11 + 6;
              lVar17 = lVar16 + -1;
              puVar11 = puVar15;
              lVar16 = lVar17;
              lVar12 = lVar8;
              puVar7 = puStack_58;
            } while (lVar18 != lVar8);
          }
        }
      }
      puStack_58 = puVar7;
      if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032331e4);
        (*pcVar1)();
      }
      puVar5 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar14 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar14 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar14 + 1;
      *(long *)(puVar7 + uVar14 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar14 * 0x10 + 0x28) = lVar12;
      lVar17 = *param_1;
      puStack_58 = puVar7;
      if (lVar17 == 0) {
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_5);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10323325c);
        (*pcVar1)();
      }
      uVar19 = param_5;
      func_0x000107c61174(param_5);
      FUN_103232a38(&puStack_58,lVar17,param_3,uVar19);
      if (unaff_x21 != 0) {
        func_0x000107c61170(uVar19);
        goto LAB_10323319c;
      }
      func_0x000107c61170(uVar19);
      lVar17 = param_3[1];
      lVar9 = lVar12;
    } while (lVar12 < lVar17);
  }
  puVar7 = puStack_58;
  lVar17 = *param_1;
  if (lVar17 == 0) {
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103233270);
    (*pcVar1)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar14 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar14) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103233230);
      (*pcVar1)();
    }
    lVar16 = uVar14 - 1;
    lVar8 = *(long *)(puVar7 + uVar14 * 0x10);
    lVar18 = *(long *)(puVar7 + lVar16 * 0x10 + 0x20);
    lVar12 = *(long *)(puVar7 + lVar16 * 0x10 + 0x28);
    uVar19 = param_5;
    func_0x000107c61174(param_5);
    FUN_103231c30(lVar9 + lVar8 * 0x30,lVar9 + lVar18 * 0x30,lVar9 + lVar12 * 0x30,lVar17,uVar19);
    if (unaff_x21 != 0) break;
    if (lVar12 < lVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032331dc);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032331e0);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar14 * 0x10) = lVar8;
    *(long *)((long)(puVar7 + uVar14 * 0x10) + 8) = lVar12;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar16);
    puVar7 = puStack_58;
    uVar14 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10323319c:
  puVar7 = puStack_58;
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_5);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 103233270; end: 1032333d3;  */

void FUN_103233270(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 auStack_48 [8];
  
  uVar4 = *param_1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_103232024();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_60 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_58 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,&UNK_1106291d8);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_70 = puVar3 + 0x20;
    uVar2 = param_2;
    puStack_68 = puVar6;
    func_0x000107c61174(param_2);
    FUN_103232ce8(&puStack_70,auStack_48,&lStack_60,uVar1,uVar2);
    func_0x000107c61170(uVar2);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    uVar2 = param_2;
    func_0x000107c61174(param_2);
    FUN_103232920(0,uVar5,1,&lStack_60,uVar2);
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar4;
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1032333d4; end: 1032337e7;  */

/* WARNING: Removing unreachable block (ram,0x0001032337d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032333d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  uVar17 = *(ulong *)(unaff_x20 + _DAT_112f4db28);
  uVar15 = uVar17;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10323388c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = uVar15;
  func_0x000107c5fc54(uVar15,uVar4);
  func_0x000107c61170(uVar15);
  if (uVar5 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar15 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar15 != 0) {
    if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032337d4);
      (*pcVar3)();
    }
    uVar16 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + uVar16 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar16;
        func_0x000100f040d0(uVar16,uVar5);
      }
      uVar16 = uVar16 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar6);
    } while (uVar15 != uVar16);
  }
  func_0x000107c6142c(uVar5);
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  lVar14 = *(long *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    param_1 = param_1 + 0x20;
    do {
      func_0x000103233900(param_1,auStack_90);
      FUN_103230d00(&puStack_f0,auStack_90);
      func_0x0001000834e4(auStack_90);
      if (puStack_f0 == (undefined *)0x0) {
        FUN_1032337e8(&puStack_f0);
      }
      else {
        uStack_b8 = uStack_e8;
        puStack_c0 = puStack_f0;
        uStack_a8 = uStack_d8;
        uStack_b0 = uStack_e0;
        uStack_98 = uStack_c8;
        uStack_a0 = uStack_d0;
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_103232050(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,puVar1);
        }
        uVar15 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_103232050(puVar9,uVar15 + 1,1,puVar8,puVar1);
        }
        *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar9 + uVar15 * 0x30 + 0x38) = uStack_a8;
        *(undefined8 *)(puVar9 + uVar15 * 0x30 + 0x30) = uStack_b0;
        *(undefined8 *)(puVar9 + uVar15 * 0x30 + 0x48) = uStack_98;
        *(undefined8 *)(puVar9 + uVar15 * 0x30 + 0x40) = uStack_a0;
        *(undefined8 *)(puVar9 + uVar15 * 0x30 + 0x28) = uStack_b8;
        *(undefined **)(puVar9 + uVar15 * 0x30 + 0x20) = puStack_c0;
      }
      param_1 = param_1 + 0x28;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puStack_c0 = puVar9;
  func_0x000107c61174();
  func_0x000107c61434(puVar9);
  FUN_103233270(&puStack_c0,unaff_x20);
  func_0x000107c6142c(puVar9);
  func_0x000107c61170(unaff_x20);
  puVar1 = puStack_c0;
  lVar2 = _DAT_112f4db38;
  lVar14 = *(long *)(puStack_c0 + 0x10);
  if (lVar14 != 0) {
    puVar9 = puStack_c0 + 0x20;
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x0001008478a8();
    do {
      FUN_103233830(puVar9,&puStack_c0);
      uStack_e8 = uStack_b8;
      puStack_f0 = puStack_c0;
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c46db4();
      func_0x000107c61180();
      func_0x000107c5a050();
      func_0x000107c53840(puVar10);
      puVar11 = puVar8;
      func_0x000107c613fc(puVar8,((ulong)*(uint *)(puVar8 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                          *(ushort *)(puVar8 + 0x34) | 7);
      *(undefined8 *)(puVar11 + 0x18) = 5;
      *(undefined8 *)(puVar11 + 0x10) = 2;
      puVar12 = puVar10;
      func_0x000107c5e308();
      func_0x000107c61180();
      puVar13 = puVar12;
      func_0x000107c40290(*(undefined8 *)(unaff_x20 + lVar2));
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      *(undefined **)(puVar11 + 0x20) = puVar13;
      puVar12 = puVar10;
      func_0x000107c44d9c();
      func_0x000107c61180();
      puVar13 = puVar12;
      func_0x000107c40290(*(undefined8 *)(unaff_x20 + lVar2));
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      *(undefined **)(puVar11 + 0x28) = puVar13;
      uVar4 = 0;
      FUN_10323388c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar12 = puVar11;
      func_0x000107c5fc48(puVar11,uVar4);
      func_0x000107c61574(puVar11);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c3d5b4(uVar17);
      func_0x000107c61170(puVar10);
      func_0x0001032338cc(&puStack_f0);
      puVar9 = puVar9 + 0x30;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1032337e8; end: 10323382f;  */

undefined8 FUN_1032337e8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4dbb8;
  func_0x0001000285a8(0x112f4dbb8,&UNK_10dba02d8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103233830; end: 10323388b;  */

undefined8 * FUN_103233830(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_2 = *param_1;
  lVar2 = param_1[4];
  param_2[5] = param_1[5];
  param_2[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c61174();
  (*pcVar1)(param_2 + 1,param_1 + 1,lVar2);
  return param_2;
}



/* Entry: 10323388c; end: 103233943;  */

void FUN_10323388c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103233944; end: 103233983;  */

int FUN_103233944(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(byte *)(param_1 + 0xa8) >> 5) | (*(byte *)(param_1 + 0xa8) >> 1 & 0xf) << 3;
  iVar2 = 0x80 - uVar1;
  if (0x78 < (uVar1 ^ 0x7f)) {
    iVar2 = 0;
  }
  return iVar2;
}



/* Entry: 103233984; end: 1032339d7;  */

long FUN_103233984(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032339d8; end: 103233a87;  */

undefined8 * FUN_1032339d8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c61174();
  (*pcVar1)(param_1 + 1,param_2 + 1,lVar2);
  return param_1;
}



/* Entry: 103233a88; end: 103233adb;  */

undefined8 * FUN_103233a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 103233adc; end: 103233b7f;  */

int FUN_103233adc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103233b80; end: 103233d4b;  */

void FUN_103233b80(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xe;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b750;
  lVar2 = lVar1;
  FUN_103231a0c();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x6269726373627573;
  *(undefined8 *)(lVar1 + 0x28) = 0xe900000000000065;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076af50;
  func_0x00010322b060();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x74616863;
  *(undefined8 *)(lVar1 + 0x50) = 0xe400000000000000;
  *(undefined **)(lVar1 + 0x88) = &UNK_11076b850;
  func_0x00010322b260();
  *(long *)(lVar1 + 0x90) = lVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0x746e656d6d6f63;
  *(undefined8 *)(lVar1 + 0x78) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0xb0) = &UNK_11076b650;
  func_0x00010322b220();
  *(long *)(lVar1 + 0xb8) = lVar2;
  *(undefined8 *)(lVar1 + 0x98) = 0x6572616873;
  *(undefined8 *)(lVar1 + 0xa0) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0xd8) = &UNK_11076acd0;
  func_0x00010322afa0();
  *(long *)(lVar1 + 0xe0) = lVar2;
  *(undefined8 *)(lVar1 + 0xc0) = 0x654d6e6f69746361;
  *(undefined8 *)(lVar1 + 200) = 0xea0000000000756e;
  *(undefined **)(lVar1 + 0x100) = &UNK_11076b250;
  func_0x000103231a4c();
  *(long *)(lVar1 + 0x108) = lVar2;
  *(undefined8 *)(lVar1 + 0xe8) = 0x657469726f766166;
  *(undefined8 *)(lVar1 + 0xf0) = 0xe800000000000000;
  *(undefined **)(lVar1 + 0x128) = &UNK_11076b3d0;
  func_0x000103231a8c();
  *(long *)(lVar1 + 0x130) = lVar2;
  *(undefined8 *)(lVar1 + 0x110) = 0x6163696669746f6e;
  *(undefined8 *)(lVar1 + 0x118) = 0xed0000736e6f6974;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 9) = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = lVar1;
  return;
}



/* Entry: 103233d4c; end: 103233d63;  */

undefined8 FUN_103233d4c(void)

{
  return 1;
}



/* Entry: 103233d64; end: 103233e2b;  */

void FUN_103233d64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = *unaff_x20;
  uVar3 = *(undefined1 *)(unaff_x20 + 1);
  uVar4 = *(undefined1 *)((long)unaff_x20 + 9);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar9 = unaff_x20[4];
  uVar5 = 0;
  func_0x000103231acc();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar8);
  uVar6 = uVar2;
  func_0x000107c61174(uVar2);
  uVar7 = uVar8;
  FUN_103232178(uVar8,uVar3,uVar4,uVar1,uVar2,uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar9);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_110629150;
  *param_1 = uVar7;
  return;
}



/* Entry: 103233e2c; end: 103233e43;  */

undefined ** FUN_103233e2c(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 103233e44; end: 103233ea7;  */

long FUN_103233e44(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103233ea8; end: 103233faf;  */

undefined8 * FUN_103233ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  func_0x000107c615f0();
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103233fb0; end: 103234023;  */

undefined8 * FUN_103233fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  func_0x000107c61170(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103234024; end: 1032340c7;  */

int FUN_103234024(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032340c8; end: 1032340f7;  */

void FUN_1032340c8(void)

{
  FUN_103234134();
  return;
}



/* Entry: 1032340f8; end: 103234103;  */

void FUN_1032340f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000103235a34(0);
  func_0x000107c61534();
  uVar1 = auStack_70[0];
  FUN_1032351d4(auStack_70[0],uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,uStack_a8)
  ;
  FUN_103235210(param_1);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103234104; end: 103234133;  */

void FUN_103234104(void)

{
  FUN_103234134();
  return;
}



/* Entry: 103234134; end: 103234227;  */

void FUN_103234134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  func_0x000107c613fc(param_9,0x50,7);
  *(undefined8 *)(param_9 + 0x10) = param_1;
  *(undefined8 *)(param_9 + 0x18) = param_2;
  *(undefined8 *)(param_9 + 0x20) = param_3;
  *(undefined8 *)(param_9 + 0x28) = param_4;
  *(undefined8 *)(param_9 + 0x30) = param_5;
  *(undefined8 *)(param_9 + 0x38) = param_6;
  *(undefined8 *)(param_9 + 0x40) = param_7;
  *(undefined8 *)(param_9 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(param_10,param_9);
  return;
}



/* Entry: 103234228; end: 103234283;  */

void FUN_103234228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103234284; end: 10323428f;  */

void FUN_103234284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000103235a34(0);
  func_0x000107c61534();
  uVar1 = auStack_70[0];
  FUN_1032351d4(auStack_70[0],uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,uStack_a8)
  ;
  FUN_1032355ec(param_1);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103234290; end: 1032343b7;  */

void FUN_103234290(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000103235a34(0);
  func_0x000107c61534();
  uVar1 = auStack_70[0];
  FUN_1032351d4(auStack_70[0],uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,uStack_a8)
  ;
  (*param_2)(param_1);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1032343b8; end: 1032343d7;  */

undefined1  [16] FUN_1032343b8(void)

{
  return ZEXT816(0x1106293a0);
}



/* Entry: 1032343d8; end: 103234413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1032343d8(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = (uint)*(byte *)(unaff_x20 + 0x50);
  if (*(byte *)(unaff_x20 + 0x50) == 2) {
    uVar1 = (uint)*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130778f0);
    func_0x000108437a30();
    *(char *)(unaff_x20 + 0x50) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 103234414; end: 10323460f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103234414(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = (uint)*(byte *)(unaff_x20 + 0x51);
  if (*(byte *)(unaff_x20 + 0x51) == 2) {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      uVar1 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113043d30);
      func_0x000107c6157c(uVar2);
      func_0x0001000d224c(&uStack_38);
      func_0x000107c61574(uVar2);
      uVar2 = uStack_38;
      func_0x000107c426d0();
      uVar1 = (uint)uVar2;
      func_0x000107c615e8(uStack_38);
    }
    *(char *)(unaff_x20 + 0x51) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 103234610; end: 103234643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103234610(void)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 0x54);
  if (bVar1 == 2) {
    bVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113077928) != 0;
    *(byte *)(unaff_x20 + 0x54) = bVar1;
  }
  return bVar1 & 1;
}



/* Entry: 103234644; end: 10323473b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103234644(ulong param_1)

{
  uint uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar1 = (uint)*(byte *)(unaff_x20 + 0x55);
  if (*(byte *)(unaff_x20 + 0x55) == 2) {
    FUN_1032343d8();
    if (((param_1 & 1) == 0) || (*(long *)(unaff_x20 + 0x28) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113043d30);
      func_0x000107c6157c(uVar2);
      func_0x0001000d224c(&uStack_38);
      func_0x000107c61574(uVar2);
      uVar2 = uStack_38;
      func_0x000107c3f9f8();
      uVar1 = (uint)uVar2;
      func_0x000107c615e8(uStack_38);
    }
    *(char *)(unaff_x20 + 0x55) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 10323473c; end: 1032347ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10323473c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_1032343d8();
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + _DAT_11304a478);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&uStack_40);
    func_0x000107c61574(uVar2);
    uVar2 = uStack_40;
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 8))
              (&uStack_44,&UNK_110629680,&UNK_110738548,&PTR_DAT_11304a540,uVar2,lStack_38);
    func_0x000107c615e8(uStack_40);
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46978(uStack_44);
  }
  return;
}



/* Entry: 103234800; end: 1032349b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103234800(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x60);
  if (*(byte *)(unaff_x20 + 0x60) != 2) goto LAB_103234864;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
LAB_10323485c:
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130190c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_10323485c;
    lVar2 = lVar1;
    func_0x000107c4decc();
    uVar3 = (uint)lVar2;
    func_0x000107c615e8(lVar1);
  }
  *(char *)(unaff_x20 + 0x60) = (char)uVar3;
LAB_103234864:
  return uVar3 & 1;
}



/* Entry: 1032349b8; end: 103234d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032349b8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  func_0x000103234558();
  if ((param_1 & 1) == 0) {
    func_0x0001032344ac();
  }
  FUN_1032343d8();
  if ((param_1 & 1) != 0) {
    func_0x000103234414();
  }
  puVar1 = PTR_PTR_1126acdc8;
  func_0x000107c610f8(PTR_PTR_1126acdc8);
  func_0x000107c486bc();
  FUN_103234644();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59c94(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001032346e0();
  func_0x000107c59c98(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001002ed07c(0);
  uVar3 = 1;
  func_0x000107c6010c(1);
  func_0x000107c56608(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5660c(puVar1);
  func_0x000107c61170(puVar2);
  FUN_103234800();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59204(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000103234940();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  func_0x000107c591e4(puVar1);
  func_0x000107c61170();
  func_0x000103234878();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = &UNK_110629528;
    puVar5 = puVar4;
    func_0x000107c613fc(&UNK_110629528,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar10);
    pcStack_70 = FUN_103235a78;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f70bd8;
    puStack_78 = &UNK_110629568;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56e10(puVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c613fc(&UNK_110629528,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar10);
    pcStack_70 = (code *)0x103235aa8;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f70bd8;
    puStack_78 = &UNK_110629590;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56c5c(puVar1);
    func_0x000107c60bd0(ppuVar7);
  }
  lVar8 = *(long *)(lVar10 + _DAT_1130778f0);
  func_0x000108437b28();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar8;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
  }
  func_0x000107c5a628(puVar1);
  func_0x000107c61170(lVar11);
  if (*(char *)(lVar10 + _DAT_113077970) == '\x01') {
    puVar4 = &UNK_110629528;
    func_0x000107c613fc(&UNK_110629528,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar10);
    pcStack_70 = FUN_103235a54;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110629540;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56d08(puVar1);
    func_0x000107c60bd0(ppuVar9);
  }
  return puVar1;
}



/* Entry: 103234d50; end: 103234fef;  */

void FUN_103234d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar2 = "chromeHeaderComponentContext";
  func_0x0001000c10c0("chromeHeaderComponentContext");
  func_0x000107c61180();
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_6;
  uStack_60 = param_5;
  lStack_58 = param_4;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 103234ff0; end: 1032350a7;  */

void FUN_103234ff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "chromeHeaderComponentContext";
  func_0x0001000c10c0("chromeHeaderComponentContext");
  func_0x000107c61180();
  pcStack_40 = FUN_103235b20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110629658;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1032350a8; end: 103235137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032350a8(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_1130778e8;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_1130778e8,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4deac();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103235138; end: 1032351d3;  */

void FUN_103235138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined4 *)(unaff_x20 + 0x50) = 0x2020202;
  *(undefined2 *)(unaff_x20 + 0x54) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined2 *)(unaff_x20 + 0x60) = 0x202;
  *(undefined1 *)(unaff_x20 + 0x62) = 2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 1032351d4; end: 10323520f;  */

void FUN_1032351d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x54) = 0x202;
  *(undefined4 *)(unaff_x20 + 0x50) = 0x2020202;
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined2 *)(unaff_x20 + 0x60) = 0x202;
  *(undefined1 *)(unaff_x20 + 0x62) = 2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 103235210; end: 1032355d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103235210(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
LAB_103235300:
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  if (*(long *)(unaff_x20 + 0x40) == 0) {
    func_0x000107c615e8(lVar2);
    goto LAB_103235300;
  }
  uVar7 = *(ulong *)(*(long *)(unaff_x20 + 0x40) + _DAT_112f4e1b0);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    uVar9 = uVar7;
    func_0x000107c6157c();
  }
  else {
    uVar9 = *(ulong *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130190c8);
    func_0x000107c6157c(uVar7);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar9 != 0) {
      uVar3 = uVar9;
      func_0x000107c5d87c();
      func_0x000107c615e8();
      if ((uVar3 & 1) != 0) {
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar7);
        return;
      }
    }
  }
  FUN_103234610();
  uVar3 = uVar9;
  func_0x000103234558();
  if (((uVar3 & 1) == 0) && (func_0x0001032344ac(), (uVar3 & 1) != 0)) {
    if ((uVar9 & 1) == 0) {
      bVar8 = 0;
      uVar11 = 1;
      goto LAB_10323536c;
    }
LAB_103235344:
    FUN_1032343d8();
    bVar8 = (byte)uVar3;
    if ((uVar3 & 1) == 0) {
      uVar11 = 0;
      bVar8 = 1;
      goto LAB_10323536c;
    }
    func_0x000103234414();
  }
  else {
    if ((uVar9 & 1) != 0) goto LAB_103235344;
    bVar8 = 0;
  }
  uVar11 = 0;
LAB_10323536c:
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130778f0);
  func_0x000108437b28();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_112fbabe0);
  puVar4 = &UNK_110629488;
  func_0x000107c613fc(&UNK_110629488,0x30,7);
  puVar4[0x10] = uVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  puVar4[0x20] = bVar8 & 1;
  *(long *)(puVar4 + 0x28) = lVar10;
  func_0x0001000285a8(0x112f4dc10,&UNK_10dba03d0);
  func_0x000107c613fc();
  func_0x000107c61174(lVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  pcVar5 = FUN_1032355d8;
  func_0x0001000bdd8c(FUN_1032355d8,puVar4);
  FUN_103236324(&uStack_78,lVar2,pcVar5,uVar7);
  param_1[3] = &UNK_1106297d0;
  param_1[4] = &PTR_DAT_112f4ddd0;
  puVar4 = &UNK_1106294b0;
  func_0x000107c613fc(&UNK_1106294b0,0x38,7);
  *param_1 = puVar4;
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar4 + 0x18) = uStack_70;
  *(undefined8 *)(puVar4 + 0x10) = uStack_78;
  *(undefined8 *)(puVar4 + 0x28) = uStack_60;
  *(undefined8 *)(puVar4 + 0x20) = uStack_68;
  *(undefined8 *)(puVar4 + 0x30) = uStack_58;
  return;
}



/* Entry: 1032355d8; end: 1032355eb;  */

void FUN_1032355d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = PTR_PTR_1126acdd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c591c0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59264(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c53548(puVar1);
  func_0x000107c615e8(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5924c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a628(puVar1);
  *param_1 = puVar1;
  return;
}



/* Entry: 1032355ec; end: 10323576f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032355ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    if ((*(long *)(unaff_x20 + 0x40) != 0) &&
       (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113077930) != 0)) {
      uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_112f4e1b0);
      uVar3 = uVar6;
      func_0x000107c6157c();
      FUN_1032349b8();
      puVar4 = &UNK_1106294d8;
      func_0x000107c613fc(&UNK_1106294d8,0x18,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar3;
      func_0x0001000285a8(0x112f4dc18,&UNK_10dba03d8);
      func_0x000107c613fc();
      func_0x000107c61174(uVar3);
      pcVar5 = FUN_1032357ec;
      func_0x0001000bdd8c(FUN_1032357ec,puVar4);
      FUN_103235ca8(&uStack_78,lVar2,pcVar5,uVar6);
      param_1[3] = &UNK_110629718;
      param_1[4] = &PTR_DAT_112f4dd88;
      puVar4 = &UNK_110629500;
      func_0x000107c613fc(&UNK_110629500,0x38,7);
      *param_1 = puVar4;
      func_0x000107c61170(uVar3);
      *(undefined8 *)(puVar4 + 0x18) = uStack_70;
      *(undefined8 *)(puVar4 + 0x10) = uStack_78;
      *(undefined8 *)(puVar4 + 0x28) = uStack_60;
      *(undefined8 *)(puVar4 + 0x20) = uStack_68;
      *(undefined8 *)(puVar4 + 0x30) = uStack_58;
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103235770; end: 1032357eb;  */

void FUN_103235770(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001002ebb1c(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1032357ec; end: 1032357f7;  */

void FUN_1032357ec(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1032357f8; end: 103235a53;  */

void FUN_1032357f8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103235a54; end: 103235a77;  */

void FUN_103235a54(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  pcVar1 = "chromeHeaderComponentContext";
  func_0x0001000c10c0("chromeHeaderComponentContext");
  func_0x000107c61180();
  pcStack_40 = FUN_103235b20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110629658;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103235a78; end: 103235b1f;  */

void FUN_103235a78(void)

{
  FUN_103234d50();
  return;
}



/* Entry: 103235b20; end: 103235b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103235b20(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_1130778e8;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_1130778e8,auStack_50,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4deac();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103235b50; end: 103235c87;  */

void FUN_103235b50(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 auStack_68 [3];
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    auStack_68[0] = 0;
  }
  else {
    func_0x0001000d224c(auStack_68);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_10323703c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61614(lVar3 + 0x10,0);
  *(undefined1 *)(lVar3 + 0x30) = 2;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  func_0x000107c61604(lVar3 + 0x10,param_2);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(auStack_68[0]);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126acdd8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(auStack_68[0]);
  }
  *(undefined **)(lVar3 + 0x20) = puVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110629808;
  *param_1 = lVar3;
  return;
}



/* Entry: 103235c88; end: 103235ca7;  */

void FUN_103235c88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 auStack_68 [3];
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    auStack_68[0] = 0;
  }
  else {
    func_0x0001000d224c(auStack_68);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_10323703c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61614(lVar3 + 0x10,0);
  *(undefined1 *)(lVar3 + 0x30) = 2;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  func_0x000107c61604(lVar3 + 0x10,param_2);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(auStack_68[0]);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126acdd8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(auStack_68[0]);
  }
  *(undefined **)(lVar3 + 0x20) = puVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110629808;
  *param_1 = lVar3;
  return;
}



/* Entry: 103235ca8; end: 103235f5b;  */

void FUN_103235ca8(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112f4d830;
  func_0x0001000285a8(0x112f4d830,&UNK_10db9fc70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0xc;
  *(undefined **)(lVar1 + 0x38) = &UNK_11076b550;
  lVar2 = lVar1;
  func_0x00010322b160();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0x656c69666f7270;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x60) = &UNK_11076add0;
  func_0x000103235834();
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = 0x7475626972747461;
  *(undefined8 *)(lVar1 + 0x50) = 0xeb000000006e6f69;
  *(undefined **)(lVar1 + 0x88) = &UNK_11076ae50;
  func_0x000103235874();
  *(long *)(lVar1 + 0x90) = lVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0xd000000000000014;
  *(undefined8 *)(lVar1 + 0x78) = 0x800000010f131590;
  *(undefined **)(lVar1 + 0xb0) = &UNK_11076b750;
  FUN_103231a0c();
  *(long *)(lVar1 + 0xb8) = lVar2;
  *(undefined8 *)(lVar1 + 0x98) = 0x6269726373627573;
  *(undefined8 *)(lVar1 + 0xa0) = 0xe900000000000065;
  *(undefined **)(lVar1 + 0xd8) = &UNK_11076b7d0;
  func_0x0001032358b4();
  *(long *)(lVar1 + 0xe0) = lVar2;
  *(undefined8 *)(lVar1 + 0xc0) = 0xd000000000000012;
  *(undefined8 *)(lVar1 + 200) = 0x800000010f131510;
  *(undefined **)(lVar1 + 0x100) = &UNK_11076b3d0;
  func_0x000103231a8c();
  *(long *)(lVar1 + 0x108) = lVar2;
  *(undefined8 *)(lVar1 + 0xe8) = 0x6163696669746f6e;
  *(undefined8 *)(lVar1 + 0xf0) = 0xed0000736e6f6974;
  *(undefined **)(lVar1 + 0x128) = &UNK_11076acd0;
  func_0x00010322afa0();
  *(long *)(lVar1 + 0x130) = lVar2;
  *(undefined8 *)(lVar1 + 0x110) = 0x654d6e6f69746361;
  *(undefined8 *)(lVar1 + 0x118) = 0xea0000000000756e;
  *(undefined **)(lVar1 + 0x150) = &UNK_11076aed0;
  func_0x0001032358f4();
  *(long *)(lVar1 + 0x158) = lVar2;
  *(undefined8 *)(lVar1 + 0x138) = 0x6567646162;
  *(undefined8 *)(lVar1 + 0x140) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0x178) = &UNK_11076b2d0;
  func_0x000103235934();
  *(long *)(lVar1 + 0x180) = lVar2;
  *(undefined8 *)(lVar1 + 0x160) = 0x6e6f69746e656d;
  *(undefined8 *)(lVar1 + 0x168) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x1a0) = &UNK_11076b6d0;
  func_0x000103235974();
  *(long *)(lVar1 + 0x1a8) = lVar2;
  *(undefined8 *)(lVar1 + 0x188) = 0x726f736e6f7073;
  *(undefined8 *)(lVar1 + 400) = 0xe700000000000000;
  *(undefined **)(lVar1 + 0x1c8) = &UNK_11076b8d0;
  func_0x0001032359b4();
  *(long *)(lVar1 + 0x1d0) = lVar2;
  *(undefined8 *)(lVar1 + 0x1b0) = 0x726574736f70;
  *(undefined8 *)(lVar1 + 0x1b8) = 0xe600000000000000;
  *(undefined **)(lVar1 + 0x1f0) = &UNK_11076ba50;
  func_0x0001032359f4();
  *(long *)(lVar1 + 0x1f8) = lVar2;
  *(undefined8 *)(lVar1 + 0x1d8) = 0x747441656c746974;
  *(undefined8 *)(lVar1 + 0x1e0) = 0xef746e656d686361;
  *param_1 = 0x200;
  *(long *)(param_1 + 4) = lVar1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0xc) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  return;
}



/* Entry: 103235f5c; end: 103235f73;  */

undefined ** FUN_103235f5c(void)

{
  return &PTR_DAT_11076be48;
}



/* Entry: 103235f74; end: 103235fd7;  */

long FUN_103235f74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103235fd8; end: 1032360cf;  */

undefined2 * FUN_103235fd8(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  func_0x000107c61434();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}


