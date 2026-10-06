/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109482a78; end: 109482b73;  */

long * FUN_109482a78(long *param_1)

{
  long lVar1;
  
  func_0x000109482ab0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109482b74; end: 109484097;  */

long * FUN_109482b74(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar15;
  long *plVar16;
  long *unaff_x22;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  uint uStack_1f4;
  long lStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_1f4 = (uint)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  plVar14 = param_1;
  plVar15 = unaff_x21;
  plVar17 = param_3;
  do {
    plStack_220 = plVar10 + -0x48;
    plStack_218 = plVar10 + -0x30;
    plStack_208 = plVar10 + -0x34;
    plStack_200 = plVar10 + -0x18;
    plStack_210 = plVar10 + -0x33;
    plVar16 = plVar14;
LAB_109482bdc:
    plVar14 = plVar16;
    uVar21 = (long)plVar10 - (long)plVar14;
    uVar20 = ((long)uVar21 >> 6) * -0x5555555555555555;
    plVar8 = plVar10;
    if (uVar20 - 2 != 0 && 1 < (long)uVar20) {
      if (uVar20 == 3) {
        uVar20 = plVar14[0x2d] - plVar14[0x2c];
        if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar20) {
          if (uVar20 < (ulong)(plVar10[-3] - plVar10[-4])) goto LAB_1094834e8;
          param_2 = plVar14 + 0x18;
          param_1 = plVar14;
          FUN_109482514();
          if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x2d] - plVar14[0x2c])) break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109484094;
          plVar14 = plVar14 + 0x18;
          plVar16 = plStack_200;
          goto code_r0x000109482514;
        }
        plVar16 = plStack_200;
        if ((ulong)(plVar10[-3] - plVar10[-4]) <= uVar20) break;
      }
      else {
        if (uVar20 == 4) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109484094;
          param_2 = plVar14 + 0x18;
          param_3 = plVar14 + 0x30;
          param_4 = plStack_200;
          goto code_r0x000109484098;
        }
        if (uVar20 != 5) goto LAB_109482c24;
        param_2 = plVar14 + 0x18;
        param_3 = plVar14 + 0x30;
        param_4 = plVar14 + 0x48;
        param_1 = plVar14;
        FUN_109484098();
        if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x5d] - plVar14[0x5c])) break;
        param_1 = plVar14 + 0x48;
        param_2 = plStack_200;
        FUN_109482514();
        if ((ulong)(plVar14[0x5d] - plVar14[0x5c]) <= (ulong)(plVar14[0x45] - plVar14[0x44])) break;
        param_1 = plVar14 + 0x30;
        param_2 = plVar14 + 0x48;
        FUN_109482514();
        if ((ulong)(plVar14[0x45] - plVar14[0x44]) <= (ulong)(plVar14[0x2d] - plVar14[0x2c])) break;
        plVar16 = plVar14 + 0x30;
      }
      param_2 = plVar16;
      param_1 = plVar14 + 0x18;
      FUN_109482514();
      if ((ulong)(plVar14[0x2d] - plVar14[0x2c]) <= (ulong)(plVar14[0x15] - plVar14[0x14])) break;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109484094;
      plVar16 = plVar14 + 0x18;
      goto code_r0x000109482514;
    }
    if (uVar20 < 2) break;
    if (uVar20 == 2) {
      if ((ulong)(plVar10[-3] - plVar10[-4]) <= (ulong)(plVar14[0x15] - plVar14[0x14])) break;
LAB_1094834e8:
      plVar16 = plStack_200;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_109484094;
      goto code_r0x000109482514;
    }
LAB_109482c24:
    if ((long)uVar21 < 0x1200) {
      if ((uStack_1f4 & 1) == 0) {
        if ((plVar14 != plVar10) && (plVar14 + 0x18 != plVar10)) {
          plVar15 = &lStack_130;
          plVar17 = plVar14 + 0x2e;
          plVar16 = plVar14 + 0x18;
          plVar9 = plVar14;
          do {
            plVar14 = plVar16;
            lVar13 = plVar9[0x2c];
            lVar11 = plVar9[0x2d];
            uVar20 = lVar11 - lVar13;
            if ((ulong)(plVar9[0x15] - plVar9[0x14]) < uVar20) {
              plStack_128 = (long *)plVar14[1];
              lStack_130 = *plVar14;
              *plVar14 = 0;
              plVar14[1] = 0;
              lStack_118 = plVar9[0x1b];
              lStack_120 = plVar9[0x1a];
              lStack_108 = plVar9[0x1d];
              lStack_110 = plVar9[0x1c];
              lStack_f8 = plVar9[0x1f];
              lStack_100 = plVar9[0x1e];
              lStack_f0 = plVar9[0x20];
              lStack_a0 = plVar9[0x2a];
              lStack_b8 = plVar9[0x27];
              lStack_c0 = plVar9[0x26];
              lStack_a8 = plVar9[0x29];
              lStack_b0 = plVar9[0x28];
              lStack_d8 = plVar9[0x23];
              lStack_e0 = plVar9[0x22];
              lStack_c8 = plVar9[0x25];
              lStack_d0 = plVar9[0x24];
              lStack_80 = plVar9[0x2e];
              plVar9[0x2c] = 0;
              plVar9[0x2d] = 0;
              plVar9[0x2e] = 0;
              plVar16 = plVar17;
              lStack_90 = lVar13;
              lStack_88 = lVar11;
              do {
                plVar9 = plVar16;
                FUN_1094826cc(plVar9 + -0x16,plVar9 + -0x2e);
                plVar9[-0x13] = plVar9[-0x2b];
                plVar9[-0x14] = plVar9[-0x2c];
                plVar9[-0x11] = plVar9[-0x29];
                plVar9[-0x12] = plVar9[-0x2a];
                plVar9[-0xf] = plVar9[-0x27];
                plVar9[-0x10] = plVar9[-0x28];
                plVar9[-0xe] = plVar9[-0x26];
                plVar9[-7] = plVar9[-0x1f];
                plVar9[-8] = plVar9[-0x20];
                plVar9[-5] = plVar9[-0x1d];
                plVar9[-6] = plVar9[-0x1e];
                plVar9[-4] = plVar9[-0x1c];
                plVar9[-0xb] = plVar9[-0x23];
                plVar9[-0xc] = plVar9[-0x24];
                plVar9[-9] = plVar9[-0x21];
                plVar9[-10] = plVar9[-0x22];
                FUN_109480644(plVar9 + -2,plVar9 + -0x1a);
                plVar16 = plVar9 + -0x18;
              } while ((ulong)(plVar9[-0x31] - plVar9[-0x32]) < uVar20);
              param_2 = &lStack_130;
              FUN_1094826cc(plVar9 + -0x2e);
              plVar9[-0x2b] = lStack_118;
              plVar9[-0x2c] = lStack_120;
              plVar9[-0x29] = lStack_108;
              plVar9[-0x2a] = lStack_110;
              plVar9[-0x26] = lStack_f0;
              plVar9[-0x27] = lStack_f8;
              plVar9[-0x28] = lStack_100;
              plVar9[-0x1c] = lStack_a0;
              plVar9[-0x1f] = lStack_b8;
              plVar9[-0x20] = lStack_c0;
              plVar9[-0x1d] = lStack_a8;
              plVar9[-0x1e] = lStack_b0;
              plVar9[-0x21] = lStack_c8;
              plVar9[-0x22] = lStack_d0;
              plVar9[-0x23] = lStack_d8;
              plVar9[-0x24] = lStack_e0;
              param_1 = (long *)plVar9[-0x1a];
              if (param_1 != (long *)0x0) {
                plVar9[-0x19] = (long)param_1;
                __ZdlPv();
                plVar9[-0x1a] = 0;
                plVar9[-0x19] = 0;
                *plVar16 = 0;
              }
              plVar18 = plStack_128;
              plVar9[-0x19] = lStack_88;
              plVar9[-0x1a] = lStack_90;
              *plVar16 = lStack_80;
              lStack_90 = 0;
              lStack_88 = 0;
              lStack_80 = 0;
              if (plStack_128 != (long *)0x0) {
                plVar16 = plStack_128 + 1;
                do {
                  lVar13 = *plVar16;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *plVar16 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_128 + 0x10))(plStack_128);
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                  param_1 = plVar18;
                }
              }
            }
            plVar17 = plVar17 + 0x18;
            plVar16 = plVar14 + 0x18;
            plVar9 = plVar14;
          } while (plVar14 + 0x18 != plVar10);
        }
        break;
      }
      if ((plVar14 == plVar10) || (plVar14 + 0x18 == plVar10)) break;
      lVar13 = 0;
      plVar16 = plVar14;
      plVar9 = plVar14 + 0x18;
      goto LAB_109483598;
    }
    if (plVar17 == (long *)0x0) {
      if (plVar14 == plVar10) break;
      plVar17 = (long *)(uVar20 - 2 >> 1);
      plVar10 = plVar17;
      goto LAB_109483758;
    }
    plVar16 = plVar14 + (uVar20 >> 1) * 0x18;
    uVar20 = plVar10[-3] - plVar10[-4];
    plVar15 = plVar14;
    if (uVar21 < 0x6001) {
      uVar21 = plVar14[0x15] - plVar14[0x14];
      plVar15 = plVar16;
      if ((ulong)(plVar16[0x15] - plVar16[0x14]) < uVar21) {
        plVar8 = plStack_200;
        if ((uVar21 < uVar20) ||
           (FUN_109482514(plVar16,plVar14), plVar15 = plVar14, plVar8 = plStack_200,
           (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(plVar10[-3] - plVar10[-4])))
        goto LAB_109482f40;
      }
      else if ((uVar21 < uVar20) &&
              (FUN_109482514(plVar14,plStack_200), plVar8 = plVar14,
              (ulong)(plVar16[0x15] - plVar16[0x14]) < (ulong)(plVar14[0x15] - plVar14[0x14])))
      goto LAB_109482f40;
    }
    else {
      uVar21 = plVar16[0x15] - plVar16[0x14];
      plVar8 = plVar14;
      if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar21) {
        plVar9 = plStack_200;
        if ((uVar21 < uVar20) ||
           (FUN_109482514(plVar14,plVar16), plVar8 = plVar16, plVar9 = plStack_200,
           (ulong)(plVar16[0x15] - plVar16[0x14]) < (ulong)(plVar10[-3] - plVar10[-4]))) {
LAB_109482d24:
          FUN_109482514(plVar8,plVar9);
        }
      }
      else if ((uVar21 < uVar20) &&
              (FUN_109482514(plVar16,plStack_200), plVar9 = plVar16,
              (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(plVar16[0x15] - plVar16[0x14])))
      goto LAB_109482d24;
      plVar9 = plVar16 + -0x18;
      uVar20 = plVar16[-3] - plVar16[-4];
      if ((ulong)(plVar14[0x2d] - plVar14[0x2c]) < uVar20) {
        plVar8 = plVar14 + 0x18;
        plVar18 = plStack_218;
        if ((uVar20 < (ulong)(plVar10[-0x1b] - plVar10[-0x1c])) ||
           (FUN_109482514(plVar14 + 0x18,plVar9), plVar8 = plVar9, plVar18 = plStack_218,
           (ulong)(plVar16[-3] - plVar16[-4]) < (ulong)(plVar10[-0x1b] - plVar10[-0x1c]))) {
LAB_109482df0:
          FUN_109482514(plVar8,plVar18);
        }
      }
      else if ((uVar20 < (ulong)(plVar10[-0x1b] - plVar10[-0x1c])) &&
              (FUN_109482514(plVar9,plStack_218),
              (ulong)(plVar14[0x2d] - plVar14[0x2c]) < (ulong)(plVar16[-3] - plVar16[-4]))) {
        plVar8 = plVar14 + 0x18;
        plVar18 = plVar9;
        goto LAB_109482df0;
      }
      uVar20 = plVar16[0x2d] - plVar16[0x2c];
      if ((ulong)(plVar14[0x45] - plVar14[0x44]) < uVar20) {
        plVar8 = plVar14 + 0x30;
        plVar18 = plStack_220;
        if ((ulong)(*plStack_210 - *plStack_208) <= uVar20) {
          FUN_109482514(plVar8,plVar16 + 0x18);
          if ((ulong)(*plStack_210 - *plStack_208) <= (ulong)(plVar16[0x2d] - plVar16[0x2c]))
          goto LAB_109482e9c;
          plVar8 = plVar16 + 0x18;
          plVar18 = plStack_220;
        }
LAB_109482e98:
        FUN_109482514(plVar8,plVar18);
      }
      else if ((uVar20 < (ulong)(*plStack_210 - *plStack_208)) &&
              (FUN_109482514(plVar16 + 0x18,plStack_220),
              (ulong)(plVar14[0x45] - plVar14[0x44]) < (ulong)(plVar16[0x2d] - plVar16[0x2c]))) {
        plVar8 = plVar14 + 0x30;
        plVar18 = plVar16 + 0x18;
        goto LAB_109482e98;
      }
LAB_109482e9c:
      uVar20 = plVar16[0x15] - plVar16[0x14];
      plVar8 = plVar16;
      if ((ulong)(plVar16[-3] - plVar16[-4]) < uVar20) {
        if (uVar20 < (ulong)(plVar16[0x2d] - plVar16[0x2c])) {
          plVar16 = plVar16 + 0x18;
        }
        else {
          FUN_109482514(plVar9,plVar16);
          if ((ulong)(plVar16[0x2d] - plVar16[0x2c]) <= (ulong)(plVar16[0x15] - plVar16[0x14]))
          goto LAB_109482f40;
          plVar9 = plVar16;
          plVar16 = plVar16 + 0x18;
        }
LAB_109482f34:
        FUN_109482514(plVar9,plVar16);
      }
      else if ((uVar20 < (ulong)(plVar16[0x2d] - plVar16[0x2c])) &&
              (FUN_109482514(plVar16,plVar16 + 0x18),
              (ulong)(plVar16[-3] - plVar16[-4]) < (ulong)(plVar16[0x15] - plVar16[0x14])))
      goto LAB_109482f34;
LAB_109482f40:
      FUN_109482514(plVar15,plVar8);
    }
    plVar17 = (long *)((long)plVar17 + -1);
    if ((uStack_1f4 & 1) == 0) {
      lStack_90 = plVar14[0x14];
      lStack_88 = plVar14[0x15];
      plVar15 = (long *)(lStack_88 - lStack_90);
      if (plVar15 < (long *)(plVar14[-3] - plVar14[-4])) goto LAB_109482f74;
      plStack_128 = (long *)plVar14[1];
      lStack_130 = *plVar14;
      lStack_118 = plVar14[3];
      lStack_120 = plVar14[2];
      *plVar14 = 0;
      plVar14[1] = 0;
      lStack_108 = plVar14[5];
      lStack_110 = plVar14[4];
      lStack_f8 = plVar14[7];
      lStack_100 = plVar14[6];
      lStack_f0 = plVar14[8];
      lStack_d8 = plVar14[0xb];
      lStack_e0 = plVar14[10];
      lStack_c8 = plVar14[0xd];
      lStack_d0 = plVar14[0xc];
      lStack_b8 = plVar14[0xf];
      lStack_c0 = plVar14[0xe];
      lStack_a8 = plVar14[0x11];
      lStack_b0 = plVar14[0x10];
      lStack_a0 = plVar14[0x12];
      lStack_80 = plVar14[0x16];
      plVar14[0x14] = 0;
      plVar14[0x15] = 0;
      plVar14[0x16] = 0;
      plVar8 = plVar14;
      if ((long *)(plVar10[-3] - plVar10[-4]) < plVar15) {
        do {
          plVar16 = plVar8 + 0x18;
          plVar9 = plVar8 + 0x2c;
          plVar18 = plVar8 + 0x2d;
          plVar8 = plVar16;
        } while (plVar15 <= (long *)(*plVar18 - *plVar9));
      }
      else {
        do {
          plVar16 = plVar8 + 0x18;
          if (plVar10 <= plVar16) break;
          plVar9 = plVar8 + 0x2c;
          plVar18 = plVar8 + 0x2d;
          plVar8 = plVar16;
        } while (plVar15 <= (long *)(*plVar18 - *plVar9));
      }
      plVar8 = plVar10;
      plVar9 = plVar10;
      if (plVar16 < plVar10) {
        do {
          plVar9 = plVar8 + -0x18;
          plVar18 = plVar8 + -4;
          plVar4 = plVar8 + -3;
          plVar8 = plVar9;
        } while ((long *)(*plVar4 - *plVar18) < plVar15);
      }
      while (plVar16 < plVar9) {
        FUN_109482514(plVar16,plVar9);
        do {
          plVar8 = plVar16 + 0x2c;
          plVar18 = plVar16 + 0x2d;
          plVar16 = plVar16 + 0x18;
        } while (plVar15 <= (long *)(*plVar18 - *plVar8));
        do {
          plVar8 = plVar9 + -4;
          plVar18 = plVar9 + -3;
          plVar9 = plVar9 + -0x18;
        } while ((long *)(*plVar18 - *plVar8) < plVar15);
      }
      plVar9 = plVar16 + -0x18;
      if (plVar9 != plVar14) {
        FUN_1094826cc(plVar14,plVar9);
        lVar13 = plVar16[-0x16];
        lVar22 = plVar16[-0x13];
        lVar11 = plVar16[-0x14];
        plVar14[3] = plVar16[-0x15];
        plVar14[2] = lVar13;
        plVar14[5] = lVar22;
        plVar14[4] = lVar11;
        lVar11 = plVar16[-0x11];
        lVar13 = plVar16[-0x12];
        plVar14[8] = plVar16[-0x10];
        plVar14[7] = lVar11;
        plVar14[6] = lVar13;
        lVar23 = plVar16[-9];
        lVar22 = plVar16[-10];
        lVar11 = plVar16[-7];
        lVar13 = plVar16[-8];
        lVar25 = plVar16[-0xb];
        lVar24 = plVar16[-0xc];
        plVar14[0x12] = plVar16[-6];
        plVar14[0xf] = lVar23;
        plVar14[0xe] = lVar22;
        plVar14[0x11] = lVar11;
        plVar14[0x10] = lVar13;
        plVar14[0xd] = lVar25;
        plVar14[0xc] = lVar24;
        lVar13 = plVar16[-0xe];
        plVar14[0xb] = plVar16[-0xd];
        plVar14[10] = lVar13;
        FUN_109480644(plVar14 + 0x14,plVar16 + -4);
      }
      plVar8 = &lStack_130;
      FUN_1094826cc(plVar9);
      plVar16[-0x15] = lStack_118;
      plVar16[-0x16] = lStack_120;
      plVar16[-0x13] = lStack_108;
      plVar16[-0x14] = lStack_110;
      plVar16[-0x10] = lStack_f0;
      plVar16[-0x11] = lStack_f8;
      plVar16[-0x12] = lStack_100;
      plVar16[-6] = lStack_a0;
      plVar16[-9] = lStack_b8;
      plVar16[-10] = lStack_c0;
      plVar16[-7] = lStack_a8;
      plVar16[-8] = lStack_b0;
      plVar16[-0xb] = lStack_c8;
      plVar16[-0xc] = lStack_d0;
      plVar16[-0xd] = lStack_d8;
      plVar16[-0xe] = lStack_e0;
      param_1 = (long *)plVar16[-4];
      if (param_1 != (long *)0x0) {
        plVar16[-3] = (long)param_1;
        __ZdlPv();
        plVar16[-4] = 0;
        plVar16[-3] = 0;
        plVar16[-2] = 0;
      }
      plVar14 = plStack_128;
      plVar16[-3] = lStack_88;
      plVar16[-4] = lStack_90;
      plVar16[-2] = lStack_80;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      if (plStack_128 != (long *)0x0) {
        plVar9 = plStack_128 + 1;
        do {
          lVar13 = *plVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar14;
        }
      }
      goto LAB_1094831dc;
    }
    lStack_90 = plVar14[0x14];
    lStack_88 = plVar14[0x15];
    plVar15 = (long *)(lStack_88 - lStack_90);
LAB_109482f74:
    lVar13 = 0;
    plStack_128 = (long *)plVar14[1];
    lStack_130 = *plVar14;
    lStack_118 = plVar14[3];
    lStack_120 = plVar14[2];
    *plVar14 = 0;
    plVar14[1] = 0;
    lStack_108 = plVar14[5];
    lStack_110 = plVar14[4];
    lStack_f8 = plVar14[7];
    lStack_100 = plVar14[6];
    lStack_f0 = plVar14[8];
    lStack_d8 = plVar14[0xb];
    lStack_e0 = plVar14[10];
    lStack_c8 = plVar14[0xd];
    lStack_d0 = plVar14[0xc];
    lStack_b8 = plVar14[0xf];
    lStack_c0 = plVar14[0xe];
    lStack_a8 = plVar14[0x11];
    lStack_b0 = plVar14[0x10];
    lStack_a0 = plVar14[0x12];
    lStack_80 = plVar14[0x16];
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    do {
      lVar11 = lVar13 + 0x160;
      lVar22 = lVar13 + 0x168;
      lVar13 = lVar13 + 0xc0;
    } while (plVar15 < (long *)(*(long *)((long)plVar14 + lVar22) -
                               *(long *)((long)plVar14 + lVar11)));
    plVar9 = (long *)((long)plVar14 + lVar13);
    plVar16 = plVar10;
    if (lVar13 == 0xc0) {
      do {
        plVar18 = plVar16;
        if (plVar16 <= plVar9) break;
        plVar18 = plVar16 + -0x18;
        plVar8 = plVar16 + -4;
        plVar4 = plVar16 + -3;
        plVar16 = plVar18;
      } while ((long *)(*plVar4 - *plVar8) <= plVar15);
    }
    else {
      do {
        plVar18 = plVar16 + -0x18;
        plVar8 = plVar16 + -4;
        plVar4 = plVar16 + -3;
        plVar16 = plVar18;
      } while ((long *)(*plVar4 - *plVar8) <= plVar15);
    }
    plVar16 = plVar9;
    plVar8 = plVar18;
    if (plVar9 < plVar18) {
      do {
        FUN_109482514(plVar16,plVar8);
        do {
          plVar4 = plVar16 + 0x2c;
          plVar5 = plVar16 + 0x2d;
          plVar16 = plVar16 + 0x18;
        } while (plVar15 < (long *)(*plVar5 - *plVar4));
        do {
          plVar4 = plVar8 + -4;
          plVar5 = plVar8 + -3;
          plVar8 = plVar8 + -0x18;
        } while ((long *)(*plVar5 - *plVar4) <= plVar15);
      } while (plVar16 < plVar8);
    }
    plVar8 = plVar16 + -0x18;
    if (plVar8 != plVar14) {
      FUN_1094826cc(plVar14,plVar8);
      lVar13 = plVar16[-0x16];
      lVar22 = plVar16[-0x13];
      lVar11 = plVar16[-0x14];
      plVar14[3] = plVar16[-0x15];
      plVar14[2] = lVar13;
      plVar14[5] = lVar22;
      plVar14[4] = lVar11;
      lVar11 = plVar16[-0x11];
      lVar13 = plVar16[-0x12];
      plVar14[8] = plVar16[-0x10];
      plVar14[7] = lVar11;
      plVar14[6] = lVar13;
      lVar23 = plVar16[-9];
      lVar22 = plVar16[-10];
      lVar11 = plVar16[-7];
      lVar13 = plVar16[-8];
      lVar25 = plVar16[-0xb];
      lVar24 = plVar16[-0xc];
      plVar14[0x12] = plVar16[-6];
      plVar14[0xf] = lVar23;
      plVar14[0xe] = lVar22;
      plVar14[0x11] = lVar11;
      plVar14[0x10] = lVar13;
      plVar14[0xd] = lVar25;
      plVar14[0xc] = lVar24;
      lVar13 = plVar16[-0xe];
      plVar14[0xb] = plVar16[-0xd];
      plVar14[10] = lVar13;
      FUN_109480644(plVar14 + 0x14,plVar16 + -4);
    }
    FUN_1094826cc(plVar8,&lStack_130);
    plVar16[-0x15] = lStack_118;
    plVar16[-0x16] = lStack_120;
    plVar16[-0x13] = lStack_108;
    plVar16[-0x14] = lStack_110;
    plVar16[-0x10] = lStack_f0;
    plVar16[-0x11] = lStack_f8;
    plVar16[-0x12] = lStack_100;
    plVar16[-6] = lStack_a0;
    plVar16[-9] = lStack_b8;
    plVar16[-10] = lStack_c0;
    plVar16[-7] = lStack_a8;
    plVar16[-8] = lStack_b0;
    plVar16[-0xb] = lStack_c8;
    plVar16[-0xc] = lStack_d0;
    plVar16[-0xd] = lStack_d8;
    plVar16[-0xe] = lStack_e0;
    plVar15 = plVar16 + -4;
    if (*plVar15 != 0) {
      plVar16[-3] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      plVar16[-3] = 0;
      plVar16[-2] = 0;
    }
    plVar4 = plStack_128;
    plVar16[-3] = lStack_88;
    plVar16[-4] = lStack_90;
    plVar16[-2] = lStack_80;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    if (plStack_128 != (long *)0x0) {
      plVar5 = plStack_128 + 1;
      do {
        lVar13 = *plVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar7) {
          *plVar5 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar9 < plVar18) goto LAB_1094831c4;
    plVar9 = plVar14;
    FUN_1094841d0(plVar14,plVar8);
    param_1 = plVar16;
    param_2 = plVar10;
    FUN_1094841d0();
    if ((int)param_1 == 0) goto code_r0x0001094831c0;
    plVar10 = plVar8;
  } while (((ulong)plVar9 & 1) == 0);
  goto LAB_10948405c;
LAB_109483598:
  do {
    lVar11 = plVar16[0x2c];
    lVar22 = plVar16[0x2d];
    plVar18 = (long *)(lVar22 - lVar11);
    plVar17 = plVar18;
    if ((long *)(plVar16[0x15] - plVar16[0x14]) < plVar18) {
      plStack_128 = (long *)plVar9[1];
      lStack_130 = *plVar9;
      *plVar9 = 0;
      plVar9[1] = 0;
      lStack_118 = plVar16[0x1b];
      lStack_120 = plVar16[0x1a];
      lStack_108 = plVar16[0x1d];
      lStack_110 = plVar16[0x1c];
      lStack_f8 = plVar16[0x1f];
      lStack_100 = plVar16[0x1e];
      lStack_f0 = plVar16[0x20];
      lStack_a0 = plVar16[0x2a];
      lStack_b8 = plVar16[0x27];
      lStack_c0 = plVar16[0x26];
      lStack_a8 = plVar16[0x29];
      lStack_b0 = plVar16[0x28];
      lStack_d8 = plVar16[0x23];
      lStack_e0 = plVar16[0x22];
      lStack_c8 = plVar16[0x25];
      lStack_d0 = plVar16[0x24];
      lStack_80 = plVar16[0x2e];
      plVar16[0x2c] = 0;
      plVar16[0x2d] = 0;
      plVar16[0x2e] = 0;
      lVar23 = lVar13;
      lStack_90 = lVar11;
      lStack_88 = lVar22;
      do {
        lVar22 = lVar23;
        lVar11 = (long)plVar14 + lVar22;
        FUN_1094826cc(lVar11 + 0xc0,lVar11);
        *(undefined8 *)(lVar11 + 0xd8) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)(lVar11 + 0x10);
        *(undefined8 *)(lVar11 + 0xe8) = *(undefined8 *)(lVar11 + 0x28);
        *(undefined8 *)(lVar11 + 0xe0) = *(undefined8 *)(lVar11 + 0x20);
        *(undefined8 *)(lVar11 + 0xf8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(lVar11 + 0xf0) = *(undefined8 *)(lVar11 + 0x30);
        *(undefined8 *)(lVar11 + 0x100) = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(lVar11 + 0x138) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(lVar11 + 0x130) = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(lVar11 + 0x148) = *(undefined8 *)(lVar11 + 0x88);
        *(undefined8 *)(lVar11 + 0x140) = *(undefined8 *)(lVar11 + 0x80);
        *(undefined8 *)(lVar11 + 0x150) = *(undefined8 *)(lVar11 + 0x90);
        *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar11 + 0x58);
        *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(lVar11 + 0x50);
        *(undefined8 *)(lVar11 + 0x128) = *(undefined8 *)(lVar11 + 0x68);
        *(undefined8 *)(lVar11 + 0x120) = *(undefined8 *)(lVar11 + 0x60);
        FUN_109480644(lVar11 + 0x160,lVar11 + 0xa0);
        plVar17 = plVar14;
        if (lVar22 == 0) goto LAB_10948367c;
        lVar23 = lVar22 + -0xc0;
      } while ((long *)(*(long *)(lVar11 + -0x18) - *(long *)(lVar11 + -0x20)) < plVar18);
      plVar17 = (long *)((long)plVar14 + lVar22);
LAB_10948367c:
      param_2 = &lStack_130;
      FUN_1094826cc(plVar17);
      *(long *)(lVar11 + 0x18) = lStack_118;
      *(long *)(lVar11 + 0x10) = lStack_120;
      *(long *)(lVar11 + 0x28) = lStack_108;
      *(long *)(lVar11 + 0x20) = lStack_110;
      *(long *)(lVar11 + 0x40) = lStack_f0;
      *(long *)(lVar11 + 0x38) = lStack_f8;
      *(long *)(lVar11 + 0x30) = lStack_100;
      *(long *)(lVar11 + 0x90) = lStack_a0;
      *(long *)(lVar11 + 0x78) = lStack_b8;
      *(long *)(lVar11 + 0x70) = lStack_c0;
      *(long *)(lVar11 + 0x88) = lStack_a8;
      *(long *)(lVar11 + 0x80) = lStack_b0;
      *(long *)(lVar11 + 0x68) = lStack_c8;
      *(long *)(lVar11 + 0x60) = lStack_d0;
      *(long *)(lVar11 + 0x58) = lStack_d8;
      *(long *)(lVar11 + 0x50) = lStack_e0;
      plVar16 = (long *)(lVar11 + 0xa0);
      param_1 = (long *)*plVar16;
      if (param_1 != (long *)0x0) {
        plVar17[0x15] = (long)param_1;
        __ZdlPv();
        *plVar16 = 0;
        *(undefined8 *)(lVar11 + 0xa8) = 0;
        *(undefined8 *)(lVar11 + 0xb0) = 0;
      }
      plVar15 = plStack_128;
      *plVar16 = lStack_90;
      plVar17[0x16] = lStack_80;
      plVar17[0x15] = lStack_88;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      if (plStack_128 != (long *)0x0) {
        plVar16 = plStack_128 + 1;
        do {
          lVar11 = *plVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          param_1 = plVar15;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    plVar18 = plVar9 + 0x18;
    lVar13 = lVar13 + 0xc0;
    plVar16 = plVar9;
    plVar9 = plVar18;
  } while (plVar18 != plVar10);
  goto LAB_10948405c;
code_r0x0001094831c0:
  if (((ulong)plVar9 & 1) == 0) {
LAB_1094831c4:
    param_4 = (long *)(ulong)(uStack_1f4 & 1);
    param_3 = plVar17;
    FUN_109482b74();
    param_1 = plVar14;
LAB_1094831dc:
    uStack_1f4 = 0;
    param_2 = plVar8;
  }
  goto LAB_109482bdc;
LAB_109483758:
  do {
    if ((long)plVar10 <= (long)plVar17) {
      uVar2 = (long)plVar10 << 1 | 1;
      plVar16 = plVar14 + uVar2 * 0x18;
      uVar19 = (long)plVar10 * 2 + 2;
      uVar12 = uVar2;
      if ((long)uVar19 < (long)uVar20) {
        plVar9 = plVar16 + 0x14;
        plVar4 = plVar16 + 0x15;
        plVar18 = plVar16 + 0x2c;
        plVar5 = plVar16 + 0x2d;
        lVar13 = 0xc0;
        if ((ulong)(*plVar4 - *plVar9) <= (ulong)(*plVar5 - *plVar18)) {
          lVar13 = 0;
        }
        plVar16 = (long *)((long)plVar16 + lVar13);
        uVar12 = uVar19;
        if ((ulong)(*plVar4 - *plVar9) <= (ulong)(*plVar5 - *plVar18)) {
          uVar12 = uVar2;
        }
      }
      param_1 = plVar14 + (long)plVar10 * 0x18;
      lVar13 = param_1[0x14];
      lVar11 = param_1[0x15];
      uVar19 = lVar11 - lVar13;
      if ((ulong)(plVar16[0x15] - plVar16[0x14]) <= uVar19) {
        plStack_128 = (long *)param_1[1];
        lStack_130 = *param_1;
        *param_1 = 0;
        param_1[1] = 0;
        lStack_118 = param_1[3];
        lStack_120 = param_1[2];
        lStack_108 = param_1[5];
        lStack_110 = param_1[4];
        lStack_f8 = param_1[7];
        lStack_100 = param_1[6];
        lStack_f0 = param_1[8];
        lStack_c8 = param_1[0xd];
        lStack_d0 = param_1[0xc];
        lStack_b8 = param_1[0xf];
        lStack_c0 = param_1[0xe];
        lStack_a8 = param_1[0x11];
        lStack_b0 = param_1[0x10];
        lStack_a0 = param_1[0x12];
        lStack_d8 = param_1[0xb];
        lStack_e0 = param_1[10];
        lStack_80 = param_1[0x16];
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        lStack_90 = lVar13;
        lStack_88 = lVar11;
        do {
          plVar9 = plVar16;
          FUN_1094826cc(param_1,plVar9);
          lVar13 = plVar9[2];
          lVar22 = plVar9[5];
          lVar11 = plVar9[4];
          param_1[3] = plVar9[3];
          param_1[2] = lVar13;
          param_1[5] = lVar22;
          param_1[4] = lVar11;
          lVar11 = plVar9[7];
          lVar13 = plVar9[6];
          param_1[8] = plVar9[8];
          param_1[7] = lVar11;
          param_1[6] = lVar13;
          lVar23 = plVar9[0xf];
          lVar22 = plVar9[0xe];
          lVar11 = plVar9[0x11];
          lVar13 = plVar9[0x10];
          lVar25 = plVar9[0xd];
          lVar24 = plVar9[0xc];
          param_1[0x12] = plVar9[0x12];
          param_1[0xf] = lVar23;
          param_1[0xe] = lVar22;
          param_1[0x11] = lVar11;
          param_1[0x10] = lVar13;
          param_1[0xd] = lVar25;
          param_1[0xc] = lVar24;
          lVar13 = plVar9[10];
          param_1[0xb] = plVar9[0xb];
          param_1[10] = lVar13;
          FUN_109480644(param_1 + 0x14,plVar9 + 0x14);
          if ((long)plVar17 < (long)uVar12) break;
          uVar3 = uVar12 << 1 | 1;
          plVar16 = plVar14 + uVar3 * 0x18;
          uVar2 = uVar12 * 2 + 2;
          uVar12 = uVar3;
          if ((long)uVar2 < (long)uVar20) {
            plVar15 = plVar16 + 0x14;
            plVar4 = plVar16 + 0x15;
            plVar18 = plVar16 + 0x2c;
            plVar5 = plVar16 + 0x2d;
            lVar13 = 0xc0;
            if ((ulong)(*plVar4 - *plVar15) <= (ulong)(*plVar5 - *plVar18)) {
              lVar13 = 0;
            }
            plVar16 = (long *)((long)plVar16 + lVar13);
            uVar12 = uVar2;
            if ((ulong)(*plVar4 - *plVar15) <= (ulong)(*plVar5 - *plVar18)) {
              uVar12 = uVar3;
            }
          }
          param_1 = plVar9;
        } while ((ulong)(plVar16[0x15] - plVar16[0x14]) <= uVar19);
        param_2 = &lStack_130;
        FUN_1094826cc(plVar9);
        plVar9[3] = lStack_118;
        plVar9[2] = lStack_120;
        plVar9[5] = lStack_108;
        plVar9[4] = lStack_110;
        plVar9[7] = lStack_f8;
        plVar9[6] = lStack_100;
        plVar9[8] = lStack_f0;
        plVar9[0x12] = lStack_a0;
        plVar9[0xf] = lStack_b8;
        plVar9[0xe] = lStack_c0;
        plVar9[0x11] = lStack_a8;
        plVar9[0x10] = lStack_b0;
        plVar9[0xd] = lStack_c8;
        plVar9[0xc] = lStack_d0;
        plVar9[0xb] = lStack_d8;
        plVar9[10] = lStack_e0;
        param_1 = (long *)plVar9[0x14];
        if (param_1 != (long *)0x0) {
          plVar9[0x15] = (long)param_1;
          __ZdlPv();
          plVar9[0x14] = 0;
          plVar9[0x15] = 0;
          plVar9[0x16] = 0;
        }
        plVar15 = plStack_128;
        plVar9[0x15] = lStack_88;
        plVar9[0x14] = lStack_90;
        plVar9[0x16] = lStack_80;
        lStack_90 = 0;
        lStack_88 = 0;
        lStack_80 = 0;
        if (plStack_128 != (long *)0x0) {
          plVar16 = plStack_128 + 1;
          do {
            lVar13 = *plVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            param_1 = plVar15;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    bVar7 = plVar10 != (long *)0x0;
    plVar10 = (long *)((long)plVar10 + -1);
  } while (bVar7);
  uVar20 = (uVar21 >> 6) * -0x5555555555555555;
  do {
    if (1 < (long)uVar20) {
      plStack_1e8 = (long *)plVar14[1];
      lStack_1f0 = *plVar14;
      lStack_1d8 = plVar14[3];
      lStack_1e0 = plVar14[2];
      *plVar14 = 0;
      plVar14[1] = 0;
      lStack_1c8 = plVar14[5];
      lStack_1d0 = plVar14[4];
      lStack_1b8 = plVar14[7];
      lStack_1c0 = plVar14[6];
      lStack_1b0 = plVar14[8];
      lStack_178 = plVar14[0xf];
      lStack_180 = plVar14[0xe];
      lStack_168 = plVar14[0x11];
      lStack_170 = plVar14[0x10];
      lStack_160 = plVar14[0x12];
      lStack_188 = plVar14[0xd];
      lStack_190 = plVar14[0xc];
      lStack_198 = plVar14[0xb];
      lStack_1a0 = plVar14[10];
      plStack_148 = (long *)plVar14[0x15];
      plStack_150 = (long *)plVar14[0x14];
      lStack_140 = plVar14[0x16];
      plVar14[0x14] = 0;
      plVar14[0x15] = 0;
      plVar14[0x16] = 0;
      plVar15 = plVar14;
      uVar21 = 0;
      do {
        uVar2 = uVar21 << 1 | 1;
        uVar19 = uVar21 * 2 + 2;
        plVar10 = plVar15 + uVar21 * 0x18 + 0x18;
        uVar12 = uVar2;
        if (((long)uVar19 < (long)uVar20) &&
           (plVar10 = plVar15 + uVar21 * 0x18 + 0x30, uVar12 = uVar19,
           (ulong)(plVar15[uVar21 * 0x18 + 0x2d] - plVar15[uVar21 * 0x18 + 0x2c]) <=
           (ulong)(plVar15[uVar21 * 0x18 + 0x45] - plVar15[uVar21 * 0x18 + 0x44]))) {
          plVar10 = plVar15 + uVar21 * 0x18 + 0x18;
          uVar12 = uVar2;
        }
        FUN_1094826cc(plVar15,plVar10);
        lVar13 = plVar10[2];
        lVar22 = plVar10[5];
        lVar11 = plVar10[4];
        plVar15[3] = plVar10[3];
        plVar15[2] = lVar13;
        plVar15[5] = lVar22;
        plVar15[4] = lVar11;
        lVar11 = plVar10[7];
        lVar13 = plVar10[6];
        plVar15[8] = plVar10[8];
        plVar15[7] = lVar11;
        plVar15[6] = lVar13;
        lVar23 = plVar10[0xf];
        lVar22 = plVar10[0xe];
        lVar11 = plVar10[0x11];
        lVar13 = plVar10[0x10];
        lVar25 = plVar10[0xd];
        lVar24 = plVar10[0xc];
        plVar15[0x12] = plVar10[0x12];
        plVar15[0xf] = lVar23;
        plVar15[0xe] = lVar22;
        plVar15[0x11] = lVar11;
        plVar15[0x10] = lVar13;
        plVar15[0xd] = lVar25;
        plVar15[0xc] = lVar24;
        lVar13 = plVar10[10];
        plVar15[0xb] = plVar10[0xb];
        plVar15[10] = lVar13;
        FUN_109480644(plVar15 + 0x14,plVar10 + 0x14);
        plVar15 = plVar10;
        uVar21 = uVar12;
      } while ((long)uVar12 <= (long)(uVar20 - 2 >> 1));
      plVar17 = plVar8 + -0x18;
      if (plVar10 == plVar17) {
        param_2 = &lStack_1f0;
        FUN_1094826cc(plVar10);
        plVar10[3] = lStack_1d8;
        plVar10[2] = lStack_1e0;
        plVar10[5] = lStack_1c8;
        plVar10[4] = lStack_1d0;
        plVar10[7] = lStack_1b8;
        plVar10[6] = lStack_1c0;
        plVar10[8] = lStack_1b0;
        plVar10[0x12] = lStack_160;
        plVar10[0xf] = lStack_178;
        plVar10[0xe] = lStack_180;
        plVar10[0x11] = lStack_168;
        plVar10[0x10] = lStack_170;
        plVar10[0xd] = lStack_188;
        plVar10[0xc] = lStack_190;
        plVar10[0xb] = lStack_198;
        plVar10[10] = lStack_1a0;
        param_1 = (long *)plVar10[0x14];
        if (param_1 != (long *)0x0) {
          plVar10[0x15] = (long)param_1;
          __ZdlPv();
          plVar10[0x14] = 0;
          plVar10[0x15] = 0;
          plVar10[0x16] = 0;
        }
        plVar10[0x15] = (long)plStack_148;
        plVar10[0x14] = (long)plStack_150;
        plVar10[0x16] = lStack_140;
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        lStack_140 = 0;
      }
      else {
        FUN_1094826cc(plVar10,plVar17);
        lVar13 = plVar8[-0x16];
        lVar22 = plVar8[-0x13];
        lVar11 = plVar8[-0x14];
        plVar10[3] = plVar8[-0x15];
        plVar10[2] = lVar13;
        plVar10[5] = lVar22;
        plVar10[4] = lVar11;
        lVar11 = plVar8[-0x11];
        lVar13 = plVar8[-0x12];
        plVar10[8] = plVar8[-0x10];
        plVar10[7] = lVar11;
        plVar10[6] = lVar13;
        lVar23 = plVar8[-9];
        lVar22 = plVar8[-10];
        lVar11 = plVar8[-7];
        lVar13 = plVar8[-8];
        lVar25 = plVar8[-0xb];
        lVar24 = plVar8[-0xc];
        plVar10[0x12] = plVar8[-6];
        plVar10[0xf] = lVar23;
        plVar10[0xe] = lVar22;
        plVar10[0x11] = lVar11;
        plVar10[0x10] = lVar13;
        plVar10[0xd] = lVar25;
        plVar10[0xc] = lVar24;
        lVar13 = plVar8[-0xe];
        plVar10[0xb] = plVar8[-0xd];
        plVar10[10] = lVar13;
        FUN_109480644(plVar10 + 0x14,plVar8 + -4);
        param_2 = &lStack_1f0;
        FUN_1094826cc(plVar17);
        plVar8[-0x15] = lStack_1d8;
        plVar8[-0x16] = lStack_1e0;
        plVar8[-0x13] = lStack_1c8;
        plVar8[-0x14] = lStack_1d0;
        plVar8[-0x10] = lStack_1b0;
        plVar8[-0x11] = lStack_1b8;
        plVar8[-0x12] = lStack_1c0;
        plVar8[-6] = lStack_160;
        plVar8[-9] = lStack_178;
        plVar8[-10] = lStack_180;
        plVar8[-7] = lStack_168;
        plVar8[-8] = lStack_170;
        plVar8[-0xb] = lStack_188;
        plVar8[-0xc] = lStack_190;
        plVar8[-0xd] = lStack_198;
        plVar8[-0xe] = lStack_1a0;
        param_1 = (long *)plVar8[-4];
        if (param_1 != (long *)0x0) {
          plVar8[-3] = (long)param_1;
          __ZdlPv();
        }
        plVar8[-3] = (long)plStack_148;
        plVar8[-4] = (long)plStack_150;
        plVar8[-2] = lStack_140;
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        lStack_140 = 0;
        uVar21 = (long)plVar10 + (0xc0 - (long)plVar14);
        if (0xc0 < (long)uVar21) {
          uVar19 = (uVar21 >> 6) * -0x5555555555555555 - 2 >> 1;
          plVar15 = plVar14 + uVar19 * 0x18;
          lVar13 = plVar10[0x14];
          lVar11 = plVar10[0x15];
          uVar21 = lVar11 - lVar13;
          if (uVar21 < (ulong)(plVar15[0x15] - plVar15[0x14])) {
            plStack_128 = (long *)plVar10[1];
            lStack_130 = *plVar10;
            lStack_118 = plVar10[3];
            lStack_120 = plVar10[2];
            *plVar10 = 0;
            plVar10[1] = 0;
            lStack_108 = plVar10[5];
            lStack_110 = plVar10[4];
            lStack_f8 = plVar10[7];
            lStack_100 = plVar10[6];
            lStack_f0 = plVar10[8];
            lStack_d8 = plVar10[0xb];
            lStack_e0 = plVar10[10];
            lStack_c8 = plVar10[0xd];
            lStack_d0 = plVar10[0xc];
            lStack_b8 = plVar10[0xf];
            lStack_c0 = plVar10[0xe];
            lStack_a8 = plVar10[0x11];
            lStack_b0 = plVar10[0x10];
            lStack_a0 = plVar10[0x12];
            lStack_80 = plVar10[0x16];
            plVar10[0x14] = 0;
            plVar10[0x15] = 0;
            plVar10[0x16] = 0;
            lStack_90 = lVar13;
            lStack_88 = lVar11;
            do {
              plVar17 = plVar15;
              FUN_1094826cc(plVar10,plVar17);
              lVar13 = plVar17[2];
              lVar22 = plVar17[5];
              lVar11 = plVar17[4];
              plVar10[3] = plVar17[3];
              plVar10[2] = lVar13;
              plVar10[5] = lVar22;
              plVar10[4] = lVar11;
              lVar11 = plVar17[7];
              lVar13 = plVar17[6];
              plVar10[8] = plVar17[8];
              plVar10[7] = lVar11;
              plVar10[6] = lVar13;
              lVar23 = plVar17[0xf];
              lVar22 = plVar17[0xe];
              lVar11 = plVar17[0x11];
              lVar13 = plVar17[0x10];
              lVar25 = plVar17[0xd];
              lVar24 = plVar17[0xc];
              plVar10[0x12] = plVar17[0x12];
              plVar10[0xf] = lVar23;
              plVar10[0xe] = lVar22;
              plVar10[0x11] = lVar11;
              plVar10[0x10] = lVar13;
              plVar10[0xd] = lVar25;
              plVar10[0xc] = lVar24;
              lVar13 = plVar17[10];
              plVar10[0xb] = plVar17[0xb];
              plVar10[10] = lVar13;
              FUN_109480644(plVar10 + 0x14,plVar17 + 0x14);
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              plVar15 = plVar14 + uVar19 * 0x18;
              plVar10 = plVar17;
            } while (uVar21 < (ulong)(plVar15[0x15] - plVar15[0x14]));
            param_2 = &lStack_130;
            FUN_1094826cc(plVar17);
            plVar17[3] = lStack_118;
            plVar17[2] = lStack_120;
            plVar17[5] = lStack_108;
            plVar17[4] = lStack_110;
            plVar17[7] = lStack_f8;
            plVar17[6] = lStack_100;
            plVar17[8] = lStack_f0;
            plVar17[0x12] = lStack_a0;
            plVar17[0xf] = lStack_b8;
            plVar17[0xe] = lStack_c0;
            plVar17[0x11] = lStack_a8;
            plVar17[0x10] = lStack_b0;
            plVar17[0xd] = lStack_c8;
            plVar17[0xc] = lStack_d0;
            plVar17[0xb] = lStack_d8;
            plVar17[10] = lStack_e0;
            if (plVar17[0x14] != 0) {
              plVar17[0x15] = plVar17[0x14];
              __ZdlPv();
            }
            plVar15 = plStack_128;
            plVar17[0x15] = lStack_88;
            plVar17[0x14] = lStack_90;
            plVar17[0x16] = lStack_80;
            lStack_90 = 0;
            lStack_88 = 0;
            lStack_80 = 0;
            if (plStack_128 != (long *)0x0) {
              plVar10 = plStack_128 + 1;
              do {
                lVar13 = *plVar10;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar7) {
                  *plVar10 = lVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plStack_128 + 0x10))(plStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            param_1 = plStack_150;
            if (plStack_150 != (long *)0x0) {
              plStack_148 = plStack_150;
              __ZdlPv();
            }
          }
        }
      }
      plVar15 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        plVar10 = plStack_1e8 + 1;
        do {
          lVar13 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          param_1 = plVar15;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    plVar8 = plVar8 + -0x18;
    bVar7 = 2 < uVar20;
    uVar20 = uVar20 - 1;
  } while (bVar7);
LAB_10948405c:
  plVar10 = plVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
LAB_109484094:
  unaff_x22 = plVar17;
  unaff_x21 = plVar15;
  unaff_x20 = plVar14;
  unaff_x19 = plVar10;
  unaff_x30 = FUN_109484098;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&plStack_220;
  plVar14 = param_1;
  unaff_x29 = puVar1;
code_r0x000109484098:
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar20 = param_2[0x15] - param_2[0x14];
  plVar15 = plVar14;
  plVar17 = plVar14;
  if ((ulong)(plVar14[0x15] - plVar14[0x14]) < uVar20) {
    plVar10 = param_3;
    if ((uVar20 < (ulong)(param_3[0x15] - param_3[0x14])) ||
       (FUN_109482514(plVar14,param_2), plVar17 = param_2,
       (ulong)(param_2[0x15] - param_2[0x14]) < (ulong)(param_3[0x15] - param_3[0x14]))) {
LAB_109484144:
      FUN_109482514(plVar17,plVar10);
      plVar15 = plVar17;
    }
  }
  else if ((uVar20 < (ulong)(param_3[0x15] - param_3[0x14])) &&
          (plVar15 = param_2, FUN_109482514(param_2,param_3), plVar10 = param_2,
          (ulong)(plVar14[0x15] - plVar14[0x14]) < (ulong)(param_2[0x15] - param_2[0x14])))
  goto LAB_109484144;
  if ((((ulong)(param_4[0x15] - param_4[0x14]) <= (ulong)(param_3[0x15] - param_3[0x14])) ||
      (plVar15 = param_3, FUN_109482514(param_3,param_4),
      (ulong)(param_3[0x15] - param_3[0x14]) <= (ulong)(param_2[0x15] - param_2[0x14]))) ||
     (plVar15 = param_2, FUN_109482514(param_2,param_3),
     (ulong)(param_2[0x15] - param_2[0x14]) <= (ulong)(plVar14[0x15] - plVar14[0x14]))) {
    return plVar15;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(code **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
  plVar16 = param_2;
code_r0x000109482514:
  plVar17 = (long *)((long)register0x00000008 + -0x100);
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = plVar14[1];
  lVar13 = *plVar14;
  lVar23 = plVar14[3];
  lVar22 = plVar14[2];
  *plVar14 = 0;
  plVar14[1] = 0;
  *(long *)((long)register0x00000008 + -0xf8) = lVar11;
  *(long *)((long)register0x00000008 + -0x100) = lVar13;
  *(long *)((long)register0x00000008 + -0xe8) = lVar23;
  *(long *)((long)register0x00000008 + -0xf0) = lVar22;
  lVar13 = plVar14[4];
  lVar22 = plVar14[7];
  lVar11 = plVar14[6];
  *(long *)((long)register0x00000008 + -0xd8) = plVar14[5];
  *(long *)((long)register0x00000008 + -0xe0) = lVar13;
  *(long *)((long)register0x00000008 + -200) = lVar22;
  *(long *)((long)register0x00000008 + -0xd0) = lVar11;
  *(long *)((long)register0x00000008 + -0xc0) = plVar14[8];
  lVar13 = plVar14[0xe];
  lVar22 = plVar14[0x11];
  lVar11 = plVar14[0x10];
  *(long *)((long)register0x00000008 + -0x88) = plVar14[0xf];
  *(long *)((long)register0x00000008 + -0x90) = lVar13;
  *(long *)((long)register0x00000008 + -0x78) = lVar22;
  *(long *)((long)register0x00000008 + -0x80) = lVar11;
  *(long *)((long)register0x00000008 + -0x70) = plVar14[0x12];
  lVar22 = plVar14[10];
  lVar11 = plVar14[0xd];
  lVar13 = plVar14[0xc];
  *(long *)((long)register0x00000008 + -0xa8) = plVar14[0xb];
  *(long *)((long)register0x00000008 + -0xb0) = lVar22;
  *(long *)((long)register0x00000008 + -0x98) = lVar11;
  *(long *)((long)register0x00000008 + -0xa0) = lVar13;
  plVar10 = plVar14 + 0x14;
  lVar13 = *plVar10;
  *(long *)((long)register0x00000008 + -0x58) = plVar14[0x15];
  *(long *)((long)register0x00000008 + -0x60) = lVar13;
  *(long *)((long)register0x00000008 + -0x50) = plVar14[0x16];
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  *plVar10 = 0;
  FUN_1094826cc();
  lVar13 = plVar16[2];
  lVar22 = plVar16[5];
  lVar11 = plVar16[4];
  plVar14[3] = plVar16[3];
  plVar14[2] = lVar13;
  plVar14[5] = lVar22;
  plVar14[4] = lVar11;
  lVar11 = plVar16[7];
  lVar13 = plVar16[6];
  plVar14[8] = plVar16[8];
  plVar14[7] = lVar11;
  plVar14[6] = lVar13;
  lVar23 = plVar16[0xf];
  lVar22 = plVar16[0xe];
  lVar11 = plVar16[0x11];
  lVar13 = plVar16[0x10];
  lVar25 = plVar16[0xd];
  lVar24 = plVar16[0xc];
  plVar14[0x12] = plVar16[0x12];
  plVar14[0xf] = lVar23;
  plVar14[0xe] = lVar22;
  plVar14[0x11] = lVar11;
  plVar14[0x10] = lVar13;
  plVar14[0xd] = lVar25;
  plVar14[0xc] = lVar24;
  lVar13 = plVar16[10];
  plVar14[0xb] = plVar16[0xb];
  plVar14[10] = lVar13;
  FUN_109480644(plVar10,plVar16 + 0x14);
  FUN_1094826cc(plVar16);
  lVar13 = *(long *)((long)register0x00000008 + -0xf0);
  lVar22 = *(long *)((long)register0x00000008 + -0xd8);
  lVar11 = *(long *)((long)register0x00000008 + -0xe0);
  plVar16[3] = *(long *)((long)register0x00000008 + -0xe8);
  plVar16[2] = lVar13;
  plVar16[5] = lVar22;
  plVar16[4] = lVar11;
  lVar13 = *(long *)((long)register0x00000008 + -0xd0);
  plVar16[7] = *(long *)((long)register0x00000008 + -200);
  plVar16[6] = lVar13;
  plVar16[8] = *(long *)((long)register0x00000008 + -0xc0);
  lVar13 = *(long *)((long)register0x00000008 + -0x90);
  lVar22 = *(long *)((long)register0x00000008 + -0x78);
  lVar11 = *(long *)((long)register0x00000008 + -0x80);
  plVar16[0xf] = *(long *)((long)register0x00000008 + -0x88);
  plVar16[0xe] = lVar13;
  plVar16[0x11] = lVar22;
  plVar16[0x10] = lVar11;
  plVar16[0x12] = *(long *)((long)register0x00000008 + -0x70);
  lVar22 = *(long *)((long)register0x00000008 + -0xb0);
  lVar11 = *(long *)((long)register0x00000008 + -0x98);
  lVar13 = *(long *)((long)register0x00000008 + -0xa0);
  plVar16[0xb] = *(long *)((long)register0x00000008 + -0xa8);
  plVar16[10] = lVar22;
  plVar16[0xd] = lVar11;
  plVar16[0xc] = lVar13;
  plVar15 = (long *)plVar16[0x14];
  if (plVar15 != (long *)0x0) {
    plVar16[0x15] = (long)plVar15;
    __ZdlPv();
  }
  lVar13 = *(long *)((long)register0x00000008 + -0x60);
  plVar16[0x15] = *(long *)((long)register0x00000008 + -0x58);
  plVar16[0x14] = lVar13;
  plVar16[0x16] = *(long *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  plVar14 = *(long **)((long)register0x00000008 + -0xf8);
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 1;
    do {
      lVar13 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      plVar15 = plVar14;
      (**(code **)(*plVar14 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
      {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar14);
        return plVar14;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
    return plVar15;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  *(long **)((long)register0x00000008 + -0x120) = plVar10;
  *(long **)((long)register0x00000008 + -0x118) = plVar14;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x108) = FUN_1094826cc;
  lVar11 = plVar17[1];
  lVar13 = *plVar17;
  *plVar17 = 0;
  plVar17[1] = 0;
  plVar17 = (long *)plVar15[1];
  plVar15[1] = lVar11;
  *plVar15 = lVar13;
  if (plVar17 != (long *)0x0) {
    plVar14 = plVar17 + 1;
    do {
      lVar13 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  return plVar15;
}



/* Entry: 109484098; end: 1094841cf;  */

long * FUN_109484098(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_38;
  
  uVar6 = param_2[0x15] - param_2[0x14];
  plVar4 = param_1;
  plVar8 = param_1;
  if ((ulong)(param_1[0x15] - param_1[0x14]) < uVar6) {
    plVar5 = param_3;
    if ((uVar6 < (ulong)(param_3[0x15] - param_3[0x14])) ||
       (FUN_109482514(param_1,param_2), plVar8 = param_2,
       (ulong)(param_2[0x15] - param_2[0x14]) < (ulong)(param_3[0x15] - param_3[0x14]))) {
LAB_109484144:
      FUN_109482514(plVar8,plVar5);
      plVar4 = plVar8;
    }
  }
  else if ((uVar6 < (ulong)(param_3[0x15] - param_3[0x14])) &&
          (plVar4 = param_2, FUN_109482514(param_2,param_3), plVar5 = param_2,
          (ulong)(param_1[0x15] - param_1[0x14]) < (ulong)(param_2[0x15] - param_2[0x14])))
  goto LAB_109484144;
  if ((((ulong)(*(long *)(param_4 + 0xa8) - *(long *)(param_4 + 0xa0)) <=
        (ulong)(param_3[0x15] - param_3[0x14])) ||
      (plVar4 = param_3, FUN_109482514(param_3,param_4),
      (ulong)(param_3[0x15] - param_3[0x14]) <= (ulong)(param_2[0x15] - param_2[0x14]))) ||
     (plVar4 = param_2, FUN_109482514(param_2,param_3),
     (ulong)(param_2[0x15] - param_2[0x14]) <= (ulong)(param_1[0x15] - param_1[0x14]))) {
    return plVar4;
  }
  plVar8 = &lStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f8 = (long *)param_1[1];
  lStack_100 = *param_1;
  lStack_e8 = param_1[3];
  lStack_f0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_d8 = param_1[5];
  lStack_e0 = param_1[4];
  lStack_c8 = param_1[7];
  lStack_d0 = param_1[6];
  lStack_c0 = param_1[8];
  lStack_88 = param_1[0xf];
  lStack_90 = param_1[0xe];
  lStack_78 = param_1[0x11];
  lStack_80 = param_1[0x10];
  lStack_70 = param_1[0x12];
  lStack_a8 = param_1[0xb];
  lStack_b0 = param_1[10];
  lStack_98 = param_1[0xd];
  lStack_a0 = param_1[0xc];
  plVar4 = param_1 + 0x14;
  lStack_58 = param_1[0x15];
  lStack_60 = *plVar4;
  lStack_50 = param_1[0x16];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *plVar4 = 0;
  FUN_1094826cc();
  lVar7 = param_2[2];
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = lVar7;
  param_1[5] = lVar10;
  param_1[4] = lVar9;
  lVar9 = param_2[7];
  lVar7 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = lVar9;
  param_1[6] = lVar7;
  lVar11 = param_2[0xf];
  lVar10 = param_2[0xe];
  lVar9 = param_2[0x11];
  lVar7 = param_2[0x10];
  lVar13 = param_2[0xd];
  lVar12 = param_2[0xc];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = lVar11;
  param_1[0xe] = lVar10;
  param_1[0x11] = lVar9;
  param_1[0x10] = lVar7;
  param_1[0xd] = lVar13;
  param_1[0xc] = lVar12;
  lVar7 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar7;
  FUN_109480644(plVar4,param_2 + 0x14);
  FUN_1094826cc(param_2);
  param_2[3] = lStack_e8;
  param_2[2] = lStack_f0;
  param_2[5] = lStack_d8;
  param_2[4] = lStack_e0;
  param_2[7] = lStack_c8;
  param_2[6] = lStack_d0;
  param_2[8] = lStack_c0;
  param_2[0xf] = lStack_88;
  param_2[0xe] = lStack_90;
  param_2[0x11] = lStack_78;
  param_2[0x10] = lStack_80;
  param_2[0x12] = lStack_70;
  param_2[0xb] = lStack_a8;
  param_2[10] = lStack_b0;
  param_2[0xd] = lStack_98;
  param_2[0xc] = lStack_a0;
  plVar4 = (long *)param_2[0x14];
  if (plVar4 != (long *)0x0) {
    param_2[0x15] = (long)plVar4;
    __ZdlPv();
  }
  plVar5 = plStack_f8;
  param_2[0x15] = lStack_58;
  param_2[0x14] = lStack_60;
  param_2[0x16] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      plVar4 = plStack_f8;
      (**(code **)(*plStack_f8 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return plVar5;
      }
      goto LAB_1094826c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
LAB_1094826c8:
  ___stack_chk_fail();
  lVar9 = plVar8[1];
  lVar7 = *plVar8;
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8 = (long *)plVar4[1];
  plVar4[1] = lVar9;
  *plVar4 = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar5 = plVar8 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar4;
}



/* Entry: 1094841d0; end: 109484667;  */

/* WARNING: Removing unreachable block (ram,0x000109484a14) */
/* WARNING: Removing unreachable block (ram,0x000109484a18) */
/* WARNING: Removing unreachable block (ram,0x000109484a20) */
/* WARNING: Removing unreachable block (ram,0x000109484a28) */
/* WARNING: Removing unreachable block (ram,0x000109484a2c) */

void FUN_1094841d0(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plStack_200;
  long *plStack_1f8;
  long alStack_1b0 [3];
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  long alStack_170 [3];
  long lStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = ((long)param_3 - (long)param_2 >> 6) * -0x5555555555555555;
  plVar5 = param_2;
  plVar8 = param_3;
  if (2 < (long)uVar10) {
    if (uVar10 == 3) {
      plVar6 = param_3 + -0x18;
      uVar10 = param_2[0x2d] - param_2[0x2c];
      if ((ulong)(param_2[0x15] - param_2[0x14]) < uVar10) {
        if ((ulong)(param_3[-3] - param_3[-4]) <= uVar10) {
          plVar8 = param_2 + 0x18;
          FUN_109482514(param_2);
          if ((ulong)(param_3[-3] - param_3[-4]) <= (ulong)(param_2[0x2d] - param_2[0x2c]))
          goto LAB_109484618;
          plVar5 = param_2 + 0x18;
        }
        goto LAB_109484418;
      }
      if ((ulong)(param_3[-3] - param_3[-4]) <= uVar10) goto LAB_109484618;
    }
    else {
      if (uVar10 == 4) {
        param_5 = param_3 + -0x18;
        plVar8 = param_2 + 0x18;
        param_4 = param_2 + 0x30;
        FUN_109484098(param_2,plVar8,param_4,param_5);
        goto LAB_109484618;
      }
      if (uVar10 != 5) goto LAB_10948432c;
      plVar8 = param_2 + 0x18;
      param_4 = param_2 + 0x30;
      param_5 = param_2 + 0x48;
      FUN_109484098(param_2,plVar8,param_4,param_5);
      if ((ulong)(param_3[-3] - param_3[-4]) <= (ulong)(param_2[0x5d] - param_2[0x5c]))
      goto LAB_109484618;
      plVar8 = param_3 + -0x18;
      FUN_109482514(param_2 + 0x48);
      if ((ulong)(param_2[0x5d] - param_2[0x5c]) <= (ulong)(param_2[0x45] - param_2[0x44]))
      goto LAB_109484618;
      plVar8 = param_2 + 0x48;
      FUN_109482514(param_2 + 0x30);
      if ((ulong)(param_2[0x45] - param_2[0x44]) <= (ulong)(param_2[0x2d] - param_2[0x2c]))
      goto LAB_109484618;
      plVar6 = param_2 + 0x30;
    }
    FUN_109482514(param_2 + 0x18);
    plVar8 = plVar6;
    if ((ulong)(param_2[0x2d] - param_2[0x2c]) <= (ulong)(param_2[0x15] - param_2[0x14]))
    goto LAB_109484618;
    plVar6 = param_2 + 0x18;
LAB_109484418:
    FUN_109482514(plVar5);
    plVar8 = plVar6;
    goto LAB_109484618;
  }
  if (uVar10 < 2) goto LAB_109484618;
  if (uVar10 == 2) {
    if ((ulong)(param_3[-3] - param_3[-4]) <= (ulong)(param_2[0x15] - param_2[0x14]))
    goto LAB_109484618;
    plVar6 = param_3 + -0x18;
    goto LAB_109484418;
  }
LAB_10948432c:
  plVar5 = param_2 + 0x30;
  uVar10 = param_2[0x2d] - param_2[0x2c];
  plVar6 = param_2;
  if ((ulong)(param_2[0x15] - param_2[0x14]) < uVar10) {
    plVar8 = plVar5;
    if ((ulong)(param_2[0x45] - param_2[0x44]) <= uVar10) {
      plVar8 = param_2 + 0x18;
      FUN_109482514(param_2);
      if ((ulong)(param_2[0x45] - param_2[0x44]) <= (ulong)(param_2[0x2d] - param_2[0x2c]))
      goto LAB_109484454;
      plVar6 = param_2 + 0x18;
      plVar8 = plVar5;
    }
LAB_109484450:
    FUN_109482514(plVar6);
  }
  else if ((uVar10 < (ulong)(param_2[0x45] - param_2[0x44])) &&
          (plVar8 = plVar5, FUN_109482514(param_2 + 0x18),
          (ulong)(param_2[0x15] - param_2[0x14]) < (ulong)(param_2[0x2d] - param_2[0x2c]))) {
    plVar8 = param_2 + 0x18;
    goto LAB_109484450;
  }
LAB_109484454:
  if (param_2 + 0x48 != param_3) {
    lVar13 = 0;
    iVar14 = 0;
    plVar6 = param_2 + 0x48;
    do {
      lVar12 = plVar6[0x14];
      lVar4 = plVar6[0x15];
      uVar10 = lVar4 - lVar12;
      if ((ulong)(plVar5[0x15] - plVar5[0x14]) < uVar10) {
        plStack_128 = (long *)plVar6[1];
        lStack_130 = *plVar6;
        lStack_118 = plVar6[3];
        lStack_120 = plVar6[2];
        *plVar6 = 0;
        plVar6[1] = 0;
        lStack_108 = plVar6[5];
        lStack_110 = plVar6[4];
        lStack_f8 = plVar6[7];
        lStack_100 = plVar6[6];
        lStack_f0 = plVar6[8];
        lStack_b8 = plVar6[0xf];
        lStack_c0 = plVar6[0xe];
        lStack_a8 = plVar6[0x11];
        lStack_b0 = plVar6[0x10];
        lStack_a0 = plVar6[0x12];
        lStack_d8 = plVar6[0xb];
        lStack_e0 = plVar6[10];
        lStack_c8 = plVar6[0xd];
        lStack_d0 = plVar6[0xc];
        lStack_80 = plVar6[0x16];
        plVar6[0x14] = 0;
        plVar6[0x15] = 0;
        plVar6[0x16] = 0;
        lVar3 = lVar13;
        lStack_90 = lVar12;
        lStack_88 = lVar4;
        do {
          lVar12 = lVar3;
          FUN_1094826cc((long)param_2 + lVar12 + 0x240,(long)param_2 + lVar12 + 0x180);
          *(undefined8 *)((long)param_2 + lVar12 + 600) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x198);
          *(undefined8 *)((long)param_2 + lVar12 + 0x250) =
               *(undefined8 *)((long)param_2 + lVar12 + 400);
          *(undefined8 *)((long)param_2 + lVar12 + 0x268) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1a8);
          *(undefined8 *)((long)param_2 + lVar12 + 0x260) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1a0);
          *(undefined8 *)((long)param_2 + lVar12 + 0x278) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1b8);
          *(undefined8 *)((long)param_2 + lVar12 + 0x270) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1b0);
          *(undefined8 *)((long)param_2 + lVar12 + 0x280) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1c0);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2b8) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1f8);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2b0) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1f0);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2c8) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x208);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2c0) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x200);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2d0) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x210);
          plVar5 = (long *)((long)param_2 + lVar12 + 0x220);
          *(undefined8 *)((long)param_2 + lVar12 + 0x298) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1d8);
          *(undefined8 *)((long)param_2 + lVar12 + 0x290) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1d0);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2a8) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1e8);
          *(undefined8 *)((long)param_2 + lVar12 + 0x2a0) =
               *(undefined8 *)((long)param_2 + lVar12 + 0x1e0);
          FUN_109480644((long)param_2 + lVar12 + 0x2e0,plVar5);
          plVar9 = param_2;
          if (lVar12 == -0x180) goto LAB_109484554;
          lVar3 = lVar12 + -0xc0;
        } while ((ulong)(*(long *)((long)param_2 + lVar12 + 0x168) -
                        *(long *)((long)param_2 + lVar12 + 0x160)) < uVar10);
        plVar9 = (long *)((long)param_2 + lVar12 + 0x180);
LAB_109484554:
        plVar8 = &lStack_130;
        FUN_1094826cc(plVar9);
        *(long *)((long)param_2 + lVar12 + 0x198) = lStack_118;
        *(long *)((long)param_2 + lVar12 + 400) = lStack_120;
        *(long *)((long)param_2 + lVar12 + 0x1a8) = lStack_108;
        *(long *)((long)param_2 + lVar12 + 0x1a0) = lStack_110;
        *(long *)((long)param_2 + lVar12 + 0x1b8) = lStack_f8;
        *(long *)((long)param_2 + lVar12 + 0x1b0) = lStack_100;
        *(long *)((long)param_2 + lVar12 + 0x1c0) = lStack_f0;
        *(long *)((long)param_2 + lVar12 + 0x1f8) = lStack_b8;
        *(long *)((long)param_2 + lVar12 + 0x1f0) = lStack_c0;
        *(long *)((long)param_2 + lVar12 + 0x208) = lStack_a8;
        *(long *)((long)param_2 + lVar12 + 0x200) = lStack_b0;
        *(long *)((long)param_2 + lVar12 + 0x210) = lStack_a0;
        *(long *)((long)param_2 + lVar12 + 0x1d8) = lStack_d8;
        *(long *)((long)param_2 + lVar12 + 0x1d0) = lStack_e0;
        *(long *)((long)param_2 + lVar12 + 0x1e8) = lStack_c8;
        *(long *)((long)param_2 + lVar12 + 0x1e0) = lStack_d0;
        lVar4 = *(long *)((long)param_2 + lVar12 + 0x220);
        if (lVar4 != 0) {
          plVar9[0x15] = lVar4;
          __ZdlPv();
          *plVar5 = 0;
          *(undefined8 *)((long)param_2 + lVar12 + 0x228) = 0;
          *(undefined8 *)((long)param_2 + lVar12 + 0x230) = 0;
        }
        param_1 = lStack_88;
        plVar7 = plStack_128;
        *plVar5 = lStack_90;
        plVar9[0x16] = lStack_80;
        plVar9[0x15] = lStack_88;
        lStack_88 = 0;
        lStack_80 = 0;
        lStack_90 = 0;
        if (plStack_128 != (long *)0x0) {
          plVar5 = plStack_128 + 1;
          do {
            lVar12 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        iVar14 = iVar14 + 1;
        if (iVar14 == 8) {
          plVar5 = (long *)(ulong)(plVar6 + 0x18 == param_3);
          goto LAB_10948461c;
        }
      }
      plVar9 = plVar6 + 0x18;
      lVar13 = lVar13 + 0xc0;
      plVar5 = plVar6;
      plVar6 = plVar9;
    } while (plVar9 != param_3);
  }
LAB_109484618:
  plVar5 = (long *)0x1;
LAB_10948461c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  plVar7 = alStack_170;
  plStack_150 = param_3;
  plStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_109484668;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar5;
  plVar9 = plVar8;
  if (plVar8 != plVar5) {
    plVar6 = (long *)plVar5[3];
    plVar11 = (long *)plVar8[3];
    param_2 = plVar8;
    param_3 = plVar5;
    if (plVar6 == plVar5) {
      if (plVar11 == plVar8) {
        (**(code **)(*plVar6 + 0x18))(plVar6,alStack_170);
        (**(code **)(*(long *)plVar5[3] + 0x20))();
        plVar5[3] = 0;
        (**(code **)(*(long *)plVar8[3] + 0x18))((long *)plVar8[3],plVar5);
        (**(code **)(*(long *)plVar8[3] + 0x20))();
        plVar8[3] = 0;
        plVar5[3] = (long)plVar5;
        (**(code **)(alStack_170[0] + 0x18))(alStack_170);
        (**(code **)(alStack_170[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar6 + 0x18))();
        plVar7 = (long *)plVar5[3];
        (**(code **)(*plVar7 + 0x20))();
        plVar5[3] = plVar8[3];
      }
      plVar8[3] = (long)plVar8;
      plVar6 = plVar7;
    }
    else if (plVar11 == plVar8) {
      plVar9 = plVar5;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      plVar6 = (long *)plVar8[3];
      (**(code **)(*plVar6 + 0x20))();
      plVar8[3] = plVar5[3];
      plVar5[3] = (long)plVar5;
    }
    else {
      plVar5[3] = (long)plVar11;
      plVar8[3] = (long)plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar9 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar5 = alStack_1b0;
  pcStack_178 = FUN_1094847d4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  plStack_190 = param_3;
  plStack_188 = param_2;
  ppuStack_180 = &puStack_140;
  if (plVar9 != plVar6) {
    plVar7 = (long *)plVar6[3];
    plVar11 = (long *)plVar9[3];
    if (plVar7 == plVar6) {
      if (plVar11 == plVar9) {
        (**(code **)(*plVar7 + 0x18))(plVar7,alStack_1b0);
        (**(code **)(*(long *)plVar6[3] + 0x20))();
        plVar6[3] = 0;
        (**(code **)(*(long *)plVar9[3] + 0x18))((long *)plVar9[3],plVar6);
        (**(code **)(*(long *)plVar9[3] + 0x20))();
        plVar9[3] = 0;
        plVar6[3] = (long)plVar6;
        (**(code **)(alStack_1b0[0] + 0x18))(alStack_1b0);
        (**(code **)(alStack_1b0[0] + 0x20))(alStack_1b0);
      }
      else {
        (**(code **)(*plVar7 + 0x18))();
        plVar5 = (long *)plVar6[3];
        (**(code **)(*plVar5 + 0x20))();
        plVar6[3] = plVar9[3];
      }
      plVar9[3] = (long)plVar9;
      plVar6 = plVar5;
    }
    else if (plVar11 == plVar9) {
      plVar8 = plVar6;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      plVar5 = (long *)plVar9[3];
      (**(code **)(*plVar5 + 0x20))();
      plVar9[3] = plVar6[3];
      plVar6[3] = (long)plVar6;
      plVar6 = plVar5;
    }
    else {
      plVar6[3] = (long)plVar11;
      plVar9[3] = (long)plVar7;
      plVar6 = plVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar5 = (long *)0x38;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110af63a8;
  plVar5[4] = param_4[1];
  plVar5[5] = param_4[2];
  *(int *)(plVar5 + 6) = (int)param_4[3];
  plStack_200 = plVar5 + 3;
  *plStack_200 = (long)&PTR_FUN_110af4c80;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(param_4 + 3) = 0;
  plStack_1f8 = plVar5;
  FUN_109452cd0(param_1,plVar6,plVar8,&plStack_200,param_5);
  plVar8 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    plVar5 = plStack_1f8 + 1;
    do {
      lVar13 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 109484668; end: 1094847d3;  */

/* WARNING: Removing unreachable block (ram,0x000109484a14) */
/* WARNING: Removing unreachable block (ram,0x000109484a18) */
/* WARNING: Removing unreachable block (ram,0x000109484a20) */
/* WARNING: Removing unreachable block (ram,0x000109484a28) */
/* WARNING: Removing unreachable block (ram,0x000109484a2c) */

void FUN_109484668(undefined8 param_1,long *param_2,long *param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plStack_d0;
  long *plStack_c8;
  long alStack_80 [3];
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  plVar4 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  plVar6 = param_3;
  if (param_3 != param_2) {
    plVar3 = (long *)param_2[3];
    plVar7 = (long *)param_3[3];
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    if (plVar3 == param_2) {
      if (plVar7 == param_3) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_40);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        (**(code **)(*(long *)param_3[3] + 0x18))((long *)param_3[3],param_2);
        (**(code **)(*(long *)param_3[3] + 0x20))();
        param_3[3] = 0;
        param_2[3] = (long)param_2;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar4 = (long *)param_2[3];
        (**(code **)(*plVar4 + 0x20))();
        param_2[3] = param_3[3];
      }
      param_3[3] = (long)param_3;
      plVar3 = plVar4;
    }
    else if (plVar7 == param_3) {
      plVar6 = param_2;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar3 = (long *)param_3[3];
      (**(code **)(*plVar3 + 0x20))();
      param_3[3] = param_2[3];
      param_2[3] = (long)param_2;
    }
    else {
      param_2[3] = (long)plVar7;
      param_3[3] = (long)plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)plVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    plVar7 = alStack_80;
    pcStack_48 = FUN_1094847d4;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar6;
    plStack_60 = unaff_x20;
    plStack_58 = unaff_x19;
    puStack_50 = &stack0xfffffffffffffff0;
    if (plVar6 != plVar3) {
      plVar5 = (long *)plVar3[3];
      plVar8 = (long *)plVar6[3];
      if (plVar5 == plVar3) {
        if (plVar8 == plVar6) {
          (**(code **)(*plVar5 + 0x18))(plVar5,alStack_80);
          (**(code **)(*(long *)plVar3[3] + 0x20))();
          plVar3[3] = 0;
          (**(code **)(*(long *)plVar6[3] + 0x18))((long *)plVar6[3],plVar3);
          (**(code **)(*(long *)plVar6[3] + 0x20))();
          plVar6[3] = 0;
          plVar3[3] = (long)plVar3;
          (**(code **)(alStack_80[0] + 0x18))(alStack_80);
          (**(code **)(alStack_80[0] + 0x20))(alStack_80);
        }
        else {
          (**(code **)(*plVar5 + 0x18))();
          plVar7 = (long *)plVar3[3];
          (**(code **)(*plVar7 + 0x20))();
          plVar3[3] = plVar6[3];
        }
        plVar6[3] = (long)plVar6;
        plVar3 = plVar7;
      }
      else if (plVar8 == plVar6) {
        plVar4 = plVar3;
        (**(code **)(*plVar8 + 0x18))(plVar8);
        plVar7 = (long *)plVar6[3];
        (**(code **)(*plVar7 + 0x20))();
        plVar6[3] = plVar3[3];
        plVar3[3] = (long)plVar3;
        plVar3 = plVar7;
      }
      else {
        plVar3[3] = (long)plVar8;
        plVar6[3] = (long)plVar5;
        plVar3 = plVar5;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      if ((int)plVar4 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      plVar6 = (long *)0x38;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110af63a8;
      plVar6[4] = *(long *)(param_4 + 8);
      plVar6[5] = *(long *)(param_4 + 0x10);
      *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_4 + 0x18);
      plStack_d0 = plVar6 + 3;
      *plStack_d0 = (long)&PTR_FUN_110af4c80;
      *(undefined8 *)(param_4 + 8) = 0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      *(undefined4 *)(param_4 + 0x18) = 0;
      plStack_c8 = plVar6;
      FUN_109452cd0(param_1,plVar3,plVar4,&plStack_d0,param_5);
      plVar3 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar6 = plStack_c8 + 1;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1094847d4; end: 10948493f;  */

/* WARNING: Removing unreachable block (ram,0x000109484a14) */
/* WARNING: Removing unreachable block (ram,0x000109484a18) */
/* WARNING: Removing unreachable block (ram,0x000109484a20) */
/* WARNING: Removing unreachable block (ram,0x000109484a28) */
/* WARNING: Removing unreachable block (ram,0x000109484a2c) */

void FUN_1094847d4(undefined8 param_1,long *param_2,long *param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long alStack_40 [3];
  long lStack_28;
  
  plVar4 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_3;
  if (param_3 != param_2) {
    plVar3 = (long *)param_2[3];
    plVar6 = (long *)param_3[3];
    if (plVar3 == param_2) {
      if (plVar6 == param_3) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_40);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        (**(code **)(*(long *)param_3[3] + 0x18))((long *)param_3[3],param_2);
        (**(code **)(*(long *)param_3[3] + 0x20))();
        param_3[3] = 0;
        param_2[3] = (long)param_2;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar4 = (long *)param_2[3];
        (**(code **)(*plVar4 + 0x20))();
        param_2[3] = param_3[3];
      }
      param_3[3] = (long)param_3;
      param_2 = plVar4;
    }
    else if (plVar6 == param_3) {
      plVar5 = param_2;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar4 = (long *)param_3[3];
      (**(code **)(*plVar4 + 0x20))();
      param_3[3] = param_2[3];
      param_2[3] = (long)param_2;
      param_2 = plVar4;
    }
    else {
      param_2[3] = (long)plVar6;
      param_3[3] = (long)plVar3;
      param_2 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((int)plVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    plVar4 = (long *)0x38;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110af63a8;
    plVar4[4] = *(long *)(param_4 + 8);
    plVar4[5] = *(long *)(param_4 + 0x10);
    *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_4 + 0x18);
    plStack_90 = plVar4 + 3;
    *plStack_90 = (long)&PTR_FUN_110af4c80;
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined4 *)(param_4 + 0x18) = 0;
    plStack_88 = plVar4;
    FUN_109452cd0(param_1,param_2,plVar5,&plStack_90,param_5);
    plVar5 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar4 = plStack_88 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  return;
}



/* Entry: 109484940; end: 109484a77;  */

/* WARNING: Removing unreachable block (ram,0x000109484a14) */
/* WARNING: Removing unreachable block (ram,0x000109484a18) */
/* WARNING: Removing unreachable block (ram,0x000109484a20) */
/* WARNING: Removing unreachable block (ram,0x000109484a28) */
/* WARNING: Removing unreachable block (ram,0x000109484a2c) */

void FUN_109484940(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x38;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110af63a8;
  plVar4[4] = *(long *)(param_4 + 8);
  plVar4[5] = *(long *)(param_4 + 0x10);
  *(undefined4 *)(plVar4 + 6) = *(undefined4 *)(param_4 + 0x18);
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_FUN_110af4c80;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  plStack_48 = plVar4;
  FUN_109452cd0(param_1,param_2,param_3,&plStack_50,param_5);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 109484a78; end: 109484b4f;  */

undefined8 * FUN_109484a78(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110af4c80;
  func_0x00010938e870(param_1,&uStack_38);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010938e870(param_1,&uStack_38);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar1 = 0;
    do {
      _memcpy(param_1[1] + (long)*(int *)(param_1 + 3) * (long)iVar1,
              *(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)iVar1,
              (long)*(int *)(param_1 + 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 109484b50; end: 109484c13;  */

long * FUN_109484b50(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar4 = param_1;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1094008f0();
      lVar9 = param_1[1];
      uVar1 = 0;
      if (param_1[2] != lVar9) {
        uVar1 = (param_1[2] - lVar9) * 0x40 - 1;
      }
      lVar6 = param_1[4];
      lVar8 = param_1[5];
      uVar7 = lVar8 + lVar6;
      if (uVar1 == uVar7) {
        FUN_109484cc4(param_1);
        lVar6 = param_1[4];
        lVar8 = param_1[5];
        lVar9 = param_1[1];
        uVar7 = lVar6 + lVar8;
      }
      *(undefined8 *)(*(long *)(lVar9 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8) = *param_2;
      param_1[5] = lVar8 + 1;
      uVar1 = lVar8 + 1 + lVar6;
      plVar3 = (long *)(param_1[1] + (uVar1 >> 9) * 8);
      lVar8 = *plVar3;
      lVar9 = lVar8 + (uVar1 & 0x1ff) * 8;
      lVar6 = 0;
      if (param_1[2] != param_1[1]) {
        lVar6 = lVar9;
      }
      if (lVar6 == lVar8) {
        lVar9 = plVar3[-1] + 0x1000;
      }
      return (long *)(lVar9 + -8);
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_109265fac();
    lVar6 = *param_1;
    puVar2 = (undefined8 *)((long)plVar3 + lVar9);
    lVar9 = (long)puVar2 - (param_1[1] - lVar6);
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar9,lVar6);
    plVar4 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar3 + uVar7);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return plVar4;
}



/* Entry: 109484c14; end: 109484cc3;  */

long FUN_109484c14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar4) * 0x40 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar5 = lVar6 + lVar3;
  if (uVar1 == uVar5) {
    FUN_109484cc4(param_1);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 8);
    uVar5 = lVar3 + lVar6;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar5 >> 9) * 8) + (uVar5 & 0x1ff) * 8) = *param_2;
  *(long *)(param_1 + 0x28) = lVar6 + 1;
  uVar1 = lVar6 + 1 + lVar3;
  plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8);
  lVar6 = *plVar2;
  lVar4 = lVar6 + (uVar1 & 0x1ff) * 8;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar3 = lVar4;
  }
  if (lVar3 == lVar6) {
    lVar4 = plVar2[-1] + 0x1000;
  }
  return lVar4 + -8;
}



/* Entry: 109484cc4; end: 109484e73;  */

void FUN_109484cc4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x200) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_109485390();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0x1000;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_109485184(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_109485288(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x000109484f78(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10948507c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_109484e74(param_1,&plStack_60);
  return;
}



/* Entry: 109484e74; end: 10948507b;  */

void FUN_109484e74(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_109485390();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10948507c; end: 109485183;  */

void FUN_10948507c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_109485390();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109485184; end: 109485287;  */

void FUN_109485184(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_109485390();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109485288; end: 10948538f;  */

void FUN_109485288(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_109485390();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109485390; end: 1094853c3;  */

undefined1  [16] FUN_109485390(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  func_0x000104c4f740();
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = *(long *)(puVar4 + 8);
  uVar1 = 0;
  if (*(long *)(puVar4 + 0x10) != lVar3) {
    uVar1 = (*(long *)(puVar4 + 0x10) - lVar3) * 0x40 - 1;
  }
  lVar6 = *(long *)(puVar4 + 0x20);
  lVar8 = *(long *)(puVar4 + 0x28);
  uVar7 = lVar8 + lVar6;
  puVar5 = param_2;
  if (uVar1 == uVar7) {
    FUN_109484cc4(puVar4);
    lVar6 = *(long *)(puVar4 + 0x20);
    lVar8 = *(long *)(puVar4 + 0x28);
    lVar3 = *(long *)(puVar4 + 8);
    uVar7 = lVar6 + lVar8;
  }
  *(undefined8 *)(*(long *)(lVar3 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8) = *param_2;
  *(long *)(puVar4 + 0x28) = lVar8 + 1;
  uVar1 = lVar8 + 1 + lVar6;
  plVar2 = (long *)(*(long *)(puVar4 + 8) + (uVar1 >> 9) * 8);
  lVar8 = *plVar2;
  lVar3 = lVar8 + (uVar1 & 0x1ff) * 8;
  lVar6 = 0;
  if (*(long *)(puVar4 + 0x10) != *(long *)(puVar4 + 8)) {
    lVar6 = lVar3;
  }
  if (lVar6 == lVar8) {
    lVar3 = plVar2[-1] + 0x1000;
  }
  auVar10._0_8_ = lVar3 + -8;
  auVar10._8_8_ = puVar5;
  return auVar10;
}



/* Entry: 1094853c4; end: 1094853d7;  */

long FUN_1094853c4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar5 = *(long *)(puVar3 + 8);
  uVar1 = 0;
  if (*(long *)(puVar3 + 0x10) != lVar5) {
    uVar1 = (*(long *)(puVar3 + 0x10) - lVar5) * 0x40 - 1;
  }
  lVar4 = *(long *)(puVar3 + 0x20);
  lVar7 = *(long *)(puVar3 + 0x28);
  uVar6 = lVar7 + lVar4;
  if (uVar1 == uVar6) {
    FUN_109484cc4(puVar3);
    lVar4 = *(long *)(puVar3 + 0x20);
    lVar7 = *(long *)(puVar3 + 0x28);
    lVar5 = *(long *)(puVar3 + 8);
    uVar6 = lVar4 + lVar7;
  }
  *(undefined8 *)(*(long *)(lVar5 + (uVar6 >> 9) * 8) + (uVar6 & 0x1ff) * 8) = *param_2;
  *(long *)(puVar3 + 0x28) = lVar7 + 1;
  uVar1 = lVar7 + 1 + lVar4;
  plVar2 = (long *)(*(long *)(puVar3 + 8) + (uVar1 >> 9) * 8);
  lVar7 = *plVar2;
  lVar5 = lVar7 + (uVar1 & 0x1ff) * 8;
  lVar4 = 0;
  if (*(long *)(puVar3 + 0x10) != *(long *)(puVar3 + 8)) {
    lVar4 = lVar5;
  }
  if (lVar4 == lVar7) {
    lVar5 = plVar2[-1] + 0x1000;
  }
  return lVar5 + -8;
}



/* Entry: 1094853d8; end: 109485487;  */

long FUN_1094853d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar4) * 0x40 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  uVar5 = lVar6 + lVar3;
  if (uVar1 == uVar5) {
    FUN_109484cc4(param_1);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 8);
    uVar5 = lVar3 + lVar6;
  }
  *(undefined8 *)(*(long *)(lVar4 + (uVar5 >> 9) * 8) + (uVar5 & 0x1ff) * 8) = *param_2;
  *(long *)(param_1 + 0x28) = lVar6 + 1;
  uVar1 = lVar6 + 1 + lVar3;
  plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8);
  lVar6 = *plVar2;
  lVar4 = lVar6 + (uVar1 & 0x1ff) * 8;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar3 = lVar4;
  }
  if (lVar3 == lVar6) {
    lVar4 = plVar2[-1] + 0x1000;
  }
  return lVar4 + -8;
}



/* Entry: 109485488; end: 10948551f;  */

long * FUN_109485488(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_109485504;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_109485504:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109485520; end: 10948556b;  */

long * FUN_109485520(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10948556c; end: 10948557f;  */

void FUN_10948556c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x555555555555556) {
    __Znwm((long)puVar1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar2) {
    func_0x000104c4f740();
    plVar5 = (long *)*puVar2;
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)puVar2[1];
    plVar3 = plVar5;
    if (plVar4 != plVar5) {
      do {
        plVar3 = plVar4 + -3;
        if (*plVar3 != 0) {
          plVar4[-2] = *plVar3;
          __ZdlPv();
        }
        plVar4 = plVar3;
      } while (plVar3 != plVar5);
      plVar3 = (long *)*puVar2;
    }
    puVar2[1] = plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return;
  }
  __Znwm((long)puVar2 * 0x18);
  return;
}



/* Entry: 109485580; end: 1094855c3;  */

void FUN_109485580(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 < 0x555555555555556) {
    __Znwm(param_1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000104c4f740();
    plVar4 = (long *)*puVar1;
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar3 = (long *)puVar1[1];
    plVar2 = plVar4;
    if (plVar3 != plVar4) {
      do {
        plVar2 = plVar3 + -3;
        if (*plVar2 != 0) {
          plVar3[-2] = *plVar2;
          __ZdlPv();
        }
        plVar3 = plVar2;
      } while (plVar2 != plVar4);
      plVar2 = (long *)*puVar1;
    }
    puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 1094855c4; end: 1094855d7;  */

void FUN_1094855c4(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1094855d8; end: 10948561b;  */

void FUN_1094855d8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10948561c; end: 10948568f;  */

void FUN_10948561c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 109485690; end: 10948570f;  */

long * FUN_109485690(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109485710; end: 109485777;  */

void FUN_109485710(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x28;
        FUN_109485778(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109485778; end: 1094857f3;  */

void FUN_109485778(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1094857f4; end: 1094857fb;  */

void FUN_1094857f4(void)

{
  return;
}



/* Entry: 1094857fc; end: 10948581f;  */

void FUN_1094857fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110af68a0;
  return;
}



/* Entry: 109485820; end: 109485837;  */

void FUN_109485820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110af68a0;
  return;
}



/* Entry: 109485838; end: 109485913;  */

void FUN_109485838(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    FUN_109485710(lVar6 + 0xa0);
    if ((*(char *)(lVar6 + 0x98) == '\x01') &&
       (plVar4 = *(long **)(lVar6 + 0x90), plVar4 != (long *)0x0)) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    FUN_10948561c(lVar6 + 0x68);
    if (*(long *)(lVar6 + 0x48) != 0) {
      *(long *)(lVar6 + 0x50) = *(long *)(lVar6 + 0x48);
      __ZdlPv();
    }
    FUN_109485690(lVar6 + 0x20);
    if (*(char *)(lVar6 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar6 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar6);
    return;
  }
  return;
}



/* Entry: 109485914; end: 109485927;  */

undefined ** FUN_109485914(void)

{
  return &PTR_DAT_110af6910;
}



/* Entry: 109485928; end: 10948594b;  */

void FUN_109485928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af6930;
  return;
}



/* Entry: 10948594c; end: 109485963;  */

void FUN_10948594c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110af6930;
  return;
}



/* Entry: 109485964; end: 109485fb3;  */

undefined8 * FUN_109485964(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong *puVar18;
  long *plVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ulong unaff_x27;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  *puVar7 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar7 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar24 = param_2[1];
    puVar7[2] = param_2[2];
    puVar7[1] = uVar24;
    puVar7[3] = param_2[3];
  }
  plVar19 = puVar7 + 4;
  puVar7[5] = 0;
  *plVar19 = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(param_2 + 8);
  uVar10 = param_2[5];
  FUN_109485ffc(plVar19);
  plVar20 = (long *)param_2[6];
  if (plVar20 != (long *)0x0) {
    plVar1 = puVar7 + 6;
    uVar23 = puVar7[5];
    do {
      uVar11 = plVar20[2];
      uVar15 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
      uVar15 = (uVar11 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
      if (uVar23 != 0) {
        uVar14 = uVar23 - 1;
        if ((uVar23 & uVar14) == 0) {
          unaff_x27 = uVar15 & uVar14;
        }
        else {
          unaff_x27 = uVar15;
          if (uVar23 <= uVar15) {
            uVar17 = 0;
            if (uVar23 != 0) {
              uVar17 = uVar15 / uVar23;
            }
            unaff_x27 = uVar15 - uVar17 * uVar23;
          }
        }
        plVar16 = *(long **)(*plVar19 + unaff_x27 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_109485ac4;
              uVar17 = plVar16[1];
              if (uVar17 != uVar15) break;
              if (plVar16[2] == uVar11) goto LAB_109485be0;
            }
            if ((uVar23 & uVar14) == 0) {
              uVar17 = uVar17 & uVar14;
            }
            else if (uVar23 <= uVar17) {
              uVar5 = 0;
              if (uVar23 != 0) {
                uVar5 = uVar17 / uVar23;
              }
              uVar17 = uVar17 - uVar5 * uVar23;
            }
          } while (uVar17 == unaff_x27);
        }
      }
LAB_109485ac4:
      plVar16 = (long *)0x40;
      __Znwm();
      *plVar16 = 0;
      plVar16[1] = uVar15;
      lVar13 = plVar20[3];
      uVar11 = plVar20[2];
      lVar25 = plVar20[4];
      lVar27 = plVar20[7];
      lVar26 = plVar20[6];
      plVar16[5] = plVar20[5];
      plVar16[4] = lVar25;
      plVar16[7] = lVar27;
      plVar16[6] = lVar26;
      plVar16[3] = lVar13;
      plVar16[2] = uVar11;
      if ((uVar23 == 0) || (*(float *)(puVar7 + 8) * (float)uVar23 < (float)(puVar7[7] + 1))) {
        uVar10 = 1;
        if (2 < uVar23) {
          uVar10 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar10 = uVar10 | uVar23 << 1;
        uVar23 = (ulong)((float)(puVar7[7] + 1) / *(float *)(puVar7 + 8));
        if (uVar10 <= uVar23) {
          uVar10 = uVar23;
        }
        FUN_109485ffc(plVar19);
        uVar23 = puVar7[5];
        if ((uVar23 & uVar23 - 1) == 0) {
          unaff_x27 = uVar23 - 1 & uVar15;
        }
        else {
          unaff_x27 = uVar15;
          if (uVar23 <= uVar15) {
            uVar11 = 0;
            if (uVar23 != 0) {
              uVar11 = uVar15 / uVar23;
            }
            unaff_x27 = uVar15 - uVar11 * uVar23;
          }
        }
      }
      lVar13 = *plVar19;
      plVar12 = *(long **)(lVar13 + unaff_x27 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar16 = *plVar1;
        *plVar1 = (long)plVar16;
        *(long **)(lVar13 + unaff_x27 * 8) = plVar1;
        if (*plVar16 != 0) {
          uVar11 = *(ulong *)(*plVar16 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar11 = uVar11 & uVar23 - 1;
          }
          else if (uVar23 <= uVar11) {
            uVar15 = 0;
            if (uVar23 != 0) {
              uVar15 = uVar11 / uVar23;
            }
            uVar11 = uVar11 - uVar15 * uVar23;
          }
          plVar12 = (long *)(*plVar19 + uVar11 * 8);
          goto LAB_109485bd0;
        }
      }
      else {
        *plVar16 = *plVar12;
LAB_109485bd0:
        *plVar12 = (long)plVar16;
      }
      puVar7[7] = puVar7[7] + 1;
LAB_109485be0:
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  uVar23 = param_2[9];
  lVar13 = param_2[10] - uVar23;
  if (lVar13 != 0) {
    uVar11 = (lVar13 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar11) {
      FUN_10948556c();
      goto LAB_109485e88;
    }
    FUN_109485580();
    puVar7[9] = uVar11;
    puVar7[10] = uVar11;
    puVar7[0xb] = uVar11 + uVar10 * 0x30;
    _memmove();
    puVar7[10] = uVar11 + lVar13;
    uVar10 = uVar23;
  }
  puVar7[0xd] = 0;
  puVar18 = (ulong *)param_2[0xd];
  puVar7[0xc] = param_2[0xc];
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar21 = (ulong *)param_2[0xe];
  lVar13 = (long)puVar21 - (long)puVar18;
  if (lVar13 != 0) {
    puVar8 = (ulong *)((lVar13 >> 3) * -0x5555555555555555);
    if ((ulong *)0xaaaaaaaaaaaaaaa < puVar8) {
      FUN_1094855c4();
      goto LAB_109485e88;
    }
    FUN_1094855d8();
    puVar7[0xd] = puVar8;
    puVar7[0xe] = puVar8;
    puVar7[0xf] = puVar8 + uVar10 * 3;
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puStack_90 = puVar7 + 0xd;
    puStack_70 = puVar8;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar23 = *puVar18;
      lVar13 = puVar18[1] - uVar23;
      puStack_68 = puVar8;
      if (lVar13 != 0) {
        uVar11 = lVar13 >> 6;
        if (uVar11 >> 0x3a != 0) {
          FUN_1094861cc();
          goto LAB_109485e88;
        }
        FUN_1094861e0();
        *puVar8 = uVar11;
        puVar8[1] = uVar11;
        puVar8[2] = uVar11 + uVar10 * 0x40;
        _memmove();
        puVar8[1] = uVar11 + lVar13;
        uVar10 = uVar23;
      }
      puVar18 = puVar18 + 3;
      puVar8 = puStack_68 + 3;
    } while (puVar18 != puVar21);
    uStack_78 = 1;
    puStack_68 = puVar8;
    FUN_109486214(&puStack_90);
    puVar7[0xe] = puVar8;
  }
  puVar7[0x10] = param_2[0x10];
  *(undefined4 *)(puVar7 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined1 *)(puVar7 + 0x12) = 0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  if (*(char *)(param_2 + 0x13) == '\x01') {
    lVar13 = param_2[0x12];
    puVar7[0x12] = lVar13;
    if (lVar13 != 0) {
      plVar19 = (long *)(lVar13 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined1 *)(puVar7 + 0x13) = 1;
  }
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar22 = (undefined8 *)param_2[0x14];
  puVar2 = (undefined8 *)param_2[0x15];
  lVar13 = (long)puVar2 - (long)puVar22;
  if (lVar13 != 0) {
    puVar9 = (undefined8 *)((lVar13 >> 3) * -0x3333333333333333);
    if ((undefined8 *)0x666666666666666 < puVar9) {
      FUN_109486278();
LAB_109485e88:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109485e8c);
      (*pcVar6)();
    }
    FUN_10948628c();
    puVar7[0x14] = puVar9;
    puVar7[0x15] = puVar9;
    puVar7[0x16] = puVar9 + uVar10 * 5;
    do {
      lVar13 = puVar22[1];
      uVar24 = *puVar22;
      puVar9[1] = puVar22[1];
      *puVar9 = uVar24;
      if (lVar13 != 0) {
        plVar19 = (long *)(lVar13 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      FUN_1094862d0();
      puVar22 = puVar22 + 5;
      puVar9 = puVar9 + 5;
    } while (puVar22 != puVar2);
    puVar7[0x15] = puVar9;
  }
  return puVar7;
}



/* Entry: 109485fb4; end: 109485fef;  */

long FUN_109485fb4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af69a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109485ff0; end: 109485ffb;  */

undefined ** FUN_109485ff0(void)

{
  return &PTR_DAT_110af69a0;
}



/* Entry: 109485ffc; end: 1094861cb;  */

undefined1  [16] FUN_109485ffc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 > param_2 || param_2 == plVar11) {
    if (plVar11 <= param_2) goto LAB_1094861b8;
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar11 <= param_2) goto LAB_1094861b8;
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      goto LAB_1094861b8;
    }
  }
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    puVar4 = &DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if ((ulong)puVar4 >> 0x3a != 0) {
      func_0x000104c4f740();
      if ((puVar4[0x18] & 1) == 0) {
        plVar11 = (long *)**(undefined8 **)(puVar4 + 8);
        plVar3 = (long *)**(long **)(puVar4 + 0x10);
        while (plVar7 = plVar3, plVar7 != plVar11) {
          plVar3 = plVar7 + -3;
          if (*plVar3 != 0) {
            plVar7[-2] = *plVar3;
            __ZdlPv();
          }
        }
      }
      auVar14._8_8_ = plVar5;
      auVar14._0_8_ = puVar4;
      return auVar14;
    }
    lVar2 = (long)puVar4 << 6;
    __Znwm(lVar2);
    auVar13._8_8_ = puVar4;
    auVar13._0_8_ = lVar2;
    return auVar13;
  }
  lVar2 = (long)param_2 << 3;
  __Znwm();
  plVar3 = (long *)*param_1;
  *param_1 = lVar2;
  if (plVar3 != (long *)0x0) {
    __ZdlPv();
  }
  plVar11 = (long *)0x0;
  param_1[1] = (long)param_2;
  do {
    *(undefined8 *)(*param_1 + (long)plVar11 * 8) = 0;
    plVar11 = (long *)((long)plVar11 + 1);
  } while (param_2 != plVar11);
  plVar11 = (long *)param_1[2];
  if (plVar11 != (long *)0x0) {
    plVar7 = (long *)plVar11[1];
    uVar6 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar7 & uVar6);
    }
    else if (param_2 <= plVar7) {
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar11;
    while (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      if (((ulong)param_2 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar6);
      }
      else if (param_2 <= plVar10) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)param_2;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)param_2);
      }
      plVar9 = plVar8;
      if (plVar10 != plVar7) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
          *(long **)(lVar2 + (long)plVar10 * 8) = plVar11;
          plVar7 = plVar10;
        }
        else {
          *plVar11 = *plVar8;
          *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
          **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
          plVar9 = plVar11;
        }
      }
      plVar11 = plVar9;
      plVar8 = (long *)*plVar9;
    }
  }
LAB_1094861b8:
  auVar12._8_8_ = plVar5;
  auVar12._0_8_ = plVar3;
  return auVar12;
}



/* Entry: 1094861cc; end: 1094861df;  */

undefined1  [16] FUN_1094861cc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3a != 0) {
    func_0x000104c4f740();
    if ((puVar2[0x18] & 1) == 0) {
      plVar4 = (long *)**(undefined8 **)(puVar2 + 8);
      plVar5 = (long *)**(long **)(puVar2 + 0x10);
      while (plVar1 = plVar5, plVar1 != plVar4) {
        plVar5 = plVar1 + -3;
        if (*plVar5 != 0) {
          plVar1[-2] = *plVar5;
          __ZdlPv();
        }
      }
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  lVar3 = (long)puVar2 << 6;
  __Znwm(lVar3);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1094861e0; end: 109486213;  */

undefined1  [16] FUN_1094861e0(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 >> 0x3a != 0) {
    func_0x000104c4f740();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      plVar3 = (long *)**(undefined8 **)(param_1 + 8);
      plVar4 = (long *)**(long **)(param_1 + 0x10);
      while (plVar1 = plVar4, plVar1 != plVar3) {
        plVar4 = plVar1 + -3;
        if (*plVar4 != 0) {
          plVar1[-2] = *plVar4;
          __ZdlPv();
        }
      }
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = param_1 << 6;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 109486214; end: 109486277;  */

long FUN_109486214(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 109486278; end: 10948628b;  */

void FUN_109486278(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined *)0x666666666666667) {
    __Znwm((long)puVar1 * 0x28);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109486348();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10948628c; end: 1094862cf;  */

void FUN_10948628c(ulong param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_1 < 0x666666666666667) {
    __Znwm(param_1 * 0x28);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109486348();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1094862d0; end: 109486347;  */

void FUN_1094862d0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109486348(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 109486348; end: 10948637f;  */

void FUN_109486348(long *param_1,undefined8 *param_2,double *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double *pdStack_158;
  double dStack_140;
  double dStack_138;
  double dStack_118;
  double *pdStack_110;
  double *pdStack_108;
  long lStack_100;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar4 = param_1;
    FUN_109486394();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + (long)param_2);
    return;
  }
  FUN_109486380();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  (**(code **)*param_2)(&pdStack_110,param_2);
  if (((ulong)param_3[5] & 1) == 0) {
    plVar4[1] = (long)pdStack_108;
    *plVar4 = (long)pdStack_110;
    plVar4[2] = lStack_100;
  }
  else {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    FUN_109488024(plVar4,(long)pdStack_108 - (long)pdStack_110 >> 3);
    if (*(char *)(param_3 + 5) == '\x01') {
      dVar20 = (*param_3 * 3.141592653589793) / 180.0;
      dStack_140 = param_3[1] * 3.141592653589793;
      dStack_138 = dStack_140 / 180.0;
      ___sincos_stret();
      dVar25 = 6378137.0 / SQRT(dVar20 * dVar20 * -0.006694379990141316 + 1.0);
      dVar21 = dStack_140 * (dVar25 + 0.0);
      ___sincos_stret();
      dStack_140 = dStack_140 * dVar21;
      dStack_138 = dStack_138 * dVar21;
      dVar20 = dVar20 * (dVar25 * 0.9933056200098587 + 0.0);
    }
    else {
      dStack_138 = 0.0;
      dStack_140 = 0.0;
      dVar20 = 0.0;
    }
    if (pdStack_110 == pdStack_108) {
      pdVar17 = (double *)0x0;
      pdStack_158 = (double *)0x0;
    }
    else {
      pdVar19 = (double *)0x0;
      pdVar17 = (double *)0x0;
      pdStack_158 = (double *)0x0;
      pdVar8 = pdStack_110;
      do {
        dVar21 = *pdVar8;
        pdVar18 = pdStack_158;
        dStack_118 = dVar21;
        if ((*(byte *)((long)dVar21 + 0x268) & 1) == 0) {
          func_0x0001094880b0(plVar4,&dStack_118);
        }
        else {
          dVar25 = (*(double *)((long)dVar21 + 0x240) * 3.141592653589793) / 180.0;
          dVar23 = *(double *)((long)dVar21 + 0x248) * 3.141592653589793;
          dVar24 = dVar23 / 180.0;
          ___sincos_stret();
          dVar26 = 6378137.0 / SQRT(dVar25 * dVar25 * -0.006694379990141316 + 1.0);
          dVar22 = dVar23 * (dVar26 + 0.0);
          ___sincos_stret();
          dVar23 = dStack_140 - dVar23 * dVar22;
          dVar22 = dStack_138 - dVar24 * dVar22;
          dVar25 = dVar20 - dVar25 * (dVar26 * 0.9933056200098587 + 0.0);
          dVar25 = SQRT(dVar25 * dVar25 + dVar23 * dVar23 + dVar22 * dVar22);
          if (dVar25 <= param_3[3] + (double)*(float *)((long)param_2 + 0xe4) +
                        *(double *)((long)dVar21 + 600)) {
            func_0x0001094880b0(plVar4,&dStack_118);
          }
          else if (pdVar17 < pdVar19) {
            *pdVar17 = dVar25;
            pdVar17[1] = dVar21;
            pdVar17 = pdVar17 + 2;
          }
          else {
            lVar16 = (long)pdVar17 - (long)pdStack_158;
            uVar6 = (lVar16 >> 4) + 1;
            if (uVar6 >> 0x3c != 0) {
              FUN_109488174();
LAB_109486d94:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109486d98);
              (*pcVar2)();
            }
            uVar7 = (long)pdVar19 - (long)pdStack_158 >> 3;
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)((long)pdVar19 - (long)pdStack_158)) {
              uVar7 = 0xfffffffffffffff;
            }
            if (uVar7 >> 0x3c != 0) {
              func_0x000104c4f740();
              goto LAB_109486d94;
            }
            lVar5 = uVar7 << 4;
            __Znwm();
            pdVar18 = (double *)(lVar5 + lVar16);
            pdVar19 = (double *)(lVar5 + uVar7 * 0x10);
            *pdVar18 = dVar25;
            pdVar18[1] = dVar21;
            pdVar17 = pdVar18 + 2;
            pdVar18 = pdVar18 + (lVar16 >> 4) * -2;
            _memcpy(pdVar18,pdStack_158,lVar16);
            if (pdStack_158 != (double *)0x0) {
              __ZdlPv(pdStack_158);
            }
          }
        }
        pdStack_158 = pdVar18;
        pdVar8 = pdVar8 + 1;
      } while (pdVar8 != pdStack_108);
    }
    uVar6 = plVar4[1] - *plVar4 >> 3;
    if (uVar6 < (ulong)(long)*(int *)(param_2 + 0x1d) && pdStack_158 != pdVar17) {
      uVar6 = (long)*(int *)(param_2 + 0x1d) - uVar6;
      uVar7 = (long)pdVar17 - (long)pdStack_158 >> 4;
      if (uVar6 <= uVar7) {
        uVar7 = uVar6;
      }
      pdVar19 = (double *)((long)pdStack_158 + ((long)(uVar7 << 0x20) >> 0x1c));
      pdVar8 = pdStack_158;
      pdVar18 = pdVar17;
      if (pdVar19 != pdVar17) {
LAB_109486704:
        uVar6 = (long)pdVar17 - (long)pdVar8 >> 4;
        pdVar18 = pdVar19;
        if (1 < uVar6) {
          if (uVar6 != 3) {
            if (uVar6 == 2) {
              dVar25 = pdVar17[-2];
              dVar22 = *pdVar8;
              dVar20 = pdVar17[-1];
              dVar21 = pdVar8[1];
              bVar3 = dVar25 < dVar22;
              if (dVar25 == dVar22) {
                bVar3 = (ulong)dVar20 < (ulong)dVar21;
              }
              if (bVar3) {
                *pdVar8 = dVar25;
                pdVar17[-2] = dVar22;
                pdVar8[1] = dVar20;
                pdVar17[-1] = dVar21;
              }
            }
            else if ((long)uVar6 < 8) {
              while (pdVar19 = pdVar8, pdVar17 + -2 != pdVar19) {
                pdVar8 = pdVar19 + 2;
                if ((pdVar17 != pdVar19) && (pdVar8 != pdVar17)) {
                  dVar21 = *pdVar19;
                  lVar16 = 0x10;
                  pdVar11 = pdVar19;
                  dVar20 = dVar21;
                  do {
                    pdVar12 = (double *)((long)pdVar19 + lVar16);
                    dVar25 = *pdVar12;
                    bVar3 = dVar25 < dVar20;
                    if (dVar25 == dVar20) {
                      bVar3 = (ulong)pdVar12[1] < (ulong)pdVar11[1];
                    }
                    pdVar9 = pdVar12;
                    if (!bVar3) {
                      pdVar9 = pdVar11;
                      dVar25 = dVar20;
                    }
                    dVar20 = dVar25;
                    lVar16 = lVar16 + 0x10;
                    pdVar11 = pdVar9;
                  } while (pdVar12 + 2 != pdVar17);
                  if (pdVar9 != pdVar19) {
                    *pdVar19 = *pdVar9;
                    *pdVar9 = dVar21;
                    dVar20 = pdVar19[1];
                    pdVar19[1] = pdVar9[1];
                    pdVar9[1] = dVar20;
                  }
                }
              }
            }
            else {
              pdVar11 = pdVar8 + ((ulong)((long)pdVar17 - (long)pdVar8) >> 5) * 2;
              pdVar12 = pdVar17 + -2;
              dVar24 = *pdVar12;
              dVar22 = *pdVar11;
              dVar25 = *pdVar8;
              dVar20 = pdVar11[1];
              dVar21 = pdVar8[1];
              bVar3 = dVar22 < dVar25;
              if (dVar22 == dVar25) {
                bVar3 = (ulong)dVar20 < (ulong)dVar21;
              }
              dVar23 = pdVar17[-1];
              bVar1 = dVar24 < dVar22;
              if (dVar24 == dVar22) {
                bVar1 = (ulong)dVar23 < (ulong)dVar20;
              }
              if (bVar3) {
                if (bVar1) {
                  *pdVar8 = dVar24;
                  pdVar17[-2] = dVar25;
                  pdVar8[1] = dVar23;
                }
                else {
                  *pdVar8 = dVar22;
                  *pdVar11 = dVar25;
                  pdVar8[1] = dVar20;
                  pdVar11[1] = dVar21;
                  dVar22 = pdVar17[-2];
                  dVar20 = pdVar17[-1];
                  bVar3 = dVar22 < dVar25;
                  if (dVar22 == dVar25) {
                    bVar3 = (ulong)dVar20 < (ulong)dVar21;
                  }
                  if (!bVar3) {
LAB_10948683c:
                    iVar10 = 1;
                    goto LAB_109486840;
                  }
                  *pdVar11 = dVar22;
                  pdVar17[-2] = dVar25;
                  pdVar11[1] = dVar20;
                }
                iVar10 = 1;
                pdVar17[-1] = dVar21;
              }
              else if (bVar1) {
                *pdVar11 = dVar24;
                pdVar17[-2] = dVar22;
                pdVar11[1] = dVar23;
                pdVar17[-1] = dVar20;
                dVar25 = *pdVar11;
                dVar22 = *pdVar8;
                dVar20 = pdVar11[1];
                dVar21 = pdVar8[1];
                bVar3 = dVar25 < dVar22;
                if (dVar25 == dVar22) {
                  bVar3 = (ulong)dVar20 < (ulong)dVar21;
                }
                if (!bVar3) goto LAB_10948683c;
                *pdVar8 = dVar25;
                *pdVar11 = dVar22;
                pdVar8[1] = dVar20;
                iVar10 = 1;
                pdVar11[1] = dVar21;
              }
              else {
                iVar10 = 0;
              }
LAB_109486840:
              dVar21 = *pdVar8;
              dVar25 = *pdVar11;
              dVar20 = pdVar8[1];
              bVar3 = dVar21 < dVar25;
              if (dVar21 == dVar25) {
                bVar3 = (ulong)dVar20 < (ulong)pdVar11[1];
              }
              pdVar9 = pdVar12;
              if (!bVar3) {
                do {
                  pdVar13 = pdVar9;
                  pdVar9 = pdVar13 + -2;
                  if (pdVar9 == pdVar8) {
                    pdVar11 = pdVar8 + 2;
                    dVar22 = pdVar17[-2];
                    dVar25 = pdVar17[-1];
                    bVar3 = dVar21 < dVar22;
                    if (dVar21 == dVar22) {
                      bVar3 = (ulong)dVar20 < (ulong)dVar25;
                    }
                    if (!bVar3) goto LAB_109486a1c;
                    goto LAB_109486aa4;
                  }
                  dVar24 = pdVar13[-2];
                  dVar22 = pdVar13[-1];
                  bVar3 = dVar24 < dVar25;
                  if (dVar24 == dVar25) {
                    bVar3 = (ulong)dVar22 < (ulong)pdVar11[1];
                  }
                } while (!bVar3);
                *pdVar8 = dVar24;
                *pdVar9 = dVar21;
                pdVar8[1] = dVar22;
                pdVar13[-1] = dVar20;
                bVar3 = iVar10 != 0;
                iVar10 = 1;
                pdVar12 = pdVar9;
                if (bVar3) {
                  iVar10 = 2;
                }
              }
              pdVar9 = pdVar8 + 2;
              pdVar14 = pdVar11;
              pdVar13 = pdVar9;
              pdVar15 = pdVar9;
              if (pdVar9 < pdVar12) {
                while( true ) {
                  pdVar11 = pdVar14;
                  dVar20 = *pdVar11;
                  do {
                    pdVar13 = pdVar15;
                    dVar25 = *pdVar13;
                    dVar21 = pdVar13[1];
                    bVar3 = dVar25 < dVar20;
                    if (dVar25 == dVar20) {
                      bVar3 = (ulong)dVar21 < (ulong)pdVar11[1];
                    }
                    pdVar15 = pdVar13 + 2;
                  } while (bVar3);
                  do {
                    pdVar14 = pdVar12;
                    pdVar12 = pdVar14 + -2;
                    dVar24 = *pdVar12;
                    dVar22 = pdVar14[-1];
                    bVar3 = dVar24 < dVar20;
                    if (dVar24 == dVar20) {
                      bVar3 = (ulong)dVar22 < (ulong)pdVar11[1];
                    }
                  } while (!bVar3);
                  if (pdVar12 <= pdVar13) break;
                  *pdVar13 = dVar24;
                  *pdVar12 = dVar25;
                  pdVar13[1] = dVar22;
                  pdVar14[-1] = dVar21;
                  iVar10 = iVar10 + 1;
                  pdVar14 = pdVar12;
                  if (pdVar13 != pdVar11) {
                    pdVar14 = pdVar11;
                  }
                }
              }
              if (pdVar13 != pdVar11) {
                dVar25 = *pdVar11;
                dVar22 = *pdVar13;
                dVar21 = pdVar11[1];
                dVar20 = pdVar13[1];
                bVar3 = dVar25 < dVar22;
                if (dVar25 == dVar22) {
                  bVar3 = (ulong)dVar21 < (ulong)dVar20;
                }
                if (bVar3) {
                  *pdVar13 = dVar25;
                  *pdVar11 = dVar22;
                  pdVar13[1] = dVar21;
                  iVar10 = iVar10 + 1;
                  pdVar11[1] = dVar20;
                }
              }
              if (pdVar13 != pdVar19) {
                if (iVar10 == 0) {
                  pdVar11 = pdVar13;
                  if (pdVar19 < pdVar13) {
                    do {
                      if (pdVar9 == pdVar13) goto LAB_109486d10;
                      bVar3 = *pdVar9 < pdVar9[-2];
                      if (*pdVar9 == pdVar9[-2]) {
                        bVar3 = (ulong)pdVar9[1] < (ulong)pdVar9[-1];
                      }
                      pdVar9 = pdVar9 + 2;
                    } while (!bVar3);
                  }
                  else {
                    do {
                      pdVar12 = pdVar11 + 2;
                      if (pdVar12 == pdVar17) goto LAB_109486d10;
                      bVar3 = *pdVar12 < *pdVar11;
                      if (*pdVar12 == *pdVar11) {
                        bVar3 = (ulong)pdVar11[3] < (ulong)pdVar11[1];
                      }
                      pdVar11 = pdVar12;
                    } while (!bVar3);
                  }
                }
                pdVar9 = pdVar8;
                if (pdVar13 <= pdVar19) {
                  pdVar9 = pdVar13 + 2;
                  pdVar13 = pdVar17;
                }
                goto LAB_109486b28;
              }
            }
            goto LAB_109486d10;
          }
          dVar22 = pdVar8[2];
          dVar25 = *pdVar8;
          dVar21 = pdVar8[3];
          dVar20 = pdVar8[1];
          bVar3 = dVar22 < dVar25;
          if (dVar22 == dVar25) {
            bVar3 = (ulong)dVar21 < (ulong)dVar20;
          }
          dVar23 = pdVar17[-2];
          dVar24 = pdVar17[-1];
          bVar1 = dVar23 < dVar22;
          if (dVar23 == dVar22) {
            bVar1 = (ulong)dVar24 < (ulong)dVar21;
          }
          if (!bVar3) {
            if (bVar1) {
              pdVar8[2] = dVar23;
              pdVar17[-2] = dVar22;
              pdVar8[3] = dVar24;
              pdVar17[-1] = dVar21;
              dVar21 = pdVar8[2];
              dVar25 = *pdVar8;
              dVar20 = pdVar8[1];
              bVar3 = dVar21 < dVar25;
              if (dVar21 == dVar25) {
                bVar3 = (ulong)pdVar8[3] < (ulong)dVar20;
              }
              if (bVar3) {
                *pdVar8 = dVar21;
                pdVar8[2] = dVar25;
                pdVar8[1] = pdVar8[3];
                pdVar8[3] = dVar20;
              }
            }
            goto LAB_109486d10;
          }
          if (bVar1) {
            *pdVar8 = dVar23;
            pdVar17[-2] = dVar25;
            pdVar8[1] = dVar24;
          }
          else {
            *pdVar8 = dVar22;
            pdVar8[2] = dVar25;
            pdVar8[1] = dVar21;
            pdVar8[3] = dVar20;
            dVar22 = pdVar17[-2];
            dVar21 = pdVar17[-1];
            bVar3 = dVar22 < dVar25;
            if (dVar22 == dVar25) {
              bVar3 = (ulong)dVar21 < (ulong)dVar20;
            }
            if (!bVar3) goto LAB_109486d10;
            pdVar8[2] = dVar22;
            pdVar17[-2] = dVar25;
            pdVar8[3] = dVar21;
          }
          pdVar17[-1] = dVar20;
        }
      }
LAB_109486d10:
      if (pdStack_158 != pdVar18) {
        lVar16 = -(-(uVar7 >> 0x1f & 1) & 0xfffffff000000000 | (uVar7 & 0xffffffff) << 4);
        pdVar17 = pdStack_158 + 1;
        do {
          func_0x0001094880b0(plVar4,pdVar17);
          pdVar17 = pdVar17 + 2;
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != 0);
      }
    }
    if (pdStack_158 != (double *)0x0) {
      __ZdlPv(pdStack_158);
    }
    if (pdStack_110 != (double *)0x0) {
      pdStack_108 = pdStack_110;
      __ZdlPv();
    }
  }
  return;
LAB_109486a1c:
  if (pdVar11 == pdVar12) goto LAB_109486d10;
  dVar23 = *pdVar11;
  dVar24 = pdVar11[1];
  bVar3 = dVar21 < dVar23;
  if (dVar21 == dVar23) {
    bVar3 = (ulong)dVar20 < (ulong)dVar24;
  }
  if (bVar3) goto LAB_109486a90;
  pdVar11 = pdVar11 + 2;
  goto LAB_109486a1c;
LAB_109486a90:
  *pdVar11 = dVar22;
  pdVar17[-2] = dVar23;
  pdVar11[1] = dVar25;
  pdVar11 = pdVar11 + 2;
  pdVar17[-1] = dVar24;
LAB_109486aa4:
  if (pdVar11 == pdVar12) goto LAB_109486d10;
  while( true ) {
    dVar20 = *pdVar8;
    do {
      pdVar9 = pdVar11;
      dVar25 = *pdVar9;
      dVar21 = pdVar9[1];
      bVar3 = dVar20 < dVar25;
      if (dVar20 == dVar25) {
        bVar3 = (ulong)pdVar8[1] < (ulong)dVar21;
      }
      pdVar11 = pdVar9 + 2;
    } while (!bVar3);
    do {
      pdVar13 = pdVar12;
      pdVar12 = pdVar13 + -2;
      dVar24 = *pdVar12;
      dVar22 = pdVar13[-1];
      bVar3 = dVar20 < dVar24;
      if (dVar20 == dVar24) {
        bVar3 = (ulong)pdVar8[1] < (ulong)dVar22;
      }
    } while (bVar3);
    if (pdVar12 <= pdVar9) break;
    *pdVar9 = dVar24;
    *pdVar12 = dVar25;
    pdVar9[1] = dVar22;
    pdVar13[-1] = dVar21;
  }
  pdVar13 = pdVar17;
  if (pdVar19 < pdVar9) goto LAB_109486d10;
LAB_109486b28:
  pdVar8 = pdVar9;
  pdVar17 = pdVar13;
  if (pdVar13 == pdVar19) goto LAB_109486d10;
  goto LAB_109486704;
}



/* Entry: 109486380; end: 109486393;  */

void FUN_109486380(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double *pdStack_138;
  double dStack_120;
  double dStack_118;
  double dStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  long lStack_e0;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  (**(code **)*param_2)(&pdStack_f0,param_2);
  if (((ulong)param_3[5] & 1) == 0) {
    plVar4[1] = (long)pdStack_e8;
    *plVar4 = (long)pdStack_f0;
    plVar4[2] = lStack_e0;
  }
  else {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    FUN_109488024(plVar4,(long)pdStack_e8 - (long)pdStack_f0 >> 3);
    if (*(char *)(param_3 + 5) == '\x01') {
      dVar20 = (*param_3 * 3.141592653589793) / 180.0;
      dStack_120 = param_3[1] * 3.141592653589793;
      dStack_118 = dStack_120 / 180.0;
      ___sincos_stret();
      dVar25 = 6378137.0 / SQRT(dVar20 * dVar20 * -0.006694379990141316 + 1.0);
      dVar21 = dStack_120 * (dVar25 + 0.0);
      ___sincos_stret();
      dStack_120 = dStack_120 * dVar21;
      dStack_118 = dStack_118 * dVar21;
      dVar20 = dVar20 * (dVar25 * 0.9933056200098587 + 0.0);
    }
    else {
      dStack_118 = 0.0;
      dStack_120 = 0.0;
      dVar20 = 0.0;
    }
    if (pdStack_f0 == pdStack_e8) {
      pdVar17 = (double *)0x0;
      pdStack_138 = (double *)0x0;
    }
    else {
      pdVar19 = (double *)0x0;
      pdVar17 = (double *)0x0;
      pdStack_138 = (double *)0x0;
      pdVar8 = pdStack_f0;
      do {
        dVar21 = *pdVar8;
        pdVar18 = pdStack_138;
        dStack_f8 = dVar21;
        if ((*(byte *)((long)dVar21 + 0x268) & 1) == 0) {
          func_0x0001094880b0(plVar4,&dStack_f8);
        }
        else {
          dVar25 = (*(double *)((long)dVar21 + 0x240) * 3.141592653589793) / 180.0;
          dVar23 = *(double *)((long)dVar21 + 0x248) * 3.141592653589793;
          dVar24 = dVar23 / 180.0;
          ___sincos_stret();
          dVar26 = 6378137.0 / SQRT(dVar25 * dVar25 * -0.006694379990141316 + 1.0);
          dVar22 = dVar23 * (dVar26 + 0.0);
          ___sincos_stret();
          dVar23 = dStack_120 - dVar23 * dVar22;
          dVar22 = dStack_118 - dVar24 * dVar22;
          dVar25 = dVar20 - dVar25 * (dVar26 * 0.9933056200098587 + 0.0);
          dVar25 = SQRT(dVar25 * dVar25 + dVar23 * dVar23 + dVar22 * dVar22);
          if (dVar25 <= param_3[3] + (double)*(float *)((long)param_2 + 0xe4) +
                        *(double *)((long)dVar21 + 600)) {
            func_0x0001094880b0(plVar4,&dStack_f8);
          }
          else if (pdVar17 < pdVar19) {
            *pdVar17 = dVar25;
            pdVar17[1] = dVar21;
            pdVar17 = pdVar17 + 2;
          }
          else {
            lVar16 = (long)pdVar17 - (long)pdStack_138;
            uVar6 = (lVar16 >> 4) + 1;
            if (uVar6 >> 0x3c != 0) {
              FUN_109488174();
LAB_109486d94:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109486d98);
              (*pcVar2)();
            }
            uVar7 = (long)pdVar19 - (long)pdStack_138 >> 3;
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)((long)pdVar19 - (long)pdStack_138)) {
              uVar7 = 0xfffffffffffffff;
            }
            if (uVar7 >> 0x3c != 0) {
              func_0x000104c4f740();
              goto LAB_109486d94;
            }
            lVar5 = uVar7 << 4;
            __Znwm();
            pdVar18 = (double *)(lVar5 + lVar16);
            pdVar19 = (double *)(lVar5 + uVar7 * 0x10);
            *pdVar18 = dVar25;
            pdVar18[1] = dVar21;
            pdVar17 = pdVar18 + 2;
            pdVar18 = pdVar18 + (lVar16 >> 4) * -2;
            _memcpy(pdVar18,pdStack_138,lVar16);
            if (pdStack_138 != (double *)0x0) {
              __ZdlPv(pdStack_138);
            }
          }
        }
        pdStack_138 = pdVar18;
        pdVar8 = pdVar8 + 1;
      } while (pdVar8 != pdStack_e8);
    }
    uVar6 = plVar4[1] - *plVar4 >> 3;
    if (uVar6 < (ulong)(long)*(int *)(param_2 + 0x1d) && pdStack_138 != pdVar17) {
      uVar6 = (long)*(int *)(param_2 + 0x1d) - uVar6;
      uVar7 = (long)pdVar17 - (long)pdStack_138 >> 4;
      if (uVar6 <= uVar7) {
        uVar7 = uVar6;
      }
      pdVar19 = (double *)((long)pdStack_138 + ((long)(uVar7 << 0x20) >> 0x1c));
      pdVar8 = pdStack_138;
      pdVar18 = pdVar17;
      if (pdVar19 != pdVar17) {
LAB_109486704:
        uVar6 = (long)pdVar17 - (long)pdVar8 >> 4;
        pdVar18 = pdVar19;
        if (1 < uVar6) {
          if (uVar6 != 3) {
            if (uVar6 == 2) {
              dVar25 = pdVar17[-2];
              dVar22 = *pdVar8;
              dVar20 = pdVar17[-1];
              dVar21 = pdVar8[1];
              bVar3 = dVar25 < dVar22;
              if (dVar25 == dVar22) {
                bVar3 = (ulong)dVar20 < (ulong)dVar21;
              }
              if (bVar3) {
                *pdVar8 = dVar25;
                pdVar17[-2] = dVar22;
                pdVar8[1] = dVar20;
                pdVar17[-1] = dVar21;
              }
            }
            else if ((long)uVar6 < 8) {
              while (pdVar19 = pdVar8, pdVar17 + -2 != pdVar19) {
                pdVar8 = pdVar19 + 2;
                if ((pdVar17 != pdVar19) && (pdVar8 != pdVar17)) {
                  dVar21 = *pdVar19;
                  lVar16 = 0x10;
                  pdVar11 = pdVar19;
                  dVar20 = dVar21;
                  do {
                    pdVar12 = (double *)((long)pdVar19 + lVar16);
                    dVar25 = *pdVar12;
                    bVar3 = dVar25 < dVar20;
                    if (dVar25 == dVar20) {
                      bVar3 = (ulong)pdVar12[1] < (ulong)pdVar11[1];
                    }
                    pdVar9 = pdVar12;
                    if (!bVar3) {
                      pdVar9 = pdVar11;
                      dVar25 = dVar20;
                    }
                    dVar20 = dVar25;
                    lVar16 = lVar16 + 0x10;
                    pdVar11 = pdVar9;
                  } while (pdVar12 + 2 != pdVar17);
                  if (pdVar9 != pdVar19) {
                    *pdVar19 = *pdVar9;
                    *pdVar9 = dVar21;
                    dVar20 = pdVar19[1];
                    pdVar19[1] = pdVar9[1];
                    pdVar9[1] = dVar20;
                  }
                }
              }
            }
            else {
              pdVar11 = pdVar8 + ((ulong)((long)pdVar17 - (long)pdVar8) >> 5) * 2;
              pdVar12 = pdVar17 + -2;
              dVar24 = *pdVar12;
              dVar22 = *pdVar11;
              dVar25 = *pdVar8;
              dVar20 = pdVar11[1];
              dVar21 = pdVar8[1];
              bVar3 = dVar22 < dVar25;
              if (dVar22 == dVar25) {
                bVar3 = (ulong)dVar20 < (ulong)dVar21;
              }
              dVar23 = pdVar17[-1];
              bVar1 = dVar24 < dVar22;
              if (dVar24 == dVar22) {
                bVar1 = (ulong)dVar23 < (ulong)dVar20;
              }
              if (bVar3) {
                if (bVar1) {
                  *pdVar8 = dVar24;
                  pdVar17[-2] = dVar25;
                  pdVar8[1] = dVar23;
                }
                else {
                  *pdVar8 = dVar22;
                  *pdVar11 = dVar25;
                  pdVar8[1] = dVar20;
                  pdVar11[1] = dVar21;
                  dVar22 = pdVar17[-2];
                  dVar20 = pdVar17[-1];
                  bVar3 = dVar22 < dVar25;
                  if (dVar22 == dVar25) {
                    bVar3 = (ulong)dVar20 < (ulong)dVar21;
                  }
                  if (!bVar3) {
LAB_10948683c:
                    iVar10 = 1;
                    goto LAB_109486840;
                  }
                  *pdVar11 = dVar22;
                  pdVar17[-2] = dVar25;
                  pdVar11[1] = dVar20;
                }
                iVar10 = 1;
                pdVar17[-1] = dVar21;
              }
              else if (bVar1) {
                *pdVar11 = dVar24;
                pdVar17[-2] = dVar22;
                pdVar11[1] = dVar23;
                pdVar17[-1] = dVar20;
                dVar25 = *pdVar11;
                dVar22 = *pdVar8;
                dVar20 = pdVar11[1];
                dVar21 = pdVar8[1];
                bVar3 = dVar25 < dVar22;
                if (dVar25 == dVar22) {
                  bVar3 = (ulong)dVar20 < (ulong)dVar21;
                }
                if (!bVar3) goto LAB_10948683c;
                *pdVar8 = dVar25;
                *pdVar11 = dVar22;
                pdVar8[1] = dVar20;
                iVar10 = 1;
                pdVar11[1] = dVar21;
              }
              else {
                iVar10 = 0;
              }
LAB_109486840:
              dVar21 = *pdVar8;
              dVar25 = *pdVar11;
              dVar20 = pdVar8[1];
              bVar3 = dVar21 < dVar25;
              if (dVar21 == dVar25) {
                bVar3 = (ulong)dVar20 < (ulong)pdVar11[1];
              }
              pdVar9 = pdVar12;
              if (!bVar3) {
                do {
                  pdVar13 = pdVar9;
                  pdVar9 = pdVar13 + -2;
                  if (pdVar9 == pdVar8) {
                    pdVar11 = pdVar8 + 2;
                    dVar22 = pdVar17[-2];
                    dVar25 = pdVar17[-1];
                    bVar3 = dVar21 < dVar22;
                    if (dVar21 == dVar22) {
                      bVar3 = (ulong)dVar20 < (ulong)dVar25;
                    }
                    if (!bVar3) goto LAB_109486a1c;
                    goto LAB_109486aa4;
                  }
                  dVar24 = pdVar13[-2];
                  dVar22 = pdVar13[-1];
                  bVar3 = dVar24 < dVar25;
                  if (dVar24 == dVar25) {
                    bVar3 = (ulong)dVar22 < (ulong)pdVar11[1];
                  }
                } while (!bVar3);
                *pdVar8 = dVar24;
                *pdVar9 = dVar21;
                pdVar8[1] = dVar22;
                pdVar13[-1] = dVar20;
                bVar3 = iVar10 != 0;
                iVar10 = 1;
                pdVar12 = pdVar9;
                if (bVar3) {
                  iVar10 = 2;
                }
              }
              pdVar9 = pdVar8 + 2;
              pdVar14 = pdVar11;
              pdVar13 = pdVar9;
              pdVar15 = pdVar9;
              if (pdVar9 < pdVar12) {
                while( true ) {
                  pdVar11 = pdVar14;
                  dVar20 = *pdVar11;
                  do {
                    pdVar13 = pdVar15;
                    dVar25 = *pdVar13;
                    dVar21 = pdVar13[1];
                    bVar3 = dVar25 < dVar20;
                    if (dVar25 == dVar20) {
                      bVar3 = (ulong)dVar21 < (ulong)pdVar11[1];
                    }
                    pdVar15 = pdVar13 + 2;
                  } while (bVar3);
                  do {
                    pdVar14 = pdVar12;
                    pdVar12 = pdVar14 + -2;
                    dVar24 = *pdVar12;
                    dVar22 = pdVar14[-1];
                    bVar3 = dVar24 < dVar20;
                    if (dVar24 == dVar20) {
                      bVar3 = (ulong)dVar22 < (ulong)pdVar11[1];
                    }
                  } while (!bVar3);
                  if (pdVar12 <= pdVar13) break;
                  *pdVar13 = dVar24;
                  *pdVar12 = dVar25;
                  pdVar13[1] = dVar22;
                  pdVar14[-1] = dVar21;
                  iVar10 = iVar10 + 1;
                  pdVar14 = pdVar12;
                  if (pdVar13 != pdVar11) {
                    pdVar14 = pdVar11;
                  }
                }
              }
              if (pdVar13 != pdVar11) {
                dVar25 = *pdVar11;
                dVar22 = *pdVar13;
                dVar21 = pdVar11[1];
                dVar20 = pdVar13[1];
                bVar3 = dVar25 < dVar22;
                if (dVar25 == dVar22) {
                  bVar3 = (ulong)dVar21 < (ulong)dVar20;
                }
                if (bVar3) {
                  *pdVar13 = dVar25;
                  *pdVar11 = dVar22;
                  pdVar13[1] = dVar21;
                  iVar10 = iVar10 + 1;
                  pdVar11[1] = dVar20;
                }
              }
              if (pdVar13 != pdVar19) {
                if (iVar10 == 0) {
                  pdVar11 = pdVar13;
                  if (pdVar19 < pdVar13) {
                    do {
                      if (pdVar9 == pdVar13) goto LAB_109486d10;
                      bVar3 = *pdVar9 < pdVar9[-2];
                      if (*pdVar9 == pdVar9[-2]) {
                        bVar3 = (ulong)pdVar9[1] < (ulong)pdVar9[-1];
                      }
                      pdVar9 = pdVar9 + 2;
                    } while (!bVar3);
                  }
                  else {
                    do {
                      pdVar12 = pdVar11 + 2;
                      if (pdVar12 == pdVar17) goto LAB_109486d10;
                      bVar3 = *pdVar12 < *pdVar11;
                      if (*pdVar12 == *pdVar11) {
                        bVar3 = (ulong)pdVar11[3] < (ulong)pdVar11[1];
                      }
                      pdVar11 = pdVar12;
                    } while (!bVar3);
                  }
                }
                pdVar9 = pdVar8;
                if (pdVar13 <= pdVar19) {
                  pdVar9 = pdVar13 + 2;
                  pdVar13 = pdVar17;
                }
                goto LAB_109486b28;
              }
            }
            goto LAB_109486d10;
          }
          dVar22 = pdVar8[2];
          dVar25 = *pdVar8;
          dVar21 = pdVar8[3];
          dVar20 = pdVar8[1];
          bVar3 = dVar22 < dVar25;
          if (dVar22 == dVar25) {
            bVar3 = (ulong)dVar21 < (ulong)dVar20;
          }
          dVar23 = pdVar17[-2];
          dVar24 = pdVar17[-1];
          bVar1 = dVar23 < dVar22;
          if (dVar23 == dVar22) {
            bVar1 = (ulong)dVar24 < (ulong)dVar21;
          }
          if (!bVar3) {
            if (bVar1) {
              pdVar8[2] = dVar23;
              pdVar17[-2] = dVar22;
              pdVar8[3] = dVar24;
              pdVar17[-1] = dVar21;
              dVar21 = pdVar8[2];
              dVar25 = *pdVar8;
              dVar20 = pdVar8[1];
              bVar3 = dVar21 < dVar25;
              if (dVar21 == dVar25) {
                bVar3 = (ulong)pdVar8[3] < (ulong)dVar20;
              }
              if (bVar3) {
                *pdVar8 = dVar21;
                pdVar8[2] = dVar25;
                pdVar8[1] = pdVar8[3];
                pdVar8[3] = dVar20;
              }
            }
            goto LAB_109486d10;
          }
          if (bVar1) {
            *pdVar8 = dVar23;
            pdVar17[-2] = dVar25;
            pdVar8[1] = dVar24;
          }
          else {
            *pdVar8 = dVar22;
            pdVar8[2] = dVar25;
            pdVar8[1] = dVar21;
            pdVar8[3] = dVar20;
            dVar22 = pdVar17[-2];
            dVar21 = pdVar17[-1];
            bVar3 = dVar22 < dVar25;
            if (dVar22 == dVar25) {
              bVar3 = (ulong)dVar21 < (ulong)dVar20;
            }
            if (!bVar3) goto LAB_109486d10;
            pdVar8[2] = dVar22;
            pdVar17[-2] = dVar25;
            pdVar8[3] = dVar21;
          }
          pdVar17[-1] = dVar20;
        }
      }
LAB_109486d10:
      if (pdStack_138 != pdVar18) {
        lVar16 = -(-(uVar7 >> 0x1f & 1) & 0xfffffff000000000 | (uVar7 & 0xffffffff) << 4);
        pdVar17 = pdStack_138 + 1;
        do {
          func_0x0001094880b0(plVar4,pdVar17);
          pdVar17 = pdVar17 + 2;
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != 0);
      }
    }
    if (pdStack_138 != (double *)0x0) {
      __ZdlPv(pdStack_138);
    }
    if (pdStack_f0 != (double *)0x0) {
      pdStack_e8 = pdStack_f0;
      __ZdlPv();
    }
  }
  return;
LAB_109486a1c:
  if (pdVar11 == pdVar12) goto LAB_109486d10;
  dVar23 = *pdVar11;
  dVar24 = pdVar11[1];
  bVar3 = dVar21 < dVar23;
  if (dVar21 == dVar23) {
    bVar3 = (ulong)dVar20 < (ulong)dVar24;
  }
  if (bVar3) goto LAB_109486a90;
  pdVar11 = pdVar11 + 2;
  goto LAB_109486a1c;
LAB_109486a90:
  *pdVar11 = dVar22;
  pdVar17[-2] = dVar23;
  pdVar11[1] = dVar25;
  pdVar11 = pdVar11 + 2;
  pdVar17[-1] = dVar24;
LAB_109486aa4:
  if (pdVar11 == pdVar12) goto LAB_109486d10;
  while( true ) {
    dVar20 = *pdVar8;
    do {
      pdVar9 = pdVar11;
      dVar25 = *pdVar9;
      dVar21 = pdVar9[1];
      bVar3 = dVar20 < dVar25;
      if (dVar20 == dVar25) {
        bVar3 = (ulong)pdVar8[1] < (ulong)dVar21;
      }
      pdVar11 = pdVar9 + 2;
    } while (!bVar3);
    do {
      pdVar13 = pdVar12;
      pdVar12 = pdVar13 + -2;
      dVar24 = *pdVar12;
      dVar22 = pdVar13[-1];
      bVar3 = dVar20 < dVar24;
      if (dVar20 == dVar24) {
        bVar3 = (ulong)pdVar8[1] < (ulong)dVar22;
      }
    } while (bVar3);
    if (pdVar12 <= pdVar9) break;
    *pdVar9 = dVar24;
    *pdVar12 = dVar25;
    pdVar9[1] = dVar22;
    pdVar13[-1] = dVar21;
  }
  pdVar13 = pdVar17;
  if (pdVar19 < pdVar9) goto LAB_109486d10;
LAB_109486b28:
  pdVar8 = pdVar9;
  pdVar17 = pdVar13;
  if (pdVar13 == pdVar19) goto LAB_109486d10;
  goto LAB_109486704;
}



/* Entry: 109486394; end: 1094863c7;  */

void FUN_109486394(long *param_1,undefined8 *param_2,double *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double *pdStack_128;
  double dStack_110;
  double dStack_108;
  double dStack_e8;
  double *pdStack_e0;
  double *pdStack_d8;
  long lStack_d0;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  (**(code **)*param_2)(&pdStack_e0,param_2);
  if (((ulong)param_3[5] & 1) == 0) {
    param_1[1] = (long)pdStack_d8;
    *param_1 = (long)pdStack_e0;
    param_1[2] = lStack_d0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_109488024(param_1,(long)pdStack_d8 - (long)pdStack_e0 >> 3);
    if (*(char *)(param_3 + 5) == '\x01') {
      dVar19 = (*param_3 * 3.141592653589793) / 180.0;
      dStack_110 = param_3[1] * 3.141592653589793;
      dStack_108 = dStack_110 / 180.0;
      ___sincos_stret();
      dVar24 = 6378137.0 / SQRT(dVar19 * dVar19 * -0.006694379990141316 + 1.0);
      dVar20 = dStack_110 * (dVar24 + 0.0);
      ___sincos_stret();
      dStack_110 = dStack_110 * dVar20;
      dStack_108 = dStack_108 * dVar20;
      dVar19 = dVar19 * (dVar24 * 0.9933056200098587 + 0.0);
    }
    else {
      dStack_108 = 0.0;
      dStack_110 = 0.0;
      dVar19 = 0.0;
    }
    if (pdStack_e0 == pdStack_d8) {
      pdVar16 = (double *)0x0;
      pdStack_128 = (double *)0x0;
    }
    else {
      pdVar18 = (double *)0x0;
      pdVar16 = (double *)0x0;
      pdStack_128 = (double *)0x0;
      pdVar7 = pdStack_e0;
      do {
        dVar20 = *pdVar7;
        pdVar17 = pdStack_128;
        dStack_e8 = dVar20;
        if ((*(byte *)((long)dVar20 + 0x268) & 1) == 0) {
          func_0x0001094880b0(param_1,&dStack_e8);
        }
        else {
          dVar24 = (*(double *)((long)dVar20 + 0x240) * 3.141592653589793) / 180.0;
          dVar22 = *(double *)((long)dVar20 + 0x248) * 3.141592653589793;
          dVar23 = dVar22 / 180.0;
          ___sincos_stret();
          dVar25 = 6378137.0 / SQRT(dVar24 * dVar24 * -0.006694379990141316 + 1.0);
          dVar21 = dVar22 * (dVar25 + 0.0);
          ___sincos_stret();
          dVar22 = dStack_110 - dVar22 * dVar21;
          dVar21 = dStack_108 - dVar23 * dVar21;
          dVar24 = dVar19 - dVar24 * (dVar25 * 0.9933056200098587 + 0.0);
          dVar24 = SQRT(dVar24 * dVar24 + dVar22 * dVar22 + dVar21 * dVar21);
          if (dVar24 <= param_3[3] + (double)*(float *)((long)param_2 + 0xe4) +
                        *(double *)((long)dVar20 + 600)) {
            func_0x0001094880b0(param_1,&dStack_e8);
          }
          else if (pdVar16 < pdVar18) {
            *pdVar16 = dVar24;
            pdVar16[1] = dVar20;
            pdVar16 = pdVar16 + 2;
          }
          else {
            lVar15 = (long)pdVar16 - (long)pdStack_128;
            uVar5 = (lVar15 >> 4) + 1;
            if (uVar5 >> 0x3c != 0) {
              FUN_109488174();
LAB_109486d94:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109486d98);
              (*pcVar2)();
            }
            uVar6 = (long)pdVar18 - (long)pdStack_128 >> 3;
            if (uVar6 <= uVar5) {
              uVar6 = uVar5;
            }
            if (0x7fffffffffffffef < (ulong)((long)pdVar18 - (long)pdStack_128)) {
              uVar6 = 0xfffffffffffffff;
            }
            if (uVar6 >> 0x3c != 0) {
              func_0x000104c4f740();
              goto LAB_109486d94;
            }
            lVar4 = uVar6 << 4;
            __Znwm();
            pdVar17 = (double *)(lVar4 + lVar15);
            pdVar18 = (double *)(lVar4 + uVar6 * 0x10);
            *pdVar17 = dVar24;
            pdVar17[1] = dVar20;
            pdVar16 = pdVar17 + 2;
            pdVar17 = pdVar17 + (lVar15 >> 4) * -2;
            _memcpy(pdVar17,pdStack_128,lVar15);
            if (pdStack_128 != (double *)0x0) {
              __ZdlPv(pdStack_128);
            }
          }
        }
        pdStack_128 = pdVar17;
        pdVar7 = pdVar7 + 1;
      } while (pdVar7 != pdStack_d8);
    }
    uVar5 = param_1[1] - *param_1 >> 3;
    if (uVar5 < (ulong)(long)*(int *)(param_2 + 0x1d) && pdStack_128 != pdVar16) {
      uVar5 = (long)*(int *)(param_2 + 0x1d) - uVar5;
      uVar6 = (long)pdVar16 - (long)pdStack_128 >> 4;
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      pdVar18 = (double *)((long)pdStack_128 + ((long)(uVar6 << 0x20) >> 0x1c));
      pdVar7 = pdStack_128;
      pdVar17 = pdVar16;
      if (pdVar18 != pdVar16) {
LAB_109486704:
        uVar5 = (long)pdVar16 - (long)pdVar7 >> 4;
        pdVar17 = pdVar18;
        if (1 < uVar5) {
          if (uVar5 != 3) {
            if (uVar5 == 2) {
              dVar24 = pdVar16[-2];
              dVar21 = *pdVar7;
              dVar19 = pdVar16[-1];
              dVar20 = pdVar7[1];
              bVar3 = dVar24 < dVar21;
              if (dVar24 == dVar21) {
                bVar3 = (ulong)dVar19 < (ulong)dVar20;
              }
              if (bVar3) {
                *pdVar7 = dVar24;
                pdVar16[-2] = dVar21;
                pdVar7[1] = dVar19;
                pdVar16[-1] = dVar20;
              }
            }
            else if ((long)uVar5 < 8) {
              while (pdVar18 = pdVar7, pdVar16 + -2 != pdVar18) {
                pdVar7 = pdVar18 + 2;
                if ((pdVar16 != pdVar18) && (pdVar7 != pdVar16)) {
                  dVar20 = *pdVar18;
                  lVar15 = 0x10;
                  pdVar10 = pdVar18;
                  dVar19 = dVar20;
                  do {
                    pdVar11 = (double *)((long)pdVar18 + lVar15);
                    dVar24 = *pdVar11;
                    bVar3 = dVar24 < dVar19;
                    if (dVar24 == dVar19) {
                      bVar3 = (ulong)pdVar11[1] < (ulong)pdVar10[1];
                    }
                    pdVar8 = pdVar11;
                    if (!bVar3) {
                      pdVar8 = pdVar10;
                      dVar24 = dVar19;
                    }
                    dVar19 = dVar24;
                    lVar15 = lVar15 + 0x10;
                    pdVar10 = pdVar8;
                  } while (pdVar11 + 2 != pdVar16);
                  if (pdVar8 != pdVar18) {
                    *pdVar18 = *pdVar8;
                    *pdVar8 = dVar20;
                    dVar19 = pdVar18[1];
                    pdVar18[1] = pdVar8[1];
                    pdVar8[1] = dVar19;
                  }
                }
              }
            }
            else {
              pdVar10 = pdVar7 + ((ulong)((long)pdVar16 - (long)pdVar7) >> 5) * 2;
              pdVar11 = pdVar16 + -2;
              dVar23 = *pdVar11;
              dVar21 = *pdVar10;
              dVar24 = *pdVar7;
              dVar19 = pdVar10[1];
              dVar20 = pdVar7[1];
              bVar3 = dVar21 < dVar24;
              if (dVar21 == dVar24) {
                bVar3 = (ulong)dVar19 < (ulong)dVar20;
              }
              dVar22 = pdVar16[-1];
              bVar1 = dVar23 < dVar21;
              if (dVar23 == dVar21) {
                bVar1 = (ulong)dVar22 < (ulong)dVar19;
              }
              if (bVar3) {
                if (bVar1) {
                  *pdVar7 = dVar23;
                  pdVar16[-2] = dVar24;
                  pdVar7[1] = dVar22;
                }
                else {
                  *pdVar7 = dVar21;
                  *pdVar10 = dVar24;
                  pdVar7[1] = dVar19;
                  pdVar10[1] = dVar20;
                  dVar21 = pdVar16[-2];
                  dVar19 = pdVar16[-1];
                  bVar3 = dVar21 < dVar24;
                  if (dVar21 == dVar24) {
                    bVar3 = (ulong)dVar19 < (ulong)dVar20;
                  }
                  if (!bVar3) {
LAB_10948683c:
                    iVar9 = 1;
                    goto LAB_109486840;
                  }
                  *pdVar10 = dVar21;
                  pdVar16[-2] = dVar24;
                  pdVar10[1] = dVar19;
                }
                iVar9 = 1;
                pdVar16[-1] = dVar20;
              }
              else if (bVar1) {
                *pdVar10 = dVar23;
                pdVar16[-2] = dVar21;
                pdVar10[1] = dVar22;
                pdVar16[-1] = dVar19;
                dVar24 = *pdVar10;
                dVar21 = *pdVar7;
                dVar19 = pdVar10[1];
                dVar20 = pdVar7[1];
                bVar3 = dVar24 < dVar21;
                if (dVar24 == dVar21) {
                  bVar3 = (ulong)dVar19 < (ulong)dVar20;
                }
                if (!bVar3) goto LAB_10948683c;
                *pdVar7 = dVar24;
                *pdVar10 = dVar21;
                pdVar7[1] = dVar19;
                iVar9 = 1;
                pdVar10[1] = dVar20;
              }
              else {
                iVar9 = 0;
              }
LAB_109486840:
              dVar20 = *pdVar7;
              dVar24 = *pdVar10;
              dVar19 = pdVar7[1];
              bVar3 = dVar20 < dVar24;
              if (dVar20 == dVar24) {
                bVar3 = (ulong)dVar19 < (ulong)pdVar10[1];
              }
              pdVar8 = pdVar11;
              if (!bVar3) {
                do {
                  pdVar12 = pdVar8;
                  pdVar8 = pdVar12 + -2;
                  if (pdVar8 == pdVar7) {
                    pdVar10 = pdVar7 + 2;
                    dVar21 = pdVar16[-2];
                    dVar24 = pdVar16[-1];
                    bVar3 = dVar20 < dVar21;
                    if (dVar20 == dVar21) {
                      bVar3 = (ulong)dVar19 < (ulong)dVar24;
                    }
                    if (!bVar3) goto LAB_109486a1c;
                    goto LAB_109486aa4;
                  }
                  dVar23 = pdVar12[-2];
                  dVar21 = pdVar12[-1];
                  bVar3 = dVar23 < dVar24;
                  if (dVar23 == dVar24) {
                    bVar3 = (ulong)dVar21 < (ulong)pdVar10[1];
                  }
                } while (!bVar3);
                *pdVar7 = dVar23;
                *pdVar8 = dVar20;
                pdVar7[1] = dVar21;
                pdVar12[-1] = dVar19;
                bVar3 = iVar9 != 0;
                iVar9 = 1;
                pdVar11 = pdVar8;
                if (bVar3) {
                  iVar9 = 2;
                }
              }
              pdVar8 = pdVar7 + 2;
              pdVar13 = pdVar10;
              pdVar12 = pdVar8;
              pdVar14 = pdVar8;
              if (pdVar8 < pdVar11) {
                while( true ) {
                  pdVar10 = pdVar13;
                  dVar19 = *pdVar10;
                  do {
                    pdVar12 = pdVar14;
                    dVar24 = *pdVar12;
                    dVar20 = pdVar12[1];
                    bVar3 = dVar24 < dVar19;
                    if (dVar24 == dVar19) {
                      bVar3 = (ulong)dVar20 < (ulong)pdVar10[1];
                    }
                    pdVar14 = pdVar12 + 2;
                  } while (bVar3);
                  do {
                    pdVar13 = pdVar11;
                    pdVar11 = pdVar13 + -2;
                    dVar23 = *pdVar11;
                    dVar21 = pdVar13[-1];
                    bVar3 = dVar23 < dVar19;
                    if (dVar23 == dVar19) {
                      bVar3 = (ulong)dVar21 < (ulong)pdVar10[1];
                    }
                  } while (!bVar3);
                  if (pdVar11 <= pdVar12) break;
                  *pdVar12 = dVar23;
                  *pdVar11 = dVar24;
                  pdVar12[1] = dVar21;
                  pdVar13[-1] = dVar20;
                  iVar9 = iVar9 + 1;
                  pdVar13 = pdVar11;
                  if (pdVar12 != pdVar10) {
                    pdVar13 = pdVar10;
                  }
                }
              }
              if (pdVar12 != pdVar10) {
                dVar24 = *pdVar10;
                dVar21 = *pdVar12;
                dVar20 = pdVar10[1];
                dVar19 = pdVar12[1];
                bVar3 = dVar24 < dVar21;
                if (dVar24 == dVar21) {
                  bVar3 = (ulong)dVar20 < (ulong)dVar19;
                }
                if (bVar3) {
                  *pdVar12 = dVar24;
                  *pdVar10 = dVar21;
                  pdVar12[1] = dVar20;
                  iVar9 = iVar9 + 1;
                  pdVar10[1] = dVar19;
                }
              }
              if (pdVar12 != pdVar18) {
                if (iVar9 == 0) {
                  pdVar10 = pdVar12;
                  if (pdVar18 < pdVar12) {
                    do {
                      if (pdVar8 == pdVar12) goto LAB_109486d10;
                      bVar3 = *pdVar8 < pdVar8[-2];
                      if (*pdVar8 == pdVar8[-2]) {
                        bVar3 = (ulong)pdVar8[1] < (ulong)pdVar8[-1];
                      }
                      pdVar8 = pdVar8 + 2;
                    } while (!bVar3);
                  }
                  else {
                    do {
                      pdVar11 = pdVar10 + 2;
                      if (pdVar11 == pdVar16) goto LAB_109486d10;
                      bVar3 = *pdVar11 < *pdVar10;
                      if (*pdVar11 == *pdVar10) {
                        bVar3 = (ulong)pdVar10[3] < (ulong)pdVar10[1];
                      }
                      pdVar10 = pdVar11;
                    } while (!bVar3);
                  }
                }
                pdVar8 = pdVar7;
                if (pdVar12 <= pdVar18) {
                  pdVar8 = pdVar12 + 2;
                  pdVar12 = pdVar16;
                }
                goto LAB_109486b28;
              }
            }
            goto LAB_109486d10;
          }
          dVar21 = pdVar7[2];
          dVar24 = *pdVar7;
          dVar20 = pdVar7[3];
          dVar19 = pdVar7[1];
          bVar3 = dVar21 < dVar24;
          if (dVar21 == dVar24) {
            bVar3 = (ulong)dVar20 < (ulong)dVar19;
          }
          dVar22 = pdVar16[-2];
          dVar23 = pdVar16[-1];
          bVar1 = dVar22 < dVar21;
          if (dVar22 == dVar21) {
            bVar1 = (ulong)dVar23 < (ulong)dVar20;
          }
          if (!bVar3) {
            if (bVar1) {
              pdVar7[2] = dVar22;
              pdVar16[-2] = dVar21;
              pdVar7[3] = dVar23;
              pdVar16[-1] = dVar20;
              dVar20 = pdVar7[2];
              dVar24 = *pdVar7;
              dVar19 = pdVar7[1];
              bVar3 = dVar20 < dVar24;
              if (dVar20 == dVar24) {
                bVar3 = (ulong)pdVar7[3] < (ulong)dVar19;
              }
              if (bVar3) {
                *pdVar7 = dVar20;
                pdVar7[2] = dVar24;
                pdVar7[1] = pdVar7[3];
                pdVar7[3] = dVar19;
              }
            }
            goto LAB_109486d10;
          }
          if (bVar1) {
            *pdVar7 = dVar22;
            pdVar16[-2] = dVar24;
            pdVar7[1] = dVar23;
          }
          else {
            *pdVar7 = dVar21;
            pdVar7[2] = dVar24;
            pdVar7[1] = dVar20;
            pdVar7[3] = dVar19;
            dVar21 = pdVar16[-2];
            dVar20 = pdVar16[-1];
            bVar3 = dVar21 < dVar24;
            if (dVar21 == dVar24) {
              bVar3 = (ulong)dVar20 < (ulong)dVar19;
            }
            if (!bVar3) goto LAB_109486d10;
            pdVar7[2] = dVar21;
            pdVar16[-2] = dVar24;
            pdVar7[3] = dVar20;
          }
          pdVar16[-1] = dVar19;
        }
      }
LAB_109486d10:
      if (pdStack_128 != pdVar17) {
        lVar15 = -(-(uVar6 >> 0x1f & 1) & 0xfffffff000000000 | (uVar6 & 0xffffffff) << 4);
        pdVar16 = pdStack_128 + 1;
        do {
          func_0x0001094880b0(param_1,pdVar16);
          pdVar16 = pdVar16 + 2;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != 0);
      }
    }
    if (pdStack_128 != (double *)0x0) {
      __ZdlPv(pdStack_128);
    }
    if (pdStack_e0 != (double *)0x0) {
      pdStack_d8 = pdStack_e0;
      __ZdlPv();
    }
  }
  return;
LAB_109486a1c:
  if (pdVar10 == pdVar11) goto LAB_109486d10;
  dVar22 = *pdVar10;
  dVar23 = pdVar10[1];
  bVar3 = dVar20 < dVar22;
  if (dVar20 == dVar22) {
    bVar3 = (ulong)dVar19 < (ulong)dVar23;
  }
  if (bVar3) goto LAB_109486a90;
  pdVar10 = pdVar10 + 2;
  goto LAB_109486a1c;
LAB_109486a90:
  *pdVar10 = dVar21;
  pdVar16[-2] = dVar22;
  pdVar10[1] = dVar24;
  pdVar10 = pdVar10 + 2;
  pdVar16[-1] = dVar23;
LAB_109486aa4:
  if (pdVar10 == pdVar11) goto LAB_109486d10;
  while( true ) {
    dVar19 = *pdVar7;
    do {
      pdVar8 = pdVar10;
      dVar24 = *pdVar8;
      dVar20 = pdVar8[1];
      bVar3 = dVar19 < dVar24;
      if (dVar19 == dVar24) {
        bVar3 = (ulong)pdVar7[1] < (ulong)dVar20;
      }
      pdVar10 = pdVar8 + 2;
    } while (!bVar3);
    do {
      pdVar12 = pdVar11;
      pdVar11 = pdVar12 + -2;
      dVar23 = *pdVar11;
      dVar21 = pdVar12[-1];
      bVar3 = dVar19 < dVar23;
      if (dVar19 == dVar23) {
        bVar3 = (ulong)pdVar7[1] < (ulong)dVar21;
      }
    } while (bVar3);
    if (pdVar11 <= pdVar8) break;
    *pdVar8 = dVar23;
    *pdVar11 = dVar24;
    pdVar8[1] = dVar21;
    pdVar12[-1] = dVar20;
  }
  pdVar12 = pdVar16;
  if (pdVar18 < pdVar8) goto LAB_109486d10;
LAB_109486b28:
  pdVar7 = pdVar8;
  pdVar16 = pdVar12;
  if (pdVar12 == pdVar18) goto LAB_109486d10;
  goto LAB_109486704;
}



/* Entry: 1094863c8; end: 109486deb;  */

void FUN_1094863c8(long *param_1,undefined8 *param_2,double *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double *pdStack_108;
  double dStack_f0;
  double dStack_e8;
  double dStack_c8;
  double *pdStack_c0;
  double *pdStack_b8;
  long lStack_b0;
  
  (**(code **)*param_2)(&pdStack_c0,param_2);
  if (((ulong)param_3[5] & 1) == 0) {
    param_1[1] = (long)pdStack_b8;
    *param_1 = (long)pdStack_c0;
    param_1[2] = lStack_b0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_109488024(param_1,(long)pdStack_b8 - (long)pdStack_c0 >> 3);
    if (*(char *)(param_3 + 5) == '\x01') {
      dVar19 = (*param_3 * 3.141592653589793) / 180.0;
      dStack_f0 = param_3[1] * 3.141592653589793;
      dStack_e8 = dStack_f0 / 180.0;
      ___sincos_stret();
      dVar24 = 6378137.0 / SQRT(dVar19 * dVar19 * -0.006694379990141316 + 1.0);
      dVar20 = dStack_f0 * (dVar24 + 0.0);
      ___sincos_stret();
      dStack_f0 = dStack_f0 * dVar20;
      dStack_e8 = dStack_e8 * dVar20;
      dVar19 = dVar19 * (dVar24 * 0.9933056200098587 + 0.0);
    }
    else {
      dStack_e8 = 0.0;
      dStack_f0 = 0.0;
      dVar19 = 0.0;
    }
    if (pdStack_c0 == pdStack_b8) {
      pdVar16 = (double *)0x0;
      pdStack_108 = (double *)0x0;
    }
    else {
      pdVar18 = (double *)0x0;
      pdVar16 = (double *)0x0;
      pdStack_108 = (double *)0x0;
      pdVar7 = pdStack_c0;
      do {
        dVar20 = *pdVar7;
        pdVar17 = pdStack_108;
        dStack_c8 = dVar20;
        if ((*(byte *)((long)dVar20 + 0x268) & 1) == 0) {
          func_0x0001094880b0(param_1,&dStack_c8);
        }
        else {
          dVar24 = (*(double *)((long)dVar20 + 0x240) * 3.141592653589793) / 180.0;
          dVar22 = *(double *)((long)dVar20 + 0x248) * 3.141592653589793;
          dVar23 = dVar22 / 180.0;
          ___sincos_stret();
          dVar25 = 6378137.0 / SQRT(dVar24 * dVar24 * -0.006694379990141316 + 1.0);
          dVar21 = dVar22 * (dVar25 + 0.0);
          ___sincos_stret();
          dVar22 = dStack_f0 - dVar22 * dVar21;
          dVar21 = dStack_e8 - dVar23 * dVar21;
          dVar24 = dVar19 - dVar24 * (dVar25 * 0.9933056200098587 + 0.0);
          dVar24 = SQRT(dVar24 * dVar24 + dVar22 * dVar22 + dVar21 * dVar21);
          if (dVar24 <= param_3[3] + (double)*(float *)((long)param_2 + 0xe4) +
                        *(double *)((long)dVar20 + 600)) {
            func_0x0001094880b0(param_1,&dStack_c8);
          }
          else if (pdVar16 < pdVar18) {
            *pdVar16 = dVar24;
            pdVar16[1] = dVar20;
            pdVar16 = pdVar16 + 2;
          }
          else {
            lVar15 = (long)pdVar16 - (long)pdStack_108;
            uVar5 = (lVar15 >> 4) + 1;
            if (uVar5 >> 0x3c != 0) {
              FUN_109488174();
LAB_109486d94:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109486d98);
              (*pcVar2)();
            }
            uVar6 = (long)pdVar18 - (long)pdStack_108 >> 3;
            if (uVar6 <= uVar5) {
              uVar6 = uVar5;
            }
            if (0x7fffffffffffffef < (ulong)((long)pdVar18 - (long)pdStack_108)) {
              uVar6 = 0xfffffffffffffff;
            }
            if (uVar6 >> 0x3c != 0) {
              func_0x000104c4f740();
              goto LAB_109486d94;
            }
            lVar4 = uVar6 << 4;
            __Znwm();
            pdVar17 = (double *)(lVar4 + lVar15);
            pdVar18 = (double *)(lVar4 + uVar6 * 0x10);
            *pdVar17 = dVar24;
            pdVar17[1] = dVar20;
            pdVar16 = pdVar17 + 2;
            pdVar17 = pdVar17 + (lVar15 >> 4) * -2;
            _memcpy(pdVar17,pdStack_108,lVar15);
            if (pdStack_108 != (double *)0x0) {
              __ZdlPv(pdStack_108);
            }
          }
        }
        pdStack_108 = pdVar17;
        pdVar7 = pdVar7 + 1;
      } while (pdVar7 != pdStack_b8);
    }
    uVar5 = param_1[1] - *param_1 >> 3;
    if (uVar5 < (ulong)(long)*(int *)(param_2 + 0x1d) && pdStack_108 != pdVar16) {
      uVar5 = (long)*(int *)(param_2 + 0x1d) - uVar5;
      uVar6 = (long)pdVar16 - (long)pdStack_108 >> 4;
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      pdVar18 = (double *)((long)pdStack_108 + ((long)(uVar6 << 0x20) >> 0x1c));
      pdVar7 = pdStack_108;
      pdVar17 = pdVar16;
      if (pdVar18 != pdVar16) {
LAB_109486704:
        uVar5 = (long)pdVar16 - (long)pdVar7 >> 4;
        pdVar17 = pdVar18;
        if (1 < uVar5) {
          if (uVar5 != 3) {
            if (uVar5 == 2) {
              dVar24 = pdVar16[-2];
              dVar21 = *pdVar7;
              dVar19 = pdVar16[-1];
              dVar20 = pdVar7[1];
              bVar3 = dVar24 < dVar21;
              if (dVar24 == dVar21) {
                bVar3 = (ulong)dVar19 < (ulong)dVar20;
              }
              if (bVar3) {
                *pdVar7 = dVar24;
                pdVar16[-2] = dVar21;
                pdVar7[1] = dVar19;
                pdVar16[-1] = dVar20;
              }
            }
            else if ((long)uVar5 < 8) {
              while (pdVar18 = pdVar7, pdVar16 + -2 != pdVar18) {
                pdVar7 = pdVar18 + 2;
                if ((pdVar16 != pdVar18) && (pdVar7 != pdVar16)) {
                  dVar20 = *pdVar18;
                  lVar15 = 0x10;
                  pdVar10 = pdVar18;
                  dVar19 = dVar20;
                  do {
                    pdVar11 = (double *)((long)pdVar18 + lVar15);
                    dVar24 = *pdVar11;
                    bVar3 = dVar24 < dVar19;
                    if (dVar24 == dVar19) {
                      bVar3 = (ulong)pdVar11[1] < (ulong)pdVar10[1];
                    }
                    pdVar8 = pdVar11;
                    if (!bVar3) {
                      pdVar8 = pdVar10;
                      dVar24 = dVar19;
                    }
                    dVar19 = dVar24;
                    lVar15 = lVar15 + 0x10;
                    pdVar10 = pdVar8;
                  } while (pdVar11 + 2 != pdVar16);
                  if (pdVar8 != pdVar18) {
                    *pdVar18 = *pdVar8;
                    *pdVar8 = dVar20;
                    dVar19 = pdVar18[1];
                    pdVar18[1] = pdVar8[1];
                    pdVar8[1] = dVar19;
                  }
                }
              }
            }
            else {
              pdVar10 = pdVar7 + ((ulong)((long)pdVar16 - (long)pdVar7) >> 5) * 2;
              pdVar11 = pdVar16 + -2;
              dVar23 = *pdVar11;
              dVar21 = *pdVar10;
              dVar24 = *pdVar7;
              dVar19 = pdVar10[1];
              dVar20 = pdVar7[1];
              bVar3 = dVar21 < dVar24;
              if (dVar21 == dVar24) {
                bVar3 = (ulong)dVar19 < (ulong)dVar20;
              }
              dVar22 = pdVar16[-1];
              bVar1 = dVar23 < dVar21;
              if (dVar23 == dVar21) {
                bVar1 = (ulong)dVar22 < (ulong)dVar19;
              }
              if (bVar3) {
                if (bVar1) {
                  *pdVar7 = dVar23;
                  pdVar16[-2] = dVar24;
                  pdVar7[1] = dVar22;
                }
                else {
                  *pdVar7 = dVar21;
                  *pdVar10 = dVar24;
                  pdVar7[1] = dVar19;
                  pdVar10[1] = dVar20;
                  dVar21 = pdVar16[-2];
                  dVar19 = pdVar16[-1];
                  bVar3 = dVar21 < dVar24;
                  if (dVar21 == dVar24) {
                    bVar3 = (ulong)dVar19 < (ulong)dVar20;
                  }
                  if (!bVar3) {
LAB_10948683c:
                    iVar9 = 1;
                    goto LAB_109486840;
                  }
                  *pdVar10 = dVar21;
                  pdVar16[-2] = dVar24;
                  pdVar10[1] = dVar19;
                }
                iVar9 = 1;
                pdVar16[-1] = dVar20;
              }
              else if (bVar1) {
                *pdVar10 = dVar23;
                pdVar16[-2] = dVar21;
                pdVar10[1] = dVar22;
                pdVar16[-1] = dVar19;
                dVar24 = *pdVar10;
                dVar21 = *pdVar7;
                dVar19 = pdVar10[1];
                dVar20 = pdVar7[1];
                bVar3 = dVar24 < dVar21;
                if (dVar24 == dVar21) {
                  bVar3 = (ulong)dVar19 < (ulong)dVar20;
                }
                if (!bVar3) goto LAB_10948683c;
                *pdVar7 = dVar24;
                *pdVar10 = dVar21;
                pdVar7[1] = dVar19;
                iVar9 = 1;
                pdVar10[1] = dVar20;
              }
              else {
                iVar9 = 0;
              }
LAB_109486840:
              dVar20 = *pdVar7;
              dVar24 = *pdVar10;
              dVar19 = pdVar7[1];
              bVar3 = dVar20 < dVar24;
              if (dVar20 == dVar24) {
                bVar3 = (ulong)dVar19 < (ulong)pdVar10[1];
              }
              pdVar8 = pdVar11;
              if (!bVar3) {
                do {
                  pdVar12 = pdVar8;
                  pdVar8 = pdVar12 + -2;
                  if (pdVar8 == pdVar7) {
                    pdVar10 = pdVar7 + 2;
                    dVar21 = pdVar16[-2];
                    dVar24 = pdVar16[-1];
                    bVar3 = dVar20 < dVar21;
                    if (dVar20 == dVar21) {
                      bVar3 = (ulong)dVar19 < (ulong)dVar24;
                    }
                    if (!bVar3) goto LAB_109486a1c;
                    goto LAB_109486aa4;
                  }
                  dVar23 = pdVar12[-2];
                  dVar21 = pdVar12[-1];
                  bVar3 = dVar23 < dVar24;
                  if (dVar23 == dVar24) {
                    bVar3 = (ulong)dVar21 < (ulong)pdVar10[1];
                  }
                } while (!bVar3);
                *pdVar7 = dVar23;
                *pdVar8 = dVar20;
                pdVar7[1] = dVar21;
                pdVar12[-1] = dVar19;
                bVar3 = iVar9 != 0;
                iVar9 = 1;
                pdVar11 = pdVar8;
                if (bVar3) {
                  iVar9 = 2;
                }
              }
              pdVar8 = pdVar7 + 2;
              pdVar13 = pdVar10;
              pdVar12 = pdVar8;
              pdVar14 = pdVar8;
              if (pdVar8 < pdVar11) {
                while( true ) {
                  pdVar10 = pdVar13;
                  dVar19 = *pdVar10;
                  do {
                    pdVar12 = pdVar14;
                    dVar24 = *pdVar12;
                    dVar20 = pdVar12[1];
                    bVar3 = dVar24 < dVar19;
                    if (dVar24 == dVar19) {
                      bVar3 = (ulong)dVar20 < (ulong)pdVar10[1];
                    }
                    pdVar14 = pdVar12 + 2;
                  } while (bVar3);
                  do {
                    pdVar13 = pdVar11;
                    pdVar11 = pdVar13 + -2;
                    dVar23 = *pdVar11;
                    dVar21 = pdVar13[-1];
                    bVar3 = dVar23 < dVar19;
                    if (dVar23 == dVar19) {
                      bVar3 = (ulong)dVar21 < (ulong)pdVar10[1];
                    }
                  } while (!bVar3);
                  if (pdVar11 <= pdVar12) break;
                  *pdVar12 = dVar23;
                  *pdVar11 = dVar24;
                  pdVar12[1] = dVar21;
                  pdVar13[-1] = dVar20;
                  iVar9 = iVar9 + 1;
                  pdVar13 = pdVar11;
                  if (pdVar12 != pdVar10) {
                    pdVar13 = pdVar10;
                  }
                }
              }
              if (pdVar12 != pdVar10) {
                dVar24 = *pdVar10;
                dVar21 = *pdVar12;
                dVar20 = pdVar10[1];
                dVar19 = pdVar12[1];
                bVar3 = dVar24 < dVar21;
                if (dVar24 == dVar21) {
                  bVar3 = (ulong)dVar20 < (ulong)dVar19;
                }
                if (bVar3) {
                  *pdVar12 = dVar24;
                  *pdVar10 = dVar21;
                  pdVar12[1] = dVar20;
                  iVar9 = iVar9 + 1;
                  pdVar10[1] = dVar19;
                }
              }
              if (pdVar12 != pdVar18) {
                if (iVar9 == 0) {
                  pdVar10 = pdVar12;
                  if (pdVar18 < pdVar12) {
                    do {
                      if (pdVar8 == pdVar12) goto LAB_109486d10;
                      bVar3 = *pdVar8 < pdVar8[-2];
                      if (*pdVar8 == pdVar8[-2]) {
                        bVar3 = (ulong)pdVar8[1] < (ulong)pdVar8[-1];
                      }
                      pdVar8 = pdVar8 + 2;
                    } while (!bVar3);
                  }
                  else {
                    do {
                      pdVar11 = pdVar10 + 2;
                      if (pdVar11 == pdVar16) goto LAB_109486d10;
                      bVar3 = *pdVar11 < *pdVar10;
                      if (*pdVar11 == *pdVar10) {
                        bVar3 = (ulong)pdVar10[3] < (ulong)pdVar10[1];
                      }
                      pdVar10 = pdVar11;
                    } while (!bVar3);
                  }
                }
                pdVar8 = pdVar7;
                if (pdVar12 <= pdVar18) {
                  pdVar8 = pdVar12 + 2;
                  pdVar12 = pdVar16;
                }
                goto LAB_109486b28;
              }
            }
            goto LAB_109486d10;
          }
          dVar21 = pdVar7[2];
          dVar24 = *pdVar7;
          dVar20 = pdVar7[3];
          dVar19 = pdVar7[1];
          bVar3 = dVar21 < dVar24;
          if (dVar21 == dVar24) {
            bVar3 = (ulong)dVar20 < (ulong)dVar19;
          }
          dVar22 = pdVar16[-2];
          dVar23 = pdVar16[-1];
          bVar1 = dVar22 < dVar21;
          if (dVar22 == dVar21) {
            bVar1 = (ulong)dVar23 < (ulong)dVar20;
          }
          if (!bVar3) {
            if (bVar1) {
              pdVar7[2] = dVar22;
              pdVar16[-2] = dVar21;
              pdVar7[3] = dVar23;
              pdVar16[-1] = dVar20;
              dVar20 = pdVar7[2];
              dVar24 = *pdVar7;
              dVar19 = pdVar7[1];
              bVar3 = dVar20 < dVar24;
              if (dVar20 == dVar24) {
                bVar3 = (ulong)pdVar7[3] < (ulong)dVar19;
              }
              if (bVar3) {
                *pdVar7 = dVar20;
                pdVar7[2] = dVar24;
                pdVar7[1] = pdVar7[3];
                pdVar7[3] = dVar19;
              }
            }
            goto LAB_109486d10;
          }
          if (bVar1) {
            *pdVar7 = dVar22;
            pdVar16[-2] = dVar24;
            pdVar7[1] = dVar23;
          }
          else {
            *pdVar7 = dVar21;
            pdVar7[2] = dVar24;
            pdVar7[1] = dVar20;
            pdVar7[3] = dVar19;
            dVar21 = pdVar16[-2];
            dVar20 = pdVar16[-1];
            bVar3 = dVar21 < dVar24;
            if (dVar21 == dVar24) {
              bVar3 = (ulong)dVar20 < (ulong)dVar19;
            }
            if (!bVar3) goto LAB_109486d10;
            pdVar7[2] = dVar21;
            pdVar16[-2] = dVar24;
            pdVar7[3] = dVar20;
          }
          pdVar16[-1] = dVar19;
        }
      }
LAB_109486d10:
      if (pdStack_108 != pdVar17) {
        lVar15 = -(-(uVar6 >> 0x1f & 1) & 0xfffffff000000000 | (uVar6 & 0xffffffff) << 4);
        pdVar16 = pdStack_108 + 1;
        do {
          func_0x0001094880b0(param_1,pdVar16);
          pdVar16 = pdVar16 + 2;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != 0);
      }
    }
    if (pdStack_108 != (double *)0x0) {
      __ZdlPv(pdStack_108);
    }
    if (pdStack_c0 != (double *)0x0) {
      pdStack_b8 = pdStack_c0;
      __ZdlPv();
    }
  }
  return;
LAB_109486a1c:
  if (pdVar10 == pdVar11) goto LAB_109486d10;
  dVar22 = *pdVar10;
  dVar23 = pdVar10[1];
  bVar3 = dVar20 < dVar22;
  if (dVar20 == dVar22) {
    bVar3 = (ulong)dVar19 < (ulong)dVar23;
  }
  if (bVar3) goto LAB_109486a90;
  pdVar10 = pdVar10 + 2;
  goto LAB_109486a1c;
LAB_109486a90:
  *pdVar10 = dVar21;
  pdVar16[-2] = dVar22;
  pdVar10[1] = dVar24;
  pdVar10 = pdVar10 + 2;
  pdVar16[-1] = dVar23;
LAB_109486aa4:
  if (pdVar10 == pdVar11) goto LAB_109486d10;
  while( true ) {
    dVar19 = *pdVar7;
    do {
      pdVar8 = pdVar10;
      dVar24 = *pdVar8;
      dVar20 = pdVar8[1];
      bVar3 = dVar19 < dVar24;
      if (dVar19 == dVar24) {
        bVar3 = (ulong)pdVar7[1] < (ulong)dVar20;
      }
      pdVar10 = pdVar8 + 2;
    } while (!bVar3);
    do {
      pdVar12 = pdVar11;
      pdVar11 = pdVar12 + -2;
      dVar23 = *pdVar11;
      dVar21 = pdVar12[-1];
      bVar3 = dVar19 < dVar23;
      if (dVar19 == dVar23) {
        bVar3 = (ulong)pdVar7[1] < (ulong)dVar21;
      }
    } while (bVar3);
    if (pdVar11 <= pdVar8) break;
    *pdVar8 = dVar23;
    *pdVar11 = dVar24;
    pdVar8[1] = dVar21;
    pdVar12[-1] = dVar20;
  }
  pdVar12 = pdVar16;
  if (pdVar18 < pdVar8) goto LAB_109486d10;
LAB_109486b28:
  pdVar7 = pdVar8;
  pdVar16 = pdVar12;
  if (pdVar12 == pdVar18) goto LAB_109486d10;
  goto LAB_109486704;
}



/* Entry: 109486dec; end: 1094874a7;  */

void FUN_109486dec(long *param_1,long *param_2,long param_3,ulong *param_4)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  float *pfVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long unaff_x19;
  ulong unaff_x25;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  plVar12 = (long *)*param_2;
  plVar10 = (long *)param_2[1];
  if ((long)plVar10 - (long)plVar12 == 0) {
    plVar5 = (long *)0x0;
    plVar24 = (long *)0x0;
    plVar6 = plVar5;
LAB_109486e54:
    for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
      lVar7 = *plVar12;
      if ((*(byte *)(lVar7 + 0x440) & 1) == 0) {
        FUN_10945fd6c();
LAB_109487468:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10948746c);
        (*pcVar3)();
      }
      lVar14 = *(long *)(param_3 + 0x18) - (long)*(float **)(param_3 + 0x10);
      if (lVar14 == 0) {
        fVar27 = 0.0;
      }
      else {
        lVar14 = lVar14 >> 2;
        fVar27 = 0.0;
        pfVar11 = *(float **)(param_3 + 0x10);
        pfVar17 = *(float **)(lVar7 + 0x428);
        do {
          fVar27 = fVar27 + (*pfVar11 - *pfVar17) * (*pfVar11 - *pfVar17);
          lVar14 = lVar14 + -1;
          pfVar11 = pfVar11 + 1;
          pfVar17 = pfVar17 + 1;
        } while (lVar14 != 0);
      }
      plVar18 = plVar5;
      if (fVar27 < *(float *)(param_4 + 1)) {
        if (plVar6 < plVar24) {
          *plVar6 = lVar7;
          *(float *)(plVar6 + 1) = fVar27;
          plVar6 = plVar6 + 2;
        }
        else {
          lVar7 = (long)plVar6 - (long)plVar5;
          uVar8 = (lVar7 >> 4) + 1;
          if (uVar8 >> 0x3c != 0) {
            func_0x000109488188();
            goto LAB_109487468;
          }
          uVar15 = (long)plVar24 - (long)plVar5 >> 3;
          if (uVar15 <= uVar8) {
            uVar15 = uVar8;
          }
          if (0x7fffffffffffffef < (ulong)((long)plVar24 - (long)plVar5)) {
            uVar15 = 0xfffffffffffffff;
          }
          FUN_10948819c();
          plVar18 = (long *)(uVar15 + lVar7);
          plVar24 = (long *)(uVar15 + (long)param_2 * 0x10);
          *plVar18 = *plVar12;
          *(float *)(plVar18 + 1) = fVar27;
          plVar6 = plVar18 + 2;
          plVar18 = plVar18 + (lVar7 >> 4) * -2;
          param_2 = plVar5;
          _memcpy(plVar18,plVar5,lVar7);
          if (plVar5 != (long *)0x0) {
            __ZdlPv(plVar5);
          }
        }
      }
      plVar5 = plVar18;
    }
    uVar8 = (long)plVar6 - (long)plVar5 >> 4;
    if (*param_4 <= uVar8) {
      uVar8 = *param_4;
    }
    plVar10 = plVar5 + uVar8 * 2;
    plVar12 = plVar5;
joined_r0x000109486f5c:
    while( true ) {
      plVar24 = plVar6;
      if (plVar10 == plVar24) goto LAB_109486f60;
      uVar15 = (long)plVar24 - (long)plVar12 >> 4;
      if (uVar15 < 2) goto LAB_109486f60;
      if (uVar15 == 3) {
        fVar25 = *(float *)(plVar12 + 3);
        fVar27 = *(float *)(plVar12 + 1);
        fVar26 = *(float *)(plVar24 + -1);
        if (fVar27 <= fVar25) {
          if (fVar26 < fVar25) {
            lVar7 = plVar12[2];
            plVar12[2] = plVar24[-2];
            plVar24[-2] = lVar7;
            *(float *)(plVar12 + 3) = fVar26;
            *(float *)(plVar24 + -1) = fVar25;
            fVar27 = *(float *)(plVar12 + 1);
            if (*(float *)(plVar12 + 3) < fVar27) {
              lVar7 = *plVar12;
              *plVar12 = plVar12[2];
              plVar12[2] = lVar7;
              *(float *)(plVar12 + 1) = *(float *)(plVar12 + 3);
              *(float *)(plVar12 + 3) = fVar27;
            }
          }
          goto LAB_109486f60;
        }
        lVar7 = *plVar12;
        if (fVar25 <= fVar26) {
          *plVar12 = plVar12[2];
          plVar12[2] = lVar7;
          *(float *)(plVar12 + 1) = fVar25;
          *(float *)(plVar12 + 3) = fVar27;
          fVar25 = *(float *)(plVar24 + -1);
          if (fVar27 <= fVar25) goto LAB_109486f60;
          plVar12[2] = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar12 + 3) = fVar25;
        }
        else {
          *plVar12 = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar12 + 1) = fVar26;
        }
        *(float *)(plVar24 + -1) = fVar27;
        goto LAB_109486f60;
      }
      if (uVar15 == 2) {
        fVar27 = *(float *)(plVar24 + -1);
        fVar25 = *(float *)(plVar12 + 1);
        if (fVar27 < fVar25) {
          lVar7 = *plVar12;
          *plVar12 = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar12 + 1) = fVar27;
          *(float *)(plVar24 + -1) = fVar25;
        }
        goto LAB_109486f60;
      }
      if ((long)uVar15 < 8) break;
      plVar18 = plVar12 + ((ulong)((long)plVar24 - (long)plVar12) >> 5) * 2;
      fVar25 = *(float *)(plVar18 + 1);
      fVar27 = *(float *)(plVar12 + 1);
      fVar26 = *(float *)(plVar24 + -1);
      if (fVar27 <= fVar25) {
        if (fVar26 < fVar25) {
          lVar7 = *plVar18;
          *plVar18 = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar18 + 1) = fVar26;
          *(float *)(plVar24 + -1) = fVar25;
          fVar27 = *(float *)(plVar18 + 1);
          fVar25 = *(float *)(plVar12 + 1);
          if (fVar27 < fVar25) {
            lVar7 = *plVar12;
            *plVar12 = *plVar18;
            *plVar18 = lVar7;
            *(float *)(plVar12 + 1) = fVar27;
            *(float *)(plVar18 + 1) = fVar25;
          }
          goto LAB_109487084;
        }
        iVar13 = 0;
      }
      else {
        lVar7 = *plVar12;
        if (fVar25 <= fVar26) {
          *plVar12 = *plVar18;
          *plVar18 = lVar7;
          *(float *)(plVar12 + 1) = fVar25;
          *(float *)(plVar18 + 1) = fVar27;
          fVar25 = *(float *)(plVar24 + -1);
          if (fVar27 <= fVar25) goto LAB_109487084;
          *plVar18 = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar18 + 1) = fVar25;
        }
        else {
          *plVar12 = plVar24[-2];
          plVar24[-2] = lVar7;
          *(float *)(plVar12 + 1) = fVar26;
        }
        *(float *)(plVar24 + -1) = fVar27;
LAB_109487084:
        iVar13 = 1;
      }
      plVar20 = plVar24 + -2;
      fVar27 = *(float *)(plVar12 + 1);
      plVar6 = plVar20;
      if (*(float *)(plVar18 + 1) <= fVar27) {
        do {
          plVar19 = plVar6;
          plVar6 = plVar19 + -2;
          if (plVar6 == plVar12) {
            plVar6 = plVar12 + 2;
            fVar25 = *(float *)(plVar24 + -1);
            if (fVar25 <= fVar27) goto LAB_1094871e8;
            goto LAB_109487244;
          }
          fVar25 = *(float *)(plVar19 + -1);
        } while (*(float *)(plVar18 + 1) <= fVar25);
        lVar7 = *plVar12;
        *plVar12 = *plVar6;
        *plVar6 = lVar7;
        *(float *)(plVar12 + 1) = fVar25;
        *(float *)(plVar19 + -1) = fVar27;
        bVar4 = iVar13 != 0;
        iVar13 = 1;
        plVar20 = plVar6;
        if (bVar4) {
          iVar13 = 2;
        }
      }
      plVar19 = plVar12 + 2;
      plVar21 = plVar18;
      plVar6 = plVar19;
      plVar23 = plVar19;
      if (plVar19 < plVar20) {
        while( true ) {
          plVar18 = plVar21;
          plVar6 = plVar23 + -2;
          do {
            plVar21 = plVar6;
            fVar27 = *(float *)(plVar21 + 3);
            plVar6 = plVar21 + 2;
          } while (fVar27 < *(float *)(plVar18 + 1));
          plVar23 = plVar21 + 4;
          do {
            plVar22 = plVar20;
            fVar25 = *(float *)(plVar22 + -1);
            plVar20 = plVar22 + -2;
          } while (*(float *)(plVar18 + 1) <= fVar25);
          if (plVar20 <= plVar6) break;
          lVar7 = *plVar6;
          *plVar6 = *plVar20;
          *plVar20 = lVar7;
          *(float *)(plVar21 + 3) = fVar25;
          *(float *)(plVar22 + -1) = fVar27;
          iVar13 = iVar13 + 1;
          plVar21 = plVar20;
          if (plVar6 != plVar18) {
            plVar21 = plVar18;
          }
        }
      }
      if (plVar6 != plVar18) {
        fVar27 = *(float *)(plVar18 + 1);
        fVar25 = *(float *)(plVar6 + 1);
        if (fVar27 < fVar25) {
          lVar7 = *plVar6;
          *plVar6 = *plVar18;
          *plVar18 = lVar7;
          *(float *)(plVar6 + 1) = fVar27;
          *(float *)(plVar18 + 1) = fVar25;
          iVar13 = iVar13 + 1;
        }
      }
      if (plVar6 == plVar10) goto LAB_109486f60;
      if (iVar13 == 0) {
        plVar18 = plVar6;
        if (plVar10 < plVar6) {
          do {
            if (plVar19 == plVar6) goto LAB_109486f60;
            pfVar11 = (float *)(plVar19 + 1);
            pfVar17 = (float *)(plVar19 + -1);
            plVar19 = plVar19 + 2;
          } while (*pfVar17 <= *pfVar11);
        }
        else {
          do {
            if (plVar18 + 2 == plVar24) goto LAB_109486f60;
            pfVar11 = (float *)(plVar18 + 3);
            pfVar17 = (float *)(plVar18 + 1);
            plVar18 = plVar18 + 2;
          } while (*pfVar17 <= *pfVar11);
        }
      }
      if (plVar6 <= plVar10) {
        plVar12 = plVar6 + 2;
        plVar6 = plVar24;
      }
    }
    while (plVar10 = plVar12, plVar24 + -2 != plVar10) {
      plVar12 = plVar10 + 2;
      if ((plVar10 != plVar24) && (plVar18 = plVar10, plVar6 = plVar12, plVar12 != plVar24)) {
        do {
          plVar20 = plVar6;
          if (*(float *)(plVar18 + 1) <= *(float *)(plVar6 + 1)) {
            plVar20 = plVar18;
          }
          plVar6 = plVar6 + 2;
          plVar18 = plVar20;
        } while (plVar6 != plVar24);
        if (plVar20 != plVar10) {
          lVar7 = *plVar10;
          *plVar10 = *plVar20;
          *plVar20 = lVar7;
          lVar7 = plVar10[1];
          *(int *)(plVar10 + 1) = (int)plVar20[1];
          *(int *)(plVar20 + 1) = (int)lVar7;
        }
      }
    }
LAB_109486f60:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_109488024(param_1,uVar8);
    plVar12 = plVar5;
    if (uVar8 == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    else {
      do {
        func_0x0001094880b0(param_1,plVar12);
        uVar8 = uVar8 - 1;
        plVar12 = plVar12 + 2;
      } while (uVar8 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  plVar5 = (long *)((long)plVar10 - (long)plVar12 >> 3);
  if ((ulong)plVar5 >> 0x3c == 0) {
    plVar6 = param_2;
    FUN_10948819c();
    plVar24 = plVar5 + (long)plVar6 * 2;
    plVar12 = (long *)*param_2;
    plVar10 = (long *)param_2[1];
    param_2 = plVar6;
    plVar6 = plVar5;
    goto LAB_109486e54;
  }
  func_0x000109488188();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  if (unaff_x19 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
  uVar8 = ((ulong)param_2 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = plVar5[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar8 <= uVar15) {
        uVar16 = 0;
        if (uVar8 != 0) {
          uVar16 = uVar15 / uVar8;
        }
        unaff_x25 = uVar15 - uVar16 * uVar8;
      }
    }
    plVar12 = *(long **)(*plVar5 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_109487594;
          uVar16 = plVar12[1];
          if (uVar16 != uVar15) break;
          if ((long *)plVar12[2] == param_2) {
            return;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar16 = uVar16 & uVar9;
        }
        else if (uVar8 <= uVar16) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar16 / uVar8;
          }
          uVar16 = uVar16 - uVar2 * uVar8;
        }
      } while (uVar16 == unaff_x25);
    }
  }
LAB_109487594:
  plVar12 = (long *)0x20;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar15;
  plVar12[2] = param_3;
  plVar12[3] = (long)param_4;
  if (param_4 != (ulong *)0x0) {
    param_4 = param_4 + 1;
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_4,0x10);
      if (bVar4) {
        *param_4 = *param_4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar8 == 0) || (*(float *)(plVar5 + 4) * (float)uVar8 < (float)(plVar5[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar8) {
      uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar9 = uVar9 | uVar8 << 1;
    uVar8 = (ulong)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    FUN_1094876fc(plVar5,uVar9);
    uVar8 = plVar5[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar8 <= uVar15) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar15 / uVar8;
        }
        unaff_x25 = uVar15 - uVar9 * uVar8;
      }
    }
  }
  lVar7 = *plVar5;
  plVar10 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar5 + 2;
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar10;
    if (*plVar12 == 0) goto LAB_1094876c0;
    uVar15 = *(ulong *)(*plVar12 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar9 * uVar8;
    }
    plVar10 = (long *)(*plVar5 + uVar15 * 8);
  }
  else {
    *plVar12 = *plVar10;
  }
  *plVar10 = (long)plVar12;
LAB_1094876c0:
  plVar5[3] = plVar5[3] + 1;
  return;
LAB_1094871e8:
  if (plVar6 == plVar20) goto LAB_109486f60;
  fVar26 = *(float *)(plVar6 + 1);
  if (fVar27 < fVar26) goto LAB_109487228;
  plVar6 = plVar6 + 2;
  goto LAB_1094871e8;
LAB_109487228:
  lVar7 = *plVar6;
  *plVar6 = plVar24[-2];
  plVar24[-2] = lVar7;
  *(float *)(plVar6 + 1) = fVar25;
  *(float *)(plVar24 + -1) = fVar26;
  plVar6 = plVar6 + 2;
LAB_109487244:
  if (plVar6 == plVar20) goto LAB_109486f60;
  while( true ) {
    plVar18 = plVar6 + -2;
    do {
      plVar19 = plVar18;
      fVar27 = *(float *)(plVar19 + 3);
      plVar18 = plVar19 + 2;
    } while (fVar27 <= *(float *)(plVar12 + 1));
    plVar6 = plVar19 + 4;
    do {
      plVar23 = plVar20;
      fVar25 = *(float *)(plVar23 + -1);
      plVar20 = plVar23 + -2;
    } while (*(float *)(plVar12 + 1) < fVar25);
    if (plVar20 <= plVar18) break;
    lVar7 = *plVar18;
    *plVar18 = *plVar20;
    *plVar20 = lVar7;
    *(float *)(plVar19 + 3) = fVar25;
    *(float *)(plVar23 + -1) = fVar27;
  }
  plVar12 = plVar18;
  plVar6 = plVar24;
  if (plVar10 < plVar18) goto LAB_109486f60;
  goto joined_r0x000109486f5c;
}



/* Entry: 1094874a8; end: 1094876fb;  */

void FUN_1094874a8(long *param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar10 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar6 <= uVar10) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar10 / uVar6;
        }
        unaff_x25 = uVar10 - uVar9 * uVar6;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_109487594;
          uVar9 = plVar7[1];
          if (uVar9 != uVar10) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar6 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar6 <= uVar9) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar3 * uVar6;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_109487594:
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = param_3;
  plVar7[3] = param_4;
  if (param_4 != 0) {
    plVar5 = (long *)(param_4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_1094876fc(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar6 <= uVar10) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar10 / uVar6;
        }
        unaff_x25 = uVar10 - uVar4 * uVar6;
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_1094876c0;
    uVar10 = *(ulong *)(*plVar7 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar10 = uVar10 & uVar6 - 1;
    }
    else if (uVar6 <= uVar10) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar4 * uVar6;
    }
    plVar5 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_1094876c0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094876fc; end: 1094878cb;  */

void FUN_1094876fc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_109480938(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1094878cc; end: 109487913;  */

void FUN_1094878cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109480938(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109487914; end: 109487a03;  */

/* WARNING: Removing unreachable block (ram,0x0001094879cc) */

void FUN_109487914(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  do {
    if (param_1 == param_2) {
      *(undefined1 *)(param_3 + 0x20) = 0;
      return;
    }
    puVar5 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if (puVar5 == puVar1) {
LAB_1094879b4:
      if (puVar5 != puVar1) {
        param_1[1] = (long)puVar5;
      }
    }
    else {
      lVar2 = *(long *)(param_3 + 8);
      do {
        puVar3 = puVar5 + 8;
        if (puVar5[6] == lVar2) {
          if ((puVar5 != puVar1) && (puVar4 = puVar5, puVar3 != puVar1)) {
            do {
              puVar5 = puVar4;
              if (puVar3[6] != lVar2) {
                uVar7 = puVar3[1];
                uVar6 = *puVar3;
                uVar9 = puVar3[3];
                uVar8 = puVar3[2];
                uVar11 = puVar3[5];
                uVar10 = puVar3[4];
                uVar12 = *(undefined8 *)((long)puVar3 + 0x2b);
                *(undefined8 *)((long)puVar4 + 0x33) = *(undefined8 *)((long)puVar3 + 0x33);
                *(undefined8 *)((long)puVar4 + 0x2b) = uVar12;
                puVar4[3] = uVar9;
                puVar4[2] = uVar8;
                puVar4[5] = uVar11;
                puVar4[4] = uVar10;
                puVar5 = puVar4 + 8;
                puVar4[1] = uVar7;
                *puVar4 = uVar6;
              }
              puVar3 = puVar3 + 8;
              puVar4 = puVar5;
            } while (puVar3 != puVar1);
            puVar1 = (undefined8 *)param_1[1];
          }
          goto LAB_1094879b4;
        }
        puVar5 = puVar3;
      } while (puVar3 != puVar1);
    }
    param_1 = param_1 + 3;
  } while( true );
}



/* Entry: 109487a04; end: 109487c77;  */

long * FUN_109487a04(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109487c78; end: 109487ecb;  */

void FUN_109487c78(long *param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar10 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar6 <= uVar10) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar10 / uVar6;
        }
        unaff_x25 = uVar10 - uVar9 * uVar6;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_109487d64;
          uVar9 = plVar7[1];
          if (uVar9 != uVar10) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar6 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar6 <= uVar9) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar3 * uVar6;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_109487d64:
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = param_3;
  plVar7[3] = param_4;
  if (param_4 != 0) {
    plVar5 = (long *)(param_4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_1094876fc(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar6 <= uVar10) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar10 / uVar6;
        }
        unaff_x25 = uVar10 - uVar4 * uVar6;
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_109487e90;
    uVar10 = *(ulong *)(*plVar7 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar10 = uVar10 & uVar6 - 1;
    }
    else if (uVar6 <= uVar10) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar4 * uVar6;
    }
    plVar5 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_109487e90:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109487ecc; end: 109487f8f;  */

long FUN_109487ecc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_1 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar2 == 0) {
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109487f60);
  (*pcVar1)();
}



/* Entry: 109487f90; end: 109488023;  */

void FUN_109487f90(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == *(char *)(param_2 + 5)) {
    if (cVar1 != '\0') {
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      func_0x000107479ce4(param_1 + 2,param_2 + 2);
      func_0x000107471510();
      func_0x00010747a468();
      return;
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    if (param_1[2] != 0) {
      param_1[3] = param_1[2];
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 109488024; end: 109488173;  */

void FUN_109488024(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  lVar4 = *param_1;
  if ((long *)(param_1[2] - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_109486380();
      plVar3 = (long *)param_1[1];
      if (plVar3 < (long *)param_1[2]) {
        plVar9 = plVar3 + 1;
        *plVar3 = *param_2;
      }
      else {
        lVar4 = (long)plVar3 - *param_1;
        uVar1 = (lVar4 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_109486380();
          func_0x000104c4f6cc(&DAT_10f62a4d8);
          plVar3 = (long *)&DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if ((ulong)plVar3 >> 0x3c == 0) {
            __Znwm((long)plVar3 << 4);
            return;
          }
          func_0x000104c4f740();
          if (*plVar3 != 0) {
            plVar3[1] = *plVar3;
            __ZdlPv();
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3[2] = 0;
          }
          lVar4 = *param_2;
          plVar3[1] = param_2[1];
          *plVar3 = lVar4;
          plVar3[2] = param_2[2];
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        plVar2 = param_1;
        FUN_109486394();
        plVar3 = (long *)((long)plVar2 + lVar4);
        plVar9 = plVar3 + 1;
        *plVar3 = *param_2;
        lVar6 = (long)plVar3 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar4 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)plVar9;
        param_1[2] = (long)(plVar2 + uVar7);
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar9;
      return;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    FUN_109486394();
    lVar4 = (long)plVar3 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = (long)(plVar3 + (long)param_2);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109488174; end: 10948819b;  */

void FUN_109488174(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  lVar2 = *param_2;
  plVar1[1] = param_2[1];
  *plVar1 = lVar2;
  plVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10948819c; end: 10948821f;  */

void FUN_10948819c(long *param_1,long *param_2)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 109488220; end: 1094882ef;  */

long * FUN_109488220(ulong param_1,undefined8 param_2,float param_3,long *param_4,long *param_5,
                    undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  bool bVar20;
  ulong uVar21;
  long *plVar22;
  float fVar23;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 uVar24;
  undefined1 in_register_00005005;
  undefined1 uVar25;
  undefined1 in_register_00005006;
  undefined1 uVar26;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  float fVar27;
  undefined8 in_register_00005028;
  float extraout_s2;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 in_b3;
  undefined1 in_register_00005061;
  undefined1 in_register_00005062;
  undefined1 in_register_00005063;
  undefined1 *puStack_4f0;
  ulong uStack_4e8;
  byte bStack_4d9;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long **pplStack_470;
  code *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined *puStack_450;
  undefined8 *puStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined1 *puStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3d8;
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
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *apuStack_310 [2];
  char cStack_2f9;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
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
  long lStack_d0;
  
  plVar7 = param_4;
  if ((long)param_5 - 1U == 0) {
    param_5 = (long *)0x2;
  }
  else if (((ulong)param_5 & (long)param_5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar7 = param_5;
  }
  plVar22 = (long *)param_4[1];
  if (plVar22 > param_5 || param_5 == plVar22) {
    if (plVar22 <= param_5) {
      return plVar7;
    }
    param_1 = (ulong)(uint)*(float *)(param_4 + 4);
    in_register_00005028 = 0;
    fVar28 = (float)(ulong)param_4[3] / *(float *)(param_4 + 4);
    in_b0 = SUB41(fVar28,0);
    in_register_00005001 = (undefined1)((uint)fVar28 >> 8);
    in_register_00005002 = (undefined1)((uint)fVar28 >> 0x10);
    in_register_00005003 = (undefined1)((uint)fVar28 >> 0x18);
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    in_register_00005008 = 0;
    in_register_00005009 = 0;
    in_register_0000500a = 0;
    in_register_0000500b = 0;
    in_register_0000500c = 0;
    in_register_0000500d = 0;
    in_register_0000500e = 0;
    in_register_0000500f = 0;
    plVar7 = (long *)(long)fVar28;
    if ((plVar22 < (long *)0x3) || (((ulong)plVar22 & (long)plVar22 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (param_5 <= plVar7) {
      param_5 = plVar7;
    }
    if (plVar22 <= param_5) {
      return plVar7;
    }
  }
  if (param_5 == (long *)0x0) {
    plVar7 = (long *)*param_4;
    *param_4 = 0;
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    param_4[1] = 0;
    return plVar7;
  }
  if ((ulong)param_5 >> 0x3d == 0) {
    lVar6 = (long)param_5 << 3;
    __Znwm();
    plVar7 = (long *)*param_4;
    *param_4 = lVar6;
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    plVar22 = (long *)0x0;
    param_4[1] = (long)param_5;
    do {
      *(undefined8 *)(*param_4 + (long)plVar22 * 8) = 0;
      plVar22 = (long *)((long)plVar22 + 1);
    } while (param_5 != plVar22);
    plVar18 = param_4 + 2;
    plVar22 = (long *)*plVar18;
    if (plVar22 != (long *)0x0) {
      plVar14 = (long *)plVar22[1];
      uVar17 = (long)param_5 - 1;
      if (((ulong)param_5 & uVar17) != 0) {
        if (param_5 <= plVar14) {
          uVar17 = 0;
          if (param_5 != (long *)0x0) {
            uVar17 = (ulong)plVar14 / (ulong)param_5;
          }
          plVar14 = (long *)((long)plVar14 - uVar17 * (long)param_5);
        }
        *(long **)(*param_4 + (long)plVar14 * 8) = plVar18;
        plVar18 = (long *)*plVar22;
joined_r0x00010943ea08:
        if (plVar18 == (long *)0x0) {
          return plVar7;
        }
        do {
          plVar19 = (long *)plVar18[1];
          if (param_5 <= plVar19) {
            uVar17 = 0;
            if (param_5 != (long *)0x0) {
              uVar17 = (ulong)plVar19 / (ulong)param_5;
            }
            plVar19 = (long *)((long)plVar19 - uVar17 * (long)param_5);
          }
          if (plVar19 != plVar14) {
            lVar6 = *param_4;
            if (*(long *)(lVar6 + (long)plVar19 * 8) == 0) goto code_r0x00010943ea6c;
            *plVar22 = *plVar18;
            *plVar18 = **(long **)(lVar6 + (long)plVar19 * 8);
            **(undefined8 **)(lVar6 + (long)plVar19 * 8) = plVar18;
            plVar18 = plVar22;
          }
          plVar22 = plVar18;
          plVar18 = (long *)*plVar22;
          if (plVar18 == (long *)0x0) {
            return plVar7;
          }
        } while( true );
      }
      *(long **)(*param_4 + ((ulong)plVar14 & uVar17) * 8) = plVar18;
      uVar15 = (ulong)plVar14 & uVar17;
      while (plVar18 = plVar22, plVar22 = (long *)*plVar18, plVar22 != (long *)0x0) {
        uVar21 = plVar22[1] & uVar17;
        if (uVar21 != uVar15) {
          lVar6 = *param_4;
          if (*(long *)(lVar6 + uVar21 * 8) == 0) {
            *(long **)(lVar6 + uVar21 * 8) = plVar18;
            uVar15 = uVar21;
          }
          else {
            *plVar18 = *plVar22;
            *plVar22 = **(long **)(lVar6 + uVar21 * 8);
            **(undefined8 **)(lVar6 + uVar21 * 8) = plVar22;
            plVar22 = plVar18;
          }
        }
      }
    }
    return plVar7;
  }
  func_0x000104c4f740();
  uStack_3c8 = CONCAT17(in_register_0000500f,
                        CONCAT16(in_register_0000500e,
                                 CONCAT15(in_register_0000500d,
                                          CONCAT14(in_register_0000500c,
                                                   CONCAT13(in_register_0000500b,
                                                            CONCAT12(in_register_0000500a,
                                                                     CONCAT11(in_register_00005009,
                                                                              in_register_00005008))
                                                           )))));
  uStack_3d0 = CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = param_6;
  *(uint *)((long)param_4 + 0xc) =
       CONCAT13(in_register_00005063,
                CONCAT12(in_register_00005062,CONCAT11(in_register_00005061,in_b3)));
  *(undefined4 *)(param_4 + 2) = param_7;
  lVar8 = 0x2cd8;
  uStack_3f0 = param_1;
  uStack_3e8 = in_register_00005028;
  plStack_3d8 = param_4;
  __Znwm();
  _bzero();
  lVar6 = 0;
  do {
    lVar9 = lVar8 + lVar6;
    FUN_1093a4438();
    *(undefined4 *)(lVar9 + 0xd0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0xe0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    *(undefined4 *)(lVar9 + 0xf8) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined4 *)(lVar9 + 0x120) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x130) = 0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x140) = 0;
    *(undefined8 *)(lVar9 + 0x138) = 0;
    FUN_109447dac((undefined8 *)(lVar9 + 0x128),0x200);
    lVar6 = lVar6 + 0x148;
  } while (lVar6 != 0x290);
  *(undefined4 *)(lVar8 + 0xd0) = 0;
  *(undefined4 *)(lVar8 + 0x218) = 1;
  *(undefined8 *)(lVar8 + 0x290) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x298) = 3;
  *(undefined8 *)(lVar8 + 0x29c) = 0x3f8000003f000000;
  *(undefined4 *)(lVar8 + 0x2a4) = 3;
  *(undefined8 *)(lVar8 + 0x2a8) = 0x40a000003f000000;
  *(undefined8 *)(lVar8 + 0x2b0) = 2;
  *(undefined4 *)(lVar8 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar8 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined8 *)(lVar8 + 700) = 0;
  *(undefined4 *)(lVar8 + 0x2cc) = 0;
  *(undefined1 *)(lVar8 + 0x2d0) = 0;
  *(undefined4 *)(lVar8 + 0x2d4) = 8;
  *(undefined8 *)(lVar8 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar8 + 0x2e0) = 1;
  *(undefined8 *)(lVar8 + 0x2ec) = 0;
  *(undefined8 *)(lVar8 + 0x2e4) = 0;
  *(undefined8 *)(lVar8 + 0x2fc) = 0;
  *(undefined8 *)(lVar8 + 0x2f4) = 0;
  *(undefined8 *)(lVar8 + 0x304) = 0;
  *(undefined8 *)(lVar8 + 0x314) = 0;
  *(undefined8 *)(lVar8 + 0x30c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x324) = 0;
  *(undefined8 *)(lVar8 + 0x31c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x334) = 0;
  *(undefined8 *)(lVar8 + 0x32c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x344) = 0;
  *(undefined8 *)(lVar8 + 0x33c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x34c) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x37c) = 0;
  *(undefined8 *)(lVar8 + 0x374) = 0;
  *(undefined8 *)(lVar8 + 0x38c) = 0;
  *(undefined8 *)(lVar8 + 900) = 0;
  *(undefined8 *)(lVar8 + 0x394) = 0;
  *(undefined8 *)(lVar8 + 0x3a4) = 0;
  *(undefined8 *)(lVar8 + 0x39c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3b4) = 0;
  *(undefined8 *)(lVar8 + 0x3ac) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x3c4) = 0;
  *(undefined8 *)(lVar8 + 0x3bc) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x3d4) = 0;
  *(undefined8 *)(lVar8 + 0x3cc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x3dc) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x40c) = 0;
  *(undefined8 *)(lVar8 + 0x404) = 0;
  *(undefined8 *)(lVar8 + 0x41c) = 0;
  *(undefined8 *)(lVar8 + 0x414) = 0;
  *(undefined8 *)(lVar8 + 0x424) = 0;
  *(undefined8 *)(lVar8 + 0x434) = 0;
  *(undefined8 *)(lVar8 + 0x42c) = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x444) = 0;
  *(undefined8 *)(lVar8 + 0x43c) = 0x3f800000;
  uStack_408 = 0;
  uStack_410 = 0x3f8000003f800000;
  uStack_3f8 = 0;
  uStack_400 = 0x3f800000;
  *(undefined8 *)(lVar8 + 0x454) = 0;
  *(undefined8 *)(lVar8 + 0x44c) = 0x3f8000003f800000;
  *(undefined8 *)(lVar8 + 0x464) = 0;
  *(undefined8 *)(lVar8 + 0x45c) = 0x3f80000000000000;
  uStack_418 = 0;
  uStack_420 = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x46c) = 0x3f80000000000000;
  *(undefined4 *)(lVar8 + 0x4c8) = 0;
  *(undefined8 *)(lVar8 + 0x4b0) = 0;
  *(undefined8 *)(lVar8 + 0x4a8) = 0;
  *(undefined8 *)(lVar8 + 0x4c0) = 0;
  *(undefined8 *)(lVar8 + 0x4b8) = 0;
  *(undefined8 *)(lVar8 + 0x4a0) = 0;
  *(undefined8 *)(lVar8 + 0x498) = 0;
  *(undefined8 *)(lVar8 + 0x500) = 0;
  *(undefined8 *)(lVar8 + 0x4f8) = 0;
  *(undefined8 *)(lVar8 + 0x4f0) = 0;
  *(undefined8 *)(lVar8 + 0x4e8) = 0;
  *(undefined8 *)(lVar8 + 0x4e0) = 0;
  *(undefined8 *)(lVar8 + 0x4d8) = 0;
  *(undefined8 *)(lVar8 + 0x4d0) = 0;
  FUN_109447dac(lVar8 + 0x4e8,0x200);
  *(undefined8 *)(lVar8 + 0x510) = 0;
  *(undefined8 *)(lVar8 + 0x508) = 0;
  *(undefined8 *)(lVar8 + 0x520) = 0;
  *(undefined8 *)(lVar8 + 0x518) = 0;
  FUN_109447dac((undefined8 *)(lVar8 + 0x508),0x200);
  FUN_1093a5848(lVar8 + 0x528);
  FUN_1093a5848(lVar8 + 0x1888);
  lVar6 = 0;
  do {
    lVar9 = lVar8 + lVar6;
    *(undefined8 *)(lVar9 + 0x2bf0) = 0;
    *(undefined8 *)(lVar9 + 0x2be8) = 0;
    *(undefined8 *)(lVar9 + 0x2c00) = 0;
    *(undefined8 *)(lVar9 + 0x2bf8) = 0;
    *(undefined4 *)(lVar9 + 0x2c08) = 0x3f800000;
    *(undefined8 *)(lVar9 + 0x2c18) = 0;
    *(undefined8 *)(lVar9 + 0x2c10) = 0;
    *(undefined8 *)(lVar9 + 0x2c28) = 0;
    *(undefined8 *)(lVar9 + 0x2c20) = 0;
    *(undefined8 *)(lVar9 + 0x2c38) = 0;
    *(undefined8 *)(lVar9 + 0x2c30) = 0;
    *(undefined8 *)(lVar9 + 0x2c40) = 0;
    FUN_109447fb0(lVar8 + 0x2c10 + lVar6,0x2000);
    FUN_10944806c(lVar8 + 0x2c10 + lVar6,1);
    func_0x000109448204(*(undefined8 *)(lVar9 + 0x2c10));
    plVar7 = plStack_3d8;
    lVar6 = lVar6 + 0x60;
  } while (lVar6 != 0xc0);
  *(undefined8 *)(lVar8 + 0x2cc0) = 0;
  *(undefined8 *)(lVar8 + 0x2cb8) = 0;
  *(undefined8 *)(lVar8 + 0x2cd0) = 0;
  *(undefined8 *)(lVar8 + 0x2cc8) = 0;
  *(undefined8 *)(lVar8 + 0x2cb0) = 0;
  *(undefined8 *)(lVar8 + 0x2ca8) = 0;
  lVar6 = *plStack_3d8;
  *plStack_3d8 = lVar8;
  if (lVar6 != 0) {
    func_0x00010944782c(plStack_3d8);
  }
  lStack_328 = *param_5;
  lVar6 = param_5[5];
  auVar30 = NEON_fmov(0xbfe0000000000000,8);
  auVar2[9] = (char)((ulong)lVar6 >> 8);
  auVar2._0_9_ = *(unkbyte9 *)(param_5 + 4);
  auVar2[10] = (char)((ulong)lVar6 >> 0x10);
  auVar2[0xb] = (char)((ulong)lVar6 >> 0x18);
  auVar2[0xc] = (char)((ulong)lVar6 >> 0x20);
  auVar2[0xd] = (char)((ulong)lVar6 >> 0x28);
  auVar2[0xe] = (char)((ulong)lVar6 >> 0x30);
  auVar2[0xf] = (char)((ulong)lVar6 >> 0x38);
  fVar28 = (float)auVar2._8_8_;
  fVar23 = (float)((double)param_5[3] + auVar30._8_8_);
  uStack_318 = CONCAT17((char)((uint)fVar23 >> 0x18),
                        CONCAT16((char)((uint)fVar23 >> 0x10),
                                 CONCAT15((char)((uint)fVar23 >> 8),
                                          CONCAT14(SUB41(fVar23,0),
                                                   (float)((double)param_5[2] + auVar30._0_8_)))));
  uStack_320 = CONCAT17((char)((uint)fVar28 >> 0x18),
                        CONCAT16((char)((uint)fVar28 >> 0x10),
                                 CONCAT15((char)((uint)fVar28 >> 8),
                                          CONCAT14(SUB41(fVar28,0),
                                                   (float)(double)*(unkbyte9 *)(param_5 + 4)))));
  func_0x000107c31940(apuStack_310,"UNKNOWN");
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = (ulong)uStack_270._4_4_ << 0x20;
  puStack_2f0 = (undefined8 *)0x0;
  uStack_2e8 = 0;
  puStack_2f8 = (undefined8 *)0x0;
  FUN_1093c71a0(&puStack_2f8,&uStack_280,(long)&uStack_270 + 4,5);
  uStack_3a0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_390 = uStack_3f8;
  uStack_398 = uStack_400;
  uStack_380 = uStack_3f8;
  uStack_388 = uStack_400;
  uStack_370 = uStack_408;
  uStack_378 = uStack_410;
  uStack_360 = uStack_418;
  uStack_368 = uStack_420;
  uStack_358 = 0x3f80000000000000;
  FUN_10943f3a8(&lStack_328,&uStack_3c0);
  lVar8 = 0;
  uVar24 = (undefined1)(uStack_3f0 >> 8);
  uVar25 = (undefined1)(uStack_3f0 >> 0x10);
  uVar26 = (undefined1)(uStack_3f0 >> 0x18);
  lVar6 = *plVar7;
  uVar1 = (undefined4)uStack_3d0;
  uStack_3d0 = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14((char)uStack_3f0,uVar1))));
  *(ulong *)(lVar6 + 0x2a8) =
       CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14((char)uStack_3f0,uVar1))));
  *(undefined8 *)(lVar6 + 0x2b0) = 2;
  *(undefined4 *)(lVar6 + 0x2b8) = 0x3fc00000;
  *(undefined8 *)(lVar6 + 700) = 0;
  *(undefined8 *)(lVar6 + 0x2c4) = 0x7fffffff7fffffff;
  *(undefined4 *)(lVar6 + 0x2cc) = 0;
  *(undefined1 *)(lVar6 + 0x2d0) = param_8;
  *(undefined4 *)(lVar6 + 0x2d4) = 8;
  *(undefined8 *)(lVar6 + 0x2d8) = 0xf00000005;
  *(undefined1 *)(lVar6 + 0x2e0) = 1;
  bVar5 = true;
  do {
    bVar20 = bVar5;
    pfVar16 = (float *)(lVar6 + lVar8 * 0x148);
    *(undefined1 *)(pfVar16 + 4) = param_8;
    fVar28 = *pfVar16 * 8.0;
    pfVar16[8] = fVar28;
    pfVar16[9] = 1.0 / fVar28;
    if (fVar28 < pfVar16[1]) {
      pfVar16[1] = fVar28;
    }
    lVar8 = 1;
    bVar5 = false;
  } while (bVar20);
  lVar8 = *plVar7;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  func_0x000109444760(&uStack_280,&uStack_3c0,&uStack_3b0,&uStack_3a0);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  func_0x000109444760(&uStack_1f0,&uStack_3c0,&uStack_3b0,&uStack_3a0);
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
  uStack_158 = 0;
  uStack_160 = 0;
  func_0x000109444760(&uStack_160,&uStack_3c0,&uStack_3b0,&uStack_3a0);
  func_0x000109444760(lVar8 + 0x2e4,&uStack_280,&uStack_270,&uStack_260);
  func_0x000109444760(lVar8 + 0x374,&uStack_1f0,&uStack_1e0,&uStack_1d0);
  func_0x000109444760(lVar8 + 0x404,&uStack_160,&uStack_150,&uStack_140);
  lVar6 = 0;
  fVar23 = *(float *)(lVar8 + 0x2a8);
  fVar28 = *(float *)(lVar8 + 0x2ac) - fVar23;
  plVar7 = (long *)0x1;
  do {
    plVar22 = plVar7;
    fVar3 = (float)(uint)(1 << lVar6);
    fVar29 = extraout_s2 * param_3 * fVar3;
    pfVar16 = (float *)(lVar8 + lVar6 * 0x148);
    *pfVar16 = extraout_s2 * fVar3;
    pfVar16[1] = fVar29;
    pfVar16[2] = 2.8026e-44;
    pfVar16[3] = 2.8026e-44;
    *(undefined1 *)(pfVar16 + 4) = 0;
    *(undefined4 *)((long)pfVar16 + 0x12) = 0x1001;
    fVar27 = extraout_s2 * fVar3 * 8.0;
    *(undefined8 *)((long)pfVar16 + 0x16) = 0;
    pfVar16[8] = fVar27;
    pfVar16[9] = 1.0 / fVar27;
    if (fVar27 < fVar29) {
      pfVar16[1] = fVar27;
    }
    pfVar16 = (float *)(lVar8 + 0x290 + lVar6 * 0xc);
    pfVar16[2] = *(float *)(lVar8 + 0x2dc);
    *pfVar16 = fVar23;
    fVar23 = fVar23 + (fVar28 / 3.0) * fVar3;
    pfVar16[1] = fVar23;
    uStack_2e0 = 0;
    uStack_288 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_290 = 0;
    FUN_1099a9f0c(&uStack_2e0,&UNK_10f56d808,0xd8,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_2d8 + 0x7540,&UNK_10f56d8c7,0x12);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1099ab3b0(&uStack_2e0);
    plVar18 = plStack_3d8;
    lVar6 = 1;
    plVar7 = (long *)0x0;
  } while ((int)plVar22 != 0);
  lVar6 = 0;
  uVar24 = *(undefined1 *)(lVar8 + 0x2d0);
  bVar5 = true;
  do {
    bVar20 = bVar5;
    pfVar16 = (float *)(lVar8 + lVar6 * 0x148);
    *(undefined1 *)(pfVar16 + 4) = uVar24;
    fVar28 = *pfVar16 * 8.0;
    pfVar16[8] = fVar28;
    pfVar16[9] = 1.0 / fVar28;
    if (fVar28 < pfVar16[1]) {
      pfVar16[1] = fVar28;
    }
    lVar6 = 1;
    bVar5 = false;
  } while (bVar20);
  puVar12 = (undefined4 *)(*plStack_3d8 + 0x1858);
  lVar6 = 0x26c0;
  do {
    *(undefined8 *)(puVar12 + -0x29) = 0x10100000008;
    *puVar12 = 3;
    puVar12 = puVar12 + 0x4d8;
    lVar6 = lVar6 + -0x1360;
  } while (lVar6 != 0);
  lVar6 = *plStack_3d8;
  *(undefined8 *)(lVar6 + 0x17ac) = uStack_3d0;
  *(undefined8 *)(lVar6 + 0x2b0c) = uStack_3d0;
  puVar10 = puStack_2f8;
  if (puStack_2f8 != (undefined8 *)0x0) {
    puStack_2f0 = puStack_2f8;
    __ZdlPv();
  }
  if (cStack_2f9 < '\0') {
    __ZdlPv();
    puVar10 = apuStack_310[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return plVar18;
  }
  ___stack_chk_fail();
  FUN_10943f540(&lStack_328);
  lVar6 = *plVar22;
  *plVar22 = 0;
  if (lVar6 != 0) {
    func_0x00010944782c(plVar22);
  }
  puVar11 = puVar10;
  __Unwind_Resume();
  pcStack_460 = "-";
  pcStack_458 = ": ";
  puStack_450 = &UNK_10f56d8c7;
  plStack_438 = plVar18;
  pcStack_428 = FUN_10943f3a8;
  plVar7 = puVar11 + 3;
  puStack_448 = puVar10;
  plStack_440 = plVar22;
  puStack_430 = &stack0xffffffffffffffd0;
  if (*(char *)((long)puVar11 + 0x2f) < '\0') {
    if (puVar11[4] == 4) {
      plVar22 = (long *)*plVar7;
      iVar13 = *(int *)plVar22;
      goto LAB_10943f40c;
    }
  }
  else if (*(char *)((long)puVar11 + 0x2f) == '\x04') {
    iVar13 = (int)*plVar7;
    plVar22 = plVar7;
LAB_10943f40c:
    if ((iVar13 == 0x656e6f4e) || (*(int *)plVar22 == 0x454e4f4e)) goto LAB_10943f4e0;
  }
  uStack_4d8 = 0;
  uStack_480 = 0;
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_490 = 0;
  uStack_498 = 0;
  uStack_488 = 0;
  FUN_1099a9f0c(&uStack_4d8,&UNK_10f56d67f,0xb0,1,FUN_1099aa768,0);
  pplStack_470 = &plStack_478;
  pcStack_468 = FUN_1094456ac;
  plStack_478 = plVar7;
  FUN_1099ade68(&puStack_4f0,&UNK_10f56d765,0x25,0xf,&pplStack_470);
  ppuVar4 = (undefined1 **)puStack_4f0;
  if (-1 < (char)bStack_4d9) {
    uStack_4e8 = (ulong)bStack_4d9;
    ppuVar4 = &puStack_4f0;
  }
  FUN_1092b4db8(lStack_4d0 + 0x7540,ppuVar4,uStack_4e8);
  if ((char)bStack_4d9 < '\0') {
    __ZdlPv(puStack_4f0);
  }
  FUN_1099ab3b0(&uStack_4d8);
LAB_10943f4e0:
  uStack_4d8 = NEON_scvtf(*puVar11,4);
  func_0x000109444760(lVar6,&uStack_4d8,puVar11 + 1,puVar11 + 2);
  return (long *)0x1;
code_r0x00010943ea6c:
  *(long **)(lVar6 + (long)plVar19 * 8) = plVar22;
  plVar22 = plVar18;
  plVar18 = (long *)*plVar18;
  plVar14 = plVar19;
  goto joined_r0x00010943ea08;
}



/* Entry: 1094882f0; end: 109488303;  */

void FUN_1094882f0(undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  
  puVar7 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
LAB_109488330:
  do {
    puVar24 = puVar7;
    uVar11 = (long)param_2 - (long)puVar24 >> 3;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        piVar14 = (int *)*puVar24;
        if (*(int *)param_2[-1] < *piVar14) {
          *puVar24 = (int *)param_2[-1];
          param_2[-1] = piVar14;
          return;
        }
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        piVar14 = (int *)*puVar24;
        piVar12 = (int *)puVar24[1];
        iVar23 = *piVar12;
        iVar3 = *piVar14;
        piVar17 = (int *)param_2[-1];
        if (iVar23 < iVar3) {
          if (*piVar17 < iVar23) {
            *puVar24 = piVar17;
          }
          else {
            *puVar24 = piVar12;
            puVar24[1] = piVar14;
            if (iVar3 <= *(int *)param_2[-1]) {
              return;
            }
            puVar24[1] = (int *)param_2[-1];
          }
          param_2[-1] = piVar14;
          return;
        }
        if (*piVar17 < iVar23) {
          puVar24[1] = piVar17;
          param_2[-1] = piVar12;
          piVar14 = (int *)*puVar24;
          if (*(int *)puVar24[1] < *piVar14) {
            *puVar24 = (int *)puVar24[1];
            puVar24[1] = piVar14;
            return;
          }
          return;
        }
        return;
      }
      if (uVar11 == 4) {
        puVar8 = puVar24 + 1;
        piVar14 = (int *)*puVar8;
        puVar9 = puVar24 + 2;
        piVar12 = (int *)*puVar9;
        iVar23 = *piVar14;
        piVar17 = (int *)*puVar24;
        iVar3 = *piVar17;
        iVar4 = *piVar12;
        puVar7 = puVar24;
        if (iVar23 < iVar3) {
          piVar10 = piVar17;
          puVar22 = puVar9;
          if (iVar23 <= iVar4) {
            *puVar24 = piVar14;
            puVar24[1] = piVar17;
            piVar14 = piVar12;
            puVar7 = puVar8;
            goto joined_r0x000109488bb8;
          }
        }
        else {
          piVar16 = piVar12;
          if (iVar23 <= iVar4) goto LAB_109488c1c;
          *puVar8 = piVar12;
          *puVar9 = piVar14;
          puVar22 = puVar8;
          piVar10 = piVar14;
joined_r0x000109488bb8:
          piVar16 = piVar14;
          if (iVar3 <= iVar4) goto LAB_109488c1c;
        }
        *puVar7 = piVar12;
        *puVar22 = piVar17;
        piVar16 = piVar10;
LAB_109488c1c:
        if (*piVar16 <= *(int *)param_2[-1]) {
          return;
        }
        *puVar9 = (int *)param_2[-1];
        param_2[-1] = piVar16;
        piVar12 = (int *)*puVar9;
        iVar23 = *piVar12;
        piVar14 = (int *)*puVar8;
        if (iVar23 < *piVar14) {
          puVar24[1] = piVar12;
          puVar24[2] = piVar14;
          piVar14 = (int *)*puVar24;
          if (iVar23 < *piVar14) {
            *puVar24 = piVar12;
            puVar24[1] = piVar14;
            return;
          }
          return;
        }
        return;
      }
      if (uVar11 == 5) {
        puVar7 = puVar24 + 1;
        puVar8 = puVar24 + 2;
        puVar9 = puVar24 + 3;
        piVar12 = (int *)*puVar7;
        iVar23 = *piVar12;
        piVar17 = (int *)*puVar24;
        iVar3 = *piVar17;
        piVar14 = (int *)*puVar8;
        if (iVar23 < iVar3) {
          if (*piVar14 < iVar23) {
            *puVar24 = piVar14;
          }
          else {
            *puVar24 = piVar12;
            *puVar7 = piVar17;
            piVar14 = (int *)*puVar8;
            if (iVar3 <= *piVar14) goto LAB_109488d34;
            *puVar7 = piVar14;
          }
          *puVar8 = piVar17;
          piVar14 = piVar17;
        }
        else if (*piVar14 < iVar23) {
          *puVar7 = piVar14;
          *puVar8 = piVar12;
          piVar17 = (int *)*puVar24;
          piVar14 = piVar12;
          if (*(int *)*puVar7 < *piVar17) {
            *puVar24 = (int *)*puVar7;
            *puVar7 = piVar17;
            piVar14 = (int *)*puVar8;
          }
        }
LAB_109488d34:
        if (*(int *)*puVar9 < *piVar14) {
          *puVar8 = (int *)*puVar9;
          *puVar9 = piVar14;
          piVar14 = (int *)*puVar7;
          if (*(int *)*puVar8 < *piVar14) {
            *puVar7 = (int *)*puVar8;
            *puVar8 = piVar14;
            piVar14 = (int *)*puVar24;
            if (*(int *)*puVar7 < *piVar14) {
              *puVar24 = (int *)*puVar7;
              *puVar7 = piVar14;
            }
          }
        }
        piVar14 = (int *)param_2[-1];
        piVar12 = (int *)*puVar9;
        if (*piVar14 < *piVar12) {
          *puVar9 = piVar14;
          param_2[-1] = piVar12;
          piVar14 = (int *)*puVar8;
          if (*(int *)*puVar9 < *piVar14) {
            *puVar8 = (int *)*puVar9;
            *puVar9 = piVar14;
            piVar14 = (int *)*puVar7;
            if (*(int *)*puVar8 < *piVar14) {
              *puVar7 = (int *)*puVar8;
              *puVar8 = piVar14;
              piVar14 = (int *)*puVar24;
              if (*(int *)*puVar7 < *piVar14) {
                *puVar24 = (int *)*puVar7;
                *puVar7 = piVar14;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar11 < 0x18) {
      puVar7 = puVar24 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar24 != param_2 && puVar7 != param_2) {
          do {
            puVar8 = puVar7;
            piVar14 = (int *)*puVar24;
            piVar12 = (int *)puVar24[1];
            iVar23 = *piVar12;
            puVar7 = puVar8;
            if (iVar23 < *piVar14) {
              do {
                *puVar7 = piVar14;
                piVar14 = (int *)puVar7[-2];
                puVar7 = puVar7 + -1;
              } while (iVar23 < *piVar14);
              *puVar7 = piVar12;
            }
            puVar7 = puVar8 + 1;
            puVar24 = puVar8;
          } while (puVar8 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar24 == param_2 || puVar7 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar8 = puVar24;
      do {
        piVar14 = (int *)*puVar8;
        piVar12 = (int *)puVar8[1];
        iVar23 = *piVar12;
        lVar6 = lVar19;
        if (iVar23 < *piVar14) {
          do {
            lVar20 = lVar6;
            *(int **)((long)puVar24 + lVar20 + 8) = piVar14;
            puVar8 = puVar24;
            if (lVar20 == 0) goto LAB_10948895c;
            piVar14 = *(int **)((long)puVar24 + lVar20 + -8);
            lVar6 = lVar20 + -8;
          } while (iVar23 < *piVar14);
          puVar8 = (undefined8 *)((long)puVar24 + lVar20);
LAB_10948895c:
          *puVar8 = piVar12;
        }
        puVar9 = puVar7 + 1;
        lVar19 = lVar19 + 8;
        puVar8 = puVar7;
        puVar7 = puVar9;
        if (puVar9 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar24 == param_2) {
        return;
      }
      uVar15 = uVar11 - 2 >> 1;
      uVar21 = uVar15;
      do {
        if ((long)uVar21 <= (long)uVar15) {
          uVar1 = uVar21 << 1 | 1;
          puVar7 = puVar24 + uVar1;
          uVar18 = uVar21 * 2 + 2;
          if ((long)uVar18 < (long)uVar11) {
            iVar3 = *(int *)*puVar7;
            piVar14 = (int *)puVar7[1];
            iVar4 = *piVar14;
            iVar23 = iVar3;
            if (iVar3 <= iVar4) {
              iVar23 = iVar4;
            }
            puVar8 = puVar7 + 1;
            if (iVar4 <= iVar3) {
              puVar8 = puVar7;
              uVar18 = uVar1;
              piVar14 = (int *)*puVar7;
            }
          }
          else {
            iVar23 = *(int *)*puVar7;
            puVar8 = puVar7;
            uVar18 = uVar1;
            piVar14 = (int *)*puVar7;
          }
          piVar12 = (int *)puVar24[uVar21];
          iVar3 = *piVar12;
          puVar7 = puVar24 + uVar21;
          if (iVar3 <= iVar23) {
            do {
              puVar9 = puVar8;
              *puVar7 = piVar14;
              if ((long)uVar15 < (long)uVar18) break;
              uVar1 = uVar18 << 1 | 1;
              puVar7 = puVar24 + uVar1;
              uVar18 = uVar18 * 2 + 2;
              if ((long)uVar18 < (long)uVar11) {
                iVar4 = *(int *)*puVar7;
                piVar14 = (int *)puVar7[1];
                iVar5 = *piVar14;
                iVar23 = iVar4;
                if (iVar4 <= iVar5) {
                  iVar23 = iVar5;
                }
                puVar8 = puVar7 + 1;
                if (iVar5 <= iVar4) {
                  puVar8 = puVar7;
                  uVar18 = uVar1;
                  piVar14 = (int *)*puVar7;
                }
              }
              else {
                iVar23 = *(int *)*puVar7;
                puVar8 = puVar7;
                uVar18 = uVar1;
                piVar14 = (int *)*puVar7;
              }
              puVar7 = puVar9;
            } while (iVar3 <= iVar23);
            *puVar9 = piVar12;
          }
        }
        bVar2 = uVar21 != 0;
        uVar21 = uVar21 - 1;
      } while (bVar2);
      do {
        uVar21 = 0;
        uVar13 = *puVar24;
        puVar7 = puVar24;
        do {
          puVar8 = puVar7 + uVar21 + 1;
          uVar18 = uVar21 << 1 | 1;
          uVar15 = uVar21 * 2 + 2;
          if ((long)uVar15 < (long)uVar11) {
            piVar14 = (int *)puVar7[uVar21 + 2];
            lVar19 = uVar21 + 1;
            puVar9 = puVar7 + uVar21 + 2;
            uVar21 = uVar15;
            if (*piVar14 <= *(int *)puVar7[lVar19]) {
              puVar9 = puVar8;
              uVar21 = uVar18;
              piVar14 = (int *)puVar7[lVar19];
            }
          }
          else {
            puVar9 = puVar8;
            uVar21 = uVar18;
            piVar14 = (int *)*puVar8;
          }
          *puVar7 = piVar14;
          puVar7 = puVar9;
        } while ((long)uVar21 <= (long)(uVar11 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar9 == param_2) {
          *puVar9 = uVar13;
        }
        else {
          *puVar9 = *param_2;
          *param_2 = uVar13;
          lVar19 = (long)((long)puVar9 + (8 - (long)puVar24)) >> 3;
          if (1 < lVar19) {
            uVar21 = lVar19 - 2U >> 1;
            piVar12 = (int *)puVar24[uVar21];
            piVar14 = (int *)*puVar9;
            iVar23 = *piVar14;
            puVar7 = puVar24 + uVar21;
            if (*piVar12 < iVar23) {
              do {
                puVar8 = puVar7;
                *puVar9 = piVar12;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1 >> 1;
                piVar12 = (int *)puVar24[uVar21];
                puVar9 = puVar8;
                puVar7 = puVar24 + uVar21;
              } while (*piVar12 < iVar23);
              *puVar8 = piVar14;
            }
          }
        }
        bVar2 = (long)uVar11 < 3;
        uVar11 = uVar11 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar7 = puVar24 + (uVar11 >> 1);
    piVar14 = (int *)param_2[-1];
    iVar23 = *piVar14;
    if (uVar11 < 0x81) {
      piVar17 = (int *)*puVar24;
      iVar3 = *piVar17;
      piVar12 = (int *)*puVar7;
      iVar4 = *piVar12;
      if (iVar3 < iVar4) {
        if (iVar23 < iVar3) {
          *puVar7 = piVar14;
        }
        else {
          *puVar7 = piVar17;
          *puVar24 = piVar12;
          if (iVar4 <= *(int *)param_2[-1]) goto LAB_10948860c;
          *puVar24 = (int *)param_2[-1];
        }
        param_2[-1] = piVar12;
      }
      else if (iVar23 < iVar3) {
        *puVar24 = piVar14;
        param_2[-1] = piVar17;
        piVar14 = (int *)*puVar7;
        if (*(int *)*puVar24 < *piVar14) {
          *puVar7 = (int *)*puVar24;
          *puVar24 = piVar14;
        }
      }
    }
    else {
      piVar17 = (int *)*puVar7;
      iVar3 = *piVar17;
      piVar12 = (int *)*puVar24;
      iVar4 = *piVar12;
      if (iVar3 < iVar4) {
        if (iVar23 < iVar3) {
          *puVar24 = piVar14;
        }
        else {
          *puVar24 = piVar17;
          *puVar7 = piVar12;
          if (iVar4 <= *(int *)param_2[-1]) goto LAB_109488468;
          *puVar7 = (int *)param_2[-1];
        }
        param_2[-1] = piVar12;
      }
      else if (iVar23 < iVar3) {
        *puVar7 = piVar14;
        param_2[-1] = piVar17;
        piVar14 = (int *)*puVar24;
        if (*(int *)*puVar7 < *piVar14) {
          *puVar24 = (int *)*puVar7;
          *puVar7 = piVar14;
        }
      }
LAB_109488468:
      puVar8 = puVar7 + -1;
      piVar12 = (int *)*puVar8;
      iVar23 = *piVar12;
      piVar14 = (int *)puVar24[1];
      iVar3 = *piVar14;
      piVar17 = (int *)param_2[-2];
      if (iVar23 < iVar3) {
        if (*piVar17 < iVar23) {
          puVar24[1] = piVar17;
        }
        else {
          puVar24[1] = piVar12;
          *puVar8 = piVar14;
          if (iVar3 <= *(int *)param_2[-2]) goto LAB_109488514;
          *puVar8 = (int *)param_2[-2];
        }
        param_2[-2] = piVar14;
      }
      else if (*piVar17 < iVar23) {
        *puVar8 = piVar17;
        param_2[-2] = piVar12;
        piVar14 = (int *)puVar24[1];
        if (*(int *)*puVar8 < *piVar14) {
          puVar24[1] = (int *)*puVar8;
          *puVar8 = piVar14;
        }
      }
LAB_109488514:
      puVar9 = puVar7 + 1;
      piVar12 = (int *)*puVar9;
      iVar23 = *piVar12;
      piVar14 = (int *)puVar24[2];
      iVar3 = *piVar14;
      piVar17 = (int *)param_2[-3];
      if (iVar23 < iVar3) {
        if (*piVar17 < iVar23) {
          puVar24[2] = piVar17;
        }
        else {
          puVar24[2] = piVar12;
          *puVar9 = piVar14;
          if (iVar3 <= *(int *)param_2[-3]) goto LAB_10948859c;
          *puVar9 = (int *)param_2[-3];
        }
        param_2[-3] = piVar14;
      }
      else if (*piVar17 < iVar23) {
        *puVar9 = piVar17;
        param_2[-3] = piVar12;
        piVar14 = (int *)puVar24[2];
        if (*(int *)*puVar9 < *piVar14) {
          puVar24[2] = (int *)*puVar9;
          *puVar9 = piVar14;
        }
      }
LAB_10948859c:
      piVar14 = (int *)puVar7[-1];
      piVar12 = (int *)*puVar7;
      iVar23 = *piVar12;
      iVar3 = *piVar14;
      piVar17 = (int *)puVar7[1];
      iVar4 = *piVar17;
      if (iVar23 < iVar3) {
        piVar16 = piVar12;
        if (iVar23 <= iVar4) {
          puVar7[-1] = piVar12;
          *puVar7 = piVar14;
          puVar8 = puVar7;
          piVar12 = piVar14;
          piVar16 = piVar17;
          if (iVar3 <= iVar4) goto LAB_109488600;
        }
LAB_1094885f8:
        *puVar8 = piVar17;
        *puVar9 = piVar14;
        piVar12 = piVar16;
      }
      else if (iVar4 < iVar23) {
        *puVar7 = piVar17;
        puVar7[1] = piVar12;
        puVar9 = puVar7;
        piVar12 = piVar17;
        piVar16 = piVar14;
        if (iVar4 < iVar3) goto LAB_1094885f8;
      }
LAB_109488600:
      uVar13 = *puVar24;
      *puVar24 = piVar12;
      *puVar7 = uVar13;
    }
LAB_10948860c:
    param_3 = param_3 + -1;
    piVar14 = (int *)*puVar24;
    iVar23 = *piVar14;
    puVar7 = puVar24;
    if (((param_4 & 1) == 0) && (iVar23 <= *(int *)puVar24[-1])) {
      if (iVar23 < *(int *)param_2[-1]) {
        do {
          puVar7 = puVar7 + 1;
        } while (*(int *)*puVar7 <= iVar23);
      }
      else {
        do {
          puVar7 = puVar7 + 1;
          if (param_2 <= puVar7) break;
        } while (*(int *)*puVar7 <= iVar23);
      }
      puVar8 = param_2;
      if (puVar7 < param_2) {
        do {
          puVar8 = puVar8 + -1;
        } while (iVar23 < *(int *)*puVar8);
      }
      if (puVar7 < puVar8) {
        piVar12 = (int *)*puVar7;
        piVar17 = (int *)*puVar8;
        do {
          *puVar7 = piVar17;
          *puVar8 = piVar12;
          do {
            puVar7 = puVar7 + 1;
            piVar12 = (int *)*puVar7;
          } while (*piVar12 <= iVar23);
          do {
            puVar8 = puVar8 + -1;
            piVar17 = (int *)*puVar8;
          } while (iVar23 < *piVar17);
        } while (puVar7 < puVar8);
      }
      puVar8 = puVar7 + -1;
      if (puVar8 != puVar24) {
        *puVar24 = *puVar8;
      }
      param_4 = 0;
      *puVar8 = piVar14;
      goto LAB_109488330;
    }
    lVar19 = 0;
    do {
      piVar12 = *(int **)((long)puVar24 + lVar19 + 8);
      lVar19 = lVar19 + 8;
    } while (*piVar12 < iVar23);
    puVar8 = (undefined8 *)((long)puVar24 + lVar19);
    puVar9 = param_2;
    if (lVar19 == 8) {
      do {
        if (puVar9 <= puVar8) break;
        puVar9 = puVar9 + -1;
      } while (iVar23 <= *(int *)*puVar9);
    }
    else {
      do {
        puVar9 = puVar9 + -1;
      } while (iVar23 <= *(int *)*puVar9);
    }
    puVar7 = puVar8;
    if (puVar8 < puVar9) {
      piVar17 = (int *)*puVar9;
      puVar22 = puVar9;
      do {
        *puVar7 = piVar17;
        *puVar22 = piVar12;
        do {
          puVar7 = puVar7 + 1;
          piVar12 = (int *)*puVar7;
        } while (*piVar12 < iVar23);
        do {
          puVar22 = puVar22 + -1;
          piVar17 = (int *)*puVar22;
        } while (iVar23 <= *piVar17);
      } while (puVar7 < puVar22);
    }
    puVar22 = puVar7 + -1;
    if (puVar22 != puVar24) {
      *puVar24 = *puVar22;
    }
    *puVar22 = piVar14;
    if (puVar8 < puVar9) {
LAB_10948871c:
      FUN_109488304(puVar24,puVar22,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      puVar8 = puVar24;
      FUN_109488e14(puVar24,puVar22);
      puVar9 = puVar7;
      FUN_109488e14(puVar7,param_2);
      if ((int)puVar9 == 0) {
        if (((ulong)puVar8 & 1) == 0) goto LAB_10948871c;
      }
      else {
        puVar7 = puVar24;
        param_2 = puVar22;
        if (((ulong)puVar8 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109488304; end: 109488c9f;  */

void FUN_109488304(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  
LAB_109488330:
  do {
    puVar17 = param_1;
    uVar10 = (long)param_2 - (long)puVar17 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        piVar13 = (int *)*puVar17;
        if (*(int *)param_2[-1] < *piVar13) {
          *puVar17 = (int *)param_2[-1];
          param_2[-1] = piVar13;
          return;
        }
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        piVar13 = (int *)*puVar17;
        piVar11 = (int *)puVar17[1];
        iVar24 = *piVar11;
        iVar3 = *piVar13;
        piVar18 = (int *)param_2[-1];
        if (iVar24 < iVar3) {
          if (*piVar18 < iVar24) {
            *puVar17 = piVar18;
          }
          else {
            *puVar17 = piVar11;
            puVar17[1] = piVar13;
            if (iVar3 <= *(int *)param_2[-1]) {
              return;
            }
            puVar17[1] = (int *)param_2[-1];
          }
          param_2[-1] = piVar13;
          return;
        }
        if (*piVar18 < iVar24) {
          puVar17[1] = piVar18;
          param_2[-1] = piVar11;
          piVar13 = (int *)*puVar17;
          if (*(int *)puVar17[1] < *piVar13) {
            *puVar17 = (int *)puVar17[1];
            puVar17[1] = piVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar10 == 4) {
        puVar8 = puVar17 + 1;
        piVar13 = (int *)*puVar8;
        puVar15 = puVar17 + 2;
        piVar11 = (int *)*puVar15;
        iVar24 = *piVar13;
        piVar18 = (int *)*puVar17;
        iVar3 = *piVar18;
        iVar4 = *piVar11;
        puVar7 = puVar17;
        if (iVar24 < iVar3) {
          piVar9 = piVar18;
          puVar23 = puVar15;
          if (iVar24 <= iVar4) {
            *puVar17 = piVar13;
            puVar17[1] = piVar18;
            piVar13 = piVar11;
            puVar7 = puVar8;
            goto joined_r0x000109488bb8;
          }
        }
        else {
          piVar16 = piVar11;
          if (iVar24 <= iVar4) goto LAB_109488c1c;
          *puVar8 = piVar11;
          *puVar15 = piVar13;
          puVar23 = puVar8;
          piVar9 = piVar13;
joined_r0x000109488bb8:
          piVar16 = piVar13;
          if (iVar3 <= iVar4) goto LAB_109488c1c;
        }
        *puVar7 = piVar11;
        *puVar23 = piVar18;
        piVar16 = piVar9;
LAB_109488c1c:
        if (*piVar16 <= *(int *)param_2[-1]) {
          return;
        }
        *puVar15 = (int *)param_2[-1];
        param_2[-1] = piVar16;
        piVar11 = (int *)*puVar15;
        iVar24 = *piVar11;
        piVar13 = (int *)*puVar8;
        if (iVar24 < *piVar13) {
          puVar17[1] = piVar11;
          puVar17[2] = piVar13;
          piVar13 = (int *)*puVar17;
          if (iVar24 < *piVar13) {
            *puVar17 = piVar11;
            puVar17[1] = piVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar10 == 5) {
        puVar7 = puVar17 + 1;
        puVar8 = puVar17 + 2;
        puVar15 = puVar17 + 3;
        piVar11 = (int *)*puVar7;
        iVar24 = *piVar11;
        piVar18 = (int *)*puVar17;
        iVar3 = *piVar18;
        piVar13 = (int *)*puVar8;
        if (iVar24 < iVar3) {
          if (*piVar13 < iVar24) {
            *puVar17 = piVar13;
          }
          else {
            *puVar17 = piVar11;
            *puVar7 = piVar18;
            piVar13 = (int *)*puVar8;
            if (iVar3 <= *piVar13) goto LAB_109488d34;
            *puVar7 = piVar13;
          }
          *puVar8 = piVar18;
          piVar13 = piVar18;
        }
        else if (*piVar13 < iVar24) {
          *puVar7 = piVar13;
          *puVar8 = piVar11;
          piVar18 = (int *)*puVar17;
          piVar13 = piVar11;
          if (*(int *)*puVar7 < *piVar18) {
            *puVar17 = (int *)*puVar7;
            *puVar7 = piVar18;
            piVar13 = (int *)*puVar8;
          }
        }
LAB_109488d34:
        if (*(int *)*puVar15 < *piVar13) {
          *puVar8 = (int *)*puVar15;
          *puVar15 = piVar13;
          piVar13 = (int *)*puVar7;
          if (*(int *)*puVar8 < *piVar13) {
            *puVar7 = (int *)*puVar8;
            *puVar8 = piVar13;
            piVar13 = (int *)*puVar17;
            if (*(int *)*puVar7 < *piVar13) {
              *puVar17 = (int *)*puVar7;
              *puVar7 = piVar13;
            }
          }
        }
        piVar13 = (int *)param_2[-1];
        piVar11 = (int *)*puVar15;
        if (*piVar13 < *piVar11) {
          *puVar15 = piVar13;
          param_2[-1] = piVar11;
          piVar13 = (int *)*puVar8;
          if (*(int *)*puVar15 < *piVar13) {
            *puVar8 = (int *)*puVar15;
            *puVar15 = piVar13;
            piVar13 = (int *)*puVar7;
            if (*(int *)*puVar8 < *piVar13) {
              *puVar7 = (int *)*puVar8;
              *puVar8 = piVar13;
              piVar13 = (int *)*puVar17;
              if (*(int *)*puVar7 < *piVar13) {
                *puVar17 = (int *)*puVar7;
                *puVar7 = piVar13;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      puVar7 = puVar17 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar17 != param_2 && puVar7 != param_2) {
          do {
            puVar8 = puVar7;
            piVar13 = (int *)*puVar17;
            piVar11 = (int *)puVar17[1];
            iVar24 = *piVar11;
            puVar17 = puVar8;
            if (iVar24 < *piVar13) {
              do {
                *puVar17 = piVar13;
                piVar13 = (int *)puVar17[-2];
                puVar17 = puVar17 + -1;
              } while (iVar24 < *piVar13);
              *puVar17 = piVar11;
            }
            puVar7 = puVar8 + 1;
            puVar17 = puVar8;
          } while (puVar8 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar17 == param_2 || puVar7 == param_2) {
        return;
      }
      lVar20 = 0;
      puVar8 = puVar17;
      do {
        piVar13 = (int *)*puVar8;
        piVar11 = (int *)puVar8[1];
        iVar24 = *piVar11;
        lVar6 = lVar20;
        if (iVar24 < *piVar13) {
          do {
            lVar21 = lVar6;
            *(int **)((long)puVar17 + lVar21 + 8) = piVar13;
            puVar8 = puVar17;
            if (lVar21 == 0) goto LAB_10948895c;
            piVar13 = *(int **)((long)puVar17 + lVar21 + -8);
            lVar6 = lVar21 + -8;
          } while (iVar24 < *piVar13);
          puVar8 = (undefined8 *)((long)puVar17 + lVar21);
LAB_10948895c:
          *puVar8 = piVar11;
        }
        puVar15 = puVar7 + 1;
        lVar20 = lVar20 + 8;
        puVar8 = puVar7;
        puVar7 = puVar15;
        if (puVar15 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar17 == param_2) {
        return;
      }
      uVar14 = uVar10 - 2 >> 1;
      uVar22 = uVar14;
      do {
        if ((long)uVar22 <= (long)uVar14) {
          uVar1 = uVar22 << 1 | 1;
          puVar7 = puVar17 + uVar1;
          uVar19 = uVar22 * 2 + 2;
          if ((long)uVar19 < (long)uVar10) {
            iVar3 = *(int *)*puVar7;
            piVar13 = (int *)puVar7[1];
            iVar4 = *piVar13;
            iVar24 = iVar3;
            if (iVar3 <= iVar4) {
              iVar24 = iVar4;
            }
            puVar8 = puVar7 + 1;
            if (iVar4 <= iVar3) {
              puVar8 = puVar7;
              uVar19 = uVar1;
              piVar13 = (int *)*puVar7;
            }
          }
          else {
            iVar24 = *(int *)*puVar7;
            puVar8 = puVar7;
            uVar19 = uVar1;
            piVar13 = (int *)*puVar7;
          }
          piVar11 = (int *)puVar17[uVar22];
          iVar3 = *piVar11;
          puVar7 = puVar17 + uVar22;
          if (iVar3 <= iVar24) {
            do {
              puVar15 = puVar8;
              *puVar7 = piVar13;
              if ((long)uVar14 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              puVar7 = puVar17 + uVar1;
              uVar19 = uVar19 * 2 + 2;
              if ((long)uVar19 < (long)uVar10) {
                iVar4 = *(int *)*puVar7;
                piVar13 = (int *)puVar7[1];
                iVar5 = *piVar13;
                iVar24 = iVar4;
                if (iVar4 <= iVar5) {
                  iVar24 = iVar5;
                }
                puVar8 = puVar7 + 1;
                if (iVar5 <= iVar4) {
                  puVar8 = puVar7;
                  uVar19 = uVar1;
                  piVar13 = (int *)*puVar7;
                }
              }
              else {
                iVar24 = *(int *)*puVar7;
                puVar8 = puVar7;
                uVar19 = uVar1;
                piVar13 = (int *)*puVar7;
              }
              puVar7 = puVar15;
            } while (iVar3 <= iVar24);
            *puVar15 = piVar11;
          }
        }
        bVar2 = uVar22 != 0;
        uVar22 = uVar22 - 1;
      } while (bVar2);
      do {
        uVar22 = 0;
        uVar12 = *puVar17;
        puVar7 = puVar17;
        do {
          puVar8 = puVar7 + uVar22 + 1;
          uVar19 = uVar22 << 1 | 1;
          uVar14 = uVar22 * 2 + 2;
          if ((long)uVar14 < (long)uVar10) {
            piVar13 = (int *)puVar7[uVar22 + 2];
            lVar20 = uVar22 + 1;
            puVar15 = puVar7 + uVar22 + 2;
            uVar22 = uVar14;
            if (*piVar13 <= *(int *)puVar7[lVar20]) {
              puVar15 = puVar8;
              uVar22 = uVar19;
              piVar13 = (int *)puVar7[lVar20];
            }
          }
          else {
            puVar15 = puVar8;
            uVar22 = uVar19;
            piVar13 = (int *)*puVar8;
          }
          *puVar7 = piVar13;
          puVar7 = puVar15;
        } while ((long)uVar22 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar15 == param_2) {
          *puVar15 = uVar12;
        }
        else {
          *puVar15 = *param_2;
          *param_2 = uVar12;
          lVar20 = (long)puVar15 + (8 - (long)puVar17) >> 3;
          if (1 < lVar20) {
            uVar22 = lVar20 - 2U >> 1;
            piVar11 = (int *)puVar17[uVar22];
            piVar13 = (int *)*puVar15;
            iVar24 = *piVar13;
            puVar7 = puVar17 + uVar22;
            if (*piVar11 < iVar24) {
              do {
                puVar8 = puVar7;
                *puVar15 = piVar11;
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1 >> 1;
                piVar11 = (int *)puVar17[uVar22];
                puVar15 = puVar8;
                puVar7 = puVar17 + uVar22;
              } while (*piVar11 < iVar24);
              *puVar8 = piVar13;
            }
          }
        }
        bVar2 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar7 = puVar17 + (uVar10 >> 1);
    piVar13 = (int *)param_2[-1];
    iVar24 = *piVar13;
    if (uVar10 < 0x81) {
      piVar18 = (int *)*puVar17;
      iVar3 = *piVar18;
      piVar11 = (int *)*puVar7;
      iVar4 = *piVar11;
      if (iVar3 < iVar4) {
        if (iVar24 < iVar3) {
          *puVar7 = piVar13;
        }
        else {
          *puVar7 = piVar18;
          *puVar17 = piVar11;
          if (iVar4 <= *(int *)param_2[-1]) goto LAB_10948860c;
          *puVar17 = (int *)param_2[-1];
        }
        param_2[-1] = piVar11;
      }
      else if (iVar24 < iVar3) {
        *puVar17 = piVar13;
        param_2[-1] = piVar18;
        piVar13 = (int *)*puVar7;
        if (*(int *)*puVar17 < *piVar13) {
          *puVar7 = (int *)*puVar17;
          *puVar17 = piVar13;
        }
      }
    }
    else {
      piVar18 = (int *)*puVar7;
      iVar3 = *piVar18;
      piVar11 = (int *)*puVar17;
      iVar4 = *piVar11;
      if (iVar3 < iVar4) {
        if (iVar24 < iVar3) {
          *puVar17 = piVar13;
        }
        else {
          *puVar17 = piVar18;
          *puVar7 = piVar11;
          if (iVar4 <= *(int *)param_2[-1]) goto LAB_109488468;
          *puVar7 = (int *)param_2[-1];
        }
        param_2[-1] = piVar11;
      }
      else if (iVar24 < iVar3) {
        *puVar7 = piVar13;
        param_2[-1] = piVar18;
        piVar13 = (int *)*puVar17;
        if (*(int *)*puVar7 < *piVar13) {
          *puVar17 = (int *)*puVar7;
          *puVar7 = piVar13;
        }
      }
LAB_109488468:
      puVar8 = puVar7 + -1;
      piVar11 = (int *)*puVar8;
      iVar24 = *piVar11;
      piVar13 = (int *)puVar17[1];
      iVar3 = *piVar13;
      piVar18 = (int *)param_2[-2];
      if (iVar24 < iVar3) {
        if (*piVar18 < iVar24) {
          puVar17[1] = piVar18;
        }
        else {
          puVar17[1] = piVar11;
          *puVar8 = piVar13;
          if (iVar3 <= *(int *)param_2[-2]) goto LAB_109488514;
          *puVar8 = (int *)param_2[-2];
        }
        param_2[-2] = piVar13;
      }
      else if (*piVar18 < iVar24) {
        *puVar8 = piVar18;
        param_2[-2] = piVar11;
        piVar13 = (int *)puVar17[1];
        if (*(int *)*puVar8 < *piVar13) {
          puVar17[1] = (int *)*puVar8;
          *puVar8 = piVar13;
        }
      }
LAB_109488514:
      puVar15 = puVar7 + 1;
      piVar11 = (int *)*puVar15;
      iVar24 = *piVar11;
      piVar13 = (int *)puVar17[2];
      iVar3 = *piVar13;
      piVar18 = (int *)param_2[-3];
      if (iVar24 < iVar3) {
        if (*piVar18 < iVar24) {
          puVar17[2] = piVar18;
        }
        else {
          puVar17[2] = piVar11;
          *puVar15 = piVar13;
          if (iVar3 <= *(int *)param_2[-3]) goto LAB_10948859c;
          *puVar15 = (int *)param_2[-3];
        }
        param_2[-3] = piVar13;
      }
      else if (*piVar18 < iVar24) {
        *puVar15 = piVar18;
        param_2[-3] = piVar11;
        piVar13 = (int *)puVar17[2];
        if (*(int *)*puVar15 < *piVar13) {
          puVar17[2] = (int *)*puVar15;
          *puVar15 = piVar13;
        }
      }
LAB_10948859c:
      piVar13 = (int *)puVar7[-1];
      piVar11 = (int *)*puVar7;
      iVar24 = *piVar11;
      iVar3 = *piVar13;
      piVar18 = (int *)puVar7[1];
      iVar4 = *piVar18;
      if (iVar24 < iVar3) {
        piVar16 = piVar11;
        if (iVar24 <= iVar4) {
          puVar7[-1] = piVar11;
          *puVar7 = piVar13;
          puVar8 = puVar7;
          piVar11 = piVar13;
          piVar16 = piVar18;
          if (iVar3 <= iVar4) goto LAB_109488600;
        }
LAB_1094885f8:
        *puVar8 = piVar18;
        *puVar15 = piVar13;
        piVar11 = piVar16;
      }
      else if (iVar4 < iVar24) {
        *puVar7 = piVar18;
        puVar7[1] = piVar11;
        puVar15 = puVar7;
        piVar11 = piVar18;
        piVar16 = piVar13;
        if (iVar4 < iVar3) goto LAB_1094885f8;
      }
LAB_109488600:
      uVar12 = *puVar17;
      *puVar17 = piVar11;
      *puVar7 = uVar12;
    }
LAB_10948860c:
    param_3 = param_3 + -1;
    piVar13 = (int *)*puVar17;
    iVar24 = *piVar13;
    param_1 = puVar17;
    if (((param_4 & 1) == 0) && (iVar24 <= *(int *)puVar17[-1])) {
      if (iVar24 < *(int *)param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*(int *)*param_1 <= iVar24);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(int *)*param_1 <= iVar24);
      }
      puVar7 = param_2;
      if (param_1 < param_2) {
        do {
          puVar7 = puVar7 + -1;
        } while (iVar24 < *(int *)*puVar7);
      }
      if (param_1 < puVar7) {
        piVar11 = (int *)*param_1;
        piVar18 = (int *)*puVar7;
        do {
          *param_1 = piVar18;
          *puVar7 = piVar11;
          do {
            param_1 = param_1 + 1;
            piVar11 = (int *)*param_1;
          } while (*piVar11 <= iVar24);
          do {
            puVar7 = puVar7 + -1;
            piVar18 = (int *)*puVar7;
          } while (iVar24 < *piVar18);
        } while (param_1 < puVar7);
      }
      puVar7 = param_1 + -1;
      if (puVar7 != puVar17) {
        *puVar17 = *puVar7;
      }
      param_4 = 0;
      *puVar7 = piVar13;
      goto LAB_109488330;
    }
    lVar20 = 0;
    do {
      piVar11 = *(int **)((long)puVar17 + lVar20 + 8);
      lVar20 = lVar20 + 8;
    } while (*piVar11 < iVar24);
    puVar7 = (undefined8 *)((long)puVar17 + lVar20);
    puVar8 = param_2;
    if (lVar20 == 8) {
      do {
        if (puVar8 <= puVar7) break;
        puVar8 = puVar8 + -1;
      } while (iVar24 <= *(int *)*puVar8);
    }
    else {
      do {
        puVar8 = puVar8 + -1;
      } while (iVar24 <= *(int *)*puVar8);
    }
    param_1 = puVar7;
    if (puVar7 < puVar8) {
      piVar18 = (int *)*puVar8;
      puVar15 = puVar8;
      do {
        *param_1 = piVar18;
        *puVar15 = piVar11;
        do {
          param_1 = param_1 + 1;
          piVar11 = (int *)*param_1;
        } while (*piVar11 < iVar24);
        do {
          puVar15 = puVar15 + -1;
          piVar18 = (int *)*puVar15;
        } while (iVar24 <= *piVar18);
      } while (param_1 < puVar15);
    }
    puVar15 = param_1 + -1;
    if (puVar15 != puVar17) {
      *puVar17 = *puVar15;
    }
    *puVar15 = piVar13;
    if (puVar7 < puVar8) {
LAB_10948871c:
      FUN_109488304(puVar17,puVar15,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      puVar7 = puVar17;
      FUN_109488e14(puVar17,puVar15);
      puVar8 = param_1;
      FUN_109488e14(param_1,param_2);
      if ((int)puVar8 == 0) {
        if (((ulong)puVar7 & 1) == 0) goto LAB_10948871c;
      }
      else {
        param_1 = puVar17;
        param_2 = puVar15;
        if (((ulong)puVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109488ca0; end: 109488e13;  */

void FUN_109488ca0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = (int *)*param_2;
  iVar1 = *piVar3;
  piVar4 = (int *)*param_1;
  iVar2 = *piVar4;
  piVar5 = (int *)*param_3;
  if (iVar1 < iVar2) {
    if (*piVar5 < iVar1) {
      *param_1 = piVar5;
    }
    else {
      *param_1 = piVar3;
      *param_2 = piVar4;
      piVar5 = (int *)*param_3;
      if (iVar2 <= *piVar5) goto LAB_109488d34;
      *param_2 = piVar5;
    }
    *param_3 = piVar4;
    piVar5 = piVar4;
  }
  else if (*piVar5 < iVar1) {
    *param_2 = piVar5;
    *param_3 = piVar3;
    piVar4 = (int *)*param_1;
    piVar5 = piVar3;
    if (*(int *)*param_2 < *piVar4) {
      *param_1 = (int *)*param_2;
      *param_2 = piVar4;
      piVar5 = (int *)*param_3;
    }
  }
LAB_109488d34:
  if (*(int *)*param_4 < *piVar5) {
    *param_3 = (int *)*param_4;
    *param_4 = piVar5;
    piVar5 = (int *)*param_2;
    if (*(int *)*param_3 < *piVar5) {
      *param_2 = (int *)*param_3;
      *param_3 = piVar5;
      piVar5 = (int *)*param_1;
      if (*(int *)*param_2 < *piVar5) {
        *param_1 = (int *)*param_2;
        *param_2 = piVar5;
      }
    }
  }
  piVar5 = (int *)*param_4;
  if (*(int *)*param_5 < *piVar5) {
    *param_4 = (int *)*param_5;
    *param_5 = piVar5;
    piVar5 = (int *)*param_3;
    if (*(int *)*param_4 < *piVar5) {
      *param_3 = (int *)*param_4;
      *param_4 = piVar5;
      piVar5 = (int *)*param_2;
      if (*(int *)*param_3 < *piVar5) {
        *param_2 = (int *)*param_3;
        *param_3 = piVar5;
        piVar5 = (int *)*param_1;
        if (*(int *)*param_2 < *piVar5) {
          *param_1 = (int *)*param_2;
          *param_2 = piVar5;
        }
      }
    }
  }
  return;
}



/* Entry: 109488e14; end: 1094890f3;  */

bool FUN_109488e14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      piVar7 = (int *)*param_1;
      if (*(int *)param_2[-1] < *piVar7) {
        *param_1 = (int *)param_2[-1];
        param_2[-1] = piVar7;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      piVar7 = (int *)*param_1;
      piVar8 = (int *)param_1[1];
      iVar6 = *piVar8;
      iVar1 = *piVar7;
      piVar12 = (int *)param_2[-1];
      if (iVar6 < iVar1) {
        if (*piVar12 < iVar6) {
          *param_1 = piVar12;
        }
        else {
          *param_1 = piVar8;
          param_1[1] = piVar7;
          if (iVar1 <= *(int *)param_2[-1]) {
            return true;
          }
          param_1[1] = (int *)param_2[-1];
        }
        param_2[-1] = piVar7;
        return true;
      }
      if (*piVar12 < iVar6) {
        param_1[1] = piVar12;
        param_2[-1] = piVar8;
        piVar7 = (int *)*param_1;
        if (*(int *)param_1[1] < *piVar7) {
          *param_1 = (int *)param_1[1];
          param_1[1] = piVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar5 == 4) {
      puVar13 = param_1 + 1;
      piVar7 = (int *)*puVar13;
      puVar15 = param_1 + 2;
      piVar8 = (int *)*puVar15;
      iVar6 = *piVar7;
      piVar12 = (int *)*param_1;
      iVar1 = *piVar12;
      iVar2 = *piVar8;
      puVar9 = param_1;
      if (iVar6 < iVar1) {
        piVar4 = piVar12;
        puVar16 = puVar15;
        if (iVar6 <= iVar2) {
          *param_1 = piVar7;
          param_1[1] = piVar12;
          piVar7 = piVar8;
          puVar9 = puVar13;
          goto joined_r0x000109489054;
        }
      }
      else {
        piVar10 = piVar8;
        if (iVar6 <= iVar2) goto LAB_10948906c;
        *puVar13 = piVar8;
        *puVar15 = piVar7;
        puVar16 = puVar13;
        piVar4 = piVar7;
joined_r0x000109489054:
        piVar10 = piVar7;
        if (iVar1 <= iVar2) goto LAB_10948906c;
      }
      *puVar9 = piVar8;
      *puVar16 = piVar12;
      piVar10 = piVar4;
LAB_10948906c:
      if (*piVar10 <= *(int *)param_2[-1]) {
        return true;
      }
      *puVar15 = (int *)param_2[-1];
      param_2[-1] = piVar10;
      piVar8 = (int *)*puVar15;
      iVar6 = *piVar8;
      piVar7 = (int *)*puVar13;
      if (iVar6 < *piVar7) {
        param_1[1] = piVar8;
        param_1[2] = piVar7;
        piVar7 = (int *)*param_1;
        if (iVar6 < *piVar7) {
          *param_1 = piVar8;
          param_1[1] = piVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar5 == 5) {
      FUN_109488ca0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  puVar9 = param_1 + 2;
  piVar7 = (int *)*puVar9;
  puVar15 = param_1 + 1;
  piVar12 = (int *)*puVar15;
  iVar6 = *piVar12;
  piVar8 = (int *)*param_1;
  iVar1 = *piVar8;
  iVar2 = *piVar7;
  puVar13 = param_1;
  if (iVar6 < iVar1) {
    puVar16 = puVar9;
    if (iVar6 <= iVar2) {
      *param_1 = piVar12;
      param_1[1] = piVar8;
      puVar13 = puVar15;
      puVar15 = puVar9;
      goto LAB_109488f9c;
    }
  }
  else {
    if (iVar6 <= iVar2) goto LAB_109488fac;
    *puVar15 = piVar7;
    *puVar9 = piVar12;
LAB_109488f9c:
    puVar16 = puVar15;
    if (iVar1 <= iVar2) goto LAB_109488fac;
  }
  *puVar13 = piVar7;
  *puVar16 = piVar8;
LAB_109488fac:
  if (param_1 + 3 != param_2) {
    iVar6 = 0;
    lVar11 = 0x18;
    puVar13 = param_1 + 3;
    do {
      puVar15 = puVar13;
      piVar8 = (int *)*puVar15;
      iVar1 = *piVar8;
      piVar7 = (int *)*puVar9;
      lVar14 = lVar11;
      if (iVar1 < *piVar7) {
        do {
          *(int **)((long)param_1 + lVar14) = piVar7;
          lVar3 = lVar14 + -8;
          puVar9 = param_1;
          if (lVar3 == 0) goto LAB_10948900c;
          piVar7 = *(int **)((long)param_1 + lVar14 + -0x10);
          lVar14 = lVar3;
        } while (iVar1 < *piVar7);
        puVar9 = (undefined8 *)((long)param_1 + lVar3);
LAB_10948900c:
        *puVar9 = piVar8;
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return puVar15 + 1 == param_2;
        }
      }
      lVar11 = lVar11 + 8;
      puVar13 = puVar15 + 1;
      puVar9 = puVar15;
    } while (puVar15 + 1 != param_2);
  }
  return true;
}



/* Entry: 1094890f4; end: 1094891bb;  */

long * FUN_1094890f4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = param_2 + 0x10;
  plVar1 = *(long **)(param_2 + 0x70);
  lVar5 = plVar1[1];
  lVar2 = *plVar1;
  lVar6 = plVar1[2];
  param_1[4] = plVar1[3];
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  param_1[1] = lVar2;
  lVar2 = *(long *)(param_3 + 8);
  param_1[5] = *(long *)(param_2 + 8);
  param_1[6] = lVar2;
  *(byte *)(param_1 + 7) = *(byte *)(param_3 + 0x18) & 1;
  dVar3 = (double)(long)*(double *)(param_3 + 0x10);
  if ((*(uint *)(param_3 + 0x18) & 1) == 0) {
    dVar3 = 0.0;
  }
  _fmod(dVar3,0x4076800000000000);
  dVar4 = dVar3 + 360.0;
  if (0.0 <= dVar3) {
    dVar4 = dVar3;
  }
  *(char *)((long)param_1 + 0x39) = (char)(int)(dVar4 * 0.7111111111111111);
  dVar4 = *(double *)(param_2 + 0x40);
  _fmod(dVar4,0x4076800000000000);
  dVar3 = dVar4 + 360.0;
  if (0.0 <= dVar4) {
    dVar3 = dVar4;
  }
  *(char *)((long)param_1 + 0x3a) = (char)(int)(dVar3 * 0.7111111111111111);
  return param_1;
}



/* Entry: 1094891bc; end: 109489217;  */

long * FUN_1094891bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109480938(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109489218; end: 109489253;  */

void FUN_109489218(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109489934();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_109489984();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109489254; end: 1094894db;  */

void FUN_109489254(float param_1,long *param_2,byte *param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  bool bVar2;
  float *pfVar3;
  code *pcVar4;
  float **ppfVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float **ppfVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float *pfStack_98;
  float **ppfStack_90;
  float **ppfStack_88;
  long lStack_80;
  undefined1 uStack_71;
  
  lVar7 = *param_2 + param_4 * 0x30;
  lVar9 = *(long *)(lVar7 + 0x28);
  lStack_80 = param_4;
  if (lVar9 == 0) {
    FUN_1093fd894(param_6,&lStack_80);
  }
  else {
    uVar13 = *(ulong *)(lVar7 + 0x20);
    pfStack_98 = (float *)0x0;
    ppfStack_90 = (float **)0x0;
    ppfStack_88 = (float **)0x0;
    FUN_1094894dc(&pfStack_98,lVar9);
    if (uVar13 < uVar13 + lVar9) {
      lVar7 = uVar13 * 0x30;
      do {
        pbVar1 = (byte *)(*param_2 + lVar7);
        fVar14 = (float)(ushort)((ushort)(byte)POPCOUNT(*pbVar1 ^ *param_3) +
                                 (ushort)(byte)POPCOUNT(pbVar1[2] ^ param_3[2]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[4] ^ param_3[4]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[6] ^ param_3[6]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[8] ^ param_3[8]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[10] ^ param_3[10]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0xc] ^ param_3[0xc]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0xe] ^ param_3[0xe]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x10] ^ param_3[0x10]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x12] ^ param_3[0x12]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x14] ^ param_3[0x14]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x16] ^ param_3[0x16]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x18] ^ param_3[0x18]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x1a] ^ param_3[0x1a]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x1c] ^ param_3[0x1c]) +
                                 (ushort)(byte)POPCOUNT(pbVar1[0x1e] ^ param_3[0x1e]) +
                                (ushort)(byte)POPCOUNT(pbVar1[1] ^ param_3[1]) +
                                (ushort)(byte)POPCOUNT(pbVar1[3] ^ param_3[3]) +
                                (ushort)(byte)POPCOUNT(pbVar1[5] ^ param_3[5]) +
                                (ushort)(byte)POPCOUNT(pbVar1[7] ^ param_3[7]) +
                                (ushort)(byte)POPCOUNT(pbVar1[9] ^ param_3[9]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0xb] ^ param_3[0xb]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0xd] ^ param_3[0xd]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0xf] ^ param_3[0xf]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x11] ^ param_3[0x11]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x13] ^ param_3[0x13]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x15] ^ param_3[0x15]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x17] ^ param_3[0x17]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x19] ^ param_3[0x19]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x1b] ^ param_3[0x1b]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x1d] ^ param_3[0x1d]) +
                                (ushort)(byte)POPCOUNT(pbVar1[0x1f] ^ param_3[0x1f]));
        fVar15 = (float)uVar13;
        if (ppfStack_90 < ppfStack_88) {
          *(float *)ppfStack_90 = fVar14;
          *(float *)((long)ppfStack_90 + 4) = fVar15;
          ppfVar11 = ppfStack_90 + 1;
        }
        else {
          lVar10 = (long)ppfStack_90 - (long)pfStack_98;
          uVar13 = (lVar10 >> 3) + 1;
          if (uVar13 >> 0x3d != 0) {
            FUN_10940c468();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094894ac);
            (*pcVar4)();
          }
          uVar8 = (long)ppfStack_88 - (long)pfStack_98 >> 2;
          if (uVar8 <= uVar13) {
            uVar8 = uVar13;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppfStack_88 - (long)pfStack_98)) {
            uVar8 = 0x1fffffffffffffff;
          }
          ppfVar5 = &pfStack_98;
          FUN_10940c47c();
          pfVar3 = pfStack_98;
          lVar6 = (long)ppfStack_90 - (long)pfStack_98;
          pfVar12 = (float *)((long)ppfVar5 + lVar10);
          *pfVar12 = fVar14;
          pfVar12[1] = fVar15;
          ppfVar11 = (float **)(pfVar12 + 2);
          pfVar12 = (float *)((long)pfVar12 - lVar6);
          _memcpy(pfVar12,pfVar3);
          bVar2 = pfStack_98 != (float *)0x0;
          pfStack_98 = pfVar12;
          ppfStack_88 = ppfVar5 + uVar8;
          if (bVar2) {
            ppfStack_90 = ppfVar11;
            __ZdlPv();
          }
        }
        uVar13 = (ulong)((int)fVar15 + 1);
        lVar7 = lVar7 + 0x30;
        lVar9 = lVar9 + -1;
        ppfStack_90 = ppfVar11;
      } while (lVar9 != 0);
    }
    if (param_5 != 0) {
      FUN_109489568(pfStack_98,pfStack_98 + param_5 * 2,ppfStack_90,&uStack_71);
    }
    fVar15 = *pfStack_98;
    FUN_109489254(param_2,param_3,(long)(int)pfStack_98[1],param_5,param_6);
    if (1 < param_5) {
      lVar9 = 0;
      lVar7 = param_5 - 1;
      do {
        if (param_1 * fVar15 <= *(float *)((long)pfStack_98 + lVar9 + 8)) goto LAB_109489478;
        FUN_109489254(param_2,param_3,(long)*(int *)((long)pfStack_98 + lVar9 + 0xc),param_5,param_6
                     );
        lVar9 = lVar9 + 8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (pfStack_98 != (float *)0x0) {
LAB_109489478:
      ppfStack_90 = (float **)pfStack_98;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1094894dc; end: 109489567;  */

float * FUN_1094894dc(float *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = *(long *)param_1;
  if ((float *)(*(long *)(param_1 + 4) - lVar5 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_10940c468();
      pfVar3 = param_3;
      if ((long)param_2 - (long)param_1 != 0) {
        lVar5 = (long)param_2 - (long)param_1 >> 3;
        pfVar4 = param_2;
        pfVar3 = param_2;
        if (1 < lVar5) {
          uVar6 = lVar5 - 2U >> 1;
          pfVar8 = param_1 + uVar6 * 2;
          lVar7 = uVar6 + 1;
          do {
            FUN_1094896e0(param_1,param_4,lVar5,pfVar8);
            pfVar8 = pfVar8 + -2;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        for (; pfVar4 != param_3; pfVar4 = pfVar4 + 2) {
          fVar9 = *pfVar4;
          fVar10 = *param_1;
          fVar2 = pfVar4[1];
          fVar11 = param_1[1];
          bVar1 = fVar9 < fVar10;
          if (fVar9 == fVar10) {
            bVar1 = (int)fVar2 < (int)fVar11;
          }
          if (bVar1) {
            *pfVar4 = fVar10;
            *param_1 = fVar9;
            pfVar4[1] = fVar11;
            param_1[1] = fVar2;
            FUN_1094896e0(param_1,param_4,lVar5,param_1);
          }
          pfVar3 = param_3;
        }
        if (1 < lVar5) {
          do {
            pfVar8 = param_2 + -2;
            fVar11 = *param_1;
            fVar2 = param_1[1];
            pfVar4 = param_1;
            func_0x00010948981c(param_1,param_4,lVar5);
            if (pfVar8 == pfVar4) {
              *pfVar4 = fVar11;
              pfVar4[1] = fVar2;
            }
            else {
              *pfVar4 = *pfVar8;
              pfVar4[1] = param_2[-1];
              *pfVar8 = fVar11;
              param_2[-1] = fVar2;
              func_0x0001094898b0(param_1,pfVar4 + 2,param_4,(long)(pfVar4 + 2) - (long)param_1 >> 3
                                 );
            }
            bVar1 = 2 < lVar5;
            lVar5 = lVar5 + -1;
            param_2 = pfVar8;
          } while (bVar1);
        }
      }
      return pfVar3;
    }
    lVar7 = *(long *)(param_1 + 2);
    pfVar3 = param_1;
    FUN_10940c47c();
    lVar5 = (long)pfVar3 + (lVar7 - lVar5);
    lVar7 = lVar5 - (*(long *)(param_1 + 2) - *(long *)param_1);
    _memcpy(lVar7);
    pfVar4 = *(float **)param_1;
    *(long *)param_1 = lVar7;
    *(long *)(param_1 + 2) = lVar5;
    *(float **)(param_1 + 4) = pfVar3 + (long)param_2 * 2;
    param_1 = (float *)0x0;
    if (pfVar4 != (float *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return pfVar4;
    }
  }
  return param_1;
}



/* Entry: 109489568; end: 1094896df;  */

float * FUN_109489568(float *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar7 = param_3;
  if ((long)param_2 - (long)param_1 != 0) {
    lVar5 = (long)param_2 - (long)param_1 >> 3;
    pfVar3 = param_2;
    pfVar7 = param_2;
    if (1 < lVar5) {
      uVar4 = lVar5 - 2U >> 1;
      pfVar6 = param_1 + uVar4 * 2;
      lVar8 = uVar4 + 1;
      do {
        FUN_1094896e0(param_1,param_4,lVar5,pfVar6);
        pfVar6 = pfVar6 + -2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    for (; pfVar3 != param_3; pfVar3 = pfVar3 + 2) {
      fVar9 = *pfVar3;
      fVar10 = *param_1;
      fVar2 = pfVar3[1];
      fVar11 = param_1[1];
      bVar1 = fVar9 < fVar10;
      if (fVar9 == fVar10) {
        bVar1 = (int)fVar2 < (int)fVar11;
      }
      if (bVar1) {
        *pfVar3 = fVar10;
        *param_1 = fVar9;
        pfVar3[1] = fVar11;
        param_1[1] = fVar2;
        FUN_1094896e0(param_1,param_4,lVar5,param_1);
      }
      pfVar7 = param_3;
    }
    if (1 < lVar5) {
      do {
        pfVar6 = param_2 + -2;
        fVar11 = *param_1;
        fVar2 = param_1[1];
        pfVar3 = param_1;
        func_0x00010948981c(param_1,param_4,lVar5);
        if (pfVar6 == pfVar3) {
          *pfVar3 = fVar11;
          pfVar3[1] = fVar2;
        }
        else {
          *pfVar3 = *pfVar6;
          pfVar3[1] = param_2[-1];
          *pfVar6 = fVar11;
          param_2[-1] = fVar2;
          func_0x0001094898b0(param_1,pfVar3 + 2,param_4,(long)(pfVar3 + 2) - (long)param_1 >> 3);
        }
        bVar1 = 2 < lVar5;
        lVar5 = lVar5 + -1;
        param_2 = pfVar6;
      } while (bVar1);
    }
  }
  return pfVar7;
}



/* Entry: 1094896e0; end: 109489933;  */

void FUN_1094896e0(long param_1,undefined8 param_2,long param_3,float *param_4)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (1 < param_3) {
    uVar5 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar5) {
      uVar10 = (long)param_4 - param_1 >> 2;
      uVar8 = uVar10 | 1;
      pfVar7 = (float *)(param_1 + uVar8 * 8);
      uVar10 = uVar10 + 2;
      uVar9 = uVar8;
      if ((long)uVar10 < param_3) {
        bVar4 = *pfVar7 < pfVar7[2];
        if (*pfVar7 == pfVar7[2]) {
          bVar4 = (int)pfVar7[1] < (int)pfVar7[3];
        }
        lVar2 = 8;
        if (!bVar4) {
          lVar2 = 0;
        }
        pfVar7 = (float *)((long)pfVar7 + lVar2);
        uVar9 = uVar10;
        if (!bVar4) {
          uVar9 = uVar8;
        }
      }
      fVar12 = *pfVar7;
      fVar11 = *param_4;
      fVar13 = pfVar7[1];
      fVar3 = param_4[1];
      bVar4 = fVar12 < fVar11;
      if (fVar12 == fVar11) {
        bVar4 = (int)fVar13 < (int)fVar3;
      }
      if (!bVar4) {
        do {
          pfVar6 = pfVar7;
          *param_4 = fVar12;
          param_4[1] = fVar13;
          if ((long)uVar5 < (long)uVar9) break;
          uVar8 = uVar9 << 1 | 1;
          pfVar7 = (float *)(param_1 + uVar8 * 8);
          uVar10 = uVar9 * 2 + 2;
          uVar9 = uVar8;
          if ((long)uVar10 < param_3) {
            pfVar1 = (float *)(uVar8 * 8 + param_1 + 8);
            fVar13 = *pfVar1;
            bVar4 = *pfVar7 < fVar13;
            if (*pfVar7 == fVar13) {
              bVar4 = (int)pfVar7[1] < (int)pfVar1[1];
            }
            lVar2 = 8;
            if (!bVar4) {
              lVar2 = 0;
            }
            pfVar7 = (float *)((long)pfVar7 + lVar2);
            uVar9 = uVar10;
            if (!bVar4) {
              uVar9 = uVar8;
            }
          }
          fVar12 = *pfVar7;
          fVar13 = pfVar7[1];
          bVar4 = fVar12 < fVar11;
          if (fVar12 == fVar11) {
            bVar4 = (int)fVar13 < (int)fVar3;
          }
          param_4 = pfVar6;
        } while (!bVar4);
        *pfVar6 = fVar11;
        pfVar6[1] = fVar3;
      }
    }
  }
  return;
}



/* Entry: 109489934; end: 109489983;  */

void FUN_109489934(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_109400904(puVar1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 109489984; end: 109489aa7;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x00010948a028) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

undefined1  [16]
FUN_109489984(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 ***pppuVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar19 = (long *)(param_1[1] - *param_1);
  uVar12 = ((long)plVar19 >> 3) * -0x5555555555555555 + 1;
  if (uVar12 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar15 = lVar11 * 0x5555555555555556;
    if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
      uVar15 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar15 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar15 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_109489abc();
    }
    puVar2 = (undefined8 *)((long)plVar7 + (long)plVar19);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    plStack_58 = plVar7;
    plStack_50 = puVar2;
    plStack_48 = puVar2;
    plStack_40 = plVar7 + uVar15 * 3;
    FUN_109400904(puVar2,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    lVar11 = *param_1;
    lVar20 = (long)puVar2 - (param_1[1] - lVar11);
    _memcpy(lVar20);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar20;
    param_1[1] = (long)(puVar2 + 3);
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar7 + uVar15 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010737fdf4(&plStack_58);
    auVar25._8_8_ = lVar11;
    auVar25._0_8_ = puVar2 + 3;
    return auVar25;
  }
  FUN_109489aa8();
  func_0x00010737fdf4(&plStack_58);
  __Unwind_Resume(param_1);
  pcStack_68 = FUN_109489aa8;
  plVar7 = (long *)&DAT_10f62a4d8;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_78 = FUN_109489abc;
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar11 = (long)param_2 * 0x18;
    puStack_80 = (undefined1 *)&puStack_70;
    __Znwm(lVar11);
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = lVar11;
    return auVar26;
  }
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x000104c4f740();
  pcStack_98 = FUN_109489b00;
  plVar8 = plVar7;
  plVar13 = param_2;
  ppuStack_a0 = &puStack_80;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar21 = (long *)plVar7[1];
  if (plVar21 > param_2 || param_2 == plVar21) {
    if (plVar21 <= param_2) {
LAB_109489bc0:
      auVar27._8_8_ = plVar13;
      auVar27._0_8_ = plVar8;
      return auVar27;
    }
    plVar8 = (long *)(long)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
    if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (plVar21 <= param_2) goto LAB_109489bc0;
  }
  pplVar5 = (long **)&stack0xffffffffffffff50;
  puVar6 = &stack0xffffffffffffff50;
  pppuVar23 = &ppuStack_a0;
  plVar8 = param_2;
  if (param_2 == (long *)0x0) {
    lVar11 = *plVar7;
    *plVar7 = 0;
    if (lVar11 != 0) {
      __ZdlPv();
      plVar8 = param_2;
    }
    plVar7[1] = 0;
LAB_109489cfc:
    auVar28._8_8_ = plVar8;
    auVar28._0_8_ = lVar11;
    return auVar28;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar20 = (long)param_2 << 3;
    __Znwm();
    lVar11 = *plVar7;
    *plVar7 = lVar20;
    if (lVar11 != 0) {
      __ZdlPv();
    }
    plVar19 = (long *)0x0;
    plVar7[1] = (long)param_2;
    do {
      *(undefined8 *)(*plVar7 + (long)plVar19 * 8) = 0;
      plVar19 = (long *)((long)plVar19 + 1);
    } while (param_2 != plVar19);
    plVar19 = (long *)plVar7[2];
    if (plVar19 != (long *)0x0) {
      plVar13 = (long *)plVar19[1];
      uVar12 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar12) == 0) {
        plVar13 = (long *)((ulong)plVar13 & uVar12);
      }
      else if (param_2 <= plVar13) {
        uVar15 = 0;
        if (param_2 != (long *)0x0) {
          uVar15 = (ulong)plVar13 / (ulong)param_2;
        }
        plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
      }
      *(long **)(*plVar7 + (long)plVar13 * 8) = plVar7 + 2;
      plVar21 = (long *)*plVar19;
      while (plVar21 != (long *)0x0) {
        plVar16 = (long *)plVar21[1];
        if (((ulong)param_2 & uVar12) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar12);
        }
        else if (param_2 <= plVar16) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar16 / (ulong)param_2;
          }
          plVar16 = (long *)((long)plVar16 - uVar15 * (long)param_2);
        }
        plVar18 = plVar21;
        if (plVar16 != plVar13) {
          lVar20 = *plVar7;
          if (*(long *)(lVar20 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar20 + (long)plVar16 * 8) = plVar19;
            plVar13 = plVar16;
          }
          else {
            *plVar19 = *plVar21;
            *plVar21 = **(undefined8 **)(lVar20 + (long)plVar16 * 8);
            **(long **)(lVar20 + (long)plVar16 * 8) = (long)plVar21;
            plVar18 = plVar19;
          }
        }
        plVar19 = plVar18;
        plVar21 = (long *)*plVar18;
      }
    }
    goto LAB_109489cfc;
  }
  plVar16 = plVar7;
  plVar13 = param_2;
  func_0x000104c4f740();
  plStack_138 = (long *)CONCAT44(plStack_138._4_4_,(int)param_5);
  plVar18 = plVar13 + -1;
  plStack_148 = plVar13 + -2;
  plStack_150 = plVar13 + -3;
  plVar14 = (long *)((long)plVar13 - (long)plVar16 >> 3);
  plVar21 = plVar16;
  plVar8 = plVar13;
  plVar10 = param_3;
  plStack_140 = plVar18;
  plStack_130 = plVar13;
  plStack_118 = param_3;
  if ((long)plVar14 - 2U == 0 || (long)plVar14 < 2) {
    if (plVar14 < (long *)0x2) goto LAB_10948a780;
    if (plVar14 == (long *)0x2) {
      plVar19 = (long *)plVar13[-1];
      unaff_x22 = (long *)*plVar16;
      plVar22 = (long *)*param_3;
      plVar18 = plVar22;
      plVar8 = plVar19;
      func_0x000109487ba4();
      param_2 = plVar16;
      unaff_x27 = plVar16;
      unaff_x28 = param_3;
      if ((plVar18 == (long *)0x0) ||
         (plVar21 = plVar22, plVar8 = unaff_x22, func_0x000109487ba4(), param_2 = plVar18,
         plVar21 == (long *)0x0)) {
LAB_10948a7a0:
        plVar21 = (long *)&UNK_10f639994;
        uVar24 = 0x10948a7ac;
        FUN_109262df8();
        pplVar5 = &plStack_150;
        plVar18 = plVar10;
        param_3 = param_4;
        unaff_x23 = plVar22;
        unaff_x24 = plVar13;
        pppuVar23 = (undefined1 ***)&stack0xffffffffffffff40;
        goto SUB_10948a7ac;
      }
      if ((int)plVar18[3] < (int)plVar21[3]) {
        *plVar16 = (long)plVar19;
        plVar13[-1] = (long)unaff_x22;
      }
      goto LAB_10948a780;
    }
  }
  else {
    if (plVar14 == (long *)0x3) {
      plVar8 = plVar16 + 1;
      uVar24 = 0x109489d0c;
      goto SUB_10948a7ac;
    }
    if (plVar14 == (long *)0x4) {
      plVar13 = plVar16 + 1;
      plVar14 = plVar16 + 2;
      uVar24 = 0x109489d0c;
      plVar10 = plVar18;
      goto SUB_10948a914;
    }
    if (plVar14 == (long *)0x5) {
      plVar13 = plVar16 + 1;
      plVar14 = plVar16 + 2;
      unaff_x23 = plVar16 + 3;
      puVar6 = &stack0xfffffffffffffef0;
      pppuVar23 = (undefined1 ***)&stack0xffffffffffffff40;
      uVar24 = 0x10948aa88;
      plVar10 = unaff_x23;
      plVar7 = plVar13;
      param_2 = plVar16;
      plVar19 = param_3;
      unaff_x22 = plVar14;
      unaff_x24 = plVar18;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)plVar14 < 0x18) {
    plVar19 = plVar16 + 1;
    if (((ulong)param_5 & 1) == 0) {
      unaff_x27 = plVar16;
      if (plVar16 != plVar13 && plVar19 != plVar13) {
        do {
          plVar7 = plVar19;
          plVar19 = (long *)unaff_x27[1];
          unaff_x25 = (long *)*param_3;
          plVar18 = unaff_x25;
          plVar8 = plVar19;
          func_0x000109487ba4();
          param_2 = plVar16;
          plVar22 = unaff_x23;
          unaff_x28 = param_3;
          if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (long *)*unaff_x27;
          plVar21 = unaff_x25;
          plVar8 = unaff_x22;
          func_0x000109487ba4();
          plVar22 = plVar18;
          if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
          param_2 = plVar7;
          unaff_x23 = plVar18;
          if ((int)plVar18[3] < (int)plVar21[3]) {
            do {
              *param_2 = (long)unaff_x22;
              plVar13 = (long *)*param_3;
              unaff_x23 = plVar13;
              plVar8 = plVar19;
              func_0x000109487ba4();
              plVar22 = plVar18;
              if (unaff_x23 == (long *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (long *)param_2[-2];
              plVar21 = plVar13;
              plVar8 = unaff_x22;
              func_0x000109487ba4();
              plVar22 = unaff_x23;
              if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
              plVar16 = param_2 + -1;
              param_2 = plVar16;
              plVar18 = unaff_x23;
            } while ((int)unaff_x23[3] < (int)plVar21[3]);
            *plVar16 = (long)plVar19;
            plVar13 = plStack_130;
          }
          plVar19 = plVar7 + 1;
          unaff_x27 = plVar7;
        } while (plVar7 + 1 != plVar13);
      }
    }
    else if (plVar16 != plVar13 && plVar19 != plVar13) {
      plVar7 = (long *)0x0;
      param_2 = plVar16;
      do {
        unaff_x26 = plVar19;
        plVar19 = (long *)param_2[1];
        unaff_x25 = (long *)*param_3;
        plVar18 = unaff_x25;
        plVar8 = plVar19;
        func_0x000109487ba4();
        plVar22 = unaff_x23;
        unaff_x27 = plVar16;
        unaff_x28 = param_3;
        if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (long *)*param_2;
        plVar21 = unaff_x25;
        plVar8 = unaff_x22;
        func_0x000109487ba4();
        plVar22 = plVar18;
        if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
        param_2 = plVar7;
        if ((int)plVar18[3] < (int)plVar21[3]) {
          do {
            plVar13 = (long *)((long)plVar16 + (long)param_2);
            plVar13[1] = (long)unaff_x22;
            plVar14 = plVar16;
            if (param_2 == (long *)0x0) goto LAB_10948a330;
            unaff_x25 = (long *)*param_3;
            plVar14 = unaff_x25;
            plVar8 = plVar19;
            func_0x000109487ba4();
            plVar22 = plVar18;
            if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (long *)plVar13[-1];
            plVar21 = unaff_x25;
            plVar8 = unaff_x22;
            func_0x000109487ba4();
            plVar22 = plVar14;
            if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
            param_2 = param_2 + -1;
            plVar18 = plVar14;
          } while ((int)plVar14[3] < (int)plVar21[3]);
          plVar14 = (long *)((long)plVar16 + (long)param_2 + 8);
LAB_10948a330:
          *plVar14 = (long)plVar19;
          plVar13 = plStack_130;
        }
        plVar7 = plVar7 + 1;
        plVar19 = unaff_x26 + 1;
        param_2 = unaff_x26;
        unaff_x23 = plVar18;
      } while (unaff_x26 + 1 != plVar13);
    }
  }
  else {
    plStack_128 = plVar16;
    if (param_4 != (long *)0x0) {
      plVar19 = plVar16 + ((ulong)plVar14 >> 1);
      if (plVar14 < (long *)0x81) {
        uVar24 = 0x109489e3c;
        pplVar5 = &plStack_150;
        plVar21 = plVar19;
        plVar8 = plVar16;
        param_2 = plVar16;
        unaff_x24 = plVar13;
        unaff_x27 = plVar16;
        unaff_x28 = param_3;
        pppuVar23 = (undefined1 ***)&stack0xffffffffffffff40;
      }
      else {
        uVar24 = 0x109489dd4;
        pplVar5 = &plStack_150;
        plVar8 = plVar19;
        param_2 = plVar16;
        unaff_x24 = plVar13;
        unaff_x27 = plVar16;
        unaff_x28 = param_3;
        pppuVar23 = (undefined1 ***)&stack0xffffffffffffff40;
      }
SUB_10948a7ac:
      do {
        puVar6 = (undefined1 *)((long)pplVar5 + -0x60);
        *(long **)((long)pplVar5 + -0x60) = unaff_x28;
        *(long **)((long)pplVar5 + -0x58) = unaff_x27;
        *(long **)((long)pplVar5 + -0x50) = unaff_x26;
        *(long **)((long)pplVar5 + -0x48) = unaff_x25;
        *(long **)((long)pplVar5 + -0x40) = unaff_x24;
        *(long **)((long)pplVar5 + -0x38) = unaff_x23;
        *(long **)((long)pplVar5 + -0x30) = unaff_x22;
        *(long **)((long)pplVar5 + -0x28) = plVar19;
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = plVar7;
        *(undefined1 ****)((long)pplVar5 + -0x10) = pppuVar23;
        *(undefined8 *)((long)pplVar5 + -8) = uVar24;
        pppuVar23 = (undefined1 ***)((long)pplVar5 + -0x10);
        unaff_x24 = (long *)*plVar8;
        unaff_x22 = (long *)*plVar21;
        unaff_x26 = (long *)*param_3;
        plVar19 = unaff_x26;
        plVar13 = unaff_x24;
        plVar14 = plVar18;
        plVar10 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (plVar19 != (long *)0x0) {
          uVar3 = *(uint *)(plVar19 + 3);
          unaff_x27 = (long *)(ulong)uVar3;
          plVar19 = unaff_x26;
          plVar13 = unaff_x22;
          func_0x000109487ba4();
          if (plVar19 != (long *)0x0) {
            uVar4 = *(uint *)(plVar19 + 3);
            unaff_x28 = (long *)(ulong)uVar4;
            unaff_x25 = (long *)*plVar18;
            plVar19 = unaff_x26;
            plVar13 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar3 < (int)uVar4) {
              if (plVar19 != (long *)0x0) {
                if ((int)plVar19[3] < (int)uVar3) {
                  *plVar21 = (long)unaff_x25;
                  goto LAB_10948a8e8;
                }
                *plVar21 = (long)unaff_x24;
                *plVar8 = (long)unaff_x22;
                plVar21 = (long *)*plVar18;
                unaff_x24 = (long *)*param_3;
                plVar7 = unaff_x24;
                plVar13 = plVar21;
                func_0x000109487ba4();
                if ((plVar7 != (long *)0x0) &&
                   (plVar19 = unaff_x24, plVar13 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = plVar7, plVar19 != (long *)0x0)) {
                  if ((int)plVar7[3] < (int)plVar19[3]) {
                    *plVar8 = (long)plVar21;
LAB_10948a8e8:
                    *plVar18 = (long)unaff_x22;
                  }
LAB_10948a8ec:
                  auVar30._8_8_ = plVar13;
                  auVar30._0_8_ = plVar19;
                  return auVar30;
                }
              }
            }
            else if (plVar19 != (long *)0x0) {
              if ((int)uVar3 <= (int)plVar19[3]) goto LAB_10948a8ec;
              *plVar8 = (long)unaff_x25;
              *plVar18 = (long)unaff_x24;
              plVar18 = (long *)*plVar8;
              unaff_x22 = (long *)*plVar21;
              unaff_x24 = (long *)*param_3;
              plVar7 = unaff_x24;
              plVar13 = plVar18;
              func_0x000109487ba4();
              if ((plVar7 != (long *)0x0) &&
                 (plVar19 = unaff_x24, plVar13 = unaff_x22, func_0x000109487ba4(),
                 unaff_x23 = plVar7, plVar19 != (long *)0x0)) {
                if ((int)plVar7[3] < (int)plVar19[3]) {
                  *plVar21 = (long)plVar18;
                  *plVar8 = (long)unaff_x22;
                }
                goto LAB_10948a8ec;
              }
            }
          }
        }
        plVar16 = (long *)&UNK_10f639994;
        uVar24 = 0x10948a914;
        FUN_109262df8();
        param_3 = param_5;
        plVar7 = plVar8;
        param_2 = plVar18;
        plVar19 = plVar21;
SUB_10948a914:
        *(long **)(puVar6 + -0x60) = unaff_x28;
        *(long **)(puVar6 + -0x58) = unaff_x27;
        *(long **)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(long **)(puVar6 + -0x40) = unaff_x24;
        *(long **)(puVar6 + -0x38) = unaff_x23;
        *(long **)(puVar6 + -0x30) = unaff_x22;
        *(long **)(puVar6 + -0x28) = plVar19;
        *(long **)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = plVar7;
        *(undefined1 ****)(puVar6 + -0x10) = pppuVar23;
        *(undefined8 *)(puVar6 + -8) = uVar24;
        uVar24 = 0x10948a94c;
        pplVar5 = (long **)(puVar6 + -0x60);
        plVar21 = plVar16;
        plVar8 = plVar13;
        plVar18 = plVar14;
        param_5 = param_3;
        plVar7 = plVar13;
        param_2 = plVar16;
        plVar19 = param_3;
        unaff_x22 = plVar14;
        unaff_x23 = plVar10;
        pppuVar23 = (undefined1 ***)(puVar6 + -0x10);
      } while( true );
    }
    if (plVar16 != plVar13) {
      plVar18 = (long *)((long)plVar14 - 2U >> 1);
      plVar21 = unaff_x25;
      unaff_x27 = plVar16;
      plStack_138 = plVar18;
      plStack_120 = plVar14;
      do {
        plVar7 = plVar18;
        if ((long)plVar18 <= (long)plStack_138) {
          unaff_x26 = (long *)((long)plVar18 << 1 | 1);
          plVar7 = unaff_x27 + (long)unaff_x26;
          param_2 = (long *)((long)plVar18 * 2 + 2);
          plVar16 = (long *)*plVar7;
          plVar19 = plVar16;
          unaff_x25 = plVar21;
          plStack_148 = plVar18;
          if ((long)param_2 < (long)plVar14) {
            unaff_x23 = (long *)*param_3;
            plVar21 = unaff_x23;
            plVar8 = plVar16;
            func_0x000109487ba4();
            plVar22 = unaff_x23;
            unaff_x28 = param_3;
            if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
            plVar13 = plVar7 + 1;
            unaff_x25 = (long *)*plVar13;
            plVar14 = unaff_x23;
            plVar8 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar21;
            if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
            plVar18 = plVar13;
            plVar19 = unaff_x25;
            plVar13 = plStack_130;
            if ((int)plVar14[3] <= (int)plVar21[3]) {
              plVar18 = plVar7;
              plVar19 = plVar16;
              param_2 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (long *)*param_3;
            plVar18 = plVar7;
            param_2 = unaff_x26;
          }
          unaff_x26 = param_2;
          param_2 = unaff_x27 + (long)plStack_148;
          unaff_x22 = (long *)*param_2;
          plVar21 = unaff_x23;
          plVar8 = plVar19;
          func_0x000109487ba4();
          plVar7 = plVar18;
          plVar22 = unaff_x23;
          unaff_x28 = param_3;
          if ((plVar21 == (long *)0x0) ||
             (plVar16 = unaff_x23, plVar8 = unaff_x22, func_0x000109487ba4(), unaff_x25 = plVar21,
             plVar16 == (long *)0x0)) goto LAB_10948a7a0;
          plVar7 = plStack_148;
          plVar14 = plStack_120;
          plVar22 = unaff_x22;
          if ((int)plVar16[3] <= (int)plVar21[3]) {
            do {
              plStack_140 = plVar22;
              unaff_x27 = plVar18;
              *param_2 = (long)plVar19;
              if ((long)plStack_138 < (long)unaff_x26) break;
              param_2 = (long *)((long)unaff_x26 << 1 | 1);
              plVar7 = plStack_128 + (long)param_2;
              unaff_x22 = (long *)((long)unaff_x26 * 2 + 2);
              plVar16 = (long *)*plVar7;
              plVar19 = plVar16;
              if ((long)unaff_x22 < (long)plStack_120) {
                unaff_x23 = (long *)*param_3;
                plVar14 = unaff_x23;
                plVar8 = plVar16;
                func_0x000109487ba4();
                plVar22 = unaff_x23;
                unaff_x25 = plVar21;
                if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
                plVar13 = plVar7 + 1;
                unaff_x26 = (long *)*plVar13;
                plVar21 = unaff_x23;
                plVar8 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = plVar14;
                if (plVar21 == (long *)0x0) goto LAB_10948a7a0;
                plVar18 = plVar13;
                plVar19 = unaff_x26;
                plVar13 = plStack_130;
                unaff_x26 = unaff_x22;
                if ((int)plVar21[3] <= (int)plVar14[3]) {
                  plVar18 = plVar7;
                  plVar19 = plVar16;
                  unaff_x26 = param_2;
                }
              }
              else {
                unaff_x23 = (long *)*param_3;
                plVar18 = plVar7;
                plVar14 = plVar21;
                unaff_x26 = param_2;
              }
              plVar21 = unaff_x23;
              plVar8 = plVar19;
              func_0x000109487ba4();
              unaff_x22 = plStack_140;
              plVar7 = plVar18;
              plVar22 = unaff_x23;
              unaff_x25 = plVar14;
              if ((plVar21 == (long *)0x0) ||
                 (plVar16 = unaff_x23, plVar8 = plStack_140, func_0x000109487ba4(),
                 unaff_x25 = plVar21, plVar16 == (long *)0x0)) goto LAB_10948a7a0;
              param_2 = unaff_x27;
              plVar22 = plStack_140;
            } while ((int)plVar16[3] <= (int)plVar21[3]);
            *unaff_x27 = (long)unaff_x22;
            plVar7 = plStack_148;
            plVar14 = plStack_120;
            unaff_x27 = plStack_128;
          }
        }
        plVar18 = (long *)((long)plVar7 + -1);
      } while (plVar7 != (long *)0x0);
      do {
        plVar21 = (long *)0x0;
        plStack_138 = (long *)*unaff_x27;
        plVar18 = (long *)((long)plVar14 - 2U >> 1);
        plVar17 = unaff_x27;
        plStack_130 = plVar13;
        plStack_120 = plVar18;
        do {
          unaff_x25 = plVar17 + (long)plVar21;
          param_2 = unaff_x25 + 1;
          plVar19 = (long *)*param_2;
          unaff_x26 = (long *)((long)plVar21 << 1 | 1);
          plVar13 = (long *)((long)plVar21 * 2 + 2);
          plVar21 = unaff_x26;
          plVar7 = param_2;
          plVar22 = plVar19;
          if ((long)plVar13 < (long)plVar14) {
            unaff_x23 = (long *)*param_3;
            plVar9 = unaff_x23;
            plVar8 = plVar19;
            func_0x000109487ba4();
            plVar7 = plVar17;
            plVar22 = unaff_x23;
            unaff_x27 = plVar14;
            unaff_x28 = param_3;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (long *)*unaff_x28;
            plVar16 = unaff_x23;
            plVar8 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar9;
            if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
            plVar21 = plVar13;
            plVar18 = plStack_120;
            plVar7 = unaff_x28;
            plVar22 = unaff_x25;
            param_3 = plStack_118;
            if ((int)plVar16[3] <= (int)plVar9[3]) {
              plVar21 = unaff_x26;
              plVar7 = param_2;
              plVar22 = plVar19;
            }
          }
          *plVar17 = (long)plVar22;
          plVar17 = plVar7;
        } while ((long)plVar21 <= (long)plVar18);
        plVar13 = plStack_130 + -1;
        if (plVar7 == plVar13) {
          *plVar7 = (long)plStack_138;
        }
        else {
          *plVar7 = *plVar13;
          *plVar13 = (long)plStack_138;
          lVar11 = (long)plVar7 + (8 - (long)plStack_128) >> 3;
          if (1 < lVar11) {
            unaff_x26 = (long *)(lVar11 - 2U >> 1);
            unaff_x27 = plStack_128 + (long)unaff_x26;
            unaff_x22 = (long *)*unaff_x27;
            plVar19 = (long *)*plVar7;
            unaff_x25 = (long *)*param_3;
            plVar21 = unaff_x25;
            plVar8 = unaff_x22;
            plStack_120 = plVar14;
            func_0x000109487ba4();
            param_2 = plVar7;
            plVar22 = unaff_x23;
            unaff_x28 = param_3;
            if ((plVar21 == (long *)0x0) ||
               (plVar16 = unaff_x25, plVar8 = plVar19, func_0x000109487ba4(), plVar22 = plVar21,
               plVar16 == (long *)0x0)) goto LAB_10948a7a0;
            plVar14 = plStack_120;
            unaff_x23 = plVar21;
            if ((int)plVar21[3] < (int)plVar16[3]) {
              do {
                plVar7 = unaff_x27;
                *param_2 = (long)unaff_x22;
                unaff_x23 = plVar21;
                if (unaff_x26 == (long *)0x0) break;
                unaff_x26 = (long *)((long)unaff_x26 - 1U >> 1);
                unaff_x27 = plStack_128 + (long)unaff_x26;
                unaff_x22 = (long *)*unaff_x27;
                unaff_x25 = (long *)*param_3;
                unaff_x23 = unaff_x25;
                plVar8 = unaff_x22;
                func_0x000109487ba4();
                plVar22 = plVar21;
                if ((unaff_x23 == (long *)0x0) ||
                   (plVar16 = unaff_x25, plVar8 = plVar19, func_0x000109487ba4(),
                   plVar22 = unaff_x23, plVar16 == (long *)0x0)) goto LAB_10948a7a0;
                param_2 = plVar7;
                plVar21 = unaff_x23;
              } while ((int)unaff_x23[3] < (int)plVar16[3]);
              *plVar7 = (long)plVar19;
              plVar14 = plStack_120;
            }
          }
        }
        bVar1 = 2 < (long)plVar14;
        plVar21 = plVar16;
        plVar14 = (long *)((long)plVar14 + -1);
        unaff_x27 = plStack_128;
      } while (bVar1);
    }
  }
LAB_10948a780:
  auVar29._8_8_ = plVar8;
  auVar29._0_8_ = plVar21;
  return auVar29;
}



/* Entry: 109489aa8; end: 109489abb;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x00010948a028) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

void FUN_109489aa8(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x21;
  long *plVar18;
  long *plVar19;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar20;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 ***pppuVar21;
  undefined8 uVar22;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar16 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  pcStack_18 = FUN_109489abc;
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm((long)param_2 * 0x18);
    return;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f740();
  pcStack_38 = FUN_109489b00;
  ppuStack_40 = &puStack_20;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar18 = (long *)plVar16[1];
  if (plVar18 > param_2 || param_2 == plVar18) {
    if (plVar18 <= param_2) {
      return;
    }
    plVar13 = (long *)(long)((float)(ulong)plVar16[3] / *(float *)(plVar16 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar13) {
      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
    }
    if (param_2 <= plVar13) {
      param_2 = plVar13;
    }
    if (plVar18 <= param_2) {
      return;
    }
  }
  pplVar5 = (long **)&stack0xffffffffffffffb0;
  puVar6 = &stack0xffffffffffffffb0;
  pppuVar21 = &ppuStack_40;
  if (param_2 == (long *)0x0) {
    lVar7 = *plVar16;
    *plVar16 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    plVar16[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm();
    lVar8 = *plVar16;
    *plVar16 = lVar7;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    plVar16[1] = (long)param_2;
    do {
      *(undefined8 *)(*plVar16 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (param_2 != plVar18);
    plVar18 = (long *)plVar16[2];
    if (plVar18 == (long *)0x0) {
      return;
    }
    plVar13 = (long *)plVar18[1];
    uVar12 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar12) == 0) {
      plVar13 = (long *)((ulong)plVar13 & uVar12);
    }
    else if (param_2 <= plVar13) {
      uVar4 = 0;
      if (param_2 != (long *)0x0) {
        uVar4 = (ulong)plVar13 / (ulong)param_2;
      }
      plVar13 = (long *)((long)plVar13 - uVar4 * (long)param_2);
    }
    *(long **)(*plVar16 + (long)plVar13 * 8) = plVar16 + 2;
    plVar14 = (long *)*plVar18;
    while (plVar14 != (long *)0x0) {
      plVar15 = (long *)plVar14[1];
      if (((ulong)param_2 & uVar12) == 0) {
        plVar15 = (long *)((ulong)plVar15 & uVar12);
      }
      else if (param_2 <= plVar15) {
        uVar4 = 0;
        if (param_2 != (long *)0x0) {
          uVar4 = (ulong)plVar15 / (ulong)param_2;
        }
        plVar15 = (long *)((long)plVar15 - uVar4 * (long)param_2);
      }
      plVar17 = plVar14;
      if (plVar15 != plVar13) {
        lVar7 = *plVar16;
        if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
          *(long **)(lVar7 + (long)plVar15 * 8) = plVar18;
          plVar13 = plVar15;
        }
        else {
          *plVar18 = *plVar14;
          *plVar14 = **(undefined8 **)(lVar7 + (long)plVar15 * 8);
          **(long **)(lVar7 + (long)plVar15 * 8) = (long)plVar14;
          plVar17 = plVar18;
        }
      }
      plVar18 = plVar17;
      plVar14 = (long *)*plVar17;
    }
    return;
  }
  plVar14 = plVar16;
  plVar18 = param_2;
  func_0x000104c4f740();
  plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,(int)param_5);
  plVar17 = plVar18 + -1;
  plStack_e8 = plVar18 + -2;
  plStack_f0 = plVar18 + -3;
  plVar15 = (long *)((long)plVar18 - (long)plVar14 >> 3);
  plVar13 = plVar14;
  plVar11 = param_3;
  plStack_e0 = plVar17;
  plStack_d0 = plVar18;
  plStack_b8 = param_3;
  if ((long)plVar15 - 2U == 0 || (long)plVar15 < 2) {
    if (plVar15 < (long *)0x2) {
      return;
    }
    if (plVar15 == (long *)0x2) {
      unaff_x21 = (long *)plVar18[-1];
      unaff_x22 = (long *)*plVar14;
      plVar20 = (long *)*param_3;
      plVar13 = plVar20;
      plVar10 = unaff_x21;
      func_0x000109487ba4();
      param_2 = plVar14;
      plVar15 = plVar14;
      unaff_x28 = param_3;
      if ((plVar13 != (long *)0x0) &&
         (plVar17 = plVar20, plVar10 = unaff_x22, func_0x000109487ba4(), param_2 = plVar13,
         plVar17 != (long *)0x0)) {
        if ((int)plVar17[3] <= (int)plVar13[3]) {
          return;
        }
        *plVar14 = (long)unaff_x21;
        plVar18[-1] = (long)unaff_x22;
        return;
      }
LAB_10948a7a0:
      plVar13 = (long *)&UNK_10f639994;
      uVar22 = 0x10948a7ac;
      FUN_109262df8();
      pplVar5 = &plStack_f0;
      plVar17 = plVar11;
      param_3 = param_4;
      unaff_x23 = plVar20;
      unaff_x24 = plVar18;
      unaff_x27 = plVar15;
      pppuVar21 = (undefined1 ***)&stack0xffffffffffffffa0;
      goto SUB_10948a7ac;
    }
  }
  else {
    if (plVar15 == (long *)0x3) {
      plVar10 = plVar14 + 1;
      uVar22 = 0x109489d0c;
      goto SUB_10948a7ac;
    }
    if (plVar15 == (long *)0x4) {
      plVar18 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      uVar22 = 0x109489d0c;
      plVar11 = plVar17;
      goto SUB_10948a914;
    }
    if (plVar15 == (long *)0x5) {
      plVar18 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      unaff_x23 = plVar14 + 3;
      puVar6 = &stack0xffffffffffffff50;
      pppuVar21 = (undefined1 ***)&stack0xffffffffffffffa0;
      uVar22 = 0x10948aa88;
      plVar11 = unaff_x23;
      plVar16 = plVar18;
      param_2 = plVar14;
      unaff_x21 = param_3;
      unaff_x22 = plVar15;
      unaff_x24 = plVar17;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)plVar15 < 0x18) {
    plVar13 = plVar14 + 1;
    if (((ulong)param_5 & 1) == 0) {
      plVar15 = plVar14;
      if (plVar14 != plVar18 && plVar13 != plVar18) {
        do {
          plVar16 = plVar13;
          unaff_x21 = (long *)plVar15[1];
          unaff_x25 = (long *)*param_3;
          plVar13 = unaff_x25;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_2 = plVar14;
          plVar20 = unaff_x23;
          unaff_x28 = param_3;
          if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (long *)*plVar15;
          plVar17 = unaff_x25;
          plVar10 = unaff_x22;
          func_0x000109487ba4();
          plVar20 = plVar13;
          if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
          param_2 = plVar16;
          unaff_x23 = plVar13;
          if ((int)plVar13[3] < (int)plVar17[3]) {
            do {
              *param_2 = (long)unaff_x22;
              plVar18 = (long *)*param_3;
              unaff_x23 = plVar18;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              plVar20 = plVar13;
              if (unaff_x23 == (long *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (long *)param_2[-2];
              plVar17 = plVar18;
              plVar10 = unaff_x22;
              func_0x000109487ba4();
              plVar20 = unaff_x23;
              if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
              plVar14 = param_2 + -1;
              param_2 = plVar14;
              plVar13 = unaff_x23;
            } while ((int)unaff_x23[3] < (int)plVar17[3]);
            *plVar14 = (long)unaff_x21;
            plVar18 = plStack_d0;
          }
          plVar13 = plVar16 + 1;
          plVar15 = plVar16;
        } while (plVar16 + 1 != plVar18);
      }
    }
    else if (plVar14 != plVar18 && plVar13 != plVar18) {
      plVar16 = (long *)0x0;
      param_2 = plVar14;
      do {
        unaff_x26 = plVar13;
        unaff_x21 = (long *)param_2[1];
        unaff_x25 = (long *)*param_3;
        plVar17 = unaff_x25;
        plVar10 = unaff_x21;
        func_0x000109487ba4();
        plVar20 = unaff_x23;
        plVar15 = plVar14;
        unaff_x28 = param_3;
        if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (long *)*param_2;
        plVar13 = unaff_x25;
        plVar10 = unaff_x22;
        func_0x000109487ba4();
        plVar20 = plVar17;
        if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
        param_2 = plVar16;
        if ((int)plVar17[3] < (int)plVar13[3]) {
          do {
            plVar18 = (long *)((long)plVar14 + (long)param_2);
            plVar18[1] = (long)unaff_x22;
            plVar13 = plVar14;
            if (param_2 == (long *)0x0) goto LAB_10948a330;
            unaff_x25 = (long *)*param_3;
            plVar13 = unaff_x25;
            plVar10 = unaff_x21;
            func_0x000109487ba4();
            plVar20 = plVar17;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (long *)plVar18[-1];
            plVar19 = unaff_x25;
            plVar10 = unaff_x22;
            func_0x000109487ba4();
            plVar20 = plVar13;
            if (plVar19 == (long *)0x0) goto LAB_10948a7a0;
            param_2 = param_2 + -1;
            plVar17 = plVar13;
          } while ((int)plVar13[3] < (int)plVar19[3]);
          plVar13 = (long *)((long)plVar14 + (long)param_2 + 8);
LAB_10948a330:
          *plVar13 = (long)unaff_x21;
          plVar18 = plStack_d0;
        }
        plVar16 = plVar16 + 1;
        plVar13 = unaff_x26 + 1;
        param_2 = unaff_x26;
        unaff_x23 = plVar17;
      } while (unaff_x26 + 1 != plVar18);
    }
  }
  else {
    plStack_c8 = plVar14;
    if (param_4 != (long *)0x0) {
      unaff_x21 = plVar14 + ((ulong)plVar15 >> 1);
      unaff_x27 = plVar14;
      if (plVar15 < (long *)0x81) {
        uVar22 = 0x109489e3c;
        pplVar5 = &plStack_f0;
        plVar13 = unaff_x21;
        plVar10 = plVar14;
        param_2 = plVar14;
        unaff_x24 = plVar18;
        unaff_x28 = param_3;
        pppuVar21 = (undefined1 ***)&stack0xffffffffffffffa0;
      }
      else {
        uVar22 = 0x109489dd4;
        pplVar5 = &plStack_f0;
        plVar10 = unaff_x21;
        param_2 = plVar14;
        unaff_x24 = plVar18;
        unaff_x28 = param_3;
        pppuVar21 = (undefined1 ***)&stack0xffffffffffffffa0;
      }
SUB_10948a7ac:
      do {
        puVar6 = (undefined1 *)((long)pplVar5 + -0x60);
        *(long **)((long)pplVar5 + -0x60) = unaff_x28;
        *(long **)((long)pplVar5 + -0x58) = unaff_x27;
        *(long **)((long)pplVar5 + -0x50) = unaff_x26;
        *(long **)((long)pplVar5 + -0x48) = unaff_x25;
        *(long **)((long)pplVar5 + -0x40) = unaff_x24;
        *(long **)((long)pplVar5 + -0x38) = unaff_x23;
        *(long **)((long)pplVar5 + -0x30) = unaff_x22;
        *(long **)((long)pplVar5 + -0x28) = unaff_x21;
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = plVar16;
        *(undefined1 ****)((long)pplVar5 + -0x10) = pppuVar21;
        *(undefined8 *)((long)pplVar5 + -8) = uVar22;
        pppuVar21 = (undefined1 ***)((long)pplVar5 + -0x10);
        unaff_x24 = (long *)*plVar10;
        unaff_x22 = (long *)*plVar13;
        unaff_x26 = (long *)*param_3;
        plVar16 = unaff_x26;
        plVar18 = unaff_x24;
        plVar15 = plVar17;
        plVar11 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (plVar16 != (long *)0x0) {
          uVar2 = *(uint *)(plVar16 + 3);
          unaff_x27 = (long *)(ulong)uVar2;
          plVar16 = unaff_x26;
          plVar18 = unaff_x22;
          func_0x000109487ba4();
          if (plVar16 != (long *)0x0) {
            uVar3 = *(uint *)(plVar16 + 3);
            unaff_x28 = (long *)(ulong)uVar3;
            unaff_x25 = (long *)*plVar17;
            plVar16 = unaff_x26;
            plVar18 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar2 < (int)uVar3) {
              if (plVar16 != (long *)0x0) {
                if ((int)plVar16[3] < (int)uVar2) {
                  *plVar13 = (long)unaff_x25;
                  goto LAB_10948a8e8;
                }
                *plVar13 = (long)unaff_x24;
                *plVar10 = (long)unaff_x22;
                plVar13 = (long *)*plVar17;
                unaff_x24 = (long *)*param_3;
                plVar16 = unaff_x24;
                plVar18 = plVar13;
                func_0x000109487ba4();
                if ((plVar16 != (long *)0x0) &&
                   (plVar14 = unaff_x24, plVar18 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = plVar16, plVar14 != (long *)0x0)) {
                  if ((int)plVar16[3] < (int)plVar14[3]) {
                    *plVar10 = (long)plVar13;
LAB_10948a8e8:
                    *plVar17 = (long)unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (plVar16 != (long *)0x0) {
              if ((int)uVar2 <= (int)plVar16[3]) {
                return;
              }
              *plVar10 = (long)unaff_x25;
              *plVar17 = (long)unaff_x24;
              plVar17 = (long *)*plVar10;
              unaff_x22 = (long *)*plVar13;
              unaff_x24 = (long *)*param_3;
              plVar16 = unaff_x24;
              plVar18 = plVar17;
              func_0x000109487ba4();
              if ((plVar16 != (long *)0x0) &&
                 (plVar14 = unaff_x24, plVar18 = unaff_x22, func_0x000109487ba4(),
                 unaff_x23 = plVar16, plVar14 != (long *)0x0)) {
                if ((int)plVar14[3] <= (int)plVar16[3]) {
                  return;
                }
                *plVar13 = (long)plVar17;
                *plVar10 = (long)unaff_x22;
                return;
              }
            }
          }
        }
        plVar14 = (long *)&UNK_10f639994;
        uVar22 = 0x10948a914;
        FUN_109262df8();
        param_3 = param_5;
        plVar16 = plVar10;
        param_2 = plVar17;
        unaff_x21 = plVar13;
SUB_10948a914:
        *(long **)(puVar6 + -0x60) = unaff_x28;
        *(long **)(puVar6 + -0x58) = unaff_x27;
        *(long **)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(long **)(puVar6 + -0x40) = unaff_x24;
        *(long **)(puVar6 + -0x38) = unaff_x23;
        *(long **)(puVar6 + -0x30) = unaff_x22;
        *(long **)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = plVar16;
        *(undefined1 ****)(puVar6 + -0x10) = pppuVar21;
        *(undefined8 *)(puVar6 + -8) = uVar22;
        uVar22 = 0x10948a94c;
        pplVar5 = (long **)(puVar6 + -0x60);
        plVar13 = plVar14;
        plVar10 = plVar18;
        plVar17 = plVar15;
        param_5 = param_3;
        plVar16 = plVar18;
        param_2 = plVar14;
        unaff_x21 = param_3;
        unaff_x22 = plVar15;
        unaff_x23 = plVar11;
        pppuVar21 = (undefined1 ***)(puVar6 + -0x10);
      } while( true );
    }
    if (plVar14 != plVar18) {
      plVar17 = (long *)((long)plVar15 - 2U >> 1);
      plVar13 = unaff_x25;
      plStack_d8 = plVar17;
      plStack_c0 = plVar15;
      do {
        plVar16 = plVar17;
        if ((long)plVar17 <= (long)plStack_d8) {
          unaff_x26 = (long *)((long)plVar17 << 1 | 1);
          plVar16 = plVar14 + (long)unaff_x26;
          param_2 = (long *)((long)plVar17 * 2 + 2);
          plVar19 = (long *)*plVar16;
          unaff_x21 = plVar19;
          unaff_x25 = plVar13;
          plStack_e8 = plVar17;
          if ((long)param_2 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar13 = unaff_x23;
            plVar10 = plVar19;
            func_0x000109487ba4();
            plVar20 = unaff_x23;
            plVar15 = plVar14;
            unaff_x28 = param_3;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            plVar18 = plVar16 + 1;
            unaff_x25 = (long *)*plVar18;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar13;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar17 = plVar18;
            unaff_x21 = unaff_x25;
            plVar18 = plStack_d0;
            if ((int)plVar9[3] <= (int)plVar13[3]) {
              plVar17 = plVar16;
              unaff_x21 = plVar19;
              param_2 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (long *)*param_3;
            plVar17 = plVar16;
            param_2 = unaff_x26;
          }
          unaff_x26 = param_2;
          param_2 = plVar14 + (long)plStack_e8;
          unaff_x22 = (long *)*param_2;
          plVar13 = unaff_x23;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          plVar16 = plVar17;
          plVar20 = unaff_x23;
          plVar15 = plVar14;
          unaff_x28 = param_3;
          if ((plVar13 == (long *)0x0) ||
             (plVar19 = unaff_x23, plVar10 = unaff_x22, func_0x000109487ba4(), unaff_x25 = plVar13,
             plVar19 == (long *)0x0)) goto LAB_10948a7a0;
          plVar16 = plStack_e8;
          plVar15 = plStack_c0;
          plVar10 = unaff_x22;
          if ((int)plVar19[3] <= (int)plVar13[3]) {
            do {
              plStack_e0 = plVar10;
              plVar15 = plVar17;
              *param_2 = (long)unaff_x21;
              if ((long)plStack_d8 < (long)unaff_x26) break;
              param_2 = (long *)((long)unaff_x26 << 1 | 1);
              plVar16 = plStack_c8 + (long)param_2;
              unaff_x22 = (long *)((long)unaff_x26 * 2 + 2);
              plVar14 = (long *)*plVar16;
              unaff_x21 = plVar14;
              if ((long)unaff_x22 < (long)plStack_c0) {
                unaff_x23 = (long *)*param_3;
                plVar19 = unaff_x23;
                plVar10 = plVar14;
                func_0x000109487ba4();
                plVar20 = unaff_x23;
                unaff_x25 = plVar13;
                if (plVar19 == (long *)0x0) goto LAB_10948a7a0;
                plVar18 = plVar16 + 1;
                unaff_x26 = (long *)*plVar18;
                plVar13 = unaff_x23;
                plVar10 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = plVar19;
                if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
                plVar17 = plVar18;
                unaff_x21 = unaff_x26;
                plVar18 = plStack_d0;
                unaff_x26 = unaff_x22;
                if ((int)plVar13[3] <= (int)plVar19[3]) {
                  plVar17 = plVar16;
                  unaff_x21 = plVar14;
                  unaff_x26 = param_2;
                }
              }
              else {
                unaff_x23 = (long *)*param_3;
                plVar17 = plVar16;
                plVar19 = plVar13;
                unaff_x26 = param_2;
              }
              plVar13 = unaff_x23;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              unaff_x22 = plStack_e0;
              plVar16 = plVar17;
              plVar20 = unaff_x23;
              unaff_x25 = plVar19;
              if ((plVar13 == (long *)0x0) ||
                 (plVar14 = unaff_x23, plVar10 = plStack_e0, func_0x000109487ba4(),
                 unaff_x25 = plVar13, plVar14 == (long *)0x0)) goto LAB_10948a7a0;
              param_2 = plVar15;
              plVar10 = plStack_e0;
            } while ((int)plVar14[3] <= (int)plVar13[3]);
            *plVar15 = (long)unaff_x22;
            plVar16 = plStack_e8;
            plVar15 = plStack_c0;
            plVar14 = plStack_c8;
          }
        }
        plVar17 = (long *)((long)plVar16 + -1);
      } while (plVar16 != (long *)0x0);
      do {
        plVar13 = (long *)0x0;
        plStack_d8 = (long *)*plVar14;
        plVar17 = (long *)((long)plVar15 - 2U >> 1);
        plStack_d0 = plVar18;
        plStack_c0 = plVar17;
        do {
          unaff_x25 = plVar14 + (long)plVar13;
          param_2 = unaff_x25 + 1;
          unaff_x21 = (long *)*param_2;
          unaff_x26 = (long *)((long)plVar13 << 1 | 1);
          plVar18 = (long *)((long)plVar13 * 2 + 2);
          plVar13 = unaff_x26;
          plVar16 = param_2;
          plVar10 = unaff_x21;
          if ((long)plVar18 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar19 = unaff_x23;
            func_0x000109487ba4();
            plVar16 = plVar14;
            plVar20 = unaff_x23;
            unaff_x28 = param_3;
            if (plVar19 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (long *)*unaff_x28;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar19;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar13 = plVar18;
            plVar17 = plStack_c0;
            plVar16 = unaff_x28;
            plVar10 = unaff_x25;
            param_3 = plStack_b8;
            if ((int)plVar9[3] <= (int)plVar19[3]) {
              plVar13 = unaff_x26;
              plVar16 = param_2;
              plVar10 = unaff_x21;
            }
          }
          *plVar14 = (long)plVar10;
          plVar14 = plVar16;
        } while ((long)plVar13 <= (long)plVar17);
        plVar18 = plStack_d0 + -1;
        if (plVar16 == plVar18) {
          *plVar16 = (long)plStack_d8;
        }
        else {
          *plVar16 = *plVar18;
          *plVar18 = (long)plStack_d8;
          lVar7 = (long)plVar16 + (8 - (long)plStack_c8) >> 3;
          if (1 < lVar7) {
            unaff_x26 = (long *)(lVar7 - 2U >> 1);
            plVar13 = plStack_c8 + (long)unaff_x26;
            unaff_x22 = (long *)*plVar13;
            unaff_x21 = (long *)*plVar16;
            unaff_x25 = (long *)*param_3;
            plVar14 = unaff_x25;
            plVar10 = unaff_x22;
            plStack_c0 = plVar15;
            func_0x000109487ba4();
            param_2 = plVar16;
            plVar20 = unaff_x23;
            plVar15 = plVar13;
            unaff_x28 = param_3;
            if ((plVar14 == (long *)0x0) ||
               (plVar17 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(), plVar20 = plVar14,
               plVar17 == (long *)0x0)) goto LAB_10948a7a0;
            plVar15 = plStack_c0;
            unaff_x23 = plVar14;
            if ((int)plVar14[3] < (int)plVar17[3]) {
              do {
                plVar16 = plVar13;
                *param_2 = (long)unaff_x22;
                unaff_x23 = plVar14;
                if (unaff_x26 == (long *)0x0) break;
                unaff_x26 = (long *)((long)unaff_x26 - 1U >> 1);
                plVar15 = plStack_c8 + (long)unaff_x26;
                unaff_x22 = (long *)*plVar15;
                unaff_x25 = (long *)*param_3;
                unaff_x23 = unaff_x25;
                plVar10 = unaff_x22;
                func_0x000109487ba4();
                plVar20 = plVar14;
                if ((unaff_x23 == (long *)0x0) ||
                   (plVar17 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(),
                   plVar20 = unaff_x23, plVar17 == (long *)0x0)) goto LAB_10948a7a0;
                param_2 = plVar16;
                plVar14 = unaff_x23;
                plVar13 = plVar15;
              } while ((int)unaff_x23[3] < (int)plVar17[3]);
              *plVar16 = (long)unaff_x21;
              plVar15 = plStack_c0;
            }
          }
        }
        bVar1 = 2 < (long)plVar15;
        plVar15 = (long *)((long)plVar15 + -1);
        plVar14 = plStack_c8;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 109489abc; end: 109489aff;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x00010948a028) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

void FUN_109489abc(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x21;
  long *plVar17;
  long *plVar18;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar19;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 **ppuVar20;
  undefined8 uVar21;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  pcStack_28 = FUN_109489b00;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 > param_2 || param_2 == plVar17) {
    if (plVar17 <= param_2) {
      return;
    }
    plVar13 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar13) {
      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
    }
    if (param_2 <= plVar13) {
      param_2 = plVar13;
    }
    if (plVar17 <= param_2) {
      return;
    }
  }
  pplVar5 = (long **)&stack0xffffffffffffffc0;
  puVar6 = &stack0xffffffffffffffc0;
  ppuVar20 = &puStack_30;
  if (param_2 == (long *)0x0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm();
    lVar8 = *param_1;
    *param_1 = lVar7;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    plVar17 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar17 * 8) = 0;
      plVar17 = (long *)((long)plVar17 + 1);
    } while (param_2 != plVar17);
    plVar17 = (long *)param_1[2];
    if (plVar17 == (long *)0x0) {
      return;
    }
    plVar13 = (long *)plVar17[1];
    uVar12 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar12) == 0) {
      plVar13 = (long *)((ulong)plVar13 & uVar12);
    }
    else if (param_2 <= plVar13) {
      uVar4 = 0;
      if (param_2 != (long *)0x0) {
        uVar4 = (ulong)plVar13 / (ulong)param_2;
      }
      plVar13 = (long *)((long)plVar13 - uVar4 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
    plVar14 = (long *)*plVar17;
    while (plVar14 != (long *)0x0) {
      plVar15 = (long *)plVar14[1];
      if (((ulong)param_2 & uVar12) == 0) {
        plVar15 = (long *)((ulong)plVar15 & uVar12);
      }
      else if (param_2 <= plVar15) {
        uVar4 = 0;
        if (param_2 != (long *)0x0) {
          uVar4 = (ulong)plVar15 / (ulong)param_2;
        }
        plVar15 = (long *)((long)plVar15 - uVar4 * (long)param_2);
      }
      plVar16 = plVar14;
      if (plVar15 != plVar13) {
        lVar7 = *param_1;
        if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
          *(long **)(lVar7 + (long)plVar15 * 8) = plVar17;
          plVar13 = plVar15;
        }
        else {
          *plVar17 = *plVar14;
          *plVar14 = **(undefined8 **)(lVar7 + (long)plVar15 * 8);
          **(long **)(lVar7 + (long)plVar15 * 8) = (long)plVar14;
          plVar16 = plVar17;
        }
      }
      plVar17 = plVar16;
      plVar14 = (long *)*plVar16;
    }
    return;
  }
  plVar14 = param_1;
  plVar17 = param_2;
  func_0x000104c4f740();
  plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,(int)param_5);
  plVar16 = plVar17 + -1;
  plStack_d8 = plVar17 + -2;
  plStack_e0 = plVar17 + -3;
  plVar15 = (long *)((long)plVar17 - (long)plVar14 >> 3);
  plVar13 = plVar14;
  plVar11 = param_3;
  plStack_d0 = plVar16;
  plStack_c0 = plVar17;
  plStack_a8 = param_3;
  if ((long)plVar15 - 2U == 0 || (long)plVar15 < 2) {
    if (plVar15 < (long *)0x2) {
      return;
    }
    if (plVar15 == (long *)0x2) {
      unaff_x21 = (long *)plVar17[-1];
      unaff_x22 = (long *)*plVar14;
      plVar19 = (long *)*param_3;
      plVar13 = plVar19;
      plVar10 = unaff_x21;
      func_0x000109487ba4();
      param_2 = plVar14;
      plVar15 = plVar14;
      unaff_x28 = param_3;
      if ((plVar13 != (long *)0x0) &&
         (plVar16 = plVar19, plVar10 = unaff_x22, func_0x000109487ba4(), param_2 = plVar13,
         plVar16 != (long *)0x0)) {
        if ((int)plVar16[3] <= (int)plVar13[3]) {
          return;
        }
        *plVar14 = (long)unaff_x21;
        plVar17[-1] = (long)unaff_x22;
        return;
      }
LAB_10948a7a0:
      plVar13 = (long *)&UNK_10f639994;
      uVar21 = 0x10948a7ac;
      FUN_109262df8();
      pplVar5 = &plStack_e0;
      plVar16 = plVar11;
      param_3 = param_4;
      unaff_x23 = plVar19;
      unaff_x24 = plVar17;
      unaff_x27 = plVar15;
      ppuVar20 = (undefined1 **)&stack0xffffffffffffffb0;
      goto SUB_10948a7ac;
    }
  }
  else {
    if (plVar15 == (long *)0x3) {
      plVar10 = plVar14 + 1;
      uVar21 = 0x109489d0c;
      goto SUB_10948a7ac;
    }
    if (plVar15 == (long *)0x4) {
      plVar17 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      uVar21 = 0x109489d0c;
      plVar11 = plVar16;
      goto SUB_10948a914;
    }
    if (plVar15 == (long *)0x5) {
      plVar17 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      unaff_x23 = plVar14 + 3;
      puVar6 = &stack0xffffffffffffff60;
      ppuVar20 = (undefined1 **)&stack0xffffffffffffffb0;
      uVar21 = 0x10948aa88;
      plVar11 = unaff_x23;
      param_1 = plVar17;
      param_2 = plVar14;
      unaff_x21 = param_3;
      unaff_x22 = plVar15;
      unaff_x24 = plVar16;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)plVar15 < 0x18) {
    plVar13 = plVar14 + 1;
    if (((ulong)param_5 & 1) == 0) {
      plVar15 = plVar14;
      if (plVar14 != plVar17 && plVar13 != plVar17) {
        do {
          param_1 = plVar13;
          unaff_x21 = (long *)plVar15[1];
          unaff_x25 = (long *)*param_3;
          plVar13 = unaff_x25;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_2 = plVar14;
          plVar19 = unaff_x23;
          unaff_x28 = param_3;
          if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (long *)*plVar15;
          plVar16 = unaff_x25;
          plVar10 = unaff_x22;
          func_0x000109487ba4();
          plVar19 = plVar13;
          if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
          param_2 = param_1;
          unaff_x23 = plVar13;
          if ((int)plVar13[3] < (int)plVar16[3]) {
            do {
              *param_2 = (long)unaff_x22;
              plVar17 = (long *)*param_3;
              unaff_x23 = plVar17;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              plVar19 = plVar13;
              if (unaff_x23 == (long *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (long *)param_2[-2];
              plVar16 = plVar17;
              plVar10 = unaff_x22;
              func_0x000109487ba4();
              plVar19 = unaff_x23;
              if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
              plVar14 = param_2 + -1;
              param_2 = plVar14;
              plVar13 = unaff_x23;
            } while ((int)unaff_x23[3] < (int)plVar16[3]);
            *plVar14 = (long)unaff_x21;
            plVar17 = plStack_c0;
          }
          plVar13 = param_1 + 1;
          plVar15 = param_1;
        } while (param_1 + 1 != plVar17);
      }
    }
    else if (plVar14 != plVar17 && plVar13 != plVar17) {
      param_1 = (long *)0x0;
      param_2 = plVar14;
      do {
        unaff_x26 = plVar13;
        unaff_x21 = (long *)param_2[1];
        unaff_x25 = (long *)*param_3;
        plVar16 = unaff_x25;
        plVar10 = unaff_x21;
        func_0x000109487ba4();
        plVar19 = unaff_x23;
        plVar15 = plVar14;
        unaff_x28 = param_3;
        if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (long *)*param_2;
        plVar13 = unaff_x25;
        plVar10 = unaff_x22;
        func_0x000109487ba4();
        plVar19 = plVar16;
        if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
        param_2 = param_1;
        if ((int)plVar16[3] < (int)plVar13[3]) {
          do {
            plVar17 = (long *)((long)plVar14 + (long)param_2);
            plVar17[1] = (long)unaff_x22;
            plVar13 = plVar14;
            if (param_2 == (long *)0x0) goto LAB_10948a330;
            unaff_x25 = (long *)*param_3;
            plVar13 = unaff_x25;
            plVar10 = unaff_x21;
            func_0x000109487ba4();
            plVar19 = plVar16;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (long *)plVar17[-1];
            plVar18 = unaff_x25;
            plVar10 = unaff_x22;
            func_0x000109487ba4();
            plVar19 = plVar13;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            param_2 = param_2 + -1;
            plVar16 = plVar13;
          } while ((int)plVar13[3] < (int)plVar18[3]);
          plVar13 = (long *)((long)plVar14 + (long)param_2 + 8);
LAB_10948a330:
          *plVar13 = (long)unaff_x21;
          plVar17 = plStack_c0;
        }
        param_1 = param_1 + 1;
        plVar13 = unaff_x26 + 1;
        param_2 = unaff_x26;
        unaff_x23 = plVar16;
      } while (unaff_x26 + 1 != plVar17);
    }
  }
  else {
    plStack_b8 = plVar14;
    if (param_4 != (long *)0x0) {
      unaff_x21 = plVar14 + ((ulong)plVar15 >> 1);
      unaff_x27 = plVar14;
      if (plVar15 < (long *)0x81) {
        uVar21 = 0x109489e3c;
        pplVar5 = &plStack_e0;
        plVar13 = unaff_x21;
        plVar10 = plVar14;
        param_2 = plVar14;
        unaff_x24 = plVar17;
        unaff_x28 = param_3;
        ppuVar20 = (undefined1 **)&stack0xffffffffffffffb0;
      }
      else {
        uVar21 = 0x109489dd4;
        pplVar5 = &plStack_e0;
        plVar10 = unaff_x21;
        param_2 = plVar14;
        unaff_x24 = plVar17;
        unaff_x28 = param_3;
        ppuVar20 = (undefined1 **)&stack0xffffffffffffffb0;
      }
SUB_10948a7ac:
      do {
        puVar6 = (undefined1 *)((long)pplVar5 + -0x60);
        *(long **)((long)pplVar5 + -0x60) = unaff_x28;
        *(long **)((long)pplVar5 + -0x58) = unaff_x27;
        *(long **)((long)pplVar5 + -0x50) = unaff_x26;
        *(long **)((long)pplVar5 + -0x48) = unaff_x25;
        *(long **)((long)pplVar5 + -0x40) = unaff_x24;
        *(long **)((long)pplVar5 + -0x38) = unaff_x23;
        *(long **)((long)pplVar5 + -0x30) = unaff_x22;
        *(long **)((long)pplVar5 + -0x28) = unaff_x21;
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = param_1;
        *(undefined1 ***)((long)pplVar5 + -0x10) = ppuVar20;
        *(undefined8 *)((long)pplVar5 + -8) = uVar21;
        ppuVar20 = (undefined1 **)((long)pplVar5 + -0x10);
        unaff_x24 = (long *)*plVar10;
        unaff_x22 = (long *)*plVar13;
        unaff_x26 = (long *)*param_3;
        plVar14 = unaff_x26;
        plVar17 = unaff_x24;
        plVar15 = plVar16;
        plVar11 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (plVar14 != (long *)0x0) {
          uVar2 = *(uint *)(plVar14 + 3);
          unaff_x27 = (long *)(ulong)uVar2;
          plVar14 = unaff_x26;
          plVar17 = unaff_x22;
          func_0x000109487ba4();
          if (plVar14 != (long *)0x0) {
            uVar3 = *(uint *)(plVar14 + 3);
            unaff_x28 = (long *)(ulong)uVar3;
            unaff_x25 = (long *)*plVar16;
            plVar14 = unaff_x26;
            plVar17 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar2 < (int)uVar3) {
              if (plVar14 != (long *)0x0) {
                if ((int)plVar14[3] < (int)uVar2) {
                  *plVar13 = (long)unaff_x25;
                  goto LAB_10948a8e8;
                }
                *plVar13 = (long)unaff_x24;
                *plVar10 = (long)unaff_x22;
                plVar13 = (long *)*plVar16;
                unaff_x24 = (long *)*param_3;
                plVar14 = unaff_x24;
                plVar17 = plVar13;
                func_0x000109487ba4();
                if ((plVar14 != (long *)0x0) &&
                   (plVar19 = unaff_x24, plVar17 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = plVar14, plVar19 != (long *)0x0)) {
                  if ((int)plVar14[3] < (int)plVar19[3]) {
                    *plVar10 = (long)plVar13;
LAB_10948a8e8:
                    *plVar16 = (long)unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (plVar14 != (long *)0x0) {
              if ((int)uVar2 <= (int)plVar14[3]) {
                return;
              }
              *plVar10 = (long)unaff_x25;
              *plVar16 = (long)unaff_x24;
              plVar16 = (long *)*plVar10;
              unaff_x22 = (long *)*plVar13;
              unaff_x24 = (long *)*param_3;
              plVar14 = unaff_x24;
              plVar17 = plVar16;
              func_0x000109487ba4();
              if ((plVar14 != (long *)0x0) &&
                 (plVar19 = unaff_x24, plVar17 = unaff_x22, func_0x000109487ba4(),
                 unaff_x23 = plVar14, plVar19 != (long *)0x0)) {
                if ((int)plVar19[3] <= (int)plVar14[3]) {
                  return;
                }
                *plVar13 = (long)plVar16;
                *plVar10 = (long)unaff_x22;
                return;
              }
            }
          }
        }
        plVar14 = (long *)&UNK_10f639994;
        uVar21 = 0x10948a914;
        FUN_109262df8();
        param_3 = param_5;
        param_1 = plVar10;
        param_2 = plVar16;
        unaff_x21 = plVar13;
SUB_10948a914:
        *(long **)(puVar6 + -0x60) = unaff_x28;
        *(long **)(puVar6 + -0x58) = unaff_x27;
        *(long **)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(long **)(puVar6 + -0x40) = unaff_x24;
        *(long **)(puVar6 + -0x38) = unaff_x23;
        *(long **)(puVar6 + -0x30) = unaff_x22;
        *(long **)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = param_1;
        *(undefined1 ***)(puVar6 + -0x10) = ppuVar20;
        *(undefined8 *)(puVar6 + -8) = uVar21;
        uVar21 = 0x10948a94c;
        pplVar5 = (long **)(puVar6 + -0x60);
        plVar13 = plVar14;
        plVar10 = plVar17;
        plVar16 = plVar15;
        param_5 = param_3;
        param_1 = plVar17;
        param_2 = plVar14;
        unaff_x21 = param_3;
        unaff_x22 = plVar15;
        unaff_x23 = plVar11;
        ppuVar20 = (undefined1 **)(puVar6 + -0x10);
      } while( true );
    }
    if (plVar14 != plVar17) {
      plVar16 = (long *)((long)plVar15 - 2U >> 1);
      plVar13 = unaff_x25;
      plStack_c8 = plVar16;
      plStack_b0 = plVar15;
      do {
        plVar10 = plVar16;
        if ((long)plVar16 <= (long)plStack_c8) {
          unaff_x26 = (long *)((long)plVar16 << 1 | 1);
          param_1 = plVar14 + (long)unaff_x26;
          param_2 = (long *)((long)plVar16 * 2 + 2);
          plVar18 = (long *)*param_1;
          unaff_x21 = plVar18;
          unaff_x25 = plVar13;
          plStack_d8 = plVar16;
          if ((long)param_2 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar13 = unaff_x23;
            plVar10 = plVar18;
            func_0x000109487ba4();
            plVar19 = unaff_x23;
            plVar15 = plVar14;
            unaff_x28 = param_3;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            plVar17 = param_1 + 1;
            unaff_x25 = (long *)*plVar17;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar13;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar16 = plVar17;
            unaff_x21 = unaff_x25;
            plVar17 = plStack_c0;
            if ((int)plVar9[3] <= (int)plVar13[3]) {
              plVar16 = param_1;
              unaff_x21 = plVar18;
              param_2 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (long *)*param_3;
            plVar16 = param_1;
            param_2 = unaff_x26;
          }
          unaff_x26 = param_2;
          param_2 = plVar14 + (long)plStack_d8;
          unaff_x22 = (long *)*param_2;
          plVar13 = unaff_x23;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_1 = plVar16;
          plVar19 = unaff_x23;
          plVar15 = plVar14;
          unaff_x28 = param_3;
          if ((plVar13 == (long *)0x0) ||
             (plVar18 = unaff_x23, plVar10 = unaff_x22, func_0x000109487ba4(), unaff_x25 = plVar13,
             plVar18 == (long *)0x0)) goto LAB_10948a7a0;
          plVar10 = plStack_d8;
          plVar15 = plStack_b0;
          plVar19 = unaff_x22;
          if ((int)plVar18[3] <= (int)plVar13[3]) {
            do {
              plStack_d0 = plVar19;
              plVar15 = plVar16;
              *param_2 = (long)unaff_x21;
              if ((long)plStack_c8 < (long)unaff_x26) break;
              param_2 = (long *)((long)unaff_x26 << 1 | 1);
              param_1 = plStack_b8 + (long)param_2;
              unaff_x22 = (long *)((long)unaff_x26 * 2 + 2);
              plVar14 = (long *)*param_1;
              unaff_x21 = plVar14;
              if ((long)unaff_x22 < (long)plStack_b0) {
                unaff_x23 = (long *)*param_3;
                plVar18 = unaff_x23;
                plVar10 = plVar14;
                func_0x000109487ba4();
                plVar19 = unaff_x23;
                unaff_x25 = plVar13;
                if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
                plVar17 = param_1 + 1;
                unaff_x26 = (long *)*plVar17;
                plVar13 = unaff_x23;
                plVar10 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = plVar18;
                if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
                plVar16 = plVar17;
                unaff_x21 = unaff_x26;
                plVar17 = plStack_c0;
                unaff_x26 = unaff_x22;
                if ((int)plVar13[3] <= (int)plVar18[3]) {
                  plVar16 = param_1;
                  unaff_x21 = plVar14;
                  unaff_x26 = param_2;
                }
              }
              else {
                unaff_x23 = (long *)*param_3;
                plVar16 = param_1;
                plVar18 = plVar13;
                unaff_x26 = param_2;
              }
              plVar13 = unaff_x23;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              unaff_x22 = plStack_d0;
              param_1 = plVar16;
              plVar19 = unaff_x23;
              unaff_x25 = plVar18;
              if ((plVar13 == (long *)0x0) ||
                 (plVar14 = unaff_x23, plVar10 = plStack_d0, func_0x000109487ba4(),
                 unaff_x25 = plVar13, plVar14 == (long *)0x0)) goto LAB_10948a7a0;
              param_2 = plVar15;
              plVar19 = plStack_d0;
            } while ((int)plVar14[3] <= (int)plVar13[3]);
            *plVar15 = (long)unaff_x22;
            plVar10 = plStack_d8;
            plVar15 = plStack_b0;
            plVar14 = plStack_b8;
          }
        }
        plVar16 = (long *)((long)plVar10 + -1);
      } while (plVar10 != (long *)0x0);
      do {
        plVar13 = (long *)0x0;
        plStack_c8 = (long *)*plVar14;
        plVar16 = (long *)((long)plVar15 - 2U >> 1);
        plStack_c0 = plVar17;
        plStack_b0 = plVar16;
        do {
          unaff_x25 = plVar14 + (long)plVar13;
          param_2 = unaff_x25 + 1;
          unaff_x21 = (long *)*param_2;
          unaff_x26 = (long *)((long)plVar13 << 1 | 1);
          plVar17 = (long *)((long)plVar13 * 2 + 2);
          plVar13 = unaff_x26;
          param_1 = param_2;
          plVar10 = unaff_x21;
          if ((long)plVar17 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar18 = unaff_x23;
            func_0x000109487ba4();
            param_1 = plVar14;
            plVar19 = unaff_x23;
            unaff_x28 = param_3;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (long *)*unaff_x28;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar18;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar13 = plVar17;
            plVar16 = plStack_b0;
            param_1 = unaff_x28;
            plVar10 = unaff_x25;
            param_3 = plStack_a8;
            if ((int)plVar9[3] <= (int)plVar18[3]) {
              plVar13 = unaff_x26;
              param_1 = param_2;
              plVar10 = unaff_x21;
            }
          }
          *plVar14 = (long)plVar10;
          plVar14 = param_1;
        } while ((long)plVar13 <= (long)plVar16);
        plVar17 = plStack_c0 + -1;
        if (param_1 == plVar17) {
          *param_1 = (long)plStack_c8;
        }
        else {
          *param_1 = *plVar17;
          *plVar17 = (long)plStack_c8;
          lVar7 = (long)param_1 + (8 - (long)plStack_b8) >> 3;
          if (1 < lVar7) {
            unaff_x26 = (long *)(lVar7 - 2U >> 1);
            plVar13 = plStack_b8 + (long)unaff_x26;
            unaff_x22 = (long *)*plVar13;
            unaff_x21 = (long *)*param_1;
            unaff_x25 = (long *)*param_3;
            plVar14 = unaff_x25;
            plVar10 = unaff_x22;
            plStack_b0 = plVar15;
            func_0x000109487ba4();
            param_2 = param_1;
            plVar19 = unaff_x23;
            plVar15 = plVar13;
            unaff_x28 = param_3;
            if ((plVar14 == (long *)0x0) ||
               (plVar16 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(), plVar19 = plVar14,
               plVar16 == (long *)0x0)) goto LAB_10948a7a0;
            plVar15 = plStack_b0;
            unaff_x23 = plVar14;
            if ((int)plVar14[3] < (int)plVar16[3]) {
              do {
                param_1 = plVar13;
                *param_2 = (long)unaff_x22;
                unaff_x23 = plVar14;
                if (unaff_x26 == (long *)0x0) break;
                unaff_x26 = (long *)((long)unaff_x26 - 1U >> 1);
                plVar15 = plStack_b8 + (long)unaff_x26;
                unaff_x22 = (long *)*plVar15;
                unaff_x25 = (long *)*param_3;
                unaff_x23 = unaff_x25;
                plVar10 = unaff_x22;
                func_0x000109487ba4();
                plVar19 = plVar14;
                if ((unaff_x23 == (long *)0x0) ||
                   (plVar16 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(),
                   plVar19 = unaff_x23, plVar16 == (long *)0x0)) goto LAB_10948a7a0;
                param_2 = param_1;
                plVar14 = unaff_x23;
                plVar13 = plVar15;
              } while ((int)unaff_x23[3] < (int)plVar16[3]);
              *param_1 = (long)unaff_x21;
              plVar15 = plStack_b0;
            }
          }
        }
        bVar1 = 2 < (long)plVar15;
        plVar15 = (long *)((long)plVar15 + -1);
        plVar14 = plStack_b8;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 109489b00; end: 109489bcf;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x00010948a028) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

void FUN_109489b00(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x21;
  long *plVar17;
  long *plVar18;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar19;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 *puVar20;
  undefined8 uVar21;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 > param_2 || param_2 == plVar17) {
    if (plVar17 <= param_2) {
      return;
    }
    plVar13 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar13) {
      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
    }
    if (param_2 <= plVar13) {
      param_2 = plVar13;
    }
    if (plVar17 <= param_2) {
      return;
    }
  }
  pplVar5 = (long **)&stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar20 = &stack0xfffffffffffffff0;
  if (param_2 == (long *)0x0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm();
    lVar8 = *param_1;
    *param_1 = lVar7;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    plVar17 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar17 * 8) = 0;
      plVar17 = (long *)((long)plVar17 + 1);
    } while (param_2 != plVar17);
    plVar17 = (long *)param_1[2];
    if (plVar17 == (long *)0x0) {
      return;
    }
    plVar13 = (long *)plVar17[1];
    uVar12 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar12) == 0) {
      plVar13 = (long *)((ulong)plVar13 & uVar12);
    }
    else if (param_2 <= plVar13) {
      uVar4 = 0;
      if (param_2 != (long *)0x0) {
        uVar4 = (ulong)plVar13 / (ulong)param_2;
      }
      plVar13 = (long *)((long)plVar13 - uVar4 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
    plVar14 = (long *)*plVar17;
    while (plVar14 != (long *)0x0) {
      plVar15 = (long *)plVar14[1];
      if (((ulong)param_2 & uVar12) == 0) {
        plVar15 = (long *)((ulong)plVar15 & uVar12);
      }
      else if (param_2 <= plVar15) {
        uVar4 = 0;
        if (param_2 != (long *)0x0) {
          uVar4 = (ulong)plVar15 / (ulong)param_2;
        }
        plVar15 = (long *)((long)plVar15 - uVar4 * (long)param_2);
      }
      plVar16 = plVar14;
      if (plVar15 != plVar13) {
        lVar7 = *param_1;
        if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
          *(long **)(lVar7 + (long)plVar15 * 8) = plVar17;
          plVar13 = plVar15;
        }
        else {
          *plVar17 = *plVar14;
          *plVar14 = **(undefined8 **)(lVar7 + (long)plVar15 * 8);
          **(long **)(lVar7 + (long)plVar15 * 8) = (long)plVar14;
          plVar16 = plVar17;
        }
      }
      plVar17 = plVar16;
      plVar14 = (long *)*plVar16;
    }
    return;
  }
  plVar14 = param_1;
  plVar17 = param_2;
  func_0x000104c4f740();
  plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,(int)param_5);
  plVar16 = plVar17 + -1;
  plStack_b8 = plVar17 + -2;
  plStack_c0 = plVar17 + -3;
  plVar15 = (long *)((long)plVar17 - (long)plVar14 >> 3);
  plVar13 = plVar14;
  plVar11 = param_3;
  plStack_b0 = plVar16;
  plStack_a0 = plVar17;
  plStack_88 = param_3;
  if ((long)plVar15 - 2U == 0 || (long)plVar15 < 2) {
    if (plVar15 < (long *)0x2) {
      return;
    }
    if (plVar15 == (long *)0x2) {
      unaff_x21 = (long *)plVar17[-1];
      unaff_x22 = (long *)*plVar14;
      plVar19 = (long *)*param_3;
      plVar13 = plVar19;
      plVar10 = unaff_x21;
      func_0x000109487ba4();
      param_2 = plVar14;
      plVar15 = plVar14;
      unaff_x28 = param_3;
      if ((plVar13 != (long *)0x0) &&
         (plVar16 = plVar19, plVar10 = unaff_x22, func_0x000109487ba4(), param_2 = plVar13,
         plVar16 != (long *)0x0)) {
        if ((int)plVar16[3] <= (int)plVar13[3]) {
          return;
        }
        *plVar14 = (long)unaff_x21;
        plVar17[-1] = (long)unaff_x22;
        return;
      }
LAB_10948a7a0:
      plVar13 = (long *)&UNK_10f639994;
      uVar21 = 0x10948a7ac;
      FUN_109262df8();
      pplVar5 = &plStack_c0;
      plVar16 = plVar11;
      param_3 = param_4;
      unaff_x23 = plVar19;
      unaff_x24 = plVar17;
      unaff_x27 = plVar15;
      puVar20 = &stack0xffffffffffffffd0;
      goto SUB_10948a7ac;
    }
  }
  else {
    if (plVar15 == (long *)0x3) {
      plVar10 = plVar14 + 1;
      uVar21 = 0x109489d0c;
      goto SUB_10948a7ac;
    }
    if (plVar15 == (long *)0x4) {
      plVar17 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      uVar21 = 0x109489d0c;
      plVar11 = plVar16;
      goto SUB_10948a914;
    }
    if (plVar15 == (long *)0x5) {
      plVar17 = plVar14 + 1;
      plVar15 = plVar14 + 2;
      unaff_x23 = plVar14 + 3;
      puVar6 = &stack0xffffffffffffff80;
      puVar20 = &stack0xffffffffffffffd0;
      uVar21 = 0x10948aa88;
      plVar11 = unaff_x23;
      param_1 = plVar17;
      param_2 = plVar14;
      unaff_x21 = param_3;
      unaff_x22 = plVar15;
      unaff_x24 = plVar16;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)plVar15 < 0x18) {
    plVar13 = plVar14 + 1;
    if (((ulong)param_5 & 1) == 0) {
      plVar15 = plVar14;
      if (plVar14 != plVar17 && plVar13 != plVar17) {
        do {
          param_1 = plVar13;
          unaff_x21 = (long *)plVar15[1];
          unaff_x25 = (long *)*param_3;
          plVar13 = unaff_x25;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_2 = plVar14;
          plVar19 = unaff_x23;
          unaff_x28 = param_3;
          if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (long *)*plVar15;
          plVar16 = unaff_x25;
          plVar10 = unaff_x22;
          func_0x000109487ba4();
          plVar19 = plVar13;
          if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
          param_2 = param_1;
          unaff_x23 = plVar13;
          if ((int)plVar13[3] < (int)plVar16[3]) {
            do {
              *param_2 = (long)unaff_x22;
              plVar17 = (long *)*param_3;
              unaff_x23 = plVar17;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              plVar19 = plVar13;
              if (unaff_x23 == (long *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (long *)param_2[-2];
              plVar16 = plVar17;
              plVar10 = unaff_x22;
              func_0x000109487ba4();
              plVar19 = unaff_x23;
              if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
              plVar14 = param_2 + -1;
              param_2 = plVar14;
              plVar13 = unaff_x23;
            } while ((int)unaff_x23[3] < (int)plVar16[3]);
            *plVar14 = (long)unaff_x21;
            plVar17 = plStack_a0;
          }
          plVar13 = param_1 + 1;
          plVar15 = param_1;
        } while (param_1 + 1 != plVar17);
      }
    }
    else if (plVar14 != plVar17 && plVar13 != plVar17) {
      param_1 = (long *)0x0;
      param_2 = plVar14;
      do {
        unaff_x26 = plVar13;
        unaff_x21 = (long *)param_2[1];
        unaff_x25 = (long *)*param_3;
        plVar16 = unaff_x25;
        plVar10 = unaff_x21;
        func_0x000109487ba4();
        plVar19 = unaff_x23;
        plVar15 = plVar14;
        unaff_x28 = param_3;
        if (plVar16 == (long *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (long *)*param_2;
        plVar13 = unaff_x25;
        plVar10 = unaff_x22;
        func_0x000109487ba4();
        plVar19 = plVar16;
        if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
        param_2 = param_1;
        if ((int)plVar16[3] < (int)plVar13[3]) {
          do {
            plVar17 = (long *)((long)plVar14 + (long)param_2);
            plVar17[1] = (long)unaff_x22;
            plVar13 = plVar14;
            if (param_2 == (long *)0x0) goto LAB_10948a330;
            unaff_x25 = (long *)*param_3;
            plVar13 = unaff_x25;
            plVar10 = unaff_x21;
            func_0x000109487ba4();
            plVar19 = plVar16;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (long *)plVar17[-1];
            plVar18 = unaff_x25;
            plVar10 = unaff_x22;
            func_0x000109487ba4();
            plVar19 = plVar13;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            param_2 = param_2 + -1;
            plVar16 = plVar13;
          } while ((int)plVar13[3] < (int)plVar18[3]);
          plVar13 = (long *)((long)plVar14 + (long)param_2 + 8);
LAB_10948a330:
          *plVar13 = (long)unaff_x21;
          plVar17 = plStack_a0;
        }
        param_1 = param_1 + 1;
        plVar13 = unaff_x26 + 1;
        param_2 = unaff_x26;
        unaff_x23 = plVar16;
      } while (unaff_x26 + 1 != plVar17);
    }
  }
  else {
    plStack_98 = plVar14;
    if (param_4 != (long *)0x0) {
      unaff_x21 = plVar14 + ((ulong)plVar15 >> 1);
      unaff_x27 = plVar14;
      if (plVar15 < (long *)0x81) {
        uVar21 = 0x109489e3c;
        pplVar5 = &plStack_c0;
        plVar13 = unaff_x21;
        plVar10 = plVar14;
        param_2 = plVar14;
        unaff_x24 = plVar17;
        unaff_x28 = param_3;
        puVar20 = &stack0xffffffffffffffd0;
      }
      else {
        uVar21 = 0x109489dd4;
        pplVar5 = &plStack_c0;
        plVar10 = unaff_x21;
        param_2 = plVar14;
        unaff_x24 = plVar17;
        unaff_x28 = param_3;
        puVar20 = &stack0xffffffffffffffd0;
      }
SUB_10948a7ac:
      do {
        puVar6 = (undefined1 *)((long)pplVar5 + -0x60);
        *(long **)((long)pplVar5 + -0x60) = unaff_x28;
        *(long **)((long)pplVar5 + -0x58) = unaff_x27;
        *(long **)((long)pplVar5 + -0x50) = unaff_x26;
        *(long **)((long)pplVar5 + -0x48) = unaff_x25;
        *(long **)((long)pplVar5 + -0x40) = unaff_x24;
        *(long **)((long)pplVar5 + -0x38) = unaff_x23;
        *(long **)((long)pplVar5 + -0x30) = unaff_x22;
        *(long **)((long)pplVar5 + -0x28) = unaff_x21;
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = param_1;
        *(undefined1 **)((long)pplVar5 + -0x10) = puVar20;
        *(undefined8 *)((long)pplVar5 + -8) = uVar21;
        puVar20 = (undefined1 *)((long)pplVar5 + -0x10);
        unaff_x24 = (long *)*plVar10;
        unaff_x22 = (long *)*plVar13;
        unaff_x26 = (long *)*param_3;
        plVar14 = unaff_x26;
        plVar17 = unaff_x24;
        plVar15 = plVar16;
        plVar11 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (plVar14 != (long *)0x0) {
          uVar2 = *(uint *)(plVar14 + 3);
          unaff_x27 = (long *)(ulong)uVar2;
          plVar14 = unaff_x26;
          plVar17 = unaff_x22;
          func_0x000109487ba4();
          if (plVar14 != (long *)0x0) {
            uVar3 = *(uint *)(plVar14 + 3);
            unaff_x28 = (long *)(ulong)uVar3;
            unaff_x25 = (long *)*plVar16;
            plVar14 = unaff_x26;
            plVar17 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar2 < (int)uVar3) {
              if (plVar14 != (long *)0x0) {
                if ((int)plVar14[3] < (int)uVar2) {
                  *plVar13 = (long)unaff_x25;
                  goto LAB_10948a8e8;
                }
                *plVar13 = (long)unaff_x24;
                *plVar10 = (long)unaff_x22;
                plVar13 = (long *)*plVar16;
                unaff_x24 = (long *)*param_3;
                plVar14 = unaff_x24;
                plVar17 = plVar13;
                func_0x000109487ba4();
                if ((plVar14 != (long *)0x0) &&
                   (plVar19 = unaff_x24, plVar17 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = plVar14, plVar19 != (long *)0x0)) {
                  if ((int)plVar14[3] < (int)plVar19[3]) {
                    *plVar10 = (long)plVar13;
LAB_10948a8e8:
                    *plVar16 = (long)unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (plVar14 != (long *)0x0) {
              if ((int)uVar2 <= (int)plVar14[3]) {
                return;
              }
              *plVar10 = (long)unaff_x25;
              *plVar16 = (long)unaff_x24;
              plVar16 = (long *)*plVar10;
              unaff_x22 = (long *)*plVar13;
              unaff_x24 = (long *)*param_3;
              plVar14 = unaff_x24;
              plVar17 = plVar16;
              func_0x000109487ba4();
              if ((plVar14 != (long *)0x0) &&
                 (plVar19 = unaff_x24, plVar17 = unaff_x22, func_0x000109487ba4(),
                 unaff_x23 = plVar14, plVar19 != (long *)0x0)) {
                if ((int)plVar19[3] <= (int)plVar14[3]) {
                  return;
                }
                *plVar13 = (long)plVar16;
                *plVar10 = (long)unaff_x22;
                return;
              }
            }
          }
        }
        plVar14 = (long *)&UNK_10f639994;
        uVar21 = 0x10948a914;
        FUN_109262df8();
        param_3 = param_5;
        param_1 = plVar10;
        param_2 = plVar16;
        unaff_x21 = plVar13;
SUB_10948a914:
        *(long **)(puVar6 + -0x60) = unaff_x28;
        *(long **)(puVar6 + -0x58) = unaff_x27;
        *(long **)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(long **)(puVar6 + -0x40) = unaff_x24;
        *(long **)(puVar6 + -0x38) = unaff_x23;
        *(long **)(puVar6 + -0x30) = unaff_x22;
        *(long **)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = param_1;
        *(undefined1 **)(puVar6 + -0x10) = puVar20;
        *(undefined8 *)(puVar6 + -8) = uVar21;
        uVar21 = 0x10948a94c;
        pplVar5 = (long **)(puVar6 + -0x60);
        plVar13 = plVar14;
        plVar10 = plVar17;
        plVar16 = plVar15;
        param_5 = param_3;
        param_1 = plVar17;
        param_2 = plVar14;
        unaff_x21 = param_3;
        unaff_x22 = plVar15;
        unaff_x23 = plVar11;
        puVar20 = puVar6 + -0x10;
      } while( true );
    }
    if (plVar14 != plVar17) {
      plVar16 = (long *)((long)plVar15 - 2U >> 1);
      plVar13 = unaff_x25;
      plStack_a8 = plVar16;
      plStack_90 = plVar15;
      do {
        plVar10 = plVar16;
        if ((long)plVar16 <= (long)plStack_a8) {
          unaff_x26 = (long *)((long)plVar16 << 1 | 1);
          param_1 = plVar14 + (long)unaff_x26;
          param_2 = (long *)((long)plVar16 * 2 + 2);
          plVar18 = (long *)*param_1;
          unaff_x21 = plVar18;
          unaff_x25 = plVar13;
          plStack_b8 = plVar16;
          if ((long)param_2 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar13 = unaff_x23;
            plVar10 = plVar18;
            func_0x000109487ba4();
            plVar19 = unaff_x23;
            plVar15 = plVar14;
            unaff_x28 = param_3;
            if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
            plVar17 = param_1 + 1;
            unaff_x25 = (long *)*plVar17;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar13;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar16 = plVar17;
            unaff_x21 = unaff_x25;
            plVar17 = plStack_a0;
            if ((int)plVar9[3] <= (int)plVar13[3]) {
              plVar16 = param_1;
              unaff_x21 = plVar18;
              param_2 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (long *)*param_3;
            plVar16 = param_1;
            param_2 = unaff_x26;
          }
          unaff_x26 = param_2;
          param_2 = plVar14 + (long)plStack_b8;
          unaff_x22 = (long *)*param_2;
          plVar13 = unaff_x23;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_1 = plVar16;
          plVar19 = unaff_x23;
          plVar15 = plVar14;
          unaff_x28 = param_3;
          if ((plVar13 == (long *)0x0) ||
             (plVar18 = unaff_x23, plVar10 = unaff_x22, func_0x000109487ba4(), unaff_x25 = plVar13,
             plVar18 == (long *)0x0)) goto LAB_10948a7a0;
          plVar10 = plStack_b8;
          plVar15 = plStack_90;
          plVar19 = unaff_x22;
          if ((int)plVar18[3] <= (int)plVar13[3]) {
            do {
              plStack_b0 = plVar19;
              plVar15 = plVar16;
              *param_2 = (long)unaff_x21;
              if ((long)plStack_a8 < (long)unaff_x26) break;
              param_2 = (long *)((long)unaff_x26 << 1 | 1);
              param_1 = plStack_98 + (long)param_2;
              unaff_x22 = (long *)((long)unaff_x26 * 2 + 2);
              plVar14 = (long *)*param_1;
              unaff_x21 = plVar14;
              if ((long)unaff_x22 < (long)plStack_90) {
                unaff_x23 = (long *)*param_3;
                plVar18 = unaff_x23;
                plVar10 = plVar14;
                func_0x000109487ba4();
                plVar19 = unaff_x23;
                unaff_x25 = plVar13;
                if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
                plVar17 = param_1 + 1;
                unaff_x26 = (long *)*plVar17;
                plVar13 = unaff_x23;
                plVar10 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = plVar18;
                if (plVar13 == (long *)0x0) goto LAB_10948a7a0;
                plVar16 = plVar17;
                unaff_x21 = unaff_x26;
                plVar17 = plStack_a0;
                unaff_x26 = unaff_x22;
                if ((int)plVar13[3] <= (int)plVar18[3]) {
                  plVar16 = param_1;
                  unaff_x21 = plVar14;
                  unaff_x26 = param_2;
                }
              }
              else {
                unaff_x23 = (long *)*param_3;
                plVar16 = param_1;
                plVar18 = plVar13;
                unaff_x26 = param_2;
              }
              plVar13 = unaff_x23;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              unaff_x22 = plStack_b0;
              param_1 = plVar16;
              plVar19 = unaff_x23;
              unaff_x25 = plVar18;
              if ((plVar13 == (long *)0x0) ||
                 (plVar14 = unaff_x23, plVar10 = plStack_b0, func_0x000109487ba4(),
                 unaff_x25 = plVar13, plVar14 == (long *)0x0)) goto LAB_10948a7a0;
              param_2 = plVar15;
              plVar19 = plStack_b0;
            } while ((int)plVar14[3] <= (int)plVar13[3]);
            *plVar15 = (long)unaff_x22;
            plVar10 = plStack_b8;
            plVar15 = plStack_90;
            plVar14 = plStack_98;
          }
        }
        plVar16 = (long *)((long)plVar10 + -1);
      } while (plVar10 != (long *)0x0);
      do {
        plVar13 = (long *)0x0;
        plStack_a8 = (long *)*plVar14;
        plVar16 = (long *)((long)plVar15 - 2U >> 1);
        plStack_a0 = plVar17;
        plStack_90 = plVar16;
        do {
          unaff_x25 = plVar14 + (long)plVar13;
          param_2 = unaff_x25 + 1;
          unaff_x21 = (long *)*param_2;
          unaff_x26 = (long *)((long)plVar13 << 1 | 1);
          plVar17 = (long *)((long)plVar13 * 2 + 2);
          plVar13 = unaff_x26;
          param_1 = param_2;
          plVar10 = unaff_x21;
          if ((long)plVar17 < (long)plVar15) {
            unaff_x23 = (long *)*param_3;
            plVar18 = unaff_x23;
            func_0x000109487ba4();
            param_1 = plVar14;
            plVar19 = unaff_x23;
            unaff_x28 = param_3;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (long *)*unaff_x28;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar18;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar13 = plVar17;
            plVar16 = plStack_90;
            param_1 = unaff_x28;
            plVar10 = unaff_x25;
            param_3 = plStack_88;
            if ((int)plVar9[3] <= (int)plVar18[3]) {
              plVar13 = unaff_x26;
              param_1 = param_2;
              plVar10 = unaff_x21;
            }
          }
          *plVar14 = (long)plVar10;
          plVar14 = param_1;
        } while ((long)plVar13 <= (long)plVar16);
        plVar17 = plStack_a0 + -1;
        if (param_1 == plVar17) {
          *param_1 = (long)plStack_a8;
        }
        else {
          *param_1 = *plVar17;
          *plVar17 = (long)plStack_a8;
          lVar7 = (long)param_1 + (8 - (long)plStack_98) >> 3;
          if (1 < lVar7) {
            unaff_x26 = (long *)(lVar7 - 2U >> 1);
            plVar13 = plStack_98 + (long)unaff_x26;
            unaff_x22 = (long *)*plVar13;
            unaff_x21 = (long *)*param_1;
            unaff_x25 = (long *)*param_3;
            plVar14 = unaff_x25;
            plVar10 = unaff_x22;
            plStack_90 = plVar15;
            func_0x000109487ba4();
            param_2 = param_1;
            plVar19 = unaff_x23;
            plVar15 = plVar13;
            unaff_x28 = param_3;
            if ((plVar14 == (long *)0x0) ||
               (plVar16 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(), plVar19 = plVar14,
               plVar16 == (long *)0x0)) goto LAB_10948a7a0;
            plVar15 = plStack_90;
            unaff_x23 = plVar14;
            if ((int)plVar14[3] < (int)plVar16[3]) {
              do {
                param_1 = plVar13;
                *param_2 = (long)unaff_x22;
                unaff_x23 = plVar14;
                if (unaff_x26 == (long *)0x0) break;
                unaff_x26 = (long *)((long)unaff_x26 - 1U >> 1);
                plVar15 = plStack_98 + (long)unaff_x26;
                unaff_x22 = (long *)*plVar15;
                unaff_x25 = (long *)*param_3;
                unaff_x23 = unaff_x25;
                plVar10 = unaff_x22;
                func_0x000109487ba4();
                plVar19 = plVar14;
                if ((unaff_x23 == (long *)0x0) ||
                   (plVar16 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(),
                   plVar19 = unaff_x23, plVar16 == (long *)0x0)) goto LAB_10948a7a0;
                param_2 = param_1;
                plVar14 = unaff_x23;
                plVar13 = plVar15;
              } while ((int)unaff_x23[3] < (int)plVar16[3]);
              *param_1 = (long)unaff_x21;
              plVar15 = plStack_90;
            }
          }
        }
        bVar1 = 2 < (long)plVar15;
        plVar15 = (long *)((long)plVar15 + -1);
        plVar14 = plStack_98;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 109489bd0; end: 109489d0b;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x00010948a028) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

void FUN_109489bd0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x21;
  long *plVar18;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar19;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_30;
  undefined8 uStack_28;
  
  pplVar5 = (long **)&stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  if (param_2 == (long *)0x0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm();
    lVar8 = *param_1;
    *param_1 = lVar7;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    plVar12 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar12 * 8) = 0;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (param_2 != plVar12);
    plVar12 = (long *)param_1[2];
    if (plVar12 == (long *)0x0) {
      return;
    }
    plVar14 = (long *)plVar12[1];
    uVar13 = (long)param_2 - 1;
    if (((ulong)param_2 & uVar13) == 0) {
      plVar14 = (long *)((ulong)plVar14 & uVar13);
    }
    else if (param_2 <= plVar14) {
      uVar4 = 0;
      if (param_2 != (long *)0x0) {
        uVar4 = (ulong)plVar14 / (ulong)param_2;
      }
      plVar14 = (long *)((long)plVar14 - uVar4 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
    plVar15 = (long *)*plVar12;
    while (plVar15 != (long *)0x0) {
      plVar16 = (long *)plVar15[1];
      if (((ulong)param_2 & uVar13) == 0) {
        plVar16 = (long *)((ulong)plVar16 & uVar13);
      }
      else if (param_2 <= plVar16) {
        uVar4 = 0;
        if (param_2 != (long *)0x0) {
          uVar4 = (ulong)plVar16 / (ulong)param_2;
        }
        plVar16 = (long *)((long)plVar16 - uVar4 * (long)param_2);
      }
      plVar17 = plVar15;
      if (plVar16 != plVar14) {
        lVar7 = *param_1;
        if (*(long *)(lVar7 + (long)plVar16 * 8) == 0) {
          *(long **)(lVar7 + (long)plVar16 * 8) = plVar12;
          plVar14 = plVar16;
        }
        else {
          *plVar12 = *plVar15;
          *plVar15 = **(undefined8 **)(lVar7 + (long)plVar16 * 8);
          **(long **)(lVar7 + (long)plVar16 * 8) = (long)plVar15;
          plVar17 = plVar12;
        }
      }
      plVar12 = plVar17;
      plVar15 = (long *)*plVar17;
    }
    return;
  }
  plVar15 = param_1;
  plVar12 = param_2;
  func_0x000104c4f740();
  uStack_28 = 0x109489d0c;
  plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,(int)param_5);
  plVar17 = plVar12 + -1;
  plStack_b8 = plVar12 + -2;
  plStack_c0 = plVar12 + -3;
  plVar16 = (long *)((long)plVar12 - (long)plVar15 >> 3);
  plVar14 = plVar15;
  plVar11 = param_3;
  pppppppuVar20 = &ppppppuStack_30;
  plStack_b0 = plVar17;
  plStack_a0 = plVar12;
  plStack_88 = param_3;
  ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((long)plVar16 - 2U == 0 || (long)plVar16 < 2) {
    if (plVar16 < (long *)0x2) {
      return;
    }
    if (plVar16 == (long *)0x2) {
      unaff_x21 = (long *)plVar12[-1];
      unaff_x22 = (long *)*plVar15;
      plVar19 = (long *)*param_3;
      plVar14 = plVar19;
      plVar10 = unaff_x21;
      func_0x000109487ba4();
      param_2 = plVar15;
      plVar16 = plVar15;
      unaff_x28 = param_3;
      if ((plVar14 != (long *)0x0) &&
         (plVar17 = plVar19, plVar10 = unaff_x22, func_0x000109487ba4(), param_2 = plVar14,
         plVar17 != (long *)0x0)) {
        if ((int)plVar17[3] <= (int)plVar14[3]) {
          return;
        }
        *plVar15 = (long)unaff_x21;
        plVar12[-1] = (long)unaff_x22;
        return;
      }
LAB_10948a7a0:
      plVar14 = (long *)&UNK_10f639994;
      uVar21 = 0x10948a7ac;
      FUN_109262df8();
      pplVar5 = &plStack_c0;
      plVar17 = plVar11;
      param_3 = param_4;
      unaff_x23 = plVar19;
      unaff_x24 = plVar12;
      unaff_x27 = plVar16;
      goto SUB_10948a7ac;
    }
  }
  else {
    if (plVar16 == (long *)0x3) {
      plVar10 = plVar15 + 1;
      uVar21 = 0x109489d0c;
      pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto SUB_10948a7ac;
    }
    if (plVar16 == (long *)0x4) {
      plVar12 = plVar15 + 1;
      plVar16 = plVar15 + 2;
      uVar21 = 0x109489d0c;
      plVar11 = plVar17;
      pppppppuVar20 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto SUB_10948a914;
    }
    if (plVar16 == (long *)0x5) {
      plVar12 = plVar15 + 1;
      plVar16 = plVar15 + 2;
      unaff_x23 = plVar15 + 3;
      uStack_28 = 0x109489d0c;
      puVar6 = &stack0xffffffffffffff80;
      uVar21 = 0x10948aa88;
      plVar11 = unaff_x23;
      param_1 = plVar12;
      param_2 = plVar15;
      unaff_x21 = param_3;
      unaff_x22 = plVar16;
      unaff_x24 = plVar17;
      pppppppuVar20 = &ppppppuStack_30;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)plVar16 < 0x18) {
    plVar14 = plVar15 + 1;
    if (((ulong)param_5 & 1) == 0) {
      plVar16 = plVar15;
      if (plVar15 != plVar12 && plVar14 != plVar12) {
        do {
          param_1 = plVar14;
          unaff_x21 = (long *)plVar16[1];
          unaff_x25 = (long *)*param_3;
          plVar14 = unaff_x25;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_2 = plVar15;
          plVar19 = unaff_x23;
          unaff_x28 = param_3;
          if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (long *)*plVar16;
          plVar17 = unaff_x25;
          plVar10 = unaff_x22;
          func_0x000109487ba4();
          plVar19 = plVar14;
          if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
          param_2 = param_1;
          unaff_x23 = plVar14;
          if ((int)plVar14[3] < (int)plVar17[3]) {
            do {
              *param_2 = (long)unaff_x22;
              plVar12 = (long *)*param_3;
              unaff_x23 = plVar12;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              plVar19 = plVar14;
              if (unaff_x23 == (long *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (long *)param_2[-2];
              plVar17 = plVar12;
              plVar10 = unaff_x22;
              func_0x000109487ba4();
              plVar19 = unaff_x23;
              if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
              plVar15 = param_2 + -1;
              param_2 = plVar15;
              plVar14 = unaff_x23;
            } while ((int)unaff_x23[3] < (int)plVar17[3]);
            *plVar15 = (long)unaff_x21;
            plVar12 = plStack_a0;
          }
          plVar14 = param_1 + 1;
          plVar16 = param_1;
        } while (param_1 + 1 != plVar12);
      }
    }
    else if (plVar15 != plVar12 && plVar14 != plVar12) {
      param_1 = (long *)0x0;
      param_2 = plVar15;
      do {
        unaff_x26 = plVar14;
        unaff_x21 = (long *)param_2[1];
        unaff_x25 = (long *)*param_3;
        plVar17 = unaff_x25;
        plVar10 = unaff_x21;
        func_0x000109487ba4();
        plVar19 = unaff_x23;
        plVar16 = plVar15;
        unaff_x28 = param_3;
        if (plVar17 == (long *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (long *)*param_2;
        plVar14 = unaff_x25;
        plVar10 = unaff_x22;
        func_0x000109487ba4();
        plVar19 = plVar17;
        if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
        param_2 = param_1;
        if ((int)plVar17[3] < (int)plVar14[3]) {
          do {
            plVar12 = (long *)((long)plVar15 + (long)param_2);
            plVar12[1] = (long)unaff_x22;
            plVar14 = plVar15;
            if (param_2 == (long *)0x0) goto LAB_10948a330;
            unaff_x25 = (long *)*param_3;
            plVar14 = unaff_x25;
            plVar10 = unaff_x21;
            func_0x000109487ba4();
            plVar19 = plVar17;
            if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (long *)plVar12[-1];
            plVar18 = unaff_x25;
            plVar10 = unaff_x22;
            func_0x000109487ba4();
            plVar19 = plVar14;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            param_2 = param_2 + -1;
            plVar17 = plVar14;
          } while ((int)plVar14[3] < (int)plVar18[3]);
          plVar14 = (long *)((long)plVar15 + (long)param_2 + 8);
LAB_10948a330:
          *plVar14 = (long)unaff_x21;
          plVar12 = plStack_a0;
        }
        param_1 = param_1 + 1;
        plVar14 = unaff_x26 + 1;
        param_2 = unaff_x26;
        unaff_x23 = plVar17;
      } while (unaff_x26 + 1 != plVar12);
    }
  }
  else {
    plStack_98 = plVar15;
    if (param_4 != (long *)0x0) {
      unaff_x21 = plVar15 + ((ulong)plVar16 >> 1);
      unaff_x27 = plVar15;
      if (plVar16 < (long *)0x81) {
        uVar21 = 0x109489e3c;
        pplVar5 = &plStack_c0;
        plVar14 = unaff_x21;
        plVar10 = plVar15;
        param_2 = plVar15;
        unaff_x24 = plVar12;
        unaff_x28 = param_3;
      }
      else {
        uVar21 = 0x109489dd4;
        pplVar5 = &plStack_c0;
        plVar10 = unaff_x21;
        param_2 = plVar15;
        unaff_x24 = plVar12;
        unaff_x28 = param_3;
      }
SUB_10948a7ac:
      do {
        puVar6 = (undefined1 *)((long)pplVar5 + -0x60);
        *(long **)((long)pplVar5 + -0x60) = unaff_x28;
        *(long **)((long)pplVar5 + -0x58) = unaff_x27;
        *(long **)((long)pplVar5 + -0x50) = unaff_x26;
        *(long **)((long)pplVar5 + -0x48) = unaff_x25;
        *(long **)((long)pplVar5 + -0x40) = unaff_x24;
        *(long **)((long)pplVar5 + -0x38) = unaff_x23;
        *(long **)((long)pplVar5 + -0x30) = unaff_x22;
        *(long **)((long)pplVar5 + -0x28) = unaff_x21;
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = param_1;
        *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar20;
        *(undefined8 *)((long)pplVar5 + -8) = uVar21;
        unaff_x24 = (long *)*plVar10;
        unaff_x22 = (long *)*plVar14;
        unaff_x26 = (long *)*param_3;
        plVar15 = unaff_x26;
        plVar12 = unaff_x24;
        plVar16 = plVar17;
        plVar11 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (plVar15 != (long *)0x0) {
          uVar2 = *(uint *)(plVar15 + 3);
          unaff_x27 = (long *)(ulong)uVar2;
          plVar15 = unaff_x26;
          plVar12 = unaff_x22;
          func_0x000109487ba4();
          if (plVar15 != (long *)0x0) {
            uVar3 = *(uint *)(plVar15 + 3);
            unaff_x28 = (long *)(ulong)uVar3;
            unaff_x25 = (long *)*plVar17;
            plVar15 = unaff_x26;
            plVar12 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar2 < (int)uVar3) {
              if (plVar15 != (long *)0x0) {
                if ((int)plVar15[3] < (int)uVar2) {
                  *plVar14 = (long)unaff_x25;
                  goto LAB_10948a8e8;
                }
                *plVar14 = (long)unaff_x24;
                *plVar10 = (long)unaff_x22;
                plVar14 = (long *)*plVar17;
                unaff_x24 = (long *)*param_3;
                plVar15 = unaff_x24;
                plVar12 = plVar14;
                func_0x000109487ba4();
                if ((plVar15 != (long *)0x0) &&
                   (plVar19 = unaff_x24, plVar12 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = plVar15, plVar19 != (long *)0x0)) {
                  if ((int)plVar15[3] < (int)plVar19[3]) {
                    *plVar10 = (long)plVar14;
LAB_10948a8e8:
                    *plVar17 = (long)unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (plVar15 != (long *)0x0) {
              if ((int)uVar2 <= (int)plVar15[3]) {
                return;
              }
              *plVar10 = (long)unaff_x25;
              *plVar17 = (long)unaff_x24;
              plVar17 = (long *)*plVar10;
              unaff_x22 = (long *)*plVar14;
              unaff_x24 = (long *)*param_3;
              plVar15 = unaff_x24;
              plVar12 = plVar17;
              func_0x000109487ba4();
              if ((plVar15 != (long *)0x0) &&
                 (plVar19 = unaff_x24, plVar12 = unaff_x22, func_0x000109487ba4(),
                 unaff_x23 = plVar15, plVar19 != (long *)0x0)) {
                if ((int)plVar19[3] <= (int)plVar15[3]) {
                  return;
                }
                *plVar14 = (long)plVar17;
                *plVar10 = (long)unaff_x22;
                return;
              }
            }
          }
        }
        plVar15 = (long *)&UNK_10f639994;
        uVar21 = 0x10948a914;
        FUN_109262df8();
        param_3 = param_5;
        param_1 = plVar10;
        param_2 = plVar17;
        unaff_x21 = plVar14;
        pppppppuVar20 = (undefined8 *******)((long)pplVar5 + -0x10);
SUB_10948a914:
        *(long **)(puVar6 + -0x60) = unaff_x28;
        *(long **)(puVar6 + -0x58) = unaff_x27;
        *(long **)(puVar6 + -0x50) = unaff_x26;
        *(long **)(puVar6 + -0x48) = unaff_x25;
        *(long **)(puVar6 + -0x40) = unaff_x24;
        *(long **)(puVar6 + -0x38) = unaff_x23;
        *(long **)(puVar6 + -0x30) = unaff_x22;
        *(long **)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = param_1;
        *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar20;
        *(undefined8 *)(puVar6 + -8) = uVar21;
        uVar21 = 0x10948a94c;
        pplVar5 = (long **)(puVar6 + -0x60);
        plVar14 = plVar15;
        plVar10 = plVar12;
        plVar17 = plVar16;
        param_5 = param_3;
        param_1 = plVar12;
        param_2 = plVar15;
        unaff_x21 = param_3;
        unaff_x22 = plVar16;
        unaff_x23 = plVar11;
        pppppppuVar20 = (undefined8 *******)(puVar6 + -0x10);
      } while( true );
    }
    if (plVar15 != plVar12) {
      plVar17 = (long *)((long)plVar16 - 2U >> 1);
      plVar14 = unaff_x25;
      plStack_a8 = plVar17;
      plStack_90 = plVar16;
      do {
        plVar10 = plVar17;
        if ((long)plVar17 <= (long)plStack_a8) {
          unaff_x26 = (long *)((long)plVar17 << 1 | 1);
          param_1 = plVar15 + (long)unaff_x26;
          param_2 = (long *)((long)plVar17 * 2 + 2);
          plVar18 = (long *)*param_1;
          unaff_x21 = plVar18;
          unaff_x25 = plVar14;
          plStack_b8 = plVar17;
          if ((long)param_2 < (long)plVar16) {
            unaff_x23 = (long *)*param_3;
            plVar14 = unaff_x23;
            plVar10 = plVar18;
            func_0x000109487ba4();
            plVar19 = unaff_x23;
            plVar16 = plVar15;
            unaff_x28 = param_3;
            if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
            plVar12 = param_1 + 1;
            unaff_x25 = (long *)*plVar12;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar14;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar17 = plVar12;
            unaff_x21 = unaff_x25;
            plVar12 = plStack_a0;
            if ((int)plVar9[3] <= (int)plVar14[3]) {
              plVar17 = param_1;
              unaff_x21 = plVar18;
              param_2 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (long *)*param_3;
            plVar17 = param_1;
            param_2 = unaff_x26;
          }
          unaff_x26 = param_2;
          param_2 = plVar15 + (long)plStack_b8;
          unaff_x22 = (long *)*param_2;
          plVar14 = unaff_x23;
          plVar10 = unaff_x21;
          func_0x000109487ba4();
          param_1 = plVar17;
          plVar19 = unaff_x23;
          plVar16 = plVar15;
          unaff_x28 = param_3;
          if ((plVar14 == (long *)0x0) ||
             (plVar18 = unaff_x23, plVar10 = unaff_x22, func_0x000109487ba4(), unaff_x25 = plVar14,
             plVar18 == (long *)0x0)) goto LAB_10948a7a0;
          plVar10 = plStack_b8;
          plVar16 = plStack_90;
          plVar19 = unaff_x22;
          if ((int)plVar18[3] <= (int)plVar14[3]) {
            do {
              plStack_b0 = plVar19;
              plVar16 = plVar17;
              *param_2 = (long)unaff_x21;
              if ((long)plStack_a8 < (long)unaff_x26) break;
              param_2 = (long *)((long)unaff_x26 << 1 | 1);
              param_1 = plStack_98 + (long)param_2;
              unaff_x22 = (long *)((long)unaff_x26 * 2 + 2);
              plVar15 = (long *)*param_1;
              unaff_x21 = plVar15;
              if ((long)unaff_x22 < (long)plStack_90) {
                unaff_x23 = (long *)*param_3;
                plVar18 = unaff_x23;
                plVar10 = plVar15;
                func_0x000109487ba4();
                plVar19 = unaff_x23;
                unaff_x25 = plVar14;
                if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
                plVar12 = param_1 + 1;
                unaff_x26 = (long *)*plVar12;
                plVar14 = unaff_x23;
                plVar10 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = plVar18;
                if (plVar14 == (long *)0x0) goto LAB_10948a7a0;
                plVar17 = plVar12;
                unaff_x21 = unaff_x26;
                plVar12 = plStack_a0;
                unaff_x26 = unaff_x22;
                if ((int)plVar14[3] <= (int)plVar18[3]) {
                  plVar17 = param_1;
                  unaff_x21 = plVar15;
                  unaff_x26 = param_2;
                }
              }
              else {
                unaff_x23 = (long *)*param_3;
                plVar17 = param_1;
                plVar18 = plVar14;
                unaff_x26 = param_2;
              }
              plVar14 = unaff_x23;
              plVar10 = unaff_x21;
              func_0x000109487ba4();
              unaff_x22 = plStack_b0;
              param_1 = plVar17;
              plVar19 = unaff_x23;
              unaff_x25 = plVar18;
              if ((plVar14 == (long *)0x0) ||
                 (plVar15 = unaff_x23, plVar10 = plStack_b0, func_0x000109487ba4(),
                 unaff_x25 = plVar14, plVar15 == (long *)0x0)) goto LAB_10948a7a0;
              param_2 = plVar16;
              plVar19 = plStack_b0;
            } while ((int)plVar15[3] <= (int)plVar14[3]);
            *plVar16 = (long)unaff_x22;
            plVar10 = plStack_b8;
            plVar16 = plStack_90;
            plVar15 = plStack_98;
          }
        }
        plVar17 = (long *)((long)plVar10 + -1);
      } while (plVar10 != (long *)0x0);
      do {
        plVar14 = (long *)0x0;
        plStack_a8 = (long *)*plVar15;
        plVar17 = (long *)((long)plVar16 - 2U >> 1);
        plStack_a0 = plVar12;
        plStack_90 = plVar17;
        do {
          unaff_x25 = plVar15 + (long)plVar14;
          param_2 = unaff_x25 + 1;
          unaff_x21 = (long *)*param_2;
          unaff_x26 = (long *)((long)plVar14 << 1 | 1);
          plVar12 = (long *)((long)plVar14 * 2 + 2);
          plVar14 = unaff_x26;
          param_1 = param_2;
          plVar10 = unaff_x21;
          if ((long)plVar12 < (long)plVar16) {
            unaff_x23 = (long *)*param_3;
            plVar18 = unaff_x23;
            func_0x000109487ba4();
            param_1 = plVar15;
            plVar19 = unaff_x23;
            unaff_x28 = param_3;
            if (plVar18 == (long *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (long *)*unaff_x28;
            plVar9 = unaff_x23;
            plVar10 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = plVar18;
            if (plVar9 == (long *)0x0) goto LAB_10948a7a0;
            plVar14 = plVar12;
            plVar17 = plStack_90;
            param_1 = unaff_x28;
            plVar10 = unaff_x25;
            param_3 = plStack_88;
            if ((int)plVar9[3] <= (int)plVar18[3]) {
              plVar14 = unaff_x26;
              param_1 = param_2;
              plVar10 = unaff_x21;
            }
          }
          *plVar15 = (long)plVar10;
          plVar15 = param_1;
        } while ((long)plVar14 <= (long)plVar17);
        plVar12 = plStack_a0 + -1;
        if (param_1 == plVar12) {
          *param_1 = (long)plStack_a8;
        }
        else {
          *param_1 = *plVar12;
          *plVar12 = (long)plStack_a8;
          lVar7 = (long)param_1 + (8 - (long)plStack_98) >> 3;
          if (1 < lVar7) {
            unaff_x26 = (long *)(lVar7 - 2U >> 1);
            plVar14 = plStack_98 + (long)unaff_x26;
            unaff_x22 = (long *)*plVar14;
            unaff_x21 = (long *)*param_1;
            unaff_x25 = (long *)*param_3;
            plVar15 = unaff_x25;
            plVar10 = unaff_x22;
            plStack_90 = plVar16;
            func_0x000109487ba4();
            param_2 = param_1;
            plVar19 = unaff_x23;
            plVar16 = plVar14;
            unaff_x28 = param_3;
            if ((plVar15 == (long *)0x0) ||
               (plVar17 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(), plVar19 = plVar15,
               plVar17 == (long *)0x0)) goto LAB_10948a7a0;
            plVar16 = plStack_90;
            unaff_x23 = plVar15;
            if ((int)plVar15[3] < (int)plVar17[3]) {
              do {
                param_1 = plVar14;
                *param_2 = (long)unaff_x22;
                unaff_x23 = plVar15;
                if (unaff_x26 == (long *)0x0) break;
                unaff_x26 = (long *)((long)unaff_x26 - 1U >> 1);
                plVar16 = plStack_98 + (long)unaff_x26;
                unaff_x22 = (long *)*plVar16;
                unaff_x25 = (long *)*param_3;
                unaff_x23 = unaff_x25;
                plVar10 = unaff_x22;
                func_0x000109487ba4();
                plVar19 = plVar15;
                if ((unaff_x23 == (long *)0x0) ||
                   (plVar17 = unaff_x25, plVar10 = unaff_x21, func_0x000109487ba4(),
                   plVar19 = unaff_x23, plVar17 == (long *)0x0)) goto LAB_10948a7a0;
                param_2 = param_1;
                plVar15 = unaff_x23;
                plVar14 = plVar16;
              } while ((int)unaff_x23[3] < (int)plVar17[3]);
              *param_1 = (long)unaff_x21;
              plVar16 = plStack_90;
            }
          }
        }
        bVar1 = 2 < (long)plVar16;
        plVar16 = (long *)((long)plVar16 + -1);
        plVar15 = plStack_98;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 109489d0c; end: 10948ae0f;  */

/* WARNING: Possible PIC construction at 0x000109489dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948a948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948aa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010948acac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109489e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010948ac98) */
/* WARNING: Removing unreachable block (ram,0x00010948accc) */
/* WARNING: Removing unreachable block (ram,0x00010948acd8) */
/* WARNING: Removing unreachable block (ram,0x00010948ace4) */
/* WARNING: Removing unreachable block (ram,0x00010948acfc) */
/* WARNING: Removing unreachable block (ram,0x00010948ad14) */
/* WARNING: Removing unreachable block (ram,0x00010948ad24) */
/* WARNING: Removing unreachable block (ram,0x00010948ad2c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad84) */
/* WARNING: Removing unreachable block (ram,0x00010948ad38) */
/* WARNING: Removing unreachable block (ram,0x00010948ad4c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad68) */
/* WARNING: Removing unreachable block (ram,0x00010948ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ad88) */
/* WARNING: Removing unreachable block (ram,0x00010948adf4) */
/* WARNING: Removing unreachable block (ram,0x00010948ada0) */
/* WARNING: Removing unreachable block (ram,0x00010948adb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aa88) */
/* WARNING: Removing unreachable block (ram,0x00010948aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010948aab8) */
/* WARNING: Removing unreachable block (ram,0x00010948aac8) */
/* WARNING: Removing unreachable block (ram,0x00010948aaec) */
/* WARNING: Removing unreachable block (ram,0x00010948ab00) */
/* WARNING: Removing unreachable block (ram,0x00010948ab10) */
/* WARNING: Removing unreachable block (ram,0x00010948ab34) */
/* WARNING: Removing unreachable block (ram,0x00010948ab48) */
/* WARNING: Removing unreachable block (ram,0x00010948ab58) */
/* WARNING: Removing unreachable block (ram,0x00010948ab7c) */
/* WARNING: Removing unreachable block (ram,0x00010948abc4) */
/* WARNING: Removing unreachable block (ram,0x00010948ab90) */
/* WARNING: Removing unreachable block (ram,0x00010948aba0) */
/* WARNING: Removing unreachable block (ram,0x00010948aba8) */
/* WARNING: Removing unreachable block (ram,0x00010948a94c) */
/* WARNING: Removing unreachable block (ram,0x00010948a968) */
/* WARNING: Removing unreachable block (ram,0x00010948a97c) */
/* WARNING: Removing unreachable block (ram,0x00010948a98c) */
/* WARNING: Removing unreachable block (ram,0x00010948a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010948a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010948aa40) */
/* WARNING: Removing unreachable block (ram,0x00010948aa0c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa1c) */
/* WARNING: Removing unreachable block (ram,0x00010948aa24) */
/* WARNING: Removing unreachable block (ram,0x000109489fec) */
/* WARNING: Removing unreachable block (ram,0x00010948a174) */
/* WARNING: Removing unreachable block (ram,0x00010948a17c) */
/* WARNING: Removing unreachable block (ram,0x00010948a008) */
/* WARNING: Removing unreachable block (ram,0x000109489e00) */
/* WARNING: Removing unreachable block (ram,0x000109489e3c) */
/* WARNING: Removing unreachable block (ram,0x000109489e50) */
/* WARNING: Removing unreachable block (ram,0x000109489e60) */
/* WARNING: Removing unreachable block (ram,0x000109489e74) */
/* WARNING: Removing unreachable block (ram,0x00010948a034) */
/* WARNING: Removing unreachable block (ram,0x00010948a048) */
/* WARNING: Removing unreachable block (ram,0x00010948a078) */
/* WARNING: Removing unreachable block (ram,0x00010948a07c) */
/* WARNING: Removing unreachable block (ram,0x00010948a088) */
/* WARNING: Removing unreachable block (ram,0x00010948a098) */
/* WARNING: Removing unreachable block (ram,0x00010948a054) */
/* WARNING: Removing unreachable block (ram,0x00010948a058) */
/* WARNING: Removing unreachable block (ram,0x00010948a068) */
/* WARNING: Removing unreachable block (ram,0x00010948a074) */
/* WARNING: Removing unreachable block (ram,0x00010948a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010948a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010948a0dc) */
/* WARNING: Removing unreachable block (ram,0x00010948a0e4) */
/* WARNING: Removing unreachable block (ram,0x00010948a104) */
/* WARNING: Removing unreachable block (ram,0x00010948a108) */
/* WARNING: Removing unreachable block (ram,0x00010948a11c) */
/* WARNING: Removing unreachable block (ram,0x00010948a128) */
/* WARNING: Removing unreachable block (ram,0x00010948a13c) */
/* WARNING: Removing unreachable block (ram,0x00010948a148) */
/* WARNING: Removing unreachable block (ram,0x00010948a150) */
/* WARNING: Removing unreachable block (ram,0x00010948a160) */
/* WARNING: Removing unreachable block (ram,0x00010948a168) */
/* WARNING: Removing unreachable block (ram,0x000109489e84) */
/* WARNING: Removing unreachable block (ram,0x000109489e88) */
/* WARNING: Removing unreachable block (ram,0x000109489ea0) */
/* WARNING: Removing unreachable block (ram,0x000109489eb4) */
/* WARNING: Removing unreachable block (ram,0x000109489ec8) */
/* WARNING: Removing unreachable block (ram,0x000109489efc) */
/* WARNING: Removing unreachable block (ram,0x000109489f00) */
/* WARNING: Removing unreachable block (ram,0x000109489f08) */
/* WARNING: Removing unreachable block (ram,0x000109489f18) */
/* WARNING: Removing unreachable block (ram,0x000109489edc) */
/* WARNING: Removing unreachable block (ram,0x000109489eec) */
/* WARNING: Removing unreachable block (ram,0x000109489ef8) */
/* WARNING: Removing unreachable block (ram,0x000109489f24) */
/* WARNING: Removing unreachable block (ram,0x000109489fb0) */
/* WARNING: Removing unreachable block (ram,0x000109489f2c) */
/* WARNING: Removing unreachable block (ram,0x000109489f38) */
/* WARNING: Removing unreachable block (ram,0x000109489f48) */
/* WARNING: Removing unreachable block (ram,0x000109489f5c) */
/* WARNING: Removing unreachable block (ram,0x000109489f70) */
/* WARNING: Removing unreachable block (ram,0x000109489f80) */
/* WARNING: Removing unreachable block (ram,0x000109489f94) */
/* WARNING: Removing unreachable block (ram,0x000109489fa0) */
/* WARNING: Removing unreachable block (ram,0x000109489fa8) */
/* WARNING: Removing unreachable block (ram,0x000109489fb4) */
/* WARNING: Removing unreachable block (ram,0x000109489fc0) */
/* WARNING: Removing unreachable block (ram,0x000109489fc8) */
/* WARNING: Removing unreachable block (ram,0x00010948a00c) */
/* WARNING: Removing unreachable block (ram,0x000109489fd8) */
/* WARNING: Removing unreachable block (ram,0x00010948abd0) */
/* WARNING: Removing unreachable block (ram,0x00010948ac64) */
/* WARNING: Removing unreachable block (ram,0x00010948ac9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac6c) */
/* WARNING: Removing unreachable block (ram,0x00010948adb8) */
/* WARNING: Removing unreachable block (ram,0x00010948ac74) */
/* WARNING: Removing unreachable block (ram,0x00010948ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac0c) */
/* WARNING: Removing unreachable block (ram,0x00010948ac10) */
/* WARNING: Removing unreachable block (ram,0x00010948acb4) */
/* WARNING: Removing unreachable block (ram,0x00010948ac18) */
/* WARNING: Removing unreachable block (ram,0x00010948ac34) */
/* WARNING: Removing unreachable block (ram,0x00010948ae04) */
/* WARNING: Removing unreachable block (ram,0x00010948ae98) */
/* WARNING: Removing unreachable block (ram,0x00010948ae74) */
/* WARNING: Removing unreachable block (ram,0x00010948ae9c) */
/* WARNING: Removing unreachable block (ram,0x00010948ae80) */
/* WARNING: Removing unreachable block (ram,0x00010948ae8c) */
/* WARNING: Removing unreachable block (ram,0x00010948aea0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeac) */
/* WARNING: Removing unreachable block (ram,0x00010948aeb4) */
/* WARNING: Removing unreachable block (ram,0x00010948aed0) */
/* WARNING: Removing unreachable block (ram,0x00010948aeec) */
/* WARNING: Removing unreachable block (ram,0x00010948aed8) */
/* WARNING: Removing unreachable block (ram,0x00010948aee0) */
/* WARNING: Removing unreachable block (ram,0x00010948aef0) */
/* WARNING: Removing unreachable block (ram,0x00010948aec0) */
/* WARNING: Removing unreachable block (ram,0x00010948b04c) */
/* WARNING: Removing unreachable block (ram,0x00010948aecc) */
/* WARNING: Removing unreachable block (ram,0x00010948aef8) */
/* WARNING: Removing unreachable block (ram,0x00010948af00) */
/* WARNING: Removing unreachable block (ram,0x00010948af3c) */
/* WARNING: Removing unreachable block (ram,0x00010948af44) */
/* WARNING: Removing unreachable block (ram,0x00010948af48) */
/* WARNING: Removing unreachable block (ram,0x00010948af4c) */
/* WARNING: Removing unreachable block (ram,0x00010948af68) */
/* WARNING: Removing unreachable block (ram,0x00010948af7c) */
/* WARNING: Removing unreachable block (ram,0x00010948afa8) */
/* WARNING: Removing unreachable block (ram,0x00010948af98) */
/* WARNING: Removing unreachable block (ram,0x00010948afb0) */
/* WARNING: Removing unreachable block (ram,0x00010948afa0) */
/* WARNING: Removing unreachable block (ram,0x00010948afb8) */
/* WARNING: Removing unreachable block (ram,0x00010948afd0) */
/* WARNING: Removing unreachable block (ram,0x00010948afec) */
/* WARNING: Removing unreachable block (ram,0x00010948b010) */
/* WARNING: Removing unreachable block (ram,0x00010948affc) */
/* WARNING: Removing unreachable block (ram,0x00010948b004) */
/* WARNING: Removing unreachable block (ram,0x00010948b014) */
/* WARNING: Removing unreachable block (ram,0x00010948afc4) */
/* WARNING: Removing unreachable block (ram,0x00010948b01c) */
/* WARNING: Removing unreachable block (ram,0x00010948b020) */
/* WARNING: Removing unreachable block (ram,0x00010948b030) */
/* WARNING: Removing unreachable block (ram,0x00010948ac48) */
/* WARNING: Removing unreachable block (ram,0x00010948ac58) */
/* WARNING: Removing unreachable block (ram,0x000109489dd4) */
/* WARNING: Removing unreachable block (ram,0x00010948acb0) */
/* WARNING: Removing unreachable block (ram,0x00010948add0) */
/* WARNING: Removing unreachable block (ram,0x00010948add4) */

void FUN_109489d0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar2 = &stack0xfffffffffffffff0;
  puStack_88 = (undefined8 *)CONCAT44(puStack_88._4_4_,(int)param_5);
  puVar10 = param_2 + -1;
  puStack_98 = param_2 + -2;
  plStack_a0 = param_2 + -3;
  puVar9 = (undefined8 *)((long)param_2 - (long)param_1 >> 3);
  puVar12 = param_1;
  puVar7 = param_3;
  puStack_90 = puVar10;
  puStack_80 = param_2;
  puStack_68 = param_3;
  if ((long)puVar9 - 2U == 0 || (long)puVar9 < 2) {
    if (puVar9 < (undefined8 *)0x2) {
      return;
    }
    if (puVar9 == (undefined8 *)0x2) {
      unaff_x21 = (undefined8 *)param_2[-1];
      unaff_x22 = (undefined8 *)*param_1;
      puVar13 = (undefined8 *)*param_3;
      puVar12 = puVar13;
      puVar6 = unaff_x21;
      func_0x000109487ba4();
      unaff_x20 = param_1;
      puVar9 = param_1;
      unaff_x28 = param_3;
      if ((puVar12 != (undefined8 *)0x0) &&
         (puVar10 = puVar13, puVar6 = unaff_x22, func_0x000109487ba4(), unaff_x20 = puVar12,
         puVar10 != (undefined8 *)0x0)) {
        if (*(int *)(puVar10 + 3) <= *(int *)(puVar12 + 3)) {
          return;
        }
        *param_1 = unaff_x21;
        param_2[-1] = unaff_x22;
        return;
      }
LAB_10948a7a0:
      puVar12 = (undefined8 *)&UNK_10f639994;
      unaff_x30 = 0x10948a7ac;
      FUN_109262df8();
      register0x00000008 = (BADSPACEBASE *)&plStack_a0;
      puVar10 = puVar7;
      param_3 = param_4;
      unaff_x23 = puVar13;
      unaff_x24 = param_2;
      unaff_x27 = puVar9;
      unaff_x29 = puVar2;
      goto SUB_10948a7ac;
    }
  }
  else {
    if (puVar9 == (undefined8 *)0x3) {
      puVar6 = param_1 + 1;
      goto SUB_10948a7ac;
    }
    if (puVar9 == (undefined8 *)0x4) {
      puVar9 = param_1 + 1;
      puVar7 = param_1 + 2;
      puVar13 = puVar10;
      goto SUB_10948a914;
    }
    if (puVar9 == (undefined8 *)0x5) {
      puVar9 = param_1 + 1;
      puVar7 = param_1 + 2;
      unaff_x23 = param_1 + 3;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = 0x10948aa88;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      puVar13 = unaff_x23;
      unaff_x19 = puVar9;
      unaff_x20 = param_1;
      unaff_x21 = param_3;
      unaff_x22 = puVar7;
      unaff_x24 = puVar10;
      goto SUB_10948a914;
    }
  }
  unaff_x22 = param_4;
  if ((long)puVar9 < 0x18) {
    puVar12 = param_1 + 1;
    if (((ulong)param_5 & 1) == 0) {
      puVar9 = param_1;
      if (param_1 != param_2 && puVar12 != param_2) {
        do {
          unaff_x19 = puVar12;
          unaff_x21 = (undefined8 *)puVar9[1];
          unaff_x25 = (undefined8 *)*param_3;
          puVar12 = unaff_x25;
          puVar6 = unaff_x21;
          func_0x000109487ba4();
          unaff_x20 = param_1;
          puVar13 = unaff_x23;
          unaff_x28 = param_3;
          if (puVar12 == (undefined8 *)0x0) goto LAB_10948a7a0;
          unaff_x22 = (undefined8 *)*puVar9;
          puVar10 = unaff_x25;
          puVar6 = unaff_x22;
          func_0x000109487ba4();
          puVar13 = puVar12;
          if (puVar10 == (undefined8 *)0x0) goto LAB_10948a7a0;
          unaff_x20 = unaff_x19;
          unaff_x23 = puVar12;
          if (*(int *)(puVar12 + 3) < *(int *)(puVar10 + 3)) {
            do {
              *unaff_x20 = unaff_x22;
              param_2 = (undefined8 *)*param_3;
              unaff_x23 = param_2;
              puVar6 = unaff_x21;
              func_0x000109487ba4();
              puVar13 = puVar12;
              if (unaff_x23 == (undefined8 *)0x0) goto LAB_10948a7a0;
              unaff_x22 = (undefined8 *)unaff_x20[-2];
              puVar10 = param_2;
              puVar6 = unaff_x22;
              func_0x000109487ba4();
              puVar13 = unaff_x23;
              if (puVar10 == (undefined8 *)0x0) goto LAB_10948a7a0;
              param_1 = unaff_x20 + -1;
              unaff_x20 = param_1;
              puVar12 = unaff_x23;
            } while (*(int *)(unaff_x23 + 3) < *(int *)(puVar10 + 3));
            *param_1 = unaff_x21;
            param_2 = puStack_80;
          }
          puVar12 = unaff_x19 + 1;
          puVar9 = unaff_x19;
        } while (unaff_x19 + 1 != param_2);
      }
    }
    else if (param_1 != param_2 && puVar12 != param_2) {
      unaff_x19 = (undefined8 *)0x0;
      unaff_x20 = param_1;
      do {
        unaff_x26 = puVar12;
        unaff_x21 = (undefined8 *)unaff_x20[1];
        unaff_x25 = (undefined8 *)*param_3;
        puVar10 = unaff_x25;
        puVar6 = unaff_x21;
        func_0x000109487ba4();
        puVar13 = unaff_x23;
        puVar9 = param_1;
        unaff_x28 = param_3;
        if (puVar10 == (undefined8 *)0x0) goto LAB_10948a7a0;
        unaff_x22 = (undefined8 *)*unaff_x20;
        puVar12 = unaff_x25;
        puVar6 = unaff_x22;
        func_0x000109487ba4();
        puVar13 = puVar10;
        if (puVar12 == (undefined8 *)0x0) goto LAB_10948a7a0;
        unaff_x20 = unaff_x19;
        if (*(int *)(puVar10 + 3) < *(int *)(puVar12 + 3)) {
          do {
            param_2 = (undefined8 *)((long)param_1 + (long)unaff_x20);
            param_2[1] = unaff_x22;
            puVar12 = param_1;
            if (unaff_x20 == (undefined8 *)0x0) goto LAB_10948a330;
            unaff_x25 = (undefined8 *)*param_3;
            puVar12 = unaff_x25;
            puVar6 = unaff_x21;
            func_0x000109487ba4();
            puVar13 = puVar10;
            if (puVar12 == (undefined8 *)0x0) goto LAB_10948a7a0;
            unaff_x22 = (undefined8 *)param_2[-1];
            puVar11 = unaff_x25;
            puVar6 = unaff_x22;
            func_0x000109487ba4();
            puVar13 = puVar12;
            if (puVar11 == (undefined8 *)0x0) goto LAB_10948a7a0;
            unaff_x20 = unaff_x20 + -1;
            puVar10 = puVar12;
          } while (*(int *)(puVar12 + 3) < *(int *)(puVar11 + 3));
          puVar12 = (undefined8 *)((long)param_1 + (long)unaff_x20 + 8);
LAB_10948a330:
          *puVar12 = unaff_x21;
          param_2 = puStack_80;
        }
        unaff_x19 = unaff_x19 + 1;
        puVar12 = unaff_x26 + 1;
        unaff_x20 = unaff_x26;
        unaff_x23 = puVar10;
      } while (unaff_x26 + 1 != param_2);
    }
  }
  else {
    puStack_78 = param_1;
    if (param_4 != (undefined8 *)0x0) {
      unaff_x21 = param_1 + ((ulong)puVar9 >> 1);
      unaff_x27 = param_1;
      if (puVar9 < (undefined8 *)0x81) {
        unaff_x30 = 0x109489e3c;
        register0x00000008 = (BADSPACEBASE *)&plStack_a0;
        puVar12 = unaff_x21;
        puVar6 = param_1;
        unaff_x20 = param_1;
        unaff_x24 = param_2;
        unaff_x28 = param_3;
        unaff_x29 = puVar2;
      }
      else {
        unaff_x30 = 0x109489dd4;
        register0x00000008 = (BADSPACEBASE *)&plStack_a0;
        puVar6 = unaff_x21;
        unaff_x20 = param_1;
        unaff_x24 = param_2;
        unaff_x28 = param_3;
        unaff_x29 = puVar2;
      }
SUB_10948a7ac:
      do {
        *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x24 = (undefined8 *)*puVar6;
        unaff_x22 = (undefined8 *)*puVar12;
        unaff_x26 = (undefined8 *)*param_3;
        puVar11 = unaff_x26;
        puVar9 = unaff_x24;
        puVar7 = puVar10;
        puVar13 = param_3;
        func_0x000109487ba4();
        unaff_x23 = param_3;
        if (puVar11 != (undefined8 *)0x0) {
          uVar3 = *(uint *)(puVar11 + 3);
          unaff_x27 = (undefined8 *)(ulong)uVar3;
          puVar11 = unaff_x26;
          puVar9 = unaff_x22;
          func_0x000109487ba4();
          if (puVar11 != (undefined8 *)0x0) {
            uVar4 = *(uint *)(puVar11 + 3);
            unaff_x28 = (undefined8 *)(ulong)uVar4;
            unaff_x25 = (undefined8 *)*puVar10;
            puVar11 = unaff_x26;
            puVar9 = unaff_x25;
            func_0x000109487ba4();
            if ((int)uVar3 < (int)uVar4) {
              if (puVar11 != (undefined8 *)0x0) {
                if (*(int *)(puVar11 + 3) < (int)uVar3) {
                  *puVar12 = unaff_x25;
                  goto LAB_10948a8e8;
                }
                *puVar12 = unaff_x24;
                *puVar6 = unaff_x22;
                puVar12 = (undefined8 *)*puVar10;
                unaff_x24 = (undefined8 *)*param_3;
                puVar11 = unaff_x24;
                puVar9 = puVar12;
                func_0x000109487ba4();
                if ((puVar11 != (undefined8 *)0x0) &&
                   (puVar5 = unaff_x24, puVar9 = unaff_x22, func_0x000109487ba4(),
                   unaff_x23 = puVar11, puVar5 != (undefined8 *)0x0)) {
                  if (*(int *)(puVar11 + 3) < *(int *)(puVar5 + 3)) {
                    *puVar6 = puVar12;
LAB_10948a8e8:
                    *puVar10 = unaff_x22;
                  }
                  return;
                }
              }
            }
            else if (puVar11 != (undefined8 *)0x0) {
              if ((int)uVar3 <= *(int *)(puVar11 + 3)) {
                return;
              }
              *puVar6 = unaff_x25;
              *puVar10 = unaff_x24;
              puVar10 = (undefined8 *)*puVar6;
              unaff_x22 = (undefined8 *)*puVar12;
              unaff_x24 = (undefined8 *)*param_3;
              puVar11 = unaff_x24;
              puVar9 = puVar10;
              func_0x000109487ba4();
              if ((puVar11 != (undefined8 *)0x0) &&
                 (puVar5 = unaff_x24, puVar9 = unaff_x22, func_0x000109487ba4(), unaff_x23 = puVar11
                 , puVar5 != (undefined8 *)0x0)) {
                if (*(int *)(puVar5 + 3) <= *(int *)(puVar11 + 3)) {
                  return;
                }
                *puVar12 = puVar10;
                *puVar6 = unaff_x22;
                return;
              }
            }
          }
        }
        param_1 = (undefined8 *)&UNK_10f639994;
        unaff_x30 = 0x10948a914;
        FUN_109262df8();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
        param_3 = param_5;
        unaff_x19 = puVar6;
        unaff_x20 = puVar10;
        unaff_x21 = puVar12;
SUB_10948a914:
        *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x30 = 0x10948a94c;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
        puVar12 = param_1;
        puVar6 = puVar9;
        puVar10 = puVar7;
        param_5 = param_3;
        unaff_x19 = puVar9;
        unaff_x20 = param_1;
        unaff_x21 = param_3;
        unaff_x22 = puVar7;
        unaff_x23 = puVar13;
      } while( true );
    }
    if (param_1 != param_2) {
      puVar10 = (undefined8 *)((long)puVar9 - 2U >> 1);
      puVar12 = unaff_x25;
      puStack_88 = puVar10;
      puStack_70 = puVar9;
      do {
        puVar6 = puVar10;
        if ((long)puVar10 <= (long)puStack_88) {
          unaff_x26 = (undefined8 *)((long)puVar10 << 1 | 1);
          unaff_x19 = param_1 + (long)unaff_x26;
          unaff_x20 = (undefined8 *)((long)puVar10 * 2 + 2);
          puVar11 = (undefined8 *)*unaff_x19;
          unaff_x21 = puVar11;
          unaff_x25 = puVar12;
          puStack_98 = puVar10;
          if ((long)unaff_x20 < (long)puVar9) {
            unaff_x23 = (undefined8 *)*param_3;
            puVar12 = unaff_x23;
            puVar6 = puVar11;
            func_0x000109487ba4();
            puVar13 = unaff_x23;
            puVar9 = param_1;
            unaff_x28 = param_3;
            if (puVar12 == (undefined8 *)0x0) goto LAB_10948a7a0;
            param_2 = unaff_x19 + 1;
            unaff_x25 = (undefined8 *)*param_2;
            puVar5 = unaff_x23;
            puVar6 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = puVar12;
            if (puVar5 == (undefined8 *)0x0) goto LAB_10948a7a0;
            puVar10 = param_2;
            unaff_x21 = unaff_x25;
            param_2 = puStack_80;
            if (*(int *)(puVar5 + 3) <= *(int *)(puVar12 + 3)) {
              puVar10 = unaff_x19;
              unaff_x21 = puVar11;
              unaff_x20 = unaff_x26;
            }
          }
          else {
            unaff_x23 = (undefined8 *)*param_3;
            puVar10 = unaff_x19;
            unaff_x20 = unaff_x26;
          }
          unaff_x26 = unaff_x20;
          unaff_x20 = param_1 + (long)puStack_98;
          unaff_x22 = (undefined8 *)*unaff_x20;
          puVar12 = unaff_x23;
          puVar6 = unaff_x21;
          func_0x000109487ba4();
          unaff_x19 = puVar10;
          puVar13 = unaff_x23;
          puVar9 = param_1;
          unaff_x28 = param_3;
          if ((puVar12 == (undefined8 *)0x0) ||
             (puVar11 = unaff_x23, puVar6 = unaff_x22, func_0x000109487ba4(), unaff_x25 = puVar12,
             puVar11 == (undefined8 *)0x0)) goto LAB_10948a7a0;
          puVar6 = puStack_98;
          puVar9 = puStack_70;
          puVar13 = unaff_x22;
          if (*(int *)(puVar11 + 3) <= *(int *)(puVar12 + 3)) {
            do {
              puStack_90 = puVar13;
              puVar9 = puVar10;
              *unaff_x20 = unaff_x21;
              if ((long)puStack_88 < (long)unaff_x26) break;
              unaff_x20 = (undefined8 *)((long)unaff_x26 << 1 | 1);
              unaff_x19 = puStack_78 + (long)unaff_x20;
              unaff_x22 = (undefined8 *)((long)unaff_x26 * 2 + 2);
              puVar11 = (undefined8 *)*unaff_x19;
              unaff_x21 = puVar11;
              if ((long)unaff_x22 < (long)puStack_70) {
                unaff_x23 = (undefined8 *)*param_3;
                puVar5 = unaff_x23;
                puVar6 = puVar11;
                func_0x000109487ba4();
                puVar13 = unaff_x23;
                unaff_x25 = puVar12;
                if (puVar5 == (undefined8 *)0x0) goto LAB_10948a7a0;
                param_2 = unaff_x19 + 1;
                unaff_x26 = (undefined8 *)*param_2;
                puVar12 = unaff_x23;
                puVar6 = unaff_x26;
                func_0x000109487ba4();
                unaff_x25 = puVar5;
                if (puVar12 == (undefined8 *)0x0) goto LAB_10948a7a0;
                puVar10 = param_2;
                unaff_x21 = unaff_x26;
                param_2 = puStack_80;
                unaff_x26 = unaff_x22;
                if (*(int *)(puVar12 + 3) <= *(int *)(puVar5 + 3)) {
                  puVar10 = unaff_x19;
                  unaff_x21 = puVar11;
                  unaff_x26 = unaff_x20;
                }
              }
              else {
                unaff_x23 = (undefined8 *)*param_3;
                puVar10 = unaff_x19;
                puVar5 = puVar12;
                unaff_x26 = unaff_x20;
              }
              puVar12 = unaff_x23;
              puVar6 = unaff_x21;
              func_0x000109487ba4();
              unaff_x22 = puStack_90;
              unaff_x19 = puVar10;
              puVar13 = unaff_x23;
              unaff_x25 = puVar5;
              if ((puVar12 == (undefined8 *)0x0) ||
                 (puVar11 = unaff_x23, puVar6 = puStack_90, func_0x000109487ba4(),
                 unaff_x25 = puVar12, puVar11 == (undefined8 *)0x0)) goto LAB_10948a7a0;
              unaff_x20 = puVar9;
              puVar13 = puStack_90;
            } while (*(int *)(puVar11 + 3) <= *(int *)(puVar12 + 3));
            *puVar9 = unaff_x22;
            puVar6 = puStack_98;
            puVar9 = puStack_70;
            param_1 = puStack_78;
          }
        }
        puVar10 = (undefined8 *)((long)puVar6 + -1);
      } while (puVar6 != (undefined8 *)0x0);
      do {
        puVar12 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)*param_1;
        puVar10 = (undefined8 *)((long)puVar9 - 2U >> 1);
        puStack_80 = param_2;
        puStack_70 = puVar10;
        do {
          unaff_x25 = param_1 + (long)puVar12;
          unaff_x20 = unaff_x25 + 1;
          unaff_x21 = (undefined8 *)*unaff_x20;
          unaff_x26 = (undefined8 *)((long)puVar12 << 1 | 1);
          param_2 = (undefined8 *)((long)puVar12 * 2 + 2);
          puVar12 = unaff_x26;
          unaff_x19 = unaff_x20;
          puVar6 = unaff_x21;
          if ((long)param_2 < (long)puVar9) {
            unaff_x23 = (undefined8 *)*param_3;
            puVar11 = unaff_x23;
            func_0x000109487ba4();
            unaff_x19 = param_1;
            puVar13 = unaff_x23;
            unaff_x28 = param_3;
            if (puVar11 == (undefined8 *)0x0) goto LAB_10948a7a0;
            unaff_x28 = unaff_x25 + 2;
            unaff_x25 = (undefined8 *)*unaff_x28;
            puVar5 = unaff_x23;
            puVar6 = unaff_x25;
            func_0x000109487ba4();
            unaff_x22 = puVar11;
            if (puVar5 == (undefined8 *)0x0) goto LAB_10948a7a0;
            puVar12 = param_2;
            puVar10 = puStack_70;
            unaff_x19 = unaff_x28;
            puVar6 = unaff_x25;
            param_3 = puStack_68;
            if (*(int *)(puVar5 + 3) <= *(int *)(puVar11 + 3)) {
              puVar12 = unaff_x26;
              unaff_x19 = unaff_x20;
              puVar6 = unaff_x21;
            }
          }
          *param_1 = puVar6;
          param_1 = unaff_x19;
        } while ((long)puVar12 <= (long)puVar10);
        param_2 = puStack_80 + -1;
        if (unaff_x19 == param_2) {
          *unaff_x19 = puStack_88;
        }
        else {
          *unaff_x19 = *param_2;
          *param_2 = puStack_88;
          lVar8 = (long)unaff_x19 + (8 - (long)puStack_78) >> 3;
          if (1 < lVar8) {
            unaff_x26 = (undefined8 *)(lVar8 - 2U >> 1);
            puVar12 = puStack_78 + (long)unaff_x26;
            unaff_x22 = (undefined8 *)*puVar12;
            unaff_x21 = (undefined8 *)*unaff_x19;
            unaff_x25 = (undefined8 *)*param_3;
            puVar10 = unaff_x25;
            puVar6 = unaff_x22;
            puStack_70 = puVar9;
            func_0x000109487ba4();
            unaff_x20 = unaff_x19;
            puVar13 = unaff_x23;
            puVar9 = puVar12;
            unaff_x28 = param_3;
            if ((puVar10 == (undefined8 *)0x0) ||
               (puVar11 = unaff_x25, puVar6 = unaff_x21, func_0x000109487ba4(), puVar13 = puVar10,
               puVar11 == (undefined8 *)0x0)) goto LAB_10948a7a0;
            puVar9 = puStack_70;
            unaff_x23 = puVar10;
            if (*(int *)(puVar10 + 3) < *(int *)(puVar11 + 3)) {
              do {
                unaff_x19 = puVar12;
                *unaff_x20 = unaff_x22;
                unaff_x23 = puVar10;
                if (unaff_x26 == (undefined8 *)0x0) break;
                unaff_x26 = (undefined8 *)((long)unaff_x26 - 1U >> 1);
                puVar9 = puStack_78 + (long)unaff_x26;
                unaff_x22 = (undefined8 *)*puVar9;
                unaff_x25 = (undefined8 *)*param_3;
                unaff_x23 = unaff_x25;
                puVar6 = unaff_x22;
                func_0x000109487ba4();
                puVar13 = puVar10;
                if ((unaff_x23 == (undefined8 *)0x0) ||
                   (puVar11 = unaff_x25, puVar6 = unaff_x21, func_0x000109487ba4(),
                   puVar13 = unaff_x23, puVar11 == (undefined8 *)0x0)) goto LAB_10948a7a0;
                unaff_x20 = unaff_x19;
                puVar10 = unaff_x23;
                puVar12 = puVar9;
              } while (*(int *)(unaff_x23 + 3) < *(int *)(puVar11 + 3));
              *unaff_x19 = unaff_x21;
              puVar9 = puStack_70;
            }
          }
        }
        bVar1 = 2 < (long)puVar9;
        puVar9 = (undefined8 *)((long)puVar9 + -1);
        param_1 = puStack_78;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 10948ae10; end: 10948b06f;  */

undefined1  [16] FUN_10948ae10(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10948b030;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x30;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_109489b00(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10948b020;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10948b020:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10948b030:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10948b070; end: 10948b0bf;  */

void FUN_10948b070(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10948b0c0; end: 10948b153;  */

undefined8 * FUN_10948b0c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = 0;
  do {
    puVar5 = param_1 + uVar6 * 5 + 5;
    uVar2 = uVar6 << 1 | 1;
    uVar1 = uVar6 * 2 + 2;
    uVar7 = uVar2;
    if ((long)uVar1 < param_3) {
      bVar4 = *(float *)(param_1 + uVar6 * 5 + 8) < *(float *)(param_1 + uVar6 * 5 + 0xd);
      if (*(float *)(param_1 + uVar6 * 5 + 8) == *(float *)(param_1 + uVar6 * 5 + 0xd)) {
        bVar4 = *(int *)(param_1 + uVar6 * 5 + 9) < *(int *)(param_1 + uVar6 * 5 + 0xe);
      }
      lVar3 = 0x28;
      if (!bVar4) {
        lVar3 = 0;
      }
      puVar5 = (undefined8 *)((long)puVar5 + lVar3);
      uVar7 = uVar1;
      if (!bVar4) {
        uVar7 = uVar2;
      }
    }
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    uVar11 = puVar5[3];
    uVar10 = puVar5[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar5 + 4);
    param_1[1] = uVar9;
    *param_1 = uVar8;
    param_1[3] = uVar11;
    param_1[2] = uVar10;
    param_1 = puVar5;
    uVar6 = uVar7;
  } while ((long)uVar7 <= (param_3 + -2) / 2);
  return puVar5;
}



/* Entry: 10948b154; end: 10948b21b;  */

void FUN_10948b154(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (1 < param_4) {
    uVar4 = param_4 - 2U >> 1;
    puVar6 = (undefined8 *)(param_1 + uVar4 * 0x28);
    fVar9 = *(float *)(param_2 + -0x10);
    iVar1 = *(int *)(param_2 + -8);
    bVar3 = *(float *)(puVar6 + 3) < fVar9;
    if (*(float *)(puVar6 + 3) == fVar9) {
      bVar3 = *(int *)(puVar6 + 4) < iVar1;
    }
    if (bVar3) {
      uVar12 = *(undefined8 *)(param_2 + -0x20);
      uVar10 = *(undefined8 *)(param_2 + -0x28);
      uVar8 = *(undefined8 *)(param_2 + -0x18);
      uVar2 = *(undefined4 *)(param_2 + -0xc);
      puVar5 = (undefined8 *)(param_2 + -0x28);
      do {
        puVar7 = puVar6;
        uVar13 = puVar7[1];
        uVar11 = *puVar7;
        uVar15 = puVar7[3];
        uVar14 = puVar7[2];
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar7 + 4);
        puVar5[1] = uVar13;
        *puVar5 = uVar11;
        puVar5[3] = uVar15;
        puVar5[2] = uVar14;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1 >> 1;
        puVar6 = (undefined8 *)(param_1 + uVar4 * 0x28);
        bVar3 = *(float *)(puVar6 + 3) < fVar9;
        if (*(float *)(puVar6 + 3) == fVar9) {
          bVar3 = *(int *)(puVar6 + 4) < iVar1;
        }
        puVar5 = puVar7;
      } while (bVar3);
      puVar7[1] = uVar12;
      *puVar7 = uVar10;
      puVar7[2] = uVar8;
      *(float *)(puVar7 + 3) = fVar9;
      *(undefined4 *)((long)puVar7 + 0x1c) = uVar2;
      *(int *)(puVar7 + 4) = iVar1;
    }
  }
  return;
}



/* Entry: 10948b21c; end: 10948b47b;  */

undefined1  [16] FUN_10948b21c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10948b43c;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x30;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_109489b00(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10948b42c;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10948b42c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10948b43c:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10948b47c; end: 10948b737;  */

long * FUN_10948b47c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (0 < param_5) {
    plVar3 = (long *)param_1[1];
    if ((param_1[2] - (long)plVar3 >> 3) * -0x3333333333333333 < param_5) {
      lVar7 = *param_1;
      uVar4 = param_5 + ((long)plVar3 - lVar7 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar4) {
        FUN_10940231c();
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_1094862d0();
        FUN_10948b7a0(param_1 + 3,param_3);
        return param_1;
      }
      lVar5 = param_1[2] - lVar7 >> 3;
      uVar8 = lVar5 * -0x6666666666666666;
      if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
        uVar8 = uVar4;
      }
      if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
        uVar8 = 0x666666666666666;
      }
      if (uVar8 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_109402330();
      }
      plVar9 = (long *)((long)plVar3 + ((long)param_2 - lVar7));
      lVar7 = param_5 * 0x28;
      plVar6 = plVar9;
      do {
        lVar11 = param_3[1];
        lVar5 = *param_3;
        lVar13 = param_3[3];
        lVar12 = param_3[2];
        plVar6[4] = param_3[4];
        plVar6[1] = lVar11;
        *plVar6 = lVar5;
        plVar6[3] = lVar13;
        plVar6[2] = lVar12;
        plVar6 = plVar6 + 5;
        param_3 = param_3 + 5;
        lVar7 = lVar7 + -0x28;
      } while (lVar7 != 0);
      _memcpy(plVar9 + param_5 * 5,param_2,param_1[1] - (long)param_2);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar11 = (long)plVar9 - ((long)param_2 - *param_1);
      _memcpy(lVar11);
      lVar5 = *param_1;
      *param_1 = lVar11;
      param_1[1] = (long)(plVar9 + param_5 * 5) + (lVar7 - (long)param_2);
      param_1[2] = (long)(plVar3 + uVar8 * 5);
      param_2 = plVar9;
      if (lVar5 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar7 = (long)plVar3 - (long)param_2;
      if ((lVar7 >> 3) * -0x3333333333333333 < param_5) {
        plVar2 = (long *)(lVar7 + (long)param_3);
        plVar9 = plVar3;
        plVar1 = plVar3;
        for (plVar6 = plVar2; plVar6 != param_4; plVar6 = plVar6 + 5) {
          lVar11 = plVar6[1];
          lVar5 = *plVar6;
          lVar13 = plVar6[3];
          lVar12 = plVar6[2];
          plVar9[4] = plVar6[4];
          plVar9[1] = lVar11;
          *plVar9 = lVar5;
          plVar9[3] = lVar13;
          plVar9[2] = lVar12;
          plVar9 = plVar9 + 5;
          plVar1 = plVar1 + 5;
        }
        param_1[1] = (long)plVar1;
        if (0 < lVar7) {
          plVar10 = plVar1;
          for (plVar6 = plVar1 + param_5 * -5; plVar6 < plVar3; plVar6 = plVar6 + 5) {
            lVar5 = plVar6[1];
            lVar7 = *plVar6;
            lVar12 = plVar6[3];
            lVar11 = plVar6[2];
            plVar10[4] = plVar6[4];
            plVar10[1] = lVar5;
            *plVar10 = lVar7;
            plVar10[3] = lVar12;
            plVar10[2] = lVar11;
            plVar10 = plVar10 + 5;
          }
          param_1[1] = (long)plVar10;
          plVar3 = param_2;
          if (plVar9 != param_2 + param_5 * 5) {
            lVar7 = (long)plVar1 - (long)(param_2 + param_5 * 5);
            _memmove((long)plVar1 - lVar7,param_2,lVar7 + -4);
          }
          do {
            lVar5 = param_3[1];
            lVar7 = *param_3;
            lVar12 = param_3[3];
            lVar11 = param_3[2];
            *(int *)(plVar3 + 4) = (int)param_3[4];
            plVar3[1] = lVar5;
            *plVar3 = lVar7;
            plVar3[3] = lVar12;
            plVar3[2] = lVar11;
            param_3 = param_3 + 5;
            plVar3 = plVar3 + 5;
          } while (param_3 != plVar2);
        }
      }
      else {
        plVar9 = plVar3;
        for (plVar6 = plVar3 + param_5 * -5; plVar6 < plVar3; plVar6 = plVar6 + 5) {
          lVar5 = plVar6[1];
          lVar7 = *plVar6;
          lVar12 = plVar6[3];
          lVar11 = plVar6[2];
          plVar9[4] = plVar6[4];
          plVar9[1] = lVar5;
          *plVar9 = lVar7;
          plVar9[3] = lVar12;
          plVar9[2] = lVar11;
          plVar9 = plVar9 + 5;
        }
        param_1[1] = (long)plVar9;
        if (plVar3 != param_2 + param_5 * 5) {
          lVar7 = (long)plVar3 - (long)(param_2 + param_5 * 5);
          _memmove((long)plVar3 - lVar7,param_2,lVar7 + -4);
        }
        plVar6 = param_3 + param_5 * 5;
        plVar3 = param_2;
        do {
          lVar5 = param_3[1];
          lVar7 = *param_3;
          lVar12 = param_3[3];
          lVar11 = param_3[2];
          *(int *)(plVar3 + 4) = (int)param_3[4];
          plVar3[1] = lVar5;
          *plVar3 = lVar7;
          plVar3[3] = lVar12;
          plVar3[2] = lVar11;
          param_3 = param_3 + 5;
          plVar3 = plVar3 + 5;
        } while (param_3 != plVar6);
      }
    }
  }
  return param_2;
}



/* Entry: 10948b738; end: 10948b79f;  */

undefined8 * FUN_10948b738(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094862d0(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  FUN_10948b7a0(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10948b7a0; end: 10948b813;  */

undefined8 * FUN_10948b7a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_109489b00(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10948b814(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10948b814; end: 10948ba5f;  */

undefined1  [16] FUN_10948b814(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  long *aplStack_48 [3];
  
  uVar4 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x22 = uVar7 & uVar6;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar9 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar8; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar9 = plVar2[1];
        if (uVar9 == uVar7) {
          if (plVar2[2] == uVar4) {
            uVar3 = 0;
            goto LAB_10948ba20;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          if (uVar9 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10948ba60(aplStack_48,param_1,uVar7);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_109489b00(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar4 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar7 * uVar10;
      }
      *(long **)(*param_1 + uVar4 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10948ba20:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10948ba60; end: 10948bb07;  */

void FUN_10948ba60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *param_4;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_10948bb08();
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10948bb08; end: 10948bb7f;  */

void FUN_10948bb08(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10948bb80(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -4);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10948bb80; end: 10948bc07;  */

void FUN_10948bb80(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_109402330();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    return;
  }
  FUN_10940231c();
  if (*(long *)*param_1 != 0) {
    FUN_10948bc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10948bc08; end: 10948bcbf;  */

void FUN_10948bc08(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10948bcc0; end: 10948bf67;  */

void FUN_10948bcc0(long *param_1,ulong param_2,long param_3,long param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x26;
  
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar12 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - 1;
    if ((uVar6 & uVar4) == 0) {
      unaff_x26 = uVar4 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar6 <= uVar12) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar12 / uVar6;
        }
        unaff_x26 = uVar12 - uVar9 * uVar6;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10948bdac;
          uVar9 = plVar7[1];
          if (uVar9 != uVar12) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar6 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar6 <= uVar9) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar3 * uVar6;
        }
      } while (uVar9 == unaff_x26);
    }
  }
LAB_10948bdac:
  plVar7 = (long *)0x48;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar12;
  plVar7[2] = param_3;
  plVar7[3] = param_4;
  if (param_4 != 0) {
    plVar8 = (long *)(param_4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *param_5;
  uVar4 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  lVar10 = param_5[2];
  plVar7[6] = lVar10;
  plVar7[4] = lVar5;
  plVar7[5] = uVar4;
  lVar11 = param_5[3];
  plVar7[7] = lVar11;
  *(int *)(plVar7 + 8) = (int)param_5[4];
  if (lVar11 != 0) {
    uVar9 = *(ulong *)(lVar10 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar9 = uVar9 & uVar4 - 1;
    }
    else if (uVar4 <= uVar9) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar9 / uVar4;
      }
      uVar9 = uVar9 - uVar3 * uVar4;
    }
    *(long **)(lVar5 + uVar9 * 8) = plVar7 + 6;
    param_5[2] = 0;
    param_5[3] = 0;
  }
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_10948bf68(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x26 = uVar6 - 1 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar6 <= uVar12) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar12 / uVar6;
        }
        unaff_x26 = uVar12 - uVar4 * uVar6;
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar5 + unaff_x26 * 8) = plVar8;
    if (*plVar7 != 0) {
      uVar12 = *(ulong *)(*plVar7 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar12 = uVar12 & uVar6 - 1;
      }
      else if (uVar6 <= uVar12) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar12 / uVar6;
        }
        uVar12 = uVar12 - uVar4 * uVar6;
      }
      *(long **)(*param_1 + uVar12 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10948bf68; end: 10948c137;  */

void FUN_10948bf68(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  if (((ulong)plVar4 & 1) != 0) {
    FUN_109482a78(plVar6 + 4);
    FUN_109480938(plVar6 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10948c138; end: 10948c16b;  */

void FUN_10948c138(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_109482a78(param_2 + 0x20);
    FUN_109480938(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10948c16c; end: 10948c1c7;  */

long * FUN_10948c16c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109480938(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10948c1c8; end: 10948c5bf;  */

long * FUN_10948c1c8(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  
  uVar4 = (uint)((ulong)param_2 >> 0x20);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar4) * -0x622015f714c7d297;
  uVar8 = ((ulong)uVar4 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar15 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar5 = uVar8 - 1;
    if ((uVar8 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar10 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar15) {
          if (plVar9[2] == param_2) {
            return plVar9;
          }
        }
        else {
          if ((uVar8 & uVar5) == 0) {
            uVar10 = uVar10 & uVar5;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar9 = (long *)0x28;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar15;
  lVar6 = *param_3;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[2] = lVar6;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar8) {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar5) {
LAB_10948c360:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10948c5ac);
        (*pcVar2)();
      }
      lVar6 = uVar5 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar6;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      plVar11 = (long *)param_1[2];
      uVar8 = uVar5;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar5 - 1;
        if ((uVar5 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar5 <= uVar10) {
          uVar14 = 0;
          if (uVar5 != 0) {
            uVar14 = uVar10 / uVar5;
          }
          uVar10 = uVar10 - uVar14 * uVar5;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar5 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar5 <= uVar14) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar14 / uVar5;
            }
            uVar14 = uVar14 - uVar1 * uVar5;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar6 = *param_1;
            if (*(long *)(lVar6 + uVar14 * 8) == 0) {
              *(long **)(lVar6 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar6 + uVar14 * 8);
              **(long **)(lVar6 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar5 < uVar8) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      if (uVar5 < uVar8) {
        if (uVar5 != 0) goto LAB_10948c360;
        lVar6 = *param_1;
        *param_1 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = param_1[1];
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar8 <= uVar15) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar15 / uVar8;
        }
        unaff_x24 = uVar15 - uVar5 * uVar8;
      }
    }
  }
  lVar6 = *param_1;
  plVar11 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 2;
    *plVar9 = *plVar11;
    *plVar11 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar11;
    if (*plVar9 == 0) goto LAB_10948c540;
    uVar15 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar15 = uVar15 & uVar8 - 1;
    }
    else if (uVar8 <= uVar15) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar15 / uVar8;
      }
      uVar15 = uVar15 - uVar5 * uVar8;
    }
    plVar11 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar9 = *plVar11;
  }
  *plVar11 = (long)plVar9;
LAB_10948c540:
  param_1[3] = param_1[3] + 1;
  return plVar9;
}



/* Entry: 10948c5c0; end: 10948c607;  */

void FUN_10948c5c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109480938(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10948c608; end: 10948c6d3;  */

long * FUN_10948c608(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}


