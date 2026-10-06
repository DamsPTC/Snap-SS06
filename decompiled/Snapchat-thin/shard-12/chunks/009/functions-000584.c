/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109af4454; end: 109af4467;  */

void FUN_109af4454(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 109af4468; end: 109af446f;  */

void FUN_109af4468(void)

{
  return;
}



/* Entry: 109af4470; end: 109af458b;  */

undefined8 * FUN_109af4470(undefined8 *param_1)

{
  param_1[10] = 0;
  *param_1 = &PTR_FUN_110b247d8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
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
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  FUN_109af458c();
  return param_1;
}



/* Entry: 109af458c; end: 109af4a13;  */

void FUN_109af458c(long param_1,long *param_2,long *param_3,long *param_4,uint param_5,uint param_6,
                  uint param_7,int param_8,int param_9,undefined4 param_10,undefined8 param_11)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  *(uint *)(param_1 + 8) = param_5 & 0xfff;
  *(uint *)(param_1 + 0xc) = param_6 & 0xfff;
  *(uint *)(param_1 + 0x10) = param_7 & 0xfff;
  lVar13 = *param_2;
  lVar15 = param_2[1];
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x108);
  puStack_50 = *(undefined4 **)(param_1 + 0x100);
  *(long *)(param_1 + 0x100) = lVar13;
  *(long *)(param_1 + 0x108) = lVar15;
  FUN_109b00030(&puStack_50);
  lVar13 = *param_3;
  lVar15 = param_3[1];
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x118);
  puStack_50 = *(undefined4 **)(param_1 + 0x110);
  *(long *)(param_1 + 0x110) = lVar13;
  *(long *)(param_1 + 0x118) = lVar15;
  FUN_109b00084(&puStack_50);
  lVar13 = *param_4;
  lVar15 = param_4[1];
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x128);
  puStack_50 = *(undefined4 **)(param_1 + 0x120);
  *(long *)(param_1 + 0x120) = lVar13;
  *(long *)(param_1 + 0x128) = lVar15;
  FUN_109b000d8(&puStack_50);
  iVar11 = param_8;
  if (-1 < param_9) {
    iVar11 = param_9;
  }
  *(int *)(param_1 + 0x48) = param_8;
  *(int *)(param_1 + 0x4c) = iVar11;
  if (iVar11 == 3) {
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x1f;
    *(undefined1 *)((long)puVar6 + 0x23) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x6570795472656472;
    *(undefined8 *)(puVar6 + 1) = 0x6f426e6d756c6f63;
    *(undefined8 *)((long)puVar6 + 0x1b) = 0x504152575f524544;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x524f42203d212065;
    FUN_109ac3188(0xffffff29,&puStack_50,"init",&UNK_10f59c7f0,0x7b);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x108);
    if (lVar13 == 0) {
      lVar13 = *(long *)(param_1 + 0x118);
      if ((lVar13 == 0) || (lVar15 = *(long *)(param_1 + 0x128), lVar15 == 0)) {
        puVar6 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        puStack_50 = puVar6 + 1;
        uStack_48 = 0x19;
        *(undefined1 *)((long)puVar6 + 0x1d) = 0;
        *(undefined8 *)(puVar6 + 3) = 0x6c6f632026262072;
        *(undefined8 *)(puVar6 + 1) = 0x65746c6946776f72;
        *(undefined8 *)((long)puVar6 + 0x15) = 0x7265746c69466e6d;
        *(undefined8 *)((long)puVar6 + 0xd) = 0x756c6f6320262620;
        FUN_109ac3188(0xffffff29,&puStack_50,"init",&UNK_10f59c7f0,0x7f);
        goto LAB_109af4990;
      }
      iVar11 = *(int *)(lVar13 + 8);
      iVar8 = *(int *)(lVar15 + 8);
      *(int *)(param_1 + 0x14) = iVar11;
      *(int *)(param_1 + 0x18) = iVar8;
      iVar14 = *(int *)(lVar13 + 0xc);
      iVar10 = *(int *)(lVar15 + 0xc);
      *(int *)(param_1 + 0x1c) = iVar14;
    }
    else {
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 8)) {
        puVar6 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        puStack_50 = puVar6 + 1;
        uStack_48 = 0x12;
        *(undefined1 *)((long)puVar6 + 0x16) = 0;
        *(undefined2 *)(puVar6 + 5) = 0x6570;
        *(undefined8 *)(puVar6 + 3) = 0x7954637273203d3d;
        *(undefined8 *)(puVar6 + 1) = 0x2065707954667562;
        FUN_109ac3188(0xffffff29,&puStack_50,"init",&UNK_10f59c7f0,0x85);
        goto LAB_109af4990;
      }
      iVar11 = *(int *)(lVar13 + 8);
      *(int *)(param_1 + 0x14) = iVar11;
      iVar8 = *(int *)(lVar13 + 0xc);
      *(int *)(param_1 + 0x18) = iVar8;
      iVar14 = *(int *)(lVar13 + 0x10);
      *(int *)(param_1 + 0x1c) = iVar14;
      iVar10 = *(int *)(lVar13 + 0x14);
    }
    *(int *)(param_1 + 0x20) = iVar10;
    if ((((-1 < iVar14) && (iVar14 < iVar11)) && (-1 < iVar10)) && (iVar10 < iVar8)) {
      uVar12 = (param_5 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_5 & 7) << 1) & 3);
      uVar2 = uVar12 >> (ulong)(*(uint *)(param_1 + 8) >> 1 & 2);
      *(uint *)(param_1 + 0x68) = uVar2;
      if (iVar11 < 3) {
        iVar11 = 2;
      }
      iVar11 = iVar11 + -1;
      func_0x000108a5942c(param_1 + 0x50,uVar2 * iVar11);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
      if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
        plVar16 = (long *)(param_1 + 0xa0);
        lVar13 = *plVar16;
        uVar9 = (ulong)(iVar11 * uVar12);
        uVar7 = *(long *)(param_1 + 0xa8) - lVar13;
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
          if (uVar9 < uVar7) {
            *(ulong *)(param_1 + 0xa8) = lVar13 + uVar9;
          }
        }
        else {
          func_0x000107c27d58(plVar16,uVar9 - uVar7);
          lVar13 = *plVar16;
        }
        uVar2 = *(uint *)(param_1 + 8) >> 3 & 0x1ff;
        uVar12 = uVar2;
        if (2 < uVar2) {
          uVar12 = 3;
        }
        FUN_109a89dc8(param_11,lVar13,*(uint *)(param_1 + 8) & 7 | uVar12 << 3,
                      iVar11 + iVar11 * uVar2);
      }
      *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
      return;
    }
    puVar6 = (undefined4 *)0x58;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 7) = 0x7a69736b203c2078;
    *(undefined8 *)(puVar6 + 5) = 0x2e726f68636e6120;
    *(undefined8 *)(puVar6 + 0xb) = 0x203d3c2030202626;
    *(undefined8 *)(puVar6 + 9) = 0x2068746469772e65;
    *(undefined4 *)((long)puVar6 + 0x53) = 0x74686769;
    *(undefined8 *)(puVar6 + 0xf) = 0x68636e6120262620;
    *(undefined8 *)(puVar6 + 0xd) = 0x792e726f68636e61;
    *(undefined8 *)(puVar6 + 0x13) = 0x6965682e657a6973;
    *(undefined8 *)(puVar6 + 0x11) = 0x6b203c20792e726f;
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x53;
    *(undefined1 *)((long)puVar6 + 0x57) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x262620782e726f68;
    *(undefined8 *)(puVar6 + 1) = 0x636e61203d3c2030;
    FUN_109ac3188(0xffffff29,&puStack_50,"init",&UNK_10f59c7f0,0x8b);
  }
LAB_109af4990:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af4994);
  (*pcVar5)();
}



/* Entry: 109af4a14; end: 109af4ab7;  */

undefined8 * FUN_109af4a14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b247d8;
  FUN_109b000d8(param_1 + 0x24);
  FUN_109b00084(param_1 + 0x22);
  FUN_109b00030(param_1 + 0x20);
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109af4ab8; end: 109af4abb;  */

undefined8 * FUN_109af4ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b247d8;
  FUN_109b000d8(param_1 + 0x24);
  FUN_109b00084(param_1 + 0x22);
  FUN_109b00030(param_1 + 0x20);
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109af4abc; end: 109af4acf;  */

void FUN_109af4abc(void)

{
  FUN_109af4a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109af4ad0; end: 109af50cb;  */

undefined4 FUN_109af4ad0(long param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  undefined8 uVar28;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  uVar28 = *(undefined8 *)param_2;
  iVar12 = *param_2;
  iVar14 = param_2[1];
  iVar25 = *param_3;
  iVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x28) = uVar28;
  iVar17 = param_3[2];
  iVar4 = param_3[3];
  *(int *)(param_1 + 0x38) = iVar17;
  *(int *)(param_1 + 0x3c) = iVar4;
  if ((((iVar25 < 0) || (iVar3 < 0)) || (iVar17 < 0)) ||
     ((iVar4 < 0 || (iVar12 < iVar17 + iVar25 || iVar14 < iVar4 + iVar3)))) {
    puVar11 = (undefined4 *)0x94;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar11 + 0x17) = 0x2e657a6953656c6f;
    *(undefined8 *)(puVar11 + 0x15) = 0x6877203d3c206874;
    *(undefined8 *)(puVar11 + 0x1b) = 0x2b20792e696f7220;
    *(undefined8 *)(puVar11 + 0x19) = 0x2626206874646977;
    *(undefined8 *)(puVar11 + 0x1f) = 0x77203d3c20746867;
    *(undefined8 *)(puVar11 + 0x1d) = 0x6965682e696f7220;
    *(undefined8 *)((long)puVar11 + 0x8b) = 0x7468676965682e65;
    *(undefined8 *)((long)puVar11 + 0x83) = 0x7a6953656c6f6877;
    *(undefined8 *)(puVar11 + 7) = 0x2e696f7220262620;
    *(undefined8 *)(puVar11 + 5) = 0x30203d3e20792e69;
    *(undefined8 *)(puVar11 + 0xb) = 0x6f72202626203020;
    *(undefined8 *)(puVar11 + 9) = 0x3d3e206874646977;
    *(undefined8 *)(puVar11 + 0xf) = 0x26262030203d3e20;
    *(undefined8 *)(puVar11 + 0xd) = 0x7468676965682e69;
    *(undefined8 *)(puVar11 + 0x13) = 0x6469772e696f7220;
    *(undefined8 *)(puVar11 + 0x11) = 0x2b20782e696f7220;
    *puVar11 = 1;
    puStack_60 = puVar11 + 1;
    uStack_58 = 0x8f;
    *(undefined1 *)((long)puVar11 + 0x93) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x6f72202626203020;
    *(undefined8 *)(puVar11 + 1) = 0x3d3e20782e696f72;
    FUN_109ac3188(0xffffff29,&puStack_60,"start",&UNK_10f59c7f0,0xa9);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109af50a0);
    (*pcVar10)();
  }
  iVar12 = (*(uint *)(param_1 + 8) >> 3 & 0x1ff) + 1 <<
           (ulong)(0xfa50U >> (ulong)((*(uint *)(param_1 + 8) & 7) << 1) & 3);
  iVar25 = (*(uint *)(param_1 + 0x10) >> 3 & 0x1ff) + 1 <<
           (ulong)(0xfa50U >> (ulong)((*(uint *)(param_1 + 0x10) & 7) << 1) & 3);
  puVar5 = *(undefined1 **)(param_1 + 0xa0);
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != *(undefined1 **)(param_1 + 0xa8)) {
    puVar2 = puVar5;
  }
  iVar14 = *(int *)(param_1 + 0x18) + 3;
  if (-1 < param_4) {
    iVar14 = param_4;
  }
  uVar18 = *(uint *)(param_1 + 0x20);
  uVar1 = *(int *)(param_1 + 0x18) + ~uVar18;
  if ((int)uVar18 <= (int)uVar1) {
    uVar18 = uVar1;
  }
  if (iVar14 <= (int)(uVar18 << 1 | 1)) {
    iVar14 = uVar18 * 2 + 1;
  }
  if ((*(int *)(param_1 + 0x24) < iVar17) ||
     (iVar14 != (int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3))) {
    FUN_109ac9e9c(param_1 + 0xe8,(long)iVar14);
    puVar24 = (ulong *)(param_1 + 0x88);
    iVar17 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x38)) {
      iVar17 = *(int *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x24) = iVar17;
    uVar1 = *(uint *)(param_1 + 8);
    uVar15 = (long)iVar12 * (long)(iVar17 + *(int *)(param_1 + 0x14) + -1);
    uVar19 = *(long *)(param_1 + 0x90) - *puVar24;
    if (uVar15 < uVar19 || uVar15 - uVar19 == 0) {
      if (uVar15 < uVar19) {
        *(ulong *)(param_1 + 0x90) = *puVar24 + uVar15;
      }
    }
    else {
      func_0x000107c27d58(puVar24,uVar15 - uVar19);
      iVar17 = *(int *)(param_1 + 0x24);
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      lVar13 = *(long *)(param_1 + 0xb8);
      iVar14 = *(int *)(param_1 + 0x14);
      uVar15 = (long)(int)((*(uint *)(param_1 + 0x10) >> 3 & 0x1ff) + 1 <<
                          (ulong)(0xfa50U >> (ulong)((*(uint *)(param_1 + 0x10) & 7) << 1) & 3)) *
               (long)(iVar17 + iVar14 + 0xf);
      uVar19 = *(long *)(param_1 + 0xc0) - lVar13;
      if (uVar15 < uVar19 || uVar15 - uVar19 == 0) {
        if (uVar15 < uVar19) {
          *(ulong *)(param_1 + 0xc0) = lVar13 + uVar15;
        }
      }
      else {
        func_0x000107c27d58((long *)(param_1 + 0xb8),uVar15 - uVar19);
        lVar13 = *(long *)(param_1 + 0xb8);
        iVar17 = *(int *)(param_1 + 0x24);
        iVar14 = *(int *)(param_1 + 0x14);
      }
      uVar19 = lVar13 + 0xfU & 0xfffffffffffffff0;
      iVar14 = (iVar14 + iVar17 + -1) * iVar12;
      lVar13 = *(long *)(param_1 + 0x108);
      uVar15 = uVar19;
      if (lVar13 == 0) {
        uVar15 = *puVar24;
      }
      if (0 < iVar14) {
        iVar17 = 0;
        uVar20 = (ulong)(uint)(*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa0));
        do {
          uVar18 = iVar14 - iVar17;
          if ((int)(uint)uVar20 <= iVar14 - iVar17) {
            uVar18 = (uint)uVar20;
          }
          uVar20 = (ulong)uVar18;
          if (0 < (int)uVar18) {
            puVar21 = (undefined1 *)(uVar15 + (long)iVar17);
            puVar22 = puVar5;
            uVar23 = uVar20;
            do {
              *puVar21 = *puVar22;
              uVar23 = uVar23 - 1;
              puVar21 = puVar21 + 1;
              puVar22 = puVar22 + 1;
            } while (uVar23 != 0);
          }
          iVar17 = uVar18 + iVar17;
        } while (iVar17 < iVar14);
        lVar13 = *(long *)(param_1 + 0x108);
        iVar17 = *(int *)(param_1 + 0x24);
      }
      if (lVar13 == 0) {
        (**(code **)(**(long **)(param_1 + 0x118) + 0x10))
                  (*(long **)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x88),uVar19,iVar17,
                   (uVar1 >> 3 & 0x1ff) + 1);
        iVar17 = *(int *)(param_1 + 0x24);
      }
    }
    iVar14 = 0;
    if (*(long *)(param_1 + 0x108) != 0) {
      iVar14 = *(int *)(param_1 + 0x14) + -1;
    }
    lVar13 = *(long *)(param_1 + 0x70);
    uVar15 = (long)(int)(iVar25 * (iVar17 + iVar14 + 0xfU & 0xfffffff0)) *
             (*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 3) + 0x10;
    uVar19 = *(long *)(param_1 + 0x78) - lVar13;
    if (uVar15 < uVar19 || uVar15 - uVar19 == 0) {
      if (uVar15 < uVar19) {
        *(ulong *)(param_1 + 0x78) = lVar13 + uVar15;
      }
    }
    else {
      func_0x000107c27d58((long *)(param_1 + 0x70),uVar15 - uVar19);
    }
  }
  iVar17 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    iVar17 = *(int *)(param_1 + 0x14) + -1;
  }
  *(uint *)(param_1 + 0xd0) = (*(int *)(param_1 + 0x38) + iVar17 + 0xfU & 0xfffffff0) * iVar25;
  uVar6 = *(uint *)(param_1 + 0x1c);
  uVar7 = *(uint *)(param_1 + 0x30);
  uVar9 = uVar6 - uVar7;
  uVar1 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  uVar15 = (ulong)uVar1;
  iVar25 = *(int *)(param_1 + 0x28);
  uVar8 = (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x38) + ~uVar6 + uVar7) - iVar25;
  uVar18 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x44) = uVar18;
  if ((uVar9 != 0 && (int)uVar7 <= (int)uVar6) || (0 < (int)uVar8)) {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        iVar25 = 1;
      }
      else {
        iVar25 = (int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3);
        if (iVar25 < 1) goto LAB_109af4f90;
      }
      iVar17 = 0;
      do {
        if (*(long *)(param_1 + 0x108) == 0) {
          lVar13 = *(long *)(param_1 + 0x88);
        }
        else {
          lVar13 = (*(long *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0) +
                   (long)*(int *)(param_1 + 0xd0) * (long)iVar17;
        }
        _memcpy(lVar13,puVar2,(long)*(int *)(param_1 + 0x40) * (long)iVar12);
        _memcpy(lVar13 + (long)iVar12 *
                         (long)(int)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x38) +
                                    ~*(uint *)(param_1 + 0x44)),puVar2,
                (long)(int)(*(uint *)(param_1 + 0x44) * iVar12));
        iVar17 = iVar17 + 1;
      } while (iVar25 != iVar17);
    }
    else {
      if ((int)uVar7 <= (int)uVar6) {
        uVar6 = uVar7;
      }
      uVar1 = *(uint *)(param_1 + 0x68);
      piVar26 = *(int **)(param_1 + 0x50);
      if (0 < (int)uVar9) {
        lVar13 = 0;
        piVar27 = piVar26;
        do {
          iVar12 = (int)lVar13 - (int)uVar15;
          FUN_109a49ec4(iVar12,iVar25,*(undefined4 *)(param_1 + 0x48));
          if (0 < (int)uVar1) {
            iVar12 = (iVar12 + (uVar6 - uVar7)) * uVar1;
            piVar16 = piVar27;
            uVar15 = (ulong)uVar1;
            do {
              *piVar16 = iVar12;
              iVar12 = iVar12 + 1;
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 1;
            } while (uVar15 != 0);
          }
          lVar13 = lVar13 + 1;
          uVar15 = (ulong)*(int *)(param_1 + 0x40);
          piVar27 = piVar27 + uVar1;
        } while (lVar13 < (long)uVar15);
        uVar18 = *(uint *)(param_1 + 0x44);
      }
      if (0 < (int)uVar18) {
        iVar12 = 0;
        do {
          iVar17 = iVar12 + iVar25;
          FUN_109a49ec4(iVar17,iVar25,*(undefined4 *)(param_1 + 0x48));
          if (0 < (int)uVar1) {
            lVar13 = 0;
            do {
              piVar26[lVar13 + (int)(uVar1 * (iVar12 + *(int *)(param_1 + 0x40)))] =
                   (iVar17 + (uVar6 - uVar7)) * uVar1 + (int)lVar13;
              lVar13 = lVar13 + 1;
            } while (uVar1 != (uint)lVar13);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(param_1 + 0x44));
      }
    }
  }
LAB_109af4f90:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar1 = *(int *)(param_1 + 0x34) - *(uint *)(param_1 + 0x20);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0xd4) = uVar1;
  *(uint *)(param_1 + 0xd8) = uVar1;
  iVar12 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + ~*(uint *)(param_1 + 0x20) +
           *(int *)(param_1 + 0x18);
  iVar25 = *(int *)(param_1 + 0x2c);
  if (iVar12 <= *(int *)(param_1 + 0x2c)) {
    iVar25 = iVar12;
  }
  *(int *)(param_1 + 0xdc) = iVar25;
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18))();
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
  }
  return *(undefined4 *)(param_1 + 0xd4);
}



/* Entry: 109af50cc; end: 109af529b;  */

int FUN_109af50cc(long *param_1,long param_2,int *param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = *param_3;
  iVar6 = param_3[1];
  iVar5 = param_3[2];
  iVar2 = param_3[3];
  if (iVar1 == 0 && iVar6 == 0) {
    if (iVar5 == -1) {
      if (iVar2 == -1) {
        iVar6 = 0;
        iVar2 = *(int *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar6 = 0;
        iVar5 = -1;
      }
    }
    else {
      iVar6 = 0;
    }
  }
  if ((((-1 < iVar1) && (-1 < iVar6)) && (-1 < iVar5)) &&
     (((-1 < iVar2 && (iStack_60 = *(int *)(param_2 + 0xc), iVar5 + iVar1 <= iStack_60)) &&
      (iStack_5c = *(int *)(param_2 + 8), iVar2 + iVar6 <= iStack_5c)))) {
    uStack_58._4_4_ = 0;
    uStack_58._0_4_ = 0;
    uStack_58 = 0;
    if ((param_4 & 1) == 0) {
      FUN_109a86b88(param_2,&iStack_60,&uStack_58);
    }
    uStack_50 = (undefined4 *)CONCAT44(uStack_58._4_4_ + iVar6,(int)uStack_58 + iVar1);
    uStack_48 = CONCAT44(iVar2,iVar5);
    iStack_68 = iStack_60;
    iStack_64 = iStack_5c;
    (**(code **)(*param_1 + 0x10))(param_1,&iStack_68,&uStack_50,param_5);
    return *(int *)((long)param_1 + 0xd4) - uStack_58._4_4_;
  }
  puVar4 = (undefined4 *)0xa0;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  uStack_50 = puVar4 + 1;
  uStack_48 = 0x98;
  *(undefined8 *)(puVar4 + 0x1b) = 0x736c6f632e637273;
  *(undefined8 *)(puVar4 + 0x19) = 0x203d3c2068746469;
  *(undefined8 *)(puVar4 + 0x1f) = 0x73202b20792e696f;
  *(undefined8 *)(puVar4 + 0x1d) = 0x5263727320262620;
  *(undefined8 *)(puVar4 + 0x23) = 0x203d3c2074686769;
  *(undefined8 *)(puVar4 + 0x21) = 0x65682e696f526372;
  *(undefined8 *)(puVar4 + 0xb) = 0x3e2068746469772e;
  *(undefined8 *)(puVar4 + 9) = 0x696f526372732026;
  *(undefined8 *)(puVar4 + 0xf) = 0x65682e696f526372;
  *(undefined8 *)(puVar4 + 0xd) = 0x732026262030203d;
  *(undefined8 *)(puVar4 + 0x13) = 0x6372732026262030;
  *(undefined8 *)(puVar4 + 0x11) = 0x203d3e2074686769;
  *(undefined8 *)(puVar4 + 0x17) = 0x772e696f52637273;
  *(undefined8 *)(puVar4 + 0x15) = 0x202b20782e696f52;
  *(undefined8 *)(puVar4 + 3) = 0x26262030203d3e20;
  *(undefined8 *)(puVar4 + 1) = 0x782e696f52637273;
  *(undefined1 *)(puVar4 + 0x27) = 0;
  *(undefined8 *)(puVar4 + 0x25) = 0x73776f722e637273;
  *(undefined8 *)(puVar4 + 7) = 0x262030203d3e2079;
  *(undefined8 *)(puVar4 + 5) = 0x2e696f5263727320;
  FUN_109ac3188(0xffffff29,&uStack_50,"start",&UNK_10f59c7f0,0x112);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109af5270);
  (*pcVar3)();
}



/* Entry: 109af529c; end: 109af5987;  */

void FUN_109af529c(long param_1,long param_2,int param_3,uint param_4,long param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  bool bVar17;
  uint uVar18;
  long *plVar19;
  int *piVar20;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined1 *puVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  undefined4 *puVar30;
  ulong uVar31;
  undefined4 *puVar32;
  int iStack_e4;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  if ((*(int *)(param_1 + 0x28) < 1) || (*(int *)(param_1 + 0x2c) < 1)) {
    puVar32 = (undefined4 *)0x30;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar32 + 3) = 0x2068746469772e65;
    *(undefined8 *)(puVar32 + 1) = 0x7a6953656c6f6877;
    *puVar32 = 1;
    puStack_78 = (undefined8 *)(puVar32 + 1);
    uStack_70 = 0x2b;
    *(undefined1 *)((long)puVar32 + 0x2f) = 0;
    *(undefined8 *)(puVar32 + 7) = 0x657a6953656c6f68;
    *(undefined8 *)(puVar32 + 5) = 0x772026262030203e;
    *(undefined8 *)((long)puVar32 + 0x27) = 0x30203e2074686769;
    *(undefined8 *)((long)puVar32 + 0x1f) = 0x65682e657a695365;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f4666e6,&UNK_10f59c7f0,299);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x40);
    uVar6 = *(uint *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x1c)) {
      iVar3 = *(int *)(param_1 + 0x30);
    }
    if ((iVar5 < 1) && ((int)uVar6 < 1)) {
      bVar17 = false;
    }
    else {
      bVar17 = *(int *)(param_1 + 0x48) != 0;
    }
    iVar21 = *(int *)(param_1 + 0xd4);
    iVar26 = *(int *)(param_1 + 0xe0);
    uVar18 = *(int *)(param_1 + 0xdc) - (iVar21 + iVar26);
    if ((int)param_4 <= (int)uVar18) {
      uVar18 = param_4;
    }
    if (((param_2 != 0) && (param_5 != 0)) && (0 < (int)uVar18)) {
      iStack_e4 = 0;
      lVar7 = *(long *)(param_1 + 0xe8);
      piVar20 = *(int **)(param_1 + 0x50);
      iVar2 = (*(uint *)(param_1 + 0x10) >> 3 & 0x1ff) + 1;
      iVar8 = *(int *)(param_1 + 0x38);
      iVar12 = (*(uint *)(param_1 + 8) >> 3 & 0x1ff) + 1 <<
               (ulong)(0xfa50U >> (ulong)((*(uint *)(param_1 + 8) & 7) << 1) & 3);
      iVar9 = *(int *)(param_1 + 0x68);
      iVar10 = *(int *)(param_1 + 0x18);
      iVar11 = *(int *)(param_1 + 0x20);
      lVar29 = *(long *)(param_1 + 0x108);
      param_2 = param_2 - iVar3 * iVar12;
      uVar28 = (uint)((ulong)(*(long *)(param_1 + 0xf0) - lVar7) >> 3);
      uVar13 = iVar5 * iVar12;
      iVar3 = *(int *)(param_1 + 0x14) + iVar8 + ~uVar6;
      uVar14 = iVar5 * iVar9;
      do {
        iVar26 = uVar28 - (iVar11 + iVar21 + iVar26);
        uVar27 = iVar26 + *(int *)(param_1 + 0x34);
        if (uVar27 == 0 || (int)uVar27 < 0 != SCARRY4(iVar26,*(int *)(param_1 + 0x34))) {
          uVar27 = (uVar28 - iVar10) + 1;
        }
        uVar4 = uVar18;
        if ((int)uVar27 <= (int)uVar18) {
          uVar4 = uVar27;
        }
        uVar27 = uVar4;
        if (0 < (int)uVar4) {
          do {
            iVar21 = *(int *)(param_1 + 0xe0);
            iVar26 = (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd8)) + iVar21;
            iVar15 = 0;
            if (uVar28 != 0) {
              iVar15 = iVar26 / (int)uVar28;
            }
            puVar30 = (undefined4 *)
                      ((*(long *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0) +
                      (long)*(int *)(param_1 + 0xd0) * (long)(int)(iVar26 - iVar15 * uVar28));
            puVar32 = puVar30;
            if (lVar29 == 0) {
              puVar32 = *(undefined4 **)(param_1 + 0x88);
            }
            *(int *)(param_1 + 0xe0) = iVar21 + 1;
            if ((int)uVar28 <= iVar21) {
              *(int *)(param_1 + 0xe0) = iVar21;
              *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
            }
            _memcpy((long)puVar32 + (long)(int)uVar13,param_2,(long)((iVar3 - iVar5) * iVar12));
            if (bVar17) {
              if (iVar9 << 2 == iVar12) {
                piVar23 = piVar20;
                puVar22 = puVar32;
                uVar25 = (ulong)uVar14;
                if (0 < (int)uVar14) {
                  do {
                    *puVar22 = *(undefined4 *)(param_2 + (long)*piVar23 * 4);
                    uVar25 = uVar25 - 1;
                    piVar23 = piVar23 + 1;
                    puVar22 = puVar22 + 1;
                  } while (uVar25 != 0);
                }
                if (0 < (int)(uVar6 * iVar9)) {
                  puVar22 = puVar32 + iVar3 * iVar9;
                  piVar23 = piVar20 + (int)uVar14;
                  uVar25 = (ulong)(uVar6 * iVar9);
                  do {
                    *puVar22 = *(undefined4 *)(param_2 + (long)*piVar23 * 4);
                    uVar25 = uVar25 - 1;
                    puVar22 = puVar22 + 1;
                    piVar23 = piVar23 + 1;
                  } while (uVar25 != 0);
                }
              }
              else {
                piVar23 = piVar20;
                puVar22 = puVar32;
                uVar25 = (ulong)uVar13;
                if (0 < (int)uVar13) {
                  do {
                    *(undefined1 *)puVar22 = *(undefined1 *)(param_2 + *piVar23);
                    uVar25 = uVar25 - 1;
                    piVar23 = piVar23 + 1;
                    puVar22 = (undefined4 *)((long)puVar22 + 1);
                  } while (uVar25 != 0);
                }
                if (0 < (int)(uVar6 * iVar12)) {
                  puVar24 = (undefined1 *)((long)puVar32 + (long)(iVar3 * iVar12));
                  piVar23 = piVar20 + (int)uVar13;
                  uVar25 = (ulong)(uVar6 * iVar12);
                  do {
                    *puVar24 = *(undefined1 *)(param_2 + *piVar23);
                    uVar25 = uVar25 - 1;
                    puVar24 = puVar24 + 1;
                    piVar23 = piVar23 + 1;
                  } while (uVar25 != 0);
                }
              }
            }
            if (lVar29 == 0) {
              (**(code **)(**(long **)(param_1 + 0x118) + 0x10))
                        (*(long **)(param_1 + 0x118),puVar32,puVar30,iVar8,
                         (*(uint *)(param_1 + 8) >> 3 & 0x1ff) + 1);
            }
            param_2 = param_2 + param_3;
            bVar1 = 1 < uVar27;
            uVar27 = uVar27 - 1;
          } while (bVar1);
        }
        uVar27 = (iVar10 + -1 + *(int *)(param_1 + 0x3c)) - (iStack_e4 + *(int *)(param_1 + 0xe4));
        if ((int)uVar28 <= (int)uVar27) {
          uVar27 = uVar28;
        }
        if ((int)uVar27 < 1) {
          uVar25 = 0;
        }
        else {
          uVar31 = 0;
          do {
            iVar26 = (iStack_e4 - iVar11) + (int)uVar31 +
                     *(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0x34);
            FUN_109a49ec4(iVar26,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x4c));
            if (iVar26 < 0) {
              uVar25 = *(long *)(param_1 + 0xb8) + 0xfU & 0xfffffffffffffff0;
            }
            else {
              if (iVar26 < *(int *)(param_1 + 0xd4)) {
                puVar32 = (undefined4 *)0x14;
                func_0x000107c2ae8c();
                *puVar32 = 1;
                puStack_78 = (undefined8 *)(puVar32 + 1);
                *puStack_78 = 0x203d3e2059637273;
                uStack_70 = 0xe;
                *(undefined1 *)((long)puVar32 + 0x12) = 0;
                *(undefined8 *)((long)puVar32 + 10) = 0x597472617473203d;
                FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f4666e6,&UNK_10f59c7f0,0x176);
                goto LAB_109af5904;
              }
              uVar25 = uVar31;
              if (*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xd4) <= iVar26) break;
              iVar26 = iVar26 - *(int *)(param_1 + 0xd8);
              iVar21 = 0;
              if (uVar28 != 0) {
                iVar21 = iVar26 / (int)uVar28;
              }
              uVar25 = (*(long *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0) +
                       (long)*(int *)(param_1 + 0xd0) * (long)(int)(iVar26 - iVar21 * uVar28);
            }
            *(ulong *)(lVar7 + uVar31 * 8) = uVar25;
            uVar31 = uVar31 + 1;
            uVar25 = (ulong)uVar27;
          } while (uVar27 != uVar31);
        }
        if ((int)uVar25 < iVar10) goto LAB_109af5748;
        iVar26 = (int)uVar25 - (iVar10 + -1);
        plVar19 = *(long **)(param_1 + 0x108);
        if (plVar19 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x128) + 0x10))
                    (*(long **)(param_1 + 0x128),lVar7,param_5,param_6,iVar26,
                     *(int *)(param_1 + 0x38) * iVar2);
        }
        else {
          (**(code **)(*plVar19 + 0x10))
                    (plVar19,lVar7,param_5,param_6,iVar26,*(undefined4 *)(param_1 + 0x38),iVar2);
        }
        uVar18 = uVar18 - uVar4;
        param_5 = param_5 + iVar26 * param_6;
        iStack_e4 = iVar26 + iStack_e4;
        iVar21 = *(int *)(param_1 + 0xd4);
        iVar26 = *(int *)(param_1 + 0xe0);
      } while( true );
    }
    puVar32 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar32 = 1;
    puStack_78 = (undefined8 *)(puVar32 + 1);
    uStack_70 = 0x17;
    *(undefined1 *)((long)puVar32 + 0x1b) = 0;
    *(undefined8 *)(puVar32 + 3) = 0x6f63202626207473;
    *(undefined8 *)(puVar32 + 1) = 0x6420262620637273;
    *(undefined8 *)((long)puVar32 + 0x13) = 0x30203e20746e756f;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f4666e6,&UNK_10f59c7f0,0x13e);
  }
LAB_109af5904:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x109af5908);
  (*pcVar16)();
LAB_109af5748:
  iStack_e4 = *(int *)(param_1 + 0xe4) + iStack_e4;
  *(int *)(param_1 + 0xe4) = iStack_e4;
  if (iStack_e4 <= *(int *)(param_1 + 0x3c)) {
    return;
  }
  puVar32 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar32 = 1;
  puStack_78 = (undefined8 *)(puVar32 + 1);
  uStack_70 = 0x12;
  *(undefined1 *)((long)puVar32 + 0x16) = 0;
  *(undefined2 *)(puVar32 + 5) = 0x7468;
  *(undefined8 *)(puVar32 + 3) = 0x676965682e696f72;
  *(undefined8 *)(puVar32 + 1) = 0x203d3c2059747364;
  FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f4666e6,&UNK_10f59c7f0,0x187);
  goto LAB_109af5904;
}



/* Entry: 109af5988; end: 109af5c27;  */

void FUN_109af5988(long *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (((*param_2 & 0xfff) != *(uint *)(param_1 + 1)) ||
     ((*param_3 & 0xfff) != *(uint *)((long)param_1 + 0xc))) {
    puVar3 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_40 = puVar3 + 1;
    uStack_38 = 0x2e;
    *(undefined8 *)(puVar3 + 3) = 0x7273203d3d202928;
    *(undefined8 *)(puVar3 + 1) = 0x657079742e637273;
    *(undefined1 *)((long)puVar3 + 0x32) = 0;
    *(undefined8 *)(puVar3 + 7) = 0x7079742e74736420;
    *(undefined8 *)(puVar3 + 5) = 0x2626206570795463;
    *(undefined8 *)((long)puVar3 + 0x2a) = 0x6570795474736420;
    *(undefined8 *)((long)puVar3 + 0x22) = 0x3d3d202928657079;
    FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f2de481,&UNK_10f59c7f0,399);
LAB_109af5bdc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109af5be0);
    (*pcVar1)();
  }
  puStack_40 = *(undefined4 **)param_4;
  uVar5 = param_4[2];
  uVar4 = param_4[3];
  uStack_38 = *(undefined8 *)(param_4 + 2);
  if ((((*param_4 == 0) && (param_4[1] == 0)) && (uVar5 == 0xffffffff)) && (uVar4 == 0xffffffff)) {
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puStack_40 = (undefined4 *)0x0;
    uStack_38 = CONCAT44(uVar4,uVar5);
  }
  if (uVar5 * uVar4 != 0) {
    if (((*param_5 < 0) || (param_5[1] < 0)) ||
       (((int)param_3[3] < (int)(*param_5 + uVar5) || ((int)param_3[2] < (int)(param_5[1] + uVar4)))
       )) {
      puVar3 = (undefined4 *)0x74;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar3 + 0xf) = 0x747364203d3c2068;
      *(undefined8 *)(puVar3 + 0xd) = 0x746469772e696f52;
      *(undefined8 *)(puVar3 + 0x13) = 0x2e73664f74736420;
      *(undefined8 *)(puVar3 + 0x11) = 0x262620736c6f632e;
      *(undefined8 *)(puVar3 + 0x17) = 0x68676965682e696f;
      *(undefined8 *)(puVar3 + 0x15) = 0x52637273202b2079;
      *(undefined8 *)((long)puVar3 + 0x69) = 0x73776f722e747364;
      *(undefined8 *)((long)puVar3 + 0x61) = 0x203d3c2074686769;
      *(undefined8 *)(puVar3 + 3) = 0x26262030203d3e20;
      *(undefined8 *)(puVar3 + 1) = 0x782e73664f747364;
      *(undefined8 *)(puVar3 + 7) = 0x262030203d3e2079;
      *(undefined8 *)(puVar3 + 5) = 0x2e73664f74736420;
      *puVar3 = 1;
      puStack_50 = puVar3 + 1;
      uStack_48 = 0x6d;
      *(undefined1 *)((long)puVar3 + 0x71) = 0;
      *(undefined8 *)(puVar3 + 0xb) = 0x637273202b20782e;
      *(undefined8 *)(puVar3 + 9) = 0x73664f7473642026;
      FUN_109ac3188(0xffffff29,&puStack_50,&DAT_10f2de481,&UNK_10f59c7f0,0x19a);
      goto LAB_109af5bdc;
    }
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x18))(param_1,param_2,&puStack_40,param_6,0xffffffff);
    if ((int)param_2[1] < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(param_2 + 0x12) + (ulong)param_2[1] * 8 + -8);
    }
    if ((int)param_3[1] < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (*(long **)(param_3 + 0x12))[(ulong)param_3[1] - 1];
    }
    (**(code **)(*param_1 + 0x20))
              (param_1,*(long *)(param_2 + 4) + *(long *)(param_2 + 0x14) * (long)(int)plVar2 +
                       lVar6 * (int)puStack_40,*(long *)(param_2 + 0x14),
               *(int *)((long)param_1 + 0xdc) - *(int *)((long)param_1 + 0xd4),
               *(long *)(param_3 + 4) + **(long **)(param_3 + 0x12) * (long)param_5[1] +
               lVar7 * *param_5,param_3[0x14]);
  }
  return;
}



/* Entry: 109af5c28; end: 109af6003;  */

uint FUN_109af5c28(uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 auStack_138 [2];
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_1 + 2);
    uStack_b8 = puVar9[1];
    uStack_c0 = *puVar9;
    uStack_a8 = puVar9[3];
    uStack_b0 = puVar9[2];
    uStack_98 = puVar9[5];
    uStack_a0 = puVar9[4];
    uStack_88 = puVar9[7];
    uStack_90 = puVar9[6];
    uStack_80 = (ulong)&uStack_c0 | 8;
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    if (puVar9[7] != 0) {
      piVar1 = (int *)(puVar9[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_70 = *(undefined8 *)puVar9[9];
      uStack_68 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_c0 = uStack_c0 & 0xffffffff;
      func_0x000109a84868(&uStack_c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_c0,param_1,0xffffffff);
  }
  if ((uStack_c0 & 0xff8) == 0) {
    iVar3 = (uint)uStack_b8;
    iVar6 = uStack_b8._4_4_;
    uStack_120._0_4_ = 0x42ff0000;
    puStack_130 = &uStack_120;
    puStack_e0 = &uStack_118;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_120._4_4_ = 0;
    uStack_118 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_f4 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    auStack_138[0] = 0x2010000;
    uStack_128 = 0;
    puStack_d8 = &uStack_d0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_c0,auStack_138,6);
    if (((uint)uStack_b8 == 1) || (uStack_b8._4_4_ == 1)) {
      uVar2 = 0xf;
      if ((param_3 << 1 | 1U) != (uint)uStack_b8) {
        uVar2 = 0xc;
      }
      uVar12 = 0xc;
      if ((param_2 << 1 | 1U) == uStack_b8._4_4_) {
        uVar12 = uVar2;
      }
    }
    else {
      uVar12 = 0xc;
    }
    if (iVar6 * iVar3 < 1) {
      dVar15 = 0.0;
    }
    else {
      lVar10 = 0;
      lVar11 = (ulong)(uint)(iVar6 * iVar3) - 1;
      dVar15 = 0.0;
      do {
        dVar13 = *(double *)(CONCAT44(uStack_10c,uStack_110) + lVar10);
        dVar14 = *(double *)(CONCAT44(uStack_10c,uStack_110) + lVar11 * 8);
        uVar2 = uVar12 & 0xfffffffe;
        if (dVar13 == dVar14) {
          uVar2 = uVar12;
        }
        uVar12 = uVar2 & 0xfffffffd;
        if (dVar13 == -dVar14) {
          uVar12 = uVar2;
        }
        uVar2 = uVar12 & 0xfffffffb;
        if (0.0 <= dVar13) {
          uVar2 = uVar12;
        }
        uVar12 = uVar2 & 0xfffffff7;
        if (dVar13 == (double)(int)(long)(double)(long)dVar13) {
          uVar12 = uVar2;
        }
        dVar15 = dVar15 + dVar13;
        lVar11 = lVar11 + -1;
        lVar10 = lVar10 + 8;
      } while (lVar11 != -1);
    }
    if (lStack_e8 != 0) {
      piVar1 = (int *)(lStack_e8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_120);
      }
    }
    lStack_e8 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (0 < uStack_120._4_4_) {
      lVar10 = 0;
      do {
        puStack_e0[lVar10] = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_120._4_4_);
    }
    if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
      _free(puStack_d8[-1]);
    }
    if (uStack_88 != 0) {
      piVar1 = (int *)(uStack_88 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_c0);
      }
    }
    uStack_88 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (0 < uStack_c0._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_80 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_c0._4_4_);
    }
    if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
      _free(puStack_78[-1]);
    }
    uVar2 = uVar12 & 0xfffffffb;
    if (ABS(dVar15 + -1.0) <= (ABS(dVar15) + 1.0) * 1.1920928955078125e-07) {
      uVar2 = uVar12;
    }
    return uVar2;
  }
  puVar8 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_120 = puVar8 + 1;
  uStack_118 = 0x17;
  uStack_114 = 0;
  *(undefined1 *)((long)puVar8 + 0x1b) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x736c656e6e616863;
  *(undefined8 *)(puVar8 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)((long)puVar8 + 0x13) = 0x31203d3d20292873;
  FUN_109ac3188(0xffffff29,&uStack_120,&UNK_10f59cb36,&UNK_10f59c7f0,0x1ac);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109af5fb0);
  (*pcVar7)();
}



/* Entry: 109af6004; end: 109af609f;  */

long FUN_109af6004(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109af60a0; end: 109af613b;  */

long FUN_109af60a0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109af613c; end: 109af63ef;  */

void FUN_109af613c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24bd8;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af62c8;
  }
  if (puVar7 == param_2) goto LAB_109af62c8;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af6278:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af62ac;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af6278;
LAB_109af62ac:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af62c8:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 6) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24c18;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af63a4);
  (*pcVar5)();
}



/* Entry: 109af63f0; end: 109af66a3;  */

void FUN_109af63f0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24c58;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af657c;
  }
  if (puVar7 == param_2) goto LAB_109af657c;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af652c:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af6560;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af652c;
LAB_109af6560:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af657c:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 5) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24c98;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af6658);
  (*pcVar5)();
}



/* Entry: 109af66a4; end: 109af6957;  */

void FUN_109af66a4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24cd8;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af6830;
  }
  if (puVar7 == param_2) goto LAB_109af6830;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af67e0:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af6814;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af67e0;
LAB_109af6814:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af6830:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 6) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24d18;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af690c);
  (*pcVar5)();
}



/* Entry: 109af6958; end: 109af6c0b;  */

void FUN_109af6958(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24d58;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af6ae4;
  }
  if (puVar7 == param_2) goto LAB_109af6ae4;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af6a94:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af6ac8;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af6a94;
LAB_109af6ac8:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af6ae4:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 5) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24d98;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af6bc0);
  (*pcVar5)();
}



/* Entry: 109af6c0c; end: 109af6ebf;  */

void FUN_109af6c0c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24dd8;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af6d98;
  }
  if (puVar7 == param_2) goto LAB_109af6d98;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af6d48:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af6d7c;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af6d48;
LAB_109af6d7c:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af6d98:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 6) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24e18;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af6e74);
  (*pcVar5)();
}



/* Entry: 109af6ec0; end: 109af7173;  */

void FUN_109af6ec0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b24e58;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) == 0) {
    puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
    uStack_48 = 0;
    puStack_50 = puVar7;
    FUN_109a479a0(param_2,&puStack_58);
    goto LAB_109af704c;
  }
  if (puVar7 == param_2) goto LAB_109af704c;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
LAB_109af6ffc:
    if (2 < *(int *)((long)param_2 + 4)) goto LAB_109af7030;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_2 + 4);
    puVar6[3] = param_2[1];
    puVar7 = (undefined8 *)param_2[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    if (*piVar12 < 3) goto LAB_109af6ffc;
LAB_109af7030:
    func_0x000109a84868(puVar7,param_2);
  }
  uVar13 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  puVar6[5] = param_2[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_2[6];
  puVar6[9] = param_2[7];
  puVar6[8] = uVar13;
LAB_109af704c:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_3;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 6) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b24e98;
    puVar7[2] = puVar6;
    *param_1 = puVar7;
    param_1[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54443c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_58 = puVar8 + 1;
  puStack_50 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af7128);
  (*pcVar5)();
}



/* Entry: 109af7174; end: 109af71ff;  */

void FUN_109af7174(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x80;
  __Znwm();
  FUN_109b04960(param_1);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110b25140;
  puVar2[2] = uVar1;
  *param_2 = puVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109af7200; end: 109af74c7;  */

void FUN_109af7200(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b25180;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,0x2010000);
    uStack_58 = 0;
    puStack_60 = puVar7;
    FUN_109a479a0(param_3,&puStack_68);
    goto LAB_109af7394;
  }
  if (puVar7 == param_3) goto LAB_109af7394;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_3;
LAB_109af7344:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109af7378;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_3 + 4);
    puVar6[3] = param_3[1];
    puVar7 = (undefined8 *)param_3[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_3;
    if (*piVar12 < 3) goto LAB_109af7344;
LAB_109af7378:
    func_0x000109a84868(puVar7,param_3);
  }
  uVar13 = param_3[2];
  uVar15 = param_3[5];
  uVar14 = param_3[4];
  puVar6[5] = param_3[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_3[6];
  puVar6[9] = param_3[7];
  puVar6[8] = uVar13;
LAB_109af7394:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_4;
  *(float *)((long)puVar6 + 0x74) = (float)param_1;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 5) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_DAT_110b251c8;
    puVar7[2] = puVar6;
    *param_2 = puVar7;
    param_2[1] = puVar6;
    return;
  }
  puVar8 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54533c65;
  *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
  *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
  *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
  *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
  *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
  *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
  *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
  *puVar8 = 1;
  puStack_68 = puVar8 + 1;
  puStack_60 = (undefined8 *)0x4d;
  *(undefined1 *)((long)puVar8 + 0x51) = 0;
  *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
  *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
  FUN_109ac3188(0xffffff29,&puStack_68,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af747c);
  (*pcVar5)();
}



/* Entry: 109af74c8; end: 109af7553;  */

void FUN_109af74c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x80;
  __Znwm();
  FUN_109b0531c(param_1);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110b25250;
  puVar2[2] = uVar1;
  *param_2 = puVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109af7554; end: 109af75df;  */

void FUN_109af7554(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x78;
  __Znwm();
  FUN_109b059a8(param_1);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110b252d8;
  puVar2[2] = uVar1;
  *param_2 = puVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109af75e0; end: 109af766b;  */

void FUN_109af75e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x80;
  __Znwm();
  FUN_109b05fc0(param_1);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110b25360;
  puVar2[2] = uVar1;
  *param_2 = puVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109af766c; end: 109af770b;  */

long FUN_109af766c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109af770c; end: 109af77ab;  */

long FUN_109af770c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109af77ac; end: 109af790f;  */

void FUN_109af77ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  FUN_109b04960(param_1);
  *puVar2 = &PTR_FUN_110b25860;
  *(uint *)(puVar2 + 0x10) = param_5;
  if ((param_5 & 3) != 0) {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b258a8;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x2026206570795479;
  *(undefined8 *)(puVar4 + 1) = 0x7274656d6d797328;
  *(undefined8 *)(puVar4 + 7) = 0x495254454d4d5953;
  *(undefined8 *)(puVar4 + 5) = 0x5f4c454e52454b28;
  *(undefined8 *)(puVar4 + 0xb) = 0x5953415f4c454e52;
  *(undefined8 *)(puVar4 + 9) = 0x454b207c204c4143;
  *puVar4 = 1;
  puStack_60 = puVar4 + 1;
  uStack_58 = 0x40;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined8 *)(puVar4 + 0xf) = 0x30203d212029294c;
  *(undefined8 *)(puVar4 + 0xd) = 0x4143495254454d4d;
  FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109af78bc);
  (*pcVar1)();
}



/* Entry: 109af7910; end: 109af7c9f;  */

void FUN_109af7910(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  uint param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar6 = (undefined8 *)0x80;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar12 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *puVar6 = &PTR_FUN_110b25948;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xc] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar6[0xd] = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_78 = (undefined4 *)CONCAT44(puStack_78._4_4_,0x2010000);
    uStack_68 = 0;
    puStack_70 = puVar7;
    FUN_109a479a0(param_3,&puStack_78);
    goto LAB_109af7aac;
  }
  if (puVar7 == param_3) goto LAB_109af7aac;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6[9] != 0) {
      piVar1 = (int *)(puVar6[9] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar7);
      }
    }
  }
  puVar6[9] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (*(int *)((long)puVar6 + 0x14) < 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)param_3;
LAB_109af7a5c:
    if (2 < *(int *)((long)param_3 + 4)) goto LAB_109af7a90;
    *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_3 + 4);
    puVar6[3] = param_3[1];
    puVar7 = (undefined8 *)param_3[9];
    puVar11 = (undefined8 *)puVar6[0xb];
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[10];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar12);
    *(undefined4 *)puVar7 = *(undefined4 *)param_3;
    if (*piVar12 < 3) goto LAB_109af7a5c;
LAB_109af7a90:
    func_0x000109a84868(puVar7,param_3);
  }
  uVar13 = param_3[2];
  uVar15 = param_3[5];
  uVar14 = param_3[4];
  puVar6[5] = param_3[3];
  puVar6[4] = uVar13;
  puVar6[7] = uVar15;
  puVar6[6] = uVar14;
  uVar13 = param_3[6];
  puVar6[9] = param_3[7];
  puVar6[8] = uVar13;
LAB_109af7aac:
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_4;
  *(int *)((long)puVar6 + 0x74) = (int)(long)(double)(long)param_1;
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 4) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    *puVar6 = &PTR_FUN_110b258e8;
    *(uint *)(puVar6 + 0xf) = param_5;
    if ((param_5 & 3) != 0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *(undefined4 *)(puVar7 + 1) = 1;
      *puVar7 = &PTR_FUN_110b25978;
      puVar7[2] = puVar6;
      *param_2 = puVar7;
      param_2[1] = puVar6;
      return;
    }
    puVar8 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_78 = puVar8 + 1;
    puStack_70 = (undefined8 *)0x40;
    *(undefined8 *)(puVar8 + 3) = 0x2026206570795479;
    *(undefined8 *)(puVar8 + 1) = 0x7274656d6d797328;
    *(undefined8 *)(puVar8 + 7) = 0x495254454d4d5953;
    *(undefined8 *)(puVar8 + 5) = 0x5f4c454e52454b28;
    *(undefined8 *)(puVar8 + 0xb) = 0x5953415f4c454e52;
    *(undefined8 *)(puVar8 + 9) = 0x454b207c204c4143;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    *(undefined8 *)(puVar8 + 0xf) = 0x30203d212029294c;
    *(undefined8 *)(puVar8 + 0xd) = 0x4143495254454d4d;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
  }
  else {
    puVar8 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54533c65;
    *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
    *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
    *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
    *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
    *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
    *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
    *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
    *puVar8 = 1;
    puStack_78 = puVar8 + 1;
    puStack_70 = (undefined8 *)0x4d;
    *(undefined1 *)((long)puVar8 + 0x51) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
    *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af7c1c);
  (*pcVar5)();
}



/* Entry: 109af7ca0; end: 109af818b;  */

void FUN_109af7ca0(double param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  uint param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  puVar6 = (undefined8 *)0xf0;
  __Znwm();
  puVar6[1] = 0xffffffffffffffff;
  *puVar6 = &PTR_FUN_110b25a18;
  puVar7 = puVar6 + 2;
  *(undefined4 *)puVar7 = 0x42ff0000;
  piVar14 = (int *)((long)puVar6 + 0x14);
  *(undefined8 *)((long)puVar6 + 0x1c) = 0;
  piVar14[0] = 0;
  piVar14[1] = 0;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined8 *)((long)puVar6 + 0x24) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  puVar6[0xc] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[10] = puVar6 + 3;
  puVar6[0xb] = puVar6 + 0xc;
  puVar12 = puVar6 + 0x10;
  *(undefined4 *)puVar12 = 0x42ff0000;
  puVar6[0xd] = 0;
  *(undefined8 *)((long)puVar6 + 0x9c) = 0;
  *(undefined8 *)((long)puVar6 + 0x94) = 0;
  *(undefined8 *)((long)puVar6 + 0xac) = 0;
  *(undefined8 *)((long)puVar6 + 0xa4) = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  piVar13 = (int *)((long)puVar6 + 0x84);
  *(undefined8 *)((long)puVar6 + 0x8c) = 0;
  piVar13[0] = 0;
  piVar13[1] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x18] = puVar6 + 0x11;
  puVar6[0x19] = puVar6 + 0x1a;
  puVar6[0x1b] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  if ((*(byte *)((long)param_3 + 1) >> 6 & 1) == 0) {
    puStack_88 = (undefined4 *)CONCAT44(puStack_88._4_4_,0x2010000);
    uStack_78 = 0;
    puStack_80 = puVar7;
    FUN_109a479a0(param_3,&puStack_88);
  }
  else if (puVar7 != param_3) {
    if (param_3[7] != 0) {
      piVar1 = (int *)(param_3[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar6[9] != 0) {
        piVar1 = (int *)(puVar6[9] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar7);
        }
      }
    }
    puVar6[9] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    if (*(int *)((long)puVar6 + 0x14) < 1) {
      *(undefined4 *)puVar7 = *(undefined4 *)param_3;
LAB_109af7e2c:
      if (2 < *(int *)((long)param_3 + 4)) goto LAB_109af7e60;
      *(int *)((long)puVar6 + 0x14) = *(int *)((long)param_3 + 4);
      puVar6[3] = param_3[1];
      puVar7 = (undefined8 *)param_3[9];
      puVar11 = (undefined8 *)puVar6[0xb];
      *puVar11 = *puVar7;
      puVar11[1] = puVar7[1];
    }
    else {
      lVar9 = 0;
      lVar10 = puVar6[10];
      do {
        *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *piVar14);
      *(undefined4 *)puVar7 = *(undefined4 *)param_3;
      if (*piVar14 < 3) goto LAB_109af7e2c;
LAB_109af7e60:
      func_0x000109a84868(puVar7,param_3);
    }
    uVar15 = param_3[2];
    uVar17 = param_3[5];
    uVar16 = param_3[4];
    puVar6[5] = param_3[3];
    puVar6[4] = uVar15;
    puVar6[7] = uVar17;
    puVar6[6] = uVar16;
    uVar15 = param_3[6];
    puVar6[9] = param_3[7];
    puVar6[8] = uVar15;
  }
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 3) + *(int *)((long)puVar6 + 0x1c) + -1;
  *(undefined4 *)((long)puVar6 + 0xc) = param_4;
  *(float *)(puVar6 + 0x1d) = (float)param_1;
  puVar7 = param_6 + 1;
  puVar6[0xf] = *param_6;
  if (puVar6 + 0xf == param_6) goto LAB_109af7f90;
  if (param_6[8] != 0) {
    piVar14 = (int *)(param_6[8] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = *piVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (puVar6[0x17] != 0) {
    piVar14 = (int *)(puVar6[0x17] + 0x14);
    do {
      iVar2 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar12);
    }
  }
  puVar6[0x17] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  if (*(int *)((long)puVar6 + 0x84) < 1) {
    *(undefined4 *)puVar12 = *(undefined4 *)puVar7;
LAB_109af7f3c:
    if (2 < *(int *)((long)param_6 + 0xc)) goto LAB_109af7f70;
    *(int *)((long)puVar6 + 0x84) = *(int *)((long)param_6 + 0xc);
    puVar6[0x11] = param_6[2];
    puVar7 = (undefined8 *)param_6[10];
    puVar12 = (undefined8 *)puVar6[0x19];
    *puVar12 = *puVar7;
    puVar12[1] = puVar7[1];
  }
  else {
    lVar9 = 0;
    lVar10 = puVar6[0x18];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *piVar13);
    *(undefined4 *)puVar12 = *(undefined4 *)puVar7;
    if (*piVar13 < 3) goto LAB_109af7f3c;
LAB_109af7f70:
    func_0x000109a84868(puVar12,puVar7);
  }
  uVar15 = param_6[3];
  uVar17 = param_6[6];
  uVar16 = param_6[5];
  puVar6[0x13] = param_6[4];
  puVar6[0x12] = uVar15;
  puVar6[0x15] = uVar17;
  puVar6[0x14] = uVar16;
  uVar15 = param_6[7];
  puVar6[0x17] = param_6[8];
  puVar6[0x16] = uVar15;
LAB_109af7f90:
  *(undefined1 *)(puVar6 + 0x1c) = *(undefined1 *)(param_6 + 0xd);
  if (((*(uint *)(puVar6 + 2) & 0xfff) == 5) &&
     ((*(int *)(puVar6 + 3) == 1 || (*(int *)((long)puVar6 + 0x1c) == 1)))) {
    *puVar6 = &PTR_FUN_110b259b8;
    *(uint *)((long)puVar6 + 0xec) = param_5;
    if ((param_5 & 3) != 0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *(undefined4 *)(puVar7 + 1) = 1;
      *puVar7 = &PTR_DAT_110b25a48;
      puVar7[2] = puVar6;
      *param_2 = puVar7;
      param_2[1] = puVar6;
      return;
    }
    puVar8 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_88 = puVar8 + 1;
    puStack_80 = (undefined8 *)0x40;
    *(undefined8 *)(puVar8 + 3) = 0x2026206570795479;
    *(undefined8 *)(puVar8 + 1) = 0x7274656d6d797328;
    *(undefined8 *)(puVar8 + 7) = 0x495254454d4d5953;
    *(undefined8 *)(puVar8 + 5) = 0x5f4c454e52454b28;
    *(undefined8 *)(puVar8 + 0xb) = 0x5953415f4c454e52;
    *(undefined8 *)(puVar8 + 9) = 0x454b207c204c4143;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    *(undefined8 *)(puVar8 + 0xf) = 0x30203d212029294c;
    *(undefined8 *)(puVar8 + 0xd) = 0x4143495254454d4d;
    FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
  }
  else {
    puVar8 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar8 + 7) = 0x743a3a3e54533c65;
    *(undefined8 *)(puVar8 + 5) = 0x7079546174614420;
    *(undefined8 *)(puVar8 + 0xb) = 0x722e6c656e72656b;
    *(undefined8 *)(puVar8 + 9) = 0x2820262620657079;
    *(undefined8 *)(puVar8 + 0xf) = 0x6e72656b207c7c20;
    *(undefined8 *)(puVar8 + 0xd) = 0x31203d3d2073776f;
    *(undefined8 *)((long)puVar8 + 0x49) = 0x2931203d3d20736c;
    *(undefined8 *)((long)puVar8 + 0x41) = 0x6f632e6c656e7265;
    *puVar8 = 1;
    puStack_88 = puVar8 + 1;
    puStack_80 = (undefined8 *)0x4d;
    *(undefined1 *)((long)puVar8 + 0x51) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x3d3d202928657079;
    *(undefined8 *)(puVar8 + 1) = 0x742e6c656e72656b;
    FUN_109ac3188(0xffffff29,&puStack_88,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109af8100);
  (*pcVar5)();
}



/* Entry: 109af818c; end: 109af822b;  */

long FUN_109af818c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109af822c; end: 109af838f;  */

void FUN_109af822c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  FUN_109b0531c(param_1);
  *puVar2 = &PTR_FUN_110b25a88;
  *(uint *)(puVar2 + 0x10) = param_5;
  if ((param_5 & 3) != 0) {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b25ad0;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x2026206570795479;
  *(undefined8 *)(puVar4 + 1) = 0x7274656d6d797328;
  *(undefined8 *)(puVar4 + 7) = 0x495254454d4d5953;
  *(undefined8 *)(puVar4 + 5) = 0x5f4c454e52454b28;
  *(undefined8 *)(puVar4 + 0xb) = 0x5953415f4c454e52;
  *(undefined8 *)(puVar4 + 9) = 0x454b207c204c4143;
  *puVar4 = 1;
  puStack_60 = puVar4 + 1;
  uStack_58 = 0x40;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined8 *)(puVar4 + 0xf) = 0x30203d212029294c;
  *(undefined8 *)(puVar4 + 0xd) = 0x4143495254454d4d;
  FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109af833c);
  (*pcVar1)();
}



/* Entry: 109af8390; end: 109af84f3;  */

void FUN_109af8390(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  FUN_109b059a8(param_1);
  *puVar2 = &PTR_FUN_110b25b10;
  *(uint *)(puVar2 + 0xf) = param_5;
  if ((param_5 & 3) != 0) {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b25b58;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x2026206570795479;
  *(undefined8 *)(puVar4 + 1) = 0x7274656d6d797328;
  *(undefined8 *)(puVar4 + 7) = 0x495254454d4d5953;
  *(undefined8 *)(puVar4 + 5) = 0x5f4c454e52454b28;
  *(undefined8 *)(puVar4 + 0xb) = 0x5953415f4c454e52;
  *(undefined8 *)(puVar4 + 9) = 0x454b207c204c4143;
  *puVar4 = 1;
  puStack_60 = puVar4 + 1;
  uStack_58 = 0x40;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined8 *)(puVar4 + 0xf) = 0x30203d212029294c;
  *(undefined8 *)(puVar4 + 0xd) = 0x4143495254454d4d;
  FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109af84a0);
  (*pcVar1)();
}



/* Entry: 109af84f4; end: 109af8657;  */

void FUN_109af84f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x88;
  __Znwm();
  FUN_109b05fc0(param_1);
  *puVar2 = &PTR_FUN_110b25b98;
  *(uint *)(puVar2 + 0x10) = param_5;
  if ((param_5 & 3) != 0) {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b25be0;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x2026206570795479;
  *(undefined8 *)(puVar4 + 1) = 0x7274656d6d797328;
  *(undefined8 *)(puVar4 + 7) = 0x495254454d4d5953;
  *(undefined8 *)(puVar4 + 5) = 0x5f4c454e52454b28;
  *(undefined8 *)(puVar4 + 0xb) = 0x5953415f4c454e52;
  *(undefined8 *)(puVar4 + 9) = 0x454b207c204c4143;
  *puVar4 = 1;
  puStack_60 = puVar4 + 1;
  uStack_58 = 0x40;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined8 *)(puVar4 + 0xf) = 0x30203d212029294c;
  *(undefined8 *)(puVar4 + 0xd) = 0x4143495254454d4d;
  FUN_109ac3188(0xffffff29,&puStack_60,&UNK_10f59d076,&UNK_10f59c7f0,0xd0d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109af8604);
  (*pcVar1)();
}



/* Entry: 109af8658; end: 109afc697;  */

/* WARNING: Removing unreachable block (ram,0x000109af8d78) */
/* WARNING: Removing unreachable block (ram,0x000109af8d7c) */
/* WARNING: Removing unreachable block (ram,0x000109af8d84) */
/* WARNING: Removing unreachable block (ram,0x000109af8d8c) */
/* WARNING: Removing unreachable block (ram,0x000109af8d90) */
/* WARNING: Removing unreachable block (ram,0x000109af894c) */
/* WARNING: Removing unreachable block (ram,0x000109af8950) */
/* WARNING: Removing unreachable block (ram,0x000109af8958) */
/* WARNING: Removing unreachable block (ram,0x000109af8960) */
/* WARNING: Removing unreachable block (ram,0x000109af8964) */
/* WARNING: Removing unreachable block (ram,0x000109af8e54) */
/* WARNING: Removing unreachable block (ram,0x000109af8e58) */
/* WARNING: Removing unreachable block (ram,0x000109af8e60) */
/* WARNING: Removing unreachable block (ram,0x000109af8e68) */
/* WARNING: Removing unreachable block (ram,0x000109af8e6c) */
/* WARNING: Removing unreachable block (ram,0x000109af8e8c) */
/* WARNING: Removing unreachable block (ram,0x000109af8e94) */
/* WARNING: Removing unreachable block (ram,0x000109af8ea8) */
/* WARNING: Removing unreachable block (ram,0x000109af89b0) */
/* WARNING: Removing unreachable block (ram,0x000109af8984) */
/* WARNING: Removing unreachable block (ram,0x000109af898c) */
/* WARNING: Removing unreachable block (ram,0x000109af89a0) */
/* WARNING: Removing unreachable block (ram,0x000109af8db4) */
/* WARNING: Removing unreachable block (ram,0x000109af8dbc) */
/* WARNING: Removing unreachable block (ram,0x000109af8dd0) */
/* WARNING: Removing unreachable block (ram,0x000109af8de0) */
/* WARNING: Removing unreachable block (ram,0x000109af8eb8) */

void FUN_109af8658(undefined8 *param_1,double param_2,uint param_3,uint param_4,uint *param_5,
                  uint *param_6,uint *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ulong *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  uint *puVar24;
  int *piVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint uVar32;
  long *plStack_320;
  uint *puStack_318;
  long *plStack_310;
  uint *puStack_308;
  uint uStack_300;
  int iStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long *plStack_2b8;
  long alStack_2b0 [2];
  uint uStack_2a0;
  int iStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ulong uStack_268;
  ulong uStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  long **pplStack_138;
  long *plStack_130;
  long lStack_128;
  undefined8 uStack_120;
  uint uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar19 = *(ulong **)(param_5 + 2);
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    uStack_1d8 = puVar19[1];
    uStack_1e0 = *puVar19;
    uStack_1c8 = puVar19[3];
    uStack_1d0 = puVar19[2];
    uStack_1b8 = puVar19[5];
    uStack_1c0 = puVar19[4];
    uStack_1a8 = puVar19[7];
    uStack_1b0 = puVar19[6];
    plStack_198 = &lStack_190;
    lStack_188 = 0;
    lStack_190 = 0;
    if (puVar19[7] != 0) {
      piVar25 = (int *)(puVar19[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar11) {
          *piVar25 = *piVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar19 + 4) < 3) {
      lStack_190 = *(long *)puVar19[9];
      lStack_188 = ((long *)puVar19[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0,param_5,0xffffffff);
  }
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar19 = *(ulong **)(param_6 + 2);
    uStack_200 = (ulong)&uStack_240 | 8;
    uStack_238 = puVar19[1];
    uStack_240 = *puVar19;
    uStack_228 = puVar19[3];
    uStack_230 = puVar19[2];
    uStack_218 = puVar19[5];
    uStack_220 = puVar19[4];
    uStack_208 = puVar19[7];
    uStack_210 = puVar19[6];
    plStack_1f8 = &lStack_1f0;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    if (puVar19[7] != 0) {
      piVar25 = (int *)(puVar19[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar11) {
          *piVar25 = *piVar25 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar19 + 4) < 3) {
      lStack_1f0 = *(long *)puVar19[9];
      lStack_1e8 = ((long *)puVar19[9])[1];
    }
    else {
      uStack_240 = uStack_240 & 0xffffffff;
      func_0x000109a84868(&uStack_240);
    }
  }
  else {
    FUN_109a8a180(&uStack_240,param_6,0xffffffff);
  }
  uVar7 = param_3 >> 3 & 0x1ff;
  if (uVar7 != (param_4 >> 3 & 0x1ff)) {
    puVar18 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_180 = puVar18 + 1;
    uStack_178._0_4_ = 0x19;
    uStack_178._4_4_ = 0;
    *(undefined1 *)((long)puVar18 + 0x1d) = 0;
    *(undefined8 *)(puVar18 + 3) = 0x284e435f54414d5f;
    *(undefined8 *)(puVar18 + 1) = 0x5643203d3d206e63;
    *(undefined8 *)((long)puVar18 + 0x15) = 0x2965707954747364;
    *(undefined8 *)((long)puVar18 + 0xd) = 0x5f284e435f54414d;
    FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59ccd0,&UNK_10f59c7f0,0xeca);
    goto LAB_109afbfcc;
  }
  uVar4 = *param_7;
  if ((int)uVar4 < 0) {
    uVar4 = ((int)uStack_1d8 + uStack_1d8._4_4_ + -1) / 2;
    *param_7 = uVar4;
  }
  if ((int)param_7[1] < 0) {
    param_7[1] = ((int)uStack_238 + uStack_238._4_4_ + -1) / 2;
  }
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_180._0_4_ = 0x1010000;
  uStack_178 = (uint *)&uStack_1e0;
  uVar1 = uVar4;
  if ((int)uStack_1d8 != 1) {
    uVar1 = 0;
  }
  uVar32 = 0;
  if ((int)uStack_1d8 != 1) {
    uVar32 = uVar4;
  }
  puVar17 = &uStack_180;
  FUN_109af5c28(puVar17,uVar1,uVar32);
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_180._0_4_ = 0x1010000;
  uStack_178 = (uint *)&uStack_240;
  uVar4 = param_7[1];
  if ((int)uStack_238 != 1) {
    uVar4 = 0;
  }
  uVar1 = 0;
  if ((int)uStack_238 != 1) {
    uVar1 = param_7[1];
  }
  puVar13 = &uStack_180;
  FUN_109af5c28(puVar13,uVar4,uVar1);
  uVar12 = (uint)puVar13;
  uStack_2a0 = 0x42ff0000;
  uStack_294 = 0;
  uStack_290 = 0;
  iStack_29c = 0;
  uStack_298 = 0;
  uStack_260 = (ulong)&uStack_2a0 | 8;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  uStack_300 = 0x42ff0000;
  uStack_2c0 = (ulong)&uStack_300 | 8;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  iStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  uStack_2d4 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  alStack_2b0[0] = 0;
  alStack_2b0[1] = 0;
  uVar4 = param_3 & 7;
  uVar1 = param_4 & 7;
  uVar32 = uVar4;
  if (uVar4 <= uVar1) {
    uVar32 = uVar1;
  }
  if (uVar32 < 6) {
    uVar32 = 5;
  }
  uVar28 = (uint)puVar17;
  plStack_2b8 = alStack_2b0;
  plStack_258 = &lStack_250;
  if ((uVar4 == 0) &&
     ((((uVar1 == 0 && (uVar28 == 5)) && (uVar12 == 5)) ||
      (((((ulong)puVar17 & 3) != 0 && (((ulong)puVar13 & 3) != 0)) &&
       ((uVar1 == 3 && (((uVar28 & uVar12) >> 3 & 1) != 0)))))))) {
    uVar20 = 8;
    if (uVar1 != 0) {
      uVar20 = 0;
    }
    uStack_180._0_4_ = 0x2010000;
    uStack_178 = &uStack_2a0;
    uStack_170 = 0;
    uStack_16c = 0;
    FUN_109a41858((double)(uint)(1 << (ulong)uVar20),0,&uStack_1e0,&uStack_180,4);
    uStack_180._0_4_ = 0x2010000;
    uStack_178 = &uStack_300;
    uStack_170 = 0;
    uStack_16c = 0;
    FUN_109a41858((double)(uint)(1 << (ulong)uVar20),0,&uStack_240,&uStack_180,4);
    uVar20 = uVar20 << 1;
    param_2 = param_2 * (double)(uint)(1 << (ulong)uVar20);
    uVar32 = 4;
  }
  else {
    if (((uint)uStack_1e0 & 0xfff) == uVar32) {
      if (uStack_1a8 != 0) {
        piVar25 = (int *)(uStack_1a8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_268 = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_278 = 0;
      uStack_274 = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      uStack_2a0 = (uint)uStack_1e0;
      if (uStack_1e0._4_4_ < 3) {
        iStack_29c = uStack_1e0._4_4_;
        uStack_298 = (undefined4)uStack_1d8;
        uStack_294 = (undefined4)(uStack_1d8 >> 0x20);
        lStack_250 = *plStack_198;
        lStack_248 = plStack_198[1];
      }
      else {
        func_0x000109a84868(&uStack_2a0,&uStack_1e0);
      }
      uStack_288 = (undefined4)uStack_1c8;
      uStack_284 = (undefined4)(uStack_1c8 >> 0x20);
      uStack_290 = (undefined4)uStack_1d0;
      uStack_28c = (undefined4)(uStack_1d0 >> 0x20);
      uStack_278 = (undefined4)uStack_1b8;
      uStack_274 = (undefined4)(uStack_1b8 >> 0x20);
      uStack_280 = (undefined4)uStack_1c0;
      uStack_27c = (undefined4)(uStack_1c0 >> 0x20);
      uStack_270 = (undefined4)uStack_1b0;
      uStack_26c = (undefined4)(uStack_1b0 >> 0x20);
      uStack_268 = uStack_1a8;
    }
    else {
      uStack_180._0_4_ = 0x2010000;
      uStack_178 = &uStack_2a0;
      uStack_170 = 0;
      uStack_16c = 0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_1e0,&uStack_180,uVar32);
    }
    if (((uint)uStack_240 & 0xfff) == uVar32) {
      if (uStack_208 != 0) {
        piVar25 = (int *)(uStack_208 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (uStack_2c8 != 0) {
        piVar25 = (int *)(uStack_2c8 + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_300);
        }
      }
      plVar15 = plStack_1f8;
      uStack_2c8 = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      if (iStack_2fc < 1) {
LAB_109af8be4:
        uStack_300 = (uint)uStack_240;
        if (2 < uStack_240._4_4_) goto LAB_109af8c18;
        iStack_2fc = uStack_240._4_4_;
        uStack_2f8 = (undefined4)uStack_238;
        uStack_2f4 = (undefined4)(uStack_238 >> 0x20);
        *plStack_2b8 = *plStack_1f8;
        plStack_2b8[1] = plVar15[1];
      }
      else {
        lVar21 = 0;
        do {
          *(undefined4 *)(uStack_2c0 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iStack_2fc);
        if (iStack_2fc < 3) goto LAB_109af8be4;
LAB_109af8c18:
        uStack_300 = (uint)uStack_240;
        func_0x000109a84868(&uStack_300,&uStack_240);
      }
      uVar20 = 0;
      uStack_2e8 = (undefined4)uStack_228;
      uStack_2e4 = (undefined4)(uStack_228 >> 0x20);
      uStack_2f0 = (undefined4)uStack_230;
      uStack_2ec = (undefined4)(uStack_230 >> 0x20);
      uStack_2d8 = (undefined4)uStack_218;
      uStack_2d4 = (undefined4)(uStack_218 >> 0x20);
      uStack_2e0 = (undefined4)uStack_220;
      uStack_2dc = (undefined4)(uStack_220 >> 0x20);
      uStack_2c8 = uStack_208;
      uStack_2d0 = (undefined4)uStack_210;
      uStack_2cc = (undefined4)(uStack_210 >> 0x20);
    }
    else {
      uStack_180._0_4_ = 0x2010000;
      uStack_178 = &uStack_300;
      uStack_170 = 0;
      uStack_16c = 0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_240,&uStack_180,uVar32);
      uVar20 = 0;
    }
  }
  uVar5 = *param_7;
  uStack_c0 = (ulong)&uStack_100 | 8;
  uStack_f8 = CONCAT44(uStack_294,uStack_298);
  uStack_100 = CONCAT44(iStack_29c,uStack_2a0);
  uStack_e8 = CONCAT44(uStack_284,uStack_288);
  piStack_f0 = (int *)CONCAT44(uStack_28c,uStack_290);
  uStack_d8 = CONCAT44(uStack_274,uStack_278);
  uStack_e0 = CONCAT44(uStack_27c,uStack_280);
  uStack_d0 = CONCAT44(uStack_26c,uStack_270);
  uStack_c8 = uStack_268;
  lStack_b0 = 0;
  lStack_a8 = 0;
  if (uStack_268 != 0) {
    piVar25 = (int *)(uStack_268 + 0x14);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = *piVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_b8 = &lStack_b0;
  if (iStack_29c < 3) {
    lStack_b0 = *plStack_258;
    lStack_a8 = plStack_258[1];
  }
  else {
    uStack_100 = (ulong)uStack_2a0;
    func_0x000109a84868(&uStack_100,&uStack_2a0);
  }
  if (((uVar32 < uVar4) || (uVar7 = uVar32 | uVar7 << 3, 7 < (uVar7 ^ param_3 & 0xfff))) ||
     (uVar8 = (uint)uStack_100, ((uint)uStack_100 & 0xfff) != uVar32)) {
    puVar18 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_180 = puVar18 + 1;
    uStack_178._0_4_ = 0x59;
    uStack_178._4_4_ = 0;
    *(undefined8 *)(puVar18 + 0xb) = 0x732878616d3a3a64;
    *(undefined8 *)(puVar18 + 9) = 0x7473203d3e206874;
    *(undefined8 *)(puVar18 + 0xf) = 0x2620295332335f56;
    *(undefined8 *)(puVar18 + 0xd) = 0x43202c6874706564;
    *(undefined8 *)(puVar18 + 0x13) = 0x202928657079742e;
    *(undefined8 *)(puVar18 + 0x11) = 0x6c656e72656b2026;
    *(undefined8 *)((long)puVar18 + 0x55) = 0x687470656464203d;
    *(undefined8 *)((long)puVar18 + 0x4d) = 0x3d20292865707974;
    *(undefined8 *)(puVar18 + 3) = 0x284e435f54414d5f;
    *(undefined8 *)(puVar18 + 1) = 0x5643203d3d206e63;
    *(undefined1 *)((long)puVar18 + 0x5d) = 0;
    *(undefined8 *)(puVar18 + 7) = 0x7065646420262620;
    *(undefined8 *)(puVar18 + 5) = 0x2965707954667562;
    FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cb9e,&UNK_10f59c7f0,0xe30);
    goto LAB_109afbfcc;
  }
  if (((ulong)puVar17 & 3) == 0) {
LAB_109af8ebc:
    if ((uVar4 == 0) && (uVar32 == 4)) {
      puVar14 = (uint *)0x78;
      __Znwm();
      puVar14[2] = 0xffffffff;
      puVar14[3] = 0xffffffff;
      *(undefined ***)puVar14 = &PTR_FUN_110b249d8;
      puVar29 = puVar14 + 4;
      *puVar29 = 0x42ff0000;
      puVar27 = puVar14 + 5;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar27[0] = 0;
      puVar27[1] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      puVar24 = puVar14 + 0x18;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x14) = puVar14 + 6;
      *(uint **)(puVar14 + 0x16) = puVar24;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      if ((uVar8 >> 0xe & 1) == 0) {
        uStack_180._0_4_ = 0x2010000;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_178 = puVar29;
        FUN_109a479a0(&uStack_100,&uStack_180);
      }
      else {
        if (uStack_c8 != 0) {
          piVar25 = (int *)(uStack_c8 + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = *piVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(long *)(puVar14 + 0x12) != 0) {
            piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
            do {
              iVar2 = *piVar25;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(puVar29);
            }
          }
        }
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        if ((int)puVar14[5] < 1) {
          *puVar29 = (uint)uStack_100;
LAB_109af93e0:
          if (2 < (int)uStack_100._4_4_) goto LAB_109af9414;
          puVar14[5] = (uint)uStack_100._4_4_;
          *(undefined8 *)(puVar14 + 6) = uStack_f8;
          plVar15 = *(long **)(puVar14 + 0x16);
          *plVar15 = *plStack_b8;
          plVar15[1] = plStack_b8[1];
        }
        else {
          lVar21 = 0;
          lVar26 = *(long *)(puVar14 + 0x14);
          do {
            *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)*puVar27);
          *puVar29 = (uint)uStack_100;
          if ((int)*puVar27 < 3) goto LAB_109af93e0;
LAB_109af9414:
          func_0x000109a84868(puVar29,&uStack_100);
        }
        *(undefined8 *)(puVar14 + 10) = uStack_e8;
        *(int **)(puVar14 + 8) = piStack_f0;
        *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
        *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
        *(ulong *)(puVar14 + 0x12) = uStack_c8;
        *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
      }
      puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
      puVar14[3] = uVar5;
      if (((puVar14[4] & 0xfff) != 4) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
        puVar18 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_180 = puVar18 + 1;
        uStack_178._0_4_ = 0x4d;
        uStack_178._4_4_ = 0;
        *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
        *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
        *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
        *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
        *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
        *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
        *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
        *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
        *(undefined1 *)((long)puVar18 + 0x51) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
        *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
        FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_DAT_110b24a18;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_310 = plVar15;
      puStack_308 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    else {
      if ((uVar4 != 0) || (uVar32 != 5)) {
        if ((uVar4 != 0) || (uVar32 != 6)) {
          if ((uVar4 != 2) || (uVar32 != 5)) {
            if ((uVar4 == 2) && (uVar32 == 6)) {
              FUN_109af613c(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b026b4(&uStack_180);
            }
            else if ((uVar4 == 3) && (uVar32 == 5)) {
              FUN_109af63f0(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b029a8(&uStack_180);
            }
            else if ((uVar4 == 3) && (uVar32 == 6)) {
              FUN_109af66a4(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b02ce4(&uStack_180);
            }
            else if ((uVar4 == 5) && (uVar32 == 5)) {
              FUN_109af6958(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b02fbc(&uStack_180);
            }
            else if ((uVar4 == 5) && (uVar32 == 6)) {
              FUN_109af6c0c(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b032c0(&uStack_180);
            }
            else {
              if ((uVar4 != 6) || (uVar32 != 6)) {
                FUN_109ac2700(&uStack_180,&UNK_10f59cbb1);
                FUN_109ac3188(0xffffff2b,&uStack_180,&UNK_10f59cb9e,&UNK_10f59c7f0,0xe57);
                goto LAB_109afbfcc;
              }
              FUN_109af6ec0(&uStack_180,&uStack_100,uVar5);
              puStack_308 = uStack_178;
              plStack_310 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
              if (plStack_310 != (long *)0x0) {
                plVar15 = plStack_310 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar11) {
                    *(int *)plVar15 = (int)*plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_109b035a8(&uStack_180);
            }
            goto LAB_109af9cec;
          }
          puVar14 = (uint *)0x78;
          __Znwm();
          puVar14[2] = 0xffffffff;
          puVar14[3] = 0xffffffff;
          *(undefined ***)puVar14 = &PTR_FUN_110b24b58;
          puVar29 = puVar14 + 4;
          *puVar29 = 0x42ff0000;
          puVar27 = puVar14 + 5;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar27[0] = 0;
          puVar27[1] = 0;
          puVar14[0xb] = 0;
          puVar14[0xc] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14[0xf] = 0;
          puVar14[0x10] = 0;
          puVar14[0xd] = 0;
          puVar14[0xe] = 0;
          puVar14[0x12] = 0;
          puVar14[0x13] = 0;
          puVar14[0x10] = 0;
          puVar14[0x11] = 0;
          puVar24 = puVar14 + 0x18;
          puVar24[0] = 0;
          puVar24[1] = 0;
          *(uint **)(puVar14 + 0x14) = puVar14 + 6;
          *(uint **)(puVar14 + 0x16) = puVar24;
          puVar14[0x1a] = 0;
          puVar14[0x1b] = 0;
          if ((uVar8 >> 0xe & 1) == 0) {
            uStack_180._0_4_ = 0x2010000;
            uStack_170 = 0;
            uStack_16c = 0;
            uStack_178 = puVar29;
            FUN_109a479a0(&uStack_100,&uStack_180);
          }
          else {
            if (uStack_c8 != 0) {
              piVar25 = (int *)(uStack_c8 + 0x14);
              do {
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar11) {
                  *piVar25 = *piVar25 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (*(long *)(puVar14 + 0x12) != 0) {
                piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
                do {
                  iVar2 = *piVar25;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                  if (bVar11) {
                    *piVar25 = iVar2 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(puVar29);
                }
              }
            }
            puVar14[0x12] = 0;
            puVar14[0x13] = 0;
            puVar14[10] = 0;
            puVar14[0xb] = 0;
            puVar14[8] = 0;
            puVar14[9] = 0;
            puVar14[0xe] = 0;
            puVar14[0xf] = 0;
            puVar14[0xc] = 0;
            puVar14[0xd] = 0;
            if ((int)puVar14[5] < 1) {
              *puVar29 = (uint)uStack_100;
LAB_109afb234:
              if (2 < (int)uStack_100._4_4_) goto LAB_109afb268;
              puVar14[5] = (uint)uStack_100._4_4_;
              *(undefined8 *)(puVar14 + 6) = uStack_f8;
              plVar15 = *(long **)(puVar14 + 0x16);
              *plVar15 = *plStack_b8;
              plVar15[1] = plStack_b8[1];
            }
            else {
              lVar21 = 0;
              lVar26 = *(long *)(puVar14 + 0x14);
              do {
                *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
                lVar21 = lVar21 + 1;
              } while (lVar21 < (int)*puVar27);
              *puVar29 = (uint)uStack_100;
              if ((int)*puVar27 < 3) goto LAB_109afb234;
LAB_109afb268:
              func_0x000109a84868(puVar29,&uStack_100);
            }
            *(undefined8 *)(puVar14 + 10) = uStack_e8;
            *(int **)(puVar14 + 8) = piStack_f0;
            *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
            *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
            *(ulong *)(puVar14 + 0x12) = uStack_c8;
            *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
          }
          puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
          puVar14[3] = uVar5;
          if (((puVar14[4] & 0xfff) != 5) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
            puVar18 = (undefined4 *)0x54;
            func_0x000107c2ae8c();
            *puVar18 = 1;
            uStack_180 = puVar18 + 1;
            uStack_178._0_4_ = 0x4d;
            uStack_178._4_4_ = 0;
            *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
            *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
            *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
            *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
            *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
            *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
            *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
            *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
            *(undefined1 *)((long)puVar18 + 0x51) = 0;
            *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
            *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
            FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
            goto LAB_109afbfcc;
          }
          plVar15 = (long *)0x20;
          __Znwm();
          plVar23 = plVar15 + 1;
          *(int *)plVar23 = 1;
          *plVar15 = (long)&PTR_DAT_110b24b98;
          plVar15[2] = (long)puVar14;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar11) {
              *(int *)plVar23 = (int)*plVar23 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            iVar2 = (int)*plVar23 + -1;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar11) {
              *(int *)plVar23 = iVar2;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plStack_310 = plVar15;
          puStack_308 = puVar14;
          if (iVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
          goto LAB_109af9cec;
        }
        puVar14 = (uint *)0x78;
        __Znwm();
        puVar14[2] = 0xffffffff;
        puVar14[3] = 0xffffffff;
        *(undefined ***)puVar14 = &PTR_FUN_110b24ad8;
        puVar29 = puVar14 + 4;
        *puVar29 = 0x42ff0000;
        puVar27 = puVar14 + 5;
        puVar14[7] = 0;
        puVar14[8] = 0;
        puVar27[0] = 0;
        puVar27[1] = 0;
        puVar14[0xb] = 0;
        puVar14[0xc] = 0;
        puVar14[9] = 0;
        puVar14[10] = 0;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar24 = puVar14 + 0x18;
        puVar24[0] = 0;
        puVar24[1] = 0;
        *(uint **)(puVar14 + 0x14) = puVar14 + 6;
        *(uint **)(puVar14 + 0x16) = puVar24;
        puVar14[0x1a] = 0;
        puVar14[0x1b] = 0;
        if ((uVar8 >> 0xe & 1) == 0) {
          uStack_180._0_4_ = 0x2010000;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_178 = puVar29;
          FUN_109a479a0(&uStack_100,&uStack_180);
        }
        else {
          if (uStack_c8 != 0) {
            piVar25 = (int *)(uStack_c8 + 0x14);
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = *piVar25 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (*(long *)(puVar14 + 0x12) != 0) {
              piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
              do {
                iVar2 = *piVar25;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar11) {
                  *piVar25 = iVar2 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(puVar29);
              }
            }
          }
          puVar14[0x12] = 0;
          puVar14[0x13] = 0;
          puVar14[10] = 0;
          puVar14[0xb] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          if ((int)puVar14[5] < 1) {
            *puVar29 = (uint)uStack_100;
LAB_109afaddc:
            if (2 < (int)uStack_100._4_4_) goto LAB_109afae10;
            puVar14[5] = (uint)uStack_100._4_4_;
            *(undefined8 *)(puVar14 + 6) = uStack_f8;
            plVar15 = *(long **)(puVar14 + 0x16);
            *plVar15 = *plStack_b8;
            plVar15[1] = plStack_b8[1];
          }
          else {
            lVar21 = 0;
            lVar26 = *(long *)(puVar14 + 0x14);
            do {
              *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)*puVar27);
            *puVar29 = (uint)uStack_100;
            if ((int)*puVar27 < 3) goto LAB_109afaddc;
LAB_109afae10:
            func_0x000109a84868(puVar29,&uStack_100);
          }
          *(undefined8 *)(puVar14 + 10) = uStack_e8;
          *(int **)(puVar14 + 8) = piStack_f0;
          *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
          *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
          *(ulong *)(puVar14 + 0x12) = uStack_c8;
          *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
        }
        puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
        puVar14[3] = uVar5;
        if (((puVar14[4] & 0xfff) != 6) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
          puVar18 = (undefined4 *)0x54;
          func_0x000107c2ae8c();
          *puVar18 = 1;
          uStack_180 = puVar18 + 1;
          uStack_178._0_4_ = 0x4d;
          uStack_178._4_4_ = 0;
          *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
          *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
          *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
          *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
          *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
          *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
          *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
          *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
          *(undefined1 *)((long)puVar18 + 0x51) = 0;
          *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
          *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
          FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
          goto LAB_109afbfcc;
        }
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b24b18;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_310 = plVar15;
        puStack_308 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109af9cec;
      }
      puVar14 = (uint *)0x78;
      __Znwm();
      puVar14[2] = 0xffffffff;
      puVar14[3] = 0xffffffff;
      *(undefined ***)puVar14 = &PTR_FUN_110b24a58;
      puVar29 = puVar14 + 4;
      *puVar29 = 0x42ff0000;
      puVar27 = puVar14 + 5;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar27[0] = 0;
      puVar27[1] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      puVar24 = puVar14 + 0x18;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x14) = puVar14 + 6;
      *(uint **)(puVar14 + 0x16) = puVar24;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      if ((uVar8 >> 0xe & 1) == 0) {
        uStack_180._0_4_ = 0x2010000;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_178 = puVar29;
        FUN_109a479a0(&uStack_100,&uStack_180);
      }
      else {
        if (uStack_c8 != 0) {
          piVar25 = (int *)(uStack_c8 + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = *piVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(long *)(puVar14 + 0x12) != 0) {
            piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
            do {
              iVar2 = *piVar25;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(puVar29);
            }
          }
        }
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        if ((int)puVar14[5] < 1) {
          *puVar29 = (uint)uStack_100;
LAB_109af99a8:
          if (2 < (int)uStack_100._4_4_) goto LAB_109af99dc;
          puVar14[5] = (uint)uStack_100._4_4_;
          *(undefined8 *)(puVar14 + 6) = uStack_f8;
          plVar15 = *(long **)(puVar14 + 0x16);
          *plVar15 = *plStack_b8;
          plVar15[1] = plStack_b8[1];
        }
        else {
          lVar21 = 0;
          lVar26 = *(long *)(puVar14 + 0x14);
          do {
            *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)*puVar27);
          *puVar29 = (uint)uStack_100;
          if ((int)*puVar27 < 3) goto LAB_109af99a8;
LAB_109af99dc:
          func_0x000109a84868(puVar29,&uStack_100);
        }
        *(undefined8 *)(puVar14 + 10) = uStack_e8;
        *(int **)(puVar14 + 8) = piStack_f0;
        *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
        *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
        *(ulong *)(puVar14 + 0x12) = uStack_c8;
        *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
      }
      puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
      puVar14[3] = uVar5;
      if (((puVar14[4] & 0xfff) != 5) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
        puVar18 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        uStack_180 = puVar18 + 1;
        uStack_178._0_4_ = 0x4d;
        uStack_178._4_4_ = 0;
        *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
        *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
        *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
        *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
        *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
        *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
        *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
        *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
        *(undefined1 *)((long)puVar18 + 0x51) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
        *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
        FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_DAT_110b24a98;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_310 = plVar15;
      puStack_308 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  else {
    if (6 < (int)(uStack_f8._4_4_ + (uint)uStack_f8)) goto LAB_109af8ebc;
    if ((uVar4 == 0) && (uVar32 == 4)) {
      puStack_140 = &uStack_178;
      uStack_178._4_4_ = 0;
      uStack_180._4_4_ = 0.0;
      uStack_178._0_4_ = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      lStack_128 = 0;
      plStack_130 = (long *)0x0;
      if (uStack_c8 != 0) {
        piVar25 = (int *)(uStack_c8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_180._0_4_ = (uint)uStack_100;
      pplStack_138 = &plStack_130;
      if ((int)uStack_100._4_4_ < 3) {
        uStack_180._4_4_ = uStack_100._4_4_;
        uStack_178._0_4_ = (uint)uStack_f8;
        uStack_178._4_4_ = uStack_f8._4_4_;
        plStack_130 = (long *)*plStack_b8;
        lStack_128 = plStack_b8[1];
      }
      else {
        func_0x000109a84868(&uStack_180,&uStack_100);
      }
      uVar9 = uStack_c8;
      uStack_168 = (undefined4)uStack_e8;
      uStack_164 = (undefined4)((ulong)uStack_e8 >> 0x20);
      uStack_170 = SUB84(piStack_f0,0);
      uStack_16c = (undefined4)((ulong)piStack_f0 >> 0x20);
      uStack_158 = (undefined4)uStack_d8;
      uStack_154 = (undefined4)((ulong)uStack_d8 >> 0x20);
      uStack_160 = (undefined4)uStack_e0;
      uStack_15c = (undefined4)((ulong)uStack_e0 >> 0x20);
      uStack_148 = (undefined4)uStack_c8;
      uStack_144 = (undefined4)(uStack_c8 >> 0x20);
      uStack_150 = (undefined4)uStack_d0;
      uStack_14c = (undefined4)((ulong)uStack_d0 >> 0x20);
      uVar4 = (uStack_178._4_4_ + (uint)uStack_178) - 1;
      uVar22 = (ulong)uVar4;
      uStack_120._0_5_ = CONCAT14(1,uVar28);
      piVar25 = piStack_f0;
      if (0 < (int)uVar4) {
        do {
          if (*piVar25 != (int)(short)*piVar25) {
            uStack_120 = CONCAT35(uStack_120._5_3_,(uint5)uVar28);
            break;
          }
          uVar22 = uVar22 - 1;
          piVar25 = piVar25 + 1;
        } while (uVar22 != 0);
      }
      puVar14 = (uint *)0xe0;
      __Znwm();
      puVar14[2] = 0xffffffff;
      puVar14[3] = 0xffffffff;
      *(undefined ***)puVar14 = &PTR_FUN_110b248b0;
      puVar29 = puVar14 + 4;
      *puVar29 = 0x42ff0000;
      puVar31 = puVar14 + 5;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar31[0] = 0;
      puVar31[1] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      puVar24 = puVar14 + 0x18;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x14) = puVar14 + 6;
      *(uint **)(puVar14 + 0x16) = puVar24;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar30 = puVar14 + 0x1c;
      *puVar30 = 0x42ff0000;
      puVar27 = puVar14 + 0x1d;
      puVar14[0x1f] = 0;
      puVar14[0x20] = 0;
      puVar27[0] = 0;
      puVar27[1] = 0;
      puVar14[0x23] = 0;
      puVar14[0x24] = 0;
      puVar14[0x21] = 0;
      puVar14[0x22] = 0;
      puVar14[0x27] = 0;
      puVar14[0x28] = 0;
      puVar14[0x25] = 0;
      puVar14[0x26] = 0;
      puVar24 = puVar14 + 0x30;
      puVar24[0] = 0;
      puVar24[1] = 0;
      puVar14[0x2a] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x28] = 0;
      puVar14[0x29] = 0;
      *(uint **)(puVar14 + 0x2c) = puVar14 + 0x1e;
      *(uint **)(puVar14 + 0x2e) = puVar24;
      puVar14[0x32] = 0;
      puVar14[0x33] = 0;
      *(undefined1 *)(puVar14 + 0x35) = 0;
      if ((uStack_100._1_1_ >> 6 & 1) == 0) {
        plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,0x2010000);
        uStack_90 = 0;
        puStack_98 = puVar29;
        FUN_109a479a0(&uStack_100,&plStack_a0);
      }
      else {
        if (uVar9 != 0) {
          piVar25 = (int *)(uVar9 + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = *piVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(long *)(puVar14 + 0x12) != 0) {
            piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
            do {
              iVar2 = *piVar25;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(puVar29);
            }
          }
        }
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        if ((int)puVar14[5] < 1) {
          *puVar29 = (uint)uStack_100;
LAB_109af9664:
          if (2 < (int)uStack_100._4_4_) goto LAB_109af9698;
          puVar14[5] = (uint)uStack_100._4_4_;
          *(undefined8 *)(puVar14 + 6) = uStack_f8;
          plVar15 = *(long **)(puVar14 + 0x16);
          *plVar15 = *plStack_b8;
          plVar15[1] = plStack_b8[1];
        }
        else {
          lVar21 = 0;
          lVar26 = *(long *)(puVar14 + 0x14);
          do {
            *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)*puVar31);
          *puVar29 = (uint)uStack_100;
          if ((int)*puVar31 < 3) goto LAB_109af9664;
LAB_109af9698:
          func_0x000109a84868(puVar29,&uStack_100);
        }
        *(undefined8 *)(puVar14 + 10) = uStack_e8;
        *(int **)(puVar14 + 8) = piStack_f0;
        *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
        *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
        *(ulong *)(puVar14 + 0x12) = uStack_c8;
        *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
      }
      puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
      puVar14[3] = uVar5;
      if (((puVar14[4] & 0xfff) != 4) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
        puVar18 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
        *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
        *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
        *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
        *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
        *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
        *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
        *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x4d;
        *(undefined1 *)((long)puVar18 + 0x51) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
        *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
        goto LAB_109afbfcc;
      }
      if (CONCAT44(uStack_144,uStack_148) != 0) {
        piVar25 = (int *)(CONCAT44(uStack_144,uStack_148) + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(long *)(puVar14 + 0x2a) != 0) {
        piVar25 = (int *)(*(long *)(puVar14 + 0x2a) + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar30);
        }
      }
      puVar14[0x2a] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x22] = 0;
      puVar14[0x23] = 0;
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x26] = 0;
      puVar14[0x27] = 0;
      puVar14[0x24] = 0;
      puVar14[0x25] = 0;
      if ((int)puVar14[0x1d] < 1) {
        *puVar30 = (uint)uStack_180;
LAB_109af977c:
        if (2 < (int)uStack_180._4_4_) goto LAB_109af97b0;
        puVar14[0x1d] = (uint)uStack_180._4_4_;
        *(ulong *)(puVar14 + 0x1e) = CONCAT44(uStack_178._4_4_,(uint)uStack_178);
        puVar17 = *(undefined8 **)(puVar14 + 0x2e);
        *puVar17 = *pplStack_138;
        puVar17[1] = pplStack_138[1];
      }
      else {
        lVar21 = 0;
        lVar26 = *(long *)(puVar14 + 0x2c);
        do {
          *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)*puVar27);
        *puVar30 = (uint)uStack_180;
        if ((int)*puVar27 < 3) goto LAB_109af977c;
LAB_109af97b0:
        func_0x000109a84868(puVar30,&uStack_180);
      }
      *(ulong *)(puVar14 + 0x22) = CONCAT44(uStack_164,uStack_168);
      *(ulong *)(puVar14 + 0x20) = CONCAT44(uStack_16c,uStack_170);
      *(ulong *)(puVar14 + 0x26) = CONCAT44(uStack_154,uStack_158);
      *(ulong *)(puVar14 + 0x24) = CONCAT44(uStack_15c,uStack_160);
      *(ulong *)(puVar14 + 0x2a) = CONCAT44(uStack_144,uStack_148);
      *(ulong *)(puVar14 + 0x28) = CONCAT44(uStack_14c,uStack_150);
      puVar14[0x34] = (uint)uStack_120;
      *(undefined1 *)(puVar14 + 0x35) = uStack_120._4_1_;
      *(undefined ***)puVar14 = &PTR_FUN_110b24858;
      puVar14[0x36] = uVar28;
      if (5 < (int)puVar14[2]) {
        puVar18 = (undefined4 *)0x5c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar18 + 7) = 0x495254454d4d5953;
        *(undefined8 *)(puVar18 + 5) = 0x5f4c454e52454b28;
        *(undefined8 *)(puVar18 + 0xb) = 0x5953415f4c454e52;
        *(undefined8 *)(puVar18 + 9) = 0x454b207c204c4143;
        *(undefined8 *)(puVar18 + 0xf) = 0x30203d212029294c;
        *(undefined8 *)(puVar18 + 0xd) = 0x4143495254454d4d;
        *(undefined8 *)(puVar18 + 0x13) = 0x20657a69736b3e2d;
        *(undefined8 *)(puVar18 + 0x11) = 0x7369687420262620;
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x54;
        *(undefined1 *)(puVar18 + 0x16) = 0;
        puVar18[0x15] = 0x35203d3c;
        *(undefined8 *)(puVar18 + 3) = 0x2026206570795479;
        *(undefined8 *)(puVar18 + 1) = 0x7274656d6d797328;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59cf89,&UNK_10f59c7f0,0xc43);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_FUN_110b248d8;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_310 = plVar15;
      puStack_308 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      if (CONCAT44(uStack_144,uStack_148) != 0) {
        piVar25 = (int *)(CONCAT44(uStack_144,uStack_148) + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
        }
      }
      if (0 < (int)uStack_180._4_4_) {
        lVar21 = 0;
        do {
          *(undefined4 *)((long)puStack_140 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_180._4_4_);
      }
      bVar11 = pplStack_138 == &plStack_130;
    }
    else {
      if ((uVar4 != 5) || (uVar32 != 5)) goto LAB_109af8ebc;
      puStack_140 = &uStack_178;
      uStack_178._4_4_ = 0;
      uStack_180._4_4_ = 0.0;
      uStack_178._0_4_ = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      lStack_128 = 0;
      plStack_130 = (long *)0x0;
      if (uStack_c8 != 0) {
        piVar25 = (int *)(uStack_c8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_180._0_4_ = (uint)uStack_100;
      pplStack_138 = &plStack_130;
      if ((int)uStack_100._4_4_ < 3) {
        uStack_180._4_4_ = uStack_100._4_4_;
        plStack_130 = (long *)*plStack_b8;
        lStack_128 = plStack_b8[1];
        uStack_178._0_4_ = (uint)uStack_f8;
        uStack_178._4_4_ = uStack_f8._4_4_;
      }
      else {
        func_0x000109a84868(&uStack_180,&uStack_100);
      }
      uVar22 = uStack_c8;
      uStack_168 = (undefined4)uStack_e8;
      uStack_164 = (undefined4)((ulong)uStack_e8 >> 0x20);
      uStack_170 = SUB84(piStack_f0,0);
      uStack_16c = (undefined4)((ulong)piStack_f0 >> 0x20);
      uStack_158 = (undefined4)uStack_d8;
      uStack_154 = (undefined4)((ulong)uStack_d8 >> 0x20);
      uStack_160 = (undefined4)uStack_e0;
      uStack_15c = (undefined4)((ulong)uStack_e0 >> 0x20);
      uStack_148 = (undefined4)uStack_c8;
      uStack_144 = (undefined4)(uStack_c8 >> 0x20);
      uStack_150 = (undefined4)uStack_d0;
      uStack_14c = (undefined4)((ulong)uStack_d0 >> 0x20);
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar28);
      puVar14 = (uint *)0xe0;
      __Znwm();
      puVar14[2] = 0xffffffff;
      puVar14[3] = 0xffffffff;
      *(undefined ***)puVar14 = &PTR_FUN_110b24970;
      puVar29 = puVar14 + 4;
      *puVar29 = 0x42ff0000;
      puVar27 = puVar14 + 5;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar27[0] = 0;
      puVar27[1] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      puVar24 = puVar14 + 0x18;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x14) = puVar14 + 6;
      *(uint **)(puVar14 + 0x16) = puVar24;
      puVar30 = puVar14 + 0x1c;
      *puVar30 = 0x42ff0000;
      puVar31 = puVar14 + 0x1d;
      puVar14[0x1f] = 0;
      puVar14[0x20] = 0;
      puVar31[0] = 0;
      puVar31[1] = 0;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar14[0x23] = 0;
      puVar14[0x24] = 0;
      puVar14[0x21] = 0;
      puVar14[0x22] = 0;
      puVar14[0x27] = 0;
      puVar14[0x28] = 0;
      puVar14[0x25] = 0;
      puVar14[0x26] = 0;
      puVar14[0x2a] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x28] = 0;
      puVar14[0x29] = 0;
      puVar24 = puVar14 + 0x30;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x2c) = puVar14 + 0x1e;
      *(uint **)(puVar14 + 0x2e) = puVar24;
      puVar14[0x32] = 0;
      puVar14[0x33] = 0;
      if ((uStack_100._1_1_ >> 6 & 1) == 0) {
        plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,0x2010000);
        uStack_90 = 0;
        puStack_98 = puVar29;
        FUN_109a479a0(&uStack_100,&plStack_a0);
      }
      else {
        if (uVar22 != 0) {
          piVar25 = (int *)(uVar22 + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = *piVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(long *)(puVar14 + 0x12) != 0) {
            piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
            do {
              iVar2 = *piVar25;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(puVar29);
            }
          }
        }
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        if ((int)puVar14[5] < 1) {
          *puVar29 = (uint)uStack_100;
LAB_109af9a8c:
          if (2 < (int)uStack_100._4_4_) goto LAB_109af9ac0;
          puVar14[5] = (uint)uStack_100._4_4_;
          *(undefined8 *)(puVar14 + 6) = uStack_f8;
          plVar15 = *(long **)(puVar14 + 0x16);
          *plVar15 = *plStack_b8;
          plVar15[1] = plStack_b8[1];
        }
        else {
          lVar21 = 0;
          lVar26 = *(long *)(puVar14 + 0x14);
          do {
            *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)*puVar27);
          *puVar29 = (uint)uStack_100;
          if ((int)*puVar27 < 3) goto LAB_109af9a8c;
LAB_109af9ac0:
          func_0x000109a84868(puVar29,&uStack_100);
        }
        *(undefined8 *)(puVar14 + 10) = uStack_e8;
        *(int **)(puVar14 + 8) = piStack_f0;
        *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
        *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
        *(ulong *)(puVar14 + 0x12) = uStack_c8;
        *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
      }
      puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
      puVar14[3] = uVar5;
      if (((puVar14[4] & 0xfff) != 5) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
        puVar18 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54443c65;
        *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
        *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
        *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
        *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
        *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
        *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
        *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x4d;
        *(undefined1 *)((long)puVar18 + 0x51) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
        *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59cfea,&UNK_10f59c7f0,0xc08);
        goto LAB_109afbfcc;
      }
      if (CONCAT44(uStack_144,uStack_148) != 0) {
        piVar25 = (int *)(CONCAT44(uStack_144,uStack_148) + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(long *)(puVar14 + 0x2a) != 0) {
        piVar25 = (int *)(*(long *)(puVar14 + 0x2a) + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar30);
        }
      }
      puVar14[0x2a] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x22] = 0;
      puVar14[0x23] = 0;
      puVar14[0x20] = 0;
      puVar14[0x21] = 0;
      puVar14[0x26] = 0;
      puVar14[0x27] = 0;
      puVar14[0x24] = 0;
      puVar14[0x25] = 0;
      if ((int)puVar14[0x1d] < 1) {
        *puVar30 = (uint)uStack_180;
LAB_109af9ba4:
        if (2 < (int)uStack_180._4_4_) goto LAB_109af9bd8;
        puVar14[0x1d] = (uint)uStack_180._4_4_;
        *(ulong *)(puVar14 + 0x1e) = CONCAT44(uStack_178._4_4_,(uint)uStack_178);
        puVar17 = *(undefined8 **)(puVar14 + 0x2e);
        *puVar17 = *pplStack_138;
        puVar17[1] = pplStack_138[1];
      }
      else {
        lVar21 = 0;
        lVar26 = *(long *)(puVar14 + 0x2c);
        do {
          *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)*puVar31);
        *puVar30 = (uint)uStack_180;
        if ((int)*puVar31 < 3) goto LAB_109af9ba4;
LAB_109af9bd8:
        func_0x000109a84868(puVar30,&uStack_180);
      }
      *(ulong *)(puVar14 + 0x22) = CONCAT44(uStack_164,uStack_168);
      *(ulong *)(puVar14 + 0x20) = CONCAT44(uStack_16c,uStack_170);
      *(ulong *)(puVar14 + 0x26) = CONCAT44(uStack_154,uStack_158);
      *(ulong *)(puVar14 + 0x24) = CONCAT44(uStack_15c,uStack_160);
      *(ulong *)(puVar14 + 0x2a) = CONCAT44(uStack_144,uStack_148);
      *(ulong *)(puVar14 + 0x28) = CONCAT44(uStack_14c,uStack_150);
      puVar14[0x34] = (uint)uStack_120;
      *(undefined ***)puVar14 = &PTR_FUN_110b24918;
      puVar14[0x36] = uVar28;
      if (5 < (int)puVar14[2]) {
        puVar18 = (undefined4 *)0x5c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar18 + 7) = 0x495254454d4d5953;
        *(undefined8 *)(puVar18 + 5) = 0x5f4c454e52454b28;
        *(undefined8 *)(puVar18 + 0xb) = 0x5953415f4c454e52;
        *(undefined8 *)(puVar18 + 9) = 0x454b207c204c4143;
        *(undefined8 *)(puVar18 + 0xf) = 0x30203d212029294c;
        *(undefined8 *)(puVar18 + 0xd) = 0x4143495254454d4d;
        *(undefined8 *)(puVar18 + 0x13) = 0x20657a69736b3e2d;
        *(undefined8 *)(puVar18 + 0x11) = 0x7369687420262620;
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x54;
        *(undefined1 *)(puVar18 + 0x16) = 0;
        puVar18[0x15] = 0x35203d3c;
        *(undefined8 *)(puVar18 + 3) = 0x2026206570795479;
        *(undefined8 *)(puVar18 + 1) = 0x7274656d6d797328;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59cf89,&UNK_10f59c7f0,0xc43);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_FUN_110b24998;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_310 = plVar15;
      puStack_308 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      if (CONCAT44(uStack_144,uStack_148) != 0) {
        piVar25 = (int *)(CONCAT44(uStack_144,uStack_148) + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
        }
      }
      if (0 < (int)uStack_180._4_4_) {
        lVar21 = 0;
        do {
          *(undefined4 *)((long)puStack_140 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_180._4_4_);
      }
      bVar11 = pplStack_138 == &plStack_130;
    }
    uStack_144 = 0;
    uStack_148 = 0;
    uStack_154 = 0;
    uStack_158 = 0;
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    uStack_168 = 0;
    uStack_16c = 0;
    uStack_170 = 0;
    if (!bVar11 && pplStack_138 != (long **)0x0) {
      _free(pplStack_138[-1]);
    }
  }
LAB_109af9cec:
  if (uStack_c8 != 0) {
    piVar25 = (int *)(uStack_c8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  uStack_c8 = 0;
  uStack_e8 = 0;
  piStack_f0 = (int *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < (int)uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)uStack_100._4_4_);
  }
  if (plStack_b8 != &lStack_b0 && plStack_b8 != (long *)0x0) {
    _free(plStack_b8[-1]);
  }
  uVar4 = param_7[1];
  uStack_c0 = (ulong)&uStack_100 | 8;
  uStack_f8 = CONCAT44(uStack_2f4,uStack_2f8);
  uStack_100 = CONCAT44(iStack_2fc,uStack_300);
  uStack_e8 = CONCAT44(uStack_2e4,uStack_2e8);
  piStack_f0 = (int *)CONCAT44(uStack_2ec,uStack_2f0);
  uStack_d8 = CONCAT44(uStack_2d4,uStack_2d8);
  uStack_e0 = CONCAT44(uStack_2dc,uStack_2e0);
  uStack_d0 = CONCAT44(uStack_2cc,uStack_2d0);
  uStack_c8 = uStack_2c8;
  lStack_b0 = 0;
  lStack_a8 = 0;
  if (uStack_2c8 != 0) {
    piVar25 = (int *)(uStack_2c8 + 0x14);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = *piVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_b8 = &lStack_b0;
  if (iStack_2fc < 3) {
    lStack_b0 = *plStack_2b8;
    lStack_a8 = plStack_2b8[1];
  }
  else {
    uStack_100 = (ulong)uStack_300;
    func_0x000109a84868(&uStack_100,&uStack_300);
  }
  if (((uVar32 < uVar1) || (7 < (uVar7 ^ param_4 & 0xfff))) ||
     (uVar7 = (uint)uStack_100, ((uint)uStack_100 & 0xfff) != uVar32)) {
    puVar18 = (undefined4 *)0x60;
    func_0x000107c2ae8c();
    *puVar18 = 1;
    uStack_180 = puVar18 + 1;
    uStack_178._0_4_ = 0x59;
    uStack_178._4_4_ = 0;
    *(undefined8 *)(puVar18 + 0xb) = 0x642878616d3a3a64;
    *(undefined8 *)(puVar18 + 9) = 0x7473203d3e206874;
    *(undefined8 *)(puVar18 + 0xf) = 0x2620295332335f56;
    *(undefined8 *)(puVar18 + 0xd) = 0x43202c6874706564;
    *(undefined8 *)(puVar18 + 0x13) = 0x202928657079742e;
    *(undefined8 *)(puVar18 + 0x11) = 0x6c656e72656b2026;
    *(undefined8 *)((long)puVar18 + 0x55) = 0x687470656473203d;
    *(undefined8 *)((long)puVar18 + 0x4d) = 0x3d20292865707974;
    *(undefined8 *)(puVar18 + 3) = 0x284e435f54414d5f;
    *(undefined8 *)(puVar18 + 1) = 0x5643203d3d206e63;
    *(undefined1 *)((long)puVar18 + 0x5d) = 0;
    *(undefined8 *)(puVar18 + 7) = 0x7065647320262620;
    *(undefined8 *)(puVar18 + 5) = 0x2965707954667562;
    FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59cc53,&UNK_10f59c7f0,0xe67);
    goto LAB_109afbfcc;
  }
  if (((ulong)puVar13 & 3) == 0) {
    if ((uVar1 != 0) || (uVar32 != 4)) {
      if ((uVar1 == 0) && (uVar32 == 5)) {
        puVar14 = (uint *)0x78;
        __Znwm();
        FUN_109b038c8(param_2);
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b24fa8;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 0) && (uVar32 == 6)) {
        puVar14 = (uint *)0x80;
        __Znwm();
        FUN_109b03e50(param_2);
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b25030;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 2) && (uVar32 == 5)) {
        puVar14 = (uint *)0x78;
        __Znwm();
        FUN_109b043e8(param_2);
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b250b8;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 2) && (uVar32 == 6)) {
        FUN_109af7174(param_2,&uStack_180,&uStack_100,uVar4);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b04f90(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 3) && (uVar32 == 5)) {
        FUN_109af7200(param_2,&uStack_180,&uStack_100,uVar4);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b052c8(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 3) && (uVar32 == 6)) {
        FUN_109af74c8(param_2,&uStack_180,&uStack_100,uVar4);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b05954(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 5) && (uVar32 == 5)) {
        FUN_109af7554(param_2,&uStack_180,&uStack_100,uVar4);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b05f6c(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 6) && (uVar32 == 6)) {
        FUN_109af75e0(param_2,&uStack_180,&uStack_100,uVar4);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b065b4(&uStack_180);
        goto LAB_109afa8b8;
      }
LAB_109afbf54:
      FUN_109ac2700(&uStack_180,&UNK_10f59cc69);
      FUN_109ac3188(0xffffff2b,&uStack_180,&UNK_10f59cc53,&UNK_10f59c7f0,0xeb8);
      goto LAB_109afbfcc;
    }
    iVar2 = 0;
    if (uVar20 != 0) {
      iVar2 = 1 << (ulong)(uVar20 - 1 & 0x1f);
    }
    puVar14 = (uint *)0x80;
    __Znwm();
    puVar14[2] = 0xffffffff;
    puVar14[3] = 0xffffffff;
    puVar27 = puVar14 + 4;
    *puVar27 = 0x42ff0000;
    puVar29 = puVar14 + 5;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar29[0] = 0;
    puVar29[1] = 0;
    *(undefined ***)puVar14 = &PTR_FUN_110b24ed8;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar24 = puVar14 + 0x18;
    puVar24[0] = 0;
    puVar24[1] = 0;
    *(uint **)(puVar14 + 0x14) = puVar14 + 6;
    *(uint **)(puVar14 + 0x16) = puVar24;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    if ((uVar7 >> 0xe & 1) == 0) {
      uStack_180._0_4_ = 0x2010000;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_178 = puVar27;
      FUN_109a479a0(&uStack_100,&uStack_180);
    }
    else {
      if (uStack_c8 != 0) {
        piVar25 = (int *)(uStack_c8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (*(long *)(puVar14 + 0x12) != 0) {
          piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
          do {
            iVar3 = *piVar25;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = iVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(puVar27);
          }
        }
      }
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[0xe] = 0;
      puVar14[0xf] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      if ((int)puVar14[5] < 1) {
        *puVar27 = (uint)uStack_100;
LAB_109afa7c8:
        if (2 < (int)uStack_100._4_4_) goto LAB_109afa7fc;
        puVar14[5] = (uint)uStack_100._4_4_;
        *(undefined8 *)(puVar14 + 6) = uStack_f8;
        plVar15 = *(long **)(puVar14 + 0x16);
        *plVar15 = *plStack_b8;
        plVar15[1] = plStack_b8[1];
      }
      else {
        lVar21 = 0;
        lVar26 = *(long *)(puVar14 + 0x14);
        do {
          *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)*puVar29);
        *puVar27 = (uint)uStack_100;
        if ((int)*puVar29 < 3) goto LAB_109afa7c8;
LAB_109afa7fc:
        func_0x000109a84868(puVar27,&uStack_100);
      }
      *(undefined8 *)(puVar14 + 10) = uStack_e8;
      *(int **)(puVar14 + 8) = piStack_f0;
      *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
      *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
      *(ulong *)(puVar14 + 0x12) = uStack_c8;
      *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
    }
    puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
    puVar14[3] = uVar4;
    puVar14[0x1f] = (uint)(long)(double)(long)param_2;
    *(ulong *)(puVar14 + 0x1c) = CONCAT44(iVar2,uVar20);
    if (((puVar14[4] & 0xfff) != 4) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
      puVar18 = (undefined4 *)0x54;
      func_0x000107c2ae8c();
      *puVar18 = 1;
      uStack_180 = puVar18 + 1;
      uStack_178._0_4_ = 0x4d;
      uStack_178._4_4_ = 0;
      *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54533c65;
      *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
      *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
      *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
      *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
      *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
      *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
      *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
      *(undefined1 *)((long)puVar18 + 0x51) = 0;
      *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
      *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
      FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
      goto LAB_109afbfcc;
    }
    plVar15 = (long *)0x20;
    __Znwm();
    plVar23 = plVar15 + 1;
    *(int *)plVar23 = 1;
    *plVar15 = (long)&PTR_DAT_110b24f20;
    plVar15[2] = (long)puVar14;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      iVar2 = (int)*plVar23 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = iVar2;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plStack_320 = plVar15;
    puStack_318 = puVar14;
    if (iVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    goto LAB_109afa8b8;
  }
  if (uStack_f8._4_4_ + (uint)uStack_f8 == 4) {
    if ((uVar1 == 0) && (uVar32 == 4)) {
      iStack_104 = 0;
      if (uVar20 != 0) {
        iStack_104 = 1 << (ulong)(uVar20 - 1 & 0x1f);
      }
      uStack_108 = uVar20;
      FUN_109affc6c(param_2,&uStack_180,&uStack_100,uVar12);
      puVar14 = (uint *)0xe8;
      __Znwm();
      FUN_109b06608(param_2);
      *(undefined ***)puVar14 = &PTR_FUN_110b253a0;
      if (puVar14[2] != 3) {
        puVar18 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x10;
        *(undefined1 *)(puVar18 + 5) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x33203d3d20657a69;
        *(undefined8 *)(puVar18 + 1) = 0x736b3e2d73696874;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59d060,&UNK_10f59c7f0,0xd77);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_FUN_110b25478;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_320 = plVar15;
      puStack_318 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      puVar14 = uStack_178;
      if (puStack_140 != (undefined8 *)0x0) {
        piVar25 = (int *)((long)puStack_140 + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_178);
          puVar14 = uStack_178;
        }
      }
      uStack_178._4_4_ = (uint)((ulong)puVar14 >> 0x20);
      if (0 < (int)uStack_178._4_4_) {
        lVar21 = 0;
        do {
          *(undefined4 *)((long)pplStack_138 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_178._4_4_);
      }
    }
    else {
      if ((uVar32 != 4) || ((uVar1 != 3 || (uVar20 != 0)))) {
        if ((uVar1 != 5) || (uVar32 != 5)) goto LAB_109afa394;
        puVar14 = (uint *)0x80;
        __Znwm();
        puVar14[2] = 0xffffffff;
        puVar14[3] = 0xffffffff;
        *(undefined ***)puVar14 = &PTR_FUN_110b25618;
        puVar29 = puVar14 + 4;
        *puVar29 = 0x42ff0000;
        puVar27 = puVar14 + 5;
        puVar14[7] = 0;
        puVar14[8] = 0;
        puVar27[0] = 0;
        puVar27[1] = 0;
        puVar14[0xb] = 0;
        puVar14[0xc] = 0;
        puVar14[9] = 0;
        puVar14[10] = 0;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar24 = puVar14 + 0x18;
        puVar24[0] = 0;
        puVar24[1] = 0;
        *(uint **)(puVar14 + 0x14) = puVar14 + 6;
        *(uint **)(puVar14 + 0x16) = puVar24;
        puVar14[0x1a] = 0;
        puVar14[0x1b] = 0;
        if ((uVar7 >> 0xe & 1) == 0) {
          uStack_180._0_4_ = 0x2010000;
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_178 = puVar29;
          FUN_109a479a0(&uStack_100,&uStack_180);
        }
        else {
          if (uStack_c8 != 0) {
            piVar25 = (int *)(uStack_c8 + 0x14);
            do {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = *piVar25 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (*(long *)(puVar14 + 0x12) != 0) {
              piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
              do {
                iVar2 = *piVar25;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar11) {
                  *piVar25 = iVar2 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(puVar29);
              }
            }
          }
          puVar14[0x12] = 0;
          puVar14[0x13] = 0;
          puVar14[10] = 0;
          puVar14[0xb] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          if ((int)puVar14[5] < 1) {
            *puVar29 = (uint)uStack_100;
LAB_109afb318:
            if (2 < (int)uStack_100._4_4_) goto LAB_109afb34c;
            puVar14[5] = (uint)uStack_100._4_4_;
            *(undefined8 *)(puVar14 + 6) = uStack_f8;
            plVar15 = *(long **)(puVar14 + 0x16);
            *plVar15 = *plStack_b8;
            plVar15[1] = plStack_b8[1];
          }
          else {
            lVar21 = 0;
            lVar26 = *(long *)(puVar14 + 0x14);
            do {
              *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < (int)*puVar27);
            *puVar29 = (uint)uStack_100;
            if ((int)*puVar27 < 3) goto LAB_109afb318;
LAB_109afb34c:
            func_0x000109a84868(puVar29,&uStack_100);
          }
          *(undefined8 *)(puVar14 + 10) = uStack_e8;
          *(int **)(puVar14 + 8) = piStack_f0;
          *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
          *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
          *(ulong *)(puVar14 + 0x12) = uStack_c8;
          *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
        }
        uVar7 = (puVar14[6] + puVar14[7]) - 1;
        puVar14[2] = uVar7;
        puVar14[3] = uVar4;
        puVar14[0x1d] = (uint)(float)param_2;
        if (((puVar14[4] & 0xfff) != 5) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
          puVar18 = (undefined4 *)0x54;
          func_0x000107c2ae8c();
          *puVar18 = 1;
          uStack_180 = puVar18 + 1;
          uStack_178._0_4_ = 0x4d;
          uStack_178._4_4_ = 0;
          *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54533c65;
          *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
          *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
          *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
          *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
          *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
          *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
          *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
          *(undefined1 *)((long)puVar18 + 0x51) = 0;
          *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
          *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
          FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
          goto LAB_109afbfcc;
        }
        puVar14[0x1e] = uVar12;
        *(undefined ***)puVar14 = &PTR_FUN_110b255a0;
        if (uVar7 != 3) {
          puVar18 = (undefined4 *)0x18;
          func_0x000107c2ae8c();
          *puVar18 = 1;
          uStack_180 = puVar18 + 1;
          uStack_178._0_4_ = 0x10;
          uStack_178._4_4_ = 0;
          *(undefined1 *)(puVar18 + 5) = 0;
          *(undefined8 *)(puVar18 + 3) = 0x33203d3d20657a69;
          *(undefined8 *)(puVar18 + 1) = 0x736b3e2d73696874;
          FUN_109ac3188(0xffffff29,&uStack_180,&UNK_10f59d060,&UNK_10f59c7f0,0xd77);
          goto LAB_109afbfcc;
        }
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b25648;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      pplStack_138 = (long **)&uStack_170;
      uStack_14c = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      puStack_140 = (undefined8 *)0x0;
      uStack_148 = 0;
      uStack_144 = 0;
      plStack_130 = &lStack_128;
      uStack_120 = 0;
      lStack_128 = 0;
      uStack_178._0_4_ = 0x42ff0000;
      plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,0x2010000);
      uStack_90 = 0;
      uStack_180._0_4_ = uVar12;
      puStack_98 = (uint *)&uStack_178;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_100,&plStack_a0,5);
      uStack_180._4_4_ = (float)param_2;
      if (((uint)uStack_180 & 3) == 0) {
        puVar18 = (undefined4 *)0x48;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x40;
        *(undefined8 *)(puVar18 + 3) = 0x2026206570795479;
        *(undefined8 *)(puVar18 + 1) = 0x7274656d6d797328;
        *(undefined8 *)(puVar18 + 7) = 0x495254454d4d5953;
        *(undefined8 *)(puVar18 + 5) = 0x5f4c454e52454b28;
        *(undefined8 *)(puVar18 + 0xb) = 0x5953415f4c454e52;
        *(undefined8 *)(puVar18 + 9) = 0x454b207c204c4143;
        *(undefined1 *)(puVar18 + 0x11) = 0;
        *(undefined8 *)(puVar18 + 0xf) = 0x30203d212029294c;
        *(undefined8 *)(puVar18 + 0xd) = 0x4143495254454d4d;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59ce39,&UNK_10f59c7f0,0xa30);
        goto LAB_109afbfcc;
      }
      puVar14 = (uint *)0xe8;
      __Znwm();
      puVar14[2] = 0xffffffff;
      puVar14[3] = 0xffffffff;
      *(undefined ***)puVar14 = &PTR_FUN_110b25530;
      puVar30 = puVar14 + 4;
      *puVar30 = 0x42ff0000;
      puVar31 = puVar14 + 5;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar31[0] = 0;
      puVar31[1] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xf] = 0;
      puVar14[0x10] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar24 = puVar14 + 0x18;
      puVar24[0] = 0;
      puVar24[1] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      *(uint **)(puVar14 + 0x14) = puVar14 + 6;
      *(uint **)(puVar14 + 0x16) = puVar24;
      puVar29 = puVar14 + 0x20;
      *puVar29 = 0x42ff0000;
      puVar14[0x1a] = 0;
      puVar14[0x1b] = 0;
      puVar14[0x27] = 0;
      puVar14[0x28] = 0;
      puVar14[0x25] = 0;
      puVar14[0x26] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x2c] = 0;
      puVar14[0x29] = 0;
      puVar14[0x2a] = 0;
      puVar14[0x2e] = 0;
      puVar14[0x2f] = 0;
      puVar14[0x2c] = 0;
      puVar14[0x2d] = 0;
      puVar27 = puVar14 + 0x21;
      puVar14[0x23] = 0;
      puVar14[0x24] = 0;
      puVar27[0] = 0;
      puVar27[1] = 0;
      puVar24 = puVar14 + 0x34;
      puVar24[0] = 0;
      puVar24[1] = 0;
      *(uint **)(puVar14 + 0x30) = puVar14 + 0x22;
      *(uint **)(puVar14 + 0x32) = puVar24;
      puVar14[0x36] = 0;
      puVar14[0x37] = 0;
      puVar14[0x1e] = 0;
      if ((uStack_100._1_1_ >> 6 & 1) == 0) {
        plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,0x2010000);
        uStack_90 = 0;
        puStack_98 = puVar30;
        FUN_109a479a0(&uStack_100,&plStack_a0);
      }
      else {
        if (uStack_c8 != 0) {
          piVar25 = (int *)(uStack_c8 + 0x14);
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar11) {
              *piVar25 = *piVar25 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(long *)(puVar14 + 0x12) != 0) {
            piVar25 = (int *)(*(long *)(puVar14 + 0x12) + 0x14);
            do {
              iVar2 = *piVar25;
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar11) {
                *piVar25 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(puVar30);
            }
          }
        }
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        if ((int)puVar14[5] < 1) {
          *puVar30 = (uint)uStack_100;
LAB_109afaec0:
          if (2 < (int)uStack_100._4_4_) goto LAB_109afaef4;
          puVar14[5] = (uint)uStack_100._4_4_;
          *(undefined8 *)(puVar14 + 6) = uStack_f8;
          plVar15 = *(long **)(puVar14 + 0x16);
          *plVar15 = *plStack_b8;
          plVar15[1] = plStack_b8[1];
        }
        else {
          lVar21 = 0;
          lVar26 = *(long *)(puVar14 + 0x14);
          do {
            *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)*puVar31);
          *puVar30 = (uint)uStack_100;
          if ((int)*puVar31 < 3) goto LAB_109afaec0;
LAB_109afaef4:
          func_0x000109a84868(puVar30,&uStack_100);
        }
        *(undefined8 *)(puVar14 + 10) = uStack_e8;
        *(int **)(puVar14 + 8) = piStack_f0;
        *(undefined8 *)(puVar14 + 0xe) = uStack_d8;
        *(undefined8 *)(puVar14 + 0xc) = uStack_e0;
        *(ulong *)(puVar14 + 0x12) = uStack_c8;
        *(undefined8 *)(puVar14 + 0x10) = uStack_d0;
      }
      puVar14[2] = (puVar14[6] + puVar14[7]) - 1;
      puVar14[3] = uVar4;
      puVar14[0x38] = (uint)(long)(double)(long)param_2;
      *(ulong *)(puVar14 + 0x1e) = CONCAT44(uStack_180._4_4_,(uint)uStack_180);
      if (puStack_140 != (undefined8 *)0x0) {
        piVar25 = (int *)((long)puStack_140 + 0x14);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = *piVar25 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (*(long *)(puVar14 + 0x2e) != 0) {
        piVar25 = (int *)(*(long *)(puVar14 + 0x2e) + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(puVar29);
        }
      }
      puVar14[0x2e] = 0;
      puVar14[0x2f] = 0;
      puVar14[0x26] = 0;
      puVar14[0x27] = 0;
      puVar14[0x24] = 0;
      puVar14[0x25] = 0;
      puVar14[0x2a] = 0;
      puVar14[0x2b] = 0;
      puVar14[0x28] = 0;
      puVar14[0x29] = 0;
      if ((int)puVar14[0x21] < 1) {
        *puVar29 = (uint)uStack_178;
LAB_109afafc8:
        if (2 < (int)uStack_178._4_4_) goto LAB_109afaffc;
        puVar14[0x21] = uStack_178._4_4_;
        *(ulong *)(puVar14 + 0x22) = CONCAT44(uStack_16c,uStack_170);
        plVar15 = *(long **)(puVar14 + 0x32);
        *plVar15 = *plStack_130;
        plVar15[1] = plStack_130[1];
      }
      else {
        lVar21 = 0;
        lVar26 = *(long *)(puVar14 + 0x30);
        do {
          *(undefined4 *)(lVar26 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)*puVar27);
        *puVar29 = (uint)uStack_178;
        if ((int)*puVar27 < 3) goto LAB_109afafc8;
LAB_109afaffc:
        func_0x000109a84868(puVar29,&uStack_178);
      }
      *(ulong *)(puVar14 + 0x26) = CONCAT44(uStack_15c,uStack_160);
      *(ulong *)(puVar14 + 0x24) = CONCAT44(uStack_164,uStack_168);
      *(ulong *)(puVar14 + 0x2a) = CONCAT44(uStack_14c,uStack_150);
      *(ulong *)(puVar14 + 0x28) = CONCAT44(uStack_154,uStack_158);
      *(undefined8 **)(puVar14 + 0x2e) = puStack_140;
      *(ulong *)(puVar14 + 0x2c) = CONCAT44(uStack_144,uStack_148);
      if (((puVar14[4] & 0xfff) != 4) || ((puVar14[6] != 1 && (puVar14[7] != 1)))) {
        puVar18 = (undefined4 *)0x54;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar18 + 7) = 0x743a3a3e54533c65;
        *(undefined8 *)(puVar18 + 5) = 0x7079546174614420;
        *(undefined8 *)(puVar18 + 0xb) = 0x722e6c656e72656b;
        *(undefined8 *)(puVar18 + 9) = 0x2820262620657079;
        *(undefined8 *)(puVar18 + 0xf) = 0x6e72656b207c7c20;
        *(undefined8 *)(puVar18 + 0xd) = 0x31203d3d2073776f;
        *(undefined8 *)((long)puVar18 + 0x49) = 0x2931203d3d20736c;
        *(undefined8 *)((long)puVar18 + 0x41) = 0x6f632e6c656e7265;
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x4d;
        *(undefined1 *)((long)puVar18 + 0x51) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x3d3d202928657079;
        *(undefined8 *)(puVar18 + 1) = 0x742e6c656e72656b;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59d042,&UNK_10f59c7f0,0xcce);
LAB_109afbfcc:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109afbfd0);
        (*pcVar10)();
      }
      puVar14[0x39] = uVar12;
      *(undefined ***)puVar14 = &PTR_FUN_110b254b8;
      if (puVar14[2] != 3) {
        puVar18 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar18 = 1;
        plStack_a0 = (long *)(puVar18 + 1);
        puStack_98 = (uint *)0x10;
        *(undefined1 *)(puVar18 + 5) = 0;
        *(undefined8 *)(puVar18 + 3) = 0x33203d3d20657a69;
        *(undefined8 *)(puVar18 + 1) = 0x736b3e2d73696874;
        FUN_109ac3188(0xffffff29,&plStack_a0,&UNK_10f59d060,&UNK_10f59c7f0,0xd77);
        goto LAB_109afbfcc;
      }
      plVar15 = (long *)0x20;
      __Znwm();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = 1;
      *plVar15 = (long)&PTR_FUN_110b25560;
      plVar15[2] = (long)puVar14;
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        iVar2 = (int)*plVar23 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *(int *)plVar23 = iVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plStack_320 = plVar15;
      puStack_318 = puVar14;
      if (iVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      if (puStack_140 != (undefined8 *)0x0) {
        piVar25 = (int *)((long)puStack_140 + 0x14);
        do {
          iVar2 = *piVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar11) {
            *piVar25 = iVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_178);
        }
      }
      puVar14 = (uint *)CONCAT44(uStack_178._4_4_,(uint)uStack_178);
      if (0 < (int)uStack_178._4_4_) {
        lVar21 = 0;
        do {
          *(undefined4 *)((long)pplStack_138 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_178._4_4_);
      }
    }
  }
  else {
LAB_109afa394:
    if ((uVar1 != 0) || (uVar32 != 4)) {
      if ((uVar1 == 0) && (uVar32 == 5)) {
        puVar14 = (uint *)0x80;
        __Znwm();
        FUN_109b038c8(param_2);
        *(undefined ***)puVar14 = &PTR_FUN_110b256c8;
        puVar14[0x1e] = uVar12;
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b25710;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 0) && (uVar32 == 6)) {
        puVar14 = (uint *)0x88;
        __Znwm();
        FUN_109b03e50(param_2);
        *(undefined ***)puVar14 = &PTR_FUN_110b25750;
        puVar14[0x20] = uVar12;
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b25798;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 2) && (uVar32 == 5)) {
        puVar14 = (uint *)0x80;
        __Znwm();
        FUN_109b043e8(param_2);
        *(undefined ***)puVar14 = &PTR_FUN_110b257d8;
        puVar14[0x1e] = uVar12;
        plVar15 = (long *)0x20;
        __Znwm();
        plVar23 = plVar15 + 1;
        *(int *)plVar23 = 1;
        *plVar15 = (long)&PTR_DAT_110b25820;
        plVar15[2] = (long)puVar14;
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = (int)*plVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          iVar2 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *(int *)plVar23 = iVar2;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plStack_320 = plVar15;
        puStack_318 = puVar14;
        if (iVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 2) && (uVar32 == 6)) {
        FUN_109af77ac(param_2,&uStack_180,&uStack_100,uVar4,uVar12);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0a048(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 3) && (uVar32 == 4)) {
        FUN_109af7910(param_2,&uStack_180,&uStack_100,uVar4,uVar12);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0a7c0(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 3) && (uVar32 == 5)) {
        FUN_109affdf0(param_2,&uStack_180,&uStack_100,uVar12);
        FUN_109af7ca0(param_2,&plStack_a0,&uStack_100,uVar4,uVar12,&uStack_180);
        puStack_318 = puStack_98;
        plStack_320 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          plVar15 = plStack_a0 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0b118(&plStack_a0);
        FUN_109af818c(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 3) && (uVar32 == 6)) {
        FUN_109af822c(param_2,&uStack_180,&uStack_100,uVar4,uVar12);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0b648(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 5) && (uVar32 == 5)) {
        FUN_109af8390(param_2,&uStack_180,&uStack_100,uVar4,uVar12);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0ba58(&uStack_180);
        goto LAB_109afa8b8;
      }
      if ((uVar1 == 6) && (uVar32 == 6)) {
        FUN_109af84f4(param_2,&uStack_180,&uStack_100,uVar4,uVar12);
        puStack_318 = uStack_178;
        plStack_320 = (long *)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
        if (plStack_320 != (long *)0x0) {
          plVar15 = plStack_320 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        FUN_109b0bef4(&uStack_180);
        goto LAB_109afa8b8;
      }
      goto LAB_109afbf54;
    }
    iVar2 = 0;
    if (uVar20 != 0) {
      iVar2 = 1 << (ulong)(uVar20 - 1 & 0x1f);
    }
    plStack_a0 = (long *)CONCAT44(iVar2,uVar20);
    FUN_109affc6c(param_2,&uStack_180,&uStack_100,uVar12);
    puVar14 = (uint *)0xe8;
    __Znwm();
    FUN_109b06608(param_2);
    plVar15 = (long *)0x20;
    __Znwm();
    plVar23 = plVar15 + 1;
    *(int *)plVar23 = 1;
    *plVar15 = (long)&PTR_FUN_110b25688;
    plVar15[2] = (long)puVar14;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      iVar2 = (int)*plVar23 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = iVar2;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plStack_320 = plVar15;
    puStack_318 = puVar14;
    if (iVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    puVar14 = uStack_178;
    if (puStack_140 != (undefined8 *)0x0) {
      piVar25 = (int *)((long)puStack_140 + 0x14);
      do {
        iVar2 = *piVar25;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar11) {
          *piVar25 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_178);
        puVar14 = uStack_178;
      }
    }
    uStack_178._4_4_ = (uint)((ulong)puVar14 >> 0x20);
    if (0xffffffff < (long)puVar14) {
      lVar21 = 0;
      do {
        *(undefined4 *)((long)pplStack_138 + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)uStack_178._4_4_);
    }
  }
  uStack_178 = puVar14;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_154 = 0;
  uStack_158 = 0;
  uStack_15c = 0;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_168 = 0;
  puStack_140 = (undefined8 *)0x0;
  if (plStack_130 != &lStack_128 && plStack_130 != (long *)0x0) {
    _free(plStack_130[-1]);
  }
LAB_109afa8b8:
  if (uStack_c8 != 0) {
    piVar25 = (int *)(uStack_c8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  uStack_c8 = 0;
  uStack_e8 = 0;
  piStack_f0 = (int *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (0 < (int)uStack_100._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)uStack_100._4_4_);
  }
  if (plStack_b8 != &lStack_b0 && plStack_b8 != (long *)0x0) {
    _free(plStack_b8[-1]);
  }
  uVar16 = 0x130;
  __Znwm();
  uStack_178._0_4_ = 0;
  uStack_178._4_4_ = 0;
  uStack_180._0_4_ = 0;
  uStack_180._4_4_ = 0.0;
  FUN_109af4470();
  puVar17 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar17 + 1) = 1;
  *puVar17 = &PTR_FUN_110b25c20;
  puVar17[2] = uVar16;
  *param_1 = puVar17;
  param_1[1] = uVar16;
  FUN_109b00030(&uStack_180);
  FUN_109b000d8(&plStack_320);
  FUN_109b00084(&plStack_310);
  if (uStack_2c8 != 0) {
    piVar25 = (int *)(uStack_2c8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_300);
    }
  }
  uStack_2c8 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  if (0 < iStack_2fc) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_2c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iStack_2fc);
  }
  if (plStack_2b8 != alStack_2b0 && plStack_2b8 != (long *)0x0) {
    _free(plStack_2b8[-1]);
  }
  if (uStack_268 != 0) {
    piVar25 = (int *)(uStack_268 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a0);
    }
  }
  uStack_268 = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  if (0 < iStack_29c) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_260 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iStack_29c);
  }
  if (plStack_258 != &lStack_250 && plStack_258 != (long *)0x0) {
    _free(plStack_258[-1]);
  }
  if (uStack_208 != 0) {
    piVar25 = (int *)(uStack_208 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_240);
    }
  }
  uStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < uStack_240._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_200 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_240._4_4_);
  }
  if (plStack_1f8 != &lStack_1f0 && plStack_1f8 != (long *)0x0) {
    _free(plStack_1f8[-1]);
  }
  if (uStack_1a8 != 0) {
    piVar25 = (int *)(uStack_1a8 + 0x14);
    do {
      iVar2 = *piVar25;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar11) {
        *piVar25 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1e0);
    }
  }
  uStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (0 < uStack_1e0._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_1a0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_1e0._4_4_);
  }
  if (plStack_198 != &lStack_190 && plStack_198 != (long *)0x0) {
    _free(plStack_198[-1]);
  }
  return;
}



/* Entry: 109afc698; end: 109afc8e3;  */

void FUN_109afc698(uint *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  double dVar19;
  undefined4 *puStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x1010000);
  uVar13 = (uint)&puStack_58;
  puStack_50 = param_1;
  FUN_109ab7930();
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xfff;
  if (2 < uVar1 - 4 && uVar1 != 0) {
    puVar6 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 7) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar6 + 5) = 0x20657079746b207c;
    *(undefined8 *)(puVar6 + 0xb) = 0x5643203d3d206570;
    *(undefined8 *)(puVar6 + 9) = 0x79746b207c7c2053;
    *(undefined8 *)(puVar6 + 0xf) = 0x3d3d20657079746b;
    *(undefined8 *)(puVar6 + 0xd) = 0x207c7c204632335f;
    *puVar6 = 1;
    puStack_58 = puVar6 + 1;
    puStack_50 = (uint *)0x47;
    *(undefined1 *)((long)puVar6 + 0x4b) = 0;
    *(undefined8 *)((long)puVar6 + 0x43) = 0x4634365f5643203d;
    *(undefined8 *)(puVar6 + 3) = 0x7c2055385f564320;
    *(undefined8 *)(puVar6 + 1) = 0x3d3d20657079746b;
    FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59cd34,&UNK_10f59c7f0,0xf0d);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109afc8b8);
    (*pcVar5)();
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  FUN_1092cbef0(param_2,(long)(int)uVar13);
  uVar9 = (long)(int)((uVar1 >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar2 & 7) << 1) & 3)) *
          (long)(int)uVar13;
  lVar7 = *param_3;
  uVar12 = param_3[1] - lVar7;
  if (uVar9 < uVar12 || uVar9 - uVar12 == 0) {
    if (uVar9 < uVar12) {
      param_3[1] = lVar7 + uVar9;
    }
  }
  else {
    func_0x000107c27d58(param_3,uVar9 - uVar12);
    lVar7 = *param_3;
  }
  uVar13 = param_1[2];
  if (0 < (int)uVar13) {
    lVar10 = 0;
    iVar11 = 0;
    uVar9 = (ulong)param_1[3];
    do {
      if (0 < (int)uVar9) {
        lVar14 = 0;
        lVar16 = 0;
        lVar17 = *(long *)(param_1 + 4) + **(long **)(param_1 + 0x12) * lVar10;
        do {
          uVar8 = (undefined4)lVar10;
          uVar15 = (undefined4)lVar16;
          if (uVar1 == 5) {
            fVar18 = *(float *)(lVar17 + lVar14);
            if (fVar18 != 0.0) {
              puVar6 = (undefined4 *)(*param_2 + (long)iVar11 * 8);
              *puVar6 = uVar15;
              puVar6[1] = uVar8;
              *(float *)(lVar7 + (long)iVar11 * 4) = fVar18;
              goto LAB_109afc808;
            }
          }
          else if (uVar1 == 4) {
            iVar3 = *(int *)(lVar17 + lVar14);
            if (iVar3 != 0) {
              puVar6 = (undefined4 *)(*param_2 + (long)iVar11 * 8);
              *puVar6 = uVar15;
              puVar6[1] = uVar8;
              *(int *)(lVar7 + (long)iVar11 * 4) = iVar3;
              goto LAB_109afc808;
            }
          }
          else if (uVar1 == 0) {
            cVar4 = *(char *)(lVar17 + lVar16);
            if (cVar4 != '\0') {
              puVar6 = (undefined4 *)(*param_2 + (long)iVar11 * 8);
              *puVar6 = uVar15;
              puVar6[1] = uVar8;
              *(char *)(lVar7 + iVar11) = cVar4;
LAB_109afc808:
              iVar11 = iVar11 + 1;
            }
          }
          else {
            dVar19 = *(double *)(lVar17 + lVar16 * 8);
            if (dVar19 != 0.0) {
              puVar6 = (undefined4 *)(*param_2 + (long)iVar11 * 8);
              *puVar6 = uVar15;
              puVar6[1] = uVar8;
              *(double *)(lVar7 + (long)iVar11 * 8) = dVar19;
              goto LAB_109afc808;
            }
          }
          lVar16 = lVar16 + 1;
          uVar9 = (ulong)(int)param_1[3];
          lVar14 = lVar14 + 4;
        } while (lVar16 < (long)uVar9);
        uVar13 = param_1[2];
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uVar13);
  }
  return;
}



/* Entry: 109afc8e4; end: 109afcac7;  */

void FUN_109afc8e4(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_DAT_110b25f08;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  *(float *)(puVar2 + 0xc) = (float)param_1;
  if ((*param_3 & 0xfff) == 5) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b25f50;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afca50);
  (*pcVar1)();
}



/* Entry: 109afcac8; end: 109afccab;  */

void FUN_109afcac8(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_FUN_110b25f90;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  *(float *)(puVar2 + 0xc) = (float)param_1;
  if ((*param_3 & 0xfff) == 5) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b25fd8;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afcc34);
  (*pcVar1)();
}



/* Entry: 109afccac; end: 109afce8b;  */

void FUN_109afccac(undefined8 param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  *puVar2 = &PTR_FUN_110b26018;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  puVar2[0xc] = param_1;
  if ((*param_3 & 0xfff) == 6) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b26060;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afce14);
  (*pcVar1)();
}



/* Entry: 109afce8c; end: 109afd06f;  */

void FUN_109afce8c(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_FUN_110b260a0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  *(float *)(puVar2 + 0xc) = (float)param_1;
  if ((*param_3 & 0xfff) == 5) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_110b260e8;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afcff8);
  (*pcVar1)();
}



/* Entry: 109afd070; end: 109afd253;  */

void FUN_109afd070(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_FUN_110b26128;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  *(float *)(puVar2 + 0xc) = (float)param_1;
  if ((*param_3 & 0xfff) == 5) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b26170;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afd1dc);
  (*pcVar1)();
}



/* Entry: 109afd254; end: 109afd433;  */

void FUN_109afd254(undefined8 param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  *puVar2 = &PTR_FUN_110b261b0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  puVar2[0xc] = param_1;
  if ((*param_3 & 0xfff) == 6) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b261f8;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afd3bc);
  (*pcVar1)();
}



/* Entry: 109afd434; end: 109afd617;  */

void FUN_109afd434(double param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  puVar2[4] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_FUN_110b26238;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  *(float *)(puVar2 + 0xc) = (float)param_1;
  if ((*param_3 & 0xfff) == 5) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b26280;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afd5a0);
  (*pcVar1)();
}



/* Entry: 109afd618; end: 109afd7f7;  */

void FUN_109afd618(undefined8 param_1,undefined8 *param_2,uint *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  *puVar2 = &PTR_FUN_110b262c0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 2) = param_4;
  *(undefined4 *)((long)puVar2 + 0x14) = param_5;
  uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
  puVar2[1] = uVar5;
  puVar2[0xc] = param_1;
  if ((*param_3 & 0xfff) == 6) {
    FUN_109afc698(param_3,puVar2 + 3,puVar2 + 6);
    FUN_109ac9e9c(puVar2 + 9,(long)(puVar2[4] - puVar2[3]) >> 3);
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DAT_110b26308;
    puVar3[2] = puVar2;
    *param_2 = puVar3;
    param_2[1] = puVar2;
    return;
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_70 = puVar4 + 1;
  uStack_68 = 0x24;
  *(undefined1 *)(puVar4 + 10) = 0;
  puVar4[9] = 0x65707974;
  *(undefined8 *)(puVar4 + 3) = 0x3d20292865707974;
  *(undefined8 *)(puVar4 + 1) = 0x2e6c656e72656b5f;
  *(undefined8 *)(puVar4 + 7) = 0x3a3a3e544b3c6570;
  *(undefined8 *)(puVar4 + 5) = 0x795461746144203d;
  FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109afd780);
  (*pcVar1)();
}



/* Entry: 109afd7f8; end: 109afd8cf;  */

void FUN_109afd7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x130;
  __Znwm();
  FUN_109af4470();
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110b25c20;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 109afd8d0; end: 109aff66b;  */

/* WARNING: Removing unreachable block (ram,0x000109afdd6c) */
/* WARNING: Removing unreachable block (ram,0x000109afdd70) */
/* WARNING: Removing unreachable block (ram,0x000109afdd78) */
/* WARNING: Removing unreachable block (ram,0x000109afdd80) */
/* WARNING: Removing unreachable block (ram,0x000109afdd84) */
/* WARNING: Removing unreachable block (ram,0x000109afdc18) */
/* WARNING: Removing unreachable block (ram,0x000109afdc1c) */
/* WARNING: Removing unreachable block (ram,0x000109afdc24) */
/* WARNING: Removing unreachable block (ram,0x000109afdc2c) */
/* WARNING: Removing unreachable block (ram,0x000109afdc30) */
/* WARNING: Removing unreachable block (ram,0x000109afdfc4) */
/* WARNING: Removing unreachable block (ram,0x000109afdfc8) */
/* WARNING: Removing unreachable block (ram,0x000109afdfd0) */
/* WARNING: Removing unreachable block (ram,0x000109afdfd8) */
/* WARNING: Removing unreachable block (ram,0x000109afdfdc) */
/* WARNING: Removing unreachable block (ram,0x000109afe000) */
/* WARNING: Removing unreachable block (ram,0x000109afe008) */
/* WARNING: Removing unreachable block (ram,0x000109afe01c) */
/* WARNING: Removing unreachable block (ram,0x000109afdda4) */
/* WARNING: Removing unreachable block (ram,0x000109afddac) */
/* WARNING: Removing unreachable block (ram,0x000109afddc0) */
/* WARNING: Removing unreachable block (ram,0x000109afddd0) */
/* WARNING: Removing unreachable block (ram,0x000109afdc50) */
/* WARNING: Removing unreachable block (ram,0x000109afdc58) */
/* WARNING: Removing unreachable block (ram,0x000109afdc6c) */
/* WARNING: Removing unreachable block (ram,0x000109afdc7c) */
/* WARNING: Removing unreachable block (ram,0x000109afe02c) */

void FUN_109afd8d0(double param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,
                  int *param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  double dVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  double *pdVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [8];
  long *plStack_388;
  undefined8 uStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double dStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  int *piStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  double dStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_258;
  long *plStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  double *pdStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double *pdStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  long *plStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double dStack_118;
  int *piStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_258 = param_1;
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(param_2 + 2);
    puStack_280 = (undefined8 *)((ulong)&uStack_2c0 | 8);
    uStack_2b8 = puVar16[1];
    uStack_2c0 = *puVar16;
    uStack_2a8 = puVar16[3];
    dStack_2b0 = (double)puVar16[2];
    uStack_298 = puVar16[5];
    uStack_2a0 = puVar16[4];
    uStack_288 = puVar16[7];
    uStack_290 = puVar16[6];
    puStack_278 = &uStack_270;
    uStack_270 = 0;
    uStack_268 = 0;
    if (puVar16[7] != 0) {
      piVar1 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_270 = *(undefined8 *)puVar16[9];
      uStack_268 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_2c0 = uStack_2c0 & 0xffffffff;
      func_0x000109a84868(&uStack_2c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2c0,param_2,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(param_5 + 2);
    piStack_2e0 = (int *)((ulong)&uStack_320 | 8);
    uStack_318 = (double *)puVar16[1];
    uStack_320 = *puVar16;
    uStack_308 = puVar16[3];
    uStack_310 = puVar16[2];
    uStack_2f8 = puVar16[5];
    uStack_300 = puVar16[4];
    uStack_2e8 = puVar16[7];
    uStack_2f0 = puVar16[6];
    puStack_2d8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    if (puVar16[7] != 0) {
      piVar1 = (int *)(puVar16[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_2d0 = *(undefined8 *)puVar16[9];
      uStack_2c8 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_320 = uStack_320 & 0xffffffff;
      func_0x000109a84868(&uStack_320);
    }
  }
  else {
    FUN_109a8a180(&uStack_320,param_5,0xffffffff);
  }
  uVar21 = (uint)uStack_2c0;
  if (-1 < (int)param_4) {
    uVar21 = param_4;
  }
  uVar22 = NEON_rev64(*puStack_280,4);
  uStack_150._0_4_ = (uint)uVar22;
  uStack_150._4_4_ = (int)((ulong)uVar22 >> 0x20);
  FUN_109a8ee3c(param_3,&uStack_150,(uint)uStack_2c0 & 0xff8 | uVar21 & 7,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    pdVar17 = *(double **)(param_3 + 2);
    puStack_340 = (undefined8 *)((ulong)&uStack_380 | 8);
    dStack_378 = pdVar17[1];
    uStack_380 = *pdVar17;
    dStack_368 = pdVar17[3];
    dStack_370 = pdVar17[2];
    dStack_358 = pdVar17[5];
    dStack_360 = pdVar17[4];
    dStack_348 = pdVar17[7];
    dStack_350 = pdVar17[6];
    puStack_338 = &uStack_330;
    uStack_330 = 0;
    uStack_328 = 0;
    if (pdVar17[7] != 0.0) {
      piVar1 = (int *)((long)pdVar17[7] + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (*(int *)((long)pdVar17 + 4) < 3) {
      uStack_330 = *(undefined8 *)pdVar17[9];
      uStack_328 = ((undefined8 *)pdVar17[9])[1];
    }
    else {
      uStack_380 = (double)((ulong)uStack_380 & 0xffffffff);
      func_0x000109a84868(&uStack_380);
    }
  }
  else {
    FUN_109a8a180(&uStack_380,param_3,0xffffffff);
  }
  dVar8 = dStack_258;
  iVar6 = piStack_2e0[1] / 2;
  if (*param_6 != -1) {
    iVar6 = *param_6;
  }
  iVar4 = *piStack_2e0 / 2;
  if (param_6[1] != -1) {
    iVar4 = param_6[1];
  }
  if ((((iVar6 < 0) || (piStack_2e0[1] <= iVar6)) || (iVar4 < 0)) || (*piStack_2e0 <= iVar4)) {
    puVar15 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    uStack_150 = puVar15 + 1;
    iStack_148 = 0x34;
    uStack_144 = 0;
    *(undefined8 *)(puVar15 + 3) = 0x655228656469736e;
    *(undefined8 *)(puVar15 + 1) = 0x692e726f68636e61;
    puVar15[0xd] = 0x29297468;
    *(undefined1 *)(puVar15 + 0xe) = 0;
    *(undefined8 *)(puVar15 + 7) = 0x772e657a69736b20;
    *(undefined8 *)(puVar15 + 5) = 0x2c30202c30287463;
    *(undefined8 *)(puVar15 + 0xb) = 0x676965682e657a69;
    *(undefined8 *)(puVar15 + 9) = 0x736b202c68746469;
    FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
    goto LAB_109aff330;
  }
  if ((int)uStack_318 * uStack_318._4_4_ < 0x32) {
    uStack_174 = (uint)uStack_2c0 & 0xfff;
    uStack_178 = (uint)uStack_380 & 0xfff;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_17c = (uint)param_7 & 0xffffffef;
    uStack_180 = 0xffffffff;
    uStack_1e0 = uStack_320;
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    pdStack_1d8 = uStack_318;
    uStack_1c8 = uStack_308;
    uStack_1d0 = uStack_310;
    uStack_1b8 = uStack_2f8;
    uStack_1c0 = uStack_300;
    uStack_1a8 = uStack_2e8;
    uStack_1b0 = uStack_2f0;
    uStack_188 = 0;
    uStack_190 = 0;
    if (uStack_2e8 != 0) {
      piVar1 = (int *)(uStack_2e8 + 0x14);
      do {
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puStack_198 = &uStack_190;
    if (uStack_320._4_4_ < 3) {
      uStack_190 = *puStack_2d8;
      uStack_188 = puStack_2d8[1];
    }
    else {
      uStack_1e0 = uStack_320 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0,&uStack_320);
    }
    uVar21 = uStack_174 & 0xfff;
    uVar2 = uStack_178 & 0xfff;
    uVar5 = uStack_178 ^ uStack_174;
    uStack_178 = uVar2;
    uStack_174 = uVar21;
    if ((uVar5 & 0xff8) == 0) {
      uStack_200 = (ulong)&uStack_240 | 8;
      pdStack_238 = pdStack_1d8;
      uStack_240 = uStack_1e0;
      uStack_228 = uStack_1c8;
      uStack_230 = uStack_1d0;
      uStack_218 = uStack_1b8;
      uStack_220 = uStack_1c0;
      uStack_208 = uStack_1a8;
      uStack_210 = uStack_1b0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      if (uStack_1a8 != 0) {
        piVar1 = (int *)(uStack_1a8 + 0x14);
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      puStack_1f8 = &uStack_1f0;
      if (uStack_1e0._4_4_ < 3) {
        uStack_1f0 = *puStack_198;
        uStack_1e8 = puStack_198[1];
      }
      else {
        uStack_240 = uStack_1e0 & 0xffffffff;
        func_0x000109a84868(&uStack_240,&uStack_1e0);
      }
      uVar2 = uStack_174;
      uVar21 = uStack_178;
      piStack_110 = (int *)((ulong)&uStack_150 | 8);
      iStack_148 = (int)pdStack_238;
      uStack_144 = (undefined4)((ulong)pdStack_238 >> 0x20);
      uStack_150._0_4_ = (uint)uStack_240;
      uStack_138 = (undefined4)uStack_228;
      uStack_134 = (undefined4)(uStack_228 >> 0x20);
      uStack_140 = (undefined4)uStack_230;
      uStack_13c = (undefined4)(uStack_230 >> 0x20);
      uStack_128 = (undefined4)uStack_218;
      uStack_124 = (undefined4)(uStack_218 >> 0x20);
      uStack_130 = (undefined4)uStack_220;
      uStack_12c = (undefined4)(uStack_220 >> 0x20);
      dStack_118 = (double)uStack_208;
      uStack_120 = (undefined4)uStack_210;
      uStack_11c = (undefined4)(uStack_210 >> 0x20);
      uStack_f8 = 0;
      uStack_100 = 0;
      if (uStack_208 != 0) {
        piVar1 = (int *)(uStack_208 + 0x14);
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      puStack_108 = &uStack_100;
      if (uStack_240._4_4_ < 3) {
        uStack_100 = *puStack_1f8;
        uStack_f8 = puStack_1f8[1];
        uStack_150._4_4_ = uStack_240._4_4_;
      }
      else {
        uStack_150._4_4_ = 0;
        func_0x000109a84868(&uStack_150,&uStack_240);
      }
      uVar5 = uVar2 & 7;
      uVar3 = uVar21 & 7;
      if ((uVar3 < uVar5) || (((uVar21 ^ uVar2) & 0xff8) != 0)) {
        puVar15 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_e8 = puVar15 + 1;
        uStack_e0._0_4_ = 0x2c;
        uStack_e0._4_4_ = 0;
        *(undefined1 *)(puVar15 + 0xc) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x284e435f54414d5f;
        *(undefined8 *)(puVar15 + 1) = 0x5643203d3d206e63;
        *(undefined8 *)(puVar15 + 7) = 0x7065646420262620;
        *(undefined8 *)(puVar15 + 5) = 0x2965707954747364;
        *(undefined8 *)(puVar15 + 10) = 0x687470656473203d;
        *(undefined8 *)(puVar15 + 8) = 0x3e20687470656464;
        FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59cd74,&UNK_10f59c7f0,0x1167);
        goto LAB_109aff330;
      }
      if ((piStack_110[1] <= iVar6) || (*piStack_110 <= iVar4)) {
        puVar15 = (undefined4 *)0x3c;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_e8 = puVar15 + 1;
        uStack_e0._0_4_ = 0x34;
        uStack_e0._4_4_ = 0;
        *(undefined8 *)(puVar15 + 3) = 0x655228656469736e;
        *(undefined8 *)(puVar15 + 1) = 0x692e726f68636e61;
        puVar15[0xd] = 0x29297468;
        *(undefined1 *)(puVar15 + 0xe) = 0;
        *(undefined8 *)(puVar15 + 7) = 0x772e657a69736b20;
        *(undefined8 *)(puVar15 + 5) = 0x2c30202c30287463;
        *(undefined8 *)(puVar15 + 0xb) = 0x676965682e657a69;
        *(undefined8 *)(puVar15 + 9) = 0x736b202c68746469;
        FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f59ce9d,&UNK_10f59cead,0x16b);
        goto LAB_109aff330;
      }
      uVar18 = 5;
      if (uVar3 == 6 || uVar5 == 6) {
        uVar18 = 6;
      }
      uStack_e8._0_4_ = 0x42ff0000;
      puStack_a8 = &uStack_e0;
      uStack_e0._4_4_ = 0;
      uStack_d8 = 0;
      uStack_e8._4_4_ = 0;
      uStack_e0._0_4_ = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_bc = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      puStack_a0 = &uStack_98;
      if (((uint)uStack_150 & 0xfff) == uVar18) {
        if (dStack_118 != 0.0) {
          piVar1 = (int *)((long)dStack_118 + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_b0 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_e8._0_4_ = (uint)uStack_150;
        if (uStack_150._4_4_ < 3) {
          uStack_e8._4_4_ = uStack_150._4_4_;
          uStack_e0._0_4_ = iStack_148;
          uStack_e0._4_4_ = uStack_144;
          uStack_98 = *puStack_108;
          uStack_90 = puStack_108[1];
        }
        else {
          func_0x000109a84868(&uStack_e8,&uStack_150);
        }
        uStack_d0 = uStack_138;
        uStack_cc = uStack_134;
        uStack_d8 = uStack_140;
        uStack_d4 = uStack_13c;
        uStack_c0 = uStack_128;
        uStack_bc = uStack_124;
        uStack_c8 = uStack_130;
        uStack_c4 = uStack_12c;
        uStack_b8 = uStack_120;
        uStack_b4 = uStack_11c;
        uStack_b0 = (ulong)dStack_118;
      }
      else {
        plStack_170 = (long *)CONCAT44(plStack_170._4_4_,0x2010000);
        uStack_160 = 0;
        puStack_168 = &uStack_e8;
        FUN_109a41858(0x3ff0000000000000,0,&uStack_150,&plStack_170);
      }
      if (((uVar21 | uVar2) & 7) == 0) {
        puVar13 = (undefined8 *)0x68;
        __Znwm();
        puVar13[4] = 0;
        puVar13[3] = 0;
        *puVar13 = &PTR_DAT_110b25c60;
        puVar13[10] = 0;
        puVar13[9] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[0xb] = 0;
        *(int *)(puVar13 + 2) = iVar6;
        *(int *)((long)puVar13 + 0x14) = iVar4;
        uVar22 = NEON_rev64(*puStack_a8,4);
        puVar13[1] = uVar22;
        *(float *)(puVar13 + 0xc) = (float)dVar8;
        if (((uint)uStack_e8 & 0xfff) != 5) {
          puVar15 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_170 = (long *)(puVar15 + 1);
          puStack_168 = (undefined8 *)0x24;
          *(undefined1 *)(puVar15 + 10) = 0;
          puVar15[9] = 0x65707974;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)(puVar15 + 7) = 0x3a3a3e544b3c6570;
          *(undefined8 *)(puVar15 + 5) = 0x795461746144203d;
          FUN_109ac3188(0xffffff29,&plStack_170,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
          goto LAB_109aff330;
        }
        FUN_109afc698(&uStack_e8,puVar13 + 3,puVar13 + 6);
        FUN_109ac9e9c(puVar13 + 9,(long)(puVar13[4] - puVar13[3]) >> 3);
        plVar14 = (long *)0x20;
        __Znwm();
        plVar19 = plVar14 + 1;
        *(int *)plVar19 = 1;
        *plVar14 = (long)&PTR_DAT_110b25ca8;
        plVar14[2] = (long)puVar13;
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = iVar6;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_250 = plVar14;
        puStack_248 = puVar13;
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if ((uVar5 == 0) && (uVar3 == 2)) {
        puVar13 = (undefined8 *)0x68;
        __Znwm();
        puVar13[4] = 0;
        puVar13[3] = 0;
        *puVar13 = &PTR_DAT_110b25ce8;
        puVar13[10] = 0;
        puVar13[9] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[0xb] = 0;
        *(int *)(puVar13 + 2) = iVar6;
        *(int *)((long)puVar13 + 0x14) = iVar4;
        uVar22 = NEON_rev64(*puStack_a8,4);
        puVar13[1] = uVar22;
        *(float *)(puVar13 + 0xc) = (float)dVar8;
        if (((uint)uStack_e8 & 0xfff) != 5) {
          puVar15 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_170 = (long *)(puVar15 + 1);
          puStack_168 = (undefined8 *)0x24;
          *(undefined1 *)(puVar15 + 10) = 0;
          puVar15[9] = 0x65707974;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)(puVar15 + 7) = 0x3a3a3e544b3c6570;
          *(undefined8 *)(puVar15 + 5) = 0x795461746144203d;
          FUN_109ac3188(0xffffff29,&plStack_170,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
          goto LAB_109aff330;
        }
        FUN_109afc698(&uStack_e8,puVar13 + 3,puVar13 + 6);
        FUN_109ac9e9c(puVar13 + 9,(long)(puVar13[4] - puVar13[3]) >> 3);
        plVar14 = (long *)0x20;
        __Znwm();
        plVar19 = plVar14 + 1;
        *(int *)plVar19 = 1;
        *plVar14 = (long)&PTR_DAT_110b25d30;
        plVar14[2] = (long)puVar13;
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = iVar6;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_250 = plVar14;
        puStack_248 = puVar13;
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if ((uVar5 == 0) && (uVar3 == 3)) {
        puVar13 = (undefined8 *)0x68;
        __Znwm();
        puVar13[4] = 0;
        puVar13[3] = 0;
        *puVar13 = &PTR_DAT_110b25d70;
        puVar13[10] = 0;
        puVar13[9] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[0xb] = 0;
        *(int *)(puVar13 + 2) = iVar6;
        *(int *)((long)puVar13 + 0x14) = iVar4;
        uVar22 = NEON_rev64(*puStack_a8,4);
        puVar13[1] = uVar22;
        *(float *)(puVar13 + 0xc) = (float)dVar8;
        if (((uint)uStack_e8 & 0xfff) != 5) {
          puVar15 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_170 = (long *)(puVar15 + 1);
          puStack_168 = (undefined8 *)0x24;
          *(undefined1 *)(puVar15 + 10) = 0;
          puVar15[9] = 0x65707974;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)(puVar15 + 7) = 0x3a3a3e544b3c6570;
          *(undefined8 *)(puVar15 + 5) = 0x795461746144203d;
          FUN_109ac3188(0xffffff29,&plStack_170,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
          goto LAB_109aff330;
        }
        FUN_109afc698(&uStack_e8,puVar13 + 3,puVar13 + 6);
        FUN_109ac9e9c(puVar13 + 9,(long)(puVar13[4] - puVar13[3]) >> 3);
        plVar14 = (long *)0x20;
        __Znwm();
        plVar19 = plVar14 + 1;
        *(int *)plVar19 = 1;
        *plVar14 = (long)&PTR_FUN_110b25db8;
        plVar14[2] = (long)puVar13;
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = iVar6;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_250 = plVar14;
        puStack_248 = puVar13;
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if ((uVar5 == 0) && (uVar3 == 5)) {
        puVar13 = (undefined8 *)0x68;
        __Znwm();
        puVar13[4] = 0;
        puVar13[3] = 0;
        *puVar13 = &PTR_DAT_110b25df8;
        puVar13[10] = 0;
        puVar13[9] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[0xb] = 0;
        *(int *)(puVar13 + 2) = iVar6;
        *(int *)((long)puVar13 + 0x14) = iVar4;
        uVar22 = NEON_rev64(*puStack_a8,4);
        puVar13[1] = uVar22;
        *(float *)(puVar13 + 0xc) = (float)dVar8;
        if (((uint)uStack_e8 & 0xfff) != 5) {
          puVar15 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_170 = (long *)(puVar15 + 1);
          puStack_168 = (undefined8 *)0x24;
          *(undefined1 *)(puVar15 + 10) = 0;
          puVar15[9] = 0x65707974;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)(puVar15 + 7) = 0x3a3a3e544b3c6570;
          *(undefined8 *)(puVar15 + 5) = 0x795461746144203d;
          FUN_109ac3188(0xffffff29,&plStack_170,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
          goto LAB_109aff330;
        }
        FUN_109afc698(&uStack_e8,puVar13 + 3,puVar13 + 6);
        FUN_109ac9e9c(puVar13 + 9,(long)(puVar13[4] - puVar13[3]) >> 3);
        plVar14 = (long *)0x20;
        __Znwm();
        plVar19 = plVar14 + 1;
        *(int *)plVar19 = 1;
        *plVar14 = (long)&PTR_DAT_110b25e40;
        plVar14[2] = (long)puVar13;
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = iVar6;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_250 = plVar14;
        puStack_248 = puVar13;
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if ((uVar5 == 0) && (uVar3 == 6)) {
        puVar13 = (undefined8 *)0x70;
        __Znwm();
        *puVar13 = &PTR_DAT_110b25e80;
        puVar13[4] = 0;
        puVar13[3] = 0;
        puVar13[10] = 0;
        puVar13[9] = 0;
        puVar13[6] = 0;
        puVar13[5] = 0;
        puVar13[8] = 0;
        puVar13[7] = 0;
        puVar13[0xb] = 0;
        *(int *)(puVar13 + 2) = iVar6;
        *(int *)((long)puVar13 + 0x14) = iVar4;
        uVar22 = NEON_rev64(*puStack_a8,4);
        puVar13[1] = uVar22;
        puVar13[0xc] = dVar8;
        if (((uint)uStack_e8 & 0xfff) != 6) {
          puVar15 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          plStack_170 = (long *)(puVar15 + 1);
          puStack_168 = (undefined8 *)0x24;
          *(undefined1 *)(puVar15 + 10) = 0;
          puVar15[9] = 0x65707974;
          *(undefined8 *)(puVar15 + 3) = 0x3d20292865707974;
          *(undefined8 *)(puVar15 + 1) = 0x2e6c656e72656b5f;
          *(undefined8 *)(puVar15 + 7) = 0x3a3a3e544b3c6570;
          *(undefined8 *)(puVar15 + 5) = 0x795461746144203d;
          FUN_109ac3188(0xffffff29,&plStack_170,&UNK_10f59d0ac,&UNK_10f59c7f0,0xf4a);
          goto LAB_109aff330;
        }
        FUN_109afc698(&uStack_e8,puVar13 + 3,puVar13 + 6);
        FUN_109ac9e9c(puVar13 + 9,(long)(puVar13[4] - puVar13[3]) >> 3);
        plVar14 = (long *)0x20;
        __Znwm();
        plVar19 = plVar14 + 1;
        *(int *)plVar19 = 1;
        *plVar14 = (long)&PTR_DAT_110b25ec8;
        plVar14[2] = (long)puVar13;
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *(int *)plVar19 = iVar6;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_250 = plVar14;
        puStack_248 = puVar13;
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      else if ((uVar5 == 2) && (uVar3 == 2)) {
        FUN_109afc8e4(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0cf24(&plStack_170);
      }
      else if ((uVar5 == 2) && (uVar3 == 5)) {
        FUN_109afcac8(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0d1b4(&plStack_170);
      }
      else if ((uVar5 == 2) && (uVar3 == 6)) {
        FUN_109afccac(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0d47c(&plStack_170);
      }
      else if ((uVar5 == 3) && (uVar3 == 3)) {
        FUN_109afce8c(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0d79c(&plStack_170);
      }
      else if ((uVar5 == 3) && (uVar3 == 5)) {
        FUN_109afd070(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0da2c(&plStack_170);
      }
      else if ((uVar5 == 3) && (uVar3 == 6)) {
        FUN_109afd254(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0dcf4(&plStack_170);
      }
      else if ((uVar5 == 5) && (uVar3 == 5)) {
        FUN_109afd434(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0df74(&plStack_170);
      }
      else {
        if ((uVar5 != 6) || (uVar3 != 6)) {
          FUN_109ac2700(&plStack_170,&UNK_10f59cd84);
          FUN_109ac3188(0xffffff2b,&plStack_170,&UNK_10f59cd74,&UNK_10f59c7f0,0x11a8);
          goto LAB_109aff330;
        }
        FUN_109afd618(dVar8,&plStack_170,&uStack_e8,iVar6,iVar4);
        puStack_248 = puStack_168;
        plStack_250 = plStack_170;
        if (plStack_170 != (long *)0x0) {
          plVar14 = plStack_170 + 1;
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = (int)*plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109b0e220(&plStack_170);
      }
      if (uStack_b0 != 0) {
        piVar1 = (int *)(uStack_b0 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_e8);
        }
      }
      uStack_b0 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      if (0 < uStack_e8._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)((long)puStack_a8 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_e8._4_4_);
      }
      if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
        _free(puStack_a0[-1]);
      }
      if (dStack_118 != 0.0) {
        piVar1 = (int *)((long)dStack_118 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
        }
      }
      dStack_118 = 0.0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      if (0 < uStack_150._4_4_) {
        lVar20 = 0;
        do {
          piStack_110[lVar20] = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_150._4_4_);
      }
      if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
        _free(puStack_108[-1]);
      }
      iStack_148 = 0;
      uStack_144 = 0;
      uStack_150._0_4_ = 0;
      uStack_150._4_4_ = 0;
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      uStack_e0._0_4_ = 0;
      uStack_e0._4_4_ = 0;
      FUN_109afd7f8(auStack_390,&plStack_250,&uStack_150,&uStack_e8,&uStack_174,&uStack_178,
                    &uStack_174,&uStack_17c,&uStack_180,&uStack_3b0);
      FUN_109b000d8(&uStack_e8);
      FUN_109b00084(&uStack_150);
      FUN_109b00030(&plStack_250);
      if (uStack_208 != 0) {
        piVar1 = (int *)(uStack_208 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_240);
        }
      }
      uStack_208 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      if (0 < uStack_240._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_200 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_240._4_4_);
      }
      if (puStack_1f8 != &uStack_1f0 && puStack_1f8 != (undefined8 *)0x0) {
        _free(puStack_1f8[-1]);
      }
      if (uStack_1a8 != 0) {
        piVar1 = (int *)(uStack_1a8 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_1e0);
        }
      }
      uStack_1a8 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      if (0 < uStack_1e0._4_4_) {
        lVar20 = 0;
        do {
          *(undefined4 *)(uStack_1a0 + lVar20 * 4) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 < uStack_1e0._4_4_);
      }
      if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
        _free(puStack_198[-1]);
      }
      iStack_148 = -1;
      uStack_144 = 0xffffffff;
      uStack_150._0_4_ = 0;
      uStack_150._4_4_ = 0;
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      (**(code **)(*plStack_388 + 0x28))
                (plStack_388,&uStack_2c0,&uStack_380,&uStack_150,&uStack_e8,(uint)param_7 >> 4 & 1);
      FUN_109aed568(auStack_390);
      goto LAB_109afed80;
    }
  }
  else {
    uStack_150._0_4_ = 0x42ff0000;
    piStack_110 = &iStack_148;
    uStack_144 = 0;
    uVar10 = uStack_144;
    uStack_140 = 0;
    uStack_150._4_4_ = 0;
    iStack_148 = 0;
    iVar9 = iStack_148;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_124 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    dStack_118 = 0.0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    iStack_148 = SUB84(dStack_378,0);
    uStack_144 = (undefined4)((ulong)dStack_378 >> 0x20);
    puStack_108 = &uStack_100;
    if (((uStack_2c0 & 0xff8) == 0) || (dStack_258 == 0.0)) {
      if (dStack_2b0 == dStack_370) {
        uStack_e8._0_4_ = (uint)*puStack_340;
        uStack_e8._4_4_ = (int)((ulong)*puStack_340 >> 0x20);
        iStack_148 = iVar9;
        uStack_144 = uVar10;
        FUN_109a83fd0(&uStack_150,2,&uStack_e8,(uint)uStack_380 & 0xfff);
      }
      else {
        if (dStack_348 != 0.0) {
          piVar1 = (int *)((long)dStack_348 + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        dStack_118 = 0.0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_150._0_4_ = (uint)uStack_380;
        if (uStack_380._4_4_ < 3) {
          uStack_150._4_4_ = uStack_380._4_4_;
          uStack_100 = *puStack_338;
          uStack_f8 = puStack_338[1];
        }
        else {
          iStack_148 = iVar9;
          uStack_144 = uVar10;
          func_0x000109a84868(&uStack_150,&uStack_380);
        }
        uStack_138 = SUB84(dStack_368,0);
        uStack_134 = (undefined4)((ulong)dStack_368 >> 0x20);
        uStack_140 = SUB84(dStack_370,0);
        uStack_13c = (undefined4)((ulong)dStack_370 >> 0x20);
        uStack_128 = SUB84(dStack_358,0);
        uStack_124 = (undefined4)((ulong)dStack_358 >> 0x20);
        uStack_130 = SUB84(dStack_360,0);
        uStack_12c = (undefined4)((ulong)dStack_360 >> 0x20);
        uStack_120 = SUB84(dStack_350,0);
        uStack_11c = (undefined4)((ulong)dStack_350 >> 0x20);
        dStack_118 = dStack_348;
      }
      uVar22 = NEON_rev64(*puStack_280,4);
      uStack_e8._0_4_ = (uint)uVar22;
      uStack_e8._4_4_ = (int)((ulong)uVar22 >> 0x20);
      uStack_1e0 = CONCAT44(iVar4,iVar6);
      FUN_109b566d4(dStack_258,&uStack_2c0,&uStack_320,&uStack_150,&uStack_e8,
                    (uint)uStack_2c0 & 0xff8 | uVar21 & 7,&uStack_1e0,param_7);
      if ((double)CONCAT44(uStack_13c,uStack_140) != dStack_370) {
        uStack_e8._0_4_ = 0x2010000;
        uStack_e0 = (double *)&uStack_380;
        uStack_d8 = 0;
        uStack_d4 = 0;
        FUN_109a479a0(&uStack_150,&uStack_e8);
      }
    }
    else {
      uVar21 = (uint)uStack_380 & 7;
      if ((uVar21 - 5 < 2) && (dStack_2b0 != dStack_370)) {
        if (dStack_348 != 0.0) {
          piVar1 = (int *)((long)dStack_348 + 0x14);
          do {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        dStack_118 = 0.0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_150._0_4_ = (uint)uStack_380;
        if (uStack_380._4_4_ < 3) {
          uStack_150._4_4_ = uStack_380._4_4_;
          uStack_100 = *puStack_338;
          uStack_f8 = puStack_338[1];
        }
        else {
          iStack_148 = iVar9;
          uStack_144 = uVar10;
          func_0x000109a84868(&uStack_150,&uStack_380);
        }
        uStack_138 = SUB84(dStack_368,0);
        uStack_134 = (undefined4)((ulong)dStack_368 >> 0x20);
        uStack_140 = SUB84(dStack_370,0);
        uStack_13c = (undefined4)((ulong)dStack_370 >> 0x20);
        uStack_128 = SUB84(dStack_358,0);
        uStack_124 = (undefined4)((ulong)dStack_358 >> 0x20);
        uStack_130 = SUB84(dStack_360,0);
        uStack_12c = (undefined4)((ulong)dStack_360 >> 0x20);
        uStack_120 = SUB84(dStack_350,0);
        uStack_11c = (undefined4)((ulong)dStack_350 >> 0x20);
        dStack_118 = dStack_348;
      }
      else {
        bVar12 = uVar21 == 6;
        uVar21 = 5;
        if (bVar12) {
          uVar21 = 6;
        }
        uStack_e8._0_4_ = (uint)*puStack_340;
        uStack_e8._4_4_ = (int)((ulong)*puStack_340 >> 0x20);
        iStack_148 = iVar9;
        uStack_144 = uVar10;
        FUN_109a83fd0(&uStack_150,2,&uStack_e8,uVar21 | (uint)uStack_380 & 0xff8);
      }
      uVar22 = NEON_rev64(*puStack_280,4);
      uStack_e8._0_4_ = (uint)uVar22;
      uStack_e8._4_4_ = (int)((ulong)uVar22 >> 0x20);
      puVar13 = &uStack_2c0;
      uStack_1e0._0_4_ = iVar6;
      uStack_1e0._4_4_ = iVar4;
      FUN_109b566d4(0,puVar13,&uStack_320,&uStack_150,&uStack_e8,(uint)uStack_2c0 & 0xff8 | uVar21,
                    &uStack_1e0,param_7);
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e8._0_4_ = 0x1010000;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0xc1020006);
      pdStack_1d8 = &dStack_258;
      uStack_1d0 = 0x100000001;
      uStack_240 = CONCAT44(uStack_240._4_4_,0x2010000);
      uStack_230 = 0;
      pdStack_238 = (double *)&uStack_150;
      uStack_e0 = (double *)&uStack_150;
      FUN_109a91d90();
      FUN_109a293c4(&uStack_e8,&uStack_1e0,&uStack_240,puVar13,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
      if ((double)CONCAT44(uStack_13c,uStack_140) != dStack_370) {
        uStack_e8._0_4_ = 0x2010000;
        uStack_e0 = (double *)&uStack_380;
        uStack_d8 = 0;
        uStack_d4 = 0;
        FUN_109a41858(0x3ff0000000000000,0,&uStack_150,&uStack_e8,(uint)uStack_380 & 0xfff);
      }
    }
    if (dStack_118 != 0.0) {
      piVar1 = (int *)((long)dStack_118 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    dStack_118 = 0.0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    if (0 < uStack_150._4_4_) {
      lVar20 = 0;
      do {
        piStack_110[lVar20] = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_150._4_4_);
    }
    if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
      _free(puStack_108[-1]);
    }
LAB_109afed80:
    if (dStack_348 != 0.0) {
      piVar1 = (int *)((long)dStack_348 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_380);
      }
    }
    dStack_348 = 0.0;
    dStack_368 = 0.0;
    dStack_370 = 0.0;
    dStack_358 = 0.0;
    dStack_360 = 0.0;
    if (0 < uStack_380._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)((long)puStack_340 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_380._4_4_);
    }
    if (puStack_338 != &uStack_330 && puStack_338 != (undefined8 *)0x0) {
      _free(puStack_338[-1]);
    }
    if (uStack_2e8 != 0) {
      piVar1 = (int *)(uStack_2e8 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_320);
      }
    }
    uStack_2e8 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    if (0 < uStack_320._4_4_) {
      lVar20 = 0;
      do {
        piStack_2e0[lVar20] = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_320._4_4_);
    }
    if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
      _free(puStack_2d8[-1]);
    }
    if (uStack_288 != 0) {
      piVar1 = (int *)(uStack_288 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(&uStack_2c0);
      }
    }
    uStack_288 = 0;
    uStack_2a8 = 0;
    dStack_2b0 = 0.0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    if (0 < uStack_2c0._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)((long)puStack_280 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_2c0._4_4_);
    }
    if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
      _free(puStack_278[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar15 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  uStack_150 = puVar15 + 1;
  iStack_148 = 0x19;
  uStack_144 = 0;
  *(undefined1 *)((long)puVar15 + 0x1d) = 0;
  *(undefined8 *)(puVar15 + 3) = 0x284e435f54414d5f;
  *(undefined8 *)(puVar15 + 1) = 0x5643203d3d206e63;
  *(undefined8 *)((long)puVar15 + 0x15) = 0x2965707954747364;
  *(undefined8 *)((long)puVar15 + 0xd) = 0x5f284e435f54414d;
  FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f59cdd1,&UNK_10f59c7f0,0x11b8);
LAB_109aff330:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109aff334);
  (*pcVar11)();
}



/* Entry: 109aff66c; end: 109affc6b;  */

void FUN_109aff66c(undefined8 param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,
                  uint *param_6,undefined8 *param_7,uint param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined4 auStack_220 [2];
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  long *plStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_2 + 2);
    puStack_80 = (undefined8 *)((ulong)&uStack_c0 | 8);
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    uStack_a8 = puVar6[3];
    uStack_b0 = puVar6[2];
    uStack_98 = puVar6[5];
    uStack_a0 = puVar6[4];
    uStack_88 = puVar6[7];
    uStack_90 = puVar6[6];
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_70 = *(undefined8 *)puVar6[9];
      uStack_68 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_c0 = uStack_c0 & 0xffffffff;
      func_0x000109a84868(&uStack_c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_c0,param_2,0xffffffff);
  }
  if ((*param_5 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_5 + 2);
    uStack_e0 = (ulong)&uStack_120 | 8;
    uStack_118 = puVar6[1];
    uStack_120 = *puVar6;
    uStack_108 = puVar6[3];
    uStack_110 = puVar6[2];
    uStack_f8 = puVar6[5];
    uStack_100 = puVar6[4];
    uStack_e8 = puVar6[7];
    uStack_f0 = puVar6[6];
    puStack_d8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_d0 = *(undefined8 *)puVar6[9];
      uStack_c8 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_120 = uStack_120 & 0xffffffff;
      func_0x000109a84868(&uStack_120);
    }
  }
  else {
    FUN_109a8a180(&uStack_120,param_5,0xffffffff);
  }
  if ((*param_6 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_6 + 2);
    uStack_140 = (ulong)&uStack_180 | 8;
    uStack_178 = puVar6[1];
    uStack_180 = *puVar6;
    uStack_168 = puVar6[3];
    uStack_170 = puVar6[2];
    uStack_158 = puVar6[5];
    uStack_160 = puVar6[4];
    uStack_148 = puVar6[7];
    uStack_150 = puVar6[6];
    puStack_138 = &uStack_130;
    uStack_130 = 0;
    uStack_128 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_130 = *(undefined8 *)puVar6[9];
      uStack_128 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_180 = uStack_180 & 0xffffffff;
      func_0x000109a84868(&uStack_180);
    }
  }
  else {
    FUN_109a8a180(&uStack_180,param_6,0xffffffff);
  }
  uVar2 = (uint)uStack_c0;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  uStack_1e0 = NEON_rev64(*puStack_80,4);
  FUN_109a8ee3c(param_3,&uStack_1e0,(uint)uStack_c0 & 0xff8 | uVar2 & 7,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_3 + 2);
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    uStack_1d8 = puVar6[1];
    uStack_1e0 = *puVar6;
    uStack_1c8 = puVar6[3];
    uStack_1d0 = puVar6[2];
    uStack_1b8 = puVar6[5];
    uStack_1c0 = puVar6[4];
    uStack_1a8 = puVar6[7];
    uStack_1b0 = puVar6[6];
    puStack_198 = &uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_190 = *(undefined8 *)puVar6[9];
      uStack_188 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0,param_3,0xffffffff);
  }
  uStack_1f8 = 0;
  uStack_208 = CONCAT44(uStack_208._4_4_,0x1010000);
  puStack_200 = &uStack_120;
  uStack_210 = 0;
  auStack_220[0] = 0x1010000;
  puStack_218 = &uStack_180;
  uStack_228 = *param_7;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  FUN_109af8658(auStack_1f0,param_1,(uint)uStack_c0 & 0xfff,(uint)uStack_1e0 & 0xfff,&uStack_208,
                auStack_220,&uStack_228,param_8 & 0xffffffef,0xffffffff,&uStack_250);
  uStack_248 = 0xffffffffffffffff;
  uStack_250 = 0;
  uStack_208 = 0;
  (**(code **)(*plStack_1e8 + 0x28))
            (plStack_1e8,&uStack_c0,&uStack_1e0,&uStack_250,&uStack_208,param_8 >> 4 & 1);
  FUN_109aed568(auStack_1f0);
  if (uStack_1a8 != 0) {
    piVar1 = (int *)(uStack_1a8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_1e0);
    }
  }
  uStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (0 < uStack_1e0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_1a0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_1e0._4_4_);
  }
  if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
    _free(puStack_198[-1]);
  }
  if (uStack_148 != 0) {
    piVar1 = (int *)(uStack_148 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_180);
    }
  }
  uStack_148 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (0 < uStack_180._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_140 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_180._4_4_);
  }
  if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
    _free(puStack_138[-1]);
  }
  if (uStack_e8 != 0) {
    piVar1 = (int *)(uStack_e8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_120);
    }
  }
  uStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_e0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_120._4_4_);
  }
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (uStack_88 != 0) {
    piVar1 = (int *)(uStack_88 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < uStack_c0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_80 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_c0._4_4_);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return;
}



/* Entry: 109affc6c; end: 109affdef;  */

byte * FUN_109affc6c(double param_1,byte *param_2,undefined8 param_3,undefined4 param_4,long param_5
                    )

{
  code *pcVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 *puStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  pbStack_50 = param_2 + 8;
  pbStack_50[0] = 0;
  pbStack_50[1] = 0;
  pbStack_50[2] = 0xff;
  pbStack_50[3] = 0x42;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  pbVar3 = param_2 + 0x58;
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  *(byte **)(param_2 + 0x48) = param_2 + 0x10;
  *(byte **)(param_2 + 0x50) = pbVar3;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  *(undefined4 *)param_2 = param_4;
  puStack_58 = (undefined4 *)CONCAT44(puStack_58._4_4_,0x2010000);
  uStack_48 = 0;
  FUN_109a41858(0x3ff0000000000000 - (param_5 << 0x34),0,param_3,&puStack_58,5);
  *(float *)(param_2 + 4) = (float)(param_1 / (double)(uint)(1 << (ulong)((uint)param_5 & 0x1f)));
  if ((*param_2 & 3) != 0) {
    return param_2;
  }
  puVar2 = (undefined4 *)0x48;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_58 = puVar2 + 1;
  pbStack_50 = (byte *)0x40;
  *(undefined8 *)(puVar2 + 3) = 0x2026206570795479;
  *(undefined8 *)(puVar2 + 1) = 0x7274656d6d797328;
  *(undefined8 *)(puVar2 + 7) = 0x495254454d4d5953;
  *(undefined8 *)(puVar2 + 5) = 0x5f4c454e52454b28;
  *(undefined8 *)(puVar2 + 0xb) = 0x5953415f4c454e52;
  *(undefined8 *)(puVar2 + 9) = 0x454b207c204c4143;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *(undefined8 *)(puVar2 + 0xf) = 0x30203d212029294c;
  *(undefined8 *)(puVar2 + 0xd) = 0x4143495254454d4d;
  FUN_109ac3188(0xffffff29,&puStack_58,&UNK_10f59ce25,&UNK_10f59c7f0,0x998);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109affda8);
  (*pcVar1)();
}



/* Entry: 109affdf0; end: 109b0002f;  */

uint * FUN_109affdf0(double param_1,uint *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  puVar12 = param_2 + 2;
  *puVar12 = 0x42ff0000;
  puVar13 = param_2 + 3;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar13[0] = 0;
  puVar13[1] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  puVar7 = param_2 + 0x16;
  puVar7[0] = 0;
  puVar7[1] = 0;
  *(uint **)(param_2 + 0x12) = param_2 + 4;
  *(uint **)(param_2 + 0x14) = puVar7;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *param_2 = param_4;
  if (puVar12 == param_3) goto LAB_109afff4c;
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*(long *)(param_2 + 0x10) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x10) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(puVar12);
      }
    }
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((int)param_2[3] < 1) {
    *puVar12 = *param_3;
LAB_109affef0:
    if (2 < (int)param_3[1]) goto LAB_109afff24;
    param_2[3] = param_3[1];
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 2);
    puVar9 = *(undefined8 **)(param_3 + 0x12);
    puVar11 = *(undefined8 **)(param_2 + 0x14);
    *puVar11 = *puVar9;
    puVar11[1] = puVar9[1];
  }
  else {
    lVar8 = 0;
    lVar10 = *(long *)(param_2 + 0x12);
    do {
      *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)*puVar13);
    *puVar12 = *param_3;
    if ((int)*puVar13 < 3) goto LAB_109affef0;
LAB_109afff24:
    func_0x000109a84868(puVar12,param_3);
  }
  uVar14 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 6) = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 10) = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = uVar14;
  param_4 = *param_2;
LAB_109afff4c:
  param_2[1] = (uint)(float)param_1;
  if ((param_4 & 3) == 0) {
    puVar6 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 3) = 0x2026206570795479;
    *(undefined8 *)(puVar6 + 1) = 0x7274656d6d797328;
    *(undefined8 *)(puVar6 + 7) = 0x495254454d4d5953;
    *(undefined8 *)(puVar6 + 5) = 0x5f4c454e52454b28;
    *(undefined8 *)(puVar6 + 0xb) = 0x5953415f4c454e52;
    *(undefined8 *)(puVar6 + 9) = 0x454b207c204c4143;
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x40;
    *(undefined1 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)(puVar6 + 0xf) = 0x30203d212029294c;
    *(undefined8 *)(puVar6 + 0xd) = 0x4143495254454d4d;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f59ce53,&UNK_10f59c7f0,0xae3);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109affff0);
    (*pcVar5)();
  }
  FUN_109ac28d8();
  *(undefined1 *)(param_2 + 0x1a) = uRam000000011382bd48;
  return param_2;
}



/* Entry: 109b00030; end: 109b00083;  */

long * FUN_109b00030(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b00084; end: 109b000d7;  */

long * FUN_109b00084(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b000d8; end: 109b0012b;  */

long * FUN_109b000d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b0012c; end: 109b0024f;  */

undefined8 * FUN_109b0012c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b248b0;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b00250; end: 109b00253;  */

undefined8 * FUN_109b00250(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b248b0;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b00254; end: 109b00267;  */

void FUN_109b00254(void)

{
  FUN_109b0012c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b00268; end: 109b00913;  */

void FUN_109b00268(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  int *piVar23;
  uint *puVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar25 = (iVar5 / 2) * param_5;
  lVar27 = *(long *)(param_1 + 0x20);
  lVar13 = (long)((ulong)(uint)(iVar5 - (iVar5 >> 0x1f)) << 0x20) >> 0x21;
  piVar1 = (int *)(lVar27 + (long)(iVar5 / 2) * 4);
  uVar6 = *(uint *)(param_1 + 0xd8);
  uVar15 = param_1 + 0x70;
  func_0x000109b00a58();
  uVar18 = uVar15 & 0xffffffff;
  lVar21 = (long)iVar25;
  pbVar20 = (byte *)(param_2 + (uVar15 & 0xffffffff) + (long)iVar25);
  param_4 = param_5 * param_4;
  iVar25 = *(int *)(param_1 + 8);
  iVar14 = (int)uVar15;
  if ((uVar6 & 1) == 0) {
    if (iVar25 == 5) {
      if ((int)(param_4 - 2U) < iVar14) goto LAB_109b00658;
      iVar25 = piVar1[1];
      iVar14 = piVar1[2];
      piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
      do {
        pbVar20 = (byte *)(param_2 + lVar21 + param_5 + uVar18);
        pbVar22 = (byte *)(param_2 + (lVar21 - param_5) + uVar18);
        pbVar2 = (byte *)(param_2 + lVar21 + (param_5 << 1) + uVar18);
        bVar8 = pbVar20[1];
        bVar12 = pbVar22[1];
        bVar9 = pbVar2[1];
        bVar10 = *(byte *)(param_2 + (lVar21 - (param_5 << 1)) + uVar18 + 1);
        piVar23[-1] = ((uint)*pbVar20 - (uint)*pbVar22) * iVar25 +
                      ((uint)*pbVar2 - (uint)*(byte *)(param_2 + lVar21 + param_5 * -2 + uVar18)) *
                      iVar14;
        *piVar23 = ((uint)bVar8 - (uint)bVar12) * iVar25 + ((uint)bVar9 - (uint)bVar10) * iVar14;
        uVar18 = uVar18 + 2;
        piVar23 = piVar23 + 2;
      } while (uVar18 <= param_4 - 2U);
      pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
    }
    else {
      if (iVar25 != 3) goto LAB_109b00658;
      iVar25 = piVar1[1];
      uVar6 = param_4 - 2;
      if (*piVar1 == 0 && iVar25 == 1) {
        if ((int)uVar6 < iVar14) goto LAB_109b00658;
        do {
          bVar8 = (pbVar20 + param_5)[1];
          bVar12 = pbVar20[1 - (long)param_5];
          piVar23 = (int *)(param_3 + uVar18 * 4);
          *piVar23 = (uint)pbVar20[param_5] - (uint)pbVar20[-(long)param_5];
          piVar23[1] = (uint)bVar8 - (uint)bVar12;
          uVar18 = uVar18 + 2;
          pbVar20 = pbVar20 + 2;
        } while (uVar18 <= uVar6);
      }
      else {
        if ((int)uVar6 < iVar14) goto LAB_109b00658;
        do {
          bVar8 = (pbVar20 + param_5)[1];
          bVar12 = pbVar20[1 - (long)param_5];
          piVar23 = (int *)(param_3 + uVar18 * 4);
          *piVar23 = ((uint)pbVar20[param_5] - (uint)pbVar20[-(long)param_5]) * iVar25;
          piVar23[1] = ((uint)bVar8 - (uint)bVar12) * iVar25;
          uVar18 = uVar18 + 2;
          pbVar20 = pbVar20 + 2;
        } while (uVar18 <= uVar6);
      }
    }
    iVar14 = (int)uVar18;
LAB_109b00658:
    if (param_4 <= iVar14) {
      return;
    }
    lVar19 = (long)param_5;
    lVar21 = (long)iVar14;
    do {
      iVar25 = *piVar1 * (uint)*pbVar20;
      lVar16 = (ulong)(iVar5 / 2 + 1) - 1;
      lVar17 = lVar19;
      lVar26 = -(long)param_5;
      piVar23 = (int *)(lVar27 + lVar13 * 4);
      if (1 < iVar5) {
        do {
          iVar25 = iVar25 + ((uint)pbVar20[lVar17] - (uint)pbVar20[lVar26]) * piVar23[1];
          lVar16 = lVar16 + -1;
          lVar17 = lVar17 + lVar19;
          lVar26 = lVar26 - lVar19;
          piVar23 = piVar23 + 1;
        } while (lVar16 != 0);
      }
      *(int *)(param_3 + lVar21 * 4) = iVar25;
      lVar21 = lVar21 + 1;
      pbVar20 = pbVar20 + 1;
    } while (lVar21 != param_4);
    return;
  }
  if (iVar25 == 5) {
    iVar25 = *piVar1;
    iVar4 = piVar1[1];
    iVar7 = piVar1[2];
    uVar6 = param_4 - 2;
    if ((iVar25 == -2 && iVar4 == 0) && iVar7 == 1) {
      if ((int)uVar6 < iVar14) goto LAB_109b00868;
      piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
      do {
        pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
        pbVar22 = (byte *)(param_2 + lVar21 + (param_5 << 1) + uVar18);
        bVar8 = pbVar20[1];
        bVar12 = *(byte *)(param_2 + (lVar21 - (param_5 << 1)) + uVar18 + 1);
        bVar9 = pbVar22[1];
        piVar23[-1] = (uint)*pbVar22 + (uint)*pbVar20 * -2 +
                      (uint)*(byte *)(param_2 + lVar21 + param_5 * -2 + uVar18);
        *piVar23 = (uint)bVar9 + (uint)bVar8 * -2 + (uint)bVar12;
        uVar18 = uVar18 + 2;
        piVar23 = piVar23 + 2;
      } while (uVar18 <= uVar6);
    }
    else {
      if ((int)uVar6 < iVar14) goto LAB_109b00868;
      piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
      do {
        pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
        pbVar22 = (byte *)(param_2 + (lVar21 - param_5) + uVar18);
        pbVar2 = (byte *)(param_2 + lVar21 + param_5 + uVar18);
        pbVar3 = (byte *)(param_2 + lVar21 + (param_5 << 1) + uVar18);
        bVar8 = pbVar20[1];
        bVar12 = pbVar22[1];
        bVar9 = pbVar2[1];
        bVar10 = *(byte *)(param_2 + (lVar21 - (param_5 << 1)) + uVar18 + 1);
        bVar11 = pbVar3[1];
        piVar23[-1] = iVar25 * (uint)*pbVar20 + ((uint)*pbVar2 + (uint)*pbVar22) * iVar4 +
                      ((uint)*pbVar3 + (uint)*(byte *)(param_2 + lVar21 + param_5 * -2 + uVar18)) *
                      iVar7;
        *piVar23 = iVar25 * (uint)bVar8 + ((uint)bVar9 + (uint)bVar12) * iVar4 +
                   ((uint)bVar11 + (uint)bVar10) * iVar7;
        uVar18 = uVar18 + 2;
        piVar23 = piVar23 + 2;
      } while (uVar18 <= uVar6);
    }
    goto LAB_109b0085c;
  }
  if (iVar25 != 3) {
    if ((iVar25 == 1) && (*piVar1 == 1)) {
      if (iVar14 <= (int)(param_4 - 2U)) {
        lVar19 = uVar15 << 0x20;
        puVar24 = (uint *)(param_3 + uVar18 * 4 + 4);
        uVar15 = uVar18;
        pbVar22 = (byte *)(lVar21 + uVar18 * 2 + param_2 + 1);
        do {
          bVar8 = *pbVar22;
          uVar15 = uVar15 + 2;
          puVar24[-1] = (uint)pbVar22[-1];
          *puVar24 = (uint)bVar8;
          lVar19 = lVar19 + 0x200000000;
          puVar24 = puVar24 + 2;
          pbVar22 = pbVar22 + 2;
        } while (uVar15 <= param_4 - 2U);
        uVar18 = lVar19 >> 0x20;
      }
      iVar14 = (int)uVar15;
      pbVar20 = pbVar20 + uVar18;
    }
    goto LAB_109b00868;
  }
  iVar25 = *piVar1;
  iVar4 = piVar1[1];
  if (iVar25 == -2) {
    if (iVar4 != 1) goto LAB_109b007e4;
    if ((int)(param_4 - 2U) < iVar14) goto LAB_109b00868;
    piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
    do {
      pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
      pbVar22 = (byte *)(param_2 + (lVar21 - param_5) + uVar18);
      pbVar2 = (byte *)(param_2 + lVar21 + param_5 + uVar18);
      bVar8 = pbVar22[1];
      bVar12 = pbVar20[1];
      bVar9 = pbVar2[1];
      piVar23[-1] = (uint)*pbVar2 + (uint)*pbVar20 * -2 + (uint)*pbVar22;
      *piVar23 = (uint)bVar9 + (uint)bVar12 * -2 + (uint)bVar8;
      uVar18 = uVar18 + 2;
      piVar23 = piVar23 + 2;
    } while (uVar18 <= param_4 - 2U);
  }
  else if (iVar25 == 2 && iVar4 == 1) {
    if ((int)(param_4 - 2U) < iVar14) goto LAB_109b00868;
    piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
    do {
      pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
      pbVar22 = (byte *)(param_2 + (lVar21 - param_5) + uVar18);
      pbVar2 = (byte *)(param_2 + lVar21 + param_5 + uVar18);
      bVar8 = pbVar22[1];
      bVar12 = pbVar20[1];
      bVar9 = pbVar2[1];
      piVar23[-1] = (uint)*pbVar22 + (uint)*pbVar20 * 2 + (uint)*pbVar2;
      *piVar23 = (uint)bVar8 + (uint)bVar12 * 2 + (uint)bVar9;
      uVar18 = uVar18 + 2;
      piVar23 = piVar23 + 2;
    } while (uVar18 <= param_4 - 2U);
  }
  else {
LAB_109b007e4:
    if ((int)(param_4 - 2U) < iVar14) goto LAB_109b00868;
    piVar23 = (int *)(param_3 + uVar18 * 4 + 4);
    do {
      pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
      pbVar22 = (byte *)(param_2 + (lVar21 - param_5) + uVar18);
      pbVar2 = (byte *)(param_2 + lVar21 + param_5 + uVar18);
      bVar8 = pbVar20[1];
      bVar12 = pbVar22[1];
      bVar9 = pbVar2[1];
      piVar23[-1] = iVar25 * (uint)*pbVar20 + ((uint)*pbVar2 + (uint)*pbVar22) * iVar4;
      *piVar23 = iVar25 * (uint)bVar8 + ((uint)bVar9 + (uint)bVar12) * iVar4;
      uVar18 = uVar18 + 2;
      piVar23 = piVar23 + 2;
    } while (uVar18 <= param_4 - 2U);
  }
LAB_109b0085c:
  pbVar20 = (byte *)(param_2 + lVar21 + uVar18);
  iVar14 = (int)uVar18;
LAB_109b00868:
  if (iVar14 < param_4) {
    lVar19 = (long)param_5;
    lVar21 = (long)iVar14;
    do {
      iVar25 = *piVar1 * (uint)*pbVar20;
      lVar16 = (ulong)(iVar5 / 2 + 1) - 1;
      lVar17 = lVar19;
      lVar26 = -(long)param_5;
      piVar23 = (int *)(lVar27 + lVar13 * 4);
      if (1 < iVar5) {
        do {
          iVar25 = iVar25 + ((uint)pbVar20[lVar26] + (uint)pbVar20[lVar17]) * piVar23[1];
          lVar16 = lVar16 + -1;
          lVar17 = lVar17 + lVar19;
          lVar26 = lVar26 - lVar19;
          piVar23 = piVar23 + 1;
        } while (lVar16 != 0);
      }
      *(int *)(param_3 + lVar21 * 4) = iVar25;
      lVar21 = lVar21 + 1;
      pbVar20 = pbVar20 + 1;
    } while (lVar21 != param_4);
  }
  return;
}



/* Entry: 109b00914; end: 109b00917;  */

undefined8 * FUN_109b00914(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b248b0;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b00918; end: 109b0092b;  */

void FUN_109b00918(void)

{
  FUN_109b0012c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b0092c; end: 109b00e0b;  */

void FUN_109b0092c(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  byte bVar13;
  undefined8 uVar14;
  
  uVar1 = *(uint *)(param_1 + 8);
  piVar12 = *(int **)(param_1 + 0x20);
  uVar7 = param_1 + 0x70;
  func_0x000109b00a58();
  param_4 = param_5 * param_4;
  if ((int)uVar7 <= (int)(param_4 - 4U)) {
    uVar7 = uVar7 & 0xffffffff;
    do {
      uVar3 = *(uint *)(param_2 + uVar7);
      bVar13 = (byte)(uVar3 >> 8);
      iVar9 = *piVar12;
      iVar4 = iVar9 * (CONCAT12(bVar13,(ushort)(byte)uVar3) & 0xffff);
      iVar5 = iVar9 * (uint)bVar13;
      uVar14 = CONCAT44(iVar9 * (uVar3 >> 0x18),iVar9 * (uVar3 >> 0x10 & 0xff));
      lVar10 = param_2 + param_5;
      lVar8 = (ulong)uVar1 - 1;
      piVar6 = piVar12;
      if (1 < (int)uVar1) {
        do {
          uVar3 = *(uint *)(lVar10 + uVar7);
          bVar13 = (byte)(uVar3 >> 8);
          iVar9 = piVar6[1];
          iVar4 = iVar4 + iVar9 * (CONCAT12(bVar13,(ushort)(byte)uVar3) & 0xffff);
          iVar5 = iVar5 + iVar9 * (uint)bVar13;
          uVar14 = CONCAT44((int)((ulong)uVar14 >> 0x20) + iVar9 * (uVar3 >> 0x18),
                            (int)uVar14 + iVar9 * (uVar3 >> 0x10 & 0xff));
          lVar8 = lVar8 + -1;
          lVar10 = lVar10 + param_5;
          piVar6 = piVar6 + 1;
        } while (lVar8 != 0);
      }
      puVar2 = (undefined8 *)(param_3 + uVar7 * 4);
      puVar2[1] = uVar14;
      *puVar2 = CONCAT26((short)((uint)iVar5 >> 0x10),CONCAT24((short)iVar5,iVar4));
      uVar7 = uVar7 + 4;
    } while (uVar7 <= param_4 - 4U);
  }
  if ((int)uVar7 < param_4) {
    lVar8 = (long)(int)uVar7;
    do {
      iVar9 = *piVar12 * (uint)*(byte *)(param_2 + lVar8);
      lVar11 = param_2 + param_5;
      lVar10 = (ulong)uVar1 - 1;
      piVar6 = piVar12;
      if (1 < (int)uVar1) {
        do {
          iVar9 = iVar9 + piVar6[1] * (uint)*(byte *)(lVar11 + lVar8);
          lVar10 = lVar10 + -1;
          lVar11 = lVar11 + param_5;
          piVar6 = piVar6 + 1;
        } while (lVar10 != 0);
      }
      *(int *)(param_3 + lVar8 * 4) = iVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_4);
  }
  return;
}



/* Entry: 109b00e0c; end: 109b00e13;  */

void FUN_109b00e0c(void)

{
  return;
}



/* Entry: 109b00e14; end: 109b00e4f;  */

void FUN_109b00e14(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b00e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b00e50; end: 109b00f73;  */

undefined8 * FUN_109b00e50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24970;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b00f74; end: 109b00f77;  */

undefined8 * FUN_109b00f74(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24970;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b00f78; end: 109b00f8b;  */

void FUN_109b00f78(void)

{
  FUN_109b00e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b00f8c; end: 109b015df;  */

void FUN_109b00f8c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = (iVar2 / 2) * param_5;
  lVar22 = *(long *)(param_1 + 0x20);
  lVar5 = (long)((ulong)(uint)(iVar2 - (iVar2 >> 0x1f)) << 0x20) >> 0x21;
  pfVar1 = (float *)(lVar22 + (long)(iVar2 / 2) * 4);
  uVar3 = *(uint *)(param_1 + 0xd8);
  uVar18 = param_1 + 0x70;
  func_0x000109b0172c();
  uVar12 = uVar18 & 0xffffffff;
  lVar16 = (long)iVar4;
  pfVar15 = (float *)(param_2 + (uVar18 & 0xffffffff) * 4 + (long)iVar4 * 4);
  param_4 = param_5 * param_4;
  iVar4 = *(int *)(param_1 + 8);
  iVar8 = (int)uVar18;
  if ((uVar3 & 1) == 0) {
    if (iVar4 == 5) {
      if (iVar8 <= (int)(param_4 - 2U)) {
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        lVar20 = lVar16 * 4;
        lVar9 = lVar20 + (long)(int)(param_5 << 1) * -4 + param_2 + 4;
        lVar13 = param_2 + lVar20 + (long)(int)(param_5 * -2) * 4;
        lVar14 = param_2 + lVar20 + (long)(int)(param_5 << 1) * 4;
        lVar21 = param_2 + lVar20 + (long)(int)param_5 * -4;
        lVar20 = param_2 + lVar20 + (long)(int)param_5 * 4;
        param_2 = param_2 + lVar16 * 4;
        lVar10 = uVar12 * 4;
        uVar18 = uVar12;
        lVar16 = param_3;
        do {
          *(ulong *)(lVar16 + lVar10) =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + lVar10) >> 0x20) -
                        *(float *)(lVar9 + uVar12 * 4)) * fVar24 +
                        ((float)((ulong)*(undefined8 *)(lVar20 + lVar10) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar21 + lVar10) >> 0x20)) * fVar23,
                        ((float)*(undefined8 *)(lVar14 + lVar10) - *(float *)(lVar13 + uVar12 * 4))
                        * fVar24 +
                        ((float)*(undefined8 *)(lVar20 + lVar10) -
                        (float)*(undefined8 *)(lVar21 + lVar10)) * fVar23);
          uVar18 = uVar18 + 2;
          lVar16 = lVar16 + 8;
          param_2 = param_2 + 8;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar14 = lVar14 + 8;
          lVar21 = lVar21 + 8;
          lVar20 = lVar20 + 8;
        } while (uVar18 <= param_4 - 2U);
        pfVar15 = (float *)(param_2 + uVar12 * 4);
      }
    }
    else if (iVar4 == 3) {
      fVar23 = pfVar1[1];
      uVar3 = param_4 - 2;
      bVar7 = false;
      if ((*pfVar1 == 0.0) && (bVar7 = false, !NAN(fVar23))) {
        bVar7 = fVar23 == 1.0;
      }
      if (bVar7) {
        if (iVar8 <= (int)uVar3) {
          uVar18 = uVar12;
          puVar17 = (undefined8 *)(param_3 + uVar12 * 4);
          do {
            uVar25 = *(undefined8 *)
                      ((long)pfVar15 +
                      (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
            *puVar17 = CONCAT44((float)((ulong)uVar25 >> 0x20) -
                                (float)((ulong)*(undefined8 *)(pfVar15 + -(long)(int)param_5) >>
                                       0x20),
                                (float)uVar25 -
                                (float)*(undefined8 *)(pfVar15 + -(long)(int)param_5));
            uVar18 = uVar18 + 2;
            pfVar15 = pfVar15 + 2;
            puVar17 = puVar17 + 1;
          } while (uVar18 <= uVar3);
        }
      }
      else if (iVar8 <= (int)uVar3) {
        uVar18 = uVar12;
        puVar17 = (undefined8 *)(param_3 + uVar12 * 4);
        do {
          uVar25 = *(undefined8 *)
                    ((long)pfVar15 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
          *puVar17 = CONCAT44(((float)((ulong)uVar25 >> 0x20) -
                              (float)((ulong)*(undefined8 *)(pfVar15 + -(long)(int)param_5) >> 0x20)
                              ) * fVar23,
                              ((float)uVar25 - (float)*(undefined8 *)(pfVar15 + -(long)(int)param_5)
                              ) * fVar23);
          uVar18 = uVar18 + 2;
          pfVar15 = pfVar15 + 2;
          puVar17 = puVar17 + 1;
        } while (uVar18 <= uVar3);
      }
    }
    if (param_4 <= (int)uVar18) {
      return;
    }
    lVar16 = (long)(int)uVar18;
    uVar18 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    do {
      fVar23 = *pfVar1 * *pfVar15;
      lVar9 = (ulong)(iVar2 / 2 + 1) - 1;
      uVar12 = uVar18;
      lVar13 = (long)(int)param_5 * -4;
      pfVar6 = (float *)(lVar22 + lVar5 * 4);
      if (1 < iVar2) {
        do {
          fVar23 = fVar23 + (*(float *)((long)pfVar15 + uVar12) - *(float *)((long)pfVar15 + lVar13)
                            ) * pfVar6[1];
          lVar9 = lVar9 + -1;
          uVar12 = uVar12 + uVar18;
          lVar13 = lVar13 - uVar18;
          pfVar6 = pfVar6 + 1;
        } while (lVar9 != 0);
      }
      *(float *)(param_3 + lVar16 * 4) = fVar23;
      lVar16 = lVar16 + 1;
      pfVar15 = pfVar15 + 1;
    } while (lVar16 != param_4);
    return;
  }
  if (iVar4 == 5) {
    fVar23 = *pfVar1;
    fVar24 = pfVar1[1];
    fVar26 = pfVar1[2];
    uVar3 = param_4 - 2;
    if (fVar23 == -2.0) {
      bVar7 = false;
      if ((fVar24 == 0.0) && (bVar7 = false, !NAN(fVar26))) {
        bVar7 = fVar26 == 1.0;
      }
      if (bVar7) {
        if ((int)uVar3 < iVar8) goto LAB_109b01534;
        lVar14 = lVar16 * 4;
        lVar9 = lVar14 + (long)(int)(param_5 << 1) * -4 + param_2 + 4;
        lVar13 = param_2 + lVar14 + (long)(int)(param_5 << 1) * 4;
        lVar14 = param_2 + lVar14 + (long)(int)(param_5 * -2) * 4;
        lVar21 = param_2 + lVar16 * 4;
        lVar20 = uVar12 * 4;
        uVar18 = uVar12;
        lVar16 = param_3;
        do {
          *(ulong *)(lVar16 + lVar20) =
               CONCAT44(*(float *)(lVar9 + uVar12 * 4) +
                        (float)((ulong)*(undefined8 *)(lVar21 + lVar20) >> 0x20) * -2.0 +
                        (float)((ulong)*(undefined8 *)(lVar13 + lVar20) >> 0x20),
                        *(float *)(lVar14 + uVar12 * 4) +
                        (float)*(undefined8 *)(lVar21 + lVar20) * -2.0 +
                        (float)*(undefined8 *)(lVar13 + lVar20));
          uVar18 = uVar18 + 2;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + 8;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar14 = lVar14 + 8;
        } while (uVar18 <= uVar3);
        goto LAB_109b01530;
      }
    }
    if ((int)uVar3 < iVar8) goto LAB_109b01534;
    lVar21 = lVar16 * 4;
    lVar9 = lVar21 + (long)(int)(param_5 << 1) * -4 + param_2 + 4;
    lVar13 = param_2 + lVar21 + (long)(int)(param_5 << 1) * 4;
    lVar14 = param_2 + lVar21 + (long)(int)(param_5 * -2) * 4;
    lVar20 = param_2 + lVar21 + (long)(int)param_5 * 4;
    lVar10 = param_2 + lVar21 + (long)(int)param_5 * -4;
    lVar21 = param_2 + lVar16 * 4;
    lVar11 = uVar12 * 4;
    uVar18 = uVar12;
    lVar16 = param_3;
    do {
      *(ulong *)(lVar16 + lVar11) =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar10 + lVar11) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar20 + lVar11) >> 0x20)) * fVar24 +
                    (float)((ulong)*(undefined8 *)(lVar21 + lVar11) >> 0x20) * fVar23 +
                    (*(float *)(lVar9 + uVar12 * 4) +
                    (float)((ulong)*(undefined8 *)(lVar13 + lVar11) >> 0x20)) * fVar26,
                    ((float)*(undefined8 *)(lVar10 + lVar11) +
                    (float)*(undefined8 *)(lVar20 + lVar11)) * fVar24 +
                    (float)*(undefined8 *)(lVar21 + lVar11) * fVar23 +
                    (*(float *)(lVar14 + uVar12 * 4) + (float)*(undefined8 *)(lVar13 + lVar11)) *
                    fVar26);
      uVar18 = uVar18 + 2;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      lVar9 = lVar9 + 8;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + 8;
      lVar10 = lVar10 + 8;
    } while (uVar18 <= uVar3);
  }
  else {
    if (iVar4 != 3) {
      if ((iVar4 == 1) && (*pfVar1 == 1.0)) {
        if (iVar8 <= (int)(param_4 - 2U)) {
          lVar9 = uVar18 << 0x20;
          uVar18 = uVar12;
          puVar17 = (undefined8 *)(param_2 + uVar12 * 8 + lVar16 * 4);
          puVar19 = (undefined8 *)(param_3 + uVar12 * 4);
          do {
            *puVar19 = *puVar17;
            uVar18 = uVar18 + 2;
            lVar9 = lVar9 + 0x200000000;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar18 <= param_4 - 2U);
          uVar12 = lVar9 >> 0x20;
        }
        pfVar15 = pfVar15 + uVar12;
      }
      goto LAB_109b01534;
    }
    fVar23 = *pfVar1;
    fVar24 = pfVar1[1];
    bVar7 = false;
    if ((fVar23 == 2.0) && (bVar7 = false, !NAN(fVar24))) {
      bVar7 = fVar24 == 1.0;
    }
    if (bVar7) {
      if (iVar8 <= (int)(param_4 - 2U)) {
        lVar14 = uVar12 * 4;
        lVar9 = param_2 + lVar16 * 4;
        lVar13 = param_2 + lVar16 * 4 + (long)(int)param_5 * 4;
        param_2 = param_2 + lVar16 * 4 + (long)(int)param_5 * -4;
        uVar18 = uVar12;
        lVar16 = param_3;
        do {
          *(ulong *)(lVar16 + lVar14) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + lVar14) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + lVar14) >> 0x20) * 2.0 +
                        (float)((ulong)*(undefined8 *)(lVar13 + lVar14) >> 0x20),
                        (float)*(undefined8 *)(param_2 + lVar14) +
                        (float)*(undefined8 *)(lVar9 + lVar14) * 2.0 +
                        (float)*(undefined8 *)(lVar13 + lVar14));
          uVar18 = uVar18 + 2;
          lVar16 = lVar16 + 8;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          param_2 = param_2 + 8;
        } while (uVar18 <= param_4 - 2U);
        pfVar15 = (float *)(lVar9 + uVar12 * 4);
      }
      goto LAB_109b01534;
    }
    uVar3 = param_4 - 2;
    bVar7 = false;
    if ((fVar23 == -2.0) && (bVar7 = false, !NAN(fVar24))) {
      bVar7 = fVar24 == 1.0;
    }
    if (bVar7) {
      if ((int)uVar3 < iVar8) goto LAB_109b01534;
      lVar13 = uVar12 * 4;
      lVar21 = param_2 + lVar16 * 4;
      lVar9 = param_2 + lVar16 * 4 + (long)(int)param_5 * 4;
      param_2 = param_2 + lVar16 * 4 + (long)(int)param_5 * -4;
      uVar18 = uVar12;
      lVar16 = param_3;
      do {
        *(ulong *)(lVar16 + lVar13) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_2 + lVar13) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar21 + lVar13) >> 0x20) * -2.0 +
                      (float)((ulong)*(undefined8 *)(lVar9 + lVar13) >> 0x20),
                      (float)*(undefined8 *)(param_2 + lVar13) +
                      (float)*(undefined8 *)(lVar21 + lVar13) * -2.0 +
                      (float)*(undefined8 *)(lVar9 + lVar13));
        uVar18 = uVar18 + 2;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        lVar9 = lVar9 + 8;
        param_2 = param_2 + 8;
      } while (uVar18 <= uVar3);
    }
    else {
      if ((int)uVar3 < iVar8) goto LAB_109b01534;
      lVar13 = uVar12 * 4;
      lVar21 = param_2 + lVar16 * 4;
      lVar9 = param_2 + lVar16 * 4 + (long)(int)param_5 * 4;
      param_2 = param_2 + lVar16 * 4 + (long)(int)param_5 * -4;
      uVar18 = uVar12;
      lVar16 = param_3;
      do {
        *(ulong *)(lVar16 + lVar13) =
             CONCAT44(((float)((ulong)*(undefined8 *)(param_2 + lVar13) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar9 + lVar13) >> 0x20)) * fVar24 +
                      (float)((ulong)*(undefined8 *)(lVar21 + lVar13) >> 0x20) * fVar23,
                      ((float)*(undefined8 *)(param_2 + lVar13) +
                      (float)*(undefined8 *)(lVar9 + lVar13)) * fVar24 +
                      (float)*(undefined8 *)(lVar21 + lVar13) * fVar23);
        uVar18 = uVar18 + 2;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        lVar9 = lVar9 + 8;
        param_2 = param_2 + 8;
      } while (uVar18 <= uVar3);
    }
  }
LAB_109b01530:
  pfVar15 = (float *)(lVar21 + uVar12 * 4);
LAB_109b01534:
  if ((int)uVar18 < param_4) {
    lVar16 = (long)(int)uVar18;
    uVar18 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    do {
      fVar23 = *pfVar1 * *pfVar15;
      lVar9 = (ulong)(iVar2 / 2 + 1) - 1;
      uVar12 = uVar18;
      lVar13 = (long)(int)param_5 * -4;
      pfVar6 = (float *)(lVar22 + lVar5 * 4);
      if (1 < iVar2) {
        do {
          fVar23 = fVar23 + (*(float *)((long)pfVar15 + uVar12) + *(float *)((long)pfVar15 + lVar13)
                            ) * pfVar6[1];
          lVar9 = lVar9 + -1;
          uVar12 = uVar12 + uVar18;
          lVar13 = lVar13 - uVar18;
          pfVar6 = pfVar6 + 1;
        } while (lVar9 != 0);
      }
      *(float *)(param_3 + lVar16 * 4) = fVar23;
      lVar16 = lVar16 + 1;
      pfVar15 = pfVar15 + 1;
    } while (lVar16 != param_4);
  }
  return;
}



/* Entry: 109b015e0; end: 109b015e3;  */

undefined8 * FUN_109b015e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24970;
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar5 = 0;
    lVar7 = param_1[0x16];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x74));
  }
  puVar6 = (undefined8 *)param_1[0x17];
  if (puVar6 != param_1 + 0x18 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b015e4; end: 109b015f7;  */

void FUN_109b015e4(void)

{
  FUN_109b00e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b015f8; end: 109b018e3;  */

void FUN_109b015f8(long param_1,long param_2,long param_3,int param_4,ulong param_5)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar1 = *(uint *)(param_1 + 8);
  pfVar13 = *(float **)(param_1 + 0x20);
  uVar6 = param_1 + 0x70;
  func_0x000109b0172c();
  param_4 = (int)param_5 * param_4;
  iVar3 = (int)uVar6;
  if (iVar3 <= (int)(param_4 - 4U)) {
    uVar5 = uVar6 & 0xffffffff;
    uVar7 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    puVar9 = (undefined8 *)(param_2 + uVar7 + (uVar6 & 0xffffffff) * 4);
    do {
      fVar14 = *pfVar13;
      puVar11 = (undefined8 *)(param_2 + uVar5 * 4);
      uVar18 = puVar11[1];
      uVar17 = *puVar11;
      fVar15 = (float)uVar17 * fVar14;
      fVar16 = (float)((ulong)uVar17 >> 0x20) * fVar14;
      uVar17 = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar14,(float)uVar18 * fVar14);
      lVar4 = (ulong)uVar1 - 1;
      puVar11 = puVar9;
      pfVar8 = pfVar13;
      if (1 < (int)uVar1) {
        do {
          fVar14 = pfVar8[1];
          fVar15 = fVar15 + (float)*puVar11 * fVar14;
          fVar16 = fVar16 + (float)((ulong)*puVar11 >> 0x20) * fVar14;
          uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                            (float)((ulong)puVar11[1] >> 0x20) * fVar14,
                            (float)uVar17 + (float)puVar11[1] * fVar14);
          lVar4 = lVar4 + -1;
          puVar11 = (undefined8 *)((long)puVar11 + uVar7);
          pfVar8 = pfVar8 + 1;
        } while (lVar4 != 0);
      }
      puVar11 = (undefined8 *)(param_3 + uVar5 * 4);
      puVar11[1] = uVar17;
      *puVar11 = CONCAT44(fVar16,fVar15);
      uVar5 = uVar5 + 4;
      puVar9 = puVar9 + 2;
    } while (uVar5 <= param_4 - 4U);
    iVar3 = (int)uVar5;
  }
  if (iVar3 < param_4) {
    lVar4 = (long)iVar3;
    uVar6 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    pfVar8 = (float *)(param_2 + uVar6 + (long)iVar3 * 4);
    do {
      fVar14 = *pfVar13 * *(float *)(param_2 + lVar4 * 4);
      pfVar10 = pfVar8;
      lVar12 = (ulong)uVar1 - 1;
      pfVar2 = pfVar13;
      if (1 < (int)uVar1) {
        do {
          fVar14 = fVar14 + *pfVar10 * pfVar2[1];
          lVar12 = lVar12 + -1;
          pfVar10 = (float *)((long)pfVar10 + uVar6);
          pfVar2 = pfVar2 + 1;
        } while (lVar12 != 0);
      }
      *(float *)(param_3 + lVar4 * 4) = fVar14;
      lVar4 = lVar4 + 1;
      pfVar8 = pfVar8 + 1;
    } while (lVar4 != param_4);
  }
  return;
}



/* Entry: 109b018e4; end: 109b018eb;  */

void FUN_109b018e4(void)

{
  return;
}



/* Entry: 109b018ec; end: 109b01927;  */

void FUN_109b018ec(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b01924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b01928; end: 109b019cf;  */

undefined8 * FUN_109b01928(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b249d8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b019d0; end: 109b01a77;  */

void FUN_109b019d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b249d8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b01a78; end: 109b01b77;  */

void FUN_109b01a78(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  byte bVar14;
  undefined8 uVar15;
  
  uVar1 = *(uint *)(param_1 + 8);
  piVar10 = *(int **)(param_1 + 0x20);
  uVar2 = param_5 * param_4;
  if ((int)uVar2 < 4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    puVar13 = (uint *)(param_2 + param_5);
    do {
      uVar4 = *(uint *)(param_2 + uVar11);
      bVar14 = (byte)(uVar4 >> 8);
      iVar12 = *piVar10;
      iVar5 = iVar12 * (CONCAT12(bVar14,(ushort)(byte)uVar4) & 0xffff);
      iVar6 = iVar12 * (uint)bVar14;
      uVar15 = CONCAT44(iVar12 * (uVar4 >> 0x18),iVar12 * (uVar4 >> 0x10 & 0xff));
      puVar8 = puVar13;
      lVar9 = (ulong)uVar1 - 1;
      piVar7 = piVar10;
      if (1 < (int)uVar1) {
        do {
          uVar4 = *puVar8;
          bVar14 = (byte)(uVar4 >> 8);
          iVar12 = piVar7[1];
          iVar5 = iVar5 + iVar12 * (CONCAT12(bVar14,(ushort)(byte)uVar4) & 0xffff);
          iVar6 = iVar6 + iVar12 * (uint)bVar14;
          uVar15 = CONCAT44((int)((ulong)uVar15 >> 0x20) + iVar12 * (uVar4 >> 0x18),
                            (int)uVar15 + iVar12 * (uVar4 >> 0x10 & 0xff));
          lVar9 = lVar9 + -1;
          puVar8 = (uint *)((long)puVar8 + (long)param_5);
          piVar7 = piVar7 + 1;
        } while (lVar9 != 0);
      }
      puVar3 = (undefined8 *)(param_3 + uVar11 * 4);
      puVar3[1] = uVar15;
      *puVar3 = CONCAT26((short)((uint)iVar6 >> 0x10),CONCAT24((short)iVar6,iVar5));
      uVar11 = uVar11 + 4;
      puVar13 = puVar13 + 1;
    } while (uVar11 <= uVar2 - 4);
  }
  if ((int)uVar11 < (int)uVar2) {
    uVar11 = uVar11 & 0xffffffff;
    do {
      iVar12 = *piVar10 * (uint)*(byte *)(param_2 + uVar11);
      lVar9 = (ulong)uVar1 - 1;
      puVar13 = (uint *)(param_2 + param_5);
      piVar7 = piVar10;
      if (1 < (int)uVar1) {
        do {
          iVar12 = iVar12 + piVar7[1] * (uint)*(byte *)((long)puVar13 + uVar11);
          lVar9 = lVar9 + -1;
          puVar13 = (uint *)((long)puVar13 + (long)param_5);
          piVar7 = piVar7 + 1;
        } while (lVar9 != 0);
      }
      *(int *)(param_3 + uVar11 * 4) = iVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar2);
  }
  return;
}



/* Entry: 109b01b78; end: 109b01bb3;  */

void FUN_109b01b78(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b01bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b01bb4; end: 109b01c5b;  */

undefined8 * FUN_109b01bb4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24a58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b01c5c; end: 109b01d03;  */

void FUN_109b01c5c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24a58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b01d04; end: 109b01e13;  */

void FUN_109b01d04(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  uVar1 = *(uint *)(param_1 + 8);
  pfVar6 = *(float **)(param_1 + 0x20);
  uVar2 = param_5 * param_4;
  if ((int)uVar2 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    puVar8 = (undefined4 *)(param_2 + param_5);
    do {
      uVar10 = *(undefined4 *)(param_2 + uVar7);
      fVar13 = *pfVar6;
      uVar9 = (undefined1)((uint)uVar10 >> 8);
      auVar11._6_2_ = 0;
      auVar11._0_6_ =
           (uint6)CONCAT14(uVar9,(uint)CONCAT12(uVar9,(ushort)(byte)uVar10)) & 0xffff0000ffff;
      auVar11[8] = (char)((uint)uVar10 >> 0x10);
      auVar11._9_3_ = 0;
      auVar11[0xc] = (char)((uint)uVar10 >> 0x18);
      auVar11._13_3_ = 0;
      auVar11 = NEON_ucvtf(auVar11,4);
      fVar15 = auVar11._0_4_ * fVar13;
      fVar16 = auVar11._4_4_ * fVar13;
      fVar12 = auVar11._8_4_ * fVar13;
      fVar13 = auVar11._12_4_ * fVar13;
      puVar4 = puVar8;
      lVar5 = (ulong)uVar1 - 1;
      pfVar3 = pfVar6;
      if (1 < (int)uVar1) {
        do {
          fVar14 = pfVar3[1];
          uVar10 = *puVar4;
          uVar9 = (undefined1)((uint)uVar10 >> 8);
          auVar17._6_2_ = 0;
          auVar17._0_6_ =
               (uint6)CONCAT14(uVar9,(uint)CONCAT12(uVar9,(ushort)(byte)uVar10)) & 0xffff0000ffff;
          auVar17[8] = (char)((uint)uVar10 >> 0x10);
          auVar17._9_3_ = 0;
          auVar17[0xc] = (char)((uint)uVar10 >> 0x18);
          auVar17._13_3_ = 0;
          auVar11 = NEON_ucvtf(auVar17,4);
          fVar15 = fVar15 + auVar11._0_4_ * fVar14;
          fVar16 = fVar16 + auVar11._4_4_ * fVar14;
          fVar12 = fVar12 + auVar11._8_4_ * fVar14;
          fVar13 = fVar13 + auVar11._12_4_ * fVar14;
          lVar5 = lVar5 + -1;
          puVar4 = (undefined4 *)((long)puVar4 + (long)param_5);
          pfVar3 = pfVar3 + 1;
        } while (lVar5 != 0);
      }
      pfVar3 = (float *)(param_3 + uVar7 * 4);
      pfVar3[2] = fVar12;
      pfVar3[3] = fVar13;
      *pfVar3 = fVar15;
      pfVar3[1] = fVar16;
      uVar7 = uVar7 + 4;
      puVar8 = puVar8 + 1;
    } while (uVar7 <= uVar2 - 4);
  }
  if ((int)uVar7 < (int)uVar2) {
    uVar7 = uVar7 & 0xffffffff;
    do {
      fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + uVar7));
      fVar15 = *pfVar6 * fVar15;
      lVar5 = (ulong)uVar1 - 1;
      puVar8 = (undefined4 *)(param_2 + param_5);
      pfVar3 = pfVar6;
      if (1 < (int)uVar1) {
        do {
          fVar16 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar8 + uVar7));
          fVar15 = fVar15 + fVar16 * pfVar3[1];
          lVar5 = lVar5 + -1;
          puVar8 = (undefined4 *)((long)puVar8 + (long)param_5);
          pfVar3 = pfVar3 + 1;
        } while (lVar5 != 0);
      }
      *(float *)(param_3 + uVar7 * 4) = fVar15;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  return;
}



/* Entry: 109b01e14; end: 109b01e4f;  */

void FUN_109b01e14(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b01e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b01e50; end: 109b01ef7;  */

undefined8 * FUN_109b01e50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24ad8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b01ef8; end: 109b01f9f;  */

void FUN_109b01ef8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24ad8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b01fa0; end: 109b020ef;  */

void FUN_109b01fa0(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar2 = *(uint *)(param_1 + 8);
  pdVar6 = *(double **)(param_1 + 0x20);
  uVar3 = param_5 * param_4;
  if ((int)uVar3 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pbVar9 = (byte *)(param_2 + param_5 + 1);
    do {
      pbVar4 = (byte *)(param_2 + uVar7);
      dVar13 = *pdVar6;
      dVar10 = (double)NEON_ucvtf((ulong)*pbVar4);
      dVar10 = dVar13 * dVar10;
      dVar12 = (double)NEON_ucvtf((ulong)pbVar4[1]);
      dVar12 = dVar13 * dVar12;
      dVar11 = (double)NEON_ucvtf((ulong)pbVar4[2]);
      dVar11 = dVar13 * dVar11;
      dVar14 = (double)NEON_ucvtf((ulong)pbVar4[3]);
      dVar13 = dVar13 * dVar14;
      pbVar4 = pbVar9;
      lVar5 = (ulong)uVar2 - 1;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar14 = pdVar1[1];
          dVar15 = (double)NEON_ucvtf((ulong)pbVar4[-1]);
          dVar10 = dVar10 + dVar15 * dVar14;
          dVar15 = (double)NEON_ucvtf((ulong)*pbVar4);
          dVar12 = dVar12 + dVar15 * dVar14;
          dVar15 = (double)NEON_ucvtf((ulong)pbVar4[1]);
          dVar11 = dVar11 + dVar15 * dVar14;
          dVar15 = (double)NEON_ucvtf((ulong)pbVar4[2]);
          dVar13 = dVar13 + dVar15 * dVar14;
          lVar5 = lVar5 + -1;
          pbVar4 = pbVar4 + param_5;
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      pdVar1 = (double *)(param_3 + uVar7 * 8);
      *pdVar1 = dVar10;
      pdVar1[1] = dVar12;
      pdVar1[2] = dVar11;
      pdVar1[3] = dVar13;
      uVar7 = uVar7 + 4;
      pbVar9 = pbVar9 + 4;
    } while (uVar7 <= uVar3 - 4);
  }
  if ((int)uVar7 < (int)uVar3) {
    uVar7 = uVar7 & 0xffffffff;
    do {
      dVar10 = (double)NEON_ucvtf((ulong)*(byte *)(param_2 + uVar7));
      dVar10 = *pdVar6 * dVar10;
      lVar5 = (ulong)uVar2 - 1;
      lVar8 = param_2 + param_5;
      pdVar1 = pdVar6;
      if (1 < (int)uVar2) {
        do {
          dVar12 = (double)NEON_ucvtf((ulong)*(byte *)(lVar8 + uVar7));
          dVar10 = dVar10 + dVar12 * pdVar1[1];
          lVar5 = lVar5 + -1;
          lVar8 = lVar8 + param_5;
          pdVar1 = pdVar1 + 1;
        } while (lVar5 != 0);
      }
      *(double *)(param_3 + uVar7 * 8) = dVar10;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  return;
}



/* Entry: 109b020f0; end: 109b0212b;  */

void FUN_109b020f0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b02128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b0212c; end: 109b021d3;  */

undefined8 * FUN_109b0212c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24b58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b021d4; end: 109b0227b;  */

void FUN_109b021d4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24b58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b0227c; end: 109b0238f;  */

void FUN_109b0227c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  uVar1 = *(uint *)(param_1 + 8);
  pfVar5 = *(float **)(param_1 + 0x20);
  uVar2 = param_5 * param_4;
  if ((int)uVar2 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar10 = (undefined8 *)(param_2 + (long)(int)param_5 * 2);
    do {
      fVar14 = *pfVar5;
      uVar15 = *(undefined8 *)(param_2 + uVar6 * 2);
      auVar16._2_2_ = 0;
      auVar16._0_2_ = (ushort)uVar15;
      auVar16._4_2_ = (short)((ulong)uVar15 >> 0x10);
      auVar16._6_2_ = 0;
      auVar16._8_2_ = (short)((ulong)uVar15 >> 0x20);
      auVar16._10_2_ = 0;
      auVar16._12_2_ = (short)((ulong)uVar15 >> 0x30);
      auVar16._14_2_ = 0;
      auVar16 = NEON_ucvtf(auVar16,4);
      fVar17 = auVar16._0_4_ * fVar14;
      fVar13 = auVar16._4_4_ * fVar14;
      uVar15 = CONCAT44(auVar16._12_4_ * fVar14,auVar16._8_4_ * fVar14);
      lVar4 = (ulong)uVar1 - 1;
      puVar12 = puVar10;
      pfVar3 = pfVar5;
      if (1 < (int)uVar1) {
        do {
          fVar14 = pfVar3[1];
          uVar18 = *puVar12;
          auVar19._2_2_ = 0;
          auVar19._0_2_ = (ushort)uVar18;
          auVar19._4_2_ = (short)((ulong)uVar18 >> 0x10);
          auVar19._6_2_ = 0;
          auVar19._8_2_ = (short)((ulong)uVar18 >> 0x20);
          auVar19._10_2_ = 0;
          auVar19._12_2_ = (short)((ulong)uVar18 >> 0x30);
          auVar19._14_2_ = 0;
          auVar16 = NEON_ucvtf(auVar19,4);
          fVar17 = fVar17 + auVar16._0_4_ * fVar14;
          fVar13 = fVar13 + auVar16._4_4_ * fVar14;
          uVar15 = CONCAT44((float)((ulong)uVar15 >> 0x20) + auVar16._12_4_ * fVar14,
                            (float)uVar15 + auVar16._8_4_ * fVar14);
          lVar4 = lVar4 + -1;
          puVar12 = (undefined8 *)
                    ((long)puVar12 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
          pfVar3 = pfVar3 + 1;
        } while (lVar4 != 0);
      }
      puVar12 = (undefined8 *)(param_3 + uVar6 * 4);
      puVar12[1] = uVar15;
      *puVar12 = CONCAT44(fVar13,fVar17);
      uVar6 = uVar6 + 4;
      puVar10 = puVar10 + 1;
    } while (uVar6 <= uVar2 - 4);
  }
  if ((int)uVar6 < (int)uVar2) {
    uVar8 = uVar6 & 0xffffffff;
    uVar9 = -(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1;
    puVar7 = (ushort *)(param_2 + uVar9 + (uVar6 & 0xffffffff) * 2);
    do {
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + uVar8 * 2));
      fVar14 = *pfVar5 * fVar14;
      lVar4 = (ulong)uVar1 - 1;
      puVar11 = puVar7;
      pfVar3 = pfVar5;
      if (1 < (int)uVar1) {
        do {
          fVar17 = (float)NEON_ucvtf((uint)*puVar11);
          fVar14 = fVar14 + fVar17 * pfVar3[1];
          lVar4 = lVar4 + -1;
          puVar11 = (ushort *)((long)puVar11 + uVar9);
          pfVar3 = pfVar3 + 1;
        } while (lVar4 != 0);
      }
      *(float *)(param_3 + uVar8 * 4) = fVar14;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != uVar2);
  }
  return;
}



/* Entry: 109b02390; end: 109b023cb;  */

void FUN_109b02390(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b023c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b023cc; end: 109b02473;  */

undefined8 * FUN_109b023cc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24bd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b02474; end: 109b0251b;  */

void FUN_109b02474(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24bd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b0251c; end: 109b02677;  */

void FUN_109b0251c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar2 = *(uint *)(param_1 + 8);
  pdVar5 = *(double **)(param_1 + 0x20);
  uVar3 = param_5 * param_4;
  if ((int)uVar3 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar7 = (ushort *)(param_2 + (long)(int)param_5 * 2 + 4);
    do {
      puVar10 = (ushort *)(param_2 + uVar6 * 2);
      dVar14 = *pdVar5;
      dVar11 = (double)NEON_ucvtf((ulong)*puVar10);
      dVar11 = dVar14 * dVar11;
      dVar13 = (double)NEON_ucvtf((ulong)puVar10[1]);
      dVar13 = dVar14 * dVar13;
      dVar12 = (double)NEON_ucvtf((ulong)puVar10[2]);
      dVar12 = dVar14 * dVar12;
      dVar15 = (double)NEON_ucvtf((ulong)puVar10[3]);
      dVar14 = dVar14 * dVar15;
      lVar4 = (ulong)uVar2 - 1;
      puVar10 = puVar7;
      pdVar1 = pdVar5;
      if (1 < (int)uVar2) {
        do {
          dVar15 = pdVar1[1];
          dVar16 = (double)NEON_ucvtf((ulong)puVar10[-2]);
          dVar11 = dVar11 + dVar16 * dVar15;
          dVar16 = (double)NEON_ucvtf((ulong)puVar10[-1]);
          dVar13 = dVar13 + dVar16 * dVar15;
          dVar16 = (double)NEON_ucvtf((ulong)*puVar10);
          dVar12 = dVar12 + dVar16 * dVar15;
          dVar16 = (double)NEON_ucvtf((ulong)puVar10[1]);
          dVar14 = dVar14 + dVar16 * dVar15;
          lVar4 = lVar4 + -1;
          puVar10 = (ushort *)
                    ((long)puVar10 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
          pdVar1 = pdVar1 + 1;
        } while (lVar4 != 0);
      }
      pdVar1 = (double *)(param_3 + uVar6 * 8);
      *pdVar1 = dVar11;
      pdVar1[1] = dVar13;
      pdVar1[2] = dVar12;
      pdVar1[3] = dVar14;
      uVar6 = uVar6 + 4;
      puVar7 = puVar7 + 4;
    } while (uVar6 <= uVar3 - 4);
  }
  if ((int)uVar6 < (int)uVar3) {
    uVar8 = uVar6 & 0xffffffff;
    uVar9 = -(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1;
    puVar7 = (ushort *)(param_2 + uVar9 + (uVar6 & 0xffffffff) * 2);
    do {
      dVar11 = (double)NEON_ucvtf((ulong)*(ushort *)(param_2 + uVar8 * 2));
      dVar11 = *pdVar5 * dVar11;
      lVar4 = (ulong)uVar2 - 1;
      puVar10 = puVar7;
      pdVar1 = pdVar5;
      if (1 < (int)uVar2) {
        do {
          dVar13 = (double)NEON_ucvtf((ulong)*puVar10);
          dVar11 = dVar11 + dVar13 * pdVar1[1];
          lVar4 = lVar4 + -1;
          puVar10 = (ushort *)((long)puVar10 + uVar9);
          pdVar1 = pdVar1 + 1;
        } while (lVar4 != 0);
      }
      *(double *)(param_3 + uVar8 * 8) = dVar11;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}



/* Entry: 109b02678; end: 109b026b3;  */

void FUN_109b02678(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b026b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b026b4; end: 109b02707;  */

long * FUN_109b026b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b02708; end: 109b027af;  */

undefined8 * FUN_109b02708(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24c58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b027b0; end: 109b02857;  */

void FUN_109b027b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24c58;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b02858; end: 109b0296b;  */

void FUN_109b02858(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  short *psVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  uVar1 = *(uint *)(param_1 + 8);
  pfVar5 = *(float **)(param_1 + 0x20);
  uVar2 = param_5 * param_4;
  if ((int)uVar2 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar10 = (undefined8 *)(param_2 + (long)(int)param_5 * 2);
    do {
      fVar14 = *pfVar5;
      uVar16 = *(undefined8 *)(param_2 + uVar6 * 2);
      auVar17._0_4_ = (int)(short)uVar16;
      auVar17._4_4_ = (int)(short)((ulong)uVar16 >> 0x10);
      auVar17._8_4_ = (int)(short)((ulong)uVar16 >> 0x20);
      auVar17._12_4_ = (int)(short)((ulong)uVar16 >> 0x30);
      auVar17 = NEON_scvtf(auVar17,4);
      fVar13 = auVar17._0_4_ * fVar14;
      fVar15 = auVar17._4_4_ * fVar14;
      uVar16 = CONCAT44(auVar17._12_4_ * fVar14,auVar17._8_4_ * fVar14);
      lVar4 = (ulong)uVar1 - 1;
      puVar12 = puVar10;
      pfVar3 = pfVar5;
      if (1 < (int)uVar1) {
        do {
          fVar14 = pfVar3[1];
          uVar18 = *puVar12;
          auVar19._0_4_ = (int)(short)uVar18;
          auVar19._4_4_ = (int)(short)((ulong)uVar18 >> 0x10);
          auVar19._8_4_ = (int)(short)((ulong)uVar18 >> 0x20);
          auVar19._12_4_ = (int)(short)((ulong)uVar18 >> 0x30);
          auVar17 = NEON_scvtf(auVar19,4);
          fVar13 = fVar13 + auVar17._0_4_ * fVar14;
          fVar15 = fVar15 + auVar17._4_4_ * fVar14;
          uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) + auVar17._12_4_ * fVar14,
                            (float)uVar16 + auVar17._8_4_ * fVar14);
          lVar4 = lVar4 + -1;
          puVar12 = (undefined8 *)
                    ((long)puVar12 +
                    (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
          pfVar3 = pfVar3 + 1;
        } while (lVar4 != 0);
      }
      puVar12 = (undefined8 *)(param_3 + uVar6 * 4);
      puVar12[1] = uVar16;
      *puVar12 = CONCAT44(fVar15,fVar13);
      uVar6 = uVar6 + 4;
      puVar10 = puVar10 + 1;
    } while (uVar6 <= uVar2 - 4);
  }
  if ((int)uVar6 < (int)uVar2) {
    uVar8 = uVar6 & 0xffffffff;
    uVar9 = -(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1;
    psVar7 = (short *)(param_2 + uVar9 + (uVar6 & 0xffffffff) * 2);
    do {
      fVar14 = *pfVar5 * (float)(int)*(short *)(param_2 + uVar8 * 2);
      lVar4 = (ulong)uVar1 - 1;
      psVar11 = psVar7;
      pfVar3 = pfVar5;
      if (1 < (int)uVar1) {
        do {
          fVar14 = fVar14 + (float)(int)*psVar11 * pfVar3[1];
          lVar4 = lVar4 + -1;
          psVar11 = (short *)((long)psVar11 + uVar9);
          pfVar3 = pfVar3 + 1;
        } while (lVar4 != 0);
      }
      *(float *)(param_3 + uVar8 * 4) = fVar14;
      uVar8 = uVar8 + 1;
      psVar7 = psVar7 + 1;
    } while (uVar8 != uVar2);
  }
  return;
}



/* Entry: 109b0296c; end: 109b029a7;  */

void FUN_109b0296c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b029a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b029a8; end: 109b029fb;  */

long * FUN_109b029a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109b029fc; end: 109b02aa3;  */

undefined8 * FUN_109b029fc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24cd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109b02aa4; end: 109b02b4b;  */

void FUN_109b02aa4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24cd8;
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar5 = 0;
    lVar7 = param_1[10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14));
  }
  puVar6 = (undefined8 *)param_1[0xb];
  if (puVar6 != param_1 + 0xc && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109b02b4c; end: 109b02ca7;  */

void FUN_109b02b4c(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  double *pdVar5;
  ulong uVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar2 = *(uint *)(param_1 + 8);
  pdVar5 = *(double **)(param_1 + 0x20);
  uVar3 = param_5 * param_4;
  if ((int)uVar3 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    psVar7 = (short *)(param_2 + (long)(int)param_5 * 2 + 4);
    do {
      psVar10 = (short *)(param_2 + uVar6 * 2);
      dVar14 = *pdVar5;
      dVar11 = dVar14 * (double)(int)*psVar10;
      dVar12 = dVar14 * (double)(int)psVar10[1];
      dVar13 = dVar14 * (double)(int)psVar10[2];
      dVar14 = dVar14 * (double)(int)psVar10[3];
      lVar4 = (ulong)uVar2 - 1;
      psVar10 = psVar7;
      pdVar1 = pdVar5;
      if (1 < (int)uVar2) {
        do {
          dVar15 = pdVar1[1];
          dVar11 = dVar11 + (double)(int)psVar10[-2] * dVar15;
          dVar12 = dVar12 + (double)(int)psVar10[-1] * dVar15;
          dVar13 = dVar13 + (double)(int)*psVar10 * dVar15;
          dVar14 = dVar14 + (double)(int)psVar10[1] * dVar15;
          lVar4 = lVar4 + -1;
          psVar10 = (short *)((long)psVar10 +
                             (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1))
          ;
          pdVar1 = pdVar1 + 1;
        } while (lVar4 != 0);
      }
      pdVar1 = (double *)(param_3 + uVar6 * 8);
      *pdVar1 = dVar11;
      pdVar1[1] = dVar12;
      pdVar1[2] = dVar13;
      pdVar1[3] = dVar14;
      uVar6 = uVar6 + 4;
      psVar7 = psVar7 + 4;
    } while (uVar6 <= uVar3 - 4);
  }
  if ((int)uVar6 < (int)uVar3) {
    uVar8 = uVar6 & 0xffffffff;
    uVar9 = -(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1;
    psVar7 = (short *)(param_2 + uVar9 + (uVar6 & 0xffffffff) * 2);
    do {
      dVar11 = *pdVar5 * (double)(int)*(short *)(param_2 + uVar8 * 2);
      lVar4 = (ulong)uVar2 - 1;
      psVar10 = psVar7;
      pdVar1 = pdVar5;
      if (1 < (int)uVar2) {
        do {
          dVar11 = dVar11 + (double)(int)*psVar10 * pdVar1[1];
          lVar4 = lVar4 + -1;
          psVar10 = (short *)((long)psVar10 + uVar9);
          pdVar1 = pdVar1 + 1;
        } while (lVar4 != 0);
      }
      *(double *)(param_3 + uVar8 * 8) = dVar11;
      uVar8 = uVar8 + 1;
      psVar7 = psVar7 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}



/* Entry: 109b02ca8; end: 109b02ce3;  */

void FUN_109b02ca8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b02ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


