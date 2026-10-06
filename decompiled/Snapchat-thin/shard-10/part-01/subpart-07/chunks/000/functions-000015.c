/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10790d104; end: 10790d153;  */

void FUN_10790d104(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 1;
  *(long *)(param_1 + 0x18) = lVar1;
  if ((lVar2 < -1) || (*(long *)(param_1 + 0x10) <= lVar1)) {
    while (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x10) + lVar1;
      *(long *)(param_1 + 0x18) = lVar1;
    }
    func_0x0001079188b0();
    lVar1 = extraout_x8;
  }
  else {
    lVar1 = *(long *)(param_1 + 8) + 0x28;
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10790e138; end: 10790eacf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10790e138(undefined8 param_1,uint *******param_2,uint param_3,long *param_4,
                  uint *******param_5,uint ******param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *******pppppppuVar4;
  undefined1 uVar5;
  bool bVar6;
  uint ******ppppppuVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  uint *******pppppppuVar11;
  uint ******ppppppuVar12;
  long lVar13;
  uint uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  int *piVar16;
  long extraout_x8_07;
  undefined8 *extraout_x8_08;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  undefined8 *puVar17;
  uint *puVar18;
  long extraout_x10;
  uint ******ppppppuVar19;
  undefined8 *unaff_x19;
  uint *******pppppppuVar20;
  uint *******pppppppuVar21;
  long lVar22;
  uint *******pppppppuVar23;
  long lVar24;
  uint *******pppppppuVar25;
  long lVar26;
  ulong uVar27;
  undefined1 auStack_168 [4];
  uint uStack_164;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  uint ******ppppppuStack_150;
  undefined8 uStack_148;
  uint *******pppppppuStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  uint *******pppppppuStack_108;
  undefined4 uStack_100;
  uint *******pppppppuStack_f8;
  undefined8 uStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  undefined8 uStack_d0;
  uint ******ppppppuStack_c8;
  uint ******ppppppuStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  pppppppuVar11 = param_2;
  plVar9 = param_4;
  pppppppuVar20 = param_5;
  func_0x000107913c90();
  uVar14 = *(uint *)pppppppuVar20;
  lVar24 = (long)(int)uVar14;
  lVar26 = *plVar9;
  uStack_70 = extraout_x8;
  func_0x00010791395c();
  lVar22 = extraout_x8_00 + (extraout_x9 & 0xffffffff) * 0x160 + (long)(int)uVar14 * 0xa0;
  lVar15 = *(long *)(lVar22 + 0x78);
  if (lVar15 < 0) {
    lVar13 = *(long *)(lVar22 + 0x68);
    if ((-1 < lVar13) && (lVar15 = *(long *)(lVar22 + 0x70), -1 < lVar15)) goto LAB_10790e1ac;
LAB_10790ea70:
    uVar14 = 1;
  }
  else {
    lVar13 = -1;
LAB_10790e1ac:
    *param_4 = lVar15;
    lStack_128 = *(long *)(lVar22 + 0x30);
    lStack_130 = *(long *)(lVar22 + 0x28);
    uStack_118 = *(undefined8 *)(lVar22 + 0x40);
    uStack_120 = *(undefined8 *)(lVar22 + 0x38);
    puStack_110 = *(undefined1 **)(lVar22 + 0x48);
    if (-1 < lVar13) {
      if (*(long *)(lVar22 + 0x28) == 0) {
        lVar15 = unaff_x19[7];
      }
      else {
        lVar15 = *(long *)unaff_x19[8] + *(long *)(lVar22 + 0x30) * 0x30;
      }
      pppppppuVar11 = *(uint ********)(lVar22 + 0x38);
      func_0x00010790eba8(lVar15,pppppppuVar11,*(undefined8 *)(lVar22 + 0x40),lVar13,param_6);
    }
    pppppppuVar20 = (uint *******)*param_4;
    pppppppuStack_140 = param_5;
    func_0x00010791395c();
    if (*(char *)(extraout_x8_01 + (extraout_x9_00 & 0xffffffff) * 0x160 + 0x18) != '\x01') {
      uStack_148 = (uint *******)CONCAT44(param_7,(undefined4)uStack_148);
      if (param_7 != 0) {
        *(undefined4 *)(lVar22 + 0xb8) = 1;
      }
      lVar15 = *(long *)(unaff_x19[2] + 0x20);
      uVar27 = lVar15 + (long)pppppppuVar20;
      lVar22 = *(long *)(unaff_x19[2] + 8);
      lVar13 = *(long *)(lVar22 + (uVar27 >> 4) * 8);
      uVar27 = uVar27 & 0xf;
      pppppppuVar23 = (uint *******)(lVar13 + uVar27 * 0x160);
      ppppppuVar12 = pppppppuVar23[2];
      puStack_160 = (undefined8 *)lVar24;
      puStack_158 = (undefined8 *)lVar26;
      ppppppuStack_150 = param_6;
      plStack_138 = param_4;
      if (8 < (ulong)((long)param_6[1] - (long)*param_6)) {
        if ((long)ppppppuVar12 < 1) {
          bVar6 = false;
        }
        else {
          uVar8 = lVar15 + (long)param_2;
          bVar6 = *(uint *******)
                   (*(long *)(lVar22 + (uVar8 >> 4) * 8) + (uVar8 & 0xf) * 0x160 + 0x10) ==
                  ppppppuVar12;
        }
        uVar5 = pppppppuVar20 == param_2;
        if ((!(bool)uVar5) && (!bVar6)) goto LAB_10790e2dc;
        *param_4 = (long)param_2;
        *(uint *)pppppppuStack_140 = param_3;
        pppppppuVar20 = pppppppuStack_140;
LAB_10790e6e4:
        func_0x000107917828(unaff_x19[9]);
        func_0x00010791395c();
        param_6 = (uint ******)(extraout_x8_04 + (extraout_x9_03 & 0xffffffff) * 0x160);
        param_5 = (uint *******)(param_6 + (long)(int)*(uint *)pppppppuVar20 * 0x14);
        if (((*(byte *)((long)param_5 + 0xbd) & 1) == 0) &&
           (uVar5 = 1, *(uint *)(param_5 + 0x17) != 2)) {
          func_0x00010790e0b8(ppppppuStack_150,param_6);
          if (*(uint *)(param_5 + 4) == 4) {
            for (lVar15 = 0xb8; lVar15 != 0x1f8; lVar15 = lVar15 + 0xa0) {
              if (*(int *)((long)param_6 + lVar15) == 0) {
                *(undefined4 *)((long)param_6 + lVar15) = 2;
              }
            }
          }
          else {
            *(uint *)(param_5 + 0x17) = 2;
          }
          pppppppuVar11 = (uint *******)param_6[2];
          uVar5 = pppppppuVar11 == (uint *******)0x1;
          if (0 < (long)pppppppuVar11) {
            param_5 = (uint *******)param_5[0x13];
            lVar15 = unaff_x19[3];
            func_0x0001078f2064();
            func_0x000107918820();
            param_6 = (uint ******)0x160;
            while (uVar5 = lVar15 == extraout_x8_05 + 0x30, !(bool)uVar5) {
              func_0x000107913d6c(*(undefined8 *)(lVar15 + 0x20));
              piVar16 = (int *)(extraout_x9_04 + (extraout_x8_06 & 0xf) * 0x160 + 0xb8);
              lVar22 = 2;
              do {
                if ((*piVar16 == 0) && (*(uint ********)(piVar16 + -8) == param_5)) {
                  *piVar16 = 2;
                }
                piVar16 = piVar16 + 0x28;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              func_0x00010002c7d4();
            }
          }
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = (long *)0x5;
        }
        goto LAB_10790ea78;
      }
LAB_10790e2dc:
      if ((long)ppppppuVar12 < 1) {
        pppppppuVar25 = pppppppuVar23 + 4;
        if ((*(uint *)pppppppuVar25 == 2) && (*(uint *)(pppppppuVar23 + 0x18) == 2)) {
          pppppppuStack_e8 = (uint *******)0x0;
          pppppppuStack_e0 = (uint *******)0x0;
          ppppppuStack_c8 = (uint ******)0x0;
          ppppppuStack_c0 = (uint ******)0x0;
          pppppppuVar20 = (uint *******)0x1;
          pppppppuStack_d8 = (uint *******)0x0;
          for (lVar15 = 0; uVar5 = lVar15 == 2, !(bool)uVar5; lVar15 = lVar15 + 1) {
            pppppppuVar11 = pppppppuVar23;
            func_0x00010790ecb8(&pppppppuStack_e8,pppppppuVar23,pppppppuVar25,*plStack_138,lVar15,
                                &lStack_130,*unaff_x19,unaff_x19[1],1);
            pppppppuVar25 = pppppppuVar25 + 0x14;
          }
          if (ppppppuStack_c8 == (uint ******)0x0) {
            func_0x00010790d0e0(&pppppppuStack_e8);
          }
          else {
            uVar8 = 0;
            pppppppuVar11 = pppppppuVar23;
            func_0x00010790bd4c();
            func_0x00010791853c(unaff_x19[2]);
            func_0x00010790ed7c();
            func_0x00010790d0e0(&pppppppuStack_e8);
            if ((uVar8 & 1) != 0) goto LAB_10790e6e4;
          }
          if (0 < (long)pppppppuVar23[2]) {
            pppppppuVar20 = (uint *******)*plStack_138;
            uVar8 = *(long *)(unaff_x19[2] + 0x20) + (long)pppppppuVar20;
            uVar27 = uVar8 & 0xf;
            lVar13 = *(long *)(*(long *)(unaff_x19[2] + 8) + (uVar8 >> 4) * 8);
            goto LAB_10790e2e4;
          }
        }
        pppppppuVar20 = pppppppuStack_140;
        uVar14 = 1;
        if (*(uint *)(pppppppuVar23 + 0x2b) != 1) {
          uVar14 = 0xffffffff;
        }
        uVar2 = 0;
        if (*(uint *)(pppppppuVar23 + 0x17) != 1) {
          uVar2 = uVar14;
        }
        *(uint *)pppppppuStack_140 = uVar2;
        uVar5 = 0;
        if (uVar2 != 0xffffffff) goto LAB_10790e6e4;
        if (*(uint *)(pppppppuVar23 + 0x17) != 3 || *(uint *)(pppppppuVar23 + 0x2b) != 3) {
          *(uint *)pppppppuStack_140 = 0xffffffff;
          lVar15 = 0;
          if (*(uint *)(pppppppuVar23 + 4) == 4 && *(uint *)(pppppppuVar23 + 0x18) == 4) {
            pppppppuStack_e8 = (uint *******)((ulong)pppppppuStack_e8 & 0xffffffffffff0000);
            uStack_a8 = (uint ******)((ulong)uStack_a8 & 0xffffffffffff0000);
            puVar17 = (undefined8 *)(lVar13 + uVar27 * 0x160 + 0x78);
            for (; lVar15 != 2; lVar15 = lVar15 + 1) {
              pppppppuVar23 = (uint *******)*puVar17;
              if ((pppppppuVar23 == (uint *******)0xffffffffffffffff) &&
                 (pppppppuVar23 = (uint *******)puVar17[-1],
                 pppppppuVar23 == (uint *******)0xffffffffffffffff)) {
                bVar6 = false;
              }
              else {
                uVar8 = *(long *)(unaff_x19[2] + 0x20) + (long)pppppppuVar23;
                lVar22 = *(long *)(*(long *)(unaff_x19[2] + 8) + (uVar8 >> 4) * 8) +
                         (uVar8 & 0xf) * 0x160;
                if ((*(long *)(lVar22 + 0x10) < 1) && (*(int *)(lVar22 + 0x20) != 2)) {
                  bVar6 = (*(int *)(lVar22 + 0x20) == 4 || *(int *)(lVar22 + 0xc0) == 2) ||
                          *(int *)(lVar22 + 0xc0) == 4;
                }
                else {
                  bVar6 = true;
                }
              }
              *(bool *)((long)&pppppppuStack_e8 + lVar15) = bVar6;
              bVar1 = false;
              if (pppppppuVar23 == param_2) {
                bVar1 = bVar6;
              }
              *(bool *)((long)&uStack_a8 + lVar15) = bVar1;
              puVar17 = puVar17 + 0x14;
            }
            uVar5 = (uint)(byte)uStack_a8 == (uint)uStack_a8._1_1_;
            if (!(bool)uVar5) {
              *(uint *)pppppppuStack_140 = (byte)uStack_a8 ^ 1;
              goto LAB_10790e6e4;
            }
            func_0x00010791766c();
            bVar6 = false;
            puVar18 = (uint *)(lVar13 + uVar27 * 0x160 + 0x60);
            uVar27 = extraout_x9_05;
            for (lVar15 = extraout_x8_07; lVar15 != 2; lVar15 = lVar15 + 1) {
              if (*(char *)((long)&pppppppuStack_e8 + lVar15) == '\x01') {
                if ((!bVar6) || ((int)*puVar18 < (int)uVar27)) {
                  *(uint *)pppppppuVar20 = (uint)lVar15;
                  uVar27 = (ulong)*puVar18;
                }
                bVar6 = true;
              }
              puVar18 = puVar18 + 0x28;
            }
          }
          else {
            bVar6 = false;
            ppppppuVar12 = pppppppuVar23[5];
            ppppppuVar7 = pppppppuVar23[0x19];
            ppppppuVar19 = pppppppuVar23[0x15];
            puVar18 = (uint *)(lVar13 + uVar27 * 0x160 + 0xb8);
            for (; lVar15 != 2; lVar15 = lVar15 + 1) {
              if ((puVar18[-0x26] == 2) && ((*puVar18 & 0xfffffffe) != 2)) {
                if (bVar6) {
                  if (ppppppuVar12 == ppppppuVar7) {
                    bVar6 = *(long *)(puVar18 + -0x22) == lStack_128;
                    if (ppppppuVar19 == (uint ******)0xffffffffffffffff ||
                        ppppppuVar19 != pppppppuVar23[0x29]) goto LAB_10790e818;
LAB_10790e804:
                    if (!bVar6) goto LAB_10790e81c;
                  }
                  else {
                    bVar6 = *(long *)(puVar18 + -0x24) == lStack_130;
                    if (ppppppuVar19 != (uint ******)0xffffffffffffffff &&
                        ppppppuVar19 == pppppppuVar23[0x29]) goto LAB_10790e804;
LAB_10790e818:
                    if (bVar6) goto LAB_10790e81c;
                  }
                }
                else {
LAB_10790e81c:
                  *(uint *)pppppppuStack_140 = (uint)lVar15;
                }
                bVar6 = true;
              }
              puVar18 = puVar18 + 0x28;
            }
          }
          uVar5 = 1;
          if (bVar6) goto LAB_10790e6e4;
        }
      }
      else {
LAB_10790e2e4:
        ppppppuVar7 = (uint ******)unaff_x19[3];
        pppppppuVar11 = *(uint ********)(lVar13 + uVar27 * 0x160 + 0x10);
        func_0x0001078f2064();
        lStack_88 = 0;
        uStack_80 = 0;
        param_2 = (uint *******)(ppppppuVar7 + 5);
        uStack_a8 = (uint ******)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        param_6 = ppppppuVar7 + 6;
        ppppppuVar12 = *param_2;
        while (ppppppuVar12 != param_6) {
          pppppppuVar23 = (uint *******)ppppppuVar12[4];
          func_0x00010791395c();
          pppppppuVar25 = (uint *******)(extraout_x8_02 + (extraout_x9_01 & 0xffffffff) * 0x160);
          if (((ulong)pppppppuVar25[3] & 1) == 0) {
            pppppppuVar21 = pppppppuVar25 + 4;
            for (lVar15 = 0; lVar15 != 2; lVar15 = lVar15 + 1) {
              ppppppuVar7 = (uint ******)&uStack_a8;
              pppppppuVar11 = pppppppuVar25;
              func_0x00010790ecb8(ppppppuVar7,pppppppuVar25,pppppppuVar21,pppppppuVar23,lVar15,
                                  &lStack_130,*unaff_x19,unaff_x19[1],pppppppuVar23 == pppppppuVar20
                                 );
              pppppppuVar21 = pppppppuVar21 + 0x14;
            }
          }
          func_0x000107915b68();
          ppppppuVar12 = ppppppuVar7;
        }
        if (lStack_88 != 0) {
          func_0x00010791395c();
          pppppppuVar11 = (uint *******)(extraout_x8_03 + (extraout_x9_02 & 0xffffffff) * 0x160);
          pppppppuVar23 = (uint *******)&uStack_a8;
          func_0x00010790bd4c();
          lVar15 = unaff_x19[2];
          pppppppuStack_e8 = param_2;
          pppppppuStack_d8 = (uint *******)0x0;
          pppppppuStack_e0 = (uint *******)0x0;
          ppppppuStack_c8 = (uint ******)0x0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          ppppppuStack_c0 = (uint ******)0x0;
          ppppppuVar12 = param_6;
          pppppppuVar25 = (uint *******)*param_2;
          while (ppppppuVar7 = ppppppuStack_c0, param_6 = ppppppuStack_c8,
                pppppppuVar4 = pppppppuStack_d8, pppppppuVar21 = pppppppuStack_e0,
                pppppppuVar25 != param_2 + 1) {
            pppppppuVar25 = (uint *******)pppppppuVar25[4];
            uVar27 = *(long *)(lVar15 + 0x20) + (long)pppppppuVar25;
            lVar22 = *(long *)(*(long *)(lVar15 + 8) + (uVar27 >> 4) * 8);
            uVar27 = uVar27 & 0xf;
            lVar24 = lVar22 + uVar27 * 0x160;
            pppppppuVar21 = pppppppuVar20;
            param_6 = ppppppuVar12;
            if ((*(byte *)(lVar24 + 0x18) & 1) == 0) {
              if ((*(int *)(lVar24 + 0x20) == 2) && (*(int *)(lVar24 + 0xc0) == 2))
              goto LAB_10790e634;
              lVar22 = lVar22 + uVar27 * 0x160;
              pppppppuVar21 = (uint *******)(lVar22 + 0x118);
              param_6 = (uint ******)(lVar22 + 0x78);
              for (lVar22 = 0; param_2 = pppppppuStack_e8, lVar22 != 2; lVar22 = lVar22 + 1) {
                param_2 = (uint *******)*param_6;
                if (param_2 == (uint *******)0xffffffffffffffff) {
                  param_2 = (uint *******)param_6[-1];
                }
                iVar3 = *(int *)(param_6 + -0xb);
                if (iVar3 == 4) {
LAB_10790e46c:
                  if (param_2 == pppppppuVar25) goto LAB_10790e634;
                  uStack_f0 = 0xffffffffffffffff;
                  pppppppuVar23 = (uint *******)&pppppppuStack_e0;
                  pppppppuVar11 = (uint *******)&pppppppuStack_108;
                  pppppppuStack_108 = pppppppuVar25;
                  uStack_100 = (int)lVar22;
                  pppppppuStack_f8 = param_2;
                  func_0x00010790eee8();
                }
                else if (iVar3 == 3) {
                  pppppppuVar20 = (uint *******)*pppppppuVar21;
                  if (pppppppuVar20 == (uint *******)0xffffffffffffffff) {
                    pppppppuVar20 = (uint *******)pppppppuVar21[-1];
                  }
                  if ((param_2 != pppppppuVar20) &&
                     (pppppppuVar23 = pppppppuStack_e8, pppppppuVar11 = param_2,
                     func_0x0001078f1ad8(), pppppppuVar23 == (uint *******)0x0)) {
                    uStack_f0 = 0xffffffffffffffff;
                    pppppppuVar23 = &ppppppuStack_c8;
                    pppppppuVar11 = (uint *******)&pppppppuStack_108;
                    pppppppuStack_108 = pppppppuVar25;
                    uStack_100 = (int)lVar22;
                    pppppppuStack_f8 = param_2;
                    func_0x00010790eee8();
                  }
                }
                else if (iVar3 == 2) goto LAB_10790e46c;
                pppppppuVar21 = pppppppuVar21 + -0x14;
                param_6 = param_6 + 0x14;
              }
            }
            func_0x000107915b68();
            pppppppuVar20 = pppppppuVar21;
            ppppppuVar12 = param_6;
            pppppppuVar25 = pppppppuVar23;
          }
          if (ppppppuStack_c8 != ppppppuStack_c0) {
            while (pppppppuVar21 != pppppppuVar4) {
              func_0x000107917fd4();
            }
            while (pppppppuVar20 = pppppppuVar21, param_6 != ppppppuVar7) {
              func_0x000107917fd4();
            }
            for (; ppppppuVar12 = param_6, pppppppuVar20 != pppppppuVar4;
                pppppppuVar20 = pppppppuVar20 + 4) {
              for (; ppppppuVar12 != ppppppuVar7; ppppppuVar12 = ppppppuVar12 + 4) {
                if (((uint ******)ppppppuVar12[2] == pppppppuVar20[2]) &&
                   ((uint ******)ppppppuVar12[3] == pppppppuVar20[3])) goto LAB_10790e634;
              }
            }
          }
          uStack_b0 = 1;
          uStack_164 = 0xffffffff;
          ppppppuVar12 = (uint ******)0xffffffffffffffff;
          param_6 = (uint ******)0xffffffffffffffff;
          for (; pppppppuVar20 = pppppppuStack_140, uVar5 = pppppppuVar21 == pppppppuVar4,
              !(bool)uVar5; pppppppuVar21 = pppppppuVar21 + 4) {
            ppppppuVar7 = pppppppuVar21[2];
            func_0x0001079177ec();
            func_0x0001078f1ad8();
            if (pppppppuVar23 == (uint *******)0x0) {
              if ((-1 < (long)param_6) && (uVar5 = ppppppuVar12 == ppppppuVar7, !(bool)uVar5))
              goto LAB_10790e63c;
              param_6 = *pppppppuVar21;
              uStack_164 = *(uint *)(pppppppuVar21 + 1);
              ppppppuVar12 = ppppppuVar7;
            }
          }
          if ((long)param_6 < 0) goto LAB_10790e63c;
          *plStack_138 = (long)param_6;
          *(uint *)pppppppuStack_140 = uStack_164;
          func_0x000107917d2c();
          func_0x000107917c30();
          func_0x000107917e6c();
          goto LAB_10790e664;
        }
        func_0x000107917e6c();
      }
LAB_10790ea68:
      param_5 = pppppppuVar20;
      param_7 = uStack_148._4_4_;
      goto LAB_10790ea70;
    }
    uVar14 = 3;
    param_5 = pppppppuVar20;
  }
  uVar5 = param_7 == 0;
  if ((bool)uVar5) {
    uVar14 = uVar14 + 1;
  }
  plVar9 = (long *)(ulong)uVar14;
LAB_10790ea78:
  func_0x000107913564(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    plVar10 = plVar9;
    func_0x000107914aac();
    ppppppuVar12 = (uint ******)&UNK_10790ead0;
    func_0x000107917aac();
    puStack_110 = &stack0xfffffffffffffff0;
    pppppppuStack_108 = (uint *******)ppppppuVar12;
    func_0x000107914d64();
    func_0x000107918644();
    pppppppuVar20 = (uint *******)(extraout_x10 >> 3);
    if (pppppppuVar20 < pppppppuVar11) {
      func_0x000107918630();
      if ((uint ******)(extraout_x9_07 >> 3) < param_6) {
        func_0x000107914d7c();
        func_0x0001079032d0();
        lVar15 = *plVar9;
        lVar22 = plVar9[1];
        uStack_148 = param_2;
        if (plVar10 == (long *)0x0) {
          pppppppuVar11 = (uint *******)0x0;
        }
        else {
          func_0x000107903354();
        }
        puStack_160 = (undefined8 *)((long)plVar10 + (lVar22 - lVar15));
        ppppppuStack_150 = (uint ******)(plVar10 + (long)pppppppuVar11);
        puStack_158 = puStack_160 + (long)param_6;
        puVar17 = puStack_160;
        for (lVar15 = (long)param_5 * 8 + (long)pppppppuVar20 * -8; lVar15 != 0;
            lVar15 = lVar15 + -8) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        func_0x000107915724();
        func_0x000107903310();
        func_0x00010790337c(auStack_168);
      }
      else {
        puVar17 = extraout_x8_08;
        for (lVar15 = (long)param_5 * 8 + (long)pppppppuVar20 * -8; lVar15 != 0;
            lVar15 = lVar15 + -8) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        plVar9[1] = (long)(extraout_x8_08 + (long)param_6);
      }
    }
    else if (param_5 < pppppppuVar20) {
      plVar9[1] = extraout_x9_06 + (long)param_5 * 8;
    }
    return;
  }
  func_0x000107916c24();
  return;
LAB_10790e634:
  uVar5 = true;
  uStack_b0 = 0;
LAB_10790e63c:
  pppppppuVar20 = pppppppuVar21;
  func_0x00010791853c(unaff_x19[2]);
  func_0x00010790ed7c();
  func_0x000107917d2c();
  func_0x000107917c30();
  func_0x000107917e6c();
  if (((ulong)pppppppuVar23 & 1) == 0) goto LAB_10790ea68;
LAB_10790e664:
  if ((uStack_148._4_4_ != 0) && (func_0x00010791829c(), (bool)uVar5)) {
    *(uint *)pppppppuVar20 = (uint)puStack_160;
  }
  goto LAB_10790e6e4;
}



/* Entry: 10790efbc; end: 10790efdf;  */

void FUN_10790efbc(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 10790f338; end: 10790f3eb;  */

ulong FUN_10790f338(ulong param_1)

{
  undefined1 in_ZR;
  
  func_0x000107913fec();
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if ((bool)in_ZR) {
LAB_10790f398:
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x00010790f620();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914d88();
      func_0x00010790f620();
      goto LAB_10790f3c0;
    }
  }
  else {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x00010790f620();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x00010790f700();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107914aa0();
        func_0x00010790f700();
        if ((param_1 & 1) != 0) goto LAB_10790f398;
      }
    }
  }
  param_1 = 0;
LAB_10790f3c0:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 10790fa58; end: 10790fa5f;  */

undefined8 FUN_10790fa58(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if ((bool)in_ZR) {
code_r0x00010790fb28:
    func_0x000107915a78();
    if ((bool)in_ZR) {
      func_0x0001079176fc();
code_r0x00010790fb94:
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
code_r0x00010790fb9c:
        uVar2 = 0x62 < unaff_x20;
        if ((99 < unaff_x20) || (func_0x000107914200(), !(bool)uVar2)) goto code_r0x00010790fbbc;
        func_0x0001079137b0();
        func_0x00010790fc50();
        if ((param_1 & 1) == 0) goto code_r0x00010790fc00;
      }
      else {
code_r0x00010790fbbc:
        func_0x0001079145ec();
        func_0x00010790f9e8();
        if ((int)param_1 == 0) goto code_r0x00010790fc00;
      }
      func_0x0001079141f0();
      iVar3 = (int)param_1;
      if (((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107914280();
        iVar3 = (int)param_1;
        if (!bVar1) goto code_r0x00010790fbd0;
        func_0x0001079137c8();
        func_0x00010790fc50();
        if ((param_1 & 1) == 0) goto code_r0x00010790fc00;
      }
      else {
code_r0x00010790fbd0:
        func_0x0001079142f0();
        func_0x00010790f9e8();
        if (iVar3 == 0) goto code_r0x00010790fc00;
      }
      uVar4 = 1;
      goto code_r0x00010790fc04;
    }
    func_0x0001079156e4();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
      func_0x000107916824();
      func_0x000107913840();
      func_0x00010790fc50();
      if ((int)param_1 != 0) {
        func_0x000107913828();
        func_0x00010790fc50();
        if ((param_1 & 1) != 0) goto code_r0x00010790fb9c;
      }
    }
    else {
      func_0x0001079145fc();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
        func_0x0001079142e0();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) goto code_r0x00010790fb94;
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x00010790fa98;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x00010790fc50();
      if ((param_1 & 1) != 0) goto code_r0x00010790facc;
    }
    else {
code_r0x00010790fa98:
      func_0x0001079142a0();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
code_r0x00010790facc:
        func_0x000107914220();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x0001079142c0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107916834();
                func_0x000107913810();
                func_0x00010790fc50();
                if ((int)param_1 != 0) {
                  func_0x0001079137f8();
                  func_0x00010790fc50();
                  if ((param_1 & 1) != 0) goto code_r0x00010790fb28;
                }
                goto code_r0x00010790fc00;
              }
            }
          }
        }
        func_0x000107914290();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto code_r0x00010790fb28;
        }
      }
    }
  }
code_r0x00010790fc00:
  uVar4 = 0;
code_r0x00010790fc04:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar4;
}



/* Entry: 10791059c; end: 10791076f;  */

void FUN_10791059c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar4;
  long unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong in_stack_00000008;
  
  func_0x000107916c08();
  func_0x000107914424();
  func_0x0001079149ec((extraout_x8 >> 3) * 0x17 + -1);
  if (!(bool)in_ZR) goto LAB_1079106cc;
  bVar1 = 0x16 < extraout_x8_00;
  uVar2 = extraout_x8_00 - 0x17 == 0;
  if (bVar1) {
    func_0x0001079150b8();
  }
  else {
    func_0x000107914998(extraout_x8_00 - 0x17);
    if (bVar1) {
      func_0x000107914980();
      func_0x00010791083c();
      func_0x000107914554();
      __Znwm();
      uVar2 = 0;
      uVar4 = unaff_x22;
      if (unaff_x24 == unaff_x23 * 8) {
        uVar2 = unaff_x28 == unaff_x27;
        if ((bool)uVar2) {
          func_0x000107918610();
          func_0x00010791083c(1);
          func_0x00010791451c();
          func_0x000107910818();
          func_0x0001079140f0();
          func_0x000107910888();
          func_0x000107915010();
          uVar4 = unaff_x23;
        }
        else {
          func_0x0001079140b0();
        }
      }
      func_0x000107914958();
      while (func_0x000107918764(), !(bool)uVar2) {
        if (unaff_x22 == unaff_x21) {
          uVar2 = uVar4 == unaff_x26;
          if (uVar4 < unaff_x26) {
            func_0x000107914584();
            uVar4 = uVar4 + extraout_x8_01 * 8;
            if (!(bool)uVar2) {
              func_0x00010791548c();
            }
          }
          else {
            uVar2 = unaff_x26 - unaff_x21 == 0;
            lVar3 = (long)(unaff_x26 - unaff_x21) >> 2;
            if ((bool)uVar2) {
              lVar3 = 1;
            }
            func_0x00010791083c(lVar3);
            func_0x0001079139dc(lVar3 * 2 + 6);
            func_0x000107915f88();
            func_0x000107910818();
            func_0x000107914920();
            func_0x000107910888();
            func_0x000107916300();
          }
        }
        else {
          uVar2 = 0;
        }
        func_0x0001079163f0();
      }
      func_0x0001079140d0();
      func_0x000107910864();
      func_0x000107910888(&stack0x00000028);
      unaff_x26 = in_stack_00000008;
      goto LAB_1079106cc;
    }
    __Znwm(0xfd0);
    func_0x0001079186f4();
    if (!(bool)uVar2) {
      func_0x000107918770();
      goto LAB_1079106cc;
    }
    if (unaff_x27 == unaff_x23) {
      func_0x000107914538();
      func_0x00010791083c();
      func_0x0001079139dc(unaff_x19 + 6);
      func_0x0001079186dc();
      func_0x000107910818();
      func_0x000107914740();
      func_0x000107910888();
    }
    func_0x000107915178();
  }
  func_0x0001079107a8();
LAB_1079106cc:
  func_0x000107910770();
  _memcpy(param_2,unaff_x26,0xb0);
  func_0x0001079163d8();
  return;
}



/* Entry: 107910a2c; end: 107910c67;  */

void FUN_107910a2c(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  uint *extraout_x10;
  uint *puVar10;
  uint *extraout_x10_00;
  int iVar11;
  ulong uVar12;
  uint *unaff_x24;
  long unaff_x26;
  ulong uVar13;
  uint *unaff_x28;
  uint *puStack_220;
  long lStack_218;
  uint *puStack_210;
  uint auStack_1e8 [46];
  ulong uStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f0;
  uint *puStack_e8;
  uint *puStack_c0;
  uint *puStack_28;
  
  func_0x000107915f10();
  func_0x000107917140();
  if ((((extraout_x8 & 1) == 0) && ((unaff_x24[0x14] & 1) == 0)) &&
     (func_0x000107918140(), (extraout_x8_00 & 1) == 0)) {
    uVar1 = unaff_x28[0xb];
    if (-1 < *(long *)(unaff_x24 + 6)) {
      func_0x000107916bf8(**(undefined8 **)unaff_x28);
    }
    func_0x000107916a1c();
    if (-1 < *(long *)(extraout_x9 + 0x18)) {
      func_0x000107915928(extraout_x8_01 + *(long *)(extraout_x9 + 0x10) * 0x30);
    }
    func_0x0001079164e4();
    uVar12 = (ulong)*unaff_x24;
    uVar13 = (ulong)*puStack_210;
    uVar8 = *(ulong *)(unaff_x24 + 0xe);
    func_0x000107914184();
    func_0x0001079112a0();
    func_0x000107917648();
    func_0x000107914df8();
    func_0x0001079169d0();
    puVar10 = extraout_x10;
    while (puStack_28 + 2 != puVar10) {
      iVar11 = (int)uVar12;
      cVar2 = SCARRY4(iVar11,1);
      cVar3 = iVar11 + 1 < 0;
      if (iVar11 == -1) {
        func_0x000107915d54(*puStack_28);
        if (cVar3 != cVar2) {
          return;
        }
      }
      else {
        cVar2 = SBORROW4(iVar11,1);
        cVar3 = iVar11 + -1 < 0;
        bVar4 = iVar11 == 1;
        if ((bVar4) && (func_0x000107916440(), !bVar4 && cVar3 == cVar2)) {
          return;
        }
      }
      func_0x000107915048();
      func_0x000107915e20();
      func_0x0001079112a0();
      puStack_e8 = puStack_c0;
      func_0x000107916180();
      func_0x000107916180();
      func_0x000107917a08();
      puVar10 = puStack_c0;
      while (puStack_28 = puVar10 + 2, puStack_28 != puStack_220) {
        iVar11 = (int)uVar13;
        cVar2 = SCARRY4(iVar11,1);
        cVar3 = iVar11 + 1 < 0;
        uVar5 = iVar11 == -1;
        if ((bool)uVar5) {
          func_0x000107915d54();
          uVar9 = uVar8;
          if (cVar3 != cVar2) break;
        }
        else {
          uVar5 = 0;
          uVar9 = uVar8;
          if ((iVar11 == 1) &&
             (uVar5 = *puVar10 == unaff_x24[10], !(bool)uVar5 && (int)unaff_x24[10] <= (int)*puVar10
             )) break;
        }
        func_0x000107916fd0();
        if ((bool)uVar5) {
          cVar2 = SBORROW8((long)unaff_x28,(long)unaff_x24);
          cVar3 = (long)unaff_x28 - (long)unaff_x24 < 0;
          if (((unaff_x28 != unaff_x24) || ((char)uVar1 == '\0')) ||
             ((uVar8 = uVar9, puVar6 = puVar10, uVar13 = 1, unaff_x26 != 0 &&
              ((unaff_x24 = unaff_x28, lStack_218 != 0 ||
               (func_0x000107917900(), uVar8 = uVar9, uVar13 = 1, cVar3 != cVar2))))))
          goto LAB_107910be4;
        }
        else {
LAB_107910be4:
          puStack_118 = puStack_e8;
          uStack_100 = 0;
          uStack_f0 = 0;
          puVar6 = auStack_1e8;
          uStack_130 = uVar12;
          puStack_128 = puVar10;
          puStack_120 = puStack_28;
          func_0x0001079104b0();
          func_0x000107914fa8();
          func_0x0001079152e8();
          func_0x000107910428();
          uVar7 = 1;
          uVar8 = uVar9;
          func_0x000107910770();
          func_0x000107916750();
          uVar13 = uVar9;
          if ((uVar7 & 1) != 0) {
            return;
          }
        }
        uVar12 = uVar12 + 1;
        func_0x000107916180();
        func_0x0001079181c8();
        puVar10 = puVar6;
      }
      func_0x000107914300();
      func_0x000107917774();
      puVar10 = extraout_x10_00;
    }
  }
  return;
}



/* Entry: 1079110a8; end: 107911297;  */

undefined8 FUN_1079110a8(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if ((bool)in_ZR) {
LAB_107911170:
    func_0x000107915a78();
    if ((bool)in_ZR) {
      func_0x0001079176fc();
LAB_1079111dc:
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
LAB_1079111e4:
        uVar2 = 0x62 < unaff_x20;
        if ((99 < unaff_x20) || (func_0x000107914200(), !(bool)uVar2)) goto LAB_107911204;
        func_0x0001079137b0();
        func_0x000107911298();
        if ((param_1 & 1) == 0) goto LAB_107911248;
      }
      else {
LAB_107911204:
        func_0x0001079145ec();
        func_0x000107911030();
        if ((int)param_1 == 0) goto LAB_107911248;
      }
      func_0x0001079141f0();
      iVar3 = (int)param_1;
      if (((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107914280();
        iVar3 = (int)param_1;
        if (!bVar1) goto LAB_107911218;
        func_0x0001079137c8();
        func_0x000107911298();
        if ((param_1 & 1) == 0) goto LAB_107911248;
      }
      else {
LAB_107911218:
        func_0x0001079142f0();
        func_0x000107911030();
        if (iVar3 == 0) goto LAB_107911248;
      }
      uVar4 = 1;
      goto LAB_10791124c;
    }
    func_0x0001079156e4();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
      func_0x000107916824();
      func_0x000107913840();
      func_0x000107911298();
      if ((int)param_1 != 0) {
        func_0x000107913828();
        func_0x000107911298();
        if ((param_1 & 1) != 0) goto LAB_1079111e4;
      }
    }
    else {
      func_0x0001079145fc();
      func_0x000107911030();
      if ((int)param_1 != 0) {
        func_0x0001079142e0();
        func_0x000107911030();
        if ((int)param_1 != 0) goto LAB_1079111dc;
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_1079110e0;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x000107911298();
      if ((param_1 & 1) != 0) goto LAB_107911114;
    }
    else {
LAB_1079110e0:
      func_0x0001079142a0();
      func_0x000107911030();
      if ((int)param_1 != 0) {
LAB_107911114:
        func_0x000107914220();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x0001079142c0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107916834();
                func_0x000107913810();
                func_0x000107911298();
                if ((int)param_1 != 0) {
                  func_0x0001079137f8();
                  func_0x000107911298();
                  if ((param_1 & 1) != 0) goto LAB_107911170;
                }
                goto LAB_107911248;
              }
            }
          }
        }
        func_0x000107914290();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto LAB_107911170;
        }
      }
    }
  }
LAB_107911248:
  uVar4 = 0;
LAB_10791124c:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar4;
}



/* Entry: 1079114dc; end: 107911503;  */

void FUN_1079114dc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while( true ) {
    if (plVar1 == (long *)param_1[1]) {
      return;
    }
    if (*plVar1 != plVar1[1]) break;
    *param_1 = plVar1 + 3;
    plVar1 = plVar1 + 3;
  }
  param_1[2] = *plVar1;
  return;
}



/* Entry: 10791180c; end: 107911833;  */

void FUN_10791180c(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107911834(*unaff_x19);
  }
  return;
}



/* Entry: 107911cd4; end: 107911d07;  */

void FUN_107911cd4(undefined8 param_1)

{
  undefined1 in_ZR;
  long *unaff_x21;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107917f18(param_1,*unaff_x21 + 0x28);
    unaff_x21 = unaff_x21 + 1;
  }
  return;
}



/* Entry: 10791227c; end: 107912283;  */

void FUN_10791227c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  func_0x0001079136f4();
  func_0x000107906fdc();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107913338();
  func_0x000107915ca8();
  puVar5 = auStack_70;
  func_0x000107913ab0(auStack_60);
  func_0x000107911b44();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x000107911ea8;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x000107911e18:
    func_0x0001079142a0();
    func_0x000107911fd4();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto code_r0x000107911e18;
    func_0x000107912038(auStack_b8);
    func_0x000107916d80();
    func_0x000107913668();
    func_0x000107912030();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      puVar4 = auStack_b8;
      func_0x000107912038();
      puStack_50 = puVar4;
      puStack_48 = puVar5;
      func_0x000107913a9c(&puStack_50);
      func_0x000107912030();
      func_0x000107913a88(&puStack_50);
      func_0x000107912030();
      goto code_r0x000107911ea8;
    }
  }
  func_0x000107914290();
  func_0x000107911fd4();
  func_0x0001079142b0();
  func_0x000107911fd4();
code_r0x000107911ea8:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      puVar4 = auStack_100;
      func_0x000107912038();
      puStack_50 = puVar4;
      puStack_48 = puVar5;
      func_0x000107914aa0(&puStack_50,&uStack_88,auStack_100);
      func_0x000107912030();
      func_0x000107913a4c(&puStack_50);
      func_0x000107912030();
    }
    else {
      func_0x0001079147a8(&uStack_88);
      func_0x0001079142e0();
      func_0x000107911fd4();
    }
  }
  func_0x000107914d34(uStack_80);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x000107913cc4(auStack_60,&uStack_88);
    func_0x000107912030();
  }
  else {
    func_0x0001079154ec(&uStack_88);
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x000107913a60(auStack_70);
    func_0x000107912030();
  }
  else {
    func_0x0001079142f0();
    func_0x000107911fd4();
  }
  func_0x000107917268();
  func_0x0001079171a8();
  func_0x000107916c40();
  func_0x0001079172a4();
  func_0x000107917348();
  func_0x000107916d78();
  return;
}



/* Entry: 1079126fc; end: 107912793;  */

long FUN_1079126fc(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000107903704(&lStack_28);
  func_0x000107903640(param_1);
  return param_1;
}



/* Entry: 107912bcc; end: 107912bfb;  */

void FUN_107912bcc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 unaff_x19;
  ulong unaff_x20;
  
  func_0x000107912b44(*param_1);
  func_0x000107914d64(*param_1,param_3);
  while( true ) {
    if (unaff_x20 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (unaff_x19,(int)(char)unaff_x20 | 0xffffff80);
    unaff_x20 = unaff_x20 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
            (unaff_x19);
  return;
}



/* Entry: 107912e6c; end: 107912e8b;  */

void FUN_107912e6c(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_1109ea158;
  return;
}



/* Entry: 10791319c; end: 1079131fb;  */

void FUN_10791319c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000107914d64();
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  uStack_28 = param_2;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ea180;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  uStack_28 = 0;
  func_0x00010791329c(&uStack_28);
  return;
}



/* Entry: 1079132c0; end: 107914df7;  */

void FUN_1079132c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107913274(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10791893c; end: 1079189cf;  */

void FUN_10791893c(void)

{
  return;
}



/* Entry: 107918d10; end: 107918da3;  */

long FUN_107918d10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea240;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 107918fcc; end: 107918fd7;  */

long FUN_107918fcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea368;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 107919308; end: 10791935b;  */

void FUN_107919308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001079193fc();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
  }
  else {
    func_0x0001079296ec();
    *unaff_x20 = param_1;
    unaff_x20[1] = param_2;
    unaff_x20[2] = param_3;
    unaff_x20[3] = param_4;
  }
  *(bool *)(unaff_x20 + 4) = unaff_x19 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107919588; end: 10791958f; -[SCNSnapMapsSdkCMAnimationOptions velocity] */

undefined8 FUN_107919588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107919834; end: 107919893;  */

void FUN_107919834(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar2 = param_8[1];
    uVar1 = *param_8;
    param_1[8] = param_8[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}



/* Entry: 107919a34; end: 107919b63;  */

void FUN_107919a34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d5628;
  _objc_alloc(PTR_PTR_1126d5628);
  lVar2 = param_1;
  func_0x000107920568(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  func_0x00010791974c(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x60;
  func_0x00010792035c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x80;
  func_0x00010791cadc(lVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xa0;
  func_0x000107928d48(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd420(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,param_1);
  func_0x000107919b64();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107919cf0; end: 107919d33; -[SCNSnapMapsSdkCMCameraViewport .cxx_destruct] */

void FUN_107919cf0(long param_1)

{
  func_0x000107919d34(param_1 + 0x28);
  func_0x000107919d34(param_1 + 0x20);
  func_0x000107919d34(param_1 + 0x18);
  func_0x000107919d34(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107919f88; end: 10791a01b;  */

long FUN_107919f88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea490;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791a310; end: 10791a3ef; -[SCNSnapMapsSdkCameraManager moveToBounds:cameraOptions:animationOptions:] */

void FUN_10791a310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010791af48();
  func_0x00010791afec();
  func_0x00010791b104();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000107920294();
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x00010791b094();
  func_0x00010791affc();
  func_0x00010791b018(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010791afa4();
  func_0x0001001148fc(auStack_80);
  func_0x00010791b024();
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a874; end: 10791a8c7; -[SCNSnapMapsSdkCameraManager setGestureInProgress:] */

void FUN_10791a874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x00010791b058(param_1,param_3);
  (**(code **)(extraout_x8 + 0x60))();
  return;
}



/* Entry: 10791ac6c; end: 10791aceb; -[SCNSnapMapsSdkCameraManager addOnCameraChangeEndListener:] */

void FUN_10791ac6c(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791b0b8();
  func_0x00010791b0ac(*(undefined8 *)(*plVar1 + 0xa0));
  func_0x00010791b080();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791af2c; end: 10791b11f;  */

undefined1 * FUN_10791af2c(void)

{
  char in_stack_00000078;
  
  if (in_stack_00000078 == '\x01') {
    func_0x0001072835ec(&stack0x00000068);
  }
  return &stack0x00000008;
}



/* Entry: 10791b310; end: 10791b403;  */

void FUN_10791b310(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ea608;
  puVar4[3] = &PTR_DAT_1109ea6d0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010791ba44();
  puVar4[3] = &PTR_DAT_1109ea658;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791b9a4(&uStack_50);
  return;
}



/* Entry: 10791b5b0; end: 10791b627;  */

undefined1  [16] FUN_10791b5b0(undefined8 param_1,ulong param_2)

{
  undefined8 unaff_x21;
  undefined1 auVar1 [16];
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x00010011b600();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = unaff_x21;
  return auVar1;
}



/* Entry: 10791b904; end: 10791b993;  */

long FUN_10791b904(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea5c8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010791ba14();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791bc94; end: 10791bc9f;  */

long FUN_10791bc94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea790;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791bf9c; end: 10791bf9f;  */

void FUN_10791bf9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791c200; end: 10791c21b;  */

void FUN_10791c200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791c4c0; end: 10791c52b;  */

void FUN_10791c4c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c560(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791c7d4; end: 10791c7e7;  */

void FUN_10791c7d4(void)

{
  func_0x00010791ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791ca50; end: 10791cadb;  */

undefined8 FUN_10791ca50(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c274140(param_2);
  func_0x00010c08e360(param_2);
  func_0x00010bf1fec0(param_2);
  func_0x00010c140820(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10791cc48; end: 10791cd47;  */

void FUN_10791cc48(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eac80;
  puVar4[3] = &PTR_DAT_1109ead28;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eacd0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x00010791cfb8(&uStack_50);
  return;
}



/* Entry: 10791cfa8; end: 10791cfb7;  */

void FUN_10791cfa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eac80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791d10c; end: 10791d113; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters longitude] */

undefined8 FUN_10791d10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10791d324; end: 10791d5f7;  */

void FUN_10791d324(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_88;
  int iStack_80;
  
  puVar1 = PTR_PTR_1126d5650;
  _objc_alloc(PTR_PTR_1126d5650);
  func_0x00010791d5f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_1 + 0x58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x70;
  func_0x00010791d6b8(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010088f8a4(param_1 + 0x98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = (long *)(param_1 + 0xc0);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    func_0x00010791d6b8(plVar5 + 5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001001011a4(plVar5 + 2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar3);
    func_0x00010791d784();
    func_0x00010791d794();
  }
  func_0x00010bf51e00(puVar3);
  func_0x00010791d79c();
  uVar6 = *(undefined4 *)(param_1 + 0xd8);
  uVar7 = *(undefined4 *)(param_1 + 0xdc);
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x000107928910(param_1 + 0xe0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x138) == '\x01') {
    lVar4 = param_1 + 0x108;
    FUN_1079316a8(lVar4);
    func_0x000100291d50(&uStack_88,lVar4);
    func_0x00010b4d1758(param_1 + 0x108,uStack_88,iStack_80 - (int)uStack_88);
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c008360();
    func_0x00010791d784();
    func_0x000100100fec(&uStack_88);
  }
  func_0x00010c0118c0(uVar6,uVar7,puVar1);
  func_0x00010791d7ac();
  func_0x00010791d79c();
  func_0x00010791d794();
  func_0x00010791d78c();
  _objc_release(lVar2);
  func_0x00010791d7a4();
  func_0x00010791d768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10791d9c8; end: 10791d9cf; -[SCNSnapMapsSdkFeatureDescriptor components] */

undefined8 FUN_10791d9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10791da5c; end: 10791dc23;  */

void FUN_10791da5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfa06a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  uVar2 = param_2;
  func_0x00010c2a4a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_70);
  uVar3 = param_2;
  func_0x00010c25dfa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_88);
  uVar4 = param_2;
  func_0x00010bfb3ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fef20(&uStack_a0);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  param_1[10] = uStack_98;
  param_1[9] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001000ff1ac(&uStack_a0);
  _objc_release(uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10791ddd0; end: 10791de87;  */

void FUN_10791ddd0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eadc8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791de88);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10791e60c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791e0e8; end: 10791e17b;  */

long FUN_10791e0e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eadc8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791e60c; end: 10791e633;  */

long FUN_10791e60c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791e748; end: 10791e74f; -[SCNSnapMapsSdkGestureInfo lon] */

undefined4 FUN_10791e748(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10791eaf4; end: 10791eb87;  */

long FUN_10791eaf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eaf00;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791ec88; end: 10791ec8f; -[SCNSnapMapsSdkInitialViewportInfo friendLocationsAvailable] */

undefined1 FUN_10791ec88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10791ef20; end: 10791efb3;  */

long FUN_10791ef20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb028;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10791f1c0; end: 10791f1cb;  */

long FUN_10791f1c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb140;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010791f428();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791f444; end: 10791f4bb; -[SCNSnapMapsSdkInputManager initWithCpp:] */

undefined1 * FUN_10791f444(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8dc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010791f90c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010791f888(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10791f7a4; end: 10791f817;  */

void FUN_10791f7a4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb210;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010791f90c();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10791f818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791f968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791fc48; end: 10791fcbf; +[SCNSnapMapsSdkInspector create] */

void FUN_10791fc48(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010729f220(auStack_30);
  func_0x00010791fcc0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791fe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791ff84; end: 107920083;  */

void FUN_10791ff84(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb2c8;
  puVar4[3] = &PTR_DAT_1109eb350;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb318;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x000107920254(&uStack_50);
  return;
}



/* Entry: 107920244; end: 107920253;  */

void FUN_107920244(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079204cc; end: 1079204d3; -[SCNSnapMapsSdkLatLngBoundsDouble ne] */

undefined8 FUN_1079204cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10792064c; end: 1079206bf; +[SCNSnapMapsSdkMapSdk create] */

void FUN_10792064c(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072a1c7c(&uStack_30);
  func_0x000107921760(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107921f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079209bc; end: 107920a33; +[SCNSnapMapsSdkMapSdk fromLong:] */

void FUN_1079209bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072a1df0(&uStack_30,param_3);
  func_0x000107921760(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107921f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107921248; end: 107921277;  */

void FUN_107921248(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107921f84();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x00010792215c();
    func_0x00010792b7e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079216cc; end: 10792175f; -[SCNSnapMapsSdkMapSdk clearCache:] */

void FUN_1079216cc(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107921f90();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010792217c();
  func_0x0001000fbca4();
  (**(code **)(*plVar1 + 0x68))(plVar1,auStack_48);
  func_0x000107922070();
  func_0x000107921fa0();
  return;
}



/* Entry: 107921998; end: 107921a1b;  */

void FUN_107921998(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 107921f1c; end: 107921f77;  */

void FUN_107921f1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x0001072b1164(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10792247c; end: 10792250f; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder publicUserInfoProvider:] */

void FUN_10792247c(void)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107922b38();
  func_0x000107922b8c();
  if (unaff_x19 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107922bd0();
    func_0x0001079284f0();
  }
  func_0x000107922b84();
  func_0x000107922b58(*(undefined8 *)(*unaff_x20 + 0x28));
  func_0x00010726ee28(&uStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 1079228ec; end: 10792296f; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder resourceRequester:] */

void FUN_1079228ec(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107922bd0();
  FUN_107921248();
  func_0x000107922b58(*(undefined8 *)(*plVar1 + 0x68));
  func_0x0001072aca24(auStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922cd4; end: 107922dcb;  */

void FUN_107922cd4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb460;
  puVar4[3] = &PTR_DAT_1109eb4e0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x000107923024();
  puVar4[3] = &PTR_DAT_1109eb4b0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_107922ff8(&uStack_50);
  return;
}



/* Entry: 107922ff8; end: 107923023;  */

long FUN_107922ff8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792345c; end: 1079234d7; -[SCNSnapMapsSdkMapSdkSession getId] */

void FUN_10792345c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x0001079266cc();
  func_0x000107926854();
  puVar1 = auStack_38;
  func_0x0001001011a4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079266f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107923888; end: 10792393f; -[SCNSnapMapsSdkMapSdkSession registerAuthContextProvider:authContextProvider:] */

void FUN_107923888(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x00010792dbf8(auStack_58);
  (**(code **)(*plVar1 + 0x68))(plVar1,auStack_48,auStack_58);
  func_0x000104bff3c8(auStack_58);
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107923ecc; end: 107923fc7; -[SCNSnapMapsSdkMapSdkSession getFeature:featureId:] */

void FUN_107923ecc(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [88];
  char cStack_38;
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x0001079267b4();
  (**(code **)(*plVar1 + 0xa0))(auStack_90,plVar1,auStack_a8,auStack_c0);
  func_0x000107926754();
  func_0x0001079266e8();
  if (cStack_38 == '\x01') {
    puVar2 = auStack_90;
    func_0x00010791d5f8(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  func_0x000107926174(auStack_90);
  func_0x000107926638();
  func_0x000107926620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107924480; end: 1079244fb; -[SCNSnapMapsSdkMapSdkSession getUserMetadataManager] */

void FUN_107924480(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x000107929af8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x000107926360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107924bbc; end: 107924cc3; -[SCNSnapMapsSdkMapSdkSession addExternalLayer:layerId:beforeLayer:] */

void FUN_107924bbc(long param_1)

{
  long *plVar1;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  func_0x00010792689c();
  func_0x000107926640();
  func_0x0001079266e0();
  func_0x000107926820();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010791cb90(auStack_50);
  func_0x0001000fbca4(auStack_68);
  func_0x000100114864(auStack_88);
  func_0x0001079268f8(*(undefined8 *)(*plVar1 + 0x108));
  func_0x0001001148fc(auStack_88);
  func_0x0001079267a0();
  func_0x000107291314(auStack_50);
  func_0x0001079266a0();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 1079251c4; end: 1079252b7; -[SCNSnapMapsSdkMapSdkSession zoomToAndTilt:zoomTarget:automaticTiltProvider:viewportEdgeInsets:] */

void FUN_1079251c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_5);
  func_0x0001079266e0();
  plVar1 = *(long **)(param_2 + 0x18);
  func_0x000107918dfc(auStack_50,param_5);
  func_0x000107924f64(auStack_90,param_6);
  (**(code **)(*plVar1 + 0x140))(param_1,plVar1,param_4,auStack_50,auStack_90);
  func_0x0001079267e8();
  func_0x0001072f6f84(auStack_50);
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 10792579c; end: 107925877; -[SCNSnapMapsSdkMapSdkSession setMapBrowsingContext:] */

void FUN_10792579c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079268d0();
  func_0x00010bf25f00();
  func_0x0001079267a8();
  ppuStack_50 = &PTR_DAT_1109ede60;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x00010006369c(&ppuStack_50);
  func_0x000107926638();
  func_0x000107926904(*(undefined8 *)(*plVar1 + 0x180));
  func_0x000107926828();
  func_0x000107926620();
  return;
}



/* Entry: 107925d18; end: 107925df3; -[SCNSnapMapsSdkMapSdkSession setDebugOption:] */

void FUN_107925d18(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079268d0();
  func_0x00010bf25f00();
  func_0x0001079267a8();
  func_0x000107926794();
  func_0x000107926638();
  func_0x000107926904(*(undefined8 *)(*plVar1 + 0x1c0));
  func_0x0001079268f0();
  func_0x000107926620();
  return;
}



/* Entry: 107926274; end: 10792630f;  */

long * FUN_107926274(long *param_1,ulong param_2)

{
  long *plVar1;
  long alStack_48 [5];
  
  if ((ulong)((param_1[2] - *param_1) / 0x58) < param_2) {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      func_0x0001072ba368();
      plVar1 = alStack_48;
      func_0x0001072ba4f0();
      func_0x00010792666c();
      if (plVar1[1] != 0) {
        func_0x0001000df548();
      }
      return plVar1;
    }
    func_0x0001072ba374(alStack_48,param_2,(param_1[1] - *param_1) / 0x58);
    func_0x0001072ba334(param_1,alStack_48);
    param_1 = alStack_48;
    func_0x0001072ba4f0(param_1);
  }
  return param_1;
}



/* Entry: 107926978; end: 107926a2f;  */

void FUN_107926978(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb568;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107926a30);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107926d90(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107926cec; end: 107926d7f;  */

long FUN_107926cec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb568;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 107926f94; end: 107926fe7; -[SCNSnapMapsSdkMemoriesFetcherCallback .cxx_destruct] */

void FUN_107926f94(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb648;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000107300f3c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1079272dc; end: 107927337; -[SCNSnapMapsSdkParticleEffectImageLoaderObserver .cxx_destruct] */

void FUN_1079272dc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb658;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000107307740((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1079275d0; end: 107927663;  */

long FUN_1079275d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb6b0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 107927878; end: 1079278d3; -[SCNSnapMapsSdkPlaceManager showAllPlaces] */

void FUN_107927878(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 107927ba8; end: 107927c0b;  */

undefined1  [16] FUN_107927ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain();
  func_0x00010c2be880(param_2);
  uVar1 = param_1;
  func_0x00010c2beba0(param_2);
  _objc_release(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1079280c8; end: 10792811b; -[SCNSnapMapsSdkPublicUserInfoCallback .cxx_destruct] */

void FUN_1079280c8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb790;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072716b0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792844c; end: 107928493;  */

long * FUN_10792844c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x00010793be08();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107928704; end: 10792879b;  */

void FUN_107928704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010088f8a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792809c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9920(uVar2);
  func_0x00010792887c();
  func_0x000107928868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1079289a4; end: 1079289ab; -[SCNSnapMapsSdkRect top] */

undefined8 FUN_1079289a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107928be0; end: 107928c23; -[SCNSnapMapsSdkResolveContentObjectCallback .cxx_construct] */

undefined8 * FUN_107928be0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107928d10();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107928dd4; end: 107928e6b;  */

void FUN_107928dd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d56f0;
  _objc_alloc(PTR_PTR_1126d56f0);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x0001079292c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04edc0(puVar1,param_2,lVar2,param_1);
  func_0x000107928e6c();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107929144; end: 107929147;  */

void FUN_107929144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb970;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079292b8; end: 1079292c3;  */

long FUN_1079292b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb930;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1079294fc; end: 107929503;  */

void FUN_1079294fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079296d0; end: 1079296d7; -[SCNSnapMapsSdkTimedTransitionOptions duration] */

undefined8 FUN_1079296d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107929894; end: 1079298c3; -[SCNSnapMapsSdkUnitBezierDouble .cxx_destruct] */

void FUN_107929894(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107929c34; end: 107929ca7;  */

void FUN_107929c34(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5708;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107929ca8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107926360(&uStack_30);
  return;
}



/* Entry: 107929f0c; end: 10792a003;  */

void FUN_107929f0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  int iStack_40;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_2;
  func_0x000107942cd0(param_2);
  func_0x000100291d50(&uStack_48,uVar2);
  func_0x00010b4d1758(param_2,uStack_48,iStack_40 - (int)uStack_48);
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d5710);
  func_0x00010c008360();
  func_0x00010792a0e4();
  func_0x000100100fec(&uStack_48);
  func_0x00010c0e54c0(uVar3);
  func_0x00010792a0d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10792a29c; end: 10792a2ef; -[SCNSnapMapsSdkViewportLogger .cxx_destruct] */

void FUN_10792a29c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebb38;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000107926310((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792a604; end: 10792a617;  */

void FUN_10792a604(void)

{
  func_0x00010792a76c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


