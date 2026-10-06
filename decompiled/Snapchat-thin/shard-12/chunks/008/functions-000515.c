/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097cd448; end: 1097cd4c7;  */

undefined8 * FUN_1097cd448(double param_1,double param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  uint uStack_38;
  uint uStack_34;
  
  lVar13 = *(long *)(param_3 + 0x28);
  if (*(int *)(lVar13 + 0x1b0) == 0) {
    dVar21 = param_2 * *(double *)(lVar13 + 0x130) + param_1 * *(double *)(lVar13 + 0x120);
    dVar20 = param_2 * *(double *)(lVar13 + 0x138) + param_1 * *(double *)(lVar13 + 0x128);
    lVar13 = *(long *)(lVar13 + 0xf0);
    param_1 = dVar20 * *(double *)(lVar13 + 0x78) + dVar21 * *(double *)(lVar13 + 0x68);
    param_2 = dVar20 * *(double *)(lVar13 + 0x80) + dVar21 * *(double *)(lVar13 + 0x70);
  }
  if ((*(byte *)(param_3 + 0x3d8) & 1) == 0) {
    return (undefined8 *)0x4;
  }
  puVar11 = (undefined8 *)(param_3 + 0x3c8);
  uVar2 = *(int *)(param_3 + 0x3d0) + SUB84(param_1 + 26388279066624.0,0);
  uVar3 = *(int *)(param_3 + 0x3d4) + SUB84(param_2 + 26388279066624.0,0);
  uStack_38 = uVar2;
  uStack_34 = uVar3;
  if ((*(byte *)(param_3 + 0x3d8) & 1) == 0) {
    FUN_1097dc6f0(puVar11);
    *(byte *)(param_3 + 0x3d8) = *(byte *)(param_3 + 0x3d8) | 1;
    *(uint *)(param_3 + 0x3d0) = uVar2;
    *(uint *)(param_3 + 0x3d4) = uVar3;
    *puVar11 = *(undefined8 *)(param_3 + 0x3d0);
    return (undefined8 *)0x0;
  }
  puVar10 = puVar11;
  FUN_1097dc9d4();
  if ((int)puVar10 != 0) {
    return (undefined8 *)0x1;
  }
  lVar13 = *(long *)(param_3 + 0x3f8);
  uVar6 = *(int *)(lVar13 + 0x10) - 1;
  cVar5 = *(char *)(*(long *)(lVar13 + 0x20) + (ulong)uVar6);
  if (cVar5 == '\0') goto LAB_1097dc8b0;
  iVar15 = uVar2 - *(int *)(param_3 + 0x3d0);
  if ((iVar15 == 0) && (*(uint *)(param_3 + 0x3d4) == uVar3)) {
    return (undefined8 *)0x0;
  }
  if (cVar5 != '\x01') goto LAB_1097dc8b0;
  uVar4 = *(uint *)(lVar13 + 0x18);
  lVar19 = lVar13;
  uVar8 = uVar4;
  if (uVar4 < 2) {
    lVar19 = *(long *)(lVar13 + 8);
    uVar8 = *(int *)(*(long *)(lVar13 + 8) + 0x18) + uVar4;
  }
  piVar1 = (int *)(*(long *)(lVar19 + 0x28) + (ulong)(uVar8 - 2) * 8);
  iVar7 = *(int *)(param_3 + 0x3d0) - *piVar1;
  if (iVar7 == 0) {
    iVar18 = piVar1[1];
    iVar17 = *(int *)(param_3 + 0x3d4);
    if (iVar18 != iVar17) goto LAB_1097dc880;
  }
  else {
    iVar17 = *(int *)(param_3 + 0x3d4);
    iVar18 = piVar1[1];
LAB_1097dc880:
    if (((long)(iVar17 - iVar18) * (long)iVar15 - (long)(int)(uVar3 - iVar17) * (long)iVar7 != 0) ||
       ((long)iVar7 * (long)iVar15 + (long)(iVar17 - iVar18) * (long)(int)(uVar3 - iVar17) < 0))
    goto LAB_1097dc8b0;
  }
  *(uint *)(lVar13 + 0x18) = uVar4 - 1;
  *(uint *)(lVar13 + 0x10) = uVar6;
LAB_1097dc8b0:
  cVar5 = *(char *)(param_3 + 0x3d8);
  if (((uint)(int)cVar5 >> 4 & 1) != 0) {
    iVar15 = 0x10;
    if ((*(uint *)(param_3 + 0x3d0) != uVar2) &&
       (iVar15 = 0x10, *(uint *)(param_3 + 0x3d4) != uVar3)) {
      iVar15 = 0;
    }
    uVar6 = (iVar15 << 1 | 0xffffffcfU) & (int)cVar5;
    bVar9 = (byte)uVar6;
    bVar16 = 0x40;
    if (((uVar3 | uVar2) & 0xff) != 0) {
      bVar16 = 0;
    }
    bVar16 = bVar16 & (byte)((byte)((uVar6 << 0x1a) >> 0x18) &
                            (byte)((uint)((int)cVar5 << 0x19) >> 0x18)) >> 1;
    *(byte *)(param_3 + 0x3d8) = bVar9 & 0xaf | (byte)iVar15 | bVar16;
    if (cVar5 < 0) {
      if (*(uint *)(param_3 + 0x3d0) == uVar2) {
        bVar12 = 0x80;
        if (*(uint *)(param_3 + 0x3d4) != uVar3) {
          bVar12 = 0;
        }
      }
      else {
        bVar12 = 0;
      }
      *(byte *)(param_3 + 0x3d8) = bVar12 | bVar9 & 0x2f | (byte)iVar15 | bVar16;
    }
  }
  puVar14 = (uint *)(param_3 + 0x3dc);
  *(ulong *)(param_3 + 0x3d0) = CONCAT44(uStack_34,uStack_38);
  if (((int)uStack_38 < (int)*puVar14) ||
     (puVar14 = (uint *)(param_3 + 0x3e4), (int)*puVar14 < (int)uStack_38)) {
    *puVar14 = uStack_38;
  }
  puVar14 = (uint *)(param_3 + 0x3e0);
  if (((int)uVar3 < (int)*puVar14) ||
     (puVar14 = (uint *)(param_3 + 1000), (int)*puVar14 < (int)uVar3)) {
    *puVar14 = uVar3;
  }
  FUN_1097dca94(puVar11,1,&uStack_38,1);
  return puVar11;
}



/* Entry: 1097cd4c8; end: 1097cd653;  */

void FUN_1097cd4c8(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  lVar1 = *(long *)(param_7 + 0x28);
  dStack_50 = param_6;
  dStack_48 = param_5;
  dStack_40 = param_4;
  dStack_38 = param_3;
  dStack_30 = param_2;
  dStack_28 = param_1;
  if (*(int *)(lVar1 + 0x1b0) == 0) {
    FUN_1097d0518(lVar1,&dStack_28,&dStack_30);
    lVar1 = *(long *)(param_7 + 0x28);
    if (*(int *)(lVar1 + 0x1b0) == 0) {
      FUN_1097d0518(lVar1,&dStack_38,&dStack_40);
      lVar1 = *(long *)(param_7 + 0x28);
      if (*(int *)(lVar1 + 0x1b0) == 0) {
        FUN_1097d0518(lVar1,&dStack_48,&dStack_50);
        lVar1 = *(long *)(param_7 + 0x28);
      }
    }
  }
  dVar6 = *(double *)(lVar1 + 0x20);
  dVar2 = 8388607.99609375 - dVar6;
  dVar4 = dStack_28;
  if (dStack_28 < dVar6 + -8388608.0) {
    dVar4 = dVar6 + -8388608.0;
  }
  dVar3 = dVar2;
  if (dStack_28 <= dVar2) {
    dVar3 = dVar4;
  }
  dVar4 = dStack_30;
  if (dStack_30 < dVar6 + -8388608.0) {
    dVar4 = dVar6 + -8388608.0;
  }
  dVar5 = dVar2;
  if (dStack_30 <= dVar2) {
    dVar5 = dVar4;
  }
  dVar4 = dStack_38;
  if (dStack_38 < dVar6 + -8388608.0) {
    dVar4 = dVar6 + -8388608.0;
  }
  dVar7 = dVar2;
  if (dStack_38 <= dVar2) {
    dVar7 = dVar4;
  }
  dVar4 = dStack_40;
  if (dStack_40 < dVar6 + -8388608.0) {
    dVar4 = dVar6 + -8388608.0;
  }
  dVar8 = dVar2;
  if (dStack_40 <= dVar2) {
    dVar8 = dVar4;
  }
  dVar4 = dVar2;
  if ((dStack_48 <= dVar2) && (dVar4 = dStack_48, dStack_48 < dVar6 + -8388608.0)) {
    dVar4 = dVar6 + -8388608.0;
  }
  if ((dStack_50 <= dVar2) && (dVar2 = dStack_50, dStack_50 < dVar6 + -8388608.0)) {
    dVar2 = dVar6 + -8388608.0;
  }
  FUN_1097dcb6c(param_7 + 0x3c8,dVar3 + 26388279066624.0,dVar5 + 26388279066624.0,
                dVar7 + 26388279066624.0,dVar8 + 26388279066624.0,dVar4 + 26388279066624.0,
                dVar2 + 26388279066624.0);
  return;
}



/* Entry: 1097cd654; end: 1097cd71b;  */

undefined8 *
FUN_1097cd654(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  byte bVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  uint *puVar24;
  int *piVar25;
  long lVar26;
  byte bVar27;
  int iVar28;
  int iVar29;
  undefined8 *unaff_x19;
  double unaff_x20;
  double unaff_x21;
  uint *unaff_x22;
  undefined1 *unaff_x23;
  double unaff_x24;
  undefined1 *unaff_x25;
  double unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar30;
  undefined1 *puVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  
  lVar22 = *(long *)(param_7 + 0x28);
  if (*(int *)(lVar22 + 0x1b0) == 0) {
    dVar33 = *(double *)(lVar22 + 0x130);
    dVar34 = *(double *)(lVar22 + 0x138);
    dVar36 = *(double *)(lVar22 + 0x120);
    dVar37 = *(double *)(lVar22 + 0x128);
    dVar35 = param_2 * dVar33 + param_1 * dVar36;
    dVar32 = param_2 * dVar34 + param_1 * dVar37;
    lVar22 = *(long *)(lVar22 + 0xf0);
    dVar38 = *(double *)(lVar22 + 0x78);
    dVar39 = *(double *)(lVar22 + 0x80);
    dVar40 = *(double *)(lVar22 + 0x68);
    dVar41 = *(double *)(lVar22 + 0x70);
    param_1 = dVar32 * dVar38 + dVar35 * dVar40;
    param_2 = dVar32 * dVar39 + dVar35 * dVar41;
    dVar35 = param_4 * dVar33 + param_3 * dVar36;
    dVar32 = param_4 * dVar34 + param_3 * dVar37;
    param_3 = dVar32 * dVar38 + dVar35 * dVar40;
    param_4 = dVar32 * dVar39 + dVar35 * dVar41;
    dVar33 = param_6 * dVar33 + param_5 * dVar36;
    dVar32 = param_6 * dVar34 + param_5 * dVar37;
    param_5 = dVar32 * dVar38 + dVar33 * dVar40;
    param_6 = dVar32 * dVar39 + dVar33 * dVar41;
  }
  param_1 = param_1 + 26388279066624.0;
  puVar30 = (undefined1 *)(param_2 + 26388279066624.0);
  param_3 = param_3 + 26388279066624.0;
  puVar31 = (undefined1 *)(param_4 + 26388279066624.0);
  param_5 = param_5 + 26388279066624.0;
  param_6 = param_6 + 26388279066624.0;
  puVar13 = (undefined1 *)register0x00000008;
  puVar16 = (undefined8 *)(param_7 + 0x3c8);
  do {
    puVar14 = puVar16;
    if ((*(byte *)(puVar14 + 2) & 1) == 0) {
      return (undefined8 *)0x4;
    }
    iVar21 = *(int *)(puVar14 + 1);
    iVar7 = *(int *)((long)puVar14 + 0xc);
    uVar1 = iVar21 + SUB84(param_1,0);
    dVar32 = (double)(ulong)uVar1;
    uVar2 = iVar7 + (int)puVar30;
    puVar18 = (undefined1 *)(ulong)uVar2;
    uVar3 = iVar21 + SUB84(param_3,0);
    dVar33 = (double)(ulong)uVar3;
    uVar4 = iVar7 + (int)puVar31;
    puVar19 = (undefined1 *)(ulong)uVar4;
    uVar5 = iVar21 + SUB84(param_5,0);
    dVar34 = (double)(ulong)uVar5;
    uVar6 = iVar7 + SUB84(param_6,0);
    dVar35 = (double)(ulong)uVar6;
    puVar17 = puVar13 + -0x70;
    *(double *)(puVar13 + -0x50) = unaff_x26;
    *(undefined1 **)(puVar13 + -0x48) = unaff_x25;
    *(double *)(puVar13 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar13 + -0x38) = unaff_x23;
    *(uint **)(puVar13 + -0x30) = unaff_x22;
    *(double *)(puVar13 + -0x28) = unaff_x21;
    *(double *)(puVar13 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = unaff_x29;
    *(code **)(puVar13 + -8) = unaff_x30;
    unaff_x29 = puVar13 + -0x10;
    *(undefined8 *)(puVar13 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22 = (uint *)(puVar14 + 1);
    puVar16 = puVar14;
    param_1 = dVar32;
    puVar30 = puVar18;
    param_3 = dVar33;
    puVar31 = puVar19;
    param_5 = dVar34;
    param_6 = dVar35;
    if (((((*unaff_x22 == uVar5) && (uVar2 == uVar6)) && (uVar4 == uVar6)) &&
        ((uVar1 == uVar5 && (uVar3 == uVar5)))) && (*(uint *)((long)puVar14 + 0xc) == uVar6)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar13 + -0x58)) {
        *(undefined8 *)(puVar13 + -0x30) = *(undefined8 *)(puVar13 + -0x30);
        *(undefined8 *)(puVar13 + -0x28) = *(undefined8 *)(puVar13 + -0x28);
        *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(puVar13 + -0x20);
        *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(puVar13 + -0x18);
        *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(puVar13 + -0x10);
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
        *(uint *)(puVar13 + -0x38) = uVar5;
        *(uint *)(puVar13 + -0x34) = uVar6;
        if ((*(byte *)(puVar14 + 2) & 1) == 0) {
          FUN_1097dc6f0(puVar14);
          *(byte *)(puVar14 + 2) = *(byte *)(puVar14 + 2) | 1;
          *(uint *)(puVar14 + 1) = uVar5;
          *(uint *)((long)puVar14 + 0xc) = uVar6;
          *puVar14 = puVar14[1];
          return (undefined8 *)0x0;
        }
        FUN_1097dc9d4();
        if ((int)puVar16 != 0) {
          return (undefined8 *)0x1;
        }
        lVar22 = puVar14[6];
        uVar1 = *(int *)(lVar22 + 0x10) - 1;
        cVar9 = *(char *)(*(long *)(lVar22 + 0x20) + (ulong)uVar1);
        if (cVar9 == '\0') goto LAB_1097dc8b0;
        iVar21 = uVar5 - *(int *)(puVar14 + 1);
        if ((iVar21 == 0) && (*(uint *)((long)puVar14 + 0xc) == uVar6)) {
          return (undefined8 *)0x0;
        }
        if (cVar9 != '\x01') goto LAB_1097dc8b0;
        uVar2 = *(uint *)(lVar22 + 0x18);
        lVar26 = lVar22;
        uVar3 = uVar2;
        if (uVar2 < 2) {
          lVar26 = *(long *)(lVar22 + 8);
          uVar3 = *(int *)(*(long *)(lVar22 + 8) + 0x18) + uVar2;
        }
        piVar25 = (int *)(*(long *)(lVar26 + 0x28) + (ulong)(uVar3 - 2) * 8);
        iVar7 = *(int *)(puVar14 + 1) - *piVar25;
        if (iVar7 == 0) {
          iVar29 = piVar25[1];
          iVar28 = *(int *)((long)puVar14 + 0xc);
          if (iVar29 != iVar28) goto LAB_1097dc880;
        }
        else {
          iVar28 = *(int *)((long)puVar14 + 0xc);
          iVar29 = piVar25[1];
LAB_1097dc880:
          if (((long)(iVar28 - iVar29) * (long)iVar21 - (long)(int)(uVar6 - iVar28) * (long)iVar7 !=
               0) || ((long)iVar7 * (long)iVar21 +
                      (long)(iVar28 - iVar29) * (long)(int)(uVar6 - iVar28) < 0))
          goto LAB_1097dc8b0;
        }
        *(uint *)(lVar22 + 0x18) = uVar2 - 1;
        *(uint *)(lVar22 + 0x10) = uVar1;
LAB_1097dc8b0:
        cVar9 = *(char *)(puVar14 + 2);
        if (((uint)(int)cVar9 >> 4 & 1) != 0) {
          iVar21 = 0x10;
          if ((*(uint *)(puVar14 + 1) != uVar5) &&
             (iVar21 = 0x10, *(uint *)((long)puVar14 + 0xc) != uVar6)) {
            iVar21 = 0;
          }
          uVar1 = (iVar21 << 1 | 0xffffffcfU) & (int)cVar9;
          bVar12 = (byte)uVar1;
          bVar27 = 0x40;
          if (((uVar6 | uVar5) & 0xff) != 0) {
            bVar27 = 0;
          }
          bVar27 = bVar27 & (byte)((byte)((uVar1 << 0x1a) >> 0x18) &
                                  (byte)((uint)((int)cVar9 << 0x19) >> 0x18)) >> 1;
          *(byte *)(puVar14 + 2) = bVar12 & 0xaf | (byte)iVar21 | bVar27;
          if (cVar9 < 0) {
            if (*(uint *)(puVar14 + 1) == uVar5) {
              bVar20 = 0x80;
              if (*(uint *)((long)puVar14 + 0xc) != uVar6) {
                bVar20 = 0;
              }
            }
            else {
              bVar20 = 0;
            }
            *(byte *)(puVar14 + 2) = bVar20 | bVar12 & 0x2f | (byte)iVar21 | bVar27;
          }
        }
        uVar23 = *(undefined8 *)(puVar13 + -0x38);
        piVar25 = (int *)((long)puVar14 + 0x14);
        puVar14[1] = uVar23;
        iVar21 = (int)uVar23;
        if ((iVar21 < *piVar25) || (piVar25 = (int *)((long)puVar14 + 0x1c), *piVar25 < iVar21)) {
          *piVar25 = iVar21;
        }
        puVar24 = (uint *)(puVar14 + 3);
        if (((int)uVar6 < (int)*puVar24) ||
           (puVar24 = (uint *)(puVar14 + 4), (int)*puVar24 < (int)uVar6)) {
          *puVar24 = uVar6;
        }
        FUN_1097dca94(puVar14,1,puVar13 + -0x38,1);
        return puVar14;
      }
    }
    else {
      if ((*(byte *)(puVar14 + 2) & 1) == 0) {
        FUN_1097dc6f0(puVar14);
        *(byte *)(puVar14 + 2) = *(byte *)(puVar14 + 2) | 1;
        *(uint *)(puVar14 + 1) = uVar1;
        *(uint *)((long)puVar14 + 0xc) = uVar2;
        *puVar14 = puVar14[1];
      }
      puVar15 = puVar14;
      FUN_1097dc9d4();
      if ((int)puVar15 == 0) {
        lVar22 = puVar14[6];
        uVar10 = *(int *)(lVar22 + 0x10) - 1;
        if (*(char *)(*(long *)(lVar22 + 0x20) + (ulong)uVar10) == '\x01') {
          uVar8 = *(uint *)(lVar22 + 0x18);
          lVar26 = lVar22;
          uVar11 = uVar8;
          if (uVar8 < 2) {
            lVar26 = *(long *)(lVar22 + 8);
            uVar11 = *(int *)(*(long *)(lVar22 + 8) + 0x18) + uVar8;
          }
          puVar24 = (uint *)(*(long *)(lVar26 + 0x28) + (ulong)(uVar11 - 2) * 8);
          if ((*puVar24 == *unaff_x22) && (puVar24[1] == *(uint *)((long)puVar14 + 0xc))) {
            *(uint *)(lVar22 + 0x18) = uVar8 - 1;
            *(uint *)(lVar22 + 0x10) = uVar10;
          }
        }
        *(uint *)(puVar13 + -0x70) = uVar1;
        *(uint *)(puVar13 + -0x6c) = uVar2;
        *(uint *)(puVar13 + -0x68) = uVar3;
        *(uint *)(puVar13 + -100) = uVar4;
        *(uint *)(puVar13 + -0x60) = uVar5;
        *(uint *)(puVar13 + -0x5c) = uVar6;
        puVar31 = puVar13 + -0x60;
        func_0x0001097ed684((long)puVar14 + 0x14,unaff_x22,puVar13 + -0x70,puVar13 + -0x68);
        puVar14[1] = *(undefined8 *)(puVar13 + -0x60);
        *(byte *)(puVar14 + 2) = *(byte *)(puVar14 + 2) & 7 | 8;
        param_1 = 9.88131291682493e-324;
        param_3 = 1.48219693752374e-323;
        FUN_1097dca94();
        puVar30 = puVar17;
      }
      else {
        puVar16 = (undefined8 *)0x1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar13 + -0x58)) {
        return puVar16;
      }
    }
    unaff_x30 = FUN_1097dcd6c;
    ___stack_chk_fail();
    puVar13 = puVar13 + -0x70;
    unaff_x19 = puVar14;
    unaff_x20 = dVar35;
    unaff_x21 = dVar34;
    unaff_x23 = puVar19;
    unaff_x24 = dVar33;
    unaff_x25 = puVar18;
    unaff_x26 = dVar32;
  } while( true );
}



/* Entry: 1097cd71c; end: 1097cd837;  */

void FUN_1097cd71c(double param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6,int param_7)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dStack_70;
  double dStack_68;
  
  dStack_70 = param_2;
  dStack_68 = param_1;
  if (param_3 <= 0.0) {
    if (*(int *)(*(long *)(param_6 + 0x28) + 0x1b0) == 0) {
      FUN_1097d0518(*(long *)(param_6 + 0x28),&dStack_68,&dStack_70);
    }
    dVar3 = dStack_68 + 26388279066624.0;
    dVar2 = dStack_70 + 26388279066624.0;
    lVar1 = param_6 + 0x3c8;
    func_0x0001097dc7a0(lVar1,dVar3,dVar2);
    if ((int)lVar1 == 0) {
      func_0x0001097dc7a0(param_6 + 0x3c8,dVar3,dVar2);
    }
  }
  else {
    dVar2 = param_4;
    dVar3 = param_2;
    ___sincos_stret(param_4);
    lVar1 = param_6;
    FUN_1097cd380(param_1 + dVar3 * param_3,param_2 + dVar2 * param_3);
    if ((int)lVar1 == 0) {
      dVar2 = param_5;
      if (param_7 != 0) {
        dVar2 = param_4;
        param_4 = param_5;
      }
      FUN_1097c50e4(param_1,param_2,param_3,dVar2,param_4,param_6,param_7 == 0);
    }
  }
  return;
}



/* Entry: 1097cd838; end: 1097cd8bb;  */

/* WARNING: Removing unreachable block (ram,0x0001097dcb20) */

long FUN_1097cd838(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar4 = param_5;
  FUN_1097cd23c();
  if (((((int)lVar4 != 0) || (lVar4 = param_5, FUN_1097cd448(param_3,0), (int)lVar4 != 0)) ||
      (lVar4 = param_5, FUN_1097cd448(0,param_4), (int)lVar4 != 0)) ||
     (lVar4 = param_5, FUN_1097cd448(-param_3,0), (int)lVar4 != 0)) {
    return lVar4;
  }
  puVar3 = (undefined4 *)(param_5 + 0x3c8);
  if ((*(byte *)(param_5 + 0x3d8) & 1) == 0) {
    return 0;
  }
  func_0x0001097dc7a0(puVar3,*puVar3,*(undefined4 *)(param_5 + 0x3cc));
  if ((int)puVar3 == 0) {
    lVar4 = *(long *)(param_5 + 0x3f8);
    uVar5 = *(int *)(lVar4 + 0x10) - 1;
    if (*(char *)(*(long *)(lVar4 + 0x20) + (ulong)uVar5) == '\x01') {
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
      *(uint *)(lVar4 + 0x10) = uVar5;
    }
    *(byte *)(param_5 + 0x3d8) = *(byte *)(param_5 + 0x3d8) | 2;
    plVar7 = *(long **)(param_5 + 0x3f8);
    uVar2 = *(uint *)(plVar7 + 2);
    uVar5 = uVar2 + 1;
    puVar1 = (uint *)(plVar7 + 3);
    if ((*(uint *)((long)plVar7 + 0x14) < uVar5) || (*(uint *)((long)plVar7 + 0x1c) < *puVar1)) {
      plVar7 = (long *)(ulong)(uVar2 << 1);
      FUN_1097dc370(plVar7,*puVar1 << 1);
      if (plVar7 == (long *)0x0) {
        return 1;
      }
      puVar6 = *(undefined8 **)(param_5 + 0x3f8);
      *(long **)(param_5 + 0x3f8) = plVar7;
      *plVar7 = param_5 + 0x3f0;
      plVar7[1] = (long)puVar6;
      *puVar6 = plVar7;
      uVar2 = *(uint *)(plVar7 + 2);
      uVar5 = uVar2 + 1;
    }
    *(uint *)(plVar7 + 2) = uVar5;
    *(undefined1 *)(plVar7[4] + (ulong)uVar2) = 3;
    return 0;
  }
  return 1;
}



/* Entry: 1097cd8bc; end: 1097cd8e7;  */

void FUN_1097cd8bc(long param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  if ((*(byte *)(param_1 + 0x3d8) >> 2 & 1) == 0) {
    dStack_40 = 0.0;
    dStack_38 = 0.0;
    dStack_50 = 0.0;
    dStack_48 = 0.0;
  }
  else {
    dStack_38 = (double)*(int *)(param_1 + 0x3dc) / 256.0;
    dStack_40 = (double)*(int *)(param_1 + 0x3e0) / 256.0;
    dStack_48 = (double)*(int *)(param_1 + 0x3e4) / 256.0;
    dStack_50 = (double)*(int *)(param_1 + 1000) / 256.0;
    FUN_1097d06e8(*(undefined8 *)(param_1 + 0x28),&dStack_38,&dStack_40,&dStack_48,&dStack_50,0);
  }
  if (param_2 != (double *)0x0) {
    *param_2 = dStack_38;
  }
  if (param_3 != (double *)0x0) {
    *param_3 = dStack_40;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = dStack_48;
  }
  if (param_5 != (double *)0x0) {
    *param_5 = dStack_50;
  }
  return;
}



/* Entry: 1097cd8e8; end: 1097cd93b;  */

undefined8 FUN_1097cd8e8(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x3d8) & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x3d4);
  *param_2 = (double)*(int *)(param_1 + 0x3d0) / 256.0;
  *param_3 = (double)iVar1 / 256.0;
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x1b0) != 0) {
    return 1;
  }
  func_0x0001097d0600();
  return 1;
}



/* Entry: 1097cd93c; end: 1097cd96b;  */

/* WARNING: Removing unreachable block (ram,0x0001097e3b10) */
/* WARNING: Removing unreachable block (ram,0x0001097e3b38) */
/* WARNING: Removing unreachable block (ram,0x0001097e3bd4) */
/* WARNING: Removing unreachable block (ram,0x0001097e3c84) */
/* WARNING: Removing unreachable block (ram,0x0001097e3bdc) */
/* WARNING: Removing unreachable block (ram,0x0001097e3bec) */

undefined4 * FUN_1097cd93c(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uStack_50;
  long lStack_48;
  long lVar6;
  
  lVar6 = param_1 + 0x3c8;
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0x18);
  if (puVar4 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 4) == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x108))(param_1);
    }
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    uVar7 = 0;
    plVar8 = (long *)(param_1 + 0x3f0);
    do {
      uVar9 = (ulong)*(uint *)(plVar8 + 2);
      if (*(uint *)(plVar8 + 2) != 0) {
        pcVar10 = (char *)plVar8[4];
        do {
          cVar2 = *pcVar10;
          if (cVar2 == '\x02') {
            uVar7 = uVar7 + 4;
          }
          else {
            if ((cVar2 == '\x01') || (cVar2 == '\0')) {
              uVar7 = uVar7 + 2;
            }
            else {
              uVar7 = uVar7 + 1;
            }
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
          }
          uVar9 = uVar9 - 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar9 != 0);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)(param_1 + 0x3f0));
    uVar1 = uVar7 + 2;
    if (((*(byte *)(param_1 + 0x3d8) ^ 0xff) & 3) != 0) {
      uVar1 = uVar7;
    }
    puVar4[4] = uVar1;
    if (-1 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar3 = 0;
LAB_1097e3c5c:
        *puVar4 = uVar3;
        return puVar4;
      }
      lVar5 = (ulong)uVar1 << 4;
      _malloc();
      *(long *)(puVar4 + 2) = lVar5;
      if (lVar5 != 0) {
        uStack_50 = lVar5;
        lStack_48 = param_1;
        FUN_1097dce2c(lVar6,FUN_1097e3dc0,0x1097e3e30,FUN_1097e3ec4,FUN_1097e3ea0,&uStack_50);
        uVar3 = (undefined4)lVar6;
        goto LAB_1097e3c5c;
      }
    }
    _free(puVar4);
  }
  return (undefined4 *)&UNK_10dffe570;
}



/* Entry: 1097cd96c; end: 1097cda1f;  */

undefined8 FUN_1097cd96c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar3 + 0xe8);
  FUN_1097ca578(*(undefined8 *)(lVar3 + 0x10),uVar1,(undefined8 *)(param_1 + 0x3c8),
                *(undefined4 *)(lVar3 + 0x60),*(undefined4 *)(lVar3 + 0x18));
  *(undefined8 *)(lVar3 + 0xe8) = uVar1;
  lVar3 = param_1 + 0x3f0;
  plVar2 = *(long **)(param_1 + 0x3f0);
  while (plVar2 != (long *)lVar3) {
    plVar2 = (long *)*plVar2;
    _free();
  }
  *(long *)(param_1 + 0x3f0) = lVar3;
  *(long *)(param_1 + 0x3f8) = lVar3;
  *(undefined8 *)(param_1 + 0x408) = 0x3600000000;
  *(undefined8 *)(param_1 + 0x400) = 0x1b00000000;
  *(long *)(param_1 + 0x410) = param_1 + 0x420;
  *(long *)(param_1 + 0x418) = param_1 + 0x43c;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3d8) = 0xf2;
  *(undefined8 *)(param_1 + 0x3e4) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  return 0;
}



/* Entry: 1097cda20; end: 1097cda8b;  */

undefined8 FUN_1097cda20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar2 + 0xe8);
  FUN_1097ca578(*(undefined8 *)(lVar2 + 0x10),uVar1,param_1 + 0x3c8,*(undefined4 *)(lVar2 + 0x60),
                *(undefined4 *)(lVar2 + 0x18));
  *(undefined8 *)(lVar2 + 0xe8) = uVar1;
  return 0;
}



/* Entry: 1097cda8c; end: 1097cdae3;  */

undefined8
FUN_1097cda8c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  FUN_1097d17f8();
  if (iVar1 == 0) {
    *param_2 = 0xfff0000000000000;
    *param_3 = 0xfff0000000000000;
    *param_4 = 0x7ff0000000000000;
    *param_5 = 0x7ff0000000000000;
  }
  return 0;
}



/* Entry: 1097cdae4; end: 1097cdb0f;  */

undefined8 FUN_1097cdae4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_1097ca284(*(undefined8 *)(lVar1 + 0xe8));
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  return 0;
}



/* Entry: 1097cdb10; end: 1097cdb1f;  */

long FUN_1097cdb10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0xf0);
  func_0x0001097f6fa4(uVar2,auStack_40);
  lVar4 = *(long *)(lVar1 + 0xe8);
  if ((int)uVar2 != 0) {
    FUN_1097ca2ec();
    FUN_1097c9b90();
  }
  lVar3 = lVar4;
  FUN_1097cb00c(lVar4,lVar1);
  if (lVar4 != *(long *)(lVar1 + 0xe8)) {
    FUN_1097ca284(lVar4);
  }
  return lVar3;
}



/* Entry: 1097cdb20; end: 1097cdc13;  */

uint * FUN_1097cdb20(double param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined auStack_160 [112];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
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
  
  if (0.9961089494163424 <= param_1) {
    piVar1 = *(int **)(param_2 + 0x28);
    puVar6 = auStack_160;
    lVar4 = *(long *)(piVar1 + 0x6e);
    if ((*(int *)(lVar4 + 0x30) == 4) && (*(long *)(lVar4 + 0x98) != 0)) {
      puVar3 = (uint *)0x24;
    }
    else {
      puVar3 = (uint *)(ulong)*(uint *)(lVar4 + 4);
      if (*(uint *)(lVar4 + 4) == 0) {
        if ((*piVar1 == 6) || (lVar5 = *(long *)(piVar1 + 0x3a), lVar5 == 0x11386a1e0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          piVar2 = piVar1;
          FUN_1097d098c();
          if ((int)piVar2 == 0) {
            puVar6 = &UNK_10dffe668;
          }
          else {
            FUN_1097d27a8(piVar1,auStack_160,lVar4,piVar1 + 0x60);
            lVar5 = *(long *)(piVar1 + 0x3a);
          }
          puVar3 = *(uint **)(piVar1 + 0x3c);
          FUN_1097f67b0(puVar3,piVar2,puVar6,lVar5);
        }
      }
    }
    return puVar3;
  }
  puVar3 = *(uint **)(param_2 + 0x28);
  if (((0.0 < param_1) || (0x1c < *puVar3)) || ((0x1ffffae7U >> (ulong)(*puVar3 & 0x1f) & 1) == 0))
  {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    dStack_d8 = param_1;
    FUN_1097cb1e0(&uStack_f0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0x18;
    uStack_90 = 3;
    uStack_98 = 0x100000000;
    uStack_88 = 0x100000000;
    uStack_80 = 0x3ff0000000000000;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x3ff0000000000000;
    uStack_60 = 0;
    uStack_58 = 0;
    ppppuStack_a8 = &ppppuStack_a8;
    uStack_b0 = 0;
    uStack_50 = 0x3ff0000000000000;
    uStack_48 = uStack_f0;
    ppppuStack_a0 = ppppuStack_a8;
    FUN_1097d0a24(puVar3,&uStack_c8);
    func_0x0001097e434c(&uStack_c8);
  }
  else {
    puVar3 = (uint *)0x0;
  }
  return puVar3;
}



/* Entry: 1097cdc14; end: 1097cdc1b;  */

void FUN_1097cdc14(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  double *pdVar8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  undefined1 auStack_290 [48];
  int iStack_260;
  int iStack_254;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
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
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  if (((((*(int *)(param_2 + 0x30) != 4) || (*(long *)(param_2 + 0x98) == 0)) &&
       (*(int *)(param_2 + 4) == 0)) &&
      ((lVar4 = *(long *)(puVar2 + 0x6e), *(int *)(lVar4 + 0x30) != 4 ||
       (*(long *)(lVar4 + 0x98) == 0)))) &&
     ((*(int *)(lVar4 + 4) == 0 && ((*puVar2 != 6 && (*(long *)(puVar2 + 0x3a) != 0x11386a1e0))))))
  {
    lVar4 = param_2;
    FUN_1097e59e8(param_2,0);
    if ((int)lVar4 != 0) {
      puVar7 = auStack_160;
      lVar4 = *(long *)(puVar2 + 0x6e);
      if ((((*(int *)(lVar4 + 0x30) != 4) || (*(long *)(lVar4 + 0x98) == 0)) &&
          (*(int *)(lVar4 + 4) == 0)) &&
         ((*puVar2 != 6 && (lVar5 = *(long *)(puVar2 + 0x3a), lVar5 != 0x11386a1e0)))) {
        puVar3 = puVar2;
        FUN_1097d098c();
        if ((int)puVar3 == 0) {
          puVar7 = (undefined4 *)&UNK_10dffe668;
        }
        else {
          FUN_1097d27a8(puVar2,auStack_160,lVar4,puVar2 + 0x60);
          lVar5 = *(long *)(puVar2 + 0x3a);
        }
        FUN_1097f67b0(*(undefined8 *)(puVar2 + 0x3c),puVar3,puVar7,lVar5);
      }
      return;
    }
    lVar4 = param_2;
    FUN_1097e5818();
    if ((((int)lVar4 == 0) || (0x1c < *puVar2)) ||
       ((0x1ffffae7U >> (ulong)(*puVar2 & 0x1f) & 1) == 0)) {
      pdVar8 = &dStack_f0;
      puVar3 = puVar2;
      FUN_1097d098c();
      uVar1 = (uint)puVar3;
      if (uVar1 == 0) {
        puVar6 = (undefined8 *)&UNK_10dffe668;
        pdVar8 = (double *)&UNK_10dffe6e8;
      }
      else {
        puVar6 = &uStack_170;
        FUN_1097d27a8(puVar2,&uStack_170,*(undefined8 *)(puVar2 + 0x6e),puVar2 + 0x60);
      }
      FUN_1097d27a8(puVar2,auStack_290,param_2,puVar2 + 0x54);
      if (((*(int *)(puVar6 + 6) == 0) && (*(int *)(puVar6 + 8) == 0 && iStack_260 == 0)) &&
         ((uVar1 - 0xb < 0x12 || ((uVar1 < 10 && ((1 << (ulong)(uVar1 & 0x1f) & 0x2e4U) != 0)))))) {
        if (iStack_254 == 0) {
          dStack_2b8 = pdVar8[1];
          dStack_2c0 = *pdVar8;
          dStack_2b0 = pdVar8[2];
          dStack_2a0 = pdVar8[4];
          dStack_2a8 = dStack_1f8 * pdVar8[3];
          FUN_1097cb1e0(&dStack_2c0);
        }
        else {
          dStack_2c0 = (double)puVar6[0x10] * dStack_210;
          dStack_2b8 = (double)puVar6[0x11] * dStack_208;
          dStack_2b0 = pdVar8[2] * dStack_200;
          dStack_2a8 = pdVar8[3] * dStack_1f8;
        }
        uStack_170 = 0;
        uStack_168 = 0;
        auStack_160[0] = 0x18;
        uStack_100 = 0;
        uStack_f8 = 0x3ff0000000000000;
        uStack_138 = 3;
        uStack_140 = 0x100000000;
        uStack_130 = 0x100000000;
        uStack_128 = 0x3ff0000000000000;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0x3ff0000000000000;
        uStack_108 = 0;
        pppuStack_150 = &pppuStack_150;
        uStack_158 = 0;
        dStack_d0 = dStack_2a0;
        dStack_e8 = dStack_2b8;
        dStack_f0 = dStack_2c0;
        dStack_d8 = dStack_2a8;
        dStack_e0 = dStack_2b0;
        pppuStack_148 = pppuStack_150;
        FUN_1097f67b0(*(undefined8 *)(puVar2 + 0x3c),puVar3,&uStack_170,
                      *(undefined8 *)(puVar2 + 0x3a));
      }
      else {
        FUN_1097f72c4(*(undefined8 *)(puVar2 + 0x3c),puVar3,puVar6,auStack_290,
                      *(undefined8 *)(puVar2 + 0x3a));
      }
    }
  }
  return;
}



/* Entry: 1097cdc1c; end: 1097cdcc3;  */

undefined8 FUN_1097cdc1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1097d0c8c(uVar2,param_1 + 0x3c8);
  if ((int)uVar2 == 0) {
    lVar1 = param_1 + 0x3f0;
    plVar3 = *(long **)(param_1 + 0x3f0);
    while (plVar3 != (long *)lVar1) {
      plVar3 = (long *)*plVar3;
      _free();
    }
    *(long *)(param_1 + 0x3f0) = lVar1;
    *(long *)(param_1 + 0x3f8) = lVar1;
    *(undefined8 *)(param_1 + 0x408) = 0x3600000000;
    *(undefined8 *)(param_1 + 0x400) = 0x1b00000000;
    *(long *)(param_1 + 0x410) = param_1 + 0x420;
    *(long *)(param_1 + 0x418) = param_1 + 0x43c;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined1 *)(param_1 + 0x3d8) = 0xf2;
    *(undefined8 *)(param_1 + 0x3e4) = 0;
    *(undefined8 *)(param_1 + 0x3dc) = 0;
  }
  return uVar2;
}



/* Entry: 1097cdcc4; end: 1097cdd07;  */

ulong FUN_1097cdcc4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  double *pdVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uStack_568;
  undefined8 uStack_564;
  undefined8 uStack_55c;
  undefined8 *puStack_550;
  undefined4 uStack_548;
  undefined1 uStack_544;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  undefined1 auStack_530 [640];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_188 [72];
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar12 = (undefined4)((ulong)param_1 >> 0x20);
  uVar11 = (undefined4)param_1;
  puVar6 = *(uint **)(param_3 + 0x28);
  uVar5 = param_3 + 0x3c8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar6 + 0x6e);
  if ((*(int *)(lVar7 + 0x30) == 4) && (*(long *)(lVar7 + 0x98) != 0)) {
    uVar3 = 0x24;
  }
  else {
    uVar3 = (ulong)*(uint *)(lVar7 + 4);
    if (*(uint *)(lVar7 + 4) == 0) {
      if (*puVar6 != 6) {
        pdVar8 = (double *)(puVar6 + 8);
        dVar1 = *pdVar8;
        uVar11 = SUB84(dVar1,0);
        uVar12 = (undefined4)((ulong)dVar1 >> 0x20);
        if (((0.0 < dVar1) || (puVar6[0x14] != 0)) && (*(long *)(puVar6 + 0x3a) != 0x11386a1e0)) {
          lVar9 = *(long *)(puVar6 + 0x3c);
          func_0x0001097d92b4(auStack_200,puVar6 + 0x48,lVar9 + 0x68);
          func_0x0001097d92b4(auStack_230,lVar9 + 0x98,puVar6 + 0x54);
          uStack_1c8 = *(undefined8 *)(puVar6 + 10);
          dStack_1d0 = *pdVar8;
          puStack_1b8 = *(undefined1 **)(puVar6 + 0xe);
          uStack_1c0 = *(undefined8 *)(puVar6 + 0xc);
          uStack_1a8 = *(undefined8 *)(puVar6 + 0x12);
          uStack_1b0 = *(undefined8 *)(puVar6 + 0x10);
          uStack_198 = *(undefined8 *)(puVar6 + 0x16);
          param_2 = *(double *)(puVar6 + 0x14);
          uVar15 = *(undefined8 *)(puVar6 + 4);
          pdVar4 = pdVar8;
          dStack_1a0 = param_2;
          FUN_1097f4148((int)uVar15,pdVar8,auStack_200);
          if ((int)pdVar4 != 0) {
            puStack_1b8 = auStack_68;
            FUN_1097f41ac((int)uVar15,pdVar8,puVar6 + 0x48,&uStack_1a8,auStack_68,&uStack_1b0);
            lVar7 = *(long *)(puVar6 + 0x6e);
          }
          FUN_1097d27a8(puVar6,auStack_188,lVar7,puVar6 + 0x60);
          uVar5 = (ulong)*puVar6;
          uVar11 = (undefined4)*(undefined8 *)(puVar6 + 4);
          uVar12 = (undefined4)((ulong)*(undefined8 *)(puVar6 + 4) >> 0x20);
          uVar3 = *(ulong *)(puVar6 + 0x3c);
          param_5 = auStack_188;
          FUN_1097f782c();
          goto LAB_1097d0dd8;
        }
      }
      uVar3 = 0;
    }
  }
LAB_1097d0dd8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  dVar1 = (double)CONCAT44(uVar12,uVar11);
  pdVar8 = (double *)(uVar3 + 0x20);
  if (0.0 < *pdVar8) {
    if (*(int *)(uVar3 + 0x1b0) == 0) {
      dVar2 = param_2 * *(double *)(uVar3 + 0x130) +
              (double)CONCAT44(uVar12,uVar11) * *(double *)(uVar3 + 0x120) +
              *(double *)(uVar3 + 0x140);
      dVar14 = *(double *)(uVar3 + 0x148) +
               param_2 * *(double *)(uVar3 + 0x138) +
               (double)CONCAT44(uVar12,uVar11) * *(double *)(uVar3 + 0x128);
      lVar7 = *(long *)(uVar3 + 0xf0);
      dVar1 = *(double *)(lVar7 + 0x78) * dVar14 + *(double *)(lVar7 + 0x68) * dVar2 +
              *(double *)(lVar7 + 0x88);
      param_2 = *(double *)(lVar7 + 0x80) * dVar14 + *(double *)(lVar7 + 0x70) * dVar2 +
                *(double *)(lVar7 + 0x90);
    }
    else {
      lVar7 = *(long *)(uVar3 + 0xf0);
    }
    FUN_1097db8d8(uVar5,pdVar8,uVar3 + 0x120,*(byte *)(lVar7 + 0x30) >> 5 & 1,&iStack_2a0);
    if ((((double)iStack_2a0 <= dVar1) && (dVar1 <= (double)(iStack_298 + iStack_2a0))) &&
       (((double)iStack_29c <= param_2 && (param_2 <= (double)(iStack_294 + iStack_29c))))) {
      iVar13 = SUB84(param_2 + 26388279066624.0,0);
      iVar10 = SUB84(dVar1 + 26388279066624.0,0);
      uStack_55c = CONCAT44(iVar13 + 1,iVar10 + 1);
      uStack_564 = CONCAT44(iVar13 + -1,iVar10 + -1);
      uStack_568 = 0;
      uStack_540 = 0x1000000000;
      uStack_544 = 1;
      puStack_550 = &uStack_2b0;
      uStack_548 = 1;
      puStack_538 = auStack_530;
      uStack_2b0 = uStack_564;
      uStack_2a8 = uStack_55c;
      FUN_1097e2a70((int)*(undefined8 *)(uVar3 + 0x10),uVar5,pdVar8,uVar3 + 0x120,uVar3 + 0x150,
                    &uStack_568);
      if ((int)uVar5 == 0) {
        uVar11 = SUB84(&uStack_568,0);
        func_0x0001097ff89c(SUB84(dVar1,0),param_2);
        *param_5 = uVar11;
      }
      if (puStack_538 == auStack_530) {
        return uVar5;
      }
      _free();
      return uVar5;
    }
  }
  *param_5 = 0;
  return 0;
}



/* Entry: 1097cdd08; end: 1097cddaf;  */

undefined8 FUN_1097cdd08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1097d0fe8(uVar2,param_1 + 0x3c8);
  if ((int)uVar2 == 0) {
    lVar1 = param_1 + 0x3f0;
    plVar3 = *(long **)(param_1 + 0x3f0);
    while (plVar3 != (long *)lVar1) {
      plVar3 = (long *)*plVar3;
      _free();
    }
    *(long *)(param_1 + 0x3f0) = lVar1;
    *(long *)(param_1 + 0x3f8) = lVar1;
    *(undefined8 *)(param_1 + 0x408) = 0x3600000000;
    *(undefined8 *)(param_1 + 0x400) = 0x1b00000000;
    *(long *)(param_1 + 0x410) = param_1 + 0x420;
    *(long *)(param_1 + 0x418) = param_1 + 0x43c;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined1 *)(param_1 + 0x3d8) = 0xf2;
    *(undefined8 *)(param_1 + 0x3e4) = 0;
    *(undefined8 *)(param_1 + 0x3dc) = 0;
  }
  return uVar2;
}



/* Entry: 1097cddb0; end: 1097cddbf;  */

/* WARNING: Removing unreachable block (ram,0x0001097f6804) */
/* WARNING: Removing unreachable block (ram,0x0001097f6810) */
/* WARNING: Removing unreachable block (ram,0x0001097f68e8) */
/* WARNING: Removing unreachable block (ram,0x0001097f6858) */
/* WARNING: Removing unreachable block (ram,0x0001097f6860) */

long * FUN_1097cddb0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  uint *puVar10;
  undefined *puVar11;
  long lVar12;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined auStack_160 [288];
  
  puVar10 = *(uint **)(param_1 + 0x28);
  lVar1 = param_1 + 0x3c8;
  lVar12 = *(long *)(puVar10 + 0x6e);
  if ((*(int *)(lVar12 + 0x30) == 4) && (*(long *)(lVar12 + 0x98) != 0)) {
    plVar4 = (long *)0x24;
  }
  else {
    plVar4 = (long *)(ulong)*(uint *)(lVar12 + 4);
    if (*(uint *)(lVar12 + 4) == 0) {
      uVar3 = *puVar10;
      if ((uVar3 != 6) && (lVar8 = *(long *)(puVar10 + 0x3a), lVar8 != 0x11386a1e0)) {
        if (-1 < *(char *)(param_1 + 0x3d8)) {
          puVar5 = puVar10;
          FUN_1097d098c();
          if ((int)puVar5 == 0) {
            puVar11 = &UNK_10dffe668;
          }
          else {
            puVar11 = auStack_160;
            FUN_1097d27a8(puVar10,auStack_160,lVar12,puVar10 + 0x60);
          }
          uVar6 = *(undefined8 *)(puVar10 + 0x3c);
          func_0x0001097f6fa4(uVar6,&iStack_170);
          if ((((((int)uVar6 != 0) &&
                (lVar12 = lVar1, FUN_1097dd72c(lVar1,&iStack_180), (int)lVar12 != 0)) &&
               (iStack_180 <= iStack_170 * 0x100)) &&
              ((iStack_17c <= iStack_16c * 0x100 &&
               ((iStack_168 + iStack_170) * 0x100 <= iStack_178)))) &&
             ((iStack_164 + iStack_16c) * 0x100 <= iStack_174)) {
            plVar4 = *(long **)(puVar10 + 0x3c);
            FUN_1097f67b0(plVar4,puVar5,puVar11,*(undefined8 *)(puVar10 + 0x3a));
            return plVar4;
          }
          plVar4 = *(long **)(puVar10 + 0x3c);
          FUN_1097f76c8(*(undefined8 *)(puVar10 + 4),plVar4,puVar5,puVar11,lVar1,puVar10[0x18],
                        puVar10[6],*(undefined8 *)(puVar10 + 0x3a));
          return plVar4;
        }
        if ((0x1c < uVar3) || ((0x1ffffaa7U >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
          plVar7 = *(long **)(puVar10 + 0x3c);
          plVar4 = (long *)(ulong)*(uint *)((long)plVar7 + 0x1c);
          if (*(uint *)((long)plVar7 + 0x1c) == 0) {
            if ((*(byte *)(plVar7 + 6) >> 1 & 1) != 0) {
              uVar3 = 0xc;
LAB_1097f68cc:
              uVar2 = 0;
              if (uVar3 != 0x66) {
                uVar2 = uVar3;
              }
              if (0xffffffd3 < uVar2 - 0x2d) {
                _pthread_mutex_lock(0x1132e0448);
                if (*(int *)((long)plVar7 + 0x1c) == 0) {
                  *(uint *)((long)plVar7 + 0x1c) = uVar2;
                }
                _pthread_mutex_unlock(0x1132e0448);
              }
              return (long *)(ulong)uVar2;
            }
            if ((lVar8 == 0x11386a1e0) ||
               (plVar4 = plVar7, func_0x0001097f7240(plVar7,0,&UNK_10dffe668), (int)plVar4 != 0)) {
              plVar4 = (long *)0x0;
            }
            else {
              plVar4 = plVar7;
              FUN_1097f6378(plVar7,1);
              if ((int)plVar4 == 0) {
                plVar4 = plVar7;
                (**(code **)(*plVar7 + 0x88))(plVar7,0,&UNK_10dffe668,lVar8);
                uVar3 = (uint)plVar4;
                if ((lVar8 == 0) || (uVar3 != 0x66)) {
                  bVar9 = 4;
                  if (lVar8 != 0) {
                    bVar9 = 0;
                  }
                  *(byte *)(plVar7 + 6) = *(byte *)(plVar7 + 6) & 0xfb | bVar9;
                  *(int *)((long)plVar7 + 0x24) = *(int *)((long)plVar7 + 0x24) + 1;
                }
                goto LAB_1097f68cc;
              }
            }
          }
          return plVar4;
        }
      }
      plVar4 = (long *)0x0;
    }
  }
  return plVar4;
}



/* Entry: 1097cddc0; end: 1097cddf3;  */

undefined8 FUN_1097cddc0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1097d1188(uVar1,param_1 + 0x3c8);
  *param_2 = (int)uVar1;
  return 0;
}



/* Entry: 1097cddf4; end: 1097cde1b;  */

int * FUN_1097cddf4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  undefined1 **ppuVar4;
  undefined4 auStack_318 [8];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 **ppuStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 ***pppuStack_2d0;
  undefined1 auStack_2c8 [616];
  undefined1 auStack_60 [16];
  
  lVar2 = *(long *)(param_1 + 0x28);
  piVar3 = (int *)(param_1 + 0x3c8);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x3d8);
  if ((char)bVar1 < '\0') {
    piVar3 = (int *)0x0;
  }
  else {
    if (((bVar1 >> 5 & 1) == 0) ||
       ((((bVar1 & 3) == 1 && (*(int *)(param_1 + 0x3d0) != *piVar3)) &&
        (*(int *)(param_1 + 0x3d4) != *(int *)(param_1 + 0x3cc))))) {
      uStack_2f0 = 0x1000000000;
      auStack_318[0] = 0;
      uStack_2f8 = CONCAT35((int3)((ulong)uStack_2f8 >> 0x28),0x100000000);
      ppuStack_2e8 = &puStack_2e0;
      FUN_1097dbec8(*(undefined8 *)(lVar2 + 0x10),piVar3,*(undefined4 *)(lVar2 + 0x60),auStack_318);
      if ((int)uStack_2f0 == 0) {
        if (ppuStack_2e8 == &puStack_2e0) {
          return piVar3;
        }
        _free();
        return piVar3;
      }
      FUN_1097ff984(auStack_318,auStack_60);
      if (ppuStack_2e8 != &puStack_2e0) {
        _free();
      }
    }
    else {
      auStack_318[0] = 0;
      uStack_2f8 = 0;
      pppuStack_2d0 = &ppuStack_2e8;
      puStack_2e0 = auStack_2c8;
      ppuStack_2e8 = (undefined1 **)0x0;
      uStack_2d8 = 0x2000000000;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,1);
      FUN_1097dbfa4(piVar3,*(undefined4 *)(lVar2 + 0x60),*(undefined4 *)(lVar2 + 0x18),auStack_318);
      ppuVar4 = ppuStack_2e8;
      if (uStack_2f8._4_4_ == 0) {
        while (ppuVar4 != (undefined1 **)0x0) {
          ppuVar4 = (undefined1 **)*ppuVar4;
          _free();
        }
        return piVar3;
      }
      FUN_1097c9114(auStack_318,auStack_60);
      ppuVar4 = ppuStack_2e8;
      while (ppuVar4 != (undefined1 **)0x0) {
        ppuVar4 = (undefined1 **)*ppuVar4;
        _free();
      }
    }
    FUN_1097d1574(lVar2,auStack_60,param_2,param_3,param_4,param_5);
  }
  return piVar3;
}



/* Entry: 1097cde1c; end: 1097cde53;  */

undefined * FUN_1097cde1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = lVar3;
  func_0x0001097d1b00();
  if ((int)lVar1 == 0) {
    puVar2 = *(undefined **)(lVar3 + 0x68);
  }
  else {
    puVar2 = &UNK_10dffe298;
  }
  return puVar2;
}



/* Entry: 1097cde54; end: 1097cde7b;  */

undefined8 FUN_1097cde54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  lVar2 = *(long *)(lVar1 + 0x70);
  if (lVar2 != 0) {
    if (*(long *)(lVar1 + 0x78) != 0) {
      FUN_1097ef278(*(long *)(lVar1 + 0x78),0);
      lVar2 = *(long *)(lVar1 + 0x70);
    }
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(long *)(lVar1 + 0x78) = lVar2;
  }
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  return 0;
}



/* Entry: 1097cde7c; end: 1097cde97;  */

undefined8 FUN_1097cde7c(long param_1)

{
  func_0x0001097d1a54(*(undefined8 *)(param_1 + 0x28));
  return 0;
}



/* Entry: 1097cde98; end: 1097cde9f;  */

void FUN_1097cde98(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  _free(param_2[3]);
  _free(param_2[5]);
  uVar4 = *(undefined8 *)(lVar2 + 0xb0);
  param_2[1] = *(undefined8 *)(lVar2 + 0xb8);
  *param_2 = uVar4;
  param_2[2] = *(undefined8 *)(lVar2 + 0xc0);
  lVar3 = *(long *)(lVar2 + 200);
  if (lVar3 != 0) {
    _strdup();
  }
  param_2[3] = lVar3;
  param_2[4] = *(undefined8 *)(lVar2 + 0xd0);
  uVar1 = *(uint *)(lVar2 + 0xe0);
  *(uint *)(param_2 + 6) = uVar1;
  param_2[5] = 0;
  if (*(long *)(lVar2 + 0xd8) != 0) {
    lVar2 = (ulong)uVar1 * 0x28;
    _malloc();
    param_2[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  return;
}



/* Entry: 1097cdea0; end: 1097cdf27;  */

void FUN_1097cdea0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x70) != param_2) {
    lVar3 = *(long *)(lVar1 + 0x78);
    func_0x0001097d1bec(lVar1,*(undefined8 *)(param_2 + 0x30));
    if ((int)lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x0001097d19ec(uVar2,param_2 + 0x38);
      if (((int)uVar2 == 0) &&
         (func_0x0001097d1a54(*(undefined8 *)(param_1 + 0x28),param_2 + 0x98), lVar3 == param_2)) {
        func_0x0001097efce0(param_2);
        *(long *)(*(long *)(param_1 + 0x28) + 0x70) = param_2;
      }
    }
  }
  return;
}



/* Entry: 1097cdf28; end: 1097cdfc3;  */

undefined * FUN_1097cdf28(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar2 = uVar3;
  func_0x0001097d1b50();
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    return *(undefined **)(uVar3 + 0x70);
  }
  if (iVar1 == 1) {
    puVar4 = &UNK_10dffea20;
  }
  else {
    _pthread_mutex_lock(0x1132e03c8);
    puVar4 = *(undefined **)((uVar2 & 0xffffffff) * 8 + 0x11382af88);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x1;
      _calloc(1,0x230);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &UNK_10dffea20;
      }
      else {
        _memcpy();
        *(int *)(puVar4 + 8) = iVar1;
        *(undefined **)((uVar2 & 0xffffffff) * 8 + 0x11382af88) = puVar4;
      }
    }
    _pthread_mutex_unlock(0x1132e03c8);
  }
  return puVar4;
}



/* Entry: 1097cdfc4; end: 1097cdfe3;  */

/* WARNING: Type propagation algorithm not settling */

double *******
FUN_1097cdfc4(long param_1,double *******param_2,double *******param_3,long *param_4,ulong param_5,
             double *******param_6,double *******param_7,double *******param_8)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double *******pppppppdVar8;
  double *******pppppppdVar9;
  double *******pppppppdVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  double *******pppppppdVar13;
  double *******pppppppdVar14;
  uint uVar15;
  double *******pppppppdVar16;
  long *plVar17;
  double ******ppppppdVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  double *******pppppppdVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double ******ppppppdVar31;
  double dVar32;
  double ******ppppppdVar33;
  double dVar34;
  double dVar35;
  double *****pppppdVar36;
  double *****pppppdVar37;
  double dVar38;
  double ******ppppppdVar39;
  double dVar40;
  double ******ppppppdVar41;
  double *****pppppdVar42;
  double *****pppppdVar43;
  double dVar44;
  double dVar45;
  int iStack_1430;
  int iStack_142c;
  int iStack_1428;
  int iStack_1424;
  double *******pppppppdStack_13c0;
  int iStack_13b8;
  double ******appppppdStack_13a0 [36];
  uint uStack_127c;
  long lStack_1278;
  undefined8 uStack_1270;
  undefined1 uStack_1268;
  undefined8 uStack_1264;
  undefined8 uStack_125c;
  double *******pppppppdStack_1250;
  double *******pppppppdStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined1 *puStack_1230;
  undefined1 *puStack_1228;
  undefined1 auStack_1220 [28];
  undefined1 auStack_1204 [436];
  double ******appppppdStack_1050 [256];
  double ******appppppdStack_850 [255];
  long lStack_58;
  
  pppppppdVar8 = *(double ********)(param_1 + 0x28);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppdVar12 = appppppdStack_1050;
  pppppppdVar13 = appppppdStack_1050;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (uint)param_3;
  ppppppdVar18 = pppppppdVar8[0x37];
  pppppppdVar11 = param_2;
  pppppppdVar9 = pppppppdVar8;
  pppppppdVar16 = param_3;
  plVar17 = param_4;
  uStack_127c = uVar15;
  if ((*(int *)(ppppppdVar18 + 6) == 4) && (ppppppdVar18[0x13] != (double *****)0x0)) {
    pppppppdVar26 = (double *******)0x24;
  }
  else {
    pppppppdVar26 = (double *******)(ulong)*(uint *)((long)ppppppdVar18 + 4);
    if (*(uint *)((long)ppppppdVar18 + 4) == 0) {
      if ((*(int *)pppppppdVar8 == 6) || (pppppppdVar8[0x1d] == (double ******)0x11386a1e0)) {
        pppppppdVar26 = (double *******)0x0;
      }
      else {
        func_0x0001097d1b50();
        pppppppdVar26 = pppppppdVar9;
        if ((int)pppppppdVar9 == 0) {
          if ((int)uVar15 < 0x56) {
            pppppppdVar9 = appppppdStack_850;
            if (param_4 != (long *)0x0) goto LAB_1097d1d74;
LAB_1097d1da8:
            pppppppdStack_13c0 = (double *******)0x0;
            param_8 = (double *******)&uStack_127c;
            plVar17 = (long *)0x0;
            param_5 = 0;
            param_6 = (double *******)0x0;
            pppppppdVar10 = pppppppdVar8;
            param_7 = pppppppdVar9;
            FUN_1097d2010();
            pppppppdVar11 = param_2;
            pppppppdVar16 = param_3;
LAB_1097d1e14:
            iStack_13b8 = 1;
            pppppppdVar26 = (double *******)(ulong)uStack_127c;
            if (uStack_127c != 0) {
              pppppppdVar11 = pppppppdVar8;
              FUN_1097d098c();
              if ((int)pppppppdVar11 == 0) {
                pppppppdVar16 = (double *******)&UNK_10dffe668;
              }
              else {
                pppppppdVar16 = appppppdStack_13a0;
                FUN_1097d27a8(pppppppdVar8,appppppdStack_13a0,pppppppdVar8[0x37],pppppppdVar8 + 0x30
                             );
              }
              iVar22 = (int)pppppppdVar8[0x1e];
              FUN_1097f7a80();
              if ((iVar22 != 0) ||
                 (pppppppdVar12 = (double *******)pppppppdVar8[0xe],
                 (double)pppppppdVar12[0x27] <= 10240.0)) {
                pppppppdVar10 = (double *******)pppppppdVar8[0x1e];
                if (param_4 == (long *)0x0) {
                  iStack_13b8 = (int)pppppppdVar8[0xe];
                  pppppppdStack_13c0 = (double *******)0x0;
                  plVar17 = (long *)0x0;
                  param_5 = 0;
                  param_8 = (double *******)0x0;
                }
                else {
                  plVar17 = (long *)*param_4;
                  param_5 = (ulong)*(uint *)(param_4 + 1);
                  pppppppdStack_13c0 = (double *******)param_4[3];
                  iStack_13b8 = (int)pppppppdVar8[0xe];
                  param_8 = pppppppdVar13;
                }
                param_6 = pppppppdVar9;
                FUN_1097f7ad4();
                param_7 = pppppppdVar26;
                pppppppdVar26 = pppppppdVar10;
              }
              else {
                uStack_1238 = 0x3600000000;
                uStack_1240 = 0x1b00000000;
                puStack_1230 = auStack_1220;
                puStack_1228 = auStack_1204;
                uStack_1270 = 0;
                lStack_1278 = 0;
                uStack_1268 = 0xf2;
                uStack_125c = 0;
                uStack_1264 = 0;
                plVar17 = &lStack_1278;
                pppppppdVar14 = pppppppdVar9;
                pppppppdStack_1250 = (double *******)&pppppppdStack_1250;
                pppppppdStack_1248 = (double *******)&pppppppdStack_1250;
                func_0x0001097f0648();
                pppppppdVar10 = pppppppdStack_1250;
                if ((int)pppppppdVar12 == 0) {
                  param_6 = (double *******)(ulong)*(uint *)(pppppppdVar8[0xe] + 0x13);
                  param_7 = (double *******)pppppppdVar8[0x1d];
                  pppppppdVar12 = (double *******)pppppppdVar8[0x1e];
                  plVar17 = &lStack_1278;
                  param_5 = 0;
                  FUN_1097f76c8(pppppppdVar8[2]);
                  pppppppdVar14 = pppppppdVar11;
                  pppppppdVar26 = pppppppdVar16;
                  pppppppdVar10 = pppppppdStack_1250;
                }
                while (pppppppdVar16 = pppppppdVar26, pppppppdVar11 = pppppppdVar14,
                      pppppppdVar26 = pppppppdVar12,
                      (double ********)pppppppdVar10 != &pppppppdStack_1250) {
                  pppppppdVar10 = (double *******)*pppppppdVar10;
                  _free();
                  pppppppdVar14 = pppppppdVar11;
                  pppppppdVar26 = pppppppdVar16;
                }
              }
            }
          }
          else {
            pppppppdVar9 = (double *******)(((ulong)param_3 & 0xffffffff) * 0x18);
            _malloc();
            if (pppppppdVar9 == (double *******)0x0) {
              pppppppdVar26 = (double *******)0x1;
              goto LAB_1097d1fb8;
            }
            if (param_4 == (long *)0x0) goto LAB_1097d1da8;
LAB_1097d1d74:
            uVar25 = (ulong)*(uint *)(param_4 + 3);
            if ((int)*(uint *)(param_4 + 3) < 0x101) {
LAB_1097d1de4:
              plVar17 = (long *)param_4[2];
              param_6 = (double *******)(ulong)*(uint *)((long)param_4 + 0x1c);
              param_8 = (double *******)&uStack_127c;
              pppppppdVar10 = pppppppdVar8;
              param_7 = pppppppdVar9;
              FUN_1097d2010();
              pppppppdVar11 = param_2;
              pppppppdVar16 = param_3;
              param_5 = uVar25;
              pppppppdVar13 = pppppppdVar12;
              pppppppdStack_13c0 = pppppppdVar12;
              goto LAB_1097d1e14;
            }
            pppppppdVar10 = (double *******)(uVar25 << 3);
            _malloc();
            pppppppdVar12 = pppppppdVar10;
            if (pppppppdVar10 != (double *******)0x0) goto LAB_1097d1de4;
            pppppppdVar13 = pppppppdVar10;
            pppppppdVar26 = (double *******)0x1;
          }
          if (pppppppdVar9 != appppppdStack_850) {
            _free();
            pppppppdVar10 = pppppppdVar9;
          }
          pppppppdVar9 = pppppppdVar10;
          if (pppppppdVar13 != appppppdStack_1050) {
            _free();
            pppppppdVar9 = pppppppdVar13;
          }
        }
      }
    }
  }
LAB_1097d1fb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppppdVar26;
  }
  ___stack_chk_fail();
  ppppppdVar18 = pppppppdVar9[0x1e];
  uVar15 = (uint)pppppppdVar16;
  pppppppdVar12 = pppppppdVar9;
  if ((iStack_13b8 == 0) || (FUN_1097d18c0(pppppppdVar9,&iStack_1430), (int)pppppppdVar12 == 0)) {
    *(uint *)param_8 = uVar15;
    dVar27 = 0.0;
    bVar7 = true;
    dVar28 = 0.0;
    dVar30 = 0.0;
    dVar29 = 0.0;
  }
  else {
    if ((iStack_1428 == 0) || (iStack_1424 == 0)) {
      *(int *)param_8 = 0;
      return pppppppdVar12;
    }
    bVar7 = false;
    dVar30 = (double)pppppppdVar9[0xe][0x27] * 10.0;
    dVar27 = (double)iStack_1430 - dVar30;
    dVar29 = (double)iStack_142c - dVar30;
    dVar28 = dVar30 + (double)(iStack_1430 + iStack_1428);
    dVar30 = dVar30 + (double)(iStack_142c + iStack_1424);
  }
  ppppppdVar33 = pppppppdVar9[0x24];
  ppppppdVar31 = pppppppdVar9[0x25];
  iVar22 = (int)param_5;
  if ((((double)ppppppdVar33 == 1.0) && ((double)ppppppdVar31 == 0.0)) &&
     ((double)pppppppdVar9[0x26] == 0.0)) {
    if ((((((double)pppppppdVar9[0x27] != 1.0) || ((double)pppppppdVar9[0x28] != 0.0)) ||
         (((double)pppppppdVar9[0x29] != 0.0 ||
          (((double)ppppppdVar18[0xd] != 1.0 || ((double)ppppppdVar18[0xe] != 0.0)))))) ||
        ((double)ppppppdVar18[0xf] != 0.0)) ||
       (((((double)ppppppdVar18[0x10] != 1.0 || ((double)ppppppdVar18[0x11] != 0.0)) ||
         ((double)ppppppdVar18[0x12] != 0.0)) ||
        (((double)pppppppdVar9[0x14] != 0.0 || ((double)pppppppdVar9[0x15] != 0.0)))))) {
      if ((((double)pppppppdVar9[0x27] != 1.0) ||
          (((double)ppppppdVar18[0xd] != 1.0 || ((double)ppppppdVar18[0xe] != 0.0)))) ||
         (((double)ppppppdVar18[0xf] != 0.0 || ((double)ppppppdVar18[0x10] != 1.0))))
      goto LAB_1097d2130;
      dVar32 = (double)pppppppdVar9[0x14] + (double)pppppppdVar9[0x28] + (double)ppppppdVar18[0x11];
      dVar34 = (double)pppppppdVar9[0x15] + (double)pppppppdVar9[0x29] + (double)ppppppdVar18[0x12];
      bVar3 = false;
      if (iVar22 != 0) {
        bVar3 = (bool)(bVar7 ^ 1);
      }
      if (bVar3) {
        if (0 < iVar22) {
          uVar25 = 0;
          bVar7 = ((ulong)param_6 & 1) != 0;
          if (bVar7) {
            pppppppdVar11 = pppppppdVar11 + (long)(int)uVar15 * 3 + -3;
          }
          lVar19 = -0x18;
          if (!bVar7) {
            lVar19 = 0x18;
          }
          uVar24 = 0;
          do {
            plVar1 = plVar17 + uVar25;
            uVar15 = *(uint *)((long)plVar1 + 4);
            uVar20 = (ulong)uVar15;
            if ((int)uVar15 < 1) {
              pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
LAB_1097d24e8:
              *(undefined4 *)((long)pppppppdStack_13c0 + uVar25 * 8 + 4) = 0;
            }
            else {
              bVar7 = false;
              pppppppdVar9 = param_7 + uVar24 * 3 + 1;
              do {
                pppppppdVar9[-1] = *pppppppdVar11;
                ppppppdVar18 = (double ******)(dVar32 + (double)pppppppdVar11[1]);
                ppppppdVar31 = (double ******)(dVar34 + (double)pppppppdVar11[2]);
                pppppppdVar9[1] = ppppppdVar31;
                *pppppppdVar9 = ppppppdVar18;
                bVar3 = false;
                bVar5 = true;
                if ((double)ppppppdVar31 <= dVar30) {
                  bVar3 = false;
                  bVar5 = true;
                  if (!NAN(dVar29) && !NAN((double)ppppppdVar31)) {
                    bVar3 = dVar29 == (double)ppppppdVar31;
                    bVar5 = (double)ppppppdVar31 <= dVar29;
                  }
                }
                bVar4 = false;
                bVar6 = true;
                if (!bVar5 || bVar3) {
                  bVar4 = false;
                  bVar6 = true;
                  if (!NAN((double)ppppppdVar18) && !NAN(dVar28)) {
                    bVar4 = (double)ppppppdVar18 == dVar28;
                    bVar6 = dVar28 <= (double)ppppppdVar18;
                  }
                }
                bVar3 = false;
                bVar5 = true;
                if (!bVar6 || bVar4) {
                  bVar3 = false;
                  bVar5 = true;
                  if (!NAN(dVar27) && !NAN((double)ppppppdVar18)) {
                    bVar3 = dVar27 == (double)ppppppdVar18;
                    bVar5 = (double)ppppppdVar18 <= dVar27;
                  }
                }
                if (!bVar5 || bVar3) {
                  bVar7 = true;
                }
                pppppppdVar11 = (double *******)((long)pppppppdVar11 + lVar19);
                uVar20 = uVar20 - 1;
                pppppppdVar9 = pppppppdVar9 + 3;
              } while (uVar20 != 0);
              pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
              pppppppdVar12 = (double *******)0x0;
              if (!bVar7) goto LAB_1097d24e8;
              uVar24 = (ulong)(uVar15 + (int)uVar24);
            }
            uVar23 = (uint)uVar24;
            uVar25 = uVar25 + 1;
          } while (uVar25 != (param_5 & 0xffffffff));
          goto LAB_1097d2618;
        }
        goto LAB_1097d2614;
      }
      if (0 < (int)uVar15) {
        uVar25 = (ulong)pppppppdVar16 & 0xffffffff;
        pppppppdVar11 = pppppppdVar11 + 1;
        uVar23 = 0;
        do {
          pppppppdVar9 = param_7 + (long)(int)uVar23 * 3;
          *pppppppdVar9 = pppppppdVar11[-1];
          ppppppdVar18 = (double ******)(dVar32 + (double)*pppppppdVar11);
          ppppppdVar31 = (double ******)(dVar34 + (double)pppppppdVar11[1]);
          pppppppdVar9[2] = ppppppdVar31;
          pppppppdVar9[1] = ppppppdVar18;
          if (bVar7) {
LAB_1097d239c:
            uVar23 = uVar23 + 1;
          }
          else {
            bVar3 = false;
            bVar5 = true;
            if (dVar27 <= (double)ppppppdVar18) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN((double)ppppppdVar18) && !NAN(dVar28)) {
                bVar3 = (double)ppppppdVar18 == dVar28;
                bVar5 = dVar28 <= (double)ppppppdVar18;
              }
            }
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(dVar29) && !NAN((double)ppppppdVar31)) {
                bVar4 = dVar29 == (double)ppppppdVar31;
                bVar6 = (double)ppppppdVar31 <= dVar29;
              }
            }
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN((double)ppppppdVar31) && !NAN(dVar30)) {
                bVar3 = (double)ppppppdVar31 == dVar30;
                bVar5 = dVar30 <= (double)ppppppdVar31;
              }
            }
            if (!bVar5 || bVar3) goto LAB_1097d239c;
          }
          pppppppdVar11 = pppppppdVar11 + 3;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
        goto LAB_1097d23b4;
      }
      goto LAB_1097d23b0;
    }
    if (!bVar7) {
      if (iVar22 == 0) {
        if (0 < (int)uVar15) {
          uVar25 = (ulong)pppppppdVar16 & 0xffffffff;
          pppppppdVar11 = pppppppdVar11 + 2;
          uVar24 = 0;
          do {
            pppppppdVar9 = param_7 + uVar24 * 3;
            *pppppppdVar9 = pppppppdVar11[-2];
            ppppppdVar18 = pppppppdVar11[-1];
            ppppppdVar31 = *pppppppdVar11;
            pppppppdVar9[1] = ppppppdVar18;
            pppppppdVar9[2] = ppppppdVar31;
            uVar15 = 0;
            if ((double)ppppppdVar18 <= dVar28) {
              uVar15 = (uint)(dVar27 <= (double)ppppppdVar18);
            }
            uVar2 = 0;
            if (dVar29 <= (double)ppppppdVar31) {
              uVar2 = uVar15;
            }
            uVar23 = 0;
            if ((double)ppppppdVar31 <= dVar30) {
              uVar23 = uVar2;
            }
            uVar23 = (int)uVar24 + uVar23;
            uVar24 = (ulong)uVar23;
            pppppppdVar11 = pppppppdVar11 + 3;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
          goto LAB_1097d2618;
        }
      }
      else if (0 < iVar22) {
        uVar25 = 0;
        bVar7 = ((ulong)param_6 & 1) != 0;
        if (bVar7) {
          pppppppdVar11 = pppppppdVar11 + (long)(int)uVar15 * 3 + -3;
        }
        lVar19 = -0x18;
        if (!bVar7) {
          lVar19 = 0x18;
        }
        uVar24 = 0;
        do {
          plVar1 = plVar17 + uVar25;
          uVar15 = *(uint *)((long)plVar1 + 4);
          uVar20 = (ulong)uVar15;
          if ((int)uVar15 < 1) {
            pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
LAB_1097d259c:
            *(undefined4 *)((long)pppppppdStack_13c0 + uVar25 * 8 + 4) = 0;
          }
          else {
            bVar7 = false;
            pppppppdVar9 = param_7 + uVar24 * 3 + 1;
            do {
              pppppppdVar9[-1] = *pppppppdVar11;
              ppppppdVar18 = pppppppdVar11[1];
              ppppppdVar31 = pppppppdVar11[2];
              *pppppppdVar9 = ppppppdVar18;
              pppppppdVar9[1] = ppppppdVar31;
              bVar3 = false;
              bVar5 = true;
              if ((double)ppppppdVar31 <= dVar30) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar29) && !NAN((double)ppppppdVar31)) {
                  bVar3 = dVar29 == (double)ppppppdVar31;
                  bVar5 = (double)ppppppdVar31 <= dVar29;
                }
              }
              bVar4 = false;
              bVar6 = true;
              if (!bVar5 || bVar3) {
                bVar4 = false;
                bVar6 = true;
                if (!NAN((double)ppppppdVar18) && !NAN(dVar28)) {
                  bVar4 = (double)ppppppdVar18 == dVar28;
                  bVar6 = dVar28 <= (double)ppppppdVar18;
                }
              }
              bVar3 = false;
              bVar5 = true;
              if (!bVar6 || bVar4) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar27) && !NAN((double)ppppppdVar18)) {
                  bVar3 = dVar27 == (double)ppppppdVar18;
                  bVar5 = (double)ppppppdVar18 <= dVar27;
                }
              }
              if (!bVar5 || bVar3) {
                bVar7 = true;
              }
              pppppppdVar11 = (double *******)((long)pppppppdVar11 + lVar19);
              uVar20 = uVar20 - 1;
              pppppppdVar9 = pppppppdVar9 + 3;
            } while (uVar20 != 0);
            pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
            pppppppdVar12 = (double *******)0x0;
            if (!bVar7) goto LAB_1097d259c;
            uVar24 = (ulong)(uVar15 + (int)uVar24);
          }
          uVar23 = (uint)uVar24;
          uVar25 = uVar25 + 1;
        } while (uVar25 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
      goto LAB_1097d2614;
    }
    _memcpy(param_7,pppppppdVar11,(long)(int)uVar15 * 0x18);
    uVar23 = uVar15;
  }
  else {
LAB_1097d2130:
    ppppppdVar39 = pppppppdVar9[0x26];
    ppppppdVar41 = pppppppdVar9[0x27];
    dVar44 = (double)ppppppdVar33 + (double)ppppppdVar39 * 0.0;
    dVar45 = (double)ppppppdVar39 + (double)ppppppdVar33 * 0.0;
    dVar40 = (double)pppppppdVar9[0x15] * (double)ppppppdVar39 +
             (double)ppppppdVar33 * (double)pppppppdVar9[0x14] + (double)pppppppdVar9[0x28];
    dVar34 = (double)ppppppdVar31 + (double)ppppppdVar41 * 0.0;
    dVar38 = (double)ppppppdVar41 + (double)ppppppdVar31 * 0.0;
    dVar35 = (double)pppppppdVar9[0x15] * (double)ppppppdVar41 +
             (double)ppppppdVar31 * (double)pppppppdVar9[0x14] + (double)pppppppdVar9[0x29];
    pppppdVar37 = ppppppdVar18[0xe];
    pppppdVar36 = ppppppdVar18[0xd];
    pppppdVar43 = ppppppdVar18[0x10];
    pppppdVar42 = ppppppdVar18[0xf];
    dVar32 = (double)pppppdVar42 * dVar34 + (double)pppppdVar36 * dVar44;
    dVar34 = (double)pppppdVar43 * dVar34 + (double)pppppdVar37 * dVar44;
    dVar44 = (double)pppppdVar42 * dVar38 + (double)pppppdVar36 * dVar45;
    dVar38 = (double)pppppdVar43 * dVar38 + (double)pppppdVar37 * dVar45;
    dVar45 = (double)pppppdVar42 * dVar35 + (double)pppppdVar36 * dVar40 +
             (double)ppppppdVar18[0x11];
    dVar35 = (double)pppppdVar43 * dVar35 + (double)pppppdVar37 * dVar40 +
             (double)ppppppdVar18[0x12];
    bVar3 = false;
    if (iVar22 != 0) {
      bVar3 = (bool)(bVar7 ^ 1);
    }
    if (bVar3) {
      if (0 < iVar22) {
        uVar25 = 0;
        uVar23 = 0;
        bVar7 = ((ulong)param_6 & 1) != 0;
        if (bVar7) {
          pppppppdVar11 = pppppppdVar11 + (long)(int)uVar15 * 3 + -3;
        }
        lVar19 = -0x18;
        if (!bVar7) {
          lVar19 = 0x18;
        }
        do {
          plVar1 = plVar17 + uVar25;
          if (*(int *)((long)plVar1 + 4) < 1) {
            pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
LAB_1097d22d4:
            *(undefined4 *)((long)pppppppdStack_13c0 + uVar25 * 8 + 4) = 0;
            uVar15 = uVar23;
          }
          else {
            lVar21 = 0;
            bVar7 = false;
            pppppppdVar9 = param_7 + (long)(int)uVar23 * 3 + 1;
            uVar15 = uVar23;
            do {
              ppppppdVar18 = pppppppdVar11[2];
              ppppppdVar31 = *pppppppdVar11;
              *pppppppdVar9 = pppppppdVar11[1];
              pppppppdVar9[-1] = ppppppdVar31;
              pppppppdVar9[1] = ppppppdVar18;
              ppppppdVar18 = (double ******)
                             (dVar45 + dVar44 * (double)pppppppdVar9[1] +
                                       dVar32 * (double)*pppppppdVar9);
              ppppppdVar31 = (double ******)
                             (dVar35 + dVar38 * (double)pppppppdVar9[1] +
                                       dVar34 * (double)*pppppppdVar9);
              pppppppdVar12 = pppppppdVar9 + 3;
              pppppppdVar9[1] = ppppppdVar31;
              *pppppppdVar9 = ppppppdVar18;
              bVar3 = false;
              bVar5 = true;
              if ((double)ppppppdVar31 <= dVar30) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar29) && !NAN((double)ppppppdVar31)) {
                  bVar3 = dVar29 == (double)ppppppdVar31;
                  bVar5 = (double)ppppppdVar31 <= dVar29;
                }
              }
              bVar4 = false;
              bVar6 = true;
              if (!bVar5 || bVar3) {
                bVar4 = false;
                bVar6 = true;
                if (!NAN((double)ppppppdVar18) && !NAN(dVar28)) {
                  bVar4 = (double)ppppppdVar18 == dVar28;
                  bVar6 = dVar28 <= (double)ppppppdVar18;
                }
              }
              bVar3 = false;
              bVar5 = true;
              if (!bVar6 || bVar4) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar27) && !NAN((double)ppppppdVar18)) {
                  bVar3 = dVar27 == (double)ppppppdVar18;
                  bVar5 = (double)ppppppdVar18 <= dVar27;
                }
              }
              if (!bVar5 || bVar3) {
                bVar7 = true;
              }
              pppppppdVar11 = (double *******)((long)pppppppdVar11 + lVar19);
              lVar21 = lVar21 + 1;
              uVar15 = uVar15 + 1;
              pppppppdVar9 = pppppppdVar12;
            } while (lVar21 < *(int *)((long)plVar1 + 4));
            pppppppdStack_13c0[uVar25] = (double ******)*plVar1;
            if (!bVar7) goto LAB_1097d22d4;
          }
          uVar23 = uVar15;
          uVar25 = uVar25 + 1;
        } while (uVar25 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
LAB_1097d2614:
      uVar23 = 0;
      goto LAB_1097d2618;
    }
    if (0 < (int)uVar15) {
      uVar25 = (ulong)pppppppdVar16 & 0xffffffff;
      uVar23 = 0;
      do {
        pppppppdVar9 = param_7 + (long)(int)uVar23 * 3;
        ppppppdVar18 = pppppppdVar11[2];
        ppppppdVar31 = *pppppppdVar11;
        pppppppdVar9[1] = pppppppdVar11[1];
        *pppppppdVar9 = ppppppdVar31;
        pppppppdVar9[2] = ppppppdVar18;
        ppppppdVar18 = (double ******)
                       (dVar45 + dVar44 * (double)pppppppdVar9[2] + dVar32 * (double)pppppppdVar9[1]
                       );
        ppppppdVar31 = (double ******)
                       (dVar35 + dVar38 * (double)pppppppdVar9[2] + dVar34 * (double)pppppppdVar9[1]
                       );
        pppppppdVar9[2] = ppppppdVar31;
        pppppppdVar9[1] = ppppppdVar18;
        if (bVar7) {
LAB_1097d21e8:
          uVar23 = uVar23 + 1;
        }
        else {
          bVar3 = false;
          bVar5 = true;
          if (dVar27 <= (double)ppppppdVar18) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN((double)ppppppdVar18) && !NAN(dVar28)) {
              bVar3 = (double)ppppppdVar18 == dVar28;
              bVar5 = dVar28 <= (double)ppppppdVar18;
            }
          }
          bVar4 = false;
          bVar6 = true;
          if (!bVar5 || bVar3) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(dVar29) && !NAN((double)ppppppdVar31)) {
              bVar4 = dVar29 == (double)ppppppdVar31;
              bVar6 = (double)ppppppdVar31 <= dVar29;
            }
          }
          bVar3 = false;
          bVar5 = true;
          if (!bVar6 || bVar4) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN((double)ppppppdVar31) && !NAN(dVar30)) {
              bVar3 = (double)ppppppdVar31 == dVar30;
              bVar5 = dVar30 <= (double)ppppppdVar31;
            }
          }
          if (!bVar5 || bVar3) goto LAB_1097d21e8;
        }
        pppppppdVar11 = pppppppdVar11 + 3;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      goto LAB_1097d23b4;
    }
LAB_1097d23b0:
    uVar23 = 0;
  }
LAB_1097d23b4:
  _memcpy(pppppppdStack_13c0,plVar17,
          -(param_5 >> 0x1f & 1) & 0xfffffff800000000 | (param_5 & 0xffffffff) << 3);
  pppppppdVar12 = pppppppdStack_13c0;
LAB_1097d2618:
  *(uint *)param_8 = uVar23;
  if (((iVar22 != 0) && (((ulong)param_6 & 1) != 0)) && (1 < (int)uVar23)) {
    lVar19 = 0;
    lVar21 = (ulong)uVar23 - 2;
    pppppppdVar9 = param_7 + (ulong)uVar23 * 3;
    do {
      pppppppdVar16 = pppppppdVar9 + -3;
      ppppppdVar18 = param_7[2];
      ppppppdVar39 = param_7[1];
      ppppppdVar33 = *param_7;
      ppppppdVar31 = pppppppdVar9[-1];
      ppppppdVar41 = *pppppppdVar16;
      param_7[1] = pppppppdVar9[-2];
      *param_7 = ppppppdVar41;
      param_7[2] = ppppppdVar31;
      pppppppdVar9[-2] = ppppppdVar39;
      *pppppppdVar16 = ppppppdVar33;
      pppppppdVar9[-1] = ppppppdVar18;
      lVar19 = lVar19 + 1;
      param_7 = param_7 + 3;
      bVar7 = lVar19 < lVar21;
      lVar21 = lVar21 + -1;
      pppppppdVar9 = pppppppdVar16;
    } while (bVar7);
  }
  return pppppppdVar12;
}



/* Entry: 1097cdfe4; end: 1097ce03b;  */

undefined4 FUN_1097cdfe4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_1097f79b8(*(undefined8 *)(lVar1 + 0xf0));
  return *(undefined4 *)(*(long *)(lVar1 + 0xf0) + 0x1c);
}



/* Entry: 1097ce03c; end: 1097ce07b;  */

int FUN_1097ce03c(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x28) + 0xf0);
  puVar2 = &UNK_10f580939;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  if (*(int *)((long)plVar4 + 0x1c) != 0) {
    return *(int *)((long)plVar4 + 0x1c);
  }
  if ((*(byte *)(plVar4 + 6) >> 1 & 1) == 0) {
    if (*(code **)(*plVar4 + 0xd0) == (code *)0x0) {
      return 0;
    }
    plVar5 = plVar4;
    (**(code **)(*plVar4 + 0xd0))(plVar4,1,param_2,puVar2);
    iVar3 = (int)plVar5;
    *(byte *)(plVar4 + 6) = *(byte *)(plVar4 + 6) & 0xfb;
  }
  else {
    iVar3 = 0xc;
  }
  iVar1 = 0;
  if (iVar3 != 0x66) {
    iVar1 = iVar3;
  }
  if (0xffffffd3 < iVar1 - 0x2dU) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)((long)plVar4 + 0x1c) == 0) {
      *(int *)((long)plVar4 + 0x1c) = iVar1;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return iVar1;
}



/* Entry: 1097ce07c; end: 1097ce1cf;  */

int * FUN_1097ce07c(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    *param_1 = *param_1 + 1;
    _pthread_mutex_unlock(0x1132e0448);
  }
  return param_1;
}



/* Entry: 1097ce1d0; end: 1097ce267;  */

void FUN_1097ce1d0(int *param_1)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar1 + -1 == 0) {
      func_0x0001097ce178(param_1);
      _pthread_mutex_destroy(param_1 + 10);
      uStack_48 = *(undefined8 *)(param_1 + 4);
      uStack_50 = *(undefined8 *)(param_1 + 2);
      uStack_40 = *(undefined8 *)(param_1 + 6);
      (**(code **)(*(long *)(param_1 + 8) + 0x28))(param_1);
      func_0x0001097c55d4(&uStack_50);
    }
  }
  return;
}



/* Entry: 1097ce268; end: 1097ce373;  */

undefined * FUN_1097ce268(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x1;
  _calloc(1,0x60);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &UNK_10dffe298;
  }
  else {
    *(undefined4 *)(puVar1 + 0xc) = 1;
    *(undefined **)(puVar1 + 0x28) = &UNK_110b11ca8;
    *(undefined4 *)(puVar1 + 0x18) = 0x18;
  }
  FUN_109800480(puVar1,FUN_1097ce448);
  func_0x000109800564(puVar1,FUN_1097ce674);
  func_0x00010980063c(puVar1,FUN_1097cebd4);
  return puVar1;
}



/* Entry: 1097ce374; end: 1097ce447;  */

undefined8 FUN_1097ce374(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar2 = param_1;
  FUN_1097ce268();
  puVar3 = puVar2;
  func_0x0001097ce2f0();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1097cf084(puVar2);
    return 1;
  }
  uVar4 = 400;
  if (param_1[0x10] != 0) {
    uVar4 = 700;
  }
  *puVar3 = param_1[0xf];
  puVar3[1] = uVar4;
  pcVar6 = *(char **)(param_1 + 0xc);
  pcVar7 = pcVar6;
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    iVar5 = (int)pcVar7;
    if ((cVar1 == ' ') || (cVar1 == ':')) {
      if (pcVar6 < pcVar8) {
        FUN_1097ced04(puVar3,pcVar6,iVar5 - (int)pcVar6);
      }
      pcVar6 = pcVar8 + 1;
    }
    else if (cVar1 == '\0') {
      if (pcVar6 < pcVar8) {
        FUN_1097ced04(puVar3,pcVar6,iVar5 - (int)pcVar6);
      }
      *param_2 = puVar2;
      return 0;
    }
    pcVar8 = pcVar8 + 1;
    pcVar7 = (char *)(ulong)(iVar5 + 1);
  } while( true );
}



/* Entry: 1097ce448; end: 1097ce673;  */

ulong FUN_1097ce448(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  param_3[1] = 0x3fd0000000000000;
  *param_3 = 0x3fe8000000000000;
  uVar5 = 1;
  plVar1 = (long *)0x1;
  _calloc(1,0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 8) == 0) {
      puVar2 = *(undefined **)(param_1 + 0x28);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = *(undefined **)(param_1 + 0x30);
      }
    }
    else {
      puVar2 = &UNK_10dffe298;
    }
    uVar5 = (ulong)*(uint *)(puVar2 + 0x14);
    if (*(uint *)(puVar2 + 0x14) != 0) {
      plVar3 = (long *)(*(long *)(puVar2 + 0x20) + 8);
      do {
        if (plVar3[-1] == 0x11382addc) {
          lVar6 = *plVar3;
          goto LAB_1097ce4e8;
        }
        plVar3 = plVar3 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar6 = 0;
LAB_1097ce4e8:
    *plVar1 = lVar6;
    uVar4 = *(uint *)(param_1 + 0xa4);
    *(uint *)(plVar1 + 1) = (uint)(1 < uVar4);
    dVar7 = (double)NEON_ucvtf((ulong)*(uint *)(lVar6 + 4));
    dVar7 = dVar7 * 0.0001388888888888889;
    plVar1[3] = (long)dVar7;
    plVar1[4] = (long)dVar7;
    plVar1[2] = (long)dVar7;
    plVar1[6] = 0x3fac71c71c71c71c;
    plVar1[5] = 0x3fac71c71c71c71c;
    if (2 < uVar4) {
      FUN_1097cebe8(0x3ff0000000000000,0,param_2,&dStack_48,&dStack_50);
      FUN_1097cebe8(0,0x3ff0000000000000,param_2,&dStack_58,&dStack_60);
      dVar8 = dStack_50 * (double)(long)(dVar7 * dStack_48 + 0.5);
      dVar9 = dStack_50;
      if (dStack_50 <= dVar8) {
        dVar9 = dVar8;
      }
      dVar7 = dStack_60 * (double)(long)(dVar7 * dStack_58 + 0.5);
      if (dStack_60 <= dVar7) {
        dStack_60 = dVar7;
      }
      plVar1[3] = (long)dVar9;
      plVar1[4] = (long)dStack_60;
      dVar9 = dStack_50 * (double)(long)(dStack_48 * 0.05555555555555555 + 0.5);
      dVar7 = dStack_50;
      if (dStack_50 <= dVar9) {
        dVar7 = dVar9;
      }
      dVar9 = 0.0;
      if (0.0 <= 0.1111111111111111 - dVar7) {
        dVar9 = 0.1111111111111111 - dVar7;
      }
      plVar1[5] = (long)dVar7;
      plVar1[6] = (long)(dStack_50 * (double)(long)(dStack_48 * dVar9 + 0.5));
    }
    plVar1[7] = (long)((double)(*(int *)(lVar6 + 8) + -4) * 0.1 + 1.0);
    if (*(int *)(param_1 + 0xc) == -1) {
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = (ulong)uVar4;
    }
    else {
      uVar5 = param_1 + 0x10;
      FUN_1097c5634(uVar5,0x11382addc,plVar1,PTR__free_11034c310);
      uVar4 = (uint)uVar5;
    }
    if (uVar4 != 0) {
      _free(plVar1);
    }
  }
  return uVar5;
}



/* Entry: 1097ce674; end: 1097cebd3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1097ce674(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double adStack_120 [5];
  undefined8 uStack_f8;
  double adStack_e8 [7];
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) != 0) {
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    do {
      if (puVar12[-1] == 0x11382addc) {
        puVar12 = (undefined8 *)*puVar12;
        goto LAB_1097ce6e8;
      }
      puVar12 = puVar12 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1097ce6e8:
  FUN_109801148(param_3);
  func_0x000109801544((double)puVar12[3] * 0.5,(double)puVar12[4] * -0.5,param_3);
  piVar8 = (int *)*puVar12;
  if ((param_2 - 0x61 < 0x1a) && (piVar8[4] != 0)) {
    param_2 = param_2 - 0x20;
    func_0x000109801590(0x3ff0000000000000,0x3fe5555555555555,param_3);
    piVar8 = (int *)*puVar12;
  }
  if (*piVar8 != 0) {
    adStack_120[4] = 0.0;
    adStack_120[1] = 0.0;
    uStack_f8 = 0;
    adStack_120[0] = 1.0;
    adStack_120[3] = 1.0;
    adStack_120[2] = -0.2;
    func_0x0001098015dc(param_3,adStack_120);
    piVar8 = (int *)*puVar12;
  }
  uVar7 = 0;
  if (param_2 < 0x80) {
    uVar7 = param_2;
  }
  uVar7 = (ulong)*(ushort *)(&UNK_10dffde66 + uVar7 * 2);
  cVar2 = (&UNK_10dffd074)[uVar7];
  lVar10 = (long)cVar2;
  cVar3 = (&UNK_10dffd075)[uVar7];
  lVar11 = (long)cVar3;
  dVar18 = (double)puVar12[5];
  dVar19 = (double)(int)(char)(&UNK_10dffd071)[uVar7] / 72.0;
  if (piVar8[3] != 0) {
    dVar14 = dVar18 + (double)puVar12[3] + (double)puVar12[6];
    dVar19 = 0.3333333333333333;
    func_0x000109801590((dVar14 + 0.3333333333333333) /
                        ((double)(int)(char)(&UNK_10dffd071)[uVar7] / 72.0 + dVar14),
                        0x3ff0000000000000,param_3);
    FUN_1097cebe8(0x3ff0000000000000,0,param_3,adStack_120,&dStack_98);
    dVar18 = dStack_98 * (double)(long)(dVar18 * adStack_120[0] + 0.5);
  }
  lVar5 = lVar11 + lVar10 + uVar7;
  func_0x000109801544(dVar18,0,param_3);
  func_0x000109801590(puVar12[7],0x3ff0000000000000,param_3);
  if (*(int *)(puVar12 + 1) == 0) {
    lVar11 = 0;
    lVar10 = 0;
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
    adStack_120[0] = (double)((ulong)adStack_120[0] & 0xffffffff00000000);
  }
  else {
    FUN_1097cebe8(0x3ff0000000000000,0,param_3,&dStack_98,&dStack_a0);
    FUN_1097cebe8(0,0x3ff0000000000000,param_3,&dStack_a8,&dStack_b0);
    adStack_120[0] = (double)CONCAT44(adStack_120[0]._4_4_,(int)cVar2);
    if (0 < cVar2) {
      uVar9 = 0;
      do {
        cVar4 = (&UNK_10dffd076)[uVar9 + uVar7];
        *(char *)(((ulong)adStack_120 | 4) + uVar9) = cVar4;
        *(double *)(((ulong)adStack_120 | 4) + uVar9 * 8 + 4) =
             dStack_a0 * (double)(long)(dStack_98 * ((double)(int)cVar4 / 72.0) + 0.5);
        uVar9 = uVar9 + 1;
      } while ((uint)(int)cVar2 != uVar9);
    }
    uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)cVar3);
    if (0 < cVar3) {
      uVar9 = 0;
      do {
        cVar2 = (&UNK_10dffd076)[uVar9 + lVar10 + uVar7];
        *(char *)((long)&uStack_f8 + uVar9 + 4) = cVar2;
        adStack_e8[uVar9] =
             dStack_b0 * (double)(long)(dStack_a8 * ((double)(int)cVar2 / 72.0) + 0.5);
        uVar9 = uVar9 + 1;
      } while ((uint)(int)cVar3 != uVar9);
    }
  }
  dVar19 = (double)puVar12[3] + (double)puVar12[7] * dVar19 + (double)puVar12[5] +
           (double)puVar12[6];
  *(double *)(param_4 + 0x20) = dVar19;
  pbVar6 = &UNK_10dffd076 + lVar5;
LAB_1097ce984:
  while( true ) {
    pbVar13 = pbVar6;
    bVar1 = *pbVar13;
    if (bVar1 < 0x58) break;
    if (bVar1 < 0x65) goto LAB_1097cea14;
    if (bVar1 == 0x6c) {
LAB_1097ceaf4:
      FUN_1097cec68((long)(char)pbVar13[1],lVar10,(ulong)adStack_120 | 4,adStack_120 + 1);
      dVar18 = dVar19;
      FUN_1097cec68((long)(char)pbVar13[2],lVar11,(long)&uStack_f8 + 4,adStack_e8);
      func_0x00010980170c(dVar19,dVar18,param_3);
      pbVar6 = pbVar13 + 3;
    }
    else {
      if (bVar1 != 0x6d) {
        if (bVar1 != 0x65) {
          return 0;
        }
        goto LAB_1097ceb54;
      }
LAB_1097ce9d0:
      FUN_1097cec68((long)(char)pbVar13[1],lVar10,(ulong)adStack_120 | 4,adStack_120 + 1);
      dVar18 = dVar19;
      FUN_1097cec68((long)(char)pbVar13[2],lVar11,(long)&uStack_f8 + 4,adStack_e8);
      func_0x0001098016c0(dVar19,dVar18,param_3);
      pbVar6 = pbVar13 + 3;
    }
  }
  if (0x4b < bVar1) {
    if (bVar1 != 0x4c) {
      if (bVar1 != 0x4d) {
        return 0;
      }
      func_0x0001098017f0(param_3);
      goto LAB_1097ce9d0;
    }
    func_0x0001098017f0(param_3);
    goto LAB_1097ceaf4;
  }
  if (bVar1 != 0x43) {
    if (bVar1 != 0x45) {
      return 0;
    }
    func_0x0001098017f0(param_3);
LAB_1097ceb54:
    func_0x000109801194(param_3);
    func_0x000109801408(0x3f847ae147ae147b,param_3);
    func_0x0001098014f8(param_3,1);
    func_0x0001098014ac(param_3,1);
    func_0x000109801454(0x3ff0000000000000,param_3);
    func_0x000109801590(puVar12[3],puVar12[4],param_3);
    func_0x000109801888(param_3);
    return 0;
  }
  func_0x0001098017f0(param_3);
  goto LAB_1097cea38;
LAB_1097cea14:
  pbVar6 = pbVar13 + 1;
  if (bVar1 != 0x58) {
    if (bVar1 != 99) {
      return 0;
    }
LAB_1097cea38:
    FUN_1097cec68((long)(char)pbVar13[1],lVar10,(ulong)adStack_120 | 4,adStack_120 + 1);
    dVar18 = dVar19;
    FUN_1097cec68((long)(char)pbVar13[2],lVar11,(long)&uStack_f8 + 4,adStack_e8);
    dVar14 = dVar18;
    FUN_1097cec68((long)(char)pbVar13[3],lVar10,(ulong)adStack_120 | 4,adStack_120 + 1);
    dVar15 = dVar14;
    FUN_1097cec68((long)(char)pbVar13[4],lVar11,(long)&uStack_f8 + 4,adStack_e8);
    dVar16 = dVar15;
    FUN_1097cec68((long)(char)pbVar13[5],lVar10,(ulong)adStack_120 | 4,adStack_120 + 1);
    dVar17 = dVar16;
    FUN_1097cec68((long)(char)pbVar13[6],lVar11,(long)&uStack_f8 + 4,adStack_e8);
    func_0x000109801758(dVar19,dVar18,dVar14,dVar15,dVar16,dVar17,param_3);
    pbVar6 = pbVar13 + 7;
  }
  goto LAB_1097ce984;
}



/* Entry: 1097cebd4; end: 1097cebe7;  */

undefined8 FUN_1097cebd4(undefined8 param_1,ulong param_2,ulong *param_3)

{
  if (0x7f < param_2) {
    param_2 = 0;
  }
  *param_3 = param_2;
  return 0;
}



/* Entry: 1097cebe8; end: 1097cec67;  */

void FUN_1097cebe8(double param_1,double param_2,long param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dStack_30;
  double dStack_28;
  
  if (*(int *)(param_3 + 4) == 0) {
    dStack_30 = param_2;
    dStack_28 = param_1;
    (**(code **)(*(long *)(param_3 + 0x20) + 0x150))(param_3,&dStack_28,&dStack_30);
    param_1 = dStack_28;
    param_2 = dStack_30;
  }
  dVar1 = param_2;
  if ((param_1 != 0.0) && (dVar1 = param_1, param_2 != 0.0)) {
    dVar1 = SQRT(param_2 * param_2 + param_1 * param_1);
  }
  *param_4 = dVar1;
  *param_5 = 1.0 / dVar1;
  return;
}



/* Entry: 1097cec68; end: 1097ced03;  */

double FUN_1097cec68(uint param_1,int param_2,byte *param_3,double *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double *pdVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    if ((uint)*param_3 == (param_1 & 0xff)) {
      return *param_4;
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
    uVar7 = (ulong)(param_2 - 1);
    while (pdVar6 = param_4, uVar7 != 0) {
      bVar1 = param_3[1];
      if ((uint)bVar1 == (param_1 & 0xff)) {
        return pdVar6[1];
      }
      bVar2 = *param_3;
      uVar7 = uVar7 - 1;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if ((int)param_1 <= (int)(char)bVar1) {
        uVar8 = (uint)bVar2;
        bVar5 = SBORROW4(uVar8,param_1);
        bVar3 = (int)(uVar8 - param_1) < 0;
        bVar4 = uVar8 == param_1;
      }
      param_4 = pdVar6 + 1;
      param_3 = param_3 + 1;
      if (bVar4 || bVar3 != bVar5) {
        return *pdVar6 + ((pdVar6[1] - *pdVar6) * (double)(int)(param_1 - bVar2)) /
                         (double)(int)((int)(char)bVar1 - (uint)bVar2);
      }
    }
  }
  return (double)(int)param_1 / 72.0;
}



/* Entry: 1097ced04; end: 1097cee0f;  */

undefined * FUN_1097ced04(long param_1,ulong param_2,ulong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  byte bVar9;
  ulong uStack_58;
  
  puVar6 = &UNK_10f580909;
  FUN_1097cee10();
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  puVar6 = &UNK_10f580910;
  FUN_1097cee94(&UNK_10f580910,&UNK_10dffdfb0,0x13,param_2,param_3,param_1 + 4);
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  puVar6 = &UNK_10f580917;
  FUN_1097cee94(&UNK_10f580917,&UNK_10dffe12c,4,param_2,param_3,param_1);
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  puVar6 = &UNK_10f58091d;
  FUN_1097cee94(&UNK_10f58091d,&UNK_10dffe17c,9,param_2,param_3,param_1 + 8);
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  puVar6 = &UNK_10f580925;
  FUN_1097cee94(&UNK_10f580925,&UNK_10dffe230,2,param_2,param_3,param_1 + 0x10);
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  iVar3 = 0xf58092f;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  iVar2 = iVar3;
  _strlen();
  if (iVar2 < (int)param_3) {
    _strncmp(&UNK_10f58092f,param_2,(long)iVar2);
    if ((iVar3 == 0) && (*(char *)(param_2 + (long)iVar2) == '=')) {
      param_2 = param_2 + (long)(iVar2 + 1);
      param_3 = (ulong)(uint)((int)param_3 - (iVar2 + 1));
      bVar9 = 1;
      goto LAB_1097cef1c;
    }
  }
  bVar9 = 0;
LAB_1097cef1c:
  lVar8 = 3;
  pcVar7 = "";
  while ((*pcVar7 == '\0' ||
         (pcVar4 = pcVar7, FUN_1097cee10(pcVar7,param_2,param_3), (int)pcVar4 == 0))) {
    pcVar7 = pcVar7 + 0x14;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      if (((bool)(bVar9 ^ 1)) ||
         (uVar5 = param_2, _strtol(param_2,&uStack_58,10), uStack_58 == param_2)) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = (undefined *)0x0;
        if ((uStack_58 == param_2 + (long)(int)param_3) && (uVar5 >> 0x1f == 0)) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = (int)uVar5;
          }
LAB_1097cefbc:
          puVar6 = (undefined *)0x1;
        }
      }
      return puVar6;
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(pcVar7 + -4);
  }
  goto LAB_1097cefbc;
}



/* Entry: 1097cee10; end: 1097cee93;  */

bool FUN_1097cee10(char *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  
  do {
    if (param_3 == 0) {
      return *param_1 == '\0';
    }
    cVar3 = *param_1;
    if (cVar3 == '\0') {
      return false;
    }
    bVar4 = *param_2;
    uVar1 = bVar4 + 0x20;
    if (0x19 < (int)(char)bVar4 - 0x41U) {
      uVar1 = (int)(char)bVar4;
    }
    if ((int)(char)bVar4 == 0) {
      return false;
    }
    while( true ) {
      param_1 = param_1 + 1;
      uVar2 = (uint)(byte)(cVar3 + 0x20);
      if (0x19 < (byte)(cVar3 + 0xbfU)) {
        uVar2 = (int)cVar3;
      }
      if (uVar2 == uVar1) break;
      if (uVar2 != 0x2d) {
        return false;
      }
      cVar3 = *param_1;
      if (cVar3 == '\0') {
        return false;
      }
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while( true );
}



/* Entry: 1097cee94; end: 1097cefdb;  */

undefined8
FUN_1097cee94(long param_1,long param_2,uint param_3,ulong param_4,ulong param_5,undefined4 *param_6
             )

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  ulong uStack_58;
  
  if (param_1 != 0) {
    lVar2 = param_1;
    _strlen();
    iVar7 = (int)lVar2;
    if (iVar7 < (int)param_5) {
      lVar2 = param_1;
      _strncmp(param_1,param_4,(long)iVar7);
      if (((int)lVar2 == 0) && (*(char *)(param_4 + (long)iVar7) == '=')) {
        param_4 = param_4 + (long)(iVar7 + 1);
        param_5 = (ulong)(uint)((int)param_5 - (iVar7 + 1));
        bVar6 = 1;
        goto LAB_1097cef1c;
      }
    }
  }
  bVar6 = 0;
LAB_1097cef1c:
  if (0 < (int)param_3) {
    uVar5 = (ulong)param_3;
    pcVar4 = (char *)(param_2 + 4);
    do {
      if ((*pcVar4 != '\0') &&
         (pcVar3 = pcVar4, FUN_1097cee10(pcVar4,param_4,param_5), (int)pcVar3 != 0)) {
        if (param_6 == (undefined4 *)0x0) {
          return 1;
        }
        *param_6 = *(undefined4 *)(pcVar4 + -4);
        return 1;
      }
      pcVar4 = pcVar4 + 0x14;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (bool)(bVar6 ^ 1);
  }
  if ((!bVar1) && (uVar5 = param_4, _strtol(param_4,&uStack_58,10), uStack_58 != param_4)) {
    if (uStack_58 != param_4 + (long)(int)param_5) {
      return 0;
    }
    if (uVar5 >> 0x1f == 0) {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = (int)uVar5;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 1097cefdc; end: 1097cf07b;  */

undefined8 FUN_1097cefdc(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    _pthread_mutex_lock(0x1132e0448);
    if (*(int *)(param_1 + 8) == 0) {
      *(int *)(param_1 + 8) = (int)param_2;
    }
    _pthread_mutex_unlock(0x1132e0448);
  }
  return param_2;
}



/* Entry: 1097cf07c; end: 1097cf083;  */

undefined8 FUN_1097cf07c(void)

{
  return 1;
}



/* Entry: 1097cf084; end: 1097cf1cf;  */

void FUN_1097cf084(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != -1)) {
    while (iVar1 != 1) {
      _pthread_mutex_lock(0x1132e0448);
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == iVar1) {
        *(int *)(param_1 + 0xc) = iVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132e0448);
        return;
      }
      _pthread_mutex_unlock(0x1132e0448);
      iVar1 = iVar2;
    }
    lVar3 = param_1;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    if ((int)lVar3 != 0) {
      func_0x0001097c55d4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1097cf1d0; end: 1097cf307;  */

bool FUN_1097cf1d0(int *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if ((((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) &&
     (((param_1[4] == param_2[4] && (param_1[5] == param_2[5])) &&
      ((param_1[8] == param_2[8] &&
       ((param_1[9] == param_2[9] && (uVar1 = param_1[0xc], uVar1 == param_2[0xc])))))))) {
    lVar4 = *(long *)(param_1 + 6);
    lVar3 = *(long *)(param_2 + 6);
    if (lVar4 == 0) {
      if (lVar3 != 0) {
        return false;
      }
    }
    else {
      if (lVar3 == 0) {
        return false;
      }
      lVar2 = lVar4;
      _strcmp(lVar4,lVar3);
      if ((int)lVar2 != 0) {
        return false;
      }
      if (lVar4 != lVar3) {
        return false;
      }
    }
    lVar4 = *(long *)(param_1 + 10);
    lVar3 = *(long *)(param_2 + 10);
    if (((lVar4 == 0) || (lVar3 == 0)) ||
       (lVar2 = lVar4, _memcmp(lVar4,lVar3,(ulong)uVar1 * 0x28), (int)lVar2 == 0)) {
      return lVar4 == lVar3;
    }
  }
  return false;
}



/* Entry: 1097cf308; end: 1097cf357;  */

void FUN_1097cf308(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dffe2e0)) {
    _free(*(undefined8 *)(param_1 + 0x18));
    _free(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1097cf358; end: 1097cf4af;  */

void FUN_1097cf358(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if ((param_1 != (int *)0x0) &&
     ((param_1 != (int *)&UNK_10dffe2e0 && param_2 != (int *)0x0) &&
      param_2 != (int *)&UNK_10dffe2e0)) {
    if (*param_2 != 0) {
      *param_1 = *param_2;
    }
    if (param_2[1] != 0) {
      param_1[1] = param_2[1];
    }
    if (param_2[2] != 0) {
      param_1[2] = param_2[2];
    }
    if (param_2[3] != 0) {
      param_1[3] = param_2[3];
    }
    if (param_2[4] != 0) {
      param_1[4] = param_2[4];
    }
    if (param_2[5] != 0) {
      param_1[5] = param_2[5];
    }
    puVar1 = *(undefined1 **)(param_2 + 6);
    if (puVar1 != (undefined1 *)0x0) {
      lVar3 = *(long *)(param_1 + 6);
      if (lVar3 == 0) {
        _strdup();
      }
      else {
        _strlen();
        _strlen();
        puVar1 = puVar1 + lVar3 + 2;
        _malloc();
        *puVar1 = 0;
        puVar2 = puVar1;
        _strcat();
        _strlen();
        *(undefined2 *)(puVar1 + (long)puVar2) = 0x2c;
        _strcat(puVar1,*(undefined8 *)(param_2 + 6));
        _free(*(undefined8 *)(param_1 + 6));
      }
      *(undefined1 **)(param_1 + 6) = puVar1;
    }
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
    }
    if (param_2[9] != 0) {
      param_1[9] = param_2[9];
    }
    if (*(long *)(param_2 + 10) != 0) {
      param_1[0xc] = param_2[0xc];
      _free(*(undefined8 *)(param_1 + 10));
      lVar3 = (ulong)(uint)param_1[0xc] * 0x28;
      _malloc();
      *(long *)(param_1 + 10) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)();
      return;
    }
  }
  return;
}



/* Entry: 1097cf4b0; end: 1097cf69f;  */

bool FUN_1097cf4b0(int *param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (param_1 == (int *)&UNK_10dffe2e0) {
    return false;
  }
  if (param_2 == (int *)0x0) {
    return false;
  }
  if (param_2 != (int *)&UNK_10dffe2e0) {
    if (param_1 == param_2) {
      return true;
    }
    if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
        ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) && (param_1[5] == param_2[5])) {
      lVar2 = *(long *)(param_1 + 6);
      if (lVar2 == 0) {
        if (*(long *)(param_2 + 6) != 0) {
          return false;
        }
      }
      else {
        if (*(long *)(param_2 + 6) == 0) {
          return false;
        }
        _strcmp();
        if ((int)lVar2 != 0) {
          return false;
        }
      }
      if ((param_1[8] == param_2[8]) && (param_1[9] == param_2[9])) {
        lVar2 = *(long *)(param_1 + 10);
        lVar3 = *(long *)(param_2 + 10);
        bVar1 = lVar2 == 0 && lVar3 == 0;
        if (lVar2 == 0) {
          return bVar1;
        }
        if (lVar3 == 0) {
          return bVar1;
        }
        if (param_1[0xc] == param_2[0xc]) {
          _memcmp(lVar2,lVar3,(ulong)(uint)param_1[0xc] * 0x28);
          return (int)lVar2 == 0;
        }
      }
    }
    return false;
  }
  return false;
}



/* Entry: 1097cf6a0; end: 1097cf7af;  */

void FUN_1097cf6a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  while (plVar1 != (long *)(param_1 + 0x20)) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  return;
}



/* Entry: 1097cf7b0; end: 1097cf8f7;  */

undefined4 FUN_1097cf7b0(undefined4 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 4) = 0x3fb999999999999a;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x4024000000000000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x4024000000000000;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x4024000000000000;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  FUN_1097f6324(param_2);
  *(long *)(param_1 + 0x3c) = param_2;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  FUN_1097f6324(param_2);
  lVar2 = *(long *)(param_1 + 0x3c);
  plVar3 = (long *)(lVar2 + 200);
  lVar4 = *plVar3;
  *(undefined4 **)(lVar4 + 8) = param_1 + 0x42;
  *(long *)(param_1 + 0x40) = param_2;
  *(long *)(param_1 + 0x42) = lVar4;
  *(long **)(param_1 + 0x44) = plVar3;
  *(code **)(param_1 + 0x46) = FUN_1097cf8f8;
  *plVar3 = (long)(param_1 + 0x42);
  if ((((*(double *)(lVar2 + 0x68) == 1.0) && (*(double *)(lVar2 + 0x70) == 0.0)) &&
      (*(double *)(lVar2 + 0x78) == 0.0)) &&
     ((*(double *)(lVar2 + 0x80) == 1.0 && (*(double *)(lVar2 + 0x88) == 0.0)))) {
    uVar1 = (uint)(*(double *)(lVar2 + 0x90) == 0.0);
  }
  else {
    uVar1 = 0;
  }
  param_1[0x6c] = uVar1;
  *(undefined8 *)(param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x4a);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x4e);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_1 + 0x52);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x4a);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 0x4e);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x6a) = *(undefined8 *)(param_1 + 0x52);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x6e) = &UNK_10dffe5c0;
  return *(undefined4 *)(param_2 + 0x1c);
}



/* Entry: 1097cf8f8; end: 1097cf99f;  */

void FUN_1097cf8f8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((((((*(double *)(param_1 + 0x18) == 1.0) && (*(double *)(param_1 + 0x20) == 0.0)) &&
        (*(double *)(param_1 + 0x28) == 0.0)) &&
       ((*(double *)(param_1 + 0x30) == 1.0 && (*(double *)(param_1 + 0x38) == 0.0)))) &&
      ((*(double *)(param_1 + 0x40) == 0.0 &&
       ((lVar2 = *(long *)(param_1 + -0x18), *(double *)(lVar2 + 0x68) == 1.0 &&
        (*(double *)(lVar2 + 0x70) == 0.0)))))) &&
     ((*(double *)(lVar2 + 0x78) == 0.0 &&
      ((*(double *)(lVar2 + 0x80) == 1.0 && (*(double *)(lVar2 + 0x88) == 0.0)))))) {
    uVar1 = (uint)(*(double *)(lVar2 + 0x90) == 0.0);
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xa8) = uVar1;
  return;
}



/* Entry: 1097cf9a0; end: 1097cfa53;  */

void FUN_1097cf9a0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  _free(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  _free(*(undefined8 *)(param_1 + 200));
  _free(*(undefined8 *)(param_1 + 0xd8));
  FUN_1097cf084(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1097ef278(*(undefined8 *)(param_1 + 0x78),0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_1097ef278(*(undefined8 *)(param_1 + 0x70),0);
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1097ca284(*(undefined8 *)(param_1 + 0xe8));
  lVar1 = *(long *)(param_1 + 0x108);
  plVar2 = *(long **)(param_1 + 0x110);
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x108) = param_1 + 0x108;
  *(long *)(param_1 + 0x110) = param_1 + 0x108;
  FUN_1097f61ac(*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_1097f61ac(*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1097f61ac(*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_1097e4880(*(undefined8 *)(param_1 + 0x1b8));
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  return;
}



/* Entry: 1097cfa54; end: 1097cfbcf;  */

undefined4 * FUN_1097cfa54(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar5 = (undefined4 *)*param_2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x1;
    _calloc(1,0x1c8);
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x1;
    }
  }
  else {
    *param_2 = *(undefined8 *)(puVar5 + 0x70);
  }
  puVar6 = (undefined4 *)*param_1;
  *puVar5 = *puVar6;
  uVar2 = *(undefined8 *)(puVar6 + 2);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(puVar5 + 2) = uVar2;
  puVar5[6] = puVar6[6];
  puVar1 = puVar5 + 8;
  FUN_1097f3e34(puVar1,puVar6 + 8);
  if ((int)puVar1 == 0) {
    puVar5[0x18] = puVar6[0x18];
    uVar2 = *(undefined8 *)(puVar6 + 0x1a);
    func_0x0001097cf028();
    *(undefined8 *)(puVar5 + 0x1a) = uVar2;
    uVar2 = *(undefined8 *)(puVar6 + 0x1c);
    func_0x0001097efce0();
    *(undefined8 *)(puVar5 + 0x1c) = uVar2;
    uVar2 = *(undefined8 *)(puVar6 + 0x1e);
    func_0x0001097efce0();
    *(undefined8 *)(puVar5 + 0x1e) = uVar2;
    uVar7 = *(undefined8 *)(puVar6 + 0x22);
    uVar2 = *(undefined8 *)(puVar6 + 0x20);
    uVar8 = *(undefined8 *)(puVar6 + 0x24);
    uVar10 = *(undefined8 *)(puVar6 + 0x2a);
    uVar9 = *(undefined8 *)(puVar6 + 0x28);
    *(undefined8 *)(puVar5 + 0x26) = *(undefined8 *)(puVar6 + 0x26);
    *(undefined8 *)(puVar5 + 0x24) = uVar8;
    *(undefined8 *)(puVar5 + 0x2a) = uVar10;
    *(undefined8 *)(puVar5 + 0x28) = uVar9;
    *(undefined8 *)(puVar5 + 0x22) = uVar7;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    func_0x0001097cf140(puVar5 + 0x2c,puVar6 + 0x2c);
    uVar2 = *(undefined8 *)(puVar6 + 0x3a);
    FUN_1097ca2ec();
    *(undefined8 *)(puVar5 + 0x3a) = uVar2;
    uVar2 = *(undefined8 *)(puVar6 + 0x3c);
    FUN_1097f6324();
    *(undefined8 *)(puVar5 + 0x3c) = uVar2;
    *(undefined8 *)(puVar5 + 0x3e) = 0;
    uVar2 = *(undefined8 *)(puVar6 + 0x40);
    FUN_1097f6324();
    plVar3 = (long *)(*(long *)(puVar5 + 0x3c) + 200);
    lVar4 = *plVar3;
    *(undefined4 **)(lVar4 + 8) = puVar5 + 0x42;
    *(undefined8 *)(puVar5 + 0x40) = uVar2;
    *(long *)(puVar5 + 0x42) = lVar4;
    *(long **)(puVar5 + 0x44) = plVar3;
    *(code **)(puVar5 + 0x46) = FUN_1097cf8f8;
    *plVar3 = (long)(puVar5 + 0x42);
    puVar5[0x6c] = puVar6[0x6c];
    uVar8 = *(undefined8 *)(puVar6 + 0x4a);
    uVar7 = *(undefined8 *)(puVar6 + 0x48);
    uVar2 = *(undefined8 *)(puVar6 + 0x4c);
    uVar10 = *(undefined8 *)(puVar6 + 0x52);
    uVar9 = *(undefined8 *)(puVar6 + 0x50);
    *(undefined8 *)(puVar5 + 0x4e) = *(undefined8 *)(puVar6 + 0x4e);
    *(undefined8 *)(puVar5 + 0x4c) = uVar2;
    *(undefined8 *)(puVar5 + 0x52) = uVar10;
    *(undefined8 *)(puVar5 + 0x50) = uVar9;
    *(undefined8 *)(puVar5 + 0x4a) = uVar8;
    *(undefined8 *)(puVar5 + 0x48) = uVar7;
    uVar8 = *(undefined8 *)(puVar6 + 0x58);
    uVar7 = *(undefined8 *)(puVar6 + 0x5e);
    uVar2 = *(undefined8 *)(puVar6 + 0x5c);
    uVar10 = *(undefined8 *)(puVar6 + 0x56);
    uVar9 = *(undefined8 *)(puVar6 + 0x54);
    *(undefined8 *)(puVar5 + 0x5a) = *(undefined8 *)(puVar6 + 0x5a);
    *(undefined8 *)(puVar5 + 0x58) = uVar8;
    *(undefined8 *)(puVar5 + 0x5e) = uVar7;
    *(undefined8 *)(puVar5 + 0x5c) = uVar2;
    *(undefined8 *)(puVar5 + 0x56) = uVar10;
    *(undefined8 *)(puVar5 + 0x54) = uVar9;
    uVar8 = *(undefined8 *)(puVar6 + 0x62);
    uVar7 = *(undefined8 *)(puVar6 + 0x60);
    uVar2 = *(undefined8 *)(puVar6 + 100);
    uVar10 = *(undefined8 *)(puVar6 + 0x6a);
    uVar9 = *(undefined8 *)(puVar6 + 0x68);
    *(undefined8 *)(puVar5 + 0x66) = *(undefined8 *)(puVar6 + 0x66);
    *(undefined8 *)(puVar5 + 100) = uVar2;
    *(undefined8 *)(puVar5 + 0x6a) = uVar10;
    *(undefined8 *)(puVar5 + 0x68) = uVar9;
    *(undefined8 *)(puVar5 + 0x62) = uVar8;
    *(undefined8 *)(puVar5 + 0x60) = uVar7;
    uVar2 = *(undefined8 *)(puVar6 + 0x6e);
    func_0x0001097e482c();
    *(undefined8 *)(puVar5 + 0x6e) = uVar2;
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x70) = *param_1;
    param_2 = param_1;
  }
  else {
    *(undefined8 *)(puVar5 + 0x70) = *param_2;
  }
  *param_2 = puVar5;
  return puVar1;
}



/* Entry: 1097cfbd0; end: 1097cfcbb;  */

undefined8 FUN_1097cfbd0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf0);
  FUN_1097f6324(param_2);
  *(long *)(param_1 + 0xf0) = param_2;
  if ((((*(double *)(param_2 + 0x68) == 1.0) && (*(double *)(param_2 + 0x70) == 0.0)) &&
      (*(double *)(param_2 + 0x78) == 0.0)) &&
     ((*(double *)(param_2 + 0x80) == 1.0 && (*(double *)(param_2 + 0x88) == 0.0)))) {
    uVar4 = (uint)(*(double *)(param_2 + 0x90) == 0.0);
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) & uVar4;
  lVar1 = *(long *)(param_1 + 0x108);
  plVar2 = *(long **)(param_1 + 0x110);
  *plVar2 = lVar1;
  plVar6 = (long *)(param_2 + 200);
  lVar5 = *plVar6;
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar5 + 8) = param_1 + 0x108;
  *(long *)(param_1 + 0x108) = lVar5;
  *(long **)(param_1 + 0x110) = plVar6;
  *plVar6 = param_1 + 0x108;
  FUN_1097ca284(*(undefined8 *)(param_1 + 0xe8));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0xe8);
  FUN_1097caea4(uVar3,(int)(*(double *)(param_2 + 0x88) -
                           *(double *)(*(long *)(param_1 + 0xf8) + 0x88)),
                (int)(*(double *)(param_2 + 0x90) - *(double *)(*(long *)(param_1 + 0xf8) + 0x90)));
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  return 0;
}



/* Entry: 1097cfcbc; end: 1097cfd13;  */

int FUN_1097cfcbc(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    func_0x0001097e482c(param_2);
    FUN_1097e4880(*(undefined8 *)(param_1 + 0x1b8));
    *(long *)(param_1 + 0x1b8) = param_2;
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x170);
  }
  return iVar1;
}



/* Entry: 1097cfd14; end: 1097cfe9b;  */

undefined8 FUN_1097cfd14(double param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _free(*(undefined8 *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x40) = param_4;
  if (param_4 == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
LAB_1097cfe0c:
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  else {
    lVar1 = (ulong)param_4 << 3;
    _malloc();
    *(long *)(param_2 + 0x38) = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_2 + 0x40) = 0;
      return 1;
    }
    if (0 < (int)param_4) {
      iVar5 = 0;
      uVar3 = 0;
      dVar6 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
      uVar4 = param_4;
      do {
        dVar9 = *(double *)(param_3 + (long)(int)uVar3 * 8);
        if (dVar9 < 0.0) goto LAB_1097cfdfc;
        if (((int)uVar3 < 1) || (dVar9 != 0.0 || (int)(param_4 - 1) <= (int)uVar3)) {
          *(double *)(lVar1 + (long)iVar5 * 8) = dVar9;
          iVar5 = iVar5 + 1;
        }
        else {
          uVar3 = uVar3 + 1;
          dVar9 = *(double *)(param_3 + (ulong)uVar3 * 8);
          if (dVar9 < 0.0) goto LAB_1097cfdfc;
          *(double *)(lVar1 + -8 + (long)iVar5 * 8) =
               dVar9 + *(double *)(lVar1 + -8 + (long)iVar5 * 8);
          uVar4 = uVar4 - 2;
          *(uint *)(param_2 + 0x40) = uVar4;
        }
        if (dVar9 != 0.0) {
          dVar8 = dVar8 + dVar9;
          if ((uVar3 & 1) == 0) {
            dVar7 = dVar7 + dVar9;
          }
          else {
            dVar6 = dVar6 + dVar9;
          }
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)param_4);
      if (dVar8 != 0.0) {
        if ((uVar4 & 1) != 0) {
          dVar7 = dVar7 + dVar6;
          dVar8 = dVar8 + dVar8;
        }
        if (0.001953125 <= dVar8 - dVar7) {
          _fmod(param_1,dVar8);
          dVar8 = dVar8 + param_1;
          if (0.0 <= param_1) {
            dVar8 = param_1;
          }
          dVar7 = 0.0;
          if (0.0 < dVar8) {
            dVar7 = dVar8;
          }
          *(double *)(param_2 + 0x48) = dVar7;
          return 0;
        }
        _free();
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x40) = 0;
        goto LAB_1097cfe0c;
      }
    }
LAB_1097cfdfc:
    uVar2 = 0x13;
  }
  return uVar2;
}



/* Entry: 1097cfe9c; end: 1097cfefb;  */

void FUN_1097cfe9c(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  if (param_2 != 0) {
    _memcpy(param_2,*(undefined8 *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x40) << 3);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}



/* Entry: 1097cfefc; end: 1097d00ef;  */

undefined8 FUN_1097cfefc(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  double dStack_38;
  
  uVar1 = 5;
  if ((0.0 <= param_1 * param_1) && (0.0 <= param_2 * param_2)) {
    lVar2 = *(long *)(param_3 + 0x70);
    if (lVar2 != 0) {
      if (*(long *)(param_3 + 0x78) != 0) {
        FUN_1097ef278(*(long *)(param_3 + 0x78),0);
        lVar2 = *(long *)(param_3 + 0x70);
      }
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(long *)(param_3 + 0x78) = lVar2;
    }
    uStack_60 = 0x3ff0000000000000;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x3ff0000000000000;
    dStack_40 = param_1;
    dStack_38 = param_2;
    func_0x0001097d92b4(param_3 + 0x120,&uStack_60,param_3 + 0x120);
    *(undefined4 *)(param_3 + 0x1b0) = 0;
    dVar3 = -(*(double *)(param_3 + 0x128) * *(double *)(param_3 + 0x130)) +
            *(double *)(param_3 + 0x138) * *(double *)(param_3 + 0x120);
    uVar1 = 5;
    if ((dVar3 != 0.0) && (0.0 <= dVar3 * dVar3)) {
      dStack_40 = -param_1;
      dStack_38 = -param_2;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0x3ff0000000000000;
      uStack_48 = 0x3ff0000000000000;
      func_0x0001097d92b4(param_3 + 0x150,param_3 + 0x150,&uStack_60);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 1097d00f0; end: 1097d01eb;  */

undefined8 FUN_1097d00f0(double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0.0) {
    return 0;
  }
  if (0.0 <= param_1 * param_1) {
    lVar2 = *(long *)(param_3 + 0x70);
    if (lVar2 != 0) {
      if (*(long *)(param_3 + 0x78) != 0) {
        FUN_1097ef278(*(long *)(param_3 + 0x78),0);
        lVar2 = *(long *)(param_3 + 0x70);
      }
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(long *)(param_3 + 0x78) = lVar2;
    }
    ___sincos_stret();
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_70 = param_2;
    dStack_68 = param_1;
    dStack_60 = -param_1;
    uStack_58 = param_2;
    func_0x0001097d92b4(param_3 + 0x120,&uStack_70,param_3 + 0x120);
    *(undefined4 *)(param_3 + 0x1b0) = 0;
    dVar3 = -(*(double *)(param_3 + 0x128) * *(double *)(param_3 + 0x130)) +
            *(double *)(param_3 + 0x138) * *(double *)(param_3 + 0x120);
    uVar1 = 5;
    if ((dVar3 != 0.0) && (0.0 <= dVar3 * dVar3)) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_70 = param_2;
      dStack_68 = -param_1;
      dStack_60 = param_1;
      uStack_58 = param_2;
      func_0x0001097d92b4(param_3 + 0x150,param_3 + 0x150,&uStack_70);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1097d01ec; end: 1097d0517;  */

void FUN_1097d01ec(long param_1,double *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  iVar4 = (int)&dStack_50;
  dVar8 = -param_2[1] * param_2[2] + *param_2 * param_2[3];
  if ((dVar8 != 0.0) && (0.0 <= dVar8 * dVar8)) {
    lVar5 = -(ulong)(param_2[2] == 0.0);
    lVar3 = -(ulong)(param_2[3] == 1.0);
    lVar6 = -(ulong)(*param_2 == 1.0);
    lVar7 = -(ulong)(param_2[1] == 0.0);
    auVar1[1] = ~(byte)((ulong)lVar6 >> 8);
    auVar1[0] = ~(byte)lVar6;
    auVar1[2] = ~(byte)((ulong)lVar6 >> 0x10);
    auVar1[3] = ~(byte)((ulong)lVar6 >> 0x18);
    auVar1[4] = ~(byte)lVar7;
    auVar1[5] = ~(byte)((ulong)lVar7 >> 8);
    auVar1[6] = ~(byte)((ulong)lVar7 >> 0x10);
    auVar1[7] = ~(byte)((ulong)lVar7 >> 0x18);
    auVar1[8] = ~(byte)lVar5;
    auVar1[9] = ~(byte)((ulong)lVar5 >> 8);
    auVar1[10] = ~(byte)((ulong)lVar5 >> 0x10);
    auVar1[0xb] = ~(byte)((ulong)lVar5 >> 0x18);
    auVar1[0xc] = ~(byte)lVar3;
    auVar1[0xd] = ~(byte)((ulong)lVar3 >> 8);
    auVar1[0xe] = ~(byte)((ulong)lVar3 >> 0x10);
    auVar1[0xf] = ~(byte)((ulong)lVar3 >> 0x18);
    uVar2 = NEON_umaxv(auVar1,4);
    if (((uVar2 & 1) != 0) || ((param_2[4] != 0.0 || (param_2[5] != 0.0)))) {
      dStack_48 = param_2[1];
      dStack_50 = *param_2;
      dStack_38 = param_2[3];
      dStack_40 = param_2[2];
      dStack_28 = param_2[5];
      dStack_30 = param_2[4];
      FUN_1097d95c8();
      if (iVar4 == 0) {
        lVar5 = *(long *)(param_1 + 0x70);
        if (lVar5 != 0) {
          if (*(long *)(param_1 + 0x78) != 0) {
            FUN_1097ef278(*(long *)(param_1 + 0x78),0);
            lVar5 = *(long *)(param_1 + 0x70);
          }
          *(undefined8 *)(param_1 + 0x70) = 0;
          *(long *)(param_1 + 0x78) = lVar5;
        }
        func_0x0001097d92b4(param_1 + 0x120,param_2,param_1 + 0x120);
        func_0x0001097d92b4(param_1 + 0x150,param_1 + 0x150,&dStack_50);
        *(undefined4 *)(param_1 + 0x1b0) = 0;
      }
    }
  }
  return;
}



/* Entry: 1097d0518; end: 1097d06e7;  */

void FUN_1097d0518(long param_1,double *param_2,double *param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *param_2;
  dVar3 = *param_3;
  dVar4 = *(double *)(param_1 + 0x138);
  dVar5 = *(double *)(param_1 + 0x128);
  *param_2 = *(double *)(param_1 + 0x130) * dVar3 + dVar2 * *(double *)(param_1 + 0x120);
  *param_3 = dVar3 * dVar4 + dVar2 * dVar5;
  *param_2 = *(double *)(param_1 + 0x140) + *param_2;
  dVar2 = *(double *)(param_1 + 0x148) + *param_3;
  *param_3 = dVar2;
  lVar1 = *(long *)(param_1 + 0xf0);
  dVar3 = *param_2;
  dVar4 = *(double *)(lVar1 + 0x80);
  dVar5 = *(double *)(lVar1 + 0x70);
  *param_2 = dVar2 * *(double *)(lVar1 + 0x78) + dVar3 * *(double *)(lVar1 + 0x68);
  *param_3 = dVar2 * dVar4 + dVar3 * dVar5;
  *param_2 = *(double *)(lVar1 + 0x88) + *param_2;
  *param_3 = *(double *)(lVar1 + 0x90) + *param_3;
  return;
}



/* Entry: 1097d06e8; end: 1097d0803;  */

void FUN_1097d06e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  long lVar1;
  undefined1 auStack_70 [48];
  
  lVar1 = *(long *)(param_1 + 0xf0);
  if (((((*(double *)(lVar1 + 0x98) == 1.0) && (*(double *)(lVar1 + 0xa0) == 0.0)) &&
       (*(double *)(lVar1 + 0xa8) == 0.0)) &&
      ((((*(double *)(lVar1 + 0xb0) == 1.0 && (*(double *)(lVar1 + 0xb8) == 0.0)) &&
        ((*(double *)(lVar1 + 0xc0) == 0.0 &&
         ((*(double *)(param_1 + 0x150) == 1.0 && (*(double *)(param_1 + 0x158) == 0.0)))))) &&
       (*(double *)(param_1 + 0x160) == 0.0)))) &&
     (((*(double *)(param_1 + 0x168) == 1.0 && (*(double *)(param_1 + 0x170) == 0.0)) &&
      (*(double *)(param_1 + 0x178) == 0.0)))) {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 1;
    }
  }
  else {
    func_0x0001097d92b4(auStack_70,(double *)(lVar1 + 0x98),param_1 + 0x150);
    FUN_1097d92f0(auStack_70,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 1097d0804; end: 1097d08bb;  */

void FUN_1097d0804(undefined8 param_1,long param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    dStack_40 = 0.0;
    dStack_38 = 0.0;
    dStack_50 = 0.0;
    dStack_48 = 0.0;
  }
  else {
    dStack_38 = (double)*(int *)(param_2 + 0x14) / 256.0;
    dStack_40 = (double)*(int *)(param_2 + 0x18) / 256.0;
    dStack_48 = (double)*(int *)(param_2 + 0x1c) / 256.0;
    dStack_50 = (double)*(int *)(param_2 + 0x20) / 256.0;
    FUN_1097d06e8(param_1,&dStack_38,&dStack_40,&dStack_48,&dStack_50,0);
  }
  if (param_3 != (double *)0x0) {
    *param_3 = dStack_38;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = dStack_40;
  }
  if (param_5 != (double *)0x0) {
    *param_5 = dStack_48;
  }
  if (param_6 != (double *)0x0) {
    *param_6 = dStack_50;
  }
  return;
}



/* Entry: 1097d08bc; end: 1097d098b;  */

void FUN_1097d08bc(int *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined auStack_160 [288];
  
  puVar4 = auStack_160;
  lVar2 = *(long *)(param_1 + 0x6e);
  if ((((*(int *)(lVar2 + 0x30) != 4) || (*(long *)(lVar2 + 0x98) == 0)) &&
      (*(int *)(lVar2 + 4) == 0)) &&
     ((*param_1 != 6 && (lVar3 = *(long *)(param_1 + 0x3a), lVar3 != 0x11386a1e0)))) {
    piVar1 = param_1;
    FUN_1097d098c();
    if ((int)piVar1 == 0) {
      puVar4 = &UNK_10dffe668;
    }
    else {
      FUN_1097d27a8(param_1,auStack_160,lVar2,param_1 + 0x60);
      lVar3 = *(long *)(param_1 + 0x3a);
    }
    FUN_1097f67b0(*(undefined8 *)(param_1 + 0x3c),piVar1,puVar4,lVar3);
  }
  return;
}



/* Entry: 1097d098c; end: 1097d0a23;  */

uint FUN_1097d098c(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x6e);
    if (*(int *)(lVar2 + 0x30) == 1) {
      uVar1 = 1;
      if ((*(byte *)(*(long *)(lVar2 + 0x80) + 0x30) >> 2 & 1) != 0) {
        return (*(uint *)(*(long *)(lVar2 + 0x80) + 0x14) >> 0xd ^ 0xffffffff) & 1;
      }
    }
    else {
      if (*(int *)(lVar2 + 0x30) != 0) {
        return (uint)(*(int *)(lVar2 + 0x80) != 0);
      }
      if (*(ushort *)(lVar2 + 0xa6) < 0x100) {
        return 0;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x3c) + 0x15) >> 5 & 1) != 0) {
        return 1;
      }
      uVar1 = (uint)(0xff < (ushort)(*(ushort *)(lVar2 + 0xa2) | *(ushort *)(lVar2 + 0xa0) |
                                    *(ushort *)(lVar2 + 0xa4)));
    }
  }
  return uVar1;
}



/* Entry: 1097d0a24; end: 1097d0c8b;  */

void FUN_1097d0a24(uint *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  double *pdVar7;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  undefined1 auStack_290 [48];
  int iStack_260;
  int iStack_254;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
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
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  
  if (((((*(int *)(param_2 + 0x30) != 4) || (*(long *)(param_2 + 0x98) == 0)) &&
       (*(int *)(param_2 + 4) == 0)) &&
      ((lVar3 = *(long *)(param_1 + 0x6e), *(int *)(lVar3 + 0x30) != 4 ||
       (*(long *)(lVar3 + 0x98) == 0)))) &&
     ((*(int *)(lVar3 + 4) == 0 && ((*param_1 != 6 && (*(long *)(param_1 + 0x3a) != 0x11386a1e0)))))
     ) {
    lVar3 = param_2;
    FUN_1097e59e8(param_2,0);
    if ((int)lVar3 != 0) {
      puVar6 = auStack_160;
      lVar3 = *(long *)(param_1 + 0x6e);
      if ((((*(int *)(lVar3 + 0x30) != 4) || (*(long *)(lVar3 + 0x98) == 0)) &&
          (*(int *)(lVar3 + 4) == 0)) &&
         ((*param_1 != 6 && (lVar4 = *(long *)(param_1 + 0x3a), lVar4 != 0x11386a1e0)))) {
        puVar2 = param_1;
        FUN_1097d098c();
        if ((int)puVar2 == 0) {
          puVar6 = (undefined4 *)&UNK_10dffe668;
        }
        else {
          FUN_1097d27a8(param_1,auStack_160,lVar3,param_1 + 0x60);
          lVar4 = *(long *)(param_1 + 0x3a);
        }
        FUN_1097f67b0(*(undefined8 *)(param_1 + 0x3c),puVar2,puVar6,lVar4);
      }
      return;
    }
    lVar3 = param_2;
    FUN_1097e5818();
    if ((((int)lVar3 == 0) || (0x1c < *param_1)) ||
       ((0x1ffffae7U >> (ulong)(*param_1 & 0x1f) & 1) == 0)) {
      pdVar7 = &dStack_f0;
      puVar2 = param_1;
      FUN_1097d098c();
      uVar1 = (uint)puVar2;
      if (uVar1 == 0) {
        puVar5 = (undefined8 *)&UNK_10dffe668;
        pdVar7 = (double *)&UNK_10dffe6e8;
      }
      else {
        puVar5 = &uStack_170;
        FUN_1097d27a8(param_1,&uStack_170,*(undefined8 *)(param_1 + 0x6e),param_1 + 0x60);
      }
      FUN_1097d27a8(param_1,auStack_290,param_2,param_1 + 0x54);
      if (((*(int *)(puVar5 + 6) == 0) && (*(int *)(puVar5 + 8) == 0 && iStack_260 == 0)) &&
         ((uVar1 - 0xb < 0x12 || ((uVar1 < 10 && ((1 << (ulong)(uVar1 & 0x1f) & 0x2e4U) != 0)))))) {
        if (iStack_254 == 0) {
          dStack_2b8 = pdVar7[1];
          dStack_2c0 = *pdVar7;
          dStack_2b0 = pdVar7[2];
          dStack_2a0 = pdVar7[4];
          dStack_2a8 = dStack_1f8 * pdVar7[3];
          FUN_1097cb1e0(&dStack_2c0);
        }
        else {
          dStack_2c0 = (double)puVar5[0x10] * dStack_210;
          dStack_2b8 = (double)puVar5[0x11] * dStack_208;
          dStack_2b0 = pdVar7[2] * dStack_200;
          dStack_2a8 = pdVar7[3] * dStack_1f8;
        }
        uStack_170 = 0;
        uStack_168 = 0;
        auStack_160[0] = 0x18;
        uStack_100 = 0;
        uStack_f8 = 0x3ff0000000000000;
        uStack_138 = 3;
        uStack_140 = 0x100000000;
        uStack_130 = 0x100000000;
        uStack_128 = 0x3ff0000000000000;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0x3ff0000000000000;
        uStack_108 = 0;
        pppuStack_150 = &pppuStack_150;
        uStack_158 = 0;
        dStack_d0 = dStack_2a0;
        dStack_e8 = dStack_2b8;
        dStack_f0 = dStack_2c0;
        dStack_d8 = dStack_2a8;
        dStack_e0 = dStack_2b0;
        pppuStack_148 = pppuStack_150;
        FUN_1097f67b0(*(undefined8 *)(param_1 + 0x3c),puVar2,&uStack_170,
                      *(undefined8 *)(param_1 + 0x3a));
      }
      else {
        FUN_1097f72c4(*(undefined8 *)(param_1 + 0x3c),puVar2,puVar5,auStack_290,
                      *(undefined8 *)(param_1 + 0x3a));
      }
    }
  }
  return;
}



/* Entry: 1097d0c8c; end: 1097d0fe7;  */

ulong FUN_1097d0c8c(undefined8 param_1,double param_2,uint *param_3,ulong param_4,
                   undefined4 *param_5)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  undefined8 uVar13;
  undefined4 uStack_568;
  undefined8 uStack_564;
  undefined8 uStack_55c;
  undefined8 *puStack_550;
  undefined4 uStack_548;
  undefined1 uStack_544;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  undefined1 auStack_530 [640];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined1 auStack_230 [48];
  undefined1 auStack_200 [48];
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_188 [72];
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = (undefined4)param_1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_3 + 0x6e);
  if ((*(int *)(lVar5 + 0x30) == 4) && (*(long *)(lVar5 + 0x98) != 0)) {
    uVar3 = 0x24;
  }
  else {
    uVar3 = (ulong)*(uint *)(lVar5 + 4);
    if (*(uint *)(lVar5 + 4) == 0) {
      if (*param_3 != 6) {
        pdVar6 = (double *)(param_3 + 8);
        dVar1 = *pdVar6;
        uVar9 = SUB84(dVar1,0);
        uVar10 = (undefined4)((ulong)dVar1 >> 0x20);
        if (((0.0 < dVar1) || (param_3[0x14] != 0)) && (*(long *)(param_3 + 0x3a) != 0x11386a1e0)) {
          lVar7 = *(long *)(param_3 + 0x3c);
          func_0x0001097d92b4(auStack_200,param_3 + 0x48,lVar7 + 0x68);
          func_0x0001097d92b4(auStack_230,lVar7 + 0x98,param_3 + 0x54);
          uStack_1c8 = *(undefined8 *)(param_3 + 10);
          dStack_1d0 = *pdVar6;
          puStack_1b8 = *(undefined1 **)(param_3 + 0xe);
          uStack_1c0 = *(undefined8 *)(param_3 + 0xc);
          uStack_1a8 = *(undefined8 *)(param_3 + 0x12);
          uStack_1b0 = *(undefined8 *)(param_3 + 0x10);
          uStack_198 = *(undefined8 *)(param_3 + 0x16);
          param_2 = *(double *)(param_3 + 0x14);
          uVar13 = *(undefined8 *)(param_3 + 4);
          pdVar4 = pdVar6;
          dStack_1a0 = param_2;
          FUN_1097f4148((int)uVar13,pdVar6,auStack_200);
          if ((int)pdVar4 != 0) {
            puStack_1b8 = auStack_68;
            FUN_1097f41ac((int)uVar13,pdVar6,param_3 + 0x48,&uStack_1a8,auStack_68,&uStack_1b0);
            lVar5 = *(long *)(param_3 + 0x6e);
          }
          FUN_1097d27a8(param_3,auStack_188,lVar5,param_3 + 0x60);
          param_4 = (ulong)*param_3;
          uVar9 = (undefined4)*(undefined8 *)(param_3 + 4);
          uVar10 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
          uVar3 = *(ulong *)(param_3 + 0x3c);
          param_5 = auStack_188;
          FUN_1097f782c();
          goto LAB_1097d0dd8;
        }
      }
      uVar3 = 0;
    }
  }
LAB_1097d0dd8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  dVar1 = (double)CONCAT44(uVar10,uVar9);
  pdVar6 = (double *)(uVar3 + 0x20);
  if (0.0 < *pdVar6) {
    if (*(int *)(uVar3 + 0x1b0) == 0) {
      dVar2 = param_2 * *(double *)(uVar3 + 0x130) +
              (double)CONCAT44(uVar10,uVar9) * *(double *)(uVar3 + 0x120) +
              *(double *)(uVar3 + 0x140);
      dVar12 = *(double *)(uVar3 + 0x148) +
               param_2 * *(double *)(uVar3 + 0x138) +
               (double)CONCAT44(uVar10,uVar9) * *(double *)(uVar3 + 0x128);
      lVar5 = *(long *)(uVar3 + 0xf0);
      dVar1 = *(double *)(lVar5 + 0x78) * dVar12 + *(double *)(lVar5 + 0x68) * dVar2 +
              *(double *)(lVar5 + 0x88);
      param_2 = *(double *)(lVar5 + 0x80) * dVar12 + *(double *)(lVar5 + 0x70) * dVar2 +
                *(double *)(lVar5 + 0x90);
    }
    else {
      lVar5 = *(long *)(uVar3 + 0xf0);
    }
    FUN_1097db8d8(param_4,pdVar6,uVar3 + 0x120,*(byte *)(lVar5 + 0x30) >> 5 & 1,&iStack_2a0);
    if ((((double)iStack_2a0 <= dVar1) && (dVar1 <= (double)(iStack_298 + iStack_2a0))) &&
       (((double)iStack_29c <= param_2 && (param_2 <= (double)(iStack_294 + iStack_29c))))) {
      iVar11 = SUB84(param_2 + 26388279066624.0,0);
      iVar8 = SUB84(dVar1 + 26388279066624.0,0);
      uStack_55c = CONCAT44(iVar11 + 1,iVar8 + 1);
      uStack_564 = CONCAT44(iVar11 + -1,iVar8 + -1);
      uStack_568 = 0;
      uStack_540 = 0x1000000000;
      uStack_544 = 1;
      puStack_550 = &uStack_2b0;
      uStack_548 = 1;
      puStack_538 = auStack_530;
      uStack_2b0 = uStack_564;
      uStack_2a8 = uStack_55c;
      FUN_1097e2a70((int)*(undefined8 *)(uVar3 + 0x10),param_4,pdVar6,uVar3 + 0x120,uVar3 + 0x150,
                    &uStack_568);
      if ((int)param_4 == 0) {
        uVar9 = SUB84(&uStack_568,0);
        func_0x0001097ff89c(SUB84(dVar1,0),param_2);
        *param_5 = uVar9;
      }
      if (puStack_538 == auStack_530) {
        return param_4;
      }
      _free();
      return param_4;
    }
  }
  *param_5 = 0;
  return 0;
}



/* Entry: 1097d0fe8; end: 1097d1187;  */

/* WARNING: Removing unreachable block (ram,0x0001097f6804) */
/* WARNING: Removing unreachable block (ram,0x0001097f6810) */
/* WARNING: Removing unreachable block (ram,0x0001097f68e8) */
/* WARNING: Removing unreachable block (ram,0x0001097f6858) */
/* WARNING: Removing unreachable block (ram,0x0001097f6860) */

long * FUN_1097d0fe8(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  undefined *puVar9;
  long lVar10;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined auStack_160 [288];
  
  lVar10 = *(long *)(param_1 + 0x6e);
  if ((*(int *)(lVar10 + 0x30) == 4) && (*(long *)(lVar10 + 0x98) != 0)) {
    plVar3 = (long *)0x24;
  }
  else {
    plVar3 = (long *)(ulong)*(uint *)(lVar10 + 4);
    if (*(uint *)(lVar10 + 4) == 0) {
      uVar2 = *param_1;
      if ((uVar2 != 6) && (lVar7 = *(long *)(param_1 + 0x3a), lVar7 != 0x11386a1e0)) {
        if (-1 < *(char *)(param_2 + 0x10)) {
          puVar4 = param_1;
          FUN_1097d098c();
          if ((int)puVar4 == 0) {
            puVar9 = &UNK_10dffe668;
          }
          else {
            puVar9 = auStack_160;
            FUN_1097d27a8(param_1,auStack_160,lVar10,param_1 + 0x60);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x3c);
          func_0x0001097f6fa4(uVar5,&iStack_170);
          if ((((((int)uVar5 != 0) &&
                (lVar10 = param_2, FUN_1097dd72c(param_2,&iStack_180), (int)lVar10 != 0)) &&
               (iStack_180 <= iStack_170 * 0x100)) &&
              ((iStack_17c <= iStack_16c * 0x100 &&
               ((iStack_168 + iStack_170) * 0x100 <= iStack_178)))) &&
             ((iStack_164 + iStack_16c) * 0x100 <= iStack_174)) {
            plVar3 = *(long **)(param_1 + 0x3c);
            FUN_1097f67b0(plVar3,puVar4,puVar9,*(undefined8 *)(param_1 + 0x3a));
            return plVar3;
          }
          plVar3 = *(long **)(param_1 + 0x3c);
          FUN_1097f76c8(*(undefined8 *)(param_1 + 4),plVar3,puVar4,puVar9,param_2,param_1[0x18],
                        param_1[6],*(undefined8 *)(param_1 + 0x3a));
          return plVar3;
        }
        if ((0x1c < uVar2) || ((0x1ffffaa7U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
          plVar6 = *(long **)(param_1 + 0x3c);
          plVar3 = (long *)(ulong)*(uint *)((long)plVar6 + 0x1c);
          if (*(uint *)((long)plVar6 + 0x1c) == 0) {
            if ((*(byte *)(plVar6 + 6) >> 1 & 1) != 0) {
              uVar2 = 0xc;
LAB_1097f68cc:
              uVar1 = 0;
              if (uVar2 != 0x66) {
                uVar1 = uVar2;
              }
              if (0xffffffd3 < uVar1 - 0x2d) {
                _pthread_mutex_lock(0x1132e0448);
                if (*(int *)((long)plVar6 + 0x1c) == 0) {
                  *(uint *)((long)plVar6 + 0x1c) = uVar1;
                }
                _pthread_mutex_unlock(0x1132e0448);
              }
              return (long *)(ulong)uVar1;
            }
            if ((lVar7 == 0x11386a1e0) ||
               (plVar3 = plVar6, func_0x0001097f7240(plVar6,0,&UNK_10dffe668), (int)plVar3 != 0)) {
              plVar3 = (long *)0x0;
            }
            else {
              plVar3 = plVar6;
              FUN_1097f6378(plVar6,1);
              if ((int)plVar3 == 0) {
                plVar3 = plVar6;
                (**(code **)(*plVar6 + 0x88))(plVar6,0,&UNK_10dffe668,lVar7);
                uVar2 = (uint)plVar3;
                if ((lVar7 == 0) || (uVar2 != 0x66)) {
                  bVar8 = 4;
                  if (lVar7 != 0) {
                    bVar8 = 0;
                  }
                  *(byte *)(plVar6 + 6) = *(byte *)(plVar6 + 6) & 0xfb | bVar8;
                  *(int *)((long)plVar6 + 0x24) = *(int *)((long)plVar6 + 0x24) + 1;
                }
                goto LAB_1097f68cc;
              }
            }
          }
          return plVar3;
        }
      }
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}



/* Entry: 1097d1188; end: 1097d11f7;  */

uint FUN_1097d1188(double param_1,double param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  
  if (*(int *)(param_3 + 0x1b0) == 0) {
    dVar3 = param_2 * *(double *)(param_3 + 0x130) + param_1 * *(double *)(param_3 + 0x120) +
            *(double *)(param_3 + 0x140);
    dVar4 = *(double *)(param_3 + 0x148) +
            param_2 * *(double *)(param_3 + 0x138) + param_1 * *(double *)(param_3 + 0x128);
    lVar2 = *(long *)(param_3 + 0xf0);
    param_1 = *(double *)(lVar2 + 0x88) +
              *(double *)(lVar2 + 0x78) * dVar4 + *(double *)(lVar2 + 0x68) * dVar3;
    param_2 = *(double *)(lVar2 + 0x90) +
              *(double *)(lVar2 + 0x80) * dVar4 + *(double *)(lVar2 + 0x70) * dVar3;
  }
  iVar1 = *(int *)(param_3 + 0x60);
  uStack_50 = *(undefined8 *)(param_3 + 0x10);
  if (*(char *)(param_4 + 0x10) < '\0') {
    return 0;
  }
  uStack_48 = 0;
  uStack_40 = CONCAT44(SUB84(param_2 + 26388279066624.0,0),SUB84(param_1 + 26388279066624.0,0));
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_1097dce2c(param_4,0x1097ddd34,0x1097ddd88,0x1097dddd4,0x1097ddebc,&uStack_50);
  if ((int)uStack_38 != 0) {
    FUN_1097ddef4(&uStack_50,(long)&uStack_38 + 4,auStack_2c);
  }
  if ((int)uStack_48 == 0) {
    if (iVar1 == 0) {
      uStack_48._4_4_ = (uint)(uStack_48._4_4_ != 0);
    }
    else if (iVar1 == 1) {
      uStack_48._4_4_ = uStack_48._4_4_ & 1;
    }
    else {
      uStack_48._4_4_ = 0;
    }
  }
  else {
    uStack_48._4_4_ = 1;
  }
  return uStack_48._4_4_;
}



/* Entry: 1097d11f8; end: 1097d13ab;  */

long FUN_1097d11f8(double param_1,double param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  piVar3 = *(int **)(param_3 + 0xe8);
  if (piVar3 == (int *)0x11386a1e0) {
    return 0;
  }
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  if (*(int *)(param_3 + 0x1b0) == 0) {
    dVar8 = param_2 * *(double *)(param_3 + 0x130) + param_1 * *(double *)(param_3 + 0x120) +
            *(double *)(param_3 + 0x140);
    dVar9 = *(double *)(param_3 + 0x148) +
            param_2 * *(double *)(param_3 + 0x138) + param_1 * *(double *)(param_3 + 0x128);
    lVar7 = *(long *)(param_3 + 0xf0);
    param_1 = *(double *)(lVar7 + 0x78) * dVar9 + *(double *)(lVar7 + 0x68) * dVar8 +
              *(double *)(lVar7 + 0x88);
    param_2 = *(double *)(lVar7 + 0x80) * dVar9 + *(double *)(lVar7 + 0x70) * dVar8 +
              *(double *)(lVar7 + 0x90);
  }
  if (((((double)*piVar3 <= param_1) && (param_1 < (double)(piVar3[2] + *piVar3))) &&
      ((double)piVar3[1] <= param_2)) && (param_2 < (double)(piVar3[3] + piVar3[1]))) {
    uVar1 = piVar3[8];
    if (uVar1 == 0) {
LAB_1097d1370:
      lVar7 = *(long *)(piVar3 + 4);
      while( true ) {
        if (lVar7 == 0) {
          return 1;
        }
        lVar2 = lVar7 + 8;
        FUN_1097ddc5c(*(undefined8 *)(lVar7 + 0x238),param_1,param_2,lVar2,
                      *(undefined4 *)(lVar7 + 0x230));
        if ((int)lVar2 == 0) break;
        lVar7 = *(long *)(lVar7 + 0x248);
      }
      return lVar2;
    }
    if ((int)uVar1 < 1) {
      uVar4 = 0;
LAB_1097d1350:
      if ((uint)uVar4 != uVar1) goto LAB_1097d1370;
    }
    else {
      uVar4 = 0;
      piVar6 = (int *)(*(long *)(piVar3 + 6) + 8);
      do {
        iVar5 = SUB84(param_1 + 26388279066624.0,0);
        if (((piVar6[-2] <= iVar5) && (iVar5 <= *piVar6)) &&
           ((iVar5 = SUB84(param_2 + 26388279066624.0,0), piVar6[-1] <= iVar5 &&
            (iVar5 <= piVar6[1])))) goto LAB_1097d1350;
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != uVar4);
    }
  }
  return 0;
}



/* Entry: 1097d13ac; end: 1097d1573;  */

long FUN_1097d13ac(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  double *pdVar3;
  long *plVar4;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 *puStack_418;
  undefined8 **ppuStack_410;
  undefined8 *puStack_408;
  undefined1 auStack_400 [896];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  pdVar3 = (double *)(param_1 + 0x20);
  if (*pdVar3 <= 0.0) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) != 0) {
    uStack_450 = 0;
    uStack_430 = 0;
    puStack_408 = &uStack_420;
    puStack_418 = auStack_400;
    uStack_420 = (long *)0x0;
    ppuStack_410 = (undefined8 **)0x2000000000;
    uStack_428 = CONCAT44(uStack_428._4_4_,1);
    lVar2 = param_2;
    FUN_1097de0d4(param_2,pdVar3,param_1 + 0x120,*(undefined4 *)(param_1 + 0x18),&uStack_450);
    iVar1 = uStack_430._4_4_;
    plVar4 = uStack_420;
    if (uStack_430._4_4_ != 0) {
      FUN_1097c9114(&uStack_450,&uStack_80);
      plVar4 = uStack_420;
    }
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      _free();
    }
    if ((int)lVar2 != 100) {
      if (iVar1 == 0) {
        return lVar2;
      }
      goto LAB_1097d1534;
    }
  }
  puStack_418 = (undefined1 *)CONCAT44(puStack_418._4_4_,0x20);
  uStack_440 = 0x80000000;
  uStack_448 = 0x7fffffff;
  uStack_444 = 0x80000000;
  uStack_450 = 0;
  uStack_44c = 0x7fffffff;
  uStack_420 = (long *)0x0;
  uStack_428 = 0;
  ppuStack_410 = &puStack_408;
  FUN_1097ded14(*(undefined8 *)(param_1 + 0x10),param_2,pdVar3,param_1 + 0x120,param_1 + 0x150,
                &uStack_450);
  if (uStack_420._4_4_ == 0) {
    if (ppuStack_410 == &puStack_408) {
      return param_2;
    }
    _free();
    return param_2;
  }
  uStack_78 = CONCAT44(uStack_440,uStack_444);
  uStack_80 = CONCAT44(uStack_448,uStack_44c);
  lVar2 = param_2;
  if (ppuStack_410 != &puStack_408) {
    _free();
  }
LAB_1097d1534:
  FUN_1097d1574(param_1,&uStack_80,param_3,param_4,param_5,param_6);
  return lVar2;
}



/* Entry: 1097d1574; end: 1097d1613;  */

void FUN_1097d1574(undefined8 param_1,int *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_38 = (double)*param_2 / 256.0;
  dStack_40 = (double)param_2[1] / 256.0;
  dStack_48 = (double)param_2[2] / 256.0;
  dStack_50 = (double)param_2[3] / 256.0;
  FUN_1097d06e8(param_1,&dStack_38,&dStack_40,&dStack_48,&dStack_50,0);
  if (param_3 != (double *)0x0) {
    *param_3 = dStack_38;
  }
  if (param_4 != (double *)0x0) {
    *param_4 = dStack_40;
  }
  if (param_5 != (double *)0x0) {
    *param_5 = dStack_48;
  }
  if (param_6 != (double *)0x0) {
    *param_6 = dStack_50;
  }
  return;
}



/* Entry: 1097d1614; end: 1097d17f7;  */

int * FUN_1097d1614(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  undefined1 **ppuVar2;
  undefined4 auStack_318 [8];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 **ppuStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 ***pppuStack_2d0;
  undefined1 auStack_2c8 [616];
  undefined1 auStack_60 [16];
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  bVar1 = *(byte *)(param_2 + 4);
  if ((char)bVar1 < '\0') {
    param_2 = (int *)0x0;
  }
  else {
    if (((bVar1 >> 5 & 1) == 0) ||
       ((((bVar1 & 3) == 1 && (param_2[2] != *param_2)) && (param_2[3] != param_2[1])))) {
      uStack_2f0 = 0x1000000000;
      auStack_318[0] = 0;
      uStack_2f8 = CONCAT35((int3)((ulong)uStack_2f8 >> 0x28),0x100000000);
      ppuStack_2e8 = &puStack_2e0;
      FUN_1097dbec8(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x60),
                    auStack_318);
      if ((int)uStack_2f0 == 0) {
        if (ppuStack_2e8 == &puStack_2e0) {
          return param_2;
        }
        _free();
        return param_2;
      }
      FUN_1097ff984(auStack_318,auStack_60);
      if (ppuStack_2e8 != &puStack_2e0) {
        _free();
      }
    }
    else {
      auStack_318[0] = 0;
      uStack_2f8 = 0;
      pppuStack_2d0 = &ppuStack_2e8;
      puStack_2e0 = auStack_2c8;
      ppuStack_2e8 = (undefined1 **)0x0;
      uStack_2d8 = 0x2000000000;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,1);
      FUN_1097dbfa4(param_2,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x18),
                    auStack_318);
      ppuVar2 = ppuStack_2e8;
      if (uStack_2f8._4_4_ == 0) {
        while (ppuVar2 != (undefined1 **)0x0) {
          ppuVar2 = (undefined1 **)*ppuVar2;
          _free();
        }
        return param_2;
      }
      FUN_1097c9114(auStack_318,auStack_60);
      ppuVar2 = ppuStack_2e8;
      while (ppuVar2 != (undefined1 **)0x0) {
        ppuVar2 = (undefined1 **)*ppuVar2;
        _free();
      }
    }
    FUN_1097d1574(param_1,auStack_60,param_3,param_4,param_5,param_6);
  }
  return param_2;
}



/* Entry: 1097d17f8; end: 1097d18bf;  */

void FUN_1097d17f8(undefined8 param_1,double *param_2,double *param_3,double *param_4,
                  double *param_5)

{
  undefined8 uVar1;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  uVar1 = param_1;
  FUN_1097d18c0(param_1,&iStack_50);
  if ((int)uVar1 != 0) {
    dStack_58 = (double)iStack_50;
    dStack_60 = (double)iStack_4c;
    dStack_68 = (double)(iStack_48 + iStack_50);
    dStack_70 = (double)(iStack_44 + iStack_4c);
    FUN_1097d06e8(param_1,&dStack_58,&dStack_60,&dStack_68,&dStack_70,0);
    if (param_2 != (double *)0x0) {
      *param_2 = dStack_58;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = dStack_60;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = dStack_68;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = dStack_70;
    }
  }
  return;
}



/* Entry: 1097d18c0; end: 1097d1913;  */

void FUN_1097d18c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001097f6fa4(*(undefined8 *)(param_1 + 0xf0));
  puVar2 = *(undefined **)(param_1 + 0xe8);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = &UNK_10dffe9b0;
    if (puVar2 != (undefined *)0x11386a1e0) {
      puVar1 = puVar2;
    }
    func_0x0001097ed458(param_2,puVar1);
  }
  return;
}



/* Entry: 1097d1914; end: 1097d198f;  */

long FUN_1097d1914(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x0001097f6fa4(uVar1,auStack_40);
  lVar3 = *(long *)(param_1 + 0xe8);
  if ((int)uVar1 != 0) {
    FUN_1097ca2ec();
    FUN_1097c9b90();
  }
  lVar2 = lVar3;
  FUN_1097cb00c(lVar3,param_1);
  if (lVar3 != *(long *)(param_1 + 0xe8)) {
    FUN_1097ca284(lVar3);
  }
  return lVar2;
}



/* Entry: 1097d1990; end: 1097d19eb;  */

undefined8 FUN_1097d1990(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x70);
  if (lVar1 != 0) {
    if (*(long *)(param_2 + 0x78) != 0) {
      FUN_1097ef278(*(long *)(param_2 + 0x78),0);
      lVar1 = *(long *)(param_2 + 0x70);
    }
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(long *)(param_2 + 0x78) = lVar1;
  }
  *(undefined8 *)(param_2 + 0x80) = param_1;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = param_1;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return 0;
}



/* Entry: 1097d19ec; end: 1097d1c5f;  */

undefined8 FUN_1097d19ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = param_2;
  _memcmp(param_2,param_1 + 0x80,0x30);
  if ((int)puVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_1097ef278(*(long *)(param_1 + 0x78),0);
        lVar2 = *(long *)(param_1 + 0x70);
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(long *)(param_1 + 0x78) = lVar2;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar5 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    *(undefined8 *)(param_1 + 0x98) = param_2[3];
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar7;
    *(undefined8 *)(param_1 + 0xa0) = uVar6;
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x80) = uVar3;
  }
  return 0;
}



/* Entry: 1097d1c60; end: 1097d1cb3;  */

void FUN_1097d1c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001097d1b50();
  if ((int)lVar1 == 0) {
    FUN_1097efd34(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1097d1cb4; end: 1097d200f;  */

/* WARNING: Type propagation algorithm not settling */

double *******
FUN_1097d1cb4(double *******param_1,double *******param_2,double *******param_3,long *param_4,
             ulong param_5,double *******param_6,double *******param_7,double *******param_8)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double *******pppppppdVar8;
  double *******pppppppdVar9;
  double *******pppppppdVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  double *******pppppppdVar13;
  uint uVar14;
  double *******pppppppdVar15;
  long *plVar16;
  double ******ppppppdVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  double *******pppppppdVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double ******ppppppdVar30;
  double dVar31;
  double ******ppppppdVar32;
  double dVar33;
  double dVar34;
  double *****pppppdVar35;
  double *****pppppdVar36;
  double dVar37;
  double ******ppppppdVar38;
  double dVar39;
  double ******ppppppdVar40;
  double *****pppppdVar41;
  double *****pppppdVar42;
  double dVar43;
  double dVar44;
  int iStack_1430;
  int iStack_142c;
  int iStack_1428;
  int iStack_1424;
  double *******pppppppdStack_13c0;
  int iStack_13b8;
  double ******appppppdStack_13a0 [36];
  uint uStack_127c;
  long lStack_1278;
  undefined8 uStack_1270;
  undefined1 uStack_1268;
  undefined8 uStack_1264;
  undefined8 uStack_125c;
  double *******pppppppdStack_1250;
  double *******pppppppdStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined1 *puStack_1230;
  undefined1 *puStack_1228;
  undefined1 auStack_1220 [28];
  undefined1 auStack_1204 [436];
  double ******appppppdStack_1050 [256];
  double ******appppppdStack_850 [255];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppppppdVar11 = appppppdStack_1050;
  pppppppdVar12 = appppppdStack_1050;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = (uint)param_3;
  ppppppdVar17 = param_1[0x37];
  pppppppdVar10 = param_2;
  pppppppdVar8 = param_1;
  pppppppdVar15 = param_3;
  plVar16 = param_4;
  uStack_127c = uVar14;
  if ((*(int *)(ppppppdVar17 + 6) == 4) && (ppppppdVar17[0x13] != (double *****)0x0)) {
    pppppppdVar25 = (double *******)0x24;
  }
  else {
    pppppppdVar25 = (double *******)(ulong)*(uint *)((long)ppppppdVar17 + 4);
    if (*(uint *)((long)ppppppdVar17 + 4) == 0) {
      if ((*(int *)param_1 == 6) || (param_1[0x1d] == (double ******)0x11386a1e0)) {
        pppppppdVar25 = (double *******)0x0;
      }
      else {
        func_0x0001097d1b50();
        pppppppdVar25 = pppppppdVar8;
        if ((int)pppppppdVar8 == 0) {
          if ((int)uVar14 < 0x56) {
            pppppppdVar8 = appppppdStack_850;
            if (param_4 != (long *)0x0) goto LAB_1097d1d74;
LAB_1097d1da8:
            pppppppdStack_13c0 = (double *******)0x0;
            param_8 = (double *******)&uStack_127c;
            plVar16 = (long *)0x0;
            param_5 = 0;
            param_6 = (double *******)0x0;
            pppppppdVar9 = param_1;
            param_7 = pppppppdVar8;
            FUN_1097d2010();
            pppppppdVar10 = param_2;
            pppppppdVar15 = param_3;
LAB_1097d1e14:
            iStack_13b8 = 1;
            pppppppdVar25 = (double *******)(ulong)uStack_127c;
            if (uStack_127c != 0) {
              pppppppdVar10 = param_1;
              FUN_1097d098c();
              if ((int)pppppppdVar10 == 0) {
                pppppppdVar15 = (double *******)&UNK_10dffe668;
              }
              else {
                pppppppdVar15 = appppppdStack_13a0;
                FUN_1097d27a8(param_1,appppppdStack_13a0,param_1[0x37],param_1 + 0x30);
              }
              iVar21 = (int)param_1[0x1e];
              FUN_1097f7a80();
              if ((iVar21 != 0) ||
                 (pppppppdVar11 = (double *******)param_1[0xe],
                 (double)pppppppdVar11[0x27] <= 10240.0)) {
                pppppppdVar9 = (double *******)param_1[0x1e];
                if (param_4 == (long *)0x0) {
                  iStack_13b8 = (int)param_1[0xe];
                  pppppppdStack_13c0 = (double *******)0x0;
                  plVar16 = (long *)0x0;
                  param_5 = 0;
                  param_8 = (double *******)0x0;
                }
                else {
                  plVar16 = (long *)*param_4;
                  param_5 = (ulong)*(uint *)(param_4 + 1);
                  pppppppdStack_13c0 = (double *******)param_4[3];
                  iStack_13b8 = (int)param_1[0xe];
                  param_8 = pppppppdVar12;
                }
                param_6 = pppppppdVar8;
                FUN_1097f7ad4();
                param_7 = pppppppdVar25;
                pppppppdVar25 = pppppppdVar9;
              }
              else {
                uStack_1238 = 0x3600000000;
                uStack_1240 = 0x1b00000000;
                puStack_1230 = auStack_1220;
                puStack_1228 = auStack_1204;
                uStack_1270 = 0;
                lStack_1278 = 0;
                uStack_1268 = 0xf2;
                uStack_125c = 0;
                uStack_1264 = 0;
                plVar16 = &lStack_1278;
                pppppppdVar13 = pppppppdVar8;
                pppppppdStack_1250 = (double *******)&pppppppdStack_1250;
                pppppppdStack_1248 = (double *******)&pppppppdStack_1250;
                func_0x0001097f0648();
                pppppppdVar9 = pppppppdStack_1250;
                if ((int)pppppppdVar11 == 0) {
                  param_6 = (double *******)(ulong)*(uint *)(param_1[0xe] + 0x13);
                  param_7 = (double *******)param_1[0x1d];
                  pppppppdVar11 = (double *******)param_1[0x1e];
                  plVar16 = &lStack_1278;
                  param_5 = 0;
                  FUN_1097f76c8(param_1[2]);
                  pppppppdVar13 = pppppppdVar10;
                  pppppppdVar25 = pppppppdVar15;
                  pppppppdVar9 = pppppppdStack_1250;
                }
                while (pppppppdVar15 = pppppppdVar25, pppppppdVar10 = pppppppdVar13,
                      pppppppdVar25 = pppppppdVar11,
                      (double ********)pppppppdVar9 != &pppppppdStack_1250) {
                  pppppppdVar9 = (double *******)*pppppppdVar9;
                  _free();
                  pppppppdVar13 = pppppppdVar10;
                  pppppppdVar25 = pppppppdVar15;
                }
              }
            }
          }
          else {
            pppppppdVar8 = (double *******)(((ulong)param_3 & 0xffffffff) * 0x18);
            _malloc();
            if (pppppppdVar8 == (double *******)0x0) {
              pppppppdVar25 = (double *******)0x1;
              goto LAB_1097d1fb8;
            }
            if (param_4 == (long *)0x0) goto LAB_1097d1da8;
LAB_1097d1d74:
            uVar24 = (ulong)*(uint *)(param_4 + 3);
            if ((int)*(uint *)(param_4 + 3) < 0x101) {
LAB_1097d1de4:
              plVar16 = (long *)param_4[2];
              param_6 = (double *******)(ulong)*(uint *)((long)param_4 + 0x1c);
              param_8 = (double *******)&uStack_127c;
              pppppppdVar9 = param_1;
              param_7 = pppppppdVar8;
              FUN_1097d2010();
              pppppppdVar10 = param_2;
              pppppppdVar15 = param_3;
              param_5 = uVar24;
              pppppppdVar12 = pppppppdVar11;
              pppppppdStack_13c0 = pppppppdVar11;
              goto LAB_1097d1e14;
            }
            pppppppdVar9 = (double *******)(uVar24 << 3);
            _malloc();
            pppppppdVar11 = pppppppdVar9;
            if (pppppppdVar9 != (double *******)0x0) goto LAB_1097d1de4;
            pppppppdVar12 = pppppppdVar9;
            pppppppdVar25 = (double *******)0x1;
          }
          if (pppppppdVar8 != appppppdStack_850) {
            _free();
            pppppppdVar9 = pppppppdVar8;
          }
          pppppppdVar8 = pppppppdVar9;
          if (pppppppdVar12 != appppppdStack_1050) {
            _free();
            pppppppdVar8 = pppppppdVar12;
          }
        }
      }
    }
  }
LAB_1097d1fb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppppdVar25;
  }
  ___stack_chk_fail();
  ppppppdVar17 = pppppppdVar8[0x1e];
  uVar14 = (uint)pppppppdVar15;
  pppppppdVar11 = pppppppdVar8;
  if ((iStack_13b8 == 0) || (FUN_1097d18c0(pppppppdVar8,&iStack_1430), (int)pppppppdVar11 == 0)) {
    *(uint *)param_8 = uVar14;
    dVar26 = 0.0;
    bVar7 = true;
    dVar27 = 0.0;
    dVar29 = 0.0;
    dVar28 = 0.0;
  }
  else {
    if ((iStack_1428 == 0) || (iStack_1424 == 0)) {
      *(int *)param_8 = 0;
      return pppppppdVar11;
    }
    bVar7 = false;
    dVar29 = (double)pppppppdVar8[0xe][0x27] * 10.0;
    dVar26 = (double)iStack_1430 - dVar29;
    dVar28 = (double)iStack_142c - dVar29;
    dVar27 = dVar29 + (double)(iStack_1430 + iStack_1428);
    dVar29 = dVar29 + (double)(iStack_142c + iStack_1424);
  }
  ppppppdVar32 = pppppppdVar8[0x24];
  ppppppdVar30 = pppppppdVar8[0x25];
  iVar21 = (int)param_5;
  if ((((double)ppppppdVar32 == 1.0) && ((double)ppppppdVar30 == 0.0)) &&
     ((double)pppppppdVar8[0x26] == 0.0)) {
    if ((((((double)pppppppdVar8[0x27] != 1.0) || ((double)pppppppdVar8[0x28] != 0.0)) ||
         (((double)pppppppdVar8[0x29] != 0.0 ||
          (((double)ppppppdVar17[0xd] != 1.0 || ((double)ppppppdVar17[0xe] != 0.0)))))) ||
        ((double)ppppppdVar17[0xf] != 0.0)) ||
       (((((double)ppppppdVar17[0x10] != 1.0 || ((double)ppppppdVar17[0x11] != 0.0)) ||
         ((double)ppppppdVar17[0x12] != 0.0)) ||
        (((double)pppppppdVar8[0x14] != 0.0 || ((double)pppppppdVar8[0x15] != 0.0)))))) {
      if ((((double)pppppppdVar8[0x27] != 1.0) ||
          (((double)ppppppdVar17[0xd] != 1.0 || ((double)ppppppdVar17[0xe] != 0.0)))) ||
         (((double)ppppppdVar17[0xf] != 0.0 || ((double)ppppppdVar17[0x10] != 1.0))))
      goto LAB_1097d2130;
      dVar31 = (double)pppppppdVar8[0x14] + (double)pppppppdVar8[0x28] + (double)ppppppdVar17[0x11];
      dVar33 = (double)pppppppdVar8[0x15] + (double)pppppppdVar8[0x29] + (double)ppppppdVar17[0x12];
      bVar3 = false;
      if (iVar21 != 0) {
        bVar3 = (bool)(bVar7 ^ 1);
      }
      if (bVar3) {
        if (0 < iVar21) {
          uVar24 = 0;
          bVar7 = ((ulong)param_6 & 1) != 0;
          if (bVar7) {
            pppppppdVar10 = pppppppdVar10 + (long)(int)uVar14 * 3 + -3;
          }
          lVar18 = -0x18;
          if (!bVar7) {
            lVar18 = 0x18;
          }
          uVar23 = 0;
          do {
            plVar1 = plVar16 + uVar24;
            uVar14 = *(uint *)((long)plVar1 + 4);
            uVar19 = (ulong)uVar14;
            if ((int)uVar14 < 1) {
              pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
LAB_1097d24e8:
              *(undefined4 *)((long)pppppppdStack_13c0 + uVar24 * 8 + 4) = 0;
            }
            else {
              bVar7 = false;
              pppppppdVar8 = param_7 + uVar23 * 3 + 1;
              do {
                pppppppdVar8[-1] = *pppppppdVar10;
                ppppppdVar17 = (double ******)(dVar31 + (double)pppppppdVar10[1]);
                ppppppdVar30 = (double ******)(dVar33 + (double)pppppppdVar10[2]);
                pppppppdVar8[1] = ppppppdVar30;
                *pppppppdVar8 = ppppppdVar17;
                bVar3 = false;
                bVar5 = true;
                if ((double)ppppppdVar30 <= dVar29) {
                  bVar3 = false;
                  bVar5 = true;
                  if (!NAN(dVar28) && !NAN((double)ppppppdVar30)) {
                    bVar3 = dVar28 == (double)ppppppdVar30;
                    bVar5 = (double)ppppppdVar30 <= dVar28;
                  }
                }
                bVar4 = false;
                bVar6 = true;
                if (!bVar5 || bVar3) {
                  bVar4 = false;
                  bVar6 = true;
                  if (!NAN((double)ppppppdVar17) && !NAN(dVar27)) {
                    bVar4 = (double)ppppppdVar17 == dVar27;
                    bVar6 = dVar27 <= (double)ppppppdVar17;
                  }
                }
                bVar3 = false;
                bVar5 = true;
                if (!bVar6 || bVar4) {
                  bVar3 = false;
                  bVar5 = true;
                  if (!NAN(dVar26) && !NAN((double)ppppppdVar17)) {
                    bVar3 = dVar26 == (double)ppppppdVar17;
                    bVar5 = (double)ppppppdVar17 <= dVar26;
                  }
                }
                if (!bVar5 || bVar3) {
                  bVar7 = true;
                }
                pppppppdVar10 = (double *******)((long)pppppppdVar10 + lVar18);
                uVar19 = uVar19 - 1;
                pppppppdVar8 = pppppppdVar8 + 3;
              } while (uVar19 != 0);
              pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
              pppppppdVar11 = (double *******)0x0;
              if (!bVar7) goto LAB_1097d24e8;
              uVar23 = (ulong)(uVar14 + (int)uVar23);
            }
            uVar22 = (uint)uVar23;
            uVar24 = uVar24 + 1;
          } while (uVar24 != (param_5 & 0xffffffff));
          goto LAB_1097d2618;
        }
        goto LAB_1097d2614;
      }
      if (0 < (int)uVar14) {
        uVar24 = (ulong)pppppppdVar15 & 0xffffffff;
        pppppppdVar10 = pppppppdVar10 + 1;
        uVar22 = 0;
        do {
          pppppppdVar8 = param_7 + (long)(int)uVar22 * 3;
          *pppppppdVar8 = pppppppdVar10[-1];
          ppppppdVar17 = (double ******)(dVar31 + (double)*pppppppdVar10);
          ppppppdVar30 = (double ******)(dVar33 + (double)pppppppdVar10[1]);
          pppppppdVar8[2] = ppppppdVar30;
          pppppppdVar8[1] = ppppppdVar17;
          if (bVar7) {
LAB_1097d239c:
            uVar22 = uVar22 + 1;
          }
          else {
            bVar3 = false;
            bVar5 = true;
            if (dVar26 <= (double)ppppppdVar17) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN((double)ppppppdVar17) && !NAN(dVar27)) {
                bVar3 = (double)ppppppdVar17 == dVar27;
                bVar5 = dVar27 <= (double)ppppppdVar17;
              }
            }
            bVar4 = false;
            bVar6 = true;
            if (!bVar5 || bVar3) {
              bVar4 = false;
              bVar6 = true;
              if (!NAN(dVar28) && !NAN((double)ppppppdVar30)) {
                bVar4 = dVar28 == (double)ppppppdVar30;
                bVar6 = (double)ppppppdVar30 <= dVar28;
              }
            }
            bVar3 = false;
            bVar5 = true;
            if (!bVar6 || bVar4) {
              bVar3 = false;
              bVar5 = true;
              if (!NAN((double)ppppppdVar30) && !NAN(dVar29)) {
                bVar3 = (double)ppppppdVar30 == dVar29;
                bVar5 = dVar29 <= (double)ppppppdVar30;
              }
            }
            if (!bVar5 || bVar3) goto LAB_1097d239c;
          }
          pppppppdVar10 = pppppppdVar10 + 3;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        goto LAB_1097d23b4;
      }
      goto LAB_1097d23b0;
    }
    if (!bVar7) {
      if (iVar21 == 0) {
        if (0 < (int)uVar14) {
          uVar24 = (ulong)pppppppdVar15 & 0xffffffff;
          pppppppdVar10 = pppppppdVar10 + 2;
          uVar23 = 0;
          do {
            pppppppdVar8 = param_7 + uVar23 * 3;
            *pppppppdVar8 = pppppppdVar10[-2];
            ppppppdVar17 = pppppppdVar10[-1];
            ppppppdVar30 = *pppppppdVar10;
            pppppppdVar8[1] = ppppppdVar17;
            pppppppdVar8[2] = ppppppdVar30;
            uVar14 = 0;
            if ((double)ppppppdVar17 <= dVar27) {
              uVar14 = (uint)(dVar26 <= (double)ppppppdVar17);
            }
            uVar2 = 0;
            if (dVar28 <= (double)ppppppdVar30) {
              uVar2 = uVar14;
            }
            uVar22 = 0;
            if ((double)ppppppdVar30 <= dVar29) {
              uVar22 = uVar2;
            }
            uVar22 = (int)uVar23 + uVar22;
            uVar23 = (ulong)uVar22;
            pppppppdVar10 = pppppppdVar10 + 3;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
          goto LAB_1097d2618;
        }
      }
      else if (0 < iVar21) {
        uVar24 = 0;
        bVar7 = ((ulong)param_6 & 1) != 0;
        if (bVar7) {
          pppppppdVar10 = pppppppdVar10 + (long)(int)uVar14 * 3 + -3;
        }
        lVar18 = -0x18;
        if (!bVar7) {
          lVar18 = 0x18;
        }
        uVar23 = 0;
        do {
          plVar1 = plVar16 + uVar24;
          uVar14 = *(uint *)((long)plVar1 + 4);
          uVar19 = (ulong)uVar14;
          if ((int)uVar14 < 1) {
            pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
LAB_1097d259c:
            *(undefined4 *)((long)pppppppdStack_13c0 + uVar24 * 8 + 4) = 0;
          }
          else {
            bVar7 = false;
            pppppppdVar8 = param_7 + uVar23 * 3 + 1;
            do {
              pppppppdVar8[-1] = *pppppppdVar10;
              ppppppdVar17 = pppppppdVar10[1];
              ppppppdVar30 = pppppppdVar10[2];
              *pppppppdVar8 = ppppppdVar17;
              pppppppdVar8[1] = ppppppdVar30;
              bVar3 = false;
              bVar5 = true;
              if ((double)ppppppdVar30 <= dVar29) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar28) && !NAN((double)ppppppdVar30)) {
                  bVar3 = dVar28 == (double)ppppppdVar30;
                  bVar5 = (double)ppppppdVar30 <= dVar28;
                }
              }
              bVar4 = false;
              bVar6 = true;
              if (!bVar5 || bVar3) {
                bVar4 = false;
                bVar6 = true;
                if (!NAN((double)ppppppdVar17) && !NAN(dVar27)) {
                  bVar4 = (double)ppppppdVar17 == dVar27;
                  bVar6 = dVar27 <= (double)ppppppdVar17;
                }
              }
              bVar3 = false;
              bVar5 = true;
              if (!bVar6 || bVar4) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar26) && !NAN((double)ppppppdVar17)) {
                  bVar3 = dVar26 == (double)ppppppdVar17;
                  bVar5 = (double)ppppppdVar17 <= dVar26;
                }
              }
              if (!bVar5 || bVar3) {
                bVar7 = true;
              }
              pppppppdVar10 = (double *******)((long)pppppppdVar10 + lVar18);
              uVar19 = uVar19 - 1;
              pppppppdVar8 = pppppppdVar8 + 3;
            } while (uVar19 != 0);
            pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
            pppppppdVar11 = (double *******)0x0;
            if (!bVar7) goto LAB_1097d259c;
            uVar23 = (ulong)(uVar14 + (int)uVar23);
          }
          uVar22 = (uint)uVar23;
          uVar24 = uVar24 + 1;
        } while (uVar24 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
      goto LAB_1097d2614;
    }
    _memcpy(param_7,pppppppdVar10,(long)(int)uVar14 * 0x18);
    uVar22 = uVar14;
  }
  else {
LAB_1097d2130:
    ppppppdVar38 = pppppppdVar8[0x26];
    ppppppdVar40 = pppppppdVar8[0x27];
    dVar43 = (double)ppppppdVar32 + (double)ppppppdVar38 * 0.0;
    dVar44 = (double)ppppppdVar38 + (double)ppppppdVar32 * 0.0;
    dVar39 = (double)pppppppdVar8[0x15] * (double)ppppppdVar38 +
             (double)ppppppdVar32 * (double)pppppppdVar8[0x14] + (double)pppppppdVar8[0x28];
    dVar33 = (double)ppppppdVar30 + (double)ppppppdVar40 * 0.0;
    dVar37 = (double)ppppppdVar40 + (double)ppppppdVar30 * 0.0;
    dVar34 = (double)pppppppdVar8[0x15] * (double)ppppppdVar40 +
             (double)ppppppdVar30 * (double)pppppppdVar8[0x14] + (double)pppppppdVar8[0x29];
    pppppdVar36 = ppppppdVar17[0xe];
    pppppdVar35 = ppppppdVar17[0xd];
    pppppdVar42 = ppppppdVar17[0x10];
    pppppdVar41 = ppppppdVar17[0xf];
    dVar31 = (double)pppppdVar41 * dVar33 + (double)pppppdVar35 * dVar43;
    dVar33 = (double)pppppdVar42 * dVar33 + (double)pppppdVar36 * dVar43;
    dVar43 = (double)pppppdVar41 * dVar37 + (double)pppppdVar35 * dVar44;
    dVar37 = (double)pppppdVar42 * dVar37 + (double)pppppdVar36 * dVar44;
    dVar44 = (double)pppppdVar41 * dVar34 + (double)pppppdVar35 * dVar39 +
             (double)ppppppdVar17[0x11];
    dVar34 = (double)pppppdVar42 * dVar34 + (double)pppppdVar36 * dVar39 +
             (double)ppppppdVar17[0x12];
    bVar3 = false;
    if (iVar21 != 0) {
      bVar3 = (bool)(bVar7 ^ 1);
    }
    if (bVar3) {
      if (0 < iVar21) {
        uVar24 = 0;
        uVar22 = 0;
        bVar7 = ((ulong)param_6 & 1) != 0;
        if (bVar7) {
          pppppppdVar10 = pppppppdVar10 + (long)(int)uVar14 * 3 + -3;
        }
        lVar18 = -0x18;
        if (!bVar7) {
          lVar18 = 0x18;
        }
        do {
          plVar1 = plVar16 + uVar24;
          if (*(int *)((long)plVar1 + 4) < 1) {
            pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
LAB_1097d22d4:
            *(undefined4 *)((long)pppppppdStack_13c0 + uVar24 * 8 + 4) = 0;
            uVar14 = uVar22;
          }
          else {
            lVar20 = 0;
            bVar7 = false;
            pppppppdVar8 = param_7 + (long)(int)uVar22 * 3 + 1;
            uVar14 = uVar22;
            do {
              ppppppdVar17 = pppppppdVar10[2];
              ppppppdVar30 = *pppppppdVar10;
              *pppppppdVar8 = pppppppdVar10[1];
              pppppppdVar8[-1] = ppppppdVar30;
              pppppppdVar8[1] = ppppppdVar17;
              ppppppdVar17 = (double ******)
                             (dVar44 + dVar43 * (double)pppppppdVar8[1] +
                                       dVar31 * (double)*pppppppdVar8);
              ppppppdVar30 = (double ******)
                             (dVar34 + dVar37 * (double)pppppppdVar8[1] +
                                       dVar33 * (double)*pppppppdVar8);
              pppppppdVar11 = pppppppdVar8 + 3;
              pppppppdVar8[1] = ppppppdVar30;
              *pppppppdVar8 = ppppppdVar17;
              bVar3 = false;
              bVar5 = true;
              if ((double)ppppppdVar30 <= dVar29) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar28) && !NAN((double)ppppppdVar30)) {
                  bVar3 = dVar28 == (double)ppppppdVar30;
                  bVar5 = (double)ppppppdVar30 <= dVar28;
                }
              }
              bVar4 = false;
              bVar6 = true;
              if (!bVar5 || bVar3) {
                bVar4 = false;
                bVar6 = true;
                if (!NAN((double)ppppppdVar17) && !NAN(dVar27)) {
                  bVar4 = (double)ppppppdVar17 == dVar27;
                  bVar6 = dVar27 <= (double)ppppppdVar17;
                }
              }
              bVar3 = false;
              bVar5 = true;
              if (!bVar6 || bVar4) {
                bVar3 = false;
                bVar5 = true;
                if (!NAN(dVar26) && !NAN((double)ppppppdVar17)) {
                  bVar3 = dVar26 == (double)ppppppdVar17;
                  bVar5 = (double)ppppppdVar17 <= dVar26;
                }
              }
              if (!bVar5 || bVar3) {
                bVar7 = true;
              }
              pppppppdVar10 = (double *******)((long)pppppppdVar10 + lVar18);
              lVar20 = lVar20 + 1;
              uVar14 = uVar14 + 1;
              pppppppdVar8 = pppppppdVar11;
            } while (lVar20 < *(int *)((long)plVar1 + 4));
            pppppppdStack_13c0[uVar24] = (double ******)*plVar1;
            if (!bVar7) goto LAB_1097d22d4;
          }
          uVar22 = uVar14;
          uVar24 = uVar24 + 1;
        } while (uVar24 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
LAB_1097d2614:
      uVar22 = 0;
      goto LAB_1097d2618;
    }
    if (0 < (int)uVar14) {
      uVar24 = (ulong)pppppppdVar15 & 0xffffffff;
      uVar22 = 0;
      do {
        pppppppdVar8 = param_7 + (long)(int)uVar22 * 3;
        ppppppdVar17 = pppppppdVar10[2];
        ppppppdVar30 = *pppppppdVar10;
        pppppppdVar8[1] = pppppppdVar10[1];
        *pppppppdVar8 = ppppppdVar30;
        pppppppdVar8[2] = ppppppdVar17;
        ppppppdVar17 = (double ******)
                       (dVar44 + dVar43 * (double)pppppppdVar8[2] + dVar31 * (double)pppppppdVar8[1]
                       );
        ppppppdVar30 = (double ******)
                       (dVar34 + dVar37 * (double)pppppppdVar8[2] + dVar33 * (double)pppppppdVar8[1]
                       );
        pppppppdVar8[2] = ppppppdVar30;
        pppppppdVar8[1] = ppppppdVar17;
        if (bVar7) {
LAB_1097d21e8:
          uVar22 = uVar22 + 1;
        }
        else {
          bVar3 = false;
          bVar5 = true;
          if (dVar26 <= (double)ppppppdVar17) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN((double)ppppppdVar17) && !NAN(dVar27)) {
              bVar3 = (double)ppppppdVar17 == dVar27;
              bVar5 = dVar27 <= (double)ppppppdVar17;
            }
          }
          bVar4 = false;
          bVar6 = true;
          if (!bVar5 || bVar3) {
            bVar4 = false;
            bVar6 = true;
            if (!NAN(dVar28) && !NAN((double)ppppppdVar30)) {
              bVar4 = dVar28 == (double)ppppppdVar30;
              bVar6 = (double)ppppppdVar30 <= dVar28;
            }
          }
          bVar3 = false;
          bVar5 = true;
          if (!bVar6 || bVar4) {
            bVar3 = false;
            bVar5 = true;
            if (!NAN((double)ppppppdVar30) && !NAN(dVar29)) {
              bVar3 = (double)ppppppdVar30 == dVar29;
              bVar5 = dVar29 <= (double)ppppppdVar30;
            }
          }
          if (!bVar5 || bVar3) goto LAB_1097d21e8;
        }
        pppppppdVar10 = pppppppdVar10 + 3;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      goto LAB_1097d23b4;
    }
LAB_1097d23b0:
    uVar22 = 0;
  }
LAB_1097d23b4:
  _memcpy(pppppppdStack_13c0,plVar16,
          -(param_5 >> 0x1f & 1) & 0xfffffff800000000 | (param_5 & 0xffffffff) << 3);
  pppppppdVar11 = pppppppdStack_13c0;
LAB_1097d2618:
  *(uint *)param_8 = uVar22;
  if (((iVar21 != 0) && (((ulong)param_6 & 1) != 0)) && (1 < (int)uVar22)) {
    lVar18 = 0;
    lVar20 = (ulong)uVar22 - 2;
    pppppppdVar8 = param_7 + (ulong)uVar22 * 3;
    do {
      pppppppdVar15 = pppppppdVar8 + -3;
      ppppppdVar17 = param_7[2];
      ppppppdVar38 = param_7[1];
      ppppppdVar32 = *param_7;
      ppppppdVar30 = pppppppdVar8[-1];
      ppppppdVar40 = *pppppppdVar15;
      param_7[1] = pppppppdVar8[-2];
      *param_7 = ppppppdVar40;
      param_7[2] = ppppppdVar30;
      pppppppdVar8[-2] = ppppppdVar38;
      *pppppppdVar15 = ppppppdVar32;
      pppppppdVar8[-1] = ppppppdVar17;
      lVar18 = lVar18 + 1;
      param_7 = param_7 + 3;
      bVar7 = lVar18 < lVar20;
      lVar20 = lVar20 + -1;
      pppppppdVar8 = pppppppdVar15;
    } while (bVar7);
  }
  return pppppppdVar11;
}



/* Entry: 1097d2010; end: 1097d269b;  */

void FUN_1097d2010(long param_1,double *param_2,uint param_3,long param_4,ulong param_5,
                  ulong param_6,undefined8 *param_7,uint *param_8,long param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double *pdVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  lVar19 = *(long *)(param_1 + 0xf0);
  if ((param_10 == 0) || (lVar15 = param_1, FUN_1097d18c0(param_1,&iStack_70), (int)lVar15 == 0)) {
    *param_8 = param_3;
    dVar20 = 0.0;
    bVar5 = true;
    dVar23 = 0.0;
    dVar26 = 0.0;
    dVar25 = 0.0;
  }
  else {
    if ((iStack_68 == 0) || (iStack_64 == 0)) {
      *param_8 = 0;
      return;
    }
    bVar5 = false;
    dVar26 = *(double *)(*(long *)(param_1 + 0x70) + 0x138) * 10.0;
    dVar20 = (double)iStack_70 - dVar26;
    dVar25 = (double)iStack_6c - dVar26;
    dVar23 = dVar26 + (double)(iStack_70 + iStack_68);
    dVar26 = dVar26 + (double)(iStack_6c + iStack_64);
  }
  dVar28 = *(double *)(param_1 + 0x120);
  dVar27 = *(double *)(param_1 + 0x128);
  iVar16 = (int)param_5;
  if (((dVar28 == 1.0) && (dVar27 == 0.0)) && (*(double *)(param_1 + 0x130) == 0.0)) {
    if (((((*(double *)(param_1 + 0x138) != 1.0) || (*(double *)(param_1 + 0x140) != 0.0)) ||
         ((*(double *)(param_1 + 0x148) != 0.0 ||
          ((*(double *)(lVar19 + 0x68) != 1.0 || (*(double *)(lVar19 + 0x70) != 0.0)))))) ||
        (*(double *)(lVar19 + 0x78) != 0.0)) ||
       ((((*(double *)(lVar19 + 0x80) != 1.0 || (*(double *)(lVar19 + 0x88) != 0.0)) ||
         (*(double *)(lVar19 + 0x90) != 0.0)) ||
        ((*(double *)(param_1 + 0xa0) != 0.0 || (*(double *)(param_1 + 0xa8) != 0.0)))))) {
      if (((*(double *)(param_1 + 0x138) != 1.0) ||
          ((*(double *)(lVar19 + 0x68) != 1.0 || (*(double *)(lVar19 + 0x70) != 0.0)))) ||
         ((*(double *)(lVar19 + 0x78) != 0.0 || (*(double *)(lVar19 + 0x80) != 1.0))))
      goto LAB_1097d2130;
      dVar27 = *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0x140) +
               *(double *)(lVar19 + 0x88);
      dVar28 = *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0x148) +
               *(double *)(lVar19 + 0x90);
      bVar1 = false;
      if (iVar16 != 0) {
        bVar1 = (bool)(bVar5 ^ 1);
      }
      if (bVar1) {
        if (0 < iVar16) {
          uVar7 = 0;
          bVar5 = (param_6 & 1) != 0;
          if (bVar5) {
            param_2 = param_2 + (long)(int)param_3 * 3 + -3;
          }
          lVar19 = -0x18;
          if (!bVar5) {
            lVar19 = 0x18;
          }
          uVar18 = 0;
          do {
            puVar9 = (undefined8 *)(param_4 + uVar7 * 8);
            uVar10 = *(uint *)((long)puVar9 + 4);
            uVar14 = (ulong)uVar10;
            if ((int)uVar10 < 1) {
              *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
LAB_1097d24e8:
              *(undefined4 *)(param_9 + uVar7 * 8 + 4) = 0;
            }
            else {
              bVar5 = false;
              pdVar6 = (double *)(param_7 + uVar18 * 3 + 1);
              do {
                pdVar6[-1] = *param_2;
                dVar31 = dVar27 + param_2[1];
                dVar30 = dVar28 + param_2[2];
                pdVar6[1] = dVar30;
                *pdVar6 = dVar31;
                bVar1 = false;
                bVar3 = true;
                if (dVar30 <= dVar26) {
                  bVar1 = false;
                  bVar3 = true;
                  if (!NAN(dVar25) && !NAN(dVar30)) {
                    bVar1 = dVar25 == dVar30;
                    bVar3 = dVar30 <= dVar25;
                  }
                }
                bVar2 = false;
                bVar4 = true;
                if (!bVar3 || bVar1) {
                  bVar2 = false;
                  bVar4 = true;
                  if (!NAN(dVar31) && !NAN(dVar23)) {
                    bVar2 = dVar31 == dVar23;
                    bVar4 = dVar23 <= dVar31;
                  }
                }
                bVar1 = false;
                bVar3 = true;
                if (!bVar4 || bVar2) {
                  bVar1 = false;
                  bVar3 = true;
                  if (!NAN(dVar20) && !NAN(dVar31)) {
                    bVar1 = dVar20 == dVar31;
                    bVar3 = dVar31 <= dVar20;
                  }
                }
                if (!bVar3 || bVar1) {
                  bVar5 = true;
                }
                param_2 = (double *)((long)param_2 + lVar19);
                uVar14 = uVar14 - 1;
                pdVar6 = pdVar6 + 3;
              } while (uVar14 != 0);
              *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
              if (!bVar5) goto LAB_1097d24e8;
              uVar18 = (ulong)(uVar10 + (int)uVar18);
            }
            uVar10 = (uint)uVar18;
            uVar7 = uVar7 + 1;
          } while (uVar7 != (param_5 & 0xffffffff));
          goto LAB_1097d2618;
        }
        goto LAB_1097d2614;
      }
      if (0 < (int)param_3) {
        uVar7 = (ulong)param_3;
        param_2 = param_2 + 1;
        uVar10 = 0;
        do {
          pdVar6 = (double *)(param_7 + (long)(int)uVar10 * 3);
          *pdVar6 = param_2[-1];
          dVar31 = dVar27 + *param_2;
          dVar30 = dVar28 + param_2[1];
          pdVar6[2] = dVar30;
          pdVar6[1] = dVar31;
          if (bVar5) {
LAB_1097d239c:
            uVar10 = uVar10 + 1;
          }
          else {
            bVar1 = false;
            bVar3 = true;
            if (dVar20 <= dVar31) {
              bVar1 = false;
              bVar3 = true;
              if (!NAN(dVar31) && !NAN(dVar23)) {
                bVar1 = dVar31 == dVar23;
                bVar3 = dVar23 <= dVar31;
              }
            }
            bVar2 = false;
            bVar4 = true;
            if (!bVar3 || bVar1) {
              bVar2 = false;
              bVar4 = true;
              if (!NAN(dVar25) && !NAN(dVar30)) {
                bVar2 = dVar25 == dVar30;
                bVar4 = dVar30 <= dVar25;
              }
            }
            bVar1 = false;
            bVar3 = true;
            if (!bVar4 || bVar2) {
              bVar1 = false;
              bVar3 = true;
              if (!NAN(dVar30) && !NAN(dVar26)) {
                bVar1 = dVar30 == dVar26;
                bVar3 = dVar26 <= dVar30;
              }
            }
            if (!bVar3 || bVar1) goto LAB_1097d239c;
          }
          param_2 = param_2 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        goto LAB_1097d23b4;
      }
      goto LAB_1097d23b0;
    }
    if (!bVar5) {
      if (iVar16 == 0) {
        if (0 < (int)param_3) {
          uVar7 = (ulong)param_3;
          param_2 = param_2 + 2;
          uVar18 = 0;
          do {
            pdVar6 = (double *)(param_7 + uVar18 * 3);
            *pdVar6 = param_2[-2];
            dVar27 = param_2[-1];
            dVar28 = *param_2;
            pdVar6[1] = dVar27;
            pdVar6[2] = dVar28;
            uVar10 = 0;
            if (dVar27 <= dVar23) {
              uVar10 = (uint)(dVar20 <= dVar27);
            }
            uVar17 = 0;
            if (dVar25 <= dVar28) {
              uVar17 = uVar10;
            }
            uVar10 = 0;
            if (dVar28 <= dVar26) {
              uVar10 = uVar17;
            }
            uVar10 = (int)uVar18 + uVar10;
            uVar18 = (ulong)uVar10;
            param_2 = param_2 + 3;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          goto LAB_1097d2618;
        }
      }
      else if (0 < iVar16) {
        uVar7 = 0;
        bVar5 = (param_6 & 1) != 0;
        if (bVar5) {
          param_2 = param_2 + (long)(int)param_3 * 3 + -3;
        }
        lVar19 = -0x18;
        if (!bVar5) {
          lVar19 = 0x18;
        }
        uVar18 = 0;
        do {
          puVar9 = (undefined8 *)(param_4 + uVar7 * 8);
          uVar10 = *(uint *)((long)puVar9 + 4);
          uVar14 = (ulong)uVar10;
          if ((int)uVar10 < 1) {
            *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
LAB_1097d259c:
            *(undefined4 *)(param_9 + uVar7 * 8 + 4) = 0;
          }
          else {
            bVar5 = false;
            pdVar6 = (double *)(param_7 + uVar18 * 3 + 1);
            do {
              pdVar6[-1] = *param_2;
              dVar27 = param_2[1];
              dVar28 = param_2[2];
              *pdVar6 = dVar27;
              pdVar6[1] = dVar28;
              bVar1 = false;
              bVar3 = true;
              if (dVar28 <= dVar26) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN(dVar25) && !NAN(dVar28)) {
                  bVar1 = dVar25 == dVar28;
                  bVar3 = dVar28 <= dVar25;
                }
              }
              bVar2 = false;
              bVar4 = true;
              if (!bVar3 || bVar1) {
                bVar2 = false;
                bVar4 = true;
                if (!NAN(dVar27) && !NAN(dVar23)) {
                  bVar2 = dVar27 == dVar23;
                  bVar4 = dVar23 <= dVar27;
                }
              }
              bVar1 = false;
              bVar3 = true;
              if (!bVar4 || bVar2) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN(dVar20) && !NAN(dVar27)) {
                  bVar1 = dVar20 == dVar27;
                  bVar3 = dVar27 <= dVar20;
                }
              }
              if (!bVar3 || bVar1) {
                bVar5 = true;
              }
              param_2 = (double *)((long)param_2 + lVar19);
              uVar14 = uVar14 - 1;
              pdVar6 = pdVar6 + 3;
            } while (uVar14 != 0);
            *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
            if (!bVar5) goto LAB_1097d259c;
            uVar18 = (ulong)(uVar10 + (int)uVar18);
          }
          uVar10 = (uint)uVar18;
          uVar7 = uVar7 + 1;
        } while (uVar7 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
      goto LAB_1097d2614;
    }
    _memcpy(param_7,param_2,(long)(int)param_3 * 0x18);
    uVar10 = param_3;
  }
  else {
LAB_1097d2130:
    dVar31 = *(double *)(param_1 + 0x130);
    dVar33 = *(double *)(param_1 + 0x138);
    dVar36 = dVar28 + dVar31 * 0.0;
    dVar37 = dVar31 + dVar28 * 0.0;
    dVar32 = *(double *)(param_1 + 0xa8) * dVar31 + dVar28 * *(double *)(param_1 + 0xa0) +
             *(double *)(param_1 + 0x140);
    dVar28 = dVar27 + dVar33 * 0.0;
    dVar30 = dVar33 + dVar27 * 0.0;
    dVar33 = *(double *)(param_1 + 0xa8) * dVar33 + dVar27 * *(double *)(param_1 + 0xa0) +
             *(double *)(param_1 + 0x148);
    dVar12 = *(double *)(lVar19 + 0x70);
    dVar29 = *(double *)(lVar19 + 0x68);
    dVar35 = *(double *)(lVar19 + 0x80);
    dVar34 = *(double *)(lVar19 + 0x78);
    dVar27 = dVar34 * dVar28 + dVar29 * dVar36;
    dVar28 = dVar35 * dVar28 + dVar12 * dVar36;
    dVar31 = dVar34 * dVar30 + dVar29 * dVar37;
    dVar30 = dVar35 * dVar30 + dVar12 * dVar37;
    dVar29 = dVar34 * dVar33 + dVar29 * dVar32 + *(double *)(lVar19 + 0x88);
    dVar33 = dVar35 * dVar33 + dVar12 * dVar32 + *(double *)(lVar19 + 0x90);
    bVar1 = false;
    if (iVar16 != 0) {
      bVar1 = (bool)(bVar5 ^ 1);
    }
    if (bVar1) {
      if (0 < iVar16) {
        uVar7 = 0;
        uVar10 = 0;
        bVar5 = (param_6 & 1) != 0;
        if (bVar5) {
          param_2 = param_2 + (long)(int)param_3 * 3 + -3;
        }
        lVar19 = -0x18;
        if (!bVar5) {
          lVar19 = 0x18;
        }
        do {
          puVar9 = (undefined8 *)(param_4 + uVar7 * 8);
          if (*(int *)((long)puVar9 + 4) < 1) {
            *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
LAB_1097d22d4:
            *(undefined4 *)(param_9 + uVar7 * 8 + 4) = 0;
            uVar17 = uVar10;
          }
          else {
            lVar15 = 0;
            bVar5 = false;
            pdVar6 = (double *)(param_7 + (long)(int)uVar10 * 3 + 1);
            uVar17 = uVar10;
            do {
              dVar12 = param_2[2];
              dVar32 = *param_2;
              *pdVar6 = param_2[1];
              pdVar6[-1] = dVar32;
              pdVar6[1] = dVar12;
              dVar12 = dVar29 + dVar31 * pdVar6[1] + dVar27 * *pdVar6;
              dVar32 = dVar33 + dVar30 * pdVar6[1] + dVar28 * *pdVar6;
              pdVar6[1] = dVar32;
              *pdVar6 = dVar12;
              bVar1 = false;
              bVar3 = true;
              if (dVar32 <= dVar26) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN(dVar25) && !NAN(dVar32)) {
                  bVar1 = dVar25 == dVar32;
                  bVar3 = dVar32 <= dVar25;
                }
              }
              bVar2 = false;
              bVar4 = true;
              if (!bVar3 || bVar1) {
                bVar2 = false;
                bVar4 = true;
                if (!NAN(dVar12) && !NAN(dVar23)) {
                  bVar2 = dVar12 == dVar23;
                  bVar4 = dVar23 <= dVar12;
                }
              }
              bVar1 = false;
              bVar3 = true;
              if (!bVar4 || bVar2) {
                bVar1 = false;
                bVar3 = true;
                if (!NAN(dVar20) && !NAN(dVar12)) {
                  bVar1 = dVar20 == dVar12;
                  bVar3 = dVar12 <= dVar20;
                }
              }
              if (!bVar3 || bVar1) {
                bVar5 = true;
              }
              param_2 = (double *)((long)param_2 + lVar19);
              lVar15 = lVar15 + 1;
              uVar17 = uVar17 + 1;
              pdVar6 = pdVar6 + 3;
            } while (lVar15 < *(int *)((long)puVar9 + 4));
            *(undefined8 *)(param_9 + uVar7 * 8) = *puVar9;
            if (!bVar5) goto LAB_1097d22d4;
          }
          uVar10 = uVar17;
          uVar7 = uVar7 + 1;
        } while (uVar7 != (param_5 & 0xffffffff));
        goto LAB_1097d2618;
      }
LAB_1097d2614:
      uVar10 = 0;
      goto LAB_1097d2618;
    }
    if (0 < (int)param_3) {
      uVar7 = (ulong)param_3;
      uVar10 = 0;
      do {
        pdVar6 = (double *)(param_7 + (long)(int)uVar10 * 3);
        dVar12 = param_2[2];
        dVar32 = *param_2;
        pdVar6[1] = param_2[1];
        *pdVar6 = dVar32;
        pdVar6[2] = dVar12;
        dVar12 = dVar29 + dVar31 * pdVar6[2] + dVar27 * pdVar6[1];
        dVar32 = dVar33 + dVar30 * pdVar6[2] + dVar28 * pdVar6[1];
        pdVar6[2] = dVar32;
        pdVar6[1] = dVar12;
        if (bVar5) {
LAB_1097d21e8:
          uVar10 = uVar10 + 1;
        }
        else {
          bVar1 = false;
          bVar3 = true;
          if (dVar20 <= dVar12) {
            bVar1 = false;
            bVar3 = true;
            if (!NAN(dVar12) && !NAN(dVar23)) {
              bVar1 = dVar12 == dVar23;
              bVar3 = dVar23 <= dVar12;
            }
          }
          bVar2 = false;
          bVar4 = true;
          if (!bVar3 || bVar1) {
            bVar2 = false;
            bVar4 = true;
            if (!NAN(dVar25) && !NAN(dVar32)) {
              bVar2 = dVar25 == dVar32;
              bVar4 = dVar32 <= dVar25;
            }
          }
          bVar1 = false;
          bVar3 = true;
          if (!bVar4 || bVar2) {
            bVar1 = false;
            bVar3 = true;
            if (!NAN(dVar32) && !NAN(dVar26)) {
              bVar1 = dVar32 == dVar26;
              bVar3 = dVar26 <= dVar32;
            }
          }
          if (!bVar3 || bVar1) goto LAB_1097d21e8;
        }
        param_2 = param_2 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      goto LAB_1097d23b4;
    }
LAB_1097d23b0:
    uVar10 = 0;
  }
LAB_1097d23b4:
  _memcpy(param_9,param_4,-(param_5 >> 0x1f & 1) & 0xfffffff800000000 | (param_5 & 0xffffffff) << 3)
  ;
LAB_1097d2618:
  *param_8 = uVar10;
  if (((iVar16 != 0) && ((param_6 & 1) != 0)) && (1 < (int)uVar10)) {
    lVar19 = 0;
    lVar15 = (ulong)uVar10 - 2;
    puVar9 = param_7 + (ulong)uVar10 * 3;
    do {
      puVar8 = puVar9 + -3;
      uVar11 = param_7[2];
      uVar22 = param_7[1];
      uVar21 = *param_7;
      uVar13 = puVar9[-1];
      uVar24 = *puVar8;
      param_7[1] = puVar9[-2];
      *param_7 = uVar24;
      param_7[2] = uVar13;
      puVar9[-2] = uVar22;
      *puVar8 = uVar21;
      puVar9[-1] = uVar11;
      lVar19 = lVar19 + 1;
      param_7 = param_7 + 3;
      bVar5 = lVar19 < lVar15;
      lVar15 = lVar15 + -1;
      puVar9 = puVar8;
    } while (bVar5);
  }
  return;
}



/* Entry: 1097d269c; end: 1097d27a7;  */

undefined8 * FUN_1097d269c(undefined8 *param_1,undefined8 *param_2,ulong param_3,double *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  double *pdVar7;
  undefined8 *unaff_x22;
  long lVar8;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 *puStack_890;
  ulong uStack_888;
  undefined8 *puStack_880;
  double *pdStack_878;
  undefined1 *puStack_870;
  code *pcStack_868;
  undefined8 uStack_860;
  undefined4 uStack_858;
  uint uStack_854;
  undefined8 auStack_850 [255];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  puVar5 = param_2;
  uVar6 = param_3;
  pdVar7 = param_4;
  uStack_854 = (uint)param_3;
  func_0x0001097d1b50();
  puVar2 = puVar1;
  if ((int)puVar1 == 0) {
    unaff_x22 = auStack_850;
    if (0x54 < (int)(uint)param_3) {
      puVar1 = (undefined8 *)((param_3 & 0xffffffff) * 0x18);
      _malloc();
      unaff_x22 = puVar1;
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x1;
        goto LAB_1097d275c;
      }
    }
    uStack_858 = 0;
    uStack_860 = 0;
    FUN_1097d2010(param_1,param_2,param_3,0,0,0,unaff_x22,&uStack_854);
    puVar2 = (undefined8 *)param_1[0xe];
    uVar6 = (ulong)uStack_854;
    puVar5 = unaff_x22;
    pdVar7 = param_4;
    func_0x0001097f0648();
    puVar1 = puVar2;
    if (unaff_x22 != auStack_850) {
      puVar1 = unaff_x22;
      _free();
    }
  }
LAB_1097d275c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_868 = FUN_1097d27a8;
    uVar3 = uVar6;
    puStack_890 = unaff_x22;
    uStack_888 = param_3;
    puStack_880 = param_1;
    pdStack_878 = param_4;
    puStack_870 = &stack0xfffffffffffffff0;
    FUN_1097e5818();
    if ((int)uVar3 == 0) {
      if (((*(uint *)(uVar6 + 0x30) & 0xfffffffe) == 2) &&
         (uVar3 = uVar6, FUN_1097e5590(uVar6,0,&uStack_8b8), (int)uVar3 != 0)) {
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(puVar5 + 2) = 0x18;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0x3ff0000000000000;
        puVar5[7] = 3;
        puVar5[6] = 0x100000000;
        puVar5[8] = 0x100000000;
        puVar5[9] = 0x3ff0000000000000;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x3ff0000000000000;
        puVar5[0xd] = 0;
        puVar5[3] = 0;
        puVar5[4] = puVar5 + 4;
        puVar5[5] = puVar5 + 4;
        puVar5[0x14] = uStack_898;
        puVar5[0x11] = uStack_8b0;
        puVar5[0x10] = uStack_8b8;
        puVar5[0x13] = uStack_8a0;
        puVar5[0x12] = uStack_8a8;
      }
      else {
        func_0x0001097e426c(puVar5,uVar6);
      }
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x18;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0x3ff0000000000000;
      puVar5[7] = 3;
      puVar5[6] = 0x100000000;
      puVar5[8] = 0x100000000;
      puVar5[9] = 0x3ff0000000000000;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0x3ff0000000000000;
      puVar5[0xd] = 0;
      puVar5[3] = 0;
      puVar5[4] = puVar5 + 4;
      puVar5[5] = puVar5 + 4;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x14] = 0;
    }
    if (*(int *)(uVar6 + 0x30) == 1) {
      lVar8 = *(long *)(uVar6 + 0x80);
      lVar4 = lVar8;
      FUN_1097f7168();
      if (((int)lVar4 != 0) && (*(int *)((long)puVar5 + 4) == 0)) {
        func_0x0001097d92b4(puVar5 + 9,puVar5 + 9,lVar8 + 0x68);
      }
    }
    if ((((((*pdVar7 != 1.0) || (pdVar7[1] != 0.0)) || (pdVar7[2] != 0.0)) ||
         ((pdVar7[3] != 1.0 || (pdVar7[4] != 0.0)))) || (pdVar7[5] != 0.0)) &&
       (*(int *)((long)puVar5 + 4) == 0)) {
      func_0x0001097d92b4(puVar5 + 9,pdVar7,puVar5 + 9);
    }
    puVar2 = (undefined8 *)puVar1[0x1e];
    puVar1 = puVar2;
    FUN_1097f7168();
    if (((int)puVar1 != 0) && (*(int *)((long)puVar5 + 4) == 0)) {
      puVar1 = puVar5 + 9;
      func_0x0001097d92b4(puVar1,puVar2 + 0x13,puVar5 + 9);
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 1097d27a8; end: 1097d298b;  */

void FUN_1097d27a8(long param_1,undefined8 *param_2,long param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_3;
  FUN_1097e5818();
  if ((int)lVar1 == 0) {
    if (((*(uint *)(param_3 + 0x30) & 0xfffffffe) == 2) &&
       (lVar1 = param_3, FUN_1097e5590(param_3,0,&uStack_58), (int)lVar1 != 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0x18;
      param_2[0xe] = 0;
      param_2[0xf] = 0x3ff0000000000000;
      param_2[7] = 3;
      param_2[6] = 0x100000000;
      param_2[8] = 0x100000000;
      param_2[9] = 0x3ff0000000000000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0x3ff0000000000000;
      param_2[0xd] = 0;
      param_2[3] = 0;
      param_2[4] = param_2 + 4;
      param_2[5] = param_2 + 4;
      param_2[0x14] = uStack_38;
      param_2[0x11] = uStack_50;
      param_2[0x10] = uStack_58;
      param_2[0x13] = uStack_40;
      param_2[0x12] = uStack_48;
    }
    else {
      func_0x0001097e426c(param_2,param_3);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0x18;
    param_2[0xe] = 0;
    param_2[0xf] = 0x3ff0000000000000;
    param_2[7] = 3;
    param_2[6] = 0x100000000;
    param_2[8] = 0x100000000;
    param_2[9] = 0x3ff0000000000000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0x3ff0000000000000;
    param_2[0xd] = 0;
    param_2[3] = 0;
    param_2[4] = param_2 + 4;
    param_2[5] = param_2 + 4;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[0x13] = 0;
    param_2[0x12] = 0;
    param_2[0x14] = 0;
  }
  if (*(int *)(param_3 + 0x30) == 1) {
    lVar2 = *(long *)(param_3 + 0x80);
    lVar1 = lVar2;
    FUN_1097f7168();
    if (((int)lVar1 != 0) && (*(int *)((long)param_2 + 4) == 0)) {
      func_0x0001097d92b4(param_2 + 9,param_2 + 9,lVar2 + 0x68);
    }
  }
  if ((((((*param_4 != 1.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) ||
       ((param_4[3] != 1.0 || (param_4[4] != 0.0)))) || (param_4[5] != 0.0)) &&
     (*(int *)((long)param_2 + 4) == 0)) {
    func_0x0001097d92b4(param_2 + 9,param_4,param_2 + 9);
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  lVar1 = lVar2;
  FUN_1097f7168();
  if (((int)lVar1 != 0) && (*(int *)((long)param_2 + 4) == 0)) {
    func_0x0001097d92b4(param_2 + 9,lVar2 + 0x98,param_2 + 9);
  }
  return;
}



/* Entry: 1097d298c; end: 1097d2a0b;  */

undefined8 * FUN_1097d298c(code *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)0x1;
  _calloc(1,0x130);
  if (puVar2 != (undefined8 *)0x0) {
    pcVar1 = FUN_1097d2a0c;
    if (param_1 != (code *)0x0) {
      pcVar1 = param_1;
    }
    *puVar2 = pcVar1;
    puVar2[0x21] = &UNK_10dffe330;
    lVar3 = 1;
    _calloc(1,0x158);
    puVar2[0x22] = lVar3;
    if (lVar3 == 0) {
      _free(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[0x24] = 0x2b;
    }
  }
  return puVar2;
}



/* Entry: 1097d2a0c; end: 1097d2a13;  */

undefined8 FUN_1097d2a0c(void)

{
  return 1;
}



/* Entry: 1097d2a14; end: 1097d2b63;  */

ulong * FUN_1097d2a14(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = *param_2;
  puVar6 = (ulong *)param_1[(uVar8 & 0x1f) + 1];
  if (((puVar6 == (ulong *)0x0) || (*puVar6 != uVar8)) ||
     (puVar4 = param_2, (*(code *)*param_1)(param_2,puVar6), (int)puVar4 == 0)) {
    uVar9 = *(ulong *)param_1[0x21];
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar8 / uVar9;
    }
    lVar10 = uVar8 - uVar3 * uVar9;
    puVar6 = *(ulong **)(param_1[0x22] + lVar10 * 8);
    if (puVar6 < (ulong *)0x2) {
      if (puVar6 != (ulong *)0x0) goto LAB_1097d2ac0;
    }
    else {
      if ((*puVar6 != uVar8) ||
         (puVar4 = param_2, (*(code *)*param_1)(param_2,puVar6), (int)puVar4 == 0)) {
LAB_1097d2ac0:
        uVar5 = uVar9 - 2;
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar8 / uVar5;
        }
        uVar7 = 2;
        do {
          uVar1 = (uVar8 - uVar3 * uVar5) + 1 + lVar10;
          uVar2 = 0;
          if (uVar9 <= uVar1) {
            uVar2 = uVar9;
          }
          lVar10 = uVar1 - uVar2;
          puVar6 = *(ulong **)(param_1[0x22] + lVar10 * 8);
          if (puVar6 < (ulong *)0x2) {
            if (puVar6 == (ulong *)0x0 || uVar9 <= uVar7) {
              return (ulong *)0x0;
            }
          }
          else {
            if ((*puVar6 == uVar8) &&
               (puVar4 = param_2, (*(code *)*param_1)(param_2,puVar6), (int)puVar4 != 0)) break;
            if (uVar9 <= uVar7) {
              return (ulong *)0x0;
            }
          }
          uVar7 = uVar7 + 1;
        } while( true );
      }
      param_1[(uVar8 & 0x1f) + 1] = puVar6;
    }
  }
  return puVar6;
}



/* Entry: 1097d2b64; end: 1097d2c27;  */

ulong FUN_1097d2b64(long param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = **(ulong **)(param_1 + 0x108);
  lVar6 = param_1;
  _rand();
  uVar7 = (ulong)(int)lVar6;
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar7 / uVar5;
  }
  lVar6 = uVar7 - uVar3 * uVar5;
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x110) + lVar6 * 8);
  if ((uVar3 < 2) || (uVar1 = uVar3, (*param_2)(), (int)uVar1 == 0)) {
    uVar3 = uVar5 - 2;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar7 / uVar3;
    }
    uVar4 = uVar5;
    if (uVar5 < 2 || uVar3 == 0) {
      uVar4 = 2;
    }
    lVar8 = uVar4 - 1;
    do {
      uVar4 = (uVar7 - uVar1 * uVar3) + 1 + lVar6;
      uVar2 = 0;
      if (uVar5 <= uVar4) {
        uVar2 = uVar5;
      }
      lVar6 = uVar4 - uVar2;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x110) + lVar6 * 8);
      if ((1 < uVar4) && (uVar2 = uVar4, (*param_2)(), (int)uVar2 != 0)) {
        return uVar4;
      }
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1097d2c28; end: 1097d2c9f;  */

long * FUN_1097d2c28(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  FUN_1097d2ca0();
  if ((int)plVar1 == 0) {
    plVar2 = param_1;
    FUN_1097d2de8(param_1,param_2);
    if (*plVar2 == 0) {
      param_1[0x24] = param_1[0x24] + -1;
    }
    *plVar2 = (long)param_2;
    param_1[(*param_2 & 0x1f) + 1] = (long)param_2;
    param_1[0x23] = param_1[0x23] + 1;
  }
  return plVar1;
}



/* Entry: 1097d2ca0; end: 1097d2de7;  */

undefined8 FUN_1097d2ca0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong auStack_180 [33];
  ulong *puStack_78;
  long lStack_70;
  
  puVar3 = *(ulong **)(param_1 + 0x108);
  uVar6 = *puVar3;
  _memcpy(auStack_180,param_1,0x130);
  if (uVar6 >> 1 < *(ulong *)(param_1 + 0x118)) {
    lVar2 = 8;
LAB_1097d2d08:
    puStack_78 = (ulong *)((long)puVar3 + lVar2);
  }
  else {
    if (*(ulong *)(param_1 + 0x118) < uVar6 >> 3) {
      if (puVar3 != (ulong *)&UNK_10dffe330) {
        lVar2 = -8;
        goto LAB_1097d2d08;
      }
      puStack_78 = (ulong *)&UNK_10dffe330;
    }
    if ((puStack_78 == puVar3) && (uVar6 >> 2 < *(ulong *)(param_1 + 0x120))) {
      return 0;
    }
  }
  puVar3 = puStack_78;
  uVar7 = *puStack_78;
  uVar4 = 1;
  if (uVar7 >> 0x3d == 0 && (uVar7 & 0x1fffffffffffffff) != 0) {
    lVar2 = 1;
    _calloc();
    if (lVar2 != 0) {
      lStack_70 = lVar2;
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          uVar5 = *(ulong *)(*(long *)(param_1 + 0x110) + uVar8 * 8);
          if (1 < uVar5) {
            puVar1 = auStack_180;
            FUN_1097d2de8(auStack_180,uVar5);
            *puVar1 = uVar5;
            uVar6 = **(ulong **)(param_1 + 0x108);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
      _free(*(undefined8 *)(param_1 + 0x110));
      uVar4 = 0;
      *(ulong **)(param_1 + 0x108) = puVar3;
      *(long *)(param_1 + 0x110) = lVar2;
      *(ulong *)(param_1 + 0x120) = uVar7 - *(long *)(param_1 + 0x118);
    }
  }
  return uVar4;
}



/* Entry: 1097d2de8; end: 1097d2ee7;  */

ulong * FUN_1097d2de8(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_1 + 0x110);
  uVar7 = **(ulong **)(param_1 + 0x108);
  uVar9 = *param_2;
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar9 / uVar7;
  }
  lVar8 = uVar9 - uVar4 * uVar7;
  puVar6 = (ulong *)(lVar3 + lVar8 * 8);
  if (1 < *puVar6) {
    uVar4 = uVar7 - 2;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar9 / uVar4;
    }
    uVar1 = uVar7;
    if (uVar7 < 2 || uVar4 == 0) {
      uVar1 = 2;
    }
    lVar10 = uVar1 - 1;
    while( true ) {
      uVar1 = (uVar9 - uVar5 * uVar4) + 1 + lVar8;
      uVar2 = 0;
      if (uVar7 <= uVar1) {
        uVar2 = uVar7;
      }
      lVar8 = uVar1 - uVar2;
      if (*(ulong *)(lVar3 + lVar8 * 8) < 2) break;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        return (ulong *)0x0;
      }
    }
    puVar6 = (ulong *)(lVar3 + lVar8 * 8);
  }
  return puVar6;
}



/* Entry: 1097d2ee8; end: 1097d310b;  */

void FUN_1097d2ee8(undefined8 param_1,int param_2,int param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  ulong uVar6;
  ulong uVar9;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  iVar2 = *(int *)(param_4 + 0x28);
  if (iVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_4 + 0x30) + 0x14);
    do {
      uVar9 = *(ulong *)(piVar3 + -5);
      iVar4 = (int)uVar9 >> 8;
      iVar7 = (int)((long)uVar9 >> 0x28);
      iVar5 = -(uint)(0x7fff < iVar4);
      iVar8 = -(uint)(0x7fff < iVar7);
      uVar6 = CONCAT44(iVar8,iVar5) & 0x7fffffff7fffffff;
      uStack_a8 = CONCAT17((byte)(uVar6 >> 0x38) |
                           (byte)(uVar9 >> 0x30) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT16((byte)(uVar6 >> 0x30) |
                                    (byte)(uVar9 >> 0x28) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT15((byte)(uVar6 >> 0x28) |
                                             (byte)(uVar9 >> 0x20) & ~(byte)((uint)iVar8 >> 8),
                                             CONCAT14((char)(uVar6 >> 0x20),
                                                      CONCAT13((byte)(uVar6 >> 0x18) |
                                                               (byte)(uVar9 >> 0x10) &
                                                               ~(byte)((uint)iVar5 >> 0x18),
                                                               CONCAT12((byte)(uVar6 >> 0x10) |
                                                                        (byte)(uVar9 >> 8) &
                                                                        ~(byte)((uint)iVar5 >> 0x10)
                                                                        ,CONCAT11((byte)(uVar6 >> 8)
                                                                                  | (byte)uVar9 &
                                                                                    ~(byte)((uint)
                                                  iVar5 >> 8),(char)uVar6)))))));
      uStack_a8 = uStack_a8 ^
                  (uStack_a8 ^ 0x8000000080000000) &
                  CONCAT44(-(uint)(iVar7 < -0x8000),-(uint)(iVar4 < -0x8000));
      piVar1 = piVar3 + -3;
      FUN_1097d310c();
      iVar4 = 0x7fffffff;
      iVar5 = -0x80000000;
      if ((int)piVar1 == 0) {
        iVar7 = piVar3[-3] >> 8;
        iVar8 = 0x7fffffff;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[-3] << 8;
        }
        iStack_a0 = -0x80000000;
        if (-0x8001 < iVar7) {
          iStack_a0 = iVar8;
        }
        iVar7 = piVar3[-2] >> 8;
        iVar8 = 0x7fffffff;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[-2] << 8;
        }
        iStack_9c = -0x80000000;
        if (-0x8001 < iVar7) {
          iStack_9c = iVar8;
        }
        iVar7 = piVar3[-1] >> 8;
        iVar8 = iVar4;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[-1] << 8;
        }
        iStack_98 = iVar5;
        if (-0x8001 < iVar7) {
          iStack_98 = iVar8;
        }
        iVar7 = *piVar3 >> 8;
        iVar8 = iVar4;
        if (iVar7 < 0x8000) {
          iVar8 = *piVar3 << 8;
        }
        iStack_94 = iVar5;
        if (-0x8001 < iVar7) {
          iStack_94 = iVar8;
        }
      }
      else {
        func_0x0001097d3174(piVar3 + -3,uVar9 & 0xffffffff,uVar9 >> 0x20,&iStack_a0);
        iStack_94 = uStack_a8._4_4_;
        iStack_9c = (int)uStack_a8;
      }
      iVar7 = (int)piVar3 + 4;
      FUN_1097d310c();
      if (iVar7 == 0) {
        iVar7 = piVar3[1] >> 8;
        iVar8 = iVar4;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[1] << 8;
        }
        iStack_90 = iVar5;
        if (-0x8001 < iVar7) {
          iStack_90 = iVar8;
        }
        iVar7 = piVar3[2] >> 8;
        iVar8 = iVar4;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[2] << 8;
        }
        iStack_8c = iVar5;
        if (-0x8001 < iVar7) {
          iStack_8c = iVar8;
        }
        iVar7 = piVar3[3] >> 8;
        iVar8 = iVar4;
        if (iVar7 < 0x8000) {
          iVar8 = piVar3[3] << 8;
        }
        iStack_88 = iVar5;
        if (-0x8001 < iVar7) {
          iStack_88 = iVar8;
        }
        iVar7 = piVar3[4] >> 8;
        if (iVar7 < 0x8000) {
          iVar4 = piVar3[4] << 8;
        }
        iStack_84 = iVar5;
        if (-0x8001 < iVar7) {
          iStack_84 = iVar4;
        }
      }
      else {
        func_0x0001097d3174(piVar3 + 1,uVar9 & 0xffffffff,uVar9 >> 0x20,&iStack_90);
        iStack_84 = uStack_a8._4_4_;
        iStack_8c = (int)uStack_a8;
      }
      iVar2 = iVar2 + -1;
      FUN_1097c28e4(param_1,&uStack_a8,-param_2,-param_3);
      piVar3 = piVar3 + 10;
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 1097d310c; end: 1097d31d3;  */

bool FUN_1097d310c(int *param_1)

{
  if (((*param_1 + 0x7fffffU < 0xfffeff) && (param_1[2] + 0x7fffffU < 0xfffeff)) &&
     (param_1[1] + 0x7fffffU < 0xfffeff)) {
    return param_1[3] < -0x7fffff || 0x7ffeff < param_1[3];
  }
  return true;
}



/* Entry: 1097d31d4; end: 1097d3363;  */

void FUN_1097d31d4(undefined8 param_1,undefined8 *param_2)

{
  _pthread_mutex_lock(0x1132e0408);
  if (lRam000000011382ade0 != 0) {
    FUN_1097bd074(lRam000000011382ade0,param_1,*param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132e0408);
  return;
}



/* Entry: 1097d3364; end: 1097d3373;  */

undefined8 FUN_1097d3364(void)

{
  return 0;
}



/* Entry: 1097d3374; end: 1097d33c3;  */

undefined8 FUN_1097d3374(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar4;
  undefined8 uVar3;
  
  lVar4 = *(long *)(param_1 + 0x170);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = lVar4 + 8;
    func_0x0001097bfdd8(lVar2,param_2 + 8);
    uVar3 = 1;
    uVar1 = 1;
    if ((int)lVar2 == 0) goto LAB_1097d33b0;
  }
  *(undefined4 *)(lVar4 + 0x24) = uVar1;
  uVar3 = 0;
LAB_1097d33b0:
  *(undefined4 *)(lVar4 + 0x30) = 1;
  return uVar3;
}



/* Entry: 1097d33c4; end: 1097d350f;  */

undefined8 FUN_1097d33c4(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  plVar9 = (long *)(param_3 + 0x30);
  do {
    if (0 < (int)plVar9[2]) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        piVar1 = (int *)(plVar9[1] + lVar10);
        iVar2 = *piVar1 >> 8;
        iVar3 = piVar1[1] >> 8;
        iVar6 = (piVar1[2] >> 8) - iVar2;
        iVar7 = (piVar1[3] >> 8) - iVar3;
        uVar4 = *(uint *)(param_1 + 0x188);
        if (uVar4 == *(uint *)(param_2 + 0x188)) {
          uVar8 = *(undefined8 *)(param_2 + 400);
          iVar5 = (uVar4 >> 0x18) << (ulong)(uVar4 >> 0x16 & 3);
          func_0x0001097c37a4(uVar8,*(undefined8 *)(param_1 + 400),*(ulong *)(param_2 + 0x1a0) >> 2,
                              *(ulong *)(param_1 + 0x1a0) >> 2,iVar5,iVar5,iVar2 + param_4,
                              iVar3 + param_5,iVar2,iVar3,iVar6,iVar7);
          if ((int)uVar8 == 0) goto LAB_1097d34a0;
        }
        else {
LAB_1097d34a0:
          func_0x0001097c3110(1,*(undefined8 *)(param_2 + 0x170),0,*(undefined8 *)(param_1 + 0x170),
                              iVar2 + param_4,iVar3 + param_5,0,0,iVar2,iVar3,iVar6,iVar7);
        }
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar11 < (int)plVar9[2]);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1097d3510; end: 1097d36bb;  */

void FUN_1097d3510(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uVar2 = param_2;
  FUN_1097d49b4(param_2,param_3,param_1,&uStack_4c);
  if ((int)uVar2 == 0) {
    uStack_48 = *(undefined8 *)(param_3 + 0x20);
    puVar3 = &uStack_48;
    FUN_1097c246c();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x0001097d4b3c(param_2);
      plVar5 = (long *)(param_4 + 0x30);
      do {
        if (0 < (int)plVar5[2]) {
          lVar6 = 0;
          lVar7 = 0;
          do {
            piVar1 = (int *)(plVar5[1] + lVar6);
            func_0x0001097c3110(param_2,puVar3,0,*(undefined8 *)(param_1 + 0x170),0,0,0,0,
                                *piVar1 >> 8,piVar1[1] >> 8,(piVar1[2] >> 8) - (*piVar1 >> 8),
                                (piVar1[3] >> 8) - (piVar1[1] >> 8));
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 0x10;
          } while (lVar7 < (int)plVar5[2]);
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      puVar4 = puVar3;
      FUN_1097bdccc();
      if ((int)puVar4 != 0) {
        _free(puVar3);
      }
    }
  }
  else {
    plVar5 = (long *)(param_4 + 0x30);
    do {
      if (0 < (int)plVar5[2]) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          piVar1 = (int *)(plVar5[1] + lVar6);
          func_0x0001097c3874(*(undefined8 *)(param_1 + 400),*(ulong *)(param_1 + 0x1a0) >> 2,
                              (*(uint *)(param_1 + 0x188) >> 0x18) <<
                              (ulong)(*(uint *)(param_1 + 0x188) >> 0x16 & 3),*piVar1 >> 8,
                              piVar1[1] >> 8,(piVar1[2] >> 8) - (*piVar1 >> 8),
                              (piVar1[3] >> 8) - (piVar1[1] >> 8),uStack_4c);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar7 < (int)plVar5[2]);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}



/* Entry: 1097d36bc; end: 1097d36c3;  */

undefined8 FUN_1097d36bc(void)

{
  return 0;
}



/* Entry: 1097d36c4; end: 1097d3caf;  */

undefined8 FUN_1097d36c4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001097d4b3c(param_2);
  FUN_1097c3110();
  return 0;
}


