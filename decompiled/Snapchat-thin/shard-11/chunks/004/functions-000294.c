/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085a1b64; end: 1085a1ec7;  */

bool FUN_1085a1b64(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  double *pdVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  double *pdVar15;
  double dVar16;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    if ((*(ushort *)(param_1 + 0x88) >> 0xe & 1) != 0) {
      return true;
    }
  }
  else if (*(long *)(param_1 + 0xa0) == 0) {
    return true;
  }
  if (*(char *)(*(long *)(param_1 + 0x160) + 0x98) != '\x01') {
    return false;
  }
  if (*(double *)(param_1 + 0x128) == 0.0) {
    if ((*(long *)(param_1 + 0xd8) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      lVar14 = *(long *)(param_1 + 0xa0);
      if (lVar14 == 0) {
        return true;
      }
      dVar16 = *(double *)(param_1 + 0x158) / 5.0;
      pdVar11 = *(double **)(*(long *)(param_1 + 0xb8) + 8);
      pdVar12 = *(double **)(*(long *)(param_1 + 0xd8) + 8);
      pdVar15 = *(double **)(*(long *)(param_1 + 0xe8) + 8);
      while( true ) {
        if ((dVar16 <= ABS(*pdVar11 - *pdVar12)) || (dVar16 <= ABS(*pdVar15 - *pdVar12))) break;
        lVar14 = lVar14 + -1;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
        pdVar15 = pdVar15 + 1;
        if (lVar14 == 0) {
          return true;
        }
      }
    }
    goto LAB_1085a1e14;
  }
  plVar2 = *(long **)(param_1 + 0xe8);
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = *plVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  plVar3 = *(long **)(param_1 + 0xd8);
  plVar6 = *(long **)(param_1 + 0xe0);
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar10) {
        *plVar4 = *plVar4 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar2 == plVar3) {
LAB_1085a1c38:
    plVar2 = *(long **)(param_1 + 0xd8);
    plVar3 = *(long **)(param_1 + 0xe0);
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar10) {
          *plVar4 = *plVar4 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plVar4 = *(long **)(param_1 + 0xb8);
    plVar7 = *(long **)(param_1 + 0xc0);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (plVar2 == plVar4) {
LAB_1085a1d2c:
      bVar10 = true;
    }
    else {
      bVar10 = false;
      if ((plVar2 != (long *)0x0) && (plVar4 != (long *)0x0)) {
        lVar14 = *plVar2;
        if (lVar14 == *plVar4) {
          if (lVar14 == 0) goto LAB_1085a1d2c;
          pdVar11 = (double *)plVar2[1];
          pdVar12 = (double *)plVar4[1];
          do {
            lVar14 = lVar14 + -1;
            bVar10 = *pdVar11 == *pdVar12;
            if (!bVar10) break;
            pdVar11 = pdVar11 + 1;
            pdVar12 = pdVar12 + 1;
          } while (lVar14 != 0);
        }
        else {
          bVar10 = false;
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar14 = *plVar2;
        cVar9 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar14 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        lVar14 = *plVar2;
        cVar9 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar14 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    bVar10 = false;
    if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
      lVar14 = *plVar2;
      if (lVar14 == *plVar3) {
        if (lVar14 != 0) {
          pdVar11 = (double *)plVar2[1];
          pdVar12 = (double *)plVar3[1];
          do {
            if (*pdVar11 != *pdVar12) goto LAB_1085a1d9c;
            lVar14 = lVar14 + -1;
            pdVar11 = pdVar11 + 1;
            pdVar12 = pdVar12 + 1;
          } while (lVar14 != 0);
        }
        goto LAB_1085a1c38;
      }
LAB_1085a1d9c:
      bVar10 = false;
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar14 = *plVar2;
      cVar9 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar14 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar14 = *plVar2;
      cVar9 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar14 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (bVar10) {
    return true;
  }
LAB_1085a1e14:
  lVar14 = *(long *)(param_1 + 0x160);
  if (*(char *)(lVar14 + 0x98) == '\x01') {
    lVar13 = 0;
    do {
      if (*(double *)(lVar14 + 0x18) <=
          ABS(*(double *)(lVar14 + 0x38 + *(long *)(&UNK_10df35ce8 + lVar13)))) {
        return false;
      }
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x20);
    if (*(double *)(lVar14 + 0x60) * *(double *)(lVar14 + 0x60) +
        *(double *)(lVar14 + 0x58) * *(double *)(lVar14 + 0x58) +
        *(double *)(lVar14 + 0x68) * *(double *)(lVar14 + 0x68) +
        *(double *)(lVar14 + 0x70) * *(double *)(lVar14 + 0x70) < *(double *)(lVar14 + 0x20)) {
      return *(double *)(lVar14 + 0x80) * *(double *)(lVar14 + 0x80) +
             *(double *)(lVar14 + 0x78) * *(double *)(lVar14 + 0x78) +
             *(double *)(lVar14 + 0x88) * *(double *)(lVar14 + 0x88) +
             *(double *)(lVar14 + 0x90) * *(double *)(lVar14 + 0x90) < *(double *)(lVar14 + 0x28);
    }
  }
  return false;
}



/* Entry: 1085a1ec8; end: 1085a23ef;  */

bool FUN_1085a1ec8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dStack_240;
  double dStack_230;
  double adStack_1e0 [4];
  double adStack_1c0 [4];
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  lVar9 = *(long *)(param_5 + 200);
  if (lVar9 != 0) {
    plVar10 = *(long **)(param_5 + 0xd0);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    dVar19 = param_2;
    FUN_1085a2654(lVar9);
    dVar26 = param_1;
    dVar23 = dVar19;
    dVar14 = param_3;
    dVar16 = param_4;
    adStack_1c0[0] = param_1;
    adStack_1c0[1] = dVar19;
    adStack_1c0[2] = param_3;
    adStack_1c0[3] = param_4;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar5 = *(long *)(param_5 + 0xb8);
    plVar10 = *(long **)(param_5 + 0xc0);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar5 == 0) {
      dVar26 = 0.0;
      dStack_230 = 0.0;
      dVar30 = 0.0;
      dStack_240 = 0.0;
    }
    else {
      FUN_1085a2654();
      dVar30 = dVar14;
      dStack_240 = dVar16;
      dStack_230 = dVar23;
    }
    dVar21 = dVar26;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar5 = *(long *)(param_5 + 0xf8);
    plVar10 = *(long **)(param_5 + 0x100);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar5 == 0) {
      dVar21 = 0.0;
      dVar23 = 0.0;
      dVar14 = 0.0;
      dVar16 = 0.0;
    }
    else {
      FUN_1085a2654();
    }
    adStack_1e0[0] = dVar21;
    adStack_1e0[1] = dVar23;
    adStack_1e0[2] = dVar14;
    adStack_1e0[3] = dVar16;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    param_3 = dVar30 - param_3;
    param_4 = dStack_240 - param_4;
    param_1 = dVar26 - param_1;
    dVar19 = dStack_230 - dVar19;
    dVar14 = -dVar14;
    dVar16 = -dVar16;
    dVar21 = -dVar21;
    dVar23 = -dVar23;
    pdVar11 = *(double **)(param_5 + 0x160);
    *(undefined1 *)(pdVar11 + 0x13) = 1;
    if (param_2 <= 30.0) {
      param_2 = param_2 + pdVar11[6];
      pdVar11[6] = param_2;
      dStack_198 = dVar19;
      dStack_1a0 = param_1;
      dStack_188 = param_4;
      dStack_190 = param_3;
      dStack_178 = dVar23;
      dStack_180 = dVar21;
      dStack_168 = dVar16;
      dStack_170 = dVar14;
      dVar15 = param_1;
      dVar17 = dVar19;
      dVar12 = param_3;
      dVar13 = param_4;
      dVar22 = dVar14;
      dVar24 = dVar16;
      dVar31 = dVar21;
      dVar32 = dVar23;
      if (0.0010000000474974513 <= param_2) {
        dVar18 = -*pdVar11 / pdVar11[2];
        dVar20 = pdVar11[1] / pdVar11[2];
        do {
          dVar32 = dVar23;
          dVar31 = dVar21;
          dVar17 = dVar19;
          dVar15 = param_1;
          dVar24 = dVar16;
          dVar22 = dVar14;
          dVar13 = param_4;
          dVar12 = param_3;
          dVar23 = dVar12 * dVar18 - dVar22 * dVar20;
          dVar16 = dVar13 * dVar18 - dVar24 * dVar20;
          dVar19 = dVar15 * dVar18 - dVar31 * dVar20;
          dVar14 = dVar17 * dVar18 - dVar32 * dVar20;
          dStack_1a0 = dVar15;
          dStack_198 = dVar17;
          dStack_190 = dVar12;
          dStack_188 = dVar13;
          dStack_180 = dVar31;
          dStack_178 = dVar32;
          dStack_170 = dVar22;
          dStack_168 = dVar24;
          dStack_a0 = dVar31;
          dStack_98 = dVar32;
          dStack_90 = dVar22;
          dStack_88 = dVar24;
          dStack_80 = dVar19;
          dStack_78 = dVar14;
          dStack_70 = dVar23;
          dStack_68 = dVar16;
          FUN_1085a2494(0x3f40624de0000000,&dStack_e0,pdVar11,&dStack_1a0,&dStack_a0);
          FUN_1085a2494(0x3f40624de0000000,&dStack_120,pdVar11,&dStack_1a0,&dStack_e0);
          FUN_1085a2494(0x3f50624de0000000,&dStack_160,pdVar11,&dStack_1a0,&dStack_120);
          dVar28 = (dVar23 + dStack_b0 + dStack_f0 + dStack_b0 + dStack_f0 + dStack_130) *
                   0.16666666666666666;
          dVar25 = (dVar16 + dStack_a8 + dStack_e8 + dStack_a8 + dStack_e8 + dStack_128) *
                   0.16666666666666666;
          dVar27 = (dVar19 + dStack_c0 + dStack_100 + dStack_c0 + dStack_100 + dStack_140) *
                   0.16666666666666666;
          dVar29 = (dVar14 + dStack_b8 + dStack_f8 + dStack_b8 + dStack_f8 + dStack_138) *
                   0.16666666666666666;
          param_3 = dVar12 + (dStack_d0 + dStack_110 + dStack_d0 + dStack_110 + dStack_90 +
                             dStack_150) * 0.16666666666666666 * 0.0010000000474974513;
          param_4 = dVar13 + (dStack_c8 + dStack_108 + dStack_c8 + dStack_108 + dStack_88 +
                             dStack_148) * 0.16666666666666666 * 0.0010000000474974513;
          param_1 = dVar15 + (dStack_e0 + dStack_120 + dStack_e0 + dStack_120 + dStack_a0 +
                             dStack_160) * 0.16666666666666666 * 0.0010000000474974513;
          dVar19 = dVar17 + (dStack_d8 + dStack_118 + dStack_d8 + dStack_118 + dStack_98 +
                            dStack_158) * 0.16666666666666666 * 0.0010000000474974513;
          dVar14 = dVar22 + dVar28 * 0.0010000000474974513;
          dVar16 = dVar24 + dVar25 * 0.0010000000474974513;
          dVar21 = dVar31 + dVar27 * 0.0010000000474974513;
          dVar23 = dVar32 + dVar29 * 0.0010000000474974513;
          pdVar11[0x10] = dVar29;
          pdVar11[0xf] = dVar27;
          dStack_198 = dVar19;
          dStack_1a0 = param_1;
          dStack_188 = param_4;
          dStack_190 = param_3;
          pdVar11[0x12] = dVar25;
          pdVar11[0x11] = dVar28;
          param_2 = param_2 + -0.0010000000474974513;
          pdVar11[6] = param_2;
          dStack_178 = dVar23;
          dStack_180 = dVar21;
          dStack_168 = dVar16;
          dStack_170 = dVar14;
        } while (0.0010000000474974513 <= param_2);
      }
      param_2 = param_2 / 0.0010000000474974513;
      dVar28 = 1.0 - param_2;
      dVar12 = param_3 * param_2 + dVar12 * dVar28;
      dVar13 = param_4 * param_2 + dVar13 * dVar28;
      dVar18 = param_1 * param_2 + dVar15 * dVar28;
      dVar20 = dVar19 * param_2 + dVar17 * dVar28;
      dVar15 = dVar14 * param_2 + dVar22 * dVar28;
      dVar17 = dVar16 * param_2 + dVar24 * dVar28;
      pdVar11[8] = dVar20;
      pdVar11[7] = dVar18;
      pdVar11[10] = dVar13;
      pdVar11[9] = dVar12;
      dVar22 = dVar21 * param_2 + dVar31 * dVar28;
      dVar24 = dVar23 * param_2 + dVar32 * dVar28;
      pdVar11[0xc] = dVar24;
      pdVar11[0xb] = dVar22;
      pdVar11[0xe] = dVar17;
      pdVar11[0xd] = dVar15;
      dStack_1a0 = param_1;
      dStack_198 = dVar19;
      dStack_190 = param_3;
      dStack_188 = param_4;
      dStack_180 = dVar21;
      dStack_178 = dVar23;
      dStack_170 = dVar14;
      dStack_168 = dVar16;
    }
    else {
      pdVar11[0x12] = 0.0;
      pdVar11[0x11] = 0.0;
      pdVar11[0x10] = 0.0;
      pdVar11[0xf] = 0.0;
      pdVar11[0xe] = 0.0;
      pdVar11[0xd] = 0.0;
      pdVar11[0xc] = 0.0;
      pdVar11[0xb] = 0.0;
      pdVar11[10] = 0.0;
      pdVar11[9] = 0.0;
      pdVar11[8] = 0.0;
      pdVar11[7] = 0.0;
      dVar12 = param_3;
      dVar13 = param_4;
      dVar15 = dVar14;
      dVar17 = dVar16;
      dVar18 = param_1;
      dVar20 = dVar19;
      dVar22 = dVar21;
      dVar24 = dVar23;
    }
    adStack_1c0[1] = dStack_230 - dVar20;
    adStack_1c0[0] = dVar26 - dVar18;
    adStack_1c0[3] = dStack_240 - dVar13;
    adStack_1c0[2] = dVar30 - dVar12;
    adStack_1e0[0] = -dVar22;
    adStack_1e0[1] = -dVar24;
    adStack_1e0[2] = -dVar15;
    adStack_1e0[3] = -dVar17;
    uVar8 = **(ulong **)(param_5 + 200);
    uVar4 = uVar8;
    if (3 < uVar8) {
      uVar4 = 4;
    }
    if (uVar8 != 0) {
      puVar7 = (undefined8 *)(*(ulong **)(param_5 + 200))[1];
      plVar10 = (long *)&UNK_10df35ce8;
      do {
        *puVar7 = *(undefined8 *)((long)adStack_1c0 + *plVar10);
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 1;
        plVar10 = plVar10 + 1;
      } while (uVar4 != 0);
    }
    puVar6 = *(ulong **)(param_5 + 0xf8);
    if (puVar6 != (ulong *)0x0) {
      uVar8 = *puVar6;
      uVar4 = uVar8;
      if (3 < uVar8) {
        uVar4 = 4;
      }
      if (uVar8 != 0) {
        puVar7 = (undefined8 *)puVar6[1];
        plVar10 = (long *)&UNK_10df35ce8;
        do {
          *puVar7 = *(undefined8 *)((long)adStack_1e0 + *plVar10);
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + 1;
          plVar10 = plVar10 + 1;
        } while (uVar4 != 0);
      }
    }
    FUN_10859b500(param_5,*(undefined8 *)(param_5 + 0x130));
  }
  return lVar9 != 0;
}



/* Entry: 1085a23f0; end: 1085a2493;  */

void FUN_1085a23f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10859c6b0();
  puVar1 = *(undefined8 **)(param_1 + 0x160);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    uVar3 = *(undefined8 *)(param_1 + 0x178);
    puVar1[1] = *(undefined8 *)(param_1 + 0x180);
    *puVar1 = uVar3;
    puVar1[2] = uVar2;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    *(undefined8 *)((long)puVar1 + 0x91) = 0;
    *(undefined8 *)((long)puVar1 + 0x89) = 0;
  }
  return;
}



/* Entry: 1085a2494; end: 1085a24fb;  */

void FUN_1085a2494(double param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar1 = param_5[4] * param_1 + param_4[4];
  dVar2 = param_5[5] * param_1 + param_4[5];
  dVar3 = param_5[6] * param_1 + param_4[6];
  dVar4 = param_5[7] * param_1 + param_4[7];
  dVar5 = -*param_3 / param_3[2];
  dVar6 = param_3[1] / param_3[2];
  dVar8 = param_5[1];
  dVar7 = *param_5;
  dVar10 = param_5[3];
  dVar9 = param_5[2];
  dVar12 = param_4[1];
  dVar11 = *param_4;
  dVar14 = param_4[3];
  dVar13 = param_4[2];
  param_2[1] = dVar2;
  *param_2 = dVar1;
  param_2[3] = dVar4;
  param_2[2] = dVar3;
  param_2[5] = (dVar8 * param_1 + dVar12) * dVar5 - dVar2 * dVar6;
  param_2[4] = (dVar7 * param_1 + dVar11) * dVar5 - dVar1 * dVar6;
  param_2[7] = (dVar10 * param_1 + dVar14) * dVar5 - dVar4 * dVar6;
  param_2[6] = (dVar9 * param_1 + dVar13) * dVar5 - dVar3 * dVar6;
  return;
}



/* Entry: 1085a24fc; end: 1085a25cb;  */

long * FUN_1085a24fc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    _calloc(lVar2,8);
    _memcpy();
  }
  lVar1 = param_1[1];
  *param_1 = lVar2;
  param_1[1] = lVar3;
  if (lVar1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 1085a25cc; end: 1085a2653;  */

ulong * FUN_1085a25cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 auStack_40 [4];
  
  if (param_5 == (undefined8 *)0x0) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = (ulong *)0x10;
    auStack_40[0] = param_1;
    auStack_40[1] = param_2;
    auStack_40[2] = param_3;
    auStack_40[3] = param_4;
    __Znwm();
    *puVar1 = (ulong)param_5;
    puVar2 = param_5;
    _calloc(param_5,8);
    puVar1[1] = (ulong)puVar2;
    if ((undefined8 *)0x3 < param_5) {
      param_5 = (undefined8 *)0x4;
    }
    plVar3 = (long *)&UNK_10df35ce8;
    do {
      *puVar2 = *(undefined8 *)((long)auStack_40 + *plVar3);
      param_5 = (undefined8 *)((long)param_5 - 1);
      puVar2 = puVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (param_5 != (undefined8 *)0x0);
  }
  return puVar1;
}



/* Entry: 1085a2654; end: 1085a26ab;  */

undefined8 FUN_1085a2654(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 auStack_20 [4];
  
  auStack_20[0] = 0;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    auStack_20[0] = 0;
  }
  else {
    puVar2 = (undefined8 *)param_1[1];
    plVar3 = (long *)&UNK_10df35ce8;
    do {
      *(undefined8 *)((long)auStack_20 + *plVar3) = *puVar2;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar1 != 0);
  }
  return auStack_20[0];
}



/* Entry: 1085a26ac; end: 1085a26ff;  */

undefined1  [16] FUN_1085a26ac(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*param_1 == 0) {
    auVar1._0_8_ = 0;
  }
  else {
    auVar1._0_8_ = *(ulong *)param_1[1];
    if (*param_1 != 1) {
      auVar1._8_8_ = ((ulong *)param_1[1])[1];
      return auVar1;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar1._0_8_;
  return auVar2;
}



/* Entry: 1085a2700; end: 1085a27a3;  */

undefined8 * FUN_1085a2700(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = 6;
  puVar2 = (undefined8 *)0x6;
  _calloc(6,8);
  puVar1[1] = puVar2;
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  puVar2[1] = param_1[1];
  *puVar2 = uVar3;
  puVar2[3] = uVar5;
  puVar2[2] = uVar4;
  uVar3 = param_1[4];
  puVar2[5] = param_1[5];
  puVar2[4] = uVar3;
  return puVar1;
}



/* Entry: 1085a27a4; end: 1085a282f;  */

undefined ** FUN_1085a27a4(undefined8 param_1)

{
  undefined **ppuVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10859ce38(param_1,&uStack_48);
  ppuVar1 = (undefined **)0x10;
  __Znwm();
  *ppuVar1 = (undefined *)0x4;
  puVar2 = (ulong *)0x4;
  _calloc(4,8);
  ppuVar1[1] = (undefined *)puVar2;
  puVar2[1] = uStack_40;
  *puVar2 = uStack_48;
  puVar2[3] = uStack_30;
  puVar2[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar3 = *puVar2;
    if (uVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc0698;
    }
    else if ((uVar3 == 2) || (uVar3 == 1)) {
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        uVar3 = 0;
        do {
          func_0x00010bf06ba0(ppuVar1);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *puVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 1085a2830; end: 1085a2983;  */

void FUN_1085a2830(ulong *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc0698;
  }
  else {
    if (uVar2 == 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee4a98;
    }
    else {
      if (uVar2 != 1) {
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *param_1;
        if (uVar2 != 0) {
          uVar4 = 0;
          do {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ee4ab8;
            if ((uVar4 != 0) &&
               (ppuVar1 = &PTR____CFConstantStringClassReference_110ee4ad8, uVar4 != uVar2 - 1)) {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ee4af8;
            }
            func_0x00010bf06ba0(ppuVar3,param_2,ppuVar1);
            uVar4 = uVar4 + 1;
            uVar2 = *param_1;
          } while (uVar4 < uVar2);
        }
        goto LAB_1085a2950;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110df3b58;
    }
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1085a2950:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1085a2984; end: 1085a29b3; -[SCBitmojiAvatarBuilderPresentingServices .cxx_destruct] */

void FUN_1085a2984(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085a29b4; end: 1085a29b7; +[SCCSnapEditorHeadlessAddMusicToSnapDoc modulePath] */

undefined ** FUN_1085a29b4(void)

{
  return &PTR____CFConstantStringClassReference_110ee4b18;
}



/* Entry: 1085a29b8; end: 1085a29bb; +[SCCSnapEditorHeadlessAddMusicToSnapDoc asyncStrictMode] */

undefined8 FUN_1085a29b8(void)

{
  return 0;
}



/* Entry: 1085a29bc; end: 1085a2a1b; -[SCCSnapEditorHeadlessAddMusicToSnapDoc addMusicToSnapDocWithNativeSnapDoc:mediaManager:music:] */

void FUN_1085a29bc(void)

{
  code *extraout_x8;
  undefined8 unaff_x22;
  
  func_0x0001085a2f38();
  func_0x0001085a2ebc();
  func_0x0001085a2eec();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f84();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f30();
  func_0x0001085a2f1c();
  func_0x0001085a2eb4();
  func_0x0001085a2ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 1085a2a1c; end: 1085a2acf; +[SCCSnapEditorHeadlessAddMusicToSnapDoc invokeWithJSRuntimeProvider:nativeSnapDoc:mediaManager:music:completionHandler:] */

void FUN_1085a2a1c(void)

{
  long unaff_x23;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001085a2ef4();
  func_0x0001085a2ebc();
  func_0x0001085a2eec();
  _objc_retain();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f74();
  func_0x0001085a2ec4(FUN_1085a2ad0);
  func_0x0001085a2eec();
  func_0x0001085a2ebc();
  func_0x0001085a2fc0();
  _objc_retain(unaff_x23);
  func_0x0001085a2fb4();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001085a2fac();
  func_0x0001085a2fa4();
  func_0x0001085a2f9c();
  func_0x0001085a2ee4();
  func_0x0001085a2eb4();
  func_0x0001085a2f1c();
  func_0x0001085a2f30();
  _objc_release(unaff_x23);
  return;
}



/* Entry: 1085a2ad0; end: 1085a2b3b;  */

void FUN_1085a2ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x8;
  
  puVar1 = PTR_PTR_1126da278;
  func_0x00010bfbc0e0(PTR_PTR_1126da278,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2fdc();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f10(*(undefined8 *)(param_1 + 0x40));
  func_0x0001085a2ee4();
  func_0x0001085a2eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085a2b3c; end: 1085a2b4f; +[SCCSnapEditorHeadlessAddMusicToSnapDoc valdiMarshallableObjectDescriptor] */

void FUN_1085a2b3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a57d10;
  param_1[1] = &PTR_DAT_110a57d40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1085a2b50; end: 1085a2b53; +[SCCSnapEditorHeadlessAddPlaybackLayerToSnapDoc modulePath] */

undefined ** FUN_1085a2b50(void)

{
  return &PTR____CFConstantStringClassReference_110ee4b18;
}



/* Entry: 1085a2b54; end: 1085a2b57; +[SCCSnapEditorHeadlessAddPlaybackLayerToSnapDoc asyncStrictMode] */

undefined8 FUN_1085a2b54(void)

{
  return 0;
}



/* Entry: 1085a2b58; end: 1085a2bb7; -[SCCSnapEditorHeadlessAddPlaybackLayerToSnapDoc addPlaybackLayerToSnapDocWithNativeSnapDoc:playbackLayerBytes:mediaReferenceBytes:] */

void FUN_1085a2b58(void)

{
  code *extraout_x8;
  undefined8 unaff_x22;
  
  func_0x0001085a2f38();
  func_0x0001085a2ebc();
  func_0x0001085a2eec();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f84();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f30();
  func_0x0001085a2f1c();
  func_0x0001085a2eb4();
  func_0x0001085a2ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 1085a2bb8; end: 1085a2c6b; +[SCCSnapEditorHeadlessAddPlaybackLayerToSnapDoc invokeWithJSRuntimeProvider:nativeSnapDoc:playbackLayerBytes:mediaReferenceBytes:completionHandler:] */

void FUN_1085a2bb8(void)

{
  long unaff_x23;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001085a2ef4();
  func_0x0001085a2ebc();
  func_0x0001085a2eec();
  _objc_retain();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f74();
  func_0x0001085a2ec4(FUN_1085a2c6c);
  func_0x0001085a2eec();
  func_0x0001085a2ebc();
  func_0x0001085a2fc0();
  _objc_retain(unaff_x23);
  func_0x0001085a2fb4();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001085a2fac();
  func_0x0001085a2fa4();
  func_0x0001085a2f9c();
  func_0x0001085a2ee4();
  func_0x0001085a2eb4();
  func_0x0001085a2f1c();
  func_0x0001085a2f30();
  _objc_release(unaff_x23);
  return;
}



/* Entry: 1085a2c6c; end: 1085a2cd7;  */

void FUN_1085a2c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x8;
  
  puVar1 = PTR_PTR_1126da280;
  func_0x00010bfbc0e0(PTR_PTR_1126da280,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2fdc();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f10(*(undefined8 *)(param_1 + 0x40));
  func_0x0001085a2ee4();
  func_0x0001085a2eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085a2cd8; end: 1085a2ceb; +[SCCSnapEditorHeadlessAddPlaybackLayerToSnapDoc valdiMarshallableObjectDescriptor] */

void FUN_1085a2cd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a57d60;
  param_1[1] = &PTR_DAT_110a57d90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1085a2cec; end: 1085a2cf7; +[SCCSnapEditorHeadlessSplitSnapDocIfMultiSnap modulePath] */

undefined ** FUN_1085a2cec(void)

{
  return &PTR____CFConstantStringClassReference_110ee4b38;
}



/* Entry: 1085a2cf8; end: 1085a2cfb; +[SCCSnapEditorHeadlessSplitSnapDocIfMultiSnap asyncStrictMode] */

undefined8 FUN_1085a2cf8(void)

{
  return 0;
}



/* Entry: 1085a2cfc; end: 1085a2d63; -[SCCSnapEditorHeadlessSplitSnapDocIfMultiSnap splitSnapDocIfMultiSnapWithNativeSnapDoc:] */

void FUN_1085a2cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a2f30();
  func_0x0001085a2f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085a2d64; end: 1085a2e8b; +[SCCSnapEditorHeadlessSplitSnapDocIfMultiSnap invokeWithJSRuntimeProvider:nativeSnapDoc:completionHandler:] */

void FUN_1085a2d64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x0001085a2ebc();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0001085a2f74();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1085a2e18;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x0001085a2ebc();
  func_0x0001085a2fc0();
  func_0x0001085a2eec();
  func_0x00010bf85140(param_3,param_2,auStack_68);
  func_0x0001085a2fac();
  func_0x0001085a2fa4();
  func_0x0001085a2f9c();
  func_0x0001085a2f1c();
  func_0x0001085a2f30();
  func_0x0001085a2eb4();
  return;
}



/* Entry: 1085a2e8c; end: 1085a2fef; +[SCCSnapEditorHeadlessSplitSnapDocIfMultiSnap valdiMarshallableObjectDescriptor] */

void FUN_1085a2e8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a57da0;
  param_1[1] = &PTR_DAT_110a57dd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1085a2ff0; end: 1085a2ff7; -[SCCSnapEditorHeadlessSnapDocSendBundleSplitError__Enum init] */

void FUN_1085a2ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 1085a2ff8; end: 1085a303f; -[SCCSnapEditorHeadlessMusicInfo initWithAudioData:trackId:title:artistName:fullAssetDurationMs:trimOffsetStartTimeMs:] */

void FUN_1085a2ff8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fce40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1085a3040; end: 1085a3057; +[SCCSnapEditorHeadlessMusicInfo valdiMarshallableObjectDescriptor] */

void FUN_1085a3040(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a57de8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1085a3058; end: 1085a3097; -[SCCSnapEditorHeadlessSnapDocSendBundleSplitResult initWithError:snapDocBundles:commonMetricLoggingParams:] */

void FUN_1085a3058(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fce48;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1085a3098; end: 1085a30b7; +[SCCSnapEditorHeadlessSnapDocSendBundleSplitResult valdiMarshallableObjectDescriptor] */

void FUN_1085a3098(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110a57ec0;
  param_1[1] = &PTR_DAT_110a57f20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1085a30b8; end: 1085a31fb;  */

void FUN_1085a30b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126cb010;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c244820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c25d0;
  _objc_alloc();
  func_0x00010c0462c0();
  puVar3 = PTR_PTR_1126cb018;
  _objc_alloc(PTR_PTR_1126cb018);
  func_0x00010c0494c0();
  _objc_release(param_6);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x000108febbc0(puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (param_7 == 0) {
    func_0x000108fec9ec();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108fece14();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085a31fc; end: 1085a33ab;  */

void FUN_1085a31fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  FUN_1085a33ac();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000108f22bfc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000108ef2144(uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  FUN_1085a35dc(uVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar1;
  func_0x0001085a39a4(uVar1,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1085a33ac; end: 1085a33eb;  */

void FUN_1085a33ac(void)

{
  if (lRam000000011372c450 != -1) {
    func_0x000107c27d9c(0x11372c450,&PTR___NSConcreteGlobalBlock_110a57f40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372c448,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 1085a33ec; end: 1085a3453;  */

void FUN_1085a33ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba3b0;
  _objc_opt_class(PTR_PTR_1126ba3b0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a57f80);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372c448;
  uRam000000011372c448 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085a3454; end: 1085a345b;  */

void FUN_1085a3454(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcf8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupsDataFetcher_1125d17d8);
  return;
}



/* Entry: 1085a345c; end: 1085a35db;  */

undefined * FUN_1085a345c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain(param_2);
  func_0x00010c0d3c80();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = param_1;
  if (puVar1 < (undefined *)0x4) {
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        puVar8 = param_1;
        func_0x00010bf529e0();
        if ((undefined *)0x2 < puVar8) goto LAB_1085a357c;
        puVar8 = param_1;
        func_0x00010bf4b900();
        if (((ulong)puVar8 & 1) == 0) {
          func_0x00010befa120(param_1);
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = param_2;
      func_0x00010bf52a60();
    }
LAB_1085a357c:
    _objc_release(param_2);
    func_0x00010bf51e00();
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar4);
  puVar2 = param_2;
  func_0x000107c31914(param_2,&PTR___NSConcreteGlobalBlock_110a57fa0,
                      &PTR___NSConcreteGlobalBlock_110a57fc0);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar4);
      }
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        func_0x00010befa120(puVar7);
      }
      _objc_release(puVar3);
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar1 = puVar7;
  func_0x00010bf51e00(puVar7);
  puVar8 = puVar1;
  puVar3 = param_2;
  FUN_1085a345c();
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_userId_112682320);
  return puVar3;
}



/* Entry: 1085a35dc; end: 1085a3783;  */

void FUN_1085a35dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x000107c31914(param_1,&PTR___NSConcreteGlobalBlock_110a57fa0,
                      &PTR___NSConcreteGlobalBlock_110a57fc0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar5 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(lVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar7 = puVar6;
  lVar4 = param_1;
  FUN_1085a345c();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_userId_112682320);
  return;
}



/* Entry: 1085a3784; end: 1085a378b;  */

void FUN_1085a3784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1085a378c; end: 1085a37b3;  */

void FUN_1085a378c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1085a37b4; end: 1085a3aab;  */

void FUN_1085a37b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1085a38b4;
  puStack_60 = &UNK_110a57fe0;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_44 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000107c31908(param_1,&puStack_78);
  uVar1 = param_1;
  func_0x00010bf51e00();
  uVar2 = uVar1;
  func_0x000108fecf14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085a3aac; end: 1085a3b57;  */

void FUN_1085a3aac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar3);
  }
  lVar1 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108fec62c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085a3b58; end: 1085a3be3; -[SCBaseItemViewModel init] */

undefined8 * FUN_1085a3b58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fce50;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    puVar1[9] = 0x4030000000000000;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar2);
    puVar1[0xd] = 0x4030000000000000;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[5] = 0x4030000000000000;
    puVar1[4] = 0;
    puVar1[7] = 0x4030000000000000;
    puVar1[6] = 0;
    puVar1[1] = 0x4030000000000000;
  }
  return puVar1;
}



/* Entry: 1085a3be4; end: 1085a3bef; -[SCBaseItemViewModel contentInsets] */

undefined8 FUN_1085a3be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085a3bf0; end: 1085a3bfb; -[SCBaseItemViewModel setContentInsets:] */

void FUN_1085a3bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x20) = param_1;
  *(undefined8 *)(param_5 + 0x28) = param_2;
  *(undefined8 *)(param_5 + 0x30) = param_3;
  *(undefined8 *)(param_5 + 0x38) = param_4;
  return;
}



/* Entry: 1085a3bfc; end: 1085a3c03; -[SCBaseItemViewModel contentInterimSpacing] */

undefined8 FUN_1085a3bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085a3c04; end: 1085a3c0b; -[SCBaseItemViewModel setContentInterimSpacing:] */

void FUN_1085a3c04(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1085a3c0c; end: 1085a3c17; -[SCBaseItemViewModel topSeparatorInsets] */

undefined8 FUN_1085a3c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1085a3c18; end: 1085a3c23; -[SCBaseItemViewModel setTopSeparatorInsets:] */

void FUN_1085a3c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x40) = param_1;
  *(undefined8 *)(param_5 + 0x48) = param_2;
  *(undefined8 *)(param_5 + 0x50) = param_3;
  *(undefined8 *)(param_5 + 0x58) = param_4;
  return;
}



/* Entry: 1085a3c24; end: 1085a3c2b; -[SCBaseItemViewModel topSeparatorColor] */

undefined8 FUN_1085a3c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085a3c2c; end: 1085a3c5b; -[SCBaseItemViewModel setTopSeparatorColor:] */

void FUN_1085a3c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a3c5c; end: 1085a3c67; -[SCBaseItemViewModel bottomSeparatorInsets] */

undefined8 FUN_1085a3c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1085a3c68; end: 1085a3c73; -[SCBaseItemViewModel setBottomSeparatorInsets:] */

void FUN_1085a3c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x60) = param_1;
  *(undefined8 *)(param_5 + 0x68) = param_2;
  *(undefined8 *)(param_5 + 0x70) = param_3;
  *(undefined8 *)(param_5 + 0x78) = param_4;
  return;
}



/* Entry: 1085a3c74; end: 1085a3c7b; -[SCBaseItemViewModel bottomSeparatorColor] */

undefined8 FUN_1085a3c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085a3c7c; end: 1085a3cab; -[SCBaseItemViewModel setBottomSeparatorColor:] */

void FUN_1085a3c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085a3cac; end: 1085a3cdb; -[SCBaseItemViewModel .cxx_destruct] */

void FUN_1085a3cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085a3cdc; end: 1085a40b7; -[SCBaseItemView initWithAccessoryViewProvider:accessoryContentAvailabilityBlock:topContentViewProvider:topContentAvailabilityBlock:bottomContentViewProvider:bottomContentAvailabilityBlock:disclosureViewProvider:disclosureContentAvailabilityBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085a3cdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1126fce58;
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(uVar10,uVar11,uVar12,uVar13,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 == (undefined8 *)0x0) goto LAB_1085a404c;
  uVar5 = param_4;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a60);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112776a60) = uVar5;
  _objc_release(uVar4);
  uVar5 = param_6;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a64);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112776a64) = uVar5;
  _objc_release(uVar4);
  uVar5 = param_8;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a68);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112776a68) = uVar5;
  _objc_release(uVar4);
  uVar5 = param_10;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a6c);
  *(undefined8 *)((long)puVar2 + (long)_DAT_112776a6c) = uVar5;
  _objc_release(uVar4);
  puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112776a70);
  uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar4 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = uVar7;
  *puVar1 = uVar4;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a74);
  *(undefined **)((long)puVar2 + (long)_DAT_112776a74) = puVar3;
  _objc_release(uVar5);
  func_0x00010befbb60(puVar2);
  puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112776a78);
  puVar1[1] = uVar7;
  *puVar1 = uVar4;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a7c);
  *(undefined **)((long)puVar2 + (long)_DAT_112776a7c) = puVar3;
  _objc_release(uVar5);
  func_0x00010befbb60(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  lVar6 = (long)_DAT_112776a80;
  uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
  *(undefined **)((long)puVar2 + lVar6) = puVar3;
  _objc_release(uVar5);
  func_0x00010befbb60(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar10,uVar11,uVar12,uVar13);
  uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776a84);
  *(undefined **)((long)puVar2 + (long)_DAT_112776a84) = puVar3;
  _objc_release(uVar10);
  func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar6));
  if (param_3 == 0) {
    func_0x00010c161280(puVar2);
  }
  else {
    lVar6 = param_3;
    (**(code **)(param_3 + 0x10))(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161280(puVar2);
    _objc_release(lVar6);
  }
  if (param_5 == 0) {
    func_0x00010c2173c0(puVar2);
    if (param_7 != 0) goto LAB_1085a3fc0;
LAB_1085a4030:
    func_0x00010c1735c0(puVar2);
  }
  else {
    lVar6 = param_5;
    (**(code **)(param_5 + 0x10))(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2173c0(puVar2);
    _objc_release(lVar6);
    if (param_7 == 0) goto LAB_1085a4030;
LAB_1085a3fc0:
    lVar6 = param_7;
    (**(code **)(param_7 + 0x10))(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1735c0(puVar2);
    _objc_release(lVar6);
  }
  if (param_9 == 0) {
    func_0x00010c18ee20(puVar2);
  }
  else {
    lVar6 = param_9;
    (**(code **)(param_9 + 0x10))(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ee20(puVar2);
    _objc_release(lVar6);
  }
LAB_1085a404c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1085a40b8; end: 1085a4133; -[SCBaseItemView setTopContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a40b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112776a88;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112776a84),param_2,
                        *(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a4134; end: 1085a41af; -[SCBaseItemView setBottomContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4134(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112776a8c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112776a84),param_2,
                        *(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a41b0; end: 1085a422b; -[SCBaseItemView setDisclosureView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a41b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112776a90;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112776a80),param_2,
                        *(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a422c; end: 1085a42a7; -[SCBaseItemView setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a422c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112776a94;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112776a80),param_2,
                        *(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a42a8; end: 1085a42d3; -[SCBaseItemView topContentViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085a42a8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112776a88) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112776a64);
                    /* WARNING: Could not recover jumptable at 0x0001085a42c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return lVar1;
  }
  return 0;
}



/* Entry: 1085a42d4; end: 1085a42ff; -[SCBaseItemView bottomContentViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085a42d4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112776a8c) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112776a68);
                    /* WARNING: Could not recover jumptable at 0x0001085a42f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return lVar1;
  }
  return 0;
}



/* Entry: 1085a4300; end: 1085a432b; -[SCBaseItemView accessoryViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085a4300(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112776a94) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112776a60);
                    /* WARNING: Could not recover jumptable at 0x0001085a4320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return lVar1;
  }
  return 0;
}



/* Entry: 1085a432c; end: 1085a4357; -[SCBaseItemView disclosureViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1085a432c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112776a90) != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112776a6c);
                    /* WARNING: Could not recover jumptable at 0x0001085a434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return lVar1;
  }
  return 0;
}



/* Entry: 1085a4358; end: 1085a4393; -[SCBaseItemView prepareForReuse] */

void FUN_1085a4358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da288;
  _objc_alloc_init(PTR_PTR_1126da288);
  func_0x00010bf47d60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085a4394; end: 1085a44b3; -[SCBaseItemView configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_7);
  if (param_7 == 0) {
    puVar3 = PTR_PTR_1126da288;
    _objc_alloc_init(PTR_PTR_1126da288);
    func_0x00010bf47d60(param_5,param_6,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar1 = (undefined8 *)(param_5 + _DAT_112776a98);
    func_0x00010bf4c7e0(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x00010bf4c800(param_7);
    *(undefined8 *)(param_5 + _DAT_112776a9c) = param_1;
    puVar1 = (undefined8 *)(param_5 + _DAT_112776a78);
    func_0x00010c2748c0(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar2 = param_7;
    func_0x00010c2748a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + _DAT_112776a7c),param_6,lVar2);
    _objc_release(lVar2);
    puVar1 = (undefined8 *)(param_5 + _DAT_112776a70);
    func_0x00010bf204c0(param_7);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar2 = param_7;
    func_0x00010bf204a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + _DAT_112776a74),param_6,lVar2);
    _objc_release(lVar2);
    func_0x00010c1cbe20(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1085a44b4; end: 1085a44e3; -[SCBaseItemView topContentSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a44b4(undefined8 param_1,long param_2)

{
  func_0x00010c23d5a0(*(undefined8 *)(param_2 + _DAT_112776a88));
  return param_1;
}



/* Entry: 1085a44e4; end: 1085a4513; -[SCBaseItemView bottomContentSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a44e4(undefined8 param_1,long param_2)

{
  func_0x00010c23d5a0(*(undefined8 *)(param_2 + _DAT_112776a8c));
  return param_1;
}



/* Entry: 1085a4514; end: 1085a4523; -[SCBaseItemView accessorySizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776a94),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1085a4524; end: 1085a4533; -[SCBaseItemView disclosureSizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776a90),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1085a4534; end: 1085a4a73; -[SCBaseItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4534(double param_1,long param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fce58;
  lStack_90 = param_2;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar13 = 1.0 / param_1;
  _objc_release(puVar4);
  puVar1 = (undefined8 *)(param_2 + _DAT_112776a78);
  uVar17 = *puVar1;
  dVar15 = (double)puVar1[1];
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  _CGRectIntegral(dVar15,uVar17,param_1 - ((double)puVar1[1] + (double)puVar1[3]),dVar13);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_112776a7c));
  lVar8 = param_2 + _DAT_112776a70;
  dVar16 = *(double *)(lVar8 + 8);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar15 = dVar15 - dVar13;
  dVar18 = dVar15 - *(double *)(lVar8 + 0x10);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar15 = dVar15 - (*(double *)(lVar8 + 8) + *(double *)(lVar8 + 0x18));
  _CGRectIntegral(dVar16,dVar18,dVar15,dVar13);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_112776a74));
  func_0x00010bf20c00(param_2);
  pdVar2 = (double *)(param_2 + _DAT_112776a98);
  dVar15 = dVar15 - (pdVar2[1] + pdVar2[3]);
  dVar13 = dVar13 - (*pdVar2 + pdVar2[2]);
  _CGRectIntegral(dVar16 + pdVar2[1],dVar18 + *pdVar2,dVar15,dVar13);
  lVar6 = (long)_DAT_112776a80;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar6));
  lVar8 = param_2;
  func_0x00010beed3a0();
  dVar16 = 0.0;
  dVar18 = 0.0;
  if ((int)lVar8 != 0) {
    dVar18 = *(double *)(param_2 + _DAT_112776a9c);
  }
  lVar8 = param_2;
  func_0x00010bf81260();
  if ((int)lVar8 != 0) {
    dVar16 = *(double *)(param_2 + _DAT_112776a9c);
  }
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  lVar8 = param_2;
  func_0x00010c142480();
  if ((int)lVar8 == 0) {
    bVar3 = false;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf8d060();
    bVar3 = lVar8 == 1;
  }
  dVar14 = dVar15;
  func_0x00010beed2a0(dVar15,dVar13,param_2);
  lVar8 = param_2;
  func_0x00010beed3a0();
  puVar4 = PTR__CGRectZero_110347608;
  if ((int)lVar8 == 0) {
    dVar19 = *(double *)PTR__CGRectZero_110347608;
    dVar10 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar14 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar13 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    dVar10 = dVar15 - dVar14;
    dVar19 = dVar10;
    if (!bVar3) {
      dVar19 = 0.0;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetMidY();
    dVar10 = dVar10 + dVar13 * -0.5;
  }
  lVar7 = (long)_DAT_112776a94;
  func_0x00010c19f0e0(dVar19,dVar10,dVar14,dVar13,*(undefined8 *)(param_2 + lVar7));
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetWidth();
  dVar13 = dVar19;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetWidth();
  dVar19 = dVar19 - dVar13;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetHeight();
  func_0x00010bf81220(dVar19,dVar13,param_2);
  lVar8 = param_2;
  func_0x00010bf81260();
  if ((int)lVar8 == 0) {
    dVar14 = *(double *)puVar4;
    dVar15 = *(double *)(puVar4 + 8);
    dVar19 = *(double *)(puVar4 + 0x10);
    dVar13 = *(double *)(puVar4 + 0x18);
  }
  else {
    dVar15 = dVar15 - dVar19;
    dVar14 = 0.0;
    if (!bVar3) {
      dVar14 = dVar15;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetMidY();
    dVar15 = dVar15 + dVar13 * -0.5;
  }
  lVar8 = (long)_DAT_112776a90;
  func_0x00010c19f0e0(dVar14,dVar15,dVar19,dVar13,*(undefined8 *)(param_2 + lVar8));
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetWidth();
  dVar15 = dVar14;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetWidth();
  dVar13 = dVar15;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar8));
  _CGRectGetWidth();
  dVar16 = dVar16 + dVar18 + dVar15 + dVar13;
  dVar14 = dVar14 - dVar16;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetHeight();
  dVar15 = dVar14;
  dVar13 = dVar16;
  func_0x00010c2743a0(dVar14,dVar16,param_2);
  lVar8 = param_2;
  func_0x00010c2743c0();
  if ((int)lVar8 == 0) {
    uVar17 = *(undefined8 *)puVar4;
    uVar12 = *(undefined8 *)(puVar4 + 8);
    dVar15 = *(double *)(puVar4 + 0x10);
    dVar13 = *(double *)(puVar4 + 0x18);
  }
  else {
    uVar17 = 0;
    uVar12 = 0;
  }
  lVar9 = (long)_DAT_112776a88;
  func_0x00010c19f0e0(uVar17,uVar12,dVar15,dVar13,*(undefined8 *)(param_2 + lVar9));
  func_0x00010bf200c0(dVar14,dVar16,param_2);
  lVar8 = param_2;
  dVar15 = dVar14;
  func_0x00010bf200e0();
  if ((int)lVar8 == 0) {
    dVar13 = *(double *)puVar4;
    dVar15 = *(double *)(puVar4 + 8);
    dVar14 = *(double *)(puVar4 + 0x10);
    dVar16 = *(double *)(puVar4 + 0x18);
  }
  else {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar9));
    _CGRectGetMaxY();
    dVar13 = 0.0;
  }
  lVar8 = (long)_DAT_112776a8c;
  func_0x00010c19f0e0(dVar13,dVar15,dVar14,dVar16,*(undefined8 *)(param_2 + lVar8));
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar9));
  _CGRectGetWidth();
  dVar19 = dVar13;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar8));
  _CGRectGetWidth();
  dVar10 = dVar19;
  if (dVar19 <= dVar13) {
    dVar10 = dVar13;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar9));
  _CGRectGetHeight();
  dVar13 = dVar19;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar8));
  _CGRectGetHeight();
  dVar11 = dVar13;
  if (bVar3) {
    lVar5 = param_2;
    func_0x00010c2743c0();
    if ((int)lVar5 != 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar9));
      _CGRectGetWidth();
      dVar11 = dVar10 - dVar11;
      func_0x00010c19f0e0(dVar11,dVar15,dVar14,dVar16,*(undefined8 *)(param_2 + lVar9));
    }
    lVar9 = param_2;
    func_0x00010bf200e0();
    if ((int)lVar9 != 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar8));
      _CGRectGetWidth();
      dVar11 = dVar10 - dVar11;
      func_0x00010c19f0e0(dVar11,dVar15,dVar14,dVar16,*(undefined8 *)(param_2 + lVar8));
    }
    lVar8 = param_2;
    func_0x00010beed3a0();
    if ((int)lVar8 == 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
      _CGRectGetWidth();
    }
    else {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
      _CGRectGetMinX();
      dVar11 = dVar11 - dVar18;
    }
    dVar18 = dVar11 - dVar10;
  }
  else {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetMaxX();
    dVar18 = dVar18 + dVar11;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetMidY();
  _CGRectIntegral(dVar18,dVar11 + (dVar19 + dVar13) * -0.5,dVar10,dVar19 + dVar13);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_112776a84));
  return;
}



/* Entry: 1085a4a74; end: 1085a4b8b; -[SCBaseItemView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1085a4a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112776a94));
  uVar2 = uVar1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112776a88));
  _CGRectUnion(uVar1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  uVar2 = uVar1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112776a8c));
  _CGRectUnion(uVar1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  uVar2 = uVar1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112776a90));
  _CGRectUnion(uVar1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  _CGRectGetHeight();
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1085a4b8c; end: 1085a4b9b; -[SCBaseItemView topContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a88);
}



/* Entry: 1085a4b9c; end: 1085a4bab; -[SCBaseItemView bottomContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a8c);
}



/* Entry: 1085a4bac; end: 1085a4bbb; -[SCBaseItemView disclosureView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a90);
}



/* Entry: 1085a4bbc; end: 1085a4bcb; -[SCBaseItemView accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a94);
}



/* Entry: 1085a4bcc; end: 1085a4be3; -[SCBaseItemView contentInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4bcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a98);
}



/* Entry: 1085a4be4; end: 1085a4bfb; -[SCBaseItemView setContentInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112776a98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1085a4bfc; end: 1085a4c0b; -[SCBaseItemView rtlSafeLayoutEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085a4bfc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776a5c);
}



/* Entry: 1085a4c0c; end: 1085a4c1b; -[SCBaseItemView setRtlSafeLayoutEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4c0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112776a5c) = param_3;
  return;
}



/* Entry: 1085a4c1c; end: 1085a4c2b; -[SCBaseItemView bottomSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4c1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a74);
}



/* Entry: 1085a4c2c; end: 1085a4c43; -[SCBaseItemView bottomSeparatorInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4c2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a70);
}



/* Entry: 1085a4c44; end: 1085a4c5b; -[SCBaseItemView setBottomSeparatorInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112776a70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1085a4c5c; end: 1085a4c6b; -[SCBaseItemView topSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4c5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a7c);
}



/* Entry: 1085a4c6c; end: 1085a4c83; -[SCBaseItemView topSeparatorInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4c6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776a78);
}



/* Entry: 1085a4c84; end: 1085a4c9b; -[SCBaseItemView setTopSeparatorInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112776a78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1085a4c9c; end: 1085a4d7b; -[SCBaseItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4c9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776a7c,0);
  _objc_storeStrong(param_1 + _DAT_112776a74,0);
  _objc_storeStrong(param_1 + _DAT_112776a94,0);
  _objc_storeStrong(param_1 + _DAT_112776a90,0);
  _objc_storeStrong(param_1 + _DAT_112776a8c,0);
  _objc_storeStrong(param_1 + _DAT_112776a88,0);
  _objc_storeStrong(param_1 + _DAT_112776a6c,0);
  _objc_storeStrong(param_1 + _DAT_112776a68,0);
  _objc_storeStrong(param_1 + _DAT_112776a64,0);
  _objc_storeStrong(param_1 + _DAT_112776a60,0);
  _objc_storeStrong(param_1 + _DAT_112776a84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776a80,0);
  return;
}



/* Entry: 1085a4d7c; end: 1085a4f3f; -[SCItemViewModel init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1085a4d7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fce60;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar4 = PTR_PTR_1126d3f50;
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    uStack_78 = uVar6;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776aa0);
    *(undefined **)((long)puVar1 + (long)_DAT_112776aa0) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126d3f50;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    uStack_88 = uVar6;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776aa4);
    *(undefined **)((long)puVar1 + (long)_DAT_112776aa4) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(puVar2 + _DAT_112776aa8);
}



/* Entry: 1085a4f40; end: 1085a4f4f; -[SCItemViewModel titleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4f40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776aa8);
}



/* Entry: 1085a4f50; end: 1085a4f5b; -[SCItemViewModel setTitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4f50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085a4f5c; end: 1085a4f6b; -[SCItemViewModel titleTextAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4f5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776aa0);
}



/* Entry: 1085a4f6c; end: 1085a4f77; -[SCItemViewModel setTitleTextAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085a4f78; end: 1085a4f87; -[SCItemViewModel subtitleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4f78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776aac);
}



/* Entry: 1085a4f88; end: 1085a4f93; -[SCItemViewModel setSubtitleText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085a4f94; end: 1085a4fa3; -[SCItemViewModel subtitleTextAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085a4f94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776aa4);
}



/* Entry: 1085a4fa4; end: 1085a4faf; -[SCItemViewModel setSubtitleTextAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085a4fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


