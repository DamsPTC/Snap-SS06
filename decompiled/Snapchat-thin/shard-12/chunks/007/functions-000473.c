/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10965c0a8; end: 10965c557;  */

void FUN_10965c0a8(undefined4 *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 auStack_450 [352];
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  long lStack_2b0;
  long *plStack_2a8;
  long alStack_2a0 [2];
  long *aplStack_290 [44];
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long alStack_e0 [2];
  double dStack_d0;
  double dStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (*param_2 == '\x01') {
    uStack_c0 = 0x42ff0000;
    lStack_80 = (long)&uStack_bc + 4;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar8 = 0x6ae;
    if (param_3 != 0) {
      uVar8 = 0x6b8;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pcVar6 = param_2 + 0x58;
    puStack_78 = &uStack_70;
    FUN_1095ffc3c(pcVar6,uVar8,&uStack_c0);
    if ((int)pcVar6 != 0) {
      dStack_d0 = 0.0;
      dStack_c8 = 0.0;
      uVar7 = **(undefined8 **)(param_2 + 0x50);
      FUN_1095fafb4(uVar7,0x3fe,&dStack_c8);
      if ((int)uVar7 != 0) {
        uVar7 = **(undefined8 **)(param_2 + 0x50);
        FUN_1095fafb4(uVar7,0x3ff,&dStack_d0);
        if ((int)uVar7 != 0) {
          FUN_109a8261c(aplStack_290,3,3,5);
          uStack_130 = 0x42ff0000;
          lStack_f0 = (long)&uStack_12c + 4;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_12c = 0;
          lStack_f8 = 0;
          uStack_fc = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          alStack_e0[1] = 0;
          alStack_e0[0] = 0;
          plStack_e8 = alStack_e0;
          (**(code **)(*aplStack_290[0] + 0x18))
                    (aplStack_290[0],aplStack_290,&uStack_130,0xffffffff);
          FUN_10918eb6c(aplStack_290);
          pfVar5 = (float *)CONCAT44(uStack_11c,uStack_120);
          *pfVar5 = (float)(dStack_c8 + -1.0);
          lVar9 = *plStack_e8;
          *(float *)((long)pfVar5 + lVar9 + 4) = (float)(dStack_d0 + -1.0);
          *(undefined4 *)((long)pfVar5 + lVar9 * 2 + 8) = 0x3f800000;
          FUN_109a8261c(aplStack_290,3,3,5);
          uStack_2f0 = 0x42ff0000;
          lStack_2b0 = (long)&uStack_2ec + 4;
          uStack_2e4 = 0;
          uStack_2e0 = 0;
          uStack_2ec = 0;
          lStack_2b8 = 0;
          uStack_2bc = 0;
          uStack_2c4 = 0;
          uStack_2c0 = 0;
          uStack_2cc = 0;
          uStack_2c8 = 0;
          uStack_2d4 = 0;
          uStack_2d0 = 0;
          uStack_2dc = 0;
          uStack_2d8 = 0;
          alStack_2a0[0] = 0;
          alStack_2a0[1] = 0;
          plStack_2a8 = alStack_2a0;
          (**(code **)(*aplStack_290[0] + 0x18))
                    (aplStack_290[0],aplStack_290,&uStack_2f0,0xffffffff);
          FUN_10918eb6c(aplStack_290);
          pfVar5 = (float *)CONCAT44(uStack_2dc,uStack_2e0);
          *pfVar5 = 1.0 / (float)(param_4 + -1);
          lVar9 = *plStack_2a8;
          *(float *)((long)pfVar5 + lVar9 + 4) = 1.0 / (float)(param_5 + -1);
          *(undefined4 *)((long)pfVar5 + lVar9 * 2 + 8) = 0x3f800000;
          FUN_109a7d740(auStack_450,&uStack_2f0,&uStack_c0);
          FUN_109a7dc0c(aplStack_290,auStack_450,&uStack_130);
          (**(code **)(*aplStack_290[0] + 0x18))(aplStack_290[0],aplStack_290,param_1,0xffffffff);
          FUN_10918eb6c(aplStack_290);
          FUN_10918eb6c(auStack_450);
          if (lStack_2b8 != 0) {
            piVar1 = (int *)(lStack_2b8 + 0x14);
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
              func_0x000109a848d4(&uStack_2f0);
            }
          }
          lStack_2b8 = 0;
          uStack_2d8 = 0;
          uStack_2d4 = 0;
          uStack_2e0 = 0;
          uStack_2dc = 0;
          uStack_2c8 = 0;
          uStack_2c4 = 0;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          if (0 < (int)uStack_2ec) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_2b0 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uStack_2ec);
          }
          if (plStack_2a8 != alStack_2a0 && plStack_2a8 != (long *)0x0) {
            _free(plStack_2a8[-1]);
          }
          if (lStack_f8 != 0) {
            piVar1 = (int *)(lStack_f8 + 0x14);
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
              func_0x000109a848d4(&uStack_130);
            }
          }
          lStack_f8 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if (0 < (int)uStack_12c) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_f0 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uStack_12c);
          }
          if (plStack_e8 != alStack_e0 && plStack_e8 != (long *)0x0) {
            _free(plStack_e8[-1]);
          }
        }
      }
    }
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 0x14);
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
        func_0x000109a848d4(&uStack_c0);
      }
    }
    lStack_88 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    if (0 < (int)uStack_bc) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_80 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_bc);
    }
    if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
      _free(puStack_78[-1]);
    }
  }
  return;
}



/* Entry: 10965c558; end: 10965cdf7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010965c5ec */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10965c558(float *param_1,long param_2)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  float *pfVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  double dVar41;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 auStack_90 [3];
  undefined4 uStack_76;
  undefined2 uStack_72;
  double adStack_70 [4];
  
  FUN_1095ca120(param_1);
  adStack_70[2] = 0.0;
  adStack_70[3] = 0.0;
  adStack_70[1] = 0.0;
  uVar17 = **(undefined8 **)(param_2 + 0x50);
  FUN_1095fafb4(uVar17,0x3fe,adStack_70 + 2);
  uVar18 = **(undefined8 **)(param_2 + 0x50);
  FUN_1095fafb4(uVar18,0x3ff,adStack_70 + 1);
  uVar19 = **(undefined8 **)(param_2 + 0x50);
  FUN_1095fafb4(uVar19,1000,adStack_70 + 3);
  uVar3 = (uint)uVar17 & (uint)uVar18 & (uint)uVar19;
  if (uVar3 == 1) {
    dVar41 = adStack_70[3] + adStack_70[3];
    uVar9 = SUB81(adStack_70[2],0);
    uVar10 = (char)((ulong)adStack_70[2] >> 8);
    uVar11 = (char)((ulong)adStack_70[2] >> 0x10);
    uVar12 = (char)((ulong)adStack_70[2] >> 0x18);
    uVar13 = (char)((ulong)adStack_70[2] >> 0x20);
    uVar14 = (char)((ulong)adStack_70[2] >> 0x28);
    uVar15 = (char)((ulong)adStack_70[2] >> 0x30);
    uVar16 = (char)((ulong)adStack_70[2] >> 0x38);
    _atan2(CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(uVar33,CONCAT13(uVar31,CONCAT12(
                                                  uVar29,CONCAT11(uVar27,uVar25))))))),dVar41);
    uVar39 = uVar16;
    uVar37 = uVar15;
    uVar35 = uVar14;
    uVar33 = uVar13;
    uVar31 = uVar12;
    uVar29 = uVar11;
    uVar27 = uVar10;
    uVar25 = uVar9;
    dVar7 = (double)CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(uVar33,CONCAT13(uVar31,
                                                  CONCAT12(uVar29,CONCAT11(uVar27,uVar25)))))));
    uVar9 = SUB81(adStack_70[1],0);
    uVar10 = (char)((ulong)adStack_70[1] >> 8);
    uVar11 = (char)((ulong)adStack_70[1] >> 0x10);
    uVar12 = (char)((ulong)adStack_70[1] >> 0x18);
    uVar13 = (char)((ulong)adStack_70[1] >> 0x20);
    uVar14 = (char)((ulong)adStack_70[1] >> 0x28);
    uVar15 = (char)((ulong)adStack_70[1] >> 0x30);
    uVar16 = (char)((ulong)adStack_70[1] >> 0x38);
    _atan2(CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,CONCAT13(uVar32,CONCAT12(
                                                  uVar30,CONCAT11(uVar28,uVar26))))))),dVar41);
    uVar40 = uVar16;
    uVar38 = uVar15;
    uVar36 = uVar14;
    uVar34 = uVar13;
    uVar32 = uVar12;
    uVar30 = uVar11;
    uVar28 = uVar10;
    uVar26 = uVar9;
    dVar41 = (double)CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,CONCAT13(uVar32
                                                  ,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)))))));
    dVar7 = (dVar7 + dVar7) * 57.29577951308232;
    dVar41 = (dVar41 + dVar41) * 57.29577951308232;
    auVar6[8] = SUB81(dVar41,0);
    auVar6._0_8_ = dVar7;
    auVar6[9] = (char)((ulong)dVar41 >> 8);
    auVar6[10] = (char)((ulong)dVar41 >> 0x10);
    auVar6[0xb] = (char)((ulong)dVar41 >> 0x18);
    auVar6[0xc] = (char)((ulong)dVar41 >> 0x20);
    auVar6[0xd] = (char)((ulong)dVar41 >> 0x28);
    auVar6[0xe] = (char)((ulong)dVar41 >> 0x30);
    auVar6[0xf] = (char)((ulong)dVar41 >> 0x38);
    fVar8 = (float)auVar6._8_8_;
    *(ulong *)(param_1 + 1) =
         CONCAT17((char)((uint)fVar8 >> 0x18),
                  CONCAT16((char)((uint)fVar8 >> 0x10),
                           CONCAT15((char)((uint)fVar8 >> 8),CONCAT14(SUB41(fVar8,0),(float)dVar7)))
                 );
  }
  uVar17 = **(undefined8 **)(param_2 + 0x50);
  FUN_1095fafb4(uVar17,10,adStack_70);
  if ((uVar3 & (uint)uVar17) == 1) {
    *param_1 = (float)adStack_70[0];
  }
  uStack_76 = 0x13921388;
  uStack_72 = 0x139c;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_10965cdf8(param_2 + 0x58,&uStack_76,param_1 + 4,&uStack_e0);
  uStack_e0 = CONCAT26(uStack_e0._6_2_,0x13ba13b013a6);
  FUN_10965cdf8(param_2 + 0x58,&uStack_e0,param_1 + 10,&UNK_10dfd8cc8);
  uStack_76 = 0x13f613ec;
  uStack_72 = 0x1400;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_10965cdf8(param_2 + 0x58,&uStack_76,param_1 + 0x10,&uStack_e0);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + -90.0;
  FUN_10965bd30(&uStack_e0,param_2,0,0,1);
  if (*(long *)(param_1 + 0x24) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x24) + 0x14);
    do {
      iVar20 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x16);
    }
  }
  if (0 < (int)param_1[0x17]) {
    lVar21 = 0;
    lVar23 = *(long *)(param_1 + 0x26);
    do {
      *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_1[0x17]);
  }
  *(undefined8 *)(param_1 + 0x18) = uStack_d8;
  *(undefined8 *)(param_1 + 0x16) = uStack_e0;
  *(undefined8 *)(param_1 + 0x1c) = uStack_c8;
  *(undefined8 *)(param_1 + 0x1a) = uStack_d0;
  *(undefined8 *)(param_1 + 0x20) = uStack_b8;
  *(undefined8 *)(param_1 + 0x1e) = uStack_c0;
  *(undefined8 *)(param_1 + 0x24) = uStack_a8;
  *(undefined8 *)(param_1 + 0x22) = uStack_b0;
  pfVar24 = *(float **)(param_1 + 0x28);
  pfVar2 = param_1 + 0x2a;
  iVar20 = uStack_e0._4_4_;
  if (pfVar24 != pfVar2) {
    if (pfVar24 != (float *)0x0) {
      _free(*(undefined8 *)(pfVar24 + -2));
    }
    *(float **)(param_1 + 0x26) = param_1 + 0x18;
    *(float **)(param_1 + 0x28) = pfVar2;
    pfVar24 = pfVar2;
    iVar20 = uStack_e0._4_4_;
  }
  if (iVar20 < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
    *(undefined8 *)pfVar24 = *puStack_98;
    *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_98 != auStack_90) {
      _free(puStack_98[-1]);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x26) = uStack_a0;
    *(undefined8 **)(param_1 + 0x28) = puStack_98;
  }
  FUN_10965bd30(&uStack_e0,param_2,1,0,1);
  if (*(long *)(param_1 + 0x3c) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x3c) + 0x14);
    do {
      iVar20 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2e);
    }
  }
  if (0 < (int)param_1[0x2f]) {
    lVar21 = 0;
    lVar23 = *(long *)(param_1 + 0x3e);
    do {
      *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_1[0x2f]);
  }
  *(undefined8 *)(param_1 + 0x30) = uStack_d8;
  *(undefined8 *)(param_1 + 0x2e) = uStack_e0;
  *(undefined8 *)(param_1 + 0x34) = uStack_c8;
  *(undefined8 *)(param_1 + 0x32) = uStack_d0;
  *(undefined8 *)(param_1 + 0x38) = uStack_b8;
  *(undefined8 *)(param_1 + 0x36) = uStack_c0;
  *(undefined8 *)(param_1 + 0x3c) = uStack_a8;
  *(undefined8 *)(param_1 + 0x3a) = uStack_b0;
  pfVar24 = *(float **)(param_1 + 0x40);
  pfVar2 = param_1 + 0x42;
  iVar20 = uStack_e0._4_4_;
  if (pfVar24 != pfVar2) {
    if (pfVar24 != (float *)0x0) {
      _free(*(undefined8 *)(pfVar24 + -2));
    }
    *(float **)(param_1 + 0x3e) = param_1 + 0x30;
    *(float **)(param_1 + 0x40) = pfVar2;
    pfVar24 = pfVar2;
    iVar20 = uStack_e0._4_4_;
  }
  if (iVar20 < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
    *(undefined8 *)pfVar24 = *puStack_98;
    *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_98 != auStack_90) {
      _free(puStack_98[-1]);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x3e) = uStack_a0;
    *(undefined8 **)(param_1 + 0x40) = puStack_98;
  }
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    FUN_10965bd30(&uStack_e0,param_2,0,1,1);
    if (*(long *)(param_1 + 0x54) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x54) + 0x14);
      do {
        iVar20 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x46);
      }
    }
    if (0 < (int)param_1[0x47]) {
      lVar21 = 0;
      lVar23 = *(long *)(param_1 + 0x56);
      do {
        *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)param_1[0x47]);
    }
    *(undefined8 *)(param_1 + 0x48) = uStack_d8;
    *(undefined8 *)(param_1 + 0x46) = uStack_e0;
    *(undefined8 *)(param_1 + 0x4c) = uStack_c8;
    *(undefined8 *)(param_1 + 0x4a) = uStack_d0;
    *(undefined8 *)(param_1 + 0x50) = uStack_b8;
    *(undefined8 *)(param_1 + 0x4e) = uStack_c0;
    *(undefined8 *)(param_1 + 0x54) = uStack_a8;
    *(undefined8 *)(param_1 + 0x52) = uStack_b0;
    pfVar24 = *(float **)(param_1 + 0x58);
    pfVar2 = param_1 + 0x5a;
    iVar20 = uStack_e0._4_4_;
    if (pfVar24 != pfVar2) {
      if (pfVar24 != (float *)0x0) {
        _free(*(undefined8 *)(pfVar24 + -2));
      }
      *(float **)(param_1 + 0x56) = param_1 + 0x48;
      *(float **)(param_1 + 0x58) = pfVar2;
      pfVar24 = pfVar2;
      iVar20 = uStack_e0._4_4_;
    }
    if (iVar20 < 3) {
      puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
      *(undefined8 *)pfVar24 = *puStack_98;
      *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      *(undefined8 *)((long)puVar22 + 0x34) = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      if (puStack_98 != auStack_90) {
        _free(puStack_98[-1]);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x56) = uStack_a0;
      *(undefined8 **)(param_1 + 0x58) = puStack_98;
    }
    FUN_10965bd30(&uStack_e0,param_2,1,1,1);
    if (*(long *)(param_1 + 0x6c) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x6c) + 0x14);
      do {
        iVar20 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar20 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x5e);
      }
    }
    if (0 < (int)param_1[0x5f]) {
      lVar21 = 0;
      lVar23 = *(long *)(param_1 + 0x6e);
      do {
        *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)param_1[0x5f]);
    }
    *(undefined8 *)(param_1 + 0x60) = uStack_d8;
    *(undefined8 *)(param_1 + 0x5e) = uStack_e0;
    *(undefined8 *)(param_1 + 100) = uStack_c8;
    *(undefined8 *)(param_1 + 0x62) = uStack_d0;
    *(undefined8 *)(param_1 + 0x68) = uStack_b8;
    *(undefined8 *)(param_1 + 0x66) = uStack_c0;
    *(undefined8 *)(param_1 + 0x6c) = uStack_a8;
    *(undefined8 *)(param_1 + 0x6a) = uStack_b0;
    pfVar24 = *(float **)(param_1 + 0x70);
    pfVar2 = param_1 + 0x72;
    iVar20 = uStack_e0._4_4_;
    if (pfVar24 != pfVar2) {
      if (pfVar24 != (float *)0x0) {
        _free(*(undefined8 *)(pfVar24 + -2));
      }
      *(float **)(param_1 + 0x6e) = param_1 + 0x60;
      *(float **)(param_1 + 0x70) = pfVar2;
      pfVar24 = pfVar2;
      iVar20 = uStack_e0._4_4_;
    }
    if (iVar20 < 3) {
      puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
      *(undefined8 *)pfVar24 = *puStack_98;
      *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      *(undefined8 *)((long)puVar22 + 0x34) = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      if (puStack_98 != auStack_90) {
        _free(puStack_98[-1]);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6e) = uStack_a0;
      *(undefined8 **)(param_1 + 0x70) = puStack_98;
    }
  }
  FUN_10965c0a8(&uStack_e0,param_2,0,(*(undefined4 **)(param_1 + 0x26))[1],
                **(undefined4 **)(param_1 + 0x26));
  if (*(long *)(param_1 + 0x84) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x84) + 0x14);
    do {
      iVar20 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x76);
    }
  }
  if (0 < (int)param_1[0x77]) {
    lVar21 = 0;
    lVar23 = *(long *)(param_1 + 0x86);
    do {
      *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_1[0x77]);
  }
  *(undefined8 *)(param_1 + 0x78) = uStack_d8;
  *(undefined8 *)(param_1 + 0x76) = uStack_e0;
  *(undefined8 *)(param_1 + 0x7c) = uStack_c8;
  *(undefined8 *)(param_1 + 0x7a) = uStack_d0;
  *(undefined8 *)(param_1 + 0x80) = uStack_b8;
  *(undefined8 *)(param_1 + 0x7e) = uStack_c0;
  *(undefined8 *)(param_1 + 0x84) = uStack_a8;
  *(undefined8 *)(param_1 + 0x82) = uStack_b0;
  pfVar24 = *(float **)(param_1 + 0x88);
  pfVar2 = param_1 + 0x8a;
  iVar20 = uStack_e0._4_4_;
  if (pfVar24 != pfVar2) {
    if (pfVar24 != (float *)0x0) {
      _free(*(undefined8 *)(pfVar24 + -2));
    }
    *(float **)(param_1 + 0x88) = pfVar2;
    *(float **)(param_1 + 0x86) = param_1 + 0x78;
    pfVar24 = pfVar2;
    iVar20 = uStack_e0._4_4_;
  }
  if (iVar20 < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
    *(undefined8 *)pfVar24 = *puStack_98;
    *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_98 != auStack_90) {
      _free(puStack_98[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0x88) = puStack_98;
    *(undefined8 *)(param_1 + 0x86) = uStack_a0;
  }
  FUN_10965c0a8(&uStack_e0,param_2,1,(*(undefined4 **)(param_1 + 0x3e))[1],
                **(undefined4 **)(param_1 + 0x3e));
  if (*(long *)(param_1 + 0x9c) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x9c) + 0x14);
    do {
      iVar20 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x8e);
    }
  }
  if (0 < (int)param_1[0x8f]) {
    lVar21 = 0;
    lVar23 = *(long *)(param_1 + 0x9e);
    do {
      *(undefined4 *)(lVar23 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_1[0x8f]);
  }
  *(undefined8 *)(param_1 + 0x90) = uStack_d8;
  *(undefined8 *)(param_1 + 0x8e) = uStack_e0;
  *(undefined8 *)(param_1 + 0x94) = uStack_c8;
  *(undefined8 *)(param_1 + 0x92) = uStack_d0;
  *(undefined8 *)(param_1 + 0x98) = uStack_b8;
  *(undefined8 *)(param_1 + 0x96) = uStack_c0;
  *(undefined8 *)(param_1 + 0x9c) = uStack_a8;
  *(undefined8 *)(param_1 + 0x9a) = uStack_b0;
  pfVar24 = *(float **)(param_1 + 0xa0);
  pfVar2 = param_1 + 0xa2;
  iVar20 = uStack_e0._4_4_;
  if (pfVar24 != pfVar2) {
    if (pfVar24 != (float *)0x0) {
      _free(*(undefined8 *)(pfVar24 + -2));
    }
    *(float **)(param_1 + 0xa0) = pfVar2;
    *(float **)(param_1 + 0x9e) = param_1 + 0x90;
    pfVar24 = pfVar2;
    iVar20 = uStack_e0._4_4_;
  }
  if (iVar20 < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_e0 | 4);
    *(undefined8 *)pfVar24 = *puStack_98;
    *(undefined8 *)(pfVar24 + 2) = puStack_98[1];
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x42ff0000);
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_98 != auStack_90) {
      _free(puStack_98[-1]);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0xa0) = puStack_98;
    *(undefined8 *)(param_1 + 0x9e) = uStack_a0;
  }
  return;
}



/* Entry: 10965cdf8; end: 10965ce8b;  */

void FUN_10965cdf8(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    iVar4 = (int)lVar5;
    puVar1 = param_3;
    if (iVar4 == 1) {
      puVar1 = param_3 + 1;
    }
    puVar2 = param_3 + 2;
    if (iVar4 != 2) {
      puVar2 = puVar1;
    }
    uVar3 = *(ulong *)*param_1;
    FUN_1095fafb4(uVar3,*(undefined2 *)(param_2 + lVar5 * 2),puVar2);
    if ((uVar3 & 1) == 0) {
      puVar1 = param_3;
      if (iVar4 == 1) {
        puVar1 = param_3 + 1;
      }
      puVar2 = param_3 + 2;
      if (iVar4 != 2) {
        puVar2 = puVar1;
      }
      *puVar2 = *(undefined8 *)(param_4 + lVar5 * 8);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  return;
}



/* Entry: 10965ce8c; end: 10965ce9f;  */

void FUN_10965ce8c(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_4 != 0) {
    if (0x5d1745d1745d174 < param_4) {
      FUN_10965cfa4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10965cf88);
      (*pcVar1)();
    }
    puVar3 = puVar2;
    FUN_10965cfb8();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = (undefined *)((long)puVar3 + param_4 * 0x2c);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(puVar3,param_2,param_3);
    }
    puVar2[1] = (undefined *)((long)puVar3 + param_3);
  }
  return;
}



/* Entry: 10965cea0; end: 10965cee3;  */

void FUN_10965cea0(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_4 != 0) {
    if (0x5d1745d1745d174 < param_4) {
      FUN_10965cfa4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10965cf88);
      (*pcVar1)();
    }
    puVar3 = puVar2;
    FUN_10965cfb8();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = (undefined *)((long)puVar3 + param_4 * 0x2c);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(puVar3,param_2,param_3);
    }
    puVar2[1] = (undefined *)((long)puVar3 + param_3);
  }
  return;
}



/* Entry: 10965cee4; end: 10965cef7;  */

void FUN_10965cee4(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_4 != 0) {
    if (0x5d1745d1745d174 < param_4) {
      FUN_10965cfa4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10965cf88);
      (*pcVar1)();
    }
    puVar3 = puVar2;
    FUN_10965cfb8();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = (undefined *)((long)puVar3 + param_4 * 0x2c);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(puVar3,param_2,param_3);
    }
    puVar2[1] = (undefined *)((long)puVar3 + param_3);
  }
  return;
}



/* Entry: 10965cef8; end: 10965cfa3;  */

void FUN_10965cef8(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_4 != 0) {
    if (0x5d1745d1745d174 < param_4) {
      FUN_10965cfa4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10965cf88);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10965cfb8();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_4 * 0x2c;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar2,param_2,param_3);
    }
    param_1[1] = (long)plVar2 + param_3;
  }
  return;
}



/* Entry: 10965cfa4; end: 10965cfb7;  */

undefined1  [16] FUN_10965cfa4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x5d1745d1745d175) {
    lVar2 = param_2 * 0x2c;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  if (puVar1[0x40] == '\x01') {
    if (*(long *)(puVar1 + 0x28) != 0) {
      *(long *)(puVar1 + 0x30) = *(long *)(puVar1 + 0x28);
      __ZdlPv();
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      *(long *)(puVar1 + 0x18) = *(long *)(puVar1 + 0x10);
      __ZdlPv();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10965cfb8; end: 10965d04b;  */

undefined1  [16] FUN_10965cfb8(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x5d1745d1745d175) {
    lVar1 = param_2 * 0x2c;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
      __ZdlPv();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10965d04c; end: 10965d0eb;  */

long FUN_10965d04c(long param_1)

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



/* Entry: 10965d0ec; end: 10965d1e3;  */

/* WARNING: Possible PIC construction at 0x00010965d118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010965d11c) */
/* WARNING: Removing unreachable block (ram,0x00010965d140) */
/* WARNING: Removing unreachable block (ram,0x00010965d134) */
/* WARNING: Removing unreachable block (ram,0x00010965d138) */
/* WARNING: Removing unreachable block (ram,0x00010965d144) */
/* WARNING: Removing unreachable block (ram,0x00010965d150) */
/* WARNING: Removing unreachable block (ram,0x00010965d17c) */
/* WARNING: Removing unreachable block (ram,0x00010965d168) */

undefined1 * FUN_10965d0ec(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    if (plVar1 == param_2) {
      puStack_30 = auStack_48;
      (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],auStack_48);
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return auStack_48;
}



/* Entry: 10965d1e4; end: 10965d22b;  */

void FUN_10965d1e4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xe00;
  __Znwm();
  FUN_10965d22c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10965d22c; end: 10965d273;  */

undefined8 * FUN_10965d22c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b003d0;
  FUN_10965d48c(param_1 + 3);
  return param_1;
}



/* Entry: 10965d274; end: 10965d283;  */

void FUN_10965d274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b003d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10965d284; end: 10965d2a3;  */

void FUN_10965d284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b003d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10965d2a4; end: 10965d487;  */

void FUN_10965d2a4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_1096690c0(*(undefined8 *)(param_1 + 0x68));
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)(param_1 + 0xdd8);
  lVar3 = -0x780;
  do {
    if (plVar1[-1] != 0) {
      *plVar1 = plVar1[-1];
      __ZdlPv();
    }
    if (plVar1[-4] != 0) {
      plVar1[-3] = plVar1[-4];
      __ZdlPv();
    }
    plVar1 = plVar1 + -8;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x628);
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_110b006a0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x5e8);
  FUN_10965d6a4(param_1 + 0x5c0);
  plVar1 = (long *)*(long *)(param_1 + 0x5a0);
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    FUN_10965d83c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x168) == '\x01') && (*(long *)(param_1 + 0x150) != 0)) {
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x118) == '\x01') && (*(long *)(param_1 + 0x100) != 0)) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0xc0);
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        if (*(long *)(lVar4 + -0x18) != 0) {
          *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
          __ZdlPv();
        }
        lVar4 = lVar4 + -0x48;
      } while (lVar4 != lVar3);
      lVar2 = *(long *)(param_1 + 0xb8);
    }
    *(long *)(param_1 + 0xc0) = lVar3;
    __ZdlPv(lVar2);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
  lVar3 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar3 != 0) {
    FUN_109668f50();
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 == (long *)(param_1 + 0x40)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10965d43c;
    lVar3 = 0x28;
  }
  (**(code **)(*plVar1 + lVar3))();
LAB_10965d43c:
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010965d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar3))();
  return;
}



/* Entry: 10965d488; end: 10965d48b;  */

void FUN_10965d488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10965d48c; end: 10965d6a3;  */

undefined1 * FUN_10965d48c(undefined1 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  puVar3 = (undefined8 *)0xd0;
  __Znwm();
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0xffffffff;
  *(undefined2 *)((long)puVar3 + 0x14) = 0x4bf;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  *(undefined8 *)((long)puVar3 + 0x5a) = 0;
  *(undefined8 *)((long)puVar3 + 0x52) = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x16] = 0;
  puVar3[0x15] = 0;
  puVar3[0x18] = 0;
  puVar3[0x17] = 0;
  *(undefined2 *)(puVar3 + 0x19) = 0;
  *(undefined1 *)((long)puVar3 + 0xca) = 2;
  *puVar2 = puVar3;
  puVar2[1] = 0x32aaaba7;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar2;
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(undefined8 *)(param_1 + 0x60) = 0x32aaaba7;
  param_1[0x100] = 0;
  param_1[0x108] = 0;
  param_1[0x150] = 0;
  param_1[0x158] = 0;
  param_1[0x160] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  _bzero(param_1 + 0x168,0x409);
  *(undefined ***)(param_1 + 0x5a0) = &PTR_FUN_110b006a0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5d0) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  lVar4 = 0;
  do {
    *(undefined8 *)(param_1 + lVar4 + 0x650) = 0;
    param_1[lVar4 + 0x658] = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x668) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x660) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x678) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x670) = 0;
    lVar1 = lVar4 + 0x40;
    *(undefined8 *)(param_1 + lVar4 + 0x688) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x680) = 0;
    lVar4 = lVar1;
  } while (lVar1 != 0x780);
  *(undefined8 *)(param_1 + 0xdd0) = 0xffffffffffffffff;
  param_1[0xdd8] = 0;
  param_1[0xde0] = 0;
  return param_1;
}



/* Entry: 10965d6a4; end: 10965d727;  */

long * FUN_10965d6a4(long *param_1)

{
  long lVar1;
  
  func_0x00010965d6dc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10965d728; end: 10965d797;  */

void FUN_10965d728(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0xa0;
        FUN_10965d798(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10965d798; end: 10965d83b;  */

void FUN_10965d798(long param_1)

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
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10965d83c; end: 10965d8df;  */

void FUN_10965d83c(long param_1)

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
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10965d8e0; end: 10965d99b;  */

long FUN_10965d8e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10965d99c; end: 10965dc8b;  */

undefined8 FUN_10965d99c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
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
  uStack_178 = 0;
  uStack_180 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (-1 < *(char *)(param_1 + 0x27)) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
  }
  _stat(puVar1,&uStack_180);
  if (((int)puVar1 == 0) || (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xf8))) {
    uVar2 = 1;
  }
  else {
    if (0 < iRam00000001132dfb08) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_10926db08(&uStack_180);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      func_0x000107c31940(auStack_198,&UNK_10f57a8d7);
      func_0x000107c31940(auStack_1b0,&UNK_10f57a953);
      FUN_109671348(&uStack_180,1,auStack_198,auStack_1b0,0x13);
      FUN_1092b4db8();
      FUN_1092b4db8();
      if (cStack_199 < '\0') {
        __ZdlPv(auStack_1b0[0]);
      }
      if (cStack_181 < '\0') {
        __ZdlPv(auStack_198[0]);
      }
      FUN_109671170(&uStack_180);
    }
    uVar2 = 0;
  }
  if (*(char *)(param_1 + 0x158) != '\x02') {
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
    uStack_178 = 0;
    uStack_180 = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (-1 < *(char *)(param_1 + 0x3f)) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
    }
    _stat(puVar1,&uStack_180);
    if ((int)puVar1 != 0) {
      if (0 < iRam00000001132dfb08) {
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        FUN_10926db08(&uStack_180);
        uStack_78 = CONCAT44(uStack_78._4_4_,3);
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        func_0x000107c31940(auStack_198,&UNK_10f57a8d7);
        func_0x000107c31940(auStack_1b0,&UNK_10f57a953);
        FUN_109671348(&uStack_180,1,auStack_198,auStack_1b0,0x19);
        FUN_1092b4db8();
        FUN_1092b4db8();
        if (cStack_199 < '\0') {
          __ZdlPv(auStack_1b0[0]);
        }
        if (cStack_181 < '\0') {
          __ZdlPv(auStack_198[0]);
        }
        FUN_109671170(&uStack_180);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 10965dc8c; end: 10965ddbb;  */

long * FUN_10965dc8c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar3 = param_1;
  FUN_10965d99c();
  if ((int)plVar3 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    if (3 < *(byte *)(param_1 + 0x2b)) {
      uVar2 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEi(auStack_60,(char)param_1[0x2b]);
      FUN_10928a5e0(auStack_48,&UNK_10f57a9b6,auStack_60);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar2,auStack_48);
      ___cxa_throw(uVar2,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10965dd64);
      (*pcVar1)();
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + (ulong)*(byte *)(param_1 + 0x2b) * 8 + 0x20))(param_1);
  }
  if (param_1[0x28] != param_1[0x27]) {
    FUN_10965ddbc(param_1,param_1 + 0x27);
  }
  return plVar3;
}



/* Entry: 10965ddbc; end: 10965de3b;  */

void FUN_10965ddbc(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puStack_30;
  undefined4 uStack_28;
  
  puVar1 = (ulong *)(param_1 + 0x168);
  uStack_28 = 0;
  puVar7 = (undefined8 *)0x10;
  puStack_30 = puVar1;
  FUN_10965e030(&puStack_30);
  puVar2 = (ushort *)param_2[1];
  puVar3 = (ushort *)*param_2;
  while( true ) {
    if (puVar3 == puVar2) {
      return;
    }
    if (0xf < (ulong)*puVar3) break;
    *puVar1 = *puVar1 | 1L << ((ulong)*puVar3 & 0x3f);
    puVar3 = puVar3 + 1;
  }
  puVar6 = &UNK_10f57a9d1;
  FUN_109262df8();
  func_0x000104bd46a0();
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar7,0x7e4);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar7,0x7f8);
  FUN_1095fb63c(0,*(undefined8 *)*puVar7,10000);
  uVar10 = 0;
  if (puVar6[0x164] == '\0') {
    uVar10 = 0x3ff0000000000000;
  }
  FUN_1095fb63c(uVar10,*(undefined8 *)*puVar7,0x816);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar7,0x80c);
  FUN_1095fb63c(0,*(undefined8 *)*puVar7,0x804);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar7,0x8ca);
  uVar10 = 0x3ff0000000000000;
  if (puVar6[0x110] == '\0') {
    uVar10 = 0;
  }
  FUN_1095fb63c(uVar10,*(undefined8 *)*puVar7,0x8fc);
  FUN_1095fb63c((double)*(int *)(puVar6 + 0x15c),*(undefined8 *)*puVar7,0x993);
  FUN_1095fb63c((double)*(int *)(puVar6 + 0x160),*(undefined8 *)*puVar7,0x992);
  uVar10 = 0x3ff0000000000000;
  if (puVar6[0x165] == '\0') {
    uVar10 = 0;
  }
  FUN_1095fb63c(uVar10,*(undefined8 *)*puVar7,0x960);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar7,0x9f6);
  uVar10 = 0x3ff0000000000000;
  if (puVar6[0x166] == '\0') {
    uVar10 = 0;
  }
  FUN_1095fb63c(uVar10,*(undefined8 *)*puVar7,0x7fd);
  puVar8 = *(undefined8 **)(puVar6 + 0x120);
  while (puVar8 != (undefined8 *)(puVar6 + 0x128)) {
    FUN_1095fb63c(puVar8[5],*(undefined8 *)*puVar7,*(undefined2 *)(puVar8 + 4));
    puVar4 = (undefined8 *)puVar8[1];
    puVar9 = puVar8;
    if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
      do {
        puVar8 = (undefined8 *)puVar9[2];
        bVar5 = (undefined8 *)*puVar8 != puVar9;
        puVar9 = puVar8;
      } while (bVar5);
    }
    else {
      do {
        puVar8 = puVar4;
        puVar4 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    }
  }
  return;
}



/* Entry: 10965de3c; end: 10965df9f;  */

void FUN_10965de3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x7e4);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x7f8);
  FUN_1095fb63c(0,*(undefined8 *)*param_2,10000);
  uVar5 = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    uVar5 = 0x3ff0000000000000;
  }
  FUN_1095fb63c(uVar5,*(undefined8 *)*param_2,0x816);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x80c);
  FUN_1095fb63c(0,*(undefined8 *)*param_2,0x804);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x8ca);
  uVar5 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar5 = 0;
  }
  FUN_1095fb63c(uVar5,*(undefined8 *)*param_2,0x8fc);
  FUN_1095fb63c((double)*(int *)(param_1 + 0x15c),*(undefined8 *)*param_2,0x993);
  FUN_1095fb63c((double)*(int *)(param_1 + 0x160),*(undefined8 *)*param_2,0x992);
  uVar5 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x165) == '\0') {
    uVar5 = 0;
  }
  FUN_1095fb63c(uVar5,*(undefined8 *)*param_2,0x960);
  FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x9f6);
  uVar5 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x166) == '\0') {
    uVar5 = 0;
  }
  FUN_1095fb63c(uVar5,*(undefined8 *)*param_2,0x7fd);
  plVar3 = *(long **)(param_1 + 0x120);
  while (plVar3 != (long *)(param_1 + 0x128)) {
    FUN_1095fb63c(plVar3[5],*(undefined8 *)*param_2,(short)plVar3[4]);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10965dfa0; end: 10965e01f;  */

void FUN_10965dfa0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x120);
  while (plVar3 != (long *)(param_1 + 0x128)) {
    FUN_1095fb63c(plVar3[5],*(undefined8 *)*param_2,(short)plVar3[4]);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10965e020; end: 10965e02f;  */

void FUN_10965e020(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10965e024);
  (*pcVar1)();
}



/* Entry: 10965e030; end: 10965e0db;  */

void FUN_10965e030(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 & (0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) &
                         -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff);
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _bzero(puVar4,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] =
         puVar4[uVar5] & (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}



/* Entry: 10965e0dc; end: 1096605ef;  */

void FUN_10965e0dc(undefined8 *param_1,long param_2,undefined8 param_3,uint *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  code *pcVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  int iVar23;
  int *piVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  uint *puVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  undefined1 (*pauVar40) [16];
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  undefined4 *puVar44;
  float *pfVar45;
  float *pfVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  int iVar53;
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ushort uVar65;
  undefined2 uVar66;
  undefined2 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  int iStack_8c8;
  int iStack_8c4;
  long lStack_8c0;
  int *piStack_890;
  long *plStack_888;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_840;
  int *piStack_810;
  long *plStack_808;
  uint uStack_7d0;
  uint uStack_7cc;
  int iStack_7c8;
  int iStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  long lStack_798;
  int *piStack_790;
  long *plStack_788;
  long alStack_780 [3];
  undefined1 auStack_768 [128];
  undefined1 auStack_6e8 [64];
  int *piStack_6a8;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 **ppuStack_658;
  long lStack_650;
  long *plStack_618;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  uint auStack_4e0 [2];
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined4 *puStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined4 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined4 *puStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  undefined8 uStack_314;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  undefined4 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d4;
  undefined8 uStack_2cc;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_214;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 *puStack_138;
  uint *puStack_130;
  long lStack_128;
  long *plStack_f0;
  undefined8 auStack_b8 [3];
  
  iVar53 = *(int *)(param_1 + 0x13);
  iVar4 = *(int *)((long)param_1 + 0x9c);
  iVar9 = 0;
  if (iVar53 != 0) {
    iVar9 = *(int *)(param_2 + 0xc) / iVar53;
  }
  iVar10 = 0;
  if (iVar4 != 0) {
    iVar10 = *(int *)(param_2 + 8) / iVar4;
  }
  *(int *)(param_1 + 0x18) = iVar9;
  *(int *)((long)param_1 + 0xc4) = iVar10;
  iVar3 = **(int **)(param_2 + 0x40);
  iVar23 = (*(int **)(param_2 + 0x40))[1];
  *(int *)(param_1 + 0x19) = iVar23;
  *(int *)((long)param_1 + 0xcc) = iVar3;
  if ((iVar9 * iVar53 == iVar23) && (iVar10 * iVar4 == iVar3)) {
    if (0xf < *(int *)(param_1 + 0x11) - *(int *)((long)param_1 + 0x84)) {
      uVar55 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_109660198;
    }
    uStack_470 = (long *)CONCAT44(iVar3,iVar23);
    FUN_1095d359c(auStack_6e8,param_1,&uStack_470,0);
    uStack_470 = (long *)param_1[0x19];
    FUN_1095d359c(auStack_768,param_1,&uStack_470,0);
    uStack_7d0 = 0x42ff0000;
    iStack_7c4 = 0;
    uStack_7c0 = 0;
    uStack_7cc = 0;
    iStack_7c8 = 0;
    piStack_790 = (int *)((ulong)&uStack_7d0 | 8);
    uStack_7b4 = 0;
    uStack_7b0 = 0;
    uStack_7bc = 0;
    uStack_7b8 = 0;
    uStack_7a4 = 0;
    uStack_7ac = 0;
    uStack_7a8 = 0;
    lStack_798 = 0;
    uStack_7a0 = 0;
    uStack_79c = 0;
    alStack_780[0] = 0;
    alStack_780[1] = 0;
    plStack_788 = alStack_780;
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1096605f0(param_1,param_2,auStack_6e8);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (2 < iRam00000001132dfb08) {
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_388 = 0;
      uStack_384 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      puStack_3b0 = (undefined8 *)0x0;
      puStack_3b8 = (undefined4 *)0x0;
      uStack_3c0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3cc = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3e8 = 0;
      uStack_3e4 = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      puStack_410 = (undefined8 *)0x0;
      puStack_418 = (undefined4 *)0x0;
      uStack_420 = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_448 = 0;
      uStack_444 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 0;
      uStack_468 = (undefined8 **)0x0;
      uStack_470 = (long *)0x0;
      FUN_10926db08(&uStack_470);
      uStack_368 = 3;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_330 = 0;
      func_0x000107c31940(&uStack_660,&UNK_10f57a9f2);
      func_0x000107c31940(&puStack_138,&UNK_10f57ab3e);
      FUN_109671348(&uStack_470,3,&uStack_660,&puStack_138,0x1aa);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
      FUN_1092b4db8();
      if (lStack_128 < 0) {
        __ZdlPv(puStack_138);
      }
      if (lStack_650 < 0) {
        __ZdlPv(uStack_660);
      }
      FUN_109671170(&uStack_470);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1096605f0(param_1,param_3,auStack_768);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (2 < iRam00000001132dfb08) {
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_388 = 0;
      uStack_384 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      puStack_3b0 = (undefined8 *)0x0;
      puStack_3b8 = (undefined4 *)0x0;
      uStack_3c0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3cc = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3e8 = 0;
      uStack_3e4 = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      puStack_410 = (undefined8 *)0x0;
      puStack_418 = (undefined4 *)0x0;
      uStack_420 = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_448 = 0;
      uStack_444 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 0;
      uStack_468 = (undefined8 **)0x0;
      uStack_470 = (long *)0x0;
      FUN_10926db08(&uStack_470);
      uStack_368 = 3;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_330 = 0;
      func_0x000107c31940(&uStack_660,&UNK_10f57a9f2);
      func_0x000107c31940(&puStack_138,&UNK_10f57ab3e);
      FUN_109671348(&uStack_470,3,&uStack_660,&puStack_138,0x1ab);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
      FUN_1092b4db8();
      if (lStack_128 < 0) {
        __ZdlPv(puStack_138);
      }
      if (lStack_650 < 0) {
        __ZdlPv(uStack_660);
      }
      FUN_109671170(&uStack_470);
    }
    if (*(long *)(param_4 + 4) != 0) {
      uVar26 = (ulong)param_4[1];
      if ((int)param_4[1] < 3) {
        lVar30 = (long)(int)param_4[3] * (long)(int)param_4[2];
      }
      else {
        lVar30 = 1;
        piVar24 = *(int **)(param_4 + 0x10);
        do {
          lVar30 = lVar30 * *piVar24;
          uVar26 = uVar26 - 1;
          piVar24 = piVar24 + 1;
        } while (uVar26 != 0);
      }
      if (lVar30 != 0) {
        iVar53 = **(int **)(param_4 + 0x10);
        uVar50 = (*(int **)(param_4 + 0x10))[1];
        if (uVar50 == *(uint *)(param_1 + 0x18) && iVar53 == *(int *)((long)param_1 + 0xc4)) {
          if (&uStack_7d0 != param_4) {
            if (*(long *)(param_4 + 0xe) != 0) {
              piVar24 = (int *)(*(long *)(param_4 + 0xe) + 0x14);
              do {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar12) {
                  *piVar24 = *piVar24 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            if (lStack_798 != 0) {
              piVar24 = (int *)(lStack_798 + 0x14);
              do {
                iVar53 = *piVar24;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar12) {
                  *piVar24 = iVar53 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar53 + -1 == 0) {
                func_0x000109a848d4(&uStack_7d0);
              }
            }
            lStack_798 = 0;
            uStack_7b8 = 0;
            uStack_7b4 = 0;
            uStack_7c0 = 0;
            uStack_7bc = 0;
            uStack_7a8 = 0;
            uStack_7a4 = 0;
            uStack_7b0 = 0;
            uStack_7ac = 0;
            if ((int)uStack_7cc < 1) {
              uStack_7d0 = *param_4;
LAB_10965e7dc:
              uVar50 = param_4[1];
              if (2 < (int)uVar50) goto LAB_10965e810;
              iStack_7c8 = (int)*(undefined8 *)(param_4 + 2);
              iStack_7c4 = (int)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
              plVar27 = *(long **)(param_4 + 0x12);
              *plStack_788 = *plVar27;
              plStack_788[1] = plVar27[1];
              uStack_7cc = uVar50;
            }
            else {
              lVar30 = 0;
              do {
                piStack_790[lVar30] = 0;
                lVar30 = lVar30 + 1;
              } while (lVar30 < (int)uStack_7cc);
              uStack_7d0 = *param_4;
              if ((int)uStack_7cc < 3) goto LAB_10965e7dc;
LAB_10965e810:
              func_0x000109a84868(&uStack_7d0,param_4);
            }
            uStack_7b8 = (undefined4)*(undefined8 *)(param_4 + 6);
            uStack_7b4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20);
            uStack_7c0 = (undefined4)*(undefined8 *)(param_4 + 4);
            uStack_7bc = (undefined4)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
            uStack_7a8 = (undefined4)*(undefined8 *)(param_4 + 10);
            uStack_7a4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
            uStack_7b0 = (undefined4)*(undefined8 *)(param_4 + 8);
            uStack_7ac = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
            lStack_798 = *(long *)(param_4 + 0xe);
            uStack_7a0 = (undefined4)*(undefined8 *)(param_4 + 0xc);
            uStack_79c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
          }
        }
        else {
          uStack_660._0_4_ = uVar50;
          uStack_660._4_4_ = iVar53;
          FUN_1095d359c(&uStack_470,param_1,&uStack_660,*param_4 & 0xfff);
          lStack_650 = 0;
          uStack_660 = CONCAT44(uStack_660._4_4_,0x1010000);
          puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,0x2010000);
          lStack_128 = 0;
          uVar55 = param_1[0x13];
          iVar53 = CONCAT13(~(byte)((ulong)uVar55 >> 0x18),
                            CONCAT12(~(byte)((ulong)uVar55 >> 0x10),
                                     CONCAT11(~(byte)((ulong)uVar55 >> 8),~(byte)uVar55)));
          uStack_850 = (undefined8 **)
                       CONCAT44((int)((ulong)param_1[0x14] >> 0x20) * 2 -
                                (int)(CONCAT17(~(byte)((ulong)uVar55 >> 0x38),
                                               CONCAT16(~(byte)((ulong)uVar55 >> 0x30),
                                                        CONCAT15(~(byte)((ulong)uVar55 >> 0x28),
                                                                 CONCAT14(~(byte)((ulong)uVar55 >>
                                                                                 0x20),iVar53)))) >>
                                     0x20),(int)param_1[0x14] * 2 - iVar53);
          uStack_8d0 = 0xffffffffffffffff;
          ppuStack_658 = (undefined8 **)param_4;
          puStack_130 = (uint *)&uStack_470;
          FUN_109b437c0(&uStack_660,&puStack_138,0xffffffff,&uStack_850,&uStack_8d0,1,4);
          if ((*param_4 & 7) == 2) {
            if ((*param_4 & 0xff8) != 0) {
              uVar55 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar55,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_109660214;
            }
            puStack_138 = (undefined8 *)NEON_rev64(**(undefined8 **)(param_4 + 0x10),4);
            FUN_1095d359c(&uStack_660,param_1,&puStack_138,0);
            if (lRam0000000113733bb0 != -1) {
              puStack_138 = &uStack_8d0;
              uStack_850 = &puStack_138;
              __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113733bb0,&uStack_850,FUN_109660d84);
            }
            if (0 < (int)uStack_468) {
              lVar30 = 0;
              do {
                if (0 < uStack_468._4_4_) {
                  lVar33 = 0;
                  lVar36 = *plStack_618;
                  lVar38 = *(long *)CONCAT44(uStack_424,uStack_428);
                  do {
                    *(undefined1 *)(lStack_650 + lVar36 * lVar30 + lVar33) =
                         *(undefined1 *)
                          ((ulong)(*(ushort *)(uStack_460 + lVar38 * lVar30 + lVar33 * 2) >> 6) +
                          0x113733bc0);
                    lVar33 = lVar33 + 1;
                  } while ((int)lVar33 < uStack_468._4_4_);
                }
                lVar30 = lVar30 + 1;
              } while (lVar30 < (int)uStack_468);
            }
            lStack_128 = 0;
            puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,0x1010000);
            puStack_130 = (uint *)&uStack_660;
            uStack_850 = (undefined8 **)CONCAT44(uStack_850._4_4_,0x2010000);
            uStack_848 = &uStack_7d0;
            lStack_840 = 0;
            uStack_8d0 = param_1[0x18];
            FUN_109b0f718(0,0,&puStack_138,&uStack_850,&uStack_8d0,3);
            FUN_1095d3858(&uStack_660);
          }
          else {
            lStack_650 = 0;
            uStack_660 = CONCAT44(uStack_660._4_4_,0x1010000);
            ppuStack_658 = (undefined8 **)&uStack_470;
            puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,0x2010000);
            puStack_130 = &uStack_7d0;
            lStack_128 = 0;
            uStack_850 = (undefined8 **)param_1[0x18];
            FUN_109b0f718(0,0,&uStack_660,&puStack_138,&uStack_850,3);
          }
          FUN_1095d3858(&uStack_470);
        }
      }
    }
    uStack_470 = (long *)param_1[0x18];
    FUN_1095d359c(&uStack_850,param_1,&uStack_470,5);
    uStack_470 = (long *)param_1[0x18];
    FUN_1095d359c(&uStack_8d0,param_1,&uStack_470,5);
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar49 = *(uint *)((long)param_1 + 0x84);
    uVar43 = *(uint *)(param_1 + 0x11);
    uVar50 = -uVar49;
    if (-1 < (int)uVar49) {
      uVar50 = uVar49;
    }
    uVar49 = -uVar43;
    if (-1 < (int)uVar43) {
      uVar49 = uVar43;
    }
    if (uVar50 <= uVar49) {
      uVar50 = uVar49;
    }
    iVar4 = *(int *)((long)param_1 + 0xa4);
    iVar53 = uVar50 + *(int *)(param_1 + 0x14);
    uVar50 = iVar53 + 1U & 3;
    uVar49 = -(iVar53 + 1U);
    if (-1 < (int)uVar49) {
      uVar50 = -(uVar49 & 3);
    }
    iVar9 = (iVar53 - uVar50) + 5;
    if (uVar50 == 0) {
      iVar9 = iVar53 + 1;
    }
    iVar53 = piStack_6a8[1] + iVar9 * 2;
    iVar10 = *piStack_6a8 + iVar4 * 2;
    uStack_470 = (long *)CONCAT44(iVar10,iVar53);
    FUN_1095d359c(&uStack_660,param_1,&uStack_470,0);
    uStack_470 = (long *)CONCAT44(iVar10,iVar53);
    FUN_1095d359c(&puStack_138,param_1,&uStack_470,0);
    lStack_190 = 0;
    uStack_1a0._0_4_ = 0x1010000;
    puStack_198 = (undefined8 *)auStack_6e8;
    auStack_4e0[0] = 0x2010000;
    uStack_4d8 = (undefined8 **)&uStack_660;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_458 = 0;
    uStack_454 = 0;
    uStack_460 = 0;
    uStack_468 = (undefined8 **)0x0;
    uStack_470 = (undefined8 *)0x0;
    FUN_109a4a0a4(&uStack_1a0,auStack_4e0,iVar4,iVar4,iVar9,iVar9,4,&uStack_470);
    lStack_190 = 0;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x1010000);
    puStack_198 = (undefined8 *)auStack_768;
    auStack_4e0[0] = 0x2010000;
    uStack_4d8 = &puStack_138;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_458 = 0;
    uStack_454 = 0;
    uStack_460 = 0;
    uStack_468 = (undefined8 **)0x0;
    uStack_470 = (long *)0x0;
    FUN_109a4a0a4(&uStack_1a0,auStack_4e0,iVar4,iVar4,iVar9,iVar9,4,&uStack_470);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar23 = *(int *)(param_1 + 0x13);
    iVar53 = iVar23 + iVar3 * 2;
    iVar10 = *(int *)((long)param_1 + 0x9c) + *(int *)((long)param_1 + 0xa4) * 2;
    uStack_4f8 = (undefined8 **)CONCAT44(iVar10,iVar53);
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_4ac = 0;
    uStack_4b8 = 0;
    uStack_4b4 = 0;
    uStack_4c0 = 0;
    uStack_4bc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4d8._0_4_ = 0;
    uStack_4d8._4_4_ = 0;
    auStack_4e0[0] = 0;
    auStack_4e0[1] = 0;
    iVar29 = *(int *)((long)param_1 + 0xc4);
    if (0 < iVar29) {
      lVar30 = 0;
      iVar13 = *(int *)(param_1 + 0x11) - *(int *)((long)param_1 + 0x84);
      fVar69 = 1.0 / (float)(iVar10 * iVar53);
      iVar31 = *(int *)(param_1 + 0x18);
      fVar70 = 0.0001;
      do {
        puVar44 = (undefined4 *)(lStack_840 + *plStack_808 * lVar30);
        iVar8 = (iVar4 - *(int *)((long)param_1 + 0xa4)) +
                *(int *)((long)param_1 + 0x9c) * (int)lVar30;
        lVar33 = *plStack_888;
        pfVar46 = (float *)(puVar44 + 1);
        *puVar44 = 0x38d1b717;
        puVar44 = (undefined4 *)(lStack_8c0 + lVar33 * lVar30);
        pfVar42 = (float *)(puVar44 + 1);
        *puVar44 = 0;
        iVar1 = iVar23 + (iVar9 - iVar3);
        uStack_500 = CONCAT44(iVar8,iVar1);
        if (2 < iVar31) {
          iVar29 = 1;
          pfVar41 = pfVar42;
          pfVar45 = pfVar46;
          do {
            uStack_378 = 0;
            uStack_374 = 0;
            uStack_380 = 0;
            uStack_37c = 0;
            uStack_388 = 0;
            uStack_384 = 0;
            uStack_390 = 0;
            uStack_38c = 0;
            uStack_398 = 0;
            uStack_394 = 0;
            uStack_3a0 = 0;
            uStack_3a8 = 0;
            puStack_3b0 = (undefined8 *)0x0;
            puStack_3b8 = (undefined4 *)0x0;
            uStack_3c0 = 0;
            uStack_3c8 = 0;
            uStack_3c4 = 0;
            uStack_3d0 = 0;
            uStack_3cc = 0;
            uStack_3d8 = 0;
            uStack_3d4 = 0;
            uStack_3e0 = 0;
            uStack_3dc = 0;
            uStack_3e8 = 0;
            uStack_3e4 = 0;
            uStack_3f0 = 0;
            uStack_3ec = 0;
            uStack_3f8 = 0;
            uStack_3f4 = 0;
            uStack_400 = 0;
            uStack_408 = 0;
            puStack_410 = (undefined8 *)0x0;
            puStack_418 = (undefined4 *)0x0;
            uStack_420 = 0;
            uStack_428 = 0;
            uStack_424 = 0;
            uStack_430 = 0;
            uStack_42c = 0;
            uStack_438 = 0;
            uStack_434 = 0;
            uStack_440 = 0;
            uStack_43c = 0;
            uStack_448 = 0;
            uStack_444 = 0;
            uStack_450 = 0;
            uStack_44c = 0;
            uStack_458 = 0;
            uStack_454 = 0;
            uStack_460 = 0;
            uStack_468 = (undefined8 **)0x0;
            uStack_470 = (long *)0x0;
            if (0 < iVar10) {
              lVar36 = *plStack_618;
              lVar6 = plStack_618[1];
              lVar38 = *plStack_f0;
              lVar35 = lStack_128 + plStack_f0[1] * (long)iVar1;
              lVar33 = (long)iVar8;
              do {
                if (0 < iVar53) {
                  lVar39 = lVar35 + lVar33 * lVar38;
                  pauVar40 = (undefined1 (*) [16])(lStack_650 + lVar6 * iVar1 + lVar33 * lVar36);
                  iVar31 = *(int *)((long)param_1 + 0x84);
                  iVar5 = *(int *)(param_1 + 0x11);
                  iVar23 = iVar1;
                  do {
                    if (iVar31 <= iVar5) {
                      auVar52 = *pauVar40;
                      piVar24 = (int *)&uStack_470;
                      uVar26 = (ulong)((iVar5 - iVar31) + 1);
                      lVar25 = (long)iVar31;
                      do {
                        auVar56 = NEON_uabd(auVar52,*(undefined1 (*) [16])(lVar39 + lVar25),1);
                        auVar60[1] = 0;
                        auVar60[0] = auVar56[0];
                        auVar60[2] = auVar56[1];
                        auVar60[3] = 0;
                        auVar60[4] = auVar56[2];
                        auVar60[5] = 0;
                        auVar60[6] = auVar56[3];
                        auVar60[7] = 0;
                        auVar60[8] = auVar56[4];
                        auVar60[9] = 0;
                        auVar60[10] = auVar56[5];
                        auVar60[0xb] = 0;
                        auVar60[0xc] = auVar56[6];
                        auVar60[0xd] = 0;
                        auVar60[0xe] = auVar56[7];
                        auVar60[0xf] = 0;
                        auVar63 = NEON_ext(auVar56,auVar56,8,1);
                        uVar65 = CONCAT11(0,auVar56[8]);
                        auVar60 = NEON_ext(auVar60,auVar60,8,1);
                        auVar61[2] = auVar56[9];
                        auVar61._0_2_ = uVar65;
                        auVar61[3] = 0;
                        auVar61[4] = auVar56[10];
                        auVar61[5] = 0;
                        auVar61[6] = auVar56[0xb];
                        auVar61[7] = 0;
                        auVar61[8] = auVar56[0xc];
                        auVar61[9] = 0;
                        auVar61[10] = auVar56[0xd];
                        auVar61[0xb] = 0;
                        auVar61[0xc] = auVar56[0xe];
                        auVar61[0xd] = 0;
                        auVar61[0xe] = auVar56[0xf];
                        auVar61[0xf] = 0;
                        auVar58[2] = auVar56[9];
                        auVar58._0_2_ = uVar65;
                        auVar58[3] = 0;
                        auVar58[4] = auVar56[10];
                        auVar58[5] = 0;
                        auVar58[6] = auVar56[0xb];
                        auVar58[7] = 0;
                        auVar58[8] = auVar56[0xc];
                        auVar58[9] = 0;
                        auVar58[10] = auVar56[0xd];
                        auVar58[0xb] = 0;
                        auVar58[0xc] = auVar56[0xe];
                        auVar58[0xd] = 0;
                        auVar58[0xe] = auVar56[0xf];
                        auVar58[0xf] = 0;
                        auVar61 = NEON_ext(auVar61,auVar58,8,1);
                        piVar24[2] = piVar24[2] + (uint)(ushort)(auVar60._4_2_ + (ushort)auVar56[2])
                                     + (uint)(ushort)(auVar61._4_2_ + (ushort)auVar63[2]);
                        piVar24[3] = piVar24[3] + (uint)(ushort)(auVar60._6_2_ + (ushort)auVar56[3])
                                     + (uint)(ushort)(auVar61._6_2_ + (ushort)auVar63[3]);
                        *piVar24 = *piVar24 + (uint)(ushort)(auVar60._0_2_ + (ushort)auVar56[0]) +
                                   (uint)(ushort)(auVar61._0_2_ + (ushort)auVar63[0]);
                        piVar24[1] = piVar24[1] + (uint)(ushort)(auVar60._2_2_ + (ushort)auVar56[1])
                                     + (uint)(ushort)(auVar61._2_2_ + (ushort)auVar63[1]);
                        lVar25 = lVar25 + 1;
                        uVar26 = uVar26 - 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar26 != 0);
                    }
                    iVar23 = iVar23 + 0x10;
                    pauVar40 = pauVar40 + 1;
                    lVar39 = lVar39 + 0x10;
                  } while (iVar23 < iVar1 + iVar53);
                }
                lVar33 = lVar33 + 1;
              } while (lVar33 < iVar8 + iVar10);
            }
            if (-1 < iVar13) {
              puVar28 = auStack_4e0;
              piVar24 = (int *)&uStack_470;
              uVar26 = (ulong)(iVar13 + 1);
              do {
                *puVar28 = *piVar24 + piVar24[1] + piVar24[2] + piVar24[3];
                puVar28 = puVar28 + 1;
                uVar26 = uVar26 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar26 != 0);
            }
            uVar50 = *(uint *)((long)param_1 + 0x84);
            if (*(int *)(param_1 + 0x11) < (int)uVar50) {
              uVar48 = 0;
              uVar43 = 0;
              fVar59 = 4.2949673e+09;
              fVar71 = fVar59;
            }
            else {
              uVar43 = 0;
              uVar26 = (ulong)((*(int *)(param_1 + 0x11) - uVar50) + 1);
              uVar32 = 0xffffffff;
              uVar37 = 0xffffffff;
              puVar28 = auStack_4e0;
              uVar49 = uVar50;
              uVar47 = 0;
              do {
                uVar7 = *puVar28;
                uVar2 = uVar49;
                uVar17 = uVar7;
                if (uVar32 <= uVar7) {
                  uVar2 = uVar43;
                  uVar17 = uVar32;
                }
                uVar48 = uVar49;
                uVar43 = uVar47;
                uVar32 = uVar37;
                if (uVar37 <= uVar7) {
                  uVar48 = uVar47;
                  uVar43 = uVar2;
                  uVar7 = uVar37;
                  uVar32 = uVar17;
                }
                uVar37 = uVar7;
                uVar49 = uVar49 + 1;
                uVar26 = uVar26 - 1;
                puVar28 = puVar28 + 1;
                uVar47 = uVar48;
              } while (uVar26 != 0);
              fVar59 = (float)uVar37;
              fVar71 = (float)uVar32;
            }
            if ((int)(uVar48 + ~uVar50) < 0) {
              uStack_1b0 = (undefined8 *)CONCAT44(iVar10,iVar53);
              uStack_1b8 = CONCAT44(iVar8,iVar1 + uVar50 + -1);
              FUN_109a852c8(&uStack_470,&uStack_660,&uStack_500);
              FUN_109a852c8(&uStack_1a0,&puStack_138,&uStack_1b8);
              if ((int)uStack_468 < 1) {
                uStack_8d8 = 0;
                uStack_8e0 = 0;
              }
              else {
                uVar26 = 0;
                uStack_8d8 = 0;
                uStack_8e0 = 0;
                uVar34 = uStack_460;
                lVar33 = lStack_190;
                do {
                  iVar23 = (int)uStack_8e0;
                  iVar31 = (int)((ulong)uStack_8e0 >> 0x20);
                  iVar5 = (int)uStack_8d8;
                  iVar15 = (int)((ulong)uStack_8d8 >> 0x20);
                  if (0 < uStack_468._4_4_) {
                    lVar36 = 0;
                    do {
                      auVar52 = NEON_uabd(*(undefined1 (*) [16])(uVar34 + lVar36),
                                          *(undefined1 (*) [16])(lVar33 + lVar36),1);
                      auVar56[1] = 0;
                      auVar56[0] = auVar52[0];
                      auVar56[2] = auVar52[1];
                      auVar56[3] = 0;
                      auVar56[4] = auVar52[2];
                      auVar56[5] = 0;
                      auVar56[6] = auVar52[3];
                      auVar56[7] = 0;
                      auVar56[8] = auVar52[4];
                      auVar56[9] = 0;
                      auVar56[10] = auVar52[5];
                      auVar56[0xb] = 0;
                      auVar56[0xc] = auVar52[6];
                      auVar56[0xd] = 0;
                      auVar56[0xe] = auVar52[7];
                      auVar56[0xf] = 0;
                      auVar60 = NEON_ext(auVar52,auVar52,8,1);
                      auVar63[1] = 0;
                      auVar63[0] = auVar52[8];
                      auVar63[2] = auVar52[9];
                      auVar63[3] = 0;
                      auVar63[4] = auVar52[10];
                      auVar63[5] = 0;
                      auVar63[6] = auVar52[0xb];
                      auVar63[7] = 0;
                      auVar63[8] = auVar52[0xc];
                      auVar63[9] = 0;
                      auVar63[10] = auVar52[0xd];
                      auVar63[0xb] = 0;
                      auVar63[0xc] = auVar52[0xe];
                      auVar63[0xd] = 0;
                      auVar63[0xe] = auVar52[0xf];
                      auVar63[0xf] = 0;
                      auVar61 = NEON_ext(auVar56,auVar56,8,1);
                      auVar58 = NEON_ext(auVar63,auVar63,8,1);
                      iVar23 = iVar23 + (uint)(ushort)(auVar61._0_2_ + (ushort)auVar52[0]) +
                               (uint)(ushort)(auVar58._0_2_ + (ushort)auVar60[0]);
                      iVar31 = iVar31 + (uint)(ushort)(auVar61._2_2_ + (ushort)auVar52[1]) +
                               (uint)(ushort)(auVar58._2_2_ + (ushort)auVar60[1]);
                      iVar5 = iVar5 + (uint)(ushort)(auVar61._4_2_ + (ushort)auVar52[2]) +
                              (uint)(ushort)(auVar58._4_2_ + (ushort)auVar60[2]);
                      iVar15 = iVar15 + (uint)(ushort)(auVar61._6_2_ + (ushort)auVar52[3]) +
                               (uint)(ushort)(auVar58._6_2_ + (ushort)auVar60[3]);
                      lVar36 = lVar36 + 0x10;
                    } while ((int)lVar36 < uStack_468._4_4_);
                  }
                  uStack_8d8 = CONCAT26((short)((uint)iVar15 >> 0x10),CONCAT24((short)iVar15,iVar5))
                  ;
                  uStack_8e0 = CONCAT26((short)((uint)iVar31 >> 0x10),CONCAT24((short)iVar31,iVar23)
                                       );
                  uVar26 = uVar26 + 1;
                  lVar33 = lVar33 + *plStack_158;
                  uVar34 = uVar34 + *(long *)CONCAT44(uStack_424,uStack_428);
                } while (uVar26 != ((ulong)uStack_468 & 0xffffffff));
              }
              if (lStack_168 != 0) {
                piVar24 = (int *)(lStack_168 + 0x14);
                do {
                  iVar23 = *piVar24;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar12) {
                    *piVar24 = iVar23 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar23 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1a0);
                }
              }
              lStack_168 = 0;
              uStack_188 = 0;
              lStack_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              if (0 < uStack_1a0._4_4_) {
                lVar33 = 0;
                do {
                  *(undefined4 *)(uStack_160 + lVar33 * 4) = 0;
                  lVar33 = lVar33 + 1;
                } while (lVar33 < uStack_1a0._4_4_);
              }
              if (plStack_158 != &lStack_150 && plStack_158 != (long *)0x0) {
                _free(plStack_158[-1]);
              }
              if (CONCAT44(uStack_434,uStack_438) != 0) {
                piVar24 = (int *)(CONCAT44(uStack_434,uStack_438) + 0x14);
                do {
                  iVar23 = *piVar24;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar12) {
                    *piVar24 = iVar23 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar23 + -1 == 0) {
                  func_0x000109a848d4(&uStack_470);
                }
              }
              uStack_438 = 0;
              uStack_434 = 0;
              uStack_458 = 0;
              uStack_454 = 0;
              uStack_460 = 0;
              uStack_448 = 0;
              uStack_444 = 0;
              uStack_450 = 0;
              uStack_44c = 0;
              if (0 < uStack_470._4_4_) {
                lVar33 = 0;
                do {
                  *(undefined4 *)(CONCAT44(uStack_42c,uStack_430) + lVar33 * 4) = 0;
                  lVar33 = lVar33 + 1;
                } while (lVar33 < uStack_470._4_4_);
              }
              puVar21 = (undefined8 *)CONCAT44(uStack_424,uStack_428);
              if (puVar21 != &uStack_420 && puVar21 != (undefined8 *)0x0) {
                _free(puVar21[-1]);
              }
              uVar49 = (int)uStack_8e0 + uStack_8e0._4_4_ + uStack_8d8._4_4_ + (int)uStack_8d8;
              uVar50 = *(uint *)((long)param_1 + 0x84);
            }
            else {
              uVar49 = auStack_4e0[uVar48 + ~uVar50];
            }
            iVar23 = (uVar48 - uVar50) + 1;
            if (iVar13 < iVar23) {
              uStack_1b0 = (undefined8 *)CONCAT44(iVar10,iVar53);
              uStack_1b8 = CONCAT44(iVar8,iVar1 + *(int *)(param_1 + 0x11) + 1);
              FUN_109a852c8(&uStack_470,&uStack_660,&uStack_500);
              FUN_109a852c8(&uStack_1a0,&puStack_138,&uStack_1b8);
              if ((int)uStack_468 < 1) {
                uStack_8d8 = 0;
                uStack_8e0 = 0;
              }
              else {
                uVar26 = 0;
                uStack_8d8 = 0;
                uStack_8e0 = 0;
                uVar34 = uStack_460;
                lVar33 = lStack_190;
                do {
                  iVar23 = (int)uStack_8e0;
                  iVar31 = (int)((ulong)uStack_8e0 >> 0x20);
                  iVar5 = (int)uStack_8d8;
                  iVar15 = (int)((ulong)uStack_8d8 >> 0x20);
                  if (0 < uStack_468._4_4_) {
                    lVar36 = 0;
                    do {
                      auVar52 = NEON_uabd(*(undefined1 (*) [16])(uVar34 + lVar36),
                                          *(undefined1 (*) [16])(lVar33 + lVar36),1);
                      auVar57[1] = 0;
                      auVar57[0] = auVar52[0];
                      auVar57[2] = auVar52[1];
                      auVar57[3] = 0;
                      auVar57[4] = auVar52[2];
                      auVar57[5] = 0;
                      auVar57[6] = auVar52[3];
                      auVar57[7] = 0;
                      auVar57[8] = auVar52[4];
                      auVar57[9] = 0;
                      auVar57[10] = auVar52[5];
                      auVar57[0xb] = 0;
                      auVar57[0xc] = auVar52[6];
                      auVar57[0xd] = 0;
                      auVar57[0xe] = auVar52[7];
                      auVar57[0xf] = 0;
                      auVar56 = NEON_ext(auVar52,auVar52,8,1);
                      auVar64[1] = 0;
                      auVar64[0] = auVar52[8];
                      auVar64[2] = auVar52[9];
                      auVar64[3] = 0;
                      auVar64[4] = auVar52[10];
                      auVar64[5] = 0;
                      auVar64[6] = auVar52[0xb];
                      auVar64[7] = 0;
                      auVar64[8] = auVar52[0xc];
                      auVar64[9] = 0;
                      auVar64[10] = auVar52[0xd];
                      auVar64[0xb] = 0;
                      auVar64[0xc] = auVar52[0xe];
                      auVar64[0xd] = 0;
                      auVar64[0xe] = auVar52[0xf];
                      auVar64[0xf] = 0;
                      auVar61 = NEON_ext(auVar57,auVar57,8,1);
                      auVar58 = NEON_ext(auVar64,auVar64,8,1);
                      iVar23 = iVar23 + (uint)(ushort)(auVar61._0_2_ + (ushort)auVar52[0]) +
                               (uint)(ushort)(auVar58._0_2_ + (ushort)auVar56[0]);
                      iVar31 = iVar31 + (uint)(ushort)(auVar61._2_2_ + (ushort)auVar52[1]) +
                               (uint)(ushort)(auVar58._2_2_ + (ushort)auVar56[1]);
                      iVar5 = iVar5 + (uint)(ushort)(auVar61._4_2_ + (ushort)auVar52[2]) +
                              (uint)(ushort)(auVar58._4_2_ + (ushort)auVar56[2]);
                      iVar15 = iVar15 + (uint)(ushort)(auVar61._6_2_ + (ushort)auVar52[3]) +
                               (uint)(ushort)(auVar58._6_2_ + (ushort)auVar56[3]);
                      lVar36 = lVar36 + 0x10;
                    } while ((int)lVar36 < uStack_468._4_4_);
                  }
                  uStack_8d8 = CONCAT26((short)((uint)iVar15 >> 0x10),CONCAT24((short)iVar15,iVar5))
                  ;
                  uStack_8e0 = CONCAT26((short)((uint)iVar31 >> 0x10),CONCAT24((short)iVar31,iVar23)
                                       );
                  uVar26 = uVar26 + 1;
                  lVar33 = lVar33 + *plStack_158;
                  uVar34 = uVar34 + *(long *)CONCAT44(uStack_424,uStack_428);
                } while (uVar26 != ((ulong)uStack_468 & 0xffffffff));
              }
              if (lStack_168 != 0) {
                piVar24 = (int *)(lStack_168 + 0x14);
                do {
                  iVar23 = *piVar24;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar12) {
                    *piVar24 = iVar23 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar23 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1a0);
                }
              }
              lStack_168 = 0;
              uStack_188 = 0;
              lStack_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              if (0 < uStack_1a0._4_4_) {
                lVar33 = 0;
                do {
                  *(undefined4 *)(uStack_160 + lVar33 * 4) = 0;
                  lVar33 = lVar33 + 1;
                } while (lVar33 < uStack_1a0._4_4_);
              }
              if (plStack_158 != &lStack_150 && plStack_158 != (long *)0x0) {
                _free(plStack_158[-1]);
              }
              if (CONCAT44(uStack_434,uStack_438) != 0) {
                piVar24 = (int *)(CONCAT44(uStack_434,uStack_438) + 0x14);
                do {
                  iVar23 = *piVar24;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar12) {
                    *piVar24 = iVar23 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar23 + -1 == 0) {
                  func_0x000109a848d4(&uStack_470);
                }
              }
              uStack_438 = 0;
              uStack_434 = 0;
              uStack_458 = 0;
              uStack_454 = 0;
              uStack_460 = 0;
              uStack_448 = 0;
              uStack_444 = 0;
              uStack_450 = 0;
              uStack_44c = 0;
              if (0 < uStack_470._4_4_) {
                lVar33 = 0;
                do {
                  *(undefined4 *)(CONCAT44(uStack_42c,uStack_430) + lVar33 * 4) = 0;
                  lVar33 = lVar33 + 1;
                } while (lVar33 < uStack_470._4_4_);
              }
              puVar21 = (undefined8 *)CONCAT44(uStack_424,uStack_428);
              if (puVar21 != &uStack_420 && puVar21 != (undefined8 *)0x0) {
                _free(puVar21[-1]);
              }
              uVar50 = (int)uStack_8e0 + uStack_8e0._4_4_ + uStack_8d8._4_4_ + (int)uStack_8d8;
            }
            else {
              uVar50 = auStack_4e0[iVar23];
            }
            fVar59 = fVar69 * fVar59;
            fVar51 = fVar69 * (float)uVar49 - fVar59;
            fVar62 = 0.0;
            fVar16 = fVar70;
            if ((0.0 <= fVar51) && (fVar54 = fVar69 * (float)uVar50 - fVar59, 0.0 <= fVar54)) {
              if ((fVar51 != 0.0) || (fVar54 != 0.0)) {
                if (fVar54 <= fVar51) {
                  fVar62 = fVar54 / fVar51;
                  fVar62 = (fVar62 + fVar62 * fVar62) * -0.25 + 0.5;
                }
                else {
                  fVar62 = fVar51 / fVar54;
                  fVar62 = (fVar62 + fVar62 * fVar62) * 0.25 + -0.5;
                }
              }
              if (*(char *)(param_1 + 0xf) == '\x01') {
                fVar14 = (fVar62 + 1.0) * 0.5 * 40.0;
                fVar68 = 40.0;
                if (fVar14 <= 40.0) {
                  fVar68 = fVar14;
                }
                uVar66 = 0;
                uVar67 = 0;
                if (0.0 <= fVar14) {
                  uVar66 = SUB42(fVar68,0);
                  uVar67 = (undefined2)((uint)fVar68 >> 0x10);
                }
                fVar62 = fVar62 + *(float *)(&UNK_10dfd8dc0 +
                                            (long)(int)(float)CONCAT22(uVar67,uVar66) * 4) +
                                  (*(float *)(&UNK_10dfd8dc0 +
                                             (long)(int)(float)CONCAT22(uVar67,uVar66) * 4) -
                                  *(float *)(&UNK_10dfd8dc0 +
                                            (long)(int)(float)CONCAT22(uVar67,uVar66) * 4)) *
                                  ((float)CONCAT22(uVar67,uVar66) -
                                  (float)(int)(float)CONCAT22(uVar67,uVar66));
              }
              fVar14 = 1.0;
              if (0.0 < fVar59) {
                fVar59 = ((fVar69 * fVar71) / fVar59 + -1.0) / 1.2;
                fVar71 = 1.0;
                if (fVar59 <= 1.0) {
                  fVar71 = fVar59;
                }
                fVar14 = 0.01;
                if (0.01 <= fVar59) {
                  fVar14 = fVar71;
                }
              }
              fVar59 = (fVar51 + fVar54) * 0.5;
              fVar71 = (fVar51 + fVar54) * fVar62;
              uVar43 = uVar43 - uVar48;
              uVar50 = -uVar43;
              if (-1 < (int)uVar43) {
                uVar50 = uVar43;
              }
              fVar51 = 1.0;
              if (1 < uVar50) {
                fVar51 = fVar14;
              }
              fVar54 = fVar59 * fVar51;
              if (*(float *)(param_1 + 0x15) <= fVar54) {
                fVar16 = fVar54;
              }
              fVar62 = 0.0;
              if (*(float *)(param_1 + 0x15) <= fVar54) {
                fVar62 = (-fVar71 + (float)(int)uVar48 * fVar59 * -2.0) * fVar51;
              }
            }
            pfVar46 = pfVar45 + 1;
            *pfVar45 = fVar16;
            pfVar42 = pfVar41 + 1;
            *pfVar41 = fVar62;
            iVar23 = *(int *)(param_1 + 0x13);
            iVar1 = iVar23 + iVar1;
            uStack_500 = CONCAT44(uStack_500._4_4_,iVar1);
            iVar29 = iVar29 + 1;
            iVar31 = *(int *)(param_1 + 0x18);
            pfVar41 = pfVar42;
            pfVar45 = pfVar46;
          } while (iVar29 < iVar31 + -1);
          iVar29 = *(int *)((long)param_1 + 0xc4);
        }
        *pfVar46 = 0.0001;
        *pfVar42 = 0.0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < iVar29);
    }
    FUN_1095d3858(&puStack_138);
    FUN_1095d3858(&uStack_660);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (2 < iRam00000001132dfb08) {
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_388 = 0;
      uStack_384 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      puStack_3b0 = (undefined8 *)0x0;
      puStack_3b8 = (undefined4 *)0x0;
      uStack_3c0 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3d0 = 0;
      uStack_3cc = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3e8 = 0;
      uStack_3e4 = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      puStack_410 = (undefined8 *)0x0;
      puStack_418 = (undefined4 *)0x0;
      uStack_420 = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_430 = 0;
      uStack_42c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_448 = 0;
      uStack_444 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 0;
      uStack_468 = (undefined8 **)0x0;
      uStack_470 = (long *)0x0;
      FUN_10926db08(&uStack_470);
      uStack_368 = 3;
      puStack_358 = (undefined4 *)0x0;
      uStack_360 = 0;
      uStack_348 = 0;
      puStack_350 = (undefined8 *)0x0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_340 = 0;
      uStack_330 = 0;
      func_0x000107c31940(&uStack_660,&UNK_10f57a9f2);
      func_0x000107c31940(&puStack_138,&DAT_10f47b30b);
      FUN_109671348(&uStack_470,3,&uStack_660,&puStack_138,0x27);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
      FUN_1092b4db8();
      if (lStack_128 < 0) {
        __ZdlPv(puStack_138);
      }
      if (lStack_650 < 0) {
        __ZdlPv(uStack_660);
      }
      FUN_109671170(&uStack_470);
    }
    FUN_1095d38fc(auStack_6e8);
    FUN_1095d38fc(auStack_768);
    FUN_109a7d4d8(&uStack_470,&uStack_8d0);
    lStack_128 = 0;
    puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,0xc1060000);
    auStack_b8[0] = 0x4000000000000000;
    auStack_4e0[0] = 0xc1020006;
    uStack_4d8 = (undefined8 **)auStack_b8;
    uStack_4d0 = 1;
    uStack_4cc = 1;
    puVar21 = &uStack_850;
    puStack_130 = (uint *)&uStack_470;
    FUN_109a8239c(&uStack_660,0x3ff0000000000000,puVar21,auStack_4e0);
    lStack_190 = 0;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0xc1060000);
    uStack_500 = CONCAT44(uStack_500._4_4_,0x2010000);
    uStack_4f0 = 0;
    uStack_1b8 = 0x3ff0000000000000;
    uStack_4f8 = (undefined8 **)param_5;
    puStack_198 = &uStack_660;
    FUN_109a91d90();
    FUN_109a293c4(&puStack_138,&uStack_1a0,&uStack_500,puVar21,0xffffffff,&PTR_FUN_1132e8cd0,1,
                  &uStack_1b8);
    FUN_10918eb6c(&uStack_660);
    FUN_10918eb6c();
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (lStack_840 == 0) {
LAB_109660130:
      uVar55 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      ___cxa_throw(uVar55,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_109660214;
    }
    uVar26 = (ulong)uStack_850._4_4_;
    if ((int)uStack_850._4_4_ < 3) {
      lVar30 = (long)uStack_848._4_4_ * (long)(int)uStack_848;
    }
    else {
      lVar30 = 1;
      piVar24 = piStack_810;
      do {
        lVar30 = lVar30 * *piVar24;
        uVar26 = uVar26 - 1;
        piVar24 = piVar24 + 1;
      } while (uVar26 != 0);
    }
    if (lVar30 == 0 || lStack_8c0 == 0) goto LAB_109660130;
    uVar26 = (ulong)uStack_8d0._4_4_;
    if ((int)uStack_8d0._4_4_ < 3) {
      lVar30 = (long)iStack_8c4 * (long)iStack_8c8;
    }
    else {
      lVar30 = 1;
      do {
        lVar30 = lVar30 * *piStack_890;
        uVar26 = uVar26 - 1;
        piStack_890 = piStack_890 + 1;
      } while (uVar26 != 0);
    }
    if (lVar30 == 0) goto LAB_109660130;
    uStack_1a0 = CONCAT44(uStack_7cc,uStack_7d0);
    puStack_198 = (undefined8 *)CONCAT44(iStack_7c4,iStack_7c8);
    lStack_190 = CONCAT44(uStack_7bc,uStack_7c0);
    uStack_188 = CONCAT44(uStack_7b4,uStack_7b8);
    uStack_160 = (ulong)&uStack_1a0 | 8;
    uStack_180 = CONCAT44(uStack_7ac,uStack_7b0);
    uStack_178 = CONCAT44(uStack_7a4,uStack_7a8);
    uStack_170 = CONCAT44(uStack_79c,uStack_7a0);
    lStack_168 = lStack_798;
    lStack_148 = 0;
    lStack_150 = 0;
    if (lStack_798 != 0) {
      piVar24 = (int *)(lStack_798 + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar12) {
          *piVar24 = *piVar24 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    plStack_158 = &lStack_150;
    if ((int)uStack_7cc < 3) {
      lStack_150 = *plStack_788;
      lStack_148 = plStack_788[1];
    }
    else {
      uStack_1a0 = (ulong)uStack_7d0;
      func_0x000109a84868(&uStack_1a0,&uStack_7d0);
    }
    if (CONCAT44(uStack_7bc,uStack_7c0) != 0) {
      uVar26 = (ulong)uStack_7cc;
      if ((int)uStack_7cc < 3) {
        lVar30 = (long)iStack_7c4 * (long)iStack_7c8;
      }
      else {
        lVar30 = 1;
        piVar24 = piStack_790;
        do {
          lVar30 = lVar30 * *piVar24;
          uVar26 = uVar26 - 1;
          piVar24 = piVar24 + 1;
        } while (uVar26 != 0);
      }
      if (lVar30 != 0) goto LAB_10965f664;
    }
    if (*(char *)((long)param_1 + 0x79) == '\x01') {
      uStack_660 = NEON_rev64(*(undefined8 *)piStack_810,4);
      FUN_109a829e8(&uStack_470,&uStack_660,0x10);
      (**(code **)(*uStack_470 + 0x18))(uStack_470,&uStack_470,&uStack_1a0,0xffffffff);
      FUN_10918eb6c(&uStack_470);
LAB_10965f664:
      FUN_1095e3184((double)*(float *)((long)param_1 + 0xac),(double)*(float *)(param_1 + 0x16),
                    0x3fd0000000000000,&lStack_478,3);
      uStack_470 = (long *)param_1[0x18];
      ppuVar22 = &puStack_138;
      FUN_1095d359c(ppuVar22,param_1,&uStack_470,5);
      lStack_650 = 0;
      uStack_660._0_4_ = 0x1010000;
      ppuStack_658 = (undefined8 **)&uStack_850;
      FUN_109a91d90();
      FUN_109ab7c94(&uStack_470,&uStack_660,ppuVar22);
      puVar21 = uStack_470;
      uStack_460 = 0;
      uStack_470._0_4_ = 0x1010000;
      uStack_660._0_4_ = 0x2010000;
      lStack_650 = 0;
      ppuStack_658 = &puStack_138;
      uStack_468 = (undefined8 **)&uStack_850;
      FUN_109a60ed4(0x3fe0000000000000,&uStack_470,&uStack_660);
      uStack_470 = (long *)CONCAT44(uStack_470._4_4_,0x2010000);
      uStack_460 = 0;
      uStack_468 = &puStack_138;
      FUN_109a41858(1.0 / (double)SQRT((float)(double)puVar21),0,&puStack_138,&uStack_470,0xffffffff
                   );
      uStack_500 = 0x4026000000000000;
      uStack_4f8 = (undefined8 **)0x0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      FUN_109a7d904(&uStack_660,0x4034000000000000,&puStack_138);
      FUN_109a7d330(&uStack_470,&uStack_500,&uStack_660);
      auStack_4e0[0] = 0x42ff0000;
      puStack_4a0 = &uStack_4d8;
      uStack_4d8._4_4_ = 0;
      uStack_4d0 = 0;
      auStack_4e0[1] = 0;
      uStack_4d8._0_4_ = 0;
      lStack_4a8 = 0;
      uStack_4ac = 0;
      uStack_4b4 = 0;
      uStack_4b0 = 0;
      uStack_4bc = 0;
      uStack_4b8 = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      uStack_4cc = 0;
      uStack_4c8 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      puStack_498 = &uStack_490;
      (**(code **)(*uStack_470 + 0x18))(uStack_470,&uStack_470,auStack_4e0,0xffffffff);
      FUN_10918eb6c(&uStack_470);
      puVar21 = &uStack_660;
      FUN_10918eb6c(puVar21);
      uStack_668 = 0x3ff0000000000000;
      uStack_460 = 0;
      uStack_470._0_4_ = 0x1010000;
      uStack_660._0_4_ = 0xc1020006;
      ppuStack_658 = (undefined8 **)&uStack_668;
      lStack_650 = 0x100000001;
      uStack_500._0_4_ = 0x2010000;
      uStack_4f0 = 0;
      uStack_4f8 = (undefined8 **)auStack_4e0;
      uStack_468 = (undefined8 **)auStack_4e0;
      FUN_109a91d90();
      FUN_109a279fc(&uStack_470,&uStack_660,&uStack_500,puVar21,&PTR_FUN_1132e8b50,0,0xe);
      uStack_460 = 0;
      uStack_470 = (long *)CONCAT44(uStack_470._4_4_,0x1010000);
      uStack_468 = (undefined8 **)&uStack_1a0;
      lStack_650 = 0;
      uStack_660._0_4_ = 0x1010000;
      ppuStack_658 = (undefined8 **)auStack_4e0;
      FUN_1095deb54(lStack_478,param_1,&uStack_470,&uStack_660);
      puVar21 = &uStack_8d0;
      FUN_109a7d4d8(&uStack_470,puVar21);
      lStack_650 = 0;
      uStack_660 = CONCAT44(uStack_660._4_4_,0xc1060000);
      uStack_4f0 = 0;
      uStack_500 = CONCAT44(uStack_500._4_4_,0x1010000);
      uStack_4f8 = (undefined8 **)&uStack_850;
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,0x2010000);
      uStack_1a8 = 0;
      auStack_b8[0] = 0x3fe0000000000000;
      ppuStack_658 = (undefined8 **)&uStack_470;
      uStack_1b0 = param_5;
      FUN_109a91d90();
      FUN_109a293c4(&uStack_660,&uStack_500,&uStack_1b8,puVar21,5,&PTR_FUN_1132e8cd0,1,auStack_b8);
      FUN_10918eb6c(&uStack_470);
      uStack_660 = param_1[0x18];
      puVar21 = &uStack_470;
      FUN_1095d359c(puVar21,param_1,&uStack_660,5);
      if (0 < *(int *)((long)param_1 + 0xb4)) {
        iVar53 = 0;
        do {
          lStack_650 = 0;
          uStack_660._0_4_ = 0x1010000;
          uStack_4f0 = 0;
          uStack_500._0_4_ = 0x1010000;
          uStack_1b8._0_4_ = 0x2010000;
          uStack_1a8 = 0;
          auStack_b8[0] = 0x3ff0000000000000;
          ppuStack_658 = (undefined8 **)param_5;
          uStack_4f8 = &puStack_138;
          uStack_1b0 = param_5;
          FUN_109a91d90();
          FUN_109a293c4(&uStack_660,&uStack_500,&uStack_1b8,puVar21,0xffffffff,&PTR_FUN_1132e8c90,1,
                        auStack_b8);
          lStack_650 = 0;
          uStack_660._0_4_ = 0x1010000;
          uStack_500._0_4_ = 0x2010000;
          uStack_4f0 = 0;
          ppuStack_658 = (undefined8 **)param_5;
          uStack_4f8 = (undefined8 **)param_5;
          FUN_1095df494(lStack_478,0,&uStack_660,&uStack_500);
          lStack_650 = 0;
          uStack_660._0_4_ = 0x1010000;
          uStack_500._0_4_ = 0x2010000;
          uStack_4f0 = 0;
          lVar30 = lStack_478;
          ppuStack_658 = &puStack_138;
          uStack_4f8 = (undefined8 **)&uStack_470;
          FUN_1095df494(lStack_478,0,&uStack_660,&uStack_500);
          lStack_650 = 0;
          uStack_660 = CONCAT44(uStack_660._4_4_,0x1010000);
          uStack_4f0 = 0;
          uStack_500 = CONCAT44(uStack_500._4_4_,0x1010000);
          uStack_1b8 = CONCAT44(uStack_1b8._4_4_,0x2010000);
          uStack_1a8 = 0;
          auStack_b8[0] = 0x3ff0000000000000;
          ppuStack_658 = (undefined8 **)param_5;
          uStack_4f8 = (undefined8 **)&uStack_470;
          uStack_1b0 = param_5;
          FUN_109a91d90();
          puVar21 = &uStack_660;
          FUN_109a293c4(puVar21,&uStack_500,&uStack_1b8,lVar30,0xffffffff,&PTR_FUN_1132e8cd0,1,
                        auStack_b8);
          iVar53 = iVar53 + 1;
        } while (iVar53 < *(int *)((long)param_1 + 0xb4));
      }
      FUN_1095d3858(&uStack_470);
      if (lStack_4a8 != 0) {
        piVar24 = (int *)(lStack_4a8 + 0x14);
        do {
          iVar53 = *piVar24;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar12) {
            *piVar24 = iVar53 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar53 + -1 == 0) {
          func_0x000109a848d4(auStack_4e0);
        }
      }
      lStack_4a8 = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      uStack_4b8 = 0;
      uStack_4b4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      if (0 < (int)auStack_4e0[1]) {
        lVar30 = 0;
        do {
          *(undefined4 *)((long)puStack_4a0 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)auStack_4e0[1]);
      }
      if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
        _free(puStack_498[-1]);
      }
      FUN_1095d3858(&puStack_138);
      lVar30 = lStack_478;
      lStack_478 = 0;
      if (lVar30 != 0) {
        FUN_1095d2794();
        __ZdlPv();
      }
      if (lStack_168 != 0) {
        piVar24 = (int *)(lStack_168 + 0x14);
        do {
          iVar53 = *piVar24;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar12) {
            *piVar24 = iVar53 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar53 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      if (0 < uStack_1a0._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)(uStack_160 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_1a0._4_4_);
      }
      if (plStack_158 != &lStack_150 && plStack_158 != (long *)0x0) {
        _free(plStack_158[-1]);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (2 < iRam00000001132dfb08) {
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        puStack_350 = (undefined8 *)0x0;
        puStack_358 = (undefined4 *)0x0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_364 = 0;
        uStack_370 = 0;
        uStack_36c = 0;
        uStack_378 = 0;
        uStack_374 = 0;
        uStack_380 = 0;
        uStack_37c = 0;
        uStack_388 = 0;
        uStack_384 = 0;
        uStack_390 = 0;
        uStack_38c = 0;
        uStack_398 = 0;
        uStack_394 = 0;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        puStack_3b0 = (undefined8 *)0x0;
        puStack_3b8 = (undefined4 *)0x0;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        uStack_3d0 = 0;
        uStack_3cc = 0;
        uStack_3d8 = 0;
        uStack_3d4 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0;
        uStack_3f8 = 0;
        uStack_3f4 = 0;
        uStack_400 = 0;
        uStack_408 = 0;
        puStack_410 = (undefined8 *)0x0;
        puStack_418 = (undefined4 *)0x0;
        uStack_420 = 0;
        uStack_428 = 0;
        uStack_424 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        uStack_448 = 0;
        uStack_444 = 0;
        uStack_450 = 0;
        uStack_44c = 0;
        uStack_458 = 0;
        uStack_454 = 0;
        uStack_460 = 0;
        uStack_468 = (undefined8 **)0x0;
        uStack_470 = (undefined8 *)0x0;
        FUN_10926db08(&uStack_470);
        uStack_368 = 3;
        puStack_358 = (undefined4 *)0x0;
        uStack_360 = 0;
        uStack_348 = 0;
        puStack_350 = (undefined8 *)0x0;
        uStack_338 = 0;
        uStack_334 = 0;
        uStack_340 = 0;
        uStack_330 = 0;
        func_0x000107c31940(&uStack_660,&UNK_10f57a9f2);
        func_0x000107c31940(&puStack_138,&DAT_10f47b30b);
        FUN_109671348(&uStack_470,3,&uStack_660,&puStack_138,0x2f);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
        FUN_1092b4db8();
        if (lStack_128 < 0) {
          __ZdlPv(puStack_138);
        }
        if (lStack_650 < 0) {
          __ZdlPv(uStack_660);
        }
        FUN_109671170(&uStack_470);
      }
      FUN_1095d38fc(&uStack_850);
      FUN_1095d38fc(&uStack_8d0);
      if ((*(byte *)((long)param_1 + 0x79) & 1) == 0) {
        uStack_470 = (long *)NEON_rev64(*(undefined8 *)param_5[8],4);
        FUN_1095d359c(&uStack_660,param_1,&uStack_470,5);
        uStack_470 = (long *)NEON_rev64(*(undefined8 *)param_5[8],4);
        FUN_1095d359c(&puStack_138,param_1,&uStack_470,5);
        uStack_470 = (long *)(CONCAT44(*(int *)(param_1 + 0x17) << 1,*(int *)(param_1 + 0x17) << 1)
                             | 0x100000001);
        auStack_4e0[0] = 0xffffffff;
        auStack_4e0[1] = -1;
        FUN_109b32bf8(&uStack_1a0,0,&uStack_470,auStack_4e0);
        uStack_4d0 = 0;
        uStack_4cc = 0;
        auStack_4e0[0] = 0x1010000;
        uStack_4d8._0_4_ = SUB84(param_5,0);
        uVar18 = (undefined4)uStack_4d8;
        uStack_4d8._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
        uVar19 = uStack_4d8._4_4_;
        uStack_500._0_4_ = 0x2010000;
        uStack_4f8 = (undefined8 **)&uStack_660;
        uStack_4f0 = 0;
        uStack_1a8 = 0;
        uStack_1b8._0_4_ = 0x1010000;
        uStack_468 = (undefined8 **)0x7fefffffffffffff;
        uStack_470 = (undefined8 *)0x7fefffffffffffff;
        uStack_458 = 0xffffffff;
        uStack_454 = 0x7fefffff;
        uStack_460 = 0x7fefffffffffffff;
        auStack_b8[0] = 0xffffffffffffffff;
        uStack_1b0 = &uStack_1a0;
        FUN_109b32fd4(1,auStack_4e0,&uStack_500,&uStack_1b8,auStack_b8,1,0,&uStack_470);
        uStack_4d0 = 0;
        uStack_4cc = 0;
        auStack_4e0[0] = 0x1010000;
        uStack_500 = CONCAT44(uStack_500._4_4_,0x2010000);
        uStack_4f8 = &puStack_138;
        uStack_4f0 = 0;
        uStack_1a8 = 0;
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,0x1010000);
        uStack_1b0 = &uStack_1a0;
        uStack_468 = (undefined8 **)0x7fefffffffffffff;
        uStack_470 = (undefined8 *)0x7fefffffffffffff;
        uStack_458 = 0xffffffff;
        uStack_454 = 0x7fefffff;
        uStack_460 = 0x7fefffffffffffff;
        auStack_b8[0] = 0xffffffffffffffff;
        uStack_4d8._0_4_ = uVar18;
        uStack_4d8._4_4_ = uVar19;
        FUN_109b32fd4(0,auStack_4e0,&uStack_500,&uStack_1b8,auStack_b8,1,0,&uStack_470);
        uStack_468 = (undefined8 **)0x0;
        uStack_460 = uStack_460 & 0xffffffff00000000;
        uStack_458 = 0x42ff0000;
        puStack_418 = &uStack_450;
        uStack_44c = 0;
        uStack_448 = 0;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_43c = 0;
        uStack_438 = 0;
        uStack_444 = 0;
        uStack_440 = 0;
        uStack_42c = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_420 = 0;
        uStack_428 = 0;
        uStack_424 = 0;
        puStack_410 = &uStack_408;
        uStack_400 = 0;
        uStack_408 = 0;
        uStack_3f8 = 0x42ff0000;
        puStack_3b8 = &uStack_3f0;
        uStack_3ec = 0;
        uStack_3e8 = 0;
        uStack_3f4 = 0;
        uStack_3f0 = 0;
        uStack_3dc = 0;
        uStack_3d8 = 0;
        uStack_3e4 = 0;
        uStack_3e0 = 0;
        uStack_3cc = 0;
        uStack_3d4 = 0;
        uStack_3d0 = 0;
        uStack_3c0 = 0;
        uStack_3c8 = 0;
        uStack_3c4 = 0;
        puStack_3b0 = &uStack_3a8;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        uStack_398 = 0x42ff0000;
        puStack_358 = &uStack_390;
        uStack_360 = 0;
        uStack_364 = 0;
        uStack_36c = 0;
        uStack_368 = 0;
        uStack_374 = 0;
        uStack_370 = 0;
        uStack_37c = 0;
        uStack_378 = 0;
        uStack_384 = 0;
        uStack_380 = 0;
        uStack_38c = 0;
        uStack_388 = 0;
        uStack_394 = 0;
        uStack_390 = 0;
        puStack_350 = &uStack_348;
        uStack_340 = 0;
        uStack_348 = 0;
        uStack_338 = 0x42ff0000;
        puStack_2f8 = &uStack_330;
        uStack_300 = 0;
        uStack_304 = 0;
        uStack_31c = 0;
        uStack_324 = 0;
        uStack_30c = 0;
        uStack_308 = 0;
        uStack_314 = 0;
        uStack_32c = 0;
        uStack_328 = 0;
        uStack_334 = 0;
        uStack_330 = 0;
        puStack_2f0 = &uStack_2e8;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        uStack_2d8 = 0x42ff0000;
        lStack_298 = (long)&uStack_2d4 + 4;
        uStack_2a0 = 0;
        uStack_2a4 = 0;
        uStack_2bc = 0;
        uStack_2c4 = 0;
        uStack_2ac = 0;
        uStack_2a8 = 0;
        uStack_2b4 = 0;
        uStack_2cc = 0;
        uStack_2d4 = 0;
        puStack_290 = &uStack_288;
        uStack_280 = 0;
        uStack_288 = 0;
        uStack_278 = 0x42ff0000;
        lStack_238 = (long)&uStack_274 + 4;
        uStack_240 = 0;
        uStack_244 = 0;
        uStack_25c = 0;
        uStack_264 = 0;
        uStack_24c = 0;
        uStack_248 = 0;
        uStack_254 = 0;
        uStack_26c = 0;
        uStack_274 = 0;
        puStack_230 = &uStack_228;
        uStack_220 = 0;
        uStack_228 = 0;
        uStack_218 = 0x42ff0000;
        lStack_1d8 = (long)&uStack_214 + 4;
        uStack_1e0 = 0;
        uStack_1e4 = 0;
        uStack_1fc = 0;
        uStack_204 = 0;
        uStack_1ec = 0;
        uStack_1e8 = 0;
        uStack_1f4 = 0;
        uStack_20c = 0;
        uStack_214 = 0;
        puStack_1d0 = &uStack_1c8;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        uStack_470 = param_1;
        FUN_1095e6d64(&uStack_470,&uStack_7d0,*(undefined4 *)(param_1 + 0x17),&uStack_7d0,param_5,
                      param_5,0);
        FUN_109a292ec(param_5,&puStack_138,param_5);
        func_0x000109a29358(param_5,&uStack_660,param_5);
        FUN_1095d3990(&uStack_470);
        if (lStack_168 != 0) {
          piVar24 = (int *)(lStack_168 + 0x14);
          do {
            iVar53 = *piVar24;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar12) {
              *piVar24 = iVar53 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar53 + -1 == 0) {
            func_0x000109a848d4(&uStack_1a0);
          }
        }
        lStack_168 = 0;
        uStack_188 = 0;
        lStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        if (0 < uStack_1a0._4_4_) {
          lVar30 = 0;
          do {
            *(undefined4 *)(uStack_160 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_1a0._4_4_);
        }
        if (plStack_158 != &lStack_150 && plStack_158 != (long *)0x0) {
          _free(plStack_158[-1]);
        }
        FUN_1095d3858(&puStack_138);
        FUN_1095d3858(&uStack_660);
      }
      FUN_1095d3858(&uStack_8d0);
      FUN_1095d3858(&uStack_850);
      if (lStack_798 != 0) {
        piVar24 = (int *)(lStack_798 + 0x14);
        do {
          iVar53 = *piVar24;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar12) {
            *piVar24 = iVar53 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar53 + -1 == 0) {
          func_0x000109a848d4(&uStack_7d0);
        }
      }
      lStack_798 = 0;
      uStack_7b8 = 0;
      uStack_7b4 = 0;
      uStack_7c0 = 0;
      uStack_7bc = 0;
      uStack_7a8 = 0;
      uStack_7a4 = 0;
      uStack_7b0 = 0;
      uStack_7ac = 0;
      if (0 < (int)uStack_7cc) {
        lVar30 = 0;
        do {
          piStack_790[lVar30] = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)uStack_7cc);
      }
      if (plStack_788 != alStack_780 && plStack_788 != (long *)0x0) {
        _free(plStack_788[-1]);
      }
      FUN_1095d3858(auStack_768);
      FUN_1095d3858(auStack_6e8);
      return;
    }
  }
  else {
    uVar55 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
LAB_109660198:
    ___cxa_throw(uVar55,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
  }
  uVar55 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  ___cxa_throw(uVar55,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_109660214:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x109660218);
  (*pcVar20)();
}



/* Entry: 1096605f0; end: 109660d83;  */

void FUN_1096605f0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  ushort *puVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  undefined2 *puVar53;
  int iVar54;
  int iVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  short *psVar58;
  float fVar59;
  undefined1 auVar61 [12];
  undefined8 uVar60;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar75;
  undefined1 auVar74 [16];
  float fVar76;
  float fVar85;
  undefined1 auVar77 [12];
  undefined1 auVar78 [12];
  float fVar86;
  undefined1 auVar79 [12];
  undefined8 uVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  undefined8 uVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  short sVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  long *plStack_120;
  undefined1 auStack_e8 [8];
  int iStack_e0;
  int iStack_dc;
  long lStack_d8;
  long *plStack_a0;
  undefined1 auVar64 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  
  uVar1 = **(undefined4 **)(param_2 + 0x40);
  uVar2 = (*(undefined4 **)(param_2 + 0x40))[1];
  uStack_168 = (undefined4 *)CONCAT44(uVar1,uVar2);
  FUN_1095d359c(auStack_e8,param_1,&uStack_168,3);
  if (lRam0000000113733bb8 != -1) {
    uStack_168 = auStack_198;
    uStack_180 = &uStack_168;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113733bb8,&uStack_180,0x109660eac);
  }
  uVar3 = *(uint *)(param_2 + 8);
  if (0 < (int)uVar3) {
    uVar48 = 0;
    lVar50 = *(long *)(param_2 + 0x10);
    lVar51 = **(long **)(param_2 + 0x48);
    lVar52 = *plStack_a0;
    iVar4 = *(int *)(param_2 + 0xc);
    do {
      if (0 < iVar4) {
        puVar44 = (ushort *)(lVar50 + uVar48 * lVar51);
        puVar53 = (undefined2 *)(lStack_d8 + uVar48 * lVar52);
        iVar54 = iVar4;
        do {
          *puVar53 = *(undefined2 *)(((ulong)(*puVar44 >> 5) & 0x7fe) + 0x113733fc0);
          iVar54 = iVar54 + -1;
          puVar44 = puVar44 + 1;
          puVar53 = puVar53 + 1;
        } while (iVar54 != 0);
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 != uVar3);
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  iVar47 = *(int *)(param_1 + 0x90);
  uStack_180._0_4_ = uVar2;
  uStack_180._4_4_ = uVar1;
  FUN_1095d359c(&uStack_168,param_1,&uStack_180,3);
  uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,0x1010000);
  puStack_178 = auStack_e8;
  uStack_170 = 0;
  auStack_198[0] = 0x2010000;
  uStack_188 = 0;
  uStack_1a0 = *(undefined8 *)(param_1 + 0x8c);
  uStack_1a8 = 0xffffffffffffffff;
  puStack_190 = &uStack_168;
  FUN_109b437c0(&uStack_180,auStack_198,3,&uStack_1a0,&uStack_1a8,0,4);
  iVar47 = iVar47 * iVar4;
  iVar4 = 0x132dfb90;
  iVar54 = 0x132dfbb0;
  if (0 < iStack_e0) {
    lVar50 = 0;
    fVar99 = 1.0 / (float)(uint)(iVar47 * iVar47);
    iVar45 = iStack_e0;
    iVar46 = iStack_dc;
    do {
      if (0 < iVar46) {
        iVar55 = 0;
        pauVar56 = (undefined1 (*) [16])(lStack_158 + *plStack_120 * lVar50);
        psVar58 = (short *)(lStack_d8 + *plStack_a0 * lVar50);
        do {
          sVar94 = (short)iVar47;
          auVar70._0_2_ = *psVar58 * sVar94;
          auVar70._2_2_ = psVar58[1] * sVar94;
          auVar70._4_2_ = psVar58[2] * sVar94;
          auVar70._6_2_ = psVar58[3] * sVar94;
          auVar70._8_2_ = psVar58[4] * sVar94;
          auVar70._10_2_ = psVar58[5] * sVar94;
          auVar70._12_2_ = psVar58[6] * sVar94;
          auVar70._14_2_ = psVar58[7] * sVar94;
          auVar70 = NEON_sqsub(auVar70,*pauVar56,2);
          *(long *)(*pauVar56 + 8) = auVar70._8_8_;
          *(long *)*pauVar56 = auVar70._0_8_;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar45 = iVar4, ___cxa_guard_acquire(), iVar45 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            bRam00000001132dfb80 = 0;
            bRam00000001132dfb81 = 0;
            bRam00000001132dfb82 = 0;
            bRam00000001132dfb83 = 0x80;
            bRam00000001132dfb84 = 0;
            bRam00000001132dfb85 = 0;
            bRam00000001132dfb86 = 0;
            bRam00000001132dfb87 = 0x80;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar45 = iVar54, ___cxa_guard_acquire(), iVar45 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          uVar11 = CONCAT17(bRam00000001132dfba7,
                            CONCAT16(bRam00000001132dfba6,
                                     CONCAT15(bRam00000001132dfba5,
                                              CONCAT14(bRam00000001132dfba4,
                                                       CONCAT13(bRam00000001132dfba3,
                                                                CONCAT12(bRam00000001132dfba2,
                                                                         CONCAT11(
                                                  bRam00000001132dfba1,bRam00000001132dfba0)))))));
          auVar63[8] = bRam00000001132dfba8;
          auVar63._0_8_ = uVar11;
          auVar63[9] = bRam00000001132dfba9;
          auVar63[10] = bRam00000001132dfbaa;
          auVar63[0xb] = bRam00000001132dfbab;
          auVar63[0xc] = bRam00000001132dfbac;
          auVar63[0xd] = bRam00000001132dfbad;
          auVar63[0xe] = bRam00000001132dfbae;
          auVar63[0xf] = bRam00000001132dfbaf;
          uVar60 = CONCAT17(bRam00000001132dfb87,
                            CONCAT16(bRam00000001132dfb86,
                                     CONCAT15(bRam00000001132dfb85,
                                              CONCAT14(bRam00000001132dfb84,
                                                       CONCAT13(bRam00000001132dfb83,
                                                                CONCAT12(bRam00000001132dfb82,
                                                                         CONCAT11(
                                                  bRam00000001132dfb81,bRam00000001132dfb80)))))));
          auVar90[8] = bRam00000001132dfb88;
          auVar90._0_8_ = uVar60;
          auVar90[9] = bRam00000001132dfb89;
          auVar90[10] = bRam00000001132dfb8a;
          auVar90[0xb] = bRam00000001132dfb8b;
          auVar90[0xc] = bRam00000001132dfb8c;
          auVar90[0xd] = bRam00000001132dfb8d;
          auVar90[0xe] = bRam00000001132dfb8e;
          auVar90[0xf] = bRam00000001132dfb8f;
          if ((bRam00000001132dfb90 & 1) == 0) {
            uVar93 = auVar63._8_8_;
            uVar87 = auVar90._8_8_;
            iVar45 = iVar4;
            ___cxa_guard_acquire();
            auVar90._8_8_ = uVar87;
            auVar63._8_8_ = uVar93;
            if (iVar45 != 0) {
              bRam00000001132dfb88 = 0;
              bRam00000001132dfb89 = 0;
              bRam00000001132dfb8a = 0;
              bRam00000001132dfb8b = 0x80;
              bRam00000001132dfb8c = 0;
              bRam00000001132dfb8d = 0;
              bRam00000001132dfb8e = 0;
              bRam00000001132dfb8f = 0x80;
              bRam00000001132dfb80 = 0;
              bRam00000001132dfb81 = 0;
              bRam00000001132dfb82 = 0;
              bRam00000001132dfb83 = 0x80;
              bRam00000001132dfb84 = 0;
              bRam00000001132dfb85 = 0;
              bRam00000001132dfb86 = 0;
              bRam00000001132dfb87 = 0x80;
              ___cxa_guard_release(0x1132dfb90);
            }
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar45 = iVar54, ___cxa_guard_acquire(), iVar45 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          auVar73._0_4_ = (int)auVar70._0_2_ * (int)auVar70._0_2_;
          auVar73._4_4_ = (int)auVar70._2_2_ * (int)auVar70._2_2_;
          auVar73._8_4_ = (int)auVar70._4_2_ * (int)auVar70._4_2_;
          auVar73._12_4_ = (int)auVar70._6_2_ * (int)auVar70._6_2_;
          auVar104._0_4_ = (int)auVar70._8_2_ * (int)auVar70._8_2_;
          auVar104._4_4_ = (int)auVar70._10_2_ * (int)auVar70._10_2_;
          auVar104._8_4_ = (int)auVar70._12_2_ * (int)auVar70._12_2_;
          auVar104._12_4_ = (int)auVar70._14_2_ * (int)auVar70._14_2_;
          auVar70 = NEON_ucvtf(auVar73,4);
          fVar59 = auVar70._0_4_ * fVar99;
          fVar67 = auVar70._4_4_ * fVar99;
          fVar68 = auVar70._8_4_ * fVar99;
          fVar69 = auVar70._12_4_ * fVar99;
          fVar75 = (float)CONCAT13(auVar90[3] & (byte)((uint)fVar59 >> 0x18) | auVar63[3],
                                   CONCAT12(auVar90[2] & (byte)((uint)fVar59 >> 0x10) | auVar63[2],
                                            CONCAT11(auVar90[1] & (byte)((uint)fVar59 >> 8) |
                                                     auVar63[1],
                                                     auVar90[0] & SUB41(fVar59,0) | auVar63[0])));
          auVar77._0_8_ =
               CONCAT17(auVar90[7] & (byte)((uint)fVar67 >> 0x18) | auVar63[7],
                        CONCAT16(auVar90[6] & (byte)((uint)fVar67 >> 0x10) | auVar63[6],
                                 CONCAT15(auVar90[5] & (byte)((uint)fVar67 >> 8) | auVar63[5],
                                          CONCAT14(auVar90[4] & SUB41(fVar67,0) | auVar63[4],fVar75)
                                         )));
          auVar77[8] = auVar90[8] & SUB41(fVar68,0) | auVar63[8];
          auVar77[9] = auVar90[9] & (byte)((uint)fVar68 >> 8) | auVar63[9];
          auVar77[10] = auVar90[10] & (byte)((uint)fVar68 >> 0x10) | auVar63[10];
          auVar77[0xb] = auVar90[0xb] & (byte)((uint)fVar68 >> 0x18) | auVar63[0xb];
          auVar80[0xc] = auVar90[0xc] & SUB41(fVar69,0) | auVar63[0xc];
          auVar80._0_12_ = auVar77;
          auVar80[0xd] = auVar90[0xd] & (byte)((uint)fVar69 >> 8) | auVar63[0xd];
          auVar80[0xe] = auVar90[0xe] & (byte)((uint)fVar69 >> 0x10) | auVar63[0xe];
          auVar80[0xf] = auVar90[0xf] & (byte)((uint)fVar69 >> 0x18) | auVar63[0xf];
          auVar95._0_8_ =
               CONCAT44((int)(fVar67 + (float)((ulong)auVar77._0_8_ >> 0x20)),(int)(fVar59 + fVar75)
                       );
          auVar95._8_4_ = (int)(fVar68 + auVar77._8_4_);
          auVar95._12_4_ = (int)(fVar69 + auVar80._12_4_);
          auVar70 = NEON_ucvtf(auVar104,4);
          fVar59 = auVar70._0_4_ * fVar99;
          fVar67 = auVar70._4_4_ * fVar99;
          fVar68 = auVar70._8_4_ * fVar99;
          fVar69 = auVar70._12_4_ * fVar99;
          fVar75 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar59 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar59 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(bRam00000001132dfb81 &
                                                     (byte)((uint)fVar59 >> 8) |
                                                     bRam00000001132dfba1,
                                                     bRam00000001132dfb80 & SUB41(fVar59,0) |
                                                     bRam00000001132dfba0)));
          auVar78._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar67 >> 0x18) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar67 >> 0x10) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar67 >> 8) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 & SUB41(fVar67,0) |
                                                   bRam00000001132dfba4,fVar75))));
          auVar78[8] = bRam00000001132dfb88 & SUB41(fVar68,0) | bRam00000001132dfba8;
          auVar78[9] = bRam00000001132dfb89 & (byte)((uint)fVar68 >> 8) | bRam00000001132dfba9;
          auVar78[10] = bRam00000001132dfb8a & (byte)((uint)fVar68 >> 0x10) | bRam00000001132dfbaa;
          auVar78[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar68 >> 0x18) | bRam00000001132dfbab;
          auVar81[0xc] = bRam00000001132dfb8c & SUB41(fVar69,0) | bRam00000001132dfbac;
          auVar81._0_12_ = auVar78;
          auVar81[0xd] = bRam00000001132dfb8d & (byte)((uint)fVar69 >> 8) | bRam00000001132dfbad;
          auVar81[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar69 >> 0x10) | bRam00000001132dfbae;
          auVar81[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar69 >> 0x18) | bRam00000001132dfbaf;
          auVar71._0_4_ = (int)(fVar59 + fVar75);
          auVar71._4_4_ = (int)(fVar67 + (float)((ulong)auVar78._0_8_ >> 0x20));
          auVar71._8_4_ = (int)(fVar68 + auVar78._8_4_);
          auVar71._12_4_ = (int)(fVar69 + auVar81._12_4_);
          auVar100._8_8_ = auVar95._8_8_;
          auVar100._0_8_ = NEON_sqxtn(auVar95._0_8_,auVar95,4);
          auVar70 = NEON_sqxtn2(auVar100,auVar71,4);
          *(long *)(psVar58 + 4) = auVar70._8_8_;
          *(long *)psVar58 = auVar70._0_8_;
          iVar55 = iVar55 + 8;
          pauVar56 = pauVar56 + 1;
          psVar58 = psVar58 + 8;
          iVar45 = iStack_e0;
          iVar46 = iStack_dc;
        } while (iVar55 < iStack_dc);
      }
      lVar50 = lVar50 + 1;
    } while (lVar50 < iVar45);
  }
  uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,0x1010000);
  puStack_190 = (undefined8 *)auStack_e8;
  uStack_170 = 0;
  auStack_198[0] = 0x2010000;
  uStack_188 = 0;
  uStack_1a0 = *(undefined8 *)(param_1 + 0x8c);
  uStack_1a8 = 0xffffffffffffffff;
  puStack_178 = (undefined1 *)puStack_190;
  FUN_109b437c0(&uStack_180,auStack_198,3,&uStack_1a0,&uStack_1a8,0,4);
  iVar45 = *(int *)(param_3 + 8);
  if (0 < iVar45) {
    lVar50 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x94);
    fVar99 = 1.0 / SQRT((float)iVar47);
    iVar47 = *(int *)(param_3 + 0xc);
    do {
      if (0 < iVar47) {
        lVar51 = 0;
        pauVar57 = (undefined1 (*) [16])(lStack_d8 + *plStack_a0 * lVar50);
        pauVar56 = (undefined1 (*) [16])(lStack_158 + *plStack_120 * lVar50);
        lVar52 = *(long *)(param_3 + 0x10);
        lVar49 = **(long **)(param_3 + 0x48);
        do {
          auVar70 = *pauVar56;
          auVar90 = *pauVar57;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar47 = iVar4, ___cxa_guard_acquire(), iVar47 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            bRam00000001132dfb80 = 0;
            bRam00000001132dfb81 = 0;
            bRam00000001132dfb82 = 0;
            bRam00000001132dfb83 = 0x80;
            bRam00000001132dfb84 = 0;
            bRam00000001132dfb85 = 0;
            bRam00000001132dfb86 = 0;
            bRam00000001132dfb87 = 0x80;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar47 = iVar54, ___cxa_guard_acquire(), iVar47 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          bVar43 = bRam00000001132dfbaf;
          bVar42 = bRam00000001132dfbae;
          bVar41 = bRam00000001132dfbad;
          bVar40 = bRam00000001132dfbac;
          bVar39 = bRam00000001132dfbab;
          bVar38 = bRam00000001132dfbaa;
          bVar37 = bRam00000001132dfba9;
          bVar36 = bRam00000001132dfba8;
          bVar35 = bRam00000001132dfba7;
          bVar34 = bRam00000001132dfba6;
          bVar33 = bRam00000001132dfba5;
          bVar32 = bRam00000001132dfba4;
          bVar31 = bRam00000001132dfba3;
          bVar30 = bRam00000001132dfba2;
          bVar29 = bRam00000001132dfba1;
          bVar28 = bRam00000001132dfba0;
          bVar27 = bRam00000001132dfb8f;
          bVar26 = bRam00000001132dfb8e;
          bVar25 = bRam00000001132dfb8d;
          bVar24 = bRam00000001132dfb8c;
          bVar23 = bRam00000001132dfb8b;
          bVar22 = bRam00000001132dfb8a;
          bVar21 = bRam00000001132dfb89;
          bVar20 = bRam00000001132dfb88;
          bVar19 = bRam00000001132dfb87;
          bVar18 = bRam00000001132dfb86;
          bVar17 = bRam00000001132dfb85;
          bVar16 = bRam00000001132dfb84;
          bVar15 = bRam00000001132dfb83;
          bVar14 = bRam00000001132dfb82;
          bVar13 = bRam00000001132dfb81;
          bVar12 = bRam00000001132dfb80;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar47 = iVar4, ___cxa_guard_acquire(), iVar47 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            bRam00000001132dfb80 = 0;
            bRam00000001132dfb81 = 0;
            bRam00000001132dfb82 = 0;
            bRam00000001132dfb83 = 0x80;
            bRam00000001132dfb84 = 0;
            bRam00000001132dfb85 = 0;
            bRam00000001132dfb86 = 0;
            bRam00000001132dfb87 = 0x80;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar47 = iVar54, ___cxa_guard_acquire(), iVar47 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          auVar62._0_4_ = (int)auVar70._0_2_;
          auVar62._4_4_ = (int)auVar70._2_2_;
          auVar62._8_4_ = (int)auVar70._4_2_;
          auVar62._12_4_ = (int)auVar70._6_2_;
          auVar63 = NEON_scvtf(auVar62,4);
          auVar72._0_4_ = (int)auVar70._8_2_;
          auVar72._4_4_ = (int)auVar70._10_2_;
          auVar72._8_4_ = (int)auVar70._12_2_;
          auVar72._12_4_ = (int)auVar70._14_2_;
          auVar73 = NEON_scvtf(auVar72,4);
          auVar82._0_4_ = (int)auVar90._0_2_;
          auVar82._4_4_ = (int)auVar90._2_2_;
          auVar82._8_4_ = (int)auVar90._4_2_;
          auVar82._12_4_ = (int)auVar90._6_2_;
          auVar70 = NEON_scvtf(auVar82,4);
          auVar89._0_4_ = (int)auVar90._8_2_;
          auVar89._4_4_ = (int)auVar90._10_2_;
          auVar89._8_4_ = (int)auVar90._12_2_;
          auVar89._12_4_ = (int)auVar90._14_2_;
          auVar90 = NEON_scvtf(auVar89,4);
          auVar7._8_4_ = 0x800000;
          auVar7._0_8_ = 0x80000000800000;
          auVar7._12_4_ = 0x800000;
          auVar95 = NEON_fmax(auVar70,auVar7,4);
          auVar100 = NEON_frsqrte(auVar95,4);
          auVar103._0_4_ = auVar95._0_4_ * auVar100._0_4_;
          auVar103._4_4_ = auVar95._4_4_ * auVar100._4_4_;
          auVar103._8_4_ = auVar95._8_4_ * auVar100._8_4_;
          auVar103._12_4_ = auVar95._12_4_ * auVar100._12_4_;
          auVar104 = NEON_frsqrts(auVar103,auVar100,4);
          auVar101._0_4_ = auVar100._0_4_ * auVar104._0_4_;
          auVar101._4_4_ = auVar100._4_4_ * auVar104._4_4_;
          auVar101._8_4_ = auVar100._8_4_ * auVar104._8_4_;
          auVar101._12_4_ = auVar100._12_4_ * auVar104._12_4_;
          auVar96._0_4_ = auVar95._0_4_ * auVar101._0_4_;
          auVar96._4_4_ = auVar95._4_4_ * auVar101._4_4_;
          auVar96._8_4_ = auVar95._8_4_ * auVar101._8_4_;
          auVar96._12_4_ = auVar95._12_4_ * auVar101._12_4_;
          auVar95 = NEON_frsqrts(auVar96,auVar101,4);
          auVar83._0_4_ = auVar95._0_4_ * auVar101._0_4_ * auVar70._0_4_ * fVar99;
          auVar83._4_4_ = auVar95._4_4_ * auVar101._4_4_ * auVar70._4_4_ * fVar99;
          auVar83._8_4_ = auVar95._8_4_ * auVar101._8_4_ * auVar70._8_4_ * fVar99;
          auVar83._12_4_ = auVar95._12_4_ * auVar101._12_4_ * auVar70._12_4_ * fVar99;
          auVar8._8_4_ = 0x800000;
          auVar8._0_8_ = 0x80000000800000;
          auVar8._12_4_ = 0x800000;
          auVar70 = NEON_fmax(auVar90,auVar8,4);
          auVar95 = NEON_frsqrte(auVar70,4);
          auVar105._0_4_ = auVar70._0_4_ * auVar95._0_4_;
          auVar105._4_4_ = auVar70._4_4_ * auVar95._4_4_;
          auVar105._8_4_ = auVar70._8_4_ * auVar95._8_4_;
          auVar105._12_4_ = auVar70._12_4_ * auVar95._12_4_;
          auVar100 = NEON_frsqrts(auVar105,auVar95,4);
          auVar102._0_4_ = auVar95._0_4_ * auVar100._0_4_;
          auVar102._4_4_ = auVar95._4_4_ * auVar100._4_4_;
          auVar102._8_4_ = auVar95._8_4_ * auVar100._8_4_;
          auVar102._12_4_ = auVar95._12_4_ * auVar100._12_4_;
          auVar97._0_4_ = auVar70._0_4_ * auVar102._0_4_;
          auVar97._4_4_ = auVar70._4_4_ * auVar102._4_4_;
          auVar97._8_4_ = auVar70._8_4_ * auVar102._8_4_;
          auVar97._12_4_ = auVar70._12_4_ * auVar102._12_4_;
          auVar70 = NEON_frsqrts(auVar97,auVar102,4);
          auVar91._0_4_ = auVar70._0_4_ * auVar102._0_4_ * auVar90._0_4_ * fVar99;
          auVar91._4_4_ = auVar70._4_4_ * auVar102._4_4_ * auVar90._4_4_ * fVar99;
          auVar91._8_4_ = auVar70._8_4_ * auVar102._8_4_ * auVar90._8_4_ * fVar99;
          auVar91._12_4_ = auVar70._12_4_ * auVar102._12_4_ * auVar90._12_4_ * fVar99;
          auVar5._4_4_ = uVar1;
          auVar5._0_4_ = uVar1;
          auVar5._8_4_ = uVar1;
          auVar5._12_4_ = uVar1;
          auVar70 = NEON_fmax(auVar83,auVar5,4);
          auVar90 = NEON_frecpe(auVar70,4);
          auVar95 = NEON_frecps(auVar70,auVar90,4);
          auVar98._0_4_ = auVar90._0_4_ * auVar95._0_4_;
          auVar98._4_4_ = auVar90._4_4_ * auVar95._4_4_;
          auVar98._8_4_ = auVar90._8_4_ * auVar95._8_4_;
          auVar98._12_4_ = auVar90._12_4_ * auVar95._12_4_;
          auVar70 = NEON_frecps(auVar70,auVar98,4);
          fVar76 = auVar70._0_4_ * auVar98._0_4_ * auVar63._0_4_ * 0.5 + 128.0;
          fVar85 = auVar70._4_4_ * auVar98._4_4_ * auVar63._4_4_ * 0.5 + 128.0;
          fVar86 = auVar70._8_4_ * auVar98._8_4_ * auVar63._8_4_ * 0.5 + 128.0;
          fVar88 = auVar70._12_4_ * auVar98._12_4_ * auVar63._12_4_ * 0.5 + 128.0;
          auVar6._4_4_ = uVar1;
          auVar6._0_4_ = uVar1;
          auVar6._8_4_ = uVar1;
          auVar6._12_4_ = uVar1;
          auVar70 = NEON_fmax(auVar91,auVar6,4);
          auVar90 = NEON_frecpe(auVar70,4);
          auVar63 = NEON_frecps(auVar70,auVar90,4);
          auVar92._0_4_ = auVar90._0_4_ * auVar63._0_4_;
          auVar92._4_4_ = auVar90._4_4_ * auVar63._4_4_;
          auVar92._8_4_ = auVar90._8_4_ * auVar63._8_4_;
          auVar92._12_4_ = auVar90._12_4_ * auVar63._12_4_;
          auVar70 = NEON_frecps(auVar70,auVar92,4);
          fVar67 = auVar70._0_4_ * auVar92._0_4_ * auVar73._0_4_ * 0.5 + 128.0;
          fVar68 = auVar70._4_4_ * auVar92._4_4_ * auVar73._4_4_ * 0.5 + 128.0;
          fVar69 = auVar70._8_4_ * auVar92._8_4_ * auVar73._8_4_ * 0.5 + 128.0;
          fVar75 = auVar70._12_4_ * auVar92._12_4_ * auVar73._12_4_ * 0.5 + 128.0;
          fVar59 = (float)CONCAT13(bVar15 & (byte)((uint)fVar76 >> 0x18) | bVar31,
                                   CONCAT12(bVar14 & (byte)((uint)fVar76 >> 0x10) | bVar30,
                                            CONCAT11(bVar13 & (byte)((uint)fVar76 >> 8) | bVar29,
                                                     bVar12 & SUB41(fVar76,0) | bVar28)));
          auVar61._0_8_ =
               CONCAT17(bVar19 & (byte)((uint)fVar85 >> 0x18) | bVar35,
                        CONCAT16(bVar18 & (byte)((uint)fVar85 >> 0x10) | bVar34,
                                 CONCAT15(bVar17 & (byte)((uint)fVar85 >> 8) | bVar33,
                                          CONCAT14(bVar16 & SUB41(fVar85,0) | bVar32,fVar59))));
          auVar61[8] = bVar20 & SUB41(fVar86,0) | bVar36;
          auVar61[9] = bVar21 & (byte)((uint)fVar86 >> 8) | bVar37;
          auVar61[10] = bVar22 & (byte)((uint)fVar86 >> 0x10) | bVar38;
          auVar61[0xb] = bVar23 & (byte)((uint)fVar86 >> 0x18) | bVar39;
          auVar64[0xc] = bVar24 & SUB41(fVar88,0) | bVar40;
          auVar64._0_12_ = auVar61;
          auVar64[0xd] = bVar25 & (byte)((uint)fVar88 >> 8) | bVar41;
          auVar64[0xe] = bVar26 & (byte)((uint)fVar88 >> 0x10) | bVar42;
          auVar64[0xf] = bVar27 & (byte)((uint)fVar88 >> 0x18) | bVar43;
          auVar65._0_4_ = (int)(fVar76 + fVar59);
          auVar65._4_4_ = (int)(fVar85 + (float)((ulong)auVar61._0_8_ >> 0x20));
          auVar65._8_4_ = (int)(fVar86 + auVar61._8_4_);
          auVar65._12_4_ = (int)(fVar88 + auVar64._12_4_);
          fVar59 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar67 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar67 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(bRam00000001132dfb81 &
                                                     (byte)((uint)fVar67 >> 8) |
                                                     bRam00000001132dfba1,
                                                     bRam00000001132dfb80 & SUB41(fVar67,0) |
                                                     bRam00000001132dfba0)));
          auVar79._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar68 >> 0x18) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar68 >> 0x10) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar68 >> 8) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 & SUB41(fVar68,0) |
                                                   bRam00000001132dfba4,fVar59))));
          auVar79[8] = bRam00000001132dfb88 & SUB41(fVar69,0) | bRam00000001132dfba8;
          auVar79[9] = bRam00000001132dfb89 & (byte)((uint)fVar69 >> 8) | bRam00000001132dfba9;
          auVar79[10] = bRam00000001132dfb8a & (byte)((uint)fVar69 >> 0x10) | bRam00000001132dfbaa;
          auVar79[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar69 >> 0x18) | bRam00000001132dfbab;
          auVar84[0xc] = bRam00000001132dfb8c & SUB41(fVar75,0) | bRam00000001132dfbac;
          auVar84._0_12_ = auVar79;
          auVar84[0xd] = bRam00000001132dfb8d & (byte)((uint)fVar75 >> 8) | bRam00000001132dfbad;
          auVar84[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar75 >> 0x10) | bRam00000001132dfbae;
          auVar84[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar75 >> 0x18) | bRam00000001132dfbaf;
          auVar74._0_4_ = (int)(fVar67 + fVar59);
          auVar74._4_4_ = (int)(fVar68 + (float)((ulong)auVar79._0_8_ >> 0x20));
          auVar74._8_4_ = (int)(fVar69 + auVar79._8_4_);
          auVar74._12_4_ = (int)(fVar75 + auVar84._12_4_);
          auVar9._8_8_ = 0xff000000ff;
          auVar9._0_8_ = 0xff000000ff;
          auVar70 = NEON_umin(auVar65,auVar9,4);
          auVar10._8_8_ = 0xff000000ff;
          auVar10._0_8_ = 0xff000000ff;
          auVar90 = NEON_umin(auVar74,auVar10,4);
          auVar66._8_8_ = auVar70._8_8_;
          auVar66._0_8_ = NEON_uqxtn(auVar70._0_8_,auVar70,4);
          auVar70 = NEON_uqxtn2(auVar66,auVar90,4);
          uVar60 = NEON_uqxtn(auVar70._0_8_,auVar70,2);
          *(undefined8 *)(lVar52 + lVar49 * lVar50 + lVar51) = uVar60;
          pauVar56 = pauVar56 + 1;
          pauVar57 = pauVar57 + 1;
          iVar47 = *(int *)(param_3 + 0xc);
          lVar51 = lVar51 + 8;
        } while ((int)lVar51 < iVar47);
        iVar45 = *(int *)(param_3 + 8);
      }
      lVar50 = lVar50 + 1;
    } while (lVar50 < iVar45);
  }
  uStack_170 = 0;
  uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,0x1010000);
  uStack_188 = 0;
  uStack_1a0 = CONCAT44(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x7c));
  auStack_198[0] = 0x2010000;
  uStack_1a8 = 0xffffffffffffffff;
  puStack_190 = (undefined8 *)param_3;
  puStack_178 = (undefined1 *)param_3;
  FUN_109b437c0(&uStack_180,auStack_198,0,&uStack_1a0,&uStack_1a8,1,4);
  FUN_1095d3858(&uStack_168);
  FUN_1095d3858(auStack_e8);
  return;
}



/* Entry: 109660d84; end: 109660f63;  */

void FUN_109660d84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar1 = 0;
  lVar3 = 0xf;
  lVar2 = 0xe;
  lVar5 = 0xd;
  lVar4 = 0xc;
  lVar7 = 0xb;
  lVar6 = 10;
  lVar9 = 9;
  lVar8 = 8;
  lVar11 = 7;
  lVar10 = 6;
  lVar13 = 5;
  lVar12 = 4;
  lVar15 = 3;
  lVar14 = 2;
  lVar17 = 1;
  lVar16 = 0;
  do {
    auVar18._0_8_ = lVar2 << 6;
    auVar18._8_8_ = lVar3 << 6;
    auVar19._0_8_ = lVar4 << 6;
    auVar19._8_8_ = lVar5 << 6;
    auVar20._0_8_ = lVar6 << 6;
    auVar20._8_8_ = lVar7 << 6;
    auVar21._0_8_ = lVar8 << 6;
    auVar21._8_8_ = lVar9 << 6;
    auVar22._0_8_ = lVar10 << 6;
    auVar22._8_8_ = lVar11 << 6;
    auVar23._0_8_ = lVar12 << 6;
    auVar23._8_8_ = lVar13 << 6;
    auVar24._0_8_ = lVar14 << 6;
    auVar24._8_8_ = lVar15 << 6;
    auVar25._0_8_ = lVar16 << 6;
    auVar25._8_8_ = lVar17 << 6;
    auVar25 = NEON_ucvtf(auVar25,8);
    auVar24 = NEON_ucvtf(auVar24,8);
    auVar23 = NEON_ucvtf(auVar23,8);
    auVar22 = NEON_ucvtf(auVar22,8);
    auVar21 = NEON_ucvtf(auVar21,8);
    auVar20 = NEON_ucvtf(auVar20,8);
    auVar19 = NEON_ucvtf(auVar19,8);
    auVar18 = NEON_ucvtf(auVar18,8);
    *(char *)(lVar1 + 0x113733bc8) = (char)(long)SQRT(auVar21._0_8_);
    *(char *)(lVar1 + 0x113733bc9) = (char)(long)SQRT(auVar21._8_8_);
    *(char *)(lVar1 + 0x113733bca) = (char)(long)SQRT(auVar20._0_8_);
    *(char *)(lVar1 + 0x113733bcb) = (char)(long)SQRT(auVar20._8_8_);
    *(char *)(lVar1 + 0x113733bcc) = (char)(long)SQRT(auVar19._0_8_);
    *(char *)(lVar1 + 0x113733bcd) = (char)(long)SQRT(auVar19._8_8_);
    *(char *)(lVar1 + 0x113733bce) = (char)(long)SQRT(auVar18._0_8_);
    *(char *)(lVar1 + 0x113733bcf) = (char)(long)SQRT(auVar18._8_8_);
    *(char *)(lVar1 + 0x113733bc0) = (char)(long)SQRT(auVar25._0_8_);
    *(char *)(lVar1 + 0x113733bc1) = (char)(long)SQRT(auVar25._8_8_);
    *(char *)(lVar1 + 0x113733bc2) = (char)(long)SQRT(auVar24._0_8_);
    *(char *)(lVar1 + 0x113733bc3) = (char)(long)SQRT(auVar24._8_8_);
    *(char *)(lVar1 + 0x113733bc4) = (char)(long)SQRT(auVar23._0_8_);
    *(char *)(lVar1 + 0x113733bc5) = (char)(long)SQRT(auVar23._8_8_);
    *(char *)(lVar1 + 0x113733bc6) = (char)(long)SQRT(auVar22._0_8_);
    *(char *)(lVar1 + 0x113733bc7) = (char)(long)SQRT(auVar22._8_8_);
    lVar1 = lVar1 + 0x10;
    lVar12 = lVar12 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar14 = lVar14 + 0x10;
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + 0x10;
    lVar17 = lVar17 + 0x10;
    lVar10 = lVar10 + 0x10;
    lVar11 = lVar11 + 0x10;
    lVar8 = lVar8 + 0x10;
    lVar9 = lVar9 + 0x10;
    lVar6 = lVar6 + 0x10;
    lVar7 = lVar7 + 0x10;
    lVar4 = lVar4 + 0x10;
    lVar5 = lVar5 + 0x10;
    lVar2 = lVar2 + 0x10;
    lVar3 = lVar3 + 0x10;
  } while (lVar1 != 0x400);
  return;
}



/* Entry: 109660f64; end: 109661063;  */

undefined8 * FUN_109660f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = &PTR_FUN_110b00480;
  param_1[0x45] = 0;
  param_1[0x46] = 0x32aaaba7;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x55) = 1;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0x4283126f00000003;
  *(undefined8 *)((long)param_1 + 700) = 0x700000007;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0x2fffffffe;
  *(undefined4 *)((long)param_1 + 0x2c4) = 0x40a00000;
  param_1[0x5a] = 0x400000004;
  param_1[0x59] = 0x400000008;
  param_1[0x5b] = 0x417000003a83126f;
  param_1[0x5c] = 0x340a00000;
  param_1[0x5d] = 0x40d1b71700000003;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  return param_1;
}



/* Entry: 109661064; end: 1096611fb;  */

bool FUN_109661064(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  if ((param_2 == 0) && (*(float *)(param_1 + 0x20) = (float)*param_3, 4 < iRam00000001132dfb08)) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f57ab89);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x20);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
    }
    FUN_109671170(&uStack_180);
  }
  return param_2 == 0;
}



/* Entry: 1096611fc; end: 1096612b7;  */

undefined4 * FUN_1096611fc(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  double dVar10;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110afeb40,&PTR_DAT_110afeb50,0);
    *(long *)(param_1 + 0x228) = param_2;
    if (param_2 != 0) {
      FUN_10965e0dc(param_1 + 0x230,param_2 + 0x1ac8,param_2 + 0x1b28,param_2 + 0x1ac8,
                    param_2 + 0x3870);
      return (undefined4 *)0x1;
    }
  }
  puVar6 = (undefined4 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar7 = puVar6;
  puVar8 = (undefined4 *)PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(puVar6,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(puVar6);
  __Unwind_Resume();
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  iVar5 = puVar7[0xae] - puVar7[0xad];
  puStack_68 = &uStack_60;
  if (iVar5 != 0) {
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    dVar10 = (double)iVar5;
    puStack_c0 = &uStack_b0;
    FUN_109a41858(256.0 / dVar10,(double)(int)puVar7[0xad] / dVar10,
                  *(long *)(puVar7 + 0x8a) + 0x3870,auStack_c8,0);
    auStack_c8[0] = 0;
    uVar2 = *(ulong *)(puVar8 + 2);
    if (uVar2 < *(ulong *)(puVar8 + 4)) {
      FUN_109653af0(uVar2,&UNK_10f57ac09,&uStack_b0,auStack_c8);
      puVar7 = (undefined4 *)(uVar2 + 0xb0);
      *(undefined4 **)(puVar8 + 2) = puVar7;
    }
    else {
      puVar7 = puVar8;
      FUN_109653998(puVar8,&UNK_10f57ac09,&uStack_b0,auStack_c8);
    }
    *(undefined4 **)(puVar8 + 2) = puVar7;
    if (lStack_78 != 0) {
      piVar1 = (int *)(lStack_78 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar7 = &uStack_b0;
        func_0x000109a848d4(puVar7);
      }
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_68[-1];
    _free(puVar7);
  }
  return puVar7;
}



/* Entry: 1096612b8; end: 10966144b;  */

void FUN_1096612b8(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  undefined4 auStack_a8 [2];
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar5 = *(int *)(param_1 + 0x2b8) - *(int *)(param_1 + 0x2b4);
  puStack_48 = &uStack_40;
  if (iVar5 != 0) {
    auStack_a8[0] = 0x2010000;
    uStack_98 = 0;
    dVar7 = (double)iVar5;
    puStack_a0 = &uStack_90;
    FUN_109a41858(256.0 / dVar7,(double)*(int *)(param_1 + 0x2b4) / dVar7,
                  *(long *)(param_1 + 0x228) + 0x3870,auStack_a8,0);
    auStack_a8[0] = 0;
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < *(ulong *)(param_2 + 0x10)) {
      FUN_109653af0(uVar2,&UNK_10f57ac09,&uStack_90,auStack_a8);
      lVar6 = uVar2 + 0xb0;
      *(long *)(param_2 + 8) = lVar6;
    }
    else {
      lVar6 = param_2;
      FUN_109653998(param_2,&UNK_10f57ac09,&uStack_90,auStack_a8);
    }
    *(long *)(param_2 + 8) = lVar6;
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 0x14);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(&uStack_90);
      }
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 10966144c; end: 10966173b;  */

void FUN_10966144c(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uStack_e0;
  int iStack_dc;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined4 *puStack_58;
  
  puStack_70 = (undefined1 *)&uStack_e0;
  uStack_e0 = 0x42ff0000;
  uStack_d4 = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0x2010000;
  lStack_68 = 0;
  uStack_a0 = (ulong)&uStack_e0 | 8;
  puStack_98 = &uStack_90;
  FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x3870,&uStack_78);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  func_0x000104c4f768(&uStack_78,uVar2 + 0x11,&puStack_58);
  puVar3 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
  if (-1 < lStack_68) {
    puVar3 = &uStack_78;
  }
  if (uVar2 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    if (-1 < *(char *)(param_1 + 0x1f)) {
      lVar7 = param_1 + 8;
    }
    _memmove(puVar3,lVar7,uVar2);
  }
  puVar10 = (undefined8 *)((long)puVar3 + uVar2);
  puVar10[1] = 0x754f797469726170;
  *puVar10 = 0x7369447466656c5f;
  *(undefined2 *)(puVar10 + 2) = 0x74;
  puStack_58 = &uStack_78;
  FUN_1095ff978(param_2,&uStack_78,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
  if (*(long *)(param_2 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_2 + 0x28);
    }
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar7 = 0;
    lVar8 = *(long *)(param_2 + 0x68);
    do {
      *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x2c));
  }
  *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(param_2 + 0x28) = CONCAT44(iStack_dc,uStack_e0);
  *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
  *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_b4,uStack_b8);
  *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_bc,uStack_c0);
  *(long *)(param_2 + 0x60) = lStack_a8;
  *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
  puVar9 = *(undefined8 **)(param_2 + 0x70);
  puVar10 = (undefined8 *)(param_2 + 0x78);
  if (puVar9 != puVar10) {
    if (puVar9 != (undefined8 *)0x0) {
      _free(puVar9[-1]);
    }
    *(long *)(param_2 + 0x68) = param_2 + 0x30;
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar9 = puVar10;
  }
  puVar10 = (undefined8 *)((ulong)&uStack_e0 | 4);
  if (iStack_dc < 3) {
    *puVar9 = *puStack_98;
    puVar9[1] = puStack_98[1];
  }
  else {
    *(ulong *)(param_2 + 0x68) = uStack_a0;
    *(undefined8 **)(param_2 + 0x70) = puStack_98;
    uStack_a0 = (ulong)&uStack_e0 | 8;
    puStack_98 = &uStack_90;
  }
  uStack_e0 = 0x42ff0000;
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[2] = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  *(undefined8 *)((long)puVar10 + 0x34) = 0;
  *(undefined8 *)((long)puVar10 + 0x2c) = 0;
  if (lStack_68 < 0) {
    __ZdlPv(CONCAT44(uStack_74,uStack_78));
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    if (0 < iStack_dc) {
      lVar7 = 0;
      do {
        *(undefined4 *)(uStack_a0 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_dc);
    }
  }
  lStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return;
}



/* Entry: 10966173c; end: 1096617db;  */

undefined8 * FUN_10966173c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00480;
  FUN_1095ee584(param_1 + 0x46);
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1096617dc; end: 109661cf3;  */

bool FUN_1096617dc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  double *pdVar12;
  long *plVar13;
  ulong *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [4];
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long lStack_428;
  undefined1 *puStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 ****ppppuStack_398;
  ulong uStack_390;
  byte bStack_381;
  undefined8 ****ppppuStack_380;
  ulong uStack_378;
  byte bStack_369;
  undefined8 ****ppppuStack_368;
  ulong uStack_360;
  byte bStack_351;
  undefined8 ****ppppuStack_350;
  ulong uStack_348;
  byte bStack_339;
  undefined8 auStack_338 [3];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  double adStack_308 [3];
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  undefined8 uStack_2d8;
  undefined1 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  double *pdStack_2b8;
  undefined8 uStack_2b0;
  undefined8 auStack_230 [2];
  char cStack_219;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 *puStack_210;
  long lStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long lStack_1c8;
  int *piStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
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
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar13 = param_2;
  }
  FUN_109670c98();
  plVar8 = (long *)0x11382a450;
  puVar15 = &UNK_10f432965;
  func_0x000109670d0c();
  if (plVar8 == (long *)0x0) {
    if (0 < iRam00000001132dfb08) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      puStack_198 = (undefined8 *)0x0;
      lStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_10926db08(&lStack_1a0);
      uStack_98 = CONCAT44(uStack_98._4_4_,3);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_200,&UNK_10f57ac72);
      func_0x000107c31940(&uStack_218,&UNK_10f57acf3);
      FUN_109671348(&lStack_1a0,1,&uStack_200,&uStack_218,0x3d);
      FUN_1092b4db8();
      puVar15 = (undefined *)param_2[1];
      plVar13 = (long *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar15 = (undefined *)(ulong)*(byte *)((long)param_2 + 0x17);
        plVar13 = param_2;
      }
      FUN_1092b4db8();
      if (lStack_208 < 0) {
        __ZdlPv(CONCAT44(uStack_214,uStack_218));
      }
      if (iStack_1ec < 0) {
        __ZdlPv(CONCAT44(uStack_1fc,uStack_200));
      }
      plVar8 = &lStack_1a0;
      FUN_109671170();
    }
    bVar6 = false;
  }
  else {
    uStack_200 = 0x42ff0000;
    piStack_1c0 = &iStack_1f8;
    iStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1fc = 0;
    iStack_1f8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    iStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1d4 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    lStack_1a0 = NEON_rev64(*param_1,4);
    puStack_1b8 = &uStack_1b0;
    FUN_109a83fd0(&uStack_200,2,&lStack_1a0,0x1d);
    uVar2 = *(uint *)((ulong)&uStack_200 | 4);
    uVar16 = (ulong)uVar2;
    if ((int)uVar2 < 3) {
      if ((int)uVar2 < 1) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)puStack_1b8[uVar16 - 1];
      }
      puVar15 = (undefined *)((long)iStack_1f4 * (long)iStack_1f8);
    }
    else {
      plVar13 = (long *)puStack_1b8[uVar16 - 1];
      puVar15 = (undefined *)0x1;
      piVar18 = piStack_1c0;
      do {
        puVar15 = (undefined *)((long)puVar15 * (long)*piVar18);
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar16 != 0);
    }
    uVar7 = CONCAT44(iStack_1ec,uStack_1f0);
    _fread();
    _fclose();
    uVar16 = (ulong)uStack_1fc;
    if ((int)uStack_1fc < 3) {
      uVar19 = (long)iStack_1f4 * (long)iStack_1f8;
    }
    else {
      uVar19 = 1;
      piVar18 = piStack_1c0;
      do {
        uVar19 = uVar19 * (long)*piVar18;
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 1;
      } while (uVar16 != 0);
    }
    bVar6 = uVar19 <= uVar7;
    if (bVar6) {
      lStack_1a0 = CONCAT44(lStack_1a0._4_4_,0x1010000);
      puStack_198 = (undefined8 *)&uStack_200;
      uStack_190 = 0;
      puStack_210 = param_1 + 2;
      uStack_218 = 0x2050000;
      lStack_208 = 0;
      plVar8 = &lStack_1a0;
      plVar13 = (long *)&uStack_218;
      FUN_109a3dcec();
      plVar20 = (long *)param_1[2];
      if ((plVar20 != (long *)param_1[3]) &&
         (plVar21 = (long *)param_1[3] + -0xc, plVar20 < plVar21)) {
        do {
          plVar8 = plVar20;
          plVar13 = plVar21;
          FUN_109a83eb8();
          plVar20 = plVar20 + 0xc;
          plVar21 = plVar21 + -0xc;
        } while (plVar20 < plVar21);
      }
    }
    else if (0 < iRam00000001132dfb08) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      puStack_198 = (undefined8 *)0x0;
      lStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_10926db08(&lStack_1a0);
      uStack_98 = CONCAT44(uStack_98._4_4_,3);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_218,&UNK_10f57ac72);
      func_0x000107c31940(auStack_230,&UNK_10f57acf3);
      FUN_109671348(&lStack_1a0,1,&uStack_218,auStack_230,0x31);
      FUN_1092b4db8();
      puVar15 = (undefined *)param_2[1];
      plVar13 = (long *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar15 = (undefined *)(ulong)*(byte *)((long)param_2 + 0x17);
        plVar13 = param_2;
      }
      FUN_1092b4db8();
      if (cStack_219 < '\0') {
        __ZdlPv(auStack_230[0]);
      }
      if (lStack_208 < 0) {
        __ZdlPv(CONCAT44(uStack_214,uStack_218));
      }
      plVar8 = &lStack_1a0;
      FUN_109671170();
    }
    if (lStack_1c8 != 0) {
      piVar18 = (int *)(lStack_1c8 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 + -1 == 0) {
        plVar8 = (long *)&uStack_200;
        func_0x000109a848d4();
      }
    }
    lStack_1c8 = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    iStack_1ec = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    if (0 < (int)uStack_1fc) {
      lVar17 = 0;
      do {
        piStack_1c0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)uStack_1fc);
    }
    if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
      plVar8 = (long *)puStack_1b8[-1];
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((int)plVar13 != 0) {
      func_0x000104bd46a0();
      if (lStack_208 < 0) {
        __ZdlPv(CONCAT44(uStack_214,uStack_218));
      }
      FUN_109671170(&lStack_1a0);
      func_0x00010567aa40(&uStack_200);
    }
    __Unwind_Resume();
    puVar9 = &uStack_5c0;
    if (((int *)plVar13[8])[1] != (int)*plVar8 || *(int *)plVar13[8] != *(int *)((long)plVar8 + 4))
    {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(auStack_338,&UNK_10f57ac29);
      __ZNSt3__19to_stringEi(&ppppuStack_350,*(undefined4 *)(plVar13[8] + 4));
      if (-1 < (char)bStack_339) {
        uStack_348 = (ulong)bStack_339;
        ppppuStack_350 = &ppppuStack_350;
      }
      puVar11 = auStack_338;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,ppppuStack_350,uStack_348);
      uStack_318 = puVar11[1];
      uStack_320 = *puVar11;
      uStack_310 = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      FUN_109259240(adStack_308,&uStack_320,&DAT_10f68e8ee);
      __ZNSt3__19to_stringEi(&ppppuStack_368,*(undefined4 *)plVar13[8]);
      if (-1 < (char)bStack_351) {
        uStack_360 = (ulong)bStack_351;
        ppppuStack_368 = &ppppuStack_368;
      }
      pdVar12 = adStack_308;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pdVar12,ppppuStack_368,uStack_360);
      dStack_2e8 = pdVar12[1];
      dStack_2f0 = *pdVar12;
      dStack_2e0 = pdVar12[2];
      pdVar12[1] = 0.0;
      pdVar12[2] = 0.0;
      *pdVar12 = 0.0;
      FUN_109259240(&uStack_2d8,&dStack_2f0,&UNK_10f57ac5a);
      __ZNSt3__19to_stringEi(&ppppuStack_380,(int)*plVar8);
      if (-1 < (char)bStack_369) {
        uStack_378 = (ulong)bStack_369;
        ppppuStack_380 = &ppppuStack_380;
      }
      puVar11 = &uStack_2d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,ppppuStack_380,uStack_378);
      pdStack_2b8 = (double *)puVar11[1];
      uStack_2c0 = *puVar11;
      uStack_2b0 = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      FUN_109259240(auStack_460,&uStack_2c0,&DAT_10f68e8ee);
      __ZNSt3__19to_stringEi(&ppppuStack_398,*(undefined4 *)((long)plVar8 + 4));
      if (-1 < (char)bStack_381) {
        uStack_390 = (ulong)bStack_381;
        ppppuStack_398 = &ppppuStack_398;
      }
      puVar11 = (undefined8 *)auStack_460;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,ppppuStack_398,uStack_390);
      uStack_3f8 = puVar11[1];
      uStack_400 = *puVar11;
      uStack_3f0 = puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      FUN_109259240(&uStack_5c0,&uStack_400,&DAT_10f684600);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar10,&uStack_5c0);
      ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10966226c);
      (*pcVar5)();
    }
    puVar14 = (ulong *)plVar8[2];
    uStack_3c0 = (ulong)&uStack_400 | 8;
    uStack_3f8 = puVar14[1];
    uStack_400 = *puVar14;
    uStack_3e8 = puVar14[3];
    uStack_3f0 = puVar14[2];
    iVar1 = *(int *)((long)puVar14 + 4);
    uStack_3d8 = puVar14[5];
    uStack_3e0 = puVar14[4];
    uStack_3c8 = puVar14[7];
    uStack_3d0 = puVar14[6];
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    if (puVar14[7] != 0) {
      piVar18 = (int *)(puVar14[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = *piVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar1 = *(int *)((long)puVar14 + 4);
    }
    puStack_3b8 = &uStack_3b0;
    if (iVar1 < 3) {
      uStack_3b0 = *(undefined8 *)puVar14[9];
      uStack_3a8 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_400 = uStack_400 & 0xffffffff;
      func_0x000109a84868(&uStack_400);
    }
    auStack_460._0_4_ = 0x42ff0000;
    puStack_5b8 = (undefined8 *)auStack_460;
    uStack_454 = 0;
    uStack_450 = 0;
    stack0xfffffffffffffba4 = 0;
    puStack_420 = auStack_458;
    uStack_444 = 0;
    uStack_440 = 0;
    uStack_44c = 0;
    uStack_448 = 0;
    uStack_434 = 0;
    uStack_43c = 0;
    uStack_438 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_42c = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_5c0 = 0x2010000;
    uStack_5b0 = 0;
    puStack_418 = &uStack_410;
    FUN_109a479a0(plVar13,&uStack_5c0);
    lVar17 = plVar8[2];
    if (1 < (ulong)((plVar8[3] - lVar17 >> 5) * -0x5555555555555555)) {
      uVar16 = 1;
      lVar22 = 0x60;
      do {
        uStack_2b0 = 0;
        uStack_2c0._0_4_ = 0x1010000;
        pdStack_2b8 = (double *)auStack_460;
        FUN_109a8239c(&uStack_5c0,0x3ff0000000000000,lVar17 + lVar22,&uStack_2c0);
        (**(code **)(*(long *)CONCAT44(uStack_5bc,uStack_5c0) + 0x30))
                  ((long *)CONCAT44(uStack_5bc,uStack_5c0),&uStack_5c0,&uStack_400);
        FUN_10918eb6c(&uStack_5c0);
        uStack_2b0 = 0;
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x1010000);
        pdStack_2b8 = (double *)plVar13;
        FUN_109a8239c(&uStack_5c0,0x3ff0000000000000,auStack_460,&uStack_2c0);
        (**(code **)(*(long *)CONCAT44(uStack_5bc,uStack_5c0) + 0x18))
                  ((long *)CONCAT44(uStack_5bc,uStack_5c0),&uStack_5c0,auStack_460,0xffffffff);
        FUN_10918eb6c(&uStack_5c0);
        uVar16 = uVar16 + 1;
        lVar17 = plVar8[2];
        lVar22 = lVar22 + 0x60;
      } while (uVar16 < (ulong)((plVar8[3] - lVar17 >> 5) * -0x5555555555555555));
    }
    dStack_2f0 = (double)(1.0 / *(float *)(plVar8 + 1));
    uStack_2c0._0_4_ = 0xc1020006;
    pdStack_2b8 = &dStack_2f0;
    uStack_2b0 = 0x100000001;
    FUN_109a7e508(&uStack_5c0,&uStack_400);
    uStack_2c8 = 0;
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_,0xc1060000);
    puStack_2d0 = (undefined1 *)&uStack_5c0;
    FUN_109a48a40(&uStack_400,&uStack_2c0,&uStack_2d8);
    FUN_10918eb6c(&uStack_5c0);
    uStack_5b0 = 0;
    uStack_5c0 = 0x1010000;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x2010000);
    uStack_2b0 = 0;
    uStack_2d8 = 0x3ff0000000000000;
    puStack_5b8 = &uStack_400;
    pdStack_2b8 = (double *)puVar15;
    FUN_109a91d90();
    FUN_109a293c4(&uStack_5c0,&uStack_5c0,&uStack_2c0,puVar9,0xffffffff,&PTR_DAT_1132e8d10,1,
                  &uStack_2d8);
    if (lStack_428 != 0) {
      piVar18 = (int *)(lStack_428 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(auStack_460);
      }
    }
    lStack_428 = 0;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_450 = 0;
    uStack_44c = 0;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_440 = 0;
    uStack_43c = 0;
    if (0 < (int)auStack_460._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(puStack_420 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)auStack_460._4_4_);
    }
    if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
      _free(puStack_418[-1]);
    }
    if (uStack_3c8 != 0) {
      piVar18 = (int *)(uStack_3c8 + 0x14);
      do {
        iVar1 = *piVar18;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_400);
      }
    }
    uStack_3c8 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    if (0 < uStack_400._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(uStack_3c0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_400._4_4_);
    }
    if (puStack_3b8 != &uStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
      _free(puStack_3b8[-1]);
    }
    return true;
  }
  return bVar6;
}



/* Entry: 109661cf4; end: 10966243f;  */

undefined8 FUN_109661cf4(int *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [4];
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ****ppppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 ****ppppuStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined8 ****ppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 ****ppppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [3];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double adStack_d8 [3];
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double *pdStack_88;
  undefined8 uStack_80;
  
  puVar6 = &uStack_390;
  if ((*(int **)(param_2 + 0x40))[1] != *param_1 || **(int **)(param_2 + 0x40) != param_1[1]) {
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c31940(auStack_108,&UNK_10f57ac29);
    __ZNSt3__19to_stringEi(&ppppuStack_120,*(undefined4 *)(*(long *)(param_2 + 0x40) + 4));
    if (-1 < (char)bStack_109) {
      uStack_118 = (ulong)bStack_109;
      ppppuStack_120 = &ppppuStack_120;
    }
    puVar8 = auStack_108;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,ppppuStack_120,uStack_118);
    uStack_e8 = puVar8[1];
    uStack_f0 = *puVar8;
    uStack_e0 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109259240(adStack_d8,&uStack_f0,&DAT_10f68e8ee);
    __ZNSt3__19to_stringEi(&ppppuStack_138,**(undefined4 **)(param_2 + 0x40));
    if (-1 < (char)bStack_121) {
      uStack_130 = (ulong)bStack_121;
      ppppuStack_138 = &ppppuStack_138;
    }
    pdVar9 = adStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pdVar9,ppppuStack_138,uStack_130);
    dStack_b8 = pdVar9[1];
    dStack_c0 = *pdVar9;
    dStack_b0 = pdVar9[2];
    pdVar9[1] = 0.0;
    pdVar9[2] = 0.0;
    *pdVar9 = 0.0;
    FUN_109259240(&uStack_a8,&dStack_c0,&UNK_10f57ac5a);
    __ZNSt3__19to_stringEi(&ppppuStack_150,*param_1);
    if (-1 < (char)bStack_139) {
      uStack_148 = (ulong)bStack_139;
      ppppuStack_150 = &ppppuStack_150;
    }
    puVar8 = &uStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,ppppuStack_150,uStack_148);
    pdStack_88 = (double *)puVar8[1];
    uStack_90 = *puVar8;
    uStack_80 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109259240(auStack_230,&uStack_90,&DAT_10f68e8ee);
    __ZNSt3__19to_stringEi(&ppppuStack_168,param_1[1]);
    if (-1 < (char)bStack_151) {
      uStack_160 = (ulong)bStack_151;
      ppppuStack_168 = &ppppuStack_168;
    }
    puVar8 = (undefined8 *)auStack_230;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar8,ppppuStack_168,uStack_160);
    uStack_1c8 = puVar8[1];
    uStack_1d0 = *puVar8;
    uStack_1c0 = puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_109259240(&uStack_390,&uStack_1d0,&DAT_10f684600);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar7,&uStack_390);
    ___cxa_throw(uVar7,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10966226c);
    (*pcVar5)();
  }
  puVar10 = *(ulong **)(param_1 + 4);
  uStack_190 = (ulong)&uStack_1d0 | 8;
  uStack_1c8 = puVar10[1];
  uStack_1d0 = *puVar10;
  uStack_1b8 = puVar10[3];
  uStack_1c0 = puVar10[2];
  iVar2 = *(int *)((long)puVar10 + 4);
  uStack_1a8 = puVar10[5];
  uStack_1b0 = puVar10[4];
  uStack_198 = puVar10[7];
  uStack_1a0 = puVar10[6];
  uStack_180 = 0;
  uStack_178 = 0;
  if (puVar10[7] != 0) {
    piVar1 = (int *)(puVar10[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)puVar10 + 4);
  }
  puStack_188 = &uStack_180;
  if (iVar2 < 3) {
    uStack_180 = *(undefined8 *)puVar10[9];
    uStack_178 = ((undefined8 *)puVar10[9])[1];
  }
  else {
    uStack_1d0 = uStack_1d0 & 0xffffffff;
    func_0x000109a84868(&uStack_1d0);
  }
  auStack_230._0_4_ = 0x42ff0000;
  puStack_388 = (undefined8 *)auStack_230;
  uStack_224 = 0;
  uStack_220 = 0;
  stack0xfffffffffffffdd4 = 0;
  puStack_1f0 = auStack_228;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_204 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_390 = 0x2010000;
  uStack_380 = 0;
  puStack_1e8 = &uStack_1e0;
  FUN_109a479a0(param_2,&uStack_390);
  lVar11 = *(long *)(param_1 + 4);
  if (1 < (ulong)((*(long *)(param_1 + 6) - lVar11 >> 5) * -0x5555555555555555)) {
    uVar12 = 1;
    lVar13 = 0x60;
    do {
      uStack_80 = 0;
      uStack_90._0_4_ = 0x1010000;
      pdStack_88 = (double *)auStack_230;
      FUN_109a8239c(&uStack_390,0x3ff0000000000000,lVar11 + lVar13,&uStack_90);
      (**(code **)(*(long *)CONCAT44(uStack_38c,uStack_390) + 0x30))
                ((long *)CONCAT44(uStack_38c,uStack_390),&uStack_390,&uStack_1d0);
      FUN_10918eb6c(&uStack_390);
      uStack_80 = 0;
      uStack_90 = CONCAT44(uStack_90._4_4_,0x1010000);
      pdStack_88 = (double *)param_2;
      FUN_109a8239c(&uStack_390,0x3ff0000000000000,auStack_230,&uStack_90);
      (**(code **)(*(long *)CONCAT44(uStack_38c,uStack_390) + 0x18))
                ((long *)CONCAT44(uStack_38c,uStack_390),&uStack_390,auStack_230,0xffffffff);
      FUN_10918eb6c(&uStack_390);
      uVar12 = uVar12 + 1;
      lVar11 = *(long *)(param_1 + 4);
      lVar13 = lVar13 + 0x60;
    } while (uVar12 < (ulong)((*(long *)(param_1 + 6) - lVar11 >> 5) * -0x5555555555555555));
  }
  dStack_c0 = (double)(1.0 / (float)param_1[2]);
  uStack_90._0_4_ = 0xc1020006;
  pdStack_88 = &dStack_c0;
  uStack_80 = 0x100000001;
  FUN_109a7e508(&uStack_390,&uStack_1d0);
  uStack_98 = 0;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,0xc1060000);
  puStack_a0 = (undefined1 *)&uStack_390;
  FUN_109a48a40(&uStack_1d0,&uStack_90,&uStack_a8);
  FUN_10918eb6c(&uStack_390);
  uStack_380 = 0;
  uStack_390 = 0x1010000;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x2010000);
  uStack_80 = 0;
  uStack_a8 = 0x3ff0000000000000;
  puStack_388 = &uStack_1d0;
  pdStack_88 = (double *)param_3;
  FUN_109a91d90();
  FUN_109a293c4(&uStack_390,&uStack_390,&uStack_90,puVar6,0xffffffff,&PTR_DAT_1132e8d10,1,&uStack_a8
               );
  if (lStack_1f8 != 0) {
    piVar1 = (int *)(lStack_1f8 + 0x14);
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
      func_0x000109a848d4(auStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  if (0 < (int)auStack_230._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(puStack_1f0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)auStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  if (uStack_198 != 0) {
    piVar1 = (int *)(uStack_198 + 0x14);
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
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  uStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (0 < uStack_1d0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_190 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_1d0._4_4_);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  return 1;
}



/* Entry: 109662440; end: 109662543;  */

undefined8 *
FUN_109662440(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_2 + 1,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[3] = param_3[2];
    param_2[2] = uVar2;
    param_2[1] = uVar1;
  }
  _bzero(param_2 + 4,0x201);
  *param_2 = &PTR_FUN_110b00508;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_2 + 0x45,*param_4,param_4[1]);
  }
  else {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_2[0x47] = param_4[2];
    param_2[0x46] = uVar2;
    param_2[0x45] = uVar1;
  }
  param_2[0x48] = 0;
  *(undefined1 *)(param_2 + 0x49) = 0;
  param_2[0x4a] = *param_5;
  *(undefined4 *)(param_2 + 0x4b) = param_1;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  return param_2;
}



/* Entry: 109662544; end: 1096627cf;  */

/* WARNING: Removing unreachable block (ram,0x000109662618) */
/* WARNING: Removing unreachable block (ram,0x000109662744) */

undefined8 FUN_109662544(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
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
  ulong uStack_50;
  long alStack_48 [3];
  
  cVar2 = *(char *)(param_1 + 0x23f);
  if (cVar2 < '\0') {
    if (*(long *)(param_1 + 0x230) == 0) goto LAB_109662660;
  }
  else if (cVar2 == '\0') goto LAB_109662660;
  plVar1 = (long *)(param_1 + 0x228);
  plVar4 = (long *)*plVar1;
  if (-1 < cVar2) {
    plVar4 = plVar1;
  }
  _stat(plVar4,&uStack_190);
  if ((int)plVar4 != -1 && ((ulong)uStack_190 & 0x400000000000) != 0) {
    plVar4 = alStack_48;
    func_0x000107c31940(plVar4,&UNK_10f57ad5a);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm();
    uStack_188 = plVar4[1];
    uStack_190 = (undefined8 *)*plVar4;
    uStack_180 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar5 = uStack_188;
    puVar3 = uStack_190;
    if (-1 < (long)uStack_180) {
      uVar5 = uStack_180 >> 0x38;
      puVar3 = &uStack_190;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar1,puVar3,uVar5);
    if ((long)uStack_180 < 0) {
      __ZdlPv(uStack_190);
    }
  }
  plVar4 = *(long **)(param_1 + 0x228);
  if (-1 < *(char *)(param_1 + 0x23f)) {
    plVar4 = plVar1;
  }
  _stat(plVar4,&uStack_190);
  if (((int)plVar4 != -1) && (uStack_190._4_2_ < 0)) {
    uVar5 = param_1 + 0x250;
    FUN_1096617dc(uVar5,plVar1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    if (0 < iRam00000001132dfb08) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
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
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = (undefined8 *)0x0;
      FUN_10926db08(&uStack_190);
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x000107c31940(alStack_48,&UNK_10f57ad73);
      func_0x000107c31940(auStack_1a8,&UNK_10f500fc6);
      FUN_109671348(&uStack_190,1,alStack_48,auStack_1a8,0x33);
      FUN_1092b4db8();
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      FUN_109671170(&uStack_190);
    }
    return 0;
  }
LAB_109662660:
  *(undefined1 *)(param_1 + 0x248) = 1;
  return 1;
}



/* Entry: 1096627d0; end: 109662967;  */

bool FUN_1096627d0(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  if ((param_2 == 0) && (*(float *)(param_1 + 0x20) = (float)*param_3, 4 < iRam00000001132dfb08)) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f57ad73);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x41);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
    }
    FUN_109671170(&uStack_180);
  }
  return param_2 == 0;
}



/* Entry: 109662968; end: 109662a27;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_109662968(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [4];
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *******pppppppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 *******pppppppuStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined8 *******pppppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 *******pppppppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [3];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [2];
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined4 *puStack_70;
  undefined1 *puStack_68;
  
  if ((*(byte *)(param_1 + 0x248) & 1) != 0) {
    return (undefined4 *)0x1;
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110afeb40,&PTR_DAT_110afeb50,0);
    *(long *)(param_1 + 0x240) = param_2;
    if (param_2 != 0) {
      puVar7 = &uStack_390;
      if ((*(int **)(param_2 + 0x38b0))[1] != *(int *)(param_1 + 0x250) ||
          **(int **)(param_2 + 0x38b0) != *(int *)(param_1 + 0x254)) {
        uVar8 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000107c31940(auStack_108,&UNK_10f57ac29);
        __ZNSt3__19to_stringEi(&pppppppuStack_120,*(undefined4 *)(*(long *)(param_2 + 0x38b0) + 4));
        if (-1 < (char)bStack_109) {
          uStack_118 = (ulong)bStack_109;
          pppppppuStack_120 = &pppppppuStack_120;
        }
        puVar9 = auStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar9,pppppppuStack_120,uStack_118);
        uStack_e8 = puVar9[1];
        uStack_f0 = *puVar9;
        uStack_e0 = puVar9[2];
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        FUN_109259240(auStack_d8,&uStack_f0,&DAT_10f68e8ee);
        __ZNSt3__19to_stringEi(&pppppppuStack_138,**(undefined4 **)(param_2 + 0x38b0));
        if (-1 < (char)bStack_121) {
          uStack_130 = (ulong)bStack_121;
          pppppppuStack_138 = &pppppppuStack_138;
        }
        puVar9 = auStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar9,pppppppuStack_138,uStack_130);
        uStack_b8 = puVar9[1];
        puStack_c0 = (undefined4 *)*puVar9;
        uStack_b0 = (undefined4)puVar9[2];
        iStack_ac = (int)((ulong)puVar9[2] >> 0x20);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        FUN_109259240(&uStack_a8,&puStack_c0,&UNK_10f57ac5a);
        __ZNSt3__19to_stringEi(&pppppppuStack_150,*(int *)(param_1 + 0x250));
        if (-1 < (char)bStack_139) {
          uStack_148 = (ulong)bStack_139;
          pppppppuStack_150 = &pppppppuStack_150;
        }
        puVar9 = &uStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar9,pppppppuStack_150,uStack_148);
        uStack_80 = (undefined4)puVar9[2];
        uStack_7c = (undefined4)((ulong)puVar9[2] >> 0x20);
        uStack_88._0_4_ = (undefined4)puVar9[1];
        uStack_88._4_4_ = (undefined4)((ulong)puVar9[1] >> 0x20);
        uStack_90 = (undefined4)*puVar9;
        uStack_8c = (undefined4)((ulong)*puVar9 >> 0x20);
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        FUN_109259240(auStack_230,&uStack_90,&DAT_10f68e8ee);
        __ZNSt3__19to_stringEi(&pppppppuStack_168,*(undefined4 *)(param_1 + 0x254));
        if (-1 < (char)bStack_151) {
          uStack_160 = (ulong)bStack_151;
          pppppppuStack_168 = &pppppppuStack_168;
        }
        puVar9 = (undefined8 *)auStack_230;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar9,pppppppuStack_168,uStack_160);
        uStack_1c8 = puVar9[1];
        uStack_1d0 = *puVar9;
        uStack_1c0 = puVar9[2];
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        FUN_109259240(&uStack_390,&uStack_1d0,&DAT_10f684600);
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (uVar8,&uStack_390);
        ___cxa_throw(uVar8,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10966226c);
        (*pcVar6)();
      }
      puVar11 = *(ulong **)(param_1 + 0x260);
      uStack_190 = (ulong)&uStack_1d0 | 8;
      uStack_1c8 = puVar11[1];
      uStack_1d0 = *puVar11;
      uStack_1b8 = puVar11[3];
      uStack_1c0 = puVar11[2];
      iVar2 = *(int *)((long)puVar11 + 4);
      uStack_1a8 = puVar11[5];
      uStack_1b0 = puVar11[4];
      uStack_198 = puVar11[7];
      uStack_1a0 = puVar11[6];
      uStack_180 = 0;
      uStack_178 = 0;
      if (puVar11[7] != 0) {
        piVar1 = (int *)(puVar11[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar2 = *(int *)((long)puVar11 + 4);
      }
      puStack_188 = &uStack_180;
      if (iVar2 < 3) {
        uStack_180 = *(undefined8 *)puVar11[9];
        uStack_178 = ((undefined8 *)puVar11[9])[1];
      }
      else {
        uStack_1d0 = uStack_1d0 & 0xffffffff;
        func_0x000109a84868(&uStack_1d0);
      }
      auStack_230._0_4_ = 0x42ff0000;
      puStack_388 = (undefined8 *)auStack_230;
      uStack_224 = 0;
      uStack_220 = 0;
      stack0xfffffffffffffdd4 = 0;
      puStack_1f0 = auStack_228;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_21c = 0;
      uStack_218 = 0;
      uStack_204 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_390 = 0x2010000;
      uStack_380 = 0;
      puStack_1e8 = &uStack_1e0;
      FUN_109a479a0(param_2 + 0x3870,&uStack_390);
      lVar12 = *(long *)(param_1 + 0x260);
      if (1 < (ulong)((*(long *)(param_1 + 0x268) - lVar12 >> 5) * -0x5555555555555555)) {
        uVar13 = 1;
        lVar14 = 0x60;
        do {
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_90 = 0x1010000;
          uStack_88 = (undefined4 **)auStack_230;
          FUN_109a8239c(&uStack_390,0x3ff0000000000000,lVar12 + lVar14,&uStack_90);
          (**(code **)(*(long *)CONCAT44(uStack_38c,uStack_390) + 0x30))
                    ((long *)CONCAT44(uStack_38c,uStack_390),&uStack_390,&uStack_1d0);
          FUN_10918eb6c(&uStack_390);
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_90 = 0x1010000;
          uStack_88 = (undefined4 **)(param_2 + 0x3870);
          FUN_109a8239c(&uStack_390,0x3ff0000000000000,auStack_230,&uStack_90);
          (**(code **)(*(long *)CONCAT44(uStack_38c,uStack_390) + 0x18))
                    ((long *)CONCAT44(uStack_38c,uStack_390),&uStack_390,auStack_230,0xffffffff);
          FUN_10918eb6c(&uStack_390);
          uVar13 = uVar13 + 1;
          lVar12 = *(long *)(param_1 + 0x260);
          lVar14 = lVar14 + 0x60;
        } while (uVar13 < (ulong)((*(long *)(param_1 + 0x268) - lVar12 >> 5) * -0x5555555555555555))
        ;
      }
      puStack_c0 = (undefined4 *)(double)(1.0 / *(float *)(param_1 + 600));
      uStack_90 = 0xc1020006;
      uStack_88 = &puStack_c0;
      uStack_80 = 1;
      uStack_7c = 1;
      FUN_109a7e508(&uStack_390,&uStack_1d0);
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a8._0_4_ = 0xc1060000;
      uStack_a0 = &uStack_390;
      FUN_109a48a40(&uStack_1d0,&uStack_90,&uStack_a8);
      FUN_10918eb6c(&uStack_390);
      uStack_380 = 0;
      uStack_390 = 0x1010000;
      uStack_90 = 0x2010000;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_a8._0_4_ = 0;
      uStack_a8._4_4_ = 0x3ff00000;
      puStack_388 = &uStack_1d0;
      uStack_88 = (undefined4 **)(param_2 + 0x3f30);
      FUN_109a91d90();
      FUN_109a293c4(&uStack_390,&uStack_390,&uStack_90,puVar7,0xffffffff,&PTR_DAT_1132e8d10,1,
                    &uStack_a8);
      puVar5 = (undefined1 *)uStack_a0;
      lVar12 = (long)uStack_88;
      if (lStack_1f8 != 0) {
        piVar1 = (int *)(lStack_1f8 + 0x14);
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
          func_0x000109a848d4(auStack_230);
          puVar5 = (undefined1 *)uStack_a0;
          lVar12 = (long)uStack_88;
        }
      }
      lStack_1f8 = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      if (0 < (int)auStack_230._4_4_) {
        lVar14 = 0;
        do {
          *(undefined4 *)(puStack_1f0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)auStack_230._4_4_);
      }
      uStack_a0 = (undefined4 *)puVar5;
      uStack_88 = (undefined4 **)lVar12;
      if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
        _free(puStack_1e8[-1]);
      }
      if (uStack_198 != 0) {
        piVar1 = (int *)(uStack_198 + 0x14);
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
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      uStack_198 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (0 < uStack_1d0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)(uStack_190 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < uStack_1d0._4_4_);
      }
      if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
        _free(puStack_188[-1]);
      }
      return (undefined4 *)0x1;
    }
  }
  lVar14 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar12 = lVar14;
  puVar7 = (undefined4 *)PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar14,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar14);
  __Unwind_Resume();
  uStack_b0 = 0x42ff0000;
  puStack_c0 = &uStack_b0;
  puStack_70 = (undefined4 *)&uStack_a8;
  uStack_a8._4_4_ = 0;
  uStack_a0._0_4_ = 0;
  iStack_ac = 0;
  uStack_a8._0_4_ = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_a0._4_4_ = 0;
  uStack_98 = 0;
  uStack_88._4_4_ = 0;
  uStack_8c = 0;
  uStack_88._0_4_ = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  auStack_c8[0] = 0x2010000;
  uStack_b8 = 0;
  puStack_68 = &stack0xffffffffffffffa0;
  FUN_109a41858(255.0 / (double)*(float *)(lVar12 + 600),0,*(long *)(lVar12 + 0x240) + 0x3f30,
                auStack_c8,0);
  auStack_c8[0] = 0;
  uVar13 = *(ulong *)(puVar7 + 2);
  if (uVar13 < *(ulong *)(puVar7 + 4)) {
    FUN_109603a90(uVar13,&UNK_10f57ae29,&uStack_b0,auStack_c8);
    puVar10 = (undefined4 *)(uVar13 + 0xb0);
    *(undefined4 **)(puVar7 + 2) = puVar10;
  }
  else {
    puVar10 = puVar7;
    FUN_109603938(puVar7,&UNK_10f57ae29,&uStack_b0,auStack_c8);
  }
  *(undefined4 **)(puVar7 + 2) = puVar10;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
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
      puVar10 = &uStack_b0;
      func_0x000109a848d4(puVar10);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < iStack_ac) {
    lVar12 = 0;
    do {
      puStack_70[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_ac);
  }
  if (puStack_68 != &stack0xffffffffffffffa0 && puStack_68 != (undefined1 *)0x0) {
    puVar10 = *(undefined4 **)(puStack_68 + -8);
    _free(puVar10);
  }
  return puVar10;
}



/* Entry: 109662a28; end: 109662bab;  */

void FUN_109662a28(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 auStack_a8 [2];
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0x42ff0000;
  puStack_a0 = &uStack_90;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_a8[0] = 0x2010000;
  uStack_98 = 0;
  puStack_48 = &uStack_40;
  FUN_109a41858(255.0 / (double)*(float *)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 0x3f30,
                auStack_a8,0);
  auStack_a8[0] = 0;
  uVar3 = *(ulong *)(param_2 + 8);
  if (uVar3 < *(ulong *)(param_2 + 0x10)) {
    FUN_109603a90(uVar3,&UNK_10f57ae29,&uStack_90,auStack_a8);
    lVar6 = uVar3 + 0xb0;
    *(long *)(param_2 + 8) = lVar6;
  }
  else {
    lVar6 = param_2;
    FUN_109603938(param_2,&UNK_10f57ae29,&uStack_90,auStack_a8);
  }
  *(long *)(param_2 + 8) = lVar6;
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_90);
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (0 < (int)uStack_8c) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_8c);
  }
  if (puStack_48 != &uStack_40 && puStack_48 != (undefined8 *)0x0) {
    _free(puStack_48[-1]);
  }
  return;
}



/* Entry: 109662bac; end: 109662eb3;  */

void FUN_109662bac(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uStack_e0;
  int iStack_dc;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined4 *puStack_58;
  
  puStack_70 = (undefined1 *)&uStack_e0;
  if (0.5 < *(float *)(param_1 + 0x20)) {
    uStack_e0 = 0x42ff0000;
    uStack_d4 = 0;
    uStack_d0 = 0;
    iStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_b4 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0x2010000;
    lStack_68 = 0;
    uStack_a0 = (ulong)&uStack_e0 | 8;
    puStack_98 = &uStack_90;
    FUN_109a479a0(*(long *)(param_1 + 0x240) + 0x3f30,&uStack_78);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_78,uVar2 + 0xc,&puStack_58);
    puVar3 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
    if (-1 < lStack_68) {
      puVar3 = &uStack_78;
    }
    if (uVar2 != 0) {
      lVar7 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar7 = param_1 + 8;
      }
      _memmove(puVar3,lVar7,uVar2);
    }
    puVar10 = (undefined8 *)((long)puVar3 + uVar2);
    *puVar10 = 0x687470654464705f;
    *(undefined4 *)(puVar10 + 1) = 0x7466654c;
    *(undefined1 *)((long)puVar10 + 0xc) = 0;
    puStack_58 = &uStack_78;
    FUN_1095ff978(param_2,&uStack_78,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
    if (*(long *)(param_2 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x28);
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar7 = 0;
      lVar8 = *(long *)(param_2 + 0x68);
      do {
        *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_2 + 0x2c));
    }
    *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(param_2 + 0x28) = CONCAT44(iStack_dc,uStack_e0);
    *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_b4,uStack_b8);
    *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_bc,uStack_c0);
    *(long *)(param_2 + 0x60) = lStack_a8;
    *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
    puVar9 = *(undefined8 **)(param_2 + 0x70);
    puVar10 = (undefined8 *)(param_2 + 0x78);
    if (puVar9 != puVar10) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      *(long *)(param_2 + 0x68) = param_2 + 0x30;
      *(undefined8 **)(param_2 + 0x70) = puVar10;
      puVar9 = puVar10;
    }
    puVar10 = (undefined8 *)((ulong)&uStack_e0 | 4);
    if (iStack_dc < 3) {
      *puVar9 = *puStack_98;
      puVar9[1] = puStack_98[1];
    }
    else {
      *(ulong *)(param_2 + 0x68) = uStack_a0;
      *(undefined8 **)(param_2 + 0x70) = puStack_98;
      uStack_a0 = (ulong)&uStack_e0 | 8;
      puStack_98 = &uStack_90;
    }
    uStack_e0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    if (lStack_68 < 0) {
      __ZdlPv(CONCAT44(uStack_74,uStack_78));
      if (lStack_a8 != 0) {
        piVar1 = (int *)(lStack_a8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      if (0 < iStack_dc) {
        lVar7 = 0;
        do {
          *(undefined4 *)(uStack_a0 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_dc);
      }
    }
    lStack_a8 = 0;
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
  }
  return;
}



/* Entry: 109662eb4; end: 10966301b;  */

undefined8 * FUN_109662eb4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b00508;
  puStack_28 = param_1 + 0x4c;
  FUN_1093702c4(&puStack_28);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10966301c; end: 1096631b3;  */

bool FUN_10966301c(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  if ((param_2 == 0) && (*(float *)(param_1 + 0x20) = (float)*param_3, 4 < iRam00000001132dfb08)) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f57ae46);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x21);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
    }
    FUN_109671170(&uStack_180);
  }
  return param_2 == 0;
}



/* Entry: 1096631b4; end: 10966400f;  */

bool FUN_1096631b4(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 ***pppuStack_368;
  ulong uStack_360;
  byte bStack_351;
  undefined8 ***pppuStack_350;
  ulong uStack_348;
  byte bStack_339;
  undefined8 ***pppuStack_338;
  ulong uStack_330;
  byte bStack_321;
  undefined8 ***pppuStack_320;
  ulong uStack_318;
  byte bStack_309;
  undefined8 ***pppuStack_308;
  ulong uStack_300;
  byte bStack_2f1;
  undefined8 ***pppuStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 auStack_2d8 [3];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 auStack_2a8 [3];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 auStack_278 [3];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 auStack_248 [3];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 auStack_218 [3];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long *plStack_168;
  long lStack_160;
  ulong uStack_158;
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
  ulong uStack_70;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
LAB_109663bf0:
    uVar10 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
LAB_109663c40:
    ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110afeb40,&PTR_DAT_110afeb50,0);
    *(long *)(param_1 + 0x228) = param_2;
    if (param_2 == 0) goto LAB_109663bf0;
    plVar19 = *(long **)(param_2 + 0x1348);
    if (plVar19 == (long *)0x0) {
      if (iRam00000001132dfb08 < 5) goto LAB_109663908;
      uStack_70 = 0;
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
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      lStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_198 = 0;
      lStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(&puStack_1d0,&UNK_10f57ae46);
      func_0x000107c31940(auStack_1e8,&UNK_10f57aec2);
      FUN_109671348(&uStack_1b0,5,&puStack_1d0,auStack_1e8,0x30);
      FUN_1092b4db8();
LAB_1096638e0:
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      if (uStack_1c0._7_1_ < '\0') {
        __ZdlPv(puStack_1d0);
      }
      FUN_109671170(&uStack_1b0);
LAB_109663908:
      return plVar19 != (long *)0x0;
    }
    plVar3 = (long *)plVar19[3];
    uVar15 = (plVar19[4] - (long)plVar3 >> 3) * -0x5555555555555555;
    if (uVar15 < 2) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_109663c40;
    }
    pcVar4 = (char *)*plVar19;
    if (uVar15 - (plVar19[1] - (long)pcVar4) != 0) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_109663c40;
    }
    iVar12 = (int)plVar3[1];
    if ((((iVar12 != *(int *)(param_1 + 0x230)) ||
         (iVar5 = *(int *)((long)plVar3 + 0xc), iVar5 != *(int *)(param_1 + 0x234))) ||
        ((int)plVar3[4] != iVar12)) || (*(int *)((long)plVar3 + 0x24) != iVar5)) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(auStack_2d8,&UNK_10f57af34);
      __ZNSt3__19to_stringEi(&pppuStack_2f0,*(undefined4 *)(plVar19[3] + 8));
      if (-1 < (char)bStack_2d9) {
        uStack_2e8 = (ulong)bStack_2d9;
        pppuStack_2f0 = &pppuStack_2f0;
      }
      puVar14 = auStack_2d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_2f0,uStack_2e8);
      uStack_2b8 = puVar14[1];
      uStack_2c0 = *puVar14;
      uStack_2b0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(auStack_2a8,&uStack_2c0,&DAT_10f68e8ee);
      __ZNSt3__19to_stringEi(&pppuStack_308,*(undefined4 *)(plVar19[3] + 0xc));
      if (-1 < (char)bStack_2f1) {
        uStack_300 = (ulong)bStack_2f1;
        pppuStack_308 = &pppuStack_308;
      }
      puVar14 = auStack_2a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_308,uStack_300);
      uStack_288 = puVar14[1];
      uStack_290 = *puVar14;
      uStack_280 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(auStack_278,&uStack_290,&UNK_10f57af6d);
      __ZNSt3__19to_stringEi(&pppuStack_320,*(undefined4 *)(plVar19[3] + 0x20));
      if (-1 < (char)bStack_309) {
        uStack_318 = (ulong)bStack_309;
        pppuStack_320 = &pppuStack_320;
      }
      puVar14 = auStack_278;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_320,uStack_318);
      uStack_258 = puVar14[1];
      uStack_260 = *puVar14;
      uStack_250 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(auStack_248,&uStack_260,&DAT_10f68e8ee);
      __ZNSt3__19to_stringEi(&pppuStack_338,*(undefined4 *)(plVar19[3] + 0x24));
      if (-1 < (char)bStack_321) {
        uStack_330 = (ulong)bStack_321;
        pppuStack_338 = &pppuStack_338;
      }
      puVar14 = auStack_248;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_338,uStack_330);
      uStack_228 = puVar14[1];
      uStack_230 = *puVar14;
      uStack_220 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(auStack_218,&uStack_230,&UNK_10f57ac5a);
      __ZNSt3__19to_stringEi(&pppuStack_350,*(undefined4 *)(param_1 + 0x230));
      if (-1 < (char)bStack_339) {
        uStack_348 = (ulong)bStack_339;
        pppuStack_350 = &pppuStack_350;
      }
      puVar14 = auStack_218;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_350,uStack_348);
      uStack_1f8 = puVar14[1];
      uStack_200 = *puVar14;
      uStack_1f0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(auStack_1e8,&uStack_200,&DAT_10f68e8ee);
      __ZNSt3__19to_stringEi(&pppuStack_368,*(undefined4 *)(param_1 + 0x234));
      if (-1 < (char)bStack_351) {
        uStack_360 = (ulong)bStack_351;
        pppuStack_368 = &pppuStack_368;
      }
      puVar14 = auStack_1e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar14,pppuStack_368,uStack_360);
      uStack_1c8 = puVar14[1];
      puStack_1d0 = (undefined4 *)*puVar14;
      uStack_1c0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      FUN_109259240(&uStack_1b0,&puStack_1d0,&DAT_10f684600);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar10,&uStack_1b0);
      ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_109663d14;
    }
    if ((*pcVar4 != '\x03') || (pcVar4[1] != '\x03')) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_109663c40;
    }
    if (((long)(int)plVar3[2] != (long)iVar12 * 2) || ((int)plVar3[2] != (int)plVar3[5])) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_109663c40;
    }
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
    uVar8 = *(int *)((long)plVar3 + 0x14) * 8 - 6;
    lStack_1a0 = *plVar3;
    uVar2 = uVar8 & 0xffe;
    uStack_1b0 = CONCAT44(2,uVar2 | 0x42ff0000);
    uStack_170 = (ulong)&uStack_1b0 | 8;
    uStack_1a8 = CONCAT44(iVar12,iVar5);
    lStack_188 = 0;
    lStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_158 = 0;
    lStack_160 = 0;
    lStack_198 = lStack_1a0;
    plStack_168 = &lStack_160;
    if ((long)iVar12 * (long)iVar5 == 0 || lStack_1a0 != 0) {
      uVar8 = (uVar8 >> 2 & 0x3fe) + 2;
      uStack_158 = (ulong)uVar8;
      lStack_160 = (long)(int)uVar8 * (long)iVar12;
      uStack_1b0 = CONCAT44(2,uVar2 | 0x42ff4000);
      lStack_190 = lStack_1a0 + lStack_160 * iVar5;
      lStack_188 = lStack_190;
      if (*(long *)(param_2 + 0x1b00) != 0) {
        piVar1 = (int *)(*(long *)(param_2 + 0x1b00) + 0x14);
        do {
          iVar12 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4((undefined8 *)(param_2 + 0x1ac8));
        }
      }
      *(undefined8 *)(param_2 + 0x1b00) = 0;
      *(undefined8 *)(param_2 + 0x1ae0) = 0;
      *(long *)(param_2 + 0x1ad8) = 0;
      *(undefined8 *)(param_2 + 0x1af0) = 0;
      *(undefined8 *)(param_2 + 0x1ae8) = 0;
      if (0 < *(int *)(param_2 + 0x1acc)) {
        lVar13 = 0;
        lVar17 = *(long *)(param_2 + 0x1b08);
        do {
          *(undefined4 *)(lVar17 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(param_2 + 0x1acc));
      }
      *(undefined8 *)(param_2 + 0x1ad0) = uStack_1a8;
      *(undefined8 *)(param_2 + 0x1ac8) = uStack_1b0;
      *(long *)(param_2 + 0x1ae0) = lStack_198;
      *(long *)(param_2 + 0x1ad8) = lStack_1a0;
      *(long *)(param_2 + 0x1af0) = lStack_188;
      *(long *)(param_2 + 0x1ae8) = lStack_190;
      *(undefined8 *)(param_2 + 0x1b00) = uStack_178;
      *(undefined8 *)(param_2 + 0x1af8) = uStack_180;
      plVar16 = *(long **)(param_2 + 0x1b10);
      plVar3 = (long *)(param_2 + 0x1b18);
      iVar12 = uStack_1b0._4_4_;
      if (plVar16 != plVar3) {
        if (plVar16 != (long *)0x0) {
          _free(plVar16[-1]);
        }
        *(long **)(param_2 + 0x1b10) = plVar3;
        *(long *)(param_2 + 0x1b08) = param_2 + 0x1ad0;
        plVar16 = plVar3;
        iVar12 = uStack_1b0._4_4_;
      }
      if (iVar12 < 3) {
        puVar14 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *plVar16 = *plStack_168;
        plVar16[1] = plStack_168[1];
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0x42ff0000);
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (plStack_168 != &lStack_160) {
          _free(plStack_168[-1]);
        }
      }
      else {
        *(long **)(param_2 + 0x1b10) = plStack_168;
        *(ulong *)(param_2 + 0x1b08) = uStack_170;
      }
      lVar13 = plVar19[3];
      iVar12 = *(int *)(lVar13 + 0x20);
      iVar5 = *(int *)(lVar13 + 0x24);
      uVar8 = *(int *)(lVar13 + 0x2c) * 8 - 6;
      lStack_1a0 = *(long *)(lVar13 + 0x18);
      uVar2 = uVar8 & 0xffe;
      uStack_1b0 = CONCAT44(2,uVar2 | 0x42ff0000);
      uStack_170 = (ulong)&uStack_1b0 | 8;
      uStack_1a8 = CONCAT44(iVar12,iVar5);
      lStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      lStack_198 = lStack_1a0;
      plStack_168 = &lStack_160;
      if (((long)iVar12 * (long)iVar5 != 0) && (lStack_1a0 == 0)) {
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        puStack_1d0 = puVar11 + 1;
        uStack_1c8 = 0x1c;
        *(undefined1 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_1d0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_109663d14;
      }
      uVar8 = (uVar8 >> 2 & 0x3fe) + 2;
      uStack_158 = (ulong)uVar8;
      lStack_160 = (long)(int)uVar8 * (long)iVar12;
      uStack_1b0 = CONCAT44(2,uVar2 | 0x42ff4000);
      lStack_190 = lStack_1a0 + lStack_160 * iVar5;
      lVar13 = *(long *)(param_1 + 0x228);
      lStack_188 = lStack_190;
      if (*(long *)(lVar13 + 0x1b60) != 0) {
        piVar1 = (int *)(*(long *)(lVar13 + 0x1b60) + 0x14);
        do {
          iVar12 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(lVar13 + 0x1b28);
        }
      }
      *(undefined8 *)(lVar13 + 0x1b60) = 0;
      *(undefined8 *)(lVar13 + 0x1b40) = 0;
      *(long *)(lVar13 + 0x1b38) = 0;
      *(undefined8 *)(lVar13 + 0x1b50) = 0;
      *(undefined8 *)(lVar13 + 0x1b48) = 0;
      if (0 < *(int *)(lVar13 + 0x1b2c)) {
        lVar17 = 0;
        lVar18 = *(long *)(lVar13 + 0x1b68);
        do {
          *(undefined4 *)(lVar18 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(lVar13 + 0x1b2c));
      }
      *(undefined8 *)(lVar13 + 0x1b30) = uStack_1a8;
      *(undefined8 *)(lVar13 + 0x1b28) = uStack_1b0;
      *(long *)(lVar13 + 0x1b40) = lStack_198;
      *(long *)(lVar13 + 0x1b38) = lStack_1a0;
      *(long *)(lVar13 + 0x1b50) = lStack_188;
      *(long *)(lVar13 + 0x1b48) = lStack_190;
      *(undefined8 *)(lVar13 + 0x1b60) = uStack_178;
      *(undefined8 *)(lVar13 + 7000) = uStack_180;
      plVar16 = *(long **)(lVar13 + 0x1b70);
      plVar3 = (long *)(lVar13 + 0x1b78);
      iVar12 = uStack_1b0._4_4_;
      if (plVar16 != plVar3) {
        if (plVar16 != (long *)0x0) {
          _free(plVar16[-1]);
        }
        *(long **)(lVar13 + 0x1b70) = plVar3;
        *(long *)(lVar13 + 0x1b68) = lVar13 + 0x1b30;
        plVar16 = plVar3;
        iVar12 = uStack_1b0._4_4_;
      }
      if (iVar12 < 3) {
        puVar14 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *plVar16 = *plStack_168;
        plVar16[1] = plStack_168[1];
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0x42ff0000);
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (plStack_168 != &lStack_160) {
          _free(plStack_168[-1]);
        }
      }
      else {
        *(long **)(lVar13 + 0x1b70) = plStack_168;
        *(ulong *)(lVar13 + 0x1b68) = uStack_170;
      }
      __ZNSt3__19to_stringEi(&uStack_1b0,*(undefined4 *)(param_1 + 0x238));
      lVar13 = *(long *)(param_1 + 0x228);
      if (*(char *)(lVar13 + 0x27) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar13 + 0x10));
      }
      *(undefined8 *)(lVar13 + 0x18) = uStack_1a8;
      *(undefined8 *)(lVar13 + 0x10) = uStack_1b0;
      *(long *)(lVar13 + 0x20) = lStack_1a0;
      lVar13 = *(long *)(param_1 + 0x228);
      *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)(param_1 + 0x238);
      *(undefined1 *)(lVar13 + 0x2c) = 1;
      *(undefined1 *)(lVar13 + 0x135a) = 1;
      iVar12 = *(int *)(param_1 + 0x23c);
      *(int *)(param_1 + 0x23c) = iVar12 + 1;
      *(int *)(lVar13 + 0x340) = iVar12;
      *(float *)(lVar13 + 0xa8) = (float)(double)plVar19[6];
      if (iRam00000001132dfb08 < 5) goto LAB_109663908;
      uStack_70 = 0;
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
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      lStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_198 = 0;
      lStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(&puStack_1d0,&UNK_10f57ae46);
      func_0x000107c31940(auStack_1e8,&UNK_10f576492);
      FUN_109671348(&uStack_1b0,5,&puStack_1d0,auStack_1e8,0x70);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      if (uStack_1c0 < 0) {
        __ZdlPv(puStack_1d0);
      }
      FUN_109671170(&uStack_1b0);
      if (iRam00000001132dfb08 < 5) goto LAB_109663908;
      uStack_70 = 0;
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
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      lStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_198 = 0;
      lStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(&puStack_1d0,&UNK_10f57ae46);
      func_0x000107c31940(auStack_1e8,&UNK_10f576492);
      FUN_109671348(&uStack_1b0,5,&puStack_1d0,auStack_1e8,0x71);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                (*(undefined4 *)(*(long *)(param_1 + 0x228) + 0xa8));
      goto LAB_1096638e0;
    }
  }
  puVar11 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_1d0 = puVar11 + 1;
  uStack_1c8 = 0x1c;
  *(undefined1 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&puStack_1d0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_109663d14:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109663d18);
  (*pcVar9)();
}



/* Entry: 109664010; end: 1096642db;  */

void FUN_109664010(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined4 auStack_128 [2];
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_108 = &uStack_b0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_110 = 0x2010000;
  uStack_100 = 0;
  uStack_fc = 0;
  puStack_68 = &uStack_60;
  FUN_109a41858(0x3f70000000000000,0,*(long *)(param_1 + 0x228) + 0x1ac8,&uStack_110,0);
  uStack_110 = 0x42ff0000;
  puStack_d0 = &uStack_108;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  iStack_10c = 0;
  uStack_108._0_4_ = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  auStack_128[0] = 0x2010000;
  uStack_118 = 0;
  puStack_120 = &uStack_110;
  puStack_c8 = &uStack_c0;
  FUN_109a41858(0x3f70000000000000,0,*(long *)(param_1 + 0x228) + 0x1b28,auStack_128,0);
  auStack_128[0] = 0;
  uVar5 = *(ulong *)(param_2 + 8);
  if (uVar5 < *(ulong *)(param_2 + 0x10)) {
    FUN_109653af0(uVar5,&UNK_10f57ac09,&uStack_b0,auStack_128);
    uVar5 = uVar5 + 0xb0;
    *(ulong *)(param_2 + 8) = uVar5;
  }
  else {
    uVar5 = param_2;
    FUN_109653998(param_2,&UNK_10f57ac09,&uStack_b0,auStack_128);
  }
  *(ulong *)(param_2 + 8) = uVar5;
  auStack_128[0] = 0;
  if (uVar5 < *(ulong *)(param_2 + 0x10)) {
    FUN_109603788(uVar5,&UNK_10f57afdd,&uStack_110,auStack_128);
    uVar5 = uVar5 + 0xb0;
    *(ulong *)(param_2 + 8) = uVar5;
  }
  else {
    uVar5 = param_2;
    FUN_109603630(param_2,&UNK_10f57afdd,&uStack_110,auStack_128);
  }
  *(ulong *)(param_2 + 8) = uVar5;
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
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
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (0 < iStack_10c) {
    lVar6 = 0;
    do {
      *(undefined4 *)((long)puStack_d0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_10c);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
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
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 1096642dc; end: 10966486f;  */

void FUN_1096642dc(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined4 *puStack_68;
  
  puStack_80 = (undefined1 *)&uStack_f0;
  if (0.5 < *(float *)(param_1 + 0x20)) {
    uStack_f0 = 0x42ff0000;
    uStack_e4 = 0;
    uStack_e0 = 0;
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0x2010000;
    lStack_78 = 0;
    uStack_b0 = (ulong)&uStack_f0 | 8;
    puStack_a8 = &uStack_a0;
    FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1ac8,&uStack_88);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_88,uVar2 + 9,&puStack_68);
    puVar3 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
    if (-1 < lStack_78) {
      puVar3 = &uStack_88;
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar8 = param_1 + 8;
      }
      _memmove(puVar3,lVar8,uVar2);
    }
    *(undefined8 *)((long)puVar3 + uVar2) = 0x497466654c64705f;
    *(undefined2 *)((undefined8 *)((long)puVar3 + uVar2) + 1) = 0x6e;
    puStack_68 = &uStack_88;
    lVar8 = param_2;
    FUN_1095ff978(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    if (*(long *)(lVar8 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar8 + 0x28);
      }
    }
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    if (0 < *(int *)(lVar8 + 0x2c)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x68);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 0x2c));
    }
    *(ulong *)(lVar8 + 0x30) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(lVar8 + 0x28) = CONCAT44(iStack_ec,uStack_f0);
    *(ulong *)(lVar8 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
    *(ulong *)(lVar8 + 0x50) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(lVar8 + 0x48) = CONCAT44(uStack_cc,uStack_d0);
    *(long *)(lVar8 + 0x60) = lStack_b8;
    *(ulong *)(lVar8 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
    puVar10 = *(undefined8 **)(lVar8 + 0x70);
    puVar11 = (undefined8 *)(lVar8 + 0x78);
    if (puVar10 != puVar11) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      *(long *)(lVar8 + 0x68) = lVar8 + 0x30;
      *(undefined8 **)(lVar8 + 0x70) = puVar11;
      puVar10 = puVar11;
    }
    puVar11 = (undefined8 *)((ulong)&uStack_f0 | 4);
    if (iStack_ec < 3) {
      *puVar10 = *puStack_a8;
      puVar10[1] = puStack_a8[1];
    }
    else {
      *(ulong *)(lVar8 + 0x68) = uStack_b0;
      *(undefined8 **)(lVar8 + 0x70) = puStack_a8;
      uStack_b0 = (ulong)&uStack_f0 | 8;
      puStack_a8 = &uStack_a0;
    }
    uStack_f0 = 0x42ff0000;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    *(undefined8 *)((long)puVar11 + 0x34) = 0;
    *(undefined8 *)((long)puVar11 + 0x2c) = 0;
    if (lStack_78 < 0) {
      __ZdlPv(CONCAT44(uStack_84,uStack_88));
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      if (0 < iStack_ec) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ec);
      }
    }
    lStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    uStack_e0 = 0;
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
    uStack_f0 = 0x42ff0000;
    uStack_e4 = 0;
    uStack_e0 = 0;
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0x2010000;
    lStack_78 = 0;
    uStack_b0 = (ulong)&uStack_f0 | 8;
    puStack_a8 = &uStack_a0;
    puStack_80 = (undefined1 *)&uStack_f0;
    FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1b28,&uStack_88);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_88,uVar2 + 10,&puStack_68);
    puVar3 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
    if (-1 < lStack_78) {
      puVar3 = &uStack_88;
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar8 = param_1 + 8;
      }
      _memmove(puVar3,lVar8,uVar2);
    }
    puVar11 = (undefined8 *)((long)puVar3 + uVar2);
    *puVar11 = 0x746867695264705f;
    *(undefined2 *)(puVar11 + 1) = 0x6e49;
    *(undefined1 *)((long)puVar11 + 10) = 0;
    puStack_68 = &uStack_88;
    FUN_1095ff978(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    if (*(long *)(param_2 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x28);
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar8 = 0;
      lVar7 = *(long *)(param_2 + 0x68);
      do {
        *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_2 + 0x2c));
    }
    *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(param_2 + 0x28) = CONCAT44(iStack_ec,uStack_f0);
    *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
    *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_cc,uStack_d0);
    *(long *)(param_2 + 0x60) = lStack_b8;
    *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
    puVar10 = *(undefined8 **)(param_2 + 0x70);
    puVar11 = (undefined8 *)(param_2 + 0x78);
    if (puVar10 != puVar11) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      *(long *)(param_2 + 0x68) = param_2 + 0x30;
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar10 = puVar11;
    }
    puVar11 = (undefined8 *)((ulong)&uStack_f0 | 4);
    if (iStack_ec < 3) {
      *puVar10 = *puStack_a8;
      puVar10[1] = puStack_a8[1];
    }
    else {
      *(ulong *)(param_2 + 0x68) = uStack_b0;
      *(undefined8 **)(param_2 + 0x70) = puStack_a8;
      uStack_b0 = (ulong)&uStack_f0 | 8;
      puStack_a8 = &uStack_a0;
    }
    uStack_f0 = 0x42ff0000;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    *(undefined8 *)((long)puVar11 + 0x34) = 0;
    *(undefined8 *)((long)puVar11 + 0x2c) = 0;
    if (lStack_78 < 0) {
      __ZdlPv(CONCAT44(uStack_84,uStack_88));
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      if (0 < iStack_ec) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ec);
      }
    }
    lStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    uStack_e0 = 0;
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
  }
  return;
}



/* Entry: 109664870; end: 1096648e7;  */

undefined8 * FUN_109664870(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1096648e8; end: 109664def;  */

undefined8 FUN_1096648e8(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  long **pplVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined4 *puStack_2e8;
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
  ulong uStack_1b0;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long lStack_150;
  undefined4 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  undefined4 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [4];
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  int *piStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  FUN_109670e04(auStack_c8,param_2,0xffffffff);
  if (lStack_b8 != 0) {
    uVar6 = (ulong)uStack_c4;
    if ((int)uStack_c4 < 3) {
      lVar7 = (long)iStack_bc * (long)iStack_c0;
    }
    else {
      lVar7 = 1;
      piVar8 = piStack_88;
      do {
        lVar7 = lVar7 * *piVar8;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 != 0);
    }
    if (lVar7 != 0) {
      uStack_128 = 0x42ff0000;
      puStack_2e8 = &uStack_128;
      puStack_e8 = &uStack_120;
      uStack_11c = 0;
      uStack_118 = 0;
      iStack_124 = 0;
      uStack_120 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      iStack_114 = 0;
      uStack_110 = 0;
      uStack_fc = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      lStack_f0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_188 = 0x42ff0000;
      puStack_148 = &uStack_180;
      uStack_17c = 0;
      uStack_178 = 0;
      iStack_184 = 0;
      uStack_180 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      iStack_174 = 0;
      uStack_170 = 0;
      uStack_15c = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      lStack_150 = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,0x2010000);
      uStack_2e0 = 0;
      puStack_140 = &uStack_138;
      puStack_e0 = &uStack_d8;
      FUN_109a41858(1.0 / (double)*(float *)(param_1 + 0xc0),0,auStack_c8,&plStack_2f0,5);
      uStack_310 = 0x3ff0000000000000;
      lStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      FUN_109a7cf94(&plStack_2f0,&uStack_310,&uStack_128);
      (**(code **)(*plStack_2f0 + 0x18))(plStack_2f0,&plStack_2f0,&uStack_188,0xffffffff);
      pplVar4 = &plStack_2f0;
      FUN_10918eb6c(pplVar4);
      plStack_2f0._0_4_ = 0x1010000;
      puStack_2e8 = &uStack_128;
      uStack_2e0 = 0;
      uStack_310._0_4_ = 0x2010000;
      uStack_300 = 0;
      uStack_68 = 0x3fe0000000000000;
      lStack_308 = param_1;
      FUN_109a91d90();
      pplVar5 = &plStack_2f0;
      FUN_109a293c4(pplVar5,&plStack_2f0,&uStack_310,pplVar4,0xffffffff,&PTR_DAT_1132e8d10,1,
                    &uStack_68);
      plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,0x1010000);
      puStack_2e8 = &uStack_188;
      uStack_2e0 = 0;
      lStack_308 = param_1 + 0x60;
      uStack_310 = CONCAT44(uStack_310._4_4_,0x2010000);
      uStack_300 = 0;
      uStack_68 = 0x3fe0000000000000;
      FUN_109a91d90();
      FUN_109a293c4(&plStack_2f0,&plStack_2f0,&uStack_310,pplVar5,0xffffffff,&PTR_DAT_1132e8d10,1,
                    &uStack_68);
      if (lStack_150 != 0) {
        piVar8 = (int *)(lStack_150 + 0x14);
        do {
          iVar1 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_188);
        }
      }
      lStack_150 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_178 = 0;
      iStack_174 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      if (0 < iStack_184) {
        lVar7 = 0;
        do {
          puStack_148[lVar7] = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_184);
      }
      if (puStack_140 != &uStack_138 && puStack_140 != (undefined8 *)0x0) {
        _free(puStack_140[-1]);
      }
      if (lStack_f0 != 0) {
        piVar8 = (int *)(lStack_f0 + 0x14);
        do {
          iVar1 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_128);
        }
      }
      lStack_f0 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_118 = 0;
      iStack_114 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      if (0 < iStack_124) {
        lVar7 = 0;
        do {
          puStack_e8[lVar7] = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_124);
      }
      if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
        _free(puStack_e0[-1]);
      }
      uVar9 = 1;
      goto LAB_109664cbc;
    }
  }
  if (0 < iRam00000001132dfb08) {
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
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
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_2e8 = (undefined4 *)0x0;
    plStack_2f0 = (long *)0x0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    FUN_10926db08(&plStack_2f0);
    uStack_1e8 = CONCAT44(uStack_1e8._4_4_,3);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_128,&UNK_10f57b001);
    func_0x000107c31940(&uStack_188,&UNK_10f57b07d);
    FUN_109671348(&plStack_2f0,1,&uStack_128,&uStack_188,7);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    if (iStack_174 < 0) {
      __ZdlPv(CONCAT44(iStack_184,uStack_188));
    }
    if (iStack_114 < 0) {
      __ZdlPv(CONCAT44(iStack_124,uStack_128));
    }
    FUN_109671170(&plStack_2f0);
  }
  uVar9 = 0;
LAB_109664cbc:
  if (lStack_90 != 0) {
    piVar8 = (int *)(lStack_90 + 0x14);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < (int)uStack_c4) {
    lVar7 = 0;
    do {
      piStack_88[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_c4);
  }
  if (puStack_80 != auStack_78 && puStack_80 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_80 + -8));
  }
  return uVar9;
}



/* Entry: 109664df0; end: 10966543f;  */

undefined8 FUN_109664df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  long lStack_368;
  ulong uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  int iStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 auStack_2d8 [2];
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined4 auStack_2c0 [2];
  undefined4 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
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
  long lStack_270;
  undefined4 *puStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined4 uStack_e8;
  int iStack_e4;
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
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *apcStack_88 [3];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 4);
    if ((int)*(uint *)(param_1 + 4) < 3) {
      lVar8 = (long)*(int *)(param_1 + 0xc) * (long)*(int *)(param_1 + 8);
    }
    else {
      lVar8 = 1;
      piVar9 = *(int **)(param_1 + 0x40);
      do {
        lVar8 = lVar8 * *piVar9;
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar6 != 0);
    }
    if ((lVar8 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      uVar6 = (ulong)*(uint *)(param_1 + 100);
      if ((int)*(uint *)(param_1 + 100) < 3) {
        lVar8 = (long)*(int *)(param_1 + 0x6c) * (long)*(int *)(param_1 + 0x68);
      }
      else {
        lVar8 = 1;
        piVar9 = *(int **)(param_1 + 0xa0);
        do {
          lVar8 = lVar8 * *piVar9;
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 1;
        } while (uVar6 != 0);
      }
      if (lVar8 != 0) {
        uStack_340 = 0x42ff0000;
        uVar6 = (ulong)&uStack_340 | 8;
        uStack_334 = 0;
        uStack_330 = 0;
        iStack_33c = 0;
        uStack_338 = 0;
        uStack_324 = 0;
        uStack_320 = 0;
        uStack_32c = 0;
        uStack_328 = 0;
        uStack_314 = 0;
        uStack_31c = 0;
        uStack_318 = 0;
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_30c = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_300 = uVar6;
        puStack_2f8 = &uStack_2f0;
        if (*(char *)(param_1 + 200) == '\x01') {
          FUN_109a7ea0c(&uStack_248,(double)*(int *)(param_1 + 0xd0),param_2);
          uStack_e8 = 0x42ff0000;
          puStack_a8 = &uStack_e0;
          uStack_e0._4_4_ = 0;
          uStack_d8 = 0;
          iStack_e4 = 0;
          uStack_e0._0_4_ = 0;
          lStack_b0 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          puStack_a0 = &uStack_98;
          (**(code **)(*(long *)CONCAT44(uStack_244,uStack_248) + 0x18))
                    ((long *)CONCAT44(uStack_244,uStack_248),&uStack_248,&uStack_e8,0xffffffff);
          puVar5 = &uStack_248;
          FUN_10918eb6c(puVar5);
          uStack_2a8._0_4_ = 0x42ff0000;
          puStack_2d0 = &uStack_2a8;
          puStack_268 = &uStack_2a0;
          uStack_29c = 0;
          uStack_298 = 0;
          uStack_2a8._4_4_ = 0;
          uStack_2a0 = 0;
          uStack_28c = 0;
          uStack_288 = 0;
          uStack_294 = 0;
          uStack_290 = 0;
          uStack_27c = 0;
          uStack_284 = 0;
          uStack_280 = 0;
          lStack_270 = 0;
          uStack_278 = 0;
          uStack_274 = 0;
          uStack_258 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_248 = 0x1010000;
          uStack_2b0 = 0;
          auStack_2c0[0] = 0x1010000;
          auStack_2d8[0] = 0x2010000;
          uStack_2c8 = 0;
          puStack_2b8 = (undefined4 *)param_3;
          puStack_260 = &uStack_258;
          puStack_240 = (undefined8 *)param_2;
          FUN_109a91d90();
          FUN_109a293c4(&uStack_248,auStack_2c0,auStack_2d8,puVar5,4,&PTR_FUN_1132e8bd0,0,0);
          uStack_3a0._0_4_ = 0x42ff0000;
          uStack_360 = (ulong)&uStack_3a0 | 8;
          uStack_394 = 0;
          uStack_390 = 0;
          uStack_3a0._4_4_ = 0;
          uStack_398 = 0;
          uStack_384 = 0;
          uStack_380 = 0;
          uStack_38c = 0;
          uStack_388 = 0;
          uStack_374 = 0;
          uStack_37c = 0;
          uStack_378 = 0;
          lStack_368 = 0;
          uStack_370 = 0;
          uStack_36c = 0;
          uStack_350 = 0;
          uStack_348 = 0;
          puStack_358 = &uStack_350;
          FUN_109a7ea0c(&uStack_248,(double)(*(int *)(param_1 + 0xc4) + *(int *)(param_1 + 0xcc)),
                        &uStack_2a8);
          (**(code **)(*(long *)CONCAT44(uStack_244,uStack_248) + 0x18))
                    ((long *)CONCAT44(uStack_244,uStack_248),&uStack_248,&uStack_3a0,0xffffffff);
          puVar5 = &uStack_248;
          FUN_10918eb6c(puVar5);
          uStack_238 = 0;
          uStack_248 = 0x1010000;
          uStack_2b0 = 0;
          auStack_2c0[0] = 0x1010000;
          puStack_2b8 = &uStack_e8;
          auStack_2d8[0] = 0x2010000;
          uStack_2c8 = 0;
          puStack_2d0 = &uStack_3a0;
          puStack_240 = &uStack_3a0;
          FUN_109a91d90();
          apcStack_88[0] = FUN_109a28f7c;
          FUN_109a279fc(&uStack_248,auStack_2c0,auStack_2d8,puVar5,apcStack_88,1,10);
          if (lStack_270 != 0) {
            piVar9 = (int *)(lStack_270 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_2a8);
            }
          }
          lStack_270 = 0;
          uStack_290 = 0;
          uStack_28c = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          uStack_280 = 0;
          uStack_27c = 0;
          uStack_288 = 0;
          uStack_284 = 0;
          if (0 < uStack_2a8._4_4_) {
            lVar8 = 0;
            do {
              puStack_268[lVar8] = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < uStack_2a8._4_4_);
          }
          if (puStack_260 != &uStack_258 && puStack_260 != (undefined8 *)0x0) {
            _free(puStack_260[-1]);
          }
          if (lStack_b0 != 0) {
            piVar9 = (int *)(lStack_b0 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          lStack_b0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < iStack_e4) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_a8 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iStack_e4);
          }
          if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
            _free(puStack_a0[-1]);
          }
          if (lStack_308 != 0) {
            piVar9 = (int *)(lStack_308 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_340);
            }
          }
          if (0 < iStack_33c) {
            lVar8 = 0;
            do {
              *(undefined4 *)(uStack_300 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iStack_33c);
          }
          uStack_338 = uStack_398;
          uStack_334 = uStack_394;
          uStack_340 = (undefined4)uStack_3a0;
          iStack_33c = uStack_3a0._4_4_;
          uStack_328 = uStack_388;
          uStack_324 = uStack_384;
          uStack_330 = uStack_390;
          uStack_32c = uStack_38c;
          uStack_318 = uStack_378;
          uStack_314 = uStack_374;
          uStack_320 = uStack_380;
          uStack_31c = uStack_37c;
          lStack_308 = lStack_368;
          uStack_310 = uStack_370;
          uStack_30c = uStack_36c;
          uVar4 = uStack_300;
          puVar7 = puStack_2f8;
          if ((puStack_2f8 != &uStack_2f0) &&
             (uVar4 = uVar6, puVar7 = &uStack_2f0, puStack_2f8 != (undefined8 *)0x0)) {
            _free(puStack_2f8[-1]);
          }
          puStack_2f8 = puVar7;
          uStack_300 = uVar4;
          if (uStack_3a0._4_4_ < 3) {
            puVar7 = (undefined8 *)((ulong)&uStack_3a0 | 4);
            *puStack_2f8 = *puStack_358;
            puStack_2f8[1] = puStack_358[1];
            uStack_3a0._0_4_ = 0x42ff0000;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[3] = 0;
            puVar7[2] = 0;
            puVar7[5] = 0;
            puVar7[4] = 0;
            *(undefined8 *)((long)puVar7 + 0x34) = 0;
            *(undefined8 *)((long)puVar7 + 0x2c) = 0;
            if (puStack_358 != &uStack_350) {
              _free(puStack_358[-1]);
            }
          }
          else {
            uStack_300 = uStack_360;
            puStack_2f8 = puStack_358;
          }
        }
        FUN_109665440(param_1,param_2,param_1);
        FUN_109665440(param_1,param_3,param_1 + 0x60);
        if (*(char *)(param_1 + 200) == '\x01') {
          uStack_2a8 = (double)*(int *)(param_1 + 0xd4);
          uStack_248 = 0xc1020006;
          uStack_238 = 0x100000001;
          uStack_e8 = 0x1010000;
          uStack_d8 = 0;
          uStack_d4 = 0;
          puStack_240 = &uStack_2a8;
          uStack_e0 = &uStack_340;
          FUN_109a48a40(param_2,&uStack_248,&uStack_e8);
          uStack_2a8 = (double)*(int *)(param_1 + 0xd4);
          uStack_248 = 0xc1020006;
          uStack_238 = 0x100000001;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e8 = 0x1010000;
          puStack_240 = &uStack_2a8;
          uStack_e0 = &uStack_340;
          FUN_109a48a40(param_3,&uStack_248,&uStack_e8);
        }
        if (lStack_308 != 0) {
          piVar9 = (int *)(lStack_308 + 0x14);
          do {
            iVar1 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_340);
          }
        }
        lStack_308 = 0;
        uStack_328 = 0;
        uStack_324 = 0;
        uStack_330 = 0;
        uStack_32c = 0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_320 = 0;
        uStack_31c = 0;
        if (0 < iStack_33c) {
          lVar8 = 0;
          do {
            *(undefined4 *)(uStack_300 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < iStack_33c);
        }
        if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
          _free(puStack_2f8[-1]);
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 109665440; end: 109665843;  */

void FUN_109665440(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ****ppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 ****ppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  uint *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  uint *puStack_50;
  undefined8 uStack_48;
  
  if ((*(int **)(param_2 + 0x10))[1] != (*(int **)(param_3 + 0x40))[1] ||
      **(int **)(param_2 + 0x10) != **(int **)(param_3 + 0x40)) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(auStack_118,param_2[3]);
    FUN_10928a5e0(auStack_100,&UNK_10f57b0cf,auStack_118);
    FUN_109259240(auStack_e8,auStack_100,&DAT_10f68f19e);
    __ZNSt3__19to_stringEi(&ppppuStack_130,param_2[2]);
    if (-1 < (char)bStack_119) {
      uStack_128 = (ulong)bStack_119;
      ppppuStack_130 = &ppppuStack_130;
    }
    puVar5 = auStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,ppppuStack_130,uStack_128);
    uStack_c8 = puVar5[1];
    uStack_d0 = *puVar5;
    uStack_c0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109259240(auStack_b8,&uStack_d0,&UNK_10f57b11e);
    __ZNSt3__19to_stringEi(&ppppuStack_148,*(undefined4 *)(param_3 + 0xc));
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      ppppuStack_148 = &ppppuStack_148;
    }
    puVar5 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,ppppuStack_148,uStack_140);
    uStack_98 = puVar5[1];
    uStack_a0 = *puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109259240(auStack_88,&uStack_a0,&DAT_10f68f19e);
    __ZNSt3__19to_stringEi(&puStack_160,*(undefined4 *)(param_3 + 8));
    if (-1 < (char)bStack_149) {
      uStack_158 = (ulong)bStack_149;
      puStack_160 = (undefined1 *)&puStack_160;
    }
    puVar5 = (undefined8 *)auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_160,uStack_158);
    lStack_68 = puVar5[1];
    uStack_70 = *puVar5;
    uStack_60 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109259240(auStack_58,&uStack_70,&DAT_10f684600);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar4,auStack_58);
    ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1096656d4);
    (*pcVar2)();
  }
  uVar1 = *param_2;
  auStack_58[0] = 0x2010000;
  uStack_48 = 0;
  puVar3 = param_2;
  puStack_50 = param_2;
  FUN_109a41858(0x3ff0000000000000,-(double)*(int *)(param_1 + 0xc4),param_2,auStack_58,5);
  uStack_48 = 0;
  auStack_58[0] = 0x1010000;
  uStack_60 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0x1010000);
  auStack_88[0] = 0x2010000;
  uStack_78 = 0;
  uStack_a0 = 0x3ff0000000000000;
  puStack_80 = param_2;
  lStack_68 = param_3;
  puStack_50 = param_2;
  FUN_109a91d90();
  FUN_109a293c4(auStack_58,&uStack_70,auStack_88,puVar3,0xffffffff,&PTR_FUN_1132e8c90,1,&uStack_a0);
  auStack_58[0] = 0x2010000;
  uStack_48 = 0;
  puStack_50 = param_2;
  FUN_109a41858(0x3ff0000000000000,(double)*(int *)(param_1 + 0xc4),param_2,auStack_58,uVar1 & 0xfff
               );
  return;
}



/* Entry: 109665844; end: 109665af7;  */

undefined8 *
FUN_109665844(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  undefined8 auStack_288 [2];
  char cStack_271;
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
  ulong uStack_130;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  short sStack_f4;
  undefined2 uStack_f2;
  char cStack_e1;
  undefined8 uStack_68;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1 + 1;
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar7,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar9;
    *puVar7 = uVar8;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = &PTR_FUN_110b00618;
  puVar6 = param_1 + 0x45;
  func_0x000107c31940(puVar6,"");
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = param_1 + 0x4a;
  param_1[0x52] = param_1 + 0x53;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = param_1 + 0x56;
  param_1[0x5e] = param_1 + 0x5f;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  uVar9 = param_4[1];
  uVar8 = *param_4;
  param_1[99] = param_4[2];
  param_1[0x62] = uVar9;
  param_1[0x61] = uVar8;
  plVar4 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar4 = param_3;
  }
  _stat(plVar4,&uStack_f8);
  if (((int)plVar4 == -1) || (-1 < sStack_f4)) {
    uVar1 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    func_0x000104c4f768(&uStack_f8,uVar1 + 1,&uStack_f9);
    puVar2 = (undefined4 *)CONCAT26(uStack_f2,CONCAT24(sStack_f4,uStack_f8));
    if (-1 < cStack_e1) {
      puVar2 = &uStack_f8;
    }
    if (uVar1 != 0) {
      plVar4 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar4 = param_3;
      }
      _memmove(puVar2,plVar4,uVar1);
    }
    *(undefined2 *)((long)puVar2 + uVar1) = 0x2f;
    puVar5 = (undefined8 *)&uStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&UNK_10f57b138,0x17);
    puVar7 = &uStack_68;
    uVar8 = *puVar5;
    uStack_68._0_7_ = (undefined7)puVar5[1];
    uStack_68._7_1_ = (undefined1)*(undefined8 *)((long)puVar5 + 0xf);
    uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)puVar5 + 0xf) >> 8);
    uVar3 = *(undefined1 *)((long)puVar5 + 0x17);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    if (*(char *)((long)param_1 + 0x23f) < '\0') {
      puVar5 = (undefined8 *)*puVar6;
      __ZdlPv();
    }
    param_1[0x45] = uVar8;
    param_1[0x46] = CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
    *(ulong *)((long)param_1 + 0x237) = CONCAT71(uStack_60,uStack_68._7_1_);
    *(undefined1 *)((long)param_1 + 0x23f) = uVar3;
    if (cStack_e1 < '\0') {
      puVar5 = (undefined8 *)CONCAT26(uStack_f2,CONCAT24(sStack_f4,uStack_f8));
      __ZdlPv();
    }
  }
  else {
    puVar5 = puVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar6,param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_e1 < '\0') {
    __ZdlPv(CONCAT26(uStack_f2,CONCAT24(sStack_f4,uStack_f8)));
  }
  FUN_109666984(param_1 + 0x49);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(*puVar6);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*puVar7);
  }
  __Unwind_Resume();
  pcStack_108 = FUN_109665af8;
  puVar6 = puVar5 + 0x49;
  puStack_120 = puVar7;
  puStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_1096648e8(puVar6,puVar5 + 0x45);
  if ((((ulong)puVar6 & 1) == 0) && (2 < iRam00000001132dfb08)) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
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
    FUN_10926db08(&uStack_270);
    uStack_168 = CONCAT44(uStack_168._4_4_,3);
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_130 = uStack_130 & 0xffffffff00000000;
    func_0x000107c31940(auStack_288,&UNK_10f57b150);
    func_0x000107c31940(auStack_2a0,&UNK_10f500fc6);
    FUN_109671348(&uStack_270,3,auStack_288,auStack_2a0,0x26);
    FUN_1092b4db8();
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
    }
    if (cStack_271 < '\0') {
      __ZdlPv(auStack_288[0]);
    }
    FUN_109671170(&uStack_270);
  }
  return (undefined8 *)0x1;
}



/* Entry: 109665af8; end: 109665c43;  */

undefined8 FUN_109665af8(long param_1)

{
  ulong uVar1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
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
  ulong uStack_30;
  
  uVar1 = param_1 + 0x248;
  FUN_1096648e8(uVar1,param_1 + 0x228);
  if (((uVar1 & 1) == 0) && (2 < iRam00000001132dfb08)) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
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
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f57b150);
    func_0x000107c31940(auStack_1a0,&UNK_10f500fc6);
    FUN_109671348(&uStack_170,3,auStack_188,auStack_1a0,0x26);
    FUN_1092b4db8();
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
    if (cStack_171 < '\0') {
      __ZdlPv(auStack_188[0]);
    }
    FUN_109671170(&uStack_170);
  }
  return 1;
}



/* Entry: 109665c44; end: 109665ddb;  */

bool FUN_109665c44(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  if ((param_2 == 0) && (*(float *)(param_1 + 0x20) = (float)*param_3, 4 < iRam00000001132dfb08)) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f57b150);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x33);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
    }
    FUN_109671170(&uStack_180);
  }
  return param_2 == 0;
}



/* Entry: 109665ddc; end: 109665e8b;  */

long ** FUN_109665ddc(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [4];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long *plStack_88;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110afeb40,&PTR_DAT_110afeb50,0);
    *(long *)(param_1 + 0x240) = param_2;
    if (param_2 != 0) {
      FUN_109664df0(param_1 + 0x248,param_2 + 0x1ac8,param_2 + 0x1b28);
      return (long **)0x1;
    }
  }
  lVar6 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar11 = lVar6;
  plVar8 = (long *)PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar6,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar6);
  __Unwind_Resume();
  auStack_108._0_4_ = 0x42ff0000;
  uStack_fc = 0;
  uStack_f8 = 0;
  stack0xfffffffffffffefc = 0;
  uStack_160 = auStack_108;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  puStack_c8 = auStack_100;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_168 = 0x2010000;
  uStack_158 = 0;
  uStack_154 = 0;
  puStack_c0 = &uStack_b8;
  FUN_109a41858(0x3f70101010101010,0,*(long *)(lVar11 + 0x240) + 0x1ac8,&uStack_168,0);
  uStack_168 = 0x42ff0000;
  puStack_128 = &uStack_160;
  uStack_160._4_4_ = 0;
  uStack_158 = 0;
  iStack_164 = 0;
  uStack_160._0_4_ = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_13c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  lStack_130 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,0x2010000);
  pplStack_98 = (long **)0x0;
  puStack_120 = &uStack_118;
  plStack_a0 = (long *)&uStack_168;
  FUN_109a41858(0x3f70101010101010,0,*(long *)(lVar11 + 0x240) + 0x1b28,&plStack_a8,0);
  uStack_16c = 0;
  uVar13 = plVar8[1];
  if (uVar13 < (ulong)plVar8[2]) {
    FUN_109666a9c(uVar13,auStack_108,&uStack_16c);
    pplVar10 = (long **)(uVar13 + 0xb0);
    plVar8[1] = (long)pplVar10;
  }
  else {
    lVar11 = uVar13 - *plVar8;
    uVar13 = (lVar11 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x1745d1745d1745d < uVar13) {
      FUN_1095ff464();
      goto LAB_1096662d8;
    }
    lVar6 = plVar8[2] - *plVar8 >> 4;
    uVar12 = lVar6 * 0x5d1745d1745d1746;
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      uVar12 = uVar13;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar12 = 0x1745d1745d1745d;
    }
    if (uVar12 == 0) {
      plVar9 = (long *)0x0;
      plStack_88 = plVar8;
    }
    else {
      plVar9 = plVar8;
      plStack_88 = plVar8;
      FUN_1095ff478();
    }
    lVar11 = (long)plVar9 + lVar11;
    plStack_90 = plVar9 + uVar12 * 0x16;
    plStack_a8 = plVar9;
    plStack_a0 = (long *)lVar11;
    pplStack_98 = (long **)lVar11;
    FUN_109666a9c(lVar11,auStack_108,&uStack_16c);
    pplStack_98 = (long **)(lVar11 + 0xb0);
    lVar11 = lVar11 + (*plVar8 - plVar8[1]);
    FUN_1095ff4c0(plVar8,*plVar8,plVar8[1],lVar11);
    pplVar10 = pplStack_98;
    plStack_a8 = (long *)*plVar8;
    *plVar8 = lVar11;
    lVar11 = plVar8[2];
    plVar8[2] = (long)plStack_90;
    plVar8[1] = (long)pplStack_98;
    plStack_a0 = plStack_a8;
    pplStack_98 = (long **)plStack_a8;
    plStack_90 = (long *)lVar11;
    FUN_1095ff754(&plStack_a8);
  }
  plVar8[1] = (long)pplVar10;
  uStack_16c = 0;
  if (pplVar10 < (long **)plVar8[2]) {
    pplVar7 = pplVar10;
    FUN_109666b78(pplVar10,&uStack_168,&uStack_16c);
    pplVar10 = pplVar10 + 0x16;
    plVar8[1] = (long)pplVar10;
  }
  else {
    lVar11 = (long)pplVar10 - *plVar8;
    uVar13 = (lVar11 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x1745d1745d1745d < uVar13) {
      FUN_1095ff464();
LAB_1096662d8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1096662dc);
      (*pcVar5)();
    }
    lVar6 = plVar8[2] - *plVar8 >> 4;
    uVar12 = lVar6 * 0x5d1745d1745d1746;
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      uVar12 = uVar13;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar12 = 0x1745d1745d1745d;
    }
    if (uVar12 == 0) {
      plVar9 = (long *)0x0;
      plStack_88 = plVar8;
    }
    else {
      plVar9 = plVar8;
      plStack_88 = plVar8;
      FUN_1095ff478();
    }
    lVar11 = (long)plVar9 + lVar11;
    plStack_90 = plVar9 + uVar12 * 0x16;
    plStack_a8 = plVar9;
    plStack_a0 = (long *)lVar11;
    pplStack_98 = (long **)lVar11;
    FUN_109666b78(lVar11,&uStack_168,&uStack_16c);
    pplStack_98 = (long **)(lVar11 + 0xb0);
    lVar11 = lVar11 + (*plVar8 - plVar8[1]);
    FUN_1095ff4c0(plVar8,*plVar8,plVar8[1],lVar11);
    pplVar10 = pplStack_98;
    plStack_a8 = (long *)*plVar8;
    *plVar8 = lVar11;
    lVar11 = plVar8[2];
    plVar8[2] = (long)plStack_90;
    plVar8[1] = (long)pplStack_98;
    pplVar7 = &plStack_a8;
    plStack_a0 = plStack_a8;
    pplStack_98 = (long **)plStack_a8;
    plStack_90 = (long *)lVar11;
    FUN_1095ff754(pplVar7);
  }
  plVar8[1] = (long)pplVar10;
  if (lStack_130 != 0) {
    piVar1 = (int *)(lStack_130 + 0x14);
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
      pplVar7 = (long **)&uStack_168;
      func_0x000109a848d4(pplVar7);
    }
  }
  lStack_130 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  if (0 < iStack_164) {
    lVar11 = 0;
    do {
      *(undefined4 *)((long)puStack_128 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_164);
  }
  if (puStack_120 != &uStack_118 && puStack_120 != (undefined8 *)0x0) {
    pplVar7 = (long **)puStack_120[-1];
    _free(pplVar7);
  }
  if (lStack_d0 != 0) {
    piVar1 = (int *)(lStack_d0 + 0x14);
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
      pplVar7 = (long **)auStack_108;
      func_0x000109a848d4(pplVar7);
    }
  }
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  if (0 < (int)auStack_108._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(puStack_c8 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)auStack_108._4_4_);
  }
  if (puStack_c0 != &uStack_b8 && puStack_c0 != (undefined8 *)0x0) {
    pplVar7 = (long **)puStack_c0[-1];
    _free(pplVar7);
  }
  return pplVar7;
}



/* Entry: 109665e8c; end: 109666337;  */

void FUN_109665e8c(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
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
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  uStack_e8 = 0x42ff0000;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_140 = &uStack_e8;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  lStack_a8 = (long)&uStack_e4 + 4;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_148 = 0x2010000;
  uStack_138 = 0;
  uStack_134 = 0;
  puStack_a0 = &uStack_98;
  FUN_109a41858(0x3f70101010101010,0,*(long *)(param_1 + 0x240) + 0x1ac8,&uStack_148,0);
  uStack_148 = 0x42ff0000;
  puStack_108 = &uStack_140;
  uStack_140._4_4_ = 0;
  uStack_138 = 0;
  iStack_144 = 0;
  uStack_140._0_4_ = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  lStack_110 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x2010000);
  plStack_78 = (long *)0x0;
  puStack_100 = &uStack_f8;
  plStack_80 = (long *)&uStack_148;
  FUN_109a41858(0x3f70101010101010,0,*(long *)(param_1 + 0x240) + 0x1b28,&plStack_88,0);
  uStack_14c = 0;
  uVar10 = param_2[1];
  if (uVar10 < (ulong)param_2[2]) {
    FUN_109666a9c(uVar10,&uStack_e8,&uStack_14c);
    plVar6 = (long *)(uVar10 + 0xb0);
    param_2[1] = (long)plVar6;
  }
  else {
    lVar7 = uVar10 - *param_2;
    uVar10 = (lVar7 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x1745d1745d1745d < uVar10) {
      FUN_1095ff464();
      goto LAB_1096662d8;
    }
    lVar8 = param_2[2] - *param_2 >> 4;
    uVar9 = lVar8 * 0x5d1745d1745d1746;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      uVar9 = uVar10;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x1745d1745d1745d;
    }
    if (uVar9 == 0) {
      plVar6 = (long *)0x0;
      plStack_68 = param_2;
    }
    else {
      plVar6 = param_2;
      plStack_68 = param_2;
      FUN_1095ff478();
    }
    lVar7 = (long)plVar6 + lVar7;
    plStack_70 = plVar6 + uVar9 * 0x16;
    plStack_88 = plVar6;
    plStack_80 = (long *)lVar7;
    plStack_78 = (long *)lVar7;
    FUN_109666a9c(lVar7,&uStack_e8,&uStack_14c);
    plStack_78 = (long *)(lVar7 + 0xb0);
    lVar7 = lVar7 + (*param_2 - param_2[1]);
    FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar7);
    plVar6 = plStack_78;
    plStack_88 = (long *)*param_2;
    *param_2 = lVar7;
    lVar7 = param_2[2];
    param_2[2] = (long)plStack_70;
    param_2[1] = (long)plStack_78;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    plStack_70 = (long *)lVar7;
    FUN_1095ff754(&plStack_88);
  }
  param_2[1] = (long)plVar6;
  uStack_14c = 0;
  if (plVar6 < (ulong)param_2[2]) {
    FUN_109666b78(plVar6,&uStack_148,&uStack_14c);
    plVar6 = (long *)((long)plVar6 + 0xb0);
    param_2[1] = (long)plVar6;
  }
  else {
    lVar7 = (long)plVar6 - *param_2;
    uVar10 = (lVar7 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x1745d1745d1745d < uVar10) {
      FUN_1095ff464();
LAB_1096662d8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1096662dc);
      (*pcVar5)();
    }
    lVar8 = param_2[2] - *param_2 >> 4;
    uVar9 = lVar8 * 0x5d1745d1745d1746;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      uVar9 = uVar10;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x1745d1745d1745d;
    }
    if (uVar9 == 0) {
      plVar6 = (long *)0x0;
      plStack_68 = param_2;
    }
    else {
      plVar6 = param_2;
      plStack_68 = param_2;
      FUN_1095ff478();
    }
    lVar7 = (long)plVar6 + lVar7;
    plStack_70 = plVar6 + uVar9 * 0x16;
    plStack_88 = plVar6;
    plStack_80 = (long *)lVar7;
    plStack_78 = (long *)lVar7;
    FUN_109666b78(lVar7,&uStack_148,&uStack_14c);
    plStack_78 = (long *)(lVar7 + 0xb0);
    lVar7 = lVar7 + (*param_2 - param_2[1]);
    FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar7);
    plVar6 = plStack_78;
    plStack_88 = (long *)*param_2;
    *param_2 = lVar7;
    lVar7 = param_2[2];
    param_2[2] = (long)plStack_70;
    param_2[1] = (long)plStack_78;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    plStack_70 = (long *)lVar7;
    FUN_1095ff754(&plStack_88);
  }
  param_2[1] = (long)plVar6;
  if (lStack_110 != 0) {
    piVar1 = (int *)(lStack_110 + 0x14);
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
      func_0x000109a848d4(&uStack_148);
    }
  }
  lStack_110 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  if (0 < iStack_144) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_108 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_144);
  }
  if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
    _free(puStack_100[-1]);
  }
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
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
      func_0x000109a848d4(&uStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (0 < (int)uStack_e4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  return;
}



/* Entry: 109666338; end: 1096668c3;  */

void FUN_109666338(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined4 *puStack_68;
  
  puStack_80 = (undefined1 *)&uStack_f0;
  if (0.5 < *(float *)(param_1 + 0x20)) {
    uStack_f0 = 0x42ff0000;
    uStack_e4 = 0;
    uStack_e0 = 0;
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0x2010000;
    lStack_78 = 0;
    uStack_b0 = (ulong)&uStack_f0 | 8;
    puStack_a8 = &uStack_a0;
    FUN_109a479a0(*(long *)(param_1 + 0x240) + 0x1ac8,&uStack_88);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_88,uVar2 + 0x10,&puStack_68);
    puVar3 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
    if (-1 < lStack_78) {
      puVar3 = &uStack_88;
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar8 = param_1 + 8;
      }
      _memmove(puVar3,lVar8,uVar2);
    }
    puVar11 = (undefined8 *)((long)puVar3 + uVar2);
    puVar11[1] = 0x7466654c64657463;
    *puVar11 = 0x6572726f4364705f;
    *(undefined1 *)(puVar11 + 2) = 0;
    puStack_68 = &uStack_88;
    lVar8 = param_2;
    FUN_1095ff978(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    if (*(long *)(lVar8 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar8 + 0x28);
      }
    }
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    if (0 < *(int *)(lVar8 + 0x2c)) {
      lVar7 = 0;
      lVar9 = *(long *)(lVar8 + 0x68);
      do {
        *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 0x2c));
    }
    *(ulong *)(lVar8 + 0x30) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(lVar8 + 0x28) = CONCAT44(iStack_ec,uStack_f0);
    *(ulong *)(lVar8 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
    *(ulong *)(lVar8 + 0x50) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(lVar8 + 0x48) = CONCAT44(uStack_cc,uStack_d0);
    *(long *)(lVar8 + 0x60) = lStack_b8;
    *(ulong *)(lVar8 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
    puVar10 = *(undefined8 **)(lVar8 + 0x70);
    puVar11 = (undefined8 *)(lVar8 + 0x78);
    if (puVar10 != puVar11) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      *(long *)(lVar8 + 0x68) = lVar8 + 0x30;
      *(undefined8 **)(lVar8 + 0x70) = puVar11;
      puVar10 = puVar11;
    }
    puVar11 = (undefined8 *)((ulong)&uStack_f0 | 4);
    if (iStack_ec < 3) {
      *puVar10 = *puStack_a8;
      puVar10[1] = puStack_a8[1];
    }
    else {
      *(ulong *)(lVar8 + 0x68) = uStack_b0;
      *(undefined8 **)(lVar8 + 0x70) = puStack_a8;
      uStack_b0 = (ulong)&uStack_f0 | 8;
      puStack_a8 = &uStack_a0;
    }
    uStack_f0 = 0x42ff0000;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    *(undefined8 *)((long)puVar11 + 0x34) = 0;
    *(undefined8 *)((long)puVar11 + 0x2c) = 0;
    if (lStack_78 < 0) {
      __ZdlPv(CONCAT44(uStack_84,uStack_88));
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      if (0 < iStack_ec) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ec);
      }
    }
    lStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    uStack_e0 = 0;
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
    uStack_f0 = 0x42ff0000;
    uStack_e4 = 0;
    uStack_e0 = 0;
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_88 = 0x2010000;
    lStack_78 = 0;
    uStack_b0 = (ulong)&uStack_f0 | 8;
    puStack_a8 = &uStack_a0;
    puStack_80 = (undefined1 *)&uStack_f0;
    FUN_109a479a0(*(long *)(param_1 + 0x240) + 0x1b28,&uStack_88);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_88,uVar2 + 0x11,&puStack_68);
    puVar3 = (undefined4 *)CONCAT44(uStack_84,uStack_88);
    if (-1 < lStack_78) {
      puVar3 = &uStack_88;
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar8 = param_1 + 8;
      }
      _memmove(puVar3,lVar8,uVar2);
    }
    puVar11 = (undefined8 *)((long)puVar3 + uVar2);
    puVar11[1] = 0x6867695264657463;
    *puVar11 = 0x6572726f4364705f;
    *(undefined2 *)(puVar11 + 2) = 0x74;
    puStack_68 = &uStack_88;
    FUN_1095ff978(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    if (*(long *)(param_2 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x28);
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar8 = 0;
      lVar7 = *(long *)(param_2 + 0x68);
      do {
        *(undefined4 *)(lVar7 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_2 + 0x2c));
    }
    *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(param_2 + 0x28) = CONCAT44(iStack_ec,uStack_f0);
    *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
    *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_cc,uStack_d0);
    *(long *)(param_2 + 0x60) = lStack_b8;
    *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
    puVar10 = *(undefined8 **)(param_2 + 0x70);
    puVar11 = (undefined8 *)(param_2 + 0x78);
    if (puVar10 != puVar11) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      *(long *)(param_2 + 0x68) = param_2 + 0x30;
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      puVar10 = puVar11;
    }
    puVar11 = (undefined8 *)((ulong)&uStack_f0 | 4);
    if (iStack_ec < 3) {
      *puVar10 = *puStack_a8;
      puVar10[1] = puStack_a8[1];
    }
    else {
      *(ulong *)(param_2 + 0x68) = uStack_b0;
      *(undefined8 **)(param_2 + 0x70) = puStack_a8;
      uStack_b0 = (ulong)&uStack_f0 | 8;
      puStack_a8 = &uStack_a0;
    }
    uStack_f0 = 0x42ff0000;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    *(undefined8 *)((long)puVar11 + 0x34) = 0;
    *(undefined8 *)((long)puVar11 + 0x2c) = 0;
    if (lStack_78 < 0) {
      __ZdlPv(CONCAT44(uStack_84,uStack_88));
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      if (0 < iStack_ec) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ec);
      }
    }
    lStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    uStack_e0 = 0;
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
  }
  return;
}



/* Entry: 1096668c4; end: 109666983;  */

undefined8 * FUN_1096668c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00618;
  FUN_109666984(param_1 + 0x49);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109666984; end: 109666a9b;  */

long FUN_109666984(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
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



/* Entry: 109666a9c; end: 109666b77;  */

undefined8 FUN_109666a9c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50,&UNK_10f57b20c);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_2,*param_3,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109666b78; end: 109666c53;  */

undefined8 FUN_109666b78(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50,&UNK_10f57b224);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_2,*param_3,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109666c54; end: 1096674b3;  */

void FUN_109666c54(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 auStack_280 [2];
  char cStack_269;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  long *plStack_230;
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
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined1 uStack_61;
  
  uStack_61 = param_3;
  __ZNSt3__15mutex4lockEv(param_2 + 0x30);
  puStack_250 = &uStack_61;
  lVar9 = param_2 + 8;
  FUN_109667d20(lVar9,&uStack_61,&UNK_10dd5b8f9,&puStack_250,&lStack_108);
  plVar21 = (long *)(lVar9 + 0x18);
  plVar20 = (long *)*plVar21;
  plVar18 = *(long **)(lVar9 + 0x20);
  plVar8 = plVar18;
  if ((long)plVar18 - (long)plVar20 != 0) {
    uVar12 = ((long)plVar18 - (long)plVar20 >> 5) * -0x3333333333333333;
    plVar8 = plVar20;
    do {
      uVar16 = uVar12 >> 1;
      uVar19 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
      uVar12 = uVar16;
      if ((float)plVar8[uVar16 * 0x14] <= (float)param_4) {
        uVar12 = uVar19;
        plVar8 = plVar8 + uVar16 * 0x14 + 0x14;
      }
    } while (uVar12 != 0);
  }
  if (plVar18 == plVar8) {
    puVar7 = (ulong *)(plVar18 + -0x13);
    lStack_f8 = plVar18[-0x12];
    uStack_100 = *puVar7;
    lStack_108 = plVar18[-0x14];
    plStack_c0 = &lStack_f8;
    lStack_e8 = plVar18[-0x10];
    lStack_f0 = plVar18[-0x11];
    lStack_d8 = plVar18[-0xe];
    lStack_e0 = plVar18[-0xf];
    lStack_c8 = plVar18[-0xc];
    lStack_d0 = plVar18[-0xd];
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (plVar18[-0xc] != 0) {
      piVar1 = (int *)(plVar18[-0xc] + 0x14);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_b8 = &uStack_b0;
    if (*(int *)((long)plVar18 + -0x94) < 3) {
      uStack_b0 = *(undefined8 *)plVar18[-10];
      uStack_a8 = ((undefined8 *)plVar18[-10])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
    lStack_98 = plVar18[-6];
    lStack_a0 = plVar18[-7];
    lStack_88 = plVar18[-4];
    lStack_90 = plVar18[-5];
    lStack_78 = plVar18[-2];
    lStack_80 = plVar18[-3];
    uStack_70 = (undefined1)plVar18[-1];
    uVar19 = lStack_108 - param_4;
    uVar12 = -uVar19;
    if (-1 < (long)uVar19) {
      uVar12 = uVar19;
    }
    if (uVar12 < 0x1fca057) {
      uVar12 = *(ulong *)(lVar9 + 0x18);
      uVar19 = *(ulong *)(lVar9 + 0x20);
      while (uVar19 != uVar12) {
        uVar19 = uVar19 - 0xa0;
        FUN_10965d798(uVar19);
      }
      *(ulong *)(lVar9 + 0x20) = uVar12;
      if (uVar12 < *(ulong *)(lVar9 + 0x28)) {
        FUN_109667890(uVar12,&lStack_108);
        puVar15 = (undefined1 *)(uVar12 + 0xa0);
        *(undefined1 **)(lVar9 + 0x20) = puVar15;
      }
      else {
        lVar17 = uVar12 - *plVar21;
        puVar15 = (undefined1 *)((lVar17 >> 5) * -0x3333333333333333 + 1);
        if ((undefined1 *)0x199999999999999 < puVar15) {
          FUN_10966795c();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109667408);
          (*pcVar4)();
        }
        lVar11 = (long)(*(ulong *)(lVar9 + 0x28) - *plVar21) >> 5;
        puVar14 = (undefined1 *)(lVar11 * -0x6666666666666666);
        if (puVar14 < puVar15 || (long)puVar14 - (long)puVar15 == 0) {
          puVar14 = puVar15;
        }
        if (0xcccccccccccccb < (ulong)(lVar11 * -0x3333333333333333)) {
          puVar14 = (undefined1 *)0x199999999999999;
        }
        plStack_230 = plVar21;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = (undefined1 *)0x0;
          puVar7 = (ulong *)0x0;
        }
        else {
          FUN_109667970();
        }
        puVar6 = puVar14 + lVar17;
        puStack_250 = puVar14;
        puStack_248 = puVar6;
        puStack_240 = puVar6;
        puStack_238 = puVar14 + (long)puVar7 * 0xa0;
        FUN_109667890(puVar6,&lStack_108);
        puVar15 = puVar6 + 0xa0;
        lVar17 = *(long *)(lVar9 + 0x18);
        lVar11 = *(long *)(lVar9 + 0x20);
        puStack_240 = puVar15;
        FUN_1096679b4(lVar17,lVar11,puVar6 + (lVar17 - lVar11));
        puStack_250 = *(undefined1 **)(lVar9 + 0x18);
        *(undefined1 **)(lVar9 + 0x18) = puVar6 + (lVar17 - lVar11);
        *(undefined1 **)(lVar9 + 0x20) = puVar15;
        puStack_238 = *(undefined1 **)(lVar9 + 0x28);
        *(undefined1 **)(lVar9 + 0x28) = puVar14 + (long)puVar7 * 0xa0;
        puStack_248 = puStack_250;
        puStack_240 = puStack_250;
        FUN_109667b0c(&puStack_250);
      }
      *(undefined1 **)(lVar9 + 0x20) = puVar15;
      FUN_109667674(param_1,&lStack_108);
    }
    else {
      if (1 < iRam00000001132dfb08) {
        uStack_110 = 0;
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
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        plStack_230 = (long *)0x0;
        uStack_218 = 0;
        uStack_220 = 0;
        puStack_248 = (undefined1 *)0x0;
        puStack_250 = (undefined1 *)0x0;
        puStack_238 = (undefined1 *)0x0;
        puStack_240 = (undefined1 *)0x0;
        FUN_10926db08(&puStack_250);
        uStack_148 = CONCAT44(uStack_148._4_4_,3);
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        func_0x000107c31940(auStack_268,&UNK_10f57b260);
        func_0x000107c31940(auStack_280,&UNK_10f57b2e5);
        FUN_109671348(&puStack_250,2,auStack_268,auStack_280,0x32);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx();
        if (cStack_269 < '\0') {
          __ZdlPv(auStack_280[0]);
        }
        if (cStack_251 < '\0') {
          __ZdlPv(auStack_268[0]);
        }
        FUN_109671170(&puStack_250);
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    if (0 < uStack_100._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)plStack_c0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_100._4_4_);
    }
    bVar5 = puStack_b8 == &uStack_b0;
  }
  else {
    if (plVar20 != plVar8) {
      uVar19 = *plVar8 - param_4;
      uVar12 = -uVar19;
      if (-1 < (long)uVar19) {
        uVar12 = uVar19;
      }
      uVar16 = plVar8[-0x14] - param_4;
      uVar19 = -uVar16;
      if (-1 < (long)uVar16) {
        uVar19 = uVar16;
      }
      lVar17 = -0xa0;
      if (uVar12 <= uVar19) {
        lVar17 = 0;
      }
      plVar8 = (long *)((long)plVar8 + lVar17);
      if (plVar20 != plVar8) {
        plVar21 = plVar20;
        if (plVar8 != plVar18) {
          do {
            FUN_109667730(plVar21,(long)plVar21 + ((long)plVar8 - (long)plVar20));
            plVar21 = plVar21 + 0x14;
          } while ((long *)((long)plVar21 + ((long)plVar8 - (long)plVar20)) != plVar18);
          plVar18 = *(long **)(lVar9 + 0x20);
        }
        while (plVar18 != plVar21) {
          plVar18 = plVar18 + -0x14;
          FUN_10965d798(plVar18);
        }
        *(long **)(lVar9 + 0x20) = plVar21;
      }
      *param_1 = *plVar20;
      lVar9 = plVar20[1];
      param_1[2] = plVar20[2];
      param_1[1] = lVar9;
      lVar9 = plVar20[3];
      param_1[4] = plVar20[4];
      param_1[3] = lVar9;
      lVar9 = plVar20[5];
      param_1[6] = plVar20[6];
      param_1[5] = lVar9;
      lVar9 = plVar20[8];
      lVar17 = plVar20[7];
      param_1[8] = plVar20[8];
      param_1[7] = lVar17;
      param_1[0xb] = 0;
      param_1[9] = (long)(param_1 + 2);
      param_1[10] = (long)(param_1 + 0xb);
      param_1[0xc] = 0;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x14);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)plVar20 + 0xc) < 3) {
        puVar10 = (undefined8 *)plVar20[10];
        puVar13 = (undefined8 *)param_1[10];
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
      }
      else {
        *(undefined4 *)((long)param_1 + 0xc) = 0;
        func_0x000109a84868();
      }
      lVar17 = plVar20[0xe];
      lVar9 = plVar20[0xd];
      lVar22 = plVar20[0x10];
      lVar11 = plVar20[0xf];
      lVar24 = plVar20[0x12];
      lVar23 = plVar20[0x11];
      *(char *)(param_1 + 0x13) = (char)plVar20[0x13];
      param_1[0x12] = lVar24;
      param_1[0x11] = lVar23;
      param_1[0x10] = lVar22;
      param_1[0xf] = lVar11;
      param_1[0xe] = lVar17;
      param_1[0xd] = lVar9;
      *(undefined1 *)(param_1 + 0x14) = 1;
      goto LAB_1096673d8;
    }
    lStack_108 = *plVar20;
    lStack_f8 = plVar20[2];
    uStack_100 = plVar20[1];
    plStack_c0 = &lStack_f8;
    lStack_e8 = plVar20[4];
    lStack_f0 = plVar20[3];
    lStack_d8 = plVar20[6];
    lStack_e0 = plVar20[5];
    lStack_c8 = plVar20[8];
    lStack_d0 = plVar20[7];
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (plVar20[8] != 0) {
      piVar1 = (int *)(plVar20[8] + 0x14);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_b8 = &uStack_b0;
    if (*(int *)((long)plVar20 + 0xc) < 3) {
      uStack_b0 = *(undefined8 *)plVar20[10];
      uStack_a8 = ((undefined8 *)plVar20[10])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
    lStack_98 = plVar20[0xe];
    lStack_a0 = plVar20[0xd];
    lStack_88 = plVar20[0x10];
    lStack_90 = plVar20[0xf];
    lStack_78 = plVar20[0x12];
    lStack_80 = plVar20[0x11];
    uStack_70 = (undefined1)plVar20[0x13];
    uVar19 = lStack_108 - param_4;
    uVar12 = -uVar19;
    if (-1 < (long)uVar19) {
      uVar12 = uVar19;
    }
    if (uVar12 < 0x1fca057) {
      FUN_109667674(param_1,&lStack_108);
    }
    else {
      if (1 < iRam00000001132dfb08) {
        uStack_110 = 0;
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
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        plStack_230 = (long *)0x0;
        uStack_218 = 0;
        uStack_220 = 0;
        puStack_248 = (undefined1 *)0x0;
        puStack_250 = (undefined1 *)0x0;
        puStack_238 = (undefined1 *)0x0;
        puStack_240 = (undefined1 *)0x0;
        FUN_10926db08(&puStack_250);
        uStack_148 = CONCAT44(uStack_148._4_4_,3);
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        func_0x000107c31940(auStack_268,&UNK_10f57b260);
        func_0x000107c31940(auStack_280,&UNK_10f57b2e5);
        FUN_109671348(&puStack_250,2,auStack_268,auStack_280,0x1c);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx();
        if (cStack_269 < '\0') {
          __ZdlPv(auStack_280[0]);
        }
        if (cStack_251 < '\0') {
          __ZdlPv(auStack_268[0]);
        }
        FUN_109671170(&puStack_250);
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    if (0 < uStack_100._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)plStack_c0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_100._4_4_);
    }
    bVar5 = puStack_b8 == &uStack_b0;
  }
  lStack_c8 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  if (!bVar5 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
LAB_1096673d8:
  __ZNSt3__15mutex6unlockEv(param_2 + 0x30);
  return;
}



/* Entry: 1096674b4; end: 1096675f3;  */

void FUN_1096674b4(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  uStack_4a = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puStack_48 = &uStack_4a;
  lVar3 = param_1 + 8;
  FUN_109667d20(lVar3,&uStack_4a,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
  uVar2 = *(ulong *)(lVar3 + 0x20);
  if (uVar2 < *(ulong *)(lVar3 + 0x28)) {
    FUN_109667c6c(uVar2,param_3);
    lVar4 = uVar2 + 0xa0;
    *(long *)(lVar3 + 0x20) = lVar4;
  }
  else {
    lVar4 = lVar3 + 0x18;
    FUN_109667b58(lVar4,param_3);
  }
  *(long *)(lVar3 + 0x20) = lVar4;
  lVar5 = *(long *)(lVar3 + 0x18);
  if (0xe < (ulong)((lVar4 - lVar5 >> 5) * -0x3333333333333333)) {
    lVar6 = lVar5;
    if (lVar5 + 0xa0 != lVar4) {
      do {
        lVar5 = lVar6 + 0xa0;
        FUN_109667730(lVar6,lVar5);
        lVar1 = lVar6 + 0x140;
        lVar6 = lVar5;
      } while (lVar1 != lVar4);
      lVar4 = *(long *)(lVar3 + 0x20);
    }
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0xa0;
      FUN_10965d798(lVar4);
    }
    *(long *)(lVar3 + 0x20) = lVar5;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  return;
}



/* Entry: 1096675f4; end: 109667673;  */

undefined8 * FUN_1096675f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b006a0;
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  FUN_10965d6a4(param_1 + 1);
  return param_1;
}



/* Entry: 109667674; end: 10966772f;  */

void FUN_109667674(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar5 = param_2[8];
  uVar4 = param_2[7];
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  piVar2 = (int *)((long)param_2 + 0xc);
  iVar1 = *piVar2;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[9] = param_1 + 2;
  param_1[10] = param_1 + 0xb;
  puVar3 = (undefined8 *)param_2[10];
  if (iVar1 < 3) {
    param_1[0xb] = *puVar3;
    param_1[0xc] = puVar3[1];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = puVar3;
    param_2[9] = param_2 + 2;
    param_2[10] = param_2 + 0xb;
  }
  *(undefined4 *)(param_2 + 1) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  uVar5 = param_2[0xe];
  uVar4 = param_2[0xd];
  uVar7 = param_2[0x10];
  uVar6 = param_2[0xf];
  uVar9 = param_2[0x12];
  uVar8 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar9;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



/* Entry: 109667730; end: 10966788f;  */

undefined8 * FUN_109667730(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  if (param_1[8] != 0) {
    piVar8 = (int *)(param_1[8] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar4 = 0;
    lVar5 = param_1[9];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0xc));
  }
  piVar8 = (int *)((long)param_2 + 0xc);
  iVar3 = *piVar8;
  uVar9 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar9;
  uVar9 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar9;
  uVar9 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar9;
  uVar9 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar9;
  puVar6 = (undefined8 *)param_1[10];
  puVar7 = param_1 + 0xb;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[9] = param_1 + 2;
    param_1[10] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[10];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = puVar7;
    param_2[9] = param_2 + 2;
    param_2[10] = param_2 + 0xb;
  }
  *(undefined4 *)(param_2 + 1) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  uVar10 = param_2[0xe];
  uVar9 = param_2[0xd];
  uVar12 = param_2[0x10];
  uVar11 = param_2[0xf];
  uVar14 = param_2[0x12];
  uVar13 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar14;
  param_1[0x11] = uVar13;
  param_1[0x10] = uVar12;
  param_1[0xf] = uVar11;
  param_1[0xe] = uVar10;
  param_1[0xd] = uVar9;
  return param_1;
}



/* Entry: 109667890; end: 10966795b;  */

undefined8 * FUN_109667890(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar8 = param_2[2];
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  lVar4 = param_2[8];
  uVar7 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar7;
  param_1[0xb] = 0;
  param_1[9] = param_1 + 2;
  param_1[10] = param_1 + 0xb;
  param_1[0xc] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0xc) < 3) {
    puVar5 = (undefined8 *)param_2[10];
    puVar6 = (undefined8 *)param_1[10];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    func_0x000109a84868();
  }
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xd];
  uVar10 = param_2[0x10];
  uVar9 = param_2[0xf];
  uVar12 = param_2[0x12];
  uVar11 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar12;
  param_1[0x11] = uVar11;
  param_1[0x10] = uVar10;
  param_1[0xf] = uVar9;
  param_1[0xe] = uVar8;
  param_1[0xd] = uVar7;
  return param_1;
}



/* Entry: 10966795c; end: 10966796f;  */

void FUN_10966795c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x199999999999999 < puVar4) {
    func_0x000104c4f740();
    puVar8 = puVar4;
    if (puVar4 != param_2) {
      do {
        uVar10 = puVar8[2];
        uVar9 = puVar8[1];
        *param_3 = *puVar8;
        param_3[2] = uVar10;
        param_3[1] = uVar9;
        uVar9 = puVar8[3];
        param_3[4] = puVar8[4];
        param_3[3] = uVar9;
        uVar9 = puVar8[5];
        param_3[6] = puVar8[6];
        param_3[5] = uVar9;
        lVar5 = puVar8[8];
        uVar9 = puVar8[7];
        param_3[8] = puVar8[8];
        param_3[7] = uVar9;
        param_3[0xb] = 0;
        param_3[9] = param_3 + 2;
        param_3[10] = param_3 + 0xb;
        param_3[0xc] = 0;
        if (lVar5 != 0) {
          piVar1 = (int *)(lVar5 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)((long)puVar8 + 0xc) < 3) {
          puVar6 = (undefined8 *)puVar8[10];
          puVar7 = (undefined8 *)param_3[10];
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
        }
        else {
          *(undefined4 *)((long)param_3 + 0xc) = 0;
          func_0x000109a84868();
        }
        uVar10 = puVar8[0xe];
        uVar9 = puVar8[0xd];
        uVar12 = puVar8[0x10];
        uVar11 = puVar8[0xf];
        uVar14 = puVar8[0x12];
        uVar13 = puVar8[0x11];
        *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(puVar8 + 0x13);
        param_3[0x12] = uVar14;
        param_3[0x11] = uVar13;
        puVar8 = puVar8 + 0x14;
        param_3[0x10] = uVar12;
        param_3[0xf] = uVar11;
        param_3[0xe] = uVar10;
        param_3[0xd] = uVar9;
        param_3 = param_3 + 0x14;
      } while (puVar8 != param_2);
      do {
        FUN_10965d798(puVar4);
        puVar4 = puVar4 + 0x14;
      } while (puVar4 != param_2);
    }
    return;
  }
  __Znwm((long)puVar4 * 0xa0);
  return;
}



/* Entry: 109667970; end: 1096679b3;  */

void FUN_109667970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((undefined8 *)0x199999999999999 < param_1) {
    func_0x000104c4f740();
    puVar7 = param_1;
    if (param_1 != param_2) {
      do {
        uVar9 = puVar7[2];
        uVar8 = puVar7[1];
        *param_3 = *puVar7;
        param_3[2] = uVar9;
        param_3[1] = uVar8;
        uVar8 = puVar7[3];
        param_3[4] = puVar7[4];
        param_3[3] = uVar8;
        uVar8 = puVar7[5];
        param_3[6] = puVar7[6];
        param_3[5] = uVar8;
        lVar4 = puVar7[8];
        uVar8 = puVar7[7];
        param_3[8] = puVar7[8];
        param_3[7] = uVar8;
        param_3[0xb] = 0;
        param_3[9] = param_3 + 2;
        param_3[10] = param_3 + 0xb;
        param_3[0xc] = 0;
        if (lVar4 != 0) {
          piVar1 = (int *)(lVar4 + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(int *)((long)puVar7 + 0xc) < 3) {
          puVar5 = (undefined8 *)puVar7[10];
          puVar6 = (undefined8 *)param_3[10];
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
        }
        else {
          *(undefined4 *)((long)param_3 + 0xc) = 0;
          func_0x000109a84868();
        }
        uVar9 = puVar7[0xe];
        uVar8 = puVar7[0xd];
        uVar11 = puVar7[0x10];
        uVar10 = puVar7[0xf];
        uVar13 = puVar7[0x12];
        uVar12 = puVar7[0x11];
        *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(puVar7 + 0x13);
        param_3[0x12] = uVar13;
        param_3[0x11] = uVar12;
        puVar7 = puVar7 + 0x14;
        param_3[0x10] = uVar11;
        param_3[0xf] = uVar10;
        param_3[0xe] = uVar9;
        param_3[0xd] = uVar8;
        param_3 = param_3 + 0x14;
      } while (puVar7 != param_2);
      do {
        FUN_10965d798(param_1);
        param_1 = param_1 + 0x14;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0xa0);
  return;
}



/* Entry: 1096679b4; end: 109667b0b;  */

void FUN_1096679b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar7 = param_1;
  if (param_1 != param_2) {
    do {
      uVar9 = puVar7[2];
      uVar8 = puVar7[1];
      *param_3 = *puVar7;
      param_3[2] = uVar9;
      param_3[1] = uVar8;
      uVar8 = puVar7[3];
      param_3[4] = puVar7[4];
      param_3[3] = uVar8;
      uVar8 = puVar7[5];
      param_3[6] = puVar7[6];
      param_3[5] = uVar8;
      lVar4 = puVar7[8];
      uVar8 = puVar7[7];
      param_3[8] = puVar7[8];
      param_3[7] = uVar8;
      param_3[0xb] = 0;
      param_3[9] = param_3 + 2;
      param_3[10] = param_3 + 0xb;
      param_3[0xc] = 0;
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puVar7 + 0xc) < 3) {
        puVar5 = (undefined8 *)puVar7[10];
        puVar6 = (undefined8 *)param_3[10];
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
      }
      else {
        *(undefined4 *)((long)param_3 + 0xc) = 0;
        func_0x000109a84868();
      }
      uVar9 = puVar7[0xe];
      uVar8 = puVar7[0xd];
      uVar11 = puVar7[0x10];
      uVar10 = puVar7[0xf];
      uVar13 = puVar7[0x12];
      uVar12 = puVar7[0x11];
      *(undefined1 *)(param_3 + 0x13) = *(undefined1 *)(puVar7 + 0x13);
      param_3[0x12] = uVar13;
      param_3[0x11] = uVar12;
      puVar7 = puVar7 + 0x14;
      param_3[0x10] = uVar11;
      param_3[0xf] = uVar10;
      param_3[0xe] = uVar9;
      param_3[0xd] = uVar8;
      param_3 = param_3 + 0x14;
    } while (puVar7 != param_2);
    do {
      FUN_10965d798(param_1);
      param_1 = param_1 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 109667b0c; end: 109667b57;  */

long * FUN_109667b0c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xa0;
    FUN_10965d798();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109667b58; end: 109667c6b;  */

long * FUN_109667b58(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_58;
  ulong uStack_50;
  long *plStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 5) * -0x3333333333333333 + 1;
  if (uVar6 < 0x19999999999999a) {
    lVar5 = (long)(param_1[2] - *param_1) >> 5;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0xcccccccccccccb < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar7 = 0x199999999999999;
    }
    puStack_38 = param_1;
    if (uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    else {
      puVar3 = param_2;
      FUN_109667970();
    }
    lVar8 = uVar7 + lVar8;
    uVar9 = uVar7 + (long)puVar3 * 0xa0;
    uStack_58 = uVar7;
    uStack_50 = lVar8;
    plStack_48 = (long *)lVar8;
    uStack_40 = uVar9;
    FUN_109667c6c(lVar8,param_2);
    plVar1 = (long *)(lVar8 + 0xa0);
    uVar6 = lVar8 + (*param_1 - param_1[1]);
    plStack_48 = plVar1;
    FUN_1096679b4(*param_1,param_1[1],uVar6);
    uStack_58 = *param_1;
    *param_1 = uVar6;
    param_1[1] = (ulong)plVar1;
    uStack_40 = param_1[2];
    param_1[2] = uVar9;
    uStack_50 = uStack_58;
    plStack_48 = (long *)uStack_58;
    FUN_109667b0c(&uStack_58);
    return plVar1;
  }
  FUN_10966795c();
  FUN_109667b0c(&uStack_58);
  __Unwind_Resume();
  *param_1 = *param_2;
  uVar6 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  uVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  uVar7 = param_2[8];
  uVar6 = param_2[7];
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  piVar4 = (int *)((long)param_2 + 0xc);
  iVar2 = *piVar4;
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  param_1[9] = (ulong)(param_1 + 2);
  param_1[10] = (ulong)(param_1 + 0xb);
  puVar3 = (ulong *)param_2[10];
  if (iVar2 < 3) {
    param_1[0xb] = *puVar3;
    param_1[0xc] = puVar3[1];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = (ulong)puVar3;
    param_2[9] = (ulong)(param_2 + 2);
    param_2[10] = (ulong)(param_2 + 0xb);
  }
  *(undefined4 *)(param_2 + 1) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  uVar7 = param_2[0xe];
  uVar6 = param_2[0xd];
  uVar10 = param_2[0x10];
  uVar9 = param_2[0xf];
  uVar12 = param_2[0x12];
  uVar11 = param_2[0x11];
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  param_1[0x12] = uVar12;
  param_1[0x11] = uVar11;
  param_1[0x10] = uVar10;
  param_1[0xf] = uVar9;
  param_1[0xe] = uVar7;
  param_1[0xd] = uVar6;
  return (long *)param_1;
}



/* Entry: 109667c6c; end: 109667d1f;  */

void FUN_109667c6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar5 = param_2[8];
  uVar4 = param_2[7];
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  piVar2 = (int *)((long)param_2 + 0xc);
  iVar1 = *piVar2;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[9] = param_1 + 2;
  param_1[10] = param_1 + 0xb;
  puVar3 = (undefined8 *)param_2[10];
  if (iVar1 < 3) {
    param_1[0xb] = *puVar3;
    param_1[0xc] = puVar3[1];
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = puVar3;
    param_2[9] = param_2 + 2;
    param_2[10] = param_2 + 0xb;
  }
  *(undefined4 *)(param_2 + 1) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  uVar5 = param_2[0xe];
  uVar4 = param_2[0xd];
  uVar7 = param_2[0x10];
  uVar6 = param_2[0xf];
  uVar9 = param_2[0x12];
  uVar8 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar9;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  return;
}



/* Entry: 109667d20; end: 1096680ef;  */

undefined1  [16] FUN_109667d20(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong unaff_x24;
  undefined1 auVar20 [16];
  
  uVar17 = (ulong)*param_2;
  uVar19 = param_1[1];
  if (uVar19 != 0) {
    uVar6 = uVar19 - 1;
    uVar18 = (uint)uVar19;
    uVar16 = (uint)*param_2;
    if ((uVar19 & uVar6) == 0) {
      unaff_x24 = uVar18 - 1 & uVar17;
    }
    else {
      unaff_x24 = uVar17;
      if (uVar19 <= uVar17) {
        uVar1 = 0;
        if (uVar18 != 0) {
          uVar1 = uVar16 / uVar18;
        }
        unaff_x24 = (ulong)(uVar16 - uVar1 * uVar18);
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar10 = plVar15[1];
        if (uVar10 == uVar17) {
          if (*(byte *)(plVar15 + 2) == uVar16) {
            uVar5 = 0;
            goto LAB_109668074;
          }
        }
        else {
          if ((uVar19 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar19 <= uVar10) {
            uVar7 = 0;
            if (uVar19 != 0) {
              uVar7 = uVar10 / uVar19;
            }
            uVar10 = uVar10 - uVar7 * uVar19;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x30;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar17;
  *(undefined1 *)(plVar15 + 2) = *(undefined1 *)*param_4;
  plVar15[4] = 0;
  plVar15[5] = 0;
  plVar15[3] = 0;
  if ((uVar19 == 0) || (*(float *)(param_1 + 4) * (float)uVar19 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar19) {
      uVar6 = (ulong)((uVar19 & uVar19 - 1) != 0);
    }
    uVar6 = uVar6 | uVar19 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar19 = param_1[1];
    }
    if (uVar19 < uVar6) {
LAB_109667e88:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1096680d8);
        (*pcVar3)();
      }
      lVar11 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar11;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar19 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar19 * 8) = 0;
        uVar19 = uVar19 + 1;
      } while (uVar6 != uVar19);
      plVar8 = (long *)param_1[2];
      uVar19 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar2 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar11 = *param_1;
            if (*(long *)(lVar11 + uVar14 * 8) == 0) {
              *(long **)(lVar11 + uVar14 * 8) = plVar8;
              uVar10 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar11 + uVar14 * 8);
              **(long **)(lVar11 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar19) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar19) {
        if (uVar6 != 0) goto LAB_109667e88;
        lVar11 = *param_1;
        *param_1 = 0;
        if (lVar11 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar19 = 0;
      }
      else {
        uVar19 = param_1[1];
      }
    }
    if ((uVar19 & uVar19 - 1) == 0) {
      unaff_x24 = (int)uVar19 - 1 & uVar17;
    }
    else {
      unaff_x24 = uVar17;
      if (uVar19 <= uVar17) {
        uVar6 = 0;
        if (uVar19 != 0) {
          uVar6 = uVar17 / uVar19;
        }
        unaff_x24 = uVar17 - uVar6 * uVar19;
      }
    }
  }
  lVar11 = *param_1;
  plVar8 = *(long **)(lVar11 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar11 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_109668064;
    uVar17 = *(ulong *)(*plVar15 + 8);
    if ((uVar19 & uVar19 - 1) == 0) {
      uVar17 = uVar17 & uVar19 - 1;
    }
    else if (uVar19 <= uVar17) {
      uVar6 = 0;
      if (uVar19 != 0) {
        uVar6 = uVar17 / uVar19;
      }
      uVar17 = uVar17 - uVar6 * uVar19;
    }
    plVar8 = (long *)(*param_1 + uVar17 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_109668064:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109668074:
  auVar20._8_8_ = uVar5;
  auVar20._0_8_ = plVar15;
  return auVar20;
}



/* Entry: 1096680f0; end: 10966812f;  */

void FUN_1096680f0(ulong param_1,long param_2)

{
  long lStack_28;
  
  if ((param_1 & 1) != 0) {
    lStack_28 = param_2 + 0x18;
    FUN_10965d728(&lStack_28);
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 109668130; end: 10966834b;  */

void FUN_109668130(undefined1 *param_1,double *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  double *pdVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 auStack_1a8 [2];
  char cStack_191;
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
  ulong uStack_50;
  
  __ZNSt3__15mutex4lockEv();
  if (*(int *)(param_2 + 0xf8) != -1) {
    if (param_3 == -1) {
      FUN_109668458(param_1,param_2 + (long)*(int *)(param_2 + 0xf8) * 8 + 8);
      goto LAB_1096682d0;
    }
    dVar7 = (double)param_3 * 1e-09;
    lVar4 = 0x780;
    pdVar3 = param_2;
    do {
      pdVar3 = pdVar3 + 8;
      dVar6 = ABS(dVar7 - *pdVar3);
      dVar5 = ABS(dVar7 + *pdVar3) * 2.220446049250313e-16 * 4.0;
      bVar1 = false;
      bVar2 = false;
      if (2.2250738585072014e-308 <= dVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar6) && !NAN(dVar5)) {
          bVar1 = dVar6 == dVar5;
          bVar2 = dVar5 <= dVar6;
        }
      }
      if (!bVar2 || bVar1) {
        if (lVar4 != 0) {
          FUN_109668458(param_1);
          goto LAB_1096682d0;
        }
        break;
      }
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
    if (1 < iRam00000001132dfb08) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
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
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      FUN_10926db08(&uStack_190);
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1a8,&UNK_10f57b31d);
      func_0x000107c31940(auStack_1c0,&UNK_10f57b3a4);
      FUN_109671348(&uStack_190,2,auStack_1a8,auStack_1c0,0x38);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar7);
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
      }
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      FUN_109671170(&uStack_190);
    }
  }
  *param_1 = 0;
  param_1[0x40] = 0;
LAB_1096682d0:
  __ZNSt3__15mutex6unlockEv(param_2);
  return;
}



/* Entry: 10966834c; end: 1096683af;  */

void FUN_10966834c(undefined1 *param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv();
  if (*(int *)(param_2 + 0x7c4) == -1) {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  else {
    FUN_109668458(param_1,param_2 + (long)*(int *)(param_2 + 0x7c4) * 0x40 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 1096683b0; end: 1096683fb;  */

undefined1  [16] FUN_1096683b0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < (undefined8 *)0x71c71c71c71c71d) {
    plVar1 = param_1;
    FUN_109668410();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 0x24;
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_1096683fc();
  puVar2 = (undefined8 *)&UNK_10f57b3da;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0x71c71c71c71c71d) {
    lVar3 = (long)param_2 * 0x24;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  uVar4 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar2 = uVar4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_109668510(puVar2 + 2,param_2[2],param_2[3],
                ((long)(param_2[3] - param_2[2]) >> 2) * -0x71c71c71c71c71c7);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar4 = param_2[5];
  FUN_109668510();
  *(undefined1 *)(puVar2 + 8) = 1;
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 1096683fc; end: 10966840f;  */

undefined1  [16] FUN_1096683fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f57b3da;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0x71c71c71c71c71d) {
    lVar2 = (long)param_2 * 0x24;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  uVar3 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_109668510(puVar1 + 2,param_2[2],param_2[3],
                ((long)(param_2[3] - param_2[2]) >> 2) * -0x71c71c71c71c71c7);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar3 = param_2[5];
  FUN_109668510();
  *(undefined1 *)(puVar1 + 8) = 1;
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 109668410; end: 109668457;  */

undefined1  [16] FUN_109668410(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < (undefined8 *)0x71c71c71c71c71d) {
    lVar1 = (long)param_2 * 0x24;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_109668510(param_1 + 2,param_2[2],param_2[3],
                ((long)(param_2[3] - param_2[2]) >> 2) * -0x71c71c71c71c71c7);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = param_2[5];
  FUN_109668510();
  *(undefined1 *)(param_1 + 8) = 1;
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109668458; end: 10966850f;  */

undefined8 * FUN_109668458(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_109668510(param_1 + 2,param_2[2],param_2[3],
                ((long)(param_2[3] - param_2[2]) >> 2) * -0x71c71c71c71c71c7);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_109668510();
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



/* Entry: 109668510; end: 109668587;  */

void FUN_109668510(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1096683b0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 109668588; end: 1096688d7;  */

undefined8 * FUN_109668588(undefined8 *param_1,long param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
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
  ulong uStack_50;
  
  *param_1 = &PTR_FUN_110b00420;
  FUN_1095c8dec(param_1 + 1);
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  *(undefined2 *)((long)param_1 + 0x15a) = 0x55f1;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)((long)param_1 + 0x163) = 0;
  param_1[0x2d] = 0xffff;
  *param_1 = &PTR_FUN_110b006f8;
  if (*(char *)(param_2 + 1) == '\0') {
    uVar1 = *(ulong *)(param_2 + 0x28);
    if (-1 < (char)*(byte *)(param_2 + 0x37)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x37);
    }
    if (uVar1 == 0) {
      func_0x000107c31940(&ppuStack_190,"");
      ppuVar2 = &PTR_PTR_1132febe0;
      func_0x00010ae079a0(0);
      func_0x00010ae07cd4(ppuVar2,&PTR_PTR_1132febe0);
      if (lStack_180 < 0) {
        ppuVar2 = ppuStack_190;
        __ZdlPv();
      }
      func_0x000109cd2af4();
      if ((*(uint *)(ppuVar2 + 8) >> 4 & 1) == 0) {
        if (2 < iRam00000001132dfb08) {
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
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
          uStack_188 = 0;
          ppuStack_190 = (undefined **)0x0;
          uStack_178 = 0;
          lStack_180 = 0;
          FUN_10926db08(&ppuStack_190);
          uStack_88 = CONCAT44(uStack_88._4_4_,3);
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          func_0x000107c31940(auStack_1a8,&UNK_10f57b3e1);
          func_0x000107c31940(auStack_1c0,&UNK_10f57b464);
          FUN_109671348(&ppuStack_190,3,auStack_1a8,auStack_1c0,0x2c);
          FUN_1092b4db8();
          if (cStack_1a9 < '\0') {
            __ZdlPv(auStack_1c0[0]);
          }
          if (cStack_191 < '\0') {
            __ZdlPv(auStack_1a8[0]);
          }
          FUN_109671170(&ppuStack_190);
        }
        func_0x000107c2c4d8(param_1 + 5,&UNK_10f57b4f7,0x33);
        uVar3 = 0;
      }
      else {
        if (2 < iRam00000001132dfb08) {
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
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
          uStack_188 = 0;
          ppuStack_190 = (undefined **)0x0;
          uStack_178 = 0;
          lStack_180 = 0;
          FUN_10926db08(&ppuStack_190);
          uStack_88 = CONCAT44(uStack_88._4_4_,3);
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          func_0x000107c31940(auStack_1a8,&UNK_10f57b3e1);
          func_0x000107c31940(auStack_1c0,&UNK_10f57b464);
          FUN_109671348(&ppuStack_190,3,auStack_1a8,auStack_1c0,0x28);
          FUN_1092b4db8();
          if (cStack_1a9 < '\0') {
            __ZdlPv(auStack_1c0[0]);
          }
          if (cStack_191 < '\0') {
            __ZdlPv(auStack_1a8[0]);
          }
          FUN_109671170(&ppuStack_190);
        }
        func_0x000107c2c4d8(param_1 + 5,&UNK_10f57b49f,0x39);
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 8) = uVar3;
    }
    uVar1 = *(ulong *)(param_2 + 0x10);
    if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x1f);
    }
    if (uVar1 == 0) {
      func_0x000107c2c4d8(param_1 + 2,&UNK_10f57b52b,0x29);
    }
  }
  return param_1;
}



/* Entry: 1096688d8; end: 1096689ab;  */

undefined8 FUN_1096688d8(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  cVar1 = *(char *)(param_1 + 9);
  __ZNSt3__19to_stringEi(auStack_58,cVar1);
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f57b555,0x3e);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  lStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10965a66c(cVar1 == '\x01',&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *(undefined2 *)(param_1 + 0x15a) = 0x1392;
  return 1;
}



/* Entry: 1096689ac; end: 109668b5b;  */

undefined8 FUN_1096689ac(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x15a) = 0x4ce;
      puVar3 = (undefined4 *)0x6;
      __Znwm();
      puStack_40 = (undefined4 *)((long)puVar3 + 6);
      *puVar3 = 0x80002;
      *(undefined2 *)(puVar3 + 1) = 6;
      puStack_48 = puVar3;
      lStack_38 = (long)puStack_40;
      FUN_10965ddbc(param_1,&puStack_48);
      if (puStack_48 != (undefined4 *)0x0) {
        puStack_40 = puStack_48;
        __ZdlPv();
      }
    }
    else {
      if (bVar1 != 1) {
LAB_109668a8c:
        uVar4 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt3__19to_stringEi(auStack_60,*(undefined1 *)(param_1 + 9));
        FUN_10928a5e0(&puStack_48,&UNK_10f57b594,auStack_60);
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (uVar4,&puStack_48);
        ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109668aec);
        (*pcVar2)();
      }
      *(undefined2 *)(param_1 + 0x15a) = 0x1455;
    }
    *(undefined1 *)(param_1 + 0x164) = 1;
  }
  else if (bVar1 == 2) {
    *(undefined2 *)(param_1 + 0x15a) = 0x146e;
    *(undefined2 *)(param_1 + 0x164) = 0x101;
  }
  else {
    if (bVar1 != 3) goto LAB_109668a8c;
    *(undefined2 *)(param_1 + 0x15a) = 0x834;
    *(undefined1 *)(param_1 + 0x165) = 1;
  }
  return 1;
}



/* Entry: 109668b5c; end: 109668bcf;  */

long FUN_109668b5c(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 auStack_390 [2];
  char cStack_379;
  double adStack_378 [2];
  char cStack_361;
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
  ulong uStack_220;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  ulong uStack_60;
  
  if (*(byte *)(param_1 + 9) < 4) {
    *(undefined2 *)(param_1 + 0x15a) = 0x1838;
    return 1;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar3 = lVar2;
  ___cxa_throw(lVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  cVar1 = *(char *)(lVar3 + 9);
  func_0x000107c31940(&uStack_1a0,&UNK_10f57b5ee);
  FUN_10965a66c(cVar1 != '\0',&uStack_1a0);
  if (uStack_190._7_1_ < '\0') {
    __ZdlPv(uStack_1a0);
  }
  *(undefined2 *)(lVar3 + 0x165) = 0x101;
  if (*(char *)(lVar3 + 9) == '\x02') {
    *(undefined2 *)(lVar3 + 0x15a) = 0x146e;
    *(undefined1 *)(lVar3 + 0x164) = 1;
    return 1;
  }
  if (*(char *)(lVar3 + 9) == '\x03') {
    if (1 < iRam00000001132dfb08) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_10926db08(&uStack_1a0);
      uStack_98 = CONCAT44(uStack_98._4_4_,3);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1b8,&UNK_10f57b3e1);
      func_0x000107c31940(auStack_1d0,&UNK_10f57b62e);
      FUN_109671348(&uStack_1a0,2,auStack_1b8,auStack_1d0,0x85);
      FUN_1092b4db8();
      if (cStack_1b9 < '\0') {
        __ZdlPv(auStack_1d0[0]);
      }
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      FUN_109671170(&uStack_1a0);
    }
    return 0;
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar5 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  FUN_109671170(&uStack_1a0);
  __Unwind_Resume();
  if (*(short *)(lVar3 + 0x15a) == 0x4ce) {
    FUN_10965dfa0();
    FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar5,0x7da);
    cVar1 = *(char *)(lVar3 + 0x151);
    uVar6 = 0x3ff0000000000000;
    if (cVar1 == '\x01') {
      uVar6 = 0;
    }
    uVar7 = 0x3ff0000000000000;
    if (cVar1 != '\0') {
      uVar7 = uVar6;
    }
    dVar8 = 0.0;
    if (cVar1 != '\0') {
      dVar8 = 1.0;
    }
    FUN_1095fb63c(uVar7,*(undefined8 *)*puVar5,0x7e4);
    lVar3 = *(long *)*puVar5;
    uVar4 = 0x7f8;
  }
  else {
    lVar2 = lVar3;
    FUN_10965de3c();
    if (*(short *)(lVar3 + 0x15a) == 0x146e) {
      return lVar2;
    }
    dVar8 = 1.0;
    if (*(char *)(lVar3 + 0x164) == '\0') {
      dVar8 = 0.0;
    }
    lVar3 = *(long *)*puVar5;
    uVar4 = 0x9c4;
  }
  lVar2 = *(long *)(lVar3 + 8);
  if (lVar2 != 0) {
    if (uVar4 < 0x92d) {
      if (uVar4 < 0x816) {
        if (uVar4 < 0x7fd) {
          if (uVar4 == 0x7da) {
            iRam00000001132dfb70 = (int)dVar8;
            if (7 < iRam00000001132dfb70) {
              iRam00000001132dfb70 = 8;
            }
            if (iRam00000001132dfb08 < 3) {
              iRam00000001132e8f30 = iRam00000001132dfb70;
              return 1;
            }
            uStack_220 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            iRam00000001132e8f30 = iRam00000001132dfb70;
            FUN_10926db08(&uStack_360);
            uStack_258 = CONCAT44(uStack_258._4_4_,3);
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_220 = uStack_220 & 0xffffffff00000000;
            func_0x000107c31940(adStack_378,&UNK_10f576c08);
            func_0x000107c31940(auStack_390,&UNK_10f577183);
            FUN_109671348(&uStack_360,3,adStack_378,auStack_390,0xb23);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            if (cStack_379 < '\0') {
              __ZdlPv(auStack_390[0]);
            }
            if (cStack_361 < '\0') {
              __ZdlPv(adStack_378[0]);
            }
            FUN_109671170(&uStack_360);
            return 1;
          }
          if (uVar4 == 0x7e4) {
            func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
            adStack_378[0] = dVar8;
            FUN_1095d7010(lVar2,&uStack_360,2,adStack_378);
          }
          else {
            if (uVar4 != 0x7f8) {
              return 0;
            }
            func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
            adStack_378[0] = dVar8;
            FUN_1095d7010(lVar2,&uStack_360,3,adStack_378);
          }
        }
        else if (uVar4 < 0x807) {
          if (uVar4 == 0x7fd) {
            func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
            adStack_378[0] = dVar8;
            FUN_1095d7010(lVar2,&uStack_360,5,adStack_378);
          }
          else {
            if (uVar4 != 0x804) {
              return 0;
            }
            func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
            adStack_378[0] = dVar8;
            FUN_1095d7010(lVar2,&uStack_360,6,adStack_378);
          }
        }
        else if (uVar4 == 0x807) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x15,adStack_378);
        }
        else {
          if (uVar4 != 0x80c) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x13,adStack_378);
        }
      }
      else if (uVar4 < 0x8d4) {
        if (uVar4 == 0x816) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x14,adStack_378);
        }
        else if (uVar4 == 0x8ca) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,7,adStack_378);
        }
        else {
          if (uVar4 != 0x8cf) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,8,adStack_378);
        }
      }
      else if (uVar4 < 0x8fc) {
        if (uVar4 == 0x8d4) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,9,adStack_378);
        }
        else {
          if (uVar4 != 0x8d5) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,10,adStack_378);
        }
      }
      else if (uVar4 == 0x8fc) {
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x11,adStack_378);
      }
      else {
        if (uVar4 != 0x92c) {
          return 0;
        }
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x18,adStack_378);
      }
    }
    else if (uVar4 < 0x9ce) {
      if (uVar4 < 0x960) {
        if (uVar4 == 0x92d) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x17,adStack_378);
        }
        else if (uVar4 == 0x92e) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x16,adStack_378);
        }
        else {
          if (uVar4 != 0x94c) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x21,adStack_378);
        }
      }
      else if (uVar4 < 0x993) {
        if (uVar4 == 0x960) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x1e,adStack_378);
        }
        else {
          if (uVar4 != 0x992) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x1f,adStack_378);
        }
      }
      else if (uVar4 == 0x993) {
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x20,adStack_378);
      }
      else {
        if (uVar4 != 0x9c4) {
          return 0;
        }
        FUN_1095fb63c(dVar8,lVar3,0x807);
        if (dVar8 != 0.0) {
          FUN_1095fb63c(0,lVar3,0x816);
        }
        uVar6 = *(undefined8 *)(lVar3 + 8);
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(uVar6,&uStack_360,0x22,adStack_378);
      }
    }
    else if (uVar4 < 0xa32) {
      if (uVar4 < 0xa00) {
        if (uVar4 == 0x9ce) {
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x19,adStack_378);
        }
        else {
          if (uVar4 != 0x9f6) {
            return 0;
          }
          func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
          adStack_378[0] = dVar8;
          FUN_1095d7010(lVar2,&uStack_360,0x28,adStack_378);
        }
      }
      else if (uVar4 == 0xa00) {
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x29,adStack_378);
      }
      else {
        if (uVar4 != 0xa28) {
          return 0;
        }
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x2c,adStack_378);
      }
    }
    else if (uVar4 < 0xa46) {
      if (uVar4 == 0xa32) {
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x2d,adStack_378);
      }
      else {
        if (uVar4 != 0xa3c) {
          return 0;
        }
        func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
        adStack_378[0] = dVar8;
        FUN_1095d7010(lVar2,&uStack_360,0x2e,adStack_378);
      }
    }
    else if (uVar4 == 0xa46) {
      func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
      adStack_378[0] = dVar8;
      FUN_1095d7010(lVar2,&uStack_360,0x2f,adStack_378);
    }
    else {
      if (uVar4 != 10000) {
        return 0;
      }
      func_0x000107c31940(&uStack_360,&UNK_10f576f3b);
      adStack_378[0] = dVar8;
      FUN_1095d7010(lVar2,&uStack_360,0,adStack_378);
    }
    if (uStack_350._7_1_ < '\0') {
      __ZdlPv(uStack_360);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109668bd0; end: 109668dd7;  */

long FUN_109668bd0(long param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 auStack_370 [2];
  char cStack_359;
  double adStack_358 [2];
  char cStack_341;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  cVar1 = *(char *)(param_1 + 9);
  func_0x000107c31940(&uStack_180,&UNK_10f57b5ee);
  FUN_10965a66c(cVar1 != '\0',&uStack_180);
  if (uStack_170._7_1_ < '\0') {
    __ZdlPv(uStack_180);
  }
  *(undefined2 *)(param_1 + 0x165) = 0x101;
  if (*(char *)(param_1 + 9) == '\x02') {
    *(undefined2 *)(param_1 + 0x15a) = 0x146e;
    *(undefined1 *)(param_1 + 0x164) = 1;
    return 1;
  }
  if (*(char *)(param_1 + 9) == '\x03') {
    if (1 < iRam00000001132dfb08) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_10926db08(&uStack_180);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      func_0x000107c31940(auStack_198,&UNK_10f57b3e1);
      func_0x000107c31940(auStack_1b0,&UNK_10f57b62e);
      FUN_109671348(&uStack_180,2,auStack_198,auStack_1b0,0x85);
      FUN_1092b4db8();
      if (cStack_199 < '\0') {
        __ZdlPv(auStack_1b0[0]);
      }
      if (cStack_181 < '\0') {
        __ZdlPv(auStack_198[0]);
      }
      FUN_109671170(&uStack_180);
    }
    return 0;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar4 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  FUN_109671170(&uStack_180);
  __Unwind_Resume();
  if (*(short *)(lVar2 + 0x15a) == 0x4ce) {
    FUN_10965dfa0();
    FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*puVar4,0x7da);
    cVar1 = *(char *)(lVar2 + 0x151);
    uVar6 = 0x3ff0000000000000;
    if (cVar1 == '\x01') {
      uVar6 = 0;
    }
    uVar7 = 0x3ff0000000000000;
    if (cVar1 != '\0') {
      uVar7 = uVar6;
    }
    dVar8 = 0.0;
    if (cVar1 != '\0') {
      dVar8 = 1.0;
    }
    FUN_1095fb63c(uVar7,*(undefined8 *)*puVar4,0x7e4);
    lVar2 = *(long *)*puVar4;
    uVar3 = 0x7f8;
  }
  else {
    lVar5 = lVar2;
    FUN_10965de3c();
    if (*(short *)(lVar2 + 0x15a) == 0x146e) {
      return lVar5;
    }
    dVar8 = 1.0;
    if (*(char *)(lVar2 + 0x164) == '\0') {
      dVar8 = 0.0;
    }
    lVar2 = *(long *)*puVar4;
    uVar3 = 0x9c4;
  }
  lVar5 = *(long *)(lVar2 + 8);
  if (lVar5 != 0) {
    if (uVar3 < 0x92d) {
      if (uVar3 < 0x816) {
        if (uVar3 < 0x7fd) {
          if (uVar3 == 0x7da) {
            iRam00000001132dfb70 = (int)dVar8;
            if (7 < iRam00000001132dfb70) {
              iRam00000001132dfb70 = 8;
            }
            if (iRam00000001132dfb08 < 3) {
              iRam00000001132e8f30 = iRam00000001132dfb70;
              return 1;
            }
            uStack_200 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            uStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            iRam00000001132e8f30 = iRam00000001132dfb70;
            FUN_10926db08(&uStack_340);
            uStack_238 = CONCAT44(uStack_238._4_4_,3);
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_200 = uStack_200 & 0xffffffff00000000;
            func_0x000107c31940(adStack_358,&UNK_10f576c08);
            func_0x000107c31940(auStack_370,&UNK_10f577183);
            FUN_109671348(&uStack_340,3,adStack_358,auStack_370,0xb23);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            if (cStack_359 < '\0') {
              __ZdlPv(auStack_370[0]);
            }
            if (cStack_341 < '\0') {
              __ZdlPv(adStack_358[0]);
            }
            FUN_109671170(&uStack_340);
            return 1;
          }
          if (uVar3 == 0x7e4) {
            func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
            adStack_358[0] = dVar8;
            FUN_1095d7010(lVar5,&uStack_340,2,adStack_358);
          }
          else {
            if (uVar3 != 0x7f8) {
              return 0;
            }
            func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
            adStack_358[0] = dVar8;
            FUN_1095d7010(lVar5,&uStack_340,3,adStack_358);
          }
        }
        else if (uVar3 < 0x807) {
          if (uVar3 == 0x7fd) {
            func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
            adStack_358[0] = dVar8;
            FUN_1095d7010(lVar5,&uStack_340,5,adStack_358);
          }
          else {
            if (uVar3 != 0x804) {
              return 0;
            }
            func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
            adStack_358[0] = dVar8;
            FUN_1095d7010(lVar5,&uStack_340,6,adStack_358);
          }
        }
        else if (uVar3 == 0x807) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x15,adStack_358);
        }
        else {
          if (uVar3 != 0x80c) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x13,adStack_358);
        }
      }
      else if (uVar3 < 0x8d4) {
        if (uVar3 == 0x816) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x14,adStack_358);
        }
        else if (uVar3 == 0x8ca) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,7,adStack_358);
        }
        else {
          if (uVar3 != 0x8cf) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,8,adStack_358);
        }
      }
      else if (uVar3 < 0x8fc) {
        if (uVar3 == 0x8d4) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,9,adStack_358);
        }
        else {
          if (uVar3 != 0x8d5) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,10,adStack_358);
        }
      }
      else if (uVar3 == 0x8fc) {
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x11,adStack_358);
      }
      else {
        if (uVar3 != 0x92c) {
          return 0;
        }
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x18,adStack_358);
      }
    }
    else if (uVar3 < 0x9ce) {
      if (uVar3 < 0x960) {
        if (uVar3 == 0x92d) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x17,adStack_358);
        }
        else if (uVar3 == 0x92e) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x16,adStack_358);
        }
        else {
          if (uVar3 != 0x94c) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x21,adStack_358);
        }
      }
      else if (uVar3 < 0x993) {
        if (uVar3 == 0x960) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x1e,adStack_358);
        }
        else {
          if (uVar3 != 0x992) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x1f,adStack_358);
        }
      }
      else if (uVar3 == 0x993) {
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x20,adStack_358);
      }
      else {
        if (uVar3 != 0x9c4) {
          return 0;
        }
        FUN_1095fb63c(dVar8,lVar2,0x807);
        if (dVar8 != 0.0) {
          FUN_1095fb63c(0,lVar2,0x816);
        }
        uVar6 = *(undefined8 *)(lVar2 + 8);
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(uVar6,&uStack_340,0x22,adStack_358);
      }
    }
    else if (uVar3 < 0xa32) {
      if (uVar3 < 0xa00) {
        if (uVar3 == 0x9ce) {
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x19,adStack_358);
        }
        else {
          if (uVar3 != 0x9f6) {
            return 0;
          }
          func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
          adStack_358[0] = dVar8;
          FUN_1095d7010(lVar5,&uStack_340,0x28,adStack_358);
        }
      }
      else if (uVar3 == 0xa00) {
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x29,adStack_358);
      }
      else {
        if (uVar3 != 0xa28) {
          return 0;
        }
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x2c,adStack_358);
      }
    }
    else if (uVar3 < 0xa46) {
      if (uVar3 == 0xa32) {
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x2d,adStack_358);
      }
      else {
        if (uVar3 != 0xa3c) {
          return 0;
        }
        func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
        adStack_358[0] = dVar8;
        FUN_1095d7010(lVar5,&uStack_340,0x2e,adStack_358);
      }
    }
    else if (uVar3 == 0xa46) {
      func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
      adStack_358[0] = dVar8;
      FUN_1095d7010(lVar5,&uStack_340,0x2f,adStack_358);
    }
    else {
      if (uVar3 != 10000) {
        return 0;
      }
      func_0x000107c31940(&uStack_340,&UNK_10f576f3b);
      adStack_358[0] = dVar8;
      FUN_1095d7010(lVar5,&uStack_340,0,adStack_358);
    }
    if (uStack_330._7_1_ < '\0') {
      __ZdlPv(uStack_340);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109668dd8; end: 109668e6f;  */

long FUN_109668dd8(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  double adStack_1a8 [2];
  char cStack_191;
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
  ulong uStack_50;
  
  if (*(short *)(param_1 + 0x15a) == 0x4ce) {
    FUN_10965dfa0();
    FUN_1095fb63c(0x3ff0000000000000,*(undefined8 *)*param_2,0x7da);
    cVar1 = *(char *)(param_1 + 0x151);
    uVar5 = 0x3ff0000000000000;
    if (cVar1 == '\x01') {
      uVar5 = 0;
    }
    uVar6 = 0x3ff0000000000000;
    if (cVar1 != '\0') {
      uVar6 = uVar5;
    }
    dVar7 = 0.0;
    if (cVar1 != '\0') {
      dVar7 = 1.0;
    }
    FUN_1095fb63c(uVar6,*(undefined8 *)*param_2,0x7e4);
    lVar2 = *(long *)*param_2;
    uVar3 = 0x7f8;
  }
  else {
    lVar2 = param_1;
    FUN_10965de3c();
    if (*(short *)(param_1 + 0x15a) == 0x146e) {
      return lVar2;
    }
    dVar7 = 1.0;
    if (*(char *)(param_1 + 0x164) == '\0') {
      dVar7 = 0.0;
    }
    lVar2 = *(long *)*param_2;
    uVar3 = 0x9c4;
  }
  lVar4 = *(long *)(lVar2 + 8);
  if (lVar4 != 0) {
    if (uVar3 < 0x92d) {
      if (uVar3 < 0x816) {
        if (uVar3 < 0x7fd) {
          if (uVar3 == 0x7da) {
            iRam00000001132dfb70 = (int)dVar7;
            if (7 < iRam00000001132dfb70) {
              iRam00000001132dfb70 = 8;
            }
            if (iRam00000001132dfb08 < 3) {
              iRam00000001132e8f30 = iRam00000001132dfb70;
              return 1;
            }
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_58 = 0;
            uStack_60 = 0;
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
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            iRam00000001132e8f30 = iRam00000001132dfb70;
            FUN_10926db08(&uStack_190);
            uStack_88 = CONCAT44(uStack_88._4_4_,3);
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            func_0x000107c31940(adStack_1a8,&UNK_10f576c08);
            func_0x000107c31940(auStack_1c0,&UNK_10f577183);
            FUN_109671348(&uStack_190,3,adStack_1a8,auStack_1c0,0xb23);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            if (cStack_1a9 < '\0') {
              __ZdlPv(auStack_1c0[0]);
            }
            if (cStack_191 < '\0') {
              __ZdlPv(adStack_1a8[0]);
            }
            FUN_109671170(&uStack_190);
            return 1;
          }
          if (uVar3 == 0x7e4) {
            func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
            adStack_1a8[0] = dVar7;
            FUN_1095d7010(lVar4,&uStack_190,2,adStack_1a8);
          }
          else {
            if (uVar3 != 0x7f8) {
              return 0;
            }
            func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
            adStack_1a8[0] = dVar7;
            FUN_1095d7010(lVar4,&uStack_190,3,adStack_1a8);
          }
        }
        else if (uVar3 < 0x807) {
          if (uVar3 == 0x7fd) {
            func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
            adStack_1a8[0] = dVar7;
            FUN_1095d7010(lVar4,&uStack_190,5,adStack_1a8);
          }
          else {
            if (uVar3 != 0x804) {
              return 0;
            }
            func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
            adStack_1a8[0] = dVar7;
            FUN_1095d7010(lVar4,&uStack_190,6,adStack_1a8);
          }
        }
        else if (uVar3 == 0x807) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x15,adStack_1a8);
        }
        else {
          if (uVar3 != 0x80c) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x13,adStack_1a8);
        }
      }
      else if (uVar3 < 0x8d4) {
        if (uVar3 == 0x816) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x14,adStack_1a8);
        }
        else if (uVar3 == 0x8ca) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,7,adStack_1a8);
        }
        else {
          if (uVar3 != 0x8cf) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,8,adStack_1a8);
        }
      }
      else if (uVar3 < 0x8fc) {
        if (uVar3 == 0x8d4) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,9,adStack_1a8);
        }
        else {
          if (uVar3 != 0x8d5) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,10,adStack_1a8);
        }
      }
      else if (uVar3 == 0x8fc) {
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x11,adStack_1a8);
      }
      else {
        if (uVar3 != 0x92c) {
          return 0;
        }
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x18,adStack_1a8);
      }
    }
    else if (uVar3 < 0x9ce) {
      if (uVar3 < 0x960) {
        if (uVar3 == 0x92d) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x17,adStack_1a8);
        }
        else if (uVar3 == 0x92e) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x16,adStack_1a8);
        }
        else {
          if (uVar3 != 0x94c) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x21,adStack_1a8);
        }
      }
      else if (uVar3 < 0x993) {
        if (uVar3 == 0x960) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x1e,adStack_1a8);
        }
        else {
          if (uVar3 != 0x992) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x1f,adStack_1a8);
        }
      }
      else if (uVar3 == 0x993) {
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x20,adStack_1a8);
      }
      else {
        if (uVar3 != 0x9c4) {
          return 0;
        }
        FUN_1095fb63c(dVar7,lVar2,0x807);
        if (dVar7 != 0.0) {
          FUN_1095fb63c(0,lVar2,0x816);
        }
        uVar5 = *(undefined8 *)(lVar2 + 8);
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(uVar5,&uStack_190,0x22,adStack_1a8);
      }
    }
    else if (uVar3 < 0xa32) {
      if (uVar3 < 0xa00) {
        if (uVar3 == 0x9ce) {
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x19,adStack_1a8);
        }
        else {
          if (uVar3 != 0x9f6) {
            return 0;
          }
          func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
          adStack_1a8[0] = dVar7;
          FUN_1095d7010(lVar4,&uStack_190,0x28,adStack_1a8);
        }
      }
      else if (uVar3 == 0xa00) {
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x29,adStack_1a8);
      }
      else {
        if (uVar3 != 0xa28) {
          return 0;
        }
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x2c,adStack_1a8);
      }
    }
    else if (uVar3 < 0xa46) {
      if (uVar3 == 0xa32) {
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x2d,adStack_1a8);
      }
      else {
        if (uVar3 != 0xa3c) {
          return 0;
        }
        func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
        adStack_1a8[0] = dVar7;
        FUN_1095d7010(lVar4,&uStack_190,0x2e,adStack_1a8);
      }
    }
    else if (uVar3 == 0xa46) {
      func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
      adStack_1a8[0] = dVar7;
      FUN_1095d7010(lVar4,&uStack_190,0x2f,adStack_1a8);
    }
    else {
      if (uVar3 != 10000) {
        return 0;
      }
      func_0x000107c31940(&uStack_190,&UNK_10f576f3b);
      adStack_1a8[0] = dVar7;
      FUN_1095d7010(lVar4,&uStack_190,0,adStack_1a8);
    }
    if (uStack_180._7_1_ < '\0') {
      __ZdlPv(uStack_190);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109668e70; end: 109668ecf;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb670) */
/* WARNING: Removing unreachable block (ram,0x0001095fb76c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb774) */
/* WARNING: Removing unreachable block (ram,0x0001095fb940) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fb948) */
/* WARNING: Removing unreachable block (ram,0x0001095fb950) */
/* WARNING: Removing unreachable block (ram,0x0001095fb960) */
/* WARNING: Removing unreachable block (ram,0x0001095fb964) */
/* WARNING: Removing unreachable block (ram,0x0001095fb968) */
/* WARNING: Removing unreachable block (ram,0x0001095fb978) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */

undefined8 FUN_109668e70(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_1a8 [3];
  undefined8 auStack_190 [2];
  char cStack_179;
  
  uVar2 = 0x3ff0000000000000;
  if (param_2 == 1) {
    uVar2 = 0;
  }
  uVar3 = 0x3ff0000000000000;
  if (param_2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x3ff0000000000000;
  }
  FUN_1095fb63c(uVar3,*(undefined8 *)*param_1,0x7e4);
  lVar1 = *(long *)(*(long *)*param_1 + 8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c31940(auStack_190,&UNK_10f576f3b);
    auStack_1a8[0] = uVar2;
    FUN_1095d7010(lVar1,auStack_190,3,auStack_1a8);
    if (cStack_179 < '\0') {
      __ZdlPv(auStack_190[0]);
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109668ed0; end: 109668eef;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb670) */
/* WARNING: Removing unreachable block (ram,0x0001095fb76c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb774) */
/* WARNING: Removing unreachable block (ram,0x0001095fb940) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fb948) */
/* WARNING: Removing unreachable block (ram,0x0001095fb950) */
/* WARNING: Removing unreachable block (ram,0x0001095fb960) */
/* WARNING: Removing unreachable block (ram,0x0001095fb964) */
/* WARNING: Removing unreachable block (ram,0x0001095fb968) */
/* WARNING: Removing unreachable block (ram,0x0001095fb978) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */

long FUN_109668ed0(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_1a8 [3];
  undefined8 auStack_190 [2];
  char cStack_179;
  
  *(char *)(param_1 + 0x151) = (char)param_3;
  if (*(short *)(param_1 + 0x15a) == 0x4ce) {
    uVar2 = 0x3ff0000000000000;
    if (param_3 == 1) {
      uVar2 = 0;
    }
    uVar3 = 0x3ff0000000000000;
    if (param_3 != 0) {
      uVar3 = uVar2;
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = 0x3ff0000000000000;
    }
    FUN_1095fb63c(uVar3,*(undefined8 *)*param_2,0x7e4);
    lVar1 = *(long *)(*(long *)*param_2 + 8);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x000107c31940(auStack_190,&UNK_10f576f3b);
      auStack_1a8[0] = uVar2;
      FUN_1095d7010(lVar1,auStack_190,3,auStack_1a8);
      if (cStack_179 < '\0') {
        __ZdlPv(auStack_190[0]);
      }
      lVar1 = 1;
    }
    return lVar1;
  }
  return param_1;
}



/* Entry: 109668ef0; end: 109668f4f;  */

undefined8 * FUN_109668ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00420;
  func_0x0001095c99b8(param_1 + 1);
  return param_1;
}



/* Entry: 109668f50; end: 109668f9b;  */

undefined8 * FUN_109668f50(undefined8 *param_1)

{
  FUN_1095f1dcc(*param_1);
  FUN_109668f9c(param_1,0);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  FUN_109668f9c(param_1,0);
  return param_1;
}



/* Entry: 109668f9c; end: 109668fc3;  */

void FUN_109668f9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095f1d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109668fc4; end: 1096690bf;  */

undefined8
FUN_109668fc4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  uVar1 = *param_1;
  FUN_1095f1f44(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  __ZNSt3__15mutex6unlockEv(param_1 + 1);
  return uVar1;
}



/* Entry: 1096690c0; end: 10966910f;  */

undefined8 FUN_1096690c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  uVar1 = *param_1;
  FUN_1095f1dcc(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 1);
  return uVar1;
}


