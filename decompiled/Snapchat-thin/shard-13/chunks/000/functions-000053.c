/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f23b94; end: 109f2414b;  */

long * FUN_109f23b94(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  bool bVar24;
  ulong unaff_x23;
  int iVar25;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong *unaff_x26;
  long *plVar26;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long *aplStack_1f8 [4];
  undefined8 uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_2 + 0x20);
  plVar26 = param_1;
  if (((uint)*(ushort *)(param_2 + 0x10) &
      (*(uint *)(lVar12 + (ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(lVar12 + 0x28) * 0x68] * 4
                + 0x50) ^ 0xffffffff)) != 0) {
    unaff_x21 = param_1 + 3;
    *unaff_x21 = 2;
    param_1[4] = lVar12;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    bVar3 = *(byte *)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0xd);
    unaff_x22 = (ulong)bVar3;
    if (unaff_x22 != 0) {
      unaff_x27 = 0;
      unaff_x23 = (ulong)*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 0xb8) + 0x1d);
      unaff_x28 = param_2 + 0x28;
      unaff_x26 = (ulong *)((ulong)&uStack_170 | 8);
      do {
        if ((*(ushort *)(param_2 + 0x10) >> (ulong)((uint)unaff_x27 & 0x1f) & 1) == 0) {
          unaff_x24 = *(undefined8 **)param_1[6];
          FUN_109f6600c(unaff_x24,0x48,8);
          *(undefined4 *)(unaff_x24 + 3) = 7;
          unaff_x24[1] = 0;
          unaff_x24[2] = 0;
          *unaff_x24 = 0;
          unaff_x25 = unaff_x24 + 5;
          FUN_109ecb048();
          FUN_109ece5ec(unaff_x21,unaff_x24);
          unaff_x26[-1] = (ulong)unaff_x25;
          *unaff_x26 = 0;
        }
        else {
          lVar12 = *(long *)(unaff_x28 + unaff_x27 * 8);
          uVar1 = 0;
          if (*(char *)(lVar12 + 0x50) != '\x01') {
            uVar1 = unaff_x27;
          }
          unaff_x26[-1] = *(ulong *)(lVar12 + 0xb8);
          *unaff_x26 = uVar1;
          cVar4 = *(char *)(lVar12 + 0x1c) + -1;
          *(char *)(lVar12 + 0x1c) = cVar4;
          if ((cVar4 == '\0') && (lVar12 != *(long *)(param_2 + 0x20))) {
            FUN_109ecb9c0();
          }
        }
        unaff_x27 = unaff_x27 + 1;
        unaff_x26 = unaff_x26 + 2;
      } while (unaff_x22 != unaff_x27);
    }
    plVar26 = unaff_x21;
    FUN_109ece384(unaff_x21,&uStack_170,unaff_x22);
    lVar12 = *(long *)(param_2 + 0x20);
    if (*(char *)(lVar12 + 0x50) == '\x01') {
      plVar14 = (long *)(lVar12 + 0x88);
      lVar15 = *plVar14;
      *(byte *)(lVar12 + 0x50) = bVar3;
      lVar17 = *(long *)(param_2 + 0x18);
      plVar19 = *(long **)(lVar12 + 0x90);
      *(long **)(lVar15 + 8) = plVar19;
      *plVar19 = lVar15;
      *plVar14 = 0;
      plVar19 = (long *)(lVar17 + 0x88);
      lVar15 = *plVar19;
      *(long **)(lVar12 + 0x90) = plVar19;
      *(long *)(lVar12 + 0x98) = lVar17 + 0x80;
      *plVar14 = lVar15;
      *(long **)(lVar15 + 8) = plVar14;
      *plVar19 = (long)plVar14;
    }
    *(uint *)(lVar12 + (ulong)(byte)(&UNK_110b671aa)[(ulong)*(uint *)(lVar12 + 0x28) * 0x68] * 4 +
             0x50) = (uint)*(ushort *)(param_2 + 0x10);
    plVar14 = *(long **)(lVar12 + 0xb0);
    plVar19 = (long *)(lVar12 + 0xa8);
    lVar15 = *plVar19;
    *(long **)(lVar15 + 8) = plVar14;
    *plVar14 = lVar15;
    *plVar19 = 0;
    *(long **)(lVar12 + 0xb8) = plVar26;
    plVar26 = plVar26 + 1;
    lVar15 = *plVar26;
    *(long **)(lVar12 + 0xb0) = plVar26;
    *plVar19 = lVar15;
    *(long **)(lVar15 + 8) = plVar19;
    *plVar26 = (long)plVar19;
    *(undefined1 *)(param_1 + 8) = 1;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar26;
  }
  ___stack_chk_fail();
  uStack_178 = 0x109f23df0;
  plVar14 = (long *)plVar26[0x2f];
  plVar26 = (long *)*(long *)plVar26[0x2f];
  while( true ) {
    if (plVar26 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar12 = plVar14[6];
    if (lVar12 != 0) break;
    plVar14 = plVar26;
    plVar26 = (long *)*plVar26;
  }
  plVar26 = (long *)0x0;
  lStack_1d0 = unaff_x28;
  uStack_1c8 = unaff_x27;
  puStack_1c0 = unaff_x26;
  puStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  uStack_1a8 = unaff_x23;
  uStack_1a0 = unaff_x22;
  plStack_198 = unaff_x21;
  lStack_190 = unaff_x20;
  plStack_188 = unaff_x19;
  puStack_180 = &stack0xfffffffffffffff0;
  do {
    uStack_220 = 0;
    lStack_218 = 0;
    lVar17 = *(long *)(*(long *)(lVar12 + 0x20) + 0x18);
    uStack_210 = 0;
    lVar15 = *(long *)(lVar12 + 0x30);
    if (lVar15 == 0) {
LAB_109f240f4:
      uVar16 = 0xfffffff7;
    }
    else {
      lVar5 = lVar15;
      lStack_208 = lVar17;
      lStack_200 = lVar12;
      FUN_109ecc434();
      bVar24 = false;
      do {
        while( true ) {
          lVar6 = lVar5;
          plVar19 = *(long **)(lVar15 + 8);
          lVar13 = plVar19[1];
          lVar5 = lVar6;
          lVar15 = lVar6;
          if ((lVar13 != 0) && ((int)plVar19[2] == 1)) break;
LAB_109f23eec:
          FUN_109ecc434();
          if (lVar6 == 0) {
            if (!bVar24) goto LAB_109f240f4;
            goto LAB_109f240e8;
          }
        }
        plVar18 = (long *)plVar19[9];
        plVar9 = (long *)0x0;
        if (plVar18 != plVar19 + 0xb) {
          plVar9 = plVar18;
        }
        plVar20 = (long *)plVar19[0xd];
        plVar2 = (long *)0x0;
        if (plVar20 == plVar19 + 0xf) {
          plVar23 = (long *)0x0;
        }
        else {
          plVar23 = (long *)plVar19[0x10];
          plVar2 = plVar20;
        }
        if ((plVar23 != plVar2) || ((long *)plVar20[4] != plVar2 + 6)) goto LAB_109f23eec;
        if (plVar18 == plVar19 + 0xb) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = (long *)plVar19[0xc];
        }
        if ((plVar20 != plVar9) || (plVar18 = (long *)plVar18[4], plVar18 == plVar9 + 6))
        goto LAB_109f23eec;
        uVar16 = 0xffffffff;
        plVar20 = plVar18;
        do {
          plVar20 = (long *)*plVar20;
          uVar16 = uVar16 + 1;
        } while (plVar20 != (long *)0x0);
        if (1 < uVar16) goto LAB_109f23eec;
        plVar20 = *(long **)(*plVar19 + 0x20);
        plVar23 = (long *)*plVar20;
        if ((plVar23 != (long *)0x0) && ((int)plVar20[3] == 8)) {
          lVar21 = *plVar23;
          while( true ) {
            plVar22 = (long *)0x0;
            if ((lVar21 != 0) && (plVar22 = plVar23, *(int *)(plVar23 + 3) != 8)) {
              plVar22 = (long *)0x0;
            }
            plVar20 = (long *)plVar20[5];
            while ((long *)*plVar20 != (long *)0x0) {
              plVar23 = plVar20 + 2;
              plVar20 = (long *)*plVar20;
              if ((long *)*plVar23 == plVar9 || (long *)*plVar23 == plVar2) goto LAB_109f23eec;
            }
            if (plVar22 == (long *)0x0) break;
            plVar23 = (long *)*plVar22;
            lVar21 = *plVar23;
            plVar20 = plVar22;
          }
        }
        if ((int)plVar18[3] != 4) goto LAB_109f23eec;
        iVar25 = (int)plVar18[5];
        puVar10 = (undefined1 *)plVar19[7];
        lStack_218 = 0;
        if (*(long *)(lVar13 + 8) != 0) {
          lStack_218 = lVar13;
        }
        uStack_220 = 1;
        if (iVar25 < 0x294) {
          if (iVar25 == 0x60) {
            iVar25 = 0x61;
          }
          else {
            if (iVar25 != 0x61) goto LAB_109f23eec;
LAB_109f23ff0:
            puVar7 = &uStack_220;
            FUN_109ece1b0(&uStack_220,0x120,puVar10,plVar18[0x13]);
            lVar17 = lStack_208;
            puVar10 = (undefined1 *)puVar7;
          }
        }
        else {
          if (iVar25 != 0x294) {
            if (iVar25 == 0x295) goto LAB_109f23ff0;
            goto LAB_109f23eec;
          }
          iVar25 = 0x295;
        }
        lVar13 = lVar17;
        FUN_109ecb0a8(lVar17,iVar25);
        *(undefined8 *)(lVar13 + 0x80) = 0;
        *(undefined8 *)(lVar13 + 0x88) = 0;
        *(undefined8 *)(lVar13 + 0x90) = 0;
        *(undefined1 **)(lVar13 + 0x98) = puVar10;
        if ((int)plVar19[2] == 0) {
          uVar8 = 0;
          plVar9 = plVar19;
        }
        else {
          plVar9 = (long *)0x0;
          if (((long *)plVar19[1])[1] != 0) {
            plVar9 = (long *)plVar19[1];
          }
          uVar8 = 1;
        }
        FUN_109ecb4f0(uVar8,plVar9,lVar13);
        FUN_109ecb9c0(plVar18);
        if ((int)plVar19[2] == 0) {
          uVar8 = 0;
          uVar11 = 1;
          plVar9 = plVar19;
        }
        else {
          uVar11 = 0;
          plVar18 = (long *)*plVar19;
          plVar9 = (long *)0x0;
          if (((long *)plVar19[1])[1] != 0) {
            plVar9 = (long *)plVar19[1];
          }
          plVar19 = (long *)0x0;
          if (*plVar18 != 0) {
            plVar19 = plVar18;
          }
          uVar8 = 1;
        }
        FUN_109ef87e8(aplStack_1f8,uVar8,plVar9,uVar11,plVar19);
        for (plVar19 = aplStack_1f8[0]; *plVar19 != 0; plVar19 = (long *)*plVar19) {
          FUN_109ef8c00(plVar19,uStack_1d8);
        }
        FUN_109ecc434();
        bVar24 = true;
      } while (lVar6 != 0);
LAB_109f240e8:
      uVar16 = 0;
      plVar26 = (long *)0x1;
    }
    *(uint *)(lVar12 + 0x84) = *(uint *)(lVar12 + 0x84) & uVar16;
    plVar14 = (long *)*plVar14;
    plVar19 = (long *)*plVar14;
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return plVar26;
      }
      lVar12 = plVar14[6];
      if (lVar12 != 0) break;
      plVar14 = plVar19;
      plVar19 = (long *)*plVar19;
    }
  } while( true );
}



/* Entry: 109f2414c; end: 109f250f7;  */

uint FUN_109f2414c(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  double dVar17;
  ulong uVar18;
  uint uVar19;
  int *piVar20;
  ulong uVar21;
  long **pplVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uStack_9b8;
  long *plStack_9b0;
  undefined8 uStack_9a8;
  long *plStack_9a0;
  long lStack_998;
  undefined8 auStack_990 [16];
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long *aplStack_890 [257];
  long lStack_88;
  
  iVar9 = (int)param_3;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar26 = *(long **)(param_1 + 0x178);
  plVar14 = (long *)**(long **)(param_1 + 0x178);
  do {
    lVar24 = param_1;
    if (plVar14 == (long *)0x0) {
      uVar30 = 0;
LAB_109f241ac:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return uVar30 & 1;
      }
      ___stack_chk_fail();
      if (*(uint *)(lVar24 + 0x60) == 0) {
        return 0;
      }
      uVar18 = 0;
      piVar20 = (int *)(*(long *)(lVar24 + 0x58) + 0x20);
      while (*piVar20 != iVar9) {
        uVar18 = uVar18 + 1;
        piVar20 = piVar20 + 10;
        if (*(uint *)(lVar24 + 0x60) == uVar18) {
          return 0;
        }
      }
      if ((int)uVar18 < 0) {
        return 0;
      }
      lVar24 = **(long **)(piVar20 + -2);
      if (*(int *)(lVar24 + 0x18) != 5) {
        return 0;
      }
      uVar36 = (uint)*(undefined8 *)(lVar24 + 0x48);
      uVar30 = (*(byte *)(lVar24 + 0x45) & 0xaaaaaaaa) >> 1 |
               (*(byte *)(lVar24 + 0x45) & 0x55555555) << 1;
      uVar30 = (uVar30 & 0xcccccccc) >> 2 | (uVar30 & 0x33333333) << 2;
      uVar13 = (uint)LZCOUNT((uVar30 >> 4 | (uVar30 & 0xf0f0f0f) << 4) << 0x18);
      uVar30 = uVar36 & 0xff;
      if (uVar13 != 3) {
        uVar30 = uVar36 & 0xffff;
      }
      uVar19 = uVar36 & 1;
      if (uVar13 != 0) {
        uVar19 = uVar30;
      }
      if (uVar13 < 5) {
        uVar36 = uVar19;
      }
      *(uint *)param_2 = (int)*param_2 + uVar36;
      FUN_109ecb29c();
      return 1;
    }
    lVar28 = plVar26[6];
    if (lVar28 != 0) {
      bVar5 = false;
      bVar2 = 0;
      uVar30 = 0;
      do {
        uStack_9b8 = 0;
        plStack_9b0 = (long *)0x0;
        plStack_9a0 = *(long **)(*(long *)(lVar28 + 0x20) + 0x18);
        uStack_9a8 = 0;
        lVar31 = *(long *)(lVar28 + 0x30);
        lStack_998 = lVar28;
        if (lVar31 == 0) {
          uVar36 = 0;
          uVar13 = 0xfffffff7;
        }
        else {
          lVar24 = lVar31;
          FUN_109ecc434();
          uVar36 = 0;
          do {
            lVar6 = lVar24;
            plVar35 = *(long **)(lVar31 + 0x20);
            plVar14 = (long *)*plVar35;
            if (plVar14 != (long *)0x0) {
LAB_109f24258:
              plVar16 = (long *)0x0;
              plVar7 = plVar35;
              if (*plVar14 != 0) {
                plVar16 = plVar14;
              }
LAB_109f24268:
              plVar35 = plVar16;
              plVar14 = plStack_9a0;
              iVar9 = (int)plVar7[3];
              if (iVar9 != 4) {
                if (iVar9 != 3) {
                  if (iVar9 != 0) goto LAB_109f2496c;
                  uVar18 = (ulong)*(uint *)(plVar7 + 5);
                  if (((&UNK_110b78544)[uVar18 * 0x68] & 0x79) == 0) {
                    cVar11 = *(char *)((long)plVar7 + 0x4d);
                  }
                  else {
                    cVar11 = '\0';
                  }
                  if ((&UNK_110b78540)[uVar18 * 0x68] == '\0') {
                    cVar10 = ' ';
                    if (cVar11 != '\0') {
                      cVar10 = cVar11;
                    }
                    uStack_908 = 0;
                    uStack_910 = 0;
                    uStack_8f8 = 0;
                    uStack_900 = 0;
                    uStack_8e8 = 0;
                    uStack_8f0 = 0;
                    uStack_8d8 = 0;
                    uStack_8e0 = 0;
                    uStack_8c8 = 0;
                    uStack_8d0 = 0;
                    uStack_8b8 = 0;
                    uStack_8c0 = 0;
                    uStack_8a8 = 0;
                    uStack_8b0 = 0;
                    uStack_898 = 0;
                    uStack_8a0 = 0;
                  }
                  else {
                    uVar21 = 0;
                    plVar16 = plVar7 + 0xe;
                    pplVar22 = aplStack_890;
                    do {
                      if (cVar11 == '\0') {
                        if ((*(uint *)(&UNK_110b78558 + uVar18 * 0x68 + uVar21 * 4) & 0x79) == 0) {
                          cVar11 = *(char *)(plVar7[uVar21 * 6 + 0xd] + 0x1d);
                        }
                        else {
                          cVar11 = '\0';
                        }
                      }
                      lVar24 = *(long *)plVar7[uVar21 * 6 + 0xd];
                      if (*(int *)(lVar24 + 0x18) != 5) goto LAB_109f2496c;
                      uVar29 = 0;
                      while( true ) {
                        bVar1 = (&UNK_110b78548)[uVar18 * 0x68 + uVar21];
                        if (bVar1 == 0) {
                          bVar1 = *(byte *)((long)plVar7 + 0x4c);
                        }
                        if (bVar1 <= uVar29) break;
                        pplVar22[uVar29] =
                             *(long **)(lVar24 + 0x48 + (ulong)*(byte *)((long)plVar16 + uVar29) * 8
                                       );
                        uVar29 = uVar29 + 1;
                        uVar18 = (ulong)*(uint *)(plVar7 + 5);
                      }
                      uVar21 = uVar21 + 1;
                      uVar29 = (ulong)(byte)(&UNK_110b78540)[uVar18 * 0x68];
                      pplVar22 = pplVar22 + 0x10;
                      plVar16 = plVar16 + 6;
                    } while (uVar21 < uVar29);
                    cVar10 = ' ';
                    if (cVar11 != '\0') {
                      cVar10 = cVar11;
                    }
                    uStack_908 = 0;
                    uStack_910 = 0;
                    uStack_8f8 = 0;
                    uStack_900 = 0;
                    uStack_8e8 = 0;
                    uStack_8f0 = 0;
                    uStack_8d8 = 0;
                    uStack_8e0 = 0;
                    uStack_8c8 = 0;
                    uStack_8d0 = 0;
                    uStack_8b8 = 0;
                    uStack_8c0 = 0;
                    uStack_8a8 = 0;
                    uStack_8b0 = 0;
                    uStack_898 = 0;
                    uStack_8a0 = 0;
                    if ((&UNK_110b78540)[uVar18 * 0x68] != 0) {
                      pplVar22 = aplStack_890;
                      puVar15 = auStack_990;
                      do {
                        *puVar15 = pplVar22;
                        pplVar22 = pplVar22 + 0x10;
                        uVar29 = uVar29 - 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar29 != 0);
                    }
                  }
                  FUN_109ed0944(uVar18,&uStack_910,*(undefined1 *)((long)plVar7 + 0x4c),cVar10,
                                auStack_990,*(int *)((long)plStack_9a0 + 0x124));
                  uStack_9b8 = 2;
                  bVar1 = *(byte *)((long)plVar7 + 0x4c);
                  param_3 = (long *)(ulong)*(byte *)((long)plVar7 + 0x4d);
                  param_2 = (long *)(ulong)bVar1;
                  plStack_9b0 = plVar7;
                  FUN_109ecafe4();
                  if (plVar14 == (long *)0x0) {
                    plVar16 = (long *)0x0;
                  }
                  else {
                    _memcpy(plVar14 + 9,&uStack_910,(long)(ulong)bVar1 << 3);
                    param_2 = plVar7;
                    param_3 = plVar14;
                    FUN_109ecb4f0(2);
                    uStack_9b8 = 3;
                    plVar16 = plVar14 + 5;
                    plStack_9b0 = plVar14;
                  }
                  if ((long *)plVar7[8] + -1 != plVar7 + 6) {
                    plVar14 = (long *)plVar7[8];
                    do {
                      lVar24 = *plVar14;
                      plVar32 = (long *)plVar14[1];
                      *(long **)(lVar24 + 8) = plVar32;
                      *plVar32 = lVar24;
                      plVar14[1] = (long)(plVar16 + 1);
                      plVar14[2] = (long)plVar16;
                      *plVar14 = 0;
                      lVar24 = plVar16[1];
                      *plVar14 = lVar24;
                      *(long **)(lVar24 + 8) = plVar14;
                      plVar16[1] = (long)plVar14;
                      plVar14 = plVar32;
                    } while (plVar32 + -1 != plVar7 + 6);
                  }
                  FUN_109ecb9c0(plVar7[6]);
                  FUN_109ecbc58(plVar7);
LAB_109f24a28:
                  uVar13 = 1;
                  goto LAB_109f24cd4;
                }
                plVar14 = plVar7;
                FUN_109f250f8(plVar7,plVar7 + 0xf,0xd);
                param_2 = (long *)((long)plVar7 + 0x7c);
                param_3 = (long *)0xe;
                plVar16 = plVar7;
                FUN_109f250f8();
                uVar13 = (uint)plVar14 | (uint)plVar16;
                if ((int)plVar7[6] == 1) {
                  uVar19 = 0;
                  if (*(uint *)(plVar7 + 0xc) != 0) {
                    param_2 = (long *)0x0;
                    piVar20 = (int *)(plVar7[0xb] + 0x20);
                    do {
                      if (*piVar20 == 4) {
                        if ((-1 < (int)param_2) &&
                           (lVar24 = **(long **)(piVar20 + -2), *(int *)(lVar24 + 0x18) == 5)) {
                          dVar17 = *(double *)(lVar24 + 0x48);
                          if (*(char *)(lVar24 + 0x45) != '@') {
                            fVar37 = SUB84(dVar17,0);
                            if (*(char *)(lVar24 + 0x45) != ' ') {
                              fVar38 = (float)(((uint)fVar37 & 0x7fff) << 0xd) * 5.192297e+33;
                              if (65536.0 <= fVar38) {
                                fVar38 = (float)((uint)fVar38 | 0x7f800000);
                              }
                              fVar37 = (float)((uint)fVar38 | ((uint)fVar37 >> 0xf) << 0x1f);
                            }
                            dVar17 = (double)fVar37;
                          }
                          if (dVar17 == 0.0) {
                            FUN_109ecb29c(plVar7);
                            *(int *)(plVar7 + 6) = 0;
                            uVar19 = 1;
                            goto LAB_109f24bd4;
                          }
                        }
                        break;
                      }
                      param_2 = (long *)((long)param_2 + 1);
                      piVar20 = piVar20 + 10;
                    } while ((long *)(ulong)*(uint *)(plVar7 + 0xc) != param_2);
                    uVar19 = 0;
                  }
LAB_109f24bd4:
                  uVar13 = uVar13 | uVar19;
                }
                uVar19 = 0;
                if (*(uint *)(plVar7 + 0xc) != 0) {
                  plVar14 = (long *)0x0;
                  piVar20 = (int *)(plVar7[0xb] + 0x20);
                  do {
                    if (*piVar20 == 3) {
                      if (-1 < (int)plVar14) {
                        plVar16 = plVar7;
                        func_0x000109ecda18(plVar7,plVar14);
                        if ((int)plVar16 == 0) goto LAB_109f24c9c;
                        plVar32 = (long *)0x0;
                        plVar34 = *(long **)(piVar20 + -2);
                        goto LAB_109f24c2c;
                      }
                      break;
                    }
                    plVar14 = (long *)((long)plVar14 + 1);
                    piVar20 = piVar20 + 10;
                  } while ((long *)(ulong)*(uint *)(plVar7 + 0xc) != plVar14);
                  uVar19 = 0;
                }
                goto LAB_109f24ccc;
              }
              uVar13 = 0;
              iVar9 = (int)plVar7[5];
              if (iVar9 < 0x227) {
                if (iVar9 < 0x61) {
                  if (iVar9 - 0x59U < 6) {
                    if (*(int *)(*(long *)plVar7[0x13] + 0x18) != 5) goto LAB_109f2496c;
                    param_3 = (long *)(ulong)*(byte *)((long)plVar7 + 0x4d);
                    uStack_9b8 = 2;
                    if (*(char *)((long)plVar7 + 0x4c) == '\0') {
                      lVar24 = 0;
                      param_2 = (long *)0x0;
                      plStack_9b0 = plVar7;
                    }
                    else {
                      plVar14 = (long *)0x0;
                      plStack_9b0 = plVar7;
                      do {
                        cVar11 = *(char *)(*(long *)plVar7[0x13] + 0x45);
                        dVar17 = *(double *)(*(long *)plVar7[0x13] + (long)plVar14 * 8 + 0x48);
                        if (cVar11 != '@') {
                          fVar37 = SUB84(dVar17,0);
                          if (cVar11 != ' ') {
                            fVar38 = (float)(((uint)fVar37 & 0x7fff) << 0xd) * 5.192297e+33;
                            if (65536.0 <= fVar38) {
                              fVar38 = (float)((uint)fVar38 | 0x7f800000);
                            }
                            fVar37 = (float)((uint)fVar38 | ((uint)fVar37 >> 0xf) << 0x1f);
                          }
                          dVar17 = (double)fVar37;
                        }
                        uVar39 = 0;
                        if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                          uVar39 = 0x7ff8000000000000;
                        }
                        plVar16 = param_3;
                        FUN_109ecc128(uVar39);
                        aplStack_890[(long)plVar14] = plVar16;
                        plVar14 = (long *)((long)plVar14 + 1);
                        param_2 = (long *)(ulong)*(byte *)((long)plVar7 + 0x4c);
                      } while (plVar14 < param_2);
                      lVar24 = (long)param_2 << 3;
                    }
                    plVar14 = plStack_9a0;
                    FUN_109ecafe4();
                    if (plVar14 == (long *)0x0) {
                      plVar16 = (long *)0x0;
                    }
                    else {
                      _memcpy(plVar14 + 9,aplStack_890,lVar24);
                      param_2 = plVar7;
                      param_3 = plVar14;
                      FUN_109ecb4f0(2);
                      uStack_9b8 = 3;
                      plVar16 = plVar14 + 5;
                      plStack_9b0 = plVar14;
                    }
                    if ((long *)plVar7[8] + -1 != plVar7 + 6) {
                      plVar14 = (long *)plVar7[8];
                      do {
                        lVar24 = *plVar14;
                        plVar32 = (long *)plVar14[1];
                        *(long **)(lVar24 + 8) = plVar32;
                        *plVar32 = lVar24;
                        plVar14[1] = (long)(plVar16 + 1);
                        plVar14[2] = (long)plVar16;
                        *plVar14 = 0;
                        lVar24 = plVar16[1];
                        *plVar14 = lVar24;
                        *(long **)(lVar24 + 8) = plVar14;
                        plVar16[1] = (long)plVar14;
                        plVar14 = plVar32;
                      } while (plVar32 + -1 != plVar7 + 6);
                    }
LAB_109f24a20:
                    plVar7 = (long *)plVar7[6];
LAB_109f24a24:
                    FUN_109ecb9c0(plVar7);
                    goto LAB_109f24a28;
                  }
                  if (iVar9 == 4) goto LAB_109f24348;
                }
                else if (iVar9 < 0xff) {
                  if (iVar9 == 0x61) {
LAB_109f248d8:
                    lVar24 = *(long *)plVar7[0x13];
                    if (*(int *)(lVar24 + 0x18) != 5) goto LAB_109f2496c;
                    uVar21 = *(ulong *)(lVar24 + 0x48);
                    uVar13 = (*(byte *)(lVar24 + 0x45) & 0xaaaaaaaa) >> 1 |
                             (*(byte *)(lVar24 + 0x45) & 0x55555555) << 1;
                    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                    uVar13 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) << 0x18);
                    uVar18 = (long)(int)uVar21;
                    if (uVar13 != 5) {
                      uVar18 = uVar21;
                    }
                    uVar29 = (long)(short)uVar21;
                    if (uVar13 != 4) {
                      uVar29 = uVar18;
                    }
                    uVar18 = -(uVar21 & 1);
                    if (uVar13 != 0) {
                      uVar18 = (long)(char)uVar21;
                    }
                    if (uVar13 < 4) {
                      uVar29 = uVar18;
                    }
                    if (uVar29 != 0) {
                      uVar12 = 0x60;
                      if (iVar9 != 0x61) {
                        uVar12 = 0x294;
                      }
                      FUN_109ecb0a8(plStack_9a0,uVar12);
                      param_2 = plVar7;
                      param_3 = plVar14;
                      FUN_109ecb4f0(2);
                      uStack_9b8 = 3;
                      plStack_9b0 = plVar14;
                    }
                    goto LAB_109f24a24;
                  }
                  if (iVar9 == 0xbf) {
                    lVar24 = *(long *)plVar7[0x13];
                    if (*(int *)(lVar24 + 0x18) != 5) goto LAB_109f2496c;
                    uVar18 = (ulong)*(byte *)(plVar7[0x13] + 0x1c);
                    if (uVar18 == 0) {
                      uVar13 = 1;
                    }
                    else {
                      uVar13 = (*(byte *)(lVar24 + 0x45) & 0xaaaaaaaa) >> 1 |
                               (*(byte *)(lVar24 + 0x45) & 0x55555555) << 1;
                      uVar19 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                      bVar4 = true;
                      uVar13 = 1;
                      puVar23 = (ulong *)(lVar24 + 0x48);
                      do {
                        uVar21 = *puVar23;
                        uVar27 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
                        if (uVar27 < 4) {
                          if (uVar27 == 0) {
                            uVar21 = -(uVar21 & 1);
                          }
                          else {
                            uVar21 = (long)(char)uVar21;
                          }
                        }
                        else {
                          uVar29 = (long)(int)uVar21;
                          if (uVar27 != 5) {
                            uVar29 = uVar21;
                          }
                          uVar21 = (long)(short)uVar21;
                          if (uVar27 != 4) {
                            uVar21 = uVar29;
                          }
                        }
                        uVar13 = uVar13 & uVar21 == 0xffffffffffffffff;
                        bVar4 = (bool)(bVar4 & uVar21 == 0);
                        uVar18 = uVar18 - 1;
                        puVar23 = puVar23 + 1;
                      } while (uVar18 != 0);
                      if (uVar13 == 0 && !bVar4) goto LAB_109f2496c;
                    }
                    plVar14 = (long *)*plStack_9a0;
                    FUN_109f6600c(plVar14,0x50,8);
                    if (plVar14 != (long *)0x0) {
                      plVar14[7] = 0;
                      plVar14[6] = 0;
                      plVar14[9] = 0;
                      plVar14[8] = 0;
                      plVar14[3] = 0;
                      plVar14[2] = 0;
                      plVar14[5] = 0;
                      plVar14[4] = 0;
                      plVar14[1] = 0;
                      *plVar14 = 0;
                    }
                    plVar16 = plVar7 + 6;
                    *(int *)(plVar14 + 3) = 5;
                    plVar14[1] = 0;
                    plVar14[2] = 0;
                    *plVar14 = 0;
                    FUN_109ecb048(plVar14,plVar14 + 5,1,1);
                    plVar14[9] = (ulong)uVar13;
                    param_2 = plVar7;
                    param_3 = plVar14;
                    FUN_109ecb4f0(2);
                    uStack_9b8 = 3;
                    if ((long *)plVar7[8] + -1 != plVar16) {
                      plVar32 = plVar14 + 6;
                      plVar7 = (long *)plVar7[8];
                      do {
                        lVar24 = *plVar7;
                        plVar34 = (long *)plVar7[1];
                        *(long **)(lVar24 + 8) = plVar34;
                        *plVar34 = lVar24;
                        plVar7[1] = (long)plVar32;
                        plVar7[2] = (long)(plVar14 + 5);
                        *plVar7 = 0;
                        lVar24 = *plVar32;
                        *plVar7 = lVar24;
                        *(long **)(lVar24 + 8) = plVar7;
                        *plVar32 = (long)plVar7;
                        plVar7 = plVar34;
                      } while (plVar34 + -1 != plVar16);
                    }
                    plStack_9b0 = plVar14;
                    FUN_109ecb9c0(*plVar16);
                    uVar13 = 1;
                  }
                }
                else if (iVar9 == 0xff) {
                  lVar24 = *(long *)plVar7[0x13];
                  if (*(int *)(lVar24 + 0x18) == 5) {
                    uVar21 = *(ulong *)(lVar24 + 0x48);
                    uVar13 = (*(byte *)(lVar24 + 0x45) & 0xaaaaaaaa) >> 1 |
                             (*(byte *)(lVar24 + 0x45) & 0x55555555) << 1;
                    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                    uVar13 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) << 0x18);
                    uVar18 = uVar21 & 0xff;
                    if (uVar13 != 3) {
                      uVar18 = uVar21 & 0xffff;
                    }
                    uVar29 = uVar21 & 1;
                    if (uVar13 != 0) {
                      uVar29 = uVar18;
                    }
                    if (uVar13 < 5) {
                      uVar21 = uVar29;
                    }
                    uVar13 = *(uint *)((long)plVar7 + 0x54);
                    uVar19 = *(uint *)(plVar7 + 0xb);
                    uStack_9b8 = 2;
                    if ((uint)uVar21 < uVar19) {
                      aplStack_890[0xd] = (long *)0x0;
                      aplStack_890[0xc] = (long *)0x0;
                      aplStack_890[0xf] = (long *)0x0;
                      aplStack_890[0xe] = (long *)0x0;
                      aplStack_890[9] = (long *)0x0;
                      aplStack_890[8] = (long *)0x0;
                      aplStack_890[0xb] = (long *)0x0;
                      aplStack_890[10] = (long *)0x0;
                      aplStack_890[5] = (long *)0x0;
                      aplStack_890[4] = (long *)0x0;
                      aplStack_890[7] = (long *)0x0;
                      aplStack_890[6] = (long *)0x0;
                      aplStack_890[1] = (long *)0x0;
                      aplStack_890[0] = (long *)0x0;
                      aplStack_890[3] = (long *)0x0;
                      aplStack_890[2] = (long *)0x0;
                      uVar18 = (ulong)*(byte *)(plVar7 + 10);
                      bVar2 = *(byte *)((long)plVar7 + 0x4d);
                      plStack_9b0 = plVar7;
                      if (uVar18 != 0) {
                        lVar24 = plStack_9a0[0x36];
                        uVar27 = (uint)(bVar2 >> 3);
                        pplVar22 = aplStack_890;
                        do {
                          uVar3 = uVar19 - (int)uVar21;
                          if (uVar27 <= uVar3) {
                            uVar3 = uVar27;
                          }
                          _memcpy(pplVar22,lVar24 + (ulong)uVar13 + (uVar21 & 0xffffffff),uVar3);
                          uVar21 = (ulong)(uVar3 + (int)uVar21);
                          pplVar22 = pplVar22 + 1;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      bVar1 = *(byte *)((long)plVar7 + 0x4c);
                      param_3 = (long *)(ulong)bVar2;
                      param_2 = (long *)(ulong)bVar1;
                      FUN_109ecafe4();
                      plVar16 = plVar14;
                      if (plVar14 != (long *)0x0) {
                        _memcpy(plVar14 + 9,aplStack_890,(long)(ulong)bVar1 << 3);
                        param_2 = plVar7;
                        param_3 = plVar14;
                        FUN_109ecb4f0(2);
                        uStack_9b8 = 3;
                        plVar16 = plVar14 + 5;
                        plStack_9b0 = plVar14;
                      }
                    }
                    else {
                      param_3 = (long *)(ulong)*(byte *)((long)plVar7 + 0x4c);
                      param_2 = (long *)*plStack_9a0;
                      plStack_9b0 = plVar7;
                      FUN_109f6600c(param_2,0x48,8);
                      *(int *)(param_2 + 3) = 7;
                      param_2[1] = 0;
                      param_2[2] = 0;
                      *param_2 = 0;
                      plVar16 = param_2 + 5;
                      FUN_109ecb048();
                      FUN_109ece5ec(&uStack_9b8);
                    }
                    plVar14 = plVar7 + 6;
                    if ((long *)plVar7[8] + -1 != plVar14) {
                      plVar7 = (long *)plVar7[8];
                      do {
                        lVar24 = *plVar7;
                        plVar32 = (long *)plVar7[1];
                        *(long **)(lVar24 + 8) = plVar32;
                        *plVar32 = lVar24;
                        plVar7[1] = (long)(plVar16 + 1);
                        plVar7[2] = (long)plVar16;
                        *plVar7 = 0;
                        lVar24 = plVar16[1];
                        *plVar7 = lVar24;
                        *(long **)(lVar24 + 8) = plVar7;
                        plVar16[1] = (long)plVar7;
                        plVar7 = plVar32;
                      } while (plVar32 + -1 != plVar14);
                    }
                    FUN_109ecb9c0(*plVar14);
                    uVar13 = 1;
                    bVar2 = 1;
                  }
                  else {
                    uVar13 = 0;
                    bVar5 = true;
                    bVar2 = 1;
                  }
                }
                else if (iVar9 == 0x112) {
                  param_2 = *(long **)plVar7[0x13];
                  if (*(int *)((long)param_2 + 0x2c) != 0x400) goto LAB_109f2496c;
                  param_3 = (long *)0x0;
                  FUN_109ef9548(aplStack_890);
                  if (*(int *)(*aplStack_890[7] + 0x28) == 0) {
                    lVar31 = *(long *)(*aplStack_890[7] + 0x38);
                    lVar24 = *(long *)(lVar31 + 0x78);
                    if (lVar24 != 0) {
                      if ((*(byte *)(lVar24 + 0x80) & 1) == 0) {
                        lVar31 = aplStack_890[7][1];
                        if (lVar31 == 0) {
                          lVar33 = 0;
                        }
                        else {
                          lVar33 = 0;
                          uVar18 = 2;
                          do {
                            if (*(int *)(lVar31 + 0x28) == 4) {
                              uVar21 = (ulong)*(uint *)(lVar31 + 0x58);
                              if (*(uint *)(lVar24 + 0x84) <= *(uint *)(lVar31 + 0x58))
                              goto LAB_109f248bc;
LAB_109f24f4c:
                              lVar24 = *(long *)(*(long *)(lVar24 + 0x88) + uVar21 * 8);
                            }
                            else {
                              if ((*(int *)(lVar31 + 0x28) != 1) ||
                                 (lVar31 = **(long **)(lVar31 + 0x70), *(int *)(lVar31 + 0x18) != 5)
                                 ) goto LAB_109f248bc;
                              uVar25 = *(ulong *)(lVar31 + 0x48);
                              uVar13 = (*(byte *)(lVar31 + 0x45) & 0xaaaaaaaa) >> 1 |
                                       (*(byte *)(lVar31 + 0x45) & 0x55555555) << 1;
                              uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
                              uVar13 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) <<
                                                     0x18);
                              uVar29 = uVar25 & 0xffffffff;
                              if (uVar13 != 5) {
                                uVar29 = uVar25;
                              }
                              uVar21 = uVar25 & 0xffff;
                              if (uVar13 != 4) {
                                uVar21 = uVar29;
                              }
                              uVar29 = uVar25 & 1;
                              if (uVar13 != 0) {
                                uVar29 = uVar25 & 0xff;
                              }
                              if (uVar13 < 4) {
                                uVar21 = uVar29;
                              }
                              if (*(uint *)(lVar24 + 0x84) != 0) {
                                if (uVar21 < *(uint *)(lVar24 + 0x84)) goto LAB_109f24f4c;
                                goto LAB_109f248bc;
                              }
                              if (0xf < uVar21) goto LAB_109f248bc;
                              lVar33 = lVar24 + uVar21 * 8;
                            }
                            lVar31 = aplStack_890[7][uVar18];
                            uVar18 = (ulong)((int)uVar18 + 1);
                          } while (lVar31 != 0);
                        }
                        FUN_109ef9640(aplStack_890);
                        if (lVar33 != 0) {
                          lVar24 = lVar33;
                        }
                      }
                      else {
                        FUN_109ef9640(aplStack_890);
                        lVar24 = *(long *)(lVar31 + 0x78);
                      }
                      if (lVar24 != 0) {
                        uStack_9b8 = 2;
                        bVar1 = *(byte *)((long)plVar7 + 0x4c);
                        param_3 = (long *)(ulong)*(byte *)((long)plVar7 + 0x4d);
                        plVar14 = plStack_9a0;
                        param_2 = (long *)(ulong)bVar1;
                        plStack_9b0 = plVar7;
                        FUN_109ecafe4();
                        if (plVar14 == (long *)0x0) {
                          plVar16 = (long *)0x0;
                        }
                        else {
                          _memcpy(plVar14 + 9,lVar24,(long)(ulong)bVar1 << 3);
                          param_2 = plVar7;
                          param_3 = plVar14;
                          FUN_109ecb4f0(2);
                          uStack_9b8 = 3;
                          plVar16 = plVar14 + 5;
                          plStack_9b0 = plVar14;
                        }
                        if ((long *)plVar7[8] + -1 != plVar7 + 6) {
                          plVar14 = (long *)plVar7[8];
                          do {
                            lVar24 = *plVar14;
                            plVar32 = (long *)plVar14[1];
                            *(long **)(lVar24 + 8) = plVar32;
                            *plVar32 = lVar24;
                            plVar14[1] = (long)(plVar16 + 1);
                            plVar14[2] = (long)plVar16;
                            *plVar14 = 0;
                            lVar24 = plVar16[1];
                            *plVar14 = lVar24;
                            *(long **)(lVar24 + 8) = plVar14;
                            plVar16[1] = (long)plVar14;
                            plVar14 = plVar32;
                          } while (plVar32 + -1 != plVar7 + 6);
                        }
                        goto LAB_109f24a20;
                      }
                      uVar13 = 0;
                      goto LAB_109f24cd4;
                    }
                  }
LAB_109f248bc:
                  FUN_109ef9640(aplStack_890);
                  uVar13 = 0;
                }
              }
              else if (iVar9 < 0x295) {
                if (iVar9 - 0x227U < 0x3a &&
                    (1L << ((ulong)(iVar9 - 0x227U) & 0x3f) & 0x2b000000cf80001U) != 0) {
LAB_109f24348:
                  plVar14 = (long *)plVar7[0x13];
                  if (*(int *)(*plVar14 + 0x18) == 5) {
                    if ((long *)plVar7[8] + -1 != plVar7 + 6) {
                      plVar16 = (long *)plVar7[8];
                      do {
                        lVar24 = *plVar16;
                        plVar32 = (long *)plVar16[1];
                        *(long **)(lVar24 + 8) = plVar32;
                        *plVar32 = lVar24;
                        plVar16[1] = (long)(plVar14 + 1);
                        plVar16[2] = (long)plVar14;
                        *plVar16 = 0;
                        lVar24 = plVar14[1];
                        *plVar16 = lVar24;
                        *(long **)(lVar24 + 8) = plVar16;
                        plVar14[1] = (long)plVar16;
                        plVar16 = plVar32;
                      } while (plVar32 + -1 != plVar7 + 6);
                    }
                    goto LAB_109f24a20;
                  }
LAB_109f2496c:
                  uVar13 = 0;
                }
              }
              else {
                if (iVar9 - 0x29eU < 2) goto LAB_109f24348;
                if (iVar9 - 0x2a0U < 2) {
                  if (*(int *)(*(long *)plVar7[0x13] + 0x18) != 5) goto LAB_109f2496c;
                  plVar14 = (long *)*plStack_9a0;
                  FUN_109f6600c(plVar14,0x50,8);
                  if (plVar14 != (long *)0x0) {
                    plVar14[7] = 0;
                    plVar14[6] = 0;
                    plVar14[9] = 0;
                    plVar14[8] = 0;
                    plVar14[3] = 0;
                    plVar14[2] = 0;
                    plVar14[5] = 0;
                    plVar14[4] = 0;
                    plVar14[1] = 0;
                    *plVar14 = 0;
                  }
                  plVar16 = plVar7 + 6;
                  *(int *)(plVar14 + 3) = 5;
                  plVar14[1] = 0;
                  plVar14[2] = 0;
                  *plVar14 = 0;
                  FUN_109ecb048(plVar14,plVar14 + 5,1,1);
                  plVar14[9] = 1;
                  param_2 = plVar7;
                  param_3 = plVar14;
                  FUN_109ecb4f0(2);
                  uStack_9b8 = 3;
                  if ((long *)plVar7[8] + -1 != plVar16) {
                    plVar32 = plVar14 + 6;
                    plVar7 = (long *)plVar7[8];
                    do {
                      lVar24 = *plVar7;
                      plVar34 = (long *)plVar7[1];
                      *(long **)(lVar24 + 8) = plVar34;
                      *plVar34 = lVar24;
                      plVar7[1] = (long)plVar32;
                      plVar7[2] = (long)(plVar14 + 5);
                      *plVar7 = 0;
                      lVar24 = *plVar32;
                      *plVar7 = lVar24;
                      *(long **)(lVar24 + 8) = plVar7;
                      *plVar32 = (long)plVar7;
                      plVar7 = plVar34;
                    } while (plVar34 + -1 != plVar16);
                  }
                  plStack_9b0 = plVar14;
                  FUN_109ecb9c0(*plVar16);
                  uVar13 = 1;
                }
                else if (iVar9 == 0x295) goto LAB_109f248d8;
              }
              goto LAB_109f24cd4;
            }
LAB_109f25048:
            lVar24 = lVar6;
            FUN_109ecc434();
            lVar31 = lVar6;
          } while (lVar6 != 0);
          uVar13 = 3;
          if ((uVar36 & 1) == 0) {
            uVar13 = 0xfffffff7;
          }
        }
        iVar9 = (int)param_3;
        *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) & uVar13;
        uVar30 = uVar30 | uVar36;
        plVar26 = (long *)*plVar26;
        plVar14 = (long *)*plVar26;
        while( true ) {
          if (plVar14 == (long *)0x0) {
            if ((!bVar5 && !(bool)(bVar2 ^ 1)) && (*(int *)(param_1 + 0x1b8) != 0)) {
              if (*(long *)(param_1 + 0x1b0) != 0) {
                lVar24 = *(long *)(param_1 + 0x1b0) + -0x30;
                FUN_109f65aa4(lVar24);
                FUN_109f65ae0();
              }
              *(undefined8 *)(param_1 + 0x1b0) = 0;
              *(undefined4 *)(param_1 + 0x1b8) = 0;
            }
            goto LAB_109f241ac;
          }
          lVar28 = plVar26[6];
          if (lVar28 != 0) break;
          plVar26 = plVar14;
          plVar14 = (long *)*plVar14;
        }
      } while( true );
    }
    plVar26 = plVar14;
    plVar14 = (long *)*plVar14;
  } while( true );
  while( true ) {
    uVar21 = *(ulong *)(*plVar8 + ((ulong)param_2 & 0xffffffff) * 8 + 0x48);
    uVar19 = (*(byte *)((long)plVar8 + 0x1d) & 0xaaaaaaaa) >> 1 |
             (*(byte *)((long)plVar8 + 0x1d) & 0x55555555) << 1;
    uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
    uVar19 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
    uVar18 = uVar21 & 0xffffffff;
    if (uVar19 != 5) {
      uVar18 = uVar21;
    }
    uVar29 = uVar21 & 0xffff;
    if (uVar19 != 4) {
      uVar29 = uVar18;
    }
    uVar18 = uVar21 & 1;
    if (uVar19 != 0) {
      uVar18 = uVar21 & 0xff;
    }
    if (uVar19 < 4) {
      uVar29 = uVar18;
    }
    if (uVar29 != 0) goto LAB_109f24cbc;
    plVar32 = (long *)((long)plVar32 + 1);
    if ((long *)((ulong)plVar16 & 0xffffffff) == plVar32) break;
LAB_109f24c2c:
    plVar8 = plVar34;
    param_2 = plVar32;
    func_0x000109ecd6b8();
    if (*(int *)(*plVar8 + 0x18) != 5) {
LAB_109f24cbc:
      uVar19 = 0;
      goto LAB_109f24ccc;
    }
  }
LAB_109f24c9c:
  FUN_109ecb29c(plVar7);
  uVar19 = 1;
  param_2 = plVar14;
LAB_109f24ccc:
  uVar13 = uVar13 | uVar19;
LAB_109f24cd4:
  uVar36 = uVar36 | uVar13;
  if (plVar35 == (long *)0x0) goto LAB_109f25048;
  plVar14 = (long *)*plVar35;
  plVar16 = (long *)0x0;
  plVar7 = plVar35;
  if (plVar14 != (long *)0x0) goto LAB_109f24258;
  goto LAB_109f24268;
}



/* Entry: 109f250f8; end: 109f251af;  */

undefined8 FUN_109f250f8(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  
  if (*(uint *)(param_1 + 0x60) == 0) {
    return 0;
  }
  uVar3 = 0;
  piVar7 = (int *)(*(long *)(param_1 + 0x58) + 0x20);
  while (*piVar7 != param_3) {
    uVar3 = uVar3 + 1;
    piVar7 = piVar7 + 10;
    if (*(uint *)(param_1 + 0x60) == uVar3) {
      return 0;
    }
  }
  if ((int)uVar3 < 0) {
    return 0;
  }
  lVar5 = **(long **)(piVar7 + -2);
  if (*(int *)(lVar5 + 0x18) != 5) {
    return 0;
  }
  uVar4 = (uint)*(undefined8 *)(lVar5 + 0x48);
  uVar2 = (*(byte *)(lVar5 + 0x45) & 0xaaaaaaaa) >> 1 | (*(byte *)(lVar5 + 0x45) & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar6 = (uint)LZCOUNT((uVar2 >> 4 | (uVar2 & 0xf0f0f0f) << 4) << 0x18);
  uVar2 = uVar4 & 0xff;
  if (uVar6 != 3) {
    uVar2 = uVar4 & 0xffff;
  }
  uVar1 = uVar4 & 1;
  if (uVar6 != 0) {
    uVar1 = uVar2;
  }
  if (uVar6 < 5) {
    uVar4 = uVar1;
  }
  *param_2 = *param_2 + uVar4;
  FUN_109ecb29c(param_1,uVar3);
  return 1;
}



/* Entry: 109f251b0; end: 109f2682b;  */

byte FUN_109f251b0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte bVar7;
  uint uVar8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  byte bStack_70;
  undefined4 uStack_64;
  
  plVar6 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      bVar7 = 0;
LAB_109f252f8:
      return bVar7 & 1;
    }
    lVar4 = plVar6[6];
    if (lVar4 != 0) {
      bVar7 = 0;
      do {
        puVar2 = (undefined8 *)0x30;
        _malloc();
        if (puVar2 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          puVar2[4] = 0;
          puVar5 = puVar2 + 6;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
        }
        uStack_64 = 0;
        puVar2 = puVar5;
        lStack_a0 = lVar4;
        puStack_98 = puVar5;
        FUN_109f6658c(puVar5,&uStack_64);
        puVar3 = puVar5;
        puStack_90 = puVar2;
        FUN_109f64c74(puVar5,0x109f65648,FUN_109f65684);
        bStack_70 = 0;
        ppuStack_80 = &ppuStack_80;
        puStack_88 = puVar3;
        ppuStack_78 = &ppuStack_80;
        func_0x000109f2531c(&lStack_a0,0,lVar4);
        func_0x000109f258d0(&lStack_a0,0,lVar4);
        uVar8 = 3;
        if (bStack_70 == 0) {
          uVar8 = 0xfffffff7;
        }
        *(uint *)(lVar4 + 0x84) = uVar8 & *(uint *)(lVar4 + 0x84);
        if (puVar5 != (undefined8 *)0x0) {
          FUN_109f65aa4(puVar5 + -6);
          FUN_109f65ae0(puVar5 + -6);
        }
        bVar7 = bVar7 | bStack_70;
        plVar6 = (long *)*plVar6;
        plVar1 = (long *)*plVar6;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f252f8;
          lVar4 = plVar6[6];
          if (lVar4 != 0) break;
          plVar6 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      } while( true );
    }
    plVar6 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f2682c; end: 109f26887;  */

void FUN_109f2682c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)(param_1 + 0x20)) {
    lVar3 = *(long *)(param_1 + 8);
    FUN_109f658b0(lVar3,0x30);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
  }
  else {
    lVar3 = *plVar2;
    plVar1 = (long *)plVar2[1];
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  return;
}



/* Entry: 109f26888; end: 109f269ab;  */

void FUN_109f26888(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  FUN_109f64db4(uVar3,*(undefined8 *)(param_1 + 8));
  uVar4 = *(ulong *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(ulong *)(param_2 + 0x18) = uVar4;
  uVar2 = *(uint *)(param_3 + 0x28);
  if (uVar2 == 0) {
    uVar6 = *(ulong *)(param_2 + 0x20);
    if (uVar6 == 0) {
      return;
    }
  }
  else {
    uVar1 = uVar2;
    if (uVar2 < 0x41) {
      uVar1 = 0x40;
    }
    uVar6 = (ulong)uVar1;
    if (uVar4 == 0x11386a228) {
      _malloc();
      if (uVar6 == 0) {
        return;
      }
      _memcpy();
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
      uVar5 = *(ulong *)(param_2 + 0x20);
      if (uVar4 == 0) {
        _realloc(uVar5,uVar6);
      }
      else if (uVar5 == 0) {
        FUN_109f658b0(uVar4,uVar6);
        uVar5 = uVar4;
      }
      else {
        FUN_109f6595c(uVar5,uVar6);
      }
      uVar6 = uVar5;
      if (uVar5 == 0) {
        return;
      }
    }
    *(ulong *)(param_2 + 0x20) = uVar6;
    *(uint *)(param_2 + 0x2c) = uVar1;
  }
  *(uint *)(param_2 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)
            (uVar6,*(undefined8 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x28));
  return;
}



/* Entry: 109f269ac; end: 109f26cab;  */

void FUN_109f269ac(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long alStack_60 [2];
  
  lVar10 = *(long *)(param_1 + 0x18);
  uVar12 = param_3;
  (**(code **)(lVar10 + 8))(param_3);
  FUN_109f64fdc(lVar10,uVar12,param_3);
  puVar11 = *(uint **)(lVar10 + 0x10);
  if (*puVar11 != 0) {
    plVar5 = *(long **)(param_2 + 0x10);
    if (*(uint *)(plVar5 + 4) != 0) {
      lVar10 = *plVar5;
      lVar7 = (ulong)*(uint *)(plVar5 + 4) * 0x18;
      do {
        if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(lVar10 + 8) != plVar5[3]))
        goto LAB_109f26bb4;
        lVar10 = lVar10 + 0x18;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
LAB_109f26a38:
    if (*(uint *)(param_2 + 0x28) != 0) {
      puVar8 = *(undefined8 **)(param_2 + 0x20);
      puVar4 = (undefined8 *)((ulong)*(uint *)(param_2 + 0x28) + (long)puVar8);
      do {
        puVar6 = puVar4 + -0x15;
        if ((*(uint *)(puVar4[-2] + 0x2c) & *puVar11) != 0) {
          uVar3 = *(int *)(param_2 + 0x28) - 0xa8;
          *(uint *)(param_2 + 0x28) = uVar3;
          puVar2 = (undefined8 *)((long)puVar8 + (ulong)uVar3);
          if (puVar6 != puVar2) {
            uVar13 = puVar2[1];
            uVar12 = *puVar2;
            uVar14 = puVar2[2];
            uVar16 = puVar2[5];
            uVar15 = puVar2[4];
            puVar4[-0x12] = puVar2[3];
            puVar4[-0x13] = uVar14;
            puVar4[-0x10] = uVar16;
            puVar4[-0x11] = uVar15;
            puVar4[-0x14] = uVar13;
            *puVar6 = uVar12;
            uVar13 = puVar2[7];
            uVar12 = puVar2[6];
            uVar15 = puVar2[9];
            uVar14 = puVar2[8];
            uVar16 = puVar2[10];
            uVar18 = puVar2[0xd];
            uVar17 = puVar2[0xc];
            puVar4[-10] = puVar2[0xb];
            puVar4[-0xb] = uVar16;
            puVar4[-8] = uVar18;
            puVar4[-9] = uVar17;
            puVar4[-0xe] = uVar13;
            puVar4[-0xf] = uVar12;
            puVar4[-0xc] = uVar15;
            puVar4[-0xd] = uVar14;
            uVar13 = puVar2[0xf];
            uVar12 = puVar2[0xe];
            uVar15 = puVar2[0x11];
            uVar14 = puVar2[0x10];
            uVar17 = puVar2[0x13];
            uVar16 = puVar2[0x12];
            puVar4[-1] = puVar2[0x14];
            puVar4[-4] = uVar15;
            puVar4[-5] = uVar14;
            puVar4[-2] = uVar17;
            puVar4[-3] = uVar16;
            puVar4[-6] = uVar13;
            puVar4[-7] = uVar12;
            puVar8 = *(undefined8 **)(param_2 + 0x20);
          }
        }
        puVar4 = puVar6;
      } while (puVar8 < puVar6);
    }
  }
  plVar5 = *(long **)(puVar11 + 2);
  if (*(uint *)(plVar5 + 4) != 0) {
    lVar10 = (ulong)*(uint *)(plVar5 + 4) * 0x18;
    lVar7 = *plVar5;
    do {
      lVar9 = lVar7 + 0x18;
      alStack_60[0] = *(long *)(lVar7 + 8);
      if ((alStack_60[0] != 0) && (alStack_60[0] != plVar5[3])) {
        alStack_60[1] = 0;
        func_0x000109f27d9c(param_1,param_2,alStack_60,1);
        plVar5 = *(long **)(puVar11 + 2);
        lVar10 = *plVar5 + (ulong)*(uint *)(plVar5 + 4) * 0x18;
        if (lVar9 == lVar10) {
          return;
        }
        do {
          alStack_60[0] = *(long *)(lVar9 + 8);
          if ((alStack_60[0] != 0) && (alStack_60[0] != plVar5[3])) {
            alStack_60[1] = 0;
            func_0x000109f27d9c(param_1,param_2,alStack_60,1);
            plVar5 = *(long **)(puVar11 + 2);
            lVar10 = *plVar5 + (ulong)*(uint *)(plVar5 + 4) * 0x18;
          }
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != lVar10);
        return;
      }
      lVar10 = lVar10 + -0x18;
      lVar7 = lVar9;
    } while (lVar10 != 0);
  }
  return;
LAB_109f26bb4:
  lVar7 = param_1;
  FUN_109f277cc(param_1,param_2,lVar10);
  if (*(uint *)(lVar7 + 0x20) == 0) {
LAB_109f26c60:
    plVar5 = *(long **)(param_2 + 0x10);
    *(long *)(lVar10 + 8) = plVar5[3];
    plVar5[8] = CONCAT44((int)((ulong)plVar5[8] >> 0x20) + 1,(int)plVar5[8] + -1);
  }
  else {
    puVar8 = *(undefined8 **)(lVar7 + 0x18);
    puVar4 = (undefined8 *)((long)puVar8 + (ulong)*(uint *)(lVar7 + 0x20));
    do {
      puVar6 = puVar4 + -0x15;
      if ((*(uint *)(puVar4[-2] + 0x2c) & *puVar11) != 0) {
        uVar3 = *(int *)(lVar7 + 0x20) - 0xa8;
        *(uint *)(lVar7 + 0x20) = uVar3;
        puVar2 = (undefined8 *)((long)puVar8 + (ulong)uVar3);
        if (puVar6 != puVar2) {
          uVar13 = puVar2[1];
          uVar12 = *puVar2;
          uVar14 = puVar2[2];
          uVar16 = puVar2[5];
          uVar15 = puVar2[4];
          puVar4[-0x12] = puVar2[3];
          puVar4[-0x13] = uVar14;
          puVar4[-0x10] = uVar16;
          puVar4[-0x11] = uVar15;
          puVar4[-0x14] = uVar13;
          *puVar6 = uVar12;
          uVar13 = puVar2[7];
          uVar12 = puVar2[6];
          uVar15 = puVar2[9];
          uVar14 = puVar2[8];
          uVar16 = puVar2[10];
          uVar18 = puVar2[0xd];
          uVar17 = puVar2[0xc];
          puVar4[-10] = puVar2[0xb];
          puVar4[-0xb] = uVar16;
          puVar4[-8] = uVar18;
          puVar4[-9] = uVar17;
          puVar4[-0xe] = uVar13;
          puVar4[-0xf] = uVar12;
          puVar4[-0xc] = uVar15;
          puVar4[-0xd] = uVar14;
          uVar13 = puVar2[0xf];
          uVar12 = puVar2[0xe];
          uVar15 = puVar2[0x11];
          uVar14 = puVar2[0x10];
          uVar17 = puVar2[0x13];
          uVar16 = puVar2[0x12];
          puVar4[-1] = puVar2[0x14];
          puVar4[-4] = uVar15;
          puVar4[-5] = uVar14;
          puVar4[-2] = uVar17;
          puVar4[-3] = uVar16;
          puVar4[-6] = uVar13;
          puVar4[-7] = uVar12;
          puVar8 = *(undefined8 **)(lVar7 + 0x18);
        }
      }
      puVar4 = puVar6;
    } while (puVar8 < puVar6);
    if (*(int *)(lVar7 + 0x20) == 0) goto LAB_109f26c60;
    plVar5 = *(long **)(param_2 + 0x10);
  }
  lVar7 = lVar10;
  do {
    lVar10 = lVar7 + 0x18;
    if (lVar10 == *plVar5 + (ulong)*(uint *)(plVar5 + 4) * 0x18) goto LAB_109f26a38;
    plVar1 = (long *)(lVar7 + 0x20);
    lVar7 = lVar10;
  } while ((*plVar1 == 0) || (*plVar1 == plVar5[3]));
  goto LAB_109f26bb4;
}



/* Entry: 109f26cac; end: 109f26db7;  */

void FUN_109f26cac(long param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar4 = *(long **)(param_2 + 0x10);
  if (*(uint *)(plVar4 + 4) != 0) {
    lVar8 = *plVar4;
    lVar6 = (ulong)*(uint *)(plVar4 + 4) * 0x18;
    do {
      if ((*(long *)(lVar8 + 8) != 0) && (*(long *)(lVar8 + 8) != plVar4[3])) {
        lVar6 = param_1;
        FUN_109f277cc(param_1,param_2,lVar8);
        FUN_109f27924(lVar6 + 0x10,param_3);
        plVar4 = *(long **)(param_2 + 0x10);
        lVar8 = lVar8 + 0x18;
        lVar6 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
        if (lVar8 != lVar6) {
          do {
            if ((*(long *)(lVar8 + 8) != 0) && (*(long *)(lVar8 + 8) != plVar4[3])) {
              lVar6 = param_1;
              FUN_109f277cc(param_1,param_2,lVar8);
              FUN_109f27924(lVar6 + 0x10,param_3);
              plVar4 = *(long **)(param_2 + 0x10);
              lVar6 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
            }
            lVar8 = lVar8 + 0x18;
          } while (lVar8 != lVar6);
        }
        break;
      }
      lVar8 = lVar8 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if (*(uint *)(param_2 + 0x28) != 0) {
    pbVar7 = *(byte **)(param_2 + 0x20);
    pbVar3 = pbVar7 + *(uint *)(param_2 + 0x28);
    do {
      pbVar5 = pbVar3 + -0xa8;
      if (((*(uint *)(*(long *)(pbVar3 + -0x10) + 0x2c) & (uint)param_3) != 0) ||
         (((*pbVar5 & 1) == 0 &&
          ((*(uint *)(*(long *)(pbVar3 + -0xa0) + 0x2c) & (uint)param_3) != 0)))) {
        uVar2 = *(int *)(param_2 + 0x28) - 0xa8;
        *(uint *)(param_2 + 0x28) = uVar2;
        pbVar1 = pbVar7 + uVar2;
        if (pbVar5 != pbVar1) {
          uVar10 = *(undefined8 *)(pbVar1 + 8);
          uVar9 = *(undefined8 *)pbVar1;
          uVar11 = *(undefined8 *)(pbVar1 + 0x10);
          uVar13 = *(undefined8 *)(pbVar1 + 0x28);
          uVar12 = *(undefined8 *)(pbVar1 + 0x20);
          *(undefined8 *)(pbVar3 + -0x90) = *(undefined8 *)(pbVar1 + 0x18);
          *(undefined8 *)(pbVar3 + -0x98) = uVar11;
          *(undefined8 *)(pbVar3 + -0x80) = uVar13;
          *(undefined8 *)(pbVar3 + -0x88) = uVar12;
          *(undefined8 *)(pbVar3 + -0xa0) = uVar10;
          *(undefined8 *)pbVar5 = uVar9;
          uVar10 = *(undefined8 *)(pbVar1 + 0x38);
          uVar9 = *(undefined8 *)(pbVar1 + 0x30);
          uVar12 = *(undefined8 *)(pbVar1 + 0x48);
          uVar11 = *(undefined8 *)(pbVar1 + 0x40);
          uVar13 = *(undefined8 *)(pbVar1 + 0x50);
          uVar15 = *(undefined8 *)(pbVar1 + 0x68);
          uVar14 = *(undefined8 *)(pbVar1 + 0x60);
          *(undefined8 *)(pbVar3 + -0x50) = *(undefined8 *)(pbVar1 + 0x58);
          *(undefined8 *)(pbVar3 + -0x58) = uVar13;
          *(undefined8 *)(pbVar3 + -0x40) = uVar15;
          *(undefined8 *)(pbVar3 + -0x48) = uVar14;
          *(undefined8 *)(pbVar3 + -0x70) = uVar10;
          *(undefined8 *)(pbVar3 + -0x78) = uVar9;
          *(undefined8 *)(pbVar3 + -0x60) = uVar12;
          *(undefined8 *)(pbVar3 + -0x68) = uVar11;
          uVar10 = *(undefined8 *)(pbVar1 + 0x78);
          uVar9 = *(undefined8 *)(pbVar1 + 0x70);
          uVar12 = *(undefined8 *)(pbVar1 + 0x88);
          uVar11 = *(undefined8 *)(pbVar1 + 0x80);
          uVar14 = *(undefined8 *)(pbVar1 + 0x98);
          uVar13 = *(undefined8 *)(pbVar1 + 0x90);
          *(undefined8 *)(pbVar3 + -8) = *(undefined8 *)(pbVar1 + 0xa0);
          *(undefined8 *)(pbVar3 + -0x20) = uVar12;
          *(undefined8 *)(pbVar3 + -0x28) = uVar11;
          *(undefined8 *)(pbVar3 + -0x10) = uVar14;
          *(undefined8 *)(pbVar3 + -0x18) = uVar13;
          *(undefined8 *)(pbVar3 + -0x30) = uVar10;
          *(undefined8 *)(pbVar3 + -0x38) = uVar9;
          pbVar7 = *(byte **)(param_2 + 0x20);
        }
      }
      pbVar3 = pbVar5;
    } while (pbVar7 < pbVar5);
  }
  return;
}



/* Entry: 109f26db8; end: 109f26e27;  */

undefined8 * FUN_109f26db8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
  FUN_109f6600c(puVar1,0x48,8);
  *(undefined4 *)(puVar1 + 3) = 7;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109ecb048();
  FUN_109ece5ec(param_1,puVar1);
  return puVar1 + 5;
}



/* Entry: 109f26e28; end: 109f26ed7;  */

ulong FUN_109f26e28(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                   undefined1 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1;
  FUN_109f279c8();
  if (*(int *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = *(ulong *)(lVar1 + 8);
    do {
      uVar2 = *(ulong *)(param_1 + 8);
      FUN_109efa87c(uVar2,uVar4 + 0x98,param_3);
      if ((((uint)uVar2 & param_4) != 0) && (uVar3 = uVar4, (uVar2 & 1) != 0)) {
        if (param_5 == (undefined1 *)0x0) {
          return uVar4;
        }
        *param_5 = 1;
        return uVar4;
      }
      uVar4 = uVar4 + 0xa8;
    } while (uVar4 < *(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10));
  }
  return uVar3;
}



/* Entry: 109f26ed8; end: 109f2753b;  */

long * FUN_109f26ed8(long *param_1,long *param_2,long *param_3,long param_4,long *param_5,
                    long *param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long *unaff_x19;
  long *plVar13;
  long *unaff_x20;
  long *plVar14;
  long *plVar15;
  long *unaff_x21;
  long *plVar16;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lStack_190;
  undefined4 uStack_184;
  long lStack_180;
  uint uStack_174;
  long alStack_170 [32];
  long lStack_70;
  
  puVar17 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_3;
  if (param_2 == (long *)0x0) goto LAB_109f27420;
  if ((char)*param_2 == '\x01') {
    lVar9 = *param_5;
    unaff_x20 = param_6;
    unaff_x21 = param_2;
    unaff_x24 = param_5;
    if ((((*(int *)(lVar9 + 0x28) == 1) &&
         (lVar12 = *(long *)(**(long **)(lVar9 + 0x50) + 0x30), 1 < *(byte *)(lVar12 + 0xd))) &&
        (*(char *)(lVar12 + 0xe) == '\x01')) && ((*(uint *)(lVar12 + 4) & 0xfc) < 0xc)) {
      lVar9 = **(long **)(lVar9 + 0x70);
      if (*(int *)(lVar9 + 0x18) == 5) {
        unaff_x22 = (long *)(ulong)*(uint *)(lVar9 + 0x48);
        uVar11 = (*(byte *)(lVar9 + 0x45) & 0xaaaaaaaa) >> 1 |
                 (*(byte *)(lVar9 + 0x45) & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uint)LZCOUNT((uVar11 >> 4 | (uVar11 & 0xf0f0f0f) << 4) << 0x18);
        plVar13 = (long *)((ulong)unaff_x22 & 0xff);
        if (uVar11 != 3) {
          plVar13 = (long *)((ulong)unaff_x22 & 0xffff);
        }
        plVar14 = (long *)((ulong)unaff_x22 & 1);
        if (uVar11 != 0) {
          plVar14 = plVar13;
        }
        if (uVar11 < 5) {
          unaff_x22 = plVar14;
        }
        unaff_x19 = param_2 + 1;
        if (unaff_x19[(long)unaff_x22] != 0) {
          lVar9 = *(long *)(param_4 + 8);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 8) == 0)) {
            param_5 = (long *)0x0;
            lVar9 = *(long *)(param_4 + 0x10);
          }
          else {
            param_5 = (long *)0x3;
          }
          FUN_109ecb9c0(param_4);
          *param_3 = (long)param_5;
          param_3[1] = lVar9;
          *(undefined8 *)(param_4 + 0x10) = 0;
          plVar13 = (long *)unaff_x19[(long)unaff_x22];
          bVar4 = *(byte *)((long)param_2 + (long)unaff_x22 + 0x88);
          unaff_x23 = (long *)(ulong)bVar4;
          unaff_x19 = plVar13;
          if (bVar4 != 0 || *(char *)((long)plVar13 + 0x1c) != '\x01') {
            param_2 = (long *)param_3[3];
            FUN_109ecaef8(param_2,0x154);
            unaff_x19 = param_2 + 6;
            FUN_109ecb048();
            uVar5 = *(ushort *)((long)param_2 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_3 + 2);
            *(ushort *)((long)param_2 + 0x2c) = uVar5;
            *(ushort *)((long)param_2 + 0x2c) =
                 (*(ushort *)((long)param_3 + 0x14) & 0x1ff) << 3 | uVar5 & 0xf007;
            param_2[10] = 0;
            param_2[0xb] = 0;
            param_2[0xc] = 0;
            param_2[0xd] = (long)plVar13;
            *(byte *)(param_2 + 0xe) = bVar4;
            *(undefined8 *)((long)param_2 + 0x71) = 0;
            param_2[0xf] = 0;
            plVar15 = param_2;
            FUN_109ecb4f0(*param_3,param_3[1]);
            *param_3 = 3;
            param_3[1] = (long)param_2;
            unaff_x22 = unaff_x19;
          }
          plVar13 = (long *)0x1;
          *(undefined1 *)param_6 = 1;
          *(undefined4 *)((long)param_6 + 1) = 0;
          *(undefined4 *)((long)param_6 + 4) = 0;
          param_6[1] = (long)unaff_x19;
          param_6[3] = 0;
          param_6[2] = 0;
          param_6[5] = 0;
          param_6[4] = 0;
          param_6[7] = 0;
          param_6[6] = 0;
          param_6[9] = 0;
          param_6[8] = 0;
          param_6[0xb] = 0;
          param_6[10] = 0;
          param_6[0xd] = 0;
          param_6[0xc] = 0;
          param_6[0xf] = 0;
          param_6[0xe] = 0;
          param_6[0x11] = 0;
          param_6[0x10] = 0;
          param_6[0x12] = 0;
          goto LAB_109f27424;
        }
      }
      else {
        lVar9 = *(long *)(param_2[0x13] + 0x30);
        if (((*(byte *)(lVar9 + 0xd) < 2) || (*(char *)(lVar9 + 0xe) != '\x01')) ||
           (0xb < (*(uint *)(lVar9 + 4) & 0xfc))) goto LAB_109f271bc;
      }
LAB_109f27420:
      param_5 = unaff_x24;
      param_2 = unaff_x21;
      param_6 = unaff_x20;
      plVar13 = (long *)0x0;
      goto LAB_109f27424;
    }
LAB_109f271bc:
    lVar9 = *param_2;
    lVar22 = param_2[3];
    lVar12 = param_2[2];
    param_6[1] = param_2[1];
    *param_6 = lVar9;
    param_6[3] = lVar22;
    param_6[2] = lVar12;
    lVar12 = param_2[5];
    lVar9 = param_2[4];
    lVar23 = param_2[7];
    lVar22 = param_2[6];
    lVar25 = param_2[8];
    lVar29 = param_2[0xb];
    lVar26 = param_2[10];
    param_6[9] = param_2[9];
    param_6[8] = lVar25;
    param_6[0xb] = lVar29;
    param_6[10] = lVar26;
    param_6[5] = lVar12;
    param_6[4] = lVar9;
    param_6[7] = lVar23;
    param_6[6] = lVar22;
    lVar12 = param_2[0xd];
    lVar9 = param_2[0xc];
    lVar23 = param_2[0xf];
    lVar22 = param_2[0xe];
    lVar26 = param_2[0x11];
    lVar25 = param_2[0x10];
    param_6[0x12] = param_2[0x12];
    param_6[0xf] = lVar23;
    param_6[0xe] = lVar22;
    param_6[0x11] = lVar26;
    param_6[0x10] = lVar25;
    param_6[0xd] = lVar12;
    param_6[0xc] = lVar9;
    bVar4 = *(byte *)(*(long *)(param_2[0x13] + 0x30) + 0xd);
    unaff_x23 = (long *)(ulong)bVar4;
    if (bVar4 != 0) {
      plVar13 = (long *)0x0;
      unaff_x19 = (long *)0x0;
      bVar2 = true;
      do {
        uVar11 = 0;
        if (param_6[(long)plVar13 + 1] != 0) {
          uVar11 = 1 << (ulong)((uint)plVar13 & 0x1f) & 0xffff;
        }
        uVar11 = uVar11 | (uint)unaff_x19;
        unaff_x19 = (long *)(ulong)uVar11;
        bVar2 = (bool)((plVar13 == (long *)(ulong)*(byte *)((long)param_6 + (long)plVar13 + 0x88) &&
                       param_6[(long)plVar13 + 1] == param_6[1]) & bVar2);
        plVar13 = (long *)((long)plVar13 + 1);
      } while (unaff_x23 != plVar13);
      if (!bVar2) {
        if (((-1 << (ulong)(bVar4 & 0x1f) ^ uVar11) != 0xffffffff) &&
           (*(int *)(param_4 + 0x28) == 0x112)) {
          uVar6 = (int)param_4 + 0x30;
          FUN_109ecc368();
          if ((uVar6 & uVar11) == 0) goto LAB_109f27420;
        }
        unaff_x22 = (long *)0x0;
        uVar11 = 0;
        *param_3 = 3;
        param_3[1] = param_4;
        param_5 = (long *)(param_4 + 0x30);
        if (*(int *)(param_4 + 0x28) != 0x112) {
          param_5 = (long *)0x0;
        }
        unaff_x19 = alStack_170;
        lStack_190 = param_4;
        do {
          if (param_6[(long)unaff_x22 + 1] == 0) {
            if (param_5 == (long *)0x0) {
              lVar9 = *(long *)(param_2[0x13] + 0x30);
              uVar3 = *(undefined1 *)(lVar9 + 0xd);
              uStack_184 = *(undefined4 *)(&UNK_10e47c350 + (ulong)*(byte *)(lVar9 + 4) * 4);
              lStack_180 = param_2[0x13] + 0x80;
              lVar9 = param_3[3];
              FUN_109ecb0a8(lVar9,0x112);
              param_4 = lStack_190;
              *(undefined1 *)(lVar9 + 0x50) = uVar3;
              param_5 = (long *)(lVar9 + 0x30);
              uStack_174 = uVar11;
              FUN_109ecb048();
              *(undefined8 *)(lVar9 + 0x80) = 0;
              *(undefined8 *)(lVar9 + 0x88) = 0;
              *(undefined8 *)(lVar9 + 0x90) = 0;
              *(long *)(lVar9 + 0x98) = lStack_180;
              *(undefined4 *)
               (lVar9 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar9 + 0x28) * 0x68] * 4 +
               0x50) = 0;
              FUN_109ecb4f0(*param_3,param_3[1],lVar9);
              *param_3 = 3;
              param_3[1] = lVar9;
              uVar11 = uStack_174;
            }
            uVar11 = *param_5 == param_4 | uVar11;
            *unaff_x19 = (long)param_5;
            plVar15 = unaff_x22;
          }
          else {
            bVar4 = *(byte *)((long)param_6 + (long)unaff_x22 + 0x88);
            *unaff_x19 = param_6[(long)unaff_x22 + 1];
            plVar15 = (long *)(ulong)bVar4;
          }
          unaff_x19[1] = (long)plVar15;
          unaff_x22 = (long *)((long)unaff_x22 + 1);
          unaff_x19 = unaff_x19 + 2;
        } while (unaff_x23 != unaff_x22);
        plVar15 = unaff_x23;
        FUN_109ece384(param_3,alStack_170);
        plVar13 = (long *)0x0;
        *(undefined1 *)param_6 = 1;
        do {
          (param_6 + 0x11)[(long)(plVar13 + -2)] = (long)param_3;
          *(char *)((long)(param_6 + 0x11) + (long)plVar13) = (char)plVar13;
          plVar13 = (long *)((long)plVar13 + 1);
        } while (unaff_x23 != plVar13);
        if ((uVar11 & 1) == 0) {
          FUN_109ecb9c0(param_4);
          *(undefined8 *)(param_4 + 0x10) = 0;
        }
        goto LAB_109f27184;
      }
    }
    unaff_x19 = *(long **)(param_4 + 8);
    if ((unaff_x19 == (long *)0x0) || (unaff_x19[1] == 0)) {
      param_6 = (long *)0x0;
      unaff_x19 = *(long **)(param_4 + 0x10);
    }
    else {
      param_6 = (long *)0x3;
    }
    FUN_109ecb9c0(param_4);
    *param_3 = (long)param_6;
    param_3[1] = (long)unaff_x19;
    plVar13 = (long *)0x1;
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  else {
    lVar9 = *param_2;
    lVar22 = param_2[3];
    lVar12 = param_2[2];
    param_6[1] = param_2[1];
    *param_6 = lVar9;
    param_6[3] = lVar22;
    param_6[2] = lVar12;
    lVar12 = param_2[5];
    lVar9 = param_2[4];
    lVar23 = param_2[7];
    lVar22 = param_2[6];
    lVar25 = param_2[8];
    lVar29 = param_2[0xb];
    lVar26 = param_2[10];
    param_6[9] = param_2[9];
    param_6[8] = lVar25;
    param_6[0xb] = lVar29;
    param_6[10] = lVar26;
    param_6[5] = lVar12;
    param_6[4] = lVar9;
    param_6[7] = lVar23;
    param_6[6] = lVar22;
    lVar12 = param_2[0xd];
    lVar9 = param_2[0xc];
    lVar23 = param_2[0xf];
    lVar22 = param_2[0xe];
    lVar26 = param_2[0x11];
    lVar25 = param_2[0x10];
    param_6[0x12] = param_2[0x12];
    param_6[0xf] = lVar23;
    param_6[0xe] = lVar22;
    param_6[0x11] = lVar26;
    param_6[0x10] = lVar25;
    param_6[0xd] = lVar12;
    param_6[0xc] = lVar9;
    unaff_x19 = *(long **)(param_4 + 8);
    if ((unaff_x19 == (long *)0x0) || (unaff_x19[1] == 0)) {
      lVar9 = 0;
      unaff_x19 = *(long **)(param_4 + 0x10);
    }
    else {
      lVar9 = 3;
    }
    FUN_109ecb9c0(param_4);
    *param_3 = lVar9;
    param_3[1] = (long)unaff_x19;
    unaff_x22 = (long *)param_1[1];
    FUN_109efa834(unaff_x22,param_2 + 0x13);
    plVar15 = (long *)param_1[1];
    FUN_109efa834(plVar15,param_5);
    plVar13 = (long *)(plVar15[7] + 8);
    lVar9 = *(long *)(unaff_x22[7] + 8);
    plVar14 = param_6;
    if (lVar9 == 0) {
      param_6[2] = 0;
    }
    else {
      bVar2 = false;
      plVar16 = (long *)(unaff_x22[7] + 0x10);
      do {
        if (*plVar13 == 0) break;
        if (*(int *)(*plVar13 + 0x28) == 1) {
          bVar2 = (bool)(*(int *)(lVar9 + 0x28) == 2 | bVar2);
        }
        plVar13 = plVar13 + 1;
        lVar9 = *plVar16;
        plVar16 = plVar16 + 1;
      } while (lVar9 != 0);
      param_6[2] = 0;
      param_5 = plVar15;
      if (bVar2) {
        lVar9 = param_1[1];
        FUN_109efa834(lVar9,param_2 + 1);
        plVar14 = *(long **)(lVar9 + 0x38);
        plVar16 = (long *)*plVar14;
        do {
          plVar7 = plVar16;
          plVar14 = plVar14 + 1;
          plVar16 = (long *)*plVar14;
          if (plVar16 == (long *)0x0) goto LAB_109f27158;
        } while ((int)plVar16[5] != 2);
        unaff_x19 = (long *)(plVar15[7] + 8);
        param_2 = (long *)(unaff_x22[7] + 8);
        plVar15 = plVar7;
        do {
          plVar7 = param_3;
          if ((int)plVar16[5] == 2) {
            lVar9 = *param_2;
            plVar16 = unaff_x19;
            while ((lVar9 != 0 && (*(int *)(lVar9 + 0x28) != 2))) {
              param_2 = param_2 + 1;
              plVar16 = plVar16 + 1;
              lVar9 = *param_2;
            }
            unaff_x19 = plVar16 + 1;
            func_0x000109f27ae4(param_3,plVar15,*plVar16);
            param_2 = param_2 + 1;
          }
          else {
            func_0x000109f27ae4();
          }
          plVar14 = plVar14 + 1;
          plVar16 = (long *)*plVar14;
          plVar15 = plVar7;
        } while (plVar16 != (long *)0x0);
LAB_109f27158:
        param_6[1] = (long)plVar7;
      }
    }
    plVar16 = param_6 + 1;
    plVar15 = (long *)0x0;
    param_6 = plVar14;
    unaff_x23 = param_1;
    if (*plVar13 != 0) {
      plVar14 = (long *)*plVar16;
      plVar13 = plVar13 + 1;
      do {
        plVar7 = param_3;
        func_0x000109f27ae4(param_3,plVar14);
        *plVar16 = (long)plVar7;
        unaff_x19 = plVar13 + 1;
        lVar9 = *plVar13;
        plVar15 = (long *)0x0;
        plVar14 = plVar7;
        plVar13 = unaff_x19;
      } while (lVar9 != 0);
    }
LAB_109f27184:
    plVar13 = (long *)0x1;
  }
LAB_109f27424:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar13;
  }
  pcVar18 = FUN_109f2753c;
  ___stack_chk_fail();
  plVar14 = &lStack_190;
  while( true ) {
    *(long **)((long)plVar14 + -0x40) = param_5;
    *(long **)((long)plVar14 + -0x38) = unaff_x23;
    *(long **)((long)plVar14 + -0x30) = unaff_x22;
    *(long **)((long)plVar14 + -0x28) = param_2;
    *(long **)((long)plVar14 + -0x20) = param_6;
    *(long **)((long)plVar14 + -0x18) = unaff_x19;
    *(undefined1 **)((long)plVar14 + -0x10) = puVar17;
    *(code **)((long)plVar14 + -8) = pcVar18;
    *(undefined8 *)((long)plVar14 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar15;
    FUN_109f279c8();
    *(undefined8 *)((long)plVar14 + -0xe8) = 0;
    *(undefined8 *)((long)plVar14 + -0xf0) = 0;
    *(undefined8 *)((long)plVar14 + -0xd8) = 0;
    *(undefined8 *)((long)plVar14 + -0xe0) = 0;
    *(undefined8 *)((long)plVar14 + -200) = 0;
    *(undefined8 *)((long)plVar14 + -0xd0) = 0;
    *(undefined8 *)((long)plVar14 + -0xb8) = 0;
    *(undefined8 *)((long)plVar14 + -0xc0) = 0;
    *(undefined8 *)((long)plVar14 + -0xa8) = 0;
    *(undefined8 *)((long)plVar14 + -0xb0) = 0;
    *(undefined8 *)((long)plVar14 + -0x98) = 0;
    *(undefined8 *)((long)plVar14 + -0xa0) = 0;
    *(undefined8 *)((long)plVar14 + -0x88) = 0;
    *(undefined8 *)((long)plVar14 + -0x90) = 0;
    *(undefined8 *)((long)plVar14 + -0x78) = 0;
    *(undefined8 *)((long)plVar14 + -0x80) = 0;
    *(undefined8 *)((long)plVar14 + -0x68) = 0;
    *(undefined8 *)((long)plVar14 + -0x70) = 0;
    *(undefined8 *)((long)plVar14 + -0x60) = 0;
    lVar9 = *plVar15;
    *(long *)((long)plVar14 + -0x50) = plVar15[1];
    *(long *)((long)plVar14 + -0x58) = lVar9;
    plVar16 = (long *)(ulong)*(uint *)(plVar13 + 2);
    uVar11 = *(uint *)(plVar13 + 2) + 0xa8;
    unaff_x23 = (long *)(ulong)uVar11;
    if (*(uint *)((long)plVar13 + 0x14) < uVar11) {
      uVar6 = *(uint *)((long)plVar13 + 0x14) << 1;
      if (uVar6 <= uVar11) {
        uVar6 = uVar11;
      }
      plVar15 = (long *)(ulong)uVar6;
      plVar8 = (long *)*plVar13;
      if (plVar8 == (long *)0x11386a228) {
        plVar8 = plVar15;
        _malloc();
        plVar10 = plVar8;
        plVar7 = plVar16;
        _memcpy();
        *plVar13 = 0;
        plVar13[1] = (long)plVar8;
      }
      else {
        plVar10 = (long *)plVar13[1];
        if (plVar8 == (long *)0x0) {
          _realloc(plVar10,plVar15);
        }
        else if (plVar10 == (long *)0x0) {
          FUN_109f658b0(plVar8,plVar15);
          plVar10 = plVar8;
        }
        else {
          FUN_109f6595c(plVar10,plVar15);
        }
        plVar13[1] = (long)plVar10;
        plVar16 = (long *)(ulong)*(uint *)(plVar13 + 2);
        plVar8 = plVar10;
      }
      *(uint *)((long)plVar13 + 0x14) = uVar6;
    }
    else {
      plVar8 = (long *)plVar13[1];
      plVar10 = plVar13;
    }
    puVar1 = (undefined8 *)((long)plVar8 + (long)plVar16);
    *(uint *)(plVar13 + 2) = uVar11;
    uVar20 = *(undefined8 *)((long)plVar14 + -0xe8);
    uVar19 = *(undefined8 *)((long)plVar14 + -0xf0);
    uVar21 = *(undefined8 *)((long)plVar14 + -0xe0);
    uVar27 = *(undefined8 *)((long)plVar14 + -200);
    uVar24 = *(undefined8 *)((long)plVar14 + -0xd0);
    puVar1[3] = *(undefined8 *)((long)plVar14 + -0xd8);
    puVar1[2] = uVar21;
    puVar1[5] = uVar27;
    puVar1[4] = uVar24;
    puVar1[1] = uVar20;
    *puVar1 = uVar19;
    uVar20 = *(undefined8 *)((long)plVar14 + -0xb8);
    uVar19 = *(undefined8 *)((long)plVar14 + -0xc0);
    uVar24 = *(undefined8 *)((long)plVar14 + -0xa8);
    uVar21 = *(undefined8 *)((long)plVar14 + -0xb0);
    uVar27 = *(undefined8 *)((long)plVar14 + -0xa0);
    uVar30 = *(undefined8 *)((long)plVar14 + -0x88);
    uVar28 = *(undefined8 *)((long)plVar14 + -0x90);
    puVar1[0xb] = *(undefined8 *)((long)plVar14 + -0x98);
    puVar1[10] = uVar27;
    puVar1[0xd] = uVar30;
    puVar1[0xc] = uVar28;
    puVar1[7] = uVar20;
    puVar1[6] = uVar19;
    puVar1[9] = uVar24;
    puVar1[8] = uVar21;
    uVar20 = *(undefined8 *)((long)plVar14 + -0x78);
    uVar19 = *(undefined8 *)((long)plVar14 + -0x80);
    uVar24 = *(undefined8 *)((long)plVar14 + -0x68);
    uVar21 = *(undefined8 *)((long)plVar14 + -0x70);
    uVar28 = *(undefined8 *)((long)plVar14 + -0x58);
    uVar27 = *(undefined8 *)((long)plVar14 + -0x60);
    puVar1[0x14] = *(undefined8 *)((long)plVar14 + -0x50);
    puVar1[0x11] = uVar24;
    puVar1[0x10] = uVar21;
    puVar1[0x13] = uVar28;
    puVar1[0x12] = uVar27;
    puVar1[0xf] = uVar20;
    puVar1[0xe] = uVar19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar14 + -0x48)) break;
    ___stack_chk_fail();
    *(long **)((long)plVar14 + -0x120) = plVar8;
    *(long **)((long)plVar14 + -0x118) = plVar16;
    *(long **)((long)plVar14 + -0x110) = plVar15;
    *(long **)((long)plVar14 + -0x108) = plVar13;
    *(undefined1 **)((long)plVar14 + -0x100) = (undefined1 *)((long)plVar14 + -0x10);
    *(code **)((long)plVar14 + -0xf8) = FUN_109f276b4;
    plVar15 = plVar10;
    func_0x000109f27d9c();
    if (plVar15 != (long *)0x0) {
      return plVar15;
    }
    puVar17 = *(undefined1 **)((long)plVar14 + -0x100);
    pcVar18 = *(code **)((long)plVar14 + -0xf8);
    param_6 = *(long **)((long)plVar14 + -0x110);
    unaff_x19 = *(long **)((long)plVar14 + -0x108);
    unaff_x22 = *(long **)((long)plVar14 + -0x120);
    param_2 = *(long **)((long)plVar14 + -0x118);
    plVar14 = (long *)((long)plVar14 + -0xf0);
    plVar13 = plVar10;
    plVar15 = plVar7;
  }
  return (long *)(plVar13[1] + (ulong)*(uint *)(plVar13 + 2) + -0xa8);
}



/* Entry: 109f2753c; end: 109f276b3;  */

undefined8 * FUN_109f2753c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar7;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = param_3;
    FUN_109f279c8(param_1,param_2);
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    uVar8 = *param_3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = param_3[1];
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar8;
    puVar7 = (undefined8 *)(ulong)*(uint *)(param_1 + 2);
    uVar2 = *(uint *)(param_1 + 2) + 0xa8;
    unaff_x23 = (ulong)uVar2;
    if (*(uint *)((long)param_1 + 0x14) < uVar2) {
      uVar3 = *(uint *)((long)param_1 + 0x14) << 1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      param_3 = (undefined8 *)(ulong)uVar3;
      puVar4 = (undefined8 *)*param_1;
      if (puVar4 == (undefined8 *)0x11386a228) {
        puVar4 = param_3;
        _malloc();
        param_2 = (undefined8 *)param_1[1];
        puVar6 = puVar4;
        puVar5 = puVar7;
        _memcpy();
        *param_1 = 0;
        param_1[1] = puVar4;
      }
      else {
        puVar6 = (undefined8 *)param_1[1];
        param_2 = param_3;
        if (puVar4 == (undefined8 *)0x0) {
          _realloc();
        }
        else if (puVar6 == (undefined8 *)0x0) {
          FUN_109f658b0();
          puVar6 = puVar4;
        }
        else {
          FUN_109f6595c();
        }
        param_1[1] = puVar6;
        puVar7 = (undefined8 *)(ulong)*(uint *)(param_1 + 2);
        puVar4 = puVar6;
      }
      *(uint *)((long)param_1 + 0x14) = uVar3;
    }
    else {
      puVar4 = (undefined8 *)param_1[1];
      puVar6 = param_1;
    }
    puVar1 = (undefined8 *)((long)puVar4 + (long)puVar7);
    *(uint *)(param_1 + 2) = uVar2;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -200);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    puVar1[3] = *(undefined8 *)((long)register0x00000008 + -0xd8);
    puVar1[2] = uVar10;
    puVar1[5] = uVar12;
    puVar1[4] = uVar11;
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x88);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x90);
    puVar1[0xb] = *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar1[10] = uVar12;
    puVar1[0xd] = uVar14;
    puVar1[0xc] = uVar13;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[9] = uVar11;
    puVar1[8] = uVar10;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x78);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x60);
    puVar1[0x14] = *(undefined8 *)((long)register0x00000008 + -0x50);
    puVar1[0x11] = uVar11;
    puVar1[0x10] = uVar10;
    puVar1[0x13] = uVar13;
    puVar1[0x12] = uVar12;
    puVar1[0xf] = uVar9;
    puVar1[0xe] = uVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x120) = puVar4;
    *(undefined8 **)((long)register0x00000008 + -0x118) = puVar7;
    *(undefined8 **)((long)register0x00000008 + -0x110) = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x108) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xf8) = FUN_109f276b4;
    puVar7 = puVar6;
    func_0x000109f27d9c();
    if (puVar7 != (undefined8 *)0x0) {
      return puVar7;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x100);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x110);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x108);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x118);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_1 = puVar6;
    param_3 = puVar5;
  }
  return (undefined8 *)(param_1[1] + (ulong)*(uint *)(param_1 + 2) + -0xa8);
}



/* Entry: 109f276b4; end: 109f27707;  */

undefined8 * FUN_109f276b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    puVar3 = param_1;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = puVar3;
    func_0x000109f27d9c();
    if (puVar5 != (undefined8 *)0x0) {
      return puVar5;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = param_3;
    FUN_109f279c8(puVar3,param_2);
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    uVar6 = *param_3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = param_3[1];
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar6;
    unaff_x21 = (undefined8 *)(ulong)*(uint *)(puVar3 + 2);
    uVar1 = *(uint *)(puVar3 + 2) + 0xa8;
    unaff_x23 = (ulong)uVar1;
    if (*(uint *)((long)puVar3 + 0x14) < uVar1) {
      uVar2 = *(uint *)((long)puVar3 + 0x14) << 1;
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      unaff_x20 = (undefined8 *)(ulong)uVar2;
      puVar4 = (undefined8 *)*puVar3;
      if (puVar4 == (undefined8 *)0x11386a228) {
        unaff_x22 = unaff_x20;
        _malloc();
        param_2 = (undefined8 *)puVar3[1];
        param_1 = unaff_x22;
        puVar5 = unaff_x21;
        _memcpy();
        *puVar3 = 0;
        puVar3[1] = unaff_x22;
      }
      else {
        param_1 = (undefined8 *)puVar3[1];
        param_2 = unaff_x20;
        if (puVar4 == (undefined8 *)0x0) {
          _realloc();
        }
        else if (param_1 == (undefined8 *)0x0) {
          FUN_109f658b0();
          param_1 = puVar4;
        }
        else {
          FUN_109f6595c();
        }
        puVar3[1] = param_1;
        unaff_x21 = (undefined8 *)(ulong)*(uint *)(puVar3 + 2);
        unaff_x22 = param_1;
      }
      *(uint *)((long)puVar3 + 0x14) = uVar2;
    }
    else {
      unaff_x22 = (undefined8 *)puVar3[1];
      param_1 = puVar3;
      unaff_x20 = param_3;
    }
    puVar4 = (undefined8 *)((long)unaff_x22 + (long)unaff_x21);
    *(uint *)(puVar3 + 2) = uVar1;
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -200);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    puVar4[3] = *(undefined8 *)((long)register0x00000008 + -0xd8);
    puVar4[2] = uVar8;
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x88);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x90);
    puVar4[0xb] = *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar4[10] = uVar10;
    puVar4[0xd] = uVar12;
    puVar4[0xc] = uVar11;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[9] = uVar9;
    puVar4[8] = uVar8;
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x78);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x60);
    puVar4[0x14] = *(undefined8 *)((long)register0x00000008 + -0x50);
    puVar4[0x11] = uVar9;
    puVar4[0x10] = uVar8;
    puVar4[0x13] = uVar11;
    puVar4[0x12] = uVar10;
    puVar4[0xf] = uVar7;
    puVar4[0xe] = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    unaff_x30 = FUN_109f276b4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_3 = puVar5;
    unaff_x19 = puVar3;
  }
  return (undefined8 *)(puVar3[1] + (ulong)*(uint *)(puVar3 + 2) + -0xa8);
}



/* Entry: 109f27708; end: 109f277cb;  */

void FUN_109f27708(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  param_4 = param_4 & (-1 << (ulong)(*(byte *)(param_3 + 0x1c) & 0x1f) ^ 0xffffffffU);
  lVar3 = param_1[3];
  FUN_109ecb0a8(lVar3,0x26f);
  bVar1 = *(byte *)(param_3 + 0x1c);
  *(byte *)(lVar3 + 0x50) = bVar1;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(long *)(lVar3 + 0x98) = param_2 + 0x80;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(long *)(lVar3 + 0xb8) = param_3;
  uVar4 = 0xffffffff;
  if (bVar1 != 0x20) {
    uVar4 = ~(-1 << (ulong)(bVar1 & 0x1f));
  }
  if (param_4 == 0) {
    param_4 = uVar4;
  }
  lVar2 = (ulong)*(uint *)(lVar3 + 0x28) * 0x68;
  *(uint *)(lVar3 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[lVar2] * 4 + -4) = param_4;
  *(undefined4 *)(lVar3 + 0x54 + (ulong)(byte)(&UNK_110b671ba)[lVar2] * 4 + -4) = 0;
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return;
}



/* Entry: 109f277cc; end: 109f27923;  */

long FUN_109f277cc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(*(long *)(param_3 + 0x10) + 0x28) == param_2) {
    return *(long *)(param_3 + 0x10);
  }
  lVar3 = *(long *)(param_1 + 8);
  FUN_109f658b0(lVar3,0x30);
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(long *)(lVar3 + 0x10) = lVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(long *)(lVar3 + 0x28) = param_2;
  uVar1 = *(uint *)(*(long *)(param_3 + 0x10) + 0x20);
  if (uVar1 == 0) goto LAB_109f27904;
  if (!CARRY4(*(uint *)(lVar3 + 0x20),uVar1)) {
    uVar1 = *(uint *)(lVar3 + 0x20) + uVar1;
    if (*(uint *)(lVar3 + 0x24) < uVar1) {
      uVar2 = *(uint *)(lVar3 + 0x24) << 1;
      if (uVar2 <= uVar1) {
        uVar2 = uVar1;
      }
      if (uVar2 < 0x41) {
        uVar2 = 0x40;
      }
      uVar6 = (ulong)uVar2;
      if (lVar4 == 0x11386a228) {
        _malloc();
        if (uVar6 != 0) {
          _memcpy();
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(ulong *)(lVar3 + 0x18) = uVar6;
          goto LAB_109f278ec;
        }
      }
      else {
        lVar5 = *(long *)(lVar3 + 0x18);
        if (lVar4 == 0) {
          _realloc(lVar5,uVar6);
        }
        else if (lVar5 == 0) {
          FUN_109f658b0(lVar4,uVar6);
          lVar5 = lVar4;
        }
        else {
          FUN_109f6595c(lVar5,uVar6);
        }
        if (lVar5 != 0) {
          *(long *)(lVar3 + 0x18) = lVar5;
LAB_109f278ec:
          *(uint *)(lVar3 + 0x24) = uVar2;
          goto LAB_109f278f0;
        }
      }
    }
    else if (*(long *)(lVar3 + 0x18) != 0) {
LAB_109f278f0:
      *(uint *)(lVar3 + 0x20) = uVar1;
    }
  }
  _memcpy();
LAB_109f27904:
  *(long *)(param_3 + 0x10) = lVar3;
  return lVar3;
}



/* Entry: 109f27924; end: 109f279c7;  */

void FUN_109f27924(long param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    pbVar5 = *(byte **)(param_1 + 8);
    pbVar3 = pbVar5 + *(uint *)(param_1 + 0x10);
    do {
      pbVar4 = pbVar3 + -0xa8;
      if (((*(uint *)(*(long *)(pbVar3 + -0x10) + 0x2c) & param_2) != 0) ||
         (((*pbVar4 & 1) == 0 && ((*(uint *)(*(long *)(pbVar3 + -0xa0) + 0x2c) & param_2) != 0)))) {
        uVar2 = *(int *)(param_1 + 0x10) - 0xa8;
        *(uint *)(param_1 + 0x10) = uVar2;
        pbVar1 = pbVar5 + uVar2;
        if (pbVar4 != pbVar1) {
          uVar7 = *(undefined8 *)(pbVar1 + 8);
          uVar6 = *(undefined8 *)pbVar1;
          uVar8 = *(undefined8 *)(pbVar1 + 0x10);
          uVar10 = *(undefined8 *)(pbVar1 + 0x28);
          uVar9 = *(undefined8 *)(pbVar1 + 0x20);
          *(undefined8 *)(pbVar3 + -0x90) = *(undefined8 *)(pbVar1 + 0x18);
          *(undefined8 *)(pbVar3 + -0x98) = uVar8;
          *(undefined8 *)(pbVar3 + -0x80) = uVar10;
          *(undefined8 *)(pbVar3 + -0x88) = uVar9;
          *(undefined8 *)(pbVar3 + -0xa0) = uVar7;
          *(undefined8 *)pbVar4 = uVar6;
          uVar7 = *(undefined8 *)(pbVar1 + 0x38);
          uVar6 = *(undefined8 *)(pbVar1 + 0x30);
          uVar9 = *(undefined8 *)(pbVar1 + 0x48);
          uVar8 = *(undefined8 *)(pbVar1 + 0x40);
          uVar10 = *(undefined8 *)(pbVar1 + 0x50);
          uVar12 = *(undefined8 *)(pbVar1 + 0x68);
          uVar11 = *(undefined8 *)(pbVar1 + 0x60);
          *(undefined8 *)(pbVar3 + -0x50) = *(undefined8 *)(pbVar1 + 0x58);
          *(undefined8 *)(pbVar3 + -0x58) = uVar10;
          *(undefined8 *)(pbVar3 + -0x40) = uVar12;
          *(undefined8 *)(pbVar3 + -0x48) = uVar11;
          *(undefined8 *)(pbVar3 + -0x70) = uVar7;
          *(undefined8 *)(pbVar3 + -0x78) = uVar6;
          *(undefined8 *)(pbVar3 + -0x60) = uVar9;
          *(undefined8 *)(pbVar3 + -0x68) = uVar8;
          uVar7 = *(undefined8 *)(pbVar1 + 0x78);
          uVar6 = *(undefined8 *)(pbVar1 + 0x70);
          uVar9 = *(undefined8 *)(pbVar1 + 0x88);
          uVar8 = *(undefined8 *)(pbVar1 + 0x80);
          uVar11 = *(undefined8 *)(pbVar1 + 0x98);
          uVar10 = *(undefined8 *)(pbVar1 + 0x90);
          *(undefined8 *)(pbVar3 + -8) = *(undefined8 *)(pbVar1 + 0xa0);
          *(undefined8 *)(pbVar3 + -0x20) = uVar9;
          *(undefined8 *)(pbVar3 + -0x28) = uVar8;
          *(undefined8 *)(pbVar3 + -0x10) = uVar11;
          *(undefined8 *)(pbVar3 + -0x18) = uVar10;
          *(undefined8 *)(pbVar3 + -0x30) = uVar7;
          *(undefined8 *)(pbVar3 + -0x38) = uVar6;
          pbVar5 = *(byte **)(param_1 + 8);
        }
      }
      pbVar3 = pbVar4;
    } while (pbVar5 < pbVar4);
  }
  return;
}



/* Entry: 109f279c8; end: 109f27ae3;  */

long FUN_109f279c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  FUN_109efa834(*(undefined8 *)(param_1 + 8),param_3);
  lVar1 = **(long **)(*(long *)(param_3 + 8) + 0x38);
  if (*(int *)(lVar1 + 0x28) == 0) {
    func_0x000109f27a30(param_1,param_2,*(undefined8 *)(lVar1 + 0x38));
    param_2 = param_1 + 0x10;
  }
  else {
    param_2 = param_2 + 0x18;
  }
  return param_2;
}



/* Entry: 109f27ae4; end: 109f27f9b;  */

undefined8 * FUN_109f27ae4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_2 + 0x80;
  if (param_3[10] != lVar1) {
    iVar2 = *(int *)(param_3 + 5);
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        puVar6 = param_1;
        FUN_109ece954(param_1,param_3[0xe],2,*(byte *)(param_2 + 0x9d) | 2,0);
        param_3 = (undefined8 *)param_1[3];
        func_0x000109ecaf70(param_3,1);
        *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        uVar7 = *(undefined8 *)(param_2 + 0x30);
        func_0x000109eca118();
        param_3[6] = uVar7;
        param_3[7] = 0;
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = lVar1;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = puVar6;
      }
      else {
        param_3 = *(undefined8 **)param_1[3];
        FUN_109f6600c(param_3,0xa0,8);
        if (param_3 != (undefined8 *)0x0) {
          param_3[0x11] = 0;
          param_3[0x10] = 0;
          param_3[0x13] = 0;
          param_3[0x12] = 0;
          param_3[0xd] = 0;
          param_3[0xc] = 0;
          param_3[0xf] = 0;
          param_3[0xe] = 0;
          param_3[9] = 0;
          param_3[8] = 0;
          param_3[0xb] = 0;
          param_3[10] = 0;
          param_3[5] = 0;
          param_3[4] = 0;
          param_3[7] = 0;
          param_3[6] = 0;
          param_3[1] = 0;
          *param_3 = 0;
          param_3[3] = 0;
          param_3[2] = 0;
        }
        *(undefined4 *)(param_3 + 3) = 1;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = 0;
        param_3[10] = 0;
        uVar4 = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_3 + 5) = 2;
        *(undefined4 *)((long)param_3 + 0x2c) = uVar4;
        uVar7 = *(undefined8 *)(param_2 + 0x30);
        func_0x000109eca118();
        param_3[6] = uVar7;
        param_3[7] = 0;
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = lVar1;
      }
    }
    else if (iVar2 == 3) {
      puVar6 = param_1;
      FUN_109ece954(param_1,param_3[0xe],2,*(byte *)(param_2 + 0x9d) | 2,0);
      param_3 = (undefined8 *)param_1[3];
      func_0x000109ecaf70(param_3,3);
      *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      uVar7 = *(undefined8 *)(param_2 + 0x30);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[6] = uVar7;
      param_3[7] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[10] = lVar1;
      param_3[0xb] = 0;
      param_3[0xe] = puVar6;
    }
    else if (iVar2 == 4) {
      uVar3 = *(uint *)(param_3 + 0xb);
      param_3 = *(undefined8 **)param_1[3];
      FUN_109f6600c(param_3,0xa0,8);
      if (param_3 != (undefined8 *)0x0) {
        param_3[0x11] = 0;
        param_3[0x10] = 0;
        param_3[0x13] = 0;
        param_3[0x12] = 0;
        param_3[0xd] = 0;
        param_3[0xc] = 0;
        param_3[0xf] = 0;
        param_3[0xe] = 0;
        param_3[9] = 0;
        param_3[8] = 0;
        param_3[0xb] = 0;
        param_3[10] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
      }
      *(undefined4 *)(param_3 + 3) = 1;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      param_3[10] = 0;
      uVar4 = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_3 + 5) = 4;
      *(undefined4 *)((long)param_3 + 0x2c) = uVar4;
      param_3[6] = *(undefined8 *)
                    (*(long *)(*(long *)(param_2 + 0x30) + 0x30) + (ulong)uVar3 * 0x30);
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = lVar1;
      *(uint *)(param_3 + 0xb) = uVar3;
    }
    else {
      uVar4 = *(undefined4 *)((long)param_3 + 0x2c);
      uVar7 = param_3[6];
      uVar8 = param_3[0xb];
      uVar5 = *(undefined4 *)(param_3 + 0xc);
      param_3 = *(undefined8 **)param_1[3];
      FUN_109f6600c(param_3,0xa0,8);
      if (param_3 != (undefined8 *)0x0) {
        param_3[0x11] = 0;
        param_3[0x10] = 0;
        param_3[0x13] = 0;
        param_3[0x12] = 0;
        param_3[0xd] = 0;
        param_3[0xc] = 0;
        param_3[0xf] = 0;
        param_3[0xe] = 0;
        param_3[9] = 0;
        param_3[8] = 0;
        param_3[0xb] = 0;
        param_3[10] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        param_3[2] = 0;
      }
      *(undefined4 *)(param_3 + 3) = 1;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      *(undefined4 *)(param_3 + 5) = 5;
      *(undefined4 *)((long)param_3 + 0x2c) = uVar4;
      param_3[6] = uVar7;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = lVar1;
      *(undefined4 *)(param_3 + 0xc) = uVar5;
      param_3[0xb] = uVar8;
    }
    FUN_109ecb048();
    FUN_109ecb4f0(*param_1,param_1[1],param_3);
    *param_1 = 3;
    param_1[1] = param_3;
  }
  return param_3;
}



/* Entry: 109f27f9c; end: 109f280ef;  */

void FUN_109f27f9c(long param_1,long param_2,undefined8 param_3,int param_4,ulong *param_5,
                  undefined1 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(uint *)(param_2 + 0x10) != 0) {
    puVar3 = (undefined8 *)((ulong)*(uint *)(param_2 + 0x10) + *(long *)(param_2 + 8));
    do {
      puVar5 = puVar3 + -0x15;
      uVar4 = *(ulong *)(param_1 + 8);
      FUN_109efa87c(uVar4,puVar3 + -2,param_3);
      if ((uVar4 & 1) == 0) {
        if (((uint)uVar4 >> 1 & 1) != 0) {
          uVar2 = *(int *)(param_2 + 0x10) - 0xa8;
          *(uint *)(param_2 + 0x10) = uVar2;
          puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar2);
          if ((undefined8 *)*param_5 == puVar1) {
            *param_5 = (ulong)puVar5;
          }
          if (puVar5 != puVar1) {
            uVar7 = puVar1[1];
            uVar6 = *puVar1;
            uVar8 = puVar1[2];
            uVar10 = puVar1[5];
            uVar9 = puVar1[4];
            puVar3[-0x12] = puVar1[3];
            puVar3[-0x13] = uVar8;
            puVar3[-0x10] = uVar10;
            puVar3[-0x11] = uVar9;
            puVar3[-0x14] = uVar7;
            *puVar5 = uVar6;
            uVar7 = puVar1[7];
            uVar6 = puVar1[6];
            uVar9 = puVar1[9];
            uVar8 = puVar1[8];
            uVar10 = puVar1[10];
            uVar12 = puVar1[0xd];
            uVar11 = puVar1[0xc];
            puVar3[-10] = puVar1[0xb];
            puVar3[-0xb] = uVar10;
            puVar3[-8] = uVar12;
            puVar3[-9] = uVar11;
            puVar3[-0xe] = uVar7;
            puVar3[-0xf] = uVar6;
            puVar3[-0xc] = uVar9;
            puVar3[-0xd] = uVar8;
            uVar7 = puVar1[0xf];
            uVar6 = puVar1[0xe];
            uVar9 = puVar1[0x11];
            uVar8 = puVar1[0x10];
            uVar11 = puVar1[0x13];
            uVar10 = puVar1[0x12];
            puVar3[-1] = puVar1[0x14];
            puVar3[-4] = uVar9;
            puVar3[-5] = uVar8;
            puVar3[-2] = uVar11;
            puVar3[-3] = uVar10;
            puVar3[-6] = uVar7;
            puVar3[-7] = uVar6;
          }
        }
      }
      else if (param_4 == 0) {
        *param_5 = (ulong)puVar5;
      }
      else {
        uVar2 = *(int *)(param_2 + 0x10) - 0xa8;
        *(uint *)(param_2 + 0x10) = uVar2;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar2);
        if (puVar5 != puVar1) {
          uVar7 = puVar1[1];
          uVar6 = *puVar1;
          uVar8 = puVar1[2];
          uVar10 = puVar1[5];
          uVar9 = puVar1[4];
          puVar3[-0x12] = puVar1[3];
          puVar3[-0x13] = uVar8;
          puVar3[-0x10] = uVar10;
          puVar3[-0x11] = uVar9;
          puVar3[-0x14] = uVar7;
          *puVar5 = uVar6;
          uVar7 = puVar1[7];
          uVar6 = puVar1[6];
          uVar9 = puVar1[9];
          uVar8 = puVar1[8];
          uVar10 = puVar1[10];
          uVar12 = puVar1[0xd];
          uVar11 = puVar1[0xc];
          puVar3[-10] = puVar1[0xb];
          puVar3[-0xb] = uVar10;
          puVar3[-8] = uVar12;
          puVar3[-9] = uVar11;
          puVar3[-0xe] = uVar7;
          puVar3[-0xf] = uVar6;
          puVar3[-0xc] = uVar9;
          puVar3[-0xd] = uVar8;
          uVar7 = puVar1[0xf];
          uVar6 = puVar1[0xe];
          uVar9 = puVar1[0x11];
          uVar8 = puVar1[0x10];
          uVar11 = puVar1[0x13];
          uVar10 = puVar1[0x12];
          puVar3[-1] = puVar1[0x14];
          puVar3[-4] = uVar9;
          puVar3[-5] = uVar8;
          puVar3[-2] = uVar11;
          puVar3[-3] = uVar10;
          puVar3[-6] = uVar7;
          puVar3[-7] = uVar6;
        }
        *param_6 = 1;
      }
      puVar3 = puVar5;
    } while (*(undefined8 **)(param_2 + 8) < puVar5);
  }
  return;
}



/* Entry: 109f280f0; end: 109f2853f;  */

undefined8 FUN_109f280f0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  byte bVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  bool bVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  bool bVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    bVar17 = false;
    do {
      plVar9 = *(long **)(lVar5 + 0x20);
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        do {
          plVar3 = (long *)0x0;
          plVar16 = plVar9;
          if (*plVar11 != 0) {
            plVar3 = plVar11;
          }
          do {
            plVar9 = plVar3;
            if (((int)plVar16[3] == 0) &&
               (((int)plVar16[5] - 0x1c4U < 6 || ((int)plVar16[5] == 0x154)))) {
              plVar11 = plVar16 + 7;
              if ((long *)plVar16[8] == plVar11) goto LAB_109f28164;
              bVar22 = false;
              plVar3 = plVar16 + 0xd;
              pbVar1 = (byte *)(plVar16 + 0xe);
              plVar23 = (long *)plVar16[8];
              do {
                uVar15 = plVar23[-1];
                plVar24 = (long *)plVar23[1];
                if (((uVar15 & 1) == 0) && (*(int *)(uVar15 + 0x18) == 0)) {
                  bVar10 = (&UNK_110b78548)
                           [(ulong)*(uint *)(uVar15 + 0x28) * 0x68 +
                            (ulong)(uint)((int)((long)(plVar23 + -1) + (-0x50 - uVar15) >> 4) *
                                         -0x55555555)];
                  if (bVar10 == 0) {
                    bVar10 = *(byte *)(uVar15 + 0x4c);
                  }
                  if ((int)plVar16[5] == 0x154) {
                    lVar20 = *plVar3;
                    if (bVar10 != 0) {
                      uVar15 = (ulong)(uint)bVar10;
                      pbVar12 = (byte *)(plVar23 + 3);
                      do {
                        *pbVar12 = pbVar1[*pbVar12];
                        uVar15 = uVar15 - 1;
                        pbVar12 = pbVar12 + 1;
                      } while (uVar15 != 0);
                    }
LAB_109f28460:
                    plVar21 = (long *)plVar23[1];
LAB_109f28464:
                    lVar13 = *plVar23;
                    *(long **)(lVar13 + 8) = plVar21;
                    *plVar21 = lVar13;
                    *plVar23 = 0;
                    plVar23[2] = lVar20;
                    plVar21 = (long *)(lVar20 + 8);
                    lVar20 = *plVar21;
                    *plVar23 = lVar20;
                    plVar23[1] = (long)plVar21;
                    *(long **)(lVar20 + 8) = plVar23;
                    *plVar21 = (long)plVar23;
                  }
                  else {
                    lVar20 = plVar3[(ulong)*(byte *)(plVar23 + 3) * 6];
                    uVar19 = (uint)bVar10;
                    if (uVar19 < 2) {
LAB_109f28440:
                      if (uVar19 != 0) {
                        uVar15 = (ulong)uVar19;
                        pbVar12 = (byte *)(plVar23 + 3);
                        do {
                          *pbVar12 = pbVar1[(ulong)*pbVar12 * 0x30];
                          uVar15 = uVar15 - 1;
                          pbVar12 = pbVar12 + 1;
                        } while (uVar15 != 0);
                      }
                      goto LAB_109f28460;
                    }
                    if (plVar3[(ulong)*(byte *)((long)plVar23 + 0x19) * 6] == lVar20) {
                      lVar13 = (ulong)uVar19 - 2;
                      uVar18 = 1;
                      pbVar12 = (byte *)((long)plVar23 + 0x1a);
                      do {
                        if (lVar13 == 0) goto LAB_109f28440;
                        bVar10 = *pbVar12;
                        lVar13 = lVar13 + -1;
                        uVar18 = uVar18 + 1;
                        pbVar12 = pbVar12 + 1;
                      } while (plVar3[(ulong)bVar10 * 6] == lVar20);
                      bVar4 = uVar18 < uVar19;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (*(uint *)(uVar15 + 0x28) != 0x154) goto LAB_109f28490;
                    lStack_68 = *(long *)(uVar15 + 0x10);
                    iVar2 = *(int *)(lStack_68 + 0x10);
                    while (iVar2 != 3) {
                      lStack_68 = *(long *)(lStack_68 + 0x18);
                      iVar2 = *(int *)(lStack_68 + 0x10);
                    }
                    lVar13 = *(long *)(*(long *)(lStack_68 + 0x20) + 0x18);
                    uStack_78 = 0;
                    uStack_88 = 3;
                    bVar10 = *(byte *)(uVar15 + 0x4c);
                    uVar18 = (ulong)bVar10;
                    uVar6 = uVar18;
                    uStack_80 = uVar15;
                    lStack_70 = lVar13;
                    func_0x000109ecd728(uVar18);
                    FUN_109ecaef8(lVar13,uVar6);
                    if (bVar10 != 0) {
                      plVar21 = (long *)(lVar13 + 0x50);
                      pbVar12 = (byte *)(uVar15 + 0x70);
                      do {
                        plVar14 = plVar16 + (ulong)*pbVar12 * 6 + 10;
                        lVar25 = plVar14[1];
                        lVar13 = *plVar14;
                        lVar26 = plVar14[2];
                        lVar28 = plVar14[5];
                        lVar27 = plVar14[4];
                        plVar21[3] = plVar14[3];
                        plVar21[2] = lVar26;
                        plVar21[5] = lVar28;
                        plVar21[4] = lVar27;
                        plVar21[1] = lVar25;
                        *plVar21 = lVar13;
                        uVar18 = uVar18 - 1;
                        plVar21 = plVar21 + 6;
                        pbVar12 = pbVar12 + 1;
                      } while (uVar18 != 0);
                    }
                    puVar7 = &uStack_88;
                    func_0x000109ecdf34();
                    if (*(long **)(uVar15 + 0x40) + -1 != (long *)(uVar15 + 0x30)) {
                      plVar21 = *(long **)(uVar15 + 0x40);
                      do {
                        lVar13 = *plVar21;
                        plVar14 = (long *)plVar21[1];
                        *(long **)(lVar13 + 8) = plVar14;
                        *plVar14 = lVar13;
                        plVar21[1] = (long)(puVar7 + 1);
                        plVar21[2] = (long)puVar7;
                        *plVar21 = 0;
                        lVar13 = puVar7[1];
                        *plVar21 = lVar13;
                        *(long **)(lVar13 + 8) = plVar21;
                        puVar7[1] = plVar21;
                        plVar21 = plVar14;
                      } while (plVar14 + -1 != (long *)(uVar15 + 0x30));
                    }
                    if (!bVar4) goto LAB_109f28440;
                  }
                  bVar10 = 1;
                }
                else {
                  bVar10 = *(byte *)((long)plVar16 + 0x4c);
                  lVar20 = plVar16[0xd];
                  if (*(byte *)(lVar20 + 0x1c) == bVar10) {
                    plVar21 = plVar24;
                    if ((int)plVar16[5] == 0x154) {
                      if (bVar10 != 0) {
                        uVar15 = 0;
                        do {
                          if (uVar15 != pbVar1[uVar15]) goto LAB_109f28490;
                          uVar15 = uVar15 + 1;
                        } while (bVar10 != uVar15);
                      }
                    }
                    else if (bVar10 != 0) {
                      uVar15 = 0;
                      pbVar12 = pbVar1;
                      do {
                        if ((uVar15 != *pbVar12) || (*(long *)(pbVar12 + -8) != lVar20))
                        goto LAB_109f28490;
                        uVar15 = uVar15 + 1;
                        pbVar12 = pbVar12 + 0x30;
                      } while (bVar10 != uVar15);
                    }
                    goto LAB_109f28464;
                  }
LAB_109f28490:
                  bVar10 = 0;
                }
                bVar22 = (bool)(bVar22 | bVar10);
                plVar23 = plVar24;
              } while (plVar24 != plVar11);
              if (!bVar22) goto LAB_109f28164;
              if ((long *)plVar16[8] == plVar11) {
                FUN_109ecb9c0(plVar16);
              }
              bVar10 = 1;
            }
            else {
LAB_109f28164:
              bVar10 = 0;
            }
            bVar17 = (bool)(bVar17 | bVar10);
            if (plVar9 == (long *)0x0) goto LAB_109f284f0;
            plVar11 = (long *)*plVar9;
            plVar3 = (long *)0x0;
            plVar16 = plVar9;
          } while (plVar11 == (long *)0x0);
        } while( true );
      }
LAB_109f284f0:
      FUN_109ecc434();
    } while (lVar5 != 0);
    if (bVar17) {
      uVar8 = 1;
      uVar19 = 3;
      goto LAB_109f28510;
    }
  }
  uVar8 = 0;
  uVar19 = 0xfffffff7;
LAB_109f28510:
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & uVar19;
  return uVar8;
}



/* Entry: 109f28540; end: 109f285bf;  */

uint FUN_109f28540(long param_1)

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
LAB_109f28574:
      return uVar4 & 1;
    }
    uVar2 = plVar5[6];
    if (uVar2 != 0) {
      FUN_109f280f0();
      do {
        uVar4 = (uint)uVar2;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f28574;
          lVar3 = plVar5[6];
          if (lVar3 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109f280f0();
        uVar2 = (ulong)((uint)lVar3 | uVar4);
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f285c0; end: 109f28787;  */

uint FUN_109f285c0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  
  plVar13 = *(long **)(param_1 + 0x178);
  plVar6 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    lVar10 = plVar13[6];
    if (lVar10 != 0) break;
    plVar13 = plVar6;
    plVar6 = (long *)*plVar6;
  }
  uVar14 = 0;
  do {
    lVar2 = 0;
    FUN_109f6695c(0,FUN_109f029d0,FUN_109f034e0);
    uVar5 = *(uint *)(lVar2 + 0x40);
    if (*(uint *)(lVar2 + 0x40) <= *(uint *)(lVar10 + 0x78)) {
      uVar5 = *(uint *)(lVar10 + 0x78);
    }
    uVar4 = 0xffffffff;
    do {
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (*(uint *)(&UNK_10e47d8f0 + uVar4 * 0x20) < uVar5);
    FUN_109f66c8c(lVar2);
    uVar5 = *(uint *)(lVar10 + 0x84);
    if ((uVar5 >> 1 & 1) == 0) {
      FUN_109efe024(lVar10);
      uVar5 = *(uint *)(lVar10 + 0x84);
    }
    *(uint *)(lVar10 + 0x84) = uVar5 | 2;
    lVar11 = *(long *)(lVar10 + 0x30);
    if (lVar11 == 0) {
LAB_109f28730:
      uVar8 = 0;
      uVar5 = 0xfffffff7;
    }
    else {
      bVar7 = false;
      do {
        plVar9 = *(long **)(lVar11 + 0x20);
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          do {
            plVar1 = (long *)0x0;
            plVar12 = plVar9;
            if (*plVar6 != 0) {
              plVar1 = plVar6;
            }
            do {
              plVar9 = plVar1;
              lVar3 = lVar2;
              FUN_109f034e4(lVar2,plVar12,FUN_109f28788);
              if (lVar3 != 0) {
                FUN_109ecb9c0(plVar12);
                bVar7 = true;
              }
              if (plVar9 == (long *)0x0) goto LAB_109f28708;
              plVar6 = (long *)*plVar9;
              plVar1 = (long *)0x0;
              plVar12 = plVar9;
            } while (plVar6 == (long *)0x0);
          } while( true );
        }
LAB_109f28708:
        FUN_109ecc434();
      } while (lVar11 != 0);
      if (!bVar7) goto LAB_109f28730;
      uVar8 = 1;
      uVar5 = 3;
    }
    *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & uVar5;
    func_0x000109f66a2c(lVar2,0);
    uVar14 = uVar14 | uVar8;
    plVar13 = (long *)*plVar13;
    plVar6 = (long *)*plVar13;
    while( true ) {
      if (plVar6 == (long *)0x0) {
        return uVar14;
      }
      lVar10 = plVar13[6];
      if (lVar10 != 0) break;
      plVar13 = plVar6;
      plVar6 = (long *)*plVar6;
    }
  } while( true );
}



/* Entry: 109f28788; end: 109f287bb;  */

bool FUN_109f28788(long param_1,long param_2)

{
  if (*(uint *)(*(long *)(param_2 + 0x10) + 0x80) < *(uint *)(*(long *)(param_1 + 0x10) + 0x80)) {
    return false;
  }
  return *(uint *)(*(long *)(param_2 + 0x10) + 0x84) <= *(uint *)(*(long *)(param_1 + 0x10) + 0x84);
}



/* Entry: 109f287bc; end: 109f28f93;  */

uint FUN_109f287bc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  
  plVar4 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
LAB_109f288b8:
      return uVar5 & 1;
    }
    lVar7 = plVar4[6];
    if (lVar7 != 0) {
      uVar5 = 0;
      do {
        lVar2 = 0;
        func_0x000109f6590c(0,(ulong)*(uint *)(lVar7 + 0x78) + 0x1f >> 3 & 0x3ffffffc);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        lVar3 = lVar7 + 0x30;
        puStack_80 = &uStack_70;
        ppuStack_68 = &puStack_80;
        func_0x000109f288dc(lVar3,lVar2,auStack_90,&puStack_80);
        if (lVar2 != 0) {
          FUN_109f65aa4(lVar2 + -0x30);
          FUN_109f65ae0(lVar2 + -0x30);
        }
        FUN_109ecbcec(&puStack_80);
        uVar6 = 3;
        if ((uint)lVar3 == 0) {
          uVar6 = 0xfffffff7;
        }
        *(uint *)(lVar7 + 0x84) = *(uint *)(lVar7 + 0x84) & uVar6;
        uVar5 = (uint)lVar3 | uVar5;
        plVar4 = (long *)*plVar4;
        plVar1 = (long *)*plVar4;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f288b8;
          lVar7 = plVar4[6];
          if (lVar7 != 0) break;
          plVar4 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      } while( true );
    }
    plVar4 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f28f94; end: 109f2904f;  */

uint FUN_109f28f94(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined1 uStack_31;
  
  plVar4 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
LAB_109f29038:
      return uVar5 & 1;
    }
    lVar3 = plVar4[6];
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        lVar2 = lVar3 + 0x30;
        FUN_109f29050(lVar2,&uStack_31);
        if ((uint)lVar2 == 0) {
          *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffff7;
        }
        else {
          *(undefined4 *)(lVar3 + 0x84) = 0;
          FUN_109efaa24(lVar3);
          FUN_109f443fc(lVar3);
        }
        uVar5 = uVar5 | (uint)lVar2;
        plVar4 = (long *)*plVar4;
        plVar1 = (long *)*plVar4;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f29038;
          lVar3 = plVar4[6];
          if (lVar3 != 0) break;
          plVar4 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      } while( true );
    }
    plVar4 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f29050; end: 109f294b3;  */

uint FUN_109f29050(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  byte bStack_8a;
  char cStack_89;
  long *aplStack_88 [4];
  undefined8 uStack_68;
  
  *param_2 = 0;
  if (*(long *)*param_1 != 0) {
    uVar7 = 0;
    plVar12 = (long *)0x0;
    plVar9 = (long *)*param_1;
LAB_109f29094:
    if ((int)plVar9[2] != 2) {
      if ((int)plVar9[2] != 1) {
        do {
          plVar10 = (long *)plVar9[4];
          if (plVar10 == plVar9 + 6) {
            plVar8 = (long *)*plVar9;
LAB_109f29290:
            if ((plVar8 == (long *)0x0) || (plVar13 = (long *)*plVar8, plVar13 == (long *)0x0))
            goto LAB_109f29328;
            if ((int)plVar8[2] == 2) {
              plVar11 = plVar8;
              FUN_109f297d0();
              if ((int)plVar11 == 0) goto LAB_109f29328;
              plVar9 = (long *)0x0;
              if (*plVar13 != 0) {
                plVar9 = plVar13;
              }
              lVar5 = 0;
              if (*(long *)(plVar8[1] + 8) != 0) {
                lVar5 = plVar8[1];
              }
              FUN_109ef87e8(aplStack_88,1,lVar5,0,plVar9);
              for (plVar9 = aplStack_88[0]; *plVar9 != 0; plVar9 = (long *)*plVar9) {
                FUN_109ef8c00(plVar9,uStack_68);
              }
            }
            else {
              if ((int)plVar8[2] != 1) goto LAB_109f29328;
              lVar5 = *(long *)plVar8[7];
              if (*(int *)(lVar5 + 0x18) == 7) {
                bVar3 = false;
              }
              else {
                if (*(int *)(lVar5 + 0x18) != 5) {
                  plVar11 = plVar8;
                  FUN_109f297d0();
                  if ((int)plVar11 != 0) {
                    plVar9 = (long *)0x0;
                    if (*plVar13 != 0) {
                      plVar9 = plVar13;
                    }
                    lVar5 = 0;
                    if (*(long *)(plVar8[1] + 8) != 0) {
                      lVar5 = plVar8[1];
                    }
                    FUN_109ef87e8(aplStack_88,1,lVar5,0,plVar9);
                    for (plVar9 = aplStack_88[0]; *plVar9 != 0; plVar9 = (long *)*plVar9) {
                      FUN_109ef8c00(plVar9,uStack_68);
                    }
                    goto LAB_109f29198;
                  }
                  goto LAB_109f29328;
                }
                uVar6 = *(ulong *)(lVar5 + 0x48);
                uVar7 = (*(byte *)(lVar5 + 0x45) & 0xaaaaaaaa) >> 1 |
                        (*(byte *)(lVar5 + 0x45) & 0x55555555) << 1;
                uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
                uVar7 = (uint)LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
                uVar1 = (long)(int)uVar6;
                if (uVar7 != 5) {
                  uVar1 = uVar6;
                }
                uVar2 = (long)(short)uVar6;
                if (uVar7 != 4) {
                  uVar2 = uVar1;
                }
                uVar1 = -(uVar6 & 1);
                if (uVar7 != 0) {
                  uVar1 = (long)(char)uVar6;
                }
                if (uVar7 < 4) {
                  uVar2 = uVar1;
                }
                bVar3 = uVar2 != 0;
              }
              FUN_109f294b4(plVar8,bVar3);
            }
          }
          else {
            plVar8 = (long *)*plVar9;
            if (*(int *)(plVar9[7] + 0x18) != 6) goto LAB_109f29290;
            plVar10 = (long *)*plVar8;
            plVar13 = plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_109f29330;
            do {
              plVar11 = plVar13;
              plVar13 = plVar10;
              plVar10 = (long *)*plVar13;
            } while (plVar10 != (long *)0x0);
            bVar3 = (int)plVar9[2] == 0;
            if (!bVar3) {
              plVar9 = plVar8;
            }
            if ((int)plVar11[2] == 0) {
              uVar4 = 1;
              plVar10 = plVar11;
            }
            else {
              uVar4 = 0;
              plVar10 = (long *)0x0;
              if (*(long *)*plVar11 != 0) {
                plVar10 = (long *)*plVar11;
              }
            }
            FUN_109ef87e8(aplStack_88,bVar3,plVar9,uVar4,plVar10);
            for (plVar9 = aplStack_88[0]; *plVar9 != 0; plVar9 = (long *)*plVar9) {
              FUN_109ef8c00(plVar9,uStack_68);
            }
          }
LAB_109f29198:
          if (plVar12 == (long *)0x0) {
            plVar10 = (long *)*param_1;
            bVar3 = plVar10 == param_1 + 2;
          }
          else {
            plVar10 = (long *)*plVar12;
            bVar3 = *plVar10 == 0;
          }
          plVar9 = (long *)0x0;
          if (!bVar3) {
            plVar9 = plVar10;
          }
          uVar7 = 1;
        } while( true );
      }
      plVar12 = plVar9 + 9;
      FUN_109f29050(plVar12,&cStack_89);
      plVar10 = plVar9 + 0xd;
      FUN_109f29050(plVar10,&bStack_8a);
      plVar8 = (long *)*plVar9;
      if ((cStack_89 == '\x01') && ((bStack_8a & 1) != 0)) {
        *param_2 = 1;
        plVar13 = (long *)0x0;
        if ((long *)*plVar8 != (long *)0x0) {
          plVar13 = plVar8;
        }
        plVar11 = plVar9;
        if (((long *)plVar8[4] != plVar13 + 6) || (*(long *)*plVar8 != 0)) goto LAB_109f293b0;
      }
      uVar7 = uVar7 | (uint)plVar12 | (uint)plVar10;
      plVar12 = plVar9;
      goto LAB_109f29390;
    }
    plVar12 = plVar9 + 4;
    FUN_109f29050(plVar12,&cStack_89);
    plVar8 = (long *)*plVar9;
    plVar10 = (long *)0x0;
    if ((long *)*plVar8 != (long *)0x0) {
      plVar10 = plVar8;
    }
    if ((*(int *)(plVar8[0xb] + 0x40) == 0) &&
       ((plVar13 = plVar9, (long *)plVar8[4] != plVar10 + 6 || (*(long *)*plVar8 != 0))))
    goto LAB_109f293f4;
    uVar7 = uVar7 | (uint)plVar12;
    plVar12 = plVar9;
    goto LAB_109f29390;
  }
  uVar7 = 0;
  goto LAB_109f29490;
LAB_109f293f4:
  do {
    plVar12 = plVar13;
    plVar11 = (long *)*plVar8;
    plVar13 = plVar8;
    plVar8 = plVar11;
  } while (plVar11 != (long *)0x0);
  bVar3 = (int)plVar9[2] == 0;
  if (!bVar3) {
    plVar9 = plVar10;
  }
  if ((int)plVar12[2] == 0) {
    uVar4 = 1;
    plVar10 = plVar12;
  }
  else {
    uVar4 = 0;
    plVar10 = (long *)0x0;
    if (*(long *)*plVar12 != 0) {
      plVar10 = (long *)*plVar12;
    }
  }
  FUN_109ef87e8(aplStack_88,bVar3,plVar9,uVar4,plVar10);
  for (; *aplStack_88[0] != 0; aplStack_88[0] = (long *)*aplStack_88[0]) {
    FUN_109ef8c00(aplStack_88[0],uStack_68);
  }
  goto LAB_109f2948c;
LAB_109f29328:
  plVar12 = plVar9;
  if (plVar10 != plVar9 + 6) {
LAB_109f29330:
    plVar12 = plVar9;
    if (*(int *)(plVar9[7] + 0x18) == 6) {
      *param_2 = 1;
    }
  }
LAB_109f29390:
  plVar9 = plVar8;
  if (*plVar8 == 0) goto LAB_109f29490;
  goto LAB_109f29094;
LAB_109f293b0:
  do {
    plVar12 = plVar11;
    plVar10 = (long *)*plVar8;
    plVar11 = plVar8;
    plVar8 = plVar10;
  } while (plVar10 != (long *)0x0);
  bVar3 = (int)plVar9[2] == 0;
  if (!bVar3) {
    plVar9 = plVar13;
  }
  if ((int)plVar12[2] == 0) {
    uVar4 = 1;
    plVar10 = plVar12;
  }
  else {
    uVar4 = 0;
    plVar10 = (long *)0x0;
    if (*(long *)*plVar12 != 0) {
      plVar10 = (long *)*plVar12;
    }
  }
  FUN_109ef87e8(aplStack_88,bVar3,plVar9,uVar4,plVar10);
  for (; *aplStack_88[0] != 0; aplStack_88[0] = (long *)*aplStack_88[0]) {
    FUN_109ef8c00(aplStack_88[0],uStack_68);
  }
LAB_109f2948c:
  uVar7 = 1;
LAB_109f29490:
  return uVar7 & 1;
}



/* Entry: 109f294b4; end: 109f297cf;  */

void FUN_109f294b4(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_80 [40];
  long *aplStack_58 [4];
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    if ((long *)param_1[0xd] == param_1 + 0xf) goto LAB_109f29508;
    lVar3 = 0x80;
  }
  else {
    if ((long *)param_1[9] == param_1 + 0xb) {
LAB_109f29508:
      lVar3 = 0;
      goto LAB_109f2950c;
    }
    lVar3 = 0x60;
  }
  lVar3 = *(long *)((long)param_1 + lVar3);
LAB_109f2950c:
  if ((*(long *)(lVar3 + 0x20) == lVar3 + 0x30) || (*(int *)(*(long *)(lVar3 + 0x38) + 0x18) != 6))
  {
    plVar7 = *(long **)(*param_1 + 0x20);
    plVar6 = (long *)*plVar7;
    if ((plVar6 != (long *)0x0) && ((int)plVar7[3] == 8)) {
      if (*plVar6 != 0) goto LAB_109f29714;
      plVar4 = plVar7;
      plVar8 = (long *)0x0;
      while( true ) {
        plVar7 = plVar8;
        plVar6 = *(long **)plVar4[5];
        if (plVar6 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          plVar8 = (long *)plVar4[5];
          do {
            if (plVar8[2] == lVar3) {
              lVar5 = plVar8[6];
            }
            plVar9 = (long *)*plVar6;
            plVar8 = plVar6;
            plVar6 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        plVar6 = plVar4 + 9;
        if ((long *)plVar4[0xb] + -1 != plVar6) {
          plVar4 = (long *)plVar4[0xb];
          do {
            lVar10 = *plVar4;
            plVar8 = (long *)plVar4[1];
            *(long **)(lVar10 + 8) = plVar8;
            *plVar8 = lVar10;
            plVar4[1] = lVar5 + 8;
            plVar4[2] = lVar5;
            *plVar4 = 0;
            lVar10 = *(long *)(lVar5 + 8);
            *plVar4 = lVar10;
            *(long **)(lVar10 + 8) = plVar4;
            *(long **)(lVar5 + 8) = plVar4;
            plVar4 = plVar8;
          } while (plVar8 + -1 != plVar6);
        }
        FUN_109ecb9c0(*plVar6);
        if (plVar7 == (long *)0x0) break;
        plVar6 = (long *)*plVar7;
        plVar4 = plVar7;
        plVar8 = (long *)0x0;
        if (*plVar6 != 0) {
LAB_109f29714:
          plVar4 = plVar7;
          plVar8 = plVar6;
          if ((int)plVar6[3] != 8) {
            plVar8 = (long *)0x0;
          }
        }
      }
    }
  }
  else {
    plVar4 = (long *)*param_1;
    plVar6 = plVar4;
    plVar7 = param_1;
    do {
      plVar8 = plVar7;
      plVar7 = plVar6;
      plVar6 = (long *)*plVar7;
    } while (plVar6 != (long *)0x0);
    if ((int)param_1[2] == 0) {
      uVar1 = 1;
      plVar6 = param_1;
    }
    else {
      uVar1 = 0;
      plVar6 = (long *)0x0;
      if (*plVar4 != 0) {
        plVar6 = plVar4;
      }
    }
    if ((int)plVar8[2] == 0) {
      uVar2 = 1;
      plVar7 = plVar8;
    }
    else {
      uVar2 = 0;
      plVar7 = (long *)0x0;
      if (*(long *)*plVar8 != 0) {
        plVar7 = (long *)*plVar8;
      }
    }
    FUN_109ef87e8(aplStack_58,uVar1,plVar6,uVar2,plVar7);
    for (plVar6 = aplStack_58[0]; *plVar6 != 0; plVar6 = (long *)*plVar6) {
      FUN_109ef8c00(plVar6,uStack_38);
    }
  }
  lVar3 = 0x48;
  if (param_2 == 0) {
    lVar3 = 0x68;
  }
  plVar6 = (long *)((long)param_1 + lVar3);
  plVar7 = (long *)*plVar6;
  if (*(int *)(plVar7 + 2) == 0) {
    uVar1 = 0;
    plVar4 = plVar7;
  }
  else {
    plVar4 = (long *)0;
    if (*(long *)(plVar7[1] + 8) != 0) {
      plVar4 = (long *)plVar7[1];
    }
    uVar1 = 1;
  }
  if (plVar7 == plVar6 + 2) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)plVar6[3];
  }
  if ((int)plVar6[2] == 0) {
    uVar2 = 1;
    plVar7 = plVar6;
  }
  else {
    uVar2 = 0;
    plVar7 = (long *)0x0;
    if (*(long *)*plVar6 != 0) {
      plVar7 = (long *)*plVar6;
    }
  }
  FUN_109ef87e8(auStack_80,uVar1,plVar4,uVar2,plVar7);
  if ((int)param_1[2] == 0) {
    uVar1 = 1;
    plVar6 = param_1;
  }
  else {
    uVar1 = 0;
    plVar6 = (long *)0x0;
    if (*(long *)*param_1 != 0) {
      plVar6 = (long *)*param_1;
    }
  }
  FUN_109ef8954(auStack_80,uVar1,plVar6);
  if ((int)param_1[2] == 0) {
    uVar1 = 0;
    uVar2 = 1;
    plVar6 = param_1;
  }
  else {
    uVar2 = 0;
    plVar7 = (long *)*param_1;
    plVar6 = (long *)0x0;
    if (((long *)param_1[1])[1] != 0) {
      plVar6 = (long *)param_1[1];
    }
    param_1 = (long *)0x0;
    if (*plVar7 != 0) {
      param_1 = plVar7;
    }
    uVar1 = 1;
  }
  FUN_109ef87e8(aplStack_58,uVar1,plVar6,uVar2,param_1);
  for (; *aplStack_58[0] != 0; aplStack_58[0] = (long *)*aplStack_58[0]) {
    FUN_109ef8c00(aplStack_58[0],uStack_38);
  }
  return;
}



/* Entry: 109f297d0; end: 109f29a2f;  */

undefined8 FUN_109f297d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  plVar4 = (long *)0x0;
  if (*plVar5 != 0) {
    plVar4 = plVar5;
  }
  if (((long *)plVar5[4] == plVar4 + 6) || ((int)((long *)plVar5[4])[3] != 8)) {
    plVar4 = param_1;
    FUN_109ecc4d4();
    plVar5 = param_1;
    FUN_109ecc644();
    if (plVar4 != plVar5) {
      lVar2 = param_1[2];
      do {
        if ((plVar4 != param_1) && (plVar6 = plVar4, (int)lVar2 != 2)) {
          do {
            plVar1 = plVar6 + 2;
            plVar6 = (long *)plVar6[3];
          } while ((int)*plVar1 != 2 && plVar6 != param_1);
        }
        if (*(long *)plVar4[4] != 0) {
          uVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x000109f298c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e47c3b3)[*(uint *)((long *)plVar4[4] + 3)] * 4 +
                    0x109f298c4))(0);
          return uVar3;
        }
        FUN_109ecc434();
      } while (plVar4 != plVar5);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 109f29a30; end: 109f29aab;  */

undefined8 FUN_109f29a30(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != param_1 + 1) {
    do {
      uVar2 = plVar1[-1];
      if ((uVar2 & 1) == 0) {
        lVar4 = *(long *)(uVar2 + 0x10);
      }
      else {
        lVar3 = *(long *)((uVar2 & 0xfffffffffffffffe) + 8);
        lVar4 = 0;
        if (*(long *)(lVar3 + 8) != 0) {
          lVar4 = lVar3;
        }
      }
      if (lVar4 != *(long *)(*param_1 + 0x10)) {
        do {
          lVar4 = *(long *)(lVar4 + 0x18);
          if ((lVar4 == 0) || (lVar4 == *(long *)(param_2 + 0x18))) {
            return 0;
          }
        } while (lVar4 != param_2);
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != param_1 + 1);
  }
  return 1;
}



/* Entry: 109f29aac; end: 109f29ef7;  */

uint FUN_109f29aac(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  
  puVar5 = (undefined8 *)0x30;
  _malloc();
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5 = puVar5 + 6;
  }
  plVar21 = *(long **)(param_1 + 0x178);
  plVar9 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar9 == (long *)0x0) {
      uVar17 = 0;
LAB_109f29ebc:
      if (puVar5 != (undefined8 *)0x0) {
        FUN_109f65aa4(puVar5 + -6);
        FUN_109f65ae0(puVar5 + -6);
      }
      return uVar17;
    }
    lVar15 = plVar21[6];
    if (lVar15 != 0) {
      uVar17 = 0;
      break;
    }
    plVar21 = plVar9;
    plVar9 = (long *)*plVar9;
  } while( true );
LAB_109f29b34:
  uVar8 = *(uint *)(lVar15 + 0x84);
  if ((uVar8 & 1) == 0) {
    FUN_109ecc784(lVar15);
    uVar8 = *(uint *)(lVar15 + 0x84);
  }
  *(uint *)(lVar15 + 0x84) = uVar8 | 1;
  lVar16 = *(long *)(lVar15 + 0x30);
  if (lVar16 == 0) {
LAB_109f29e80:
    uVar8 = 0;
    uVar19 = 0xfffffff7;
  }
  else {
    uVar8 = 0;
    do {
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      plVar22 = *(long **)(lVar16 + 0x20);
      plVar9 = (long *)*plVar22;
      puStack_78 = puVar5;
      if (plVar9 != (long *)0x0) {
        uVar19 = 0;
        do {
          plVar4 = (long *)0x0;
          plVar18 = plVar22;
          if (*plVar9 != 0) {
            plVar4 = plVar9;
          }
          do {
            plVar22 = plVar4;
            if ((int)plVar18[3] == 4) {
              iVar2 = (int)plVar18[5];
              if (iVar2 < 0x112) {
                if (iVar2 < 0x6e) {
                  if (iVar2 == 0x2d) {
                    if (((*(byte *)((long)plVar18 + 0x5c) >> 1 & 1) != 0) &&
                       (uVar12 = uStack_68 & 0xffffffff, (int)uStack_68 != 0)) {
                      uVar3 = *(uint *)(plVar18 + 0xc);
                      puVar14 = (undefined8 *)((long)puStack_70 + uVar12);
                      do {
                        puVar13 = puVar14 + -3;
                        if ((*(uint *)(puVar14[-1] + 0x2c) & uVar3) != 0) {
                          uVar12 = (ulong)((int)uVar12 - 0x18);
                          puVar1 = (undefined8 *)((long)puStack_70 + uVar12);
                          uVar24 = puVar1[1];
                          uVar23 = *puVar1;
                          puVar14[-1] = puVar1[2];
                          puVar14[-2] = uVar24;
                          *puVar13 = uVar23;
                        }
                        puVar14 = puVar13;
                      } while (puStack_70 < puVar13);
                      uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar12);
                    }
                  }
                  else if (iVar2 == 0x54) {
                    uVar12 = *(ulong *)plVar18[0x17];
                    if (*(int *)(uVar12 + 0x18) != 1) {
                      uVar12 = 0;
                    }
                    lVar20 = *(long *)plVar18[0x13];
                    lVar10 = lVar20;
                    if (*(int *)(lVar20 + 0x18) != 1) {
                      lVar10 = 0;
                    }
                    if ((*(byte *)((long)plVar18 + 0x54) >> 2 & 1) == 0) {
                      uVar6 = uVar12;
                      FUN_109efa74c(uVar12,lVar10);
                      if ((uVar6 & 1) == 0) {
                        FUN_109f29ef8(&puStack_78,uVar12);
                        ppuVar7 = &puStack_78;
                        FUN_109f29f74(ppuVar7,plVar18,lVar10,
                                      (-1 << (ulong)(*(byte *)(*(long *)(lVar20 + 0x30) + 0xd) &
                                                    0x1f) ^ 0xffffffffU) & 0xffff);
                        uVar19 = uVar19 | (uint)ppuVar7;
                      }
                      else {
                        FUN_109ecb9c0(plVar18);
                        uVar19 = 1;
                      }
                    }
                    else {
                      FUN_109f29ef8(&puStack_78,uVar12);
                      FUN_109f29ef8(&puStack_78,lVar10);
                    }
                  }
                }
                else if ((iVar2 == 0x6e) || (iVar2 == 0x70)) {
                  uVar12 = uStack_68 & 0xffffffff;
                  if ((int)uStack_68 != 0) {
                    puVar14 = (undefined8 *)((long)puStack_70 + uVar12);
                    do {
                      puVar13 = puVar14 + -3;
                      if ((*(byte *)(puVar14[-1] + 0x2c) >> 3 & 1) != 0) {
                        uVar12 = (ulong)((int)uVar12 - 0x18);
                        puVar1 = (undefined8 *)((long)puStack_70 + uVar12);
                        uVar24 = puVar1[1];
                        uVar23 = *puVar1;
                        puVar14[-1] = puVar1[2];
                        puVar14[-2] = uVar24;
                        *puVar13 = uVar23;
                      }
                      uVar11 = (undefined4)uVar12;
                      puVar14 = puVar13;
                    } while (puStack_70 < puVar13);
                    goto LAB_109f29be4;
                  }
                }
                else if (iVar2 == 0x78) {
LAB_109f29ce8:
                  plVar9 = (long *)plVar18[0x17];
                  goto LAB_109f29cec;
                }
              }
              else if (iVar2 < 0x252) {
                if (iVar2 == 0x112) {
                  lVar10 = *(long *)plVar18[0x13];
                  if ((*(uint *)(lVar10 + 0x2c) & 0xfffffb78) != 0) goto LAB_109f29d00;
                }
                else if (iVar2 == 0x24f) goto LAB_109f29ce8;
              }
              else if (iVar2 == 0x252) {
LAB_109f29c3c:
                plVar9 = (long *)plVar18[0x3b];
LAB_109f29cec:
                lVar10 = *plVar9;
                if (*(int *)(lVar10 + 0x18) != 1) {
                  lVar10 = 0;
                }
LAB_109f29d00:
                FUN_109f29ef8(&puStack_78,lVar10);
              }
              else if (iVar2 == 0x26f) {
                lVar10 = *(long *)plVar18[0x13];
                if (*(int *)(lVar10 + 0x18) != 1) {
                  lVar10 = 0;
                }
                if ((*(byte *)(plVar18 + 0xb) >> 2 & 1) != 0) goto LAB_109f29d00;
                ppuVar7 = &puStack_78;
                FUN_109f29f74(ppuVar7,plVar18,lVar10,*(undefined2 *)((long)plVar18 + 0x54));
                uVar19 = uVar19 | (uint)ppuVar7;
              }
              else if (iVar2 == 0x297) goto LAB_109f29c3c;
            }
            else if (((int)plVar18[3] == 2) &&
                    (uVar12 = uStack_68 & 0xffffffff, (int)uStack_68 != 0)) {
              puVar14 = (undefined8 *)((long)puStack_70 + uVar12);
              do {
                puVar13 = puVar14 + -3;
                if ((*(uint *)(puVar14[-1] + 0x2c) & 0x1e0208) != 0) {
                  uVar12 = (ulong)((int)uVar12 - 0x18);
                  puVar1 = (undefined8 *)((long)puStack_70 + uVar12);
                  uVar24 = puVar1[1];
                  uVar23 = *puVar1;
                  puVar14[-1] = puVar1[2];
                  puVar14[-2] = uVar24;
                  *puVar13 = uVar23;
                }
                uVar11 = (undefined4)uVar12;
                puVar14 = puVar13;
              } while (puStack_70 < puVar13);
LAB_109f29be4:
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar11);
            }
            if (plVar22 == (long *)0x0) goto LAB_109f29e58;
            plVar9 = (long *)*plVar22;
            plVar4 = (long *)0x0;
            plVar18 = plVar22;
          } while (plVar9 == (long *)0x0);
        } while( true );
      }
      uVar19 = 0;
LAB_109f29e58:
      uVar8 = uVar8 | uVar19;
      FUN_109ecc434();
    } while (lVar16 != 0);
    if ((uVar8 & 1) == 0) goto LAB_109f29e80;
    uVar8 = 1;
    uVar19 = 3;
  }
  *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & uVar19;
  uVar17 = uVar17 | uVar8;
  plVar21 = (long *)*plVar21;
  plVar9 = (long *)*plVar21;
  while( true ) {
    if (plVar9 == (long *)0x0) goto LAB_109f29ebc;
    lVar15 = plVar21[6];
    if (lVar15 != 0) break;
    plVar21 = plVar9;
    plVar9 = (long *)*plVar9;
  }
  goto LAB_109f29b34;
}



/* Entry: 109f29ef8; end: 109f29f73;  */

void FUN_109f29ef8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x10));
    do {
      puVar4 = puVar3 + -3;
      uVar5 = param_2;
      FUN_109efa74c(param_2,puVar3[-1]);
      if (((uint)uVar5 >> 1 & 1) != 0) {
        uVar2 = *(int *)(param_1 + 0x10) - 0x18;
        *(uint *)(param_1 + 0x10) = uVar2;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar2);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar3[-1] = puVar1[2];
        puVar3[-2] = uVar6;
        *puVar4 = uVar5;
      }
      puVar3 = puVar4;
    } while (*(undefined8 **)(param_1 + 8) < puVar4);
  }
  return;
}



/* Entry: 109f29f74; end: 109f2a107;  */

undefined8 FUN_109f29f74(ulong *param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if ((uint)param_1[2] == 0) {
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    puVar8 = (undefined8 *)(param_1[1] + (ulong)(uint)param_1[2]);
    do {
      puVar9 = puVar8 + -3;
      uVar12 = param_3;
      FUN_109efa74c(param_3,puVar8[-1]);
      if (((uint)uVar12 >> 2 & 1) != 0) {
        uVar3 = *(ushort *)(puVar8 + -2) & (param_4 ^ 0xffff);
        *(ushort *)(puVar8 + -2) = uVar3;
        if (uVar3 == 0) {
          FUN_109ecb9c0(*puVar9);
          uVar11 = (int)param_1[2] - 0x18;
          *(uint *)(param_1 + 2) = uVar11;
          puVar2 = (undefined8 *)(param_1[1] + (ulong)uVar11);
          uVar12 = puVar2[1];
          uVar10 = *puVar2;
          puVar8[-1] = puVar2[2];
          puVar8[-2] = uVar12;
          *puVar9 = uVar10;
          uVar10 = 1;
        }
      }
      puVar8 = puVar9;
    } while ((undefined8 *)param_1[1] < puVar9);
    uVar11 = (uint)param_1[2];
  }
  uVar1 = uVar11 + 0x18;
  if (*(uint *)((long)param_1 + 0x14) < uVar1) {
    uVar4 = *(uint *)((long)param_1 + 0x14) << 1;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < 0x41) {
      uVar4 = 0x40;
    }
    uVar7 = (ulong)uVar4;
    uVar5 = *param_1;
    if (uVar5 == 0x11386a228) {
      _malloc();
      _memcpy();
      *param_1 = 0;
      param_1[1] = uVar7;
    }
    else {
      uVar6 = param_1[1];
      if (uVar5 == 0) {
        _realloc(uVar6,uVar7);
      }
      else if (uVar6 == 0) {
        FUN_109f658b0(uVar5,uVar7);
        uVar6 = uVar5;
      }
      else {
        FUN_109f6595c(uVar6,uVar7);
      }
      param_1[1] = uVar6;
      uVar11 = (uint)param_1[2];
      uVar7 = uVar6;
    }
    *(uint *)((long)param_1 + 0x14) = uVar4;
  }
  else {
    uVar7 = param_1[1];
  }
  puVar8 = (undefined8 *)(uVar7 + uVar11);
  *(uint *)(param_1 + 2) = uVar1;
  *puVar8 = param_2;
  *(ushort *)(puVar8 + 1) = param_4;
  puVar8[2] = param_3;
  return uVar10;
}



/* Entry: 109f2a108; end: 109f2a9df;  */

undefined4 FUN_109f2a108(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  int iVar24;
  long *plVar25;
  undefined4 uVar26;
  long *plVar27;
  byte bVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  bool bVar34;
  long lVar35;
  byte bVar36;
  uint *puVar37;
  long lStack_1a8;
  uint uStack_198;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  int iStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [56];
  long *plStack_c0;
  undefined1 auStack_b8 [56];
  uint *puStack_80;
  
  plVar25 = *(long **)(param_1 + 0x178);
  plVar27 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar27 == (long *)0x0) {
      return 0;
    }
    lStack_1a8 = plVar25[6];
    if (lStack_1a8 != 0) break;
    plVar25 = plVar27;
    plVar27 = (long *)*plVar27;
  }
  uVar26 = 0;
  do {
    puVar8 = (undefined8 *)0x30;
    _malloc();
    if (puVar8 == (undefined8 *)0x0) {
      puVar29 = (undefined8 *)0x0;
    }
    else {
      puVar8[4] = 0;
      puVar29 = puVar8 + 6;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
    }
    puVar8 = puVar29;
    puStack_100 = puVar29;
    FUN_109f64c74(puVar29,0x109f65648,FUN_109f65684);
    puVar9 = puVar29;
    puStack_140 = puVar8;
    FUN_109f64c74(puVar29,0x109f65648,FUN_109f65684);
    plStack_110 = *(long **)(*(long *)(lStack_1a8 + 0x20) + 0x18);
    uStack_128 = 0;
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    lStack_108 = lStack_1a8;
    lVar35 = *(long *)(lStack_1a8 + 0x30);
    puStack_138 = puVar9;
    if (lVar35 == 0) {
      if (puVar29 != (undefined8 *)0x0) {
        FUN_109f65aa4(puVar29 + -6);
        FUN_109f65ae0(puVar29 + -6);
      }
LAB_109f2a9a0:
      uVar14 = 0xfffffff7;
    }
    else {
      bVar34 = false;
      do {
        func_0x000109f64f34(puStack_140,0);
        func_0x000109f64f34(puStack_138,0);
        plVar27 = *(long **)(lVar35 + 0x20);
        if (*plVar27 != 0) {
          bVar36 = 0;
          iVar13 = 0;
          do {
            iVar24 = iVar13;
            if ((int)plVar27[3] == 4) {
              iVar24 = iVar13 + 1;
              *(int *)(plVar27 + 4) = iVar13;
              iVar3 = (int)plVar27[5];
              iStack_130 = iVar13;
              if ((iVar3 == 0x54) || (iVar3 == 0x26f)) {
                uVar33 = *(ulong *)plVar27[0x13];
                if ((*(uint *)(uVar33 + 0x2c) >> 0x12 & 1) != 0) {
                  if ((*(uint *)(uVar33 + 0x2c) & 0xfffbffff) == 0) {
                    uVar30 = uVar33;
                    FUN_109ef9754();
                    if ((uVar30 & 1) == 0) {
                      uVar30 = *(ulong *)plVar27[0x17];
                      if (*(uint *)(plVar27 + 5) == 0x54) {
                        uStack_198 = *(uint *)(plVar27 + 4);
                        uVar31 = uVar30;
                        if (*(int *)(uVar30 + 0x18) != 1) goto LAB_109f2a468;
LAB_109f2a430:
                        if (((((*(uint *)(uVar31 + 0x2c) & 0xfffbfb78) != 0) ||
                             (uVar30 = uVar31, FUN_109ef9700(), (uVar30 & 1) != 0)) ||
                            (uVar30 = uVar31, FUN_109ef9754(), (uVar30 & 1) != 0)) ||
                           (uVar30 = uVar33, FUN_109ef9700(), (uVar30 & 1) != 0))
                        goto LAB_109f2a468;
                        lVar15 = *(long *)(uVar31 + 0x30);
                        if (*(byte *)(lVar15 + 0xd) < 2) {
                          if ((*(byte *)(lVar15 + 0xd) == 1) &&
                             ((*(byte *)(lVar15 + 4) & 0xf0) == 0)) goto LAB_109f2a918;
                          goto LAB_109f2a468;
                        }
                        if ((*(char *)(lVar15 + 0xe) != '\x01') ||
                           (0xb < (*(uint *)(lVar15 + 4) & 0xfc))) goto LAB_109f2a468;
LAB_109f2a918:
                        FUN_109ec688c();
                        lVar17 = *(long *)(uVar33 + 0x30);
                        FUN_109ec688c();
                        if (lVar15 != lVar17) goto LAB_109f2a468;
                      }
                      else {
                        if ((*(int *)(uVar30 + 0x18) == 4) && (*(int *)(uVar30 + 0x28) == 0x112)) {
                          uVar31 = **(ulong **)(uVar30 + 0x98);
                          uStack_198 = *(uint *)(uVar30 + 0x20);
                          if (*(int *)(uVar31 + 0x18) != 1) {
                            uVar31 = 0;
                          }
                        }
                        else {
                          uVar31 = 0;
                          uStack_198 = 0;
                        }
                        if ((-1 << (ulong)((uint)*(byte *)(*(long *)(uVar33 + 0x30) + 0xe) *
                                           (uint)*(byte *)(*(long *)(uVar33 + 0x30) + 0xd) & 0x1f) ^
                            *(uint *)((long)plVar27 +
                                     (ulong)(byte)(&UNK_110b671aa)
                                                  [(ulong)*(uint *)(plVar27 + 5) * 0x68] * 4 + 0x50)
                            ) == 0xffffffff && uVar31 != 0) goto LAB_109f2a430;
LAB_109f2a468:
                        uVar31 = 0;
                      }
                      uStack_128 = 3;
                      uVar14 = *(uint *)(plVar27 + 4);
                      plStack_120 = plVar27;
                      FUN_109ef9548(auStack_b8,uVar33,puStack_100);
                      lVar15 = *(long *)puStack_80;
                      if (lVar15 == 0) {
                        bVar28 = 0;
                      }
                      else {
                        iVar13 = 0;
                        puVar37 = puStack_80;
                        do {
                          if (*(int *)(lVar15 + 0x28) != 1) goto LAB_109f2a79c;
                          puVar10 = puStack_80;
                          FUN_109f2b024(puStack_80,iVar13,&puStack_140);
                          if (uVar31 == 0) {
LAB_109f2a790:
                            puVar10[0] = 0;
                            puVar10[1] = 0xffffffff;
                            puVar10[0x14] = 0;
                            puVar10[0x12] = 0xffffffff;
                          }
                          else {
                            uVar30 = *(ulong *)(**(long **)(*(long *)puVar37 + 0x70) + 0x48);
                            uVar16 = (uint)*(byte *)(**(long **)(*(long *)puVar37 + 0x70) + 0x45);
                            uVar16 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
                            uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
                            uVar16 = (uint)LZCOUNT((uVar16 >> 4 | (uVar16 & 0xf0f0f0f) << 4) << 0x18
                                                  );
                            uVar33 = uVar30 & 0xffffffff;
                            if (uVar16 != 5) {
                              uVar33 = uVar30;
                            }
                            uVar2 = uVar30 & 0xffff;
                            if (uVar16 != 4) {
                              uVar2 = uVar33;
                            }
                            uVar33 = uVar30 & 1;
                            if (uVar16 != 0) {
                              uVar33 = uVar30 & 0xff;
                            }
                            if (uVar16 < 4) {
                              uVar2 = uVar33;
                            }
                            if (uVar2 != *puVar10) goto LAB_109f2a790;
                            if (*puVar10 != 0) {
                              FUN_109ef9548(auStack_f8,uVar31,puStack_100);
                              plVar11 = plStack_c0;
                              plVar22 = *(long **)(puVar10 + 0x10);
                              lVar15 = *plVar22;
                              lVar17 = *plStack_c0;
                              if (lVar15 != 0 && lVar17 != 0) {
                                uVar33 = 0;
                                uVar16 = *puVar10;
                                lVar19 = *(long *)puVar37;
                                do {
                                  iVar3 = *(int *)(lVar15 + 0x28);
                                  if (iVar3 != *(int *)(lVar17 + 0x28)) goto LAB_109f2a748;
                                  if (iVar3 < 2) {
                                    if (iVar3 == 0) {
                                      if (*(long *)(lVar15 + 0x38) != *(long *)(lVar17 + 0x38))
                                      goto LAB_109f2a748;
                                    }
                                    else {
                                      plVar12 = *(long **)(lVar15 + 0x70);
                                      lVar20 = *plVar12;
                                      iVar3 = *(int *)(lVar20 + 0x18);
                                      if (iVar3 == 5) {
                                        uVar23 = (uint)*(undefined8 *)(lVar20 + 0x48);
                                        uVar7 = (*(byte *)(lVar20 + 0x45) & 0xaaaaaaaa) >> 1 |
                                                (*(byte *)(lVar20 + 0x45) & 0x55555555) << 1;
                                        uVar7 = (uVar7 & 0xcccccccc) >> 2 |
                                                (uVar7 & 0x33333333) << 2;
                                        uVar21 = (uint)LZCOUNT((uVar7 >> 4 |
                                                               (uVar7 & 0xf0f0f0f) << 4) << 0x18);
                                        uVar7 = uVar23 & 0xff;
                                        if (uVar21 != 3) {
                                          uVar7 = uVar23 & 0xffff;
                                        }
                                        uVar18 = uVar23 & 1;
                                        if (uVar21 != 0) {
                                          uVar18 = uVar7;
                                        }
                                        if (uVar21 < 5) {
                                          uVar23 = uVar18;
                                        }
                                      }
                                      else {
                                        uVar23 = 0;
                                      }
                                      plVar32 = *(long **)(lVar17 + 0x70);
                                      lVar17 = *plVar32;
                                      iVar4 = *(int *)(lVar17 + 0x18);
                                      if (iVar4 == 5) {
                                        uVar21 = (uint)*(undefined8 *)(lVar17 + 0x48);
                                        uVar7 = (*(byte *)(lVar17 + 0x45) & 0xaaaaaaaa) >> 1 |
                                                (*(byte *)(lVar17 + 0x45) & 0x55555555) << 1;
                                        uVar7 = (uVar7 & 0xcccccccc) >> 2 |
                                                (uVar7 & 0x33333333) << 2;
                                        uVar18 = (uint)LZCOUNT((uVar7 >> 4 |
                                                               (uVar7 & 0xf0f0f0f) << 4) << 0x18);
                                        uVar7 = uVar21 & 0xff;
                                        if (uVar18 != 3) {
                                          uVar7 = uVar21 & 0xffff;
                                        }
                                        uVar1 = uVar21 & 1;
                                        if (uVar18 != 0) {
                                          uVar1 = uVar7;
                                        }
                                        if (uVar18 < 5) {
                                          uVar21 = uVar1;
                                        }
                                      }
                                      else {
                                        uVar21 = 0;
                                      }
                                      uVar7 = puVar10[1];
                                      if ((((iVar3 == 5) && (0x7fffffff < uVar7 || uVar33 == uVar7))
                                          && (uVar23 == 0)) && (iVar4 == 5 && uVar21 == uVar16)) {
                                        iVar5 = (int)*(undefined8 *)
                                                      (**(long **)(lVar15 + 0x50) + 0x30);
                                        FUN_109eca23c();
                                        iVar6 = (int)*(undefined8 *)
                                                      (**(long **)(lVar19 + 0x50) + 0x30);
                                        FUN_109eca23c();
                                        if (iVar5 == iVar6) {
                                          puVar10[1] = (uint)uVar33;
                                          goto LAB_109f2a718;
                                        }
                                      }
                                      if ((uVar33 == uVar7) ||
                                         ((plVar12 != plVar32 &&
                                          ((iVar3 != 5 || iVar4 != 5) || uVar23 != uVar21))))
                                      goto LAB_109f2a748;
                                    }
                                  }
                                  else if ((iVar3 != 2) &&
                                          (*(int *)(lVar15 + 0x58) != *(int *)(lVar17 + 0x58)))
                                  goto LAB_109f2a748;
LAB_109f2a718:
                                  lVar15 = plVar22[uVar33 + 1];
                                  lVar17 = plVar11[uVar33 + 1];
                                  uVar33 = uVar33 + 1;
                                } while (lVar15 != 0 && lVar17 != 0);
                              }
                              if ((lVar15 == 0) == (lVar17 == 0)) {
                                uVar16 = puVar10[1];
                                FUN_109ef9640(auStack_f8);
                                if (0 < (int)uVar16) goto LAB_109f2a784;
                              }
                              else {
LAB_109f2a748:
                                FUN_109ef9640(auStack_f8);
                              }
                              goto LAB_109f2a790;
                            }
                            FUN_109ef9548(puVar10 + 2,uVar31,puStack_100);
LAB_109f2a784:
                            if (puVar10[0x14] < puVar10[0x13]) goto LAB_109f2a790;
                            puVar10[0x14] = uVar14;
                            uVar16 = *puVar10 + 1;
                            *puVar10 = uVar16;
                            uVar7 = puVar10[0x12];
                            if (uStack_198 <= puVar10[0x12]) {
                              uVar7 = uStack_198;
                            }
                            puVar10[0x12] = uVar7;
                            if (1 < uVar16) {
                              uVar7 = (uint)*(undefined8 *)(*(long *)(puVar37 + -2) + 0x30);
                              FUN_109eca23c();
                              if (uVar16 == uVar7) {
                                lVar15 = *(long *)(puVar10 + 0x10);
                                FUN_109f2b024(lVar15,puVar10[1],&puStack_140);
                                if (puVar10[0x12] < *(uint *)(lVar15 + 0x4c)) goto LAB_109f2a790;
                                puVar8 = &uStack_128;
                                FUN_109f2b0d8(puVar8,auStack_b8,iVar13);
                                puVar29 = &uStack_128;
                                FUN_109f2b0d8(puVar29,puVar10 + 2,puVar10[1]);
                                plVar11 = plStack_110;
                                FUN_109ecb0a8(plStack_110,0x54);
                                plVar11[0x10] = 0;
                                plVar11[0x11] = 0;
                                plVar11[0x12] = 0;
                                plVar11[0x13] = (long)(puVar8 + 0x10);
                                plVar11[0x14] = 0;
                                plVar11[0x15] = 0;
                                plVar11[0x16] = 0;
                                plVar11[0x17] = (long)(puVar29 + 0x10);
                                uVar14 = *(uint *)(plVar11 + 5);
                                *(undefined4 *)
                                 ((long)plVar11 +
                                 (ulong)(byte)(&UNK_110b671c8)[(ulong)uVar14 * 0x68] * 4 + 0x50) = 0
                                ;
                                *(undefined4 *)
                                 ((long)plVar11 +
                                 (ulong)(byte)(&UNK_110b671c9)[(ulong)uVar14 * 0x68] * 4 + 0x50) = 0
                                ;
                                FUN_109ecb4f0(uStack_128,plStack_120,plVar11);
                                uStack_128 = 3;
                                bVar28 = 1;
                                plStack_120 = plVar11;
                                goto LAB_109f2a8b8;
                              }
                            }
                          }
LAB_109f2a79c:
                          puVar37 = puVar37 + 2;
                          lVar15 = *(long *)puVar37;
                          iVar13 = iVar13 + 1;
                        } while (lVar15 != 0);
                        bVar28 = 0;
                      }
LAB_109f2a8b8:
                      FUN_109f2a9e0(auStack_b8,&puStack_140);
                      bVar36 = bVar36 | bVar28;
                    }
                  }
                  else {
                    FUN_109ef9548(auStack_b8,uVar33,puStack_100);
                    FUN_109f2a9e0(auStack_b8,&puStack_140);
                  }
                }
              }
              else if (iVar3 == 0x112) {
                uVar30 = *(ulong *)plVar27[0x13];
                uVar33 = uVar30;
                if (*(int *)(uVar30 + 0x18) != 1) {
                  uVar33 = 0;
                }
                uVar31 = uVar33;
                FUN_109ef9700();
                if ((((uVar31 & 1) == 0) && (FUN_109ef9754(), (uVar33 & 1) == 0)) &&
                   ((*(int *)(uVar30 + 0x28) != 1 ||
                    (((lVar15 = *(long *)(**(long **)(uVar30 + 0x50) + 0x30),
                      *(byte *)(lVar15 + 0xd) < 2 || (*(char *)(lVar15 + 0xe) != '\x01')) ||
                     (0xb < (*(uint *)(lVar15 + 4) & 0xfc))))))) {
                  FUN_109ef9548(auStack_b8,uVar30,puStack_100);
                  if (*(long *)puStack_80 != 0) {
                    lVar15 = *(long *)puStack_80;
                    lVar17 = 0;
                    puVar37 = puStack_80;
                    do {
                      lVar19 = lVar15;
                      puVar37 = puVar37 + 2;
                      FUN_109f2ac68(lVar19,lVar17,&puStack_140);
                      lVar15 = *(long *)puVar37;
                      lVar17 = lVar19;
                    } while (*(long *)puVar37 != 0);
                  }
                }
              }
            }
            plVar27 = (long *)*plVar27;
            iVar13 = iVar24;
          } while (*plVar27 != 0);
          bVar34 = (bool)(bVar36 | bVar34);
        }
        FUN_109ecc434();
      } while (lVar35 != 0);
      if (puStack_100 != (undefined8 *)0x0) {
        puVar8 = puStack_100 + -6;
        FUN_109f65aa4(puVar8);
        FUN_109f65ae0(puVar8);
      }
      if (!bVar34) goto LAB_109f2a9a0;
      uVar26 = 1;
      uVar14 = 3;
    }
    *(uint *)(lStack_1a8 + 0x84) = *(uint *)(lStack_1a8 + 0x84) & uVar14;
    plVar25 = (long *)*plVar25;
    plVar27 = (long *)*plVar25;
    while( true ) {
      if (plVar27 == (long *)0x0) {
        return uVar26;
      }
      lStack_1a8 = plVar25[6];
      if (lStack_1a8 != 0) break;
      plVar25 = plVar27;
      plVar27 = (long *)*plVar27;
    }
  } while( true );
}



/* Entry: 109f2a9e0; end: 109f2ac67;  */

void FUN_109f2a9e0(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)*param_2;
  if (*(int *)(**(long **)(param_1 + 0x38) + 0x28) == 0) {
    uVar6 = *(undefined8 *)(**(long **)(param_1 + 0x38) + 0x38);
    uVar1 = uVar6;
    (*(code *)plVar4[1])(uVar6);
    FUN_109f64fdc(plVar4,uVar1,uVar6);
    if (plVar4 != (long *)0x0) {
      FUN_109f2ae64(*(long *)(param_1 + 0x38) + 8,plVar4[2],param_2);
    }
    plVar4 = (long *)param_2[1];
    if (*(uint *)(plVar4 + 4) != 0) {
      lVar2 = (ulong)*(uint *)(plVar4 + 4) * 0x18;
      lVar3 = *plVar4;
      do {
        lVar5 = lVar3 + 0x18;
        if ((*(long *)(lVar3 + 8) != 0) && (*(long *)(lVar3 + 8) != plVar4[3])) {
          FUN_109f2afc0(*(undefined8 *)(lVar3 + 0x10),param_2);
          plVar4 = (long *)param_2[1];
          lVar2 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
          if (lVar5 == lVar2) {
            return;
          }
          do {
            lVar3 = lVar5 + 0x18;
            if ((*(long *)(lVar5 + 8) != 0) && (*(long *)(lVar5 + 8) != plVar4[3])) {
              FUN_109f2afc0(*(undefined8 *)(lVar5 + 0x10),param_2);
              plVar4 = (long *)param_2[1];
              lVar2 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
            }
            lVar5 = lVar3;
          } while (lVar3 != lVar2);
          return;
        }
        lVar2 = lVar2 + -0x18;
        lVar3 = lVar5;
      } while (lVar2 != 0);
    }
  }
  else {
    if (*(uint *)(plVar4 + 4) != 0) {
      lVar2 = (ulong)*(uint *)(plVar4 + 4) * 0x18;
      lVar3 = *plVar4;
      do {
        lVar5 = lVar3 + 0x18;
        if ((*(long *)(lVar3 + 8) != 0) && (*(long *)(lVar3 + 8) != plVar4[3])) {
          FUN_109f2afc0(*(undefined8 *)(lVar3 + 0x10),param_2);
          plVar4 = (long *)*param_2;
          lVar2 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
          if (lVar5 != lVar2) {
            do {
              lVar3 = lVar5 + 0x18;
              if ((*(long *)(lVar5 + 8) != 0) && (*(long *)(lVar5 + 8) != plVar4[3])) {
                FUN_109f2afc0(*(undefined8 *)(lVar5 + 0x10),param_2);
                plVar4 = (long *)*param_2;
                lVar2 = *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18;
              }
              lVar5 = lVar3;
            } while (lVar3 != lVar2);
          }
          break;
        }
        lVar2 = lVar2 + -0x18;
        lVar3 = lVar5;
      } while (lVar2 != 0);
    }
    plVar4 = (long *)param_2[1];
    if (*(uint *)(plVar4 + 4) != 0) {
      lVar2 = *plVar4;
      lVar3 = (ulong)*(uint *)(plVar4 + 4) * 0x18;
      do {
        lVar5 = *(long *)(lVar2 + 8);
        if ((lVar5 != 0) && (lVar5 != plVar4[3])) {
          do {
            if (lVar5 == **(long **)(param_1 + 0x38)) {
              FUN_109f2ae64(*(long **)(param_1 + 0x38) + 1,*(undefined8 *)(lVar2 + 0x10),param_2);
            }
            else {
              FUN_109f2afc0(*(undefined8 *)(lVar2 + 0x10),param_2);
            }
            plVar4 = (long *)param_2[1];
            lVar3 = lVar2;
            do {
              lVar2 = lVar3 + 0x18;
              if (lVar2 == *plVar4 + (ulong)*(uint *)(plVar4 + 4) * 0x18) {
                return;
              }
              lVar5 = *(long *)(lVar3 + 0x20);
              lVar3 = lVar2;
            } while ((lVar5 == 0) || (lVar5 == plVar4[3]));
          } while( true );
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 109f2ac68; end: 109f2addf;  */

long FUN_109f2ac68(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar9 = *param_3;
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = uVar10;
      (**(code **)(lVar9 + 8))(uVar10);
      FUN_109f64fdc(lVar9,uVar4,uVar10);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x30);
        FUN_109f2ade0(lVar9,param_3);
        lVar8 = *param_3;
        param_1 = *(long *)(param_1 + 0x38);
LAB_109f2ada8:
        lVar5 = param_1;
        (**(code **)(lVar8 + 8))(param_1);
        func_0x000109f650c0(lVar8,lVar5,param_1,lVar9);
        return lVar9;
      }
LAB_109f2ad14:
      return *(long *)(lVar9 + 0x10);
    }
    lVar9 = **(long **)(param_1 + 0x70);
    if (*(int *)(lVar9 + 0x18) == 5) {
      uVar6 = *(ulong *)(lVar9 + 0x48);
      uVar7 = (*(byte *)(lVar9 + 0x45) & 0xaaaaaaaa) >> 1 |
              (*(byte *)(lVar9 + 0x45) & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uint)LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
      uVar1 = uVar6 & 0xff;
      if (uVar7 != 3) {
        uVar1 = uVar6 & 0xffff;
      }
      uVar2 = uVar6 & 1;
      if (uVar7 != 0) {
        uVar2 = uVar1;
      }
      if (uVar7 < 5) {
        uVar6 = uVar2;
      }
      goto LAB_109f2ad70;
    }
  }
  else if (iVar3 != 2) {
    if (iVar3 != 4) {
      lVar9 = param_3[1];
      lVar8 = param_1;
      (**(code **)(lVar9 + 8))(param_1);
      FUN_109f64fdc(lVar9,lVar8,param_1);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x30);
        FUN_109f2ade0(lVar9,param_3);
        lVar8 = param_3[1];
        goto LAB_109f2ada8;
      }
      goto LAB_109f2ad14;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0x58);
    goto LAB_109f2ad70;
  }
  uVar6 = (ulong)(*(int *)(param_2 + 0x54) - 1);
LAB_109f2ad70:
  lVar9 = *(long *)(param_2 + 0x58 + (uVar6 & 0xffffffff) * 8);
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 0x30);
    FUN_109f2ade0(lVar9,param_3);
    *(long *)(param_2 + 0x58 + (uVar6 & 0xffffffff) * 8) = lVar9;
  }
  return lVar9;
}



/* Entry: 109f2ade0; end: 109f2ae63;  */

void FUN_109f2ade0(ulong param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 == 0x13) || (1 < *(byte *)(param_1 + 0xe) && bVar1 - 2 < 3)) {
    FUN_109eca23c();
    param_1 = (ulong)((int)param_1 + 1);
  }
  else if (bVar1 - 0x11 < 2) {
    FUN_109eca23c();
  }
  else {
    param_1 = 0;
  }
  lVar2 = *(long *)(param_2 + 0x40);
  func_0x000109f6590c(lVar2,(param_1 & 0xffffffff) * 8 + 0x58);
  *(int *)(lVar2 + 0x54) = (int)param_1;
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 109f2ae64; end: 109f2afbf;  */

void FUN_109f2ae64(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  
  lVar4 = *param_1;
  do {
    if (lVar4 == 0) {
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_3 + 0x10);
      return;
    }
    plVar8 = param_1 + 1;
    iVar2 = *(int *)(lVar4 + 0x28);
    if (iVar2 < 4) {
      if ((iVar2 != 1) || (lVar4 = **(long **)(lVar4 + 0x70), *(int *)(lVar4 + 0x18) != 5)) {
        uVar6 = (ulong)*(uint *)(param_2 + 0x54);
        if (*(uint *)(param_2 + 0x54) == 0) {
          return;
        }
        uVar5 = 0;
        do {
          lVar4 = *(long *)(param_2 + 0x58 + uVar5 * 8);
          if (lVar4 != 0) {
            FUN_109f2ae64(plVar8,lVar4,param_3);
            uVar6 = (ulong)*(uint *)(param_2 + 0x54);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
        return;
      }
      lVar3 = *(long *)(param_2 + 0x58 + (ulong)(*(int *)(param_2 + 0x54) - 1) * 8);
      if (lVar3 != 0) {
        FUN_109f2ae64(plVar8,lVar3,param_3);
        lVar4 = **(long **)(*param_1 + 0x70);
      }
      uVar5 = (ulong)*(uint *)(lVar4 + 0x48);
      uVar7 = (*(byte *)(lVar4 + 0x45) & 0xaaaaaaaa) >> 1 |
              (*(byte *)(lVar4 + 0x45) & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uint)LZCOUNT((uVar7 >> 4 | (uVar7 & 0xf0f0f0f) << 4) << 0x18);
      uVar6 = uVar5 & 0xff;
      if (uVar7 != 3) {
        uVar6 = uVar5 & 0xffff;
      }
      uVar1 = uVar5 & 1;
      if (uVar7 != 0) {
        uVar1 = uVar6;
      }
      if (uVar7 < 5) {
        uVar5 = uVar1;
      }
      if (*(int *)(param_2 + 0x54) - 1U <= (uint)uVar5) {
        return;
      }
      param_2 = *(long *)(param_2 + 0x58 + uVar5 * 8);
    }
    else {
      if (iVar2 != 4) {
        uVar6 = (ulong)*(uint *)(param_2 + 0x54);
        if (*(uint *)(param_2 + 0x54) == 0) {
          *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_3 + 0x10);
        }
        else {
          uVar5 = 0;
          do {
            lVar4 = *(long *)(param_2 + 0x58 + uVar5 * 8);
            if (lVar4 != 0) {
              FUN_109f2afc0(lVar4,param_3);
              uVar6 = (ulong)*(uint *)(param_2 + 0x54);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        return;
      }
      param_2 = *(long *)(param_2 + (ulong)*(uint *)(lVar4 + 0x58) * 8 + 0x58);
    }
    if (param_2 == 0) {
      return;
    }
    lVar4 = *plVar8;
    param_1 = plVar8;
  } while( true );
}



/* Entry: 109f2afc0; end: 109f2b023;  */

void FUN_109f2afc0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x54);
  if (*(uint *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x58 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_109f2afc0(lVar1,param_2);
        uVar2 = (ulong)*(uint *)(param_1 + 0x54);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}



/* Entry: 109f2b024; end: 109f2b0d7;  */

ulong FUN_109f2b024(ulong *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if (param_2 == 0) {
        uVar4 = *(ulong *)(param_1[-1] + 0x30);
        uVar2 = uVar4;
        FUN_109eca23c();
        lVar1 = uVar3 + 0x58;
        uVar3 = *(ulong *)(lVar1 + (uVar2 & 0xffffffff) * 8);
        if (uVar3 == 0) {
          func_0x000109eca118();
          FUN_109f2ade0();
          *(ulong *)(lVar1 + (uVar2 & 0xffffffff) * 8) = uVar4;
          uVar3 = uVar4;
        }
      }
      else {
        FUN_109f2ac68(uVar2,uVar3,param_3);
        uVar3 = uVar2;
      }
      uVar2 = param_1[1];
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return uVar3;
}



/* Entry: 109f2b0d8; end: 109f2b45f;  */

undefined8 * FUN_109f2b0d8(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_3 - 1) * 8);
  puVar6 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar6,0xa0,8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
  }
  *(undefined4 *)(puVar6 + 3) = 1;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6[10] = 0;
  uVar2 = *(undefined4 *)(lVar9 + 0x2c);
  *(undefined4 *)(puVar6 + 5) = 2;
  *(undefined4 *)((long)puVar6 + 0x2c) = uVar2;
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  func_0x000109eca118();
  puVar6[6] = uVar7;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = lVar9 + 0x80;
  FUN_109ecb048(puVar6,puVar6 + 0x10,*(undefined1 *)(lVar9 + 0x9c),*(undefined1 *)(lVar9 + 0x9d));
  FUN_109ecb4f0(*param_1,param_1[1],puVar6);
  *param_1 = 3;
  param_1[1] = puVar6;
  lVar9 = *(long *)(param_2 + 0x38);
  puVar10 = *(undefined8 **)(lVar9 + (ulong)(param_3 + 1) * 8);
  if (puVar10 != (undefined8 *)0x0) {
    uVar11 = param_3 + 2;
    do {
      puVar1 = puVar6 + 0x10;
      if ((undefined8 *)puVar10[10] != puVar1) {
        iVar3 = *(int *)(puVar10 + 5);
        if (iVar3 < 3) {
          if (iVar3 == 1) {
            puVar8 = param_1;
            FUN_109ece954(param_1,puVar10[0xe],2,*(byte *)((long)puVar6 + 0x9d) | 2,0);
            puVar10 = (undefined8 *)param_1[3];
            func_0x000109ecaf70(puVar10,1);
            *(undefined4 *)((long)puVar10 + 0x2c) = *(undefined4 *)((long)puVar6 + 0x2c);
            uVar7 = puVar6[6];
            func_0x000109eca118();
            puVar10[6] = uVar7;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[10] = puVar1;
            puVar10[0xb] = 0;
            puVar10[0xc] = 0;
            puVar10[0xd] = 0;
            puVar10[0xe] = puVar8;
          }
          else {
            puVar10 = *(undefined8 **)param_1[3];
            FUN_109f6600c(puVar10,0xa0,8);
            if (puVar10 != (undefined8 *)0x0) {
              puVar10[0x11] = 0;
              puVar10[0x10] = 0;
              puVar10[0x13] = 0;
              puVar10[0x12] = 0;
              puVar10[0xd] = 0;
              puVar10[0xc] = 0;
              puVar10[0xf] = 0;
              puVar10[0xe] = 0;
              puVar10[9] = 0;
              puVar10[8] = 0;
              puVar10[0xb] = 0;
              puVar10[10] = 0;
              puVar10[5] = 0;
              puVar10[4] = 0;
              puVar10[7] = 0;
              puVar10[6] = 0;
              puVar10[1] = 0;
              *puVar10 = 0;
              puVar10[3] = 0;
              puVar10[2] = 0;
            }
            *(undefined4 *)(puVar10 + 3) = 1;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            puVar10[10] = 0;
            uVar2 = *(undefined4 *)((long)puVar6 + 0x2c);
            *(undefined4 *)(puVar10 + 5) = 2;
            *(undefined4 *)((long)puVar10 + 0x2c) = uVar2;
            uVar7 = puVar6[6];
            func_0x000109eca118();
            puVar10[6] = uVar7;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[9] = 0;
            puVar10[10] = puVar1;
          }
        }
        else if (iVar3 == 3) {
          puVar8 = param_1;
          FUN_109ece954(param_1,puVar10[0xe],2,*(byte *)((long)puVar6 + 0x9d) | 2,0);
          puVar10 = (undefined8 *)param_1[3];
          func_0x000109ecaf70(puVar10,3);
          *(undefined4 *)((long)puVar10 + 0x2c) = *(undefined4 *)((long)puVar6 + 0x2c);
          uVar7 = puVar6[6];
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[6] = uVar7;
          puVar10[7] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[10] = puVar1;
          puVar10[0xb] = 0;
          puVar10[0xe] = puVar8;
        }
        else if (iVar3 == 4) {
          uVar4 = *(uint *)(puVar10 + 0xb);
          puVar10 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar10,0xa0,8);
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[0x11] = 0;
            puVar10[0x10] = 0;
            puVar10[0x13] = 0;
            puVar10[0x12] = 0;
            puVar10[0xd] = 0;
            puVar10[0xc] = 0;
            puVar10[0xf] = 0;
            puVar10[0xe] = 0;
            puVar10[9] = 0;
            puVar10[8] = 0;
            puVar10[0xb] = 0;
            puVar10[10] = 0;
            puVar10[5] = 0;
            puVar10[4] = 0;
            puVar10[7] = 0;
            puVar10[6] = 0;
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
          }
          *(undefined4 *)(puVar10 + 3) = 1;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          puVar10[10] = 0;
          uVar2 = *(undefined4 *)((long)puVar6 + 0x2c);
          *(undefined4 *)(puVar10 + 5) = 4;
          *(undefined4 *)((long)puVar10 + 0x2c) = uVar2;
          puVar10[6] = *(undefined8 *)(*(long *)(puVar6[6] + 0x30) + (ulong)uVar4 * 0x30);
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[10] = puVar1;
          *(uint *)(puVar10 + 0xb) = uVar4;
        }
        else {
          uVar2 = *(undefined4 *)((long)puVar10 + 0x2c);
          uVar7 = puVar10[6];
          uVar12 = puVar10[0xb];
          uVar5 = *(undefined4 *)(puVar10 + 0xc);
          puVar10 = *(undefined8 **)param_1[3];
          FUN_109f6600c(puVar10,0xa0,8);
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[0x11] = 0;
            puVar10[0x10] = 0;
            puVar10[0x13] = 0;
            puVar10[0x12] = 0;
            puVar10[0xd] = 0;
            puVar10[0xc] = 0;
            puVar10[0xf] = 0;
            puVar10[0xe] = 0;
            puVar10[9] = 0;
            puVar10[8] = 0;
            puVar10[0xb] = 0;
            puVar10[10] = 0;
            puVar10[5] = 0;
            puVar10[4] = 0;
            puVar10[7] = 0;
            puVar10[6] = 0;
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
          }
          *(undefined4 *)(puVar10 + 3) = 1;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 5) = 5;
          *(undefined4 *)((long)puVar10 + 0x2c) = uVar2;
          puVar10[6] = uVar7;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[10] = puVar1;
          *(undefined4 *)(puVar10 + 0xc) = uVar5;
          puVar10[0xb] = uVar12;
        }
        FUN_109ecb048();
        FUN_109ecb4f0(*param_1,param_1[1],puVar10);
        *param_1 = 3;
        param_1[1] = puVar10;
        lVar9 = *(long *)(param_2 + 0x38);
      }
      puVar6 = puVar10;
      puVar10 = *(undefined8 **)(lVar9 + (ulong)uVar11 * 8);
      uVar11 = uVar11 + 1;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return puVar6;
}



/* Entry: 109f2b460; end: 109f2b577;  */

undefined8 * FUN_109f2b460(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar7 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar5 = plVar7[6];
    if (lVar5 != 0) break;
    plVar7 = plVar1;
    plVar1 = (long *)*plVar1;
  }
  do {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_50 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18);
    uStack_58 = 0;
    lStack_48 = lVar5;
    FUN_109f204b8(lVar5,3);
    puVar6 = &uStack_68;
    FUN_109f2b578(puVar6,lVar5 + 0x30,param_2);
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 3;
    puVar3 = &uStack_68;
    func_0x000109f2c1c8(puVar3,lVar5 + 0x30,param_2);
    iVar2 = (int)lVar5 + 0x30;
    func_0x000109f2cea8();
    if (iVar2 == 0) {
      if ((int)puVar3 != 0) goto LAB_109f2b54c;
      uVar4 = 0;
    }
    else {
      FUN_109f1cb18(lVar5);
LAB_109f2b54c:
      puVar6 = (undefined8 *)0x1;
      uVar4 = 0xfffffff7;
    }
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & uVar4;
    plVar7 = (long *)*plVar7;
    plVar1 = (long *)*plVar7;
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return puVar6;
      }
      lVar5 = plVar7[6];
      if (lVar5 != 0) break;
      plVar7 = plVar1;
      plVar1 = (long *)*plVar1;
    }
  } while( true );
}



/* Entry: 109f2b578; end: 109f2d66f;  */

/* WARNING: Possible PIC construction at 0x000109f2c228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f2c29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f2c22c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c528) */
/* WARNING: Removing unreachable block (ram,0x000109f2c250) */
/* WARNING: Removing unreachable block (ram,0x000109f2c260) */
/* WARNING: Removing unreachable block (ram,0x000109f2c268) */
/* WARNING: Removing unreachable block (ram,0x000109f2c274) */
/* WARNING: Removing unreachable block (ram,0x000109f2c890) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca14) */
/* WARNING: Removing unreachable block (ram,0x000109f2c8a0) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca18) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca28) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca38) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca50) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca48) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca54) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca64) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca74) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca90) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca88) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca94) */
/* WARNING: Removing unreachable block (ram,0x000109f2caa4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cab4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cad4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cacc) */
/* WARNING: Removing unreachable block (ram,0x000109f2cad8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cae8) */
/* WARNING: Removing unreachable block (ram,0x000109f2caf8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb10) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb20) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb3c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb40) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb50) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb60) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb74) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb84) */
/* WARNING: Removing unreachable block (ram,0x000109f2cb98) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbac) */
/* WARNING: Removing unreachable block (ram,0x000109f2cba4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbb0) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbc4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbc8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbd8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbec) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbe4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbfc) */
/* WARNING: Removing unreachable block (ram,0x000109f2cbf4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc04) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc18) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc20) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc34) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc58) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc5c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc6c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc78) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc80) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc40) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc48) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc4c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cc54) */
/* WARNING: Removing unreachable block (ram,0x000109f2cca8) */
/* WARNING: Removing unreachable block (ram,0x000109f2ccb0) */
/* WARNING: Removing unreachable block (ram,0x000109f2ccbc) */
/* WARNING: Removing unreachable block (ram,0x000109f2cccc) */
/* WARNING: Removing unreachable block (ram,0x000109f2ccd8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd14) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd0c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd18) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd30) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd28) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd34) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd4c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd44) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd50) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd64) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd5c) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd68) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd84) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd90) */
/* WARNING: Removing unreachable block (ram,0x000109f2cd98) */
/* WARNING: Removing unreachable block (ram,0x000109f2cda0) */
/* WARNING: Removing unreachable block (ram,0x000109f2cda4) */
/* WARNING: Removing unreachable block (ram,0x000109f2cdcc) */
/* WARNING: Removing unreachable block (ram,0x000109f2cdd8) */
/* WARNING: Removing unreachable block (ram,0x000109f2cde0) */
/* WARNING: Removing unreachable block (ram,0x000109f2cde4) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce10) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce40) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce18) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce28) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce34) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce4c) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce5c) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce78) */
/* WARNING: Removing unreachable block (ram,0x000109f2ce64) */
/* WARNING: Removing unreachable block (ram,0x000109f2c284) */
/* WARNING: Removing unreachable block (ram,0x000109f2c288) */
/* WARNING: Removing unreachable block (ram,0x000109f2c52c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c540) */
/* WARNING: Removing unreachable block (ram,0x000109f2c544) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5f8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c60c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c610) */
/* WARNING: Removing unreachable block (ram,0x000109f2c624) */
/* WARNING: Removing unreachable block (ram,0x000109f2c66c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c67c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c62c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c8a8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c638) */
/* WARNING: Removing unreachable block (ram,0x000109f2c64c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c654) */
/* WARNING: Removing unreachable block (ram,0x000109f2c680) */
/* WARNING: Removing unreachable block (ram,0x000109f2c660) */
/* WARNING: Removing unreachable block (ram,0x000109f2c8ac) */
/* WARNING: Removing unreachable block (ram,0x000109f2c900) */
/* WARNING: Removing unreachable block (ram,0x000109f2c8f8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c904) */
/* WARNING: Removing unreachable block (ram,0x000109f2c918) */
/* WARNING: Removing unreachable block (ram,0x000109f2c910) */
/* WARNING: Removing unreachable block (ram,0x000109f2c91c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c92c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c93c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c948) */
/* WARNING: Removing unreachable block (ram,0x000109f2c950) */
/* WARNING: Removing unreachable block (ram,0x000109f2c990) */
/* WARNING: Removing unreachable block (ram,0x000109f2c978) */
/* WARNING: Removing unreachable block (ram,0x000109f2c984) */
/* WARNING: Removing unreachable block (ram,0x000109f2c998) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9ac) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9a4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9b0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9d0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9b8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9c8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9d4) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca00) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9e8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c9f4) */
/* WARNING: Removing unreachable block (ram,0x000109f2ca04) */
/* WARNING: Removing unreachable block (ram,0x000109f2c558) */
/* WARNING: Removing unreachable block (ram,0x000109f2c55c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c570) */
/* WARNING: Removing unreachable block (ram,0x000109f2c590) */
/* WARNING: Removing unreachable block (ram,0x000109f2c580) */
/* WARNING: Removing unreachable block (ram,0x000109f2c594) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5a4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5c8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5b0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c688) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5b8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5c0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c68c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c694) */
/* WARNING: Removing unreachable block (ram,0x000109f2c6a8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c6b4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c6c0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c6d0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c6f4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c714) */
/* WARNING: Removing unreachable block (ram,0x000109f2c71c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c72c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c734) */
/* WARNING: Removing unreachable block (ram,0x000109f2c77c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c740) */
/* WARNING: Removing unreachable block (ram,0x000109f2c74c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c754) */
/* WARNING: Removing unreachable block (ram,0x000109f2c764) */
/* WARNING: Removing unreachable block (ram,0x000109f2c76c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c774) */
/* WARNING: Removing unreachable block (ram,0x000109f2c780) */
/* WARNING: Removing unreachable block (ram,0x000109f2c784) */
/* WARNING: Removing unreachable block (ram,0x000109f2c788) */
/* WARNING: Removing unreachable block (ram,0x000109f2c794) */
/* WARNING: Removing unreachable block (ram,0x000109f2c798) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7a4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7d8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7e4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7ac) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7b8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7e8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7c0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7cc) */
/* WARNING: Removing unreachable block (ram,0x000109f2c7f0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c804) */
/* WARNING: Removing unreachable block (ram,0x000109f2c880) */
/* WARNING: Removing unreachable block (ram,0x000109f2c88c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c814) */
/* WARNING: Removing unreachable block (ram,0x000109f2c81c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c850) */
/* WARNING: Removing unreachable block (ram,0x000109f2c854) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5cc) */
/* WARNING: Removing unreachable block (ram,0x000109f2c858) */
/* WARNING: Removing unreachable block (ram,0x000109f2c86c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c874) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2a0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2b0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2c0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c520) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2d4) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5d8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2e0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2f0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c2f8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c300) */
/* WARNING: Removing unreachable block (ram,0x000109f2c314) */
/* WARNING: Removing unreachable block (ram,0x000109f2c334) */
/* WARNING: Removing unreachable block (ram,0x000109f2c350) */
/* WARNING: Removing unreachable block (ram,0x000109f2c354) */
/* WARNING: Removing unreachable block (ram,0x000109f2c344) */
/* WARNING: Removing unreachable block (ram,0x000109f2c348) */
/* WARNING: Removing unreachable block (ram,0x000109f2c358) */
/* WARNING: Removing unreachable block (ram,0x000109f2c3b8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c3cc) */
/* WARNING: Removing unreachable block (ram,0x000109f2c3e8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c41c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c404) */
/* WARNING: Removing unreachable block (ram,0x000109f2c408) */
/* WARNING: Removing unreachable block (ram,0x000109f2c418) */
/* WARNING: Removing unreachable block (ram,0x000109f2c420) */
/* WARNING: Removing unreachable block (ram,0x000109f2c47c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c454) */
/* WARNING: Removing unreachable block (ram,0x000109f2c488) */
/* WARNING: Removing unreachable block (ram,0x000109f2c464) */
/* WARNING: Removing unreachable block (ram,0x000109f2c470) */
/* WARNING: Removing unreachable block (ram,0x000109f2c48c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c4b8) */
/* WARNING: Removing unreachable block (ram,0x000109f2c4bc) */
/* WARNING: Removing unreachable block (ram,0x000109f2c4f0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c508) */
/* WARNING: Removing unreachable block (ram,0x000109f2c588) */
/* WARNING: Removing unreachable block (ram,0x000109f2c5e0) */
/* WARNING: Removing unreachable block (ram,0x000109f2c50c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c51c) */
/* WARNING: Removing unreachable block (ram,0x000109f2c3c4) */

uint FUN_109f2b578(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  bool bVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *unaff_x20;
  ulong uVar20;
  ulong *unaff_x21;
  bool bVar21;
  ulong *puVar22;
  ulong *unaff_x23;
  ulong *puVar23;
  ulong *unaff_x24;
  ulong *puVar24;
  ulong *unaff_x25;
  undefined **unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  undefined1 *puVar25;
  undefined8 uVar26;
  undefined1 auStack_1a0 [8];
  ulong *puStack_198;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  ulong *puStack_140;
  byte bStack_131;
  ulong auStack_130 [16];
  ulong auStack_b0 [8];
  long lStack_70;
  
  puVar25 = &stack0xfffffffffffffff0;
  uStack_184 = (uint)param_3;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (ulong *)*param_2;
  puStack_140 = param_1;
  if (*puVar22 == 0) {
    puVar18 = (ulong *)0x0;
  }
  else {
    puVar18 = (ulong *)0x0;
    puVar15 = unaff_x25;
    do {
      puVar24 = puStack_140;
      uVar4 = uStack_184;
      if ((int)puVar22[2] == 2) {
        unaff_x23 = auStack_130;
        param_2 = puVar22 + 4;
        param_3 = (ulong *)(ulong)uStack_184;
        unaff_x20 = puStack_140;
        FUN_109f2b578();
        puVar19 = (ulong *)puVar22[4];
        puVar24 = (ulong *)0x0;
        if (puVar19 != puVar22 + 6) {
          puVar24 = puVar19;
        }
        unaff_x24 = (ulong *)puVar22[1];
        puVar6 = (ulong *)0x0;
        if (unaff_x24[1] != 0) {
          puVar6 = unaff_x24;
        }
        param_1 = unaff_x20;
        if (((*(int *)(puVar19[0xb] + 0x40) == 2) &&
            (unaff_x25 = puVar22, FUN_109f2dabc(), param_1 = unaff_x25, unaff_x25 != puVar24)) &&
           (func_0x000109ecdd80(), puVar15 = unaff_x25, (int)param_1 != 0)) {
          puVar15 = *(ulong **)puVar24[4];
          if (puVar15 == (ulong *)0x0) {
            unaff_x21 = (ulong *)0x0;
          }
          else {
            uStack_14c = (uint)unaff_x20;
            unaff_x21 = (ulong *)0x0;
            puVar23 = (ulong *)0x0;
            if (*puVar15 != 0) {
              puVar23 = puVar15;
            }
            puStack_160 = unaff_x25 + 6;
            puVar15 = (ulong *)puVar24[4];
            puStack_158 = unaff_x25;
            uStack_148 = puVar24;
LAB_109f2ba58:
            puVar24 = puVar23;
            if ((((int)puVar15[3] == 0) && (uVar4 = (uint)puVar15[5], 5 < uVar4 - 0x1c4)) &&
               ((uVar4 != 0x154 &&
                (param_1 = puVar15, func_0x000109ecd73c(), ((ulong)param_1 & 1) == 0)))) {
              lVar13 = (ulong)uVar4 * 0x68;
              if ((&UNK_110b78540)[lVar13] == '\x01') {
                if ((*(int *)(&UNK_110b78544 + lVar13) == *(int *)(&UNK_110b78558 + lVar13)) &&
                   (((uStack_184 >> 1 & 1) == 0 || (*(char *)((long)puVar15 + 0x4d) != '@')))) {
LAB_109f2bb14:
                  uVar7 = 0;
                  bVar16 = false;
                  param_3 = puVar15 + 6;
                  bVar2 = true;
                  bVar21 = true;
                  do {
                    plVar17 = (long *)puVar15[uVar7 * 6 + 0xd];
                    lVar13 = *plVar17;
                    puVar23 = *(ulong **)(lVar13 + 0x10);
                    if (*(int *)(lVar13 + 0x18) == 8 && puVar23 == uStack_148) {
                      unaff_x23[uVar7] = 0;
                      auStack_b0[uVar7] = 0;
                      puVar23 = *(ulong **)(lVar13 + 0x28);
                      while (param_1 = (ulong *)*puVar23, param_1 != (ulong *)0x0) {
                        param_2 = (ulong *)puVar23[2];
                        puVar14 = auStack_b0 + uVar7;
                        if (param_2 == puVar6) {
                          iVar1 = *(int *)(*(long *)puVar23[6] + 0x18);
                          bVar2 = (bool)(iVar1 == 7 & bVar2);
                          bVar21 = (bool)(iVar1 == 5 & bVar21);
                          bVar16 = true;
                          puVar14 = unaff_x23 + uVar7;
                        }
                        *puVar14 = puVar23[6];
                        puVar23 = param_1;
                      }
                    }
                    else {
                      if (((uint)unaff_x24[0x10] < (uint)puVar23[0x10]) ||
                         (*(uint *)((long)puVar23 + 0x84) < *(uint *)((long)unaff_x24 + 0x84)))
                      goto LAB_109f2ba7c;
                      unaff_x23[uVar7] = (ulong)plVar17;
                      auStack_b0[uVar7] = (ulong)plVar17;
                    }
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < (byte)(&UNK_110b78540)[(ulong)uVar4 * 0x68]);
                  if (bVar16) {
                    if (bVar2 || bVar21) {
LAB_109f2bc20:
                      *puStack_140 = 1;
                      puStack_140[1] = (ulong)puVar6;
                      puVar12 = puStack_140;
                      puStack_168 = param_3;
                      FUN_109f2d6e0(puStack_140,puVar15,auStack_130);
                      puVar14 = puStack_140;
                      puVar23 = puStack_158;
                      if ((((ulong *)puStack_158[4] == puStack_160) ||
                          (puVar11 = (ulong *)puStack_158[7], puVar11 == (ulong *)0x0)) ||
                         ((int)puVar11[3] != 6)) {
                        uVar7 = 1;
                        puVar11 = puStack_158;
                      }
                      else {
                        uVar7 = 2;
                      }
                      *puStack_140 = uVar7;
                      puStack_140[1] = (ulong)puVar11;
                      puVar11 = puStack_140;
                      puStack_178 = puVar12;
                      FUN_109f2d6e0(puStack_140,puVar15,auStack_b0);
                      puVar14 = *(ulong **)puVar14[3];
                      puStack_180 = puVar11;
                      FUN_109f6600c(puVar14,0x68,8);
                      *(undefined4 *)(puVar14 + 3) = 8;
                      puVar14[1] = 0;
                      puVar14[2] = 0;
                      puVar14[7] = 0;
                      *puVar14 = 0;
                      puVar14[5] = (ulong)(puVar14 + 7);
                      puVar14[6] = 0;
                      puVar14[8] = (ulong)(puVar14 + 5);
                      FUN_109ecb354();
                      puVar12 = puStack_180;
                      FUN_109ecb354(puVar14,puVar23,puStack_180);
                      FUN_109ecb048(puVar14,puVar14 + 9,*(undefined1 *)((long)puVar12 + 0x1c),
                                    *(undefined1 *)((long)puVar12 + 0x1d));
                      puVar23 = puStack_140;
                      puVar12 = *(ulong **)uStack_148[4];
                      param_2 = (ulong *)uStack_148[4];
                      if (puVar12 == (ulong *)0x0) {
                        uVar7 = 1;
                        param_2 = puVar19;
                      }
                      else {
                        do {
                          if ((int)param_2[3] != 8) {
                            uVar7 = 2;
                            goto LAB_109f2bda0;
                          }
                          puVar11 = (ulong *)*puVar12;
                          param_2 = puVar12;
                          puVar12 = puVar11;
                        } while (puVar11 != (ulong *)0x0);
                        uVar7 = 1;
                        param_2 = uStack_148;
                      }
LAB_109f2bda0:
                      *puStack_140 = uVar7;
                      puStack_140[1] = (ulong)param_2;
                      param_3 = puVar14;
                      puStack_178 = puVar14 + 9;
                      FUN_109ecb4f0();
                      *puVar23 = 3;
                      puVar23[1] = (ulong)puVar14;
                      if ((ulong *)puVar15[8] + -1 != puStack_168) {
                        puVar14 = puVar14 + 10;
                        puVar23 = (ulong *)puVar15[8];
                        do {
                          uVar7 = *puVar23;
                          puVar12 = (ulong *)puVar23[1];
                          *(ulong **)(uVar7 + 8) = puVar12;
                          *puVar12 = uVar7;
                          puVar23[1] = (ulong)puVar14;
                          puVar23[2] = (ulong)puStack_178;
                          *puVar23 = 0;
                          uVar7 = *puVar14;
                          *puVar23 = uVar7;
                          *(ulong **)(uVar7 + 8) = puVar23;
                          *puVar14 = (ulong)puVar23;
                          puVar23 = puVar12;
                        } while (puVar12 + -1 != puStack_168);
                      }
                      FUN_109ecb9c0(puVar15);
                      FUN_109ecbc58();
                      unaff_x21 = (ulong *)0x1;
                      param_1 = puVar15;
                    }
                    else {
                      puVar23 = (ulong *)puVar15[8];
                      if ((((puVar23 != (ulong *)0x0) && (puVar23 != puVar15 + 7)) &&
                          ((ulong *)puVar23[1] == puVar15 + 7)) &&
                         (param_1 = (ulong *)puVar23[-1], ((ulong)param_1 & 1) == 0)) {
                        param_2 = (ulong *)0x1;
                        FUN_109f2db30();
                        if ((int)param_1 != 0) goto LAB_109f2bc20;
                      }
                    }
                  }
                }
              }
              else if ((((uStack_184 >> 1 & 1) == 0) || (*(char *)((long)puVar15 + 0x4d) != '@')) &&
                      ((&UNK_110b78540)[lVar13] != '\0')) goto LAB_109f2bb14;
            }
LAB_109f2ba7c:
            if (puVar24 != (ulong *)0x0) {
              puVar14 = (ulong *)*puVar24;
              puVar23 = (ulong *)0x0;
              puVar15 = puVar24;
              if ((puVar14 != (ulong *)0x0) && (puVar23 = (ulong *)0x0, *puVar14 != 0)) {
                puVar23 = puVar14;
              }
              goto LAB_109f2ba58;
            }
            unaff_x20 = (ulong *)(ulong)uStack_14c;
            unaff_x25 = (ulong *)0x0;
          }
        }
        else {
          unaff_x25 = puVar15;
          unaff_x21 = (ulong *)0x0;
        }
        puVar18 = (ulong *)(ulong)((uint)puVar18 | (uint)unaff_x20 | (uint)unaff_x21);
      }
      else {
        unaff_x25 = puVar15;
        if ((int)puVar22[2] == 1) {
          puStack_180 = (ulong *)CONCAT44(puStack_180._4_4_,(uint)puVar18);
          puVar18 = puStack_140;
          FUN_109f2b578(puStack_140,puVar22 + 9,uStack_184);
          uStack_188 = (uint)puVar18;
          FUN_109f2b578(puVar24,puVar22 + 0xd,uVar4);
          uStack_18c = (uint)puVar24;
          param_3 = (ulong *)puVar22[7];
          unaff_x21 = (ulong *)param_3[2];
          puVar18 = unaff_x21 + -1;
          if (puVar18 == param_3) {
            unaff_x25 = (ulong *)0x0;
          }
          else {
            unaff_x25 = (ulong *)0x0;
            puVar15 = unaff_x21;
            puStack_170 = puVar22;
            do {
              unaff_x21 = (ulong *)puVar15[1];
              uVar7 = puVar15[-1];
              if ((uVar7 & 1) == 0) {
                if (*(int *)(uVar7 + 0x18) == 8) {
                  uVar8 = puVar15[-2];
                  if (((*(long *)(uVar8 + 0x20) == uVar8 + 0x30) ||
                      (uVar7 = *(ulong *)(uVar8 + 0x38), uVar7 == 0)) ||
                     (*(int *)(uVar7 + 0x18) != 6)) goto LAB_109f2b6a4;
                  uVar8 = 2;
                }
                else {
                  uVar8 = 2;
                }
LAB_109f2b6b0:
                puStack_158 = (ulong *)CONCAT44(puStack_158._4_4_,(int)unaff_x25);
                *puStack_140 = uVar8;
                puStack_140[1] = uVar7;
                puVar24 = puVar22;
                puStack_160 = unaff_x21;
                FUN_109f2d670();
                uVar4 = (uint)puVar24;
                if (uVar4 != 0) {
                  uVar7 = (ulong)bStack_131;
                  puVar5 = *(undefined8 **)puStack_140[3];
                  FUN_109f6600c(puVar5,0x50,8);
                  if (puVar5 != (undefined8 *)0x0) {
                    puVar5[7] = 0;
                    puVar5[6] = 0;
                    puVar5[9] = 0;
                    puVar5[8] = 0;
                    puVar5[3] = 0;
                    puVar5[2] = 0;
                    puVar5[5] = 0;
                    puVar5[4] = 0;
                    puVar5[1] = 0;
                    *puVar5 = 0;
                  }
                  *(undefined4 *)(puVar5 + 3) = 5;
                  puVar5[1] = 0;
                  puVar5[2] = 0;
                  *puVar5 = 0;
                  FUN_109ecb048(puVar5,puVar5 + 5,1,1);
                  puVar19 = puStack_140;
                  puVar5[9] = uVar7;
                  FUN_109ecb4f0(*puStack_140,puStack_140[1],puVar5);
                  *puVar19 = 3;
                  puVar19[1] = (ulong)puVar5;
                  uVar7 = *puVar15;
                  puVar19 = (ulong *)puVar15[1];
                  *(ulong **)(uVar7 + 8) = puVar19;
                  *puVar19 = uVar7;
                  *puVar15 = 0;
                  puVar15[2] = (ulong)(puVar5 + 5);
                  puVar19 = puVar5 + 6;
                  uVar7 = *puVar19;
                  *puVar15 = uVar7;
                  puVar15[1] = (ulong)puVar19;
                  *(ulong **)(uVar7 + 8) = puVar15;
                  *puVar19 = (ulong)puVar15;
                }
                uVar7 = *puVar18;
                if ((((uVar7 & 1) == 0) && (*(int *)(uVar7 + 0x18) == 0)) &&
                   ((iVar1 = *(int *)(uVar7 + 0x28),
                    iVar1 - 0x120U < 0x2b &&
                    (1L << ((ulong)(iVar1 - 0x120U) & 0x3f) & 0x44000000001U) != 0 ||
                    ((iVar1 == 0x23 || (iVar1 == 0x71 && (ulong *)(uVar7 + 0x50) == puVar18)))))) {
                  puVar18 = (ulong *)(uVar7 + 0x38);
                  puVar19 = *(ulong **)(uVar7 + 0x40);
                  if (puVar19 != puVar18) {
                    puStack_178 = (ulong *)(uVar7 + 0x68);
                    puStack_168 = puVar18;
                    do {
                      uVar8 = puVar19[-1];
                      if ((uVar8 & 1) == 0) {
                        if (*(int *)(uVar8 + 0x18) == 8) {
                          uVar9 = puVar19[-2];
                          if (((*(long *)(uVar9 + 0x20) == uVar9 + 0x30) ||
                              (uVar8 = *(ulong *)(uVar9 + 0x38), uVar8 == 0)) ||
                             (*(int *)(uVar8 + 0x18) != 6)) goto LAB_109f2b83c;
                          uVar9 = 2;
                        }
                        else {
                          uVar9 = 2;
                        }
                      }
                      else {
                        uVar8 = *(ulong *)((uVar8 & 0xfffffffffffffffe) + 8);
                        uVar9 = 0;
                        if (*(long *)(uVar8 + 8) != 0) {
                          uVar9 = uVar8;
                        }
LAB_109f2b83c:
                        uVar8 = uVar9;
                        uVar9 = 1;
                      }
                      puVar23 = (ulong *)puVar19[1];
                      *puStack_140 = uVar9;
                      puStack_140[1] = uVar8;
                      puVar6 = puVar22;
                      FUN_109f2d670();
                      uVar4 = (uint)puVar6;
                      if (uVar4 != 0) {
                        auStack_130[0xd] = 0;
                        auStack_130[0xc] = 0;
                        auStack_130[0xf] = 0;
                        auStack_130[0xe] = 0;
                        auStack_130[9] = 0;
                        auStack_130[8] = 0;
                        auStack_130[0xb] = 0;
                        auStack_130[10] = 0;
                        auStack_130[5] = 0;
                        auStack_130[4] = 0;
                        auStack_130[7] = 0;
                        auStack_130[6] = 0;
                        auStack_130[1] = 0;
                        auStack_130[0] = 0;
                        auStack_130[3] = 0;
                        auStack_130[2] = 0;
                        uVar8 = (ulong)*(uint *)(uVar7 + 0x28);
                        uStack_14c = uVar4;
                        uStack_148 = puVar23;
                        if ((&UNK_110b78540)[uVar8 * 0x68] != '\0') {
                          uVar9 = 0;
                          uVar20 = (ulong)(byte)auStack_b0[0];
                          puVar22 = puStack_178;
                          do {
                            if (*puVar22 == puVar15[2]) {
                              puVar5 = *(undefined8 **)puStack_140[3];
                              FUN_109f6600c(puVar5,0x50,8);
                              if (puVar5 != (undefined8 *)0x0) {
                                puVar5[7] = 0;
                                puVar5[6] = 0;
                                puVar5[9] = 0;
                                puVar5[8] = 0;
                                puVar5[3] = 0;
                                puVar5[2] = 0;
                                puVar5[5] = 0;
                                puVar5[4] = 0;
                                puVar5[1] = 0;
                                *puVar5 = 0;
                              }
                              *(undefined4 *)(puVar5 + 3) = 5;
                              puVar5[1] = 0;
                              puVar5[2] = 0;
                              *puVar5 = 0;
                              FUN_109ecb048(puVar5,puVar5 + 5,1,1);
                              puVar18 = puStack_140;
                              puVar5[9] = uVar20;
                              FUN_109ecb4f0(*puStack_140,puStack_140[1],puVar5);
                              *puVar18 = 3;
                              puVar18[1] = (ulong)puVar5;
                              auStack_130[uVar9] = (ulong)(puVar5 + 5);
                              uVar8 = (ulong)*(uint *)(uVar7 + 0x28);
                            }
                            else {
                              auStack_130[uVar9] = *puVar22;
                            }
                            uVar9 = uVar9 + 1;
                            puVar22 = puVar22 + 6;
                          } while (uVar9 < (byte)(&UNK_110b78540)[uVar8 * 0x68]);
                        }
                        puVar18 = puStack_140;
                        FUN_109f2d6e0(puStack_140,uVar7,auStack_130);
                        uVar8 = *puVar19;
                        puVar22 = (ulong *)puVar19[1];
                        *(ulong **)(uVar8 + 8) = puVar22;
                        *puVar22 = uVar8;
                        *puVar19 = 0;
                        puVar19[2] = (ulong)puVar18;
                        puVar18 = puVar18 + 1;
                        uVar8 = *puVar18;
                        *puVar19 = uVar8;
                        puVar19[1] = (ulong)puVar18;
                        *(ulong **)(uVar8 + 8) = puVar19;
                        *puVar18 = (ulong)puVar19;
                        puVar18 = puStack_168;
                        puVar22 = puStack_170;
                        puVar23 = uStack_148;
                        uVar4 = uStack_14c;
                      }
                      puVar19 = puVar23;
                      uVar4 = (uint)puVar24 | uVar4;
                      puVar24 = (ulong *)(ulong)uVar4;
                      unaff_x23 = puVar19;
                    } while (puVar19 != puVar18);
                  }
                }
                unaff_x25 = (ulong *)(ulong)((uint)puStack_158 | uVar4);
                param_3 = (ulong *)puVar22[7];
                unaff_x21 = puStack_160;
              }
              else if (puVar22 != (ulong *)(uVar7 & 0xfffffffffffffffe)) {
                uVar7 = ((ulong *)(uVar7 & 0xfffffffffffffffe))[1];
                uVar8 = 0;
                if (*(long *)(uVar7 + 8) != 0) {
                  uVar8 = uVar7;
                }
LAB_109f2b6a4:
                uVar7 = uVar8;
                uVar8 = 1;
                goto LAB_109f2b6b0;
              }
              puVar18 = unaff_x21 + -1;
              puVar15 = unaff_x21;
            } while (puVar18 != param_3);
          }
          func_0x000109ecd6b8(param_3,0);
          unaff_x20 = puStack_140;
          param_2 = puVar22;
          func_0x000109f2d3f8();
          param_1 = puVar22;
          FUN_109ecc644();
          puVar18 = (ulong *)*param_1;
          uVar4 = (uint)puStack_180;
          if (puVar18 == (ulong *)0x0) {
            unaff_x24 = (ulong *)0x0;
          }
          else {
            if (((*puVar18 != 0) && ((int)puVar18[2] == 1)) && (puVar22[7] == puVar18[7])) {
              unaff_x21 = (ulong *)param_1[4];
              puVar15 = (ulong *)*unaff_x21;
              if ((puVar15 != (ulong *)0x0) && ((int)unaff_x21[3] == 8)) {
                unaff_x24 = (ulong *)0x0;
                puStack_198 = puVar22 + 0xf;
                puStack_178 = puVar22 + 0xb;
                puStack_158 = (ulong *)CONCAT44(puStack_158._4_4_,(int)unaff_x25);
                uStack_14c = (uint)unaff_x20;
                puStack_170 = puVar22;
                puStack_168 = puVar18;
                do {
                  puVar19 = (ulong *)unaff_x21[5];
                  unaff_x23 = (ulong *)*puVar19;
                  puVar18 = puVar19;
                  for (puVar24 = unaff_x23; uStack_148 = puVar15, puVar24 != (ulong *)0x0;
                      puVar24 = (ulong *)*puVar24) {
                    if (*(int *)(*(long *)puVar18[6] + 0x18) == 7) {
                      uVar10 = 0;
                      unaff_x21 = puVar15;
                      uVar4 = (uint)puStack_180;
                      goto LAB_109f2c15c;
                    }
                    puVar18 = puVar24;
                  }
                  puVar15 = (ulong *)unaff_x21[0xb];
                  puVar18 = unaff_x23;
                  if (puVar15 == unaff_x21 + 10) {
LAB_109f2c018:
                    if ((ulong *)puVar22[9] != puStack_178) {
                      lVar13 = 0x60;
                      goto LAB_109f2c02c;
                    }
LAB_109f2c0a0:
                    uVar7 = 0;
                    unaff_x23 = unaff_x21;
                    puVar15 = uStack_148;
                    param_1 = puStack_140;
                  }
                  else {
                    bVar2 = false;
                    bVar21 = false;
                    uVar8 = puStack_168[0xd];
                    uVar7 = puStack_168[9];
                    uVar4 = *(uint *)(uVar7 + 0x80);
                    puStack_160 = unaff_x21;
                    do {
                      param_1 = puVar15 + -1;
                      FUN_109ecc174();
                      puVar22 = puStack_170;
                      if (((uint)param_1[0x10] < uVar4) ||
                         (*(uint *)(uVar7 + 0x84) < *(uint *)((long)param_1 + 0x84))) {
                        if (((uint)param_1[0x10] < *(uint *)(uVar8 + 0x80)) ||
                           (*(uint *)(uVar8 + 0x84) < *(uint *)((long)param_1 + 0x84)))
                        goto LAB_109f2c078;
                        bVar21 = true;
                        if (bVar2) goto LAB_109f2bfd0;
                      }
                      else {
                        bVar2 = true;
LAB_109f2bfd0:
                        if (bVar21) {
LAB_109f2c078:
                          uVar10 = 0;
                          unaff_x25 = (ulong *)((ulong)puStack_158 & 0xffffffff);
                          unaff_x21 = uStack_148;
                          uVar4 = (uint)puStack_180;
                          goto LAB_109f2c158;
                        }
                      }
                      puVar15 = (ulong *)puVar15[1];
                    } while (puVar15 != unaff_x21 + 10);
                    unaff_x25 = (ulong *)((ulong)puStack_158 & 0xffffffff);
                    unaff_x21 = puStack_160;
                    if (!bVar2) goto LAB_109f2c018;
                    if ((ulong *)puStack_170[0xd] == puStack_198) goto LAB_109f2c0a0;
                    lVar13 = 0x80;
LAB_109f2c02c:
                    uVar7 = *(ulong *)((long)puVar22 + lVar13);
                    unaff_x23 = unaff_x21;
                    puVar15 = uStack_148;
                    param_1 = puStack_140;
                  }
                  for (; puVar18 != (ulong *)0x0; puVar18 = (ulong *)*puVar18) {
                    uStack_148._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
                    if (puVar19[2] == uVar7) goto LAB_109f2c054;
                    puVar19 = puVar18;
                  }
                  puVar19 = (ulong *)0x0;
LAB_109f2c054:
                  if ((int)puVar22[2] == 0) {
                    uVar7 = 0;
                    puVar18 = puVar22;
                  }
                  else {
                    puVar18 = (ulong *)0x0;
                    if (((ulong *)puVar22[1])[1] != 0) {
                      puVar18 = (ulong *)puVar22[1];
                    }
                    uVar7 = 1;
                  }
                  uVar4 = (uint)puStack_180;
                  *param_1 = uVar7;
                  param_1[1] = (ulong)puVar18;
                  uStack_148 = (ulong *)CONCAT44(uStack_148._4_4_,
                                                 (uint)*(byte *)((long)unaff_x23 + 100));
                  puVar15 = *(ulong **)param_1[3];
                  puStack_140 = param_1;
                  FUN_109f6600c(puVar15,0x48,8);
                  *(undefined4 *)(puVar15 + 3) = 7;
                  puVar15[1] = 0;
                  puVar15[2] = 0;
                  *puVar15 = 0;
                  param_3 = (ulong *)((ulong)uStack_148 & 0xffffffff);
                  FUN_109ecb048();
                  param_2 = puVar15;
                  FUN_109ece5ec();
                  puVar24 = puVar19 + 4;
                  uVar7 = *puVar24;
                  puVar18 = (ulong *)puVar19[5];
                  *(ulong **)(uVar7 + 8) = puVar18;
                  *puVar18 = uVar7;
                  *puVar24 = 0;
                  puVar19[6] = (ulong)(puVar15 + 5);
                  puVar15 = puVar15 + 6;
                  uVar7 = *puVar15;
                  *puVar24 = uVar7;
                  puVar19[5] = (ulong)puVar15;
                  *(ulong **)(uVar7 + 8) = puVar24;
                  *puVar15 = (ulong)puVar24;
                  uVar10 = 1;
                  unaff_x21 = (ulong *)*unaff_x23;
LAB_109f2c158:
                  unaff_x20 = (ulong *)(ulong)uStack_14c;
LAB_109f2c15c:
                  unaff_x24 = (ulong *)(ulong)((uint)unaff_x24 | uVar10);
                  puVar15 = (ulong *)*unaff_x21;
                } while ((puVar15 != (ulong *)0x0) && ((int)unaff_x21[3] == 8));
                goto LAB_109f2beac;
              }
            }
            unaff_x24 = (ulong *)0x0;
          }
LAB_109f2beac:
          puVar18 = (ulong *)(ulong)(uVar4 | uStack_188 | uStack_18c | (uint)unaff_x25 |
                                             (uint)unaff_x20 | (uint)unaff_x24);
        }
      }
      unaff_x26 = &PTR_DAT_110b78538;
      unaff_x27 = auStack_130;
      unaff_x28 = (ulong *)0x68;
      puVar22 = (ulong *)*puVar22;
      puVar15 = unaff_x25;
    } while (*puVar22 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (uint)puVar18 & 1;
  }
  uVar26 = 0x109f2c1c8;
  ___stack_chk_fail();
  puVar3 = auStack_1a0;
SUB_109f2c1c8:
  do {
    *(ulong **)(puVar3 + -0x60) = unaff_x28;
    *(ulong **)(puVar3 + -0x58) = unaff_x27;
    *(undefined ***)(puVar3 + -0x50) = unaff_x26;
    *(ulong **)(puVar3 + -0x48) = unaff_x25;
    *(ulong **)(puVar3 + -0x40) = unaff_x24;
    *(ulong **)(puVar3 + -0x38) = unaff_x23;
    *(ulong **)(puVar3 + -0x30) = puVar22;
    *(ulong **)(puVar3 + -0x28) = unaff_x21;
    *(ulong **)(puVar3 + -0x20) = unaff_x20;
    *(ulong **)(puVar3 + -0x18) = puVar18;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined8 *)(puVar3 + -8) = uVar26;
    puVar25 = puVar3 + -0x10;
    *(ulong **)(puVar3 + -0x98) = param_1;
    unaff_x21 = (ulong *)*param_2;
    if (*unaff_x21 == 0) {
      return 0;
    }
    unaff_x24 = (ulong *)0x0;
    *(int *)(puVar3 + -0xa0) = (int)param_3;
    while (unaff_x28 = param_3, (int)unaff_x21[2] != 2) {
      if ((int)unaff_x21[2] == 1) {
        param_2 = unaff_x21 + 9;
        param_1 = *(ulong **)(puVar3 + -0x98);
        uVar26 = 0x109f2c22c;
        puVar3 = puVar3 + -0xd0;
        puVar18 = param_1;
        goto SUB_109f2c1c8;
      }
      unaff_x21 = (ulong *)*unaff_x21;
      if (*unaff_x21 == 0) {
        return 0;
      }
    }
    param_2 = unaff_x21 + 4;
    param_1 = *(ulong **)(puVar3 + -0x98);
    uVar26 = 0x109f2c2a0;
    puVar3 = puVar3 + -0xd0;
  } while( true );
}



/* Entry: 109f2d670; end: 109f2d6df;  */

undefined8 FUN_109f2d670(long param_1,ulong param_2,long param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if ((param_2 & 0xfffffffe) == 2) {
    param_3 = *(long *)(param_3 + 0x10);
  }
  if ((*(uint *)(param_3 + 0x80) < *(uint *)(*(long *)(param_1 + 0x48) + 0x80)) ||
     (*(uint *)(*(long *)(param_1 + 0x48) + 0x84) < *(uint *)(param_3 + 0x84))) {
    if ((*(uint *)(param_3 + 0x80) < *(uint *)(*(long *)(param_1 + 0x68) + 0x80)) ||
       (uVar1 = 0, *(uint *)(*(long *)(param_1 + 0x68) + 0x84) < *(uint *)(param_3 + 0x84))) {
      return 0;
    }
  }
  else {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  return 1;
}



/* Entry: 109f2d6e0; end: 109f2d7bf;  */

long FUN_109f2d6e0(undefined8 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar3 = param_1[3];
  FUN_109ecaef8(lVar3,*(undefined4 *)(param_2 + 0x28));
  uVar2 = *(ushort *)(lVar3 + 0x2c);
  uVar1 = *(ushort *)(param_2 + 0x2c) & 1;
  *(ushort *)(lVar3 + 0x2c) = uVar2 & 0xfffe | uVar1;
  *(ushort *)(lVar3 + 0x2c) = uVar2 & 0xf006 | uVar1 | *(ushort *)(param_2 + 0x2c) & 0xff8;
  FUN_109ecb048();
  if ((&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] != '\0') {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x70);
    puVar6 = (undefined8 *)(lVar3 + 0x70);
    do {
      uVar7 = *(undefined8 *)(param_3 + uVar4 * 8);
      puVar6[-4] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = uVar7;
      uVar7 = *puVar5;
      puVar6[1] = puVar5[1];
      *puVar6 = uVar7;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
    } while (uVar4 < (byte)(&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68]);
  }
  FUN_109ecb4f0(*param_1,param_1[1],lVar3);
  *param_1 = 3;
  param_1[1] = lVar3;
  return lVar3 + 0x30;
}



/* Entry: 109f2d7c0; end: 109f2dabb;  */

undefined8
FUN_109f2d7c0(undefined8 *param_1,long param_2,int param_3,long *param_4,uint param_5,
             undefined8 *param_6,char param_7)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  if (param_3 == 0) {
    lVar14 = *(long *)(param_2 + 0x48);
    if (lVar14 == param_2 + 0x58) goto LAB_109f2d828;
    lVar7 = 0x60;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x68);
    if (lVar14 == param_2 + 0x78) {
LAB_109f2d828:
      lVar14 = 0;
      lVar7 = 0;
      goto LAB_109f2d830;
    }
    lVar7 = 0x80;
  }
  lVar7 = *(long *)(param_2 + lVar7);
LAB_109f2d830:
  plVar3 = (long *)param_4[2] + -1;
  if (plVar3 == param_4) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    puVar12 = (undefined8 *)0x0;
    plVar11 = (long *)param_4[2];
    do {
      plVar10 = (long *)plVar11[1];
      if (((((plVar11[-1] & 1U) == 0) &&
           (uVar1 = *(uint *)(*(long *)(plVar11[-1] + 0x10) + 0x40),
           *(uint *)(lVar14 + 0x40) <= uVar1)) && (uVar1 <= *(uint *)(lVar7 + 0x40))) &&
         (func_0x000109ecc26c(), 1L << ((ulong)param_5 & 0x3f) == ((ulong)plVar3 & 0xffffffff))) {
        if (puVar12 == (undefined8 *)0x0) {
          if (*(int *)(param_2 + 0x10) == 0) {
            uVar13 = 0;
            lVar4 = param_2;
          }
          else {
            lVar4 = 0;
            if (*(long *)(*(long *)(param_2 + 8) + 8) != 0) {
              lVar4 = *(long *)(param_2 + 8);
            }
            uVar13 = 1;
          }
          *param_1 = uVar13;
          param_1[1] = lVar4;
          if ((param_7 != '\0') || (puVar12 = param_6, *(char *)((long)param_6 + 0x1c) != '\x01')) {
            lVar4 = param_1[3];
            FUN_109ecaef8(lVar4,0x154);
            puVar12 = (undefined8 *)(lVar4 + 0x30);
            FUN_109ecb048();
            uVar2 = *(ushort *)(lVar4 + 0x2c) & 0xfffe | (ushort)*(byte *)(param_1 + 2);
            *(ushort *)(lVar4 + 0x2c) = uVar2;
            *(ushort *)(lVar4 + 0x2c) =
                 (*(ushort *)((long)param_1 + 0x14) & 0x1ff) << 3 | uVar2 & 0xf007;
            *(undefined8 *)(lVar4 + 0x50) = 0;
            *(undefined8 *)(lVar4 + 0x58) = 0;
            *(undefined8 *)(lVar4 + 0x60) = 0;
            *(undefined8 **)(lVar4 + 0x68) = param_6;
            *(char *)(lVar4 + 0x70) = param_7;
            *(undefined8 *)(lVar4 + 0x71) = 0;
            *(undefined8 *)(lVar4 + 0x78) = 0;
            FUN_109ecb4f0(*param_1,param_1[1],lVar4);
            *param_1 = 3;
            param_1[1] = lVar4;
          }
          if (1 < *(byte *)((long)param_4 + 0x1c)) {
            puVar5 = *(undefined8 **)param_1[3];
            FUN_109f6600c(puVar5,0x48,8);
            *(undefined4 *)(puVar5 + 3) = 7;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            FUN_109ecb048();
            FUN_109ece5ec(param_1,puVar5);
            uVar6 = (ulong)*(byte *)((long)puVar5 + 0x44);
            func_0x000109ecd728(uVar6);
            lVar4 = param_1[3];
            FUN_109ecaef8(lVar4,uVar6);
            if (*(char *)((long)puVar5 + 0x44) != '\0') {
              uVar6 = 0;
              lVar8 = lVar4 + (ulong)param_5 * 0x30;
              puVar9 = (undefined1 *)(lVar4 + 0x70);
              do {
                if (param_5 == uVar6) {
                  *(undefined8 *)(lVar8 + 0x50) = 0;
                  *(undefined8 *)(lVar8 + 0x58) = 0;
                  *(undefined8 *)(lVar8 + 0x60) = 0;
                  *(undefined8 **)(lVar8 + 0x68) = puVar12;
                  *(undefined1 *)(lVar8 + 0x70) = 0;
                }
                else {
                  *(undefined8 *)(puVar9 + -0x20) = 0;
                  *(undefined8 *)(puVar9 + -0x18) = 0;
                  *(undefined8 *)(puVar9 + -0x10) = 0;
                  *(undefined8 **)(puVar9 + -8) = puVar5 + 5;
                  *puVar9 = (char)uVar6;
                }
                uVar6 = uVar6 + 1;
                puVar9 = puVar9 + 0x30;
              } while (uVar6 < *(byte *)((long)puVar5 + 0x44));
            }
            puVar12 = param_1;
            func_0x000109ecdf34();
          }
        }
        lVar4 = *plVar11;
        plVar3 = (long *)plVar11[1];
        *(long **)(lVar4 + 8) = plVar3;
        *plVar3 = lVar4;
        *plVar11 = 0;
        plVar3 = puVar12 + 1;
        lVar4 = *plVar3;
        plVar11[1] = (long)plVar3;
        plVar11[2] = (long)puVar12;
        *plVar11 = lVar4;
        *(long **)(lVar4 + 8) = plVar11;
        *plVar3 = (long)plVar11;
        uVar13 = 1;
      }
      plVar3 = plVar10 + -1;
      plVar11 = plVar10;
    } while (plVar3 != param_4);
  }
  return uVar13;
}



/* Entry: 109f2dabc; end: 109f2db2f;  */

undefined * FUN_109f2dabc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x58) + 8);
  puVar2 = *(undefined **)(lVar4 + 8);
  while (puVar2 == (undefined *)0x0 || puVar2 == &UNK_10e47dcd0) {
    puVar1 = (undefined8 *)(lVar4 + 0x18);
    lVar4 = lVar4 + 0x10;
    puVar2 = (undefined *)*puVar1;
  }
  puVar3 = (undefined *)0x0;
  if (*(long *)(*(undefined **)(param_1 + 8) + 8) != 0) {
    puVar3 = *(undefined **)(param_1 + 8);
  }
  if (puVar2 != puVar3) {
    return puVar2;
  }
  do {
    puVar3 = *(undefined **)(lVar4 + 0x18);
    lVar4 = lVar4 + 0x10;
  } while ((puVar3 == (undefined *)0x0 || puVar3 == &UNK_10e47dcd0) || puVar3 == puVar2);
  return puVar3;
}



/* Entry: 109f2db30; end: 109f2dc3f;  */

ulong FUN_109f2db30(ulong param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0;
  }
  if (((byte)(&UNK_110b78598)[(ulong)*(uint *)(param_1 + 0x28) * 0x68] >> 2 & 1) == 0) {
LAB_109f2db74:
    uVar3 = 0;
  }
  else {
    lVar7 = 0;
    puVar8 = (undefined8 *)(param_1 + 0x68);
    do {
      uVar3 = param_1;
      FUN_109ecab84(param_1,lVar7);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if (*(long *)(*(long *)*puVar8 + 0x10) != *(long *)(param_1 + 0x10)) goto LAB_109f2db74;
      if ((*(int *)(*(long *)*puVar8 + 0x18) != 8) &&
         (bVar1 = lVar7 != 0 & param_2, param_2 = 0, bVar1 != 1)) {
        return 0;
      }
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 != 3);
    plVar4 = *(long **)(**(long **)(param_1 + 0x68) + 0x28);
    plVar5 = (long *)*plVar4;
    if (plVar5 == (long *)0x0) {
      uVar3 = 1;
    }
    else {
      do {
        bVar2 = *(int *)(*(long *)plVar4[6] + 0x18) == 5;
        uVar3 = (ulong)bVar2;
        if (!bVar2) {
          return uVar3;
        }
        plVar6 = (long *)*plVar5;
        plVar4 = plVar5;
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return uVar3;
}



/* Entry: 109f2dc40; end: 109f2dd2f;  */

void FUN_109f2dc40(long param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [40];
  
  if (param_3 == 0) {
    if (*(long *)(param_1 + 0x68) == param_1 + 0x78) goto LAB_109f2dc88;
    lVar5 = 0x80;
  }
  else {
    if (*(long *)(param_1 + 0x48) == param_1 + 0x58) {
LAB_109f2dc88:
      uVar7 = 0;
      goto LAB_109f2dc8c;
    }
    lVar5 = 0x60;
  }
  uVar7 = *(undefined8 *)(param_1 + lVar5);
LAB_109f2dc8c:
  lVar5 = 0x48;
  if (param_4 == 0) {
    lVar5 = 0x68;
  }
  plVar4 = (long *)(param_2 + lVar5);
  plVar6 = (long *)*plVar4;
  if (*(int *)(plVar6 + 2) == 0) {
    uVar1 = 0;
    plVar2 = plVar6;
  }
  else {
    plVar2 = (long *)0;
    if (*(long *)(plVar6[1] + 8) != 0) {
      plVar2 = (long *)plVar6[1];
    }
    uVar1 = 1;
  }
  if (plVar6 == plVar4 + 2) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)plVar4[3];
  }
  if ((int)plVar4[2] == 0) {
    uVar3 = 1;
    plVar6 = plVar4;
  }
  else {
    uVar3 = 0;
    plVar6 = (long *)0x0;
    if (*(long *)*plVar4 != 0) {
      plVar6 = (long *)*plVar4;
    }
  }
  FUN_109ef87e8(auStack_48,uVar1,plVar2,uVar3,plVar6);
  FUN_109ef8954(auStack_48,1,uVar7);
  return;
}



/* Entry: 109f2dd30; end: 109f2de4f;  */

void FUN_109f2dd30(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  while ((plVar3 = (long *)*param_1, plVar3 != (long *)0x0 && ((int)param_1[3] == 8))) {
    plVar1 = (long *)param_1[5];
    for (plVar2 = (long *)*(long *)param_1[5]; param_1 = plVar3, plVar2 != (long *)0x0;
        plVar2 = (long *)*plVar2) {
      lVar4 = param_4;
      if ((plVar1[2] == param_2) || (lVar4 = param_5, plVar1[2] == param_3)) {
        plVar1[2] = lVar4;
      }
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 109f2de50; end: 109f2df33;  */

uint FUN_109f2de50(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
LAB_109f2de8c:
      return uVar4 & 1;
    }
    lVar6 = plVar7[6];
    if (lVar6 != 0) {
      FUN_109f204b8(lVar6,3);
      uVar5 = lVar6 + 0x30;
      FUN_109f2df34(uVar5,0,0);
      uVar3 = 3;
      if ((int)uVar5 == 0) {
        uVar3 = 0xfffffff7;
      }
      do {
        uVar4 = (uint)uVar5;
        *(uint *)(lVar6 + 0x84) = *(uint *)(lVar6 + 0x84) & uVar3;
        plVar7 = (long *)*plVar7;
        plVar1 = (long *)*plVar7;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f2de8c;
          lVar6 = plVar7[6];
          if (lVar6 != 0) break;
          plVar7 = plVar1;
          plVar1 = (long *)*plVar1;
        }
        FUN_109f204b8(lVar6,3);
        lVar2 = lVar6 + 0x30;
        FUN_109f2df34(lVar2,0,0);
        uVar3 = 3;
        if ((uint)lVar2 == 0) {
          uVar3 = 0xfffffff7;
        }
        uVar5 = (ulong)((uint)lVar2 | uVar4);
      } while( true );
    }
    plVar7 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f2df34; end: 109f2e337;  */

uint FUN_109f2df34(undefined8 *param_1,long *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  
  plVar14 = (long *)*param_1;
  if (*plVar14 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    do {
      iVar1 = (int)plVar14[2];
      plVar11 = param_2;
      plVar15 = param_3;
      if (iVar1 == 2) {
        plVar9 = plVar14 + 4;
        if (*(int *)(*(long *)(*plVar9 + 0x58) + 0x40) != 1) {
          plVar7 = plVar14;
          FUN_109ecc4d4();
          plVar8 = plVar14;
          FUN_109ecc644();
          while (plVar7 != plVar8) {
            plVar10 = (long *)plVar7[4];
            plVar4 = plVar10;
            for (plVar5 = (long *)*plVar10; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
              if (((int)plVar4[3] == 4) && ((*(uint *)(plVar4 + 5) & 0xfffffffe) == 0x294))
              goto LAB_109f2e2d0;
              plVar4 = plVar5;
            }
            if (((plVar10 != plVar7 + 6) && (*(int *)(plVar7[7] + 0x18) == 6)) &&
               (*(uint *)(plVar7[7] + 0x28) < 2)) goto LAB_109f2e2d0;
            FUN_109ecc434();
          }
          plVar11 = plVar14;
          func_0x000109ecc1a0(plVar14);
          plVar15 = plVar8;
        }
LAB_109f2e2d0:
        FUN_109f2df34(plVar9,plVar11,plVar15);
        uVar6 = (uint)plVar9;
        plVar9 = plVar14 + 8;
LAB_109f2e2f0:
        FUN_109f2df34(plVar9,plVar11,plVar15);
        uVar6 = uVar6 | (uint)plVar9;
LAB_109f2e2f8:
        uVar16 = uVar16 | uVar6;
      }
      else {
        if (iVar1 == 1) {
          plVar9 = plVar14 + 9;
          FUN_109f2df34(plVar9,param_2,param_3);
          uVar6 = (uint)plVar9;
          plVar9 = plVar14 + 0xd;
          goto LAB_109f2e2f0;
        }
        if (((iVar1 == 0 && param_3 != (long *)0x0) &&
            (*(uint *)(plVar14 + 0x10) <= *(uint *)(param_3 + 0x10))) &&
           (*(uint *)((long)param_3 + 0x84) <= *(uint *)((long)plVar14 + 0x84))) {
          plVar15 = (long *)plVar14[4];
          plVar11 = (long *)*plVar15;
          if (plVar11 != (long *)0x0) {
            uVar6 = 0;
            do {
              plVar9 = (long *)0x0;
              plVar7 = plVar15;
              if (*plVar11 != 0) {
                plVar9 = plVar11;
              }
              do {
                plVar15 = plVar9;
                uVar2 = *(uint *)(param_2 + 8);
                iVar1 = (int)plVar7[3];
                if (iVar1 < 4) {
                  if (iVar1 != 0) {
                    if (iVar1 == 1) {
                      if ((*(uint *)(plVar7 + 5) == 0) ||
                         ((*(uint *)(*(long *)(*(long *)plVar7[10] + 0x10) + 0x40) <= uVar2 &&
                          (((*(uint *)(plVar7 + 5) | 2) != 3 ||
                           (*(uint *)(*(long *)(*(long *)plVar7[0xe] + 0x10) + 0x40) <= uVar2))))))
                      goto LAB_109f2e044;
                    }
                    else if (iVar1 == 3) {
                      uVar12 = (ulong)*(uint *)(plVar7 + 0xc);
                      if (*(uint *)(plVar7 + 0xc) != 0) {
                        puVar13 = (undefined8 *)(plVar7[0xb] + 0x18);
                        do {
                          if (uVar2 < *(uint *)(*(long *)(*(long *)*puVar13 + 0x10) + 0x40))
                          goto LAB_109f2e060;
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar13 + 5;
                        } while (uVar12 != 0);
                      }
                      goto LAB_109f2e044;
                    }
                    goto LAB_109f2e060;
                  }
                  uVar12 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(plVar7 + 5) * 0x68];
                  if (uVar12 != 0) {
                    plVar11 = plVar7 + 0xd;
                    do {
                      if (uVar2 < *(uint *)(*(long *)(*(long *)*plVar11 + 0x10) + 0x40))
                      goto LAB_109f2e060;
                      uVar12 = uVar12 - 1;
                      plVar11 = plVar11 + 6;
                    } while (uVar12 != 0);
                  }
LAB_109f2e044:
                  FUN_109ecb9c0(plVar7);
                  FUN_109ecb4f0(1,param_2,plVar7);
                  uVar6 = 1;
                }
                else {
                  if (iVar1 == 7 || iVar1 == 5) goto LAB_109f2e044;
                  if (iVar1 == 4) {
                    uVar3 = *(uint *)(plVar7 + 5);
                    uVar12 = (ulong)(byte)(&UNK_110b671ba)[(ulong)uVar3 * 0x68];
                    if ((uVar12 == 0) ||
                       ((*(uint *)((long)plVar7 + uVar12 * 4 + 0x50) >> 2 & 1) == 0)) {
                      if ((int)uVar3 < 0xad) {
                        if (((uVar3 == 3) || (uVar3 == 0x35)) || (uVar3 == 0x9d))
                        goto LAB_109f2e184;
LAB_109f2e1c4:
                        if (((*(uint *)(&UNK_110b671ec + (ulong)uVar3 * 0x68) ^ 0xffffffff) & 3) !=
                            0) goto LAB_109f2e060;
                      }
                      else {
                        if ((int)uVar3 < 0x1d1) {
                          if (uVar3 != 0xad) {
                            if (uVar3 != 0x112) goto LAB_109f2e1c4;
                            if ((*(ushort *)(*(long *)plVar7[0x13] + 0x2c) & 0x487) != 0)
                            goto LAB_109f2e190;
                          }
                        }
                        else if ((uVar3 != 0x1d1) && (uVar3 != 0x1e6)) goto LAB_109f2e1c4;
LAB_109f2e184:
                        if ((*(uint *)((long)plVar7 + uVar12 * 4 + 0x50) >> 6 & 1) == 0)
                        goto LAB_109f2e060;
                      }
LAB_109f2e190:
                      uVar12 = (ulong)(byte)(&UNK_110b67190)[(ulong)uVar3 * 0x68];
                      if (uVar12 != 0) {
                        plVar11 = plVar7 + 0x13;
                        do {
                          if (uVar2 < *(uint *)(*(long *)(*(long *)*plVar11 + 0x10) + 0x40))
                          goto LAB_109f2e060;
                          uVar12 = uVar12 - 1;
                          plVar11 = plVar11 + 4;
                        } while (uVar12 != 0);
                      }
                      goto LAB_109f2e044;
                    }
                  }
                }
LAB_109f2e060:
                if (plVar15 == (long *)0x0) goto LAB_109f2e2f8;
                plVar11 = (long *)*plVar15;
                plVar9 = (long *)0x0;
                plVar7 = plVar15;
              } while (plVar11 == (long *)0x0);
            } while( true );
          }
          uVar6 = 0;
          goto LAB_109f2e2f8;
        }
      }
      plVar14 = (long *)*plVar14;
    } while (*plVar14 != 0);
  }
  return uVar16 & 1;
}



/* Entry: 109f2e338; end: 109f2e3ff;  */

undefined8 FUN_109f2e338(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar4 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar3 = plVar4[6];
    if (lVar3 != 0) break;
    plVar4 = plVar1;
    plVar1 = (long *)*plVar1;
  }
  uVar5 = 0;
  do {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_40 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x18);
    uStack_48 = 0;
    puVar2 = &uStack_58;
    lStack_38 = lVar3;
    FUN_109f2e400(puVar2,lVar3 + 0x30,0);
    if ((int)puVar2 == 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffff7;
    }
    else {
      *(undefined4 *)(lVar3 + 0x84) = 0;
      FUN_109f1cb18(lVar3);
      uVar5 = 1;
    }
    plVar4 = (long *)*plVar4;
    plVar1 = (long *)*plVar4;
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return uVar5;
      }
      lVar3 = plVar4[6];
      if (lVar3 != 0) break;
      plVar4 = plVar1;
      plVar1 = (long *)*plVar1;
    }
  } while( true );
}



/* Entry: 109f2e400; end: 109f2f3cf;  */

ulong FUN_109f2e400(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined4 uVar18;
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  long *plVar33;
  ulong *puVar34;
  uint uVar35;
  undefined1 auStack_88 [40];
  
  plVar33 = (long *)*param_2;
  plVar19 = (long *)*plVar33;
  if (plVar19 == (long *)0x0) {
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    plVar9 = (long *)0x0;
    if (*plVar19 != 0) {
      plVar9 = plVar19;
    }
LAB_109f2e448:
    plVar19 = plVar9;
    iVar2 = (int)plVar33[2];
    if (iVar2 == 2) {
      puVar10 = param_1;
      FUN_109f2e400(param_1,plVar33 + 4,plVar33);
      plVar9 = plVar33 + 6;
      if ((long *)plVar33[4] == plVar9) {
        lVar32 = 0;
      }
      else {
        lVar32 = plVar33[7];
      }
      func_0x000109f2efe0(lVar32,1,0);
      plVar28 = (long *)plVar33[4];
      plVar22 = (long *)0x0;
      if (plVar28 != plVar9) {
        plVar22 = plVar28;
      }
      plVar23 = plVar33;
      func_0x000109ecc1a0();
      plVar26 = plVar33;
      FUN_109ecc644(plVar33);
      if (((*(int *)(plVar28[0xb] + 0x40) == 2) && (puVar34 = (ulong *)*plVar28, *puVar34 != 0)) &&
         ((int)puVar34[2] == 1)) {
        if ((ulong *)puVar34[9] == puVar34 + 0xb) {
          uVar30 = 0;
        }
        else {
          uVar30 = puVar34[0xc];
        }
        if (((*(long *)(uVar30 + 0x20) == uVar30 + 0x30) ||
            (*(int *)(*(long *)(uVar30 + 0x38) + 0x18) != 6)) ||
           ((*(int *)(*(long *)(uVar30 + 0x38) + 0x28) != 2 ||
            (puVar20 = (ulong *)puVar34[0xd], *(long *)*puVar20 != 0)))) goto LAB_109f2ee44;
        puVar12 = (ulong *)0x0;
        if (puVar20 != puVar34 + 0xf) {
          puVar12 = puVar20;
        }
        if (((ulong *)puVar20[4] != puVar12 + 6) ||
           (puVar20 = puVar34, FUN_109f2f7e8(), ((ulong)puVar20 & 1) != 0)) goto LAB_109f2ee44;
        if (plVar28 == plVar9) {
          lVar29 = 0;
        }
        else {
          lVar29 = plVar33[7];
        }
        if ((*(long *)(lVar29 + 0x20) != lVar29 + 0x30) &&
           (*(int *)(*(long *)(lVar29 + 0x38) + 0x18) == 6)) goto LAB_109f2ee44;
        puVar20 = puVar34;
        FUN_109ecc644();
        puVar12 = puVar20;
        func_0x000109ecdd80();
        if ((int)puVar12 == 0) goto LAB_109f2ee44;
        uVar24 = puVar34[7];
        FUN_109f2f6a8(uVar24,0,plVar28);
        if ((int)uVar24 == 0) goto LAB_109f2ee44;
        FUN_109f331e4(puVar20);
        FUN_109f46d28(plVar33);
        plVar25 = (long *)plVar28[4];
        plVar21 = (long *)*plVar25;
        if (plVar21 != (long *)0x0) {
          do {
            plVar13 = plVar25;
            plVar3 = (long *)0x0;
            if (*plVar21 != 0) {
              plVar3 = plVar21;
            }
            do {
              plVar25 = plVar3;
              if ((int)plVar13[3] == 1) {
                FUN_109efa8e8();
              }
              if (plVar25 == (long *)0x0) goto LAB_109f2ee60;
              plVar21 = (long *)*plVar25;
              plVar13 = plVar25;
              plVar3 = (long *)0x0;
            } while (plVar21 == (long *)0x0);
          } while( true );
        }
LAB_109f2ee60:
        func_0x000109efe60c(plVar28);
        FUN_109efebd0(plVar28);
        func_0x000109efe60c(plVar26);
        if ((int)puVar34[2] == 0) {
          uVar15 = 1;
          puVar20 = puVar34;
        }
        else {
          uVar15 = 0;
          puVar20 = (ulong *)0x0;
          if (*(ulong *)*puVar34 != 0) {
            puVar20 = (ulong *)*puVar34;
          }
        }
        FUN_109ef87e8(auStack_88,0,plVar22,uVar15,puVar20);
        if ((long *)plVar33[4] == plVar9) {
          lVar29 = 0;
        }
        else {
          lVar29 = plVar33[7];
        }
        lVar14 = 0;
        FUN_109f64c74(0,0x109f65648,FUN_109f65684);
        FUN_109f2f79c(auStack_88,plVar33,1,lVar29,lVar14);
        if (lVar14 != 0) {
          FUN_109f65aa4(lVar14 + -0x30);
          FUN_109f65ae0(lVar14 + -0x30);
        }
        FUN_109ef8954(auStack_88,1,plVar23);
        if (*(long *)(uVar30 + 0x20) == uVar30 + 0x30) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(uVar30 + 0x38);
        }
        FUN_109ecb9c0(uVar15);
        if ((int)plVar33[2] == 0) {
          uVar15 = 0;
          uVar16 = 1;
          plVar9 = plVar33;
        }
        else {
          uVar16 = 0;
          plVar22 = (long *)*plVar33;
          plVar9 = (long *)0x0;
          if (((long *)plVar33[1])[1] != 0) {
            plVar9 = (long *)plVar33[1];
          }
          plVar33 = (long *)0x0;
          if (*plVar22 != 0) {
            plVar33 = plVar22;
          }
          uVar15 = 1;
        }
        FUN_109ef87e8(auStack_88,uVar15,plVar9,uVar16,plVar33);
        puVar20 = (ulong *)0x0;
        if ((ulong *)puVar34[0xd] != puVar34 + 0xf) {
          puVar20 = (ulong *)puVar34[0xd];
        }
        uVar35 = 1;
        FUN_109ef8954(auStack_88,1,puVar20);
      }
      else {
LAB_109f2ee44:
        uVar35 = 0;
      }
      uVar27 = uVar27 | uVar35 | (uint)puVar10 | (uint)lVar32;
    }
    else if (iVar2 == 1) {
      puVar10 = param_1;
      FUN_109f2e400(param_1,plVar33 + 9,param_3);
      puVar8 = param_1;
      FUN_109f2e400(param_1,plVar33 + 0xd,param_3);
      plVar9 = plVar33;
      FUN_109ecc644();
      if (((*(int *)(plVar9[0xb] + 0x40) == 0) && (*(long *)*plVar9 == 0)) &&
         ((long *)plVar9[4] == plVar9 + 6)) {
        if ((long *)plVar33[9] == plVar33 + 0xb) {
          lVar32 = 0;
        }
        else {
          lVar32 = plVar33[0xc];
        }
        if ((long *)plVar33[0xd] == plVar33 + 0xf) {
          lVar29 = 0;
        }
        else {
          lVar29 = plVar33[0x10];
        }
        lVar14 = lVar32 + 0x30;
        if ((*(long *)(lVar32 + 0x20) == lVar14) || (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) != 6)
           ) {
          bVar4 = true;
        }
        else {
          bVar4 = *(int *)(*(long *)(lVar32 + 0x38) + 0x28) != 2;
        }
        lVar1 = lVar29 + 0x30;
        if ((*(long *)(lVar29 + 0x20) == lVar1) || (*(int *)(*(long *)(lVar29 + 0x38) + 0x18) != 6))
        {
          bVar5 = true;
        }
        else {
          bVar5 = *(int *)(*(long *)(lVar29 + 0x38) + 0x28) != 2;
        }
        if ((*(long *)(lVar32 + 0x20) == lVar14) || (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) != 6)
           ) {
          bVar6 = true;
        }
        else {
          bVar6 = *(int *)(*(long *)(lVar32 + 0x38) + 0x28) != 3;
        }
        if ((*(long *)(lVar29 + 0x20) == lVar1) || (*(int *)(*(long *)(lVar29 + 0x38) + 0x18) != 6))
        {
          bVar7 = true;
        }
        else {
          bVar7 = *(int *)(*(long *)(lVar29 + 0x38) + 0x28) != 3;
        }
        if ((bVar4 || bVar5) && (bVar6 || bVar7)) goto LAB_109f2e710;
        func_0x000109efe60c(*(undefined8 *)(lVar32 + 0x48));
        if (*(long *)(lVar32 + 0x20) == lVar14) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar32 + 0x38);
        }
        FUN_109ecb9c0(uVar15);
        if (*(long *)(lVar29 + 0x20) == lVar1) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar29 + 0x38);
        }
        FUN_109ecb9c0(uVar15);
        uVar35 = 1;
        FUN_109ecb4f0(1,plVar9,uVar15);
      }
      else {
LAB_109f2e710:
        uVar35 = 0;
      }
      plVar22 = (long *)plVar33[9];
      plVar9 = plVar33 + 0xb;
      if (plVar22 == plVar9) {
        lVar32 = 0;
      }
      else {
        lVar32 = plVar33[0xc];
      }
      plVar23 = (long *)plVar33[0xd];
      plVar28 = plVar33 + 0xf;
      if (plVar23 == plVar28) {
        lVar29 = 0;
      }
      else {
        lVar29 = plVar33[0x10];
      }
      if (((*(long *)(lVar32 + 0x20) == lVar32 + 0x30) ||
          (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) != 6)) ||
         (*(int *)(*(long *)(lVar32 + 0x38) + 0x28) != 2)) {
        if (((*(long *)(lVar29 + 0x20) != lVar29 + 0x30) &&
            (*(int *)(*(long *)(lVar29 + 0x38) + 0x18) == 6)) &&
           (*(int *)(*(long *)(lVar29 + 0x38) + 0x28) == 2)) {
          lVar29 = lVar32;
          plVar26 = (long *)0x0;
          if (plVar22 != plVar9) {
            plVar26 = plVar22;
          }
          goto LAB_109f2e7bc;
        }
LAB_109f2e81c:
        uVar31 = 0;
      }
      else {
        plVar26 = (long *)0x0;
        if (plVar23 != plVar28) {
          plVar26 = plVar23;
        }
LAB_109f2e7bc:
        if ((*(long *)*plVar26 == 0) && ((long *)plVar26[4] == plVar26 + 6)) goto LAB_109f2e81c;
        if ((*(long *)(lVar29 + 0x20) != lVar29 + 0x30) &&
           (*(int *)(*(long *)(lVar29 + 0x38) + 0x18) == 6)) {
          plVar22 = plVar33;
          FUN_109ecc644();
          if ((*(long *)*plVar22 != 0) || ((long *)plVar22[4] != plVar22 + 6)) goto LAB_109f2e81c;
          func_0x000109efe60c(*(undefined8 *)(lVar29 + 0x48));
        }
        plVar22 = (long *)0x0;
        if (*(long *)*plVar33 != 0) {
          plVar22 = (long *)*plVar33;
        }
        FUN_109f331e4(plVar22);
        FUN_109ef87e8(auStack_88,0,plVar26,1,lVar29);
        uVar15 = 1;
        plVar22 = plVar33;
        if ((int)plVar33[2] != 0) {
          uVar15 = 0;
          plVar22 = (long *)0x0;
          if (*(long *)*plVar33 != 0) {
            plVar22 = (long *)*plVar33;
          }
        }
        FUN_109ef8954(auStack_88,uVar15,plVar22);
        uVar31 = 1;
      }
      if (param_3 == 0) {
LAB_109f2ea78:
        uVar17 = 0;
      }
      else {
        lVar32 = param_3;
        FUN_109ecc644();
        lVar29 = *(long *)(lVar32 + 0x20);
        if ((((lVar29 != lVar32 + 0x30) && (lVar29 != 0)) && (*(int *)(lVar29 + 0x18) == 8)) ||
           (plVar22 = plVar33, FUN_109f2f3d0(), (int)plVar22 == 0)) goto LAB_109f2ea78;
        plVar22 = plVar33;
        FUN_109ecc644();
        if (((plVar22 == (long *)0x0) || (plVar23 = (long *)*plVar22, plVar23 == (long *)0x0)) ||
           ((*plVar23 == 0 ||
            (((int)plVar23[2] != 1 || (plVar26 = plVar23, FUN_109f2f3d0(), (int)plVar26 == 0)))))) {
LAB_109f2e9fc:
          uVar17 = 0;
        }
        else {
          plVar26 = (long *)plVar33[9];
          if (plVar26 == plVar9) {
            lVar32 = 0;
          }
          else {
            lVar32 = plVar33[0xc];
          }
          if ((*(long *)(lVar32 + 0x20) == lVar32 + 0x30) ||
             (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) != 6)) {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(*(long *)(lVar32 + 0x38) + 0x28) == 2;
          }
          if ((long *)plVar23[9] == plVar23 + 0xb) {
            lVar32 = 0;
          }
          else {
            lVar32 = plVar23[0xc];
          }
          if ((*(long *)(lVar32 + 0x20) != lVar32 + 0x30) &&
             (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) == 6)) {
            bVar4 = (bool)(bVar4 ^ *(int *)(*(long *)(lVar32 + 0x38) + 0x28) == 2);
          }
          if (bVar4) goto LAB_109f2e9fc;
          plVar21 = (long *)plVar22[4];
          for (plVar22 = (long *)*(long *)plVar22[4]; plVar22 != (long *)0x0;
              plVar22 = (long *)*plVar22) {
            uVar17 = *(uint *)(plVar21 + 3);
            if ((1 < uVar17 && uVar17 != 5) && ((uVar17 != 4 || ((int)plVar21[5] != 0x112))))
            goto LAB_109f2ea78;
            plVar21 = plVar22;
          }
          plVar22 = plVar23;
          FUN_109ecc644();
          if (plVar22 != (long *)0x0) {
            plVar22 = (long *)plVar22[4];
            do {
              if ((long *)*plVar22 == (long *)0x0) goto LAB_109f2eab8;
              plVar21 = plVar22 + 3;
              plVar22 = (long *)*plVar22;
            } while ((int)*plVar21 != 8);
            goto LAB_109f2ea78;
          }
LAB_109f2eab8:
          if (plVar26 == plVar9) {
            lVar32 = 0;
          }
          else {
            lVar32 = plVar33[0xc];
          }
          if (((*(long *)(lVar32 + 0x20) == lVar32 + 0x30) ||
              (*(int *)(*(long *)(lVar32 + 0x38) + 0x18) != 6)) ||
             (*(int *)(*(long *)(lVar32 + 0x38) + 0x28) != 2)) {
            if (plVar26 != plVar9) {
              lVar32 = 0x60;
              bVar4 = false;
              goto LAB_109f2eb28;
            }
            lVar32 = 0;
            bVar4 = false;
          }
          else {
            bVar4 = true;
            if ((long *)plVar33[0xd] == plVar28) {
              lVar32 = 0;
            }
            else {
              lVar32 = 0x80;
              bVar4 = true;
LAB_109f2eb28:
              lVar32 = *(long *)((long)plVar33 + lVar32);
            }
          }
          uVar15 = 1;
          plVar9 = plVar33;
          if ((int)plVar33[2] != 0) {
            uVar15 = 0;
            plVar9 = (long *)0x0;
            if (*(long *)*plVar33 != 0) {
              plVar9 = (long *)*plVar33;
            }
          }
          lVar29 = 0;
          if (*(long *)(plVar23[1] + 8) != 0) {
            lVar29 = plVar23[1];
          }
          FUN_109ef87e8(auStack_88,uVar15,plVar9,1,lVar29);
          FUN_109ef8954(auStack_88,1,lVar32);
          lVar29 = 0x60;
          if (!bVar4) {
            lVar29 = 0x80;
          }
          FUN_109ecb9c0(*(undefined8 *)(*(long *)((long)plVar33 + lVar29) + 0x38));
          uVar30 = *(ulong *)(lVar32 + 0x38);
          if (*(long *)(uVar30 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109f2ec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e47c3be)[*(uint *)(uVar30 + 0x18)] * 4 + 0x109f2ec1c))
                      (0x30);
            return uVar30;
          }
          uVar30 = plVar23[4];
          if ((uVar30 & 1) == 0) {
            if (*(int *)(uVar30 + 0x18) == 8) {
              uVar30 = plVar23[3];
              if (((*(long *)(uVar30 + 0x20) == uVar30 + 0x30) ||
                  (uVar24 = *(ulong *)(uVar30 + 0x38), uVar24 == 0)) ||
                 (*(int *)(uVar24 + 0x18) != 6)) {
                uVar15 = 1;
              }
              else {
                uVar15 = 2;
                uVar30 = uVar24;
              }
            }
            else {
              uVar15 = 2;
            }
          }
          else {
            uVar24 = *(ulong *)((uVar30 & 0xfffffffffffffffe) + 8);
            uVar30 = 0;
            if (*(long *)(uVar24 + 8) != 0) {
              uVar30 = uVar24;
            }
            uVar15 = 1;
          }
          *param_1 = uVar15;
          param_1[1] = uVar30;
          uVar18 = 0x14a;
          if (!bVar4) {
            uVar18 = 0x120;
          }
          puVar11 = param_1;
          FUN_109ece1b0(param_1,uVar18,plVar23[7],plVar33[7]);
          plVar9 = plVar23 + 5;
          lVar32 = *plVar9;
          plVar33 = (long *)plVar23[6];
          *(long **)(lVar32 + 8) = plVar33;
          *plVar33 = lVar32;
          *plVar9 = 0;
          plVar23[7] = (long)puVar11;
          plVar33 = puVar11 + 1;
          lVar32 = *plVar33;
          *plVar9 = lVar32;
          plVar23[6] = (long)plVar33;
          *(long **)(lVar32 + 8) = plVar9;
          *plVar33 = (long)plVar9;
          uVar17 = 1;
        }
      }
      uVar27 = uVar27 | (uint)puVar10 | (uint)puVar8 | uVar35 | uVar31 | uVar17;
    }
    else if (iVar2 == 0) {
      func_0x000109f2efe0(plVar33,0,0);
      uVar27 = uVar27 | (uint)plVar33;
    }
    if (plVar19 != (long *)0x0) {
      plVar22 = (long *)*plVar19;
      plVar9 = (long *)0x0;
      plVar33 = plVar19;
      if ((plVar22 != (long *)0x0) && (plVar9 = (long *)0x0, *plVar22 != 0)) {
        plVar9 = plVar22;
      }
      goto LAB_109f2e448;
    }
  }
  return (ulong)(uVar27 & 1);
}



/* Entry: 109f2f3d0; end: 109f2f4db;  */

undefined8 FUN_109f2f3d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x68);
  lVar2 = 0;
  if (lVar5 != param_1 + 0x78) {
    lVar2 = lVar5;
  }
  lVar3 = 0;
  if (*(long *)(param_1 + 0x48) == param_1 + 0x58) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  if (lVar5 == param_1 + 0x78) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x80);
  }
  if (lVar3 == lVar4 && lVar2 == lVar5) {
    plVar6 = *(long **)(lVar4 + 0x20);
    plVar1 = (long *)(lVar4 + 0x30);
    if (((plVar6 == plVar1) || (*(int *)(*(long *)(lVar4 + 0x38) + 0x18) != 6)) ||
       (*(int *)(*(long *)(lVar4 + 0x38) + 0x28) != 2)) {
      if (*(long **)(lVar5 + 0x20) == (long *)(lVar5 + 0x30)) {
        return 0;
      }
      if (*(int *)(*(long *)(lVar5 + 0x38) + 0x18) != 6) {
        return 0;
      }
      if (*(int *)(*(long *)(lVar5 + 0x38) + 0x28) != 2) {
        return 0;
      }
      if (plVar6 == plVar1) {
        if ((long *)**(long **)(lVar5 + 0x20) == (long *)(lVar5 + 0x30)) {
          return 1;
        }
        return 0;
      }
      if (*(int *)(*(long *)(lVar4 + 0x38) + 0x18) != 6) {
        return 0;
      }
      if (*(int *)(*(long *)(lVar4 + 0x38) + 0x28) != 2) {
        return 0;
      }
    }
    if ((*(long *)(lVar5 + 0x20) == lVar5 + 0x30) && ((long *)*plVar6 == plVar1)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109f2f4dc; end: 109f2f6a7;  */

void FUN_109f2f4dc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if ((long *)param_1[2] + -1 != param_1) {
    bVar2 = false;
    puVar6 = (undefined8 *)0x0;
    plVar8 = (long *)param_1[2];
    do {
      plVar9 = (long *)plVar8[1];
      puVar4 = (undefined8 *)plVar8[-1];
      if ((((ulong)puVar4 & 1) == 0) && (puVar6 != (undefined8 *)0x0)) {
        if (puVar6 != puVar4) {
LAB_109f2f544:
          if (puVar4[2] != *(long *)(*param_1 + 0x10)) goto LAB_109f2f558;
        }
      }
      else {
        if (((ulong)puVar4 & 1) == 0) goto LAB_109f2f544;
LAB_109f2f558:
        plVar5 = plVar9;
        if (!bVar2) {
          puVar6 = *(undefined8 **)*param_2;
          FUN_109f6600c(puVar6,0x68,8);
          *(undefined4 *)(puVar6 + 3) = 8;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6[7] = 0;
          puVar6[5] = puVar6 + 7;
          puVar6[6] = 0;
          puVar6[8] = puVar6 + 5;
          FUN_109ecb048();
          FUN_109ecb4f0(1,param_2[2],puVar6);
          puVar4 = puVar6;
          FUN_109ecb354(puVar6,param_2[4],param_1);
          lVar3 = param_1[1];
          plVar5 = puVar4 + 4;
          *plVar5 = lVar3;
          puVar4[5] = param_1 + 1;
          *(long **)(lVar3 + 8) = plVar5;
          param_1[1] = (long)plVar5;
          puVar1 = *(undefined8 **)*param_2;
          FUN_109f6600c(puVar1,0x48,8);
          *(undefined4 *)(puVar1 + 3) = 7;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *puVar1 = 0;
          FUN_109ecb048();
          FUN_109ecb4f0(1,param_2[3],puVar1);
          puVar4 = puVar6;
          FUN_109ecb354(puVar6,param_2[3],puVar1 + 5);
          plVar7 = puVar1 + 6;
          lVar3 = *plVar7;
          plVar5 = puVar4 + 4;
          *plVar5 = lVar3;
          puVar4[5] = plVar7;
          *(long **)(lVar3 + 8) = plVar5;
          *plVar7 = (long)plVar5;
          plVar5 = (long *)plVar8[1];
        }
        lVar3 = *plVar8;
        *(long **)(lVar3 + 8) = plVar5;
        *plVar5 = lVar3;
        *plVar8 = 0;
        plVar5 = puVar6 + 10;
        lVar3 = *plVar5;
        plVar8[1] = (long)plVar5;
        plVar8[2] = (long)(puVar6 + 9);
        *plVar8 = lVar3;
        *(long **)(lVar3 + 8) = plVar8;
        *plVar5 = (long)plVar8;
        bVar2 = true;
      }
      plVar8 = plVar9;
    } while (plVar9 + -1 != param_1);
  }
  return;
}



/* Entry: 109f2f6a8; end: 109f2f79b;  */

undefined8 FUN_109f2f6a8(long *param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  
  while( true ) {
    lVar7 = *param_1;
    iVar2 = *(int *)(lVar7 + 0x18);
    if (iVar2 != 8) break;
    if (*(long *)(lVar7 + 0x10) != param_3) {
      return 0;
    }
    lVar3 = param_3;
    FUN_109ecc588();
    for (plVar5 = *(long **)(lVar7 + 0x28); plVar5[2] != lVar3; plVar5 = (long *)*plVar5) {
    }
    param_2 = 0;
    param_1 = (long *)plVar5[6];
  }
  if (iVar2 != 5) {
    if (iVar2 != 0) {
      return 0;
    }
    uVar6 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(lVar7 + 0x28) * 0x68];
    if (uVar6 != 0) {
      puVar8 = (undefined1 *)(lVar7 + 0x70);
      pbVar9 = &UNK_110b78548 + (ulong)*(uint *)(lVar7 + 0x28) * 0x68;
      do {
        if (1 < *pbVar9) {
          return 0;
        }
        uVar4 = *(ulong *)(puVar8 + -8);
        puVar1 = puVar8 + (param_2 & 0xffffffff);
        if (*pbVar9 != 0) {
          puVar1 = puVar8;
        }
        FUN_109f2f6a8(uVar4,*puVar1,param_3);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        puVar8 = puVar8 + 0x30;
        uVar6 = uVar6 - 1;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  return 1;
}



/* Entry: 109f2f79c; end: 109f2f7e7;  */

void FUN_109f2f79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [40];
  
  FUN_109ecfeb0(auStack_48,param_1,param_2,param_5);
  FUN_109ef8954(auStack_48,param_3,param_4);
  return;
}



/* Entry: 109f2f7e8; end: 109f2f91f;  */

bool FUN_109f2f7e8(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(int *)(param_1 + 0x10) == 2) {
LAB_109f2f89c:
    bVar2 = false;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 1) {
      puVar3 = *(ulong **)(param_1 + 0x48);
      plVar7 = (long *)*puVar3;
      if (plVar7 == (long *)0x0) {
LAB_109f2f8a4:
        puVar4 = *(undefined8 **)(param_1 + 0x68);
        puVar3 = (ulong *)*puVar4;
        if (puVar3 == (ulong *)0x0) {
          return false;
        }
        FUN_109f2f7e8(puVar4,param_2);
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          if (*puVar3 != 0) {
            puVar5 = puVar3;
          }
          do {
            bVar2 = puVar5 != (ulong *)0x0;
            if (puVar5 == (ulong *)0x0) {
              return false;
            }
            plVar7 = (long *)*puVar5;
            if (plVar7 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = (long *)0x0;
              if (*plVar7 != 0) {
                plVar8 = plVar7;
              }
            }
            FUN_109f2f7e8(puVar5,param_2);
            uVar1 = (ulong)puVar5 & 1;
            puVar5 = (ulong *)plVar8;
          } while (uVar1 == 0);
          return bVar2;
        }
      }
      else {
        FUN_109f2f7e8(puVar3,param_2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = (ulong *)0;
          if (*plVar7 != 0) {
            puVar3 = (ulong *)plVar7;
          }
          do {
            if (puVar3 == (ulong *)0x0) goto LAB_109f2f8a4;
            plVar7 = (long *)*puVar3;
            if (plVar7 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = (long *)0x0;
              if (*plVar7 != 0) {
                plVar8 = plVar7;
              }
            }
            FUN_109f2f7e8(puVar3,param_2);
            uVar1 = (ulong)puVar3 & 1;
            puVar3 = (ulong *)plVar8;
          } while (uVar1 == 0);
        }
      }
    }
    else if ((((*(long *)(param_1 + 0x20) == param_1 + 0x30) ||
              (lVar6 = *(long *)(param_1 + 0x38), lVar6 == 0)) || (lVar6 == param_2)) ||
            (*(int *)(lVar6 + 0x18) != 6)) goto LAB_109f2f89c;
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 109f2f920; end: 109f2fa1f;  */

uint FUN_109f2f920(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined1 uStack_41;
  
  plVar5 = *(long **)(param_1 + 0x178);
  plVar1 = (long *)**(long **)(param_1 + 0x178);
  do {
    if (plVar1 == (long *)0x0) {
      uVar6 = 0;
LAB_109f2fa04:
      return uVar6 & 1;
    }
    lVar4 = plVar5[6];
    if (lVar4 != 0) {
      uVar6 = 0;
      do {
        FUN_109f204b8(lVar4,0x10);
        uVar3 = *(uint *)(lVar4 + 0x84);
        if ((uVar3 & 1) == 0) {
          FUN_109ecc784(lVar4);
          uVar3 = *(uint *)(lVar4 + 0x84);
        }
        *(uint *)(lVar4 + 0x84) = uVar3 | 1;
        uStack_41 = 0;
        uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x18);
        FUN_109f2fa20(uVar2,lVar4 + 0x30,&uStack_41);
        if ((uint)uVar2 == 0) {
          *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xfffffff7;
        }
        else {
          *(undefined4 *)(lVar4 + 0x84) = 0;
          FUN_109f1cb18(lVar4);
        }
        uVar6 = uVar6 | (uint)uVar2;
        plVar5 = (long *)*plVar5;
        plVar1 = (long *)*plVar5;
        while( true ) {
          if (plVar1 == (long *)0x0) goto LAB_109f2fa04;
          lVar4 = plVar5[6];
          if (lVar4 != 0) break;
          plVar5 = plVar1;
          plVar1 = (long *)*plVar1;
        }
      } while( true );
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109f2fa20; end: 109f3065b;  */

uint FUN_109f2fa20(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  byte bStack_109;
  long *aplStack_108 [4];
  undefined8 uStack_e8;
  long *aplStack_e0 [4];
  undefined8 uStack_c0;
  long *aplStack_b8 [4];
  undefined8 uStack_98;
  long *aplStack_90 [4];
  undefined8 uStack_70;
  
  plVar21 = (long *)*param_2;
  if (*plVar21 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    do {
      bStack_109 = 0;
      if ((int)plVar21[2] == 2) {
        uVar10 = param_1;
        FUN_109f2fa20(param_1,plVar21 + 4,&bStack_109);
        if ((uVar10 & 1) != 0) {
          uVar23 = 1;
          *param_3 = 1;
          goto LAB_109f2fd64;
        }
        if ((int)plVar21[0xd] == 2) {
LAB_109f2fad4:
          *param_3 = 1;
          goto LAB_109f2fd64;
        }
        lVar25 = plVar21[0xc];
        plVar22 = *(long **)(lVar25 + 0x18);
        if (plVar22 != (long *)0x0) {
          if (*(long **)(lVar25 + 0x28) == (long *)(lVar25 + 0x20)) {
            bVar8 = false;
          }
          else {
            bVar8 = false;
            plVar22 = *(long **)(lVar25 + 0x28);
            do {
              plVar24 = (long *)plVar22[1];
              if (((*(byte *)((long)plVar22 + -6) & 1) == 0) &&
                 (plVar22 + -5 != *(long **)(lVar25 + 0x18))) {
                plVar13 = (long *)plVar22[-5];
                lVar17 = 0x48;
                if ((char)plVar22[-1] == '\0') {
                  lVar17 = 0x68;
                }
                puVar16 = *(undefined8 **)((long)plVar13 + lVar17);
                if (*(long *)*puVar16 == 0) {
                  lVar17 = 0x58;
                  if ((char)plVar22[-1] == '\0') {
                    lVar17 = 0x78;
                  }
                  puVar1 = (undefined8 *)0x0;
                  if (puVar16 != (undefined8 *)((long)plVar13 + lVar17)) {
                    puVar1 = puVar16;
                  }
                  if ((undefined8 *)puVar16[4] == puVar1 + 6) {
                    if ((int)plVar13[2] == 0) {
                      uVar12 = 0;
                      uVar15 = 1;
                      plVar14 = plVar13;
                    }
                    else {
                      uVar15 = 0;
                      plVar6 = (long *)*plVar13;
                      plVar14 = plVar13 + 1;
                      plVar13 = (long *)0x0;
                      if (((long *)*plVar14)[1] != 0) {
                        plVar13 = (long *)*plVar14;
                      }
                      plVar14 = (long *)0x0;
                      if (*plVar6 != 0) {
                        plVar14 = plVar6;
                      }
                      uVar12 = 1;
                    }
                    FUN_109ef87e8(aplStack_90,uVar12,plVar13,uVar15,plVar14);
                    for (plVar13 = aplStack_90[0]; *plVar13 != 0; plVar13 = (long *)*plVar13) {
                      FUN_109ef8c00(plVar13,uStack_70);
                    }
                    lVar25 = *plVar22;
                    plVar13 = (long *)plVar22[1];
                    *(long **)(lVar25 + 8) = plVar13;
                    *plVar13 = lVar25;
                    *plVar22 = 0;
                    plVar22[1] = 0;
                    lVar25 = plVar21[0xc];
                    bVar8 = true;
                  }
                }
              }
              plVar22 = plVar24;
            } while (plVar24 != (long *)(lVar25 + 0x20));
            plVar22 = *(long **)(lVar25 + 0x18);
            if (plVar22 == (long *)0x0) goto LAB_109f2fc0c;
          }
LAB_109f2fc84:
          iVar7 = *(int *)(lVar25 + 0xc);
          if (((iVar7 != 1) && ((bStack_109 & 1) != 0)) ||
             (uVar10 = param_1, FUN_109f3065c(param_1,plVar21), (int)uVar10 == 0))
          goto LAB_109f2fd5c;
          if (*(char *)(lVar25 + 0x10) == '\x01') {
LAB_109f2fe3c:
            func_0x000109f31070(plVar21);
          }
          else {
            plVar24 = (long *)(lVar25 + 0x20);
            iVar19 = -1;
            plVar13 = plVar24;
            do {
              plVar13 = (long *)plVar13[1];
              iVar19 = iVar19 + 1;
            } while (plVar13 != plVar24);
            if (iVar19 == 2) {
              if ((*(byte *)((long)plVar22 + 0x22) & 1) != 0) goto LAB_109f2fd5c;
              plVar13 = (long *)(*(long *)(lVar25 + 0x28) + -0x28);
              lVar25 = *plVar13;
              lVar17 = *plVar22;
              if (lVar25 == lVar17) {
                if (iVar7 == 0) goto LAB_109f2fe3c;
                plVar13 = (long *)(*plVar24 + -0x28);
              }
              FUN_109f31568(plVar21);
              plVar24 = (long *)0x0;
              if ((long *)plVar21[4] != plVar21 + 6) {
                plVar24 = (long *)plVar21[4];
              }
              if (lVar25 == lVar17) {
                lVar11 = *plVar22;
                if (*(int *)(lVar11 + 0x10) == 0) {
                  uVar12 = 0;
                }
                else {
                  plVar14 = (long *)(lVar11 + 8);
                  lVar11 = 0;
                  if (*(long *)(*plVar14 + 8) != 0) {
                    lVar11 = *plVar14;
                  }
                  uVar12 = 1;
                }
                FUN_109ef87e8(aplStack_b8,0,plVar24,uVar12,lVar11);
                lVar20 = *plVar22;
                bVar8 = (char)plVar22[4] == '\0';
                lVar11 = 0x48;
                if (bVar8) {
                  lVar11 = 0x68;
                }
                lVar2 = 0x58;
                if (bVar8) {
                  lVar2 = 0x78;
                }
                lVar3 = 0x68;
                if (bVar8) {
                  lVar3 = 0x48;
                }
                lVar4 = 0x78;
                if (bVar8) {
                  lVar4 = 0x58;
                }
                lVar5 = 0;
                if (*(long *)(lVar20 + lVar11) != lVar20 + lVar2) {
                  lVar5 = *(long *)(lVar20 + lVar11);
                }
                lVar11 = 0;
                if (*(long *)(lVar20 + lVar3) != lVar20 + lVar4) {
                  lVar11 = *(long *)(lVar20 + lVar3);
                }
                FUN_109ecb9c0(*(undefined8 *)(plVar22[2] + 0x38));
                uVar12 = 1;
                FUN_109ef87e8(aplStack_e0,0,lVar11,1,plVar22[2]);
                FUN_109ef87e8(aplStack_108,0,lVar5,1,plVar22[3]);
                plVar14 = (long *)*plVar22;
                plVar24 = plVar14;
                if ((int)plVar14[2] != 0) {
                  uVar12 = 0;
                  plVar24 = (long *)0x0;
                  if (*(long *)*plVar14 != 0) {
                    plVar24 = (long *)*plVar14;
                  }
                }
                FUN_109ef8954(aplStack_108,uVar12,plVar24);
                plVar22 = (long *)*plVar22;
                if ((int)plVar22[2] == 0) {
                  uVar12 = 0;
                  uVar15 = 1;
                  plVar24 = plVar22;
                }
                else {
                  uVar15 = 0;
                  plVar14 = (long *)*plVar22;
                  plVar24 = plVar22 + 1;
                  plVar22 = (long *)0x0;
                  if (((long *)*plVar24)[1] != 0) {
                    plVar22 = (long *)*plVar24;
                  }
                  plVar24 = (long *)0x0;
                  if (*plVar14 != 0) {
                    plVar24 = plVar14;
                  }
                  uVar12 = 1;
                }
                FUN_109ef87e8(aplStack_90,uVar12,plVar22,uVar15,plVar24);
                lVar11 = *aplStack_90[0];
                plVar22 = aplStack_90[0];
                while (lVar11 != 0) {
                  FUN_109ef8c00(plVar22,uStack_70);
                  plVar22 = (long *)*plVar22;
                  lVar11 = *plVar22;
                }
                iVar7 = *(int *)(plVar21[0xc] + 0xc);
              }
              else {
                lVar11 = *plVar13;
                if (*(int *)(lVar11 + 0x10) == 0) {
                  uVar12 = 0;
                }
                else {
                  plVar14 = (long *)(lVar11 + 8);
                  lVar11 = 0;
                  if (*(long *)(*plVar14 + 8) != 0) {
                    lVar11 = *plVar14;
                  }
                  uVar12 = 1;
                }
                FUN_109ef87e8(aplStack_b8,0,plVar24,uVar12,lVar11);
                plVar24 = (long *)*plVar22;
                if ((int)plVar24[2] == 0) {
                  uVar12 = 1;
                  plVar14 = plVar24;
                }
                else {
                  uVar12 = 0;
                  plVar14 = (long *)0x0;
                  if (*(long *)*plVar24 != 0) {
                    plVar14 = (long *)*plVar24;
                  }
                }
                if ((long *)plVar21[4] == plVar21 + 6) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = plVar21[7];
                }
                FUN_109ef87e8(aplStack_90,uVar12,plVar14,1,lVar11);
                FUN_109ef8954(aplStack_90,1,plVar22[3]);
                FUN_109ecb9c0(*(undefined8 *)(plVar22[2] + 0x38));
                iVar7 = *(int *)(plVar21[0xc] + 0xc) + 1;
              }
              lVar11 = 0;
              FUN_109f64c74(0,0x109f65648,FUN_109f65684);
              plVar22 = plVar21;
              FUN_109f31654(plVar21,plVar13,aplStack_b8,aplStack_108,lVar11,iVar7);
              if (lVar25 == lVar17) {
                if ((int)plVar22[2] == 2) {
                  lVar25 = 0;
                  if (*(long *)(plVar22[1] + 8) != 0) {
                    lVar25 = plVar22[1];
                  }
                }
                else if ((char)plVar13[4] == '\x01') {
                  if ((long *)plVar22[9] == plVar22 + 0xb) {
LAB_109f30590:
                    lVar25 = 0;
                  }
                  else {
                    lVar25 = plVar22[0xc];
                  }
                }
                else {
                  if ((long *)plVar22[0xd] == plVar22 + 0xf) goto LAB_109f30590;
                  lVar25 = plVar22[0x10];
                }
                FUN_109ecfeb0(aplStack_90,aplStack_b8,plVar21[3],lVar11);
                FUN_109ef8954(aplStack_90,1,lVar25);
                if ((int)plVar22[2] == 2) {
                  lVar25 = 0;
                  if (*(long *)(plVar22[1] + 8) != 0) {
                    lVar25 = plVar22[1];
                  }
                }
                else if ((char)plVar13[4] == '\x01') {
                  if ((long *)plVar22[9] == plVar22 + 0xb) {
LAB_109f30614:
                    lVar25 = 0;
                  }
                  else {
                    lVar25 = plVar22[0xc];
                  }
                }
                else {
                  if ((long *)plVar22[0xd] == plVar22 + 0xf) goto LAB_109f30614;
                  lVar25 = plVar22[0x10];
                }
                FUN_109ecfeb0(aplStack_90,aplStack_e0,plVar21[3],lVar11);
                FUN_109ef8954(aplStack_90,1,lVar25);
                for (; *aplStack_e0[0] != 0; aplStack_e0[0] = (long *)*aplStack_e0[0]) {
                  FUN_109ef8c00(aplStack_e0[0],uStack_c0);
                }
              }
              if ((int)plVar21[2] == 0) {
                uVar12 = 0;
                uVar15 = 1;
                plVar22 = plVar21;
              }
              else {
                uVar15 = 0;
                plVar24 = (long *)*plVar21;
                plVar22 = (long *)0x0;
                if (((long *)plVar21[1])[1] != 0) {
                  plVar22 = (long *)plVar21[1];
                }
                plVar21 = (long *)0x0;
                if (*plVar24 != 0) {
                  plVar21 = plVar24;
                }
                uVar12 = 1;
              }
              FUN_109ef87e8(aplStack_90,uVar12,plVar22,uVar15,plVar21);
              for (; plVar21 = aplStack_b8[0], *aplStack_90[0] != 0;
                  aplStack_90[0] = (long *)*aplStack_90[0]) {
                FUN_109ef8c00(aplStack_90[0],uStack_70);
              }
              for (; plVar22 = aplStack_108[0], *plVar21 != 0; plVar21 = (long *)*plVar21) {
                FUN_109ef8c00(plVar21,uStack_98);
              }
              for (; *plVar22 != 0; plVar22 = (long *)*plVar22) {
                FUN_109ef8c00(plVar22,uStack_e8);
              }
            }
            else {
              if (iVar19 != 1) goto LAB_109f2fd5c;
              FUN_109f31568(plVar21);
              plVar24 = (long *)0x0;
              if ((long *)plVar21[4] != plVar21 + 6) {
                plVar24 = (long *)plVar21[4];
              }
              lVar25 = *plVar22;
              if (*(int *)(lVar25 + 0x10) == 0) {
                uVar12 = 0;
              }
              else {
                plVar13 = (long *)(lVar25 + 8);
                lVar25 = 0;
                if (*(long *)(*plVar13 + 8) != 0) {
                  lVar25 = *plVar13;
                }
                uVar12 = 1;
              }
              FUN_109ef87e8(aplStack_b8,0,plVar24,uVar12,lVar25);
              lVar11 = 0;
              FUN_109f64c74(0,0x109f65648,FUN_109f65684);
              plVar24 = plVar21;
              FUN_109f31654(plVar21,plVar22,aplStack_b8,aplStack_e0,lVar11,
                            *(int *)(plVar21[0xc] + 0xc) + 1);
              if ((int)plVar24[2] == 2) {
                lVar25 = 0;
                if (*(long *)(plVar24[1] + 8) != 0) {
                  lVar25 = plVar24[1];
                }
                if ((char)plVar22[4] != '\0') goto LAB_109f303f4;
LAB_109f30414:
                plVar13 = (long *)plVar24[9];
                if (plVar13 == plVar24 + 0xb) goto LAB_109f30430;
                lVar17 = 0x60;
LAB_109f30428:
                uVar12 = *(undefined8 *)((long)plVar24 + lVar17);
              }
              else {
                if ((char)plVar22[4] == '\0') {
                  if ((long *)plVar24[0xd] == plVar24 + 0xf) {
                    lVar25 = 0;
                  }
                  else {
                    lVar25 = plVar24[0x10];
                  }
                  goto LAB_109f30414;
                }
                if ((long *)plVar24[9] == plVar24 + 0xb) {
                  lVar25 = 0;
                }
                else {
                  lVar25 = plVar24[0xc];
                }
LAB_109f303f4:
                plVar13 = (long *)plVar24[0xd];
                if (plVar13 != plVar24 + 0xf) {
                  lVar17 = 0x80;
                  goto LAB_109f30428;
                }
LAB_109f30430:
                uVar12 = 0;
                plVar13 = (long *)0x0;
              }
              FUN_109ef87e8(aplStack_108,0,plVar13,1,uVar12);
              FUN_109ecfeb0(aplStack_90,aplStack_108,plVar21[3],lVar11);
              FUN_109ef8954(aplStack_90,1,lVar25);
              bVar8 = (char)plVar22[4] == '\0';
              lVar25 = 0x68;
              if (bVar8) {
                lVar25 = 0x48;
              }
              lVar17 = 0x78;
              if (bVar8) {
                lVar17 = 0x58;
              }
              lVar20 = 0;
              if (*(long *)((long)plVar24 + lVar25) != (long)plVar24 + lVar17) {
                lVar20 = *(long *)((long)plVar24 + lVar25);
              }
              FUN_109ef8954(aplStack_108,0,lVar20);
              for (; plVar22 = aplStack_e0[0], *aplStack_b8[0] != 0;
                  aplStack_b8[0] = (long *)*aplStack_b8[0]) {
                FUN_109ef8c00(aplStack_b8[0],uStack_98);
              }
              for (; *plVar22 != 0; plVar22 = (long *)*plVar22) {
                FUN_109ef8c00(plVar22,uStack_c0);
              }
              if ((int)plVar21[2] == 0) {
                uVar12 = 0;
                uVar15 = 1;
                plVar22 = plVar21;
              }
              else {
                uVar15 = 0;
                plVar24 = (long *)*plVar21;
                plVar22 = (long *)0x0;
                if (((long *)plVar21[1])[1] != 0) {
                  plVar22 = (long *)plVar21[1];
                }
                plVar21 = (long *)0x0;
                if (*plVar24 != 0) {
                  plVar21 = plVar24;
                }
                uVar12 = 1;
              }
              FUN_109ef87e8(aplStack_90,uVar12,plVar22,uVar15,plVar21);
              for (; *aplStack_90[0] != 0; aplStack_90[0] = (long *)*aplStack_90[0]) {
                FUN_109ef8c00(aplStack_90[0],uStack_70);
              }
            }
            if (lVar11 != 0) {
              FUN_109f65aa4(lVar11 + -0x30);
              FUN_109f65ae0(lVar11 + -0x30);
            }
          }
          goto LAB_109f30568;
        }
        bVar8 = false;
LAB_109f2fc0c:
        if ((*(byte *)(lVar25 + 0x12) & 1) == 0) {
          lVar17 = plVar21[7];
          if (((*(long *)(lVar17 + 0x20) != lVar17 + 0x30) &&
              (*(int *)(*(long *)(lVar17 + 0x38) + 0x18) == 6)) &&
             (*(int *)(*(long *)(lVar17 + 0x38) + 0x28) == 2)) {
            lVar17 = lVar25 + 0x20;
            if (*(long *)(lVar25 + 0x28) == lVar17) {
              FUN_109f31568(plVar21);
              goto LAB_109f2fe5c;
            }
            uVar18 = 0xffffffff;
            lVar25 = lVar17;
            do {
              lVar25 = *(long *)(lVar25 + 8);
              uVar18 = uVar18 + 1;
            } while (lVar25 != lVar17);
            if (3 < uVar18) goto LAB_109f2fad4;
            FUN_109f31568(plVar21);
            if ((long *)plVar21[4] == plVar21 + 6) {
              lVar25 = 0;
            }
            else {
              lVar25 = plVar21[7];
            }
            lVar17 = plVar21[0xc];
            lVar11 = *(long *)(lVar17 + 0x28);
            goto LAB_109f30030;
          }
          lVar17 = *(long *)(lVar25 + 0x28);
          if (((((lVar17 != 0) && (lVar17 != lVar25 + 0x20)) &&
               (((bStack_109 & 1) == 0 &&
                ((*(long *)(lVar17 + 8) == lVar25 + 0x20 &&
                 ((*(byte *)((long)plVar21 + 0x6c) & 1) == 0)))))) &&
              (iVar7 = *(int *)(lVar25 + 8), iVar7 != 0)) &&
             (uVar10 = param_1, FUN_109f3065c(param_1,plVar21), (uVar10 & 1) != 0)) {
            func_0x000109f30854(param_1,plVar21,iVar7);
            lVar25 = plVar21[0xc];
            plVar22 = *(long **)(lVar25 + 0x18);
            if (plVar22 != (long *)0x0) {
              bVar8 = true;
              goto LAB_109f2fc84;
            }
            goto LAB_109f30568;
          }
        }
LAB_109f2fd5c:
        *param_3 = 1;
        if (!bVar8) goto LAB_109f2fd64;
        goto LAB_109f30570;
      }
      if ((int)plVar21[2] == 1) {
        uVar10 = param_1;
        FUN_109f2fa20(param_1,plVar21 + 9,param_3);
        uVar9 = param_1;
        FUN_109f2fa20(param_1,plVar21 + 0xd,param_3);
        uVar23 = (uint)uVar10 | (uint)uVar9 | uVar23;
      }
LAB_109f2fd64:
      plVar21 = (long *)*plVar21;
    } while (*plVar21 != 0);
  }
LAB_109f2fd78:
  return uVar23 & 1;
LAB_109f30030:
  if (lVar11 == lVar17 + 0x20) goto LAB_109f2fe5c;
  FUN_109ecb9c0(*(undefined8 *)(*(long *)(lVar11 + -0x18) + 0x38));
  plVar22 = *(long **)(lVar11 + -0x28);
  if ((int)plVar22[2] == 0) {
    uVar12 = 1;
    plVar24 = plVar22;
  }
  else {
    uVar12 = 0;
    plVar24 = (long *)0x0;
    if (*(long *)*plVar22 != 0) {
      plVar24 = (long *)*plVar22;
    }
  }
  FUN_109ef87e8(aplStack_90,uVar12,plVar24,1,lVar25);
  FUN_109ef8954(aplStack_90,1,*(undefined8 *)(lVar11 + -0x10));
  lVar25 = *(long *)(lVar11 + -0x28);
  if (*(char *)(lVar11 + -8) == '\x01') {
    if (*(long *)(lVar25 + 0x48) == lVar25 + 0x58) goto LAB_109f300d4;
    lVar17 = 0x60;
LAB_109f300cc:
    lVar25 = *(long *)(lVar25 + lVar17);
  }
  else {
    if (*(long *)(lVar25 + 0x68) != lVar25 + 0x78) {
      lVar17 = 0x80;
      goto LAB_109f300cc;
    }
LAB_109f300d4:
    lVar25 = 0;
  }
  lVar11 = *(long *)(lVar11 + 8);
  lVar17 = plVar21[0xc];
  goto LAB_109f30030;
LAB_109f2fe5c:
  plVar22 = (long *)0x0;
  if ((long *)plVar21[4] == plVar21 + 6) {
    lVar25 = 0;
  }
  else {
    lVar25 = plVar21[7];
    plVar22 = (long *)plVar21[4];
  }
  uVar12 = 1;
  FUN_109ef87e8(aplStack_b8,0,plVar22,1,lVar25);
  plVar22 = plVar21;
  if ((int)plVar21[2] != 0) {
    uVar12 = 0;
    plVar22 = (long *)0x0;
    if (*(long *)*plVar21 != 0) {
      plVar22 = (long *)*plVar21;
    }
  }
  FUN_109ef8954(aplStack_b8,uVar12,plVar22);
  if ((int)plVar21[2] == 0) {
    uVar12 = 0;
    uVar15 = 1;
    plVar22 = plVar21;
  }
  else {
    uVar15 = 0;
    plVar24 = (long *)*plVar21;
    plVar22 = (long *)0x0;
    if (((long *)plVar21[1])[1] != 0) {
      plVar22 = (long *)plVar21[1];
    }
    plVar21 = (long *)0x0;
    if (*plVar24 != 0) {
      plVar21 = plVar24;
    }
    uVar12 = 1;
  }
  FUN_109ef87e8(aplStack_90,uVar12,plVar22,uVar15,plVar21);
  for (; *aplStack_90[0] != 0; aplStack_90[0] = (long *)*aplStack_90[0]) {
    FUN_109ef8c00(aplStack_90[0],uStack_70);
  }
LAB_109f30568:
  *param_3 = 1;
LAB_109f30570:
  uVar23 = 1;
  goto LAB_109f2fd78;
}



/* Entry: 109f3065c; end: 109f30853;  */

bool FUN_109f3065c(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  if (*(int *)(param_2 + 0x68) == 1) {
    return true;
  }
  if (*(int *)(param_2 + 0x68) == 2) {
    return false;
  }
  piVar3 = *(int **)(param_2 + 0x60);
  lVar6 = *(long *)(param_1 + 0x28);
  if ((*(uint *)(lVar6 + 0x98) != 0) && ((char)piVar3[4] == '\x01')) {
    plVar7 = (long *)**(long **)(param_2 + 0x20);
    if (plVar7 != (long *)0x0) {
      bVar2 = false;
      plVar11 = *(long **)(param_2 + 0x20);
      do {
        if (plVar11 != (long *)**(long **)(piVar3 + 6)) {
          if ((int)plVar11[2] != 0) goto LAB_109f307e8;
          if (!bVar2) {
            plVar11 = (long *)plVar11[4];
LAB_109f306dc:
            do {
              plVar10 = plVar11;
              plVar11 = (long *)*plVar10;
              if (plVar11 == (long *)0x0) {
                bVar2 = false;
                goto LAB_109f307dc;
              }
              if ((int)plVar10[3] != 4) {
                if (((int)plVar10[3] == 3) &&
                   (uVar12 = (ulong)*(uint *)(plVar10 + 0xc), *(uint *)(plVar10 + 0xc) != 0)) {
                  puVar8 = (undefined8 *)(plVar10[0xb] + 0x18);
                  do {
                    if (*(int *)(*(long *)*puVar8 + 0x18) != 5) goto LAB_109f306d0;
                    uVar12 = uVar12 - 1;
                    puVar8 = puVar8 + 5;
                  } while (uVar12 != 0);
                }
                goto LAB_109f306dc;
              }
              iVar1 = (int)plVar10[5];
              if (iVar1 < 0x202) {
                if (iVar1 == 0x112) {
LAB_109f30780:
                  lVar9 = *(long *)plVar10[0x13];
                  if ((*(uint *)(lVar9 + 0x2c) & 0x100280) != 0) {
                    do {
                      iVar1 = *(int *)(lVar9 + 0x28);
                      if (iVar1 == 1 || iVar1 == 3) {
                        if (*(int *)(**(long **)(lVar9 + 0x70) + 0x18) != 5) goto LAB_109f306d0;
                      }
                      else if (iVar1 == 0) break;
                      lVar9 = **(long **)(lVar9 + 0x50);
                    } while (*(int *)(lVar9 + 0x18) == 1);
                  }
                  goto LAB_109f306dc;
                }
                if (iVar1 != 0x1d1) {
                  if (iVar1 == 0x12a) break;
                  goto LAB_109f306dc;
                }
              }
              else {
                if (iVar1 == 0x26f) goto LAB_109f30780;
                if (iVar1 != 0x202) goto LAB_109f306dc;
              }
            } while (*(int *)(*(long *)plVar10[0x17] + 0x18) == 5);
          }
LAB_109f306d0:
          bVar2 = true;
        }
LAB_109f307dc:
        plVar10 = (long *)*plVar7;
        plVar11 = plVar7;
        plVar7 = plVar10;
      } while (plVar10 != (long *)0x0);
      uVar4 = *(uint *)(lVar6 + 0x98);
      if (bVar2) goto LAB_109f30804;
    }
  }
LAB_109f307e8:
  uVar4 = *(uint *)(lVar6 + 0x94);
  if ((*(uint *)(lVar6 + 0x9c) != 0) && (uVar4 = *(uint *)(lVar6 + 0x9c), (char)piVar3[1] == '\0'))
  {
    uVar4 = *(uint *)(lVar6 + 0x94);
  }
LAB_109f30804:
  uVar5 = piVar3[3];
  if (uVar5 == 0) {
    uVar5 = piVar3[2];
  }
  if (((*(char *)((long)piVar3 + 0x11) == '\x01') && (piVar3[2] == 0)) && (uVar5 <= uVar4)) {
    return true;
  }
  return uVar5 <= uVar4 && *piVar3 * uVar5 <= uVar4 * 0x1a;
}



/* Entry: 109f30854; end: 109f31567;  */

void FUN_109f30854(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uStack_100;
  ulong uStack_e8;
  long *aplStack_e0 [4];
  undefined8 uStack_c0;
  long *aplStack_b8 [4];
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  lVar18 = *(long *)(param_2[0xc] + 0x28);
  FUN_109f31568(param_2);
  plVar19 = (long *)(lVar18 + -0x28);
  lVar9 = *plVar19;
  plVar16 = param_2 + 6;
  plVar3 = (long *)0x0;
  if ((long *)param_2[4] != plVar16) {
    plVar3 = (long *)param_2[4];
  }
  if (*(int *)(lVar9 + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    plVar4 = (long *)(lVar9 + 8);
    lVar9 = 0;
    if (*(long *)(*plVar4 + 8) != 0) {
      lVar9 = *plVar4;
    }
    uVar8 = 1;
  }
  FUN_109ef87e8(aplStack_b8,0,plVar3,uVar8,lVar9);
  lVar9 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  plVar3 = param_2;
  FUN_109f31654(param_2,plVar19,aplStack_b8,aplStack_e0,lVar9,param_3);
  if (*(int *)(param_2[0xc] + 8) != 0) {
    if ((long *)param_2[4] == plVar16) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_2[7];
    }
    FUN_109ef8954(aplStack_b8,1,lVar7);
    if ((long *)param_2[4] == plVar16) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_2[7];
    }
    FUN_109ef8954(aplStack_e0,1,lVar7);
    iVar2 = (int)param_2[2];
    plStack_70 = param_2;
    while (iVar2 != 3) {
      plStack_70 = (long *)plStack_70[3];
      iVar2 = (int)plStack_70[2];
    }
    plStack_90 = (long *)0x0;
    puStack_88 = (undefined8 *)0x0;
    puStack_78 = *(undefined8 **)(plStack_70[4] + 0x18);
    uStack_80 = 0;
    plVar4 = param_2;
    FUN_109ecc4d4();
    plVar10 = param_2;
    FUN_109ecc644();
    if (plVar4 != plVar10) {
      do {
        plVar20 = (long *)plVar4[4];
        plVar10 = (long *)*plVar20;
        if (plVar10 != (long *)0x0) {
          do {
            plVar11 = (long *)0x0;
            plVar13 = plVar20;
            if (*plVar10 != 0) {
              plVar11 = plVar10;
            }
            do {
              plVar20 = plVar11;
              if (((int)plVar13[3] == 4) &&
                 (((iVar2 = (int)plVar13[5], iVar2 == 0x54 || (iVar2 == 0x26f)) || (iVar2 == 0x112))
                 )) {
                lVar7 = *(long *)plVar13[0x13];
                if (*(int *)(lVar7 + 0x18) != 1) {
                  lVar7 = 0;
                }
                plVar10 = plVar19;
                FUN_109f31874(plVar19,lVar7,param_3);
                if ((int)plVar10 == 0) {
LAB_109f30b10:
                  if ((int)plVar13[5] == 0x54) {
                    lVar7 = *(long *)plVar13[0x17];
                    if (*(int *)(lVar7 + 0x18) != 1) {
                      lVar7 = 0;
                    }
                    plVar10 = plVar19;
                    FUN_109f31874(plVar19,lVar7,param_3);
                    if ((int)plVar10 != 0) goto LAB_109f30b40;
                  }
                }
                else {
                  if (iVar2 == 0x112) {
                    puVar15 = (undefined8 *)**(undefined8 **)(*plVar19 + 0x38);
                    plStack_90 = (long *)0x2;
                    puStack_88 = puVar15;
                    if ((*(int *)(puVar15 + 5) == 0x14a) && ((*(byte *)(lVar18 + -8) & 1) == 0)) {
                      uVar8 = puVar15[0xd];
                      uStack_100 = uStack_100 & 0xffffffff00000000;
                      uVar14 = puVar15[0x13];
                      uStack_e8 = uStack_e8 & 0xffffffff00000000;
                      func_0x000109f3193c(uVar8,uStack_100,plVar13);
                      puVar6 = puStack_78;
                      if ((int)uVar8 == 0) {
                        func_0x000109f3193c(uVar14,uStack_e8,plVar13);
                        if ((int)uVar14 == 0) goto LAB_109f30a74;
                        uVar8 = 2;
                        puVar6 = puStack_78;
                        puVar5 = puVar15;
                      }
                      else {
                        puVar5 = (undefined8 *)*puStack_78;
                        FUN_109f6600c(puVar5,0x50,8);
                        if (puVar5 != (undefined8 *)0x0) {
                          puVar5[7] = 0;
                          puVar5[6] = 0;
                          puVar5[9] = 0;
                          puVar5[8] = 0;
                          puVar5[3] = 0;
                          puVar5[2] = 0;
                          puVar5[5] = 0;
                          puVar5[4] = 0;
                          puVar5[1] = 0;
                          *puVar5 = 0;
                        }
                        *(undefined4 *)(puVar5 + 3) = 5;
                        puVar5[1] = 0;
                        puVar5[2] = 0;
                        *puVar5 = 0;
                        FUN_109ecb048(puVar5,puVar5 + 5,1,1);
                        puVar5[9] = 1;
                        FUN_109ecb4f0(2,puVar15,puVar5);
                        plStack_90 = (long *)0x3;
                        plVar10 = (long *)puVar15[0xd];
                        if ((long *)plVar10[2] + -1 != plVar10) {
                          plVar11 = puVar5 + 6;
                          plVar12 = (long *)plVar10[2];
                          do {
                            lVar7 = *plVar12;
                            plVar1 = (long *)plVar12[1];
                            *(long **)(lVar7 + 8) = plVar1;
                            *plVar1 = lVar7;
                            plVar12[1] = (long)plVar11;
                            plVar12[2] = (long)(puVar5 + 5);
                            *plVar12 = 0;
                            lVar7 = *plVar11;
                            *plVar12 = lVar7;
                            *(long **)(lVar7 + 8) = plVar12;
                            *plVar11 = (long)plVar12;
                            plVar12 = plVar1;
                          } while (plVar1 + -1 != plVar10);
                        }
                        puStack_88 = puVar5;
                        func_0x000109f3193c(uVar14,uStack_e8,plVar13);
                        if ((uVar14 & 1) == 0) goto LAB_109f30b48;
                        uVar8 = 3;
                      }
                      puVar6 = (undefined8 *)*puVar6;
                      FUN_109f6600c(puVar6,0x50,8);
                      if (puVar6 != (undefined8 *)0x0) {
                        puVar6[7] = 0;
                        puVar6[6] = 0;
                        puVar6[9] = 0;
                        puVar6[8] = 0;
                        puVar6[3] = 0;
                        puVar6[2] = 0;
                        puVar6[5] = 0;
                        puVar6[4] = 0;
                        puVar6[1] = 0;
                        *puVar6 = 0;
                      }
                      *(undefined4 *)(puVar6 + 3) = 5;
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      *puVar6 = 0;
                      FUN_109ecb048(puVar6,puVar6 + 5,1,1);
                      puVar6[9] = 1;
                      FUN_109ecb4f0(uVar8,puVar5,puVar6);
                      plStack_90 = (long *)0x3;
                      plVar10 = (long *)puVar15[0x13];
                      puStack_88 = puVar6;
                      if ((long *)plVar10[2] + -1 != plVar10) {
                        plVar11 = puVar6 + 6;
                        plVar13 = (long *)plVar10[2];
                        do {
                          lVar7 = *plVar13;
                          plVar12 = (long *)plVar13[1];
                          *(long **)(lVar7 + 8) = plVar12;
                          *plVar12 = lVar7;
                          plVar13[1] = (long)plVar11;
                          plVar13[2] = (long)(puVar6 + 5);
                          *plVar13 = 0;
                          lVar7 = *plVar11;
                          *plVar13 = lVar7;
                          *(long **)(lVar7 + 8) = plVar13;
                          *plVar11 = (long)plVar13;
                          plVar13 = plVar12;
                        } while (plVar12 + -1 != plVar10);
                      }
                      goto LAB_109f30b48;
                    }
LAB_109f30a74:
                    puVar15 = (undefined8 *)*puStack_78;
                    FUN_109f6600c(puVar15,0x48,8);
                    *(undefined4 *)(puVar15 + 3) = 7;
                    puVar15[1] = 0;
                    puVar15[2] = 0;
                    *puVar15 = 0;
                    FUN_109ecb048();
                    FUN_109ece5ec(&plStack_90,puVar15);
                    if ((long *)plVar13[8] + -1 != plVar13 + 6) {
                      plVar10 = puVar15 + 6;
                      plVar11 = (long *)plVar13[8];
                      do {
                        lVar7 = *plVar11;
                        plVar12 = (long *)plVar11[1];
                        *(long **)(lVar7 + 8) = plVar12;
                        *plVar12 = lVar7;
                        plVar11[1] = (long)plVar10;
                        plVar11[2] = (long)(puVar15 + 5);
                        *plVar11 = 0;
                        lVar7 = *plVar10;
                        *plVar11 = lVar7;
                        *(long **)(lVar7 + 8) = plVar11;
                        *plVar10 = (long)plVar11;
                        plVar11 = plVar12;
                      } while (plVar12 + -1 != plVar13 + 6);
                    }
                    goto LAB_109f30b10;
                  }
LAB_109f30b40:
                  FUN_109ecb9c0(plVar13);
                }
              }
LAB_109f30b48:
              if (plVar20 == (long *)0x0) goto LAB_109f30d48;
              plVar10 = (long *)*plVar20;
              plVar11 = (long *)0x0;
              plVar13 = plVar20;
            } while (plVar10 == (long *)0x0);
          } while( true );
        }
LAB_109f30d48:
        FUN_109ecc434();
        plVar10 = param_2;
        FUN_109ecc644();
      } while (plVar4 != plVar10);
    }
    plVar4 = (long *)0x0;
    if ((long *)param_2[4] != plVar16) {
      plVar4 = (long *)param_2[4];
    }
    lVar7 = *plVar19;
    if (*(int *)(lVar7 + 0x10) == 0) {
      uVar8 = 0;
    }
    else {
      plVar19 = (long *)(lVar7 + 8);
      lVar7 = 0;
      if (*(long *)(*plVar19 + 8) != 0) {
        lVar7 = *plVar19;
      }
      uVar8 = 1;
    }
    FUN_109ef87e8(aplStack_b8,0,plVar4,uVar8,lVar7);
    plVar19 = (long *)0x0;
    if ((long *)param_2[4] == plVar16) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_2[7];
      plVar19 = (long *)param_2[4];
    }
    FUN_109ef87e8(aplStack_e0,0,plVar19,1,lVar7);
  }
  if ((int)plVar3[2] == 2) {
    lVar7 = 0;
    if (*(long *)(plVar3[1] + 8) != 0) {
      lVar7 = plVar3[1];
    }
  }
  else {
    if (*(char *)(lVar18 + -8) == '\x01') {
      if ((long *)plVar3[9] != plVar3 + 0xb) {
        lVar7 = plVar3[0xc];
        goto LAB_109f30e44;
      }
    }
    else if ((long *)plVar3[0xd] != plVar3 + 0xf) {
      lVar7 = plVar3[0x10];
      goto LAB_109f30e44;
    }
    lVar7 = 0;
  }
LAB_109f30e44:
  puVar15 = param_1;
  FUN_109ecae20();
  FUN_109ef838c(1,lVar7,puVar15);
  *(undefined1 *)((long)puVar15 + 0x6c) = 1;
  if ((undefined8 *)puVar15[4] == puVar15 + 6) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)puVar15[7];
  }
  if ((int)plVar16[2] == 0) {
    uVar8 = 1;
    plVar3 = plVar16;
  }
  else {
    uVar8 = 0;
    plVar3 = (long *)0x0;
    if (*(long *)*plVar16 != 0) {
      plVar3 = (long *)*plVar16;
    }
  }
  FUN_109ecfeb0(&plStack_90,aplStack_b8,param_2[3],lVar9);
  FUN_109ef8954(&plStack_90,uVar8,plVar3);
  if ((undefined8 *)puVar15[4] == puVar15 + 6) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)puVar15[7];
  }
  if ((int)plVar16[2] == 0) {
    uVar8 = 1;
    plVar3 = plVar16;
  }
  else {
    uVar8 = 0;
    plVar3 = (long *)0x0;
    if (*(long *)*plVar16 != 0) {
      plVar3 = (long *)*plVar16;
    }
  }
  FUN_109ecfeb0(&plStack_90,aplStack_e0,param_2[3],lVar9);
  FUN_109ef8954(&plStack_90,uVar8,plVar3);
  param_1 = (undefined8 *)*param_1;
  FUN_109f6600c(param_1,0x60,8);
  *(undefined4 *)(param_1 + 3) = 6;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  uVar17 = *(undefined8 *)(lVar18 + -0x18);
  uVar8 = uVar17;
  (**(code **)(lVar9 + 8))(uVar17);
  lVar18 = lVar9;
  FUN_109f64fdc(lVar9,uVar8,uVar17);
  FUN_109ecb4f0(1,*(undefined8 *)(lVar18 + 0x10),param_1);
  for (; plVar16 = aplStack_e0[0], *aplStack_b8[0] != 0; aplStack_b8[0] = (long *)*aplStack_b8[0]) {
    FUN_109ef8c00(aplStack_b8[0],uStack_98);
  }
  for (; *plVar16 != 0; plVar16 = (long *)*plVar16) {
    FUN_109ef8c00(plVar16,uStack_c0);
  }
  if ((int)param_2[2] == 0) {
    uVar8 = 0;
    uVar17 = 1;
    plVar16 = param_2;
  }
  else {
    uVar17 = 0;
    plVar3 = (long *)*param_2;
    plVar16 = (long *)0x0;
    if (((long *)param_2[1])[1] != 0) {
      plVar16 = (long *)param_2[1];
    }
    param_2 = (long *)0x0;
    if (*plVar3 != 0) {
      param_2 = plVar3;
    }
    uVar8 = 1;
  }
  FUN_109ef87e8(&plStack_90,uVar8,plVar16,uVar17,param_2);
  for (plVar16 = plStack_90; *plVar16 != 0; plVar16 = (long *)*plVar16) {
    FUN_109ef8c00(plVar16,plStack_70);
  }
  FUN_109f65aa4(lVar9 + -0x30);
  FUN_109f65ae0(lVar9 + -0x30);
  return;
}



/* Entry: 109f31568; end: 109f31653;  */

void FUN_109f31568(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  iVar1 = *(int *)(param_1 + 2);
  puVar3 = param_1;
  while (iVar1 != 3) {
    puVar3 = (undefined8 *)puVar3[3];
    iVar1 = *(int *)(puVar3 + 2);
  }
  FUN_109efaa24();
  FUN_109f46d28(param_1);
  plVar7 = (long *)param_1[4];
  plVar5 = (long *)*plVar7;
  if (plVar5 != (long *)0x0) {
    do {
      plVar4 = plVar7;
      plVar2 = (long *)0x0;
      if (*plVar5 != 0) {
        plVar2 = plVar5;
      }
      do {
        plVar7 = plVar2;
        if ((int)plVar4[2] == 0) {
          func_0x000109efe60c();
        }
        if (plVar7 == (long *)0x0) goto LAB_109f315e8;
        plVar5 = (long *)*plVar7;
        plVar4 = plVar7;
        plVar2 = (long *)0x0;
      } while (plVar5 == (long *)0x0);
    } while( true );
  }
LAB_109f315e8:
  plVar5 = (long *)0x0;
  if (*(long *)*param_1 != 0) {
    plVar5 = (long *)*param_1;
  }
  func_0x000109efe60c(plVar5);
  if ((undefined8 *)param_1[4] == param_1 + 6) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1[7];
  }
  if ((*(long *)(lVar6 + 0x20) != lVar6 + 0x30) &&
     (plVar5 = *(long **)(lVar6 + 0x38), plVar5 != (long *)0x0)) {
    switch((int)plVar5[3]) {
    case 6:
      if (((int)plVar5[5] == 5) && (plVar5[9] != 0)) {
        plVar7 = (long *)plVar5[8];
        lVar6 = plVar5[7];
        *(long **)(lVar6 + 8) = plVar7;
        *plVar7 = lVar6;
        plVar5[7] = 0;
        plVar5[8] = 0;
      }
      lVar6 = *plVar5;
      plVar7 = (long *)plVar5[1];
      *(long **)(lVar6 + 8) = plVar7;
      *plVar7 = lVar6;
      *plVar5 = 0;
      plVar5[1] = 0;
      if ((int)plVar5[3] == 6) {
        lVar6 = plVar5[2];
        func_0x000109ef8330(lVar6,1);
        for (; *(int *)(lVar6 + 0x10) != 3; lVar6 = *(long *)(lVar6 + 0x18)) {
        }
        *(undefined4 *)(lVar6 + 0x84) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 109f31654; end: 109f31873;  */

long FUN_109f31654(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  plVar3 = (long *)*param_2;
  if ((int)plVar3[2] == 0) {
    uVar2 = 1;
    plVar4 = plVar3;
  }
  else {
    uVar2 = 0;
    plVar4 = (long *)0x0;
    if (*(long *)*plVar3 != 0) {
      plVar4 = (long *)*plVar3;
    }
  }
  if (*(long *)(param_1 + 0x20) == param_1 + 0x30) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_109ef87e8(auStack_a0,uVar2,plVar4,1,uVar5);
  FUN_109ef8954(auStack_a0,1,param_2[3]);
  FUN_109ecb9c0(*(undefined8 *)(param_2[2] + 0x38));
  lVar1 = 0;
  if (*(long *)(param_1 + 0x20) == param_1 + 0x30) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  FUN_109ef87e8(param_4,0,lVar1,1,uVar2);
  lVar1 = param_1;
  do {
    if (param_6 == 0) {
      return lVar1;
    }
    if (*(int *)(lVar1 + 0x10) == 2) {
      lVar6 = 0;
      if (*(long *)(*(long *)(lVar1 + 8) + 8) != 0) {
        lVar6 = *(long *)(lVar1 + 8);
      }
    }
    else if (*(char *)(param_2 + 4) == '\x01') {
      if (*(long *)(lVar1 + 0x48) == lVar1 + 0x58) {
LAB_109f31784:
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(lVar1 + 0x60);
      }
    }
    else {
      if (*(long *)(lVar1 + 0x68) == lVar1 + 0x78) goto LAB_109f31784;
      lVar6 = *(long *)(lVar1 + 0x80);
    }
    FUN_109ecfeb0(auStack_78,param_3,*(undefined8 *)(param_1 + 0x18),param_5);
    FUN_109ef8954(auStack_78,1,lVar6);
    if (*(int *)(lVar1 + 0x10) == 2) {
      lVar6 = 0;
      if (*(long *)(*(long *)(lVar1 + 8) + 8) != 0) {
        lVar6 = *(long *)(lVar1 + 8);
      }
    }
    else if (*(char *)(param_2 + 4) == '\x01') {
      if (*(long *)(lVar1 + 0x48) == lVar1 + 0x58) {
LAB_109f31808:
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(lVar1 + 0x60);
      }
    }
    else {
      if (*(long *)(lVar1 + 0x68) == lVar1 + 0x78) goto LAB_109f31808;
      lVar6 = *(long *)(lVar1 + 0x80);
    }
    FUN_109ecfeb0(auStack_c8,param_4,*(undefined8 *)(param_1 + 0x18),param_5);
    lVar1 = 0;
    if (*(long *)(*(long *)(lStack_b0 + 8) + 8) != 0) {
      lVar1 = *(long *)(lStack_b0 + 8);
    }
    FUN_109ef8954(auStack_c8,1,lVar6);
    param_6 = param_6 + -1;
  } while( true );
}



/* Entry: 109f31874; end: 109f319bf;  */

bool FUN_109f31874(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return false;
  }
  do {
    if (*(int *)(param_2 + 0x28) == 1) {
      lVar2 = 0x80;
      if (*(char *)(param_1 + 0x21) == '\0') {
        lVar2 = 0x50;
      }
      if (*(long *)(param_2 + 0x70) == *(long *)(*(long *)(param_1 + 8) + lVar2 + 0x18)) {
        lVar2 = *(long *)(**(long **)(param_2 + 0x50) + 0x30);
        uVar1 = (uint)*(byte *)(lVar2 + 0xd);
        if (((*(byte *)(lVar2 + 0xd) < 2) || (*(char *)(lVar2 + 0xe) != '\x01')) ||
           (0xb < (*(uint *)(lVar2 + 4) & 0xfc))) {
          FUN_109eca23c(lVar2);
          uVar1 = (uint)lVar2;
        }
        return uVar1 <= param_3;
      }
    }
    else if (*(int *)(param_2 + 0x28) == 0) {
      return false;
    }
    param_2 = **(long **)(param_2 + 0x50);
    if (*(int *)(param_2 + 0x18) != 1) {
      return false;
    }
  } while( true );
}



/* Entry: 109f319c0; end: 109f3275f;  */

uint FUN_109f319c0(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  long **pplVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  bool bVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  uint auStack_c0 [11];
  uint uStack_94;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  plVar35 = *(long **)(param_1 + 0x178);
  plVar36 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar36 == (long *)0x0) {
      return 0;
    }
    lVar32 = plVar35[6];
    if (lVar32 != 0) break;
    plVar35 = plVar36;
    plVar36 = (long *)*plVar36;
  }
  uVar26 = 0;
  do {
    lVar31 = *(long *)(lVar32 + 0x30);
    if (lVar31 == 0) {
LAB_109f321fc:
      uVar15 = 0;
      uVar20 = 0xfffffff7;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar32 + 0x20) + 0x18);
      lVar17 = lVar31;
      FUN_109ecc434();
      bVar33 = false;
      do {
        lVar9 = lVar17;
        plVar36 = *(long **)(lVar31 + 8);
        lVar17 = plVar36[1];
        bVar8 = 0;
        if (lVar17 != 0) {
          if ((int)plVar36[2] == 1) {
            lVar3 = 0;
            if (*(long *)(lVar17 + 8) != 0) {
              lVar3 = lVar17;
            }
            lVar2 = lVar3 + 0x30;
            if (((*(long *)(lVar17 + 0x20) == lVar2) ||
                (*(int *)(*(long *)(lVar17 + 0x38) + 0x18) != 6)) ||
               (1 < *(uint *)(*(long *)(lVar17 + 0x38) + 0x28))) {
              lVar17 = plVar36[3];
              if ((*(int *)(lVar17 + 0x10) == 1) && (iVar7 = *(int *)(lVar17 + 0x40), iVar7 != 2)) {
                plVar18 = (long *)plVar36[0xd];
                plVar34 = plVar36 + 0xf;
                if ((plVar18 == plVar34) ||
                   (((long *)*plVar18 != plVar34 || ((long *)plVar18[4] != plVar18 + 6))))
                goto LAB_109f31b30;
                plVar21 = (long *)plVar36[9];
                if ((plVar21 != plVar36 + 0xb) &&
                   (((long *)*plVar21 == plVar36 + 0xb && ((long *)plVar21[4] == plVar21 + 6))))
                goto LAB_109f31b30;
                plVar22 = *(long **)(lVar17 + 0x48);
                iVar25 = 4;
                plVar21 = plVar22;
                do {
                  plVar21 = (long *)*plVar21;
                  iVar25 = iVar25 + -1;
                } while (plVar21 != (long *)0x0);
                if (iVar25 != 0) goto LAB_109f31b30;
                plVar23 = *(long **)(lVar17 + 0x68);
                plVar21 = (long *)(lVar17 + 0x78);
                if (((plVar23 == plVar21) || ((long *)*plVar23 != plVar21)) ||
                   ((long *)plVar23[4] != plVar23 + 6)) goto LAB_109f31b30;
                if (plVar22 == (long *)(lVar17 + 0x58)) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = *(long *)(lVar17 + 0x60);
                }
                plVar13 = *(long **)(lVar11 + 0x20);
                if (((plVar13 != (long *)(lVar11 + 0x30)) && (*(long *)(lVar11 + 0x38) != 0)) &&
                   (*(int *)(*(long *)(lVar11 + 0x38) + 0x18) != 8)) goto LAB_109f31b30;
                plVar14 = (long *)*plVar13;
                plVar19 = plVar13;
                plVar6 = plVar14;
                if (iVar7 != 1) {
                  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
                    plVar29 = (long *)plVar19[5];
                    do {
                      plVar28 = plVar29;
                      if ((long *)*plVar28 == (long *)0x0) {
                        plVar28 = (long *)0x0;
                        break;
                      }
                      plVar29 = (long *)*plVar28;
                    } while ((long *)plVar28[2] != plVar18);
                    for (plVar29 = (long *)plVar19[0xb]; plVar29 != plVar19 + 10;
                        plVar29 = (long *)plVar29[1]) {
                      if ((plVar29[-1] & 1U) == 0) {
                        for (plVar30 = *(long **)(plVar29[-1] + 0x28); (long *)plVar30[2] != plVar23
                            ; plVar30 = (long *)*plVar30) {
                        }
                        if (plVar30[6] != plVar28[6]) goto LAB_109f31b30;
                      }
                    }
                    plVar19 = plVar6;
                  }
                }
                uVar5 = param_3;
                uVar4 = param_4;
                if (iVar7 == 1) {
                  uVar4 = 1;
                  uVar5 = 1;
                }
                plVar18 = (long *)0x0;
                if (plVar22 != (long *)(lVar17 + 0x58)) {
                  plVar18 = plVar22;
                }
                uStack_94 = 0;
                plVar22 = plVar18;
                func_0x000109f3225c(plVar18,&uStack_94,param_2 != 0,uVar5,uVar4);
                if (((int)plVar22 == 0) || ((iVar7 != 1 && (param_2 < uStack_94))))
                goto LAB_109f31b30;
                if (plVar14 == (long *)0x0) {
LAB_109f32104:
                  plVar34 = (long *)plVar36[1];
                  plStack_70 = (long *)0x0;
                  if (plVar34[1] != 0) {
                    plStack_70 = plVar34;
                  }
                  iVar7 = (int)plVar34[2];
                  plStack_90 = (long *)0x1;
                  plStack_88 = plStack_70;
                  goto joined_r0x000109f32124;
                }
                do {
                  plVar22 = (long *)0x0;
                  if ((long *)plVar36[0xd] != plVar34) {
                    plVar22 = (long *)plVar36[0xd];
                  }
                  plVar23 = (long *)plVar13[5];
                  do {
                    plVar19 = plVar23;
                    if ((long *)*plVar19 == (long *)0x0) {
                      plVar19 = (long *)0x0;
                      break;
                    }
                    plVar23 = (long *)*plVar19;
                  } while ((long *)plVar19[2] != plVar22);
                  plVar22 = plVar13 + 10;
                  plVar23 = (long *)plVar13[0xb];
                  if (plVar23 != plVar22) {
                    do {
                      puVar1 = (ulong *)(plVar23 + -1);
                      plVar23 = (long *)plVar23[1];
                      if ((*puVar1 & 1) == 0) {
                        plVar6 = (long *)0x0;
                        if (*(long **)(lVar17 + 0x68) != plVar21) {
                          plVar6 = *(long **)(lVar17 + 0x68);
                        }
                        plVar14 = *(long **)(*puVar1 + 0x28);
                        do {
                          plVar29 = plVar14;
                          if ((long *)*plVar29 == (long *)0x0) {
                            plVar29 = (long *)0x0;
                            break;
                          }
                          plVar14 = (long *)*plVar29;
                        } while ((long *)plVar29[2] != plVar6);
                        if (plVar29[6] == plVar19[6]) {
                          plVar14 = plVar29 + 4;
                          lVar31 = *plVar14;
                          plVar6 = (long *)plVar29[5];
                          *(long **)(lVar31 + 8) = plVar6;
                          *plVar6 = lVar31;
                          plVar29[5] = (long)plVar22;
                          plVar29[6] = (long)(plVar13 + 9);
                          *plVar14 = 0;
                          lVar31 = *plVar22;
                          *plVar14 = lVar31;
                          *(long **)(lVar31 + 8) = plVar14;
                          *plVar22 = (long)plVar14;
                        }
                      }
                    } while (plVar23 != plVar22);
                    plVar14 = (long *)*plVar13;
                  }
                  plVar13 = plVar14;
                  plVar14 = (long *)*plVar13;
                } while (plVar14 != (long *)0x0);
                if ((int)plVar36[2] != 0) goto LAB_109f32104;
                plStack_90 = (long *)0x0;
                plStack_70 = plVar36;
                plStack_88 = plVar36;
                do {
                  plStack_70 = (long *)plStack_70[3];
                  iVar7 = (int)plStack_70[2];
joined_r0x000109f32124:
                } while (iVar7 != 3);
                uStack_78 = *(undefined8 *)(plStack_70[4] + 0x18);
                uStack_80 = 0;
                pplVar10 = &plStack_90;
                FUN_109ece1b0(pplVar10,0x120,plVar36[7],*(undefined8 *)(lVar17 + 0x38));
                plVar21 = plVar36 + 5;
                lVar31 = *plVar21;
                plVar34 = (long *)plVar36[6];
                *(long **)(lVar31 + 8) = plVar34;
                *plVar34 = lVar31;
                *plVar21 = 0;
                plVar36[7] = (long)pplVar10;
                pplVar10 = pplVar10 + 1;
                plVar34 = *pplVar10;
                *plVar21 = (long)plVar34;
                plVar36[6] = (long)pplVar10;
                plVar34[1] = (long)plVar21;
                *pplVar10 = plVar21;
                FUN_109ef87e8(auStack_c0,0,plVar18,1,lVar11);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  uVar27 = 0;
                }
                else {
                  plVar36 = (long *)(lVar17 + 8);
                  lVar17 = 0;
                  if (*(long *)(*plVar36 + 8) != 0) {
                    lVar17 = *plVar36;
                  }
                  uVar27 = 1;
                }
                FUN_109ef8954(auStack_c0,uVar27,lVar17);
LAB_109f321e0:
                bVar8 = 1;
                goto LAB_109f31bfc;
              }
LAB_109f31b30:
              iVar7 = (int)plVar36[8];
              if (iVar7 != 2) {
                plVar18 = (long *)plVar36[9];
                plVar21 = (long *)plVar36[0xd];
                plVar34 = (long *)0x0;
                if (plVar21 != plVar36 + 0xf) {
                  plVar34 = plVar21;
                }
                plVar22 = (long *)0x0;
                if (plVar18 == plVar36 + 0xb) {
                  plVar23 = (long *)0x0;
                }
                else {
                  plVar23 = (long *)plVar36[0xc];
                  plVar22 = plVar18;
                }
                if (plVar23 == plVar22) {
                  if (plVar21 == plVar36 + 0xf) {
                    plVar23 = (long *)0x0;
                  }
                  else {
                    plVar23 = (long *)plVar36[0x10];
                  }
                  if (plVar23 == plVar34) {
                    uVar5 = param_3;
                    uVar4 = param_4;
                    if (iVar7 == 1) {
                      uVar4 = 1;
                      uVar5 = 1;
                    }
                    auStack_c0[0] = 0;
                    plVar23 = plVar22;
                    func_0x000109f3225c(plVar22,auStack_c0,param_2);
                    if ((((int)plVar23 != 0) &&
                        (func_0x000109f3225c(plVar34,auStack_c0,param_2,uVar5,uVar4),
                        (int)plVar34 != 0)) && ((iVar7 == 1 || (auStack_c0[0] <= param_2)))) {
                      plVar34 = (long *)plVar18[4];
                      plVar18 = (long *)*plVar34;
                      if (plVar18 != (long *)0x0) {
                        plVar23 = (long *)0x0;
                        if (*plVar18 != 0) {
                          plVar23 = plVar18;
                        }
                        while( true ) {
                          plVar13 = plVar23;
                          puVar24 = (undefined8 *)plVar34[1];
                          plVar18[1] = (long)puVar24;
                          *puVar24 = plVar18;
                          plVar34[1] = 0;
                          plVar34[2] = lVar3;
                          *plVar34 = lVar2;
                          puVar24 = *(undefined8 **)(lVar3 + 0x38);
                          plVar34[1] = (long)puVar24;
                          *puVar24 = plVar34;
                          *(long **)(lVar3 + 0x38) = plVar34;
                          FUN_109f32760(plVar34,plVar36[7],0);
                          if (plVar13 == (long *)0x0) break;
                          plVar18 = (long *)*plVar13;
                          plVar23 = (long *)0x0;
                          plVar34 = plVar13;
                          if ((plVar18 != (long *)0x0) && (plVar23 = (long *)0x0, *plVar18 != 0)) {
                            plVar23 = plVar18;
                          }
                        }
                      }
                      plVar34 = (long *)plVar21[4];
                      plVar18 = (long *)*plVar34;
                      if (plVar18 != (long *)0x0) {
                        plVar21 = (long *)0x0;
                        if (*plVar18 != 0) {
                          plVar21 = plVar18;
                        }
                        while( true ) {
                          plVar23 = plVar21;
                          puVar24 = (undefined8 *)plVar34[1];
                          plVar18[1] = (long)puVar24;
                          *puVar24 = plVar18;
                          plVar34[1] = 0;
                          plVar34[2] = lVar3;
                          *plVar34 = lVar2;
                          puVar24 = *(undefined8 **)(lVar3 + 0x38);
                          plVar34[1] = (long)puVar24;
                          *puVar24 = plVar34;
                          *(long **)(lVar3 + 0x38) = plVar34;
                          FUN_109f32760(plVar34,plVar36[7],1);
                          if (plVar23 == (long *)0x0) break;
                          plVar18 = (long *)*plVar23;
                          plVar21 = (long *)0x0;
                          plVar34 = plVar23;
                          if ((plVar18 != (long *)0x0) && (plVar21 = (long *)0x0, *plVar18 != 0)) {
                            plVar21 = plVar18;
                          }
                        }
                      }
                      plVar18 = *(long **)(lVar31 + 0x20);
                      plVar34 = (long *)*plVar18;
                      if ((plVar34 != (long *)0x0) && ((int)plVar18[3] == 8)) {
                        if (*plVar34 == 0) {
                          plVar34 = (long *)0x0;
                        }
                        else if (*(int *)(plVar34 + 3) != 8) {
                          plVar34 = (long *)0x0;
                        }
                        while( true ) {
                          plVar21 = plVar34;
                          lVar31 = lVar16;
                          FUN_109ecaef8(lVar16,0x71);
                          lVar17 = plVar36[7];
                          *(undefined8 *)(lVar31 + 0x50) = 0;
                          *(undefined8 *)(lVar31 + 0x58) = 0;
                          *(undefined8 *)(lVar31 + 0x60) = 0;
                          *(long *)(lVar31 + 0x68) = lVar17;
                          *(undefined8 *)(lVar31 + 0x70) = 0;
                          *(undefined8 *)(lVar31 + 0x78) = 0;
                          plVar34 = (long *)plVar18[5];
                          lVar17 = *plVar34;
                          while (lVar17 != 0) {
                            lVar17 = 0x30;
                            if ((long *)plVar34[2] != plVar22) {
                              lVar17 = 0x60;
                            }
                            puVar24 = (undefined8 *)(lVar31 + 0x50 + lVar17);
                            uVar27 = plVar34[6];
                            *puVar24 = 0;
                            puVar24[1] = 0;
                            puVar24[2] = 0;
                            puVar24[3] = uVar27;
                            plVar34 = (long *)*plVar34;
                            lVar17 = *plVar34;
                          }
                          FUN_109ecb048(lVar31,lVar31 + 0x30,*(undefined1 *)((long)plVar18 + 100),
                                        *(undefined1 *)((long)plVar18 + 0x65));
                          if ((long *)plVar18[0xb] + -1 != plVar18 + 9) {
                            plVar34 = (long *)(lVar31 + 0x38);
                            plVar23 = (long *)plVar18[0xb];
                            do {
                              lVar17 = *plVar23;
                              plVar13 = (long *)plVar23[1];
                              *(long **)(lVar17 + 8) = plVar13;
                              *plVar13 = lVar17;
                              plVar23[1] = (long)plVar34;
                              plVar23[2] = lVar31 + 0x30;
                              *plVar23 = 0;
                              lVar17 = *plVar34;
                              *plVar23 = lVar17;
                              *(long **)(lVar17 + 8) = plVar23;
                              *plVar34 = (long)plVar23;
                              plVar23 = plVar13;
                            } while (plVar13 + -1 != plVar18 + 9);
                          }
                          FUN_109ecb4f0(2,plVar18,lVar31);
                          FUN_109ecb9c0(plVar18);
                          if (plVar21 == (long *)0x0) break;
                          plVar23 = (long *)*plVar21;
                          plVar34 = (long *)0x0;
                          plVar18 = plVar21;
                          if ((*plVar23 != 0) && (plVar34 = plVar23, (int)plVar23[3] != 8)) {
                            plVar34 = (long *)0x0;
                          }
                        }
                      }
                      if ((int)plVar36[2] == 0) {
                        uVar27 = 0;
                        uVar12 = 1;
                        plVar34 = plVar36;
                      }
                      else {
                        uVar12 = 0;
                        plVar18 = (long *)*plVar36;
                        plVar34 = (long *)0x0;
                        if (((long *)plVar36[1])[1] != 0) {
                          plVar34 = (long *)plVar36[1];
                        }
                        plVar36 = (long *)0x0;
                        if (*plVar18 != 0) {
                          plVar36 = plVar18;
                        }
                        uVar27 = 1;
                      }
                      FUN_109ef87e8(&plStack_90,uVar27,plVar34,uVar12,plVar36);
                      for (plVar36 = plStack_90; *plVar36 != 0; plVar36 = (long *)*plVar36) {
                        FUN_109ef8c00(plVar36,plStack_70);
                      }
                      goto LAB_109f321e0;
                    }
                  }
                }
              }
            }
          }
          bVar8 = 0;
        }
LAB_109f31bfc:
        bVar33 = (bool)(bVar33 | bVar8);
        lVar17 = lVar9;
        FUN_109ecc434();
        lVar31 = lVar9;
      } while (lVar9 != 0);
      if (!bVar33) goto LAB_109f321fc;
      uVar20 = 0;
      uVar15 = 1;
    }
    *(uint *)(lVar32 + 0x84) = *(uint *)(lVar32 + 0x84) & uVar20;
    uVar26 = uVar26 | uVar15;
    plVar35 = (long *)*plVar35;
    plVar36 = (long *)*plVar35;
    while( true ) {
      if (plVar36 == (long *)0x0) {
        return uVar26;
      }
      lVar32 = plVar35[6];
      if (lVar32 != 0) break;
      plVar35 = plVar36;
      plVar36 = (long *)*plVar36;
    }
  } while( true );
}



/* Entry: 109f32760; end: 109f32873;  */

void FUN_109f32760(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((*(int *)(param_1 + 0x18) == 4) &&
     (uVar4 = *(uint *)(param_1 + 0x28), (uVar4 & 0xfffffffe) == 0x294)) {
    for (lStack_28 = *(long *)(param_1 + 0x10); *(int *)(lStack_28 + 0x10) != 3;
        lStack_28 = *(long *)(lStack_28 + 0x18)) {
    }
    lStack_30 = *(long *)(*(long *)(lStack_28 + 0x20) + 0x18);
    uStack_38 = 0;
    uStack_48 = 2;
    puVar1 = param_2;
    lStack_40 = param_1;
    if (param_3 != 0) {
      puVar1 = &uStack_48;
      FUN_109ece168(puVar1,0x146,param_2);
      uVar4 = *(uint *)(param_1 + 0x28);
    }
    if (uVar4 == 0x295) {
      puVar2 = &uStack_48;
      FUN_109ece1b0(puVar2,0x120,*(undefined8 *)(param_1 + 0x98),puVar1);
      plVar6 = (long *)(param_1 + 0x88);
      lVar7 = *plVar6;
      plVar3 = *(long **)(param_1 + 0x90);
      *(long **)(lVar7 + 8) = plVar3;
      *plVar3 = lVar7;
      *plVar6 = 0;
      *(undefined8 **)(param_1 + 0x98) = puVar2;
      plVar3 = puVar2 + 1;
      lVar7 = *plVar3;
      *plVar6 = lVar7;
      *(long **)(param_1 + 0x90) = plVar3;
      *(long **)(lVar7 + 8) = plVar6;
      *plVar3 = (long)plVar6;
    }
    else {
      uVar5 = 0x61;
      if (*(char *)(*(long *)(lStack_30 + 0x28) + 0xc2) == '\0') {
        uVar5 = 0x295;
      }
      lVar7 = lStack_30;
      FUN_109ecb0a8(lStack_30,uVar5);
      *(undefined8 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x88) = 0;
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined8 **)(lVar7 + 0x98) = puVar1;
      FUN_109ecb4f0(uStack_48,lStack_40,lVar7);
      FUN_109ecb9c0(param_1);
    }
  }
  return;
}



/* Entry: 109f32874; end: 109f3317b;  */

ulong FUN_109f32874(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  byte bVar18;
  byte bVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  float *pfVar28;
  float fVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = *(byte *)(param_1 + 0x151) | *(byte *)(param_1 + 0x150);
  if (bVar2 == 0 || (bVar2 & 0x18) != 0) {
    plVar24 = *(long **)(param_1 + 0x178);
    for (plVar26 = (long *)**(long **)(param_1 + 0x178); plVar26 != (long *)0x0;
        plVar26 = (long *)*plVar26) {
      lVar11 = plVar24[6];
      if (lVar11 != 0) {
        uVar23 = 0;
        do {
          uStack_d8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          puStack_c0 = *(undefined8 **)(*(long *)(lVar11 + 0x20) + 0x18);
          uStack_c8 = 0;
          puVar5 = *(undefined8 **)(lVar11 + 0x30);
          lStack_b8 = lVar11;
          while (puVar5 != (undefined8 *)0x0) {
            plVar26 = (long *)puVar5[4];
            plVar12 = (long *)*plVar26;
            if ((plVar12 != (long *)0x0) && ((int)plVar26[3] == 8)) {
              lVar16 = *plVar12;
              puVar6 = puVar5;
              do {
                plVar17 = (long *)0x0;
                if ((lVar16 != 0) && (plVar17 = plVar12, *(int *)(plVar12 + 3) != 8)) {
                  plVar17 = (long *)0x0;
                }
                if (*(char *)((long)plVar26 + 0x65) == ' ') {
                  plVar12 = plVar26 + 9;
                  plVar14 = plVar26 + 10;
                  plVar27 = (long *)plVar26[0xb];
                  if (plVar27 != plVar14) {
                    puVar8 = (undefined8 *)0x1ca;
                    do {
                      uVar13 = plVar27[-1];
                      if (((uVar13 & 1) != 0) || (*(int *)(uVar13 + 0x18) != 0)) goto LAB_109f32a94;
                      uVar10 = *(uint *)(uVar13 + 0x28);
                      puVar25 = (undefined8 *)(ulong)uVar10;
                      if ((int)uVar10 < 0x110) {
                        if (0x12 < uVar10 - 0x87 ||
                            (1 << (ulong)(uVar10 - 0x87 & 0x1f) & 0x448a7U) == 0)
                        goto LAB_109f32a94;
                      }
                      else if (((9 < uVar10 - 0x110 ||
                                 (1 << (ulong)(uVar10 - 0x110 & 0x1f) & 0x229U) == 0) &&
                               (uVar10 != 0x181)) && (uVar10 != 0x17e)) goto LAB_109f32a94;
                      puVar30 = puVar25;
                      if (((uint)puVar8 != 0x1ca) && (uVar10 != (uint)puVar8)) {
                        FUN_109f3317c();
                        FUN_109f3317c();
                        puVar6 = puVar25;
                        if (((int)puVar8 != (int)puVar25) ||
                           (puVar30 = puVar8, (int)puVar25 == 0x1ca)) goto LAB_109f32a94;
                      }
                      plVar27 = (long *)plVar27[1];
                      puVar8 = puVar30;
                    } while (plVar27 != plVar14);
                    if ((int)puVar30 != 0x1ca) {
                      puVar8 = (undefined8 *)*puStack_c0;
                      FUN_109f6600c(puVar8,0x68,8);
                      *(undefined4 *)(puVar8 + 3) = 8;
                      puVar8[1] = 0;
                      puVar8[2] = 0;
                      *puVar8 = 0;
                      puVar8[7] = 0;
                      puVar8[5] = puVar8 + 7;
                      puVar8[6] = 0;
                      puVar8[8] = puVar8 + 5;
                      FUN_109ecb048();
                      for (plVar27 = (long *)plVar26[5]; *plVar27 != 0; plVar27 = (long *)*plVar27)
                      {
                        puVar6 = (undefined8 *)plVar27[6];
                        puStack_d0 = (undefined8 *)*puVar6;
                        if (*(int *)(puStack_d0 + 3) == 8) {
                          puVar25 = puStack_d0 + 2;
                          puStack_d0 = (undefined8 *)((undefined8 *)*puVar25)[4];
                          for (puVar7 = (undefined8 *)*puStack_d0; puVar7 != (undefined8 *)0x0;
                              puVar7 = (undefined8 *)*puVar7) {
                            if (*(int *)(puStack_d0 + 3) != 8) {
                              uStack_d8 = 2;
                              goto LAB_109f32f88;
                            }
                            puStack_d0 = puVar7;
                          }
                          uStack_d8 = 1;
                          puStack_d0 = (undefined8 *)*puVar25;
                        }
                        else {
                          uStack_d8 = 3;
                        }
LAB_109f32f88:
                        puVar25 = puStack_c0;
                        FUN_109ecaef8(puStack_c0,puVar30);
                        if (puVar25 == (undefined8 *)0x0) {
                          puVar6 = (undefined8 *)0x0;
                        }
                        else {
                          puVar25[10] = 0;
                          puVar25[0xb] = 0;
                          puVar25[0xc] = 0;
                          puVar25[0xd] = puVar6;
                          puVar6 = &uStack_d8;
                          func_0x000109ecdf34(puVar6,puVar25);
                        }
                        FUN_109ecb354(puVar8,plVar27[2],puVar6);
                      }
                      plVar15 = (long *)plVar26[0xb];
                      for (plVar27 = plVar15; plVar27 != plVar14; plVar27 = (long *)plVar27[1]) {
                        if ((plVar27[-1] & 1U) == 0) {
                          *(undefined4 *)(plVar27[-1] + 0x28) = 0x154;
                        }
                      }
                      if (plVar15 + -1 != plVar12) {
                        plVar14 = puVar8 + 10;
                        do {
                          lVar16 = *plVar15;
                          plVar27 = (long *)plVar15[1];
                          *(long **)(lVar16 + 8) = plVar27;
                          *plVar27 = lVar16;
                          plVar15[1] = (long)plVar14;
                          plVar15[2] = (long)(puVar8 + 9);
                          *plVar15 = 0;
                          lVar16 = *plVar14;
                          *plVar15 = lVar16;
                          *(long **)(lVar16 + 8) = plVar15;
                          *plVar14 = (long)plVar15;
                          plVar15 = plVar27;
                        } while (plVar27 + -1 != plVar12);
                      }
                      puVar6 = (undefined8 *)0x3;
                      FUN_109ecb4f0(3,plVar26,puVar8);
                      uStack_d8 = 3;
                      uVar10 = 1;
                      puStack_d0 = puVar8;
                      goto LAB_109f3306c;
                    }
                  }
LAB_109f32a94:
                  plVar27 = (long *)plVar26[5];
                  plVar14 = (long *)*plVar27;
                  if (plVar14 == (long *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    bVar2 = 0;
                    plVar15 = plVar27;
                    plVar20 = plVar14;
                    uVar13 = 0x1ca;
                    bVar18 = 0;
                    do {
                      lVar16 = *(long *)plVar15[6];
                      if (*(int *)(lVar16 + 0x18) == 5) {
                        bVar2 = 1;
                        uVar22 = uVar13;
                        bVar19 = bVar18;
                      }
                      else {
                        if (*(int *)(lVar16 + 0x18) != 0) goto LAB_109f32e94;
                        uVar1 = *(uint *)(lVar16 + 0x28);
                        uVar22 = (ulong)uVar1;
                        uVar10 = 0;
                        if ((int)uVar1 < 0x111) {
                          if (0xc < uVar1 - 0x8a ||
                              (1 << (ulong)(uVar1 - 0x8a & 0x1f) & 0x1021U) == 0)
                          goto LAB_109f3306c;
                        }
                        else if (((uVar1 != 0x111) && (uVar1 != 0x17f)) && (uVar1 != 0x116))
                        goto LAB_109f3306c;
                        bVar19 = *(byte *)(*(long *)(lVar16 + 0x68) + 0x1d);
                        if (((*(byte *)(lVar16 + 0x4d) <= bVar19) ||
                            (((uint)uVar13 != 0x1ca && ((uint)uVar13 != uVar1)))) ||
                           ((bVar18 != 0 && (bVar18 != bVar19)))) goto LAB_109f32e94;
                      }
                      plVar21 = (long *)*plVar20;
                      plVar15 = plVar20;
                      plVar20 = plVar21;
                      uVar13 = uVar22;
                      bVar18 = bVar19;
                    } while (plVar21 != (long *)0x0);
                    if ((bool)((int)uVar22 != 0x1ca & bVar2)) {
                      do {
                        plVar15 = plVar14;
                        lVar16 = *(long *)plVar27[6];
                        if ((*(int *)(lVar16 + 0x18) == 5) &&
                           (uVar13 = (ulong)*(byte *)(lVar16 + 0x44), uVar13 != 0)) {
                          bVar2 = (&UNK_110b78544)[uVar22 * 0x68];
                          pfVar28 = (float *)(lVar16 + 0x48);
                          do {
                            if ((bVar2 & 0x86) == 0x80) {
                              fVar31 = *pfVar28;
                              FUN_109f64b28(fVar31);
                              fVar29 = (float)(((uint)puVar6 & 0x7fff) << 0xd) * 5.192297e+33;
                              if (65536.0 <= fVar29) {
                                fVar29 = (float)((uint)fVar29 | 0x7f800000);
                              }
                              if (fVar31 != (float)((uint)fVar29 |
                                                   (int)((ulong)puVar6 >> 0xf) << 0x1f))
                              goto LAB_109f32ea4;
                            }
                            else if ((bVar2 & 0x86) == 4) {
                              if (0xffff < (uint)*pfVar28) goto LAB_109f32ea4;
                            }
                            else if (*pfVar28 != (float)(int)SUB42(*pfVar28,0)) goto LAB_109f32ea4;
                            pfVar28 = pfVar28 + 2;
                            uVar13 = uVar13 - 1;
                          } while (uVar13 != 0);
                        }
                        plVar14 = (long *)*plVar15;
                        plVar27 = plVar15;
                      } while (plVar14 != (long *)0x0);
                    }
                    if ((int)uVar22 == 0x1ca) {
LAB_109f32ea4:
                      uVar10 = 0;
                    }
                    else {
                      puVar6 = (undefined8 *)*puStack_c0;
                      FUN_109f6600c(puVar6,0x68,8);
                      *(undefined4 *)(puVar6 + 3) = 8;
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      *puVar6 = 0;
                      puVar6[7] = 0;
                      puVar6[5] = puVar6 + 7;
                      puVar6[6] = 0;
                      puVar6[8] = puVar6 + 5;
                      puVar8 = puVar6 + 9;
                      FUN_109ecb048();
                      plVar14 = (long *)plVar26[5];
                      if (*plVar14 != 0) {
                        do {
                          puVar25 = *(undefined8 **)plVar14[6];
                          uStack_d8 = 3;
                          puStack_d0 = puVar25;
                          if (*(int *)(puVar25 + 3) == 5) {
                            puVar30 = puVar25 + 5;
                            if ((*(uint *)(&UNK_110b78544 + uVar22 * 0x68) & 0x86) == 0x80) {
                              if (*(char *)((long)puVar25 + 0x45) != '\x10') {
                                uVar9 = 0x87;
LAB_109f32e14:
                                puVar25 = &uStack_d8;
                                FUN_109ece168(puVar25,uVar9,puVar30);
                                puVar30 = puVar25;
                              }
                            }
                            else if (*(char *)((long)puVar25 + 0x45) != '\x10') {
                              uVar9 = 0x115;
                              goto LAB_109f32e14;
                            }
                          }
                          else {
                            bVar2 = *(byte *)((long)puVar25 + 0x4c);
                            puVar30 = (undefined8 *)puVar25[0xd];
                            uStack_a8 = puVar25[0xb];
                            uStack_b0 = puVar25[10];
                            puStack_98 = puVar30;
                            uStack_a0 = puVar25[0xc];
                            uStack_88 = puVar25[0xf];
                            uStack_90 = puVar25[0xe];
                            if (*(byte *)((long)puVar30 + 0x1c) == bVar2) {
                              if (bVar2 != 0) {
                                uVar13 = 0;
                                bVar3 = false;
                                do {
                                  bVar3 = (bool)(uVar13 != *(byte *)((long)&uStack_90 + uVar13) |
                                                bVar3);
                                  uVar13 = uVar13 + 1;
                                } while (bVar2 != uVar13);
                                if (bVar3) goto LAB_109f32d7c;
                              }
                            }
                            else {
LAB_109f32d7c:
                              puVar7 = puStack_c0;
                              FUN_109ecaef8(puStack_c0,0x154);
                              puVar30 = puVar7 + 6;
                              FUN_109ecb048();
                              *(ushort *)((long)puVar7 + 0x2c) =
                                   *(ushort *)((long)puVar7 + 0x2c) & 0xf000 |
                                   (*(ushort *)((long)puVar7 + 0x2c) & 0xf006 |
                                   (ushort)(byte)uStack_c8) & 7 | (uStack_c8._4_2_ & 0x1ff) << 3;
                              puVar7[0xb] = uStack_a8;
                              puVar7[10] = uStack_b0;
                              puVar7[0xd] = puStack_98;
                              puVar7[0xc] = uStack_a0;
                              puVar7[0xf] = uStack_88;
                              puVar7[0xe] = uStack_90;
                              FUN_109ecb4f0(3,puVar25,puVar7);
                              puStack_d0 = puVar7;
                            }
                            uStack_d8 = 3;
                          }
                          FUN_109ecb354(puVar6,plVar14[2],puVar30);
                          plVar14 = (long *)*plVar14;
                        } while (*plVar14 != 0);
                      }
                      FUN_109ecb4f0(3,plVar26,puVar6);
                      if (*(int *)(puVar6 + 3) == 8) {
                        puVar25 = puVar6 + 2;
                        puVar6 = (undefined8 *)((undefined8 *)*puVar25)[4];
                        for (puVar30 = (undefined8 *)*puVar6; puVar30 != (undefined8 *)0x0;
                            puVar30 = (undefined8 *)*puVar30) {
                          if (*(int *)(puVar6 + 3) != 8) {
                            uStack_d8 = 2;
                            goto LAB_109f330a4;
                          }
                          puVar6 = puVar30;
                        }
                        uStack_d8 = 1;
                        puVar6 = (undefined8 *)*puVar25;
                      }
                      else {
                        uStack_d8 = 3;
                      }
LAB_109f330a4:
                      puVar25 = puStack_c0;
                      puStack_d0 = puVar6;
                      FUN_109ecaef8(puStack_c0,uVar22);
                      puVar6 = (undefined8 *)0x0;
                      if (puVar25 != (undefined8 *)0x0) {
                        puVar25[10] = 0;
                        puVar25[0xb] = 0;
                        puVar25[0xc] = 0;
                        puVar25[0xd] = puVar8;
                        puVar6 = &uStack_d8;
                        func_0x000109ecdf34(puVar6,puVar25);
                      }
                      if ((long *)plVar26[0xb] + -1 != plVar12) {
                        plVar26 = (long *)plVar26[0xb];
                        do {
                          lVar16 = *plVar26;
                          plVar14 = (long *)plVar26[1];
                          *(long **)(lVar16 + 8) = plVar14;
                          *plVar14 = lVar16;
                          plVar26[1] = (long)(puVar6 + 1);
                          plVar26[2] = (long)puVar6;
                          *plVar26 = 0;
                          lVar16 = puVar6[1];
                          *plVar26 = lVar16;
                          *(long **)(lVar16 + 8) = plVar26;
                          puVar6[1] = plVar26;
                          plVar26 = plVar14;
                        } while (plVar14 + -1 != plVar12);
                      }
                      uVar10 = 1;
                    }
                  }
                }
                else {
LAB_109f32e94:
                  uVar10 = 0;
                }
LAB_109f3306c:
                uVar23 = uVar23 | uVar10;
                if (plVar17 == (long *)0x0) break;
                plVar12 = (long *)*plVar17;
                lVar16 = *plVar12;
                plVar26 = plVar17;
              } while( true );
            }
            FUN_109ecc434();
          }
          uVar10 = 3;
          if (uVar23 == 0) {
            uVar10 = 0xfffffff7;
          }
          *(uint *)(lVar11 + 0x84) = *(uint *)(lVar11 + 0x84) & uVar10;
          plVar24 = (long *)*plVar24;
          param_1 = 0;
          plVar26 = (long *)*plVar24;
          while( true ) {
            if (plVar26 == (long *)0x0) goto LAB_109f328f0;
            lVar11 = plVar24[6];
            if (lVar11 != 0) break;
            plVar24 = plVar26;
            plVar26 = (long *)*plVar26;
          }
        } while( true );
      }
      plVar24 = plVar26;
    }
  }
  uVar23 = 0;
LAB_109f328f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)uVar23;
  }
  ___stack_chk_fail();
  iVar4 = (int)param_1;
  if (iVar4 < 0x113) {
    if (iVar4 == 0x8c) {
      return 0x87;
    }
    if (iVar4 == 0x92) {
      param_1 = 0x8e;
    }
    else if (iVar4 == 0x99) {
      return 0x95;
    }
  }
  else {
    if (iVar4 == 0x181) {
      return 0x17e;
    }
    if (iVar4 == 0x119) {
      return 0x115;
    }
    if (iVar4 == 0x113) {
      return 0x110;
    }
  }
  return param_1;
}



/* Entry: 109f3317c; end: 109f331e3;  */

undefined8 FUN_109f3317c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0x113) {
    if (iVar1 == 0x8c) {
      return 0x87;
    }
    if (iVar1 == 0x92) {
      param_1 = 0x8e;
    }
    else if (iVar1 == 0x99) {
      return 0x95;
    }
  }
  else {
    if (iVar1 == 0x181) {
      return 0x17e;
    }
    if (iVar1 == 0x119) {
      return 0x115;
    }
    if (iVar1 == 0x113) {
      return 0x110;
    }
  }
  return param_1;
}



/* Entry: 109f331e4; end: 109f333b3;  */

undefined8 FUN_109f331e4(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  plVar9 = (long *)param_1[4];
  plVar4 = (long *)*plVar9;
  if ((plVar4 == (long *)0x0) || ((int)plVar9[3] != 8)) {
    uVar3 = 0;
  }
  else {
    if (*plVar4 == 0) {
      plVar4 = (long *)0x0;
    }
    else if (*(int *)(plVar4 + 3) != 8) {
      plVar4 = (long *)0x0;
    }
LAB_109f33244:
    plVar5 = plVar4;
    if ((*(long *)plVar9[5] == 0) ||
       (puVar8 = (undefined8 *)((long *)plVar9[5])[6], puVar8 == (undefined8 *)0x0)) {
      iVar1 = (int)param_1[2];
      plStack_58 = param_1;
      while (iVar1 != 3) {
        plStack_58 = (long *)plStack_58[3];
        iVar1 = (int)plStack_58[2];
      }
      puStack_60 = *(undefined8 **)(plStack_58[4] + 0x18);
      uStack_68 = 0;
      plStack_70 = (long *)param_1[4];
      for (plVar4 = (long *)*(long *)param_1[4]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if ((int)plStack_70[3] != 8) {
          uStack_78 = 2;
          goto LAB_109f332c8;
        }
        plStack_70 = plVar4;
      }
      uStack_78 = 1;
      plStack_70 = param_1;
LAB_109f332c8:
      puVar2 = (undefined8 *)*puStack_60;
      FUN_109f6600c(puVar2,0x48,8);
      *(undefined4 *)(puVar2 + 3) = 7;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      puVar8 = puVar2 + 5;
      FUN_109ecb048();
      FUN_109ece5ec(&uStack_78,puVar2);
    }
    plVar4 = plVar9 + 9;
    if ((long *)plVar9[0xb] + -1 != plVar4) {
      plVar9 = (long *)plVar9[0xb];
      do {
        lVar7 = *plVar9;
        plVar6 = (long *)plVar9[1];
        *(long **)(lVar7 + 8) = plVar6;
        *plVar6 = lVar7;
        plVar9[1] = (long)(puVar8 + 1);
        plVar9[2] = (long)puVar8;
        *plVar9 = 0;
        lVar7 = puVar8[1];
        *plVar9 = lVar7;
        *(long **)(lVar7 + 8) = plVar9;
        puVar8[1] = plVar9;
        plVar9 = plVar6;
      } while (plVar6 + -1 != plVar4);
    }
    FUN_109ecb9c0(*plVar4);
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar5;
      plVar4 = (long *)0x0;
      plVar9 = plVar5;
      if ((*plVar6 != 0) && (plVar4 = plVar6, (int)plVar6[3] != 8)) {
        plVar4 = (long *)0x0;
      }
      goto LAB_109f33244;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109f333b4; end: 109f34f8b;  */

undefined4 FUN_109f333b4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  long *plVar17;
  undefined4 uStack_cc;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long alStack_90 [4];
  undefined8 *puStack_70;
  
  plVar8 = *(long **)(param_1 + 0x178);
  plVar11 = (long *)**(long **)(param_1 + 0x178);
  while( true ) {
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    lVar9 = plVar8[6];
    if (lVar9 != 0) break;
    plVar8 = plVar11;
    plVar11 = (long *)*plVar11;
  }
  uStack_cc = 0;
  do {
    uStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_a8 = 0;
    puStack_a0 = *(undefined8 **)(*(long *)(lVar9 + 0x20) + 0x18);
    uVar4 = *(uint *)(lVar9 + 0x84);
    lStack_98 = lVar9;
    if ((uVar4 >> 1 & 1) == 0) {
      FUN_109efe024(lVar9);
      uVar4 = *(uint *)(lVar9 + 0x84);
    }
    *(uint *)(lVar9 + 0x84) = uVar4 | 2;
    plVar11 = *(long **)(lVar9 + 0x30);
    if (plVar11 == (long *)0x0) {
LAB_109f3375c:
      uVar4 = 0xfffffff7;
    }
    else {
      bVar16 = false;
      do {
        plVar17 = (long *)plVar11[4];
        plVar5 = (long *)*plVar17;
        if ((plVar5 == (long *)0x0) || ((int)plVar17[3] != 8)) {
          bVar13 = 0;
        }
        else {
          if (*plVar5 == 0) {
            plVar5 = (long *)0x0;
          }
          else if (*(int *)(plVar5 + 3) != 8) {
            plVar5 = (long *)0x0;
          }
          bVar13 = 0;
LAB_109f33494:
          plVar6 = plVar5;
          plVar5 = (long *)plVar17[5];
          if (*plVar5 == 0) {
LAB_109f335e0:
            plStack_b0 = (long *)plVar11[4];
            for (plVar5 = *(long **)plVar11[4]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
              if ((int)plStack_b0[3] != 8) {
                uStack_b8 = 2;
                goto LAB_109f33618;
              }
              plStack_b0 = plVar5;
            }
            uStack_b8 = 1;
            plStack_b0 = plVar11;
LAB_109f33618:
            puVar3 = (undefined8 *)*puStack_a0;
            FUN_109f6600c(puVar3,0x48,8);
            *(undefined4 *)(puVar3 + 3) = 7;
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            plVar10 = puVar3 + 5;
            FUN_109ecb048();
            FUN_109ece5ec(&uStack_b8,puVar3);
          }
          else {
            plVar10 = (long *)0x0;
            bVar15 = false;
            do {
              plVar12 = (long *)plVar5[6];
              if (plVar12 != plVar17 + 9) {
                lVar2 = *plVar12;
                iVar1 = *(int *)(lVar2 + 0x18);
                if (iVar1 != 7) {
                  if (plVar10 == (long *)0x0) {
                    lVar7 = plVar11[0xc];
                    plVar10 = plVar12;
                    if ((*(uint *)(lVar7 + 0x80) < *(uint *)(*(long *)(lVar2 + 0x10) + 0x80)) ||
                       (*(uint *)(*(long *)(lVar2 + 0x10) + 0x84) < *(uint *)(lVar7 + 0x84))) {
                      if ((iVar1 != 5) &&
                         ((((iVar1 != 0 || (*(int *)(lVar2 + 0x28) != 0x154)) ||
                           (lVar2 = *(long *)(**(long **)(lVar2 + 0x68) + 0x10),
                           *(uint *)(lVar7 + 0x80) < *(uint *)(lVar2 + 0x80))) ||
                          (*(uint *)(lVar2 + 0x84) < *(uint *)(lVar7 + 0x84))))) goto LAB_109f336c4;
                      bVar15 = true;
                    }
                  }
                  else if ((plVar12 != plVar10) &&
                          (((iVar1 != *(int *)(*plVar10 + 0x18) || (iVar1 != 5 && iVar1 != 0)) ||
                           ((FUN_109f02340(), (int)lVar2 == 0 ||
                            ((*(int *)(*plVar12 + 0x18) == 0 &&
                             (((*(ushort *)(*plVar10 + 0x2c) ^ *(ushort *)(*plVar12 + 0x2c)) & 0xff9
                              ) != 0)))))))) goto LAB_109f336c4;
                }
              }
              plVar5 = (long *)*plVar5;
            } while (*plVar5 != 0);
            if (plVar10 == (long *)0x0) goto LAB_109f335e0;
            if (bVar15) {
              plVar5 = (long *)plVar11[4];
              for (plVar12 = *(long **)plVar11[4]; plVar12 != (long *)0x0;
                  plVar12 = (long *)*plVar12) {
                if ((int)plVar5[3] != 8) {
                  uVar14 = 2;
                  goto LAB_109f336f4;
                }
                plVar5 = plVar12;
              }
              uVar14 = 1;
              plVar5 = plVar11;
LAB_109f336f4:
              lVar2 = *plVar10;
              alStack_90[1] = 0;
              alStack_90[3] = 0;
              alStack_90[2] = 0;
              alStack_90[0] = 0x100;
              puStack_70 = puStack_a0;
              plVar10 = alStack_90;
              uStack_b8 = uVar14;
              plStack_b0 = plVar5;
              FUN_109ecf7f8(plVar10,lVar2);
              FUN_109ecb4f0(uVar14,plVar5,plVar10);
              uStack_b8 = 3;
              plStack_b0 = plVar10;
              FUN_109ecc0ac();
            }
          }
          plVar5 = plVar17 + 9;
          if ((long *)plVar17[0xb] + -1 != plVar5) {
            plVar17 = (long *)plVar17[0xb];
            do {
              lVar2 = *plVar17;
              plVar12 = (long *)plVar17[1];
              *(long **)(lVar2 + 8) = plVar12;
              *plVar12 = lVar2;
              plVar17[1] = (long)(plVar10 + 1);
              plVar17[2] = (long)plVar10;
              *plVar17 = 0;
              lVar2 = plVar10[1];
              *plVar17 = lVar2;
              *(long **)(lVar2 + 8) = plVar17;
              plVar10[1] = (long)plVar17;
              plVar17 = plVar12;
            } while (plVar12 + -1 != plVar5);
          }
          FUN_109ecb9c0(*plVar5);
          bVar13 = 1;
LAB_109f336c4:
          if (plVar6 != (long *)0x0) {
            plVar10 = (long *)*plVar6;
            plVar5 = (long *)0x0;
            plVar17 = plVar6;
            if ((*plVar10 != 0) && (plVar5 = plVar10, (int)plVar10[3] != 8)) {
              plVar5 = (long *)0x0;
            }
            goto LAB_109f33494;
          }
        }
        bVar16 = (bool)(bVar16 | bVar13);
        FUN_109ecc434();
      } while (plVar11 != (long *)0x0);
      if (!bVar16) goto LAB_109f3375c;
      uStack_cc = 1;
      uVar4 = 3;
    }
    *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) & uVar4;
    plVar8 = (long *)*plVar8;
    plVar11 = (long *)*plVar8;
    while( true ) {
      if (plVar11 == (long *)0x0) {
        return uStack_cc;
      }
      lVar9 = plVar8[6];
      if (lVar9 != 0) break;
      plVar8 = plVar11;
      plVar11 = (long *)*plVar11;
    }
  } while( true );
}



/* Entry: 109f34f8c; end: 109f35087;  */

void FUN_109f34f8c(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (((uVar3 & 1) == 0) && (*(int *)(uVar3 + 0x18) == 0)) {
    uVar1 = *(uint *)(uVar3 + 0x28);
    if ((uVar1 - 0x1c4 < 6) || (uVar1 == 0x154)) {
      for (lVar5 = *(long *)(uVar3 + 0x40); lVar5 != uVar3 + 0x38; lVar5 = *(long *)(lVar5 + 8)) {
        FUN_109f34f8c(lVar5 + -8,param_2);
      }
    }
    else {
      bVar2 = (&UNK_110b78540)[(ulong)uVar1 * 0x68];
      if ((ulong)bVar2 != 0) {
        lVar5 = 0;
        puVar4 = (ulong *)(uVar3 + 0x50);
        do {
          if (((puVar4 == param_1) &&
              (((lVar5 == 0 || ((*(uint *)(&UNK_110b78598 + (ulong)uVar1 * 0x68) >> 2 & 1) == 0)) &&
               (*param_2 = 1, lVar5 == 8 || uVar1 != 0xcb)))) &&
             ((uVar1 != 0xe9 &&
              ((*(uint *)(&UNK_110b78558 + lVar5 + (ulong)uVar1 * 0x68) >> 7 & 1) != 0)))) {
            param_2[1] = 1;
          }
          lVar5 = lVar5 + 4;
          puVar4 = puVar4 + 6;
        } while ((ulong)bVar2 * 4 - lVar5 != 0);
      }
    }
  }
  else {
    param_2[2] = 1;
  }
  return;
}



/* Entry: 109f35088; end: 109f3753b;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_109f35088(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4,
                    undefined8 param_5,uint *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint *puVar34;
  uint *puVar35;
  long *plVar36;
  undefined1 uVar37;
  undefined4 uVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong *puVar42;
  long *plVar43;
  ulong *puVar44;
  ulong *puVar45;
  ulong *puVar46;
  uint uVar47;
  long *plVar48;
  uint uVar49;
  ulong uVar50;
  uint *puVar51;
  long lVar52;
  long lVar53;
  uint *puVar54;
  ulong uVar55;
  uint *puVar56;
  uint *puVar57;
  long *plVar58;
  byte bVar59;
  long lVar60;
  int iVar61;
  undefined8 uVar62;
  int iVar63;
  ulong uVar64;
  ulong uVar65;
  undefined8 *puVar66;
  long *plVar67;
  undefined2 uVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  uint *puStack_11940;
  uint uStack_1192c;
  uint uStack_118c8;
  uint uStack_118c4;
  ulong auStack_118c0 [1791];
  undefined8 *apuStack_e0c8 [4];
  long alStack_e0a8 [3];
  undefined8 *puStack_e090;
  ulong uStack_e088;
  undefined8 uStack_e080;
  undefined8 uStack_e078;
  undefined8 uStack_e070;
  undefined8 uStack_e068;
  undefined8 uStack_e060;
  undefined8 uStack_e058;
  undefined8 uStack_e050;
  undefined8 uStack_e048;
  undefined8 uStack_e040;
  undefined8 uStack_e038;
  undefined8 uStack_e030;
  undefined8 uStack_e028;
  undefined8 uStack_e020;
  undefined8 uStack_e018;
  undefined8 uStack_e010;
  undefined8 uStack_e008;
  undefined8 uStack_e000;
  undefined8 uStack_dff8;
  undefined8 uStack_dff0;
  undefined8 uStack_dfe8;
  undefined8 uStack_dfe0;
  undefined8 uStack_dfd8;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  puVar23 = param_2;
  uVar50 = param_3;
  uVar55 = param_4;
  uVar16 = param_5;
  if (*(char *)((long)param_1 + 0x61) != '\x06') {
    uStack_118c8 = 0;
    puVar15 = (undefined8 *)0x13ef0;
    _malloc();
    if (puVar15 != (undefined8 *)0x0) {
      if (*(char *)((long)param_2 + 0x61) == '\x04') {
        FUN_109efd188(param_1);
      }
      FUN_109f3753c(param_1,param_2,param_3,param_4,param_5,puVar15);
      func_0x000109f3851c(puVar15,&uStack_118c8);
      func_0x000109ecc964(puVar15[0x268a]);
      uVar50 = 0;
      puVar56 = (uint *)(puVar15 + 0x27b4);
      uVar47 = *(uint *)(puVar15 + 0x27b4);
LAB_109f35198:
      do {
        do {
          if (uVar47 == 0) {
            uVar55 = uVar50 & 0xffffffff;
            do {
              if (uVar55 == 0x1b) goto LAB_109f35494;
              uVar50 = uVar55 + 1;
              uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x13da4);
              uVar55 = uVar50;
            } while (uVar47 == 0);
          }
          uVar31 = (uint)uVar50;
          if (0x1b < uVar31) goto LAB_109f35494;
          uVar29 = (uVar47 & 0xaaaaaaaa) >> 1 | (uVar47 & 0x55555555) << 1;
          uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
          uVar55 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
          uVar28 = (uint)uVar55;
          uVar47 = uVar47 & (1 << (ulong)(uVar28 & 0x1f) ^ 0xffffffffU);
          uVar29 = uVar28 | uVar31 << 5;
          puVar66 = puVar15;
          func_0x000109f38b74(puVar15,uVar29 >> 3);
        } while (((ulong)puVar66 & 1) == 0);
        uStack_e088 = uStack_e088 & 0xffffffff00000000;
        uVar16 = puVar15[(ulong)uVar29 * 0xb + 4];
        puStack_e090 = puVar15;
        FUN_109f3921c(uVar16,&puStack_e090);
      } while (((int)uVar16 == 0) || (*(uint *)(puVar15 + 0x268c) < (uint)uStack_e088));
      if ((*(int *)(puVar15 + 0x2681) == 4) && ((uVar29 >> 3) - 1 < 2)) {
        if (*(int *)(puVar15[(ulong)uVar29 * 0xb + 4] + 0x18) != 5) goto LAB_109f35198;
        fVar69 = *(float *)(puVar15[(ulong)uVar29 * 0xb + 4] + 0x48);
        bVar12 = false;
        bVar13 = false;
        bVar14 = false;
        if (0.0 <= fVar69) {
          bVar12 = false;
          bVar13 = false;
          bVar14 = true;
          if (!NAN(fVar69)) {
            bVar12 = fVar69 < 1.0;
            bVar13 = fVar69 == 1.0;
            bVar14 = false;
          }
        }
        if (!bVar13 && bVar12 == bVar14) goto LAB_109f35198;
      }
      if ((uVar31 * 0x20 - 0x20 < 0x40) && (*(int *)(puVar15 + 0x2681) == 4)) {
        if (((uVar55 & 5) == 0) || (*(int *)(puVar15[(ulong)uVar29 * 0xb + 4] + 0x18) != 5))
        goto LAB_109f35198;
        fVar69 = *(float *)(puVar15[(ulong)uVar29 * 0xb + 4] + 0x48);
        if ((((uVar28 & 7) == 4) && (fVar69 != 0.0)) || (((uVar28 & 7) == 6 && (fVar69 != 1.0))))
        goto LAB_109f35198;
      }
      uVar31 = uStack_118c8;
      bVar12 = true;
      do {
        bVar13 = bVar12;
        lVar53 = 0x28;
        if (!bVar13) {
          lVar53 = 0x10;
        }
        lVar53 = (long)puVar15 + lVar53 + (ulong)uVar29 * 0x58;
        lVar52 = 0x13438;
        if (!bVar13) {
          lVar52 = 0x13410;
        }
        lVar60 = *(long *)(lVar53 + 8);
        if (lVar60 != lVar53) {
          puVar66 = (undefined8 *)((long)puVar15 + lVar52);
          do {
            lVar52 = *(long *)(lVar60 + 0x10);
            *puVar66 = 2;
            puVar66[1] = lVar52;
            uVar16 = puVar15[(ulong)uVar29 * 0xb + 4];
            FUN_109ecc0ac(uVar16);
            puVar21 = puVar15;
            FUN_109f392e0(puVar15,puVar66,uVar16);
            if (*(int *)(lVar52 + 0x28) == 0x149) {
              cVar7 = *(char *)((long)puVar21 + 0x1d);
              uVar28 = *(uint *)(puVar66[3] + 0x124);
              if (((cVar7 == '\x10' && (uVar28 & 0x40) != 0) ||
                  (cVar7 == ' ' && (uVar28 & 0x80) != 0)) || (cVar7 == '@' && (uVar28 & 0x100) != 0)
                 ) {
                puVar21 = puVar66;
                FUN_109f39624();
              }
            }
            plVar67 = (long *)(lVar52 + 0x30);
            if (*(long **)(lVar52 + 0x40) + -1 != plVar67) {
              plVar48 = *(long **)(lVar52 + 0x40);
              do {
                lVar52 = *plVar48;
                plVar36 = (long *)plVar48[1];
                *(long **)(lVar52 + 8) = plVar36;
                *plVar36 = lVar52;
                plVar48[1] = (long)(puVar21 + 1);
                plVar48[2] = (long)puVar21;
                *plVar48 = 0;
                lVar52 = puVar21[1];
                *plVar48 = lVar52;
                *(long **)(lVar52 + 8) = plVar48;
                puVar21[1] = plVar48;
                plVar48 = plVar36;
              } while (plVar36 + -1 != plVar67);
            }
            FUN_109ecb9c0(*plVar67);
            lVar60 = *(long *)(lVar60 + 8);
          } while (lVar60 != lVar53);
          uVar28 = 1;
          if (bVar13) {
            uVar28 = 2;
          }
          uVar31 = uVar28 | uVar31;
        }
        bVar12 = false;
      } while (bVar13);
      puVar15[(ulong)uVar29 * 0xb + 2] = puVar15 + (ulong)uVar29 * 0xb + 2;
      puVar15[(ulong)uVar29 * 0xb + 3] = puVar15 + (ulong)uVar29 * 0xb + 2;
      puVar15[(ulong)uVar29 * 0xb + 5] = puVar15 + (ulong)uVar29 * 0xb + 5;
      puVar15[(ulong)uVar29 * 0xb + 6] = puVar15 + (ulong)uVar29 * 0xb + 5;
      auStack_118c0[0] = auStack_118c0[0] & 0xffffffffffffff00;
      uStack_118c8 = uVar31;
      FUN_109f39060(puVar15,uVar29,auStack_118c0,&uStack_118c8);
      FUN_109f3919c(puVar15,uVar29,auStack_118c0[0] & 0xff);
      goto LAB_109f35198;
    }
  }
  uVar25 = (undefined1)uVar50;
  uVar31 = (uint)uVar16;
  uVar47 = (uint)uVar55;
  puVar56 = (uint *)0x0;
  goto LAB_109f35450;
LAB_109f35494:
  uVar50 = 0;
  uStack_dfe8 = 0;
  uStack_dff0 = 0;
  uStack_dfd8 = 0;
  uStack_dfe0 = 0;
  uStack_e008 = 0;
  uStack_e010 = 0;
  uStack_dff8 = 0;
  uStack_e000 = 0;
  uStack_e028 = 0;
  uStack_e030 = 0;
  uStack_e018 = 0;
  uStack_e020 = 0;
  uStack_e048 = 0;
  uStack_e050 = 0;
  uStack_e038 = 0;
  uStack_e040 = 0;
  uStack_e068 = 0;
  uStack_e070 = 0;
  uStack_e058 = 0;
  uStack_e060 = 0;
  uStack_e088 = 0;
  puStack_e090 = (undefined8 *)0x0;
  uStack_e078 = 0;
  uStack_e080 = 0;
  uVar47 = *puVar56;
LAB_109f354e0:
  do {
    if (uVar47 == 0) {
      uVar55 = uVar50 & 0xffffffff;
      do {
        if (uVar55 == 0x1b) goto LAB_109f3587c;
        uVar50 = uVar55 + 1;
        uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x13da4);
        uVar55 = uVar50;
      } while (uVar47 == 0);
    }
    uVar31 = (uint)uVar50;
    if (0x1b < uVar31) goto LAB_109f3587c;
    uVar29 = (uVar47 & 0xaaaaaaaa) >> 1 | (uVar47 & 0x55555555) << 1;
    uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
    uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    uVar29 = (uint)LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
    uVar47 = uVar47 & (1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU);
    uVar29 = uVar29 | uVar31 << 5;
    uVar55 = (ulong)uVar29;
    puVar66 = puVar15;
    func_0x000109f38b74(puVar15,uVar29 >> 3);
  } while (((uint)puVar66 >> 1 & 1) == 0);
  lVar53 = 0;
  if (((uVar31 & 0x18) != 0x10) && ((uVar29 & 0x3f0) != 0xd0)) {
    if (*(int *)(puVar15 + 0x2681) == 4) {
      lVar52 = *(long *)(puVar15[(ulong)uVar29 * 0xb + 6] + 0x10);
      iVar30 = *(int *)(lVar52 + 0x28);
      if (iVar30 == 0x168) {
        lVar53 = 5;
      }
      else if (iVar30 == 0x147) {
        lVar53 = 3;
        if ((*(byte *)(lVar52 + 99) & 0x40) != 0) {
          lVar53 = 4;
        }
      }
      else {
        uVar31 = (uVar29 >> 3) - 1;
        if (iVar30 == 0x144) {
          lVar53 = 1;
          if (uVar31 < 2) {
            lVar53 = 2;
          }
        }
        else {
          lVar52 = **(long **)(lVar52 + 0x98);
          if ((*(byte *)(*(long *)(puVar15[0x268a] + 0x28) + 200) & 1) == 0) {
            uVar29 = *(uint *)(lVar52 + 0x28);
            if ((int)uVar29 < 0xda) goto LAB_109f354e0;
            if (uVar29 == 0xe3) {
              lVar60 = 2;
            }
            else if (uVar29 == 0xe2) {
              lVar60 = 0;
            }
            else {
              lVar60 = 1;
            }
            iVar30 = *(int *)(lVar52 + (ulong)(byte)(&UNK_110b671b3)[(ulong)uVar29 * 0x68] * 4 +
                             0x50);
            if (iVar30 == 3) {
              lVar52 = 0xc;
              lVar53 = 0x12;
            }
            else if (iVar30 == 1) {
              lVar52 = 9;
              lVar53 = 0xf;
            }
            else {
              lVar52 = 9;
              lVar53 = 0x15;
            }
            if (1 < uVar31) {
              lVar53 = lVar52;
            }
            lVar53 = lVar53 + lVar60;
          }
          else if (uVar31 < 2) {
            lVar53 = 7;
            if (*(int *)(lVar52 + (ulong)(byte)(&UNK_110b671b3)
                                               [(ulong)*(uint *)(lVar52 + 0x28) * 0x68] * 4 + 0x50)
                == 0) {
              lVar53 = 8;
            }
          }
          else {
            lVar53 = 6;
          }
        }
      }
    }
    else {
      lVar53 = 1;
    }
  }
  puVar66 = (&puStack_e090)[lVar53];
  if (puVar66 == (undefined8 *)0x0) {
    puVar66 = (undefined8 *)0x0;
    FUN_109f64c74(0,0x109f65648,FUN_109f65684);
    (&puStack_e090)[lVar53] = puVar66;
  }
  uVar62 = puVar15[uVar55 * 0xb + 4];
  uVar16 = uVar62;
  (*(code *)puVar66[1])(uVar62);
  puVar21 = puVar66;
  FUN_109f64fdc(puVar66,uVar16,uVar62);
  if (puVar21 == (undefined8 *)0x0) {
    uVar16 = uVar62;
    (*(code *)puVar66[1])(uVar62);
    func_0x000109f650c0(puVar66,uVar16,uVar62,uVar55);
  }
  else {
    lVar52 = puVar21[2];
    lVar60 = *(long *)(puVar15[lVar52 * 0xb + 1] + 0x10);
    lVar53 = (ulong)*(uint *)(lVar60 + 0x28) * 0x68;
    uVar38 = *(undefined4 *)(lVar60 + 0x54 + (ulong)(byte)(&UNK_110b671cf)[lVar53] * 4 + -4);
    uVar5 = *(undefined4 *)(lVar60 + 0x54 + (ulong)(byte)(&UNK_110b671b1)[lVar53] * 4 + -4);
    bVar12 = true;
    do {
      bVar13 = bVar12;
      lVar53 = 0x28;
      if (!bVar13) {
        lVar53 = 0x10;
      }
      plVar67 = (long *)((long)puVar15 + lVar53 + uVar55 * 0x58);
      plVar48 = (long *)plVar67[1];
      if (plVar48 != plVar67) {
        plVar36 = (long *)((long)puVar15 + lVar53 + lVar52 * 0x58);
        do {
          uVar31 = *(uint *)(plVar48[2] + 0x28);
          lVar53 = plVar48[2] + 0x54;
          lVar24 = (ulong)uVar31 * 0x68;
          *(undefined4 *)(lVar53 + (ulong)(byte)(&UNK_110b671cf)[lVar24] * 4 + -4) = uVar38;
          *(undefined4 *)(lVar53 + (ulong)(byte)(&UNK_110b671b1)[lVar24] * 4 + -4) = uVar5;
          lVar24 = lVar60;
          if ((long *)plVar36[1] != plVar36) {
            lVar24 = ((long *)plVar36[1])[2];
          }
          *(undefined4 *)(lVar53 + (ulong)(byte)(&UNK_110b671a9)[(ulong)uVar31 * 0x68] * 4 + -4) =
               *(undefined4 *)
                (lVar24 + (ulong)(byte)(&UNK_110b671a9)[(ulong)*(uint *)(lVar24 + 0x28) * 0x68] * 4
                + 0x50);
          plVar48 = (long *)plVar48[1];
        } while (plVar48 != plVar67);
        if ((long *)plVar67[1] != plVar67) {
          *(long **)(*plVar67 + 8) = plVar36;
          lVar53 = *plVar36;
          plVar48 = (long *)plVar67[1];
          *plVar48 = lVar53;
          *(long **)(lVar53 + 8) = plVar48;
          *plVar36 = *plVar67;
        }
        *plVar67 = (long)plVar67;
        plVar67[1] = (long)plVar67;
        uVar31 = 1;
        if (bVar13) {
          uVar31 = 2;
        }
        uStack_118c8 = uVar31 | uStack_118c8;
      }
      bVar12 = false;
    } while (bVar13);
    auStack_118c0[0] = auStack_118c0[0] & 0xffffffffffffff00;
    FUN_109f39060(puVar15,uVar55,auStack_118c0,&uStack_118c8);
    FUN_109f3919c(puVar15,uVar55,auStack_118c0[0] & 0xff);
  }
  goto LAB_109f354e0;
LAB_109f35a0c:
  uVar50 = 0;
  puVar66 = puVar15 + 0x27d0;
  uVar47 = *(uint *)(puVar15 + 0x27d0);
  puVar21 = puVar15 + 0x2744;
  bVar26 = *(byte *)((long)puVar15 + 0x13403);
  do {
    if (uVar47 == 0) {
      do {
        uVar55 = uVar50;
        if (uVar55 == 0x1b) goto LAB_109f35ae0;
        uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x13e84);
        uVar50 = uVar55 + 1;
      } while (uVar47 == 0);
      if (0x1a < uVar55) break;
      uVar50 = uVar55 + 1 & 0xffffffff;
    }
    uVar31 = uVar47 & -uVar47;
    uVar47 = uVar31 ^ uVar47;
    uVar29 = *(uint *)((long)puVar15 + uVar50 * 4 + 0x13940);
    puVar17 = puVar66;
    if (((((uVar29 & uVar31) != 0) || ((*(uint *)((long)puVar21 + uVar50 * 4) & uVar31) != 0)) &&
        (((bVar26 & 1) != 0 || ((*(uint *)((long)puVar21 + uVar50 * 4) & uVar31) == 0)))) &&
       ((*(int *)((long)puVar15 + 0x13404) != 3 || ((puVar56[uVar50] & uVar31) != 0)))) {
      *(uint *)((long)puVar15 + uVar50 * 4 + 0x13940) = uVar29 & ~uVar31;
      puVar17 = puVar21;
    }
    *(uint *)((long)puVar17 + uVar50 * 4) = *(uint *)((long)puVar17 + uVar50 * 4) & ~uVar31;
  } while( true );
LAB_109f35ae0:
  iVar30 = *(int *)(puVar15 + 0x2681);
  goto LAB_109f35ae4;
LAB_109f35ec8:
  if ((int)uVar55 != 0) {
    bVar26 = 0x21;
    if ((*(uint *)(*(long *)(puVar15[0x2685] + 0x28) + 200) &
         *(uint *)(*(long *)(puVar15[0x268a] + 0x28) + 200) & 4) != 0) {
      bVar26 = 0x31;
    }
    lVar53 = puVar15[0x268b];
    FUN_109f472bc(lVar53,1);
    uVar50 = 0;
    do {
      plVar67 = (long *)auStack_118c0[uVar50 * 2];
      if ((*plVar67 != 0) &&
         (lVar52 = *(long *)(*(long *)(lVar53 + 8) +
                            (long)*(int *)(*(long *)(lVar53 + 8) +
                                           (ulong)*(uint *)(*plVar67 + 0x20) * 0x10 + 0xc) * 0x10),
         lVar52 != 0)) {
        lVar60 = 0;
        do {
          while( true ) {
            lVar24 = lVar52;
            bVar27 = *(byte *)(lVar24 + 0x1c);
            if ((bVar27 & 6) == 0) {
              FUN_109f3a0b4(puVar15,lVar24);
              bVar27 = *(byte *)(lVar24 + 0x1c);
            }
            if ((bVar27 >> 2 & 1) != 0) goto LAB_109f36030;
            if ((bVar26 & *(byte *)(lVar24 + 0x4d)) == 0) break;
            if (*(byte *)(lVar24 + 0x4d) == 1) {
              if ((&UNK_110b78540)[(ulong)*(uint *)(lVar24 + 0x28) * 0x68] == '\x02') {
                if ((*(long **)(lVar24 + 0x68) == plVar67) &&
                   (*(int *)(**(long **)(lVar24 + 0x98) + 0x18) == 5)) break;
                if (*(int *)(**(long **)(lVar24 + 0x68) + 0x18) == 5) {
                  plVar48 = *(long **)(lVar24 + 0x98);
                  goto LAB_109f35fe8;
                }
              }
              else if ((&UNK_110b78540)[(ulong)*(uint *)(lVar24 + 0x28) * 0x68] == '\x01') {
                plVar48 = *(long **)(lVar24 + 0x68);
LAB_109f35fe8:
                if (plVar48 == plVar67) break;
              }
            }
            lVar52 = *(long *)(*(long *)(lVar53 + 8) +
                              (long)*(int *)(*(long *)(lVar53 + 8) +
                                             (ulong)*(uint *)(lVar24 + 0x20) * 0x10 + 0xc) * 0x10);
            lVar60 = lVar24;
            if (lVar52 == 0) goto LAB_109f36038;
          }
          lVar52 = *(long *)(*(long *)(lVar53 + 8) +
                            (long)*(int *)(*(long *)(lVar53 + 8) +
                                           (ulong)*(uint *)(lVar24 + 0x20) * 0x10 + 0xc) * 0x10);
        } while (lVar52 != 0);
LAB_109f36030:
        lVar24 = lVar60;
        if (lVar60 != 0) {
LAB_109f36038:
          if ((*(byte *)(lVar24 + 0x1c) >> 3 & 1) == 0) {
            uVar64 = auStack_118c0[uVar50 * 2 + 1];
            uStack_118c4 = 0;
            FUN_109f3a348(lVar24,&puStack_e090,&uStack_118c4);
            uVar47 = uStack_118c4;
            uVar65 = (ulong)uStack_118c4;
            if (uStack_118c4 == 0) {
              lVar52 = 0;
            }
            else {
              lVar52 = 0;
              lVar60 = uVar65 * 8;
              do {
                *(byte *)(*(long *)((long)&puStack_e090 + lVar52) + 0x1c) =
                     *(byte *)(*(long *)((long)&puStack_e090 + lVar52) + 0x1c) & 0xef;
                lVar52 = lVar52 + 8;
              } while (lVar60 - lVar52 != 0);
              lVar39 = 0;
              lVar20 = 0;
              do {
                lVar52 = *(long *)((long)&puStack_e090 + lVar39) + 0x54;
                lVar41 = (ulong)*(uint *)(*(long *)((long)&puStack_e090 + lVar39) + 0x28) * 0x68;
                uVar31 = *(uint *)(lVar52 + (ulong)(byte)(&UNK_110b671cf)[lVar41] * 4 + -4);
                lVar41 = *(long *)(*(long *)(puVar15[(ulong)((uVar31 & 0x7f) * 8 +
                                                             *(int *)(lVar52 + (ulong)(byte)(&
                                                  UNK_110b671b1)[lVar41] * 4 + -4) * 2 |
                                                  uVar31 >> 0x19 & 1) * 0xb + 1] + 0x10) + 0x10);
                lVar52 = lVar41;
                if ((lVar20 != 0) && (lVar52 = lVar20, lVar20 != lVar41)) {
                  bVar27 = *(byte *)(lVar24 + 0x1c);
                  goto LAB_109f361b4;
                }
                lVar39 = lVar39 + 8;
                lVar20 = lVar52;
              } while (lVar60 - lVar39 != 0);
            }
            lVar60 = uVar64 + 0x54;
            lVar39 = (ulong)*(uint *)(uVar64 + 0x28) * 0x68;
            uVar31 = *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar39] * 4 + -4);
            iVar61 = *(int *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar39] * 4 + -4);
            lVar39 = *plVar67;
            puVar15[0x2687] = 3;
            puVar15[0x2688] = lVar39;
            bVar27 = *(byte *)(lVar24 + 0x1c);
            bVar3 = bVar27 & 0xe0;
            iVar30 = *(int *)(puVar15 + 0x2681);
            bVar12 = iVar30 == 4;
            if ((!bVar12) || ((bVar27 & 0xe0) != 0)) {
              uVar31 = (uVar31 & 0x7f) * 8 + iVar61 * 2 | uVar31 >> 0x19 & 1;
              uStack_1192c = 0x20;
              if (*(byte *)(lVar24 + 0x4d) != 1) {
                uStack_1192c = (uint)*(byte *)(lVar24 + 0x4d);
              }
              if ((bVar27 & 0xe0) != 0) {
                bVar13 = false;
                bVar59 = 0;
                goto LAB_109f36244;
              }
              bVar59 = *(byte *)((long)puVar15 + 0x13403);
              goto LAB_109f361fc;
            }
            bVar59 = *(byte *)((long)puVar15 + 0x13403);
            bVar8 = *(byte *)(lVar24 + 0x4d);
            if (((bVar59 & 1) != 0) ||
               (((bVar8 == 0x20 || (bVar8 == 0x10)) &&
                ((char)(&UNK_110b78544)[(ulong)*(uint *)(lVar24 + 0x28) * 0x68] < '\0'))))
            goto LAB_109f361cc;
LAB_109f361b4:
            *(byte *)(lVar24 + 0x1c) = bVar27 | 8;
          }
        }
      }
      uVar50 = uVar50 + 1;
      if (uVar50 == uVar55) {
        if (lVar53 != 0) {
          FUN_109f65aa4(lVar53 + -0x30);
          FUN_109f65ae0(lVar53 + -0x30);
        }
        break;
      }
    } while( true );
  }
  goto LAB_109f36ff0;
LAB_109f361cc:
  uVar31 = (uVar31 & 0x7f) * 8 + iVar61 * 2 | uVar31 >> 0x19 & 1;
  uStack_1192c = 0x20;
  if (bVar8 != 1) {
    uStack_1192c = (uint)bVar8;
  }
  bVar12 = true;
LAB_109f361fc:
  bVar13 = true;
LAB_109f36244:
  puStack_11940 = (uint *)(uVar64 + 0x28);
  if (((bVar3 == 0x20) || (!bVar12)) || ((bVar59 & 1) != 0)) {
    puVar19 = *(undefined8 **)puVar15[0x268a];
    FUN_109f6600c(puVar19,0x50,8);
    if ((iVar30 == 2) && (0x20 < bVar3)) {
      if (puVar19 != (undefined8 *)0x0) {
        puVar19[7] = 0;
        puVar19[6] = 0;
        puVar19[9] = 0;
        puVar19[8] = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
      }
      *(undefined4 *)(puVar19 + 3) = 5;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar33 = puVar19 + 5;
      *puVar19 = 0;
      FUN_109ecb048(puVar19,puVar33,1,0x20);
      puVar19[9] = 0;
      FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],puVar19);
      lVar39 = 0;
      puVar15[0x2687] = 3;
      puVar15[0x2688] = puVar19;
      do {
        puVar19 = puVar33;
        if (lVar39 != 0) {
          puVar40 = *(undefined8 **)puVar15[0x268a];
          FUN_109f6600c(puVar40,0x50,8);
          if (puVar40 != (undefined8 *)0x0) {
            puVar40[7] = 0;
            puVar40[6] = 0;
            puVar40[9] = 0;
            puVar40[8] = 0;
            puVar40[3] = 0;
            puVar40[2] = 0;
            puVar40[5] = 0;
            puVar40[4] = 0;
            puVar40[1] = 0;
            *puVar40 = 0;
          }
          *(undefined4 *)(puVar40 + 3) = 5;
          puVar40[1] = 0;
          puVar40[2] = 0;
          puVar19 = puVar40 + 5;
          *puVar40 = 0;
          FUN_109ecb048(puVar40,puVar19,1,0x20);
          puVar40[9] = lVar39;
          FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],puVar40);
          puVar15[0x2687] = 3;
          puVar15[0x2688] = puVar40;
        }
        lVar20 = (ulong)*puStack_11940 * 0x68;
        uVar38 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671a9)[lVar20] * 4 + -4);
        uVar5 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar20] * 4 + -4);
        uVar29 = *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671c1)[lVar20] * 4 + -4);
        uVar6 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar20] * 4 + -4);
        lVar18 = puVar15[0x268a];
        FUN_109ecb0a8(lVar18,0x16a);
        *(undefined1 *)(lVar18 + 0x50) = 1;
        FUN_109ecb048();
        *(undefined8 *)(lVar18 + 0x80) = 0;
        *(undefined8 *)(lVar18 + 0x88) = 0;
        *(undefined8 *)(lVar18 + 0x90) = 0;
        *(undefined8 **)(lVar18 + 0x98) = puVar19;
        *(undefined8 *)(lVar18 + 0xa0) = 0;
        *(undefined8 *)(lVar18 + 0xa8) = 0;
        *(undefined8 *)(lVar18 + 0xb0) = 0;
        *(undefined8 **)(lVar18 + 0xb8) = puVar33;
        lVar20 = lVar18 + 0x54;
        lVar41 = (ulong)*(uint *)(lVar18 + 0x28) * 0x68;
        *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671a9)[lVar41] * 4 + -4) = uVar38;
        *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671ae)[lVar41] * 4 + -4) = 0;
        *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671b1)[lVar41] * 4 + -4) = uVar5;
        *(uint *)(lVar20 + (ulong)(byte)(&UNK_110b671c1)[lVar41] * 4 + -4) =
             uVar29 & 0x86 | uStack_1192c;
        *(undefined4 *)(lVar20 + (ulong)(byte)(&UNK_110b671cf)[lVar41] * 4 + -4) = uVar6;
        FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar18);
        puVar15[0x2687] = 3;
        puVar15[0x2688] = lVar18;
        alStack_e0a8[lVar39] = lVar18 + 0x30;
        lVar20 = alStack_e0a8[0];
        lVar39 = lVar39 + 1;
      } while (lVar39 != 3);
      lVar60 = 0;
      puVar56 = (uint *)&UNK_10e47c518;
      if (bVar3 != 0x40) {
        puVar56 = (uint *)&UNK_10e47c524;
      }
      lVar39 = puVar15[(ulong)uVar31 * 0xb + 9];
      uVar29 = *puVar56;
      do {
        if (lVar60 == 0) {
          if (((uVar29 & 0xff) != 0) || (lVar41 = lVar39, *(char *)(lVar39 + 0x1c) != '\x01')) {
            lVar18 = puVar15[0x268a];
            FUN_109ecaef8(lVar18,0x154);
            lVar41 = lVar18 + 0x30;
            FUN_109ecb048();
            uVar9 = *(ushort *)(lVar18 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar15 + 0x2689);
            *(ushort *)(lVar18 + 0x2c) = uVar9;
            *(ushort *)(lVar18 + 0x2c) =
                 (*(ushort *)((long)puVar15 + 0x1344c) & 0x1ff) << 3 | uVar9 & 0xf007;
            *(undefined8 *)(lVar18 + 0x50) = 0;
            *(undefined8 *)(lVar18 + 0x58) = 0;
            *(undefined8 *)(lVar18 + 0x60) = 0;
            *(long *)(lVar18 + 0x68) = lVar39;
            *(char *)(lVar18 + 0x70) = (char)uVar29;
            *(undefined8 *)(lVar18 + 0x71) = 0;
            *(undefined8 *)(lVar18 + 0x78) = 0;
            FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar18);
            puVar15[0x2687] = 3;
            puVar15[0x2688] = lVar18;
          }
          puVar19 = puVar15 + 0x2687;
          FUN_109ece1b0(puVar19,0xe8,lVar20,lVar41);
          apuStack_e0c8[1] = puVar19;
        }
        else {
          uVar16 = *(undefined8 *)((long)alStack_e0a8 + lVar60);
          uVar28 = *puVar56;
          lVar41 = lVar39;
          if ((uVar28 & 0xff) != 0 || *(char *)(lVar39 + 0x1c) != '\x01') {
            lVar18 = puVar15[0x268a];
            FUN_109ecaef8(lVar18,0x154);
            lVar41 = lVar18 + 0x30;
            FUN_109ecb048();
            uVar9 = *(ushort *)(lVar18 + 0x2c) & 0xfffe | (ushort)*(byte *)(puVar15 + 0x2689);
            *(ushort *)(lVar18 + 0x2c) = uVar9;
            *(ushort *)(lVar18 + 0x2c) =
                 (*(ushort *)((long)puVar15 + 0x1344c) & 0x1ff) << 3 | uVar9 & 0xf007;
            *(undefined8 *)(lVar18 + 0x50) = 0;
            *(undefined8 *)(lVar18 + 0x58) = 0;
            *(undefined8 *)(lVar18 + 0x60) = 0;
            *(long *)(lVar18 + 0x68) = lVar39;
            *(char *)(lVar18 + 0x70) = (char)uVar28;
            *(undefined8 *)(lVar18 + 0x71) = 0;
            *(undefined8 *)(lVar18 + 0x78) = 0;
            FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar18);
            puVar15[0x2687] = 3;
            puVar15[0x2688] = lVar18;
          }
          puVar19 = puVar15 + 0x2687;
          func_0x000109ece210(puVar19,0xca,uVar16,lVar41,
                              *(undefined8 *)((long)apuStack_e0c8 + lVar60));
          *(undefined8 **)((long)apuStack_e0c8 + lVar60 + 8U) = puVar19;
        }
        lVar60 = lVar60 + 8;
        puVar56 = puVar56 + 1;
      } while (lVar60 != 0x18);
      puVar33 = apuStack_e0c8[3];
      lVar60 = 0x13a20;
      if (uStack_1192c != 0x10) {
        lVar60 = 0x139b0;
      }
    }
    else {
      if (puVar19 != (undefined8 *)0x0) {
        puVar19[7] = 0;
        puVar19[6] = 0;
        puVar19[9] = 0;
        puVar19[8] = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
      }
      *(undefined4 *)(puVar19 + 3) = 5;
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      FUN_109ecb048(puVar19,puVar19 + 5,1,0x20);
      puVar19[9] = 0;
      FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],puVar19);
      puVar15[0x2687] = 3;
      puVar15[0x2688] = puVar19;
      lVar39 = (ulong)*puStack_11940 * 0x68;
      uVar38 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671a9)[lVar39] * 4 + -4);
      uVar5 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar39] * 4 + -4);
      uVar29 = *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671c1)[lVar39] * 4 + -4);
      uVar6 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar39] * 4 + -4);
      lVar20 = puVar15[0x268a];
      FUN_109ecb0a8(lVar20,0x144);
      *(undefined1 *)(lVar20 + 0x50) = 1;
      puVar33 = (undefined8 *)(lVar20 + 0x30);
      FUN_109ecb048();
      *(undefined8 *)(lVar20 + 0x80) = 0;
      *(undefined8 *)(lVar20 + 0x88) = 0;
      *(undefined8 *)(lVar20 + 0x90) = 0;
      *(undefined8 **)(lVar20 + 0x98) = puVar19 + 5;
      lVar60 = lVar20 + 0x54;
      lVar39 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
      *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671a9)[lVar39] * 4 + -4) = uVar38;
      *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671ae)[lVar39] * 4 + -4) = 0;
      *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar39] * 4 + -4) = uVar5;
      *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671c1)[lVar39] * 4 + -4) =
           uVar29 & 0x86 | uStack_1192c;
      *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar39] * 4 + -4) = uVar6;
      FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar20);
      puVar15[0x2687] = 3;
      puVar15[0x2688] = lVar20;
      lVar60 = 0x13a20;
      if (uStack_1192c != 0x10) {
        lVar60 = 0x139b0;
      }
      if ((bVar59 & 1) != 0) {
        lVar60 = 0x13e80;
        if (uStack_1192c != 0x10) {
          lVar60 = 0x13e10;
        }
      }
    }
  }
  else {
    uVar29 = bVar27 - 0x40 >> 5;
    if (uVar29 < 6) {
      uVar29 = 1 << (ulong)(uVar29 & 0x1f);
      if ((uVar29 & 9) == 0) {
        if ((uVar29 & 0x12) == 0) {
          lVar39 = puVar15[0x268a];
          uVar16 = 0xe3;
        }
        else {
          lVar39 = puVar15[0x268a];
          uVar16 = 0xda;
        }
        FUN_109ecb0a8(lVar39,uVar16);
        plVar67 = (long *)(lVar39 + 0x30);
        FUN_109ecb048();
        *(undefined4 *)
         (lVar39 + (ulong)(byte)(&UNK_110b671b3)[(ulong)*(uint *)(lVar39 + 0x28) * 0x68] * 4 + 0x50)
             = 0;
        FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar39);
        puVar15[0x2687] = 3;
        puVar15[0x2688] = lVar39;
      }
      else {
        lVar39 = puVar15[0x268a];
        FUN_109ecb0a8(lVar39,0xe2);
        plVar67 = (long *)(lVar39 + 0x30);
        FUN_109ecb048();
        *(undefined4 *)
         (lVar39 + (ulong)(byte)(&UNK_110b671b3)[(ulong)*(uint *)(lVar39 + 0x28) * 0x68] * 4 + 0x50)
             = 0;
        FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar39);
        puVar15[0x2687] = 3;
        puVar15[0x2688] = lVar39;
      }
    }
    else {
      plVar67 = *(long **)(uVar64 + 0x98);
    }
    if (plVar67 != *(long **)(uVar64 + 0x98)) {
      uVar38 = 3;
      if (bVar27 < 0xa0) {
        uVar38 = 1;
      }
      *(undefined4 *)
       (*plVar67 + (ulong)(byte)(&UNK_110b671b3)[(ulong)*(uint *)(*plVar67 + 0x28) * 0x68] * 4 +
       0x50) = uVar38;
    }
    puVar19 = *(undefined8 **)puVar15[0x268a];
    FUN_109f6600c(puVar19,0x50,8);
    if (puVar19 != (undefined8 *)0x0) {
      puVar19[7] = 0;
      puVar19[6] = 0;
      puVar19[9] = 0;
      puVar19[8] = 0;
      puVar19[3] = 0;
      puVar19[2] = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      puVar19[1] = 0;
      *puVar19 = 0;
    }
    *(undefined4 *)(puVar19 + 3) = 5;
    puVar19[1] = 0;
    puVar19[2] = 0;
    *puVar19 = 0;
    FUN_109ecb048(puVar19,puVar19 + 5,1,0x20);
    puVar19[9] = 0;
    FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],puVar19);
    puVar15[0x2687] = 3;
    puVar15[0x2688] = puVar19;
    lVar39 = (ulong)*puStack_11940 * 0x68;
    uVar38 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671a9)[lVar39] * 4 + -4);
    uVar5 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar39] * 4 + -4);
    uVar29 = *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671c1)[lVar39] * 4 + -4);
    uVar6 = *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar39] * 4 + -4);
    lVar20 = puVar15[0x268a];
    FUN_109ecb0a8(lVar20,0x149);
    *(undefined1 *)(lVar20 + 0x50) = 1;
    puVar33 = (undefined8 *)(lVar20 + 0x30);
    FUN_109ecb048();
    *(undefined8 *)(lVar20 + 0x80) = 0;
    *(undefined8 *)(lVar20 + 0x88) = 0;
    *(undefined8 *)(lVar20 + 0x90) = 0;
    *(long **)(lVar20 + 0x98) = plVar67;
    *(undefined8 *)(lVar20 + 0xa0) = 0;
    *(undefined8 *)(lVar20 + 0xa8) = 0;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
    *(undefined8 **)(lVar20 + 0xb8) = puVar19 + 5;
    lVar60 = lVar20 + 0x54;
    lVar39 = (ulong)*(uint *)(lVar20 + 0x28) * 0x68;
    *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671a9)[lVar39] * 4 + -4) = uVar38;
    *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671b1)[lVar39] * 4 + -4) = uVar5;
    *(uint *)(lVar60 + (ulong)(byte)(&UNK_110b671c1)[lVar39] * 4 + -4) =
         uVar29 & 0x86 | uStack_1192c;
    *(undefined4 *)(lVar60 + (ulong)(byte)(&UNK_110b671cf)[lVar39] * 4 + -4) = uVar6;
    FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],lVar20);
    puVar15[0x2687] = 3;
    puVar15[0x2688] = lVar20;
    lVar39 = 0x13940;
    lVar60 = 0x13e80;
    if (uStack_1192c != 0x10) {
      lVar39 = 0x138d0;
      lVar60 = 0x13e10;
    }
    if (!bVar13) {
      lVar60 = lVar39;
    }
  }
  uVar50 = (ulong)(uVar31 >> 5);
  uVar29 = *(uint *)((long)puVar17 + uVar50 * 4);
  uVar28 = *(uint *)((long)puVar1 + uVar50 * 4);
  uVar49 = *(uint *)((long)puVar2 + uVar50 * 4);
  uVar11 = 1 << (ulong)(uVar31 & 0x1f);
  uVar32 = *(uint *)((long)puVar23 + uVar50 * 4);
  uVar10 = *(uint *)((long)puVar66 + uVar50 * 4);
  if (((((uVar29 & uVar11) != 0) || ((uVar28 & uVar11) != 0)) || ((uVar49 & uVar11) != 0)) ||
     ((((uVar32 & uVar11) != 0 || ((uVar10 & uVar11) != 0)) ||
      ((*(uint *)((long)puVar21 + uVar50 * 4) & uVar11) != 0)))) {
    *(uint *)((long)puVar17 + uVar50 * 4) = uVar29 & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar1 + uVar50 * 4) = uVar28 & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar23 + uVar50 * 4) = uVar32 & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar2 + uVar50 * 4) = uVar49 & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar21 + uVar50 * 4) =
         *(uint *)((long)puVar21 + uVar50 * 4) & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar66 + uVar50 * 4) = uVar10 & (uVar11 ^ 0xffffffff);
    *(uint *)((long)puVar15 + uVar50 * 4 + lVar60) =
         *(uint *)((long)puVar15 + uVar50 * 4 + lVar60) | uVar11;
  }
  puVar40 = (undefined8 *)puVar15[(ulong)uVar31 * 0xb + 6];
  puVar19 = puVar33;
  if ((bVar27 < 0x40) || (*(int *)(puVar15 + 0x2681) != 2)) {
    puVar40[2] = *puVar33;
    if (*(char *)(lVar24 + 0x4d) == '\x01') {
      uVar25 = *(undefined1 *)((long)puVar33 + 0x1d);
      puVar40 = *(undefined8 **)puVar15[0x268a];
      FUN_109f6600c(puVar40,0x50,8);
      if (puVar40 != (undefined8 *)0x0) {
        puVar40[7] = 0;
        puVar40[6] = 0;
        puVar40[9] = 0;
        puVar40[8] = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        puVar40[5] = 0;
        puVar40[4] = 0;
        puVar40[1] = 0;
        *puVar40 = 0;
      }
      *(undefined4 *)(puVar40 + 3) = 5;
      puVar40[1] = 0;
      puVar40[2] = 0;
      *puVar40 = 0;
      FUN_109ecb048(puVar40,puVar40 + 5,1,uVar25);
      puVar40[9] = 0;
      FUN_109ecb4f0(puVar15[0x2687],puVar15[0x2688],puVar40);
      puVar15[0x2687] = 3;
      puVar15[0x2688] = puVar40;
      puVar19 = puVar15 + 0x2687;
      FUN_109ece1b0(puVar19,0x141,puVar33,puVar40 + 5);
    }
  }
  else {
    if (puVar40 != puVar15 + (ulong)uVar31 * 0xb + 5) {
      uVar50 = 0;
      do {
        puVar40[2] = *(undefined8 *)alStack_e0a8[uVar50];
        uVar50 = (ulong)((int)uVar50 + 1);
        puVar40 = (undefined8 *)puVar40[1];
      } while (puVar40 != puVar15 + (ulong)uVar31 * 0xb + 5);
    }
    puVar15[(ulong)uVar31 * 0xb + 7] = *puVar33;
  }
  if (*(long **)(lVar24 + 0x40) + -1 != (long *)(lVar24 + 0x30)) {
    plVar67 = *(long **)(lVar24 + 0x40);
    do {
      lVar60 = *plVar67;
      plVar48 = (long *)plVar67[1];
      *(long **)(lVar60 + 8) = plVar48;
      *plVar48 = lVar60;
      plVar67[1] = (long)(puVar19 + 1);
      plVar67[2] = (long)puVar19;
      *plVar67 = 0;
      lVar60 = puVar19[1];
      *plVar67 = lVar60;
      *(long **)(lVar60 + 8) = plVar67;
      puVar19[1] = plVar67;
      plVar67 = plVar48;
    } while (plVar48 + -1 != (long *)(lVar24 + 0x30));
  }
  if (((*(long *)(lVar52 + 0x20) == lVar52 + 0x30) ||
      (lVar60 = *(long *)(lVar52 + 0x38), lVar60 == 0)) || (*(int *)(lVar60 + 0x18) != 6)) {
    uVar16 = 1;
  }
  else {
    uVar16 = 2;
    lVar52 = lVar60;
  }
  puVar15[0x2682] = uVar16;
  puVar15[0x2683] = lVar52;
  puVar33 = puVar15;
  FUN_109f392e0(puVar15,puVar15 + 0x2682);
  puVar19 = puVar33;
  if (*(char *)((long)puVar33 + 0x1d) == '\x01') {
    puVar19 = puVar15 + 0x2682;
    FUN_109ece954(puVar19,puVar33,6,uStack_1192c | 6,0);
  }
  lVar52 = *(long *)(puVar15[(ulong)uVar31 * 0xb + 1] + 0x10);
  FUN_109ecb8e0(puVar15[0x2682],puVar15[0x2683],lVar52);
  if ((uint)*(byte *)(*(long *)(lVar52 + 0x98) + 0x1d) != (uint)*(byte *)((long)puVar19 + 0x1d)) {
    lVar60 = lVar52 + (ulong)(byte)(&UNK_110b671c0)[(ulong)*(uint *)(lVar52 + 0x28) * 0x68] * 4;
    *(uint *)(lVar60 + 0x50) =
         *(uint *)(lVar60 + 0x50) & 0x86 | (uint)*(byte *)((long)puVar19 + 0x1d);
  }
  plVar48 = (long *)(lVar52 + 0x88);
  lVar60 = *plVar48;
  plVar67 = *(long **)(lVar52 + 0x90);
  *(long **)(lVar60 + 8) = plVar67;
  *plVar67 = lVar60;
  *plVar48 = 0;
  *(undefined8 **)(lVar52 + 0x98) = puVar19;
  plVar67 = puVar19 + 1;
  lVar60 = *plVar67;
  *plVar48 = lVar60;
  *(long **)(lVar52 + 0x90) = plVar67;
  *(long **)(lVar60 + 8) = plVar48;
  *plVar67 = (long)plVar48;
  if (uVar47 != 0) {
    uVar50 = 0;
    do {
      puVar19 = (&puStack_e090)[uVar50];
      uVar47 = *(uint *)((long)puVar19 +
                        (ulong)(byte)(&UNK_110b671cf)[(ulong)*(uint *)(puVar19 + 5) * 0x68] * 4 +
                        0x50);
      uVar47 = (uVar47 & 0x7f) * 8 +
               *(int *)((long)puVar19 +
                       (ulong)(byte)(&UNK_110b671b1)[(ulong)*(uint *)(puVar19 + 5) * 0x68] * 4 +
                       0x50) * 2 | uVar47 >> 0x19 & 1;
      if (uVar47 != uVar31) {
        puVar19 = puVar15 + (ulong)uVar47 * 0xb;
        lVar52 = puVar19[7];
        if (lVar52 == 0) {
          lVar52 = *(long *)(puVar19[6] + 0x10);
        }
        else if ((undefined8 *)puVar19[1] == puVar19) goto LAB_109f36f88;
        lVar60 = *(long *)(lVar53 + 8);
        uVar55 = (ulong)*(uint *)(lVar52 + 0x20);
        while (*(uint *)(lVar60 + (ulong)*(uint *)(lVar24 + 0x20) * 0x10 + 8) <
               *(uint *)(lVar60 + uVar55 * 0x10 + 8)) {
          uVar55 = (ulong)*(int *)(lVar60 + uVar55 * 0x10 + 0xc);
        }
        if (uVar55 == *(uint *)(lVar24 + 0x20)) {
          puVar19[5] = puVar19 + 5;
          puVar19[6] = puVar19 + 5;
          apuStack_e0c8[1] = (undefined8 *)((ulong)apuStack_e0c8[1] & 0xffffffffffffff00);
          FUN_109f39060(puVar15,uVar47,apuStack_e0c8 + 1,&uStack_118c8);
          FUN_109f3919c(puVar15,uVar47,(ulong)apuStack_e0c8[1] & 0xff);
        }
      }
LAB_109f36f88:
      uVar50 = uVar50 + 1;
    } while (uVar50 != uVar65);
  }
  uStack_118c8 = uStack_118c8 | 3;
  if (lVar53 != 0) {
    FUN_109f65aa4(lVar53 + -0x30);
    FUN_109f65ae0(lVar53 + -0x30);
  }
  goto LAB_109f35c34;
LAB_109f3587c:
  lVar53 = 0;
  do {
    if (*(long *)((long)&puStack_e090 + lVar53) != 0) {
      lVar52 = *(long *)((long)&puStack_e090 + lVar53) + -0x30;
      FUN_109f65aa4(lVar52);
      FUN_109f65ae0(lVar52);
    }
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0xc0);
  FUN_109f285c0(param_2);
  uVar16 = *(undefined8 *)(puVar15[0x268d] + -0x30);
  FUN_109f65aa4(uVar16);
  FUN_109f65ae0(uVar16);
  FUN_109f3753c(param_1,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,(int)param_5,puVar15);
  func_0x000109f3851c(puVar15,&uStack_118c8);
  iVar30 = *(int *)(puVar15 + 0x2681);
  if (iVar30 == 4) {
    uVar50 = 0;
    puVar66 = puVar15 + 0x27c2;
    uVar47 = *(uint *)(puVar15 + 0x27c2);
    puVar21 = puVar15 + 0x2736;
    bVar26 = *(byte *)((long)puVar15 + 0x13403);
    do {
      if (uVar47 == 0) {
        do {
          uVar55 = uVar50;
          if (uVar55 == 0x1b) goto LAB_109f35a0c;
          uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x13e14);
          uVar50 = uVar55 + 1;
        } while (uVar47 == 0);
        if (0x1a < uVar55) goto LAB_109f35a0c;
        uVar50 = uVar55 + 1 & 0xffffffff;
      }
      uVar31 = uVar47 & -uVar47;
      uVar47 = uVar31 ^ uVar47;
      uVar28 = ~uVar31;
      uVar29 = *(uint *)((long)puVar15 + uVar50 * 4 + 0x138d0);
      puVar17 = puVar66;
      if ((((((uVar29 & uVar31) != 0) || ((*(uint *)((long)puVar21 + uVar50 * 4) & uVar31) != 0)) ||
           ((*(uint *)((long)puVar15 + uVar50 * 4 + 0x13d30) & uVar31) != 0)) &&
          (((bVar26 & 1) != 0 || ((*(uint *)((long)puVar21 + uVar50 * 4) & uVar31) == 0)))) &&
         ((*(int *)((long)puVar15 + 0x13404) != 3 || ((puVar56[uVar50] & uVar31) != 0)))) {
        *(uint *)((long)puVar15 + uVar50 * 4 + 0x138d0) = uVar29 & uVar28;
        *(uint *)((long)puVar15 + uVar50 * 4 + 0x13d30) =
             *(uint *)((long)puVar15 + uVar50 * 4 + 0x13d30) & uVar28;
        puVar17 = puVar21;
      }
      *(uint *)((long)puVar17 + uVar50 * 4) = *(uint *)((long)puVar17 + uVar50 * 4) & uVar28;
    } while( true );
  }
LAB_109f35ae4:
  if (iVar30 == 2) {
    uVar50 = 0;
    uVar47 = *(uint *)(puVar15 + 0x2736);
    while( true ) {
      if (uVar47 == 0) {
        uVar55 = uVar50 & 0xffffffff;
        do {
          if (uVar55 == 0x1b) goto LAB_109f35b68;
          uVar50 = uVar55 + 1;
          uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x139b4);
          uVar55 = uVar50;
        } while (uVar47 == 0);
      }
      uVar31 = (uint)uVar50;
      if (0x1b < uVar31) break;
      uVar29 = (uVar47 & 0xaaaaaaaa) >> 1 | (uVar47 & 0x55555555) << 1;
      uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
      uVar29 = (uint)LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
      uVar47 = uVar47 & (1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU);
      uVar29 = uVar29 | uVar31 << 5;
      if (((uVar31 & 0x18) != 0x10) &&
         (puVar66 = puVar15, FUN_109f39ab8(puVar15,uVar29), ((ulong)puVar66 & 1) == 0)) {
        FUN_109f39d0c(puVar15,uVar29);
      }
    }
LAB_109f35b68:
    uVar50 = 0;
    uVar47 = *(uint *)(puVar15 + 0x2744);
    while( true ) {
      if (uVar47 == 0) {
        uVar55 = uVar50 & 0xffffffff;
        do {
          if (uVar55 == 0x1b) goto LAB_109f35be4;
          uVar50 = uVar55 + 1;
          uVar47 = *(uint *)((long)puVar15 + uVar55 * 4 + 0x13a24);
          uVar55 = uVar50;
        } while (uVar47 == 0);
      }
      uVar31 = (uint)uVar50;
      if (0x1b < uVar31) break;
      uVar29 = (uVar47 & 0xaaaaaaaa) >> 1 | (uVar47 & 0x55555555) << 1;
      uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
      uVar29 = (uint)LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
      uVar47 = uVar47 & (1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU);
      uVar29 = uVar29 | uVar31 << 5;
      if (((uVar31 & 0x18) != 0x10) &&
         (puVar66 = puVar15, FUN_109f39ab8(puVar15,uVar29), ((ulong)puVar66 & 1) == 0)) {
        FUN_109f39d0c(puVar15,uVar29);
      }
    }
  }
LAB_109f35be4:
  puVar66 = puVar15 + 0x27c2;
  puVar21 = puVar15 + 0x27d0;
  puVar17 = puVar15 + 0x271a;
  puVar1 = puVar15 + 0x2728;
  puVar2 = puVar15 + 0x2736;
  puVar23 = puVar15 + 0x2744;
LAB_109f35c34:
  if (7 < *(uint *)((long)puVar15 + 0x13404) ||
      (1 << (ulong)(*(uint *)((long)puVar15 + 0x13404) & 0x1f) & 200U) == 0) {
    func_0x000109ecc964(puVar15[0x268a]);
    uVar50 = 0;
    uVar55 = 0;
    uVar47 = *(uint *)(puVar15 + 0x27b4);
LAB_109f35c6c:
    do {
      if (uVar47 == 0) {
        uVar50 = uVar50 & 0xffffffff;
        do {
          uVar65 = uVar50;
          if (uVar65 == 0x1b) goto LAB_109f35ec8;
          uVar50 = uVar65 + 1;
          uVar47 = *(uint *)((long)puVar15 + uVar65 * 4 + 0x13da4);
        } while (uVar47 == 0);
        if (0x1a < uVar65) goto LAB_109f35ec8;
      }
      uVar31 = (uVar47 & 0xaaaaaaaa) >> 1 | (uVar47 & 0x55555555) << 1;
      uVar31 = (uVar31 & 0xcccccccc) >> 2 | (uVar31 & 0x33333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
      uVar31 = (uint)LZCOUNT(uVar31 >> 0x10 | uVar31 << 0x10);
      uVar29 = uVar31 | (int)uVar50 << 5;
      uVar31 = 1 << (ulong)(uVar31 & 0x1f);
      uVar47 = uVar47 & (uVar31 ^ 0xffffffff);
      puVar19 = puVar15;
      func_0x000109f38b74(puVar15,uVar29 >> 3);
    } while (((((uint)puVar19 >> 2 & 1) == 0) ||
             (puVar19 = puVar15 + (ulong)uVar29 * 0xb, (undefined8 *)puVar19[3] != puVar19 + 2)) ||
            ((puVar33 = (undefined8 *)puVar19[1], puVar33 == (undefined8 *)0x0 || puVar33 == puVar19
             || ((undefined8 *)puVar33[1] != puVar19))));
    puVar40 = (undefined8 *)puVar19[6];
    uVar65 = puVar40[2];
    iVar30 = *(int *)(puVar15 + 0x2681);
    if ((iVar30 == 2) && (lVar53 = puVar19[7], lVar53 != 0)) {
      if (*(int *)((long)puVar15 + 0x13404) != 0) {
        uVar16 = **(undefined8 **)(puVar33[2] + 0xb8);
        FUN_109f38c50(uVar16,0x12);
        if ((int)uVar16 == 0) goto LAB_109f35c6c;
      }
      plVar67 = (long *)(lVar53 + 0x30);
      *(byte *)(*plVar67 + 0x1c) = *(byte *)(*plVar67 + 0x1c) | *(byte *)(puVar19 + 8) | 1;
    }
    else {
      if ((puVar40 == puVar19 + 5) ||
         ((((undefined8 *)puVar40[1] != puVar19 + 5 || (*(int *)(puVar33[2] + 0x28) == 0x27c)) ||
          (iVar61 = *(int *)(uVar65 + 0x28), iVar61 == 0x16a)))) goto LAB_109f35c6c;
      plVar67 = (long *)(uVar65 + 0x30);
      if (iVar61 < 0x149) {
        if (iVar61 != 0x144) goto LAB_109f35c6c;
        if ((iVar30 != 2) &&
           ((iVar30 != 4 ||
            (((*(uint *)((long)puVar66 + (ulong)(uVar29 >> 5) * 4) & uVar31) == 0 &&
             ((*(uint *)((long)puVar21 + (ulong)(uVar29 >> 5) * 4) & uVar31) == 0)))))) {
          bVar26 = *(byte *)(uVar65 + 0x1c) | 0x20;
LAB_109f35e04:
          *(byte *)(uVar65 + 0x1c) = bVar26;
        }
      }
      else {
        if (iVar61 == 0x168) goto LAB_109f35c6c;
        if (((*(uint *)((long)puVar66 + (ulong)(uVar29 >> 5) * 4) & uVar31) == 0) &&
           ((*(uint *)((long)puVar21 + (ulong)(uVar29 >> 5) * 4) & uVar31) == 0)) {
          uVar28 = *(uint *)(**(long **)(uVar65 + 0x98) + 0x28);
          iVar30 = *(int *)(**(long **)(uVar65 + 0x98) +
                            (ulong)(byte)(&UNK_110b671b3)[(ulong)uVar28 * 0x68] * 4 + 0x50);
          if (uVar28 == 0xda) {
            bVar27 = 0x60;
            bVar26 = 0xc0;
          }
          else {
            if (uVar28 != 0xe3) {
              if (uVar28 == 0xe2) {
                bVar26 = 0xa0;
                if (iVar30 != 3) {
                  bVar26 = 0x40;
                }
                *(byte *)(uVar65 + 0x1c) = *(byte *)(uVar65 + 0x1c) | bVar26;
                goto LAB_109f35d4c;
              }
              goto LAB_109f35c6c;
            }
            bVar27 = 0x80;
            bVar26 = 0xe0;
          }
          if (iVar30 != 3) {
            bVar26 = bVar27;
          }
          bVar26 = *(byte *)(uVar65 + 0x1c) | bVar26;
          goto LAB_109f35e04;
        }
      }
    }
LAB_109f35d4c:
    *(byte *)(*plVar67 + 0x1c) = *(byte *)(*plVar67 + 0x1c) | 2;
    if ((*(uint *)((long)puVar15 + (ulong)(uVar29 >> 5) * 4 + 0x13550) & uVar31) == 0) {
      auStack_118c0[uVar55 * 2] = (ulong)plVar67;
      auStack_118c0[uVar55 * 2 + 1] = uVar65;
      uVar55 = (ulong)((int)uVar55 + 1);
    }
    goto LAB_109f35c6c;
  }
LAB_109f36ff0:
  if (*(int *)(puVar15 + 0x2681) == 4) {
    uStack_e038 = 0;
    uStack_e040 = 0;
    uStack_e028 = 0;
    uStack_e030 = 0;
    uStack_e058 = 0;
    uStack_e060 = 0;
    uStack_e048 = 0;
    uStack_e050 = 0;
    uStack_e078 = 0;
    uStack_e080 = 0;
    uStack_e068 = 0;
    uStack_e070 = 0;
    uStack_e088 = 0;
    puStack_e090 = (undefined8 *)0x0;
    auStack_118c0[0xb] = 0;
    auStack_118c0[10] = 0;
    auStack_118c0[0xd] = 0;
    auStack_118c0[0xc] = 0;
    auStack_118c0[7] = 0;
    auStack_118c0[6] = 0;
    auStack_118c0[9] = 0;
    auStack_118c0[8] = 0;
    auStack_118c0[3] = 0;
    auStack_118c0[2] = 0;
    auStack_118c0[5] = 0;
    auStack_118c0[4] = 0;
    auStack_118c0[1] = 0;
    auStack_118c0[0] = 0;
    FUN_109f3a438(puVar15,auStack_118c0,&puStack_e090,puVar17,puVar2,puVar66,0,2);
    FUN_109f3a438(puVar15,auStack_118c0,&puStack_e090,puVar1,puVar23,puVar21,0,3);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x2752,5,2,0x380,0);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x2760,5,1,0x380,0);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x276e,6,2,0x380,0);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x277c,6,1,0x380,0);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x278a,7,2,0x380,0);
    func_0x000109f3a5f8(puVar15,auStack_118c0,&puStack_e090,puVar15 + 0x2798,7,1,0x380,0);
    puVar21 = puVar15 + 0x26b8;
    func_0x000109f3a5f8(puVar15,auStack_118c0,0,puVar21,0,2,0x380,0);
    puVar23 = auStack_118c0;
    uVar47 = (int)puVar15 + 0x13630;
    uVar25 = 0;
    uVar31 = 0;
    param_6 = (uint *)0x1;
    func_0x000109f3a5f8(puVar15);
    if (((((*(ushort *)((long)puVar15 + 0x138d1) & 0x1ff) != 0) ||
         ((*(ushort *)((long)puVar15 + 0x13e11) & 0x1ff) != 0)) ||
        ((*(ushort *)((long)puVar15 + 0x13d31) & 0x1ff) != 0)) ||
       (((*(ushort *)((long)puVar15 + 0x139b1) & 0x1ff) != 0 ||
        ((*(ushort *)((long)puVar15 + 0x135c1) & 0x1ff) != 0)))) {
      uVar50 = 0x1b;
      iVar30 = -0x381;
      do {
        if (*(int *)((long)auStack_118c0 + uVar50 * 4) != 0) break;
        uVar50 = (ulong)((int)uVar50 - 1);
        iVar30 = iVar30 + 0x20;
      } while (iVar30 != -1);
      FUN_109f3a438(puVar15,auStack_118c0,&puStack_e090,puVar17,puVar2,puVar66,puVar15 + 0x27a6,2);
      puVar23 = auStack_118c0;
      uVar25 = 0;
      uVar31 = 0;
      param_6 = (uint *)0x2;
      func_0x000109f3a5f8(puVar15);
      uVar47 = (uint)puVar21;
    }
  }
  else {
    puStack_e090 = (undefined8 *)
                   CONCAT44(puStack_e090._4_4_,
                            (*(uint *)(*(long *)(puVar15[0x2685] + 0x28) + 200) & 2) << 7);
    auStack_118c0[0] = CONCAT44(auStack_118c0[0]._4_4_,0x200);
    if (*(int *)(puVar15 + 0x2681) == 1) {
      lVar53 = 0x1c;
      puVar66 = puVar15 + 0x26d4;
      do {
        uVar62 = puVar66[99];
        uVar16 = puVar66[0x62];
        uVar71 = puVar66[1];
        uVar70 = *puVar66;
        puVar66[99] = CONCAT17((byte)((ulong)uVar62 >> 0x38) & ~(byte)((ulong)uVar71 >> 0x38),
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) &
                                        ~(byte)((ulong)uVar71 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) &
                                                 ~(byte)((ulong)uVar71 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) &
                                                          ~(byte)((ulong)uVar71 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) &
                                                                   ~(byte)((ulong)uVar71 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) &
                                                                            ~(byte)((ulong)uVar71 >>
                                                                                   0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) & ~(byte)((ulong)uVar71 >> 8),
                                                  (byte)uVar62 & ~(byte)uVar71)))))));
        puVar66[0x62] =
             CONCAT17((byte)((ulong)uVar16 >> 0x38) & ~(byte)((ulong)uVar70 >> 0x38),
                      CONCAT16((byte)((ulong)uVar16 >> 0x30) & ~(byte)((ulong)uVar70 >> 0x30),
                               CONCAT15((byte)((ulong)uVar16 >> 0x28) &
                                        ~(byte)((ulong)uVar70 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar16 >> 0x20) &
                                                 ~(byte)((ulong)uVar70 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar16 >> 0x18) &
                                                          ~(byte)((ulong)uVar70 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar16 >> 0x10) &
                                                                   ~(byte)((ulong)uVar70 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar16 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar70 >>
                                                                                   8),
                                                                            (byte)uVar16 &
                                                                            ~(byte)uVar70)))))));
        puVar66 = puVar66 + 2;
        lVar53 = lVar53 + -4;
      } while (lVar53 != 0);
      lVar53 = 0x1c;
      puVar66 = puVar15 + 0x26e2;
      do {
        uVar62 = puVar66[99];
        uVar16 = puVar66[0x62];
        uVar71 = puVar66[1];
        uVar70 = *puVar66;
        puVar66[99] = CONCAT17((byte)((ulong)uVar62 >> 0x38) & ~(byte)((ulong)uVar71 >> 0x38),
                               CONCAT16((byte)((ulong)uVar62 >> 0x30) &
                                        ~(byte)((ulong)uVar71 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar62 >> 0x28) &
                                                 ~(byte)((ulong)uVar71 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar62 >> 0x20) &
                                                          ~(byte)((ulong)uVar71 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar62 >> 0x18) &
                                                                   ~(byte)((ulong)uVar71 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar62 >>
                                                                                  0x10) &
                                                                            ~(byte)((ulong)uVar71 >>
                                                                                   0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar62 >> 8) & ~(byte)((ulong)uVar71 >> 8),
                                                  (byte)uVar62 & ~(byte)uVar71)))))));
        puVar66[0x62] =
             CONCAT17((byte)((ulong)uVar16 >> 0x38) & ~(byte)((ulong)uVar70 >> 0x38),
                      CONCAT16((byte)((ulong)uVar16 >> 0x30) & ~(byte)((ulong)uVar70 >> 0x30),
                               CONCAT15((byte)((ulong)uVar16 >> 0x28) &
                                        ~(byte)((ulong)uVar70 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar16 >> 0x20) &
                                                 ~(byte)((ulong)uVar70 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar16 >> 0x18) &
                                                          ~(byte)((ulong)uVar70 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar16 >> 0x10) &
                                                                   ~(byte)((ulong)uVar70 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar16 >>
                                                                                  8) &
                                                                            ~(byte)((ulong)uVar70 >>
                                                                                   8),
                                                                            (byte)uVar16 &
                                                                            ~(byte)uVar70)))))));
        puVar66 = puVar66 + 2;
        lVar53 = lVar53 + -4;
      } while (lVar53 != 0);
      func_0x000109f3a8b4(puVar15,puVar15 + 0x26d4,&puStack_e090,auStack_118c0,2,&uStack_118c8);
      func_0x000109f3a8b4(puVar15,puVar15 + 0x26e2,&puStack_e090,auStack_118c0,1,&uStack_118c8);
    }
    func_0x000109f3a8b4(puVar15,puVar2,&puStack_e090,auStack_118c0,2,&uStack_118c8);
    uVar25 = SUB81(&puStack_e090,0);
    uVar47 = (uint)auStack_118c0;
    param_6 = &uStack_118c8;
    uVar31 = 1;
    func_0x000109f3a8b4(puVar15);
    if (*(int *)((long)puVar15 + 0x13404) == 1) {
      func_0x000109f3a8b4(puVar15,puVar15 + 0x26f0,&puStack_e090,auStack_118c0,2,&uStack_118c8);
      puVar23 = puVar15 + 0x26fe;
      uVar25 = SUB81(&puStack_e090,0);
      uVar47 = (uint)auStack_118c0;
      param_6 = &uStack_118c8;
      uVar31 = 1;
      func_0x000109f3a8b4(puVar15);
    }
  }
  puVar56 = (uint *)(ulong)uStack_118c8;
  uVar28 = 0xfffffff7;
  uVar29 = uVar28;
  if ((uStack_118c8 & 1) != 0) {
    uVar29 = 3;
  }
  *(uint *)(puVar15[0x2686] + 0x84) = uVar29 & *(uint *)(puVar15[0x2686] + 0x84);
  if ((uStack_118c8 & 2) != 0) {
    uVar28 = 3;
  }
  *(uint *)(puVar15[0x268b] + 0x84) = *(uint *)(puVar15[0x268b] + 0x84) & uVar28;
  uVar16 = *(undefined8 *)(puVar15[0x268d] + -0x30);
  FUN_109f65aa4(uVar16);
  FUN_109f65ae0(uVar16);
  _free();
  if (*(char *)((long)param_2 + 0x61) == '\x04') {
    FUN_109efd2a8();
    puVar15 = param_1;
  }
LAB_109f35450:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar56;
  }
  ___stack_chk_fail();
  uVar9 = *(ushort *)((long)puVar23 + 0x61);
  if ((uVar9 & 0xff) == 4) {
    bVar26 = *(byte *)(puVar23[5] + 200) >> 5 & 1;
  }
  else {
    bVar26 = 0;
  }
  uVar68 = *(undefined2 *)((long)puVar15 + 0x61);
  plVar67 = *(long **)puVar15[0x2f];
  if (plVar67 == (long *)0x0) {
LAB_109f375d4:
    lVar53 = 0;
  }
  else {
    plVar48 = (long *)puVar15[0x2f];
    plVar36 = (long *)0x0;
    do {
      plVar58 = plVar48;
      if ((char)plVar48[7] == '\0') {
        plVar58 = plVar36;
      }
      plVar43 = (long *)*plVar67;
      plVar48 = plVar67;
      plVar36 = plVar58;
      plVar67 = plVar43;
    } while (plVar43 != (long *)0x0);
    if (plVar58 == (long *)0x0) goto LAB_109f375d4;
    lVar53 = plVar58[6];
  }
  puVar45 = *(ulong **)puVar23[0x2f];
  if (puVar45 != (ulong *)0x0) {
    puVar42 = (ulong *)puVar23[0x2f];
    puVar44 = (ulong *)0x0;
    do {
      puVar4 = puVar42;
      if ((char)puVar42[7] == '\0') {
        puVar4 = puVar44;
      }
      puVar46 = (ulong *)*puVar45;
      puVar42 = puVar45;
      puVar44 = puVar4;
      puVar45 = puVar46;
    } while (puVar46 != (ulong *)0x0);
    if (puVar4 != (ulong *)0x0) {
      uVar50 = puVar4[6];
      goto LAB_109f37614;
    }
  }
  uVar50 = 0;
LAB_109f37614:
  uVar62 = *(undefined8 *)(*(long *)(lVar53 + 0x20) + 0x18);
  uVar16 = *(undefined8 *)(*(long *)(uVar50 + 0x20) + 0x18);
  if (*(code **)(puVar15[5] + 0xd8) == (code *)0x0) {
    uVar29 = 0;
  }
  else {
    puVar66 = puVar15;
    (**(code **)(puVar15[5] + 0xd8))();
    uVar29 = (uint)puVar66;
  }
  puVar21 = (undefined8 *)0x30;
  _malloc();
  puVar66 = puVar21;
  if (puVar21 != (undefined8 *)0x0) {
    puVar21[4] = 0;
    puVar66 = puVar21 + 6;
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
  }
  FUN_109f6658c();
  _bzero(param_6,0x13400);
  *(undefined1 *)(param_6 + 0x4d00) = uVar25;
  *(undefined2 *)((long)param_6 + 0x13401) = 0;
  *(byte *)((long)param_6 + 0x13403) = bVar26;
  *(ulong *)(param_6 + 0x4d01) = CONCAT44((int)(char)uVar9,(int)(char)uVar68);
  param_6[0x4d05] = 0;
  param_6[0x4d06] = 0;
  param_6[0x4d07] = 0;
  param_6[0x4d08] = 0;
  param_6[0x4d03] = 0;
  param_6[0x4d04] = 0;
  param_6[0x4d09] = 0;
  *(undefined8 *)(param_6 + 0x4d0a) = uVar62;
  *(long *)(param_6 + 0x4d0c) = lVar53;
  param_6[0x4d10] = 0;
  param_6[0x4d11] = 0;
  param_6[0x4d12] = 0;
  param_6[0x4d13] = 0;
  param_6[0x4d0e] = 0;
  param_6[0x4d0f] = 0;
  *(undefined8 *)(param_6 + 0x4d14) = uVar16;
  *(ulong *)(param_6 + 0x4d16) = uVar50;
  param_6[0x4d18] = uVar29;
  param_6[0x4d19] = 0;
  puVar56 = param_6 + 0x4d1c;
  *(undefined8 **)(param_6 + 0x4d1a) = puVar66;
  _bzero(puVar56,0xa80);
  lVar53 = 0x380;
  puVar51 = param_6;
  do {
    *(uint **)(puVar51 + 4) = puVar51 + 4;
    *(uint **)(puVar51 + 6) = puVar51 + 4;
    *(uint **)puVar51 = puVar51;
    *(uint **)(puVar51 + 2) = puVar51;
    *(uint **)(puVar51 + 10) = puVar51 + 10;
    *(uint **)(puVar51 + 0xc) = puVar51 + 10;
    puVar51 = puVar51 + 0x16;
    lVar53 = lVar53 + -1;
  } while (lVar53 != 0);
  plVar67 = (long *)puVar23[0x2f];
  for (plVar48 = *(long **)puVar23[0x2f]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
    lVar53 = plVar67[6];
    if (lVar53 != 0) {
      do {
        lVar52 = *(long *)(lVar53 + 0x30);
        if (lVar52 != 0) {
          lVar60 = lVar52;
          FUN_109ecc434();
          do {
            lVar24 = lVar60;
            plVar36 = *(long **)(lVar52 + 0x20);
            plVar48 = (long *)*plVar36;
            if (plVar48 != (long *)0x0) {
              do {
                plVar58 = (long *)0x0;
                plVar43 = plVar36;
                if (*plVar48 != 0) {
                  plVar58 = plVar48;
                }
                do {
                  plVar36 = plVar58;
                  if (((int)plVar43[3] == 4) &&
                     (uVar29 = *(uint *)(plVar43 + 5),
                     uVar29 - 0x144 < 0x27 &&
                     (1L << ((ulong)(uVar29 - 0x144) & 0x3f) & 0x5000000029U) != 0)) {
                    plVar48 = plVar43;
                    FUN_109f140f4();
                    plVar48 = (long *)plVar43[(long)(int)plVar48 * 4 + 0x13];
                    uVar28 = *(uint *)((long)plVar43 +
                                      (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar29 * 0x68] * 4 + 0x50
                                      );
                    uVar50 = (ulong)uVar28 & 0x7f;
                    puVar51 = param_6;
                    func_0x000109f38a28(param_6,uVar50);
                    if ((int)puVar51 != 0) {
                      uVar29 = (uVar28 & 0x7f) * 8 +
                               *(int *)((long)plVar43 +
                                       (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar29 * 0x68] * 4 +
                                       0x50) * 2;
                      uVar49 = uVar28 >> 0x19 & 1;
                      uVar55 = (ulong)(uVar29 | uVar49);
                      plVar58 = *(long **)(param_6 + 0x4d1a);
                      FUN_109f6650c(plVar58,0x18);
                      plVar58[2] = (long)plVar43;
                      puVar51 = param_6 + (uVar55 * 0xb + 5) * 2;
                      lVar52 = *(long *)puVar51;
                      *plVar58 = lVar52;
                      plVar58[1] = (long)puVar51;
                      *(long **)(lVar52 + 8) = plVar58;
                      *(long **)puVar51 = plVar58;
                      uVar10 = uVar28 >> 7 & 0x3f;
                      uVar32 = param_6[(uVar55 * 0xb + 10) * 2];
                      if (param_6[(uVar55 * 0xb + 10) * 2] <= uVar10) {
                        uVar32 = uVar10;
                      }
                      param_6[(uVar55 * 0xb + 10) * 2] = uVar32;
                      uVar65 = (ulong)(uVar29 >> 5);
                      uVar49 = 1 << (ulong)(uVar29 & 0x1f | uVar49);
                      param_6[uVar65 + 0x4d38] = param_6[uVar65 + 0x4d38] | uVar49;
                      uVar29 = param_6[0x4d02];
                      if (uVar29 == 4) {
                        iVar30 = (int)plVar43[5];
                        if (iVar30 < 0x149) {
                          uVar37 = 5;
                          if ((uVar28 & 0x40000000) != 0) {
                            uVar37 = 6;
                          }
                          uVar25 = 1;
                          if (iVar30 != 0x144) {
                            uVar25 = uVar37;
                          }
                        }
                        else if (iVar30 == 0x149) {
                          puVar51 = param_6;
                          func_0x000109f38af0(param_6,uVar55);
                          if (((ulong)puVar51 & 1) == 0) {
                            uVar25 = 2;
                            if (*(char *)((long)plVar43 + 0x4d) != ' ') {
                              uVar25 = 3;
                            }
                          }
                          else {
                            uVar25 = 4;
                          }
                        }
                        else {
                          uVar25 = 7;
                        }
                        *(undefined1 *)((long)puVar56 + uVar50) = uVar25;
                      }
                      else {
                        uVar25 = 0;
                      }
                      if (*(int *)(*plVar48 + 0x18) == 5) {
                        puVar51 = param_6;
                        func_0x000109f38b74(param_6,uVar50);
                        if (((uint)puVar51 >> 3 & 1) != 0) {
                          if (uVar29 == 4) {
                            iVar30 = (int)plVar43[5];
                            if (iVar30 < 0x149) {
                              if (iVar30 == 0x144) {
                                puVar51 = param_6 + 0x4e88;
                                if (*(char *)((long)plVar43 + 0x4d) == ' ') {
                                  puVar51 = param_6 + 0x4e6c;
                                }
                              }
                              else {
                                bVar12 = *(char *)((long)plVar43 + 0x4d) == ' ';
                                if ((uVar28 >> 0x1e & 1) == 0) {
                                  puVar51 = param_6 + 0x4ec0;
                                  if (bVar12) {
                                    puVar51 = param_6 + 0x4ea4;
                                  }
                                }
                                else {
                                  puVar51 = param_6 + 0x4ef8;
                                  if (bVar12) {
                                    puVar51 = param_6 + 0x4edc;
                                  }
                                }
                              }
                            }
                            else {
                              if (iVar30 == 0x149) {
                                puVar54 = param_6;
                                func_0x000109f38af0(param_6,uVar55);
                                puVar51 = param_6 + 0x4f4c;
                                if ((int)puVar54 != 0) goto LAB_109f37f70;
                                puVar51 = param_6 + 0x4e50;
                                if (*(char *)((long)plVar43 + 0x4d) == ' ') {
                                  puVar51 = param_6 + 0x4e34;
                                }
                                uVar29 = puVar51[uVar65];
LAB_109f37f8c:
                                puVar51[uVar65] = uVar29 | uVar49;
                                goto LAB_109f37fa8;
                              }
                              puVar51 = param_6 + 0x4f30;
                              if (*(char *)((long)plVar43 + 0x4d) == ' ') {
                                puVar51 = param_6 + 0x4f14;
                              }
                            }
                            puVar51[uVar65] = puVar51[uVar65] | uVar49;
                          }
                          else {
                            cVar7 = *(char *)((long)plVar43 + 0x4d);
                            lVar52 = 0x139b0;
                            if (cVar7 != ' ') {
                              lVar52 = 0x13a20;
                            }
                            *(uint *)((long)param_6 + uVar65 * 4 + lVar52) =
                                 *(uint *)((long)param_6 + uVar65 * 4 + lVar52) | uVar49;
                            if ((uVar29 == 1) && ((int)plVar43[5] == 0x16a)) {
                              uVar50 = *(ulong *)plVar43[0x13];
                              FUN_109f38c50(uVar50,0x12);
                              if ((uVar50 & 1) == 0) {
                                puVar51 = param_6 + 0x4dc4;
                                if (cVar7 == ' ') {
                                  puVar51 = param_6 + 0x4da8;
                                }
LAB_109f37f70:
                                uVar29 = puVar51[uVar65];
                                goto LAB_109f37f8c;
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar28 = uVar10;
                        if (uVar10 != 0) {
                          do {
                            param_6[(uVar55 >> 5) + 0x4e18] =
                                 1 << (ulong)((uint)uVar55 & 0x1f) | param_6[(uVar55 >> 5) + 0x4e18]
                            ;
                            uVar55 = (ulong)((uint)uVar55 + 8);
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                          if ((uVar10 - 1 != 0) && (uVar29 == 4)) {
                            _memset((long)param_6 + uVar50 + 0x13471,uVar25,uVar10 - 1);
                          }
                        }
                      }
                    }
                  }
LAB_109f37fa8:
                  if (plVar36 == (long *)0x0) goto LAB_109f37fc0;
                  plVar48 = (long *)*plVar36;
                  plVar58 = (long *)0x0;
                  plVar43 = plVar36;
                } while (plVar48 == (long *)0x0);
              } while( true );
            }
LAB_109f37fc0:
            lVar60 = lVar24;
            FUN_109ecc434();
            lVar52 = lVar24;
          } while (lVar24 != 0);
          plVar48 = (long *)*plVar67;
        }
        *(uint *)(lVar53 + 0x84) = *(uint *)(lVar53 + 0x84) & 0xfffffff7;
        plVar36 = (long *)*plVar48;
        plVar67 = plVar48;
        while( true ) {
          plVar48 = plVar36;
          if (plVar48 == (long *)0x0) goto LAB_109f3776c;
          lVar53 = plVar67[6];
          if (lVar53 != 0) break;
          plVar36 = (long *)*plVar48;
          plVar67 = plVar48;
        }
      } while( true );
    }
    plVar67 = plVar48;
  }
LAB_109f3776c:
  plVar67 = (long *)puVar15[0x2f];
  for (plVar48 = *(long **)puVar15[0x2f]; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
    lVar53 = plVar67[6];
    if (lVar53 != 0) {
      do {
        lVar52 = *(long *)(lVar53 + 0x30);
        if (lVar52 != 0) {
          lVar60 = lVar52;
          FUN_109ecc434();
          do {
            lVar24 = lVar60;
            plVar36 = *(long **)(lVar52 + 0x20);
            plVar48 = (long *)*plVar36;
            if (plVar48 != (long *)0x0) {
              do {
                plVar58 = (long *)0x0;
                plVar43 = plVar36;
                if (*plVar48 != 0) {
                  plVar58 = plVar48;
                }
                do {
                  plVar36 = plVar58;
                  if (((int)plVar43[3] == 4) &&
                     ((uVar29 = *(uint *)(plVar43 + 5),
                      uVar29 - 0x164 < 8 && (1 << (ulong)(uVar29 - 0x164 & 0x1f) & 0xa1U) != 0 ||
                      (uVar29 - 0x27a < 3)))) {
                    plVar58 = plVar43;
                    FUN_109f140f4();
                    plVar48 = plVar43 + 0x10;
                    plVar58 = (long *)plVar48[(long)(int)plVar58 * 4 + 3];
                    uVar49 = *(uint *)((long)plVar43 +
                                      (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar29 * 0x68] * 4 + 0x50
                                      );
                    uVar28 = uVar49 & 0x7f;
                    puVar51 = param_6;
                    func_0x000109f38a28(param_6,uVar28);
                    if ((int)puVar51 != 0) {
                      uVar32 = uVar49;
                      if (uVar28 == 0xd) {
                        uVar32 = uVar49 & 0xffffff81;
                      }
                      uVar10 = uVar49 & 0xffffff82;
                      if (uVar28 != 0xe) {
                        uVar10 = uVar32;
                      }
                      if (param_6[0x4d02] == 4) {
                        uVar49 = uVar10;
                      }
                      uVar28 = (uVar49 & 0x7f) * 8 +
                               *(int *)((long)plVar43 +
                                       (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar29 * 0x68] * 4 +
                                       0x50) * 2;
                      uVar32 = uVar49 >> 0x19 & 1;
                      uVar50 = (ulong)(uVar28 | uVar32);
                      puVar51 = param_6 + uVar50 * 0x16;
                      plVar22 = *(long **)(param_6 + 0x4d1a);
                      FUN_109f6650c(plVar22,0x18);
                      plVar22[2] = (long)plVar43;
                      uVar11 = uVar49 >> 7 & 0x3f;
                      uVar10 = puVar51[0x14];
                      if (puVar51[0x14] <= uVar11) {
                        uVar10 = uVar11;
                      }
                      puVar51[0x14] = uVar10;
                      uVar32 = 1 << (ulong)(uVar28 & 0x1f | uVar32);
                      uVar55 = (ulong)(uVar28 >> 5);
                      if (uVar29 - 0x27a < 3) {
                        lVar52 = *(long *)puVar51;
                        *plVar22 = lVar52;
                        plVar22[1] = (long)puVar51;
                        *(long **)(lVar52 + 8) = plVar22;
                        *(long **)puVar51 = plVar22;
                        plVar22 = plVar43;
                        FUN_109f38cd8();
                        if (((int)plVar22 != 0) &&
                           (param_6[uVar55 + 0x4d54] = param_6[uVar55 + 0x4d54] | uVar32,
                           (uVar49 >> 0x1c & 1) != 0)) {
                          uVar28 = uVar28 >> 3;
                          FUN_109ecdbbc(uVar28,param_6[0x4d02]);
                          if ((uVar28 == 0) ||
                             ((*(uint *)((long)plVar43 +
                                        (ulong)(byte)(&UNK_110b671cf)
                                                     [(ulong)*(uint *)(plVar43 + 5) * 0x68] * 4 +
                                        0x50) >> 0x1d & 1) != 0)) {
                            puVar54 = param_6 + 0x4d8c;
                            if (*(char *)(plVar43[0x13] + 0x1d) == ' ') {
                              puVar54 = param_6 + 0x4d70;
                            }
                            puVar54[uVar55] = puVar54[uVar55] | uVar32;
                          }
                        }
                      }
                      else {
                        puVar54 = puVar51 + 4;
                        lVar52 = *(long *)puVar54;
                        *plVar22 = lVar52;
                        plVar22[1] = (long)puVar54;
                        *(long **)(lVar52 + 8) = plVar22;
                        *(long **)puVar54 = plVar22;
                      }
                      param_6[uVar55 + 0x4d38] = param_6[uVar55 + 0x4d38] | uVar32;
                      if (*(int *)(*plVar58 + 0x18) == 5) {
                        puVar54 = param_6;
                        func_0x000109f38b74(param_6,uVar49 & 0x7f);
                        if (((uint)puVar54 & 0xff) < 0x10) {
                          if (uVar29 - 0x27a < 3) {
                            plVar58 = (long *)plVar43[0x13];
                            if (((*(int *)(*plVar58 + 0x18) == 5) || (param_6[0x4d01] != 7)) &&
                               ((*(byte *)(plVar43[2] + 0x44) & 1) == 0)) {
                              FUN_109efc42c();
                              uVar29 = (uint)plVar48;
                            }
                            else {
                              uVar29 = 1;
                            }
                            puVar54 = param_6 + 0x4fa0;
                            if (*(long *)(puVar51 + 8) == 0) {
                              param_6[uVar55 + 0x4f68] = param_6[uVar55 + 0x4f68] | uVar32;
                              *(long *)(puVar51 + 8) = *plVar58;
                              if (param_6[0x4d02] != 4) {
                                uVar29 = 1;
                              }
                              if ((uVar29 & 1) == 0) {
                                if (*(char *)((long)plVar58 + 0x1d) == ' ') {
                                  puVar54 = param_6 + 0x4f84;
                                }
                                goto LAB_109f384a0;
                              }
                            }
                            else {
                              if (*(long *)(puVar51 + 8) != *plVar58) {
                                param_6[uVar55 + 0x4f68] =
                                     param_6[uVar55 + 0x4f68] & (uVar32 ^ 0xffffffff);
                              }
                              uVar29 = uVar29 ^ 1;
                              if (param_6[0x4d02] != 4) {
                                uVar29 = 1;
                              }
                              if ((uVar29 & 1) == 0) {
                                if (*(char *)((long)plVar58 + 0x1d) == ' ') {
                                  puVar54 = param_6 + 0x4f84;
                                }
                                uVar32 = puVar54[uVar55] & (uVar32 ^ 0xffffffff);
                                goto LAB_109f384ac;
                              }
                            }
                          }
                          else if (7 < ((uint)puVar54 & 0xff)) {
                            puVar54 = param_6 + 0x4e88;
                            if (*(char *)((long)plVar43 + 0x4d) == ' ') {
                              puVar54 = param_6 + 0x4e6c;
                            }
LAB_109f384a0:
                            uVar32 = puVar54[uVar55] | uVar32;
LAB_109f384ac:
                            puVar54[uVar55] = uVar32;
                          }
                        }
                      }
                      else {
                        uVar29 = uVar11;
                        if (uVar11 != 0) {
                          do {
                            param_6[(uVar50 >> 5) + 0x4e18] =
                                 1 << (ulong)((uint)uVar50 & 0x1f) | param_6[(uVar50 >> 5) + 0x4e18]
                            ;
                            uVar50 = (ulong)((uint)uVar50 + 8);
                            uVar29 = uVar29 - 1;
                          } while (uVar29 != 0);
                          if ((uVar11 - 1 != 0) && (param_6[0x4d02] == 4)) {
                            _memset((long)param_6 + ((ulong)uVar49 & 0x7f) + 0x13471,
                                    *(undefined1 *)((long)puVar56 + ((ulong)uVar49 & 0x7f)),
                                    uVar11 - 1);
                          }
                        }
                      }
                    }
                  }
                  if (plVar36 == (long *)0x0) goto LAB_109f384c8;
                  plVar48 = (long *)*plVar36;
                  plVar58 = (long *)0x0;
                  plVar43 = plVar36;
                } while (plVar48 == (long *)0x0);
              } while( true );
            }
LAB_109f384c8:
            lVar60 = lVar24;
            FUN_109ecc434();
            lVar52 = lVar24;
          } while (lVar24 != 0);
          plVar48 = (long *)*plVar67;
        }
        *(uint *)(lVar53 + 0x84) = *(uint *)(lVar53 + 0x84) & 0xfffffff7;
        plVar36 = (long *)*plVar48;
        plVar67 = plVar48;
        while( true ) {
          plVar48 = plVar36;
          if (plVar48 == (long *)0x0) goto LAB_109f37790;
          lVar53 = plVar67[6];
          if (lVar53 != 0) break;
          plVar36 = (long *)*plVar48;
          plVar67 = plVar48;
        }
      } while( true );
    }
    plVar67 = plVar48;
  }
LAB_109f37790:
  uVar50 = 0;
  uVar29 = param_6[0x4e18];
  if (uVar29 == 0) goto LAB_109f377b8;
  do {
    do {
      uVar28 = (uVar29 & 0xaaaaaaaa) >> 1 | (uVar29 & 0x55555555) << 1;
      uVar28 = (uVar28 & 0xcccccccc) >> 2 | (uVar28 & 0x33333333) << 2;
      uVar28 = (uVar28 & 0xf0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f) << 4;
      uVar28 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
      uVar28 = (uint)LZCOUNT(uVar28 >> 0x10 | uVar28 << 0x10);
      uVar29 = uVar29 & (1 << (ulong)(uVar28 & 0x1f) ^ 0xffffffffU);
      FUN_109f38d6c(param_6,uVar28 | (int)uVar50 << 5);
    } while (uVar29 != 0);
LAB_109f377b8:
    uVar50 = uVar50 & 0xffffffff;
    do {
      uVar55 = uVar50;
      if (uVar55 == 0x1b) goto LAB_109f37804;
      uVar50 = uVar55 + 1;
      uVar29 = param_6[uVar55 + 0x4e19];
    } while (uVar29 == 0);
  } while (uVar55 < 0x1b);
LAB_109f37804:
  uVar50 = 0;
  uVar29 = param_6[0x4e18];
  while( true ) {
    if (uVar29 == 0) {
      uVar55 = uVar50 & 0xffffffff;
      do {
        if (uVar55 == 0x1b) goto LAB_109f37934;
        uVar50 = uVar55 + 1;
        uVar29 = param_6[uVar55 + 0x4e19];
        uVar55 = uVar50;
      } while (uVar29 == 0);
    }
    uVar28 = (uint)uVar50;
    if (0x1b < uVar28) break;
    uVar49 = (uVar29 & 0xaaaaaaaa) >> 1 | (uVar29 & 0x55555555) << 1;
    uVar49 = (uVar49 & 0xcccccccc) >> 2 | (uVar49 & 0x33333333) << 2;
    uVar49 = (uVar49 & 0xf0f0f0f0) >> 4 | (uVar49 & 0xf0f0f0f) << 4;
    uVar49 = (uVar49 & 0xff00ff00) >> 8 | (uVar49 & 0xff00ff) << 8;
    uVar49 = (uint)LZCOUNT(uVar49 >> 0x10 | uVar49 << 0x10);
    uVar29 = uVar29 & (1 << (ulong)(uVar49 & 0x1f) ^ 0xffffffffU);
    puVar56 = param_6 + (ulong)(uVar49 | uVar28 << 5) * 0x16;
    if (1 < puVar56[0x14]) {
      puVar51 = puVar56 + 4;
      puVar54 = puVar56 + 10;
      lVar53 = (ulong)puVar56[0x14] - 1;
      uVar49 = uVar49 + uVar28 * 0x20;
      do {
        uVar49 = uVar49 + 8;
        puVar35 = param_6 + (ulong)uVar49 * 0x16;
        if (*(uint **)(puVar35 + 2) != puVar35) {
          *(uint **)(*(long *)puVar35 + 8) = puVar56;
          lVar52 = *(long *)puVar56;
          plVar67 = *(long **)(puVar35 + 2);
          *plVar67 = lVar52;
          *(long **)(lVar52 + 8) = plVar67;
          *(undefined8 *)puVar56 = *(undefined8 *)puVar35;
        }
        if (*(uint **)(puVar35 + 6) != puVar35 + 4) {
          *(uint **)(*(long *)(puVar35 + 4) + 8) = puVar51;
          lVar52 = *(long *)puVar51;
          plVar67 = *(long **)(puVar35 + 6);
          *plVar67 = lVar52;
          *(long **)(lVar52 + 8) = plVar67;
          *(undefined8 *)puVar51 = *(undefined8 *)(puVar35 + 4);
        }
        puVar57 = puVar35 + 10;
        if (*(uint **)(puVar35 + 0xc) != puVar57) {
          *(uint **)(*(long *)(puVar35 + 10) + 8) = puVar54;
          lVar52 = *(long *)puVar54;
          plVar67 = *(long **)(puVar35 + 0xc);
          *plVar67 = lVar52;
          *(long **)(lVar52 + 8) = plVar67;
          *(undefined8 *)puVar54 = *(undefined8 *)(puVar35 + 10);
        }
        *(uint **)puVar35 = puVar35;
        *(uint **)(puVar35 + 2) = puVar35;
        *(uint **)(puVar35 + 4) = puVar35 + 4;
        *(uint **)(puVar35 + 6) = puVar35 + 4;
        *(uint **)(puVar35 + 10) = puVar57;
        *(uint **)(puVar35 + 0xc) = puVar57;
        lVar53 = lVar53 + -1;
      } while (lVar53 != 0);
    }
  }
LAB_109f37934:
  lVar53 = *(long *)(param_6 + 0x4d14);
  puVar54 = *(uint **)(*(long *)(param_6 + 0x4d0a) + 8);
  puVar51 = *(uint **)puVar54;
  puVar56 = param_6;
  if (puVar51 == (uint *)0x0) {
    iVar61 = 0;
    iVar30 = 0;
  }
  else {
    iVar30 = 0;
    iVar61 = 0;
    puVar35 = puVar51;
    puVar57 = puVar54;
    do {
      puVar34 = puVar35;
      iVar63 = iVar61;
      if (((byte)puVar57[8] >> 1 & 1) != 0) {
        uVar16 = *(undefined8 *)(lVar53 + 8);
        FUN_109f38ee8(uVar16,puVar57,2,(char)param_6[0x4d00]);
        puVar56 = *(uint **)(puVar57 + 4);
        func_0x000109f38f78();
        iVar63 = (int)puVar56 + iVar61;
        if ((int)uVar16 != 0) {
          iVar63 = iVar61;
          iVar30 = (int)puVar56 + iVar30;
        }
      }
      iVar61 = iVar63;
      puVar35 = *(uint **)puVar34;
      puVar57 = puVar34;
    } while (puVar35 != (uint *)0x0);
  }
  plVar67 = *(long **)(lVar53 + 8);
  plVar48 = (long *)*plVar67;
  if (plVar48 == (long *)0x0) {
    iVar63 = 0;
  }
  else {
    iVar63 = 0;
    plVar36 = plVar48;
    plVar58 = plVar67;
    do {
      plVar43 = plVar36;
      if (((*(byte *)(plVar58 + 4) >> 1 & 1) != 0) &&
         (puVar56 = puVar54, FUN_109f38ee8(puVar54,plVar58,2,(char)param_6[0x4d00]),
         ((ulong)puVar56 & 1) == 0)) {
        puVar56 = (uint *)plVar58[2];
        func_0x000109f38f78();
        iVar63 = (int)puVar56 + iVar63;
      }
      plVar36 = (long *)*plVar43;
      plVar58 = plVar43;
    } while (plVar36 != (long *)0x0);
  }
  *(bool *)((long)param_6 + 0x13401) = (uint)(iVar30 + iVar61 + iVar63) <= uVar47;
  if (puVar51 == (uint *)0x0) {
    iVar61 = 0;
    iVar30 = 0;
  }
  else {
    iVar30 = 0;
    iVar61 = 0;
    puVar51 = puVar54;
    do {
      iVar63 = iVar61;
      if ((char)puVar51[8] < '\0') {
        plVar36 = plVar67;
        FUN_109f38ee8(plVar67,puVar51,0x80,(char)param_6[0x4d00]);
        puVar56 = *(uint **)(puVar51 + 4);
        FUN_109f39014();
        iVar63 = (int)puVar56 + iVar61;
        if ((int)plVar36 != 0) {
          iVar63 = iVar61;
          iVar30 = (int)puVar56 + iVar30;
        }
      }
      iVar61 = iVar63;
      puVar51 = *(uint **)puVar51;
    } while (*(long *)puVar51 != 0);
  }
  iVar63 = 0;
  for (; plVar48 != (long *)0x0; plVar48 = (long *)*plVar48) {
    if ((*(char *)(plVar67 + 4) < '\0') &&
       (puVar56 = puVar54, FUN_109f38ee8(puVar54,plVar67,0x80,(char)param_6[0x4d00]),
       ((ulong)puVar56 & 1) == 0)) {
      puVar56 = (uint *)plVar67[2];
      FUN_109f39014();
      iVar63 = (int)puVar56 + iVar63;
      plVar48 = (long *)*plVar67;
    }
    plVar67 = plVar48;
  }
  *(bool *)((long)param_6 + 0x13402) = (uint)(iVar30 + iVar61 + iVar63) <= uVar31;
  return puVar56;
}



/* Entry: 109f3753c; end: 109f38a27;  */

void FUN_109f3753c(long param_1,long param_2,undefined1 param_3,uint param_4,uint param_5,
                  ulong param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  undefined1 uVar23;
  byte bVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong *puVar34;
  long lVar35;
  ulong uVar36;
  ulong *puVar37;
  uint uVar38;
  ulong *puVar39;
  undefined8 uVar40;
  long *plVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined8 uVar45;
  undefined2 uVar46;
  
  uVar2 = *(ushort *)(param_2 + 0x61);
  if ((uVar2 & 0xff) == 4) {
    bVar24 = *(byte *)(*(long *)(param_2 + 0x28) + 200) >> 5 & 1;
  }
  else {
    bVar24 = 0;
  }
  uVar46 = *(undefined2 *)(param_1 + 0x61);
  plVar26 = (long *)**(long **)(param_1 + 0x178);
  if (plVar26 == (long *)0x0) {
LAB_109f375d4:
    lVar33 = 0;
  }
  else {
    plVar30 = *(long **)(param_1 + 0x178);
    plVar21 = (long *)0x0;
    do {
      plVar15 = plVar30;
      if ((char)plVar30[7] == '\0') {
        plVar15 = plVar21;
      }
      plVar27 = (long *)*plVar26;
      plVar30 = plVar26;
      plVar21 = plVar15;
      plVar26 = plVar27;
    } while (plVar27 != (long *)0x0);
    if (plVar15 == (long *)0x0) goto LAB_109f375d4;
    lVar33 = plVar15[6];
  }
  plVar26 = (long *)**(long **)(param_2 + 0x178);
  if (plVar26 != (long *)0x0) {
    plVar30 = *(long **)(param_2 + 0x178);
    plVar21 = (long *)0x0;
    do {
      plVar15 = plVar30;
      if ((char)plVar30[7] == '\0') {
        plVar15 = plVar21;
      }
      plVar27 = (long *)*plVar26;
      plVar30 = plVar26;
      plVar21 = plVar15;
      plVar26 = plVar27;
    } while (plVar27 != (long *)0x0);
    if (plVar15 != (long *)0x0) {
      lVar35 = plVar15[6];
      goto LAB_109f37614;
    }
  }
  lVar35 = 0;
LAB_109f37614:
  uVar45 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + 0x18);
  uVar40 = *(undefined8 *)(*(long *)(lVar35 + 0x20) + 0x18);
  pcVar18 = *(code **)(*(long *)(param_1 + 0x28) + 0xd8);
  if (pcVar18 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar31 = param_1;
    (*pcVar18)(param_1,param_2);
    uVar6 = (undefined4)lVar31;
  }
  puVar8 = (undefined8 *)0x30;
  _malloc();
  puVar9 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[4] = 0;
    puVar9 = puVar8 + 6;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
  }
  FUN_109f6658c();
  _bzero(param_6,0x13400);
  *(undefined1 *)(param_6 + 0x13400) = param_3;
  *(undefined2 *)(param_6 + 0x13401) = 0;
  *(byte *)(param_6 + 0x13403) = bVar24;
  *(ulong *)(param_6 + 0x13404) = CONCAT44((int)(char)uVar2,(int)(char)uVar46);
  *(undefined8 *)(param_6 + 0x13414) = 0;
  *(undefined8 *)(param_6 + 0x1341c) = 0;
  *(undefined8 *)(param_6 + 0x1340c) = 0;
  *(undefined4 *)(param_6 + 0x13424) = 0;
  *(undefined8 *)(param_6 + 0x13428) = uVar45;
  *(long *)(param_6 + 0x13430) = lVar33;
  *(undefined8 *)(param_6 + 0x13440) = 0;
  *(undefined8 *)(param_6 + 0x13448) = 0;
  *(undefined8 *)(param_6 + 0x13438) = 0;
  *(undefined8 *)(param_6 + 0x13450) = uVar40;
  *(long *)(param_6 + 0x13458) = lVar35;
  *(undefined4 *)(param_6 + 0x13460) = uVar6;
  *(undefined4 *)(param_6 + 0x13464) = 0;
  lVar33 = param_6 + 0x13470;
  *(undefined8 **)(param_6 + 0x13468) = puVar9;
  _bzero(lVar33,0xa80);
  lVar35 = 0x380;
  uVar36 = param_6;
  do {
    *(ulong *)(uVar36 + 0x10) = uVar36 + 0x10;
    *(ulong *)(uVar36 + 0x18) = uVar36 + 0x10;
    *(ulong *)uVar36 = uVar36;
    *(ulong *)(uVar36 + 8) = uVar36;
    *(ulong *)(uVar36 + 0x28) = uVar36 + 0x28;
    *(ulong *)(uVar36 + 0x30) = uVar36 + 0x28;
    uVar36 = uVar36 + 0x58;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  plVar26 = *(long **)(param_2 + 0x178);
  for (plVar30 = (long *)**(long **)(param_2 + 0x178); plVar30 != (long *)0x0;
      plVar30 = (long *)*plVar30) {
    lVar35 = plVar26[6];
    if (lVar35 != 0) {
      do {
        lVar31 = *(long *)(lVar35 + 0x30);
        if (lVar31 != 0) {
          lVar32 = lVar31;
          FUN_109ecc434();
          do {
            lVar11 = lVar32;
            plVar21 = *(long **)(lVar31 + 0x20);
            plVar30 = (long *)*plVar21;
            if (plVar30 != (long *)0x0) {
              do {
                plVar15 = (long *)0x0;
                plVar27 = plVar21;
                if (*plVar30 != 0) {
                  plVar15 = plVar30;
                }
                do {
                  plVar21 = plVar15;
                  if (((int)plVar27[3] == 4) &&
                     (uVar38 = *(uint *)(plVar27 + 5),
                     uVar38 - 0x144 < 0x27 &&
                     (1L << ((ulong)(uVar38 - 0x144) & 0x3f) & 0x5000000029U) != 0)) {
                    plVar30 = plVar27;
                    FUN_109f140f4();
                    plVar30 = (long *)plVar27[(long)(int)plVar30 * 4 + 0x13];
                    uVar16 = *(uint *)((long)plVar27 +
                                      (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar38 * 0x68] * 4 + 0x50
                                      );
                    uVar28 = (ulong)uVar16 & 0x7f;
                    uVar36 = param_6;
                    FUN_109f38a28(param_6,uVar28);
                    if ((int)uVar36 != 0) {
                      uVar38 = (uVar16 & 0x7f) * 8 +
                               *(int *)((long)plVar27 +
                                       (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar38 * 0x68] * 4 +
                                       0x50) * 2;
                      uVar29 = uVar16 >> 0x19 & 1;
                      uVar36 = (ulong)(uVar38 | uVar29);
                      lVar32 = param_6 + uVar36 * 0x58;
                      plVar15 = *(long **)(param_6 + 0x13468);
                      FUN_109f6650c(plVar15,0x18);
                      plVar15[2] = (long)plVar27;
                      plVar14 = (long *)(lVar32 + 0x28);
                      lVar31 = *plVar14;
                      *plVar15 = lVar31;
                      plVar15[1] = (long)plVar14;
                      *(long **)(lVar31 + 8) = plVar15;
                      *plVar14 = (long)plVar15;
                      uVar3 = uVar16 >> 7 & 0x3f;
                      uVar17 = *(uint *)(lVar32 + 0x50);
                      if (*(uint *)(lVar32 + 0x50) <= uVar3) {
                        uVar17 = uVar3;
                      }
                      *(uint *)(lVar32 + 0x50) = uVar17;
                      uVar25 = (ulong)(uVar38 >> 5);
                      uVar38 = 1 << (ulong)(uVar38 & 0x1f | uVar29);
                      *(uint *)(param_6 + 0x134e0 + uVar25 * 4) =
                           *(uint *)(param_6 + 0x134e0 + uVar25 * 4) | uVar38;
                      iVar42 = *(int *)(param_6 + 0x13408);
                      if (iVar42 == 4) {
                        iVar43 = (int)plVar27[5];
                        if (iVar43 < 0x149) {
                          uVar23 = 5;
                          if ((uVar16 & 0x40000000) != 0) {
                            uVar23 = 6;
                          }
                          uVar13 = 1;
                          if (iVar43 != 0x144) {
                            uVar13 = uVar23;
                          }
                        }
                        else if (iVar43 == 0x149) {
                          uVar10 = param_6;
                          func_0x000109f38af0(param_6,uVar36);
                          if ((uVar10 & 1) == 0) {
                            uVar13 = 2;
                            if (*(char *)((long)plVar27 + 0x4d) != ' ') {
                              uVar13 = 3;
                            }
                          }
                          else {
                            uVar13 = 4;
                          }
                        }
                        else {
                          uVar13 = 7;
                        }
                        *(undefined1 *)(lVar33 + uVar28) = uVar13;
                      }
                      else {
                        uVar13 = 0;
                      }
                      if (*(int *)(*plVar30 + 0x18) == 5) {
                        uVar10 = param_6;
                        func_0x000109f38b74(param_6,uVar28);
                        if (((uint)uVar10 >> 3 & 1) != 0) {
                          if (iVar42 == 4) {
                            iVar42 = (int)plVar27[5];
                            if (iVar42 < 0x149) {
                              if (iVar42 == 0x144) {
                                lVar31 = param_6 + 0x13a20;
                                if (*(char *)((long)plVar27 + 0x4d) == ' ') {
                                  lVar31 = param_6 + 0x139b0;
                                }
                              }
                              else {
                                bVar5 = *(char *)((long)plVar27 + 0x4d) == ' ';
                                if ((uVar16 >> 0x1e & 1) == 0) {
                                  lVar31 = param_6 + 0x13b00;
                                  if (bVar5) {
                                    lVar31 = param_6 + 0x13a90;
                                  }
                                }
                                else {
                                  lVar31 = param_6 + 0x13be0;
                                  if (bVar5) {
                                    lVar31 = param_6 + 0x13b70;
                                  }
                                }
                              }
                            }
                            else {
                              if (iVar42 == 0x149) {
                                uVar28 = param_6;
                                func_0x000109f38af0(param_6,uVar36);
                                lVar31 = param_6 + 0x13d30;
                                if ((int)uVar28 != 0) goto LAB_109f37f70;
                                lVar31 = param_6 + 0x13940;
                                if (*(char *)((long)plVar27 + 0x4d) == ' ') {
                                  lVar31 = param_6 + 0x138d0;
                                }
                                uVar16 = *(uint *)(lVar31 + uVar25 * 4);
LAB_109f37f8c:
                                *(uint *)(lVar31 + uVar25 * 4) = uVar16 | uVar38;
                                goto LAB_109f37fa8;
                              }
                              lVar31 = param_6 + 0x13cc0;
                              if (*(char *)((long)plVar27 + 0x4d) == ' ') {
                                lVar31 = param_6 + 0x13c50;
                              }
                            }
                            *(uint *)(lVar31 + uVar25 * 4) = *(uint *)(lVar31 + uVar25 * 4) | uVar38
                            ;
                          }
                          else {
                            cVar1 = *(char *)((long)plVar27 + 0x4d);
                            lVar31 = 0x139b0;
                            if (cVar1 != ' ') {
                              lVar31 = 0x13a20;
                            }
                            *(uint *)(param_6 + lVar31 + uVar25 * 4) =
                                 *(uint *)(param_6 + lVar31 + uVar25 * 4) | uVar38;
                            if ((iVar42 == 1) && ((int)plVar27[5] == 0x16a)) {
                              uVar36 = *(ulong *)plVar27[0x13];
                              FUN_109f38c50(uVar36,0x12);
                              if ((uVar36 & 1) == 0) {
                                lVar31 = param_6 + 0x13710;
                                if (cVar1 == ' ') {
                                  lVar31 = param_6 + 0x136a0;
                                }
LAB_109f37f70:
                                uVar16 = *(uint *)(lVar31 + uVar25 * 4);
                                goto LAB_109f37f8c;
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar38 = uVar3;
                        if (uVar3 != 0) {
                          do {
                            *(uint *)(param_6 + 0x13860 + (uVar36 >> 5) * 4) =
                                 1 << (ulong)((uint)uVar36 & 0x1f) |
                                 *(uint *)(param_6 + 0x13860 + (uVar36 >> 5) * 4);
                            uVar36 = (ulong)((uint)uVar36 + 8);
                            uVar38 = uVar38 - 1;
                          } while (uVar38 != 0);
                          if ((uVar3 - 1 != 0) && (iVar42 == 4)) {
                            _memset(param_6 + 0x13471 + uVar28,uVar13,uVar3 - 1);
                          }
                        }
                      }
                    }
                  }
LAB_109f37fa8:
                  if (plVar21 == (long *)0x0) goto LAB_109f37fc0;
                  plVar30 = (long *)*plVar21;
                  plVar15 = (long *)0x0;
                  plVar27 = plVar21;
                } while (plVar30 == (long *)0x0);
              } while( true );
            }
LAB_109f37fc0:
            lVar32 = lVar11;
            FUN_109ecc434();
            lVar31 = lVar11;
          } while (lVar11 != 0);
          plVar30 = (long *)*plVar26;
        }
        *(uint *)(lVar35 + 0x84) = *(uint *)(lVar35 + 0x84) & 0xfffffff7;
        plVar21 = (long *)*plVar30;
        plVar26 = plVar30;
        while( true ) {
          plVar30 = plVar21;
          if (plVar30 == (long *)0x0) goto LAB_109f3776c;
          lVar35 = plVar26[6];
          if (lVar35 != 0) break;
          plVar21 = (long *)*plVar30;
          plVar26 = plVar30;
        }
      } while( true );
    }
    plVar26 = plVar30;
  }
LAB_109f3776c:
  plVar26 = *(long **)(param_1 + 0x178);
  for (plVar30 = (long *)**(long **)(param_1 + 0x178); plVar30 != (long *)0x0;
      plVar30 = (long *)*plVar30) {
    lVar35 = plVar26[6];
    if (lVar35 != 0) {
      lVar31 = param_6 + 0x13da0;
      do {
        lVar32 = *(long *)(lVar35 + 0x30);
        if (lVar32 != 0) {
          lVar11 = lVar32;
          FUN_109ecc434();
          do {
            lVar12 = lVar11;
            plVar21 = *(long **)(lVar32 + 0x20);
            plVar30 = (long *)*plVar21;
            if (plVar30 != (long *)0x0) {
              do {
                plVar15 = (long *)0x0;
                plVar27 = plVar21;
                if (*plVar30 != 0) {
                  plVar15 = plVar30;
                }
                do {
                  plVar21 = plVar15;
                  if (((int)plVar27[3] == 4) &&
                     ((uVar38 = *(uint *)(plVar27 + 5),
                      uVar38 - 0x164 < 8 && (1 << (ulong)(uVar38 - 0x164 & 0x1f) & 0xa1U) != 0 ||
                      (uVar38 - 0x27a < 3)))) {
                    plVar15 = plVar27;
                    FUN_109f140f4();
                    plVar30 = plVar27 + 0x10;
                    plVar15 = (long *)plVar30[(long)(int)plVar15 * 4 + 3];
                    uVar29 = *(uint *)((long)plVar27 +
                                      (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar38 * 0x68] * 4 + 0x50
                                      );
                    uVar16 = uVar29 & 0x7f;
                    uVar36 = param_6;
                    FUN_109f38a28(param_6,uVar16);
                    if ((int)uVar36 != 0) {
                      uVar17 = uVar29;
                      if (uVar16 == 0xd) {
                        uVar17 = uVar29 & 0xffffff81;
                      }
                      uVar3 = uVar29 & 0xffffff82;
                      if (uVar16 != 0xe) {
                        uVar3 = uVar17;
                      }
                      if (*(int *)(param_6 + 0x13408) == 4) {
                        uVar29 = uVar3;
                      }
                      uVar16 = (uVar29 & 0x7f) * 8 +
                               *(int *)((long)plVar27 +
                                       (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar38 * 0x68] * 4 +
                                       0x50) * 2;
                      uVar17 = uVar29 >> 0x19 & 1;
                      uVar36 = (ulong)(uVar16 | uVar17);
                      plVar41 = (long *)(param_6 + uVar36 * 0x58);
                      plVar14 = *(long **)(param_6 + 0x13468);
                      FUN_109f6650c(plVar14,0x18);
                      plVar14[2] = (long)plVar27;
                      uVar4 = uVar29 >> 7 & 0x3f;
                      uVar3 = *(uint *)(plVar41 + 10);
                      if (*(uint *)(plVar41 + 10) <= uVar4) {
                        uVar3 = uVar4;
                      }
                      *(uint *)(plVar41 + 10) = uVar3;
                      uVar17 = 1 << (ulong)(uVar16 & 0x1f | uVar17);
                      uVar28 = (ulong)(uVar16 >> 5);
                      if (uVar38 - 0x27a < 3) {
                        lVar32 = *plVar41;
                        *plVar14 = lVar32;
                        plVar14[1] = (long)plVar41;
                        *(long **)(lVar32 + 8) = plVar14;
                        *plVar41 = (long)plVar14;
                        plVar14 = plVar27;
                        FUN_109f38cd8();
                        if (((int)plVar14 != 0) &&
                           (*(uint *)(param_6 + 0x13550 + uVar28 * 4) =
                                 *(uint *)(param_6 + 0x13550 + uVar28 * 4) | uVar17,
                           (uVar29 >> 0x1c & 1) != 0)) {
                          uVar16 = uVar16 >> 3;
                          FUN_109ecdbbc(uVar16,*(undefined4 *)(param_6 + 0x13408));
                          if ((uVar16 == 0) ||
                             ((*(uint *)((long)plVar27 +
                                        (ulong)(byte)(&UNK_110b671cf)
                                                     [(ulong)*(uint *)(plVar27 + 5) * 0x68] * 4 +
                                        0x50) >> 0x1d & 1) != 0)) {
                            lVar32 = param_6 + 0x13630;
                            if (*(char *)(plVar27[0x13] + 0x1d) == ' ') {
                              lVar32 = param_6 + 0x135c0;
                            }
                            *(uint *)(lVar32 + uVar28 * 4) = *(uint *)(lVar32 + uVar28 * 4) | uVar17
                            ;
                          }
                        }
                      }
                      else {
                        plVar22 = plVar41 + 2;
                        lVar32 = *plVar22;
                        *plVar14 = lVar32;
                        plVar14[1] = (long)plVar22;
                        *(long **)(lVar32 + 8) = plVar14;
                        *plVar22 = (long)plVar14;
                      }
                      *(uint *)(param_6 + 0x134e0 + uVar28 * 4) =
                           *(uint *)(param_6 + 0x134e0 + uVar28 * 4) | uVar17;
                      if (*(int *)(*plVar15 + 0x18) == 5) {
                        uVar36 = param_6;
                        func_0x000109f38b74(param_6,uVar29 & 0x7f);
                        if (((uint)uVar36 & 0xff) < 0x10) {
                          if (uVar38 - 0x27a < 3) {
                            plVar15 = (long *)plVar27[0x13];
                            if (((*(int *)(*plVar15 + 0x18) == 5) ||
                                (*(int *)(param_6 + 0x13404) != 7)) &&
                               ((*(byte *)(plVar27[2] + 0x44) & 1) == 0)) {
                              FUN_109efc42c();
                              uVar38 = (uint)plVar30;
                            }
                            else {
                              uVar38 = 1;
                            }
                            lVar32 = param_6 + 0x13e80;
                            if (plVar41[4] == 0) {
                              *(uint *)(lVar31 + uVar28 * 4) =
                                   *(uint *)(lVar31 + uVar28 * 4) | uVar17;
                              plVar41[4] = *plVar15;
                              if (*(int *)(param_6 + 0x13408) != 4) {
                                uVar38 = 1;
                              }
                              if ((uVar38 & 1) == 0) {
                                if (*(char *)((long)plVar15 + 0x1d) == ' ') {
                                  lVar32 = param_6 + 0x13e10;
                                }
                                goto LAB_109f384a0;
                              }
                            }
                            else {
                              if (plVar41[4] != *plVar15) {
                                *(uint *)(lVar31 + uVar28 * 4) =
                                     *(uint *)(lVar31 + uVar28 * 4) & (uVar17 ^ 0xffffffff);
                              }
                              uVar38 = uVar38 ^ 1;
                              if (*(int *)(param_6 + 0x13408) != 4) {
                                uVar38 = 1;
                              }
                              if ((uVar38 & 1) == 0) {
                                if (*(char *)((long)plVar15 + 0x1d) == ' ') {
                                  lVar32 = param_6 + 0x13e10;
                                }
                                uVar17 = *(uint *)(lVar32 + uVar28 * 4) & (uVar17 ^ 0xffffffff);
                                goto LAB_109f384ac;
                              }
                            }
                          }
                          else if (7 < ((uint)uVar36 & 0xff)) {
                            lVar32 = param_6 + 0x13a20;
                            if (*(char *)((long)plVar27 + 0x4d) == ' ') {
                              lVar32 = param_6 + 0x139b0;
                            }
LAB_109f384a0:
                            uVar17 = *(uint *)(lVar32 + uVar28 * 4) | uVar17;
LAB_109f384ac:
                            *(uint *)(lVar32 + uVar28 * 4) = uVar17;
                          }
                        }
                      }
                      else {
                        uVar38 = uVar4;
                        if (uVar4 != 0) {
                          do {
                            *(uint *)(param_6 + 0x13860 + (uVar36 >> 5) * 4) =
                                 1 << (ulong)((uint)uVar36 & 0x1f) |
                                 *(uint *)(param_6 + 0x13860 + (uVar36 >> 5) * 4);
                            uVar36 = (ulong)((uint)uVar36 + 8);
                            uVar38 = uVar38 - 1;
                          } while (uVar38 != 0);
                          if ((uVar4 - 1 != 0) && (*(int *)(param_6 + 0x13408) == 4)) {
                            _memset(param_6 + 0x13471 + ((ulong)uVar29 & 0x7f),
                                    *(undefined1 *)(lVar33 + ((ulong)uVar29 & 0x7f)),uVar4 - 1);
                          }
                        }
                      }
                    }
                  }
                  if (plVar21 == (long *)0x0) goto LAB_109f384c8;
                  plVar30 = (long *)*plVar21;
                  plVar15 = (long *)0x0;
                  plVar27 = plVar21;
                } while (plVar30 == (long *)0x0);
              } while( true );
            }
LAB_109f384c8:
            lVar11 = lVar12;
            FUN_109ecc434();
            lVar32 = lVar12;
          } while (lVar12 != 0);
          plVar30 = (long *)*plVar26;
        }
        *(uint *)(lVar35 + 0x84) = *(uint *)(lVar35 + 0x84) & 0xfffffff7;
        plVar21 = (long *)*plVar30;
        plVar26 = plVar30;
        while( true ) {
          plVar30 = plVar21;
          if (plVar30 == (long *)0x0) goto LAB_109f37790;
          lVar35 = plVar26[6];
          if (lVar35 != 0) break;
          plVar21 = (long *)*plVar30;
          plVar26 = plVar30;
        }
      } while( true );
    }
    plVar26 = plVar30;
  }
LAB_109f37790:
  uVar36 = 0;
  uVar38 = *(uint *)(param_6 + 0x13860);
  if (uVar38 == 0) goto LAB_109f377b8;
  do {
    do {
      uVar16 = (uVar38 & 0xaaaaaaaa) >> 1 | (uVar38 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
      uVar38 = uVar38 & (1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
      FUN_109f38d6c(param_6,uVar16 | (int)uVar36 << 5);
    } while (uVar38 != 0);
LAB_109f377b8:
    uVar36 = uVar36 & 0xffffffff;
    do {
      uVar28 = uVar36;
      if (uVar28 == 0x1b) goto LAB_109f37804;
      uVar36 = uVar28 + 1;
      uVar38 = *(uint *)(param_6 + 0x13864 + uVar28 * 4);
    } while (uVar38 == 0);
  } while (uVar28 < 0x1b);
LAB_109f37804:
  uVar36 = 0;
  uVar38 = *(uint *)(param_6 + 0x13860);
  while( true ) {
    if (uVar38 == 0) {
      uVar28 = uVar36 & 0xffffffff;
      do {
        if (uVar28 == 0x1b) goto LAB_109f37934;
        uVar36 = uVar28 + 1;
        uVar38 = *(uint *)(param_6 + 0x13864 + uVar28 * 4);
        uVar28 = uVar36;
      } while (uVar38 == 0);
    }
    uVar16 = (uint)uVar36;
    if (0x1b < uVar16) break;
    uVar29 = (uVar38 & 0xaaaaaaaa) >> 1 | (uVar38 & 0x55555555) << 1;
    uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
    uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    uVar29 = (uint)LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
    uVar38 = uVar38 & (1 << (ulong)(uVar29 & 0x1f) ^ 0xffffffffU);
    plVar26 = (long *)(param_6 + (ulong)(uVar29 | uVar16 << 5) * 0x58);
    if (1 < *(uint *)(plVar26 + 10)) {
      plVar30 = plVar26 + 2;
      plVar21 = plVar26 + 5;
      lVar33 = (ulong)*(uint *)(plVar26 + 10) - 1;
      uVar29 = uVar29 + uVar16 * 0x20;
      do {
        uVar29 = uVar29 + 8;
        plVar15 = (long *)(param_6 + (ulong)uVar29 * 0x58);
        if ((long *)plVar15[1] != plVar15) {
          *(long **)(*plVar15 + 8) = plVar26;
          lVar35 = *plVar26;
          plVar27 = (long *)plVar15[1];
          *plVar27 = lVar35;
          *(long **)(lVar35 + 8) = plVar27;
          *plVar26 = *plVar15;
        }
        if ((long *)plVar15[3] != plVar15 + 2) {
          *(long **)(plVar15[2] + 8) = plVar30;
          lVar35 = *plVar30;
          plVar27 = (long *)plVar15[3];
          *plVar27 = lVar35;
          *(long **)(lVar35 + 8) = plVar27;
          *plVar30 = plVar15[2];
        }
        plVar27 = plVar15 + 5;
        if ((long *)plVar15[6] != plVar27) {
          *(long **)(plVar15[5] + 8) = plVar21;
          lVar35 = *plVar21;
          plVar14 = (long *)plVar15[6];
          *plVar14 = lVar35;
          *(long **)(lVar35 + 8) = plVar14;
          *plVar21 = plVar15[5];
        }
        *plVar15 = (long)plVar15;
        plVar15[1] = (long)plVar15;
        plVar15[2] = (long)(plVar15 + 2);
        plVar15[3] = (long)(plVar15 + 2);
        plVar15[5] = (long)plVar27;
        plVar15[6] = (long)plVar27;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
    }
  }
LAB_109f37934:
  lVar33 = *(long *)(param_6 + 0x13450);
  puVar37 = *(ulong **)(*(long *)(param_6 + 0x13428) + 8);
  puVar34 = (ulong *)*puVar37;
  if (puVar34 == (ulong *)0x0) {
    iVar43 = 0;
    iVar42 = 0;
  }
  else {
    iVar42 = 0;
    iVar43 = 0;
    puVar20 = puVar34;
    puVar39 = puVar37;
    do {
      puVar19 = puVar20;
      iVar44 = iVar43;
      if (((byte)puVar39[4] >> 1 & 1) != 0) {
        uVar40 = *(undefined8 *)(lVar33 + 8);
        FUN_109f38ee8(uVar40,puVar39,2,*(undefined1 *)(param_6 + 0x13400));
        iVar7 = (int)puVar39[2];
        func_0x000109f38f78();
        iVar44 = iVar7 + iVar43;
        if ((int)uVar40 != 0) {
          iVar44 = iVar43;
          iVar42 = iVar7 + iVar42;
        }
      }
      iVar43 = iVar44;
      puVar20 = (ulong *)*puVar19;
      puVar39 = puVar19;
    } while (puVar20 != (ulong *)0x0);
  }
  plVar26 = *(long **)(lVar33 + 8);
  plVar30 = (long *)*plVar26;
  if (plVar30 == (long *)0x0) {
    iVar44 = 0;
  }
  else {
    iVar44 = 0;
    plVar21 = plVar30;
    plVar15 = plVar26;
    do {
      plVar27 = plVar21;
      if (((*(byte *)(plVar15 + 4) >> 1 & 1) != 0) &&
         (puVar20 = puVar37, FUN_109f38ee8(puVar37,plVar15,2,*(undefined1 *)(param_6 + 0x13400)),
         ((ulong)puVar20 & 1) == 0)) {
        iVar7 = (int)plVar15[2];
        func_0x000109f38f78();
        iVar44 = iVar7 + iVar44;
      }
      plVar21 = (long *)*plVar27;
      plVar15 = plVar27;
    } while (plVar21 != (long *)0x0);
  }
  *(bool *)(param_6 + 0x13401) = (uint)(iVar42 + iVar43 + iVar44) <= param_4;
  if (puVar34 == (ulong *)0x0) {
    iVar43 = 0;
    iVar42 = 0;
  }
  else {
    iVar42 = 0;
    iVar43 = 0;
    puVar34 = puVar37;
    do {
      iVar44 = iVar43;
      if ((char)puVar34[4] < '\0') {
        plVar21 = plVar26;
        FUN_109f38ee8(plVar26,puVar34,0x80,*(undefined1 *)(param_6 + 0x13400));
        iVar7 = (int)puVar34[2];
        FUN_109f39014();
        iVar44 = iVar7 + iVar43;
        if ((int)plVar21 != 0) {
          iVar44 = iVar43;
          iVar42 = iVar7 + iVar42;
        }
      }
      iVar43 = iVar44;
      puVar34 = (ulong *)*puVar34;
    } while (*puVar34 != 0);
  }
  iVar44 = 0;
  for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
    if ((*(char *)(plVar26 + 4) < '\0') &&
       (puVar34 = puVar37, FUN_109f38ee8(puVar37,plVar26,0x80,*(undefined1 *)(param_6 + 0x13400)),
       ((ulong)puVar34 & 1) == 0)) {
      iVar7 = (int)plVar26[2];
      FUN_109f39014();
      iVar44 = iVar7 + iVar44;
      plVar30 = (long *)*plVar26;
    }
    plVar26 = plVar30;
  }
  *(bool *)(param_6 + 0x13402) = (uint)(iVar42 + iVar43 + iVar44) <= param_5;
  return;
}



/* Entry: 109f38a28; end: 109f38c4f;  */

bool FUN_109f38a28(long param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x13408) == 2) {
    bVar2 = (param_2 & 0x7e) != 0x1a || *(int *)(param_1 + 0x13404) != 0;
  }
  else {
    bVar2 = true;
    if (((*(int *)(param_1 + 0x13408) == 4) && (param_2 < 0x20)) && (param_2 != 3)) {
      iVar1 = *(int *)(param_1 + 0x13404);
      if ((param_2 == 0x16) && (iVar1 == 7)) {
        return false;
      }
      if (((3 < param_2 - 0x11) && ((param_2 & 0x1e) != 0x16)) &&
         ((((uint)(param_2 - 1 < 0xe) & 0x3003U >> (ulong)(param_2 - 1 & 0x1f)) == 0 &&
          (7 < param_2 - 4)))) {
        if (iVar1 == 3) {
          if (param_2 != 0x15) {
            return false;
          }
        }
        else {
          if (param_2 != 0x15) {
            return false;
          }
          if (iVar1 != 7) {
            return false;
          }
        }
      }
    }
  }
  return bVar2;
}



/* Entry: 109f38c50; end: 109f38cd7;  */

bool FUN_109f38c50(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 4) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar3 = param_2;
    FUN_109eccd30();
    if (iVar1 == iVar3) {
      bVar2 = true;
    }
    else if ((iVar1 == 0x112) && ((*(byte *)(**(long **)(param_1 + 0x98) + 0x2c) & 1) != 0)) {
      bVar2 = *(int *)(*(long *)(**(long **)(param_1 + 0x98) + 0x38) + 0x3c) == param_2;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}



/* Entry: 109f38cd8; end: 109f38d6b;  */

bool FUN_109f38cd8(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((&UNK_110b671d0)[(ulong)uVar1 * 0x68] != '\0') {
    uVar2 = *(uint *)(param_1 + 0x54 + (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar1 * 0x68] * 4 + -4);
    if (uVar2 < 2) {
      puVar3 = &uStack_8;
    }
    else {
      uStack_4 = *(undefined4 *)
                  (param_1 + 0x54 + (ulong)(byte)(&UNK_110b671d1)[(ulong)uVar1 * 0x68] * 4 + -4);
      puVar3 = &uStack_4;
      uVar2 = uVar2 - 2;
    }
    return (*(byte *)((long)puVar3 + (ulong)uVar2 * 2) & 0xf) != 0;
  }
  return false;
}



/* Entry: 109f38d6c; end: 109f38ee7;  */

void FUN_109f38d6c(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  param_1 = param_1 + (ulong)(param_2 >> 5) * 4;
  *(uint *)(param_1 + 0x13da0) = *(uint *)(param_1 + 0x13da0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13e10) = *(uint *)(param_1 + 0x13e10) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13e80) = *(uint *)(param_1 + 0x13e80) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x138d0) = *(uint *)(param_1 + 0x138d0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13940) = *(uint *)(param_1 + 0x13940) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x139b0) = *(uint *)(param_1 + 0x139b0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13a20) = *(uint *)(param_1 + 0x13a20) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13a90) = *(uint *)(param_1 + 0x13a90) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13b00) = *(uint *)(param_1 + 0x13b00) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13b70) = *(uint *)(param_1 + 0x13b70) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13be0) = *(uint *)(param_1 + 0x13be0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13c50) = *(uint *)(param_1 + 0x13c50) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13cc0) = *(uint *)(param_1 + 0x13cc0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x136a0) = *(uint *)(param_1 + 0x136a0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13710) = *(uint *)(param_1 + 0x13710) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13780) = *(uint *)(param_1 + 0x13780) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x137f0) = *(uint *)(param_1 + 0x137f0) & (uVar1 ^ 0xffffffff);
  *(uint *)(param_1 + 0x13d30) = *(uint *)(param_1 + 0x13d30) & (uVar1 ^ 0xffffffff);
  return;
}



/* Entry: 109f38ee8; end: 109f39013;  */

undefined8 FUN_109f38ee8(long *param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    return 0;
  }
  do {
    plVar2 = plVar3;
    if ((param_3 & *(uint *)(param_1 + 4)) != 0) {
      if (param_4 == 0) {
        lVar1 = param_1[3];
        _strcmp(lVar1,*(undefined8 *)(param_2 + 0x18));
        if ((int)lVar1 == 0) {
          return 1;
        }
      }
      else if ((int)param_1[7] == *(int *)(param_2 + 0x38)) {
        return 1;
      }
    }
    plVar3 = (long *)*plVar2;
    param_1 = plVar2;
  } while (plVar3 != (long *)0x0);
  return 0;
}



/* Entry: 109f39014; end: 109f3905f;  */

uint FUN_109f39014(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  lVar3 = param_1;
  while (cVar1 == '\x13') {
    lVar3 = *(long *)(lVar3 + 0x30);
    cVar1 = *(char *)(lVar3 + 4);
  }
  if (cVar1 == '\x12') {
    FUN_109ec88a0();
    uVar2 = (uint)param_1;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109f39060; end: 109f3919b;  */

void FUN_109f39060(long param_1,ulong param_2,undefined1 *param_3,uint *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x58);
  if ((long *)plVar12[1] != plVar12) {
    uVar9 = param_2 >> 3 & 0x1fffffff;
    uVar4 = 1 << (ulong)((uint)param_2 & 0x1f);
    lVar1 = param_1 + ((param_2 & 0xffffffff) >> 3 & 0x1ffffffc);
    plVar10 = (long *)plVar12[1];
    do {
      plVar2 = (long *)plVar10[1];
      lVar6 = plVar10[2];
      FUN_109ecdcac(lVar6,*(undefined4 *)(param_1 + 0x13408));
      if ((int)lVar6 == 0) {
        lVar11 = plVar10[2];
        lVar6 = lVar11;
        FUN_109f38cd8();
        if ((int)lVar6 != 0) {
          *param_3 = 1;
          iVar5 = (int)uVar9;
          FUN_109ecdbbc(uVar9,*(undefined4 *)(param_1 + 0x13408));
          if ((iVar5 == 0) ||
             ((*(uint *)(lVar11 + (ulong)(byte)(&UNK_110b671cf)
                                               [(ulong)*(uint *)(lVar11 + 0x28) * 0x68] * 4 + 0x50)
               >> 0x1d & 1) != 0)) {
            puVar7 = (uint *)(lVar1 + 0x135c0);
            uVar8 = uVar4;
            if (*(char *)(*(long *)(lVar11 + 0x98) + 0x1d) != ' ') {
              puVar7 = (uint *)(lVar1 + 0x13630);
            }
            goto LAB_109f39164;
          }
        }
      }
      else {
        lVar6 = *plVar10;
        plVar3 = (long *)plVar10[1];
        *(long **)(lVar6 + 8) = plVar3;
        *plVar3 = lVar6;
        *plVar10 = 0;
        plVar10[1] = 0;
        puVar7 = param_4;
        uVar8 = 1;
LAB_109f39164:
        *puVar7 = *puVar7 | uVar8;
      }
      plVar10 = plVar2;
    } while (plVar2 != plVar12);
  }
  return;
}



/* Entry: 109f3919c; end: 109f3921b;  */

void FUN_109f3919c(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  FUN_109f38d6c();
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 0x58 + 0x50) = 0;
    uVar1 = 1 << (ulong)((uint)param_2 & 0x1f);
    param_1 = param_1 + ((param_2 & 0xffffffff) >> 3 & 0x1ffffffc);
    *(uint *)(param_1 + 0x13860) = *(uint *)(param_1 + 0x13860) & (uVar1 ^ 0xffffffff);
    *(uint *)(param_1 + 0x134e0) = *(uint *)(param_1 + 0x134e0) & (uVar1 ^ 0xffffffff);
  }
  return;
}



/* Entry: 109f3921c; end: 109f392df;  */

long FUN_109f3921c(ulong param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 4) {
    if (iVar1 == 0) {
LAB_109f39298:
      pcVar4 = *(code **)(*(long *)(*(long *)(lVar3 + 0x13428) + 0x28) + 0xe0);
      if (pcVar4 == (code *)0x0) {
        iVar1 = 1;
      }
      else {
        uVar2 = param_1;
        (*pcVar4)();
        iVar1 = (int)uVar2;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
      lVar3 = 1;
                    /* WARNING: Could not recover jumptable at 0x000109f39730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e47c50c)[*(uint *)(param_1 + 0x18)] * 4 + 0x109f39734))
                (1,param_2);
      return lVar3;
    }
    if (iVar1 == 1) {
      if ((((uint)*(byte *)(lVar3 + 0x13402) << 7 | (uint)*(byte *)(lVar3 + 0x13401) << 1) &
           *(uint *)(param_1 + 0x2c) & 0xfe) == 0) {
        return 0;
      }
      uVar2 = param_1;
      FUN_109ef9700();
      if ((uVar2 & 1) == 0) {
        for (; *(int *)(param_1 + 0x28) != 0; param_1 = **(ulong **)(param_1 + 0x50)) {
        }
        lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
        if ((lVar3 == 0) || (_strncmp(lVar3,&UNK_10f61a667,7), (int)lVar3 != 0)) {
          lVar3 = 1;
        }
      }
      else {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  else if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x28) == 0x112) goto LAB_109f39298;
  }
  else if (iVar1 == 5 || iVar1 == 7) {
    return 1;
  }
  return 0;
}



/* Entry: 109f392e0; end: 109f39623;  */

long * FUN_109f392e0(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 auStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_3;
  iVar2 = *(int *)(lVar12 + 0x18);
  if (iVar2 < 5) {
    if (iVar2 == 0) {
      if ((*(byte *)(lVar12 + 0x1c) & 1) != 0) {
LAB_109f39484:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          if (*(int *)(lVar12 + 0x18) != 4) {
            func_0x000109f39a50();
          }
          lVar15 = (ulong)*(uint *)(lVar12 + 0x28) * 0x68;
          uVar3 = *(uint *)(lVar12 + 0x54 + (ulong)(byte)(&UNK_110b671cf)[lVar15] * 4 + -4);
          return *(long **)(*(long *)(param_1[(ulong)((uVar3 & 0x7f) * 8 +
                                                      *(int *)(lVar12 + 0x54 +
                                                               (ulong)(byte)(&UNK_110b671b1)[lVar15]
                                                               * 4 + -4) * 2 | uVar3 >> 0x19 & 1) *
                                              0xb + 1] + 0x10) + 0x98);
        }
        goto LAB_109f39620;
      }
      auStack_80[1] = 0;
      auStack_80[0] = 0;
      auStack_80[3] = 0;
      auStack_80[2] = 0;
      plVar9 = (long *)(ulong)*(uint *)(lVar12 + 0x28);
      bVar4 = (&UNK_110b78540)[(long)plVar9 * 0x68];
      uVar13 = (ulong)bVar4;
      if (uVar13 != 0) {
        lVar15 = 0;
        puVar8 = (undefined8 *)(lVar12 + 0x68);
        do {
          plVar7 = param_1;
          FUN_109f392e0(param_1,param_2,*puVar8);
          *(long **)((long)auStack_80 + lVar15) = plVar7;
          lVar15 = lVar15 + 8;
          puVar8 = puVar8 + 6;
        } while (uVar13 * 8 - lVar15 != 0);
        plVar9 = (long *)(ulong)*(uint *)(lVar12 + 0x28);
      }
      FUN_109ece0d8(param_2,plVar9,auStack_80[0],auStack_80[1],auStack_80[2],auStack_80[3]);
      lVar15 = *param_2;
      uVar6 = *(ushort *)(lVar15 + 0x2c);
      uVar1 = *(ushort *)(lVar12 + 0x2c) & 1;
      *(ushort *)(lVar15 + 0x2c) = uVar6 & 0xfffe | uVar1;
      uVar1 = uVar1 | (*(ushort *)(lVar12 + 0x2c) >> 1 & 1) << 1;
      *(ushort *)(lVar15 + 0x2c) = uVar6 & 0xfffc | uVar1;
      *(ushort *)(lVar15 + 0x2c) = uVar6 & 0xfff8 | uVar1 | *(ushort *)(lVar12 + 0x2c) & 4;
      *(undefined2 *)(lVar15 + 0x4c) = *(undefined2 *)(lVar12 + 0x4c);
      param_1 = param_2;
      plVar7 = param_2;
      if (bVar4 != 0) {
        puVar8 = (undefined8 *)(lVar15 + 0x70);
        puVar11 = (undefined8 *)(lVar12 + 0x70);
        do {
          uVar10 = *puVar11;
          puVar8[1] = puVar11[1];
          *puVar8 = uVar10;
          uVar13 = uVar13 - 1;
          puVar8 = puVar8 + 6;
          puVar11 = puVar11 + 6;
        } while (uVar13 != 0);
      }
    }
    else {
      if (*(int *)(lVar12 + 0x28) != 0x112) goto LAB_109f39484;
      lVar12 = **(long **)(lVar12 + 0x98);
      lVar15 = lVar12;
      if (*(int *)(lVar12 + 0x18) != 1) {
        lVar12 = 0;
        lVar15 = lVar12;
      }
      while (*(int *)(lVar12 + 0x28) != 0) {
        if (*(int *)(lVar12 + 0x28) == 5) {
          uVar10 = 0;
          goto LAB_109f394cc;
        }
        lVar12 = **(long **)(lVar12 + 0x50);
        if (*(int *)(lVar12 + 0x18) != 1) {
          lVar12 = 0;
        }
      }
      uVar10 = *(undefined8 *)(lVar12 + 0x38);
LAB_109f394cc:
      lVar12 = param_2[3];
      FUN_109f04040(lVar12,uVar10,(char)param_1[0x2680]);
      plVar9 = param_2;
      FUN_109f040f8(param_2,lVar12,lVar15);
      uVar5 = *(undefined1 *)(plVar9[6] + 0xd);
      lVar12 = param_2[3];
      FUN_109ecb0a8(lVar12,0x112);
      *(undefined1 *)(lVar12 + 0x50) = uVar5;
      plVar7 = (long *)(lVar12 + 0x30);
      FUN_109ecb048();
      *(undefined8 *)(lVar12 + 0x80) = 0;
      *(undefined8 *)(lVar12 + 0x88) = 0;
      *(undefined8 *)(lVar12 + 0x90) = 0;
      *(long **)(lVar12 + 0x98) = plVar9 + 0x10;
      *(undefined4 *)
       (lVar12 + (ulong)(byte)(&UNK_110b671ba)[(ulong)*(uint *)(lVar12 + 0x28) * 0x68] * 4 + 0x50) =
           0;
      param_1 = (long *)*param_2;
      plVar9 = (long *)param_2[1];
      FUN_109ecb4f0(param_1,plVar9,lVar12);
      *param_2 = 3;
      param_2[1] = lVar12;
    }
  }
  else if (iVar2 == 7) {
    plVar9 = *(long **)param_2[3];
    FUN_109f6600c(plVar9,0x48,8);
    *(undefined4 *)(plVar9 + 3) = 7;
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    plVar7 = plVar9 + 5;
    FUN_109ecb048();
    FUN_109ece5ec();
    param_1 = param_2;
  }
  else {
    plVar14 = (long *)(ulong)*(byte *)((long)param_3 + 0x1c);
    plVar7 = (long *)param_2[3];
    plVar9 = plVar14;
    FUN_109ecafe4(plVar7,plVar14,*(undefined1 *)((long)param_3 + 0x1d));
    param_1 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      _memcpy(plVar7 + 9,lVar12 + 0x48,(long)plVar14 << 3);
      param_1 = (long *)*param_2;
      plVar9 = (long *)param_2[1];
      FUN_109ecb4f0(param_1,plVar9,plVar7);
      *param_2 = 3;
      param_2[1] = (long)plVar7;
      plVar7 = plVar7 + 5;
    }
  }
  param_2 = plVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar7;
  }
LAB_109f39620:
  ___stack_chk_fail();
  bVar4 = *(byte *)((long)param_2 + 0x1d);
  uVar13 = (ulong)bVar4;
  FUN_109ecc128(0);
  puVar8 = *(undefined8 **)param_1[3];
  FUN_109f6600c(puVar8,0x50,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  *(undefined4 *)(puVar8 + 3) = 5;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_109ecb048(puVar8,puVar8 + 5,1,(ulong)bVar4);
  puVar8[9] = uVar13;
  FUN_109ecb4f0(*param_1,param_1[1],puVar8);
  *param_1 = 3;
  param_1[1] = (long)puVar8;
  func_0x000109ece210(param_1,0xca,param_2,puVar8 + 5,param_2);
  *(ushort *)(*param_1 + 0x2c) = *(ushort *)(*param_1 + 0x2c) | 1;
  return param_1;
}



/* Entry: 109f39624; end: 109f39943;  */

void FUN_109f39624(long *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  bVar1 = *(byte *)(param_2 + 0x1d);
  uVar2 = (ulong)bVar1;
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
  FUN_109ecb048(puVar3,puVar3 + 5,1,(ulong)bVar1);
  puVar3[9] = uVar2;
  FUN_109ecb4f0(*param_1,param_1[1],puVar3);
  *param_1 = 3;
  param_1[1] = (long)puVar3;
  func_0x000109ece210(param_1,0xca,param_2,puVar3 + 5,param_2);
  *(ushort *)(*param_1 + 0x2c) = *(ushort *)(*param_1 + 0x2c) | 1;
  return;
}



/* Entry: 109f39944; end: 109f39ab7;  */

long FUN_109f39944(int param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 << 7 | param_1 << 1) & *(uint *)(param_3 + 0x2c) & 0xfe) != 0) {
    uVar1 = param_3;
    FUN_109ef9700();
    if ((uVar1 & 1) == 0) {
      for (; *(int *)(param_3 + 0x28) != 0; param_3 = **(ulong **)(param_3 + 0x50)) {
      }
      lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
      if ((lVar2 == 0) || (_strncmp(lVar2,&UNK_10f61a667,7), (int)lVar2 != 0)) {
        lVar2 = 1;
      }
    }
    else {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



/* Entry: 109f39ab8; end: 109f39d0b;  */

uint * FUN_109f39ab8(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *plVar11;
  bool bVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint *puVar21;
  uint uStack_124;
  undefined8 uStack_120;
  int iStack_114;
  undefined8 uStack_110;
  long alStack_108 [3];
  uint uStack_84;
  undefined8 uStack_80;
  int iStack_74;
  undefined8 uStack_70;
  long alStack_68 [3];
  
  alStack_68[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  iStack_74 = 0;
  uStack_80 = 0;
  param_1 = param_1 + ((ulong)param_2 & 0xffffffff) * 0x58;
  lVar19 = *(long *)(param_1 + 0x30);
  if (lVar19 == param_1 + 0x28) {
LAB_109f39c88:
    puVar3 = (uint *)0x0;
  }
  else {
    iVar20 = 0;
    uVar17 = 0;
    do {
      puVar14 = *(uint **)(lVar19 + 0x10);
      param_2 = &uStack_84;
      param_3 = (uint *)((long)&uStack_70 + 4);
      puVar3 = puVar14;
      FUN_109f39f40();
      if ((((puVar3 == (uint *)0x0) || (puVar3[10] != 0xe8)) || ((puVar3[0xb] & 1) != 0)) ||
         (iVar20 == 3)) goto LAB_109f39c88;
      param_3 = (uint *)(ulong)uStack_84;
      param_2 = puVar3;
      FUN_109f3a000();
      if ((int)puVar14 == 0) goto LAB_109f39c88;
      puVar14 = *(uint **)(puVar3 + 0x10);
      if (((puVar14 == (uint *)0x0 || puVar14 == puVar3 + 0xe) ||
          (*(uint **)(puVar14 + 2) != puVar3 + 0xe)) ||
         ((lVar6 = *(long *)(puVar14 + -2), *(int *)(lVar6 + 0x18) != 0 ||
          ((*(int *)(lVar6 + 0x28) != 0x9c || ((*(ushort *)(lVar6 + 0x2c) & 1) != 0))))))
      goto LAB_109f39c88;
      iVar16 = (int)uVar17;
      if (iVar16 == 0) {
        uVar9 = 0;
LAB_109f39bdc:
        if ((int)uVar9 == iVar16) goto LAB_109f39be4;
      }
      else {
        uVar9 = 0;
        do {
          if (alStack_68[uVar9] == lVar6) goto LAB_109f39bdc;
          uVar9 = uVar9 + 1;
        } while (uVar17 != uVar9);
LAB_109f39be4:
        if (iVar16 == 2) goto LAB_109f39c88;
        alStack_68[uVar17] = lVar6;
        uVar17 = (ulong)(iVar16 + 1);
      }
      iVar20 = iVar20 + 1;
      lVar19 = *(long *)(lVar19 + 8);
    } while (lVar19 != param_1 + 0x28);
    puVar3 = (uint *)0x0;
    if ((iVar20 == 3) && ((int)uVar17 == 2)) {
      plVar7 = alStack_68 + 1;
      plVar11 = alStack_68;
      bVar2 = true;
      do {
        bVar12 = bVar2;
        lVar19 = *plVar11 + 0x38;
        lVar6 = *(long *)(*plVar11 + 0x40);
        if ((lVar6 == 0 || lVar6 == lVar19) || (*(long *)(lVar6 + 8) != lVar19)) {
          lVar19 = 0;
        }
        else {
          lVar19 = *(long *)(lVar6 + -8);
          if (*(int *)(lVar19 + 0x18) != 0) {
            lVar19 = 0;
          }
        }
        lVar6 = *plVar7;
        if (lVar19 == lVar6) {
          if (iStack_74 == 0x210) {
            uVar10 = 0x40;
          }
          else {
            if (iStack_74 != 0x102) {
              uVar13 = 0;
              break;
            }
            uVar10 = 0x60;
          }
          *(long *)(param_1 + 0x38) = lVar6;
          *(undefined4 *)(param_1 + 0x40) = uVar10;
          *(undefined8 *)(param_1 + 0x48) = uStack_80;
          uVar13 = 1;
          break;
        }
        uVar13 = 0;
        plVar7 = alStack_68;
        plVar11 = alStack_68 + 1;
        bVar2 = false;
      } while (bVar12);
      uVar5 = 0;
      if (lVar19 == lVar6) {
        uVar5 = uVar13;
      }
      puVar3 = (uint *)(ulong)uVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_68[2]) {
    return puVar3;
  }
  ___stack_chk_fail();
  alStack_108[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = 0;
  iStack_114 = 0;
  uStack_120 = 0;
  uVar17 = (ulong)param_2 & 0xffffffff;
  puVar18 = *(uint **)(puVar3 + uVar17 * 0x16 + 0xc);
  puVar14 = puVar3;
  if (puVar18 != puVar3 + uVar17 * 0x16 + 10) {
    bVar2 = false;
    puVar21 = (uint *)0x0;
    lVar19 = 0;
    do {
      puVar15 = *(uint **)(puVar18 + 4);
      param_2 = &uStack_124;
      param_3 = (uint *)((long)&uStack_110 + 4);
      puVar4 = puVar15;
      FUN_109f39f40();
      puVar14 = puVar4;
      if ((puVar4 == (uint *)0x0) ||
         (((uVar13 = puVar4[10], uVar13 != 0xe8 && (uVar13 != 0xca)) || ((puVar4[0xb] & 1) != 0))))
      goto LAB_109f39f04;
      param_3 = (uint *)(ulong)uStack_124;
      param_2 = puVar4;
      FUN_109f3a000();
      puVar14 = puVar15;
      if ((int)puVar15 == 0) goto LAB_109f39f04;
      if (uVar13 == 0xe8) {
        puVar21 = *(uint **)(puVar4 + 0x10);
        if (((puVar21 == (uint *)0x0 || puVar21 == puVar4 + 0xe) ||
            (*(uint **)(puVar21 + 2) != puVar4 + 0xe)) ||
           ((*(int *)(*(long *)(puVar21 + -2) + 0x18) != 0 ||
            (*(int *)(*(long *)(puVar21 + -2) + 0x28) != 0xca || bVar2)))) goto LAB_109f39f04;
        bVar2 = true;
        puVar21 = puVar4;
      }
      else {
        if (lVar19 == 2) goto LAB_109f39f04;
        alStack_108[lVar19] = (long)puVar4;
        lVar19 = lVar19 + 1;
      }
      puVar18 = *(uint **)(puVar18 + 2);
    } while (puVar18 != puVar3 + uVar17 * 0x16 + 10);
    if (((bVar2) && (lVar19 == 2)) &&
       ((*(uint **)(alStack_108[0] + 200) == puVar21 + 0xc ||
        (*(uint **)(alStack_108[1] + 200) == puVar21 + 0xc)))) {
      plVar7 = alStack_108 + 1;
      plVar11 = alStack_108;
      bVar2 = true;
      do {
        bVar12 = bVar2;
        lVar19 = *plVar11 + 0x38;
        lVar6 = *(long *)(*plVar11 + 0x40);
        if ((lVar6 == 0 || lVar6 == lVar19) || (*(long *)(lVar6 + 8) != lVar19)) {
          lVar19 = 0;
        }
        else {
          lVar19 = *(long *)(lVar6 + -8);
          if (*(int *)(lVar19 + 0x18) != 0) {
            lVar19 = 0;
          }
        }
        if (lVar19 == *plVar7) {
          if (iStack_114 == 0x210) {
            uVar13 = 0x40;
          }
          else {
            if (iStack_114 != 0x102) break;
            uVar13 = 0x60;
          }
          *(long *)(puVar3 + uVar17 * 0x16 + 0xe) = *plVar7;
          puVar3[uVar17 * 0x16 + 0x10] = uVar13;
          *(undefined8 *)(puVar3 + uVar17 * 0x16 + 0x12) = uStack_120;
          break;
        }
        plVar7 = alStack_108;
        plVar11 = alStack_108 + 1;
        bVar2 = false;
      } while (bVar12);
    }
  }
LAB_109f39f04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_108[2]) {
    return puVar14;
  }
  ___stack_chk_fail();
  if ((puVar14[10] == 0x16a) && (lVar19 = **(long **)(puVar14 + 0x26), *(int *)(lVar19 + 0x18) == 5)
     ) {
    uVar5 = (uint)*(undefined8 *)(lVar19 + 0x48);
    uVar13 = (*(byte *)(lVar19 + 0x45) & 0xaaaaaaaa) >> 1 |
             (*(byte *)(lVar19 + 0x45) & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar8 = (uint)LZCOUNT((uVar13 >> 4 | (uVar13 & 0xf0f0f0f) << 4) << 0x18);
    uVar13 = uVar5 & 0xff;
    if (uVar8 != 3) {
      uVar13 = uVar5 & 0xffff;
    }
    uVar1 = uVar5 & 1;
    if (uVar8 != 0) {
      uVar1 = uVar13;
    }
    if (uVar8 < 5) {
      uVar5 = uVar1;
    }
    *param_2 = uVar5;
    if (uVar5 < 3) {
      uVar13 = 1 << (ulong)(uVar5 & 0x1f);
      if ((*param_3 & uVar13) == 0) {
        *param_3 = *param_3 | uVar13;
        puVar3 = *(uint **)(puVar14 + 0x10);
        if (puVar3 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (puVar3 == puVar14 + 0xe) {
          return (uint *)0x0;
        }
        if (*(uint **)(puVar3 + 2) == puVar14 + 0xe) {
          if ((*(uint **)(puVar3 + -2))[6] == 0) {
            return *(uint **)(puVar3 + -2);
          }
          return (uint *)0x0;
        }
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 109f39d0c; end: 109f39f3f;  */

uint * FUN_109f39d0c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint uStack_94;
  undefined8 uStack_90;
  int iStack_84;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0;
  iStack_84 = 0;
  uStack_90 = 0;
  uVar2 = (ulong)param_2 & 0xffffffff;
  puVar14 = *(uint **)(param_1 + uVar2 * 0x16 + 0xc);
  puVar5 = param_1;
  if (puVar14 != param_1 + uVar2 * 0x16 + 10) {
    bVar3 = false;
    puVar16 = (uint *)0x0;
    lVar15 = 0;
    do {
      puVar13 = *(uint **)(puVar14 + 4);
      param_2 = &uStack_94;
      param_3 = (uint *)((long)&uStack_80 + 4);
      puVar4 = puVar13;
      FUN_109f39f40();
      puVar5 = puVar4;
      if ((puVar4 == (uint *)0x0) ||
         (((uVar8 = puVar4[10], uVar8 != 0xe8 && (uVar8 != 0xca)) || ((puVar4[0xb] & 1) != 0))))
      goto LAB_109f39f04;
      param_3 = (uint *)(ulong)uStack_94;
      param_2 = puVar4;
      FUN_109f3a000();
      puVar5 = puVar13;
      if ((int)puVar13 == 0) goto LAB_109f39f04;
      if (uVar8 == 0xe8) {
        puVar16 = *(uint **)(puVar4 + 0x10);
        if (((puVar16 == (uint *)0x0 || puVar16 == puVar4 + 0xe) ||
            (*(uint **)(puVar16 + 2) != puVar4 + 0xe)) ||
           ((*(int *)(*(long *)(puVar16 + -2) + 0x18) != 0 ||
            (*(int *)(*(long *)(puVar16 + -2) + 0x28) != 0xca || bVar3)))) goto LAB_109f39f04;
        bVar3 = true;
        puVar16 = puVar4;
      }
      else {
        if (lVar15 == 2) goto LAB_109f39f04;
        alStack_78[lVar15] = (long)puVar4;
        lVar15 = lVar15 + 1;
      }
      puVar14 = *(uint **)(puVar14 + 2);
    } while (puVar14 != param_1 + uVar2 * 0x16 + 10);
    if (((bVar3) && (lVar15 == 2)) &&
       ((*(uint **)(alStack_78[0] + 200) == puVar16 + 0xc ||
        (*(uint **)(alStack_78[1] + 200) == puVar16 + 0xc)))) {
      plVar7 = alStack_78 + 1;
      plVar12 = alStack_78;
      bVar3 = true;
      do {
        bVar10 = bVar3;
        lVar15 = *plVar12 + 0x38;
        lVar11 = *(long *)(*plVar12 + 0x40);
        if ((lVar11 == 0 || lVar11 == lVar15) || (*(long *)(lVar11 + 8) != lVar15)) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(lVar11 + -8);
          if (*(int *)(lVar15 + 0x18) != 0) {
            lVar15 = 0;
          }
        }
        if (lVar15 == *plVar7) {
          if (iStack_84 == 0x210) {
            uVar8 = 0x40;
          }
          else {
            if (iStack_84 != 0x102) break;
            uVar8 = 0x60;
          }
          *(long *)(param_1 + uVar2 * 0x16 + 0xe) = *plVar7;
          param_1[uVar2 * 0x16 + 0x10] = uVar8;
          *(undefined8 *)(param_1 + uVar2 * 0x16 + 0x12) = uStack_90;
          break;
        }
        plVar7 = alStack_78;
        plVar12 = alStack_78 + 1;
        bVar3 = false;
      } while (bVar10);
    }
  }
LAB_109f39f04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[2]) {
    return puVar5;
  }
  ___stack_chk_fail();
  if ((puVar5[10] == 0x16a) && (lVar15 = **(long **)(puVar5 + 0x26), *(int *)(lVar15 + 0x18) == 5))
  {
    uVar6 = (uint)*(undefined8 *)(lVar15 + 0x48);
    uVar8 = (*(byte *)(lVar15 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar15 + 0x45) & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar9 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    uVar8 = uVar6 & 0xff;
    if (uVar9 != 3) {
      uVar8 = uVar6 & 0xffff;
    }
    uVar1 = uVar6 & 1;
    if (uVar9 != 0) {
      uVar1 = uVar8;
    }
    if (uVar9 < 5) {
      uVar6 = uVar1;
    }
    *param_2 = uVar6;
    if (uVar6 < 3) {
      uVar8 = 1 << (ulong)(uVar6 & 0x1f);
      if ((*param_3 & uVar8) == 0) {
        *param_3 = *param_3 | uVar8;
        puVar14 = *(uint **)(puVar5 + 0x10);
        if (puVar14 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (puVar14 == puVar5 + 0xe) {
          return (uint *)0x0;
        }
        if (*(uint **)(puVar14 + 2) == puVar5 + 0xe) {
          if ((*(uint **)(puVar14 + -2))[6] == 0) {
            return *(uint **)(puVar14 + -2);
          }
          return (uint *)0x0;
        }
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 109f39f40; end: 109f39fff;  */

long FUN_109f39f40(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x28) == 0x16a) &&
     (lVar4 = **(long **)(param_1 + 0x98), *(int *)(lVar4 + 0x18) == 5)) {
    uVar3 = (uint)*(undefined8 *)(lVar4 + 0x48);
    uVar2 = (*(byte *)(lVar4 + 0x45) & 0xaaaaaaaa) >> 1 |
            (*(byte *)(lVar4 + 0x45) & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar5 = (uint)LZCOUNT((uVar2 >> 4 | (uVar2 & 0xf0f0f0f) << 4) << 0x18);
    uVar2 = uVar3 & 0xff;
    if (uVar5 != 3) {
      uVar2 = uVar3 & 0xffff;
    }
    uVar1 = uVar3 & 1;
    if (uVar5 != 0) {
      uVar1 = uVar2;
    }
    if (uVar5 < 5) {
      uVar3 = uVar1;
    }
    *param_2 = uVar3;
    if (uVar3 < 3) {
      uVar2 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*param_3 & uVar2) == 0) {
        *param_3 = *param_3 | uVar2;
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 == 0) {
          return 0;
        }
        if (lVar4 == param_1 + 0x38) {
          return 0;
        }
        if (*(long *)(lVar4 + 8) == param_1 + 0x38) {
          if (*(int *)(*(long *)(lVar4 + -8) + 0x18) == 0) {
            return *(long *)(lVar4 + -8);
          }
          return 0;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109f3a000; end: 109f3a0b3;  */

void FUN_109f3a000(long param_1,long param_2,uint param_3,uint *param_4,uint *param_5,long *param_6)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  param_2 = param_2 + (ulong)(*(long *)(param_2 + 0x68) == param_1 + 0x30) * 0x30;
  lVar4 = **(long **)(param_2 + 0x68);
  lVar2 = lVar4;
  FUN_109f38c50(lVar4,0x20);
  if ((int)lVar2 != 0) {
    uVar3 = (uint)*(byte *)(param_2 + 0x70);
    uVar1 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar1 & *param_5) == 0) {
      *param_4 = *param_4 | uVar3 << (ulong)((param_3 & 7) << 2);
      *param_5 = *param_5 | uVar1;
      *param_6 = lVar4 + 0x30;
    }
  }
  return;
}



/* Entry: 109f3a0b4; end: 109f3a347;  */

void FUN_109f3a0b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 < 4) {
    if (iVar3 == 0) {
      if (*(byte *)(param_2 + 0x4c) < 2) {
        uVar10 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68];
        if ((&UNK_110b78540)[(ulong)*(uint *)(param_2 + 0x28) * 0x68] == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = 0;
          puVar1 = (undefined8 *)(param_2 + 0x68);
          puVar11 = puVar1;
          do {
            lVar9 = *(long *)*puVar11;
            bVar4 = *(byte *)(lVar9 + 0x1c);
            if ((bVar4 & 6) == 0) {
              FUN_109f3a0b4(param_1,lVar9);
              bVar4 = *(byte *)(lVar9 + 0x1c);
            }
            if (((bVar4 >> 2 & 1) != 0) ||
               ((bVar7 != (bVar4 & 0xe0) && (bVar4 & 0xe0) != 0 &&
                (bVar2 = bVar7 != 0, bVar7 = bVar4 & 0xe0, bVar2)))) goto LAB_109f3a170;
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 6;
          } while (uVar10 != 0);
          if (0x20 < bVar7) {
            if ((*(ushort *)(param_2 + 0x2c) & 1) == 0) {
              cVar5 = *(char *)(param_2 + 0x4d);
              uVar6 = *(uint *)(*(long *)(param_1 + 0x13450) + 0x124);
              if ((((((cVar5 != '\x10') || ((uVar6 >> 3 & 1) == 0)) &&
                    ((cVar5 != ' ' || ((uVar6 >> 4 & 1) == 0)))) &&
                   ((cVar5 != '@' || ((uVar6 >> 5 & 1) == 0)))) &&
                  ((cVar5 != '\x10' || ((uVar6 >> 6 & 1) == 0)))) &&
                 (((cVar5 != ' ' || ((uVar6 >> 7 & 1) == 0)) &&
                  ((cVar5 != '@' || ((uVar6 >> 8 & 1) == 0)))))) {
                iVar3 = *(int *)(param_2 + 0x28);
                if (iVar3 < 0xca) {
                  if (iVar3 != 0x9c) {
                    if (iVar3 == 0xb1) {
LAB_109f3a324:
                      plVar8 = *(long **)(param_2 + 0x98);
LAB_109f3a328:
                      if (*(byte *)(*plVar8 + 0x1c) < 0x20) goto LAB_109f3a2b8;
                    }
                    goto LAB_109f3a170;
                  }
                }
                else {
                  uVar10 = (ulong)(iVar3 - 0xcaU);
                  if (iVar3 - 0xcaU < 0x3e) {
                    if ((1L << (uVar10 & 0x3f) & 0xc0000003U) == 0) {
                      if ((1L << (uVar10 & 0x3f) & 0x2000000100000000U) == 0) {
                        if (uVar10 != 0x10) goto LAB_109f3a33c;
                        if ((0x1f < *(byte *)(*(long *)*puVar1 + 0x1c)) ||
                           (0x1f < *(byte *)(**(long **)(param_2 + 0x98) + 0x1c))) {
                          plVar8 = *(long **)(param_2 + 200);
                          goto LAB_109f3a328;
                        }
                      }
                    }
                    else if (0x1f < *(byte *)(*(long *)*puVar1 + 0x1c)) goto LAB_109f3a324;
                  }
                  else {
LAB_109f3a33c:
                    if (iVar3 != 0x154) goto LAB_109f3a170;
                  }
                }
                goto LAB_109f3a2b8;
              }
            }
            goto LAB_109f3a170;
          }
        }
LAB_109f3a2b8:
        bVar7 = *(byte *)(param_2 + 0x1c) | bVar7;
        goto LAB_109f3a0f8;
      }
      goto LAB_109f3a170;
    }
    if (iVar3 != 1) goto LAB_109f3a170;
    uVar6 = (uint)*(byte *)(param_1 + 0x13401);
    FUN_109f39944(*(byte *)(param_1 + 0x13401),*(undefined1 *)(param_1 + 0x13402),param_2);
    bVar7 = *(byte *)(param_2 + 0x1c);
    if (uVar6 != 0) goto LAB_109f3a0f8;
  }
  else {
    if (iVar3 == 4) {
      if (*(int *)(param_2 + 0x28) == 0x112) {
        lVar9 = **(long **)(param_2 + 0x98);
        bVar7 = *(byte *)(lVar9 + 0x1c);
        if ((bVar7 & 6) == 0) {
          FUN_109f3a0b4(param_1,lVar9);
          bVar7 = *(byte *)(lVar9 + 0x1c);
        }
        if ((bVar7 >> 1 & 1) != 0) goto LAB_109f3a0f4;
      }
    }
    else if (iVar3 == 7 || iVar3 == 5) {
LAB_109f3a0f4:
      bVar7 = *(byte *)(param_2 + 0x1c);
LAB_109f3a0f8:
      bVar7 = bVar7 | 2;
      goto LAB_109f3a178;
    }
LAB_109f3a170:
    bVar7 = *(byte *)(param_2 + 0x1c);
  }
  bVar7 = bVar7 | 4;
LAB_109f3a178:
  *(byte *)(param_2 + 0x1c) = bVar7;
  return;
}



/* Entry: 109f3a348; end: 109f3a437;  */

void FUN_109f3a348(long param_1,long param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x18) < 5) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar5 = (ulong)(byte)(&UNK_110b78540)[(ulong)*(uint *)(param_1 + 0x28) * 0x68];
      if (uVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x68);
        do {
          FUN_109f3a348(*(undefined8 *)*puVar6,param_2,param_3);
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 6;
        } while (uVar5 != 0);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 - 0x144U < 0x27 && (1L << ((ulong)(iVar1 - 0x144U) & 0x3f) & 0x4000000021U) != 0) {
        bVar3 = *(byte *)(param_1 + 0x1c);
        if ((bVar3 >> 4 & 1) == 0) {
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          *(long *)(param_2 + (ulong)uVar2 * 8) = param_1;
          *(byte *)(param_1 + 0x1c) = bVar3 | 0x10;
        }
      }
      else if ((iVar1 != 0x112) && (iVar1 != 0x1f1)) {
        _printf(&UNK_10f61a66f);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109f3a438);
        (*pcVar4)();
      }
    }
  }
  return;
}



/* Entry: 109f3a438; end: 109f3b4bb;  */

/* WARNING: Possible PIC construction at 0x000109f3a4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f3a50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109f3a574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f3a4a4) */
/* WARNING: Removing unreachable block (ram,0x000109f3a4ac) */
/* WARNING: Removing unreachable block (ram,0x000109f3a4e0) */
/* WARNING: Removing unreachable block (ram,0x000109f3a510) */
/* WARNING: Removing unreachable block (ram,0x000109f3a514) */
/* WARNING: Removing unreachable block (ram,0x000109f3a544) */
/* WARNING: Removing unreachable block (ram,0x000109f3a578) */
/* WARNING: Removing unreachable block (ram,0x000109f3a57c) */
/* WARNING: Removing unreachable block (ram,0x000109f3a5ac) */
/* WARNING: Removing unreachable block (ram,0x000109f3a548) */

uint FUN_109f3a438(long param_1,long param_2,long param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_x7;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int in_stack_00000000;
  char in_stack_00000004;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar5 = (uint)in_x7;
  uVar14 = 0;
  iVar12 = 0;
  uVar13 = *param_4;
  uVar9 = 8;
  if (in_stack_00000004 == '\0') {
    uVar9 = 0x100;
  }
  cVar1 = '\0';
  if (in_stack_00000008 != 0) {
    cVar1 = in_stack_00000004;
  }
  do {
    do {
      if (uVar13 == 0) {
        uVar8 = uVar14 & 0xffffffff;
        do {
          if (uVar8 == 0x1b) goto LAB_109f3a88c;
          uVar14 = uVar8 + 1;
          uVar13 = param_4[uVar8 + 1];
          uVar8 = uVar14;
        } while (uVar13 == 0);
      }
      if (0x1b < (uint)uVar14) goto LAB_109f3a88c;
      uVar6 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar3 = uVar6 | (uint)uVar14 << 5;
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      uVar13 = uVar13 & (uVar6 ^ 0xffffffff);
    } while ((bool)in_stack_00000004 != (*(int *)(param_1 + 0x13408) == 4 && (uVar3 >> 3) - 1 < 2));
LAB_109f3a6e0:
    while ((uVar7 = uVar9 >> 5, uVar5 != 0 &&
           (bVar2 = *(byte *)(param_3 + (ulong)(uVar9 >> 3)), bVar2 != 0 && uVar5 != bVar2))) {
LAB_109f3a750:
      if (uVar5 == bVar2) {
LAB_109f3a764:
        uVar11 = 1 << (ulong)(uVar9 & 0x1e);
        uVar10 = *(uint *)(param_1 + 0x13860 + (ulong)uVar7 * 4);
        goto LAB_109f3a770;
      }
      uVar9 = in_stack_00000000 + 7 + uVar9 & 0xfffffff8;
    }
    uVar10 = *(uint *)(param_1 + 0x13860 + (ulong)uVar7 * 4);
    uVar11 = 1 << (ulong)(uVar9 & 0x1e);
    if (((uVar10 & uVar11) != 0) ||
       ((((uVar10 >> (ulong)(uVar9 & 0x1e)) >> 1 & 1) != 0 ||
        ((*(uint *)(param_2 + (ulong)uVar7 * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)))) {
      if (uVar5 != 0) {
        bVar2 = *(byte *)(param_3 + (ulong)(uVar9 >> 3));
        if (bVar2 != 0) goto LAB_109f3a750;
        goto LAB_109f3a764;
      }
LAB_109f3a770:
      if (((uVar10 & uVar11) == 0) && (((uVar10 >> (ulong)(uVar9 & 0x1e)) >> 1 & 1) == 0)) {
        uVar9 = uVar9 + in_stack_00000000;
      }
      else {
        if (param_3 != 0) {
          *(undefined1 *)(param_3 + (ulong)(uVar9 >> 3)) =
               *(undefined1 *)(param_1 + 0x13470 + (ulong)(uVar9 >> 3));
        }
        uVar9 = uVar9 + 2;
      }
      goto LAB_109f3a6e0;
    }
    uVar7 = uVar9 & 0xfffffff8 | uVar9 + in_stack_00000008 * 2 & 7;
    if (cVar1 == '\0') {
      uVar7 = uVar9;
    }
    func_0x000109f3aa08(param_1,param_1 + (ulong)uVar3 * 0x58,uVar7,in_x7,0,in_stack_00000010);
    uVar7 = uVar9;
    iVar4 = in_stack_00000000;
    do {
      *(uint *)(param_2 + (ulong)(uVar7 >> 5) * 4) =
           1 << (ulong)(uVar7 & 0x1f) | *(uint *)(param_2 + (ulong)(uVar7 >> 5) * 4);
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (param_3 != 0) {
      *(char *)(param_3 + (ulong)(uVar9 >> 3)) = (char)in_x7;
    }
    uVar9 = uVar9 + in_stack_00000000;
    iVar12 = iVar12 + in_stack_00000000;
    uVar8 = (ulong)(uVar3 >> 3) & 0xffffffc;
    *(uint *)((long)param_4 + uVar8) = *(uint *)((long)param_4 + uVar8) & ~uVar6;
  } while (iVar12 != 0x380);
LAB_109f3a88c:
  return -uVar9 & 7;
}



/* Entry: 109f3b4bc; end: 109f3b4ff;  */

void FUN_109f3b4bc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_109f3b500(*param_1,*param_2);
  return;
}



/* Entry: 109f3b500; end: 109f3b6f3;  */

undefined4 FUN_109f3b500(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x28);
  if (uVar2 != uVar3) {
    bVar8 = uVar3 <= uVar2;
    bVar9 = uVar2 == uVar3;
    goto LAB_109f3b5e4;
  }
  uVar11 = param_1;
  FUN_109f140f4();
  if ((int)uVar11 < 0) {
LAB_109f3b560:
    if ((int)uVar2 < 0x27b) {
      if (uVar2 - 0x169 < 3) {
        lVar13 = 0x18;
LAB_109f3b5b0:
        lVar1 = 0x38;
        if (0xfffffffc < uVar2 - 0x16c) {
          lVar1 = 0x18;
        }
        lVar12 = *(long *)(param_1 + 0x80 + lVar13);
        lVar13 = *(long *)(param_2 + lVar1 + 0x80);
      }
      else {
        if ((uVar2 != 0x147) && (uVar2 != 0x149)) goto LAB_109f3b600;
        lVar12 = *(long *)(param_1 + 0x98);
        lVar13 = *(long *)(param_2 + 0x98);
      }
      if (lVar12 != lVar13) goto LAB_109f3b5d8;
    }
    else if (uVar2 - 0x27b < 2) {
      lVar13 = 0x38;
      goto LAB_109f3b5b0;
    }
LAB_109f3b600:
    lVar13 = (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar2 * 0x68] * 4 + -4;
    uVar3 = *(uint *)(param_1 + 0x54 + lVar13);
    uVar4 = *(uint *)(param_2 + 0x54 + lVar13);
    bVar8 = (uVar4 & 0x7f) <= (uVar3 & 0x7f);
    bVar9 = false;
    if ((uVar3 & 0x7f) == (uVar4 & 0x7f)) {
      uVar6 = uVar3 >> 0x17 & 1;
      uVar7 = uVar4 >> 0x17 & 1;
      bVar8 = uVar7 <= uVar6;
      bVar9 = false;
      if (uVar6 == uVar7) {
        uVar6 = uVar3 >> 0x18 & 1;
        uVar7 = uVar4 >> 0x18 & 1;
        bVar8 = uVar7 <= uVar6;
        bVar9 = false;
        if (uVar6 == uVar7) {
          uVar6 = uVar3 >> 0x1e & 1;
          uVar7 = uVar4 >> 0x1e & 1;
          bVar8 = uVar7 <= uVar6;
          bVar9 = false;
          if (uVar6 == uVar7) {
            if (uVar2 == 0x149) {
              uVar3 = uVar3 >> 0x19 & 1;
              uVar4 = uVar4 >> 0x19 & 1;
              bVar8 = uVar4 <= uVar3;
              bVar9 = uVar3 == uVar4;
              if (!bVar9) goto LAB_109f3b5e4;
            }
            for (lVar13 = *(long *)(param_1 + 0x10); *(int *)(lVar13 + 0x10) != 3;
                lVar13 = *(long *)(lVar13 + 0x18)) {
            }
            if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x18) + 0x28) + 200) >> 6
                & 1) == 0) {
              bVar5 = (&UNK_110b671c0)[(ulong)uVar2 * 0x68];
              if (bVar5 == 0) {
                bVar5 = (&UNK_110b671c1)[(ulong)uVar2 * 0x68];
              }
              lVar13 = (ulong)bVar5 * 4 + -4;
              uVar2 = *(uint *)(param_2 + 0x54 + lVar13);
              uVar3 = *(uint *)(param_1 + 0x54 + lVar13);
              uVar10 = 0xffffffff;
              if (uVar2 < uVar3) {
                uVar10 = 1;
              }
              if (uVar3 != uVar2) {
                return uVar10;
              }
            }
            return 0;
          }
        }
      }
    }
  }
  else {
    lVar13 = param_2;
    FUN_109f140f4();
    lVar12 = *(long *)(param_1 + 0x80 + (uVar11 & 0xffffffff) * 0x20 + 0x18);
    lVar13 = *(long *)(param_2 + (long)(int)lVar13 * 0x20 + 0x98);
    if (lVar12 == lVar13) goto LAB_109f3b560;
LAB_109f3b5d8:
    bVar8 = *(uint *)(lVar13 + 0x18) <= *(uint *)(lVar12 + 0x18);
    bVar9 = *(uint *)(lVar12 + 0x18) == *(uint *)(lVar13 + 0x18);
  }
LAB_109f3b5e4:
  uVar10 = 0xffffffff;
  if (bVar8 && !bVar9) {
    uVar10 = 1;
  }
  return uVar10;
}



/* Entry: 109f3b6f4; end: 109f3c2b7;  */

undefined8 * FUN_109f3b6f4(long *param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  bool bVar22;
  byte *pbVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  long lStack_100;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b4;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_70;
  
  puVar10 = (undefined8 *)0x0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar14 = 1;
  do {
    uVar32 = param_2;
    if (iVar14 != 0) {
      uVar15 = 0;
      uVar32 = 0;
      pbVar23 = (byte *)&uStack_e4;
      do {
        uVar28 = 0x11 << (ulong)((uint)uVar15 & 0x1f);
        if ((uVar28 & (param_2 ^ 0xffffffff)) != 0) goto LAB_109f3b87c;
        lVar21 = param_1[uVar15];
        uVar31 = *(uint *)(lVar21 + 0x28);
        if ((ulong)(byte)(&UNK_110b671d0)[(ulong)uVar31 * 0x68] == 0) {
          lVar24 = param_1[uVar15 + 4];
LAB_109f3b7d4:
          if (((*(uint *)(lVar24 + (ulong)(byte)(&UNK_110b671cf)
                                                [(ulong)*(uint *)(lVar24 + 0x28) * 0x68] * 4 + 0x50)
               ^ *(uint *)(lVar21 + (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar31 * 0x68] * 4 + 0x50))
              & 0x18000) == 0) {
            uVar32 = 1 << (ulong)((uint)uVar15 & 0x1f) | uVar32;
            param_2 = param_2 & (uVar28 ^ 0xffffffff);
          }
        }
        else if (uVar15 < 2) {
          uStack_e4 = *(undefined4 *)
                       (lVar21 + 0x54 + (ulong)(byte)(&UNK_110b671d0)[(ulong)uVar31 * 0x68] * 4 + -4
                       );
          if ((*pbVar23 & 0xf) == 0) {
            lVar24 = param_1[uVar15 + 4];
            pbVar27 = &UNK_110b671d0 + (ulong)*(uint *)(lVar24 + 0x28) * 0x68;
            uVar26 = uVar15;
LAB_109f3b858:
            uStack_e8 = *(undefined4 *)(lVar24 + (ulong)*pbVar27 * 4 + 0x50);
            if ((*(byte *)((long)&uStack_e8 + uVar26 * 2) & 0xf) == 0) goto LAB_109f3b7d4;
          }
        }
        else {
          uStack_e4 = *(undefined4 *)
                       (lVar21 + 0x54 + (ulong)(byte)(&UNK_110b671d1)[(ulong)uVar31 * 0x68] * 4 + -4
                       );
          if ((*(byte *)((ulong)&uStack_e4 | (uVar15 & 1) << 1) & 0xf) == 0) {
            uVar26 = uVar15 & 1;
            lVar24 = param_1[uVar15 + 4];
            pbVar27 = &UNK_110b671d1 + (ulong)*(uint *)(lVar24 + 0x28) * 0x68;
            goto LAB_109f3b858;
          }
        }
LAB_109f3b87c:
        uVar15 = uVar15 + 1;
        pbVar23 = pbVar23 + 2;
      } while (uVar15 != 4);
    }
LAB_109f3b898:
    lVar21 = 0xffffffff;
    if (uVar32 == 0xffffffff) {
      if (((&UNK_110b6719c)[(ulong)*(uint *)(*param_1 + 0x28) * 0x68] & 1) != 0) {
        uVar32 = 0;
        uVar15 = 0;
        uVar28 = 0x20;
        lVar21 = 0x20;
        goto LAB_109f3b924;
      }
      uVar32 = 0;
      uVar15 = 0;
      uVar28 = 0x20;
      lVar21 = 0x20;
      goto LAB_109f3ba04;
    }
    if (uVar32 != 0) break;
    bVar9 = iVar14 == 0;
    iVar14 = iVar14 + -1;
    if (bVar9) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        puVar10 = (undefined8 *)0x90;
        _malloc();
        if (puVar10 == (undefined8 *)0x0) {
          puVar30 = (undefined8 *)0x0;
        }
        else {
          puVar10[4] = 0;
          puVar30 = puVar10 + 6;
          puVar10[7] = 0;
          *puVar30 = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[0xd] = 0;
          puVar10[0xc] = 0;
          puVar10[0xf] = 0;
          puVar10[0xe] = 0;
          puVar10[0x10] = 0;
        }
        *puVar30 = *(undefined8 *)(*(long *)(lVar21 + 0x20) + 0x18);
        puVar30[1] = lVar21;
        uVar32 = *(uint *)(lVar21 + 0x7c);
        *(uint *)(puVar30 + 2) = uVar32;
        puVar10 = puVar30;
        FUN_109f658b0(puVar30,(ulong)uVar32 << 3);
        puVar30[3] = puVar10;
        lVar21 = *(long *)(lVar21 + 0x30);
        while (lVar21 != 0) {
          *(long *)(puVar30[3] + (ulong)*(uint *)(lVar21 + 0x40) * 8) = lVar21;
          FUN_109ecc3f8();
        }
        puVar30[6] = 0;
        puVar30[4] = puVar30 + 6;
        puVar30[5] = 0;
        puVar30[7] = puVar30 + 4;
        *(undefined4 *)(puVar30 + 8) = 0;
        puVar10 = puVar30;
        func_0x000109f6590c(puVar30,(ulong)*(uint *)(puVar30 + 2) << 2);
        puVar30[9] = puVar10;
        puVar10 = puVar30;
        FUN_109f658b0(puVar30,(ulong)*(uint *)(puVar30 + 2) << 3);
        puVar30[10] = puVar10;
        return puVar30;
      }
      return puVar10;
    }
  } while( true );
  uVar28 = (uVar32 & 0xaaaaaaaa) >> 1 | (uVar32 & 0x55555555) << 1;
  uVar28 = (uVar28 & 0xcccccccc) >> 2 | (uVar28 & 0x33333333) << 2;
  uVar28 = (uVar28 & 0xf0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f) << 4;
  uVar28 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
  uVar15 = LZCOUNT(uVar28 >> 0x10 | uVar28 << 0x10);
  uVar28 = (uint)uVar15;
  uVar31 = ~(uVar32 >> (ulong)(uVar28 & 0x1f));
  uVar31 = (uVar31 & 0xaaaaaaaa) >> 1 | (uVar31 & 0x55555555) << 1;
  uVar31 = (uVar31 & 0xcccccccc) >> 2 | (uVar31 & 0x33333333) << 2;
  uVar31 = (uVar31 & 0xf0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f) << 4;
  uVar31 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
  lVar21 = LZCOUNT(uVar31 >> 0x10 | uVar31 << 0x10);
  uVar31 = (uint)lVar21;
  uVar32 = uVar32 & (~(-1 << (ulong)(uVar31 & 0x1f)) << (ulong)(uVar28 & 0x1f) ^ 0xffffffffU);
  if ((iVar14 == 0) && (uVar31 == 1)) goto LAB_109f3b898;
  if (((&UNK_110b6719c)[(ulong)*(uint *)(param_1[uVar15] + 0x28) * 0x68] & 1) != 0) {
    uVar28 = uVar31 + uVar28;
    if (uVar31 == 0) {
      lVar24 = 0;
      bVar9 = true;
    }
    else {
LAB_109f3b924:
      lVar24 = 0;
      lVar11 = uVar28 - uVar15;
      uVar26 = uVar15 + 4;
      plVar17 = param_1 + uVar15;
      do {
        if ((lVar24 == 0) || (*(uint *)(*plVar17 + 0x20) < *(uint *)(lVar24 + 0x20))) {
          lVar24 = *plVar17;
        }
        if ((iVar14 != 0) &&
           ((lVar24 == 0 ||
            (*(uint *)(param_1[uVar26 & 0xffffffff] + 0x20) < *(uint *)(lVar24 + 0x20))))) {
          lVar24 = param_1[uVar26 & 0xffffffff];
        }
        uVar26 = uVar26 + 1;
        lVar11 = lVar11 + -1;
        plVar17 = plVar17 + 1;
      } while (lVar11 != 0);
      bVar9 = false;
    }
    lStack_90 = *(long *)(lVar24 + 0x10);
    iVar29 = *(int *)(lStack_90 + 0x10);
    while (iVar29 != 3) {
      lStack_90 = *(long *)(lStack_90 + 0x18);
      iVar29 = *(int *)(lStack_90 + 0x10);
    }
    lVar6 = *(long *)(*(long *)(lStack_90 + 0x20) + 0x18);
    uStack_a0 = 0;
    alStack_b0[0] = 2;
    lVar11 = lVar6;
    alStack_b0[1] = lVar24;
    lStack_98 = lVar6;
    FUN_109ecb0a8(lVar6,*(undefined4 *)(lVar24 + 0x28));
    *(char *)(lVar11 + 0x50) = (char)lVar21;
    if (iVar14 == 0) {
      uVar8 = *(undefined1 *)(lVar24 + 0x4d);
    }
    else {
      uVar8 = 0x20;
    }
    lVar1 = lVar11 + 0x30;
    FUN_109ecb048(lVar11,lVar1,lVar21,uVar8);
    _memcpy(lVar11 + 0x80,lVar24 + 0x80,
            (ulong)(byte)(&UNK_110b67190)[(ulong)*(uint *)(lVar24 + 0x28) * 0x68] << 5);
    func_0x000109ecd86c(lVar11,lVar24);
    uVar31 = *(uint *)(lVar11 + 0x28);
    lVar21 = lVar11 + 0x54;
    iVar29 = (int)uVar15;
    *(int *)(lVar21 + (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar31 * 0x68] * 4 + -4) = iVar29;
    if (iVar14 == 0) {
      FUN_109ecb4f0(2,lVar24,lVar11);
      if (!bVar9) {
        lStack_100 = lVar11;
        do {
          lVar24 = param_1[uVar15];
          uVar31 = (int)uVar15 - iVar29;
          lVar21 = lVar1;
          if (*(char *)(lVar11 + 0x4c) != '\x01' || (uVar31 & 0xff) != 0) {
            lVar7 = lVar6;
            FUN_109ecaef8(lVar6,0x154);
            FUN_109ecb048();
            *(ushort *)(lVar7 + 0x2c) = *(ushort *)(lVar7 + 0x2c) & 0xf006;
            *(undefined8 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x58) = 0;
            *(undefined8 *)(lVar7 + 0x60) = 0;
            *(long *)(lVar7 + 0x68) = lVar1;
            *(char *)(lVar7 + 0x70) = (char)uVar31;
            *(undefined8 *)(lVar7 + 0x71) = 0;
            *(undefined8 *)(lVar7 + 0x78) = 0;
            FUN_109ecb4f0(3,lStack_100,lVar7);
            lVar21 = lVar7 + 0x30;
            lStack_100 = lVar7;
          }
          plVar17 = (long *)(lVar24 + 0x30);
          plVar16 = *(long **)(lVar24 + 0x40);
          if (plVar16 + -1 != plVar17) {
            do {
              lVar24 = *plVar16;
              plVar13 = (long *)plVar16[1];
              *(long **)(lVar24 + 8) = plVar13;
              *plVar13 = lVar24;
              plVar16[1] = lVar21 + 8;
              plVar16[2] = lVar21;
              *plVar16 = 0;
              lVar24 = *(long *)(lVar21 + 8);
              *plVar16 = lVar24;
              *(long **)(lVar24 + 8) = plVar16;
              *(long **)(lVar21 + 8) = plVar16;
              plVar16 = plVar13;
            } while (plVar13 + -1 != plVar17);
          }
          FUN_109ecb9c0(*plVar17);
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar28);
        alStack_b0[0] = 3;
      }
    }
    else {
      lVar7 = (ulong)uVar31 * 0x68;
      lVar6 = lVar21 + (ulong)(byte)(&UNK_110b671cf)[lVar7] * 4;
      *(uint *)(lVar6 + -4) = *(uint *)(lVar6 + -4) & 0xfdffffff;
      lVar21 = lVar21 + (ulong)(byte)(&UNK_110b671c1)[lVar7] * 4;
      *(uint *)(lVar21 + -4) = *(uint *)(lVar21 + -4) & 0xffffffcf | 0x20;
      FUN_109ecb4f0(2,lVar24,lVar11);
      alStack_b0[0] = 3;
      alStack_b0[1] = lVar11;
      if (!bVar9) {
        do {
          uVar31 = (int)uVar15 - iVar29;
          lVar21 = lVar1;
          if (*(char *)(lVar11 + 0x4c) != '\x01' || (uVar31 & 0xff) != 0) {
            lVar24 = lStack_98;
            FUN_109ecaef8(lStack_98,0x154);
            lVar21 = lVar24 + 0x30;
            FUN_109ecb048();
            *(ushort *)(lVar24 + 0x2c) =
                 *(ushort *)(lVar24 + 0x2c) & 0xf000 |
                 (*(ushort *)(lVar24 + 0x2c) & 0xf006 | (ushort)(byte)uStack_a0) & 7 |
                 (uStack_a0._4_2_ & 0x1ff) << 3;
            *(undefined8 *)(lVar24 + 0x50) = 0;
            *(undefined8 *)(lVar24 + 0x58) = 0;
            *(undefined8 *)(lVar24 + 0x60) = 0;
            *(long *)(lVar24 + 0x68) = lVar1;
            *(char *)(lVar24 + 0x70) = (char)uVar31;
            *(undefined8 *)(lVar24 + 0x71) = 0;
            *(undefined8 *)(lVar24 + 0x78) = 0;
            FUN_109ecb4f0(alStack_b0[0],alStack_b0[1],lVar24);
            alStack_b0[0] = 3;
            alStack_b0[1] = lVar24;
          }
          lVar24 = param_1[uVar15];
          plVar17 = (long *)(lVar24 + 0x30);
          plVar16 = alStack_b0;
          FUN_109ece168(plVar16,0x1ad,lVar21);
          plVar13 = *(long **)(lVar24 + 0x40);
          if (plVar13 + -1 != plVar17) {
            do {
              lVar24 = *plVar13;
              plVar2 = (long *)plVar13[1];
              *(long **)(lVar24 + 8) = plVar2;
              *plVar2 = lVar24;
              plVar13[1] = (long)(plVar16 + 1);
              plVar13[2] = (long)plVar16;
              *plVar13 = 0;
              lVar24 = plVar16[1];
              *plVar13 = lVar24;
              *(long **)(lVar24 + 8) = plVar13;
              plVar16[1] = (long)plVar13;
              plVar13 = plVar2;
            } while (plVar2 + -1 != plVar17);
          }
          lVar24 = param_1[uVar15 + 4];
          plVar17 = (long *)(lVar24 + 0x30);
          plVar16 = alStack_b0;
          FUN_109ece168(plVar16,0x1ae,lVar21);
          plVar13 = *(long **)(lVar24 + 0x40);
          if (plVar13 + -1 != plVar17) {
            do {
              lVar21 = *plVar13;
              plVar2 = (long *)plVar13[1];
              *(long **)(lVar21 + 8) = plVar2;
              *plVar2 = lVar21;
              plVar13[1] = (long)(plVar16 + 1);
              plVar13[2] = (long)plVar16;
              *plVar13 = 0;
              lVar21 = plVar16[1];
              *plVar13 = lVar21;
              *(long **)(lVar21 + 8) = plVar13;
              plVar16[1] = (long)plVar13;
              plVar13 = plVar2;
            } while (plVar2 + -1 != plVar17);
          }
          FUN_109ecb9c0(param_1[uVar15]);
          FUN_109ecb9c0(param_1[uVar15 + 4]);
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar28);
      }
    }
    puVar10 = (undefined8 *)0x1;
    goto LAB_109f3b898;
  }
  uVar28 = uVar31 + uVar28;
  if (uVar31 == 0) {
    lVar24 = 0;
    bVar9 = true;
    puVar18 = (uint *)0x28;
LAB_109f3bf2c:
    alStack_b0[1] = 0;
    alStack_b0[0] = 0;
    uVar31 = *puVar18;
    lVar11 = lVar24 + 0x54;
    *(undefined4 *)(lVar11 + (ulong)(byte)(&UNK_110b671d0)[(ulong)uVar31 * 0x68] * 4 + -4) = 0;
    *(undefined4 *)(lVar11 + (ulong)(byte)(&UNK_110b671d1)[(ulong)uVar31 * 0x68] * 4 + -4) = 0;
    if (!bVar9) {
      uVar12 = (ulong)uVar28;
      goto LAB_109f3bf7c;
    }
    puVar18 = (uint *)(lVar11 + (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar31 * 0x68] * 4 + -4);
    uVar19 = *puVar18 & 0xff807fff;
    bVar22 = true;
    bVar9 = true;
    if (iVar14 == 0) goto LAB_109f3c098;
  }
  else {
LAB_109f3ba04:
    lVar24 = 0;
    uVar12 = (ulong)uVar28;
    lVar11 = uVar12 - uVar15;
    uVar26 = uVar15 + 4;
    plVar17 = param_1 + uVar15;
    do {
      if ((lVar24 == 0) || (*(uint *)(lVar24 + 0x20) < *(uint *)(*plVar17 + 0x20))) {
        lVar24 = *plVar17;
      }
      if ((iVar14 != 0) &&
         ((lVar24 == 0 ||
          (*(uint *)(lVar24 + 0x20) < *(uint *)(param_1[uVar26 & 0xffffffff] + 0x20))))) {
        lVar24 = param_1[uVar26 & 0xffffffff];
      }
      uVar26 = uVar26 + 1;
      lVar11 = lVar11 + -1;
      plVar17 = plVar17 + 1;
    } while (lVar11 != 0);
    puVar18 = (uint *)(lVar24 + 0x28);
    uVar31 = *puVar18;
    uVar26 = uVar15;
    if ((&UNK_110b671d0)[(ulong)uVar31 * 0x68] != '\0') {
      do {
        puVar5 = &UNK_110b671d0;
        if (1 < uVar26) {
          puVar5 = &UNK_110b671d1;
        }
        uStack_b4 = *(undefined4 *)
                     (param_1[uVar26] +
                      (ulong)(byte)puVar5[(ulong)*(uint *)(param_1[uVar26] + 0x28) * 0x68] * 4 +
                     0x50);
        *(undefined2 *)((long)alStack_b0 + (uVar26 >> 1 & 0x7fffffff) * 4 | (uVar26 & 1) << 1) =
             *(undefined2 *)((ulong)&uStack_b4 | (uVar26 & 1) << 1);
        uVar26 = uVar26 + 1;
        uVar25 = uVar15;
      } while (uVar12 != uVar26);
      do {
        lVar11 = param_1[uVar25];
        if ((*(uint *)(lVar11 + (ulong)(byte)(&UNK_110b671cf)
                                             [(ulong)*(uint *)(lVar11 + 0x28) * 0x68] * 4 + 0x50) >>
             0x17 & 1) == 0) {
          uVar31 = (uint)*(byte *)(*(long *)(lVar11 + 0x98) + 0x1d);
        }
        else {
          uVar31 = 0x20;
        }
        uVar26 = uVar25 + 1;
        if (uVar26 < uVar12) {
          iVar29 = 0;
          pbVar23 = (byte *)((long)alStack_b0 + (uVar25 >> 1 & 0x7fffffff) * 4 | (uVar25 & 1) << 1);
          uVar25 = uVar26;
          do {
            bVar4 = *pbVar23;
            pbVar27 = (byte *)((long)alStack_b0 + (uVar25 >> 1 & 0x7fffffff) * 4 |
                              (ulong)((uint)uVar25 & 1) << 1);
            if ((0xf < (*pbVar27 ^ bVar4)) ||
               (iVar29 = iVar29 + uVar31, (uint)pbVar27[1] + iVar29 != (uint)pbVar23[1])) break;
            uVar19 = (uint)uVar25 + 1;
            uVar25 = (ulong)uVar19;
            *pbVar23 = bVar4 & 0xf0 | bVar4 + 1 & 0xf;
            pbVar27[0] = 0;
            pbVar27[1] = 0;
          } while (uVar28 != uVar19);
        }
        uVar25 = uVar26;
      } while (uVar26 != uVar12);
      bVar9 = false;
      goto LAB_109f3bf2c;
    }
LAB_109f3bf7c:
    uVar20 = 0;
    uVar19 = 0;
    uVar26 = uVar15;
    do {
      uVar20 = (*(uint *)(param_1[uVar26] +
                          (ulong)(byte)(&UNK_110b671cf)
                                       [(ulong)*(uint *)(param_1[uVar26] + 0x28) * 0x68] * 4 + 0x50)
                >> 0xf & 3) << (ulong)(uVar19 & 0x1f) | uVar20;
      uVar26 = uVar26 + 1;
      uVar19 = uVar19 + 2;
    } while (uVar12 != uVar26);
    puVar18 = (uint *)(lVar24 + (ulong)(byte)(&UNK_110b671cf)[(ulong)uVar31 * 0x68] * 4 + 0x50);
    uVar19 = *puVar18 & 0xff800000 | *puVar18 & 0x7fff | (uVar20 & 0xff) << 0xf;
    uVar26 = uVar15;
    do {
      uVar3 = *(uint *)(param_1[uVar26] +
                        (ulong)(byte)(&UNK_110b671cf)
                                     [(ulong)*(uint *)(param_1[uVar26] + 0x28) * 0x68] * 4 + 0x50);
      uVar20 = uVar19 & 0xdfffffff;
      if ((uVar3 & 0x20000000) != 0) {
        uVar20 = uVar19;
      }
      uVar19 = uVar20 & 0xefffffff;
      if ((uVar3 & 0x10000000) != 0) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 | uVar3 & 0x4000000;
      uVar26 = uVar26 + 1;
    } while (uVar12 != uVar26);
    if (iVar14 == 0) {
      bVar22 = false;
      goto LAB_109f3c098;
    }
    lVar11 = uVar12 - uVar15;
    uVar26 = uVar15 + 4;
    do {
      uVar3 = *(uint *)(param_1[uVar26 & 0xffffffff] +
                        (ulong)(byte)(&UNK_110b671cf)
                                     [(ulong)*(uint *)(param_1[uVar26 & 0xffffffff] + 0x28) * 0x68]
                        * 4 + 0x50);
      uVar20 = uVar19 & 0xdfffffff;
      if ((uVar3 & 0x20000000) != 0) {
        uVar20 = uVar19;
      }
      uVar19 = uVar20 & 0xefffffff;
      if ((uVar3 & 0x10000000) != 0) {
        uVar19 = uVar20;
      }
      uVar19 = uVar19 | uVar3 & 0x4000000;
      uVar26 = uVar26 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    bVar9 = false;
  }
  bVar22 = bVar9;
  uVar19 = uVar19 & 0xfdffffff;
  lVar11 = lVar24 + (ulong)(byte)(&UNK_110b671c0)[(ulong)uVar31 * 0x68] * 4;
  *(uint *)(lVar11 + 0x50) = *(uint *)(lVar11 + 0x50) & 0xffffffcf | 0x20;
LAB_109f3c098:
  *puVar18 = uVar19;
  *(int *)(lVar24 + 0x54 + (ulong)(byte)(&UNK_110b671b1)[(ulong)uVar31 * 0x68] * 4 + -4) =
       (int)uVar15;
  uVar19 = 0xffffffff;
  if ((uint)lVar21 != 0x20) {
    uVar19 = ~(-1 << (ulong)((uint)lVar21 & 0x1f));
  }
  *(uint *)(lVar24 + 0x54 + (ulong)(byte)(&UNK_110b671aa)[(ulong)uVar31 * 0x68] * 4 + -4) = uVar19;
  *(char *)(lVar24 + 0x50) = (char)lVar21;
  for (lStack_c0 = *(long *)(lVar24 + 0x10); *(int *)(lStack_c0 + 0x10) != 3;
      lStack_c0 = *(long *)(lStack_c0 + 0x18)) {
  }
  uStack_c8 = *(undefined8 *)(*(long *)(lStack_c0 + 0x20) + 0x18);
  uStack_d0 = 0;
  uStack_e0 = 2;
  plVar17 = alStack_b0 + uVar15;
  lStack_d8 = lVar24;
  if (iVar14 == 0) {
    if (!bVar22) {
      lVar11 = uVar28 - uVar15;
      plVar16 = param_1 + uVar15;
      plVar13 = plVar17;
      do {
        *plVar13 = *(long *)(*plVar16 + 0x98);
        lVar11 = lVar11 + -1;
        plVar16 = plVar16 + 1;
        plVar13 = plVar13 + 1;
      } while (lVar11 != 0);
    }
    func_0x000109ecd728(lVar21);
    puVar10 = &uStack_e0;
    FUN_109ece300(puVar10,lVar21,plVar17);
    plVar16 = (long *)(lVar24 + 0x88);
    lVar21 = *plVar16;
    plVar17 = *(long **)(lVar24 + 0x90);
    *(long **)(lVar21 + 8) = plVar17;
    *plVar17 = lVar21;
    *plVar16 = 0;
    *(undefined8 **)(lVar24 + 0x98) = puVar10;
    plVar17 = puVar10 + 1;
    lVar21 = *plVar17;
    *plVar16 = lVar21;
    *(long **)(lVar24 + 0x90) = plVar17;
    *(long **)(lVar21 + 8) = plVar16;
    *plVar17 = (long)plVar16;
  }
  else {
    if (!bVar22) {
      lVar11 = uVar28 - uVar15;
      plVar16 = plVar17;
      plVar13 = param_1 + uVar15 + 4;
      do {
        puVar10 = &uStack_e0;
        FUN_109ece1b0(puVar10,0x15d,*(undefined8 *)(plVar13[-4] + 0x98),
                      *(undefined8 *)(*plVar13 + 0x98));
        *plVar16 = (long)puVar10;
        lVar11 = lVar11 + -1;
        plVar16 = plVar16 + 1;
        plVar13 = plVar13 + 1;
      } while (lVar11 != 0);
    }
    func_0x000109ecd728(lVar21);
    puVar10 = &uStack_e0;
    FUN_109ece300(puVar10,lVar21,plVar17);
    plVar16 = (long *)(lVar24 + 0x88);
    lVar21 = *plVar16;
    plVar17 = *(long **)(lVar24 + 0x90);
    *(long **)(lVar21 + 8) = plVar17;
    *plVar17 = lVar21;
    *plVar16 = 0;
    *(undefined8 **)(lVar24 + 0x98) = puVar10;
    plVar17 = puVar10 + 1;
    lVar21 = *plVar17;
    *plVar16 = lVar21;
    *(long **)(lVar24 + 0x90) = plVar17;
    *(long **)(lVar21 + 8) = plVar16;
    *plVar17 = (long)plVar16;
  }
  if (!bVar22) {
    lVar21 = uVar28 - uVar15;
    plVar17 = param_1 + uVar15 + 4;
    do {
      if (plVar17[-4] != lVar24) {
        FUN_109ecb9c0();
      }
      if ((iVar14 != 0) && (*plVar17 != lVar24)) {
        FUN_109ecb9c0();
      }
      plVar17 = plVar17 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  puVar10 = (undefined8 *)0x1;
  goto LAB_109f3b898;
}



/* Entry: 109f3c2b8; end: 109f3c38f;  */

undefined8 * FUN_109f3c2b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x90;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar2[4] = 0;
    puVar4 = puVar2 + 6;
    puVar2[7] = 0;
    *puVar4 = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x10] = 0;
  }
  *puVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar4[1] = param_1;
  uVar1 = *(uint *)(param_1 + 0x7c);
  *(uint *)(puVar4 + 2) = uVar1;
  puVar2 = puVar4;
  FUN_109f658b0(puVar4,(ulong)uVar1 << 3);
  puVar4[3] = puVar2;
  lVar3 = *(long *)(param_1 + 0x30);
  while (lVar3 != 0) {
    *(long *)(puVar4[3] + (ulong)*(uint *)(lVar3 + 0x40) * 8) = lVar3;
    FUN_109ecc3f8();
  }
  puVar4[6] = 0;
  puVar4[4] = puVar4 + 6;
  puVar4[5] = 0;
  puVar4[7] = puVar4 + 4;
  *(undefined4 *)(puVar4 + 8) = 0;
  puVar2 = puVar4;
  func_0x000109f6590c(puVar4,(ulong)*(uint *)(puVar4 + 2) << 2);
  puVar4[9] = puVar2;
  puVar2 = puVar4;
  FUN_109f658b0(puVar4,(ulong)*(uint *)(puVar4 + 2) << 3);
  puVar4[10] = puVar2;
  return puVar4;
}



/* Entry: 109f3c390; end: 109f3c61f;  */

undefined8 * FUN_109f3c390(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  
  puVar3 = param_1;
  FUN_109f658b0(param_1,0x88);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0x10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  puVar3[2] = param_1;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((long)puVar3 + 0x1c) = param_3;
  puVar3[4] = puVar3 + 6;
  puVar3[5] = 0;
  puVar3[7] = puVar3 + 4;
  puVar7 = (undefined8 *)param_1[7];
  *puVar3 = param_1 + 6;
  puVar3[1] = puVar7;
  *puVar7 = puVar3;
  param_1[7] = puVar3;
  FUN_109f64bec(puVar3 + 8,param_1,0x109f65648,FUN_109f65684);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *param_4;
  }
  uVar13 = 0;
  uVar4 = 0;
  while( true ) {
    if (uVar8 == 0) {
      uVar10 = uVar4;
      do {
        uVar10 = uVar10 + 1;
        if ((ulong)uVar1 + 0x1f >> 5 <= uVar10) goto LAB_109f3c4e8;
        uVar8 = param_4[uVar10];
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar8 == 0);
    }
    uVar2 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar9 = (uint)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = uVar9 | (int)uVar4 << 5;
    if (uVar1 <= uVar2) break;
    lVar11 = param_1[9];
    uVar1 = *(uint *)(param_1 + 8);
    if (*(uint *)(lVar11 + (ulong)uVar2 * 4) < uVar1) {
      *(undefined8 *)(param_1[10] + uVar13 * 8) = *(undefined8 *)(param_1[3] + (ulong)uVar2 * 8);
      uVar13 = (ulong)((int)uVar13 + 1);
      lVar11 = param_1[9];
    }
    uVar8 = uVar8 & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
    *(uint *)(lVar11 + (ulong)uVar2 * 4) = uVar1;
    uVar1 = *(uint *)(param_1 + 2);
  }
LAB_109f3c4e8:
  if ((int)uVar13 != 0) {
    uVar4 = 0;
    do {
      lVar14 = *(long *)(param_1[10] + uVar4 * 8);
      lVar11 = *(long *)(lVar14 + 0x78);
      uVar1 = *(uint *)(lVar11 + 0x20);
      if (uVar1 != 0) {
        lVar11 = *(long *)(lVar11 + 8);
        lVar5 = (ulong)uVar1 << 4;
        do {
          puVar15 = *(undefined **)(lVar11 + 8);
          if (puVar15 != (undefined *)0x0 && puVar15 != &UNK_10e47dcd0) {
            do {
              if (puVar15 != *(undefined **)(param_1[1] + 0x50)) {
                uVar12 = (ulong)(*(int *)(puVar15 + 0x40) << 2 | 1);
                uVar10 = uVar12;
                (*(code *)puVar3[9])(uVar12);
                puVar7 = puVar3 + 8;
                FUN_109f64fdc(puVar7,uVar10,uVar12);
                if (puVar7 == (undefined8 *)0x0) {
                  uVar12 = (ulong)(*(int *)(puVar15 + 0x40) << 2 | 1);
                  uVar10 = uVar12;
                  (*(code *)puVar3[9])(uVar12);
                  func_0x000109f650c0(puVar3 + 8,uVar10,uVar12,0xffffffffffffffff);
                  if (*(uint *)(param_1[9] + (ulong)*(uint *)(puVar15 + 0x40) * 4) <
                      *(uint *)(param_1 + 8)) {
                    *(uint *)(param_1[9] + (ulong)*(uint *)(puVar15 + 0x40) * 4) =
                         *(uint *)(param_1 + 8);
                    *(undefined **)(param_1[10] + uVar13 * 8) = puVar15;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  }
                }
              }
              lVar6 = *(long *)(lVar14 + 0x78);
              lVar5 = lVar11;
              do {
                lVar11 = lVar5 + 0x10;
                if (lVar11 == *(long *)(lVar6 + 8) + (ulong)*(uint *)(lVar6 + 0x20) * 0x10)
                goto LAB_109f3c534;
                puVar15 = *(undefined **)(lVar5 + 0x18);
                lVar5 = lVar11;
              } while (puVar15 == (undefined *)0x0 || puVar15 == &UNK_10e47dcd0);
            } while( true );
          }
          lVar11 = lVar11 + 0x10;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
LAB_109f3c534:
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != (uint)uVar13);
  }
  return puVar3;
}



/* Entry: 109f3c620; end: 109f3c7ef;  */

long * FUN_109f3c620(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_2;
  do {
    if (lVar8 == 0) {
      puVar3 = *(undefined8 **)**(undefined8 **)(param_1 + 0x10);
      FUN_109f6600c(puVar3,0x48,8);
      *(undefined4 *)(puVar3 + 3) = 7;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      plVar7 = puVar3 + 5;
      FUN_109ecb048();
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x30);
      if (*(int *)(lVar8 + 0x10) == 0) {
        uVar4 = 0;
      }
      else {
        plVar5 = (long *)(lVar8 + 8);
        lVar8 = 0;
        if (*(long *)(*plVar5 + 8) != 0) {
          lVar8 = *plVar5;
        }
        uVar4 = 1;
      }
      FUN_109ecb4f0(uVar4,lVar8,puVar3);
joined_r0x000109f3c778:
      while( true ) {
        if (param_2 == 0) {
          return plVar7;
        }
        uVar6 = (ulong)(*(int *)(param_2 + 0x40) << 2 | 1);
        uVar1 = uVar6;
        (**(code **)(param_1 + 0x48))(uVar6);
        lVar8 = param_1 + 0x40;
        FUN_109f64fdc(lVar8,uVar1,uVar6);
        if (lVar8 != 0) break;
        uVar6 = (ulong)(*(int *)(param_2 + 0x40) << 2 | 1);
        uVar1 = uVar6;
        (**(code **)(param_1 + 0x48))(uVar6);
        func_0x000109f650c0(param_1 + 0x40,uVar1,uVar6,plVar7);
        param_2 = *(long *)(param_2 + 0x60);
      }
      return plVar7;
    }
    uVar6 = (ulong)(*(int *)(lVar8 + 0x40) << 2 | 1);
    uVar1 = uVar6;
    (**(code **)(param_1 + 0x48))(uVar6);
    lVar2 = param_1 + 0x40;
    FUN_109f64fdc(lVar2,uVar1,uVar6);
    if (lVar2 != 0) {
      plVar7 = *(long **)(lVar2 + 0x10);
      if (plVar7 == (long *)0xffffffffffffffff) {
        plVar5 = *(long **)**(undefined8 **)(param_1 + 0x10);
        FUN_109f6600c(plVar5,0x68,8);
        *(undefined4 *)(plVar5 + 3) = 8;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[7] = 0;
        plVar5[5] = (long)(plVar5 + 7);
        *plVar5 = 0;
        plVar5[6] = 0;
        plVar5[8] = (long)(plVar5 + 5);
        plVar7 = plVar5 + 9;
        FUN_109ecb048();
        plVar5[2] = lVar8;
        puVar3 = *(undefined8 **)(param_1 + 0x38);
        *plVar5 = param_1 + 0x30;
        plVar5[1] = (long)puVar3;
        *puVar3 = plVar5;
        *(long **)(param_1 + 0x38) = plVar5;
        *(long **)(lVar2 + 0x10) = plVar7;
      }
      goto joined_r0x000109f3c778;
    }
    lVar8 = *(long *)(lVar8 + 0x60);
  } while( true );
}



/* Entry: 109f3c7f0; end: 109f3c91f;  */

void FUN_109f3c7f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  plVar3 = (long *)**(long **)(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      plVar4 = plVar3;
      plVar3 = (long *)plVar5[4];
      if (plVar3 != plVar5 + 6) {
        do {
          lVar1 = *plVar3;
          plVar4 = (long *)plVar3[1];
          *(long **)(lVar1 + 8) = plVar4;
          *plVar4 = lVar1;
          *plVar3 = 0;
          plVar3[1] = 0;
          lVar1 = plVar3[2];
          FUN_109ecc674(lVar1,param_1);
          lVar2 = plVar3[2];
          if (*(int *)(*(long *)(lVar2 + 0x58) + 0x40) == 0) {
            if (lVar1 != 0) goto LAB_109f3c89c;
          }
          else {
            uVar7 = 0;
            do {
              uVar6 = *(undefined8 *)(lVar1 + uVar7 * 8);
              plVar4 = plVar5;
              FUN_109f3c620(plVar5,uVar6);
              FUN_109ecb354(plVar3,uVar6,plVar4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(*(long *)(plVar3[2] + 0x58) + 0x40));
LAB_109f3c89c:
            FUN_109f65aa4(lVar1 + -0x30);
            FUN_109f65ae0(lVar1 + -0x30);
            lVar2 = plVar3[2];
          }
          FUN_109ecb4f0(0,lVar2,plVar3);
          plVar3 = (long *)plVar5[4];
        } while (plVar3 != plVar5 + 6);
        plVar4 = (long *)*plVar5;
      }
      plVar3 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
    if (param_1 == 0) {
      return;
    }
  }
  FUN_109f65aa4(param_1 + -0x30);
  lVar1 = *(long *)(param_1 + -0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(param_1 + -0x28);
  }
  if (*(code **)(param_1 + -0x10) != (code *)0x0) {
    (**(code **)(param_1 + -0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -0x30);
  return;
}


