/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10918ed2c; end: 10918f21f;  */

void FUN_10918ed2c(undefined8 param_1,long *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 auStack_140 [2];
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
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
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [32];
  
  FUN_10918f220(auStack_d0,param_3,(int)param_2[1]);
  uStack_130 = 0x42ff0000;
  uVar11 = (ulong)&uStack_130 | 8;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = uVar11;
  puStack_e8 = &uStack_e0;
  if ((*param_3 & 0xff8) == 0) {
    (**(code **)(*param_2 + 0x10))(&uStack_190,param_2,auStack_d0);
    if (lStack_f8 != 0) {
      piVar1 = (int *)(lStack_f8 + 0x14);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(&uStack_130);
      }
    }
    if (0 < iStack_12c) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_f0 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iStack_12c);
    }
    uStack_128 = SUB84(plStack_188,0);
    uStack_124 = (undefined4)((ulong)plStack_188 >> 0x20);
    uStack_130 = SUB84(uStack_190,0);
    uStack_118 = (undefined4)uStack_178;
    uStack_114 = (undefined4)((ulong)uStack_178 >> 0x20);
    uStack_120 = (undefined4)uStack_180;
    uStack_11c = (undefined4)((ulong)uStack_180 >> 0x20);
    uStack_108 = (undefined4)uStack_168;
    uStack_104 = (undefined4)((ulong)uStack_168 >> 0x20);
    uStack_110 = (undefined4)uStack_170;
    uStack_10c = (undefined4)((ulong)uStack_170 >> 0x20);
    lStack_f8 = lStack_158;
    uStack_100 = (undefined4)uStack_160;
    uStack_fc = (undefined4)((ulong)uStack_160 >> 0x20);
    iStack_12c = uStack_190._4_4_;
    uVar6 = uStack_f0;
    puVar13 = puStack_e8;
    if ((puStack_e8 != &uStack_e0) &&
       (uVar6 = uVar11, puVar13 = &uStack_e0, puStack_e8 != (undefined8 *)0x0)) {
      _free(puStack_e8[-1]);
    }
    puStack_e8 = puVar13;
    uStack_f0 = uVar6;
    if (uStack_190._4_4_ < 3) {
      puVar13 = (undefined8 *)((ulong)&uStack_190 | 4);
      *puStack_e8 = *puStack_148;
      puStack_e8[1] = puStack_148[1];
      uStack_190 = (long *)CONCAT44(uStack_190._4_4_,0x42ff0000);
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      *(undefined8 *)((long)puVar13 + 0x34) = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      if (puStack_148 != auStack_140) {
        _free(puStack_148[-1]);
      }
    }
    else {
      uStack_f0 = uStack_150;
      puStack_e8 = puStack_148;
    }
  }
  else {
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_190 = (long *)CONCAT44(uStack_190._4_4_,0x1010000);
    auStack_1c0[0] = 0x2050000;
    plStack_1b8 = &lStack_1a8;
    uStack_1b0 = 0;
    plStack_188 = (long *)auStack_d0;
    FUN_109a3dcec(&uStack_190,auStack_1c0);
    if (lStack_1a0 != lStack_1a8) {
      uVar11 = 0;
      puVar13 = (undefined8 *)((ulong)&uStack_190 | 4);
      do {
        (**(code **)(*param_2 + 0x10))(&uStack_190,param_2,lStack_1a8 + uVar11 * 0x60);
        puVar12 = (undefined8 *)(lStack_1a8 + uVar11 * 0x60);
        if (puVar12[7] != 0) {
          piVar1 = (int *)(puVar12[7] + 0x14);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4(puVar12);
          }
        }
        puVar12[7] = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        if (0 < *(int *)((long)puVar12 + 4)) {
          lVar8 = 0;
          lVar9 = puVar12[8];
          do {
            *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)puVar12 + 4));
        }
        puVar12[1] = plStack_188;
        *puVar12 = uStack_190;
        puVar12[3] = uStack_178;
        puVar12[2] = uStack_180;
        puVar12[5] = uStack_168;
        puVar12[4] = uStack_170;
        puVar12[7] = lStack_158;
        puVar12[6] = uStack_160;
        puVar10 = (undefined8 *)puVar12[9];
        puVar2 = puVar12 + 10;
        iVar7 = uStack_190._4_4_;
        if (puVar10 != puVar2) {
          if (puVar10 != (undefined8 *)0x0) {
            _free(puVar10[-1]);
            iVar7 = uStack_190._4_4_;
          }
          puVar12[8] = puVar12 + 1;
          puVar12[9] = puVar2;
          puVar10 = puVar2;
        }
        if (iVar7 < 3) {
          *puVar10 = *puStack_148;
          puVar10[1] = puStack_148[1];
          uStack_190 = (long *)CONCAT44(uStack_190._4_4_,0x42ff0000);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if (puStack_148 != auStack_140) {
            _free(puStack_148[-1]);
          }
        }
        else {
          puVar12[9] = puStack_148;
          puVar12[8] = uStack_150;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (ulong)((lStack_1a0 - lStack_1a8 >> 5) * -0x5555555555555555));
    }
    uStack_190 = (long *)CONCAT44(uStack_190._4_4_,0x1050000);
    uStack_180 = 0;
    auStack_1c0[0] = 0x2010000;
    plStack_1b8 = (long *)&uStack_130;
    uStack_1b0 = 0;
    plStack_188 = &lStack_1a8;
    FUN_109a3ecac(&uStack_190,auStack_1c0);
    uStack_190 = &lStack_1a8;
    func_0x0001060c3a9c(&uStack_190);
  }
  uVar3 = *param_3 & 7;
  if (param_4 != 0xffffffff) {
    uVar3 = param_4;
  }
  FUN_10918f220(param_1,&uStack_130,uVar3);
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
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
  if (0 < iStack_12c) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_f0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_12c);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(auStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < iStack_cc) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_cc);
  }
  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_88 + -8));
  }
  return;
}



/* Entry: 10918f220; end: 10918f357;  */

void FUN_10918f220(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 auStack_38 [2];
  uint *puStack_30;
  undefined8 uStack_28;
  
  if ((*param_2 & 7) == param_3) {
    *param_1 = *param_2;
    uVar9 = param_2[1];
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    param_1[3] = param_2[3];
    uVar13 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 10);
    uVar14 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar13;
    *(undefined8 *)(param_1 + 10) = uVar15;
    *(undefined8 *)(param_1 + 8) = uVar14;
    lVar10 = *(long *)(param_2 + 0xe);
    uVar13 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar13;
    puVar12 = param_1 + 0x14;
    puVar12[0] = 0;
    puVar12[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar12;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar9 = param_2[1];
    }
    if (2 < (int)uVar9) {
      param_1[1] = 0;
      FUN_109a844cc(param_1,param_2[1],0,0,0);
      if (0 < (int)param_1[1]) {
        lVar10 = 0;
        lVar2 = *(long *)(param_2 + 0x10);
        lVar4 = *(long *)(param_2 + 0x12);
        lVar3 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0x12);
        do {
          *(undefined4 *)(lVar3 + lVar10 * 4) = *(undefined4 *)(lVar2 + lVar10 * 4);
          *(undefined8 *)(lVar5 + lVar10 * 8) = *(undefined8 *)(lVar4 + lVar10 * 8);
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)param_1[1]);
      }
      return;
    }
    puVar8 = *(undefined8 **)(param_2 + 0x12);
    puVar11 = *(undefined8 **)(param_1 + 0x12);
    *puVar11 = *puVar8;
    puVar11[1] = puVar8[1];
  }
  else {
    *param_1 = 0x42ff0000;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    puVar12 = param_1 + 0x14;
    puVar12[0] = 0;
    puVar12[1] = 0;
    *(uint **)(param_1 + 0x10) = param_1 + 2;
    *(uint **)(param_1 + 0x12) = puVar12;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    auStack_38[0] = 0x2010000;
    uStack_28 = 0;
    puStack_30 = param_1;
    FUN_109a41858(0x3ff0000000000000,0,param_2,auStack_38);
  }
  return;
}



/* Entry: 10918f358; end: 10918f403;  */

void FUN_10918f358(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 auStack_60 [2];
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  auStack_60[0] = 0x2010000;
  uStack_50 = 0;
  uStack_30 = 0xffffffffffffffff;
  puStack_58 = param_1;
  uStack_40 = param_2;
  uStack_28 = param_3;
  uStack_24 = param_3;
  FUN_109b437c0(auStack_48,auStack_60,0xffffffff,&uStack_28,&uStack_30,1,4);
  return;
}



/* Entry: 10918f404; end: 10918f4c3;  */

void FUN_10918f404(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_1a8 [2];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *aplStack_190 [44];
  
  uStack_198 = 0;
  auStack_1a8[0] = 0x1010000;
  uStack_1a0 = param_3;
  FUN_109a8239c(aplStack_190,0x3ff0000000000000,param_2,auStack_1a8);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*aplStack_190[0] + 0x18))(aplStack_190[0],aplStack_190,param_1,0xffffffff);
  FUN_10918eb6c(aplStack_190);
  return;
}



/* Entry: 10918f4c4; end: 10918f56f;  */

void FUN_10918f4c4(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *aplStack_190 [44];
  
  FUN_109a7cd1c(aplStack_190,param_2,param_3);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*aplStack_190[0] + 0x18))(aplStack_190[0],aplStack_190,param_1,0xffffffff);
  FUN_10918eb6c(aplStack_190);
  return;
}



/* Entry: 10918f570; end: 109190037;  */

void FUN_10918f570(undefined4 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  undefined4 uStack_628;
  int iStack_624;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f0;
  long lStack_5e8;
  undefined1 *puStack_5e0;
  undefined1 auStack_5d8 [16];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_588;
  long lStack_580;
  undefined1 *puStack_578;
  undefined1 auStack_570 [16];
  undefined4 uStack_560;
  int iStack_55c;
  undefined4 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_528;
  long lStack_520;
  undefined1 *puStack_518;
  undefined1 auStack_510 [272];
  undefined4 uStack_400;
  undefined8 uStack_3fc;
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
  long lStack_3c8;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
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
  long lStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [4];
  int iStack_33c;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [4];
  int iStack_2dc;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_248;
  long lStack_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [16];
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [272];
  
  puStack_558 = &uStack_220;
  uStack_220 = 0x42ff0000;
  lStack_1e0 = (long)&uStack_21c + 4;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_1f4 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0x1010000;
  uStack_560 = 0x2010000;
  uStack_550 = 0;
  uStack_280 = 0;
  dVar6 = (double)(1.0 / (float)*(int *)(param_2 + 0x20));
  puStack_1d8 = &uStack_1d0;
  puStack_1b8 = (undefined8 *)param_3;
  FUN_109b0f718(dVar6,dVar6,&uStack_1c0,&uStack_560,&uStack_280,0);
  FUN_10918f358(&uStack_280,&uStack_220,*(undefined4 *)(param_2 + 0x10));
  FUN_10918f404(&uStack_1c0,param_2 + 0x148,&uStack_220);
  FUN_10918f358(auStack_2e0,&uStack_1c0,*(undefined4 *)(param_2 + 0x10));
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
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
      func_0x000109a848d4(&uStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < iStack_1bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1bc);
  }
  if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_178 + -8));
  }
  FUN_10918f404(&uStack_1c0,param_2 + 0x88,&uStack_280);
  FUN_10918f4c4(auStack_340,auStack_2e0,&uStack_1c0);
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
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
      func_0x000109a848d4(&uStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < iStack_1bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1bc);
  }
  if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_178 + -8));
  }
  uStack_5c0 = *(undefined8 *)(param_2 + 0x18);
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_5b8 = 0;
  FUN_109a7c7d4(&uStack_560,param_2 + 0xe8,&uStack_5c0);
  uStack_400 = 0x42ff0000;
  lStack_3c0 = (long)&uStack_3fc + 4;
  uStack_3f4 = 0;
  uStack_3f0 = 0;
  uStack_3fc = 0;
  lStack_3c8 = 0;
  uStack_3cc = 0;
  uStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  puStack_3b8 = &uStack_3b0;
  (**(code **)(*(long *)CONCAT44(iStack_55c,uStack_560) + 0x18))
            ((long *)CONCAT44(iStack_55c,uStack_560),&uStack_560,&uStack_400,0xffffffff);
  FUN_109a7dfc8(&uStack_1c0,auStack_340,&uStack_400);
  uStack_3a0 = 0x42ff0000;
  lStack_360 = (long)&uStack_39c + 4;
  uStack_394 = 0;
  uStack_390 = 0;
  uStack_39c = 0;
  lStack_368 = 0;
  uStack_36c = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_38c = 0;
  uStack_388 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  puStack_358 = &uStack_350;
  (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
            ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,&uStack_3a0,0xffffffff);
  FUN_10918eb6c(&uStack_1c0);
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
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
      func_0x000109a848d4(&uStack_400);
    }
  }
  lStack_3c8 = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  if (0 < (int)uStack_3fc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_3c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_3fc);
  }
  if (puStack_3b8 != &uStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
    _free(puStack_3b8[-1]);
  }
  FUN_10918eb6c(&uStack_560);
  FUN_10918f404(&uStack_1c0,&uStack_3a0,param_2 + 0x88);
  FUN_10918f4c4(&uStack_560,&uStack_280,&uStack_1c0);
  if (lStack_188 != 0) {
    piVar1 = (int *)(lStack_188 + 0x14);
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
      func_0x000109a848d4(&uStack_1c0);
    }
  }
  lStack_188 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (0 < iStack_1bc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_180 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1bc);
  }
  if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_178 + -8));
  }
  FUN_10918f358(&uStack_400,&uStack_3a0,*(undefined4 *)(param_2 + 0x10));
  FUN_10918f358(&uStack_5c0,&uStack_560,*(undefined4 *)(param_2 + 0x10));
  uStack_1b0 = 0;
  uStack_1c0 = 0x1010000;
  puStack_620 = (undefined8 *)&uStack_400;
  uStack_628 = 0x2010000;
  uStack_618 = 0;
  uStack_5c8 = 0;
  puStack_1b8 = puStack_620;
  FUN_109b0f718((double)*(int *)(param_2 + 0x20),(double)*(int *)(param_2 + 0x20),&uStack_1c0,
                &uStack_628,&uStack_5c8,1);
  uStack_1b0 = 0;
  uStack_1c0 = 0x1010000;
  puStack_620 = &uStack_5c0;
  uStack_628 = 0x2010000;
  uStack_618 = 0;
  uStack_5c8 = 0;
  puStack_1b8 = puStack_620;
  FUN_109b0f718((double)*(int *)(param_2 + 0x20),(double)*(int *)(param_2 + 0x20),&uStack_1c0,
                &uStack_628,&uStack_5c8,1);
  FUN_10918f404(&uStack_628,&uStack_400,param_2 + 0x28);
  FUN_109a7c6f4(&uStack_1c0,&uStack_628,&uStack_5c0);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*(long *)CONCAT44(iStack_1bc,uStack_1c0) + 0x18))
            ((long *)CONCAT44(iStack_1bc,uStack_1c0),&uStack_1c0,param_1,0xffffffff);
  FUN_10918eb6c(&uStack_1c0);
  if (lStack_5f0 != 0) {
    piVar1 = (int *)(lStack_5f0 + 0x14);
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
      func_0x000109a848d4(&uStack_628);
    }
  }
  lStack_5f0 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  if (0 < iStack_624) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_5e8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_624);
  }
  if (puStack_5e0 != auStack_5d8 && puStack_5e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_5e0 + -8));
  }
  if (lStack_588 != 0) {
    piVar1 = (int *)(lStack_588 + 0x14);
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
      func_0x000109a848d4(&uStack_5c0);
    }
  }
  lStack_588 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  if (0 < uStack_5c0._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_580 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_5c0._4_4_);
  }
  if (puStack_578 != auStack_570 && puStack_578 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_578 + -8));
  }
  if (lStack_3c8 != 0) {
    piVar1 = (int *)(lStack_3c8 + 0x14);
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
      func_0x000109a848d4(&uStack_400);
    }
  }
  lStack_3c8 = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  if (0 < (int)uStack_3fc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_3c0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_3fc);
  }
  if (puStack_3b8 != &uStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
    _free(puStack_3b8[-1]);
  }
  if (lStack_528 != 0) {
    piVar1 = (int *)(lStack_528 + 0x14);
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
      func_0x000109a848d4(&uStack_560);
    }
  }
  lStack_528 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  if (0 < iStack_55c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_520 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_55c);
  }
  if (puStack_518 != auStack_510 && puStack_518 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_518 + -8));
  }
  if (lStack_368 != 0) {
    piVar1 = (int *)(lStack_368 + 0x14);
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
      func_0x000109a848d4(&uStack_3a0);
    }
  }
  lStack_368 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  if (0 < (int)uStack_39c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_360 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_39c);
  }
  if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
    _free(puStack_358[-1]);
  }
  if (lStack_308 != 0) {
    piVar1 = (int *)(lStack_308 + 0x14);
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
      func_0x000109a848d4(auStack_340);
    }
  }
  lStack_308 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  if (0 < iStack_33c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_300 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_33c);
  }
  if (puStack_2f8 != auStack_2f0 && puStack_2f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2f8 + -8));
  }
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
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
      func_0x000109a848d4(auStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  if (0 < iStack_2dc) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_2a0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_2dc);
  }
  if (puStack_298 != auStack_290 && puStack_298 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_298 + -8));
  }
  if (lStack_248 != 0) {
    piVar1 = (int *)(lStack_248 + 0x14);
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
      func_0x000109a848d4(&uStack_280);
    }
  }
  lStack_248 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  if (0 < uStack_280._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_240 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_280._4_4_);
  }
  if (puStack_238 != auStack_230 && puStack_238 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_238 + -8));
  }
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
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
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  if (0 < (int)uStack_21c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_21c);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  return;
}



/* Entry: 109190038; end: 10919263f;  */

undefined8 *
FUN_109190038(undefined8 param_1,undefined8 *param_2,uint *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  ulong uVar15;
  long **pplVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  int *piVar28;
  ulong uVar29;
  int *piVar30;
  undefined4 uStack_ab0;
  int iStack_aac;
  undefined8 uStack_aa8;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  long lStack_a78;
  undefined8 *puStack_a70;
  undefined8 *puStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_950;
  undefined8 *puStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined4 auStack_930 [2];
  undefined8 *puStack_928;
  undefined8 uStack_920;
  undefined4 auStack_918 [2];
  undefined4 *puStack_910;
  undefined8 uStack_908;
  undefined4 uStack_900;
  int iStack_8fc;
  undefined8 uStack_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_8a0;
  int iStack_89c;
  undefined8 uStack_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  long lStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined4 uStack_840;
  int iStack_83c;
  undefined8 uStack_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined4 uStack_7e0;
  int iStack_7dc;
  undefined8 uStack_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_780;
  int iStack_77c;
  undefined8 uStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined4 *puStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long lStack_6e8;
  long lStack_6e0;
  undefined1 *puStack_6d8;
  undefined1 auStack_6d0 [272];
  long *plStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_460;
  undefined8 uStack_45c;
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
  long lStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  uint *puStack_3f8;
  undefined8 uStack_3f0;
  uint uStack_2a0;
  int iStack_29c;
  undefined8 uStack_298;
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
  long lStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
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
  
  *param_2 = &PTR_FUN_110adf148;
  plVar23 = param_2 + 2;
  *plVar23 = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 5) = 0x42ff0000;
  piVar30 = (int *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  piVar30[0] = 0;
  piVar30[1] = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x54) = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  puVar20 = param_2 + 0xf;
  param_2[0x10] = 0;
  *puVar20 = 0;
  param_2[0xd] = param_2 + 6;
  param_2[0xe] = puVar20;
  iVar11 = 0;
  if (param_5 != 0) {
    iVar11 = param_4 / param_5;
  }
  param_2[0x11] = (double)iVar11;
  param_2[0x12] = param_1;
  *(int *)(param_2 + 0x13) = param_5;
  puVar24 = param_2 + 0x14;
  *(undefined4 *)puVar24 = 0x42ff0000;
  piVar28 = (int *)((long)param_2 + 0xa4);
  *(undefined8 *)((long)param_2 + 0xac) = 0;
  piVar28[0] = 0;
  piVar28[1] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  *(undefined8 *)((long)param_2 + 0xcc) = 0;
  *(undefined8 *)((long)param_2 + 0xc4) = 0;
  *(undefined8 *)((long)param_2 + 0xbc) = 0;
  *(undefined8 *)((long)param_2 + 0xb4) = 0;
  puVar21 = param_2 + 0x1e;
  param_2[0x1f] = 0;
  *puVar21 = 0;
  param_2[0x1c] = param_2 + 0x15;
  param_2[0x1d] = puVar21;
  puVar1 = param_2 + 0x20;
  *(undefined4 *)(param_2 + 0x20) = 0x42ff0000;
  param_2[0x27] = 0;
  param_2[0x26] = 0;
  *(undefined8 *)((long)param_2 + 300) = 0;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  *(undefined8 *)((long)param_2 + 0x11c) = 0;
  *(undefined8 *)((long)param_2 + 0x114) = 0;
  *(undefined8 *)((long)param_2 + 0x10c) = 0;
  *(undefined8 *)((long)param_2 + 0x104) = 0;
  puVar22 = param_2 + 0x2a;
  param_2[0x28] = param_2 + 0x21;
  param_2[0x29] = puVar22;
  param_2[0x2b] = 0;
  param_2[0x2a] = 0;
  puVar2 = param_2 + 0x2c;
  *(undefined4 *)(param_2 + 0x2c) = 0x42ff0000;
  param_2[0x33] = 0;
  param_2[0x32] = 0;
  *(undefined8 *)((long)param_2 + 0x18c) = 0;
  *(undefined8 *)((long)param_2 + 0x184) = 0;
  *(undefined8 *)((long)param_2 + 0x17c) = 0;
  *(undefined8 *)((long)param_2 + 0x174) = 0;
  *(undefined8 *)((long)param_2 + 0x16c) = 0;
  *(undefined8 *)((long)param_2 + 0x164) = 0;
  puVar3 = param_2 + 0x36;
  param_2[0x34] = param_2 + 0x2d;
  param_2[0x35] = puVar3;
  param_2[0x37] = 0;
  param_2[0x36] = 0;
  puVar25 = param_2 + 0x38;
  *(undefined4 *)puVar25 = 0x42ff0000;
  param_2[0x3f] = 0;
  param_2[0x3e] = 0;
  *(undefined8 *)((long)param_2 + 0x1dc) = 0;
  *(undefined8 *)((long)param_2 + 0x1d4) = 0;
  *(undefined8 *)((long)param_2 + 0x1cc) = 0;
  *(undefined8 *)((long)param_2 + 0x1c4) = 0;
  *(undefined8 *)((long)param_2 + 0x1ec) = 0;
  *(undefined8 *)((long)param_2 + 0x1e4) = 0;
  param_2[0x40] = param_2 + 0x39;
  param_2[0x41] = param_2 + 0x42;
  param_2[0x43] = 0;
  param_2[0x42] = 0;
  puVar4 = param_2 + 0x44;
  *(undefined4 *)(param_2 + 0x44) = 0x42ff0000;
  param_2[0x4b] = 0;
  param_2[0x4a] = 0;
  *(undefined8 *)((long)param_2 + 0x23c) = 0;
  *(undefined8 *)((long)param_2 + 0x234) = 0;
  *(undefined8 *)((long)param_2 + 0x24c) = 0;
  *(undefined8 *)((long)param_2 + 0x244) = 0;
  *(undefined8 *)((long)param_2 + 0x22c) = 0;
  *(undefined8 *)((long)param_2 + 0x224) = 0;
  param_2[0x4c] = param_2 + 0x45;
  param_2[0x4d] = param_2 + 0x4e;
  param_2[0x4f] = 0;
  param_2[0x4e] = 0;
  puVar5 = param_2 + 0x50;
  *(undefined4 *)(param_2 + 0x50) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x28c) = 0;
  *(undefined8 *)((long)param_2 + 0x284) = 0;
  *(undefined8 *)((long)param_2 + 0x29c) = 0;
  *(undefined8 *)((long)param_2 + 0x294) = 0;
  *(undefined8 *)((long)param_2 + 0x2ac) = 0;
  *(undefined8 *)((long)param_2 + 0x2a4) = 0;
  param_2[0x57] = 0;
  param_2[0x56] = 0;
  param_2[0x58] = param_2 + 0x51;
  param_2[0x59] = param_2 + 0x5a;
  param_2[0x5b] = 0;
  param_2[0x5a] = 0;
  puVar6 = param_2 + 0x5c;
  *(undefined4 *)(param_2 + 0x5c) = 0x42ff0000;
  param_2[99] = 0;
  param_2[0x62] = 0;
  *(undefined8 *)((long)param_2 + 0x2fc) = 0;
  *(undefined8 *)((long)param_2 + 0x2f4) = 0;
  *(undefined8 *)((long)param_2 + 0x30c) = 0;
  *(undefined8 *)((long)param_2 + 0x304) = 0;
  *(undefined8 *)((long)param_2 + 0x2ec) = 0;
  *(undefined8 *)((long)param_2 + 0x2e4) = 0;
  param_2[100] = param_2 + 0x5d;
  param_2[0x65] = param_2 + 0x66;
  param_2[0x67] = 0;
  param_2[0x66] = 0;
  puVar7 = param_2 + 0x68;
  *(undefined4 *)(param_2 + 0x68) = 0x42ff0000;
  param_2[0x6f] = 0;
  param_2[0x6e] = 0;
  *(undefined8 *)((long)param_2 + 0x35c) = 0;
  *(undefined8 *)((long)param_2 + 0x354) = 0;
  *(undefined8 *)((long)param_2 + 0x36c) = 0;
  *(undefined8 *)((long)param_2 + 0x364) = 0;
  *(undefined8 *)((long)param_2 + 0x34c) = 0;
  *(undefined8 *)((long)param_2 + 0x344) = 0;
  param_2[0x70] = param_2 + 0x69;
  param_2[0x71] = param_2 + 0x72;
  param_2[0x73] = 0;
  param_2[0x72] = 0;
  puVar8 = param_2 + 0x74;
  *(undefined4 *)(param_2 + 0x74) = 0x42ff0000;
  param_2[0x7b] = 0;
  param_2[0x7a] = 0;
  *(undefined8 *)((long)param_2 + 0x3bc) = 0;
  *(undefined8 *)((long)param_2 + 0x3b4) = 0;
  *(undefined8 *)((long)param_2 + 0x3cc) = 0;
  *(undefined8 *)((long)param_2 + 0x3c4) = 0;
  *(undefined8 *)((long)param_2 + 0x3ac) = 0;
  *(undefined8 *)((long)param_2 + 0x3a4) = 0;
  param_2[0x7c] = param_2 + 0x75;
  param_2[0x7d] = param_2 + 0x7e;
  param_2[0x7f] = 0;
  param_2[0x7e] = 0;
  uStack_2a0 = 0x42ff0000;
  uStack_260 = (ulong)&uStack_2a0 | 8;
  uStack_298._4_4_ = 0;
  uStack_290 = 0;
  iStack_29c = 0;
  uStack_298._0_4_ = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_400 = 0x2010000;
  uStack_3f0 = 0;
  puStack_3f8 = &uStack_2a0;
  puStack_258 = &uStack_250;
  FUN_109a479a0(param_3,&uStack_400);
  if (param_2[0xc] != 0) {
    piVar9 = (int *)(param_2[0xc] + 0x14);
    do {
      iVar11 = *piVar9;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(param_2 + 5);
    }
  }
  param_2[0xc] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  if (0 < *(int *)((long)param_2 + 0x2c)) {
    lVar19 = 0;
    lVar26 = param_2[0xd];
    do {
      *(undefined4 *)(lVar26 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *piVar30);
  }
  param_2[6] = CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
  param_2[5] = CONCAT44(iStack_29c,uStack_2a0);
  param_2[8] = CONCAT44(uStack_284,uStack_288);
  param_2[7] = CONCAT44(uStack_28c,uStack_290);
  param_2[10] = CONCAT44(uStack_274,uStack_278);
  param_2[9] = CONCAT44(uStack_27c,uStack_280);
  param_2[0xc] = lStack_268;
  param_2[0xb] = CONCAT44(uStack_26c,uStack_270);
  puVar27 = (undefined8 *)param_2[0xe];
  if (puVar27 != puVar20) {
    if (puVar27 != (undefined8 *)0x0) {
      _free(puVar27[-1]);
    }
    param_2[0xd] = param_2 + 6;
    param_2[0xe] = puVar20;
    puVar27 = puVar20;
  }
  if (iStack_29c < 3) {
    puVar20 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puVar27 = *puStack_258;
    puVar27[1] = puStack_258[1];
    uStack_2a0 = 0x42ff0000;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    *(undefined8 *)((long)puVar20 + 0x34) = 0;
    *(undefined8 *)((long)puVar20 + 0x2c) = 0;
    if (puStack_258 != &uStack_250) {
      _free(puStack_258[-1]);
    }
  }
  else {
    param_2[0xd] = uStack_260;
    param_2[0xe] = puStack_258;
  }
  uStack_e0 = 0x42ff0000;
  uVar29 = (ulong)&uStack_e0 | 8;
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
  uStack_a0 = uVar29;
  puStack_98 = &uStack_90;
  if ((*param_3 & 7) - 5 < 2) {
    uStack_2a0 = 0x42ff0000;
    uStack_260 = (ulong)&uStack_2a0 | 8;
    uStack_298._4_4_ = 0;
    uStack_290 = 0;
    iStack_29c = 0;
    uStack_298._0_4_ = 0;
    uStack_284 = 0;
    uStack_280 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_400 = 0x2010000;
    uStack_3f0 = 0;
    puStack_3f8 = &uStack_2a0;
    puStack_258 = &uStack_250;
    FUN_109a479a0(param_3,&uStack_400);
    if (lStack_a8 != 0) {
      piVar30 = (int *)(lStack_a8 + 0x14);
      do {
        iVar11 = *piVar30;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
        if (bVar13) {
          *piVar30 = iVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    if (0 < iStack_dc) {
      lVar19 = 0;
      do {
        *(undefined4 *)(uStack_a0 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_dc);
    }
    uStack_d8 = (undefined4)uStack_298;
    uStack_d4 = uStack_298._4_4_;
    uStack_e0 = uStack_2a0;
    iStack_dc = iStack_29c;
    uStack_c8 = uStack_288;
    uStack_c4 = uStack_284;
    uStack_d0 = uStack_290;
    uStack_cc = uStack_28c;
    uStack_b8 = uStack_278;
    uStack_b4 = uStack_274;
    uStack_c0 = uStack_280;
    uStack_bc = uStack_27c;
    lStack_a8 = lStack_268;
    uStack_b0 = uStack_270;
    uStack_ac = uStack_26c;
    uVar15 = uStack_a0;
    puVar20 = puStack_98;
    if ((puStack_98 != &uStack_90) &&
       (uVar15 = uVar29, puVar20 = &uStack_90, puStack_98 != (undefined8 *)0x0)) {
      _free(puStack_98[-1]);
    }
    puStack_98 = puVar20;
    uStack_a0 = uVar15;
    if (2 < iStack_29c) {
LAB_109190638:
      uStack_a0 = uStack_260;
      puStack_98 = puStack_258;
      goto LAB_109190640;
    }
    puVar20 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puStack_98 = *puStack_258;
    puStack_98[1] = puStack_258[1];
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    *(undefined8 *)((long)puVar20 + 0x34) = 0;
    *(undefined8 *)((long)puVar20 + 0x2c) = 0;
    if (puStack_258 == &uStack_250) goto LAB_109190640;
  }
  else {
    FUN_10918f220(&uStack_2a0,param_3,5);
    if (lStack_a8 != 0) {
      piVar30 = (int *)(lStack_a8 + 0x14);
      do {
        iVar11 = *piVar30;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
        if (bVar13) {
          *piVar30 = iVar11 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    if (0 < iStack_dc) {
      lVar19 = 0;
      do {
        *(undefined4 *)(uStack_a0 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_dc);
    }
    uStack_d8 = (undefined4)uStack_298;
    uStack_d4 = uStack_298._4_4_;
    uStack_e0 = uStack_2a0;
    iStack_dc = iStack_29c;
    uStack_c8 = uStack_288;
    uStack_c4 = uStack_284;
    uStack_d0 = uStack_290;
    uStack_cc = uStack_28c;
    uStack_b8 = uStack_278;
    uStack_b4 = uStack_274;
    uStack_c0 = uStack_280;
    uStack_bc = uStack_27c;
    lStack_a8 = lStack_268;
    uStack_b0 = uStack_270;
    uStack_ac = uStack_26c;
    uVar15 = uStack_a0;
    puVar20 = puStack_98;
    if ((puStack_98 != &uStack_90) &&
       (uVar15 = uVar29, puVar20 = &uStack_90, puStack_98 != (undefined8 *)0x0)) {
      _free(puStack_98[-1]);
    }
    puStack_98 = puVar20;
    uStack_a0 = uVar15;
    if (2 < iStack_29c) goto LAB_109190638;
    puVar20 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puStack_98 = *puStack_258;
    puStack_98[1] = puStack_258[1];
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    *(undefined8 *)((long)puVar20 + 0x34) = 0;
    *(undefined8 *)((long)puVar20 + 0x2c) = 0;
    if (puStack_258 == &uStack_250) goto LAB_109190640;
  }
  uStack_2a0 = 0x42ff0000;
  _free(puStack_258[-1]);
LAB_109190640:
  *(uint *)(param_2 + 1) = uStack_e0 & 7;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_400 = 0x2010000;
  uStack_3f0 = 0;
  plStack_5c0 = (long *)0x0;
  puStack_3f8 = &uStack_e0;
  uStack_298 = &uStack_e0;
  FUN_109b0f718((double)(1.0 / (float)param_5),(double)(1.0 / (float)param_5),&uStack_2a0,
                &uStack_400,&plStack_5c0,0);
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_400 = 0x2050000;
  uStack_3f0 = 0;
  puStack_3f8 = (uint *)plVar23;
  uStack_298 = &uStack_e0;
  FUN_109a3dcec(&uStack_2a0,&uStack_400);
  FUN_10918f358(&uStack_2a0,param_2[2],(int)(double)param_2[0x11]);
  if (param_2[0x1b] != 0) {
    piVar30 = (int *)(param_2[0x1b] + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(puVar24);
    }
  }
  param_2[0x1b] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  if (0 < *(int *)((long)param_2 + 0xa4)) {
    lVar19 = 0;
    lVar26 = param_2[0x1c];
    do {
      *(undefined4 *)(lVar26 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *piVar28);
  }
  param_2[0x15] = uStack_298;
  param_2[0x14] = CONCAT44(iStack_29c,uStack_2a0);
  param_2[0x17] = CONCAT44(uStack_284,uStack_288);
  param_2[0x16] = CONCAT44(uStack_28c,uStack_290);
  param_2[0x19] = CONCAT44(uStack_274,uStack_278);
  param_2[0x18] = CONCAT44(uStack_27c,uStack_280);
  param_2[0x1b] = lStack_268;
  param_2[0x1a] = CONCAT44(uStack_26c,uStack_270);
  puVar20 = (undefined8 *)param_2[0x1d];
  if (puVar20 != puVar21) {
    if (puVar20 != (undefined8 *)0x0) {
      _free(puVar20[-1]);
    }
    param_2[0x1c] = param_2 + 0x15;
    param_2[0x1d] = puVar21;
    puVar20 = puVar21;
  }
  if (iStack_29c < 3) {
    puVar21 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puVar20 = *puStack_258;
    puVar20[1] = puStack_258[1];
    uStack_2a0 = 0x42ff0000;
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
    puVar21[5] = 0;
    puVar21[4] = 0;
    *(undefined8 *)((long)puVar21 + 0x34) = 0;
    *(undefined8 *)((long)puVar21 + 0x2c) = 0;
    if (puStack_258 != &uStack_250) {
      _free(puStack_258[-1]);
    }
  }
  else {
    param_2[0x1c] = uStack_260;
    param_2[0x1d] = puStack_258;
  }
  FUN_10918f358(&uStack_2a0,param_2[2] + 0x60,(int)(double)param_2[0x11]);
  if (param_2[0x27] != 0) {
    piVar30 = (int *)(param_2[0x27] + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(puVar1);
    }
  }
  param_2[0x27] = 0;
  param_2[0x23] = 0;
  param_2[0x22] = 0;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  if (0 < *(int *)((long)param_2 + 0x104)) {
    lVar19 = 0;
    lVar26 = param_2[0x28];
    do {
      *(undefined4 *)(lVar26 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)((long)param_2 + 0x104));
  }
  param_2[0x21] = uStack_298;
  param_2[0x20] = CONCAT44(iStack_29c,uStack_2a0);
  param_2[0x23] = CONCAT44(uStack_284,uStack_288);
  param_2[0x22] = CONCAT44(uStack_28c,uStack_290);
  param_2[0x25] = CONCAT44(uStack_274,uStack_278);
  param_2[0x24] = CONCAT44(uStack_27c,uStack_280);
  param_2[0x27] = lStack_268;
  param_2[0x26] = CONCAT44(uStack_26c,uStack_270);
  puVar20 = (undefined8 *)param_2[0x29];
  if (puVar20 != puVar22) {
    if (puVar20 != (undefined8 *)0x0) {
      _free(puVar20[-1]);
    }
    param_2[0x28] = param_2 + 0x21;
    param_2[0x29] = puVar22;
    puVar20 = puVar22;
  }
  if (iStack_29c < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puVar20 = *puStack_258;
    puVar20[1] = puStack_258[1];
    uStack_2a0 = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_258 != &uStack_250) {
      _free(puStack_258[-1]);
    }
  }
  else {
    param_2[0x28] = uStack_260;
    param_2[0x29] = puStack_258;
  }
  FUN_10918f358(&uStack_2a0,param_2[2] + 0xc0,(int)(double)param_2[0x11]);
  if (param_2[0x33] != 0) {
    piVar30 = (int *)(param_2[0x33] + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(puVar2);
    }
  }
  param_2[0x33] = 0;
  param_2[0x2f] = 0;
  param_2[0x2e] = 0;
  param_2[0x31] = 0;
  param_2[0x30] = 0;
  if (0 < *(int *)((long)param_2 + 0x164)) {
    lVar19 = 0;
    lVar26 = param_2[0x34];
    do {
      *(undefined4 *)(lVar26 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)((long)param_2 + 0x164));
  }
  param_2[0x2d] = uStack_298;
  param_2[0x2c] = CONCAT44(iStack_29c,uStack_2a0);
  param_2[0x2f] = CONCAT44(uStack_284,uStack_288);
  param_2[0x2e] = CONCAT44(uStack_28c,uStack_290);
  param_2[0x31] = CONCAT44(uStack_274,uStack_278);
  param_2[0x30] = CONCAT44(uStack_27c,uStack_280);
  param_2[0x33] = lStack_268;
  param_2[0x32] = CONCAT44(uStack_26c,uStack_270);
  puVar20 = (undefined8 *)param_2[0x35];
  if (puVar20 != puVar3) {
    if (puVar20 != (undefined8 *)0x0) {
      _free(puVar20[-1]);
    }
    param_2[0x34] = param_2 + 0x2d;
    param_2[0x35] = puVar3;
    puVar20 = puVar3;
  }
  if (iStack_29c < 3) {
    puVar22 = (undefined8 *)((ulong)&uStack_2a0 | 4);
    *puVar20 = *puStack_258;
    puVar20[1] = puStack_258[1];
    uStack_2a0 = 0x42ff0000;
    puVar22[1] = 0;
    *puVar22 = 0;
    puVar22[3] = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    puVar22[4] = 0;
    *(undefined8 *)((long)puVar22 + 0x34) = 0;
    *(undefined8 *)((long)puVar22 + 0x2c) = 0;
    if (puStack_258 != &uStack_250) {
      _free(puStack_258[-1]);
    }
  }
  else {
    param_2[0x34] = uStack_260;
    param_2[0x35] = puStack_258;
  }
  lVar19 = *plVar23;
  uStack_7d0 = 0;
  uStack_7cc = 0;
  uStack_7e0 = 0x1010000;
  uStack_7d8._0_4_ = (undefined4)lVar19;
  uStack_7d8._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,lVar19,&uStack_7e0);
  uStack_460 = 0x42ff0000;
  lStack_420 = (long)&uStack_45c + 4;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_45c = 0;
  lStack_428 = 0;
  uStack_42c = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puStack_418 = &uStack_410;
  (**(code **)(*plStack_5c0 + 0x18))(plStack_5c0,&plStack_5c0,&uStack_460,0xffffffff);
  FUN_10918f358(&uStack_ab0,&uStack_460,(int)(double)param_2[0x11]);
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_840 = 0x1010000;
  uStack_838 = puVar24;
  FUN_109a8239c(&uStack_720,0x3ff0000000000000,puVar24,&uStack_840);
  FUN_109a7d220(&uStack_400,&uStack_ab0,&uStack_720);
  uStack_780 = (undefined4)param_1;
  uVar14 = uStack_780;
  iStack_77c = (int)((ulong)param_1 >> 0x20);
  iVar11 = iStack_77c;
  uStack_768 = 0;
  uStack_764 = 0;
  uStack_778._0_4_ = 0;
  uStack_778._4_4_ = 0;
  uStack_770 = 0;
  uStack_76c = 0;
  FUN_109a7cb74(&uStack_2a0,&uStack_400,&uStack_780);
  uStack_140 = 0x42ff0000;
  lStack_100 = (long)&uStack_13c + 4;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  lStack_108 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_f8 = &uStack_f0;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_140,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&uStack_400);
  FUN_10918eb6c(&uStack_720);
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_aac);
  }
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  if (lStack_428 != 0) {
    piVar30 = (int *)(lStack_428 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_460);
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
  if (0 < (int)uStack_45c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_420 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_45c);
  }
  if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
    _free(puStack_418[-1]);
  }
  FUN_10918eb6c(&plStack_5c0);
  uStack_778 = *plVar23 + 0x60;
  uStack_770 = 0;
  uStack_76c = 0;
  uStack_780 = 0x1010000;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,*plVar23,&uStack_780);
  uStack_ab0 = 0x42ff0000;
  puStack_a70 = &uStack_aa8;
  uStack_aa8._4_4_ = 0;
  uStack_aa0 = 0;
  iStack_aac = 0;
  uStack_aa8._0_4_ = 0;
  lStack_a78 = 0;
  uStack_a7c = 0;
  uStack_a84 = 0;
  uStack_a80 = 0;
  uStack_a8c = 0;
  uStack_a88 = 0;
  uStack_a94 = 0;
  uStack_a90 = 0;
  uStack_a9c = 0;
  uStack_a98 = 0;
  uStack_a60 = 0;
  uStack_a58 = 0;
  puStack_a68 = &uStack_a60;
  (**(code **)(*(long *)CONCAT44(uStack_3fc,uStack_400) + 0x18))
            ((long *)CONCAT44(uStack_3fc,uStack_400),&uStack_400,&uStack_ab0,0xffffffff);
  FUN_10918f358(&uStack_720,&uStack_ab0,(int)(double)param_2[0x11]);
  uStack_7d0 = 0;
  uStack_7cc = 0;
  uStack_7e0 = 0x1010000;
  uStack_7d8 = puVar1;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,puVar24,&uStack_7e0);
  FUN_109a7d220(&uStack_2a0,&uStack_720,&plStack_5c0);
  uStack_460 = 0x42ff0000;
  lStack_420 = (long)&uStack_45c + 4;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_45c = 0;
  lStack_428 = 0;
  uStack_42c = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puStack_418 = &uStack_410;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_460,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  if (lStack_6e8 != 0) {
    piVar30 = (int *)(lStack_6e8 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_720);
    }
  }
  lStack_6e8 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  if (0 < uStack_720._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_6e0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_720._4_4_);
  }
  if (puStack_6d8 != auStack_6d0 && puStack_6d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_6d8 + -8));
  }
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_aac);
  }
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  FUN_10918eb6c(&uStack_400);
  uStack_7d8 = (undefined8 *)(*plVar23 + 0xc0);
  uStack_7d0 = 0;
  uStack_7cc = 0;
  uStack_7e0 = 0x1010000;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,*plVar23,&uStack_7e0);
  uStack_ab0 = 0x42ff0000;
  puStack_a70 = &uStack_aa8;
  uStack_aa8._4_4_ = 0;
  uStack_aa0 = 0;
  iStack_aac = 0;
  uStack_aa8._0_4_ = 0;
  lStack_a78 = 0;
  uStack_a7c = 0;
  uStack_a84 = 0;
  uStack_a80 = 0;
  uStack_a8c = 0;
  uStack_a88 = 0;
  uStack_a94 = 0;
  uStack_a90 = 0;
  uStack_a9c = 0;
  uStack_a98 = 0;
  uStack_a60 = 0;
  uStack_a58 = 0;
  puStack_a68 = &uStack_a60;
  (**(code **)(*(long *)CONCAT44(uStack_3fc,uStack_400) + 0x18))
            ((long *)CONCAT44(uStack_3fc,uStack_400),&uStack_400,&uStack_ab0,0xffffffff);
  FUN_10918f358(&uStack_720,&uStack_ab0,(int)(double)param_2[0x11]);
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_840 = 0x1010000;
  uStack_838 = puVar2;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,puVar24,&uStack_840);
  FUN_109a7d220(&uStack_2a0,&uStack_720,&plStack_5c0);
  uStack_780 = 0x42ff0000;
  puStack_740 = &uStack_778;
  uStack_778._4_4_ = 0;
  uStack_770 = 0;
  iStack_77c = 0;
  uStack_778._0_4_ = 0;
  lStack_748 = 0;
  uStack_74c = 0;
  uStack_754 = 0;
  uStack_750 = 0;
  uStack_75c = 0;
  uStack_758 = 0;
  uStack_764 = 0;
  uStack_760 = 0;
  uStack_76c = 0;
  uStack_768 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  puStack_738 = &uStack_730;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_780,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  if (lStack_6e8 != 0) {
    piVar30 = (int *)(lStack_6e8 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_720);
    }
  }
  lStack_6e8 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  if (0 < uStack_720._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_6e0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_720._4_4_);
  }
  if (puStack_6d8 != auStack_6d0 && puStack_6d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_6d8 + -8));
  }
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar10 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar10 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_aac);
  }
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  FUN_10918eb6c(&uStack_400);
  uStack_8f8 = (undefined8 *)(*plVar23 + 0x60);
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_900 = 0x1010000;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,uStack_8f8,&uStack_900);
  uStack_840 = 0x42ff0000;
  puStack_800 = &uStack_838;
  uStack_838._4_4_ = 0;
  uStack_830 = 0;
  iStack_83c = 0;
  uStack_838._0_4_ = 0;
  lStack_808 = 0;
  uStack_80c = 0;
  uStack_814 = 0;
  uStack_810 = 0;
  uStack_81c = 0;
  uStack_818 = 0;
  uStack_824 = 0;
  uStack_820 = 0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  puStack_7f8 = &uStack_7f0;
  (**(code **)(*plStack_5c0 + 0x18))(plStack_5c0,&plStack_5c0,&uStack_840,0xffffffff);
  FUN_10918f358(&uStack_ab0,&uStack_840,(int)(double)param_2[0x11]);
  uStack_940 = 0;
  uStack_950 = CONCAT44(uStack_950._4_4_,0x1010000);
  puStack_948 = puVar1;
  FUN_109a8239c(&uStack_720,0x3ff0000000000000,puVar1,&uStack_950);
  FUN_109a7d220(&uStack_400,&uStack_ab0,&uStack_720);
  uStack_888 = 0;
  uStack_884 = 0;
  uStack_898._0_4_ = 0;
  uStack_898._4_4_ = 0;
  uStack_890 = 0;
  uStack_88c = 0;
  uStack_8a0 = uVar14;
  iStack_89c = iVar11;
  FUN_109a7cb74(&uStack_2a0,&uStack_400,&uStack_8a0);
  uStack_7e0 = 0x42ff0000;
  puStack_7a0 = &uStack_7d8;
  uStack_7d8._4_4_ = 0;
  uStack_7d0 = 0;
  iStack_7dc = 0;
  uStack_7d8._0_4_ = 0;
  lStack_7a8 = 0;
  uStack_7ac = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7bc = 0;
  uStack_7b8 = 0;
  uStack_7c4 = 0;
  uStack_7c0 = 0;
  uStack_7cc = 0;
  uStack_7c8 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  puStack_798 = &uStack_790;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_7e0,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&uStack_400);
  FUN_10918eb6c(&uStack_720);
  lVar19 = (long)uStack_8f8;
  puVar17 = uStack_298;
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
      lVar19 = (long)uStack_8f8;
      puVar17 = uStack_298;
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar26 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar26 * 4) = 0;
      lVar26 = lVar26 + 1;
    } while (lVar26 < iStack_aac);
  }
  uStack_8f8 = (undefined8 *)lVar19;
  uStack_298 = puVar17;
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  if (lStack_808 != 0) {
    piVar30 = (int *)(lStack_808 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_840);
    }
  }
  lStack_808 = 0;
  uStack_828 = 0;
  uStack_824 = 0;
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_818 = 0;
  uStack_814 = 0;
  uStack_820 = 0;
  uStack_81c = 0;
  if (0 < iStack_83c) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_800 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_83c);
  }
  if (puStack_7f8 != &uStack_7f0 && puStack_7f8 != (undefined8 *)0x0) {
    _free(puStack_7f8[-1]);
  }
  FUN_10918eb6c(&plStack_5c0);
  uStack_898 = *plVar23 + 0xc0;
  uStack_890 = 0;
  uStack_88c = 0;
  uStack_8a0 = 0x1010000;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,*plVar23 + 0x60,&uStack_8a0);
  uStack_ab0 = 0x42ff0000;
  puStack_a70 = &uStack_aa8;
  uStack_aa8._4_4_ = 0;
  uStack_aa0 = 0;
  iStack_aac = 0;
  uStack_aa8._0_4_ = 0;
  lStack_a78 = 0;
  uStack_a7c = 0;
  uStack_a84 = 0;
  uStack_a80 = 0;
  uStack_a8c = 0;
  uStack_a88 = 0;
  uStack_a94 = 0;
  uStack_a90 = 0;
  uStack_a9c = 0;
  uStack_a98 = 0;
  uStack_a60 = 0;
  uStack_a58 = 0;
  puStack_a68 = &uStack_a60;
  (**(code **)(*(long *)CONCAT44(uStack_3fc,uStack_400) + 0x18))
            ((long *)CONCAT44(uStack_3fc,uStack_400),&uStack_400,&uStack_ab0,0xffffffff);
  FUN_10918f358(&uStack_720,&uStack_ab0,(int)(double)param_2[0x11]);
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_900 = 0x1010000;
  uStack_8f8 = puVar2;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,puVar1,&uStack_900);
  FUN_109a7d220(&uStack_2a0,&uStack_720,&plStack_5c0);
  uStack_840 = 0x42ff0000;
  puStack_800 = &uStack_838;
  uStack_838._4_4_ = 0;
  uStack_830 = 0;
  iStack_83c = 0;
  uStack_838._0_4_ = 0;
  lStack_808 = 0;
  uStack_80c = 0;
  uStack_814 = 0;
  uStack_810 = 0;
  uStack_81c = 0;
  uStack_818 = 0;
  uStack_824 = 0;
  uStack_820 = 0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  puStack_7f8 = &uStack_7f0;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_840,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  if (lStack_6e8 != 0) {
    piVar30 = (int *)(lStack_6e8 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_720);
    }
  }
  lStack_6e8 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  if (0 < uStack_720._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_6e0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_720._4_4_);
  }
  if (puStack_6d8 != auStack_6d0 && puStack_6d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_6d8 + -8));
  }
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_aac);
  }
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  FUN_10918eb6c(&uStack_400);
  puStack_910 = (undefined4 *)(*plVar23 + 0xc0);
  uStack_908 = 0;
  auStack_918[0] = 0x1010000;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,puStack_910,auStack_918);
  uStack_900 = 0x42ff0000;
  puStack_8c0 = &uStack_8f8;
  uStack_8f8._4_4_ = 0;
  uStack_8f0 = 0;
  iStack_8fc = 0;
  uStack_8f8._0_4_ = 0;
  lStack_8c8 = 0;
  uStack_8cc = 0;
  uStack_8d4 = 0;
  uStack_8d0 = 0;
  uStack_8dc = 0;
  uStack_8d8 = 0;
  uStack_8e4 = 0;
  uStack_8e0 = 0;
  uStack_8ec = 0;
  uStack_8e8 = 0;
  uStack_8a8 = 0;
  uStack_8b0 = 0;
  puStack_8b8 = &uStack_8b0;
  (**(code **)(*plStack_5c0 + 0x18))(plStack_5c0,&plStack_5c0,&uStack_900,0xffffffff);
  FUN_10918f358(&uStack_ab0,&uStack_900,(int)(double)param_2[0x11]);
  uStack_920 = 0;
  auStack_930[0] = 0x1010000;
  puStack_928 = puVar2;
  FUN_109a8239c(&uStack_720,0x3ff0000000000000,puVar2,auStack_930);
  FUN_109a7d220(&uStack_400,&uStack_ab0,&uStack_720);
  uStack_938 = 0;
  puStack_948 = (undefined8 *)0x0;
  uStack_940 = 0;
  uStack_950 = param_1;
  FUN_109a7cb74(&uStack_2a0,&uStack_400,&uStack_950);
  uStack_8a0 = 0x42ff0000;
  puStack_860 = &uStack_898;
  uStack_898._4_4_ = 0;
  uStack_890 = 0;
  iStack_89c = 0;
  uStack_898._0_4_ = 0;
  lStack_868 = 0;
  uStack_86c = 0;
  uStack_874 = 0;
  uStack_870 = 0;
  uStack_87c = 0;
  uStack_878 = 0;
  uStack_884 = 0;
  uStack_880 = 0;
  uStack_88c = 0;
  uStack_888 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puStack_858 = &uStack_850;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_8a0,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&uStack_400);
  FUN_10918eb6c(&uStack_720);
  puVar17 = uStack_298;
  if (lStack_a78 != 0) {
    piVar30 = (int *)(lStack_a78 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_ab0);
      puVar17 = uStack_298;
    }
  }
  lStack_a78 = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  if (0 < iStack_aac) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_a70 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_aac);
  }
  uStack_298 = puVar17;
  if (puStack_a68 != &uStack_a60 && puStack_a68 != (undefined8 *)0x0) {
    _free(puStack_a68[-1]);
  }
  if (lStack_8c8 != 0) {
    piVar30 = (int *)(lStack_8c8 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_900);
    }
  }
  lStack_8c8 = 0;
  uStack_8e8 = 0;
  uStack_8e4 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8d8 = 0;
  uStack_8d4 = 0;
  uStack_8e0 = 0;
  uStack_8dc = 0;
  if (0 < iStack_8fc) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_8c0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_8fc);
  }
  if (puStack_8b8 != &uStack_8b0 && puStack_8b8 != (undefined8 *)0x0) {
    _free(puStack_8b8[-1]);
  }
  FUN_10918eb6c(&plStack_5c0);
  uStack_710 = 0;
  uStack_720._0_4_ = 0x1010000;
  puStack_718 = &uStack_8a0;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_7e0,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_840;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_840,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar25,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_710 = 0;
  uStack_720._0_4_ = 0x1010000;
  puStack_718 = &uStack_780;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_840,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_8a0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_460,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar4,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_710 = 0;
  uStack_720._0_4_ = 0x1010000;
  puStack_718 = &uStack_840;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_460,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_780;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_7e0,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar5,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_710 = 0;
  uStack_720._0_4_ = 0x1010000;
  puStack_718 = &uStack_8a0;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_140,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_780;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_780,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar6,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_710 = 0;
  uStack_720._0_4_ = 0x1010000;
  puStack_718 = &uStack_460;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_780,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_840;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_140,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar7,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_710 = 0;
  uStack_720 = CONCAT44(uStack_720._4_4_,0x1010000);
  puStack_718 = &uStack_7e0;
  FUN_109a8239c(&uStack_400,0x3ff0000000000000,&uStack_140,&uStack_720);
  uStack_ab0 = 0x1010000;
  uStack_aa8 = &uStack_460;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,&uStack_460,&uStack_ab0);
  FUN_109a7d404(&uStack_2a0,&uStack_400,&plStack_5c0);
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,puVar8,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&plStack_5c0);
  FUN_10918eb6c(&uStack_400);
  uStack_950 = CONCAT44(uStack_950._4_4_,0x1010000);
  puStack_948 = (undefined8 *)&uStack_140;
  uStack_940 = 0;
  FUN_109a8239c(&plStack_5c0,0x3ff0000000000000,puVar25,&uStack_950);
  uStack_908 = 0;
  auStack_918[0] = 0x1010000;
  puStack_910 = &uStack_460;
  FUN_109a8239c(&uStack_720,0x3ff0000000000000,puVar4,auStack_918);
  FUN_109a7cc48(&uStack_400,&plStack_5c0,&uStack_720);
  uStack_920 = 0;
  auStack_930[0] = 0x1010000;
  puStack_928 = (undefined8 *)&uStack_780;
  FUN_109a8239c(&uStack_ab0,0x3ff0000000000000,puVar5,auStack_930);
  FUN_109a7cc48(&uStack_2a0,&uStack_400,&uStack_ab0);
  uStack_900 = 0x42ff0000;
  puStack_8c0 = &uStack_8f8;
  uStack_8f8._4_4_ = 0;
  uStack_8f0 = 0;
  iStack_8fc = 0;
  uStack_8f8._0_4_ = 0;
  lStack_8c8 = 0;
  uStack_8cc = 0;
  uStack_8d4 = 0;
  uStack_8d0 = 0;
  uStack_8dc = 0;
  uStack_8d8 = 0;
  uStack_8e4 = 0;
  uStack_8e0 = 0;
  uStack_8ec = 0;
  uStack_8e8 = 0;
  uStack_8a8 = 0;
  uStack_8b0 = 0;
  puStack_8b8 = &uStack_8b0;
  (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
            ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_900,0xffffffff);
  FUN_10918eb6c(&uStack_2a0);
  FUN_10918eb6c(&uStack_ab0);
  FUN_10918eb6c(&uStack_400);
  FUN_10918eb6c(&uStack_720);
  pplVar16 = &plStack_5c0;
  FUN_10918eb6c(pplVar16);
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  plStack_5c0._0_4_ = 0x2010000;
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar25;
  puStack_3f8 = &uStack_900;
  uStack_298 = (uint *)puVar25;
  FUN_109a91d90();
  puVar17 = &uStack_2a0;
  FUN_109a293c4(puVar17,&uStack_400,&plStack_5c0,pplVar16,0xffffffff,&PTR_FUN_1132e8cd0,1,
                &uStack_720);
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  plStack_5c0._0_4_ = 0x2010000;
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar4;
  puStack_3f8 = &uStack_900;
  uStack_298 = (uint *)puVar4;
  FUN_109a91d90();
  puVar18 = &uStack_2a0;
  FUN_109a293c4(puVar18,&uStack_400,&plStack_5c0,puVar17,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_720
               );
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  plStack_5c0._0_4_ = 0x2010000;
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar5;
  puStack_3f8 = &uStack_900;
  uStack_298 = (uint *)puVar5;
  FUN_109a91d90();
  puVar17 = &uStack_2a0;
  FUN_109a293c4(puVar17,&uStack_400,&plStack_5c0,puVar18,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_720
               );
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  plStack_5c0._0_4_ = 0x2010000;
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar6;
  puStack_3f8 = &uStack_900;
  uStack_298 = (uint *)puVar6;
  FUN_109a91d90();
  puVar18 = &uStack_2a0;
  FUN_109a293c4(puVar18,&uStack_400,&plStack_5c0,puVar17,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_720
               );
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  plStack_5c0._0_4_ = 0x2010000;
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar7;
  puStack_3f8 = &uStack_900;
  uStack_298 = (uint *)puVar7;
  FUN_109a91d90();
  puVar17 = &uStack_2a0;
  FUN_109a293c4(puVar17,&uStack_400,&plStack_5c0,puVar18,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_720
               );
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_3f0 = 0;
  uStack_400 = 0x1010000;
  puStack_3f8 = &uStack_900;
  plStack_5c0 = (long *)CONCAT44(plStack_5c0._4_4_,0x2010000);
  uStack_5b0 = 0;
  uStack_720 = 0x3ff0000000000000;
  puStack_5b8 = puVar8;
  uStack_298 = (uint *)puVar8;
  FUN_109a91d90();
  FUN_109a293c4(&uStack_2a0,&uStack_400,&plStack_5c0,puVar17,0xffffffff,&PTR_FUN_1132e8cd0,1,
                &uStack_720);
  puVar20 = (undefined8 *)uStack_298;
  if (lStack_8c8 != 0) {
    piVar30 = (int *)(lStack_8c8 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_900);
      puVar20 = (undefined8 *)uStack_298;
    }
  }
  lStack_8c8 = 0;
  uStack_8e8 = 0;
  uStack_8e4 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8d8 = 0;
  uStack_8d4 = 0;
  uStack_8e0 = 0;
  uStack_8dc = 0;
  if (0 < iStack_8fc) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_8c0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_8fc);
  }
  uStack_298 = (uint *)puVar20;
  if (puStack_8b8 != &uStack_8b0 && puStack_8b8 != (undefined8 *)0x0) {
    _free(puStack_8b8[-1]);
  }
  if (lStack_868 != 0) {
    piVar30 = (int *)(lStack_868 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_8a0);
    }
  }
  lStack_868 = 0;
  uStack_888 = 0;
  uStack_884 = 0;
  uStack_890 = 0;
  uStack_88c = 0;
  uStack_878 = 0;
  uStack_874 = 0;
  uStack_880 = 0;
  uStack_87c = 0;
  if (0 < iStack_89c) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_860 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_89c);
  }
  if (puStack_858 != &uStack_850 && puStack_858 != (undefined8 *)0x0) {
    _free(puStack_858[-1]);
  }
  if (lStack_808 != 0) {
    piVar30 = (int *)(lStack_808 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_840);
    }
  }
  lStack_808 = 0;
  uStack_828 = 0;
  uStack_824 = 0;
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_818 = 0;
  uStack_814 = 0;
  uStack_820 = 0;
  uStack_81c = 0;
  if (0 < iStack_83c) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_800 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_83c);
  }
  if (puStack_7f8 != &uStack_7f0 && puStack_7f8 != (undefined8 *)0x0) {
    _free(puStack_7f8[-1]);
  }
  if (lStack_7a8 != 0) {
    piVar30 = (int *)(lStack_7a8 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_7e0);
    }
  }
  lStack_7a8 = 0;
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  uStack_7d0 = 0;
  uStack_7cc = 0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0;
  if (0 < iStack_7dc) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_7a0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_7dc);
  }
  if (puStack_798 != &uStack_790 && puStack_798 != (undefined8 *)0x0) {
    _free(puStack_798[-1]);
  }
  if (lStack_748 != 0) {
    piVar30 = (int *)(lStack_748 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_780);
    }
  }
  lStack_748 = 0;
  uStack_768 = 0;
  uStack_764 = 0;
  uStack_770 = 0;
  uStack_76c = 0;
  uStack_758 = 0;
  uStack_754 = 0;
  uStack_760 = 0;
  uStack_75c = 0;
  if (0 < iStack_77c) {
    lVar19 = 0;
    do {
      *(undefined4 *)((long)puStack_740 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_77c);
  }
  if (puStack_738 != &uStack_730 && puStack_738 != (undefined8 *)0x0) {
    _free(puStack_738[-1]);
  }
  if (lStack_428 != 0) {
    piVar30 = (int *)(lStack_428 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_460);
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
  if (0 < (int)uStack_45c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_420 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_45c);
  }
  if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
    _free(puStack_418[-1]);
  }
  if (lStack_108 != 0) {
    piVar30 = (int *)(lStack_108 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < (int)uStack_13c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_100 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_13c);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (lStack_a8 != 0) {
    piVar30 = (int *)(lStack_a8 + 0x14);
    do {
      iVar11 = *piVar30;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar13) {
        *piVar30 = iVar11 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar19 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  return param_2;
}



/* Entry: 109192640; end: 10919408f;  */

void FUN_109192640(undefined4 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  undefined4 auStack_f08 [2];
  long lStack_f00;
  undefined8 uStack_ef8;
  undefined4 auStack_ef0 [2];
  long lStack_ee8;
  undefined8 uStack_ee0;
  undefined4 auStack_ed8 [2];
  long lStack_ed0;
  undefined8 uStack_ec8;
  long alStack_ec0 [3];
  undefined1 auStack_ea8 [4];
  int iStack_ea4;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  long lStack_e70;
  long lStack_e68;
  undefined1 *puStack_e60;
  undefined1 auStack_e58 [16];
  undefined4 uStack_e48;
  int iStack_e44;
  long lStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  long lStack_e10;
  long lStack_e08;
  undefined1 *puStack_e00;
  undefined1 auStack_df8 [16];
  undefined4 uStack_de8;
  int iStack_de4;
  long lStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  long lStack_db0;
  long lStack_da8;
  undefined1 *puStack_da0;
  undefined1 auStack_d98 [16];
  undefined4 uStack_d88;
  int iStack_d84;
  undefined4 *puStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  long lStack_d50;
  long lStack_d48;
  undefined1 *puStack_d40;
  undefined1 auStack_d38 [16];
  undefined4 auStack_d28 [2];
  undefined4 *puStack_d20;
  undefined8 uStack_d18;
  undefined4 uStack_bc8;
  int iStack_bc4;
  undefined8 uStack_bc0;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  long lStack_b90;
  undefined8 *puStack_b88;
  undefined8 *puStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined4 uStack_b68;
  int iStack_b64;
  undefined8 uStack_b60;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  long lStack_b30;
  undefined8 *puStack_b28;
  undefined8 *puStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined4 uStack_b08;
  int iStack_b04;
  undefined8 uStack_b00;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  long lStack_ad0;
  undefined8 *puStack_ac8;
  undefined8 *puStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined1 auStack_aa8 [352];
  undefined1 auStack_948 [352];
  undefined8 uStack_7e8;
  long *plStack_7e0;
  undefined8 uStack_7d8;
  undefined4 uStack_688;
  undefined8 uStack_684;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  long lStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined4 uStack_628;
  undefined8 uStack_624;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined8 uStack_5c4;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  long lStack_590;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  int iStack_564;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  long lStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined4 uStack_3fc;
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
  long lStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [4];
  int iStack_3a4;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_370;
  long lStack_368;
  undefined1 *puStack_360;
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [4];
  int iStack_344;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  undefined1 auStack_2f8 [16];
  undefined8 uStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [4];
  int iStack_184;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [4];
  int iStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_560 = (undefined8 *)&uStack_c8;
  uStack_c8 = 0x42ff0000;
  lStack_88 = (long)&uStack_c4 + 4;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_2d8 = 0;
  uStack_2e8 = (long *)CONCAT44(uStack_2e8._4_4_,0x1010000);
  uStack_568 = 0x2010000;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_7e8 = 0;
  dVar6 = 1.0 / (double)*(int *)(param_2 + 0x98);
  puStack_2e0 = (undefined4 *)param_3;
  puStack_80 = &uStack_78;
  FUN_109b0f718(dVar6,dVar6,&uStack_2e8,&uStack_568,&uStack_7e8,1);
  FUN_10918f358(auStack_128,&uStack_c8,(int)*(double *)(param_2 + 0x88));
  uStack_7d8 = 0;
  uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x1010000);
  plStack_7e0 = (long *)&uStack_c8;
  FUN_109a8239c(&uStack_2e8,0x3ff0000000000000,*(undefined8 *)(param_2 + 0x10),&uStack_7e8);
  uStack_568 = 0x42ff0000;
  puStack_528 = &uStack_560;
  uStack_560._4_4_ = 0;
  uStack_558 = 0;
  iStack_564 = 0;
  uStack_560._0_4_ = 0;
  lStack_530 = 0;
  uStack_534 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  uStack_510 = 0;
  uStack_518 = 0;
  puStack_520 = &uStack_518;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_568,0xffffffff);
  FUN_10918f358(auStack_188,&uStack_568,(int)*(double *)(param_2 + 0x88));
  if (lStack_530 != 0) {
    piVar1 = (int *)(lStack_530 + 0x14);
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
      func_0x000109a848d4(&uStack_568);
    }
  }
  lStack_530 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  if (0 < iStack_564) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_528 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_564);
  }
  if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
    _free(puStack_520[-1]);
  }
  FUN_10918eb6c(&uStack_2e8);
  uStack_7d8 = 0;
  uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x1010000);
  plStack_7e0 = (long *)&uStack_c8;
  FUN_109a8239c(&uStack_2e8,0x3ff0000000000000,*(long *)(param_2 + 0x10) + 0x60,&uStack_7e8);
  uStack_568 = 0x42ff0000;
  puStack_528 = &uStack_560;
  uStack_560._4_4_ = 0;
  uStack_558 = 0;
  iStack_564 = 0;
  uStack_560._0_4_ = 0;
  lStack_530 = 0;
  uStack_534 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  uStack_510 = 0;
  uStack_518 = 0;
  puStack_520 = &uStack_518;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_568,0xffffffff);
  FUN_10918f358(auStack_348,&uStack_568,(int)*(double *)(param_2 + 0x88));
  if (lStack_530 != 0) {
    piVar1 = (int *)(lStack_530 + 0x14);
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
      func_0x000109a848d4(&uStack_568);
    }
  }
  lStack_530 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  if (0 < iStack_564) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_528 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_564);
  }
  if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
    _free(puStack_520[-1]);
  }
  FUN_10918eb6c(&uStack_2e8);
  uStack_7d8 = 0;
  uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x1010000);
  plStack_7e0 = (long *)&uStack_c8;
  FUN_109a8239c(&uStack_2e8,0x3ff0000000000000,*(long *)(param_2 + 0x10) + 0xc0,&uStack_7e8);
  uStack_568 = 0x42ff0000;
  puStack_528 = &uStack_560;
  uStack_560._4_4_ = 0;
  uStack_558 = 0;
  iStack_564 = 0;
  uStack_560._0_4_ = 0;
  lStack_530 = 0;
  uStack_534 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  uStack_510 = 0;
  uStack_518 = 0;
  puStack_520 = &uStack_518;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_568,0xffffffff);
  FUN_10918f358(auStack_3a8,&uStack_568,(int)*(double *)(param_2 + 0x88));
  if (lStack_530 != 0) {
    piVar1 = (int *)(lStack_530 + 0x14);
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
      func_0x000109a848d4(&uStack_568);
    }
  }
  lStack_530 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  if (0 < iStack_564) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_528 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_564);
  }
  if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
    _free(puStack_520[-1]);
  }
  FUN_10918eb6c(&uStack_2e8);
  uStack_7d8 = 0;
  uStack_7e8._0_4_ = 0x1010000;
  plStack_7e0 = (long *)auStack_128;
  FUN_109a8239c(&uStack_568,0x3ff0000000000000,param_2 + 0xa0,&uStack_7e8);
  FUN_109a7d220(&uStack_2e8,auStack_188,&uStack_568);
  uStack_408 = 0x42ff0000;
  lStack_3c8 = (long)&uStack_404 + 4;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  uStack_404 = 0;
  lStack_3d0 = 0;
  uStack_3d4 = 0;
  uStack_3dc = 0;
  uStack_3d8 = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3f4 = 0;
  uStack_3f0 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  puStack_3c0 = &uStack_3b8;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_408,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(&uStack_568);
  uStack_7d8 = 0;
  uStack_7e8._0_4_ = 0x1010000;
  plStack_7e0 = (long *)auStack_128;
  FUN_109a8239c(&uStack_568,0x3ff0000000000000,param_2 + 0x100,&uStack_7e8);
  FUN_109a7d220(&uStack_2e8,auStack_348,&uStack_568);
  uStack_5c8 = 0x42ff0000;
  lStack_588 = (long)&uStack_5c4 + 4;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  uStack_5c4 = 0;
  lStack_590 = 0;
  uStack_594 = 0;
  uStack_59c = 0;
  uStack_598 = 0;
  uStack_5a4 = 0;
  uStack_5a0 = 0;
  uStack_5ac = 0;
  uStack_5a8 = 0;
  uStack_5b4 = 0;
  uStack_5b0 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  puStack_580 = &uStack_578;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_5c8,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(&uStack_568);
  uStack_7d8 = 0;
  uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x1010000);
  plStack_7e0 = (long *)auStack_128;
  FUN_109a8239c(&uStack_568,0x3ff0000000000000,param_2 + 0x160,&uStack_7e8);
  FUN_109a7d220(&uStack_2e8,auStack_3a8,&uStack_568);
  uStack_628 = 0x42ff0000;
  lStack_5e8 = (long)&uStack_624 + 4;
  uStack_61c = 0;
  uStack_618 = 0;
  uStack_624 = 0;
  lStack_5f0 = 0;
  uStack_5f4 = 0;
  uStack_5fc = 0;
  uStack_5f8 = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  puStack_5e0 = &uStack_5d8;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_628,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(&uStack_568);
  uStack_d18 = 0;
  auStack_d28[0] = 0x1010000;
  puStack_d20 = &uStack_408;
  FUN_109a8239c(&uStack_7e8,0x3ff0000000000000,param_2 + 0x1c0,auStack_d28);
  uStack_af8 = 0;
  uStack_af4 = 0;
  uStack_b08 = 0x1010000;
  uStack_b00 = &uStack_5c8;
  FUN_109a8239c(auStack_948,0x3ff0000000000000,param_2 + 0x220,&uStack_b08);
  FUN_109a7cc48(&uStack_568,&uStack_7e8,auStack_948);
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b68 = 0x1010000;
  uStack_b60 = &uStack_628;
  FUN_109a8239c(auStack_aa8,0x3ff0000000000000,param_2 + 0x280,&uStack_b68);
  FUN_109a7cc48(&uStack_2e8,&uStack_568,auStack_aa8);
  uStack_688 = 0x42ff0000;
  lStack_648 = (long)&uStack_684 + 4;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_684 = 0;
  lStack_650 = 0;
  uStack_654 = 0;
  uStack_65c = 0;
  uStack_658 = 0;
  uStack_664 = 0;
  uStack_660 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_630 = 0;
  uStack_638 = 0;
  puStack_640 = &uStack_638;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_688,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(auStack_aa8);
  FUN_10918eb6c(&uStack_568);
  FUN_10918eb6c(auStack_948);
  FUN_10918eb6c(&uStack_7e8);
  uStack_d18 = 0;
  auStack_d28[0] = 0x1010000;
  puStack_d20 = &uStack_408;
  FUN_109a8239c(&uStack_7e8,0x3ff0000000000000,param_2 + 0x220,auStack_d28);
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b68 = 0x1010000;
  uStack_b60 = &uStack_5c8;
  FUN_109a8239c(auStack_948,0x3ff0000000000000,param_2 + 0x2e0,&uStack_b68);
  FUN_109a7cc48(&uStack_568,&uStack_7e8,auStack_948);
  uStack_bb8 = 0;
  uStack_bb4 = 0;
  uStack_bc8 = 0x1010000;
  uStack_bc0 = &uStack_628;
  FUN_109a8239c(auStack_aa8,0x3ff0000000000000,param_2 + 0x340,&uStack_bc8);
  FUN_109a7cc48(&uStack_2e8,&uStack_568,auStack_aa8);
  uStack_b08 = 0x42ff0000;
  puStack_ac8 = &uStack_b00;
  uStack_b00._4_4_ = 0;
  uStack_af8 = 0;
  iStack_b04 = 0;
  uStack_b00._0_4_ = 0;
  lStack_ad0 = 0;
  uStack_ad4 = 0;
  uStack_adc = 0;
  uStack_ad8 = 0;
  uStack_ae4 = 0;
  uStack_ae0 = 0;
  uStack_aec = 0;
  uStack_ae8 = 0;
  uStack_af4 = 0;
  uStack_af0 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  puStack_ac0 = &uStack_ab8;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_b08,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(auStack_aa8);
  FUN_10918eb6c(&uStack_568);
  FUN_10918eb6c(auStack_948);
  FUN_10918eb6c(&uStack_7e8);
  uStack_d18 = 0;
  auStack_d28[0] = 0x1010000;
  puStack_d20 = &uStack_408;
  FUN_109a8239c(&uStack_7e8,0x3ff0000000000000,param_2 + 0x280,auStack_d28);
  uStack_bb8 = 0;
  uStack_bb4 = 0;
  uStack_bc8 = 0x1010000;
  uStack_bc0 = &uStack_5c8;
  FUN_109a8239c(auStack_948,0x3ff0000000000000,param_2 + 0x340,&uStack_bc8);
  FUN_109a7cc48(&uStack_568,&uStack_7e8,auStack_948);
  uStack_d88 = 0x1010000;
  puStack_d80 = &uStack_628;
  uStack_d78 = 0;
  FUN_109a8239c(auStack_aa8,0x3ff0000000000000,param_2 + 0x3a0,&uStack_d88);
  FUN_109a7cc48(&uStack_2e8,&uStack_568,auStack_aa8);
  uStack_b68 = 0x42ff0000;
  puStack_b28 = &uStack_b60;
  uStack_b60._4_4_ = 0;
  uStack_b58 = 0;
  iStack_b64 = 0;
  uStack_b60._0_4_ = 0;
  lStack_b30 = 0;
  uStack_b34 = 0;
  uStack_b3c = 0;
  uStack_b38 = 0;
  uStack_b44 = 0;
  uStack_b40 = 0;
  uStack_b4c = 0;
  uStack_b48 = 0;
  uStack_b54 = 0;
  uStack_b50 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  puStack_b20 = &uStack_b18;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_b68,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(auStack_aa8);
  FUN_10918eb6c(&uStack_568);
  FUN_10918eb6c(auStack_948);
  FUN_10918eb6c(&uStack_7e8);
  uStack_d78 = 0;
  uStack_d88 = 0x1010000;
  puStack_d80 = (undefined4 *)(param_2 + 0xa0);
  FUN_109a8239c(auStack_948,0x3ff0000000000000,&uStack_688,&uStack_d88);
  FUN_109a7d220(&uStack_7e8,auStack_128,auStack_948);
  uStack_dd8 = 0;
  uStack_de8 = 0x1010000;
  lStack_de0 = param_2 + 0x100;
  FUN_109a8239c(auStack_aa8,0x3ff0000000000000,&uStack_b08,&uStack_de8);
  FUN_109a7d404(&uStack_568,&uStack_7e8,auStack_aa8);
  uStack_e38 = 0;
  uStack_e48 = 0x1010000;
  lStack_e40 = param_2 + 0x160;
  FUN_109a8239c(auStack_d28,0x3ff0000000000000,&uStack_b68,&uStack_e48);
  FUN_109a7d404(&uStack_2e8,&uStack_568,auStack_d28);
  uStack_bc8 = 0x42ff0000;
  puStack_b88 = &uStack_bc0;
  uStack_bc0._4_4_ = 0;
  uStack_bb8 = 0;
  iStack_bc4 = 0;
  uStack_bc0._0_4_ = 0;
  lStack_b90 = 0;
  uStack_b94 = 0;
  uStack_b9c = 0;
  uStack_b98 = 0;
  uStack_ba4 = 0;
  uStack_ba0 = 0;
  uStack_bac = 0;
  uStack_ba8 = 0;
  uStack_bb4 = 0;
  uStack_bb0 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  puStack_b80 = &uStack_b78;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,&uStack_bc8,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(auStack_d28);
  FUN_10918eb6c(&uStack_568);
  FUN_10918eb6c(auStack_aa8);
  FUN_10918eb6c(&uStack_7e8);
  FUN_10918eb6c(auStack_948);
  FUN_10918f358(&uStack_d88,&uStack_688,(int)*(double *)(param_2 + 0x88));
  FUN_10918f358(&uStack_de8,&uStack_b08,(int)*(double *)(param_2 + 0x88));
  FUN_10918f358(&uStack_e48,&uStack_b68,(int)*(double *)(param_2 + 0x88));
  FUN_10918f358(auStack_ea8,&uStack_bc8,(int)*(double *)(param_2 + 0x88));
  uStack_2d8 = 0;
  uStack_2e8._0_4_ = 0x1010000;
  puStack_2e0 = &uStack_d88;
  uStack_568 = 0x2010000;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_7e8 = 0;
  uStack_560 = (undefined8 *)puStack_2e0;
  FUN_109b0f718((double)*(int *)(param_2 + 0x98),(double)*(int *)(param_2 + 0x98),&uStack_2e8,
                &uStack_568,&uStack_7e8,1);
  uStack_2d8 = 0;
  uStack_2e8._0_4_ = 0x1010000;
  puStack_2e0 = &uStack_de8;
  uStack_568 = 0x2010000;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_7e8 = 0;
  uStack_560 = (undefined8 *)puStack_2e0;
  FUN_109b0f718((double)*(int *)(param_2 + 0x98),(double)*(int *)(param_2 + 0x98),&uStack_2e8,
                &uStack_568,&uStack_7e8,1);
  uStack_2d8 = 0;
  uStack_2e8._0_4_ = 0x1010000;
  puStack_2e0 = &uStack_e48;
  uStack_568 = 0x2010000;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_7e8 = 0;
  uStack_560 = (undefined8 *)puStack_2e0;
  FUN_109b0f718((double)*(int *)(param_2 + 0x98),(double)*(int *)(param_2 + 0x98),&uStack_2e8,
                &uStack_568,&uStack_7e8,1);
  uStack_2d8 = 0;
  uStack_2e8 = (long *)CONCAT44(uStack_2e8._4_4_,0x1010000);
  puStack_2e0 = (undefined4 *)auStack_ea8;
  uStack_568 = 0x2010000;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_7e8 = 0;
  uStack_560 = (undefined8 *)puStack_2e0;
  FUN_109b0f718((double)*(int *)(param_2 + 0x98),(double)*(int *)(param_2 + 0x98),&uStack_2e8,
                &uStack_568,&uStack_7e8,1);
  alStack_ec0[0] = 0;
  alStack_ec0[1] = 0;
  alStack_ec0[2] = 0;
  FUN_10918f220(&uStack_2e8,param_2 + 0x28,5);
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_568 = 0x1010000;
  uStack_7e8 = CONCAT44(uStack_7e8._4_4_,0x2050000);
  plStack_7e0 = alStack_ec0;
  uStack_7d8 = 0;
  uStack_560 = &uStack_2e8;
  FUN_109a3dcec(&uStack_568,&uStack_7e8);
  if (lStack_2b0 != 0) {
    piVar1 = (int *)(lStack_2b0 + 0x14);
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
      func_0x000109a848d4(&uStack_2e8);
    }
  }
  lStack_2b0 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  if (0 < uStack_2e8._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_2a8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_2e8._4_4_);
  }
  if (puStack_2a0 != auStack_298 && puStack_2a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2a0 + -8));
  }
  lStack_ed0 = alStack_ec0[0];
  uStack_ec8 = 0;
  auStack_ed8[0] = 0x1010000;
  FUN_109a8239c(auStack_948,0x3ff0000000000000,&uStack_d88,auStack_ed8);
  lStack_ee8 = alStack_ec0[0] + 0x60;
  uStack_ee0 = 0;
  auStack_ef0[0] = 0x1010000;
  FUN_109a8239c(auStack_aa8,0x3ff0000000000000,&uStack_de8,auStack_ef0);
  FUN_109a7cc48(&uStack_7e8,auStack_948,auStack_aa8);
  lStack_f00 = alStack_ec0[0] + 0xc0;
  uStack_ef8 = 0;
  auStack_f08[0] = 0x1010000;
  FUN_109a8239c(auStack_d28,0x3ff0000000000000,&uStack_e48,auStack_f08);
  FUN_109a7cc48(&uStack_568,&uStack_7e8,auStack_d28);
  FUN_109a7c958(&uStack_2e8,&uStack_568,auStack_ea8);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*uStack_2e8 + 0x18))(uStack_2e8,&uStack_2e8,param_1,0xffffffff);
  FUN_10918eb6c(&uStack_2e8);
  FUN_10918eb6c(&uStack_568);
  FUN_10918eb6c(auStack_d28);
  FUN_10918eb6c(&uStack_7e8);
  FUN_10918eb6c(auStack_aa8);
  FUN_10918eb6c(auStack_948);
  uStack_2e8 = alStack_ec0;
  func_0x0001060c3a9c(&uStack_2e8);
  if (lStack_e70 != 0) {
    piVar1 = (int *)(lStack_e70 + 0x14);
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
      func_0x000109a848d4(auStack_ea8);
    }
  }
  lStack_e70 = 0;
  uStack_e90 = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  uStack_e88 = 0;
  if (0 < iStack_ea4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e68 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_ea4);
  }
  if (puStack_e60 != auStack_e58 && puStack_e60 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e60 + -8));
  }
  if (lStack_e10 != 0) {
    piVar1 = (int *)(lStack_e10 + 0x14);
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
      func_0x000109a848d4(&uStack_e48);
    }
  }
  lStack_e10 = 0;
  uStack_e30 = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  uStack_e28 = 0;
  if (0 < iStack_e44) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e08 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_e44);
  }
  if (puStack_e00 != auStack_df8 && puStack_e00 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e00 + -8));
  }
  if (lStack_db0 != 0) {
    piVar1 = (int *)(lStack_db0 + 0x14);
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
      func_0x000109a848d4(&uStack_de8);
    }
  }
  lStack_db0 = 0;
  uStack_dd0 = 0;
  uStack_dd8 = 0;
  uStack_dc0 = 0;
  uStack_dc8 = 0;
  if (0 < iStack_de4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_da8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_de4);
  }
  if (puStack_da0 != auStack_d98 && puStack_da0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_da0 + -8));
  }
  if (lStack_d50 != 0) {
    piVar1 = (int *)(lStack_d50 + 0x14);
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
      func_0x000109a848d4(&uStack_d88);
    }
  }
  lStack_d50 = 0;
  uStack_d70 = 0;
  uStack_d78 = 0;
  uStack_d60 = 0;
  uStack_d68 = 0;
  if (0 < iStack_d84) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_d48 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_d84);
  }
  if (puStack_d40 != auStack_d38 && puStack_d40 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_d40 + -8));
  }
  if (lStack_b90 != 0) {
    piVar1 = (int *)(lStack_b90 + 0x14);
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
      func_0x000109a848d4(&uStack_bc8);
    }
  }
  lStack_b90 = 0;
  uStack_bb0 = 0;
  uStack_bac = 0;
  uStack_bb8 = 0;
  uStack_bb4 = 0;
  uStack_ba0 = 0;
  uStack_b9c = 0;
  uStack_ba8 = 0;
  uStack_ba4 = 0;
  if (0 < iStack_bc4) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_b88 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_bc4);
  }
  if (puStack_b80 != &uStack_b78 && puStack_b80 != (undefined8 *)0x0) {
    _free(puStack_b80[-1]);
  }
  if (lStack_b30 != 0) {
    piVar1 = (int *)(lStack_b30 + 0x14);
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
      func_0x000109a848d4(&uStack_b68);
    }
  }
  lStack_b30 = 0;
  uStack_b50 = 0;
  uStack_b4c = 0;
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b40 = 0;
  uStack_b3c = 0;
  uStack_b48 = 0;
  uStack_b44 = 0;
  if (0 < iStack_b64) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_b28 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_b64);
  }
  if (puStack_b20 != &uStack_b18 && puStack_b20 != (undefined8 *)0x0) {
    _free(puStack_b20[-1]);
  }
  if (lStack_ad0 != 0) {
    piVar1 = (int *)(lStack_ad0 + 0x14);
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
      func_0x000109a848d4(&uStack_b08);
    }
  }
  lStack_ad0 = 0;
  uStack_af0 = 0;
  uStack_aec = 0;
  uStack_af8 = 0;
  uStack_af4 = 0;
  uStack_ae0 = 0;
  uStack_adc = 0;
  uStack_ae8 = 0;
  uStack_ae4 = 0;
  if (0 < iStack_b04) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_ac8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_b04);
  }
  if (puStack_ac0 != &uStack_ab8 && puStack_ac0 != (undefined8 *)0x0) {
    _free(puStack_ac0[-1]);
  }
  if (lStack_650 != 0) {
    piVar1 = (int *)(lStack_650 + 0x14);
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
      func_0x000109a848d4(&uStack_688);
    }
  }
  lStack_650 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  uStack_660 = 0;
  uStack_65c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  if (0 < (int)uStack_684) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_648 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_684);
  }
  if (puStack_640 != &uStack_638 && puStack_640 != (undefined8 *)0x0) {
    _free(puStack_640[-1]);
  }
  if (lStack_5f0 != 0) {
    piVar1 = (int *)(lStack_5f0 + 0x14);
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
      func_0x000109a848d4(&uStack_628);
    }
  }
  lStack_5f0 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  uStack_618 = 0;
  uStack_614 = 0;
  uStack_600 = 0;
  uStack_5fc = 0;
  uStack_608 = 0;
  uStack_604 = 0;
  if (0 < (int)uStack_624) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_5e8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_624);
  }
  if (puStack_5e0 != &uStack_5d8 && puStack_5e0 != (undefined8 *)0x0) {
    _free(puStack_5e0[-1]);
  }
  if (lStack_590 != 0) {
    piVar1 = (int *)(lStack_590 + 0x14);
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
      func_0x000109a848d4(&uStack_5c8);
    }
  }
  lStack_590 = 0;
  uStack_5b0 = 0;
  uStack_5ac = 0;
  uStack_5b8 = 0;
  uStack_5b4 = 0;
  uStack_5a0 = 0;
  uStack_59c = 0;
  uStack_5a8 = 0;
  uStack_5a4 = 0;
  if (0 < (int)uStack_5c4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_588 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_5c4);
  }
  if (puStack_580 != &uStack_578 && puStack_580 != (undefined8 *)0x0) {
    _free(puStack_580[-1]);
  }
  if (lStack_3d0 != 0) {
    piVar1 = (int *)(lStack_3d0 + 0x14);
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
      func_0x000109a848d4(&uStack_408);
    }
  }
  lStack_3d0 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3f8 = 0;
  uStack_3f4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  if (0 < (int)uStack_404) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_3c8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_404);
  }
  if (puStack_3c0 != &uStack_3b8 && puStack_3c0 != (undefined8 *)0x0) {
    _free(puStack_3c0[-1]);
  }
  if (lStack_370 != 0) {
    piVar1 = (int *)(lStack_370 + 0x14);
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
      func_0x000109a848d4(auStack_3a8);
    }
  }
  lStack_370 = 0;
  uStack_390 = 0;
  uStack_398 = 0;
  uStack_380 = 0;
  uStack_388 = 0;
  if (0 < iStack_3a4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_368 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_3a4);
  }
  if (puStack_360 != auStack_358 && puStack_360 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_360 + -8));
  }
  if (lStack_310 != 0) {
    piVar1 = (int *)(lStack_310 + 0x14);
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
      func_0x000109a848d4(auStack_348);
    }
  }
  lStack_310 = 0;
  uStack_330 = 0;
  uStack_338 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  if (0 < iStack_344) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_308 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_344);
  }
  if (puStack_300 != auStack_2f8 && puStack_300 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_300 + -8));
  }
  if (lStack_150 != 0) {
    piVar1 = (int *)(lStack_150 + 0x14);
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
      func_0x000109a848d4(auStack_188);
    }
  }
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  if (0 < iStack_184) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_148 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_184);
  }
  if (puStack_140 != auStack_138 && puStack_140 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_140 + -8));
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
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
      func_0x000109a848d4(auStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  if (0 < iStack_124) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_124);
  }
  if (puStack_e0 != auStack_d8 && puStack_e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e0 + -8));
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
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
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < (int)uStack_c4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_c4);
  }
  if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
    _free(puStack_80[-1]);
  }
  return;
}



/* Entry: 109194090; end: 109194bd3;  */

undefined8 *
FUN_109194090(undefined8 param_1,undefined8 *param_2,uint *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  undefined4 uStack_1c0;
  int iStack_1bc;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [16];
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
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 auStack_a0 [3];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_3;
  if ((uVar3 >> 3 & 0x1fd) != 0) goto LAB_109194a94;
  if ((uVar3 & 0xff8) == 0) {
    puVar7 = (undefined8 *)0x1a8;
    __Znwm();
    *puVar7 = &PTR_FUN_110adf120;
    iVar21 = 0;
    if (param_5 != 0) {
      iVar21 = (int)(param_4 << 1 | 1U) / param_5;
    }
    *(int *)(puVar7 + 2) = iVar21;
    puVar7[3] = param_1;
    *(int *)(puVar7 + 4) = param_5;
    puVar12 = puVar7 + 5;
    *(undefined4 *)puVar12 = 0x42ff0000;
    piVar17 = (int *)((long)puVar7 + 0x2c);
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    piVar17[0] = 0;
    piVar17[1] = 0;
    *(undefined8 *)((long)puVar7 + 0x44) = 0;
    *(undefined8 *)((long)puVar7 + 0x3c) = 0;
    *(undefined8 *)((long)puVar7 + 0x54) = 0;
    *(undefined8 *)((long)puVar7 + 0x4c) = 0;
    puVar7[0xc] = 0;
    puVar7[0xb] = 0;
    puVar18 = puVar7 + 0xf;
    *puVar18 = 0;
    puVar10 = puVar7 + 6;
    puVar7[0xd] = puVar10;
    puVar7[0xe] = puVar18;
    puVar7[0x10] = 0;
    puVar13 = puVar7 + 0x11;
    *(undefined4 *)puVar13 = 0x42ff0000;
    piVar20 = (int *)((long)puVar7 + 0x8c);
    *(undefined8 *)((long)puVar7 + 0x94) = 0;
    piVar20[0] = 0;
    piVar20[1] = 0;
    *(undefined8 *)((long)puVar7 + 0xa4) = 0;
    *(undefined8 *)((long)puVar7 + 0x9c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb4) = 0;
    *(undefined8 *)((long)puVar7 + 0xac) = 0;
    puVar7[0x18] = 0;
    puVar7[0x17] = 0;
    puVar19 = puVar7 + 0x1b;
    *puVar19 = 0;
    puVar7[0x19] = puVar7 + 0x12;
    puVar7[0x1a] = puVar19;
    puVar7[0x1c] = 0;
    *(undefined4 *)(puVar7 + 0x1d) = 0x42ff0000;
    piVar23 = (int *)((long)puVar7 + 0xec);
    *(undefined8 *)((long)puVar7 + 0xf4) = 0;
    piVar23[0] = 0;
    piVar23[1] = 0;
    *(undefined8 *)((long)puVar7 + 0x104) = 0;
    *(undefined8 *)((long)puVar7 + 0xfc) = 0;
    puVar7[0x24] = 0;
    puVar7[0x23] = 0;
    *(undefined8 *)((long)puVar7 + 0x114) = 0;
    *(undefined8 *)((long)puVar7 + 0x10c) = 0;
    puVar16 = puVar7 + 0x27;
    puVar7[0x25] = puVar7 + 0x1e;
    puVar7[0x26] = puVar16;
    puVar7[0x27] = 0;
    puVar7[0x28] = 0;
    *(undefined4 *)(puVar7 + 0x29) = 0x42ff0000;
    piVar1 = (int *)((long)puVar7 + 0x14c);
    puVar7[0x30] = 0;
    puVar7[0x2f] = 0;
    *(undefined8 *)((long)puVar7 + 0x164) = 0;
    *(undefined8 *)((long)puVar7 + 0x15c) = 0;
    *(undefined8 *)((long)puVar7 + 0x174) = 0;
    *(undefined8 *)((long)puVar7 + 0x16c) = 0;
    *(undefined8 *)((long)puVar7 + 0x154) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    puVar11 = puVar7 + 0x33;
    puVar7[0x31] = puVar7 + 0x2a;
    puVar7[0x32] = puVar11;
    puVar7[0x33] = 0;
    puVar7[0x34] = 0;
    if ((uVar3 & 7) - 5 < 2) {
      uStack_160._0_4_ = 0x42ff0000;
      puStack_e8 = &uStack_160;
      uStack_120 = (ulong)puStack_e8 | 8;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_160._4_4_ = 0;
      uStack_158 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      uStack_134 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      puStack_118 = &uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      iStack_f0 = 0x2010000;
      uStack_e0 = 0;
      FUN_109a479a0(param_3,&iStack_f0);
      if (puVar7[0xc] != 0) {
        piVar2 = (int *)(puVar7[0xc] + 0x14);
        do {
          iVar21 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(puVar12);
        }
      }
      puVar7[0xc] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      if (0 < *(int *)((long)puVar7 + 0x2c)) {
        lVar9 = 0;
        lVar14 = puVar7[0xd];
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *piVar17);
      }
      puVar7[6] = CONCAT44(uStack_154,uStack_158);
      puVar7[5] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      puVar7[8] = CONCAT44(uStack_144,uStack_148);
      puVar7[7] = CONCAT44(uStack_14c,uStack_150);
      puVar7[10] = CONCAT44(uStack_134,uStack_138);
      puVar7[9] = CONCAT44(uStack_13c,uStack_140);
      puVar7[0xc] = lStack_128;
      puVar7[0xb] = CONCAT44(uStack_12c,uStack_130);
      puVar15 = (undefined8 *)puVar7[0xe];
      if (puVar15 != puVar18) {
        if (puVar15 != (undefined8 *)0x0) {
          _free(puVar15[-1]);
        }
        puVar7[0xd] = puVar10;
        puVar7[0xe] = puVar18;
        puVar15 = puVar18;
      }
      if (uStack_160._4_4_ < 3) {
        puVar10 = (undefined8 *)((ulong)&uStack_160 | 4);
        *puVar15 = *puStack_118;
        puVar15[1] = puStack_118[1];
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        *(undefined8 *)((long)puVar10 + 0x34) = 0;
        *(undefined8 *)((long)puVar10 + 0x2c) = 0;
        goto LAB_109194470;
      }
LAB_109194488:
      puVar7[0xd] = uStack_120;
      puVar7[0xe] = puStack_118;
    }
    else {
      FUN_10918f220(&uStack_160,param_3,5);
      if (puVar7[0xc] != 0) {
        piVar2 = (int *)(puVar7[0xc] + 0x14);
        do {
          iVar21 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(puVar12);
        }
      }
      puVar7[0xc] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      if (0 < *(int *)((long)puVar7 + 0x2c)) {
        lVar9 = 0;
        lVar14 = puVar7[0xd];
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *piVar17);
      }
      puVar7[6] = CONCAT44(uStack_154,uStack_158);
      puVar7[5] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      puVar7[8] = CONCAT44(uStack_144,uStack_148);
      puVar7[7] = CONCAT44(uStack_14c,uStack_150);
      puVar7[10] = CONCAT44(uStack_134,uStack_138);
      puVar7[9] = CONCAT44(uStack_13c,uStack_140);
      puVar7[0xc] = lStack_128;
      puVar7[0xb] = CONCAT44(uStack_12c,uStack_130);
      puVar15 = (undefined8 *)puVar7[0xe];
      if (puVar15 != puVar18) {
        if (puVar15 != (undefined8 *)0x0) {
          _free(puVar15[-1]);
        }
        puVar7[0xd] = puVar10;
        puVar7[0xe] = puVar18;
        puVar15 = puVar18;
      }
      if (2 < uStack_160._4_4_) goto LAB_109194488;
      puVar10 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puVar15 = *puStack_118;
      puVar15[1] = puStack_118[1];
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
LAB_109194470:
      uStack_160._0_4_ = 0x42ff0000;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    *(uint *)(puVar7 + 1) = *(uint *)(puVar7 + 5) & 7;
    iVar21 = (int)((double)*(int *)((long)puVar7 + 0x34) / (double)param_5);
    iVar22 = (int)((double)*(int *)(puVar7 + 6) / (double)param_5);
    uStack_160._0_4_ = 0x42ff0000;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_160._4_4_ = 0;
    uStack_158 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_120 = (ulong)&uStack_160 | 8;
    uStack_110 = 0;
    uStack_108 = 0;
    puStack_118 = &uStack_110;
    iStack_f0 = iVar22;
    iStack_ec = iVar21;
    FUN_109a83fd0(&uStack_160,2,&iStack_f0,*(uint *)(puVar7 + 5) & 0xfff);
    uStack_e0 = 0;
    iStack_f0 = 0x1010000;
    uStack_1c0 = 0x2010000;
    uStack_1b0 = 0;
    puStack_1b8 = &uStack_160;
    iStack_f8 = iVar21;
    iStack_f4 = iVar22;
    puStack_e8 = puVar12;
    FUN_109b0f718(0,0,&iStack_f0,&uStack_1c0,&iStack_f8,1);
    if (puVar7[0x30] != 0) {
      piVar17 = (int *)(puVar7[0x30] + 0x14);
      do {
        iVar21 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(puVar7 + 0x29);
      }
    }
    puVar7[0x30] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x2d] = 0;
    if (0 < *(int *)((long)puVar7 + 0x14c)) {
      lVar9 = 0;
      lVar14 = puVar7[0x31];
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *piVar1);
    }
    puVar7[0x2a] = CONCAT44(uStack_154,uStack_158);
    puVar7[0x29] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    puVar7[0x2c] = CONCAT44(uStack_144,uStack_148);
    puVar7[0x2b] = CONCAT44(uStack_14c,uStack_150);
    puVar7[0x2e] = CONCAT44(uStack_134,uStack_138);
    puVar7[0x2d] = CONCAT44(uStack_13c,uStack_140);
    puVar7[0x30] = lStack_128;
    puVar7[0x2f] = CONCAT44(uStack_12c,uStack_130);
    puVar10 = (undefined8 *)puVar7[0x32];
    if (puVar10 != puVar11) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      puVar7[0x31] = puVar7 + 0x2a;
      puVar7[0x32] = puVar11;
      puVar10 = puVar11;
    }
    if (uStack_160._4_4_ < 3) {
      puVar11 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puVar10 = *puStack_118;
      puVar10[1] = puStack_118[1];
      uStack_160._0_4_ = 0x42ff0000;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    else {
      puVar7[0x31] = uStack_120;
      puVar7[0x32] = puStack_118;
    }
    FUN_10918f358(&uStack_160,puVar7 + 0x29,*(undefined4 *)(puVar7 + 2));
    if (puVar7[0x18] != 0) {
      piVar1 = (int *)(puVar7[0x18] + 0x14);
      do {
        iVar21 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(puVar13);
      }
    }
    puVar7[0x18] = 0;
    puVar7[0x14] = 0;
    puVar7[0x13] = 0;
    puVar7[0x16] = 0;
    puVar7[0x15] = 0;
    if (0 < *(int *)((long)puVar7 + 0x8c)) {
      lVar9 = 0;
      lVar14 = puVar7[0x19];
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *piVar20);
    }
    puVar7[0x12] = CONCAT44(uStack_154,uStack_158);
    puVar7[0x11] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    puVar7[0x14] = CONCAT44(uStack_144,uStack_148);
    puVar7[0x13] = CONCAT44(uStack_14c,uStack_150);
    puVar7[0x16] = CONCAT44(uStack_134,uStack_138);
    puVar7[0x15] = CONCAT44(uStack_13c,uStack_140);
    puVar7[0x18] = lStack_128;
    puVar7[0x17] = CONCAT44(uStack_12c,uStack_130);
    puVar10 = (undefined8 *)puVar7[0x1a];
    if (puVar10 != puVar19) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      puVar7[0x19] = puVar7 + 0x12;
      puVar7[0x1a] = puVar19;
      puVar10 = puVar19;
    }
    if (uStack_160._4_4_ < 3) {
      puVar11 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puVar10 = *puStack_118;
      puVar10[1] = puStack_118[1];
      uStack_160._0_4_ = 0x42ff0000;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    else {
      puVar7[0x19] = uStack_120;
      puVar7[0x1a] = puStack_118;
    }
    FUN_10918f404(&iStack_f0,puVar7 + 0x29,puVar7 + 0x29);
    FUN_10918f358(&uStack_160,&iStack_f0,*(undefined4 *)(puVar7 + 2));
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&iStack_f0);
      }
    }
    lStack_b8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (0 < iStack_ec) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_b0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_ec);
    }
    if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
    FUN_10918f404(&uStack_1c0,puVar13,puVar13);
    FUN_10918f4c4(&iStack_f0,&uStack_160,&uStack_1c0);
    if (puVar7[0x24] != 0) {
      piVar1 = (int *)(puVar7[0x24] + 0x14);
      do {
        iVar21 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(puVar7 + 0x1d);
      }
    }
    puVar7[0x20] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x24] = 0;
    puVar7[0x22] = 0;
    puVar7[0x21] = 0;
    if (0 < *(int *)((long)puVar7 + 0xec)) {
      lVar9 = 0;
      lVar14 = puVar7[0x25];
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *piVar23);
    }
    puVar7[0x1e] = puStack_e8;
    puVar7[0x1d] = CONCAT44(iStack_ec,iStack_f0);
    puVar7[0x20] = uStack_d8;
    puVar7[0x1f] = uStack_e0;
    puVar7[0x22] = uStack_c8;
    puVar7[0x21] = uStack_d0;
    puVar7[0x24] = lStack_b8;
    puVar7[0x23] = uStack_c0;
    puVar10 = (undefined8 *)puVar7[0x26];
    if (puVar10 != puVar16) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      puVar7[0x25] = puVar7 + 0x1e;
      puVar7[0x26] = puVar16;
      puVar10 = puVar16;
    }
    puVar16 = (undefined8 *)((ulong)&iStack_f0 | 4);
    if (iStack_ec < 3) {
      *puVar10 = *puStack_a8;
      puVar10[1] = puStack_a8[1];
      iStack_f0 = 0x42ff0000;
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16[5] = 0;
      puVar16[4] = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      if (puStack_a8 != auStack_a0) {
        _free(puStack_a8[-1]);
      }
    }
    else {
      puVar7[0x25] = uStack_b0;
      puVar7[0x26] = puStack_a8;
      puStack_a8 = auStack_a0;
      iStack_f0 = 0x42ff0000;
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16[5] = 0;
      puVar16[4] = 0;
      *(undefined8 *)((long)puVar16 + 0x34) = 0;
      *(undefined8 *)((long)puVar16 + 0x2c) = 0;
      uStack_b0 = (ulong)&iStack_f0 | 8;
    }
    if (lStack_188 != 0) {
      piVar1 = (int *)(lStack_188 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&uStack_1c0);
      }
    }
    lStack_188 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    if (0 < iStack_1bc) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_180 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_1bc);
    }
    if (puStack_178 != auStack_170 && puStack_178 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_178 + -8));
    }
    if (lStack_128 != 0) {
      piVar1 = (int *)(lStack_128 + 0x14);
      do {
        iVar21 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 + -1 == 0) {
        func_0x000109a848d4(&uStack_160);
      }
    }
    lStack_128 = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    if (0 < uStack_160._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_120 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_160._4_4_);
    }
    if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
      _free(puStack_118[-1]);
    }
  }
  else {
    puVar7 = (undefined8 *)0x400;
    __Znwm();
    FUN_109190038(param_1);
  }
  *param_2 = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_2;
  }
  ___stack_chk_fail();
LAB_109194a94:
  puVar8 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_160 = puVar8 + 1;
  uStack_158 = 0x26;
  uStack_154 = 0;
  *(undefined8 *)(puVar8 + 3) = 0x203d3d202928736c;
  *(undefined8 *)(puVar8 + 1) = 0x656e6e6168632e49;
  *(undefined1 *)((long)puVar8 + 0x2a) = 0;
  *(undefined8 *)(puVar8 + 7) = 0x28736c656e6e6168;
  *(undefined8 *)(puVar8 + 5) = 0x632e49207c7c2031;
  *(undefined8 *)((long)puVar8 + 0x22) = 0x33203d3d20292873;
  FUN_109ac3188(0xffffff29,&uStack_160,&UNK_10f55a893,&UNK_10f55a8a4,0x143);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109194af8);
  (*pcVar6)();
}



/* Entry: 109194bd4; end: 109195503;  */

void FUN_109194bd4(long *param_1,undefined8 param_2,uint *param_3,uint *param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int *piVar18;
  undefined8 uStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined4 *puStack_170;
  long *plStack_168;
  long alStack_160 [2];
  int iStack_150;
  int iStack_14c;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long alStack_100 [3];
  int iStack_e8;
  int iStack_e4;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  if (uVar3 != param_4[3] || uVar2 != param_4[2]) {
    puVar10 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    uStack_1b0 = puVar10 + 1;
    uStack_1a8 = 0x34;
    uStack_1a4 = 0;
    *(undefined8 *)(puVar10 + 3) = 0x616d203d3d206874;
    *(undefined8 *)(puVar10 + 1) = 0x6469576567616d69;
    puVar10[0xd] = 0x74686769;
    *(undefined1 *)(puVar10 + 0xe) = 0;
    *(undefined8 *)(puVar10 + 7) = 0x6567616d69202626;
    *(undefined8 *)(puVar10 + 5) = 0x2068746469576b73;
    *(undefined8 *)(puVar10 + 0xb) = 0x65486b73616d203d;
    *(undefined8 *)(puVar10 + 9) = 0x3d20746867696548;
    FUN_109ac3188(0xffffff29,&uStack_1b0,"Filter",&UNK_10f55a8a4,0x15c);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109195400);
    (*pcVar9)();
  }
  *(int *)param_1 = 0x42ff0000;
  piVar18 = (int *)((long)param_1 + 4);
  ((int *)((long)param_1 + 0xc))[0] = 0;
  ((int *)((long)param_1 + 0xc))[1] = 0;
  piVar18[0] = 0;
  piVar18[1] = 0;
  plVar8 = param_1 + 1;
  ((int *)((long)param_1 + 0x1c))[0] = 0;
  ((int *)((long)param_1 + 0x1c))[1] = 0;
  ((int *)((long)param_1 + 0x14))[0] = 0;
  ((int *)((long)param_1 + 0x14))[1] = 0;
  ((int *)((long)param_1 + 0x2c))[0] = 0;
  ((int *)((long)param_1 + 0x2c))[1] = 0;
  ((int *)((long)param_1 + 0x24))[0] = 0;
  ((int *)((long)param_1 + 0x24))[1] = 0;
  plVar17 = param_1 + 10;
  *plVar17 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = (long)plVar8;
  param_1[9] = (long)plVar17;
  param_1[0xb] = 0;
  iVar4 = 0;
  iVar11 = (int)param_6;
  if (iVar11 != 0) {
    iVar4 = (int)uVar3 / iVar11;
  }
  if (uVar3 == iVar4 * iVar11) {
    iVar4 = 0;
    if (iVar11 != 0) {
      iVar4 = (int)uVar2 / iVar11;
    }
    if (uVar2 == iVar4 * iVar11) {
      FUN_109194090(param_2,&iStack_e8,param_3,param_5,param_6);
      FUN_10918ed2c(&uStack_1b0,CONCAT44(iStack_e4,iStack_e8),param_4,param_7);
      if (param_1[7] != 0) {
        piVar1 = (int *)(param_1[7] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar12 = 0;
        lVar13 = param_1[8];
        do {
          *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *piVar18);
      }
      param_1[1] = CONCAT44(uStack_1a4,uStack_1a8);
      *param_1 = CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
      param_1[3] = CONCAT44(uStack_194,uStack_198);
      param_1[2] = CONCAT44(uStack_19c,uStack_1a0);
      param_1[5] = CONCAT44(uStack_184,uStack_188);
      param_1[4] = CONCAT44(uStack_18c,uStack_190);
      param_1[7] = lStack_178;
      param_1[6] = CONCAT44(uStack_17c,uStack_180);
      plVar16 = (long *)param_1[9];
      if (plVar16 != plVar17) {
        if (plVar16 != (long *)0x0) {
          _free(plVar16[-1]);
        }
        param_1[8] = (long)plVar8;
        param_1[9] = (long)plVar17;
        plVar16 = plVar17;
      }
      puVar14 = (undefined8 *)((ulong)&uStack_1b0 | 4);
      if (uStack_1b0._4_4_ < 3) {
        *plVar16 = *plStack_168;
        plVar16[1] = plStack_168[1];
        uStack_1b0._0_4_ = 0x42ff0000;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (plStack_168 != alStack_160) {
          _free(plStack_168[-1]);
        }
      }
      else {
        param_1[8] = (long)puStack_170;
        param_1[9] = (long)plStack_168;
        plStack_168 = alStack_160;
        uStack_1b0._0_4_ = 0x42ff0000;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        puStack_170 = (undefined4 *)((ulong)&uStack_1b0 | 8);
      }
      plVar16 = (long *)CONCAT44(iStack_e4,iStack_e8);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      goto LAB_1091951fc;
    }
  }
  iVar4 = 0;
  if (iVar11 != 0) {
    iVar4 = (int)(uVar3 + iVar11 + -1) / iVar11;
  }
  uStack_1b0._0_4_ = 0x42ff0000;
  puStack_170 = &uStack_1a8;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1b0._4_4_ = 0;
  uStack_1a8 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  alStack_160[0] = 0;
  alStack_160[1] = 0;
  iVar5 = 0;
  if (iVar11 != 0) {
    iVar5 = (int)(uVar2 + iVar11 + -1) / iVar11;
  }
  plStack_168 = alStack_160;
  iStack_e8 = iVar5 * iVar11;
  iStack_e4 = iVar4 * iVar11;
  FUN_109a83fd0(&uStack_1b0,2,&iStack_e8,*param_3 & 0xfff);
  iStack_e8 = 0x42ff0000;
  puStack_a8 = &uStack_e0;
  uStack_dc = 0;
  uStack_d8 = 0;
  iStack_e4 = 0;
  uStack_e0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  iStack_150 = iVar5 * iVar11;
  iStack_14c = iVar4 * iVar11;
  puStack_a0 = &uStack_98;
  FUN_109a83fd0(&iStack_e8,2,&iStack_150,*param_4 & 0xfff);
  uStack_1d8 = 0;
  uStack_1d0 = uVar3;
  uStack_1cc = uVar2;
  FUN_109a852c8(&iStack_150,&uStack_1b0,&uStack_1d8);
  plStack_1c8 = (long *)CONCAT44(plStack_1c8._4_4_,0xc2010000);
  uStack_1b8 = 0;
  uStack_1c0 = &iStack_150;
  FUN_109a479a0(param_3,&plStack_1c8);
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&iStack_150);
    }
  }
  lStack_118 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  if (0 < iStack_14c) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_14c);
  }
  if (plStack_108 != alStack_100 && plStack_108 != (long *)0x0) {
    _free(plStack_108[-1]);
  }
  uStack_1d8 = 0;
  uStack_1d0 = uVar3;
  uStack_1cc = uVar2;
  FUN_109a852c8(&iStack_150,&iStack_e8,&uStack_1d8);
  plStack_1c8 = (long *)CONCAT44(plStack_1c8._4_4_,0xc2010000);
  uStack_1b8 = 0;
  uStack_1c0 = &iStack_150;
  FUN_109a479a0(param_4,&plStack_1c8);
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&iStack_150);
    }
  }
  lStack_118 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  if (0 < iStack_14c) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_14c);
  }
  if (plStack_108 != alStack_100 && plStack_108 != (long *)0x0) {
    _free(plStack_108[-1]);
  }
  FUN_109194090(param_2,&plStack_1c8,&uStack_1b0,param_5 & 0xffffffff,param_6);
  FUN_10918ed2c(&iStack_150,plStack_1c8,&iStack_e8,param_7 & 0xffffffff);
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar12 = 0;
    lVar13 = param_1[8];
    do {
      *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *piVar18);
  }
  param_1[1] = lStack_148;
  *param_1 = CONCAT44(iStack_14c,iStack_150);
  param_1[3] = lStack_138;
  param_1[2] = lStack_140;
  param_1[5] = lStack_128;
  param_1[4] = lStack_130;
  param_1[7] = lStack_118;
  param_1[6] = lStack_120;
  plVar16 = (long *)param_1[9];
  if (plVar16 != plVar17) {
    if (plVar16 != (long *)0x0) {
      _free(plVar16[-1]);
    }
    param_1[8] = (long)plVar8;
    param_1[9] = (long)plVar17;
    plVar16 = plVar17;
  }
  puVar14 = (undefined8 *)((ulong)&iStack_150 | 4);
  if (iStack_14c < 3) {
    *plVar16 = *plStack_108;
    plVar16[1] = plStack_108[1];
    iStack_150 = 0x42ff0000;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    if (plStack_108 != alStack_100) {
      _free(plStack_108[-1]);
    }
  }
  else {
    param_1[8] = uStack_110;
    param_1[9] = (long)plStack_108;
    plStack_108 = alStack_100;
    iStack_150 = 0x42ff0000;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    uStack_110 = (ulong)&iStack_150 | 8;
  }
  if (plStack_1c8 != (long *)0x0) {
    (**(code **)(*plStack_1c8 + 8))();
  }
  plStack_1c8 = (long *)0x0;
  uStack_1c0 = (int *)CONCAT44(uVar2,uVar3);
  plVar16 = (long *)&iStack_150;
  FUN_109a852c8(plVar16,param_1,&plStack_1c8);
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      plVar16 = param_1;
      func_0x000109a848d4(param_1);
    }
  }
  if (0 < *piVar18) {
    lVar12 = 0;
    lVar13 = param_1[8];
    do {
      *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *piVar18);
  }
  param_1[1] = lStack_148;
  *param_1 = CONCAT44(iStack_14c,iStack_150);
  param_1[3] = lStack_138;
  param_1[2] = lStack_140;
  param_1[5] = lStack_128;
  param_1[4] = lStack_130;
  param_1[7] = lStack_118;
  param_1[6] = lStack_120;
  plVar15 = (long *)param_1[9];
  if (plVar15 != plVar17) {
    if (plVar15 != (long *)0x0) {
      plVar16 = (long *)plVar15[-1];
      _free(plVar16);
    }
    param_1[8] = (long)plVar8;
    param_1[9] = (long)plVar17;
    plVar15 = plVar17;
  }
  if (iStack_14c < 3) {
    puVar14 = (undefined8 *)((ulong)&iStack_150 | 4);
    *plVar15 = *plStack_108;
    plVar15[1] = plStack_108[1];
    iStack_150 = 0x42ff0000;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    *(undefined8 *)((long)puVar14 + 0x34) = 0;
    *(undefined8 *)((long)puVar14 + 0x2c) = 0;
    if (plStack_108 != alStack_100) {
      plVar16 = (long *)plStack_108[-1];
      _free(plVar16);
    }
  }
  else {
    param_1[8] = uStack_110;
    param_1[9] = (long)plStack_108;
  }
  if (lStack_b0 != 0) {
    piVar18 = (int *)(lStack_b0 + 0x14);
    do {
      iVar4 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      plVar16 = (long *)&iStack_e8;
      func_0x000109a848d4(plVar16);
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
    lVar12 = 0;
    do {
      puStack_a8[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    plVar16 = (long *)puStack_a0[-1];
    _free(plVar16);
  }
  if (lStack_178 != 0) {
    piVar18 = (int *)(lStack_178 + 0x14);
    do {
      iVar4 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      plVar16 = &uStack_1b0;
      func_0x000109a848d4(plVar16);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (0 < uStack_1b0._4_4_) {
    lVar12 = 0;
    do {
      puStack_170[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_1b0._4_4_);
  }
  if (plStack_168 != alStack_160 && plStack_168 != (long *)0x0) {
    plVar16 = (long *)plStack_168[-1];
    _free(plVar16);
  }
LAB_1091951fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_1b0);
  plVar8 = (long *)CONCAT44(iStack_e4,iStack_e8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  do {
    func_0x00010567aa40(param_1);
    __Unwind_Resume(plVar16);
    func_0x00010567aa40(&uStack_1b0);
  } while( true );
}



/* Entry: 109195504; end: 109195507;  */

undefined8 * FUN_109195504(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110adf120;
  if (param_1[0x30] != 0) {
    piVar1 = (int *)(param_1[0x30] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x29);
    }
  }
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  if (0 < *(int *)((long)param_1 + 0x14c)) {
    lVar5 = 0;
    lVar7 = param_1[0x31];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14c));
  }
  puVar6 = (undefined8 *)param_1[0x32];
  if (puVar6 != param_1 + 0x33 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)(param_1[0x24] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  if (0 < *(int *)((long)param_1 + 0xec)) {
    lVar5 = 0;
    lVar7 = param_1[0x25];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xec));
  }
  puVar6 = (undefined8 *)param_1[0x26];
  if (puVar6 != param_1 + 0x27 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x18] != 0) {
    piVar1 = (int *)(param_1[0x18] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x11);
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x19];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x8c));
  }
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 != param_1 + 0x1b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109195508; end: 10919551b;  */

void FUN_109195508(void)

{
  FUN_109195534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10919551c; end: 10919551f;  */

undefined8 * FUN_10919551c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110adf148;
  if (param_1[0x7b] != 0) {
    piVar1 = (int *)(param_1[0x7b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x74);
    }
  }
  param_1[0x7b] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  if (0 < *(int *)((long)param_1 + 0x3a4)) {
    lVar5 = 0;
    lVar7 = param_1[0x7c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3a4));
  }
  puVar6 = (undefined8 *)param_1[0x7d];
  if (puVar6 != param_1 + 0x7e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6f] != 0) {
    piVar1 = (int *)(param_1[0x6f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  param_1[0x6f] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  if (0 < *(int *)((long)param_1 + 0x344)) {
    lVar5 = 0;
    lVar7 = param_1[0x70];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x344));
  }
  puVar6 = (undefined8 *)param_1[0x71];
  if (puVar6 != param_1 + 0x72 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[99] != 0) {
    piVar1 = (int *)(param_1[99] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5c);
    }
  }
  param_1[99] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if (0 < *(int *)((long)param_1 + 0x2e4)) {
    lVar5 = 0;
    lVar7 = param_1[100];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2e4));
  }
  puVar6 = (undefined8 *)param_1[0x65];
  if (puVar6 != param_1 + 0x66 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x57] != 0) {
    piVar1 = (int *)(param_1[0x57] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  param_1[0x57] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if (0 < *(int *)((long)param_1 + 0x284)) {
    lVar5 = 0;
    lVar7 = param_1[0x58];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x284));
  }
  puVar6 = (undefined8 *)param_1[0x59];
  if (puVar6 != param_1 + 0x5a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x4b] != 0) {
    piVar1 = (int *)(param_1[0x4b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x44);
    }
  }
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (0 < *(int *)((long)param_1 + 0x224)) {
    lVar5 = 0;
    lVar7 = param_1[0x4c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x224));
  }
  puVar6 = (undefined8 *)param_1[0x4d];
  if (puVar6 != param_1 + 0x4e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    piVar1 = (int *)(param_1[0x1b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xa4));
  }
  puVar6 = (undefined8 *)param_1[0x1d];
  if (puVar6 != param_1 + 0x1e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  puStack_28 = param_1 + 2;
  func_0x0001060c3a9c(&puStack_28);
  return param_1;
}



/* Entry: 109195520; end: 109195533;  */

void FUN_109195520(void)

{
  FUN_109195764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109195534; end: 109195763;  */

undefined8 * FUN_109195534(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110adf120;
  if (param_1[0x30] != 0) {
    piVar1 = (int *)(param_1[0x30] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x29);
    }
  }
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  if (0 < *(int *)((long)param_1 + 0x14c)) {
    lVar5 = 0;
    lVar7 = param_1[0x31];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14c));
  }
  puVar6 = (undefined8 *)param_1[0x32];
  if (puVar6 != param_1 + 0x33 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)(param_1[0x24] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  if (0 < *(int *)((long)param_1 + 0xec)) {
    lVar5 = 0;
    lVar7 = param_1[0x25];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xec));
  }
  puVar6 = (undefined8 *)param_1[0x26];
  if (puVar6 != param_1 + 0x27 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x18] != 0) {
    piVar1 = (int *)(param_1[0x18] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x11);
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x19];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x8c));
  }
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 != param_1 + 0x1b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109195764; end: 109195c83;  */

undefined8 * FUN_109195764(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110adf148;
  if (param_1[0x7b] != 0) {
    piVar1 = (int *)(param_1[0x7b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x74);
    }
  }
  param_1[0x7b] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  if (0 < *(int *)((long)param_1 + 0x3a4)) {
    lVar5 = 0;
    lVar7 = param_1[0x7c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3a4));
  }
  puVar6 = (undefined8 *)param_1[0x7d];
  if (puVar6 != param_1 + 0x7e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6f] != 0) {
    piVar1 = (int *)(param_1[0x6f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  param_1[0x6f] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  if (0 < *(int *)((long)param_1 + 0x344)) {
    lVar5 = 0;
    lVar7 = param_1[0x70];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x344));
  }
  puVar6 = (undefined8 *)param_1[0x71];
  if (puVar6 != param_1 + 0x72 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[99] != 0) {
    piVar1 = (int *)(param_1[99] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5c);
    }
  }
  param_1[99] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if (0 < *(int *)((long)param_1 + 0x2e4)) {
    lVar5 = 0;
    lVar7 = param_1[100];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2e4));
  }
  puVar6 = (undefined8 *)param_1[0x65];
  if (puVar6 != param_1 + 0x66 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x57] != 0) {
    piVar1 = (int *)(param_1[0x57] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  param_1[0x57] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if (0 < *(int *)((long)param_1 + 0x284)) {
    lVar5 = 0;
    lVar7 = param_1[0x58];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x284));
  }
  puVar6 = (undefined8 *)param_1[0x59];
  if (puVar6 != param_1 + 0x5a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x4b] != 0) {
    piVar1 = (int *)(param_1[0x4b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x44);
    }
  }
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (0 < *(int *)((long)param_1 + 0x224)) {
    lVar5 = 0;
    lVar7 = param_1[0x4c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x224));
  }
  puVar6 = (undefined8 *)param_1[0x4d];
  if (puVar6 != param_1 + 0x4e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    piVar1 = (int *)(param_1[0x1b] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xa4));
  }
  puVar6 = (undefined8 *)param_1[0x1d];
  if (puVar6 != param_1 + 0x1e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  puStack_28 = param_1 + 2;
  func_0x0001060c3a9c(&puStack_28);
  return param_1;
}



/* Entry: 109195c84; end: 109195cab;  */

void FUN_109195c84(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10959e12c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109195cac; end: 10919630b;  */

void FUN_109195cac(undefined4 *param_1,uint *param_2,uint *param_3,ushort *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  code *pcVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plStack_210;
  undefined8 uStack_208;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  uint uStack_a4;
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
  long *plStack_68;
  long alStack_60 [2];
  
  if ((*param_2 & 0xfff) == 0x10) {
    if ((*param_3 & 0xfff) == 0x10) {
      if ((*param_4 & 0xfff) == 0) {
        if ((param_2[2] == param_3[2]) && (param_2[3] == param_3[3])) {
          if ((param_2[2] == *(uint *)(param_4 + 4)) && (param_2[3] == *(uint *)(param_4 + 6))) {
            FUN_109a8261c(&plStack_210,0x100,0x100,0);
            uStack_b0 = 0x42ff0000;
            lStack_70 = (long)&uStack_ac + 4;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_ac = 0;
            lStack_78 = 0;
            uStack_7c = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_9c = 0;
            uStack_98 = 0;
            alStack_60[0] = 0;
            alStack_60[1] = 0;
            plStack_68 = alStack_60;
            (**(code **)(*plStack_210 + 0x18))(plStack_210,&plStack_210,&uStack_b0,0xffffffff);
            FUN_10918eb6c(&plStack_210);
            if (0 < uStack_ac._4_4_) {
              lVar14 = 0;
              uVar17 = (ulong)uStack_a4;
              do {
                if (0 < (int)uVar17) {
                  uVar19 = 0;
                  lVar20 = 0;
                  do {
                    uVar15 = (uint)(uVar19 >> 8);
                    if (0xfe < uVar15) {
                      uVar15 = 0xff;
                    }
                    *(char *)(CONCAT44(uStack_9c,uStack_a0) + lVar14 * *plStack_68 + lVar20) =
                         (char)uVar15;
                    lVar20 = lVar20 + 1;
                    uVar17 = (ulong)(int)uStack_a4;
                    uVar19 = (ulong)(uint)((int)uVar19 + (int)lVar14);
                  } while (lVar20 < (long)uVar17);
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 < uStack_ac._4_4_);
            }
            FUN_109a8261c(&plStack_210,param_2[2],param_2[3],0x10);
            *param_1 = 0x42ff0000;
            piVar1 = param_1 + 2;
            *(undefined8 *)(param_1 + 0xe) = 0;
            *(undefined8 *)(param_1 + 0xc) = 0;
            *(undefined8 *)(param_1 + 0xb) = 0;
            *(undefined8 *)(param_1 + 9) = 0;
            *(undefined8 *)(param_1 + 7) = 0;
            *(undefined8 *)(param_1 + 5) = 0;
            *(undefined8 *)(param_1 + 3) = 0;
            *(undefined8 *)(param_1 + 1) = 0;
            *(undefined8 *)(param_1 + 0x14) = 0;
            *(int **)(param_1 + 0x10) = piVar1;
            *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
            *(undefined8 *)(param_1 + 0x16) = 0;
            (**(code **)(*plStack_210 + 0x18))(plStack_210,&plStack_210,param_1,0xffffffff);
            FUN_10918eb6c(&plStack_210);
            iVar16 = *piVar1;
            if (0 < iVar16) {
              lVar14 = 0;
              uVar17 = (ulong)(uint)param_1[3];
              do {
                if (0 < (int)uVar17) {
                  lVar18 = 0;
                  lVar20 = 0;
                  do {
                    pbVar4 = (byte *)(*(long *)(param_2 + 4) + lVar14 * **(long **)(param_2 + 0x12)
                                     + lVar18);
                    pbVar5 = (byte *)(*(long *)(param_3 + 4) + lVar14 * **(long **)(param_3 + 0x12)
                                     + lVar18);
                    bVar7 = *(byte *)(*(long *)(param_4 + 8) + lVar14 * **(long **)(param_4 + 0x24)
                                     + lVar20);
                    uVar17 = (ulong)bVar7;
                    lVar10 = CONCAT44(uStack_9c,uStack_a0);
                    lVar13 = *plStack_68;
                    uVar19 = (ulong)~(uint)bVar7 & 0xff;
                    uVar15 = (uint)*(byte *)(lVar10 + lVar13 * (ulong)*pbVar5 + uVar19) +
                             (uint)*(byte *)(lVar10 + lVar13 * (ulong)*pbVar4 + uVar17);
                    if (0xfe < uVar15) {
                      uVar15 = 0xff;
                    }
                    uVar2 = (uint)*(byte *)(lVar10 + lVar13 * (ulong)pbVar5[1] + uVar19) +
                            (uint)*(byte *)(lVar10 + lVar13 * (ulong)pbVar4[1] + uVar17);
                    if (0xfe < uVar2) {
                      uVar2 = 0xff;
                    }
                    uVar3 = (uint)*(byte *)(lVar10 + lVar13 * (ulong)pbVar5[2] + uVar19) +
                            (uint)*(byte *)(lVar10 + lVar13 * (ulong)pbVar4[2] + uVar17);
                    if (0xfe < uVar3) {
                      uVar3 = 0xff;
                    }
                    puVar6 = (undefined1 *)
                             (*(long *)(param_1 + 4) + lVar14 * **(long **)(param_1 + 0x12) + lVar18
                             );
                    *puVar6 = (char)uVar15;
                    puVar6[1] = (char)uVar2;
                    puVar6[2] = (char)uVar3;
                    lVar20 = lVar20 + 1;
                    uVar17 = (ulong)(int)param_1[3];
                    lVar18 = lVar18 + 3;
                  } while (lVar20 < (long)uVar17);
                  iVar16 = *piVar1;
                }
                lVar14 = lVar14 + 1;
              } while (lVar14 < iVar16);
            }
            if (lStack_78 != 0) {
              piVar1 = (int *)(lStack_78 + 0x14);
              do {
                iVar16 = *piVar1;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = iVar16 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar16 + -1 == 0) {
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
              lVar14 = 0;
              do {
                *(undefined4 *)(lStack_70 + lVar14 * 4) = 0;
                lVar14 = lVar14 + 1;
              } while (lVar14 < (int)uStack_ac);
            }
            if (plStack_68 != alStack_60 && plStack_68 != (long *)0x0) {
              _free(plStack_68[-1]);
            }
            return;
          }
          puVar12 = (undefined4 *)0x3c;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          plStack_210 = (long *)(puVar12 + 1);
          uStack_208 = 0x34;
          *(undefined8 *)(puVar12 + 3) = 0x6d203d3d2073776f;
          *(undefined8 *)(puVar12 + 1) = 0x722e416567616d69;
          puVar12[0xd] = 0x736c6f63;
          *(undefined1 *)(puVar12 + 0xe) = 0;
          *(undefined8 *)(puVar12 + 7) = 0x67616d6920262620;
          *(undefined8 *)(puVar12 + 5) = 0x73776f722e6b7361;
          *(undefined8 *)(puVar12 + 0xb) = 0x2e6b73616d203d3d;
          *(undefined8 *)(puVar12 + 9) = 0x20736c6f632e4165;
          FUN_109ac3188(0xffffff29,&plStack_210,&UNK_10f55a932,&UNK_10f55a943,0xb);
        }
        else {
          puVar12 = (undefined4 *)0x40;
          func_0x000107c2ae8c();
          *puVar12 = 1;
          plStack_210 = (long *)(puVar12 + 1);
          uStack_208 = 0x38;
          *(undefined8 *)(puVar12 + 3) = 0x69203d3d2073776f;
          *(undefined8 *)(puVar12 + 1) = 0x722e416567616d69;
          *(undefined1 *)(puVar12 + 0xf) = 0;
          *(undefined8 *)(puVar12 + 7) = 0x6d69202626207377;
          *(undefined8 *)(puVar12 + 5) = 0x6f722e426567616d;
          *(undefined8 *)(puVar12 + 0xb) = 0x616d69203d3d2073;
          *(undefined8 *)(puVar12 + 9) = 0x6c6f632e41656761;
          *(undefined8 *)(puVar12 + 0xd) = 0x736c6f632e426567;
          FUN_109ac3188(0xffffff29,&plStack_210,&UNK_10f55a932,&UNK_10f55a943,10);
        }
      }
      else {
        puVar12 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar12 = 1;
        plStack_210 = (long *)(puVar12 + 1);
        uStack_208 = 0x16;
        *(undefined1 *)((long)puVar12 + 0x1a) = 0;
        *(undefined8 *)(puVar12 + 3) = 0x43203d3d20292865;
        *(undefined8 *)(puVar12 + 1) = 0x7079742e6b73616d;
        *(undefined8 *)((long)puVar12 + 0x12) = 0x314355385f564320;
        FUN_109ac3188(0xffffff29,&plStack_210,&UNK_10f55a932,&UNK_10f55a943,7);
      }
    }
    else {
      puVar12 = (undefined4 *)0x20;
      func_0x000107c2ae8c();
      *puVar12 = 1;
      plStack_210 = (long *)(puVar12 + 1);
      uStack_208 = 0x18;
      *(undefined1 *)(puVar12 + 7) = 0;
      *(undefined8 *)(puVar12 + 3) = 0x3d3d202928657079;
      *(undefined8 *)(puVar12 + 1) = 0x742e426567616d69;
      *(undefined8 *)(puVar12 + 5) = 0x334355385f564320;
      FUN_109ac3188(0xffffff29,&plStack_210,&UNK_10f55a932,&UNK_10f55a943,6);
    }
  }
  else {
    puVar12 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    plStack_210 = (long *)(puVar12 + 1);
    uStack_208 = 0x18;
    *(undefined1 *)(puVar12 + 7) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x3d3d202928657079;
    *(undefined8 *)(puVar12 + 1) = 0x742e416567616d69;
    *(undefined8 *)(puVar12 + 5) = 0x334355385f564320;
    FUN_109ac3188(0xffffff29,&plStack_210,&UNK_10f55a932,&UNK_10f55a943,5);
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10919622c);
  (*pcVar11)();
}



/* Entry: 10919630c; end: 10919635f;  */

void FUN_10919630c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 109196360; end: 10919639f;  */

void FUN_109196360(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10919630c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1091963a0; end: 109196447;  */

long * FUN_1091963a0(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
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



/* Entry: 109196448; end: 10919657b;  */

void FUN_109196448(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27fc8(&puStack_38,2);
  *puStack_38 = 0x900000010;
  puVar5 = (undefined8 *)0xc;
  func_0x000107c2ae8c();
  alStack_48[0] = (long)puVar5 + 4;
  alStack_48[1] = 4;
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0x676e702e00000001;
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  uStack_58 = param_2;
  FUN_109b7fb60(alStack_48,auStack_60,param_1,&puStack_38);
  lVar4 = alStack_48[0];
  alStack_48[0] = 0;
  alStack_48[1] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  if (puStack_38 != (undefined8 *)0x0) {
    puStack_30 = puStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10919657c; end: 1091968f7;  */

uint * FUN_10919657c(uint *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint *puVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint auStack_78 [2];
  undefined4 **ppuStack_70;
  undefined8 uStack_68;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0x42ff0000;
  puVar18 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar18[0] = 0;
  puVar18[1] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar7 = param_1 + 0x14;
  puVar7[0] = 0;
  puVar7[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar1 = param_2[1];
  uVar13 = (ulong)uVar1;
  if (*(long *)(param_2 + 4) == 0) {
LAB_1091966b0:
    if ((((2 < (int)uVar1) || (param_2[2] != 1)) || (param_2[3] != 0x41)) ||
       ((*(long *)(param_2 + 4) == 0 || (puVar7 = param_1, (*param_2 & 0xfff) != 6)))) {
      puStack_60 = (undefined4 *)0x4100000001;
      puVar7 = param_2;
      FUN_109a83fd0(param_2,2,&puStack_60,6);
    }
    uStack_58 = 0;
    puStack_60 = (undefined4 *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    auStack_78[0] = 0xc1020006;
    ppuStack_70 = &puStack_60;
    uStack_68 = 0x400000001;
    FUN_109a91d90();
    puVar10 = auStack_78;
    puVar8 = param_2;
    FUN_109a48a40(param_2,puVar10,puVar7);
  }
  else {
    if ((int)uVar1 < 3) {
      lVar15 = (long)(int)param_2[3] * (long)(int)param_2[2];
    }
    else {
      lVar15 = 1;
      piVar17 = *(int **)(param_2 + 0x10);
      do {
        lVar15 = lVar15 * *piVar17;
        uVar13 = uVar13 - 1;
        piVar17 = piVar17 + 1;
      } while (uVar13 != 0);
    }
    if (lVar15 == 0) goto LAB_1091966b0;
    if (((*param_2 & 0xfff) != 6 || param_2[2] != 1) ||
       (puVar8 = param_1, puVar10 = param_2, param_2[3] != 0x41)) {
      puVar6 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      puStack_60 = puVar6 + 1;
      uStack_58 = 0x48;
      *(undefined8 *)(puVar6 + 7) = 0x202c657079742031;
      *(undefined8 *)(puVar6 + 5) = 0x434634365f564320;
      *(undefined8 *)(puVar6 + 0xb) = 0x6f6320646e612031;
      *(undefined8 *)(puVar6 + 9) = 0x203d3d2073776f72;
      *(undefined8 *)(puVar6 + 0xf) = 0x656e6f706d6f632a;
      *(undefined8 *)(puVar6 + 0xd) = 0x3331203d3d20736c;
      *(undefined1 *)(puVar6 + 0x13) = 0;
      *(undefined8 *)(puVar6 + 0x11) = 0x746e756f4373746e;
      *(undefined8 *)(puVar6 + 3) = 0x6576616820747375;
      *(undefined8 *)(puVar6 + 1) = 0x6d206c65646f6d5f;
      FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f55aa43,&UNK_10f55aa47,0x8e);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1091966b0);
      (*pcVar5)();
    }
  }
  if (param_1 == param_2) {
    lVar15 = *(long *)(param_1 + 4);
    goto LAB_109196840;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar17 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = *piVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar17 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
    do {
      iVar9 = *piVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar8 = param_1;
      func_0x000109a848d4();
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_1091967e4:
    if (2 < (int)param_2[1]) goto LAB_109196818;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    puVar11 = *(undefined8 **)(param_2 + 0x12);
    puVar16 = *(undefined8 **)(param_1 + 0x12);
    *puVar16 = *puVar11;
    puVar16[1] = puVar11[1];
  }
  else {
    lVar15 = 0;
    lVar14 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar14 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)*puVar18);
    *param_1 = *param_2;
    if ((int)*puVar18 < 3) goto LAB_1091967e4;
LAB_109196818:
    puVar8 = param_1;
    puVar10 = param_2;
    func_0x000109a84868();
  }
  lVar15 = *(long *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(long *)(param_1 + 4) = lVar15;
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar20;
  uVar20 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar20;
LAB_109196840:
  *(long *)(param_1 + 0x18) = lVar15;
  *(long *)(param_1 + 0x1a) = lVar15 + 0x28;
  *(long *)(param_1 + 0x1c) = lVar15 + 0xa0;
  puVar7 = (uint *)0x0;
  do {
    puVar18 = puVar7;
    if (0.0 < *(double *)(*(long *)(param_1 + 0x18) + (long)puVar18 * 8)) {
      puVar8 = param_1;
      puVar10 = puVar18;
      FUN_1091968f8();
    }
    iVar9 = (int)puVar10;
    puVar7 = (uint *)((long)puVar18 + 1);
  } while (puVar7 != (uint *)0x5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  puStack_60 = (undefined4 *)0x0;
  uStack_58 = 0;
  do {
    iVar4 = iRam0000000000000005 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(5,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam0000000000000005 = iVar4;
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    _free(*(undefined8 *)((long)puVar18 + -7));
  }
  func_0x00010567aa40(param_1);
  __Unwind_Resume();
  pcStack_88 = FUN_1091968f8;
  if (0.0 < *(double *)(*(long *)(puVar8 + 0x18) + (long)iVar9 * 8)) {
    pdVar12 = (double *)(*(long *)(puVar8 + 0x1c) + (long)iVar9 * 0x48);
    dVar19 = -((-(pdVar12[6] * pdVar12[5]) + pdVar12[8] * pdVar12[3]) * pdVar12[1]) +
             (-(pdVar12[7] * pdVar12[5]) + pdVar12[8] * pdVar12[4]) * *pdVar12 +
             (-(pdVar12[6] * pdVar12[4]) + pdVar12[7] * pdVar12[3]) * pdVar12[2];
    *(double *)(puVar8 + (long)iVar9 * 2 + 0x78) = dVar19;
    if (dVar19 <= 2.220446049250313e-16) {
      puVar6 = (undefined4 *)0x34;
      puStack_a0 = puVar7;
      puStack_98 = param_1;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar6 + 3) = 0x656d756e3a3a6474;
      *(undefined8 *)(puVar6 + 1) = 0x73203e206d727464;
      *puVar6 = 1;
      puStack_b0 = puVar6 + 1;
      uStack_a8 = 0x2d;
      *(undefined1 *)((long)puVar6 + 0x31) = 0;
      *(undefined8 *)(puVar6 + 7) = 0x6c62756f643c7374;
      *(undefined8 *)(puVar6 + 5) = 0x696d696c5f636972;
      *(undefined8 *)((long)puVar6 + 0x29) = 0x29286e6f6c697370;
      *(undefined8 *)((long)puVar6 + 0x21) = 0x653a3a3e656c6275;
      FUN_109ac3188(0xffffff29,&puStack_b0,&UNK_10f55aae4,&UNK_10f55aa47,0x10e);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109196adc);
      (*pcVar5)();
    }
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x1e) =
         (-(pdVar12[7] * pdVar12[5]) + pdVar12[8] * pdVar12[4]) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x24) =
         (-(pdVar12[3] * pdVar12[8]) - -(pdVar12[6] * pdVar12[5])) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x2a) =
         (-(pdVar12[6] * pdVar12[4]) + pdVar12[7] * pdVar12[3]) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x20) =
         (-(pdVar12[1] * pdVar12[8]) - -(pdVar12[7] * pdVar12[2])) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x26) =
         (-(pdVar12[6] * pdVar12[2]) + pdVar12[8] * *pdVar12) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x2c) =
         (-(*pdVar12 * pdVar12[7]) - -(pdVar12[6] * pdVar12[1])) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x22) =
         (-(pdVar12[4] * pdVar12[2]) + pdVar12[5] * pdVar12[1]) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x28) =
         (-(*pdVar12 * pdVar12[5]) - -(pdVar12[3] * pdVar12[2])) / dVar19;
    *(double *)(puVar8 + (long)iVar9 * 0x12 + 0x2e) =
         (-(pdVar12[3] * pdVar12[1]) + pdVar12[4] * *pdVar12) / dVar19;
  }
  return puVar8;
}



/* Entry: 1091968f8; end: 109196b0b;  */

void FUN_1091968f8(long param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (0.0 < *(double *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8)) {
    pdVar3 = (double *)(*(long *)(param_1 + 0x70) + (long)param_2 * 0x48);
    dVar4 = -((-(pdVar3[6] * pdVar3[5]) + pdVar3[8] * pdVar3[3]) * pdVar3[1]) +
            (-(pdVar3[7] * pdVar3[5]) + pdVar3[8] * pdVar3[4]) * *pdVar3 +
            (-(pdVar3[6] * pdVar3[4]) + pdVar3[7] * pdVar3[3]) * pdVar3[2];
    *(double *)(param_1 + (long)param_2 * 8 + 0x1e0) = dVar4;
    if (dVar4 <= 2.220446049250313e-16) {
      puVar2 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656d756e3a3a6474;
      *(undefined8 *)(puVar2 + 1) = 0x73203e206d727464;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x2d;
      *(undefined1 *)((long)puVar2 + 0x31) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x6c62756f643c7374;
      *(undefined8 *)(puVar2 + 5) = 0x696d696c5f636972;
      *(undefined8 *)((long)puVar2 + 0x29) = 0x29286e6f6c697370;
      *(undefined8 *)((long)puVar2 + 0x21) = 0x653a3a3e656c6275;
      FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f55aae4,&UNK_10f55aa47,0x10e);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109196adc);
      (*pcVar1)();
    }
    param_1 = param_1 + (long)param_2 * 0x48;
    *(double *)(param_1 + 0x78) = (-(pdVar3[7] * pdVar3[5]) + pdVar3[8] * pdVar3[4]) / dVar4;
    *(double *)(param_1 + 0x90) = (-(pdVar3[3] * pdVar3[8]) - -(pdVar3[6] * pdVar3[5])) / dVar4;
    *(double *)(param_1 + 0xa8) = (-(pdVar3[6] * pdVar3[4]) + pdVar3[7] * pdVar3[3]) / dVar4;
    *(double *)(param_1 + 0x80) = (-(pdVar3[1] * pdVar3[8]) - -(pdVar3[7] * pdVar3[2])) / dVar4;
    *(double *)(param_1 + 0x98) = (-(pdVar3[6] * pdVar3[2]) + pdVar3[8] * *pdVar3) / dVar4;
    *(double *)(param_1 + 0xb0) = (-(*pdVar3 * pdVar3[7]) - -(pdVar3[6] * pdVar3[1])) / dVar4;
    *(double *)(param_1 + 0x88) = (-(pdVar3[4] * pdVar3[2]) + pdVar3[5] * pdVar3[1]) / dVar4;
    *(double *)(param_1 + 0xa0) = (-(*pdVar3 * pdVar3[5]) - -(pdVar3[3] * pdVar3[2])) / dVar4;
    *(double *)(param_1 + 0xb8) = (-(pdVar3[3] * pdVar3[1]) + pdVar3[4] * *pdVar3) / dVar4;
  }
  return;
}



/* Entry: 109196b0c; end: 109196c8f;  */

double FUN_109196b0c(long param_1,int param_2,double *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  dVar4 = 0.0;
  if (0.0 < *(double *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8)) {
    dVar5 = *(double *)(param_1 + (long)param_2 * 8 + 0x1e0);
    if (dVar5 <= 2.220446049250313e-16) {
      puVar2 = (undefined4 *)0x3c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x3e205d69635b736d;
      *(undefined8 *)(puVar2 + 1) = 0x7265746544766f63;
      *puVar2 = 1;
      puStack_40 = puVar2 + 1;
      uStack_38 = 0x37;
      *(undefined1 *)((long)puVar2 + 0x3b) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x696c5f636972656d;
      *(undefined8 *)(puVar2 + 5) = 0x756e3a3a64747320;
      *(undefined8 *)(puVar2 + 0xb) = 0x70653a3a3e656c62;
      *(undefined8 *)(puVar2 + 9) = 0x756f643c7374696d;
      *(undefined8 *)((long)puVar2 + 0x33) = 0x29286e6f6c697370;
      FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f55aaab,&UNK_10f55aa47,0xa5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109196c60);
      (*pcVar1)();
    }
    pdVar3 = (double *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x18);
    dVar4 = *param_3 - *pdVar3;
    dVar6 = param_3[1] - pdVar3[1];
    dVar7 = param_3[2] - pdVar3[2];
    param_1 = param_1 + (long)param_2 * 0x48;
    dVar4 = (dVar6 * (dVar6 * *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0x80) * dVar4 +
                     *(double *)(param_1 + 0xb0) * dVar7) +
             (dVar6 * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0x78) * dVar4 +
             *(double *)(param_1 + 0xa8) * dVar7) * dVar4 +
            (dVar6 * *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0x88) * dVar4 +
            *(double *)(param_1 + 0xb8) * dVar7) * dVar7) * -0.5;
    _exp(dVar4);
    dVar4 = (1.0 / SQRT(dVar5)) * dVar4;
  }
  return dVar4;
}



/* Entry: 109196c90; end: 109196d87;  */

void FUN_109196c90(long param_1,int param_2,double *param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x18;
  *(double *)(lVar1 + 0x208) = *param_3 + *(double *)(lVar1 + 0x208);
  *(double *)(lVar1 + 0x210) = param_3[1] + *(double *)(lVar1 + 0x210);
  *(double *)(lVar1 + 0x218) = param_3[2] + *(double *)(lVar1 + 0x218);
  lVar1 = param_1 + (long)param_2 * 0x48;
  *(double *)(lVar1 + 0x280) = *(double *)(lVar1 + 0x280) + *param_3 * *param_3;
  *(double *)(lVar1 + 0x288) = *(double *)(lVar1 + 0x288) + param_3[1] * *param_3;
  *(double *)(lVar1 + 0x290) = *(double *)(lVar1 + 0x290) + param_3[2] * *param_3;
  *(double *)(lVar1 + 0x298) = *(double *)(lVar1 + 0x298) + *param_3 * param_3[1];
  *(double *)(lVar1 + 0x2a0) = *(double *)(lVar1 + 0x2a0) + param_3[1] * param_3[1];
  *(double *)(lVar1 + 0x2a8) = *(double *)(lVar1 + 0x2a8) + param_3[2] * param_3[1];
  *(double *)(lVar1 + 0x2b0) = *(double *)(lVar1 + 0x2b0) + *param_3 * param_3[2];
  *(double *)(lVar1 + 0x2b8) = *(double *)(lVar1 + 0x2b8) + param_3[1] * param_3[2];
  *(double *)(lVar1 + 0x2c0) = *(double *)(lVar1 + 0x2c0) + param_3[2] * param_3[2];
  lVar1 = param_1 + (long)param_2 * 4;
  *(int *)(lVar1 + 1000) = *(int *)(lVar1 + 1000) + 1;
  *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) + 1;
  return;
}



/* Entry: 109196d88; end: 109196f5b;  */

void FUN_109196d88(long param_1)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar7 = 0;
  lVar8 = 0;
  lVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + 1000 + lVar6 * 4);
    if (iVar4 == 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar6 * 8) = 0;
    }
    else {
      dVar9 = (double)iVar4;
      lVar3 = *(long *)(param_1 + 0x68);
      *(double *)(*(long *)(param_1 + 0x60) + lVar6 * 8) = dVar9 / (double)*(int *)(param_1 + 0x3fc)
      ;
      pdVar1 = (double *)(lVar3 + lVar7);
      lVar3 = param_1 + lVar7;
      dVar10 = *(double *)(lVar3 + 0x208) / dVar9;
      *pdVar1 = dVar10;
      pdVar1[1] = *(double *)(lVar3 + 0x210) / dVar9;
      pdVar1[2] = *(double *)(lVar3 + 0x218) / dVar9;
      lVar5 = *(long *)(param_1 + 0x70);
      pdVar2 = (double *)(lVar5 + lVar8);
      lVar3 = param_1 + lVar8;
      dVar10 = *(double *)(lVar3 + 0x280) / dVar9 - dVar10 * dVar10;
      *pdVar2 = dVar10;
      dVar12 = *(double *)(lVar3 + 0x288) / dVar9 - pdVar1[1] * *pdVar1;
      pdVar2[1] = dVar12;
      dVar13 = *(double *)(lVar3 + 0x290) / dVar9 - pdVar1[2] * *pdVar1;
      pdVar2[2] = dVar13;
      dVar14 = *(double *)(lVar3 + 0x298) / dVar9 - *pdVar1 * pdVar1[1];
      pdVar2[3] = dVar14;
      dVar11 = *(double *)(lVar3 + 0x2a0) / dVar9 - pdVar1[1] * pdVar1[1];
      pdVar2[4] = dVar11;
      dVar15 = *(double *)(lVar3 + 0x2a8) / dVar9 - pdVar1[2] * pdVar1[1];
      pdVar2[5] = dVar15;
      dVar16 = *(double *)(lVar3 + 0x2b0) / dVar9 - *pdVar1 * pdVar1[2];
      pdVar2[6] = dVar16;
      dVar17 = *(double *)(lVar3 + 0x2b8) / dVar9 - pdVar1[1] * pdVar1[2];
      pdVar2[7] = dVar17;
      dVar9 = *(double *)(lVar3 + 0x2c0) / dVar9 - pdVar1[2] * pdVar1[2];
      pdVar2[8] = dVar9;
      if (-((-(dVar16 * dVar15) + dVar9 * dVar14) * dVar12) +
          (-(dVar17 * dVar15) + dVar9 * dVar11) * dVar10 +
          (-(dVar16 * dVar11) + dVar17 * dVar14) * dVar13 <= 2.220446049250313e-16) {
        *(double *)(lVar5 + lVar8) = dVar10 + 0.01;
        pdVar2[4] = dVar11 + 0.01;
        pdVar2[8] = dVar9 + 0.01;
      }
      FUN_1091968f8(param_1,lVar6);
    }
    lVar6 = lVar6 + 1;
    lVar8 = lVar8 + 0x48;
    lVar7 = lVar7 + 0x18;
  } while (lVar8 != 0x168);
  return;
}



/* Entry: 109196f5c; end: 109199f7b;  */

void FUN_109196f5c(uint *param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long ***ppplVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  long ****pppplVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined1 uVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  byte *pbVar30;
  int iVar31;
  long ****pppplVar32;
  long ****pppplVar33;
  long ****pppplVar34;
  ulong uVar35;
  long ****pppplVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  int *piVar46;
  undefined4 uVar47;
  float fVar48;
  double dVar49;
  long ***ppplVar50;
  double *pdVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  double dVar55;
  float fVar56;
  long ***ppplVar57;
  double dVar58;
  long lStack_bc0;
  long ***ppplStack_b88;
  undefined1 auStack_b70 [4];
  undefined8 uStack_b6c;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined8 uStack_b54;
  undefined8 uStack_b4c;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  long lStack_b38;
  long lStack_b30;
  long *plStack_b28;
  long lStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  long lStack_ad8;
  long lStack_ad0;
  undefined1 *puStack_ac8;
  undefined1 auStack_ac0 [16];
  long lStack_ab0;
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
  undefined8 uStack_798;
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
  long lStack_6d8;
  long lStack_6d0;
  undefined1 *puStack_6c8;
  undefined1 auStack_6c0 [16];
  long lStack_6b0;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
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
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  int *piStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  uint uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  int *piStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [4];
  undefined8 uStack_1cc;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined2 uStack_16c;
  undefined1 uStack_16a;
  double *apdStack_168 [3];
  long ***appplStack_150 [4];
  long ***appplStack_130 [3];
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  float fStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  long lStack_c0;
  undefined4 *puStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(param_1 + 2);
    piStack_2d0 = (int *)((ulong)&uStack_310 | 8);
    uStack_308 = (long ***)puVar16[1];
    uStack_310 = *puVar16;
    uStack_2f8 = puVar16[3];
    uStack_300 = puVar16[2];
    uStack_2e8 = puVar16[5];
    uStack_2f0 = puVar16[4];
    uStack_2d8 = puVar16[7];
    uStack_2e0 = puVar16[6];
    plStack_2c8 = &lStack_2c0;
    lStack_2b8 = 0;
    lStack_2c0 = 0;
    if (puVar16[7] != 0) {
      piVar46 = (int *)(puVar16[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
        if (bVar6) {
          *piVar46 = *piVar46 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      lStack_2c0 = *(long *)puVar16[9];
      lStack_2b8 = ((long *)puVar16[9])[1];
    }
    else {
      uStack_310 = uStack_310 & 0xffffffff;
      func_0x000109a84868(&uStack_310);
    }
  }
  else {
    FUN_109a8a180(&uStack_310,param_1,0xffffffff);
  }
  FUN_109a8ec3c(param_2,0xffffffff);
  FUN_109a8ec3c(param_3,0xffffffff);
  FUN_109a8ec3c(param_4,0xffffffff);
  if (uStack_300 != 0) {
    uVar18 = (ulong)uStack_310._4_4_;
    if ((int)uStack_310._4_4_ < 3) {
      lVar23 = (long)(int)uStack_308._4_4_ * (long)(int)uStack_308;
    }
    else {
      lVar23 = 1;
      piVar46 = piStack_2d0;
      do {
        lVar23 = lVar23 * *piVar46;
        uVar18 = uVar18 - 1;
        piVar46 = piVar46 + 1;
      } while (uVar18 != 0);
    }
    if (lVar23 != 0) {
      if (((uint)uStack_310 & 0xfff) != 0x10) {
        puVar15 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        uStack_710 = (undefined8 *)(puVar15 + 1);
        uStack_708 = 0x1c;
        *(undefined1 *)(puVar15 + 8) = 0;
        *(undefined8 *)(puVar15 + 3) = 0x2065766168207473;
        *(undefined8 *)(puVar15 + 1) = 0x756d206567616d69;
        *(undefined8 *)(puVar15 + 6) = 0x6570797420334355;
        *(undefined8 *)(puVar15 + 4) = 0x385f564320657661;
        FUN_109ac3188(0xfffffffb,&uStack_710,&UNK_10f55ab0b,&UNK_10f55aa47,0x22a);
        goto LAB_10919983c;
      }
      FUN_10919657c(&uStack_710,param_3);
      FUN_10919657c(&uStack_b10,param_4);
      lStack_b30 = (long)&uStack_b6c + 4;
      auStack_b70 = (undefined1  [4])0x42ff0000;
      uStack_b64 = 0;
      uStack_b60 = 0;
      uStack_b6c = 0;
      uStack_b54 = 0;
      uStack_b5c = 0;
      uStack_b58 = 0;
      uStack_b44 = 0;
      uStack_b4c = 0;
      lStack_b38 = 0;
      uStack_b40 = 0;
      uStack_b3c = 0;
      lStack_b20 = 0;
      uStack_b18 = 0;
      uStack_f8._0_4_ = (undefined4)*(undefined8 *)piStack_2d0;
      uStack_f8._4_4_ = (int)((ulong)*(undefined8 *)piStack_2d0 >> 0x20);
      pppplVar17 = (long ****)auStack_b70;
      plStack_b28 = &lStack_b20;
      FUN_109a83fd0(pppplVar17,2,&uStack_f8,4);
      if (*(long *)(param_2 + 8) != 0) {
        uVar18 = (ulong)*(uint *)(param_2 + 2);
        if ((int)*(uint *)(param_2 + 2) < 3) {
          lVar23 = (long)*(int *)(param_2 + 6) * (long)*(int *)(param_2 + 4);
        }
        else {
          lVar23 = 1;
          piVar46 = *(int **)(param_2 + 0x20);
          do {
            lVar23 = lVar23 * *piVar46;
            uVar18 = uVar18 - 1;
            piVar46 = piVar46 + 1;
          } while (uVar18 != 0);
        }
        if (lVar23 != 0) {
          if ((*param_2 & 0xfff) != 0) {
            puVar15 = (undefined4 *)0x20;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            uStack_f8 = (undefined8 *)(puVar15 + 1);
            uStack_f0 = 0x1b;
            uStack_ec = 0;
            *(undefined1 *)((long)puVar15 + 0x1f) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x4320657661682074;
            *(undefined8 *)(puVar15 + 1) = 0x73756d206b73616d;
            *(undefined8 *)((long)puVar15 + 0x17) = 0x6570797420314355;
            *(undefined8 *)((long)puVar15 + 0xf) = 0x385f564320657661;
            FUN_109ac3188(0xfffffffb,&uStack_f8,&UNK_10f55ab53,&UNK_10f55aa47,0x172);
            goto LAB_10919983c;
          }
          uVar18 = (ulong)uStack_308._4_4_;
          if (*(uint *)(param_2 + 6) == uStack_308._4_4_) {
            uVar24 = (ulong)uStack_308 & 0xffffffff;
            if (*(int *)(param_2 + 4) == (int)uStack_308) {
              if (0 < (int)uStack_308) {
                uVar27 = 0;
                do {
                  if (0 < (int)uStack_308._4_4_) {
                    pbVar30 = (byte *)(*(long *)(param_2 + 8) + **(long **)(param_2 + 0x24) * uVar27
                                      );
                    uVar44 = uVar18;
                    do {
                      if (3 < *pbVar30) {
                        puVar15 = (undefined4 *)0x50;
                        func_0x000107c2ae8c();
                        *puVar15 = 1;
                        uStack_f8 = (undefined8 *)(puVar15 + 1);
                        uStack_f0 = 0x4b;
                        uStack_ec = 0;
                        *(undefined8 *)(puVar15 + 7) = 0x6c61757165206562;
                        *(undefined8 *)(puVar15 + 5) = 0x207473756d206575;
                        *(undefined8 *)(puVar15 + 0xb) = 0x47465f434720726f;
                        *(undefined8 *)(puVar15 + 9) = 0x204447425f434720;
                        *(undefined8 *)(puVar15 + 0xf) = 0x6f204447425f5250;
                        *(undefined8 *)(puVar15 + 0xd) = 0x5f434720726f2044;
                        *(undefined8 *)((long)puVar15 + 0x47) = 0x4447465f52505f43;
                        *(undefined8 *)((long)puVar15 + 0x3f) = 0x4720726f20444742;
                        *(undefined1 *)((long)puVar15 + 0x4f) = 0;
                        *(undefined8 *)(puVar15 + 3) = 0x6c617620746e656d;
                        *(undefined8 *)(puVar15 + 1) = 0x656c65206b73616d;
                        FUN_109ac3188(0xfffffffb,&uStack_f8,&UNK_10f55ab53,&UNK_10f55aa47,0x17a);
                        goto LAB_10919983c;
                      }
                      uVar44 = uVar44 - 1;
                      pbVar30 = pbVar30 + 1;
                    } while (uVar44 != 0);
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 != uVar24);
              }
              uStack_f8._0_4_ = 0x42ff0000;
              uStack_ec = 0;
              uStack_e8 = 0;
              uStack_f8._4_4_ = 0;
              uStack_f0 = 0;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              puStack_b8 = &uStack_f0;
              uStack_cc = 0;
              uStack_d4 = 0;
              uStack_d0 = 0;
              lStack_c0 = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              lStack_a8 = 0;
              uStack_a0 = 0;
              auStack_1d0 = (undefined1  [4])0x42ff0000;
              lStack_190 = (long)&uStack_1cc + 4;
              uStack_1c4 = 0;
              uStack_1c0 = 0;
              uStack_1cc = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              uStack_1bc = 0;
              uStack_1b8 = 0;
              uStack_1a4 = 0;
              uStack_1ac = 0;
              uStack_1a8 = 0;
              lStack_198 = 0;
              uStack_1a0 = 0;
              uStack_19c = 0;
              uStack_178 = 0;
              lStack_180 = 0;
              appplStack_130[1] = (long ***)0x0;
              appplStack_130[0] = (long ***)0x0;
              appplStack_130[2] = (long ***)0x0;
              appplStack_150[1] = (long ***)0x0;
              appplStack_150[0] = (long ***)0x0;
              appplStack_150[2] = (long ***)0x0;
              plStack_188 = &lStack_180;
              plStack_b0 = &lStack_a8;
              if (0 < (int)uStack_308) {
                lVar23 = 0;
                do {
                  if (0 < (int)uVar18) {
                    lVar39 = 0;
                    lVar43 = 0;
                    do {
                      if ((*(byte *)(*(long *)(param_2 + 8) + **(long **)(param_2 + 0x24) * lVar23 +
                                    lVar43) & 0xfd) == 0) {
                        lVar19 = 0;
                        lVar25 = *plStack_2c8;
                        uStack_230._0_4_ = 0;
                        uStack_230._4_4_ = 0;
                        iStack_228 = 0;
                        do {
                          uVar47 = NEON_ucvtf((uint)*(byte *)(uStack_300 + lVar39 + lVar23 * lVar25
                                                             + lVar19));
                          *(undefined4 *)((long)&uStack_230 + lVar19 * 4) = uVar47;
                          lVar19 = lVar19 + 1;
                        } while (lVar19 != 3);
                        pppplVar17 = appplStack_130;
                        FUN_10919cfd0(pppplVar17,&uStack_230);
                      }
                      else {
                        lVar19 = 0;
                        lVar25 = *plStack_2c8;
                        uStack_230._0_4_ = 0;
                        uStack_230._4_4_ = 0;
                        iStack_228 = 0;
                        do {
                          uVar47 = NEON_ucvtf((uint)*(byte *)(uStack_300 + lVar39 + lVar23 * lVar25
                                                             + lVar19));
                          *(undefined4 *)((long)&uStack_230 + lVar19 * 4) = uVar47;
                          lVar19 = lVar19 + 1;
                        } while (lVar19 != 3);
                        pppplVar17 = appplStack_150;
                        FUN_10919cfd0(pppplVar17,&uStack_230);
                      }
                      lVar43 = lVar43 + 2;
                      uVar18 = (ulong)uStack_308._4_4_;
                      lVar39 = lVar39 + 6;
                    } while ((int)lVar43 < (int)uStack_308._4_4_);
                    uVar24 = (ulong)uStack_308 & 0xffffffff;
                  }
                  lVar23 = lVar23 + 2;
                } while ((int)lVar23 < (int)uVar24);
                if ((appplStack_130[0] != appplStack_130[1]) &&
                   (appplStack_150[0] != appplStack_150[1])) {
                  uStack_230._0_4_ = 0x42ff0005;
                  uStack_230._4_4_ = 2;
                  uVar18 = ((long)appplStack_130[1] - (long)appplStack_130[0] >> 2) *
                           -0x5555555555555555;
                  uStack_288 = &uStack_230;
                  iStack_228 = (int)uVar18;
                  uStack_224 = 3;
                  piStack_1f0 = &iStack_228;
                  uStack_220 = SUB84(appplStack_130[0],0);
                  uStack_21c = (undefined4)((ulong)appplStack_130[0] >> 0x20);
                  uStack_208._0_4_ = 0;
                  uStack_208._4_4_ = 0;
                  uStack_210._0_4_ = 0;
                  uStack_210._4_4_ = 0;
                  lStack_1f8 = 0;
                  uStack_200 = 0;
                  uStack_1fc = 0;
                  uStack_1d8 = 0;
                  lStack_1e0 = 0;
                  uStack_218 = uStack_220;
                  uStack_214 = uStack_21c;
                  plStack_1e8 = &lStack_1e0;
                  if (((long ****)appplStack_130[0] == (long ****)0x0) &&
                     ((uVar18 & 0xffffffff) != 0)) {
                    uStack_288._0_4_ = 0;
                    uStack_288._4_4_ = 0;
                    uStack_290._0_4_ = 0;
                    uStack_290._4_4_ = 0;
                    puVar15 = (undefined4 *)0x24;
                    func_0x000107c2ae8c();
                    *puVar15 = 1;
                    uStack_290 = puVar15 + 1;
                    uStack_288._0_4_ = 0x1c;
                    uStack_288._4_4_ = 0;
                    *(undefined1 *)(puVar15 + 8) = 0;
                    *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
                    *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
                    *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
                    *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
                    FUN_109ac3188(0xffffff29,&uStack_290,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
                    goto LAB_10919983c;
                  }
                  uStack_230._0_4_ = 0x42ff4005;
                  uStack_1d8 = 4;
                  lStack_1e0 = 0xc;
                  uStack_208 = (long)appplStack_130[0] + (long)iStack_228 * 0xc;
                  uStack_280 = 0;
                  uStack_27c = 0;
                  uStack_290._0_4_ = 0x1010000;
                  apdStack_168[0]._0_4_ = 0x3010000;
                  apdStack_168[1] = (double *)&uStack_f8;
                  apdStack_168[2] = (double *)0x0;
                  uStack_210 = uStack_208;
                  FUN_109a91d90();
                  puVar14 = &uStack_290;
                  FUN_109a55914(puVar14,5,apdStack_168,0x500000001,0,0,2,pppplVar17);
                  uVar18 = ((long)appplStack_150[1] - (long)appplStack_150[0] >> 2) *
                           -0x5555555555555555;
                  uStack_290._0_4_ = 0x42ff0005;
                  uStack_290._4_4_ = 2;
                  puStack_250 = &uStack_288;
                  uStack_288._0_4_ = (int)uVar18;
                  uStack_288._4_4_ = 3;
                  uStack_280 = SUB84(appplStack_150[0],0);
                  uStack_27c = (undefined4)((ulong)appplStack_150[0] >> 0x20);
                  uStack_268._0_4_ = 0;
                  uStack_268._4_4_ = 0;
                  uStack_270._0_4_ = 0;
                  uStack_270._4_4_ = 0;
                  lStack_258 = 0;
                  uStack_260 = 0;
                  uStack_25c = 0;
                  uStack_238 = 0;
                  lStack_240 = 0;
                  uStack_278 = uStack_280;
                  uStack_274 = uStack_27c;
                  plStack_248 = &lStack_240;
                  if (((long ****)appplStack_150[0] == (long ****)0x0) &&
                     ((uVar18 & 0xffffffff) != 0)) {
                    apdStack_168[1] = (double *)0x0;
                    apdStack_168[0] = (double *)0x0;
                    puVar15 = (undefined4 *)0x24;
                    func_0x000107c2ae8c();
                    *puVar15 = 1;
                    apdStack_168[0] = (double *)(puVar15 + 1);
                    apdStack_168[1] = (double *)0x1c;
                    *(undefined1 *)(puVar15 + 8) = 0;
                    *(undefined8 *)(puVar15 + 3) = 0x207c7c2030203d3d;
                    *(undefined8 *)(puVar15 + 1) = 0x2029286c61746f74;
                    *(undefined8 *)(puVar15 + 6) = 0x4c4c554e203d2120;
                    *(undefined8 *)(puVar15 + 4) = 0x61746164207c7c20;
                    FUN_109ac3188(0xffffff29,apdStack_168,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
                    goto LAB_10919983c;
                  }
                  uStack_290._0_4_ = 0x42ff4005;
                  uStack_238 = 4;
                  lStack_240 = 0xc;
                  uStack_268 = (long)appplStack_150[0] + (long)(int)uStack_288 * 0xc;
                  apdStack_168[2] = (double *)0x0;
                  apdStack_168[0] = (double *)CONCAT44(apdStack_168[0]._4_4_,0x1010000);
                  apdStack_168[1] = (double *)&uStack_290;
                  puStack_2a8 = (undefined8 *)CONCAT44(puStack_2a8._4_4_,0x3010000);
                  puStack_2a0 = auStack_1d0;
                  uStack_298 = 0;
                  uStack_270 = uStack_268;
                  FUN_109a91d90();
                  FUN_109a55914(apdStack_168,5,&puStack_2a8,0x500000001,0,0,2,puVar14);
                  plVar7 = plStack_b0;
                  uStack_500 = 0;
                  uStack_508 = 0;
                  uStack_4f0 = 0;
                  uStack_4f8 = 0;
                  uStack_4e0 = 0;
                  uStack_4e8 = 0;
                  uStack_4d0 = 0;
                  uStack_4d8 = 0;
                  uStack_4c0 = 0;
                  uStack_4c8 = 0;
                  uStack_4b0 = 0;
                  uStack_4b8 = 0;
                  uStack_4a0 = 0;
                  uStack_4a8 = 0;
                  uStack_490 = 0;
                  uStack_498 = 0;
                  uStack_480 = 0;
                  uStack_488 = 0;
                  uStack_470 = 0;
                  uStack_478 = 0;
                  uStack_460 = 0;
                  uStack_468 = 0;
                  uStack_450 = 0;
                  uStack_458 = 0;
                  uStack_440 = 0;
                  uStack_448 = 0;
                  uStack_430 = 0;
                  uStack_438 = 0;
                  uStack_420 = 0;
                  uStack_428 = 0;
                  uStack_410 = 0;
                  uStack_418 = 0;
                  uStack_400 = 0;
                  uStack_408 = 0;
                  uStack_3f0 = 0;
                  uStack_3f8 = 0;
                  uStack_3e0 = 0;
                  uStack_3e8 = 0;
                  uStack_3d0 = 0;
                  uStack_3d8 = 0;
                  uStack_3c0 = 0;
                  uStack_3c8 = 0;
                  uStack_3b0 = 0;
                  uStack_3b8 = 0;
                  uStack_3a0 = 0;
                  uStack_3a8 = 0;
                  uStack_390 = 0;
                  uStack_398 = 0;
                  uStack_380 = 0;
                  uStack_388 = 0;
                  uStack_370 = 0;
                  uStack_378 = 0;
                  uStack_360 = 0;
                  uStack_368 = 0;
                  uStack_350 = 0;
                  uStack_358 = 0;
                  uStack_340 = 0;
                  uStack_348 = 0;
                  uStack_330 = 0;
                  uStack_338 = 0;
                  uStack_320 = 0;
                  uStack_328 = 0;
                  uVar18 = ((long)appplStack_130[1] - (long)appplStack_130[0] >> 2) *
                           -0x5555555555555555;
                  uStack_318 = 0;
                  if (0 < (int)uVar18) {
                    uVar24 = 0;
                    lVar23 = CONCAT44(uStack_e4,uStack_e8);
                    pppplVar17 = (long ****)appplStack_130[0];
                    do {
                      lVar43 = 0;
                      uVar47 = *(undefined4 *)(lVar23 + *plVar7 * uVar24);
                      apdStack_168[1] = (double *)0x0;
                      apdStack_168[0] = (double *)0x0;
                      apdStack_168[2] = (double *)0x0;
                      do {
                        apdStack_168[lVar43] =
                             (double *)(double)*(float *)((long)pppplVar17 + lVar43 * 4);
                        lVar43 = lVar43 + 1;
                      } while (lVar43 != 3);
                      FUN_109196c90(&uStack_710,uVar47,apdStack_168);
                      uVar24 = uVar24 + 1;
                      pppplVar17 = (long ****)((long)pppplVar17 + 0xc);
                    } while (uVar24 != (uVar18 & 0x7fffffff));
                  }
                  FUN_109196d88(&uStack_710);
                  plVar7 = plStack_188;
                  uStack_730 = 0;
                  uStack_738 = 0;
                  uStack_720 = 0;
                  uStack_728 = 0;
                  uStack_750 = 0;
                  uStack_758 = 0;
                  uStack_740 = 0;
                  uStack_748 = 0;
                  uStack_770 = 0;
                  uStack_778 = 0;
                  uStack_760 = 0;
                  uStack_768 = 0;
                  uStack_790 = 0;
                  uStack_798 = 0;
                  uStack_780 = 0;
                  uStack_788 = 0;
                  uStack_7b0 = 0;
                  uStack_7b8 = 0;
                  uStack_7a0 = 0;
                  uStack_7a8 = 0;
                  uStack_7d0 = 0;
                  uStack_7d8 = 0;
                  uStack_7c0 = 0;
                  uStack_7c8 = 0;
                  uStack_7f0 = 0;
                  uStack_7f8 = 0;
                  uStack_7e0 = 0;
                  uStack_7e8 = 0;
                  uStack_810 = 0;
                  uStack_818 = 0;
                  uStack_800 = 0;
                  uStack_808 = 0;
                  uStack_830 = 0;
                  uStack_838 = 0;
                  uStack_820 = 0;
                  uStack_828 = 0;
                  uStack_850 = 0;
                  uStack_858 = 0;
                  uStack_840 = 0;
                  uStack_848 = 0;
                  uStack_870 = 0;
                  uStack_878 = 0;
                  uStack_860 = 0;
                  uStack_868 = 0;
                  uStack_890 = 0;
                  uStack_898 = 0;
                  uStack_880 = 0;
                  uStack_888 = 0;
                  uStack_8b0 = 0;
                  uStack_8b8 = 0;
                  uStack_8a0 = 0;
                  uStack_8a8 = 0;
                  uStack_8d0 = 0;
                  uStack_8d8 = 0;
                  uStack_8c0 = 0;
                  uStack_8c8 = 0;
                  uStack_8f0 = 0;
                  uStack_8f8 = 0;
                  uStack_8e0 = 0;
                  uStack_8e8 = 0;
                  uStack_900 = 0;
                  uStack_908 = 0;
                  uVar18 = ((long)appplStack_150[1] - (long)appplStack_150[0] >> 2) *
                           -0x5555555555555555;
                  uStack_718 = 0;
                  if (0 < (int)uVar18) {
                    uVar24 = 0;
                    lVar23 = CONCAT44(uStack_1bc,uStack_1c0);
                    pppplVar17 = (long ****)appplStack_150[0];
                    do {
                      lVar43 = 0;
                      uVar47 = *(undefined4 *)(lVar23 + *plVar7 * uVar24);
                      apdStack_168[1] = (double *)0x0;
                      apdStack_168[0] = (double *)0x0;
                      apdStack_168[2] = (double *)0x0;
                      do {
                        apdStack_168[lVar43] =
                             (double *)(double)*(float *)((long)pppplVar17 + lVar43 * 4);
                        lVar43 = lVar43 + 1;
                      } while (lVar43 != 3);
                      FUN_109196c90(&uStack_b10,uVar47,apdStack_168);
                      uVar24 = uVar24 + 1;
                      pppplVar17 = (long ****)((long)pppplVar17 + 0xc);
                    } while (uVar24 != (uVar18 & 0x7fffffff));
                  }
                  FUN_109196d88(&uStack_b10);
                  lVar23 = uStack_208;
                  lVar43 = uStack_210;
                  if (lStack_258 != 0) {
                    piVar46 = (int *)(lStack_258 + 0x14);
                    do {
                      iVar28 = *piVar46;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                      if (bVar6) {
                        *piVar46 = iVar28 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(&uStack_290);
                      lVar23 = uStack_208;
                      lVar43 = uStack_210;
                    }
                  }
                  lStack_258 = 0;
                  uStack_278 = 0;
                  uStack_274 = 0;
                  uStack_280 = 0;
                  uStack_27c = 0;
                  uStack_268._0_4_ = 0;
                  uStack_268._4_4_ = 0;
                  uStack_270._0_4_ = 0;
                  uStack_270._4_4_ = 0;
                  if (0 < uStack_290._4_4_) {
                    lVar39 = 0;
                    do {
                      *(undefined4 *)((long)puStack_250 + lVar39 * 4) = 0;
                      lVar39 = lVar39 + 1;
                    } while (lVar39 < uStack_290._4_4_);
                  }
                  uStack_208 = lVar23;
                  uStack_210 = lVar43;
                  if (plStack_248 != &lStack_240 && plStack_248 != (long *)0x0) {
                    _free(plStack_248[-1]);
                  }
                  if (lStack_1f8 != 0) {
                    piVar46 = (int *)(lStack_1f8 + 0x14);
                    do {
                      iVar28 = *piVar46;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                      if (bVar6) {
                        *piVar46 = iVar28 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(&uStack_230);
                    }
                  }
                  lStack_1f8 = 0;
                  uStack_218 = 0;
                  uStack_214 = 0;
                  uStack_220 = 0;
                  uStack_21c = 0;
                  uStack_208._0_4_ = 0;
                  uStack_208._4_4_ = 0;
                  uStack_210._0_4_ = 0;
                  uStack_210._4_4_ = 0;
                  if (0 < uStack_230._4_4_) {
                    lVar23 = 0;
                    do {
                      piStack_1f0[lVar23] = 0;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < uStack_230._4_4_);
                  }
                  if (plStack_1e8 != &lStack_1e0 && plStack_1e8 != (long *)0x0) {
                    _free(plStack_1e8[-1]);
                  }
                  if ((long ****)appplStack_150[0] != (long ****)0x0) {
                    appplStack_150[1] = appplStack_150[0];
                    __ZdlPv();
                  }
                  if ((long ****)appplStack_130[0] != (long ****)0x0) {
                    appplStack_130[1] = appplStack_130[0];
                    __ZdlPv();
                  }
                  if (lStack_198 != 0) {
                    piVar46 = (int *)(lStack_198 + 0x14);
                    do {
                      iVar28 = *piVar46;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                      if (bVar6) {
                        *piVar46 = iVar28 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(auStack_1d0);
                    }
                  }
                  lStack_198 = 0;
                  uStack_1b8 = 0;
                  uStack_1b4 = 0;
                  uStack_1c0 = 0;
                  uStack_1bc = 0;
                  uStack_1a8 = 0;
                  uStack_1a4 = 0;
                  uStack_1b0 = 0;
                  uStack_1ac = 0;
                  if (0 < (int)uStack_1cc) {
                    lVar23 = 0;
                    do {
                      *(undefined4 *)(lStack_190 + lVar23 * 4) = 0;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < (int)uStack_1cc);
                  }
                  if (plStack_188 != &lStack_180 && plStack_188 != (long *)0x0) {
                    _free(plStack_188[-1]);
                  }
                  if (lStack_c0 != 0) {
                    piVar46 = (int *)(lStack_c0 + 0x14);
                    do {
                      iVar28 = *piVar46;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
                      if (bVar6) {
                        *piVar46 = iVar28 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(&uStack_f8);
                    }
                  }
                  lStack_c0 = 0;
                  uStack_e0 = 0;
                  uStack_dc = 0;
                  uStack_e8 = 0;
                  uStack_e4 = 0;
                  uStack_d0 = 0;
                  uStack_cc = 0;
                  uStack_d8 = 0;
                  uStack_d4 = 0;
                  if (0 < uStack_f8._4_4_) {
                    lVar23 = 0;
                    do {
                      puStack_b8[lVar23] = 0;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < uStack_f8._4_4_);
                  }
                  if (plStack_b0 != &lStack_a8 && plStack_b0 != (long *)0x0) {
                    _free(plStack_b0[-1]);
                  }
                  if ((int)uStack_308 < 1) {
                    dVar55 = 0.0;
                  }
                  else {
                    uVar18 = 0;
                    dVar49 = 0.0;
                    lVar23 = -1;
                    do {
                      if (0 < (int)uStack_308._4_4_) {
                        uVar24 = 0;
                        lVar43 = uStack_300 + *plStack_2c8 * uVar18;
                        lVar19 = *plStack_2c8 * lVar23;
                        lVar39 = (uStack_300 - 3) + lVar19;
                        lVar19 = uStack_300 + lVar19;
                        do {
                          lVar25 = 0;
                          uStack_f8._0_4_ = 0;
                          uStack_f8._4_4_ = 0;
                          uStack_f0 = 0;
                          uStack_ec = 0;
                          uStack_e8 = 0;
                          uStack_e4 = 0;
                          do {
                            uVar54 = NEON_ucvtf((ulong)*(byte *)(lVar43 + lVar25));
                            (&uStack_f8)[lVar25] = uVar54;
                            lVar25 = lVar25 + 1;
                          } while (lVar25 != 3);
                          if (uVar24 == 0) {
                            if (uVar18 != 0) goto LAB_109197a60;
                          }
                          else {
                            lVar25 = 0;
                            iStack_228 = 0;
                            uStack_224 = 0;
                            uStack_230._0_4_ = 0;
                            uStack_230._4_4_ = 0;
                            uStack_220 = 0;
                            uStack_21c = 0;
                            do {
                              uVar54 = NEON_ucvtf((ulong)*(byte *)(lVar43 + lVar25 + -3));
                              (&uStack_230)[lVar25] = uVar54;
                              lVar25 = lVar25 + 1;
                            } while (lVar25 != 3);
                            lVar25 = 0;
                            do {
                              *(double *)(auStack_1d0 + lVar25) =
                                   *(double *)((long)&uStack_f8 + lVar25) -
                                   *(double *)((long)&uStack_230 + lVar25);
                              lVar25 = lVar25 + 8;
                            } while (lVar25 != 0x18);
                            lVar25 = 0;
                            dVar55 = 0.0;
                            do {
                              dVar55 = dVar55 + *(double *)(auStack_1d0 + lVar25) *
                                                *(double *)(auStack_1d0 + lVar25);
                              lVar25 = lVar25 + 8;
                            } while (lVar25 != 0x18);
                            dVar49 = dVar49 + dVar55;
                            if (uVar18 != 0) {
                              lVar25 = 0;
                              iStack_228 = 0;
                              uStack_224 = 0;
                              uStack_230._0_4_ = 0;
                              uStack_230._4_4_ = 0;
                              uStack_220 = 0;
                              uStack_21c = 0;
                              do {
                                uVar54 = NEON_ucvtf((ulong)*(byte *)(lVar39 + lVar25));
                                (&uStack_230)[lVar25] = uVar54;
                                lVar25 = lVar25 + 1;
                              } while (lVar25 != 3);
                              lVar25 = 0;
                              do {
                                *(double *)(auStack_1d0 + lVar25) =
                                     *(double *)((long)&uStack_f8 + lVar25) -
                                     *(double *)((long)&uStack_230 + lVar25);
                                lVar25 = lVar25 + 8;
                              } while (lVar25 != 0x18);
                              lVar25 = 0;
                              dVar55 = 0.0;
                              do {
                                dVar55 = dVar55 + *(double *)(auStack_1d0 + lVar25) *
                                                  *(double *)(auStack_1d0 + lVar25);
                                lVar25 = lVar25 + 8;
                              } while (lVar25 != 0x18);
                              dVar49 = dVar49 + dVar55;
LAB_109197a60:
                              lVar25 = 0;
                              iStack_228 = 0;
                              uStack_224 = 0;
                              uStack_230._0_4_ = 0;
                              uStack_230._4_4_ = 0;
                              uStack_220 = 0;
                              uStack_21c = 0;
                              do {
                                uVar54 = NEON_ucvtf((ulong)*(byte *)(lVar19 + lVar25));
                                (&uStack_230)[lVar25] = uVar54;
                                lVar25 = lVar25 + 1;
                              } while (lVar25 != 3);
                              lVar25 = 0;
                              do {
                                *(double *)(auStack_1d0 + lVar25) =
                                     *(double *)((long)&uStack_f8 + lVar25) -
                                     *(double *)((long)&uStack_230 + lVar25);
                                lVar25 = lVar25 + 8;
                              } while (lVar25 != 0x18);
                              lVar25 = 0;
                              dVar55 = 0.0;
                              do {
                                dVar55 = dVar55 + *(double *)(auStack_1d0 + lVar25) *
                                                  *(double *)(auStack_1d0 + lVar25);
                                lVar25 = lVar25 + 8;
                              } while (lVar25 != 0x18);
                              dVar49 = dVar49 + dVar55;
                              if ((long)uVar24 < (long)(int)uStack_308._4_4_ + -1) {
                                lVar25 = 0;
                                iStack_228 = 0;
                                uStack_224 = 0;
                                uStack_230._0_4_ = 0;
                                uStack_230._4_4_ = 0;
                                uStack_220 = 0;
                                uStack_21c = 0;
                                do {
                                  uVar54 = NEON_ucvtf((ulong)*(byte *)(lVar19 + lVar25 + 3));
                                  (&uStack_230)[lVar25] = uVar54;
                                  lVar25 = lVar25 + 1;
                                } while (lVar25 != 3);
                                lVar25 = 0;
                                do {
                                  *(double *)(auStack_1d0 + lVar25) =
                                       *(double *)((long)&uStack_f8 + lVar25) -
                                       *(double *)((long)&uStack_230 + lVar25);
                                  lVar25 = lVar25 + 8;
                                } while (lVar25 != 0x18);
                                lVar25 = 0;
                                dVar55 = 0.0;
                                do {
                                  dVar55 = dVar55 + *(double *)(auStack_1d0 + lVar25) *
                                                    *(double *)(auStack_1d0 + lVar25);
                                  lVar25 = lVar25 + 8;
                                } while (lVar25 != 0x18);
                                dVar49 = dVar49 + dVar55;
                              }
                            }
                          }
                          uVar24 = uVar24 + 1;
                          lVar43 = lVar43 + 3;
                          lVar39 = lVar39 + 3;
                          lVar19 = lVar19 + 3;
                        } while (uVar24 != uStack_308._4_4_);
                      }
                      uVar18 = uVar18 + 1;
                      lVar23 = lVar23 + 1;
                    } while (uVar18 != ((ulong)uStack_308 & 0xffffffff));
                    dVar55 = 0.0;
                    if (2.220446049250313e-16 < dVar49) {
                      dVar55 = 1.0 / ((dVar49 + dVar49) /
                                     (double)(int)((int)uStack_308 * -3 +
                                                   ((int)uStack_308 * 4 + -3) * uStack_308._4_4_ + 2
                                                  ));
                    }
                  }
                  uStack_f8._0_4_ = 0x42ff0000;
                  uStack_ec = 0;
                  uStack_e8 = 0;
                  uStack_f8._4_4_ = 0;
                  uStack_f0 = 0;
                  puStack_b8 = &uStack_f0;
                  uStack_dc = 0;
                  uStack_d8 = 0;
                  uStack_e4 = 0;
                  uStack_e0 = 0;
                  uStack_cc = 0;
                  uStack_d4 = 0;
                  uStack_d0 = 0;
                  lStack_c0 = 0;
                  uStack_c8 = 0;
                  uStack_c4 = 0;
                  lStack_a8 = 0;
                  uStack_a0 = 0;
                  auStack_1d0 = (undefined1  [4])0x42ff0000;
                  lStack_190 = (long)&uStack_1cc + 4;
                  uStack_1c4 = 0;
                  uStack_1c0 = 0;
                  uStack_1cc = 0;
                  uStack_1b4 = 0;
                  uStack_1b0 = 0;
                  uStack_1bc = 0;
                  uStack_1b8 = 0;
                  uStack_1a4 = 0;
                  uStack_1ac = 0;
                  uStack_1a8 = 0;
                  lStack_198 = 0;
                  uStack_1a0 = 0;
                  uStack_19c = 0;
                  uStack_178 = 0;
                  lStack_180 = 0;
                  uStack_230._0_4_ = 0x42ff0000;
                  piStack_1f0 = &iStack_228;
                  uStack_224 = 0;
                  uStack_220 = 0;
                  uStack_230._4_4_ = 0;
                  iStack_228 = 0;
                  uStack_214 = 0;
                  uStack_210._0_4_ = 0;
                  uStack_21c = 0;
                  uStack_218 = 0;
                  uStack_208._4_4_ = 0;
                  uStack_210._4_4_ = 0;
                  uStack_208._0_4_ = 0;
                  lStack_1f8 = 0;
                  uStack_200 = 0;
                  uStack_1fc = 0;
                  uStack_1d8 = 0;
                  lStack_1e0 = 0;
                  uStack_290._0_4_ = 0x42ff0000;
                  puStack_250 = &uStack_288;
                  uStack_288._4_4_ = 0;
                  uStack_280 = 0;
                  uStack_290._4_4_ = 0;
                  uStack_288._0_4_ = 0;
                  uStack_274 = 0;
                  uStack_270._0_4_ = 0;
                  uStack_27c = 0;
                  uStack_278 = 0;
                  uStack_268._4_4_ = 0;
                  uStack_270._4_4_ = 0;
                  uStack_268._0_4_ = 0;
                  lStack_258 = 0;
                  uStack_260 = 0;
                  uStack_25c = 0;
                  uStack_238 = 0;
                  lStack_240 = 0;
                  appplStack_130[0] = uStack_308;
                  pppplVar17 = (long ****)0x2;
                  plStack_248 = &lStack_240;
                  plStack_1e8 = &lStack_1e0;
                  plStack_188 = &lStack_180;
                  plStack_b0 = &lStack_a8;
                  FUN_109a83fd0(&uStack_f8,2,appplStack_130,5);
                  if ((((2 < (int)uStack_1cc) || (uStack_1cc._4_4_ != (int)uStack_308)) ||
                      (uStack_1c4 != uStack_308._4_4_)) ||
                     ((((uint)auStack_1d0 & 0xfff) != 5 || (CONCAT44(uStack_1bc,uStack_1c0) == 0))))
                  {
                    appplStack_130[0] = uStack_308;
                    pppplVar17 = (long ****)0x2;
                    FUN_109a83fd0(auStack_1d0,2,appplStack_130,5);
                  }
                  if (((2 < uStack_230._4_4_) || (iStack_228 != (int)uStack_308)) ||
                     ((uStack_224 != uStack_308._4_4_ ||
                      ((((uint)uStack_230 & 0xfff) != 5 ||
                       (uVar41 = uStack_308._4_4_, CONCAT44(uStack_21c,uStack_220) == 0)))))) {
                    appplStack_130[0] = (long ***)CONCAT44(uStack_308._4_4_,(int)uStack_308);
                    pppplVar17 = (long ****)0x2;
                    FUN_109a83fd0(&uStack_230,2,appplStack_130,5);
                    uVar41 = uStack_308._4_4_;
                  }
                  if ((((2 < uStack_290._4_4_) || ((int)uStack_288 != (int)uStack_308)) ||
                      (uStack_288._4_4_ != uVar41)) ||
                     ((((uint)uStack_290 & 0xfff) != 5 || (CONCAT44(uStack_27c,uStack_280) == 0))))
                  {
                    appplStack_130[0] = (long ***)CONCAT44(uVar41,(int)uStack_308);
                    pppplVar17 = (long ****)0x2;
                    FUN_109a83fd0(&uStack_290,2,appplStack_130,5);
                    uVar41 = uStack_308._4_4_;
                  }
                  plVar7 = plStack_2c8;
                  uVar24 = uStack_300;
                  uVar27 = (ulong)uStack_308 & 0xffffffff;
                  uVar18 = (ulong)uVar41;
                  if ((int)uStack_308 < 1) {
                    fStack_100 = 0.0;
                    lStack_108 = 0;
                    uStack_110 = 0;
                    uStack_118 = 0;
                    appplStack_130[2] = (long ***)0x0;
                    appplStack_130[1] = (long ***)0x0;
                    appplStack_130[0] = (long ***)0x0;
                  }
                  else {
                    uVar18 = 0;
                    dVar55 = -dVar55;
                    lStack_bc0 = -1;
                    do {
                      plVar11 = plStack_b0;
                      plVar10 = plStack_188;
                      plVar9 = plStack_1e8;
                      plVar8 = plStack_248;
                      if (0 < (int)uVar41) {
                        uVar44 = 0;
                        lVar19 = CONCAT44(uStack_e4,uStack_e8);
                        lVar39 = CONCAT44(uStack_1bc,uStack_1c0);
                        lVar43 = CONCAT44(uStack_21c,uStack_220);
                        lVar23 = CONCAT44(uStack_27c,uStack_280);
                        lVar25 = uVar24 + *plVar7 * uVar18;
                        lVar37 = uVar24 + *plVar7 * lStack_bc0;
                        do {
                          lVar20 = 0;
                          iVar28 = (int)uVar44;
                          lVar40 = (long)iVar28;
                          appplStack_130[1] = (long ***)0x0;
                          appplStack_130[0] = (long ***)0x0;
                          appplStack_130[2] = (long ***)0x0;
                          do {
                            ppplVar50 = (long ***)
                                        NEON_ucvtf((ulong)*(byte *)(lVar25 + (-(uVar44 >> 0x1f) &
                                                                              0xfffffffe00000000 |
                                                                             uVar44 << 1) +
                                                                             (long)iVar28 + lVar20))
                            ;
                            appplStack_130[lVar20] = ppplVar50;
                            lVar20 = lVar20 + 1;
                          } while (lVar20 != 3);
                          if (iVar28 == 0) {
                            *(undefined4 *)(lVar19 + *plVar11 * uVar18) = 0;
                            *(undefined4 *)(lVar39 + *plVar10 * uVar18) = 0;
                            if (uVar18 == 0) goto LAB_109198154;
LAB_109198018:
                            lVar20 = 0;
                            apdStack_168[1] = (double *)0x0;
                            apdStack_168[0] = (double *)0x0;
                            apdStack_168[2] = (double *)0x0;
                            do {
                              pdVar51 = (double *)
                                        NEON_ucvtf((ulong)*(byte *)(lVar37 + lVar40 * 3 + lVar20));
                              apdStack_168[lVar20] = pdVar51;
                              lVar20 = lVar20 + 1;
                            } while (lVar20 != 3);
                            lVar20 = 0;
                            do {
                              *(double *)((long)appplStack_150 + lVar20) =
                                   *(double *)((long)appplStack_130 + lVar20) -
                                   *(double *)((long)apdStack_168 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            lVar20 = 0;
                            dVar49 = 0.0;
                            do {
                              dVar49 = dVar49 + *(double *)((long)appplStack_150 + lVar20) *
                                                *(double *)((long)appplStack_150 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            dVar49 = dVar49 * dVar55;
                            _exp();
                            *(float *)(lVar43 + *plVar9 * uVar18 + lVar40 * 4) =
                                 (float)(dVar49 * 50.0);
                            uVar42 = iVar28 + 1;
                            uVar44 = (ulong)uVar42;
                            if ((int)uVar41 <= (int)uVar42) goto LAB_109198168;
                            lVar20 = 0;
                            apdStack_168[1] = (double *)0x0;
                            apdStack_168[0] = (double *)0x0;
                            apdStack_168[2] = (double *)0x0;
                            do {
                              pdVar51 = (double *)
                                        NEON_ucvtf((ulong)*(byte *)(lVar37 + (-(ulong)(uVar42 >>
                                                                                      0x1f) &
                                                                              0xfffffffe00000000 |
                                                                             uVar44 << 1) +
                                                                             (long)(int)uVar42 +
                                                                   lVar20));
                              apdStack_168[lVar20] = pdVar51;
                              lVar20 = lVar20 + 1;
                            } while (lVar20 != 3);
                            lVar20 = 0;
                            do {
                              *(double *)((long)appplStack_150 + lVar20) =
                                   *(double *)((long)appplStack_130 + lVar20) -
                                   *(double *)((long)apdStack_168 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            lVar20 = 0;
                            dVar49 = 0.0;
                            do {
                              dVar49 = dVar49 + *(double *)((long)appplStack_150 + lVar20) *
                                                *(double *)((long)appplStack_150 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            dVar49 = dVar49 * dVar55;
                            _exp();
                            *(float *)(lVar23 + *plVar8 * uVar18 + lVar40 * 4) =
                                 (float)(dVar49 * 35.35533966440824);
                          }
                          else {
                            lVar20 = 0;
                            uVar42 = iVar28 - 1;
                            apdStack_168[1] = (double *)0x0;
                            apdStack_168[0] = (double *)0x0;
                            apdStack_168[2] = (double *)0x0;
                            do {
                              pdVar51 = (double *)
                                        NEON_ucvtf((ulong)*(byte *)(lVar25 + (-(ulong)(uVar42 >>
                                                                                      0x1f) &
                                                                              0xfffffffe00000000 |
                                                                             (ulong)uVar42 << 1) +
                                                                             (long)(int)uVar42 +
                                                                   lVar20));
                              apdStack_168[lVar20] = pdVar51;
                              lVar20 = lVar20 + 1;
                            } while (lVar20 != 3);
                            lVar20 = 0;
                            do {
                              *(double *)((long)appplStack_150 + lVar20) =
                                   *(double *)((long)appplStack_130 + lVar20) -
                                   *(double *)((long)apdStack_168 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            lVar20 = 0;
                            dVar49 = 0.0;
                            do {
                              dVar49 = dVar49 + *(double *)((long)appplStack_150 + lVar20) *
                                                *(double *)((long)appplStack_150 + lVar20);
                              lVar20 = lVar20 + 8;
                            } while (lVar20 != 0x18);
                            dVar49 = dVar49 * dVar55;
                            _exp();
                            *(float *)(lVar19 + *plVar11 * uVar18 + lVar40 * 4) =
                                 (float)(dVar49 * 50.0);
                            if (uVar18 != 0) {
                              lVar20 = 0;
                              apdStack_168[1] = (double *)0x0;
                              apdStack_168[0] = (double *)0x0;
                              apdStack_168[2] = (double *)0x0;
                              do {
                                pdVar51 = (double *)
                                          NEON_ucvtf((ulong)*(byte *)(lVar37 + (long)(int)uVar42 * 3
                                                                     + lVar20));
                                apdStack_168[lVar20] = pdVar51;
                                lVar20 = lVar20 + 1;
                              } while (lVar20 != 3);
                              lVar20 = 0;
                              do {
                                *(double *)((long)appplStack_150 + lVar20) =
                                     *(double *)((long)appplStack_130 + lVar20) -
                                     *(double *)((long)apdStack_168 + lVar20);
                                lVar20 = lVar20 + 8;
                              } while (lVar20 != 0x18);
                              lVar20 = 0;
                              dVar49 = 0.0;
                              do {
                                dVar49 = dVar49 + *(double *)((long)appplStack_150 + lVar20) *
                                                  *(double *)((long)appplStack_150 + lVar20);
                                lVar20 = lVar20 + 8;
                              } while (lVar20 != 0x18);
                              dVar49 = dVar49 * dVar55;
                              _exp();
                              *(float *)(lVar39 + *plVar10 * uVar18 + lVar40 * 4) =
                                   (float)(dVar49 * 35.35533966440824);
                              goto LAB_109198018;
                            }
                            *(undefined4 *)(lVar39 + lVar40 * 4) = 0;
LAB_109198154:
                            *(undefined4 *)(lVar43 + *plVar9 * uVar18 + lVar40 * 4) = 0;
                            uVar44 = (ulong)(iVar28 + 1);
LAB_109198168:
                            *(undefined4 *)(lVar23 + *plVar8 * uVar18 + lVar40 * 4) = 0;
                          }
                        } while ((int)uVar44 < (int)uVar41);
                      }
                      uVar18 = uVar18 + 1;
                      lStack_bc0 = lStack_bc0 + 1;
                    } while (uVar18 != uVar27);
                    uVar27 = (ulong)uStack_308 & 0xffffffff;
                    uVar18 = (ulong)uStack_308 >> 0x20;
                    fStack_100 = 0.0;
                    lStack_108 = 0;
                    uStack_110 = 0;
                    uStack_118 = 0;
                    appplStack_130[2] = (long ***)0x0;
                    appplStack_130[1] = (long ***)0x0;
                    appplStack_130[0] = (long ***)0x0;
                    if (0 < (int)uStack_308) {
                      lVar23 = 0;
                      do {
                        if (0 < (int)uVar18) {
                          lVar39 = 0;
                          lVar43 = 0;
                          do {
                            lVar19 = 0;
                            lVar25 = *plStack_2c8;
                            appplStack_150[2] = (long ***)0x0;
                            appplStack_150[0] = (long ***)0x0;
                            appplStack_150[1] = (long ***)0x0;
                            do {
                              ppplVar50 = (long ***)
                                          NEON_ucvtf((ulong)*(byte *)(uStack_300 +
                                                                      lVar39 + lVar23 * lVar25 +
                                                                     lVar19));
                              appplStack_150[lVar19] = ppplVar50;
                              lVar19 = lVar19 + 1;
                            } while (lVar19 != 3);
                            if ((*(byte *)(*(long *)(param_2 + 8) +
                                           **(long **)(param_2 + 0x24) * lVar23 + lVar43) & 0xfd) ==
                                0) {
                              pppplVar33 = (long ****)0x0;
                              ppplVar57 = (long ***)0x0;
                              iVar28 = 0;
                              do {
                                pppplVar17 = pppplVar33;
                                FUN_109196b0c(&uStack_710,pppplVar33,appplStack_150);
                                iVar38 = (int)pppplVar33;
                                ppplVar12 = ppplVar50;
                                if ((double)ppplVar50 <= (double)ppplVar57) {
                                  iVar38 = iVar28;
                                  ppplVar12 = ppplVar57;
                                }
                                ppplVar57 = ppplVar12;
                                uVar41 = (int)pppplVar33 + 1;
                                pppplVar33 = (long ****)(ulong)uVar41;
                                iVar28 = iVar38;
                              } while (uVar41 != 5);
                            }
                            else {
                              pppplVar33 = (long ****)0x0;
                              ppplVar57 = (long ***)0x0;
                              iVar28 = 0;
                              do {
                                pppplVar17 = pppplVar33;
                                FUN_109196b0c(&uStack_b10,pppplVar33,appplStack_150);
                                iVar38 = (int)pppplVar33;
                                ppplVar12 = ppplVar50;
                                if ((double)ppplVar50 <= (double)ppplVar57) {
                                  iVar38 = iVar28;
                                  ppplVar12 = ppplVar57;
                                }
                                ppplVar57 = ppplVar12;
                                uVar41 = (int)pppplVar33 + 1;
                                pppplVar33 = (long ****)(ulong)uVar41;
                                iVar28 = iVar38;
                              } while (uVar41 != 5);
                            }
                            *(int *)(CONCAT44(uStack_b5c,uStack_b60) + *plStack_b28 * lVar23 +
                                    lVar43 * 4) = iVar38;
                            lVar43 = lVar43 + 1;
                            uVar18 = (ulong)(int)uStack_308._4_4_;
                            lVar39 = lVar39 + 3;
                          } while (lVar43 < (long)uVar18);
                          uVar27 = (ulong)uStack_308 & 0xffffffff;
                        }
                        lVar23 = lVar23 + 1;
                      } while (lVar23 < (int)uVar27);
                    }
                  }
                  plVar8 = plStack_2c8;
                  uVar24 = uStack_300;
                  plVar7 = plStack_b28;
                  pppplVar33 = (long ****)0x0;
                  uStack_318 = 0;
                  uStack_330 = 0;
                  uStack_338 = 0;
                  uStack_320 = 0;
                  uStack_328 = 0;
                  uStack_350 = 0;
                  uStack_358 = 0;
                  uStack_340 = 0;
                  uStack_348 = 0;
                  uStack_370 = 0;
                  uStack_378 = 0;
                  uStack_360 = 0;
                  uStack_368 = 0;
                  uStack_390 = 0;
                  uStack_398 = 0;
                  uStack_380 = 0;
                  uStack_388 = 0;
                  uStack_3b0 = 0;
                  uStack_3b8 = 0;
                  uStack_3a0 = 0;
                  uStack_3a8 = 0;
                  uStack_3d0 = 0;
                  uStack_3d8 = 0;
                  uStack_3c0 = 0;
                  uStack_3c8 = 0;
                  uStack_3f0 = 0;
                  uStack_3f8 = 0;
                  uStack_3e0 = 0;
                  uStack_3e8 = 0;
                  uStack_410 = 0;
                  uStack_418 = 0;
                  uStack_400 = 0;
                  uStack_408 = 0;
                  uStack_430 = 0;
                  uStack_438 = 0;
                  uStack_420 = 0;
                  uStack_428 = 0;
                  uStack_450 = 0;
                  uStack_458 = 0;
                  uStack_440 = 0;
                  uStack_448 = 0;
                  uStack_470 = 0;
                  uStack_478 = 0;
                  uStack_460 = 0;
                  uStack_468 = 0;
                  uStack_490 = 0;
                  uStack_498 = 0;
                  uStack_480 = 0;
                  uStack_488 = 0;
                  uStack_4b0 = 0;
                  uStack_4b8 = 0;
                  uStack_4a0 = 0;
                  uStack_4a8 = 0;
                  uStack_4d0 = 0;
                  uStack_4d8 = 0;
                  uStack_4c0 = 0;
                  uStack_4c8 = 0;
                  uStack_4f0 = 0;
                  uStack_4f8 = 0;
                  uStack_4e0 = 0;
                  uStack_4e8 = 0;
                  uStack_500 = 0;
                  uStack_508 = 0;
                  uStack_718 = 0;
                  uStack_730 = 0;
                  uStack_738 = 0;
                  uStack_720 = 0;
                  uStack_728 = 0;
                  uStack_750 = 0;
                  uStack_758 = 0;
                  uStack_740 = 0;
                  uStack_748 = 0;
                  uStack_770 = 0;
                  uStack_778 = 0;
                  uStack_760 = 0;
                  uStack_768 = 0;
                  uStack_790 = 0;
                  uStack_798 = 0;
                  uStack_780 = 0;
                  uStack_788 = 0;
                  uStack_7b0 = 0;
                  uStack_7b8 = 0;
                  uStack_7a0 = 0;
                  uStack_7a8 = 0;
                  uStack_7d0 = 0;
                  uStack_7d8 = 0;
                  uStack_7c0 = 0;
                  uStack_7c8 = 0;
                  uStack_7f0 = 0;
                  uStack_7f8 = 0;
                  uStack_7e0 = 0;
                  uStack_7e8 = 0;
                  uStack_810 = 0;
                  uStack_818 = 0;
                  uStack_800 = 0;
                  uStack_808 = 0;
                  uStack_830 = 0;
                  uStack_838 = 0;
                  uStack_820 = 0;
                  uStack_828 = 0;
                  uStack_850 = 0;
                  uStack_858 = 0;
                  uStack_840 = 0;
                  uStack_848 = 0;
                  uStack_870 = 0;
                  uStack_878 = 0;
                  uStack_860 = 0;
                  uStack_868 = 0;
                  uStack_890 = 0;
                  uStack_898 = 0;
                  uStack_880 = 0;
                  uStack_888 = 0;
                  uStack_8b0 = 0;
                  uStack_8b8 = 0;
                  uStack_8a0 = 0;
                  uStack_8a8 = 0;
                  uStack_8d0 = 0;
                  uStack_8d8 = 0;
                  uStack_8c0 = 0;
                  uStack_8c8 = 0;
                  uStack_8f0 = 0;
                  uStack_8f8 = 0;
                  uStack_8e0 = 0;
                  uStack_8e8 = 0;
                  uStack_900 = 0;
                  uStack_908 = 0;
                  lVar23 = CONCAT44(uStack_b5c,uStack_b60);
                  do {
                    if (0 < (int)uVar27) {
                      uVar44 = 0;
                      do {
                        if (0 < (int)uVar18) {
                          uVar45 = 0;
                          uVar35 = uVar24;
                          do {
                            if (*(int *)(lVar23 + *plVar7 * uVar44 + uVar45 * 4) == (int)pppplVar33)
                            {
                              if ((*(byte *)(*(long *)(param_2 + 8) +
                                             **(long **)(param_2 + 0x24) * uVar44 + uVar45) & 0xfd)
                                  == 0) {
                                lVar43 = 0;
                                lVar39 = *plVar8;
                                appplStack_150[2] = (long ***)0x0;
                                appplStack_150[0] = (long ***)0x0;
                                appplStack_150[1] = (long ***)0x0;
                                do {
                                  ppplVar50 = (long ***)
                                              NEON_ucvtf((ulong)*(byte *)(uVar35 + uVar44 * lVar39 +
                                                                         lVar43));
                                  appplStack_150[lVar43] = ppplVar50;
                                  lVar43 = lVar43 + 1;
                                } while (lVar43 != 3);
                                puVar14 = &uStack_710;
                              }
                              else {
                                lVar43 = 0;
                                lVar39 = *plVar8;
                                appplStack_150[2] = (long ***)0x0;
                                appplStack_150[0] = (long ***)0x0;
                                appplStack_150[1] = (long ***)0x0;
                                do {
                                  ppplVar50 = (long ***)
                                              NEON_ucvtf((ulong)*(byte *)(uVar35 + uVar44 * lVar39 +
                                                                         lVar43));
                                  appplStack_150[lVar43] = ppplVar50;
                                  lVar43 = lVar43 + 1;
                                } while (lVar43 != 3);
                                puVar14 = &uStack_b10;
                              }
                              pppplVar17 = pppplVar33;
                              FUN_109196c90(puVar14,pppplVar33,appplStack_150);
                            }
                            uVar45 = uVar45 + 1;
                            uVar35 = uVar35 + 3;
                          } while (uVar45 != (uVar18 & 0xffffffff));
                        }
                        uVar44 = uVar44 + 1;
                      } while (uVar44 != uVar27);
                    }
                    uVar41 = (int)pppplVar33 + 1;
                    pppplVar33 = (long ****)(ulong)uVar41;
                  } while (uVar41 != 5);
                  FUN_109196d88(&uStack_710);
                  FUN_109196d88(&uStack_b10);
                  iVar38 = uStack_308._4_4_;
                  iVar28 = (int)uStack_308;
                  pppplVar33 = (long ****)(ulong)((int)uStack_308 * uStack_308._4_4_);
                  if ((int)uStack_308 * uStack_308._4_4_ == 0) {
                    pppplVar33 = (long ****)0x0;
                  }
                  else {
                    FUN_10919d5c8();
                    appplStack_130[0] = (long ***)pppplVar33;
                    appplStack_130[2] = (long ***)(pppplVar33 + (long)pppplVar17 * 4);
                    appplStack_130[1] = (long ***)pppplVar33;
                  }
                  uVar41 = ((iVar28 + iVar38) * 0x7ffffffd + iVar38 * iVar28 * 4) * 2 + 6;
                  uVar18 = (ulong)uVar41;
                  if (uVar41 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    FUN_10919d610();
                    uStack_118 = uVar18;
                    uStack_110 = uVar18;
                    lStack_108 = uVar18 + (long)pppplVar17 * 0xc;
                  }
                  fStack_100 = 0.0;
                  pppplVar34 = pppplVar33;
                  if (0 < (int)uStack_308) {
                    lVar23 = 0;
                    uVar24 = (ulong)uStack_308 >> 0x20;
                    iVar28 = (int)uStack_308;
                    do {
                      if (0 < (int)uVar24) {
                        lVar43 = 0;
                        do {
                          ppplVar50 = appplStack_130[0];
                          if (appplStack_130[1] < appplStack_130[2]) {
                            appplStack_130[1][1] = (long **)0x0;
                            *appplStack_130[1] = (long **)0x0;
                            appplStack_130[1][3] = (long **)0x0;
                            appplStack_130[1][2] = (long **)0x0;
                            pppplVar33 = (long ****)(appplStack_130[1] + 4);
                            pppplVar34 = (long ****)appplStack_130[0];
                          }
                          else {
                            lVar39 = (long)appplStack_130[1] - (long)appplStack_130[0];
                            uVar18 = (lVar39 >> 5) + 1;
                            if (uVar18 >> 0x3b != 0) {
                              FUN_10919d5b4();
                              goto LAB_10919983c;
                            }
                            uVar24 = (long)appplStack_130[2] - (long)appplStack_130[0] >> 4;
                            if (uVar24 <= uVar18) {
                              uVar24 = uVar18;
                            }
                            if (0x7fffffffffffffdf <
                                (ulong)((long)appplStack_130[2] - (long)appplStack_130[0])) {
                              uVar24 = 0x7ffffffffffffff;
                            }
                            FUN_10919d5c8();
                            puVar14 = (undefined8 *)(uVar24 + lVar39);
                            lVar19 = (long)pppplVar17 * 0x20;
                            puVar14[1] = 0;
                            *puVar14 = 0;
                            puVar14[3] = 0;
                            puVar14[2] = 0;
                            pppplVar33 = (long ****)(puVar14 + 4);
                            pppplVar34 = (long ****)(puVar14 + (lVar39 >> 5) * -4);
                            pppplVar17 = (long ****)ppplVar50;
                            _memcpy(pppplVar34,ppplVar50,lVar39);
                            appplStack_130[0] = (long ***)pppplVar34;
                            appplStack_130[2] = (long ***)(uVar24 + lVar19);
                            if ((long ****)ppplVar50 != (long ****)0x0) {
                              appplStack_130[1] = (long ***)pppplVar33;
                              __ZdlPv(ppplVar50);
                            }
                          }
                          appplStack_130[1] = (long ***)pppplVar33;
                          puVar2 = (undefined2 *)(uStack_300 + *plStack_2c8 * lVar23 + lVar43 * 3);
                          uStack_16c = *puVar2;
                          uStack_16a = *(undefined1 *)(puVar2 + 1);
                          bVar4 = *(byte *)(*(long *)(param_2 + 8) +
                                            **(long **)(param_2 + 0x24) * lVar23 + lVar43);
                          if ((bVar4 & 0xfe) == 2) {
                            lVar39 = 0;
                            appplStack_150[1] = (long ***)0x0;
                            appplStack_150[0] = (long ***)0x0;
                            appplStack_150[2] = (long ***)0x0;
                            do {
                              ppplVar50 = (long ***)
                                          NEON_ucvtf((ulong)*(byte *)((long)&uStack_16c + lVar39));
                              appplStack_150[lVar39] = ppplVar50;
                              lVar39 = lVar39 + 1;
                            } while (lVar39 != 3);
                            lVar39 = 0;
                            dVar55 = 0.0;
                            do {
                              dVar49 = *(double *)(lStack_6b0 + lVar39 * 8);
                              FUN_109196b0c(&uStack_710,lVar39,appplStack_150);
                              dVar55 = dVar55 + (double)ppplVar50 * dVar49;
                              lVar39 = lVar39 + 1;
                            } while (lVar39 != 5);
                            lVar39 = 0;
                            apdStack_168[1] = (double *)0x0;
                            apdStack_168[0] = (double *)0x0;
                            apdStack_168[2] = (double *)0x0;
                            do {
                              pdVar51 = (double *)
                                        NEON_ucvtf((ulong)*(byte *)((long)&uStack_16c + lVar39));
                              apdStack_168[lVar39] = pdVar51;
                              lVar39 = lVar39 + 1;
                            } while (lVar39 != 3);
                            pppplVar36 = (long ****)0x0;
                            dVar49 = 0.0;
                            do {
                              dVar58 = *(double *)(lStack_ab0 + (long)pppplVar36 * 8);
                              pppplVar17 = pppplVar36;
                              FUN_109196b0c(&uStack_b10,pppplVar36,apdStack_168);
                              dVar49 = dVar49 + (double)pdVar51 * dVar58;
                              pppplVar36 = (long ****)((long)pppplVar36 + 1);
                            } while (pppplVar36 != (long ****)0x5);
                            _log();
                            _log();
                            fVar52 = -(float)dVar55;
                            fVar48 = -(float)dVar49;
                          }
                          else {
                            fVar48 = 450.0;
                            if (bVar4 != 0) {
                              fVar48 = 0.0;
                            }
                            fVar52 = 0.0;
                            if (bVar4 != 0) {
                              fVar52 = 450.0;
                            }
                          }
                          iVar28 = (int)((ulong)((long)pppplVar33 - (long)pppplVar34) >> 5);
                          if (iVar28 < 1) {
                            puVar15 = (undefined4 *)0x24;
                            func_0x000107c2ae8c();
                            *puVar15 = 1;
                            puStack_2a8 = (undefined8 *)(puVar15 + 1);
                            puStack_2a0 = (undefined1 *)0x1e;
                            *(undefined1 *)((long)puVar15 + 0x22) = 0;
                            *(undefined8 *)(puVar15 + 3) = 0x6928203c20692026;
                            *(undefined8 *)(puVar15 + 1) = 0x262030203d3e2069;
                            *(undefined8 *)((long)puVar15 + 0x1a) = 0x2928657a69732e73;
                            *(undefined8 *)((long)puVar15 + 0x12) = 0x63747629746e6928;
                            FUN_109ac3188(0xffffff29,&puStack_2a8,&UNK_10f55ac44,&UNK_10f55ac53,0x7f
                                         );
                            goto LAB_10919983c;
                          }
                          uVar41 = iVar28 - 1;
                          pppplVar33 = (long ****)(ulong)uVar41;
                          fVar56 = *(float *)(pppplVar34 + (long)pppplVar33 * 4 + 3);
                          fVar53 = fVar52 + fVar56;
                          if (fVar56 <= 0.0) {
                            fVar53 = fVar52;
                            fVar48 = fVar48 - fVar56;
                          }
                          fVar52 = fVar53;
                          if (fVar48 <= fVar53) {
                            fVar52 = fVar48;
                          }
                          fStack_100 = fStack_100 + fVar52;
                          *(float *)(pppplVar34 + (long)pppplVar33 * 4 + 3) = fVar53 - fVar48;
                          if (lVar43 == 0) {
                            if (lVar23 != 0) goto LAB_109198828;
                          }
                          else {
                            uVar47 = *(undefined4 *)
                                      (CONCAT44(uStack_e4,uStack_e8) + *plStack_b0 * lVar23 +
                                      lVar43 * 4);
                            pppplVar17 = pppplVar33;
                            FUN_10919d224(uVar47,uVar47,appplStack_130,pppplVar33,iVar28 + -2);
                            if (lVar23 != 0) {
                              uVar47 = *(undefined4 *)
                                        (CONCAT44(uStack_1bc,uStack_1c0) + *plStack_188 * lVar23 +
                                        lVar43 * 4);
                              FUN_10919d224(uVar47,uVar47,appplStack_130,pppplVar33,
                                            uVar41 + ~uStack_308._4_4_);
LAB_109198828:
                              uVar47 = *(undefined4 *)
                                        (CONCAT44(uStack_21c,uStack_220) + *plStack_1e8 * lVar23 +
                                        lVar43 * 4);
                              pppplVar17 = pppplVar33;
                              FUN_10919d224(uVar47,uVar47,appplStack_130,pppplVar33,
                                            uVar41 - uStack_308._4_4_);
                              if (lVar43 < (long)(int)uStack_308._4_4_ + -1) {
                                uVar47 = *(undefined4 *)
                                          (CONCAT44(uStack_27c,uStack_280) + *plStack_248 * lVar23 +
                                          lVar43 * 4);
                                FUN_10919d224(uVar47,uVar47,appplStack_130,pppplVar33,
                                              iVar28 - uStack_308._4_4_);
                                pppplVar17 = pppplVar33;
                              }
                            }
                          }
                          lVar43 = lVar43 + 1;
                          uVar24 = (ulong)(int)uStack_308._4_4_;
                        } while (lVar43 < (long)uVar24);
                        iVar28 = (int)uStack_308;
                      }
                      lVar23 = lVar23 + 1;
                      uVar18 = uStack_118;
                      pppplVar33 = (long ****)appplStack_130[1];
                      pppplVar34 = (long ****)appplStack_130[0];
                    } while (lVar23 < iVar28);
                  }
                  appplStack_150[0] = (long ***)appplStack_150;
                  apdStack_168[1] = (double *)0x0;
                  apdStack_168[0] = (double *)0x0;
                  apdStack_168[2] = (double *)0x0;
                  if (0 < (int)((ulong)((long)pppplVar33 - (long)pppplVar34) >> 5)) {
                    uVar24 = (ulong)((long)pppplVar33 - (long)pppplVar34) >> 5 & 0x7fffffff;
                    ppplStack_b88 = (long ***)appplStack_150;
                    pppplVar17 = pppplVar34;
                    do {
                      *(undefined4 *)(pppplVar17 + 2) = 0;
                      fVar48 = *(float *)(pppplVar17 + 3);
                      if (fVar48 == 0.0) {
                        uVar47 = 0;
                      }
                      else {
                        *ppplStack_b88 = (long **)pppplVar17;
                        *(undefined4 *)((long)pppplVar17 + 0x14) = 1;
                        *(bool *)((long)pppplVar17 + 0x1c) = fVar48 < 0.0;
                        uVar47 = 0xffffffff;
                        ppplStack_b88 = (long ***)pppplVar17;
                      }
                      pppplVar33 = (long ****)appplStack_150[0];
                      *(undefined4 *)(pppplVar17 + 1) = uVar47;
                      pppplVar17 = pppplVar17 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                    *ppplStack_b88 = (long **)appplStack_150;
                    appplStack_150[0] = (long ***)0x0;
                    if (pppplVar33 != appplStack_150) {
                      iVar28 = 0;
                      pdVar51 = (double *)0x0;
LAB_109198950:
                      uVar41 = 0xffffffff;
                      do {
                        uVar42 = uVar41;
                        if (*(int *)(pppplVar33 + 1) != 0) {
                          uVar22 = *(uint *)((long)pppplVar33 + 0xc);
                          if (uVar22 != 0) {
                            bVar4 = *(byte *)((long)pppplVar33 + 0x1c);
                            do {
                              if (*(float *)(uVar18 + (long)(int)(uVar22 ^ bVar4) * 0xc + 8) != 0.0)
                              {
                                pppplVar17 = pppplVar34 +
                                             (long)*(int *)(uVar18 + (long)(int)uVar22 * 0xc) * 4;
                                if (*(int *)(pppplVar17 + 1) == 0) {
                                  *(byte *)((long)pppplVar17 + 0x1c) = bVar4;
                                  *(uint *)(pppplVar17 + 1) = uVar22 ^ 1;
                                  *(undefined4 *)(pppplVar17 + 2) = *(undefined4 *)(pppplVar33 + 2);
                                  *(int *)((long)pppplVar17 + 0x14) =
                                       *(int *)((long)pppplVar33 + 0x14) + 1;
                                  if (*pppplVar17 == (long ***)0x0) {
                                    *pppplVar17 = (long ***)appplStack_150;
                                    *ppplStack_b88 = (long **)pppplVar17;
                                    ppplStack_b88 = (long ***)pppplVar17;
                                  }
                                }
                                else {
                                  uVar42 = uVar22 ^ bVar4;
                                  if (*(byte *)((long)pppplVar17 + 0x1c) != bVar4) break;
                                  iVar38 = *(int *)((long)pppplVar33 + 0x14) + 1;
                                  if ((iVar38 < *(int *)((long)pppplVar17 + 0x14)) &&
                                     (iVar29 = *(int *)(pppplVar33 + 2),
                                     *(int *)(pppplVar17 + 2) <= iVar29)) {
                                    *(uint *)(pppplVar17 + 1) = uVar22 ^ 1;
                                    *(int *)(pppplVar17 + 2) = iVar29;
                                    *(int *)((long)pppplVar17 + 0x14) = iVar38;
                                  }
                                }
                              }
                              uVar22 = *(uint *)(uVar18 + (long)(int)uVar22 * 0xc + 4);
                              uVar42 = uVar41;
                            } while (uVar22 != 0);
                          }
                          if (0 < (int)uVar42) goto LAB_109198a40;
                        }
                        pppplVar17 = (long ****)*pppplVar33;
                        *pppplVar33 = (long ***)0x0;
                        pppplVar33 = pppplVar17;
                        uVar41 = uVar42;
                        if (pppplVar17 == appplStack_150) goto LAB_109198db8;
                      } while( true );
                    }
                  }
                  goto LAB_109198dc4;
                }
              }
              puVar15 = (undefined4 *)0x30;
              func_0x000107c2ae8c();
              *puVar15 = 1;
              uStack_230 = puVar15 + 1;
              iStack_228 = 0x2a;
              uStack_224 = 0;
              *(undefined1 *)((long)puVar15 + 0x2e) = 0;
              *(undefined8 *)(puVar15 + 3) = 0x74706d652e73656c;
              *(undefined8 *)(puVar15 + 1) = 0x706d615364676221;
              *(undefined8 *)(puVar15 + 7) = 0x6c706d6153646766;
              *(undefined8 *)(puVar15 + 5) = 0x2120262620292879;
              *(undefined8 *)((long)puVar15 + 0x26) = 0x29287974706d652e;
              *(undefined8 *)((long)puVar15 + 0x1e) = 0x73656c706d615364;
              FUN_109ac3188(0xffffff29,&uStack_230,&UNK_10f55ac1c,&UNK_10f55aa47,0x1a0);
              goto LAB_10919983c;
            }
          }
          puVar15 = (undefined4 *)0x30;
          func_0x000107c2ae8c();
          *puVar15 = 1;
          uStack_f8 = (undefined8 *)(puVar15 + 1);
          uStack_f0 = 0x2b;
          uStack_ec = 0;
          *(undefined1 *)((long)puVar15 + 0x2f) = 0;
          *(undefined8 *)(puVar15 + 3) = 0x6120657661682074;
          *(undefined8 *)(puVar15 + 1) = 0x73756d206b73616d;
          *(undefined8 *)(puVar15 + 7) = 0x20646e612073776f;
          *(undefined8 *)(puVar15 + 5) = 0x7220796e616d2073;
          *(undefined8 *)((long)puVar15 + 0x27) = 0x676d692073612073;
          *(undefined8 *)((long)puVar15 + 0x1f) = 0x6c6f6320646e6120;
          FUN_109ac3188(0xfffffffb,&uStack_f8,&UNK_10f55ab53,&UNK_10f55aa47,0x174);
          goto LAB_10919983c;
        }
      }
      puVar15 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      uStack_f8 = (undefined8 *)(puVar15 + 1);
      *uStack_f8 = 0x207369206b73616d;
      uStack_f0 = 0xd;
      uStack_ec = 0;
      *(undefined1 *)((long)puVar15 + 0x11) = 0;
      *(undefined8 *)((long)puVar15 + 9) = 0x7974706d65207369;
      FUN_109ac3188(0xfffffffb,&uStack_f8,&UNK_10f55ab53,&UNK_10f55aa47,0x170);
      goto LAB_10919983c;
    }
  }
  puVar15 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  uStack_710 = (undefined8 *)(puVar15 + 1);
  *uStack_710 = 0x7369206567616d69;
  uStack_708 = 0xe;
  *(undefined1 *)((long)puVar15 + 0x12) = 0;
  *(undefined8 *)((long)puVar15 + 10) = 0x7974706d65207369;
  FUN_109ac3188(0xfffffffb,&uStack_710,&UNK_10f55ab0b,&UNK_10f55aa47,0x228);
LAB_10919983c:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109199840);
  (*pcVar13)();
LAB_109198a40:
  pfVar21 = (float *)(uVar18 + (ulong)uVar42 * 0xc + 8);
  fVar48 = *pfVar21;
  if (fVar48 <= 0.0) goto LAB_1091997dc;
  uVar41 = 1;
  fVar52 = fVar48;
  do {
    uVar22 = uVar41 ^ uVar42;
    while( true ) {
      lVar23 = (long)*(int *)(uVar18 + (ulong)uVar22 * 0xc);
      uVar22 = *(uint *)(pppplVar34 + lVar23 * 4 + 1);
      if ((int)uVar22 < 0) break;
      fVar53 = *(float *)(uVar18 + (ulong)(uVar22 ^ uVar41) * 0xc + 8);
      if (fVar52 <= fVar53) {
        fVar53 = fVar52;
      }
      fVar52 = fVar53;
      if (fVar52 <= 0.0) {
        puVar15 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar15 = 1;
        puStack_2a8 = (undefined8 *)(puVar15 + 1);
        *puStack_2a8 = 0x68676965576e696d;
        puStack_2a0 = (undefined1 *)0xd;
        *(undefined1 *)((long)puVar15 + 0x11) = 0;
        *(undefined8 *)((long)puVar15 + 9) = 0x30203e2074686769;
        FUN_109ac3188(0xffffff29,&puStack_2a8,&UNK_10f55acc9,&UNK_10f55ac53,0xe1);
        goto LAB_10919983c;
      }
    }
    fVar53 = ABS(*(float *)(pppplVar34 + lVar23 * 4 + 3));
    if (fVar52 <= ABS(*(float *)(pppplVar34 + lVar23 * 4 + 3))) {
      fVar53 = fVar52;
    }
    fVar52 = fVar53;
    if (fVar52 <= 0.0) {
      puVar15 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      puStack_2a8 = (undefined8 *)(puVar15 + 1);
      *puStack_2a8 = 0x68676965576e696d;
      puStack_2a0 = (undefined1 *)0xd;
      *(undefined1 *)((long)puVar15 + 0x11) = 0;
      *(undefined8 *)((long)puVar15 + 9) = 0x30203e2074686769;
      FUN_109ac3188(0xffffff29,&puStack_2a8,&UNK_10f55acc9,&UNK_10f55ac53,0xe5);
      goto LAB_10919983c;
    }
    bVar6 = uVar41 != 0;
    uVar41 = uVar41 - 1;
  } while (bVar6);
  *pfVar21 = fVar48 - fVar52;
  lVar23 = uVar18 + (ulong)(uVar42 ^ 1) * 0xc;
  *(float *)(lVar23 + 8) = fVar52 + *(float *)(lVar23 + 8);
  fStack_100 = fVar52 + fStack_100;
  uVar41 = 1;
  do {
    lVar23 = (long)*(int *)(uVar18 + (ulong)(uVar41 ^ uVar42) * 0xc);
    pppplVar17 = pppplVar34 + lVar23 * 4;
    uVar22 = *(uint *)(pppplVar17 + 1);
    if (-1 < (int)uVar22) {
      do {
        lVar23 = uVar18 + (ulong)(uVar22 ^ uVar41 ^ 1) * 0xc;
        *(float *)(lVar23 + 8) = fVar52 + *(float *)(lVar23 + 8);
        lVar23 = uVar18 + (ulong)(uVar22 ^ uVar41) * 0xc;
        fVar48 = *(float *)(lVar23 + 8) - fVar52;
        *(float *)(lVar23 + 8) = fVar48;
        if (fVar48 == 0.0) {
          FUN_10919d748(apdStack_168,pppplVar17);
          *(undefined4 *)(pppplVar17 + 1) = 0xfffffffe;
        }
        lVar23 = (long)*(int *)(uVar18 + (ulong)uVar22 * 0xc);
        pppplVar17 = pppplVar34 + lVar23 * 4;
        uVar22 = *(uint *)(pppplVar17 + 1);
      } while (-1 < (int)uVar22);
    }
    fVar48 = *(float *)(pppplVar34 + lVar23 * 4 + 3) + (float)(int)(uVar41 * -2 + 1) * fVar52;
    *(float *)(pppplVar34 + lVar23 * 4 + 3) = fVar48;
    if (fVar48 == 0.0) {
      FUN_10919d748(apdStack_168,pppplVar17);
      *(undefined4 *)(pppplVar17 + 1) = 0xfffffffe;
    }
    bVar6 = uVar41 != 0;
    uVar41 = uVar41 - 1;
  } while (bVar6);
  iVar28 = iVar28 + 1;
  pdVar51 = apdStack_168[0];
  if (apdStack_168[0] != apdStack_168[1]) {
    do {
      apdStack_168[1] = apdStack_168[1] + -1;
      pppplVar17 = (long ****)*apdStack_168[1];
      uVar41 = *(uint *)((long)pppplVar17 + 0xc);
      if (uVar41 == 0) {
        *(undefined4 *)(pppplVar17 + 1) = 0;
        *(undefined4 *)(pppplVar17 + 2) = 0;
      }
      else {
        uVar22 = 0;
        bVar4 = *(byte *)((long)pppplVar17 + 0x1c);
        uVar42 = bVar4 ^ 1;
        iVar38 = 0x7fffffff;
        do {
          if (*(float *)(uVar18 + (long)(int)(uVar41 ^ uVar42) * 0xc + 8) != 0.0) {
            lVar23 = (long)*(int *)(uVar18 + (long)(int)uVar41 * 0xc);
            pppplVar36 = pppplVar34 + lVar23 * 4;
            if (((uint)*(byte *)((long)pppplVar36 + 0x1c) == (uint)bVar4) &&
               (*(int *)(pppplVar36 + 1) != 0)) {
              if (*(int *)(pppplVar36 + 2) == iVar28) {
                iVar29 = 0;
              }
              else {
                iVar29 = 0;
                pppplVar32 = pppplVar36;
                do {
                  uVar3 = *(uint *)(pppplVar32 + 1);
                  if ((int)uVar3 < 0) {
                    if (uVar3 == 0xfffffffe) goto LAB_109198cbc;
                    iVar29 = iVar29 + 1;
                    *(int *)(pppplVar32 + 2) = iVar28;
                    *(undefined4 *)((long)pppplVar32 + 0x14) = 1;
                    goto LAB_109198c6c;
                  }
                  lVar23 = (long)*(int *)(uVar18 + (ulong)uVar3 * 0xc);
                  pppplVar32 = pppplVar34 + lVar23 * 4;
                  iVar29 = iVar29 + 1;
                } while (*(int *)(pppplVar32 + 2) != iVar28);
              }
              iVar29 = *(int *)((long)pppplVar34 + lVar23 * 0x20 + 0x14) + iVar29;
LAB_109198c6c:
              iVar1 = iVar29 + 1;
              if (iVar1 != 0x7fffffff) {
                uVar3 = uVar41;
                if (iVar38 <= iVar1) {
                  iVar1 = iVar38;
                  uVar3 = uVar22;
                }
                uVar22 = uVar3;
                iVar31 = *(int *)(pppplVar36 + 2);
                while (iVar38 = iVar1, iVar31 != iVar28) {
                  *(int *)(pppplVar36 + 2) = iVar28;
                  *(int *)((long)pppplVar36 + 0x14) = iVar29;
                  pppplVar36 = pppplVar34 +
                               (long)*(int *)(uVar18 + (long)*(int *)(pppplVar36 + 1) * 0xc) * 4;
                  iVar29 = iVar29 + -1;
                  iVar31 = *(int *)(pppplVar36 + 2);
                }
              }
            }
          }
LAB_109198cbc:
          uVar41 = *(uint *)(uVar18 + (long)(int)uVar41 * 0xc + 4);
        } while (uVar41 != 0);
        *(uint *)(pppplVar17 + 1) = uVar22;
        if ((int)uVar22 < 1) {
          uVar41 = *(uint *)((long)pppplVar17 + 0xc);
          *(undefined4 *)(pppplVar17 + 2) = 0;
          while (uVar41 != 0) {
            piVar46 = (int *)(uVar18 + (long)(int)uVar41 * 0xc);
            pppplVar36 = pppplVar34 + (long)*piVar46 * 4;
            uVar22 = *(uint *)(pppplVar36 + 1);
            if (*(byte *)((long)pppplVar36 + 0x1c) == bVar4 && uVar22 != 0) {
              if ((*(float *)(uVar18 + (long)(int)(uVar41 ^ uVar42) * 0xc + 8) != 0.0) &&
                 (*pppplVar36 == (long ***)0x0)) {
                *pppplVar36 = (long ***)appplStack_150;
                *ppplStack_b88 = (long **)pppplVar36;
                ppplStack_b88 = (long ***)pppplVar36;
              }
              if ((0 < (int)uVar22) &&
                 (pppplVar34 + (long)*(int *)(uVar18 + (ulong)uVar22 * 0xc) * 4 == pppplVar17)) {
                FUN_10919d748(apdStack_168,pppplVar36);
                *(undefined4 *)(pppplVar36 + 1) = 0xfffffffe;
              }
            }
            pdVar51 = apdStack_168[0];
            uVar41 = piVar46[1];
          }
        }
        else {
          *(int *)(pppplVar17 + 2) = iVar28;
          *(int *)((long)pppplVar17 + 0x14) = iVar38;
        }
      }
    } while (pdVar51 != apdStack_168[1]);
  }
  if (pppplVar33 == appplStack_150) goto LAB_109198db8;
  goto LAB_109198950;
LAB_109198db8:
  if (pdVar51 != (double *)0x0) {
    apdStack_168[1] = pdVar51;
    __ZdlPv();
  }
LAB_109198dc4:
  iVar28 = *(int *)(param_2 + 4);
  if (0 < iVar28) {
    lVar23 = 0;
    iVar38 = *(int *)(param_2 + 6);
    do {
      if (0 < iVar38) {
        lVar43 = 0;
        do {
          lVar39 = *(long *)(param_2 + 8) + lVar23 * **(long **)(param_2 + 0x24);
          if ((*(byte *)(lVar39 + lVar43) & 0xfe) == 2) {
            uVar18 = lVar43 + (ulong)(uint)((int)lVar23 * iVar38);
            iVar28 = (int)uVar18;
            if ((iVar28 < 0) ||
               ((int)((ulong)((long)appplStack_130[1] - (long)appplStack_130[0]) >> 5) <= iVar28)) {
              puVar15 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar15 = 1;
              appplStack_150[0] = (long ***)(puVar15 + 1);
              appplStack_150[1] = (long ***)0x1e;
              *(undefined1 *)((long)puVar15 + 0x22) = 0;
              *(undefined8 *)(puVar15 + 3) = 0x6928203c20692026;
              *(undefined8 *)(puVar15 + 1) = 0x262030203d3e2069;
              *(undefined8 *)((long)puVar15 + 0x1a) = 0x2928657a69732e73;
              *(undefined8 *)((long)puVar15 + 0x12) = 0x63747629746e6928;
              FUN_109ac3188(0xffffff29,appplStack_150,&UNK_10f55acd1,&UNK_10f55ac53,0x14d);
              goto LAB_10919983c;
            }
            uVar26 = 2;
            if (*(char *)((long)appplStack_130[0] + (uVar18 & 0xffffffff) * 0x20 + 0x1c) == '\0') {
              uVar26 = 3;
            }
            *(undefined1 *)(lVar39 + lVar43) = uVar26;
            iVar38 = *(int *)(param_2 + 6);
          }
          lVar43 = lVar43 + 1;
        } while (lVar43 < iVar38);
        iVar28 = *(int *)(param_2 + 4);
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar28);
  }
  func_0x00010919da48(appplStack_130);
  if (lStack_258 != 0) {
    piVar46 = (int *)(lStack_258 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_274 = 0;
  uStack_278 = 0;
  uStack_27c = 0;
  uStack_280 = 0;
  uStack_268._4_4_ = 0;
  uStack_268._0_4_ = 0;
  uStack_270._4_4_ = 0;
  uStack_270._0_4_ = 0;
  if (0 < uStack_290._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)((long)puStack_250 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_290._4_4_);
  }
  if (plStack_248 != &lStack_240 && plStack_248 != (long *)0x0) {
    _free(plStack_248[-1]);
  }
  if (lStack_1f8 != 0) {
    piVar46 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_214 = 0;
  uStack_218 = 0;
  uStack_21c = 0;
  uStack_220 = 0;
  uStack_208._4_4_ = 0;
  uStack_208._0_4_ = 0;
  uStack_210._4_4_ = 0;
  uStack_210._0_4_ = 0;
  if (0 < uStack_230._4_4_) {
    lVar23 = 0;
    do {
      piStack_1f0[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_230._4_4_);
  }
  if (plStack_1e8 != &lStack_1e0 && plStack_1e8 != (long *)0x0) {
    _free(plStack_1e8[-1]);
  }
  if (lStack_198 != 0) {
    piVar46 = (int *)(lStack_198 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(auStack_1d0);
    }
  }
  lStack_198 = 0;
  uStack_1b4 = 0;
  uStack_1b8 = 0;
  uStack_1bc = 0;
  uStack_1c0 = 0;
  uStack_1a4 = 0;
  uStack_1a8 = 0;
  uStack_1ac = 0;
  uStack_1b0 = 0;
  if (0 < (int)uStack_1cc) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_190 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_1cc);
  }
  if (plStack_188 != &lStack_180 && plStack_188 != (long *)0x0) {
    _free(plStack_188[-1]);
  }
  if (lStack_c0 != 0) {
    piVar46 = (int *)(lStack_c0 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_f8);
    }
  }
  lStack_c0 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  uStack_d8 = 0;
  if (0 < uStack_f8._4_4_) {
    lVar23 = 0;
    do {
      puStack_b8[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_f8._4_4_);
  }
  if (plStack_b0 != &lStack_a8 && plStack_b0 != (long *)0x0) {
    _free(plStack_b0[-1]);
  }
  if (lStack_b38 != 0) {
    piVar46 = (int *)(lStack_b38 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(auStack_b70);
    }
  }
  lStack_b38 = 0;
  uStack_b5c = 0;
  uStack_b60 = 0;
  if (0 < (int)uStack_b6c) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_b30 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_b6c);
  }
  if (plStack_b28 != &lStack_b20 && plStack_b28 != (long *)0x0) {
    _free(plStack_b28[-1]);
  }
  if (lStack_ad8 != 0) {
    piVar46 = (int *)(lStack_ad8 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_b10);
    }
  }
  lStack_ad8 = 0;
  uStack_af8 = 0;
  uStack_b00 = 0;
  uStack_ae8 = 0;
  uStack_af0 = 0;
  if (0 < uStack_b10._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_ad0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_b10._4_4_);
  }
  if (puStack_ac8 != auStack_ac0 && puStack_ac8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_ac8 + -8));
  }
  if (lStack_6d8 != 0) {
    piVar46 = (int *)(lStack_6d8 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_710);
    }
  }
  lStack_6d8 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  if (0 < uStack_710._4_4_) {
    lVar23 = 0;
    do {
      *(undefined4 *)(lStack_6d0 + lVar23 * 4) = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < uStack_710._4_4_);
  }
  if (puStack_6c8 != auStack_6c0 && puStack_6c8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_6c8 + -8));
  }
  if (uStack_2d8 != 0) {
    piVar46 = (int *)(uStack_2d8 + 0x14);
    do {
      iVar28 = *piVar46;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar46,0x10);
      if (bVar6) {
        *piVar46 = iVar28 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_310);
    }
  }
  uStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  if (0 < (int)uStack_310._4_4_) {
    lVar23 = 0;
    do {
      piStack_2d0[lVar23] = 0;
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uStack_310._4_4_);
  }
  if (plStack_2c8 != &lStack_2c0 && plStack_2c8 != (long *)0x0) {
    _free(plStack_2c8[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_1091997dc:
  puVar15 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  puStack_2a8 = (undefined8 *)(puVar15 + 1);
  *puStack_2a8 = 0x68676965576e696d;
  puStack_2a0 = (undefined1 *)0xd;
  *(undefined1 *)((long)puVar15 + 0x11) = 0;
  *(undefined8 *)((long)puVar15 + 9) = 0x30203e2074686769;
  FUN_109ac3188(0xffffff29,&puStack_2a8,&UNK_10f55acc9,&UNK_10f55ac53,0xd9);
  goto LAB_10919983c;
}



/* Entry: 109199f7c; end: 10919a407;  */

void FUN_109199f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  int iStack_f0;
  int iStack_ec;
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
  undefined4 auStack_88 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_e8 = 0x42ff0000;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_a8 = (long)&uStack_e4 + 4;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_158._0_4_ = (undefined4)param_3;
  uVar5 = (undefined4)uStack_158;
  uStack_158._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = uStack_158._4_4_;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_160._0_4_ = 0x1010000;
  auStack_88[0] = 0x2010000;
  uStack_78 = 0;
  puStack_a0 = &uStack_98;
  puStack_80 = (undefined8 *)&uStack_e8;
  FUN_109abb418(&uStack_160,auStack_88);
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_160._0_4_ = 0x1010000;
  uStack_158 = &uStack_e8;
  FUN_109b42928(auStack_f8,&uStack_160);
  dVar11 = SQRT(62500.0 / (double)(iStack_ec * iStack_f0));
  if (1.0 <= dVar11) {
    uStack_160._0_4_ = 0x42ff0000;
    uStack_158._4_4_ = 0;
    uStack_150 = 0;
    uStack_160._4_4_ = 0;
    uStack_158._0_4_ = 0;
    uStack_120 = (ulong)&uStack_160 | 8;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    puStack_118 = &uStack_110;
    puStack_80 = &uStack_160;
    FUN_109a479a0(param_2,auStack_88);
    if (param_4[7] != 0) {
      piVar1 = (int *)(param_4[7] + 0x14);
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
        func_0x000109a848d4(param_4);
      }
    }
    param_4[7] = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    if (0 < *(int *)((long)param_4 + 4)) {
      lVar8 = 0;
      lVar9 = param_4[8];
      do {
        *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)param_4 + 4));
    }
    param_4[1] = CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
    *param_4 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    param_4[3] = CONCAT44(uStack_144,uStack_148);
    param_4[2] = CONCAT44(uStack_14c,uStack_150);
    param_4[5] = CONCAT44(uStack_134,uStack_138);
    param_4[4] = CONCAT44(uStack_13c,uStack_140);
    param_4[7] = uStack_128;
    param_4[6] = CONCAT44(uStack_12c,uStack_130);
    puVar10 = (undefined8 *)param_4[9];
    puVar7 = param_4 + 10;
    if (puVar10 != puVar7) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      param_4[8] = param_4 + 1;
      param_4[9] = puVar7;
      puVar10 = puVar7;
    }
    if (uStack_160._4_4_ < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puVar10 = *puStack_118;
      puVar10[1] = puStack_118[1];
      uStack_160._0_4_ = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    else {
      param_4[8] = uStack_120;
      param_4[9] = puStack_118;
    }
    uStack_160._0_4_ = 0x42ff0000;
    uStack_158._4_4_ = 0;
    uStack_150 = 0;
    uStack_160._4_4_ = 0;
    uStack_158._0_4_ = 0;
    uStack_120 = (ulong)&uStack_160 | 8;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_134 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    puStack_118 = &uStack_110;
    puStack_80 = &uStack_160;
    FUN_109a479a0(param_3,auStack_88);
    if (param_5[7] != 0) {
      piVar1 = (int *)(param_5[7] + 0x14);
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
        func_0x000109a848d4(param_5);
      }
    }
    param_5[7] = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    param_5[5] = 0;
    param_5[4] = 0;
    if (0 < *(int *)((long)param_5 + 4)) {
      lVar8 = 0;
      lVar9 = param_5[8];
      do {
        *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)param_5 + 4));
    }
    param_5[1] = CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
    *param_5 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    param_5[3] = CONCAT44(uStack_144,uStack_148);
    param_5[2] = CONCAT44(uStack_14c,uStack_150);
    param_5[5] = CONCAT44(uStack_134,uStack_138);
    param_5[4] = CONCAT44(uStack_13c,uStack_140);
    param_5[7] = uStack_128;
    param_5[6] = CONCAT44(uStack_12c,uStack_130);
    puVar10 = (undefined8 *)param_5[9];
    puVar7 = param_5 + 10;
    if (puVar10 != puVar7) {
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar10[-1]);
      }
      param_5[8] = param_5 + 1;
      param_5[9] = puVar7;
      puVar10 = puVar7;
    }
    if (uStack_160._4_4_ < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_160 | 4);
      *puVar10 = *puStack_118;
      puVar10[1] = puStack_118[1];
      uStack_160._0_4_ = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_118 != &uStack_110) {
        _free(puStack_118[-1]);
      }
    }
    else {
      param_5[8] = uStack_120;
      param_5[9] = puStack_118;
    }
  }
  else {
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_160._0_4_ = 0x1010000;
    uStack_158._0_4_ = (undefined4)param_2;
    uStack_158._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    uStack_100 = 0;
    puStack_80 = param_4;
    FUN_109b0f718(dVar11,dVar11,&uStack_160,auStack_88,&uStack_100,1);
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_160._0_4_ = 0x1010000;
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    uStack_100 = 0;
    uStack_158._0_4_ = uVar5;
    uStack_158._4_4_ = uVar6;
    puStack_80 = param_5;
    FUN_109b0f718(dVar11,dVar11,&uStack_160,auStack_88,&uStack_100,1);
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
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  return;
}



/* Entry: 10919a408; end: 10919aecf;  */

void FUN_10919a408(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
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
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  undefined4 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  undefined8 uStack_128;
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
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  iVar6 = (int)&uStack_2f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = **(undefined8 **)(param_2 + 0x40);
  puStack_160 = (undefined4 *)((ulong)&uStack_1a0 | 8);
  uStack_218._0_4_ = 0;
  uStack_218._4_4_ = 0;
  uStack_220._0_4_ = 0;
  uStack_220._4_4_ = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1a0 = 0x42ff0000;
  uStack_194 = 0;
  uStack_190 = 0;
  iStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_158 = &uStack_150;
  FUN_109a83fd0(&uStack_1a0,2,&uStack_d0,0);
  FUN_109a48880(&uStack_1a0,&uStack_220);
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(param_3);
    }
  }
  param_3[7] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  if (0 < *(int *)((long)param_3 + 4)) {
    lVar7 = 0;
    lVar10 = param_3[8];
    do {
      *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_3 + 4));
  }
  param_3[1] = CONCAT44(uStack_194,uStack_198);
  *param_3 = CONCAT44(iStack_19c,uStack_1a0);
  param_3[3] = CONCAT44(uStack_184,uStack_188);
  param_3[2] = CONCAT44(uStack_18c,uStack_190);
  param_3[5] = CONCAT44(uStack_174,uStack_178);
  param_3[4] = CONCAT44(uStack_17c,uStack_180);
  param_3[7] = lStack_168;
  param_3[6] = CONCAT44(uStack_16c,uStack_170);
  puVar11 = (undefined8 *)param_3[9];
  puVar8 = param_3 + 10;
  if (puVar11 != puVar8) {
    if (puVar11 != (undefined8 *)0x0) {
      _free(puVar11[-1]);
    }
    param_3[8] = param_3 + 1;
    param_3[9] = puVar8;
    puVar11 = puVar8;
  }
  if (iStack_19c < 3) {
    puVar8 = (undefined8 *)((ulong)&uStack_1a0 | 4);
    *puVar11 = *puStack_158;
    puVar11[1] = puStack_158[1];
    uStack_1a0 = 0x42ff0000;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    *(undefined8 *)((long)puVar8 + 0x34) = 0;
    *(undefined8 *)((long)puVar8 + 0x2c) = 0;
    if (puStack_158 != &uStack_150) {
      _free(puStack_158[-1]);
    }
  }
  else {
    param_3[8] = puStack_160;
    param_3[9] = puStack_158;
  }
  uStack_1a0 = 0x42ff0000;
  uStack_194 = 0;
  uStack_190 = 0;
  iStack_19c = 0;
  uStack_198 = 0;
  puStack_160 = &uStack_198;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_218._0_4_ = (undefined4)param_2;
  uVar4 = (undefined4)uStack_218;
  uStack_218._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = uStack_218._4_4_;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_220._0_4_ = 0x1010000;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2010000);
  uStack_c0 = 0;
  puStack_158 = &uStack_150;
  plStack_c8 = (long *)&uStack_1a0;
  FUN_109abb418(&uStack_220,&uStack_d0);
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_220._0_4_ = 0x1010000;
  puVar8 = &uStack_220;
  uStack_218 = &uStack_1a0;
  FUN_109b42928(&uStack_d0,puVar8);
  param_5[1] = plStack_c8;
  *param_5 = uStack_d0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_220._0_4_ = 0xc3010000;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x8204000c);
  plStack_c8 = &lStack_1b8;
  uStack_c0 = 0;
  uStack_218._0_4_ = uVar4;
  uStack_218._4_4_ = uVar5;
  FUN_109a91d90();
  uStack_130 = 0;
  iStack_12c = 0;
  FUN_109adf8b0(&uStack_220,&uStack_d0,puVar8,0,1,&uStack_130);
  if (lStack_1b0 - lStack_1b8 == 0) {
    iVar15 = -1;
  }
  else {
    lVar7 = 0;
    uVar12 = 0;
    plVar9 = (long *)(lStack_1b8 + 8);
    iVar14 = -1;
    do {
      uVar13 = *plVar9 - plVar9[-1] >> 3;
      iVar15 = (int)lVar7;
      if (uVar13 <= uVar12) {
        iVar15 = iVar14;
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
      lVar7 = lVar7 + 1;
      plVar9 = plVar9 + 3;
      iVar14 = iVar15;
    } while ((lStack_1b0 - lStack_1b8 >> 3) * -0x5555555555555555 - lVar7 != 0);
  }
  uStack_1e0 = (ulong)&uStack_220 | 8;
  plStack_c8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_220._0_4_ = 0x42ff0000;
  uStack_218._4_4_ = 0;
  uStack_210 = 0;
  uStack_220._4_4_ = 0;
  uStack_218._0_4_ = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_1f4 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_130 = (undefined4)**(undefined8 **)(param_2 + 0x40);
  iStack_12c = (int)((ulong)**(undefined8 **)(param_2 + 0x40) >> 0x20);
  puStack_1d8 = &uStack_1d0;
  FUN_109a83fd0(&uStack_220,2,&uStack_130,0);
  FUN_109a48880(&uStack_220,&uStack_d0);
  if (param_4[7] != 0) {
    piVar1 = (int *)(param_4[7] + 0x14);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      func_0x000109a848d4(param_4);
    }
  }
  param_4[7] = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  if (0 < *(int *)((long)param_4 + 4)) {
    lVar7 = 0;
    lVar10 = param_4[8];
    do {
      *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_4 + 4));
  }
  param_4[1] = CONCAT44(uStack_218._4_4_,(undefined4)uStack_218);
  *param_4 = CONCAT44(uStack_220._4_4_,(undefined4)uStack_220);
  param_4[3] = CONCAT44(uStack_204,uStack_208);
  param_4[2] = CONCAT44(uStack_20c,uStack_210);
  param_4[5] = CONCAT44(uStack_1f4,uStack_1f8);
  param_4[4] = CONCAT44(uStack_1fc,uStack_200);
  param_4[7] = lStack_1e8;
  param_4[6] = CONCAT44(uStack_1ec,uStack_1f0);
  puVar11 = (undefined8 *)param_4[9];
  puVar8 = param_4 + 10;
  if (puVar11 != puVar8) {
    if (puVar11 != (undefined8 *)0x0) {
      _free(puVar11[-1]);
    }
    param_4[8] = param_4 + 1;
    param_4[9] = puVar8;
    puVar11 = puVar8;
  }
  if (uStack_220._4_4_ < 3) {
    puVar8 = (undefined8 *)((ulong)&uStack_220 | 4);
    *puVar11 = *puStack_1d8;
    puVar11[1] = puStack_1d8[1];
    uStack_220._0_4_ = 0x42ff0000;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    *(undefined8 *)((long)puVar8 + 0x34) = 0;
    *(undefined8 *)((long)puVar8 + 0x2c) = 0;
    if (puStack_1d8 != &uStack_1d0) {
      _free(puStack_1d8[-1]);
    }
  }
  else {
    param_4[8] = uStack_1e0;
    param_4[9] = puStack_1d8;
  }
  if (iVar15 == -1) {
    uStack_220._0_4_ = 0x1010000;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_d0._0_4_ = 0x2010000;
    uStack_c0 = 0;
    plStack_c8 = (long *)&uStack_1a0;
    uStack_218 = &uStack_1a0;
    FUN_109ae2358(&uStack_220,&uStack_d0,0,1);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x3010000);
    uStack_c0 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_130 = 0x1010000;
    uStack_220._0_4_ = 0;
    uStack_220._4_4_ = 0x406fe000;
    uStack_218._0_4_ = 0;
    uStack_218._4_4_ = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    plStack_c8 = param_4;
    uStack_128 = &uStack_1a0;
    FUN_109aefa18(&uStack_d0,&uStack_130,&uStack_220,8,0);
  }
  else {
    plVar9 = (long *)(lStack_1b8 + (long)iVar15 * 0x18);
    uStack_d0 = *plVar9;
    uStack_2b0 = (undefined4)((ulong)(plVar9[1] - uStack_d0) >> 3);
    uStack_220._0_4_ = 0;
    uStack_220._4_4_ = 0x406fe000;
    uStack_218._0_4_ = 0;
    uStack_218._4_4_ = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_130 = 0;
    iStack_12c = 0;
    FUN_109aef27c(param_4,&uStack_d0,&uStack_2b0,1,&uStack_220,8,0,&uStack_130);
  }
  uStack_d0 = 0x300000003;
  uStack_130 = 0xffffffff;
  iStack_12c = 0xffffffff;
  FUN_109b32bf8(&uStack_220,0,&uStack_d0,&uStack_130);
  uStack_130 = 0x1f;
  iStack_12c = 0x1f;
  uStack_2b0 = 0xffffffff;
  iStack_2ac = 0xffffffff;
  FUN_109b32bf8(&uStack_d0,0,&uStack_130,&uStack_2b0);
  uStack_130 = 0x42ff0000;
  uStack_128._4_4_ = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128._0_4_ = 0;
  puStack_f0 = &uStack_128;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_2e0 = 0;
  uStack_2f0._0_4_ = 0x1010000;
  uStack_238 = CONCAT44(uStack_238._4_4_,0x2010000);
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_250._0_4_ = 0x1010000;
  puStack_248 = &uStack_220;
  uStack_2a8._0_4_ = 0xffffffff;
  uStack_2a8._4_4_ = 0x7fefffff;
  uStack_2b0 = 0xffffffff;
  iStack_2ac = 0x7fefffff;
  uStack_298 = 0xffffffff;
  uStack_294 = 0x7fefffff;
  uStack_2a0 = 0xffffffff;
  uStack_29c = 0x7fefffff;
  uStack_2c8 = 0xffffffffffffffff;
  puStack_2e8 = param_4;
  puStack_230 = (undefined8 *)&uStack_130;
  puStack_e8 = &uStack_e0;
  FUN_109b32fd4(1,&uStack_2f0,&uStack_238,&uStack_250,&uStack_2c8,1,0,&uStack_2b0);
  uStack_238 = 0x4000000000000000;
  uStack_2b0 = 0xc1020006;
  uStack_2a0 = 1;
  uStack_29c = 1;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x1010000);
  puStack_2e8 = (undefined8 *)&uStack_130;
  uStack_2e0 = 0;
  uStack_2a8 = &uStack_238;
  FUN_109a48a40(param_3,&uStack_2b0,&uStack_2f0);
  uStack_2b0 = 0x42ff0000;
  puStack_270 = &uStack_2a8;
  uStack_2a8._4_4_ = 0;
  uStack_2a0 = 0;
  iStack_2ac = 0;
  uStack_2a8._0_4_ = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_284 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_228 = 0;
  uStack_238._0_4_ = 0x1010000;
  uStack_250 = CONCAT44(uStack_250._4_4_,0x2010000);
  uStack_240 = 0;
  uStack_2b8 = 0;
  uStack_2c8._0_4_ = 0x1010000;
  puStack_2c0 = &uStack_d0;
  puStack_2e8 = (undefined8 *)0x7fefffffffffffff;
  uStack_2f0 = 0x7fefffffffffffff;
  uStack_2d8 = 0x7fefffffffffffff;
  uStack_2e0 = 0x7fefffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  puStack_268 = &uStack_260;
  puStack_248 = (undefined8 *)&uStack_2b0;
  puStack_230 = param_4;
  FUN_109b32fd4(0,&uStack_238,&uStack_250,&uStack_2c8,&uStack_138,1,0,&uStack_2f0);
  uStack_250 = 0x4008000000000000;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xc1020006);
  uStack_2e0 = 0x100000001;
  uStack_238._0_4_ = 0x1010000;
  uStack_228 = 0;
  puStack_2e8 = &uStack_250;
  puStack_230 = (undefined8 *)&uStack_2b0;
  FUN_109a48a40(param_3,&uStack_2f0,&uStack_238);
  uStack_228 = 0;
  uStack_238._0_4_ = 0x1010000;
  uStack_250 = CONCAT44(uStack_250._4_4_,0x2010000);
  uStack_240 = 0;
  uStack_2b8 = 0;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,0x1010000);
  puStack_2c0 = &uStack_d0;
  puStack_2e8 = (undefined8 *)0x7fefffffffffffff;
  uStack_2f0 = 0x7fefffffffffffff;
  uStack_2d8 = 0x7fefffffffffffff;
  uStack_2e0 = 0x7fefffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  puStack_248 = (undefined8 *)&uStack_2b0;
  puStack_230 = (undefined8 *)&uStack_2b0;
  FUN_109b32fd4(0,&uStack_238,&uStack_250,&uStack_2c8,&uStack_138,1,0,&uStack_2f0);
  uStack_250 = 0x3ff0000000000000;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xc1020006);
  uStack_2e0 = 0x100000001;
  uStack_238 = CONCAT44(uStack_238._4_4_,0x1010000);
  puStack_230 = (undefined8 *)&uStack_2b0;
  uStack_228 = 0;
  puStack_2e8 = &uStack_250;
  FUN_109a48a40(param_3,&uStack_2f0,&uStack_238);
  if (lStack_278 != 0) {
    piVar1 = (int *)(lStack_278 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b0);
    }
  }
  lStack_278 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  if (0 < iStack_2ac) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_270 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_2ac);
  }
  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
    _free(puStack_268[-1]);
  }
  if (lStack_f8 != 0) {
    piVar1 = (int *)(lStack_f8 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
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
  if (0 < iStack_12c) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_f0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_12c);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_d0._4_4_);
  }
  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_88 + -8));
  }
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  if (0 < uStack_220._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_1e0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_220._4_4_);
  }
  if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  uStack_220 = &lStack_1b8;
  puVar8 = &uStack_220;
  FUN_109196360(puVar8);
  if (lStack_168 != 0) {
    piVar1 = (int *)(lStack_168 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 + -1 == 0) {
      puVar8 = (undefined8 *)&uStack_1a0;
      func_0x000109a848d4(puVar8);
    }
  }
  lStack_168 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (0 < iStack_19c) {
    lVar7 = 0;
    do {
      puStack_160[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_19c);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)puStack_158[-1];
    _free(puVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      func_0x000104bd46a0(puVar8);
      func_0x00010567aa40(&uStack_220);
      uStack_220 = &lStack_1b8;
      FUN_109196360(&uStack_220);
      func_0x00010567aa40(&uStack_1a0);
    }
    do {
      __Unwind_Resume(puVar8);
    } while( true );
  }
  return;
}



/* Entry: 10919aed0; end: 10919bd23;  */

void FUN_10919aed0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  double dVar16;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  long lStack_280;
  undefined1 *puStack_278;
  undefined1 auStack_270 [24];
  undefined8 uStack_258;
  undefined4 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 *puStack_238;
  undefined8 uStack_230;
  undefined4 auStack_228 [2];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
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
  long lStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar10 = *param_4;
  uVar14 = NEON_smax(uVar10,0x3200000032,4);
  iVar13 = (int)uVar14 + -0x32;
  iVar15 = (int)((ulong)uVar14 >> 0x20) + -0x32;
  uStack_90 = CONCAT44(iVar15,iVar13);
  iVar11 = (int)param_4[1];
  iVar12 = (int)((ulong)param_4[1] >> 0x20);
  uVar14 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  uVar10 = NEON_smin(uVar14,CONCAT44((int)((ulong)uVar10 >> 0x20) + iVar12 + 0x32,
                                     (int)uVar10 + iVar11 + 0x32),4);
  uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20) - iVar15,(int)uVar10 - iVar13);
  uStack_f0 = 0x42ff0000;
  uVar9 = (ulong)&uStack_f0 | 8;
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
  uStack_150._0_4_ = 0x42ff0000;
  uVar8 = (ulong)&uStack_150 | 8;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_150._4_4_ = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  dVar16 = SQRT((double)*(int *)(param_1 + 0x10) / (double)(iVar11 * iVar12));
  uStack_110 = uVar8;
  puStack_108 = &uStack_100;
  uStack_b0 = uVar9;
  puStack_a8 = &uStack_a0;
  uStack_88 = uVar10;
  if ((1.0 <= dVar16) || (*(int *)(param_1 + 8) == 0)) {
    FUN_109a852c8(&uStack_1b0,param_2,&uStack_90);
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    if (0 < iStack_ec) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_b0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_ec);
    }
    uStack_e8 = (undefined4)uStack_1a8;
    uStack_e4 = uStack_1a8._4_4_;
    uStack_f0 = uStack_1b0;
    iStack_ec = iStack_1ac;
    uStack_d8 = uStack_198;
    uStack_d4 = uStack_194;
    uStack_e0 = uStack_1a0;
    uStack_dc = uStack_19c;
    uStack_c8 = uStack_188;
    uStack_c4 = uStack_184;
    uStack_d0 = uStack_190;
    uStack_cc = uStack_18c;
    lStack_b8 = lStack_178;
    uStack_c0 = uStack_180;
    uStack_bc = uStack_17c;
    uVar7 = uStack_b0;
    puVar6 = puStack_a8;
    if ((puStack_a8 != &uStack_a0) &&
       (uVar7 = uVar9, puVar6 = &uStack_a0, puStack_a8 != (undefined8 *)0x0)) {
      _free(puStack_a8[-1]);
    }
    puStack_a8 = puVar6;
    uStack_b0 = uVar7;
    if (iStack_1ac < 3) {
      puVar6 = (undefined8 *)((ulong)&uStack_1b0 | 4);
      *puStack_a8 = *puStack_168;
      puStack_a8[1] = puStack_168[1];
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_168 != &uStack_160) {
        _free(puStack_168[-1]);
      }
    }
    else {
      uStack_b0 = (ulong)puStack_170;
      puStack_a8 = puStack_168;
    }
    FUN_109a852c8(&uStack_1b0,param_3,&uStack_90);
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    if (0 < uStack_150._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_110 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_150._4_4_);
    }
    uStack_148 = (undefined4)uStack_1a8;
    uStack_144 = uStack_1a8._4_4_;
    uStack_150._0_4_ = uStack_1b0;
    uStack_150._4_4_ = iStack_1ac;
    uStack_138 = uStack_198;
    uStack_134 = uStack_194;
    uStack_140 = uStack_1a0;
    uStack_13c = uStack_19c;
    uStack_128 = uStack_188;
    uStack_124 = uStack_184;
    uStack_130 = uStack_190;
    uStack_12c = uStack_18c;
    lStack_118 = lStack_178;
    uStack_120 = uStack_180;
    uStack_11c = uStack_17c;
    uVar9 = uStack_110;
    puVar6 = puStack_108;
    if ((puStack_108 != &uStack_100) &&
       (uVar9 = uVar8, puVar6 = &uStack_100, puStack_108 != (undefined8 *)0x0)) {
      _free(puStack_108[-1]);
    }
    puStack_108 = puVar6;
    uStack_110 = uVar9;
    if (iStack_1ac < 3) {
      puVar6 = (undefined8 *)((ulong)&uStack_1b0 | 4);
      *puStack_108 = *puStack_168;
      puStack_108[1] = puStack_168[1];
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_168 != &uStack_160) {
        _free(puStack_168[-1]);
      }
    }
    else {
      uStack_110 = (ulong)puStack_170;
      puStack_108 = puStack_168;
    }
  }
  else {
    FUN_109a852c8(&uStack_210,param_2,&uStack_90);
    uStack_1b0 = 0x42ff0000;
    uStack_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    iStack_1ac = 0;
    uStack_1a8._0_4_ = 0;
    uVar7 = (ulong)&uStack_1b0 | 8;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x2010000);
    uStack_2b0 = 0;
    puStack_2b8 = (undefined8 *)&uStack_1b0;
    puStack_170 = (undefined8 *)uVar7;
    puStack_168 = &uStack_160;
    FUN_109a479a0(&uStack_210,&uStack_2c0);
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_f0);
      }
    }
    if (0 < iStack_ec) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_b0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_ec);
    }
    uStack_e8 = (undefined4)uStack_1a8;
    uStack_e4 = uStack_1a8._4_4_;
    uStack_f0 = uStack_1b0;
    iStack_ec = iStack_1ac;
    uStack_d8 = uStack_198;
    uStack_d4 = uStack_194;
    uStack_e0 = uStack_1a0;
    uStack_dc = uStack_19c;
    uStack_c8 = uStack_188;
    uStack_c4 = uStack_184;
    uStack_d0 = uStack_190;
    uStack_cc = uStack_18c;
    lStack_b8 = lStack_178;
    uStack_c0 = uStack_180;
    uStack_bc = uStack_17c;
    uVar4 = uStack_b0;
    puVar6 = puStack_a8;
    if ((puStack_a8 != &uStack_a0) &&
       (uVar4 = uVar9, puVar6 = &uStack_a0, puStack_a8 != (undefined8 *)0x0)) {
      _free(puStack_a8[-1]);
    }
    puStack_a8 = puVar6;
    uStack_b0 = uVar4;
    puVar6 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    if (iStack_1ac < 3) {
      *puStack_a8 = *puStack_168;
      puStack_a8[1] = puStack_168[1];
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_168 != &uStack_160) {
        _free(puStack_168[-1]);
      }
    }
    else {
      uStack_b0 = (ulong)puStack_170;
      puStack_a8 = puStack_168;
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      puStack_170 = (undefined8 *)uVar7;
      puStack_168 = &uStack_160;
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < uStack_210._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)puStack_1d0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_210._4_4_);
    }
    if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
      _free(puStack_1c8[-1]);
    }
    FUN_109a852c8(&uStack_210,param_3,&uStack_90);
    uStack_1b0 = 0x42ff0000;
    uStack_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    iStack_1ac = 0;
    uStack_1a8._0_4_ = 0;
    uVar9 = (ulong)&uStack_1b0 | 8;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x2010000);
    uStack_2b0 = 0;
    puStack_2b8 = (undefined8 *)&uStack_1b0;
    puStack_170 = (undefined8 *)uVar9;
    puStack_168 = &uStack_160;
    FUN_109a479a0(&uStack_210,&uStack_2c0);
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_150);
      }
    }
    if (0 < uStack_150._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_110 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_150._4_4_);
    }
    uStack_148 = (undefined4)uStack_1a8;
    uStack_144 = uStack_1a8._4_4_;
    uStack_150._0_4_ = uStack_1b0;
    uStack_150._4_4_ = iStack_1ac;
    uStack_138 = uStack_198;
    uStack_134 = uStack_194;
    uStack_140 = uStack_1a0;
    uStack_13c = uStack_19c;
    uStack_128 = uStack_188;
    uStack_124 = uStack_184;
    uStack_130 = uStack_190;
    uStack_12c = uStack_18c;
    lStack_118 = lStack_178;
    uStack_120 = uStack_180;
    uStack_11c = uStack_17c;
    uVar7 = uStack_110;
    puVar6 = puStack_108;
    if ((puStack_108 != &uStack_100) &&
       (uVar7 = uVar8, puVar6 = &uStack_100, puStack_108 != (undefined8 *)0x0)) {
      _free(puStack_108[-1]);
    }
    puStack_108 = puVar6;
    uStack_110 = uVar7;
    puVar6 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    if (iStack_1ac < 3) {
      *puStack_108 = *puStack_168;
      puStack_108[1] = puStack_168[1];
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_168 != &uStack_160) {
        _free(puStack_168[-1]);
      }
    }
    else {
      uStack_110 = (ulong)puStack_170;
      puStack_108 = puStack_168;
      uStack_1b0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      puStack_170 = (undefined8 *)uVar9;
      puStack_168 = &uStack_160;
    }
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    if (0 < uStack_210._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)puStack_1d0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_210._4_4_);
    }
    if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
      _free(puStack_1c8[-1]);
    }
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1b0 = 0x1010000;
    uStack_1a8 = (undefined8 *)&uStack_f0;
    uStack_210._0_4_ = 0x2010000;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_2c0 = 0;
    uStack_208 = uStack_1a8;
    FUN_109b0f718(dVar16,dVar16,&uStack_1b0,&uStack_210,&uStack_2c0,1);
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1b0 = 0x1010000;
    uStack_1a8 = &uStack_150;
    uStack_210._0_4_ = 0x2010000;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_2c0 = 0;
    uStack_208 = uStack_1a8;
    FUN_109b0f718(dVar16,dVar16,&uStack_1b0,&uStack_210,&uStack_2c0,0);
  }
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x1010000);
  puStack_2b8 = (undefined8 *)&uStack_f0;
  uStack_2b0 = 0;
  auStack_228[0] = 0x3010000;
  puStack_220 = &uStack_150;
  uStack_218 = 0;
  uStack_1b0 = 0x42ff0000;
  puStack_238 = &uStack_1b0;
  puStack_170 = &uStack_1a8;
  uStack_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  iStack_1ac = 0;
  uStack_1a8._0_4_ = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_240 = CONCAT44(uStack_240._4_4_,0xc3010000);
  uStack_230 = 0;
  uStack_210._0_4_ = 0x42ff0000;
  puStack_250 = (undefined4 *)&uStack_210;
  puStack_1d0 = &uStack_208;
  uStack_208._4_4_ = 0;
  uStack_200 = 0;
  uStack_210._4_4_ = 0;
  uStack_208._0_4_ = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_258 = CONCAT44(uStack_258._4_4_,0xc3010000);
  uStack_248 = 0;
  puStack_1c8 = &uStack_1c0;
  puStack_168 = &uStack_160;
  FUN_109196f5c(&uStack_2c0,auStack_228,&uStack_240,&uStack_258);
  if (lStack_1d8 != 0) {
    piVar1 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (0 < uStack_210._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_1d0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_210._4_4_);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  if (lStack_178 != 0) {
    piVar1 = (int *)(lStack_178 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_1b0);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (0 < iStack_1ac) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_170 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1ac);
  }
  if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
    _free(puStack_168[-1]);
  }
  uStack_1b0 = 0x42ff0000;
  uStack_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  iStack_1ac = 0;
  uStack_1a8._0_4_ = 0;
  puStack_238 = &uStack_1b0;
  puStack_170 = &uStack_1a8;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_210._0_4_ = 0x42ff0000;
  puStack_1d0 = &uStack_208;
  uStack_208._4_4_ = 0;
  uStack_200 = 0;
  uStack_210._4_4_ = 0;
  uStack_208._0_4_ = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1e4 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_2c0._0_4_ = 0x1010000;
  uStack_2b0 = 0;
  uStack_258 = 0x4008000000000000;
  auStack_228[0] = 0xc1020006;
  uStack_218 = 0x100000001;
  uStack_240._0_4_ = 0x2010000;
  uStack_230 = 0;
  puStack_2b8 = &uStack_150;
  puStack_220 = &uStack_258;
  puStack_1c8 = &uStack_1c0;
  puStack_168 = &uStack_160;
  FUN_109a2b294(&uStack_2c0,auStack_228,&uStack_240,0);
  uStack_2b0 = 0;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,0x1010000);
  uStack_258 = 0x3ff0000000000000;
  auStack_228[0] = 0xc1020006;
  uStack_218 = 0x100000001;
  uStack_240 = CONCAT44(uStack_240._4_4_,0x2010000);
  uStack_230 = 0;
  puVar6 = &uStack_2c0;
  puStack_2b8 = &uStack_150;
  puStack_238 = (undefined4 *)&uStack_210;
  puStack_220 = &uStack_258;
  FUN_109a2b294(puVar6,auStack_228,&uStack_240,0);
  puStack_2b8 = (undefined8 *)0x0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  auStack_228[0] = 0xc1020006;
  uStack_218 = 0x400000001;
  puStack_220 = &uStack_2c0;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_150,auStack_228,puVar6);
  uStack_240 = 0x406fe00000000000;
  uStack_2c0._0_4_ = 0xc1020006;
  uStack_2b0 = 0x100000001;
  auStack_228[0] = 0x1010000;
  puStack_220 = (undefined8 *)&uStack_1b0;
  uStack_218 = 0;
  puStack_2b8 = &uStack_240;
  FUN_109a48a40(&uStack_150,&uStack_2c0,auStack_228);
  uStack_240 = 0x406fe00000000000;
  uStack_2c0._0_4_ = 0xc1020006;
  uStack_2b0 = 0x100000001;
  auStack_228[0] = 0x1010000;
  puStack_220 = &uStack_210;
  uStack_218 = 0;
  puStack_2b8 = &uStack_240;
  FUN_109a48a40(&uStack_150,&uStack_2c0,auStack_228);
  if ((dVar16 < 1.0) && (*(int *)(param_1 + 8) != 0)) {
    uStack_2c0._0_4_ = 0x1010000;
    puStack_2b8 = &uStack_150;
    uStack_2b0 = 0;
    auStack_228[0] = 0x2010000;
    uStack_218 = 0;
    uStack_240 = uVar10;
    puStack_220 = puStack_2b8;
    FUN_109b0f718(0,0,&uStack_2c0,auStack_228,&uStack_240,0);
    FUN_109a852c8(&uStack_2c0,param_3,&uStack_90);
    auStack_228[0] = 0xc2010000;
    uStack_218 = 0;
    puStack_220 = &uStack_2c0;
    FUN_109a479a0(&uStack_150,auStack_228);
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_2c0);
      }
    }
    lStack_288 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    if (0 < uStack_2c0._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_280 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_2c0._4_4_);
    }
    if (puStack_278 != auStack_270 && puStack_278 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_278 + -8));
    }
  }
  if (lStack_1d8 != 0) {
    piVar1 = (int *)(lStack_1d8 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  lStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (0 < uStack_210._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_1d0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_210._4_4_);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  if (lStack_178 != 0) {
    piVar1 = (int *)(lStack_178 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_1b0);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (0 < iStack_1ac) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_170 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1ac);
  }
  if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
    _free(puStack_168[-1]);
  }
  if (lStack_118 != 0) {
    piVar1 = (int *)(lStack_118 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  lStack_118 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  if (0 < uStack_150._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  lStack_b8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (0 < iStack_ec) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uStack_b0 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_ec);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
  }
  return;
}



/* Entry: 10919bd24; end: 10919beef;  */

long * FUN_10919bd24(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long **pplVar5;
  long **pplVar6;
  double *pdVar7;
  long *plVar8;
  undefined4 *extraout_x8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uStack_4b0;
  undefined4 auStack_4a8 [4];
  undefined8 uStack_498;
  undefined4 auStack_490 [4];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
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
  long lStack_430;
  undefined4 *puStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined4 uStack_3fc;
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
  long lStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  int iStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
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
  long lStack_370;
  undefined4 *puStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_344;
  undefined4 uStack_33c;
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
  long lStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [4];
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  long lStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double dStack_218;
  undefined1 auStack_210 [8];
  undefined4 auStack_208 [2];
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  undefined4 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [4];
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
  long lStack_140;
  undefined1 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  pplVar5 = &plStack_90;
  pplVar6 = &plStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  plStack_90 = (long *)CONCAT44(plStack_90._4_4_,0x3010000);
  uStack_80 = 0;
  uStack_60 = 0x8204000c;
  plStack_58 = &lStack_48;
  uStack_50 = 0;
  uStack_88 = param_2;
  FUN_109a91d90();
  lStack_30 = 0;
  plVar8 = (long *)&uStack_60;
  FUN_109adf8b0(&plStack_90,plVar8,param_1,0,1,&lStack_30);
  if (lStack_40 - lStack_48 == 0) {
LAB_10919be88:
    plVar12 = (long *)0x0;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    plVar12 = (long *)(lStack_48 + 8);
    iVar13 = -1;
    do {
      uVar11 = *plVar12 - plVar12[-1] >> 3;
      iVar14 = (int)lVar9;
      if (uVar11 <= uVar10) {
        iVar14 = iVar13;
        uVar11 = uVar10;
      }
      uVar10 = uVar11;
      lVar9 = lVar9 + 1;
      plVar12 = plVar12 + 3;
      iVar13 = iVar14;
    } while ((lStack_40 - lStack_48 >> 3) * -0x5555555555555555 - lVar9 != 0);
    if (iVar14 == -1) goto LAB_10919be88;
    plVar8 = (long *)(lStack_48 + (long)iVar14 * 0x18);
    lStack_30 = *plVar8;
    uStack_88 = 0;
    plStack_90 = (long *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_64 = (undefined4)((ulong)(plVar8[1] - lStack_30) >> 3);
    _uStack_60 = CONCAT44(uStack_5c,0xc1020006);
    uStack_50 = 0x400000001;
    plStack_58 = (long *)&plStack_90;
    FUN_109a91d90();
    FUN_109a48a40(param_2,&uStack_60,pplVar5);
    plStack_90 = (long *)0x406fe00000000000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    plVar8 = &lStack_30;
    param_1 = (long *)&uStack_64;
    FUN_109aef27c(param_2,plVar8,param_1,1,&plStack_90,8,0,&uStack_60);
    plVar12 = (long *)0x1;
  }
  plStack_90 = &lStack_48;
  FUN_109196360();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar12;
  }
  ___stack_chk_fail();
  plStack_90 = &lStack_48;
  FUN_109196360(&plStack_90);
  __Unwind_Resume(pplVar6);
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_178._0_4_ = 0x42ff0000;
  plStack_110 = (long *)auStack_178;
  uStack_16c = 0;
  uStack_168 = 0;
  stack0xfffffffffffffe8c = 0;
  puStack_138 = auStack_170;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_14c = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  lStack_140 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_1d0 = SUB84(plVar8,0);
  uStack_1cc = (undefined4)((ulong)plVar8 >> 0x20);
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1d8 = 0x1010000;
  lStack_118 = CONCAT44(lStack_118._4_4_,0x2010000);
  uStack_108 = 0;
  uStack_1f0 = 0x1500000015;
  puStack_130 = &uStack_128;
  FUN_109b44a6c(0,0,&uStack_1d8,&lStack_118,&uStack_1f0,4);
  uStack_1d8 = 0x42ff0000;
  puStack_198 = &uStack_1d0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  iStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1ac = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  lStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  lStack_118 = 0x10000000001;
  puStack_190 = &uStack_188;
  FUN_109a83fd0(&uStack_1d8,2,&lStack_118,0);
  lVar9 = 0;
  iVar15 = 0xe;
  iVar16 = 0xf;
  iVar13 = 0xc;
  iVar14 = 0xd;
  iVar19 = 10;
  iVar20 = 0xb;
  iVar17 = 8;
  iVar18 = 9;
  iVar23 = 6;
  iVar24 = 7;
  iVar21 = 4;
  iVar22 = 5;
  iVar27 = 2;
  iVar28 = 3;
  iVar25 = 0;
  iVar26 = 1;
  do {
    auVar30._0_4_ = iVar21 + -0x66;
    auVar30._4_4_ = iVar22 + -0x66;
    auVar30._8_4_ = iVar23 + -0x66;
    auVar30._12_4_ = iVar24 + -0x66;
    auVar31._0_4_ = iVar25 + -0x66;
    auVar31._4_4_ = iVar26 + -0x66;
    auVar31._8_4_ = iVar27 + -0x66;
    auVar31._12_4_ = iVar28 + -0x66;
    auVar35._0_4_ = iVar13 + -0x66;
    auVar35._4_4_ = iVar14 + -0x66;
    auVar35._8_4_ = iVar15 + -0x66;
    auVar35._12_4_ = iVar16 + -0x66;
    auVar40._0_4_ = iVar17 + -0x66;
    auVar40._4_4_ = iVar18 + -0x66;
    auVar40._8_4_ = iVar19 + -0x66;
    auVar40._12_4_ = iVar20 + -0x66;
    auVar41 = NEON_scvtf(auVar40,4);
    auVar36 = NEON_scvtf(auVar35,4);
    auVar32 = NEON_scvtf(auVar31,4);
    auVar29 = NEON_scvtf(auVar30,4);
    auVar42._0_4_ = (auVar41._0_4_ / 51.0) * 255.0;
    auVar42._4_4_ = (auVar41._4_4_ / 51.0) * 255.0;
    auVar42._8_4_ = (auVar41._8_4_ / 51.0) * 255.0;
    auVar42._12_4_ = (auVar41._12_4_ / 51.0) * 255.0;
    auVar37._0_4_ = (auVar36._0_4_ / 51.0) * 255.0;
    auVar37._4_4_ = (auVar36._4_4_ / 51.0) * 255.0;
    auVar37._8_4_ = (auVar36._8_4_ / 51.0) * 255.0;
    auVar37._12_4_ = (auVar36._12_4_ / 51.0) * 255.0;
    auVar33._0_4_ = (auVar32._0_4_ / 51.0) * 255.0;
    auVar33._4_4_ = (auVar32._4_4_ / 51.0) * 255.0;
    auVar33._8_4_ = (auVar32._8_4_ / 51.0) * 255.0;
    auVar33._12_4_ = (auVar32._12_4_ / 51.0) * 255.0;
    auVar39._0_4_ = (auVar29._0_4_ / 51.0) * 255.0;
    auVar39._4_4_ = (auVar29._4_4_ / 51.0) * 255.0;
    auVar39._8_4_ = (auVar29._8_4_ / 51.0) * 255.0;
    auVar39._12_4_ = (auVar29._12_4_ / 51.0) * 255.0;
    auVar29 = NEON_ext(auVar39,auVar39,8,1);
    auVar32 = NEON_ext(auVar33,auVar33,8,1);
    auVar36 = NEON_ext(auVar37,auVar37,8,1);
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    auVar43._4_4_ = (int)(long)(float)(int)auVar42._4_4_;
    auVar43._0_4_ = (int)(long)(float)(int)auVar42._0_4_;
    auVar43._8_4_ = (int)(long)(float)(int)auVar41._0_4_;
    auVar43._12_4_ = (int)(long)(float)(int)auVar41._4_4_;
    auVar38._4_4_ = (int)(long)(float)(int)auVar37._4_4_;
    auVar38._0_4_ = (int)(long)(float)(int)auVar37._0_4_;
    auVar38._8_4_ = (int)(long)(float)(int)auVar36._0_4_;
    auVar38._12_4_ = (int)(long)(float)(int)auVar36._4_4_;
    auVar34._4_4_ = (int)(long)(float)(int)auVar33._4_4_;
    auVar34._0_4_ = (int)(long)(float)(int)auVar33._0_4_;
    auVar34._8_4_ = (int)(long)(float)(int)auVar32._0_4_;
    auVar34._12_4_ = (int)(long)(float)(int)auVar32._4_4_;
    auVar44._4_4_ = (int)(long)(float)(int)auVar39._4_4_;
    auVar44._0_4_ = (int)(long)(float)(int)auVar39._0_4_;
    auVar44._8_4_ = (int)(long)(float)(int)auVar29._0_4_;
    auVar44._12_4_ = (int)(long)(float)(int)auVar29._4_4_;
    auVar30 = NEON_smax(auVar44,ZEXT216(0),4);
    auVar41 = NEON_smax(auVar34,ZEXT216(0),4);
    auVar36 = NEON_smax(auVar38,ZEXT216(0),4);
    auVar32 = NEON_smax(auVar43,ZEXT216(0),4);
    auVar29._8_8_ = 0xff000000ff;
    auVar29._0_8_ = 0xff000000ff;
    auVar44 = NEON_smin(auVar32,auVar29,4);
    auVar32._8_8_ = 0xff000000ff;
    auVar32._0_8_ = 0xff000000ff;
    auVar39 = NEON_smin(auVar36,auVar32,4);
    auVar36._8_8_ = 0xff000000ff;
    auVar36._0_8_ = 0xff000000ff;
    auVar32 = NEON_smin(auVar41,auVar36,4);
    auVar41._8_8_ = 0xff000000ff;
    auVar41._0_8_ = 0xff000000ff;
    auVar29 = NEON_smin(auVar30,auVar41,4);
    puVar4 = (undefined1 *)(CONCAT44(uStack_1c4,uStack_1c8) + lVar9);
    puVar4[8] = auVar44[0];
    puVar4[9] = auVar44[4];
    puVar4[10] = auVar44[8];
    puVar4[0xb] = auVar44[0xc];
    puVar4[0xc] = auVar39[0];
    puVar4[0xd] = auVar39[4];
    puVar4[0xe] = auVar39[8];
    puVar4[0xf] = auVar39[0xc];
    *puVar4 = auVar32[0];
    puVar4[1] = auVar32[4];
    puVar4[2] = auVar32[8];
    puVar4[3] = auVar32[0xc];
    puVar4[4] = auVar29[0];
    puVar4[5] = auVar29[4];
    puVar4[6] = auVar29[8];
    puVar4[7] = auVar29[0xc];
    lVar9 = lVar9 + 0x10;
    iVar25 = iVar25 + 0x10;
    iVar26 = iVar26 + 0x10;
    iVar27 = iVar27 + 0x10;
    iVar28 = iVar28 + 0x10;
    iVar21 = iVar21 + 0x10;
    iVar22 = iVar22 + 0x10;
    iVar23 = iVar23 + 0x10;
    iVar24 = iVar24 + 0x10;
    iVar17 = iVar17 + 0x10;
    iVar18 = iVar18 + 0x10;
    iVar19 = iVar19 + 0x10;
    iVar20 = iVar20 + 0x10;
    iVar13 = iVar13 + 0x10;
    iVar14 = iVar14 + 0x10;
    iVar15 = iVar15 + 0x10;
    iVar16 = iVar16 + 0x10;
  } while (lVar9 != 0x100);
  lStack_118._0_4_ = 0x2010000;
  uStack_108 = 0;
  plStack_110 = param_1;
  FUN_109a479a0(auStack_178,&lStack_118);
  uStack_108 = 0;
  lStack_118._0_4_ = 0x1010000;
  uStack_1e0 = 0;
  uStack_1f0._0_4_ = 0x1010000;
  plStack_1e8 = (long *)&uStack_1d8;
  auStack_208[0] = 0x2010000;
  uStack_1f8 = 0;
  plStack_200 = param_1;
  plStack_110 = (long *)auStack_178;
  FUN_109a41f20(&lStack_118,&uStack_1f0,auStack_208);
  uStack_108 = 0;
  lStack_118 = CONCAT44(lStack_118._4_4_,0x1010000);
  plStack_110 = param_1;
  FUN_109a91d90();
  plVar12 = &lStack_118;
  iVar13 = (int)auStack_210;
  pdVar7 = &dStack_218;
  FUN_109ab9538();
  if (dStack_218 == 0.0) {
    lStack_118 = 0x406fe00000000000;
    plStack_110 = (long *)0x0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_1f0._0_4_ = 0xc1020006;
    plStack_1e8 = &lStack_118;
    uStack_1e0 = 0x400000001;
    uStack_1f8 = 0;
    auStack_208[0] = 0x1010000;
    iVar13 = (int)&uStack_1f0;
    pdVar7 = (double *)auStack_208;
    plStack_200 = plVar8;
    FUN_109a48a40();
    plVar12 = param_1;
  }
  if (lStack_1a0 != 0) {
    piVar1 = (int *)(lStack_1a0 + 0x14);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      plVar12 = (long *)&uStack_1d8;
      func_0x000109a848d4();
    }
  }
  lStack_1a0 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  if (0 < iStack_1d4) {
    lVar9 = 0;
    do {
      puStack_198[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_1d4);
  }
  if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
    plVar12 = (long *)puStack_190[-1];
    _free();
  }
  if (lStack_140 != 0) {
    piVar1 = (int *)(lStack_140 + 0x14);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      plVar12 = (long *)auStack_178;
      func_0x000109a848d4();
    }
  }
  lStack_140 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  if (0 < (int)auStack_178._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(puStack_138 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)auStack_178._4_4_);
  }
  if (puStack_130 != &uStack_128 && puStack_130 != (undefined8 *)0x0) {
    plVar12 = (long *)puStack_130[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return plVar12;
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_1d8);
    func_0x00010567aa40(auStack_178);
  }
  __Unwind_Resume();
  auStack_2e8._0_4_ = 0x42ff0000;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  stack0xfffffffffffffd1c = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2bc = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  lStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  puStack_2a8 = auStack_2e0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_348 = 0x42ff0000;
  lStack_308 = (long)&uStack_344 + 4;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_344 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_31c = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  lStack_310 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  puStack_300 = &uStack_2f8;
  puStack_2a0 = &uStack_298;
  FUN_109199f7c();
  uStack_3a8 = 0x42ff0000;
  puStack_368 = &uStack_3a0;
  uStack_39c = 0;
  uStack_398 = 0;
  iStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_38c = 0;
  uStack_388 = 0;
  uStack_394 = 0;
  uStack_390 = 0;
  uStack_37c = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  lStack_370 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_408 = 0x42ff0000;
  lStack_3c8 = (long)&uStack_404 + 4;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  uStack_404 = 0;
  uStack_3ec = 0;
  uStack_3e8 = 0;
  uStack_3f4 = 0;
  uStack_3f0 = 0;
  uStack_3dc = 0;
  uStack_3e4 = 0;
  uStack_3e0 = 0;
  lStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3d4 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_468 = 0x42ff0000;
  puStack_428 = &uStack_460;
  uStack_45c = 0;
  uStack_458 = 0;
  iStack_464 = 0;
  uStack_460 = 0;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_43c = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  lStack_430 = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  puStack_420 = &uStack_418;
  puStack_3c0 = &uStack_3b8;
  puStack_360 = &uStack_358;
  FUN_10919a408();
  FUN_10919aed0(plVar12,auStack_2e8,&uStack_3a8,&uStack_478);
  FUN_10919bd24();
  if (((ulong)plVar12 & 1) != 0) goto LAB_10919c5b4;
  if (lStack_430 != 0) {
    piVar1 = (int *)(lStack_430 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_370 != 0) {
    piVar1 = (int *)(lStack_370 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_3a8);
    }
  }
  lStack_370 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  if (iStack_3a4 < 1) {
LAB_10919c560:
    uStack_3a8 = uStack_468;
    if (2 < iStack_464) goto LAB_10919c594;
    iStack_3a4 = iStack_464;
    uStack_3a0 = uStack_460;
    uStack_39c = uStack_45c;
    *puStack_360 = *puStack_420;
    puStack_360[1] = puStack_420[1];
  }
  else {
    lVar9 = 0;
    do {
      puStack_368[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_3a4);
    if (iStack_3a4 < 3) goto LAB_10919c560;
LAB_10919c594:
    uStack_3a8 = uStack_468;
    func_0x000109a84868(&uStack_3a8,&uStack_468);
  }
  uStack_390 = uStack_450;
  uStack_38c = uStack_44c;
  uStack_398 = uStack_458;
  uStack_394 = uStack_454;
  uStack_380 = uStack_440;
  uStack_37c = uStack_43c;
  uStack_388 = uStack_448;
  uStack_384 = uStack_444;
  lStack_370 = lStack_430;
  uStack_378 = uStack_438;
  uStack_374 = uStack_434;
LAB_10919c5b4:
  *extraout_x8 = 0x42ff0000;
  *(undefined8 *)(extraout_x8 + 3) = 0;
  *(undefined8 *)(extraout_x8 + 1) = 0;
  *(undefined8 *)(extraout_x8 + 7) = 0;
  *(undefined8 *)(extraout_x8 + 5) = 0;
  *(undefined8 *)(extraout_x8 + 0xb) = 0;
  *(undefined8 *)(extraout_x8 + 9) = 0;
  *(undefined8 *)(extraout_x8 + 0xe) = 0;
  *(undefined8 *)(extraout_x8 + 0xc) = 0;
  *(undefined8 *)(extraout_x8 + 0x14) = 0;
  *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
  *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
  *(undefined8 *)(extraout_x8 + 0x16) = 0;
  FUN_10919bef0();
  uStack_480 = 0;
  auStack_490[0] = 0x1010000;
  auStack_4a8[0] = 0x2010000;
  uStack_498 = 0;
  uStack_4b0 = NEON_rev64(*(undefined8 *)pdVar7[8],4);
  plVar8 = (long *)auStack_490;
  FUN_109b0f718(0,0,plVar8,auStack_4a8,&uStack_4b0,1);
  if (lStack_430 != 0) {
    piVar1 = (int *)(lStack_430 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      plVar8 = (long *)&uStack_468;
      func_0x000109a848d4(plVar8);
    }
  }
  lStack_430 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_458 = 0;
  uStack_454 = 0;
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  if (0 < iStack_464) {
    lVar9 = 0;
    do {
      puStack_428[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_464);
  }
  if (puStack_420 != &uStack_418 && puStack_420 != (undefined8 *)0x0) {
    plVar8 = (long *)puStack_420[-1];
    _free(plVar8);
  }
  if (lStack_3d0 != 0) {
    piVar1 = (int *)(lStack_3d0 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      plVar8 = (long *)&uStack_408;
      func_0x000109a848d4(plVar8);
    }
  }
  lStack_3d0 = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3f8 = 0;
  uStack_3f4 = 0;
  uStack_3e0 = 0;
  uStack_3dc = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  if (0 < (int)uStack_404) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_3c8 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_404);
  }
  if (puStack_3c0 != &uStack_3b8 && puStack_3c0 != (undefined8 *)0x0) {
    plVar8 = (long *)puStack_3c0[-1];
    _free(plVar8);
  }
  if (lStack_370 != 0) {
    piVar1 = (int *)(lStack_370 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      plVar8 = (long *)&uStack_3a8;
      func_0x000109a848d4(plVar8);
    }
  }
  lStack_370 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  if (0 < iStack_3a4) {
    lVar9 = 0;
    do {
      puStack_368[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_3a4);
  }
  if (puStack_360 != &uStack_358 && puStack_360 != (undefined8 *)0x0) {
    plVar8 = (long *)puStack_360[-1];
    _free(plVar8);
  }
  if (lStack_310 != 0) {
    piVar1 = (int *)(lStack_310 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      plVar8 = (long *)&uStack_348;
      func_0x000109a848d4(plVar8);
    }
  }
  lStack_310 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  if (0 < (int)uStack_344) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_308 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_344);
  }
  if (puStack_300 != &uStack_2f8 && puStack_300 != (undefined8 *)0x0) {
    plVar8 = (long *)puStack_300[-1];
    _free(plVar8);
  }
  if (lStack_2b0 != 0) {
    piVar1 = (int *)(lStack_2b0 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      plVar8 = (long *)auStack_2e8;
      func_0x000109a848d4(plVar8);
    }
  }
  lStack_2b0 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  if (0 < (int)auStack_2e8._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(puStack_2a8 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)auStack_2e8._4_4_);
  }
  if (puStack_2a0 != &uStack_298 && puStack_2a0 != (undefined8 *)0x0) {
    plVar8 = (long *)puStack_2a0[-1];
    _free(plVar8);
  }
  return plVar8;
}



/* Entry: 10919bef0; end: 10919c37f;  */

void FUN_10919bef0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  long lVar7;
  undefined4 *extraout_x8;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_420;
  undefined4 auStack_418 [4];
  undefined8 uStack_408;
  undefined4 auStack_400 [4];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  int iStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  long lStack_3a0;
  undefined4 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_374;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long lStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  int iStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  long lStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  long lStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_254;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  long lStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  double dStack_188;
  undefined1 auStack_180 [8];
  undefined4 auStack_178 [2];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  int iStack_144;
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
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined4 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [4];
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
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_e8._0_4_ = 0x42ff0000;
  puStack_80 = (undefined8 *)auStack_e8;
  uStack_dc = 0;
  uStack_d8 = 0;
  stack0xffffffffffffff1c = 0;
  puStack_a8 = auStack_e0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_140 = SUB84(param_2,0);
  uStack_13c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_148 = 0x1010000;
  uStack_88 = CONCAT44(uStack_88._4_4_,0x2010000);
  uStack_78 = 0;
  uStack_160 = 0x1500000015;
  puStack_a0 = &uStack_98;
  FUN_109b44a6c(0,0,&uStack_148,&uStack_88,&uStack_160,4);
  uStack_148 = 0x42ff0000;
  puStack_108 = &uStack_140;
  uStack_13c = 0;
  uStack_138 = 0;
  iStack_144 = 0;
  uStack_140 = 0;
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
  uStack_88 = 0x10000000001;
  puStack_100 = &uStack_f8;
  FUN_109a83fd0(&uStack_148,2,&uStack_88,0);
  lVar7 = 0;
  iVar10 = 0xe;
  iVar11 = 0xf;
  iVar8 = 0xc;
  iVar9 = 0xd;
  iVar14 = 10;
  iVar15 = 0xb;
  iVar12 = 8;
  iVar13 = 9;
  iVar18 = 6;
  iVar19 = 7;
  iVar16 = 4;
  iVar17 = 5;
  iVar22 = 2;
  iVar23 = 3;
  iVar20 = 0;
  iVar21 = 1;
  do {
    auVar25._0_4_ = iVar16 + -0x66;
    auVar25._4_4_ = iVar17 + -0x66;
    auVar25._8_4_ = iVar18 + -0x66;
    auVar25._12_4_ = iVar19 + -0x66;
    auVar26._0_4_ = iVar20 + -0x66;
    auVar26._4_4_ = iVar21 + -0x66;
    auVar26._8_4_ = iVar22 + -0x66;
    auVar26._12_4_ = iVar23 + -0x66;
    auVar30._0_4_ = iVar8 + -0x66;
    auVar30._4_4_ = iVar9 + -0x66;
    auVar30._8_4_ = iVar10 + -0x66;
    auVar30._12_4_ = iVar11 + -0x66;
    auVar35._0_4_ = iVar12 + -0x66;
    auVar35._4_4_ = iVar13 + -0x66;
    auVar35._8_4_ = iVar14 + -0x66;
    auVar35._12_4_ = iVar15 + -0x66;
    auVar36 = NEON_scvtf(auVar35,4);
    auVar31 = NEON_scvtf(auVar30,4);
    auVar27 = NEON_scvtf(auVar26,4);
    auVar24 = NEON_scvtf(auVar25,4);
    auVar37._0_4_ = (auVar36._0_4_ / 51.0) * 255.0;
    auVar37._4_4_ = (auVar36._4_4_ / 51.0) * 255.0;
    auVar37._8_4_ = (auVar36._8_4_ / 51.0) * 255.0;
    auVar37._12_4_ = (auVar36._12_4_ / 51.0) * 255.0;
    auVar32._0_4_ = (auVar31._0_4_ / 51.0) * 255.0;
    auVar32._4_4_ = (auVar31._4_4_ / 51.0) * 255.0;
    auVar32._8_4_ = (auVar31._8_4_ / 51.0) * 255.0;
    auVar32._12_4_ = (auVar31._12_4_ / 51.0) * 255.0;
    auVar28._0_4_ = (auVar27._0_4_ / 51.0) * 255.0;
    auVar28._4_4_ = (auVar27._4_4_ / 51.0) * 255.0;
    auVar28._8_4_ = (auVar27._8_4_ / 51.0) * 255.0;
    auVar28._12_4_ = (auVar27._12_4_ / 51.0) * 255.0;
    auVar34._0_4_ = (auVar24._0_4_ / 51.0) * 255.0;
    auVar34._4_4_ = (auVar24._4_4_ / 51.0) * 255.0;
    auVar34._8_4_ = (auVar24._8_4_ / 51.0) * 255.0;
    auVar34._12_4_ = (auVar24._12_4_ / 51.0) * 255.0;
    auVar24 = NEON_ext(auVar34,auVar34,8,1);
    auVar27 = NEON_ext(auVar28,auVar28,8,1);
    auVar31 = NEON_ext(auVar32,auVar32,8,1);
    auVar36 = NEON_ext(auVar37,auVar37,8,1);
    auVar38._4_4_ = (int)(long)(float)(int)auVar37._4_4_;
    auVar38._0_4_ = (int)(long)(float)(int)auVar37._0_4_;
    auVar38._8_4_ = (int)(long)(float)(int)auVar36._0_4_;
    auVar38._12_4_ = (int)(long)(float)(int)auVar36._4_4_;
    auVar33._4_4_ = (int)(long)(float)(int)auVar32._4_4_;
    auVar33._0_4_ = (int)(long)(float)(int)auVar32._0_4_;
    auVar33._8_4_ = (int)(long)(float)(int)auVar31._0_4_;
    auVar33._12_4_ = (int)(long)(float)(int)auVar31._4_4_;
    auVar29._4_4_ = (int)(long)(float)(int)auVar28._4_4_;
    auVar29._0_4_ = (int)(long)(float)(int)auVar28._0_4_;
    auVar29._8_4_ = (int)(long)(float)(int)auVar27._0_4_;
    auVar29._12_4_ = (int)(long)(float)(int)auVar27._4_4_;
    auVar39._4_4_ = (int)(long)(float)(int)auVar34._4_4_;
    auVar39._0_4_ = (int)(long)(float)(int)auVar34._0_4_;
    auVar39._8_4_ = (int)(long)(float)(int)auVar24._0_4_;
    auVar39._12_4_ = (int)(long)(float)(int)auVar24._4_4_;
    auVar25 = NEON_smax(auVar39,ZEXT216(0),4);
    auVar36 = NEON_smax(auVar29,ZEXT216(0),4);
    auVar31 = NEON_smax(auVar33,ZEXT216(0),4);
    auVar27 = NEON_smax(auVar38,ZEXT216(0),4);
    auVar24._8_8_ = 0xff000000ff;
    auVar24._0_8_ = 0xff000000ff;
    auVar39 = NEON_smin(auVar27,auVar24,4);
    auVar27._8_8_ = 0xff000000ff;
    auVar27._0_8_ = 0xff000000ff;
    auVar34 = NEON_smin(auVar31,auVar27,4);
    auVar31._8_8_ = 0xff000000ff;
    auVar31._0_8_ = 0xff000000ff;
    auVar27 = NEON_smin(auVar36,auVar31,4);
    auVar36._8_8_ = 0xff000000ff;
    auVar36._0_8_ = 0xff000000ff;
    auVar24 = NEON_smin(auVar25,auVar36,4);
    puVar4 = (undefined1 *)(CONCAT44(uStack_134,uStack_138) + lVar7);
    puVar4[8] = auVar39[0];
    puVar4[9] = auVar39[4];
    puVar4[10] = auVar39[8];
    puVar4[0xb] = auVar39[0xc];
    puVar4[0xc] = auVar34[0];
    puVar4[0xd] = auVar34[4];
    puVar4[0xe] = auVar34[8];
    puVar4[0xf] = auVar34[0xc];
    *puVar4 = auVar27[0];
    puVar4[1] = auVar27[4];
    puVar4[2] = auVar27[8];
    puVar4[3] = auVar27[0xc];
    puVar4[4] = auVar24[0];
    puVar4[5] = auVar24[4];
    puVar4[6] = auVar24[8];
    puVar4[7] = auVar24[0xc];
    lVar7 = lVar7 + 0x10;
    iVar20 = iVar20 + 0x10;
    iVar21 = iVar21 + 0x10;
    iVar22 = iVar22 + 0x10;
    iVar23 = iVar23 + 0x10;
    iVar16 = iVar16 + 0x10;
    iVar17 = iVar17 + 0x10;
    iVar18 = iVar18 + 0x10;
    iVar19 = iVar19 + 0x10;
    iVar12 = iVar12 + 0x10;
    iVar13 = iVar13 + 0x10;
    iVar14 = iVar14 + 0x10;
    iVar15 = iVar15 + 0x10;
    iVar8 = iVar8 + 0x10;
    iVar9 = iVar9 + 0x10;
    iVar10 = iVar10 + 0x10;
    iVar11 = iVar11 + 0x10;
  } while (lVar7 != 0x100);
  uStack_88._0_4_ = 0x2010000;
  uStack_78 = 0;
  puStack_80 = param_3;
  FUN_109a479a0(auStack_e8,&uStack_88);
  uStack_78 = 0;
  uStack_88._0_4_ = 0x1010000;
  uStack_150 = 0;
  uStack_160._0_4_ = 0x1010000;
  puStack_158 = (undefined8 *)&uStack_148;
  auStack_178[0] = 0x2010000;
  uStack_168 = 0;
  puStack_170 = param_3;
  puStack_80 = (undefined8 *)auStack_e8;
  FUN_109a41f20(&uStack_88,&uStack_160,auStack_178);
  uStack_78 = 0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0x1010000);
  puStack_80 = param_3;
  FUN_109a91d90();
  puVar5 = &uStack_88;
  iVar8 = (int)auStack_180;
  pdVar6 = &dStack_188;
  FUN_109ab9538();
  if (dStack_188 == 0.0) {
    uStack_88 = 0x406fe00000000000;
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_160._0_4_ = 0xc1020006;
    puStack_158 = &uStack_88;
    uStack_150 = 0x400000001;
    uStack_168 = 0;
    auStack_178[0] = 0x1010000;
    iVar8 = (int)&uStack_160;
    pdVar6 = (double *)auStack_178;
    puStack_170 = param_2;
    FUN_109a48a40();
    puVar5 = param_3;
  }
  if (lStack_110 != 0) {
    piVar1 = (int *)(lStack_110 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = (undefined8 *)&uStack_148;
      func_0x000109a848d4();
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
      puStack_108[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_144);
  }
  if (puStack_100 != &uStack_f8 && puStack_100 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puStack_100[-1];
    _free();
  }
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = (undefined8 *)auStack_e8;
      func_0x000109a848d4();
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
  if (0 < (int)auStack_e8._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(puStack_a8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)auStack_e8._4_4_);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puStack_a0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_148);
    func_0x00010567aa40(auStack_e8);
  }
  __Unwind_Resume();
  uStack_258 = 0x42ff0000;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_254 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_22c = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  lStack_220 = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  lStack_218 = (long)&uStack_254 + 4;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_2b8 = 0x42ff0000;
  lStack_278 = (long)&uStack_2b4 + 4;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2b4 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_28c = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  lStack_280 = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  puStack_270 = &uStack_268;
  puStack_210 = &uStack_208;
  FUN_109199f7c();
  uStack_318 = 0x42ff0000;
  puStack_2d8 = &uStack_310;
  uStack_30c = 0;
  uStack_308 = 0;
  iStack_314 = 0;
  uStack_310 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2ec = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  lStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_378 = 0x42ff0000;
  lStack_338 = (long)&uStack_374 + 4;
  uStack_36c = 0;
  uStack_368 = 0;
  uStack_374 = 0;
  uStack_35c = 0;
  uStack_358 = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_34c = 0;
  uStack_354 = 0;
  uStack_350 = 0;
  lStack_340 = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_3d8 = 0x42ff0000;
  puStack_398 = &uStack_3d0;
  uStack_3cc = 0;
  uStack_3c8 = 0;
  iStack_3d4 = 0;
  uStack_3d0 = 0;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  uStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3ac = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  lStack_3a0 = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  puStack_390 = &uStack_388;
  puStack_330 = &uStack_328;
  puStack_2d0 = &uStack_2c8;
  FUN_10919a408();
  FUN_10919aed0(puVar5,&uStack_258,&uStack_318,&uStack_3e8);
  FUN_10919bd24();
  if (((ulong)puVar5 & 1) != 0) goto LAB_10919c5b4;
  if (lStack_3a0 != 0) {
    piVar1 = (int *)(lStack_3a0 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_2e0 != 0) {
    piVar1 = (int *)(lStack_2e0 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_318);
    }
  }
  lStack_2e0 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  if (iStack_314 < 1) {
LAB_10919c560:
    uStack_318 = uStack_3d8;
    if (2 < iStack_3d4) goto LAB_10919c594;
    iStack_314 = iStack_3d4;
    uStack_310 = uStack_3d0;
    uStack_30c = uStack_3cc;
    *puStack_2d0 = *puStack_390;
    puStack_2d0[1] = puStack_390[1];
  }
  else {
    lVar7 = 0;
    do {
      puStack_2d8[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_314);
    if (iStack_314 < 3) goto LAB_10919c560;
LAB_10919c594:
    uStack_318 = uStack_3d8;
    func_0x000109a84868(&uStack_318,&uStack_3d8);
  }
  uStack_300 = uStack_3c0;
  uStack_2fc = uStack_3bc;
  uStack_308 = uStack_3c8;
  uStack_304 = uStack_3c4;
  uStack_2f0 = uStack_3b0;
  uStack_2ec = uStack_3ac;
  uStack_2f8 = uStack_3b8;
  uStack_2f4 = uStack_3b4;
  lStack_2e0 = lStack_3a0;
  uStack_2e8 = uStack_3a8;
  uStack_2e4 = uStack_3a4;
LAB_10919c5b4:
  *extraout_x8 = 0x42ff0000;
  *(undefined8 *)(extraout_x8 + 3) = 0;
  *(undefined8 *)(extraout_x8 + 1) = 0;
  *(undefined8 *)(extraout_x8 + 7) = 0;
  *(undefined8 *)(extraout_x8 + 5) = 0;
  *(undefined8 *)(extraout_x8 + 0xb) = 0;
  *(undefined8 *)(extraout_x8 + 9) = 0;
  *(undefined8 *)(extraout_x8 + 0xe) = 0;
  *(undefined8 *)(extraout_x8 + 0xc) = 0;
  *(undefined8 *)(extraout_x8 + 0x14) = 0;
  *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
  *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
  *(undefined8 *)(extraout_x8 + 0x16) = 0;
  FUN_10919bef0();
  uStack_3f0 = 0;
  auStack_400[0] = 0x1010000;
  auStack_418[0] = 0x2010000;
  uStack_408 = 0;
  uStack_420 = NEON_rev64(*(undefined8 *)pdVar6[8],4);
  FUN_109b0f718(0,0,auStack_400,auStack_418,&uStack_420,1);
  if (lStack_3a0 != 0) {
    piVar1 = (int *)(lStack_3a0 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_3d8);
    }
  }
  lStack_3a0 = 0;
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  if (0 < iStack_3d4) {
    lVar7 = 0;
    do {
      puStack_398[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_3d4);
  }
  if (puStack_390 != &uStack_388 && puStack_390 != (undefined8 *)0x0) {
    _free(puStack_390[-1]);
  }
  if (lStack_340 != 0) {
    piVar1 = (int *)(lStack_340 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_378);
    }
  }
  lStack_340 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_358 = 0;
  uStack_354 = 0;
  if (0 < (int)uStack_374) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_338 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_374);
  }
  if (puStack_330 != &uStack_328 && puStack_330 != (undefined8 *)0x0) {
    _free(puStack_330[-1]);
  }
  if (lStack_2e0 != 0) {
    piVar1 = (int *)(lStack_2e0 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_318);
    }
  }
  lStack_2e0 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  if (0 < iStack_314) {
    lVar7 = 0;
    do {
      puStack_2d8[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_314);
  }
  if (puStack_2d0 != &uStack_2c8 && puStack_2d0 != (undefined8 *)0x0) {
    _free(puStack_2d0[-1]);
  }
  if (lStack_280 != 0) {
    piVar1 = (int *)(lStack_280 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_2b8);
    }
  }
  lStack_280 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  if (0 < (int)uStack_2b4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_278 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_2b4);
  }
  if (puStack_270 != &uStack_268 && puStack_270 != (undefined8 *)0x0) {
    _free(puStack_270[-1]);
  }
  if (lStack_220 != 0) {
    piVar1 = (int *)(lStack_220 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_258);
    }
  }
  lStack_220 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  if (0 < (int)uStack_254) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_218 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_254);
  }
  if (puStack_210 != &uStack_208 && puStack_210 != (undefined8 *)0x0) {
    _free(puStack_210[-1]);
  }
  return;
}



/* Entry: 10919c380; end: 10919c903;  */

void FUN_10919c380(undefined4 *param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_290;
  undefined4 auStack_288 [2];
  undefined4 *puStack_280;
  undefined8 uStack_278;
  undefined4 auStack_270 [2];
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  undefined4 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  undefined8 uStack_124;
  undefined4 uStack_11c;
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
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_c8 = 0x42ff0000;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  lStack_88 = (long)&uStack_c4 + 4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_128 = 0x42ff0000;
  lStack_e8 = (long)&uStack_124 + 4;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_124 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  puStack_e0 = &uStack_d8;
  puStack_80 = &uStack_78;
  FUN_109199f7c(param_2,param_3,param_5,&uStack_c8,&uStack_128);
  uStack_188 = 0x42ff0000;
  puStack_148 = &uStack_180;
  uStack_17c = 0;
  uStack_178 = 0;
  iStack_184 = 0;
  uStack_180 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_15c = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  lStack_150 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_1e8 = 0x42ff0000;
  lStack_1a8 = (long)&uStack_1e4 + 4;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1e4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1bc = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  lStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_248 = 0x42ff0000;
  puStack_208 = &uStack_240;
  uStack_23c = 0;
  uStack_238 = 0;
  iStack_244 = 0;
  uStack_240 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  lStack_210 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  puStack_200 = &uStack_1f8;
  puStack_1a0 = &uStack_198;
  puStack_140 = &uStack_138;
  FUN_10919a408();
  FUN_10919aed0(param_2,&uStack_c8,&uStack_188,&uStack_258);
  FUN_10919bd24();
  if ((param_2 & 1) != 0) goto LAB_10919c5b4;
  if (lStack_210 != 0) {
    piVar1 = (int *)(lStack_210 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_150 != 0) {
    piVar1 = (int *)(lStack_150 + 0x14);
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
      func_0x000109a848d4(&uStack_188);
    }
  }
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  if (iStack_184 < 1) {
LAB_10919c560:
    uStack_188 = uStack_248;
    if (2 < iStack_244) goto LAB_10919c594;
    iStack_184 = iStack_244;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    *puStack_140 = *puStack_200;
    puStack_140[1] = puStack_200[1];
  }
  else {
    lVar5 = 0;
    do {
      puStack_148[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_184);
    if (iStack_184 < 3) goto LAB_10919c560;
LAB_10919c594:
    uStack_188 = uStack_248;
    func_0x000109a84868(&uStack_188,&uStack_248);
  }
  uStack_170 = uStack_230;
  uStack_16c = uStack_22c;
  uStack_178 = uStack_238;
  uStack_174 = uStack_234;
  uStack_160 = uStack_220;
  uStack_15c = uStack_21c;
  uStack_168 = uStack_228;
  uStack_164 = uStack_224;
  lStack_150 = lStack_210;
  uStack_158 = uStack_218;
  uStack_154 = uStack_214;
LAB_10919c5b4:
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_10919bef0();
  uStack_260 = 0;
  auStack_270[0] = 0x1010000;
  auStack_288[0] = 0x2010000;
  uStack_278 = 0;
  uStack_290 = NEON_rev64(**(undefined8 **)(param_4 + 0x40),4);
  puStack_280 = param_1;
  puStack_268 = param_1;
  FUN_109b0f718(0,0,auStack_270,auStack_288,&uStack_290,1);
  if (lStack_210 != 0) {
    piVar1 = (int *)(lStack_210 + 0x14);
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
      func_0x000109a848d4(&uStack_248);
    }
  }
  lStack_210 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  if (0 < iStack_244) {
    lVar5 = 0;
    do {
      puStack_208[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_244);
  }
  if (puStack_200 != &uStack_1f8 && puStack_200 != (undefined8 *)0x0) {
    _free(puStack_200[-1]);
  }
  if (lStack_1b0 != 0) {
    piVar1 = (int *)(lStack_1b0 + 0x14);
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
      func_0x000109a848d4(&uStack_1e8);
    }
  }
  lStack_1b0 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  if (0 < (int)uStack_1e4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_1a8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_1e4);
  }
  if (puStack_1a0 != &uStack_198 && puStack_1a0 != (undefined8 *)0x0) {
    _free(puStack_1a0[-1]);
  }
  if (lStack_150 != 0) {
    piVar1 = (int *)(lStack_150 + 0x14);
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
      func_0x000109a848d4(&uStack_188);
    }
  }
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  if (0 < iStack_184) {
    lVar5 = 0;
    do {
      puStack_148[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_184);
  }
  if (puStack_140 != &uStack_138 && puStack_140 != (undefined8 *)0x0) {
    _free(puStack_140[-1]);
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
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
      func_0x000109a848d4(&uStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  if (0 < (int)uStack_124) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_e8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_124);
  }
  if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
    _free(puStack_e0[-1]);
  }
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
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
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < (int)uStack_c4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_c4);
  }
  if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
    _free(puStack_80[-1]);
  }
  return;
}



/* Entry: 10919c904; end: 10919c99f;  */

undefined8 * FUN_10919c904(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
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
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 10919c9a0; end: 10919cf7f;  */

void FUN_10919c9a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uStack_230;
  int iStack_22c;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 auStack_158 [2];
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
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
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  *(undefined1 *)((long)param_2 + 0x14) = 0;
  param_2[6] = 0;
  (**(code **)*param_2)(auStack_e8);
  uStack_148 = 0x42ff0000;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  lStack_108 = (long)&uStack_144 + 4;
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
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1d0._0_4_ = 0x1010000;
  uStack_230 = 0x2010000;
  uStack_220 = 0;
  puStack_228 = (undefined8 *)&uStack_148;
  puStack_100 = &uStack_f8;
  uStack_1c8 = (undefined4 *)auStack_e8;
  FUN_109abb418(&uStack_1d0,&uStack_230);
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1d0._0_4_ = 0x1010000;
  uStack_1c8 = &uStack_148;
  FUN_109b42928(auStack_158,&uStack_1d0);
  param_2[6] = auStack_158[0];
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_1c8._0_4_ = (undefined4)param_4;
  uStack_1c8._4_4_ = (undefined4)((ulong)param_4 >> 0x20);
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1d0._0_4_ = 0x1010000;
  uStack_230 = 0x2050000;
  puStack_228 = &uStack_170;
  uStack_220 = 0;
  FUN_109a3dcec(&uStack_1d0,&uStack_230);
  FUN_10919cf80(&uStack_170,auStack_e8);
  uStack_1d0._0_4_ = 0x42ff0000;
  uStack_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  uStack_1d0._4_4_ = 0;
  uStack_1c8._0_4_ = 0;
  uVar7 = (ulong)&uStack_1d0 | 8;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1a4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_220 = 0;
  uStack_230 = 0x1050000;
  auStack_88[0] = 0x2010000;
  uStack_78 = 0;
  puStack_228 = &uStack_170;
  uStack_190 = uVar7;
  puStack_188 = &uStack_180;
  puStack_80 = &uStack_1d0;
  FUN_109a3ecac(&uStack_230,auStack_88);
  if (*(char *)((long)param_2 + 0xc) == '\x01') {
    FUN_109a852c8(&uStack_230,&uStack_1d0,auStack_158);
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    puStack_80 = param_1;
    FUN_109a479a0(&uStack_230,auStack_88);
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
        func_0x000109a848d4(&uStack_230);
      }
    }
    lStack_1f8 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    if (0 < iStack_22c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_1f0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_22c);
    }
    if (puStack_1e8 != auStack_1e0 && puStack_1e8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_1e8 + -8));
    }
    if (lStack_198 != 0) {
      piVar1 = (int *)(lStack_198 + 0x14);
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
    lStack_198 = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    if (0 < uStack_1d0._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_190 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_1d0._4_4_);
    }
  }
  else {
    puVar6 = (undefined8 *)((ulong)&uStack_1d0 | 4);
    param_1[1] = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
    *param_1 = CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    param_1[3] = CONCAT44(uStack_1b4,uStack_1b8);
    param_1[2] = CONCAT44(uStack_1bc,uStack_1c0);
    param_1[10] = 0;
    param_1[5] = CONCAT44(uStack_1a4,uStack_1a8);
    param_1[4] = CONCAT44(uStack_1ac,uStack_1b0);
    param_1[7] = lStack_198;
    param_1[6] = CONCAT44(uStack_19c,uStack_1a0);
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (uStack_1d0._4_4_ < 3) {
      param_1[10] = *puStack_188;
      param_1[0xb] = puStack_188[1];
    }
    else {
      param_1[8] = uStack_190;
      param_1[9] = puStack_188;
      uStack_190 = uVar7;
      puStack_188 = &uStack_180;
    }
    uStack_1d0._0_4_ = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  uStack_1d0 = &uStack_170;
  func_0x0001060c3a9c(&uStack_1d0);
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
  if (0 < (int)uStack_144) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_108 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_144);
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
      func_0x000109a848d4(auStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  if (0 < iStack_e4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_e4);
  }
  if (puStack_a0 != auStack_98 && puStack_a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_a0 + -8));
  }
  return;
}



/* Entry: 10919cf80; end: 10919cfcf;  */

void FUN_10919cf80(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001060c3960(uVar1);
    lVar2 = uVar1 + 0x60;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10919d830();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10919cfd0; end: 10919d18b;  */

void FUN_10919cfd0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  ulong *puStack_38;
  
  puVar4 = (ulong *)(param_1 + 2);
  uVar6 = param_1[1];
  if (uVar6 < *puVar4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(uVar6 + lVar5) = *(undefined4 *)((long)param_2 + lVar5);
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0xc);
    lVar5 = uVar6 + 0xc;
  }
  else {
    lVar5 = uVar6 - *param_1;
    uVar6 = (lVar5 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar6) {
      FUN_10919d210();
LAB_10919d134:
      func_0x000104bd35f4();
      if (puStack_50 != puStack_48) {
        puStack_48 = (undefined8 *)
                     ((long)puStack_48 +
                      ((((long)puStack_48 - (long)puStack_50) - 0xcU) / 0xc) * -0xc + -0xc);
      }
      if (lStack_58 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar2 = *param_1;
      lVar3 = param_1[1];
      lVar1 = param_2[1] + (lVar2 - lVar3);
      lVar7 = lVar1;
      for (lVar5 = lVar2; lVar3 != lVar5; lVar5 = lVar5 + 0xc) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar7 + lVar9) = *(undefined4 *)(lVar5 + lVar9);
          lVar9 = lVar9 + 4;
        } while (lVar9 != 0xc);
        lVar7 = lVar7 + 0xc;
      }
      param_2[1] = lVar1;
      lVar5 = *param_1;
      *param_1 = lVar1;
      param_1[1] = lVar2;
      param_2[1] = lVar5;
      lVar5 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar5;
      lVar5 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar5;
      *param_2 = param_2[1];
      return;
    }
    lVar7 = (long)(*puVar4 - *param_1) >> 2;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar8 = uVar6;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    puStack_38 = puVar4;
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x1555555555555555 < uVar8) goto LAB_10919d134;
      lVar7 = uVar8 * 0xc;
      __Znwm();
    }
    puStack_50 = (undefined8 *)(lVar7 + lVar5);
    lStack_40 = lVar7 + uVar8 * 0xc;
    *puStack_50 = *param_2;
    *(undefined4 *)(puStack_50 + 1) = *(undefined4 *)(param_2 + 1);
    puStack_48 = (undefined8 *)((long)puStack_50 + 0xc);
    lStack_58 = lVar7;
    FUN_10919d18c(param_1,&lStack_58);
    if (puStack_50 != puStack_48) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((ulong)((long)puStack_48 + (-0xc - (long)puStack_50)) / 0xc) * -0xc + -0xc);
    }
    lVar5 = param_1[1];
    if (lStack_58 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 10919d18c; end: 10919d20f;  */

void FUN_10919d18c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar2 = param_2[1] + (lVar3 - lVar4);
  lVar1 = lVar2;
  for (lVar5 = lVar3; lVar4 != lVar5; lVar5 = lVar5 + 0xc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(lVar5 + lVar6);
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xc);
    lVar1 = lVar1 + 0xc;
  }
  param_2[1] = lVar2;
  lVar5 = *param_1;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10919d210; end: 10919d223;  */

void FUN_10919d210(float param_1,float param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  uVar6 = (uint)param_4;
  if (-1 < (int)uVar6) {
    lVar4 = *plVar2;
    uVar9 = (uint)((ulong)(plVar2[1] - lVar4) >> 5);
    if ((int)uVar6 < (int)uVar9) {
      uVar8 = (uint)param_5;
      if (((int)uVar8 < 0) || (uVar9 <= uVar8)) {
        puVar5 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        puStack_80 = puVar5 + 1;
        uStack_78 = 0x1e;
        *(undefined1 *)((long)puVar5 + 0x22) = 0;
        *(undefined8 *)(puVar5 + 3) = 0x6928203c206a2026;
        *(undefined8 *)(puVar5 + 1) = 0x262030203d3e206a;
        *(undefined8 *)((long)puVar5 + 0x1a) = 0x2928657a69732e73;
        *(undefined8 *)((long)puVar5 + 0x12) = 0x63747629746e6928;
        FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f55ac7f,&UNK_10f55ac53,0x69);
      }
      else if ((param_1 < 0.0) || (param_2 < 0.0)) {
        puVar5 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        puStack_80 = puVar5 + 1;
        uStack_78 = 0x13;
        *(undefined1 *)((long)puVar5 + 0x17) = 0;
        *(undefined4 *)((long)puVar5 + 0x13) = 0x30203d3e;
        *(undefined8 *)(puVar5 + 3) = 0x3e20777665722026;
        *(undefined8 *)(puVar5 + 1) = 0x262030203d3e2077;
        FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f55ac7f,&UNK_10f55ac53,0x6a);
      }
      else {
        if (uVar6 != uVar8) {
          plVar10 = plVar2 + 3;
          puVar3 = (undefined8 *)*plVar10;
          puVar12 = (undefined8 *)plVar2[4];
          if (puVar12 == puVar3) {
            if ((ulong)((plVar2[5] - (long)puVar12 >> 2) * -0x5555555555555555) < 2) {
              puVar3 = (undefined8 *)0x2;
              uVar7 = param_4;
              FUN_10919d610();
              puVar3[1] = 0;
              puVar3[2] = 0;
              *puVar3 = 0;
              puVar12 = puVar3 + 3;
              lVar11 = (long)puVar3 - (plVar2[4] - plVar2[3]);
              _memcpy(lVar11);
              lVar4 = plVar2[3];
              plVar2[3] = lVar11;
              plVar2[4] = (long)puVar12;
              plVar2[5] = (long)puVar3 + uVar7 * 0xc;
              if (lVar4 != 0) {
                __ZdlPv();
                puVar12 = (undefined8 *)plVar2[4];
              }
            }
            else {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12 = puVar12 + 3;
              plVar2[4] = (long)puVar12;
            }
            puVar3 = (undefined8 *)plVar2[3];
            lVar4 = *plVar2;
          }
          lVar4 = lVar4 + (param_4 & 0xffffffff) * 0x20;
          puStack_80 = (undefined4 *)CONCAT44(*(undefined4 *)(lVar4 + 0xc),uVar8);
          uStack_78 = CONCAT44(uStack_78._4_4_,param_1);
          *(int *)(lVar4 + 0xc) = (int)((ulong)((long)puVar12 - (long)puVar3) >> 2) * -0x55555555;
          FUN_10919d654(plVar10,&puStack_80);
          lVar4 = *plVar2 + (param_5 & 0xffffffff) * 0x20;
          uStack_88 = *(undefined4 *)(lVar4 + 0xc);
          *(int *)(lVar4 + 0xc) = (int)((ulong)(plVar2[4] - plVar2[3]) >> 2) * -0x55555555;
          uStack_8c = uVar6;
          fStack_84 = param_2;
          FUN_10919d654(plVar10,&uStack_8c);
          return;
        }
        puVar12 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar12 = 0x3d21206900000001;
        puStack_80 = (undefined4 *)((long)puVar12 + 4);
        uStack_78 = 6;
        *(undefined1 *)((long)puVar12 + 10) = 0;
        *(undefined2 *)(puVar12 + 1) = 0x6a20;
        FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f55ac7f,&UNK_10f55ac53,0x6b);
      }
      goto LAB_10919d530;
    }
  }
  puVar5 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_80 = puVar5 + 1;
  uStack_78 = 0x1e;
  *(undefined1 *)((long)puVar5 + 0x22) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x6928203c20692026;
  *(undefined8 *)(puVar5 + 1) = 0x262030203d3e2069;
  *(undefined8 *)((long)puVar5 + 0x1a) = 0x2928657a69732e73;
  *(undefined8 *)((long)puVar5 + 0x12) = 0x63747629746e6928;
  FUN_109ac3188(0xffffff29,&puStack_80,&UNK_10f55ac7f,&UNK_10f55ac53,0x68);
LAB_10919d530:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10919d534);
  (*pcVar1)();
}



/* Entry: 10919d224; end: 10919d5b3;  */

void FUN_10919d224(float param_1,float param_2,long *param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = (uint)param_4;
  if (-1 < (int)uVar5) {
    lVar3 = *param_3;
    uVar7 = (uint)((ulong)(param_3[1] - lVar3) >> 5);
    if ((int)uVar5 < (int)uVar7) {
      if (((int)param_5 < 0) || (uVar7 <= param_5)) {
        puVar4 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar4 = 1;
        uStack_70 = puVar4 + 1;
        uStack_68 = 0x1e;
        *(undefined1 *)((long)puVar4 + 0x22) = 0;
        *(undefined8 *)(puVar4 + 3) = 0x6928203c206a2026;
        *(undefined8 *)(puVar4 + 1) = 0x262030203d3e206a;
        *(undefined8 *)((long)puVar4 + 0x1a) = 0x2928657a69732e73;
        *(undefined8 *)((long)puVar4 + 0x12) = 0x63747629746e6928;
        FUN_109ac3188(0xffffff29,&uStack_70,&UNK_10f55ac7f,&UNK_10f55ac53,0x69);
      }
      else if ((param_1 < 0.0) || (param_2 < 0.0)) {
        puVar4 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar4 = 1;
        uStack_70 = puVar4 + 1;
        uStack_68 = 0x13;
        *(undefined1 *)((long)puVar4 + 0x17) = 0;
        *(undefined4 *)((long)puVar4 + 0x13) = 0x30203d3e;
        *(undefined8 *)(puVar4 + 3) = 0x3e20777665722026;
        *(undefined8 *)(puVar4 + 1) = 0x262030203d3e2077;
        FUN_109ac3188(0xffffff29,&uStack_70,&UNK_10f55ac7f,&UNK_10f55ac53,0x6a);
      }
      else {
        if (uVar5 != param_5) {
          plVar8 = param_3 + 3;
          puVar2 = (undefined8 *)*plVar8;
          puVar10 = (undefined8 *)param_3[4];
          if (puVar10 == puVar2) {
            if ((ulong)((param_3[5] - (long)puVar10 >> 2) * -0x5555555555555555) < 2) {
              puVar2 = (undefined8 *)0x2;
              uVar6 = param_4;
              FUN_10919d610();
              puVar2[1] = 0;
              puVar2[2] = 0;
              *puVar2 = 0;
              puVar10 = puVar2 + 3;
              lVar9 = (long)puVar2 - (param_3[4] - param_3[3]);
              _memcpy(lVar9);
              lVar3 = param_3[3];
              param_3[3] = lVar9;
              param_3[4] = (long)puVar10;
              param_3[5] = (long)puVar2 + uVar6 * 0xc;
              if (lVar3 != 0) {
                __ZdlPv();
                puVar10 = (undefined8 *)param_3[4];
              }
            }
            else {
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar10 = puVar10 + 3;
              param_3[4] = (long)puVar10;
            }
            puVar2 = (undefined8 *)param_3[3];
            lVar3 = *param_3;
          }
          lVar3 = lVar3 + (param_4 & 0xffffffff) * 0x20;
          uStack_70 = (undefined4 *)CONCAT44(*(undefined4 *)(lVar3 + 0xc),param_5);
          uStack_68 = CONCAT44(uStack_68._4_4_,param_1);
          *(int *)(lVar3 + 0xc) = (int)((ulong)((long)puVar10 - (long)puVar2) >> 2) * -0x55555555;
          FUN_10919d654(plVar8,&uStack_70);
          lVar3 = *param_3 + (ulong)param_5 * 0x20;
          uStack_78 = *(undefined4 *)(lVar3 + 0xc);
          *(int *)(lVar3 + 0xc) = (int)((ulong)(param_3[4] - param_3[3]) >> 2) * -0x55555555;
          uStack_7c = uVar5;
          fStack_74 = param_2;
          FUN_10919d654(plVar8,&uStack_7c);
          return;
        }
        puVar10 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar10 = 0x3d21206900000001;
        uStack_70 = (undefined4 *)((long)puVar10 + 4);
        uStack_68 = 6;
        *(undefined1 *)((long)puVar10 + 10) = 0;
        *(undefined2 *)(puVar10 + 1) = 0x6a20;
        FUN_109ac3188(0xffffff29,&uStack_70,&UNK_10f55ac7f,&UNK_10f55ac53,0x6b);
      }
      goto LAB_10919d530;
    }
  }
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  uStack_70 = puVar4 + 1;
  uStack_68 = 0x1e;
  *(undefined1 *)((long)puVar4 + 0x22) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x6928203c20692026;
  *(undefined8 *)(puVar4 + 1) = 0x262030203d3e2069;
  *(undefined8 *)((long)puVar4 + 0x1a) = 0x2928657a69732e73;
  *(undefined8 *)((long)puVar4 + 0x12) = 0x63747629746e6928;
  FUN_109ac3188(0xffffff29,&uStack_70,&UNK_10f55ac7f,&UNK_10f55ac53,0x68);
LAB_10919d530:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10919d534);
  (*pcVar1)();
}



/* Entry: 10919d5b4; end: 10919d5c7;  */

undefined1  [16] FUN_10919d5b4(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  pcStack_18 = FUN_10919d5c8;
  if ((ulong)puVar2 >> 0x3b == 0) {
    lVar3 = (long)puVar2 << 5;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar3);
    auVar14._8_8_ = puVar2;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104bd35f4();
  pcStack_38 = FUN_10919d5fc;
  plVar4 = (long *)&DAT_10f62a4d8;
  ppuStack_40 = &puStack_20;
  func_0x000104bd47e8();
  pcStack_48 = FUN_10919d610;
  if (plVar4 < (long *)0x1555555555555556) {
    lVar3 = (long)plVar4 * 0xc;
    puStack_50 = (undefined1 *)&ppuStack_40;
    __Znwm(lVar3);
    auVar15._8_8_ = plVar4;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  puStack_50 = (undefined1 *)&ppuStack_40;
  func_0x000104bd35f4();
  pcStack_68 = FUN_10919d654;
  pppuStack_a0 = &ppuStack_70;
  plVar5 = (long *)plVar4[1];
  if (plVar5 < (long *)plVar4[2]) {
    lVar3 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar3;
    lVar3 = (long)plVar5 + 0xc;
    plVar5 = plVar4;
  }
  else {
    lVar3 = (long)plVar5 - *plVar4;
    uVar10 = (lVar3 >> 2) * -0x5555555555555555 + 1;
    ppuStack_70 = &puStack_50;
    if (0x1555555555555555 < uVar10) {
      FUN_10919d5fc();
      pcStack_98 = FUN_10919d748;
      puVar1 = (undefined8 *)plVar4[1];
      if (puVar1 < (undefined8 *)plVar4[2]) {
        puVar13 = puVar1 + 1;
        *puVar1 = param_2;
        plVar5 = plVar4;
LAB_10919d7f8:
        plVar4[1] = (long)puVar13;
        auVar17._8_8_ = param_2;
        auVar17._0_8_ = plVar5;
        return auVar17;
      }
      plVar12 = (long *)*plVar4;
      lVar3 = (long)puVar1 - (long)plVar12;
      uVar10 = (lVar3 >> 3) + 1;
      plVar5 = param_2;
      if (uVar10 >> 0x3d == 0) {
        uVar8 = plVar4[2] - (long)plVar12;
        uVar11 = (long)uVar8 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 >> 0x3d == 0) {
          lVar9 = uVar11 << 3;
          __Znwm();
          puVar1 = (undefined8 *)(lVar9 + lVar3);
          plVar6 = puVar1 + -(lVar3 >> 3);
          puVar13 = puVar1 + 1;
          *puVar1 = param_2;
          plVar5 = plVar6;
          param_2 = plVar12;
          _memcpy(plVar6,plVar12,lVar3);
          *plVar4 = (long)plVar6;
          plVar4[1] = (long)puVar13;
          plVar4[2] = lVar9 + uVar11 * 8;
          if (plVar12 != (long *)0x0) {
            __ZdlPv(plVar12);
            plVar5 = plVar12;
          }
          goto LAB_10919d7f8;
        }
      }
      else {
        FUN_10919d81c();
      }
      func_0x000104bd35f4();
      pcStack_e8 = FUN_10919d81c;
      plVar6 = (long *)&DAT_10f62a4d8;
      pppuStack_f0 = &pppuStack_a0;
      func_0x000104bd47e8();
      pcStack_f8 = FUN_10919d830;
      lVar9 = plVar6[1] - *plVar6;
      uVar10 = (lVar9 >> 5) * -0x5555555555555555 + 1;
      lStack_120 = lVar3;
      plStack_118 = param_2;
      plStack_110 = plVar12;
      plStack_108 = plVar4;
      if (0x2aaaaaaaaaaaaaa < uVar10) {
        puStack_100 = (undefined1 *)&pppuStack_f0;
        func_0x0001060c3908();
        FUN_10919d9fc(&plStack_148);
        __Unwind_Resume(plVar6);
        plVar4 = plVar5;
        if (plVar5 != param_3) {
          do {
            plVar7 = plVar4;
            func_0x0001060c3960(param_4,plVar4);
            plVar4 = plVar4 + 0xc;
            param_4 = param_4 + 0x60;
            plVar12 = plVar5;
          } while (plVar4 != param_3);
          do {
            plVar5 = plVar7;
            plVar6 = plVar12;
            func_0x0001060c39fc(plVar12);
            plVar12 = plVar12 + 0xc;
            plVar7 = plVar5;
          } while (plVar12 != param_3);
        }
        auVar19._8_8_ = plVar5;
        auVar19._0_8_ = plVar6;
        return auVar19;
      }
      plVar4 = plVar6 + 2;
      lVar3 = *plVar4 - *plVar6 >> 5;
      uVar11 = lVar3 * 0x5555555555555556;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar11 = uVar10;
      }
      if (0x155555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
        uVar11 = 0x2aaaaaaaaaaaaaa;
      }
      plStack_128 = plVar4;
      if (uVar11 == 0) {
        plVar12 = (long *)0x0;
        puStack_100 = (undefined1 *)&pppuStack_f0;
      }
      else {
        plVar12 = plVar4;
        puStack_100 = (undefined1 *)&pppuStack_f0;
        func_0x0001060c391c();
      }
      puVar2 = (undefined *)((long)plVar12 + lVar9);
      plStack_130 = plVar12 + uVar11 * 0xc;
      plStack_148 = plVar12;
      plStack_140 = (long *)puVar2;
      plStack_138 = (long *)puVar2;
      func_0x0001060c3960(puVar2,plVar5);
      plStack_138 = (long *)(puVar2 + 0x60);
      lVar3 = *plVar6;
      lVar9 = lVar3 - plVar6[1];
      FUN_10919d95c(plVar4,lVar3,plVar6[1],puVar2 + lVar9);
      plVar4 = plStack_138;
      plStack_148 = (long *)*plVar6;
      *plVar6 = (long)(puVar2 + lVar9);
      lVar9 = plVar6[2];
      plVar6[2] = (long)plStack_130;
      plVar6[1] = (long)plStack_138;
      plStack_140 = plStack_148;
      plStack_138 = plStack_148;
      plStack_130 = (long *)lVar9;
      FUN_10919d9fc(&plStack_148);
      auVar18._8_8_ = lVar3;
      auVar18._0_8_ = plVar4;
      return auVar18;
    }
    lVar9 = plVar4[2] - *plVar4 >> 2;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x1555555555555555;
    }
    plVar12 = param_2;
    FUN_10919d610();
    plVar5 = (long *)(uVar11 + lVar3);
    lVar3 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar3;
    lVar3 = (long)plVar5 + 0xc;
    param_2 = (long *)*plVar4;
    lVar9 = (long)plVar5 - (plVar4[1] - (long)param_2);
    _memcpy(lVar9);
    plVar5 = (long *)*plVar4;
    *plVar4 = lVar9;
    plVar4[1] = lVar3;
    plVar4[2] = uVar11 + (long)plVar12 * 0xc;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar4[1] = lVar3;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar5;
  return auVar16;
}



/* Entry: 10919d5c8; end: 10919d5fb;  */

undefined1  [16] FUN_10919d5c8(ulong param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined1 ***pppuStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_1 >> 0x3b == 0) {
    lVar3 = param_1 << 5;
    __Znwm(lVar3);
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  func_0x000104bd35f4();
  pcStack_28 = FUN_10919d5fc;
  plVar4 = (long *)&DAT_10f62a4d8;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x000104bd47e8();
  pcStack_38 = FUN_10919d610;
  if (plVar4 < (long *)0x1555555555555556) {
    lVar3 = (long)plVar4 * 0xc;
    puStack_40 = (undefined1 *)&puStack_30;
    __Znwm(lVar3);
    auVar15._8_8_ = plVar4;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  puStack_40 = (undefined1 *)&puStack_30;
  func_0x000104bd35f4();
  pcStack_58 = FUN_10919d654;
  pppuStack_90 = &ppuStack_60;
  plVar5 = (long *)plVar4[1];
  if (plVar5 < (long *)plVar4[2]) {
    lVar3 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar3;
    lVar3 = (long)plVar5 + 0xc;
    plVar5 = plVar4;
  }
  else {
    lVar3 = (long)plVar5 - *plVar4;
    uVar10 = (lVar3 >> 2) * -0x5555555555555555 + 1;
    ppuStack_60 = &puStack_40;
    if (0x1555555555555555 < uVar10) {
      FUN_10919d5fc();
      pcStack_88 = FUN_10919d748;
      puVar2 = (undefined8 *)plVar4[1];
      if (puVar2 < (undefined8 *)plVar4[2]) {
        puVar13 = puVar2 + 1;
        *puVar2 = param_2;
        plVar5 = plVar4;
LAB_10919d7f8:
        plVar4[1] = (long)puVar13;
        auVar17._8_8_ = param_2;
        auVar17._0_8_ = plVar5;
        return auVar17;
      }
      plVar12 = (long *)*plVar4;
      lVar3 = (long)puVar2 - (long)plVar12;
      uVar10 = (lVar3 >> 3) + 1;
      plVar5 = param_2;
      if (uVar10 >> 0x3d == 0) {
        uVar8 = plVar4[2] - (long)plVar12;
        uVar11 = (long)uVar8 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 >> 0x3d == 0) {
          lVar9 = uVar11 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar9 + lVar3);
          plVar6 = puVar2 + -(lVar3 >> 3);
          puVar13 = puVar2 + 1;
          *puVar2 = param_2;
          plVar5 = plVar6;
          param_2 = plVar12;
          _memcpy(plVar6,plVar12,lVar3);
          *plVar4 = (long)plVar6;
          plVar4[1] = (long)puVar13;
          plVar4[2] = lVar9 + uVar11 * 8;
          if (plVar12 != (long *)0x0) {
            __ZdlPv(plVar12);
            plVar5 = plVar12;
          }
          goto LAB_10919d7f8;
        }
      }
      else {
        FUN_10919d81c();
      }
      func_0x000104bd35f4();
      pcStack_d8 = FUN_10919d81c;
      plVar6 = (long *)&DAT_10f62a4d8;
      pppuStack_e0 = &pppuStack_90;
      func_0x000104bd47e8();
      pcStack_e8 = FUN_10919d830;
      lVar9 = plVar6[1] - *plVar6;
      uVar10 = (lVar9 >> 5) * -0x5555555555555555 + 1;
      lStack_110 = lVar3;
      plStack_108 = param_2;
      plStack_100 = plVar12;
      plStack_f8 = plVar4;
      if (0x2aaaaaaaaaaaaaa < uVar10) {
        puStack_f0 = (undefined1 *)&pppuStack_e0;
        func_0x0001060c3908();
        FUN_10919d9fc(&plStack_138);
        __Unwind_Resume(plVar6);
        plVar4 = plVar5;
        if (plVar5 != param_3) {
          do {
            plVar7 = plVar4;
            func_0x0001060c3960(param_4,plVar4);
            plVar4 = plVar4 + 0xc;
            param_4 = param_4 + 0x60;
            plVar12 = plVar5;
          } while (plVar4 != param_3);
          do {
            plVar5 = plVar7;
            plVar6 = plVar12;
            func_0x0001060c39fc(plVar12);
            plVar12 = plVar12 + 0xc;
            plVar7 = plVar5;
          } while (plVar12 != param_3);
        }
        auVar19._8_8_ = plVar5;
        auVar19._0_8_ = plVar6;
        return auVar19;
      }
      plVar4 = plVar6 + 2;
      lVar3 = *plVar4 - *plVar6 >> 5;
      uVar11 = lVar3 * 0x5555555555555556;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar11 = uVar10;
      }
      if (0x155555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
        uVar11 = 0x2aaaaaaaaaaaaaa;
      }
      plStack_118 = plVar4;
      if (uVar11 == 0) {
        plVar12 = (long *)0x0;
        puStack_f0 = (undefined1 *)&pppuStack_e0;
      }
      else {
        plVar12 = plVar4;
        puStack_f0 = (undefined1 *)&pppuStack_e0;
        func_0x0001060c391c();
      }
      puVar1 = (undefined *)((long)plVar12 + lVar9);
      plStack_120 = plVar12 + uVar11 * 0xc;
      plStack_138 = plVar12;
      plStack_130 = (long *)puVar1;
      plStack_128 = (long *)puVar1;
      func_0x0001060c3960(puVar1,plVar5);
      plStack_128 = (long *)(puVar1 + 0x60);
      lVar3 = *plVar6;
      lVar9 = lVar3 - plVar6[1];
      FUN_10919d95c(plVar4,lVar3,plVar6[1],puVar1 + lVar9);
      plVar4 = plStack_128;
      plStack_138 = (long *)*plVar6;
      *plVar6 = (long)(puVar1 + lVar9);
      lVar9 = plVar6[2];
      plVar6[2] = (long)plStack_120;
      plVar6[1] = (long)plStack_128;
      plStack_130 = plStack_138;
      plStack_128 = plStack_138;
      plStack_120 = (long *)lVar9;
      FUN_10919d9fc(&plStack_138);
      auVar18._8_8_ = lVar3;
      auVar18._0_8_ = plVar4;
      return auVar18;
    }
    lVar9 = plVar4[2] - *plVar4 >> 2;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x1555555555555555;
    }
    plVar12 = param_2;
    FUN_10919d610();
    plVar5 = (long *)(uVar11 + lVar3);
    lVar3 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar3;
    lVar3 = (long)plVar5 + 0xc;
    param_2 = (long *)*plVar4;
    lVar9 = (long)plVar5 - (plVar4[1] - (long)param_2);
    _memcpy(lVar9);
    plVar5 = (long *)*plVar4;
    *plVar4 = lVar9;
    plVar4[1] = lVar3;
    plVar4[2] = uVar11 + (long)plVar12 * 0xc;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar4[1] = lVar3;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar5;
  return auVar16;
}



/* Entry: 10919d5fc; end: 10919d60f;  */

undefined1  [16] FUN_10919d5fc(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined1 ***pppuStack_70;
  code *pcStack_68;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  pcStack_18 = FUN_10919d610;
  if (plVar3 < (long *)0x1555555555555556) {
    lVar4 = (long)plVar3 * 0xc;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar4);
    auVar14._8_8_ = plVar3;
    auVar14._0_8_ = lVar4;
    return auVar14;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104bd35f4();
  pcStack_38 = FUN_10919d654;
  pppuStack_70 = &ppuStack_40;
  plVar5 = (long *)plVar3[1];
  if (plVar5 < (long *)plVar3[2]) {
    lVar4 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar4;
    lVar4 = (long)plVar5 + 0xc;
    plVar5 = plVar3;
  }
  else {
    lVar4 = (long)plVar5 - *plVar3;
    uVar10 = (lVar4 >> 2) * -0x5555555555555555 + 1;
    ppuStack_40 = &puStack_20;
    if (0x1555555555555555 < uVar10) {
      FUN_10919d5fc();
      pcStack_68 = FUN_10919d748;
      puVar2 = (undefined8 *)plVar3[1];
      if (puVar2 < (undefined8 *)plVar3[2]) {
        puVar13 = puVar2 + 1;
        *puVar2 = param_2;
        plVar5 = plVar3;
LAB_10919d7f8:
        plVar3[1] = (long)puVar13;
        auVar16._8_8_ = param_2;
        auVar16._0_8_ = plVar5;
        return auVar16;
      }
      plVar12 = (long *)*plVar3;
      lVar4 = (long)puVar2 - (long)plVar12;
      uVar10 = (lVar4 >> 3) + 1;
      plVar5 = param_2;
      if (uVar10 >> 0x3d == 0) {
        uVar8 = plVar3[2] - (long)plVar12;
        uVar11 = (long)uVar8 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 >> 0x3d == 0) {
          lVar9 = uVar11 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar9 + lVar4);
          plVar6 = puVar2 + -(lVar4 >> 3);
          puVar13 = puVar2 + 1;
          *puVar2 = param_2;
          plVar5 = plVar6;
          param_2 = plVar12;
          _memcpy(plVar6,plVar12,lVar4);
          *plVar3 = (long)plVar6;
          plVar3[1] = (long)puVar13;
          plVar3[2] = lVar9 + uVar11 * 8;
          if (plVar12 != (long *)0x0) {
            __ZdlPv(plVar12);
            plVar5 = plVar12;
          }
          goto LAB_10919d7f8;
        }
      }
      else {
        FUN_10919d81c();
      }
      func_0x000104bd35f4();
      pcStack_b8 = FUN_10919d81c;
      plVar6 = (long *)&DAT_10f62a4d8;
      pppuStack_c0 = &pppuStack_70;
      func_0x000104bd47e8();
      pcStack_c8 = FUN_10919d830;
      lVar9 = plVar6[1] - *plVar6;
      uVar10 = (lVar9 >> 5) * -0x5555555555555555 + 1;
      lStack_f0 = lVar4;
      plStack_e8 = param_2;
      plStack_e0 = plVar12;
      plStack_d8 = plVar3;
      if (0x2aaaaaaaaaaaaaa < uVar10) {
        puStack_d0 = (undefined1 *)&pppuStack_c0;
        func_0x0001060c3908();
        FUN_10919d9fc(&plStack_118);
        __Unwind_Resume(plVar6);
        plVar3 = plVar5;
        if (plVar5 != param_3) {
          do {
            plVar7 = plVar3;
            func_0x0001060c3960(param_4,plVar3);
            plVar3 = plVar3 + 0xc;
            param_4 = param_4 + 0x60;
            plVar12 = plVar5;
          } while (plVar3 != param_3);
          do {
            plVar5 = plVar7;
            plVar6 = plVar12;
            func_0x0001060c39fc(plVar12);
            plVar12 = plVar12 + 0xc;
            plVar7 = plVar5;
          } while (plVar12 != param_3);
        }
        auVar18._8_8_ = plVar5;
        auVar18._0_8_ = plVar6;
        return auVar18;
      }
      plVar3 = plVar6 + 2;
      lVar4 = *plVar3 - *plVar6 >> 5;
      uVar11 = lVar4 * 0x5555555555555556;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar11 = uVar10;
      }
      if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar11 = 0x2aaaaaaaaaaaaaa;
      }
      plStack_f8 = plVar3;
      if (uVar11 == 0) {
        plVar12 = (long *)0x0;
        puStack_d0 = (undefined1 *)&pppuStack_c0;
      }
      else {
        plVar12 = plVar3;
        puStack_d0 = (undefined1 *)&pppuStack_c0;
        func_0x0001060c391c();
      }
      puVar1 = (undefined *)((long)plVar12 + lVar9);
      plStack_100 = plVar12 + uVar11 * 0xc;
      plStack_118 = plVar12;
      plStack_110 = (long *)puVar1;
      plStack_108 = (long *)puVar1;
      func_0x0001060c3960(puVar1,plVar5);
      plStack_108 = (long *)(puVar1 + 0x60);
      lVar4 = *plVar6;
      lVar9 = lVar4 - plVar6[1];
      FUN_10919d95c(plVar3,lVar4,plVar6[1],puVar1 + lVar9);
      plVar3 = plStack_108;
      plStack_118 = (long *)*plVar6;
      *plVar6 = (long)(puVar1 + lVar9);
      lVar9 = plVar6[2];
      plVar6[2] = (long)plStack_100;
      plVar6[1] = (long)plStack_108;
      plStack_110 = plStack_118;
      plStack_108 = plStack_118;
      plStack_100 = (long *)lVar9;
      FUN_10919d9fc(&plStack_118);
      auVar17._8_8_ = lVar4;
      auVar17._0_8_ = plVar3;
      return auVar17;
    }
    lVar9 = plVar3[2] - *plVar3 >> 2;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x1555555555555555;
    }
    plVar12 = param_2;
    FUN_10919d610();
    plVar5 = (long *)(uVar11 + lVar4);
    lVar4 = *param_2;
    *(int *)(plVar5 + 1) = (int)param_2[1];
    *plVar5 = lVar4;
    lVar4 = (long)plVar5 + 0xc;
    param_2 = (long *)*plVar3;
    lVar9 = (long)plVar5 - (plVar3[1] - (long)param_2);
    _memcpy(lVar9);
    plVar5 = (long *)*plVar3;
    *plVar3 = lVar9;
    plVar3[1] = lVar4;
    plVar3[2] = uVar11 + (long)plVar12 * 0xc;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar3[1] = lVar4;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar5;
  return auVar15;
}



/* Entry: 10919d610; end: 10919d653;  */

undefined1  [16] FUN_10919d610(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_1 < (long *)0x1555555555555556) {
    lVar3 = (long)param_1 * 0xc;
    __Znwm(lVar3);
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = lVar3;
    return auVar14;
  }
  func_0x000104bd35f4();
  pcStack_28 = FUN_10919d654;
  ppuStack_60 = &puStack_30;
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    lVar3 = *param_2;
    *(int *)(plVar4 + 1) = (int)param_2[1];
    *plVar4 = lVar3;
    lVar3 = (long)plVar4 + 0xc;
    plVar4 = param_1;
  }
  else {
    lVar3 = (long)plVar4 - *param_1;
    uVar10 = (lVar3 >> 2) * -0x5555555555555555 + 1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (0x1555555555555555 < uVar10) {
      FUN_10919d5fc();
      pcStack_58 = FUN_10919d748;
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar13 = puVar2 + 1;
        *puVar2 = param_2;
        plVar4 = param_1;
LAB_10919d7f8:
        param_1[1] = (long)puVar13;
        auVar16._8_8_ = param_2;
        auVar16._0_8_ = plVar4;
        return auVar16;
      }
      plVar12 = (long *)*param_1;
      lVar3 = (long)puVar2 - (long)plVar12;
      uVar10 = (lVar3 >> 3) + 1;
      plVar4 = param_2;
      if (uVar10 >> 0x3d == 0) {
        uVar8 = param_1[2] - (long)plVar12;
        uVar11 = (long)uVar8 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 >> 0x3d == 0) {
          lVar9 = uVar11 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar9 + lVar3);
          plVar5 = puVar2 + -(lVar3 >> 3);
          puVar13 = puVar2 + 1;
          *puVar2 = param_2;
          plVar4 = plVar5;
          param_2 = plVar12;
          _memcpy(plVar5,plVar12,lVar3);
          *param_1 = (long)plVar5;
          param_1[1] = (long)puVar13;
          param_1[2] = lVar9 + uVar11 * 8;
          if (plVar12 != (long *)0x0) {
            __ZdlPv(plVar12);
            plVar4 = plVar12;
          }
          goto LAB_10919d7f8;
        }
      }
      else {
        FUN_10919d81c();
      }
      func_0x000104bd35f4();
      pcStack_a8 = FUN_10919d81c;
      plVar5 = (long *)&DAT_10f62a4d8;
      pppuStack_b0 = &ppuStack_60;
      func_0x000104bd47e8();
      pcStack_b8 = FUN_10919d830;
      lVar9 = plVar5[1] - *plVar5;
      uVar10 = (lVar9 >> 5) * -0x5555555555555555 + 1;
      lStack_e0 = lVar3;
      plStack_d8 = param_2;
      plStack_d0 = plVar12;
      plStack_c8 = param_1;
      if (0x2aaaaaaaaaaaaaa < uVar10) {
        puStack_c0 = (undefined1 *)&pppuStack_b0;
        func_0x0001060c3908();
        FUN_10919d9fc(&plStack_108);
        __Unwind_Resume(plVar5);
        plVar12 = plVar4;
        if (plVar4 != param_3) {
          do {
            plVar7 = plVar12;
            func_0x0001060c3960(param_4,plVar12);
            plVar12 = plVar12 + 0xc;
            param_4 = param_4 + 0x60;
            plVar6 = plVar4;
          } while (plVar12 != param_3);
          do {
            plVar4 = plVar7;
            plVar5 = plVar6;
            func_0x0001060c39fc(plVar6);
            plVar6 = plVar6 + 0xc;
            plVar7 = plVar4;
          } while (plVar6 != param_3);
        }
        auVar18._8_8_ = plVar4;
        auVar18._0_8_ = plVar5;
        return auVar18;
      }
      plVar12 = plVar5 + 2;
      lVar3 = *plVar12 - *plVar5 >> 5;
      uVar11 = lVar3 * 0x5555555555555556;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar11 = uVar10;
      }
      if (0x155555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
        uVar11 = 0x2aaaaaaaaaaaaaa;
      }
      plStack_e8 = plVar12;
      if (uVar11 == 0) {
        plVar6 = (long *)0x0;
        puStack_c0 = (undefined1 *)&pppuStack_b0;
      }
      else {
        plVar6 = plVar12;
        puStack_c0 = (undefined1 *)&pppuStack_b0;
        func_0x0001060c391c();
      }
      puVar1 = (undefined *)((long)plVar6 + lVar9);
      plStack_f0 = plVar6 + uVar11 * 0xc;
      plStack_108 = plVar6;
      plStack_100 = (long *)puVar1;
      plStack_f8 = (long *)puVar1;
      func_0x0001060c3960(puVar1,plVar4);
      plStack_f8 = (long *)(puVar1 + 0x60);
      lVar3 = *plVar5;
      lVar9 = lVar3 - plVar5[1];
      FUN_10919d95c(plVar12,lVar3,plVar5[1],puVar1 + lVar9);
      plVar4 = plStack_f8;
      plStack_108 = (long *)*plVar5;
      *plVar5 = (long)(puVar1 + lVar9);
      lVar9 = plVar5[2];
      plVar5[2] = (long)plStack_f0;
      plVar5[1] = (long)plStack_f8;
      plStack_100 = plStack_108;
      plStack_f8 = plStack_108;
      plStack_f0 = (long *)lVar9;
      FUN_10919d9fc(&plStack_108);
      auVar17._8_8_ = lVar3;
      auVar17._0_8_ = plVar4;
      return auVar17;
    }
    lVar9 = param_1[2] - *param_1 >> 2;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0x1555555555555555;
    }
    plVar12 = param_2;
    FUN_10919d610();
    plVar4 = (long *)(uVar11 + lVar3);
    lVar3 = *param_2;
    *(int *)(plVar4 + 1) = (int)param_2[1];
    *plVar4 = lVar3;
    lVar3 = (long)plVar4 + 0xc;
    param_2 = (long *)*param_1;
    lVar9 = (long)plVar4 - (param_1[1] - (long)param_2);
    _memcpy(lVar9);
    plVar4 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = lVar3;
    param_1[2] = uVar11 + (long)plVar12 * 0xc;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar3;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar4;
  return auVar15;
}



/* Entry: 10919d654; end: 10919d747;  */

long * FUN_10919d654(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    lVar6 = *param_2;
    *(int *)(plVar3 + 1) = (int)param_2[1];
    *plVar3 = lVar6;
    lVar6 = (long)plVar3 + 0xc;
    plVar3 = param_1;
  }
  else {
    lVar6 = (long)plVar3 - *param_1;
    uVar9 = (lVar6 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar9) {
      FUN_10919d5fc();
      pcStack_38 = FUN_10919d748;
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar12 = puVar2 + 1;
        *puVar2 = param_2;
        plVar3 = param_1;
LAB_10919d7f8:
        param_1[1] = (long)puVar12;
        return plVar3;
      }
      plVar11 = (long *)*param_1;
      lVar6 = (long)puVar2 - (long)plVar11;
      uVar9 = (lVar6 >> 3) + 1;
      plVar3 = param_2;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar9 >> 0x3d == 0) {
        uVar7 = param_1[2] - (long)plVar11;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 >> 0x3d == 0) {
          lVar8 = uVar10 << 3;
          __Znwm();
          puVar2 = (undefined8 *)(lVar8 + lVar6);
          plVar4 = puVar2 + -(lVar6 >> 3);
          puVar12 = puVar2 + 1;
          *puVar2 = param_2;
          plVar3 = plVar4;
          _memcpy(plVar4,plVar11,lVar6);
          *param_1 = (long)plVar4;
          param_1[1] = (long)puVar12;
          param_1[2] = lVar8 + uVar10 * 8;
          if (plVar11 != (long *)0x0) {
            __ZdlPv(plVar11);
            plVar3 = plVar11;
          }
          goto LAB_10919d7f8;
        }
      }
      else {
        FUN_10919d81c();
      }
      func_0x000104bd35f4();
      pcStack_88 = FUN_10919d81c;
      plVar4 = (long *)&DAT_10f62a4d8;
      ppuStack_90 = &puStack_40;
      func_0x000104bd47e8();
      pcStack_98 = FUN_10919d830;
      lVar8 = plVar4[1] - *plVar4;
      uVar9 = (lVar8 >> 5) * -0x5555555555555555 + 1;
      lStack_c0 = lVar6;
      plStack_b8 = param_2;
      plStack_b0 = plVar11;
      plStack_a8 = param_1;
      if (0x2aaaaaaaaaaaaaa < uVar9) {
        puStack_a0 = (undefined1 *)&ppuStack_90;
        func_0x0001060c3908();
        FUN_10919d9fc(&plStack_e8);
        __Unwind_Resume(plVar4);
        plVar11 = plVar3;
        if (plVar3 != param_3) {
          do {
            func_0x0001060c3960(param_4,plVar11);
            plVar11 = plVar11 + 0xc;
            param_4 = param_4 + 0x60;
          } while (plVar11 != param_3);
          do {
            plVar4 = plVar3;
            func_0x0001060c39fc(plVar3);
            plVar3 = plVar3 + 0xc;
          } while (plVar3 != param_3);
        }
        return plVar4;
      }
      plVar11 = plVar4 + 2;
      lVar6 = *plVar11 - *plVar4 >> 5;
      uVar10 = lVar6 * 0x5555555555555556;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (0x155555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar10 = 0x2aaaaaaaaaaaaaa;
      }
      plStack_c8 = plVar11;
      if (uVar10 == 0) {
        plVar5 = (long *)0x0;
        puStack_a0 = (undefined1 *)&ppuStack_90;
      }
      else {
        plVar5 = plVar11;
        puStack_a0 = (undefined1 *)&ppuStack_90;
        func_0x0001060c391c();
      }
      puVar1 = (undefined *)((long)plVar5 + lVar8);
      plStack_d0 = plVar5 + uVar10 * 0xc;
      plStack_e8 = plVar5;
      plStack_e0 = (long *)puVar1;
      plStack_d8 = (long *)puVar1;
      func_0x0001060c3960(puVar1,plVar3);
      plStack_d8 = (long *)(puVar1 + 0x60);
      lVar6 = *plVar4;
      lVar8 = plVar4[1];
      FUN_10919d95c(plVar11,lVar6,lVar8,puVar1 + (lVar6 - lVar8));
      plVar3 = plStack_d8;
      plStack_e8 = (long *)*plVar4;
      *plVar4 = (long)(puVar1 + (lVar6 - lVar8));
      lVar6 = plVar4[2];
      plVar4[2] = (long)plStack_d0;
      plVar4[1] = (long)plStack_d8;
      plStack_e0 = plStack_e8;
      plStack_d8 = plStack_e8;
      plStack_d0 = (long *)lVar6;
      FUN_10919d9fc(&plStack_e8);
      return plVar3;
    }
    lVar8 = param_1[2] - *param_1 >> 2;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    plVar11 = param_2;
    FUN_10919d610();
    plVar3 = (long *)(uVar10 + lVar6);
    lVar6 = *param_2;
    *(int *)(plVar3 + 1) = (int)param_2[1];
    *plVar3 = lVar6;
    lVar6 = (long)plVar3 + 0xc;
    lVar8 = (long)plVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = lVar6;
    param_1[2] = uVar10 + (long)plVar11 * 0xc;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar6;
  return plVar3;
}



/* Entry: 10919d748; end: 10919d81b;  */

long * FUN_10919d748(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar12 = puVar2 + 1;
    *puVar2 = param_2;
    plVar4 = param_1;
LAB_10919d7f8:
    param_1[1] = (long)puVar12;
    return plVar4;
  }
  plVar10 = (long *)*param_1;
  lVar11 = (long)puVar2 - (long)plVar10;
  uVar9 = (lVar11 >> 3) + 1;
  plVar4 = param_2;
  if (uVar9 >> 0x3d == 0) {
    uVar7 = param_1[2] - (long)plVar10;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d == 0) {
      lVar3 = uVar8 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar11);
      plVar5 = puVar2 + -(lVar11 >> 3);
      puVar12 = puVar2 + 1;
      *puVar2 = param_2;
      plVar4 = plVar5;
      _memcpy(plVar5,plVar10,lVar11);
      *param_1 = (long)plVar5;
      param_1[1] = (long)puVar12;
      param_1[2] = lVar3 + uVar8 * 8;
      if (plVar10 != (long *)0x0) {
        __ZdlPv(plVar10);
        plVar4 = plVar10;
      }
      goto LAB_10919d7f8;
    }
  }
  else {
    FUN_10919d81c();
  }
  func_0x000104bd35f4();
  pcStack_58 = FUN_10919d81c;
  plVar5 = (long *)&DAT_10f62a4d8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000104bd47e8();
  pcStack_68 = FUN_10919d830;
  lVar3 = plVar5[1] - *plVar5;
  uVar9 = (lVar3 >> 5) * -0x5555555555555555 + 1;
  lStack_90 = lVar11;
  plStack_88 = param_2;
  plStack_80 = plVar10;
  plStack_78 = param_1;
  if (0x2aaaaaaaaaaaaaa < uVar9) {
    puStack_70 = (undefined1 *)&puStack_60;
    func_0x0001060c3908();
    FUN_10919d9fc(&plStack_b8);
    __Unwind_Resume(plVar5);
    plVar10 = plVar4;
    if (plVar4 != param_3) {
      do {
        func_0x0001060c3960(param_4,plVar10);
        plVar10 = plVar10 + 0xc;
        param_4 = param_4 + 0x60;
      } while (plVar10 != param_3);
      do {
        plVar5 = plVar4;
        func_0x0001060c39fc(plVar4);
        plVar4 = plVar4 + 0xc;
      } while (plVar4 != param_3);
    }
    return plVar5;
  }
  plVar10 = plVar5 + 2;
  lVar11 = *plVar10 - *plVar5 >> 5;
  uVar8 = lVar11 * 0x5555555555555556;
  if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
    uVar8 = uVar9;
  }
  if (0x155555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
    uVar8 = 0x2aaaaaaaaaaaaaa;
  }
  plStack_98 = plVar10;
  if (uVar8 == 0) {
    plVar6 = (long *)0x0;
    puStack_70 = (undefined1 *)&puStack_60;
  }
  else {
    plVar6 = plVar10;
    puStack_70 = (undefined1 *)&puStack_60;
    func_0x0001060c391c();
  }
  puVar1 = (undefined *)((long)plVar6 + lVar3);
  plStack_a0 = plVar6 + uVar8 * 0xc;
  plStack_b8 = plVar6;
  plStack_b0 = (long *)puVar1;
  plStack_a8 = (long *)puVar1;
  func_0x0001060c3960(puVar1,plVar4);
  plStack_a8 = (long *)(puVar1 + 0x60);
  lVar11 = *plVar5;
  lVar3 = plVar5[1];
  FUN_10919d95c(plVar10,lVar11,lVar3,puVar1 + (lVar11 - lVar3));
  plVar4 = plStack_a8;
  plStack_b8 = (long *)*plVar5;
  *plVar5 = (long)(puVar1 + (lVar11 - lVar3));
  lVar11 = plVar5[2];
  plVar5[2] = (long)plStack_a0;
  plVar5[1] = (long)plStack_a8;
  plStack_b0 = plStack_b8;
  plStack_a8 = plStack_b8;
  plStack_a0 = (long *)lVar11;
  FUN_10919d9fc(&plStack_b8);
  return plVar4;
}



/* Entry: 10919d81c; end: 10919d82f;  */

long * FUN_10919d81c(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar7 = plVar2[1] - *plVar2;
  uVar5 = (lVar7 >> 5) * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar5) {
    func_0x0001060c3908();
    FUN_10919d9fc(&plStack_68);
    __Unwind_Resume(plVar2);
    plVar8 = param_2;
    if (param_2 != param_3) {
      do {
        func_0x0001060c3960(param_4,plVar8);
        plVar8 = plVar8 + 0xc;
        param_4 = param_4 + 0x60;
      } while (plVar8 != param_3);
      do {
        plVar2 = param_2;
        func_0x0001060c39fc(param_2);
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    return plVar2;
  }
  plVar8 = plVar2 + 2;
  lVar4 = *plVar8 - *plVar2 >> 5;
  uVar6 = lVar4 * 0x5555555555555556;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = uVar5;
  }
  if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar6 = 0x2aaaaaaaaaaaaaa;
  }
  plStack_48 = plVar8;
  if (uVar6 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = plVar8;
    func_0x0001060c391c();
  }
  puVar1 = (undefined *)((long)plVar3 + lVar7);
  plStack_50 = plVar3 + uVar6 * 0xc;
  plStack_68 = plVar3;
  plStack_60 = (long *)puVar1;
  plStack_58 = (long *)puVar1;
  func_0x0001060c3960(puVar1,param_2);
  plStack_58 = (long *)(puVar1 + 0x60);
  lVar7 = *plVar2;
  lVar4 = plVar2[1];
  FUN_10919d95c(plVar8,lVar7,lVar4,puVar1 + (lVar7 - lVar4));
  plVar8 = plStack_58;
  plStack_68 = (long *)*plVar2;
  *plVar2 = (long)(puVar1 + (lVar7 - lVar4));
  lVar7 = plVar2[2];
  plVar2[2] = (long)plStack_50;
  plVar2[1] = (long)plStack_58;
  plStack_60 = plStack_68;
  plStack_58 = plStack_68;
  plStack_50 = (long *)lVar7;
  FUN_10919d9fc(&plStack_68);
  return plVar8;
}



/* Entry: 10919d830; end: 10919d95b;  */

long * FUN_10919d830(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 5) * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar3) {
    func_0x0001060c3908();
    FUN_10919d9fc(&plStack_58);
    __Unwind_Resume(param_1);
    plVar6 = param_2;
    if (param_2 != param_3) {
      do {
        func_0x0001060c3960(param_4,plVar6);
        plVar6 = plVar6 + 0xc;
        param_4 = param_4 + 0x60;
      } while (plVar6 != param_3);
      do {
        param_1 = param_2;
        func_0x0001060c39fc(param_2);
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    return param_1;
  }
  plVar6 = param_1 + 2;
  lVar2 = *plVar6 - *param_1 >> 5;
  uVar4 = lVar2 * 0x5555555555555556;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = uVar3;
  }
  if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
    uVar4 = 0x2aaaaaaaaaaaaaa;
  }
  plStack_38 = plVar6;
  if (uVar4 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = plVar6;
    func_0x0001060c391c();
  }
  lVar5 = (long)plVar1 + lVar5;
  plStack_40 = plVar1 + uVar4 * 0xc;
  plStack_58 = plVar1;
  plStack_50 = (long *)lVar5;
  plStack_48 = (long *)lVar5;
  func_0x0001060c3960(lVar5,param_2);
  plStack_48 = (long *)(lVar5 + 0x60);
  lVar5 = lVar5 + (*param_1 - param_1[1]);
  FUN_10919d95c(plVar6,*param_1,param_1[1],lVar5);
  plVar6 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar5;
  lVar5 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar5;
  FUN_10919d9fc(&plStack_58);
  return plVar6;
}



/* Entry: 10919d95c; end: 10919d9fb;  */

void FUN_10919d95c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      func_0x0001060c3960(param_4,lVar1);
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + 0x60;
    } while (lVar1 != param_3);
    do {
      func_0x0001060c39fc(param_2);
      param_2 = param_2 + 0x60;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10919d9fc; end: 10919da87;  */

long * FUN_10919d9fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0x60;
    func_0x0001060c39fc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10919da88; end: 10919dd43;  */

undefined8 *
FUN_10919da88(undefined8 *param_1,int param_2,undefined1 param_3,long param_4,undefined1 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int *)(param_1 + 1) = param_2;
  uVar3 = 40000;
  if (param_2 != 1) {
    uVar3 = 0xf424;
  }
  uVar1 = 0x57e4;
  if (param_2 != 2) {
    uVar1 = uVar3;
  }
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *param_1 = &PTR_FUN_110adf1d8;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[0xb] = 0x405fc00000000000;
  param_1[10] = 0x405fc00000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0x405fc00000000000;
  param_1[0x15] = 0;
  param_1[0xf] = 0x800000080;
  param_1[0x10] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  if (*(char *)(param_4 + 0x17) < '\0') {
    if (*(long *)(param_4 + 8) == 0) goto LAB_10919dc28;
  }
  else if (*(char *)(param_4 + 0x17) == '\0') {
LAB_10919dc28:
    *(undefined1 *)(param_1 + 7) = 0;
    return param_1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  auStack_b0[0] = 0;
  uStack_ac = 0;
  uStack_a0 = 0x405fc00000000000;
  uStack_a8 = 0x405fc00000000000;
  uStack_98 = 0x405fc00000000000;
  uStack_90 = 0;
  uStack_78 = 0x3f800000;
  uStack_6f = 0;
  uStack_80 = 0x800000100;
  uStack_88 = 0x400000004;
  uVar2 = 600;
  uStack_70 = param_5;
  __Znwm(600);
  func_0x000107c278b8(auStack_c8,"image");
  func_0x000107c278b8(auStack_e0,&UNK_10f55a914);
  FUN_10959ddd0(uVar2,param_4,auStack_b0,1,auStack_c8,auStack_e0);
  FUN_109195c84(param_1 + 8,uVar2);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  return param_1;
}



/* Entry: 10919dd44; end: 10919ddbb;  */

undefined8 * FUN_10919dd44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adf1d8;
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  FUN_109195c84(param_1 + 8,0);
  *param_1 = &PTR_FUN_110adf1b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10919ddbc; end: 10919ddbf;  */

undefined8 * FUN_10919ddbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adf1d8;
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  FUN_109195c84(param_1 + 8,0);
  *param_1 = &PTR_FUN_110adf1b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10919ddc0; end: 10919ddd3;  */

void FUN_10919ddc0(void)

{
  FUN_10919dd44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10919ddd4; end: 10919ec8f;  */

void FUN_10919ddd4(undefined4 *param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  double dVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined4 uStack_548;
  int iStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  long lStack_510;
  undefined4 *puStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  int iStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  long lStack_4b0;
  undefined4 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  int iStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  long lStack_450;
  undefined4 *puStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_424;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  int iStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  long lStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  int iStack_364;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_330;
  long lStack_328;
  undefined1 *puStack_320;
  undefined1 auStack_318 [16];
  undefined4 auStack_308 [2];
  undefined4 *puStack_300;
  undefined8 uStack_2f8;
  undefined4 *puStack_2f0;
  undefined4 *puStack_2e8;
  undefined4 *puStack_2e0;
  undefined2 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined4 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
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
  long lStack_268;
  undefined4 *puStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
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
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3c8 = 0x42ff0000;
  uStack_3bc = 0;
  uStack_3b8 = 0;
  iStack_3c4 = 0;
  uStack_3c0 = 0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  uStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_39c = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  puStack_388 = (undefined8 *)&uStack_3c0;
  lStack_390 = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_428 = 0x42ff0000;
  lStack_3e8 = (long)&uStack_424 + 4;
  uStack_41c = 0;
  uStack_418 = 0;
  uStack_424 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  uStack_414 = 0;
  uStack_410 = 0;
  uStack_3fc = 0;
  uStack_404 = 0;
  uStack_400 = 0;
  lStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_3f4 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  puStack_3e0 = &uStack_3d8;
  puStack_380 = &uStack_378;
  FUN_109199f7c(param_2,param_3,param_5,&uStack_3c8,&uStack_428);
  uStack_488 = 0x42ff0000;
  puStack_448 = &uStack_480;
  uStack_47c = 0;
  uStack_478 = 0;
  iStack_484 = 0;
  uStack_480 = 0;
  uStack_46c = 0;
  uStack_468 = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  uStack_45c = 0;
  uStack_464 = 0;
  uStack_460 = 0;
  lStack_450 = 0;
  uStack_458 = 0;
  uStack_454 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_4e8 = 0x42ff0000;
  puStack_4a8 = &uStack_4e0;
  uStack_4dc = 0;
  uStack_4d8 = 0;
  iStack_4e4 = 0;
  uStack_4e0 = 0;
  uStack_4cc = 0;
  uStack_4c8 = 0;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4bc = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  lStack_4b0 = 0;
  uStack_4b8 = 0;
  uStack_4b4 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_548 = 0x42ff0000;
  puStack_508 = &uStack_540;
  uStack_53c = 0;
  uStack_538 = 0;
  iStack_544 = 0;
  uStack_540 = 0;
  uStack_52c = 0;
  uStack_528 = 0;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_51c = 0;
  uStack_524 = 0;
  uStack_520 = 0;
  lStack_510 = 0;
  uStack_518 = 0;
  uStack_514 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  puStack_500 = &uStack_4f8;
  puStack_4a0 = &uStack_498;
  puStack_440 = &uStack_438;
  FUN_10919a408(param_2,&uStack_428,&uStack_488,&uStack_548,&uStack_558);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    iVar10 = (int)((ulong)uStack_550 >> 0x20);
    if ((int)uStack_550 * iVar10 < 0xfa1) goto LAB_10919e604;
    uVar12 = NEON_scvtf(uStack_550,4);
    iVar11 = (int)((float)uVar12 * 0.4);
    iVar13 = (int)((float)((ulong)uVar12 >> 0x20) * 0.4);
    iVar14 = (int)((ulong)uStack_558 >> 0x20);
    uStack_2c8 = NEON_smax(CONCAT44(iVar14 - iVar13,(int)uStack_558 - iVar11),0,4);
    uVar12 = NEON_rev64(CONCAT44(uStack_3bc,uStack_3c0),4);
    uVar12 = NEON_smin(uVar12,CONCAT44(iVar10 + iVar14 + iVar13,
                                       (int)uStack_550 + (int)uStack_558 + iVar11),4);
    uStack_2c0 = CONCAT44((int)((ulong)uVar12 >> 0x20) - (int)((ulong)uStack_2c8 >> 0x20),
                          (int)uVar12 - (int)uStack_2c8);
    uVar12 = NEON_rev64(*puStack_388,4);
    uStack_140 = (undefined4)uVar12;
    iStack_13c = (int)((ulong)uVar12 >> 0x20);
    FUN_109a829e8(&uStack_2a0,&uStack_140,0);
    (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
              ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_4e8,0xffffffff);
    FUN_10918eb6c(&uStack_2a0);
    uStack_2a0 = 0x42ff0000;
    puStack_260 = &uStack_298;
    uStack_294 = 0;
    uStack_290 = 0;
    iStack_29c = 0;
    uStack_298 = 0;
    uStack_284 = 0;
    uStack_280 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_140 = 0x1010000;
    uStack_138 = &uStack_3c8;
    uStack_e0 = 0x2010000;
    uStack_d0 = 0;
    uStack_cc = 0;
    puStack_258 = &uStack_250;
    uStack_d8 = &uStack_2a0;
    FUN_109ac9fc8(&uStack_140,&uStack_e0,4,0);
    FUN_109a852c8(&uStack_140,&uStack_2a0,&uStack_2c8);
    FUN_10959fba0(*(undefined8 *)(param_2 + 0x40),&uStack_140);
    uStack_2cc = 1;
    puVar5 = (undefined4 *)0x4;
    __Znwm();
    puStack_2e8 = puVar5 + 1;
    *puVar5 = 2;
    uStack_e0 = 1;
    iStack_dc = 3;
    uStack_d8._0_4_ = 4;
    uStack_2a8 = 0;
    lStack_2b8 = 0;
    puStack_2b0 = (undefined4 *)0x0;
    puStack_2f0 = puVar5;
    puStack_2e0 = puStack_2e8;
    func_0x000107c27fd4(&lStack_2b8,&uStack_e0,(long)&uStack_d8 + 4,3);
    FUN_10959f60c(&uStack_e0,*(undefined8 *)(param_2 + 0x40),&lStack_2b8,&puStack_2f0);
    FUN_109a852c8(&uStack_368,&uStack_4e8,&uStack_2c8);
    auStack_308[0] = 0xc2010000;
    uStack_2f8 = 0;
    puStack_300 = &uStack_368;
    FUN_109a479a0(&uStack_e0,auStack_308);
    if (lStack_330 != 0) {
      piVar1 = (int *)(lStack_330 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_368);
      }
    }
    lStack_330 = 0;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    if (0 < iStack_364) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lStack_328 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_364);
    }
    if (puStack_320 != auStack_318 && puStack_320 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_320 + -8));
    }
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    lStack_a8 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    if (0 < iStack_dc) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_a0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_dc);
    }
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
    if (lStack_2b8 != 0) {
      puStack_2b0 = (undefined4 *)lStack_2b8;
      __ZdlPv();
    }
    __ZdlPv(puVar5);
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (0 < iStack_13c) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_100 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_13c);
    }
    if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
      _free(puStack_f8[-1]);
    }
    if (lStack_268 != 0) {
      piVar1 = (int *)(lStack_268 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    lStack_268 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    if (0 < iStack_29c) {
      lVar9 = 0;
      do {
        puStack_260[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_29c);
    }
    if (puStack_258 != &uStack_250 && puStack_258 != (undefined8 *)0x0) {
      _free(puStack_258[-1]);
    }
    FUN_109a7ef1c(&uStack_2a0,&uStack_4e8,&uStack_548);
    uStack_140 = 0x42ff0000;
    puStack_100 = &uStack_138;
    uStack_138._4_4_ = 0;
    uStack_130 = 0;
    iStack_13c = 0;
    uStack_138._0_4_ = 0;
    lStack_108 = 0;
    uStack_10c = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    puStack_f8 = &uStack_f0;
    (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
              ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_140,0xffffffff);
    FUN_10918eb6c(&uStack_2a0);
    FUN_109a7f0b8(&uStack_2a0,&uStack_4e8,&uStack_548);
    uStack_e0 = 0x42ff0000;
    puStack_a0 = &uStack_d8;
    uStack_d8._4_4_ = 0;
    uStack_d0 = 0;
    iStack_dc = 0;
    uStack_d8._0_4_ = 0;
    lStack_a8 = 0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = &uStack_90;
    (**(code **)(*(long *)CONCAT44(iStack_29c,uStack_2a0) + 0x18))
              ((long *)CONCAT44(iStack_29c,uStack_2a0),&uStack_2a0,&uStack_e0,0xffffffff);
    FUN_10918eb6c(&uStack_2a0);
    puStack_2e0 = (undefined4 *)0x0;
    puStack_2f0 = (undefined4 *)CONCAT44(puStack_2f0._4_4_,0x1010000);
    puStack_2e8 = &uStack_140;
    FUN_109ab74d4(&uStack_2a0,&puStack_2f0);
    dVar4 = (double)CONCAT44(iStack_29c,uStack_2a0);
    uStack_2a8 = 0;
    lStack_2b8 = CONCAT44(lStack_2b8._4_4_,0x1010000);
    puStack_2b0 = &uStack_e0;
    FUN_109ab74d4(&uStack_368,&lStack_2b8);
    if (lStack_a8 != 0) {
      piVar1 = (int *)(lStack_a8 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    lStack_a8 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    if (0 < iStack_dc) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_a0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_dc);
    }
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
    if (lStack_108 != 0) {
      piVar1 = (int *)(lStack_108 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_140);
      }
    }
    lStack_108 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    if (0 < iStack_13c) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_100 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_13c);
    }
    if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
      _free(puStack_f8[-1]);
    }
    if ((float)(dVar4 / (double)CONCAT44(iStack_364,uStack_368)) <= 0.7) goto LAB_10919e604;
    if (lStack_4b0 != 0) {
      piVar1 = (int *)(lStack_4b0 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_450 != 0) {
      piVar1 = (int *)(lStack_450 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_488);
      }
    }
    lStack_450 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    if (iStack_484 < 1) {
      uStack_488 = uStack_4e8;
LAB_10919e728:
      uStack_488 = uStack_4e8;
      if (2 < iStack_4e4) goto LAB_10919e75c;
      iStack_484 = iStack_4e4;
      uStack_480 = uStack_4e0;
      uStack_47c = uStack_4dc;
      *puStack_440 = *puStack_4a0;
      puStack_440[1] = puStack_4a0[1];
    }
    else {
      lVar9 = 0;
      do {
        puStack_448[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_484);
      uStack_488 = uStack_4e8;
      if (iStack_484 < 3) goto LAB_10919e728;
LAB_10919e75c:
      uStack_488 = uStack_4e8;
      func_0x000109a84868(&uStack_488,&uStack_4e8);
    }
    uVar8 = 0;
    uStack_470 = uStack_4d0;
    uStack_46c = uStack_4cc;
    uStack_478 = uStack_4d8;
    uStack_474 = uStack_4d4;
    puVar5 = &uStack_4e8;
  }
  else {
LAB_10919e604:
    FUN_10919aed0(param_2,&uStack_3c8,&uStack_488,&uStack_558);
    uVar6 = param_2;
    FUN_10919bd24(param_2,&uStack_488);
    if ((uVar6 & 1) != 0) {
      uVar8 = 1;
      goto LAB_10919e78c;
    }
    if (lStack_510 != 0) {
      piVar1 = (int *)(lStack_510 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_450 != 0) {
      piVar1 = (int *)(lStack_450 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_488);
      }
    }
    lStack_450 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    if (iStack_484 < 1) {
      uStack_488 = uStack_548;
LAB_10919e6cc:
      uStack_488 = uStack_548;
      if (2 < iStack_544) goto LAB_10919e700;
      iStack_484 = iStack_544;
      uStack_480 = uStack_540;
      uStack_47c = uStack_53c;
      *puStack_440 = *puStack_500;
      puStack_440[1] = puStack_500[1];
    }
    else {
      lVar9 = 0;
      do {
        puStack_448[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_484);
      uStack_488 = uStack_548;
      if (iStack_484 < 3) goto LAB_10919e6cc;
LAB_10919e700:
      uStack_488 = uStack_548;
      func_0x000109a84868(&uStack_488,&uStack_548);
    }
    uStack_470 = uStack_530;
    uStack_46c = uStack_52c;
    uStack_478 = uStack_538;
    uStack_474 = uStack_534;
    uVar8 = 1;
    puVar5 = &uStack_548;
  }
  lStack_450 = *(long *)(puVar5 + 0xe);
  uStack_460 = (undefined4)*(undefined8 *)(puVar5 + 10);
  uStack_45c = (undefined4)((ulong)*(undefined8 *)(puVar5 + 10) >> 0x20);
  uStack_468 = (undefined4)*(undefined8 *)(puVar5 + 8);
  uStack_464 = (undefined4)((ulong)*(undefined8 *)(puVar5 + 8) >> 0x20);
  uStack_458 = (undefined4)*(undefined8 *)(puVar5 + 0xc);
  uStack_454 = (undefined4)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20);
LAB_10919e78c:
  *(undefined4 *)(param_2 + 0x3c) = uVar8;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_10919bef0(param_2,&uStack_488,param_1);
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0 = 0x1010000;
  uStack_298 = SUB84(param_1,0);
  uStack_294 = (undefined4)((ulong)param_1 >> 0x20);
  uStack_140 = 0x2010000;
  uStack_130 = 0;
  uStack_12c = 0;
  uVar12 = NEON_rev64(**(undefined8 **)(param_4 + 0x40),4);
  uStack_e0 = (undefined4)uVar12;
  iStack_dc = (int)((ulong)uVar12 >> 0x20);
  puVar7 = &uStack_2a0;
  puVar5 = &uStack_140;
  uStack_138._0_4_ = uStack_298;
  uStack_138._4_4_ = uStack_294;
  FUN_109b0f718(0,0,puVar7,puVar5,&uStack_e0,1);
  iVar10 = (int)puVar5;
  if (lStack_510 != 0) {
    piVar1 = (int *)(lStack_510 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7 = &uStack_548;
      func_0x000109a848d4(puVar7);
    }
  }
  lStack_510 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_520 = 0;
  uStack_51c = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  if (0 < iStack_544) {
    lVar9 = 0;
    do {
      puStack_508[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_544);
  }
  if (puStack_500 != &uStack_4f8 && puStack_500 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_500[-1];
    _free(puVar7);
  }
  if (lStack_4b0 != 0) {
    piVar1 = (int *)(lStack_4b0 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7 = &uStack_4e8;
      func_0x000109a848d4(puVar7);
    }
  }
  lStack_4b0 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  if (0 < iStack_4e4) {
    lVar9 = 0;
    do {
      puStack_4a8[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_4e4);
  }
  if (puStack_4a0 != &uStack_498 && puStack_4a0 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_4a0[-1];
    _free(puVar7);
  }
  if (lStack_450 != 0) {
    piVar1 = (int *)(lStack_450 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7 = &uStack_488;
      func_0x000109a848d4(puVar7);
    }
  }
  lStack_450 = 0;
  uStack_470 = 0;
  uStack_46c = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_460 = 0;
  uStack_45c = 0;
  uStack_468 = 0;
  uStack_464 = 0;
  if (0 < iStack_484) {
    lVar9 = 0;
    do {
      puStack_448[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_484);
  }
  if (puStack_440 != &uStack_438 && puStack_440 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_440[-1];
    _free(puVar7);
  }
  if (lStack_3f0 != 0) {
    piVar1 = (int *)(lStack_3f0 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7 = &uStack_428;
      func_0x000109a848d4(puVar7);
    }
  }
  lStack_3f0 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  if (0 < (int)uStack_424) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_3e8 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_424);
  }
  if (puStack_3e0 != &uStack_3d8 && puStack_3e0 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_3e0[-1];
    _free(puVar7);
  }
  if (lStack_390 != 0) {
    piVar1 = (int *)(lStack_390 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7 = &uStack_3c8;
      func_0x000109a848d4(puVar7);
    }
  }
  lStack_390 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  if (0 < iStack_3c4) {
    lVar9 = 0;
    do {
      *(undefined4 *)((long)puStack_388 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_3c4);
  }
  if (puStack_380 != &uStack_378 && puStack_380 != (undefined8 *)0x0) {
    puVar7 = (undefined4 *)puStack_380[-1];
    _free(puVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    func_0x000104bd46a0(puVar7);
    func_0x00010567aa40(param_1);
    func_0x00010567aa40(&uStack_548);
    func_0x00010567aa40(&uStack_4e8);
    func_0x00010567aa40(&uStack_488);
    func_0x00010567aa40(&uStack_428);
    func_0x00010567aa40(&uStack_3c8);
  }
  __Unwind_Resume(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c028e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10919ec90; end: 10919ec9b; -[SCBaseAutoCounter initWithMeasure:] */

void FUN_10919ec90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c028e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMeasure_params__1125e7d80,param_3,
             PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 10919ec9c; end: 10919ed3f; -[SCBaseAutoCounter initWithMeasure:params:] */

undefined1 *
FUN_10919ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10919ed40; end: 10919efe3; -[SCBaseAutoCounter increment:] */

void FUN_10919ed40(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 8);
  puVar3 = param_3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c231800();
  uVar5 = uVar2;
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010bf2cdc0(uVar6,param_2,puVar3);
    if ((int)uVar6 != 0) {
      puVar3 = PTR_PTR_1126b93d0;
      func_0x00010bf121a0(PTR_PTR_1126b93d0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c08fa60();
      if (0x3f < uVar4) {
        func_0x00010c260c20(uVar2,param_2,0x3f);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfc5300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f2b1d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar8 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,puVar7,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar9 = *(long *)(param_1 + 0x10);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf52a60();
      if (lVar10 != 0) {
        lVar13 = *plStack_120;
        do {
          lVar11 = 0;
          puVar3 = puVar8;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(lVar9);
            }
            uVar12 = *(undefined8 *)(lStack_128 + lVar11 * 8);
            uVar6 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c0e00e0(uVar6,param_2,uVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c2ac460(puVar3,param_2,uVar12,uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(uVar6);
            lVar11 = lVar11 + 1;
            puVar3 = puVar8;
          } while (lVar10 != lVar11);
          lVar10 = lVar9;
          func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar10 != 0);
      }
      _objc_release();
      func_0x00010b256a70();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar10;
      func_0x00010c281080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010bfec320();
      _objc_release(lVar13);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(puVar7);
      _objc_release(puVar8);
      param_4 = param_3;
    }
  }
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126c02c8;
  _objc_retain(param_4);
  _objc_retain(puVar3);
  _objc_alloc(puVar7);
  func_0x00010c028e60();
  _objc_release(param_4);
  _objc_release(puVar3);
  func_0x00010bfec2a0(puVar7,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10919efe4; end: 10919f05b; +[SCBaseAutoCounter incrementForMeasure:params:] */

void FUN_10919efe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c02c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028e60();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfec2a0(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10919f05c; end: 10919f09f; +[SCBaseAutoCounter incrementForMeasure:] */

void FUN_10919f05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bfec580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10919f0a0; end: 10919f11b; +[SCBaseAutoCounter incrementForMeasure:params:amount:] */

void FUN_10919f0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c02c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028e60();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfec2a0(puVar1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10919f11c; end: 10919f14b; -[SCBaseAutoCounter .cxx_destruct] */

void FUN_10919f11c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10919f14c; end: 10919f173; -[SCBaseAutoMeasureEvent toString] */

void FUN_10919f14c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10919f174; end: 10919f17b; -[SCBaseAutoMeasureEvent getSampleRate] */

undefined8 FUN_10919f174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10919f17c; end: 10919f1a3; -[SCBaseAutoMeasureEvent getEventName] */

void FUN_10919f17c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10919f1a4; end: 10919f1cb; -[SCBaseAutoMeasureEvent getEventNamespace] */

void FUN_10919f1a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10919f1cc; end: 10919f1db; -[SCBaseAutoMeasureEvent shouldLogODP] */

void FUN_10919f1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d22c8);
  return;
}



/* Entry: 10919f1dc; end: 10919f1eb; -[SCBaseAutoMeasureEvent shouldLogGraphene] */

void FUN_10919f1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d22e0);
  return;
}



/* Entry: 10919f1ec; end: 10919f2ff; -[SCBaseAutoMeasureEvent initWithEventName:sampleRate:measureType:sliceNames:loggingTypes:eventNamespace:] */

undefined1 *
FUN_10919f1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112700a38;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10919f300; end: 10919f437; -[SCBaseAutoMeasureEvent hasValidSlicesForSCBaseAutoCounter:] */

undefined * FUN_10919f300(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        puVar10 = *(undefined8 **)(lStack_118 + lVar15 * 8);
        lVar3 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          puVar12 = (undefined *)0x0;
          goto LAB_10919f3ec;
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar11;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar12 = (undefined *)0x1;
LAB_10919f3ec:
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined1 *)puVar10;
  _objc_retain(puVar10);
  uVar4 = *(ulong *)(param_3 + 0x20);
  func_0x00010bf529e0();
  if (uVar4 < 3) {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    lVar11 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar14 = *plStack_240;
      do {
        lVar15 = 0;
        do {
          puVar7 = (undefined1 *)puVar13;
          if (*plStack_240 != lVar14) {
            _objc_enumerationMutation(lVar11);
            puVar7 = (undefined1 *)puVar13;
          }
          puVar13 = *(undefined8 **)(lStack_248 + lVar15 * 8);
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar5 = (undefined1 *)puVar13;
          _objc_opt_isKindOfClass(puVar13,puVar12);
          if ((((ulong)puVar5 & 1) == 0) ||
             (puVar5 = (undefined1 *)puVar13, func_0x00010c08fa60(), (undefined1 *)0x10 < puVar5)) {
LAB_10919f5b8:
            puVar12 = (undefined *)0x0;
            goto LAB_10919f5bc;
          }
          puVar5 = (undefined1 *)puVar10;
          puVar7 = (undefined1 *)puVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar6 = puVar5;
          _objc_opt_isKindOfClass(puVar5,puVar12);
          _objc_release(puVar5);
          if (((ulong)puVar6 & 1) == 0) goto LAB_10919f5b8;
          puVar7 = (undefined1 *)puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010c08fa60();
          _objc_release(puVar7);
          puVar7 = (undefined1 *)puVar13;
          if ((undefined1 *)0x40 < puVar5) goto LAB_10919f5b8;
          lVar15 = lVar15 + 1;
        } while (lVar2 != lVar15);
        lVar2 = lVar11;
        puVar13 = &uStack_250;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    puVar12 = (undefined *)0x1;
    puVar7 = (undefined1 *)puVar13;
LAB_10919f5bc:
    _objc_release(lVar11);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    if (puVar10 == (undefined8 *)puVar7) {
      puVar12 = (undefined *)0x1;
    }
    else {
      puVar12 = (undefined *)0x0;
      if ((puVar10 != (undefined8 *)0x0) && (puVar7 != (undefined1 *)0x0)) {
        puVar5 = (undefined1 *)puVar10;
        _objc_opt_class(puVar10);
        puVar6 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar5);
        if (((ulong)puVar6 & 1) == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar7);
          iVar1 = (int)*(undefined8 *)((long)puVar10 + 8);
          func_0x00010c0720c0();
          if (((iVar1 == 0) || (*(double *)((long)puVar10 + 0x10) != *(double *)(puVar7 + 0x10))) ||
             (*(long *)((long)puVar10 + 0x18) != *(long *)(puVar7 + 0x18))) {
            puVar12 = (undefined *)0x0;
          }
          else {
            puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            func_0x00010c072060(puVar8);
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
        }
      }
    }
    _objc_release(puVar7);
    return puVar12;
  }
  return puVar12;
}



/* Entry: 10919f438; end: 10919f60b; -[SCBaseAutoMeasureEvent canLogGraphene:] */

undefined * FUN_10919f438(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar2 < 3) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          puVar6 = (undefined1 *)puVar11;
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar9);
            puVar6 = (undefined1 *)puVar11;
          }
          puVar11 = *(undefined8 **)(lStack_128 + lVar13 * 8);
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar4 = (undefined1 *)puVar11;
          _objc_opt_isKindOfClass(puVar11,puVar10);
          if ((((ulong)puVar4 & 1) == 0) ||
             (puVar4 = (undefined1 *)puVar11, func_0x00010c08fa60(), (undefined1 *)0x10 < puVar4)) {
LAB_10919f5b8:
            puVar10 = (undefined *)0x0;
            goto LAB_10919f5bc;
          }
          puVar4 = param_3;
          puVar6 = (undefined1 *)puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar5 = puVar4;
          _objc_opt_isKindOfClass(puVar4,puVar10);
          _objc_release(puVar4);
          if (((ulong)puVar5 & 1) == 0) goto LAB_10919f5b8;
          puVar6 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          func_0x00010c08fa60();
          _objc_release(puVar6);
          puVar6 = (undefined1 *)puVar11;
          if ((undefined1 *)0x40 < puVar4) goto LAB_10919f5b8;
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        lVar3 = lVar9;
        puVar11 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    puVar10 = (undefined *)0x1;
    puVar6 = (undefined1 *)puVar11;
LAB_10919f5bc:
    _objc_release(lVar9);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    if (param_3 == puVar6) {
      puVar10 = (undefined *)0x1;
    }
    else {
      puVar10 = (undefined *)0x0;
      if ((param_3 != (undefined1 *)0x0) && (puVar6 != (undefined1 *)0x0)) {
        puVar4 = param_3;
        _objc_opt_class(param_3);
        puVar5 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar6);
          iVar1 = (int)*(undefined8 *)(param_3 + 8);
          func_0x00010c0720c0();
          if (((iVar1 == 0) || (*(double *)(param_3 + 0x10) != *(double *)(puVar6 + 0x10))) ||
             (*(long *)(param_3 + 0x18) != *(long *)(puVar6 + 0x18))) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar7;
            func_0x00010c072060(puVar7);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          _objc_release(puVar6);
        }
      }
    }
    _objc_release(puVar6);
    return puVar10;
  }
  return puVar10;
}



/* Entry: 10919f60c; end: 10919f71f; -[SCBaseAutoMeasureEvent isEqual:] */

undefined * FUN_10919f60c(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    puVar6 = (undefined *)0x1;
  }
  else {
    puVar6 = (undefined *)0x0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_3);
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010c0720c0();
        if (((iVar1 == 0) || (*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c072060(puVar4);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(param_3);
      }
    }
  }
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10919f720; end: 10919f767; -[SCBaseAutoMeasureEvent .cxx_destruct] */

void FUN_10919f720(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10919f768; end: 10919f7b7; -[SCBaseAutoTimer initWithMeasure:] */

undefined8 FUN_10919f768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c028ea0(param_1,param_2,param_3,PTR____NSDictionary0__struct_11034ab58);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10919f7b8; end: 10919f81f; -[SCBaseAutoTimer initWithMeasure:params:] */

undefined8
FUN_10919f7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c028ea0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10919f820; end: 10919f82b; -[SCBaseAutoTimer initWithMeasure:startTime:] */

void FUN_10919f820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c028eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMeasure_startTime_params_1125e7d90,param_3,
             PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 10919f82c; end: 10919f8df; -[SCBaseAutoTimer initWithMeasure:startTime:params:] */

undefined1 *
FUN_10919f82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700a40;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10919f8e0; end: 10919f903; -[SCBaseAutoTimer stop] */

void FUN_10919f8e0(undefined8 param_1)

{
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010be17bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fireWithEndTime__112563888);
  return;
}



/* Entry: 10919f904; end: 10919fbb3; -[SCBaseAutoTimer _fireWithEndTime:] */

void FUN_10919f904(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = *(double *)(param_2 + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  dVar14 = param_1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010c231800();
  uVar5 = uVar2;
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    param_4 = *(undefined **)(param_2 + 0x18);
    func_0x00010bf2cdc0(uVar6,param_3,param_4);
    if ((int)uVar6 != 0) {
      puVar3 = PTR_PTR_1126b93d0;
      func_0x00010bf121a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c08fa60();
      if (0x3f < uVar4) {
        func_0x00010c260c20(uVar2,param_3,0x3f);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      dVar14 = param_1 - dVar15;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010bfc5300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_3,&PTR____CFConstantStringClassReference_110f2b1d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar8 = puVar3;
      func_0x00010c2ac460(puVar3,param_3,puVar7,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar9 = *(long *)(param_2 + 0x18);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = auStack_100;
      lVar10 = lVar9;
      func_0x00010bf52a60();
      if (lVar10 != 0) {
        lVar12 = *plStack_130;
        do {
          lVar13 = 0;
          puVar3 = puVar8;
          do {
            if (*plStack_130 != lVar12) {
              _objc_enumerationMutation(lVar9);
            }
            uVar11 = *(undefined8 *)(lStack_138 + lVar13 * 8);
            uVar6 = *(undefined8 *)(param_2 + 0x18);
            func_0x00010c0e00e0(uVar6,param_3,uVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c2ac460(puVar3,param_3,uVar11,uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(uVar6);
            lVar13 = lVar13 + 1;
            puVar3 = puVar8;
          } while (lVar10 != lVar13);
          param_5 = auStack_100;
          lVar10 = lVar9;
          func_0x00010bf52a60(lVar9,param_3,&uStack_140,param_5,0x10);
        } while (lVar10 != 0);
      }
      _objc_release();
      func_0x00010b256a70();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010c281080();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar8;
      func_0x00010befc000(dVar14);
      _objc_release(lVar12);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
  }
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c02c0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar3);
  func_0x00010c028ea0(0);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010be17ba0(dVar14,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10919fbb4; end: 10919fc3b; +[SCBaseAutoTimer fireWithMeasure:durationSec:params:] */

void FUN_10919fbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c02c0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c028ea0(0);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010be17ba0(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10919fc3c; end: 10919fc8f; +[SCBaseAutoTimer fireWithMeasure:durationSec:] */

void FUN_10919fc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_opt_class(param_2);
  func_0x00010bfb0860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10919fc90; end: 10919fcbf; -[SCBaseAutoTimer .cxx_destruct] */

void FUN_10919fc90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10919fcc0; end: 10919fceb; +[SCGrapheneUnlockableMetric automeasure] */

void FUN_10919fcc0(void)

{
  _objc_alloc(PTR_PTR_1126b93d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10919fcec; end: 10919fd17; +[SCGrapheneUnlockableMetric adTrackRawUserData] */

void FUN_10919fcec(void)

{
  _objc_alloc(PTR_PTR_1126b93d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10919fd18; end: 10919fdb7; -[SCGrapheneUnlockableMetric description] */

void FUN_10919fd18(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0dbf8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0dbf8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112700a48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10919fdb8; end: 10919ff03; -[SCGrapheneRegistry unlockableGraphene] */

void FUN_10919fdb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10919fe40;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113732830 != -1) {
    func_0x000107c27d9c(0x113732830,&puStack_48);
  }
  uVar1 = uRam0000000113732828;
  _objc_retain(uRam0000000113732828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10919ff04; end: 10919ff13; -[SCManagedAudioStreamer isStreaming] */

bool FUN_10919ff04(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 10919ff14; end: 10919ffa3; -[SCManagedAudioStreamer startStreamingWithAudioConfiguration:] */

void FUN_10919ff14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10919ffa4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10919ffa4; end: 1091a0097;  */

void FUN_10919ffa4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c07ff20();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf47660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1091a0098; end: 1091a00ef; -[SCManagedAudioStreamer stopStreaming] */

void FUN_1091a0098(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1091a00f0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 1091a00f0; end: 1091a0187;  */

void FUN_1091a00f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07ff20();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ee40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86dc0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1091a0188; end: 1091a018f; -[SCManagedAudioStreamer removeListener:] */

void FUN_1091a0188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091a0190; end: 1091a0287; -[SCManagedAudioStreamer audioCaptureSession:didOutputSampleBuffer:] */

void FUN_1091a0190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_4;
    _CFRetain(param_4);
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091a0288; end: 1091a02bb;  */

void FUN_1091a0288(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80880(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091a02bc; end: 1091a0313; -[SCManagedAudioStreamer _processCachedSampleBuffer] */

void FUN_1091a02bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _os_unfair_lock_unlock(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c0b7da0(*(undefined8 *)(param_1 + 0x18),param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(lVar1);
    return;
  }
  return;
}



/* Entry: 1091a0314; end: 1091a039f; -[SCManagedAudioStreamer audioCaptureSession] */

void FUN_1091a0314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110adf228);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126dd948;
    _objc_alloc();
    func_0x00010bff5480();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,param_1);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1091a03a0; end: 1091a03ab;  */

void FUN_1091a03a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aed60,PTR_s_session_1126358d0);
  return;
}



/* Entry: 1091a03ac; end: 1091a03b3; -[SCManagedAudioStreamer performer] */

undefined8 FUN_1091a03ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091a03b4; end: 1091a03fb; -[SCManagedAudioStreamer .cxx_destruct] */

void FUN_1091a03b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


