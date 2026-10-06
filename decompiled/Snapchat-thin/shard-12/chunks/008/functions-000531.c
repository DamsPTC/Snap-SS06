/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109867b6c; end: 109867ccf;  */

void FUN_109867b6c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
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
  long alStack_88 [7];
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  *puVar1 = &PTR_FUN_110b16080;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[2] = &PTR_FUN_110b160d8;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = uVar3;
  puVar1[0x1c] = param_3;
  puVar1[0x1d] = 0;
  uStack_138 = *(undefined8 *)(param_2 + 0x10);
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuStack_118 = &PTR_FUN_110b160d8;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  alStack_88[1] = 0;
  alStack_88[0] = 0;
  alStack_88[2] = 0;
  alStack_88[4] = 0;
  alStack_88[5] = 0;
  alStack_88[6] = 0;
  uStack_130 = param_3;
  uStack_128 = uVar3;
  puStack_120 = puVar1;
  func_0x00010986ea80(&ppuStack_118,uStack_138,&uStack_138);
  FUN_10986eb00(puVar1,&ppuStack_118);
  *param_1 = puVar1;
  ppuStack_118 = &PTR_FUN_110b160d8;
  if (alStack_88[4] != 0) {
    alStack_88[5] = alStack_88[4];
    __ZdlPv();
  }
  lVar2 = 0;
  do {
    if (*(long *)((long)alStack_88 + lVar2) != 0) {
      *(long *)((long)alStack_88 + lVar2 + 8) = *(long *)((long)alStack_88 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x48);
  FUN_10986f99c(&ppuStack_118);
  return;
}



/* Entry: 109867cd0; end: 109867ddf;  */

void FUN_109867cd0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
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
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = &PTR_DAT_110b16150;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_110b16198;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = param_3;
  puVar1[0x13] = 0;
  uStack_d8 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  ppuStack_b8 = &PTR_FUN_110b16198;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  puStack_c0 = puVar1;
  func_0x00010986ea80(&ppuStack_b8,uStack_d8,&uStack_d8);
  FUN_10986fbb4(puVar1,&ppuStack_b8);
  *param_1 = puVar1;
  ppuStack_b8 = &PTR_FUN_110b16198;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  FUN_10986f99c(&ppuStack_b8);
  return;
}



/* Entry: 109867de0; end: 1098684a7;  */

void FUN_109867de0(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined2 uStack_7e;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 *puVar21;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_109870e88(param_1 + 0x21);
  lVar11 = param_1[1];
  bVar3 = *(byte *)(lVar11 + 0x48);
  if (CONCAT11(bVar3,*(undefined1 *)(lVar11 + 0x49)) < 0x202) {
    plVar9 = *(long **)(lVar11 + 0x40);
    if (bVar3 < 2) {
      lVar19 = plVar9[2] + 4;
      if (plVar9[1] < lVar19) {
        return;
      }
      uVar14 = *(undefined4 *)(*plVar9 + plVar9[2]);
      plVar9[2] = lVar19;
    }
    else {
      iVar7 = 1;
      func_0x00010986e988(1,&lStack_b0);
      if (iVar7 == 0) {
        return;
      }
      lVar11 = param_1[1];
      bVar3 = *(byte *)(lVar11 + 0x48);
      uVar14 = (undefined4)lStack_b0;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar14;
  }
  plVar9 = *(long **)(lVar11 + 0x40);
  if (bVar3 < 2) {
    lVar19 = plVar9[1];
    lVar11 = plVar9[2] + 4;
    if (lVar19 < lVar11) {
      return;
    }
    uStack_64 = *(undefined4 *)(*plVar9 + plVar9[2]);
    plVar9[2] = lVar11;
    *(undefined4 *)(param_1 + 0x26) = uStack_64;
  }
  else {
    iVar7 = 1;
    func_0x00010986e988(1,&uStack_64);
    if (iVar7 == 0) {
      return;
    }
    bVar3 = *(byte *)(param_1[1] + 0x48);
    *(undefined4 *)(param_1 + 0x26) = uStack_64;
    plVar9 = *(long **)(param_1[1] + 0x40);
    if (1 < bVar3) {
      iVar7 = 1;
      func_0x00010986e988(1,&uStack_68);
      if (iVar7 == 0) {
        return;
      }
      goto LAB_109867f14;
    }
    lVar19 = plVar9[1];
    lVar11 = plVar9[2];
  }
  if (lVar19 < lVar11 + 4) {
    return;
  }
  uStack_68 = *(uint *)(*plVar9 + lVar11);
  plVar9[2] = lVar11 + 4;
LAB_109867f14:
  uVar17 = uStack_68;
  if (uStack_68 < 0x55555556) {
    uVar5 = *(uint *)(param_1 + 0x26);
    if ((uVar5 <= uStack_68 * 3) &&
       ((ulong)(uStack_68 * 3 >> 1) <= (ulong)(((long)(int)uVar5 + -1) * (long)(int)uVar5) >> 1)) {
      lVar16 = param_1[1];
      plVar9 = *(long **)(lVar16 + 0x40);
      lVar19 = plVar9[2];
      lVar11 = lVar19 + 1;
      if (lVar11 <= plVar9[1]) {
        bVar3 = *(byte *)(*plVar9 + lVar19);
        plVar9[2] = lVar11;
        if (*(byte *)(lVar16 + 0x48) < 2) {
          if (plVar9[1] < lVar19 + 5) {
            return;
          }
          uStack_6c = *(uint *)(*plVar9 + lVar11);
          plVar9[2] = lVar19 + 5;
        }
        else {
          iVar7 = 1;
          func_0x00010986e988(1,&uStack_6c);
          if (iVar7 == 0) {
            return;
          }
        }
        uVar5 = uStack_6c;
        uVar18 = (ulong)uStack_6c;
        if ((uStack_6c <= uVar17) && (uVar17 <= (uint)(uVar18 * 0x2aaaaaaab >> 0x21))) {
          plVar9 = *(long **)(param_1[1] + 0x40);
          if (*(byte *)(param_1[1] + 0x48) < 2) {
            lVar11 = plVar9[2] + 4;
            if (plVar9[1] < lVar11) {
              return;
            }
            uVar2 = *(uint *)(*plVar9 + plVar9[2]);
            plVar9[2] = lVar11;
          }
          else {
            iVar7 = 1;
            func_0x00010986e988(1,&uStack_70);
            uVar2 = uStack_70;
            if (iVar7 == 0) {
              return;
            }
          }
          if (uVar2 <= uVar5) {
            param_1[7] = param_1[6];
            puVar8 = (undefined8 *)0xa8;
            uStack_70 = uVar2;
            __Znwm();
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[1] = 0;
            *puVar8 = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[9] = 0;
            puVar8[8] = 0;
            *(undefined4 *)(puVar8 + 10) = 0;
            puVar8[0xd] = 0;
            puVar8[0xe] = puVar8;
            puVar8[0x10] = 0;
            puVar8[0xf] = 0;
            puVar8[0x12] = 0;
            puVar8[0x11] = 0;
            puVar8[0x14] = 0;
            puVar8[0x13] = 0;
            plVar9 = param_1 + 2;
            lVar11 = *plVar9;
            *plVar9 = (long)puVar8;
            if ((lVar11 == 0) || (func_0x00010986e9f8(plVar9), *plVar9 != 0)) {
              param_1[0x28] = param_1[0x27];
              func_0x000107c27e9c(param_1 + 0x27,uVar17);
              param_1[0x2b] = param_1[0x2a];
              func_0x000107c27e9c(param_1 + 0x2a,uVar17);
              param_1[10] = param_1[9];
              param_1[0xd] = param_1[0xc];
              param_1[0x10] = 0;
              param_1[0x13] = param_1[0x12];
              *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
              param_1[0x15] = -1;
              lVar11 = param_1[0x35];
              lVar19 = param_1[0x36];
              while (lVar19 != lVar11) {
                lVar19 = lVar19 + -0x120;
                FUN_10986e2d4(lVar19);
              }
              param_1[0x36] = lVar11;
              FUN_1098684a8(param_1 + 0x35,bVar3);
              lVar11 = param_1[2];
              FUN_109875fc4(lVar11,uVar17,(int)param_1[0x26] + uVar2);
              if ((int)lVar11 != 0) {
                lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
                func_0x000108adee10(param_1 + 0x1d,(int)param_1[0x26] + uVar2,&lStack_b0);
                lVar11 = param_1[1];
                if (CONCAT11(*(byte *)(lVar11 + 0x48),*(undefined1 *)(lVar11 + 0x49)) < 0x202) {
                  plVar10 = *(long **)(lVar11 + 0x40);
                  if (*(byte *)(lVar11 + 0x48) < 2) {
                    lVar11 = plVar10[2] + 4;
                    if (plVar10[1] < lVar11) {
                      return;
                    }
                    uStack_74 = *(uint *)(*plVar10 + plVar10[2]);
                    plVar10[2] = lVar11;
                  }
                  else {
                    iVar7 = 1;
                    func_0x00010986e988(1,&uStack_74);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                  if (uStack_74 == 0) {
                    return;
                  }
                  plVar10 = *(long **)(param_1[1] + 0x40);
                  if (plVar10[1] - plVar10[2] < (long)(ulong)uStack_74) {
                    return;
                  }
                  uStack_98 = 0;
                  uStack_90 = 0;
                  uStack_80 = 0;
                  uStack_88 = 0;
                  lStack_b0 = plVar10[2] + (ulong)uStack_74 + *plVar10;
                  lStack_a8 = plVar10[1] - (plVar10[2] + (ulong)uStack_74);
                  uStack_7e = *(undefined2 *)((long)plVar10 + 0x32);
                  lStack_a0 = 0;
                  plVar10 = param_1;
                  func_0x00010986883c(param_1,&lStack_b0);
                  iVar7 = (int)plVar10;
                  if (iVar7 == -1) {
                    return;
                  }
                }
                else {
                  plVar10 = param_1;
                  func_0x00010986883c(param_1,*(undefined8 *)(lVar11 + 0x40));
                  if ((int)plVar10 == -1) {
                    return;
                  }
                  iVar7 = -1;
                }
                FUN_109865b70(param_1 + 0x38,param_1);
                plVar10 = param_1;
                (**(code **)(*param_1 + 0x48))();
                param_1[0x53] = (long)plVar10;
                *(uint *)(param_1 + 0x54) = (int)param_1[0x26] + uVar2;
                *(uint *)(param_1 + 0x51) = (uint)bVar3;
                uStack_7e = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_80 = 0;
                plVar10 = param_1 + 0x38;
                FUN_109868b3c(plVar10,&lStack_b0);
                if (((int)plVar10 != 0) &&
                   (plVar10 = param_1, FUN_109868bbc(param_1,uVar18), (int)plVar10 != -1)) {
                  lVar11 = param_1[1];
                  plVar12 = *(long **)(lVar11 + 0x40);
                  *plVar12 = lStack_b0 + lStack_a0;
                  plVar12[1] = lStack_a8 - lStack_a0;
                  plVar12[2] = 0;
                  uVar4 = *(ushort *)(lVar11 + 0x48);
                  uVar4 = uVar4 >> 8 | uVar4 << 8;
                  if (uVar4 < 0x202) {
                    plVar12[2] = (long)iVar7;
                  }
                  if (param_1[0x35] != param_1[0x36]) {
                    uVar18 = ((long *)*plVar9)[1] - *(long *)*plVar9 & 0x3fffffffc;
                    if (uVar4 < 0x201) {
                      if (uVar18 != 0) {
                        uVar17 = 0;
                        do {
                          FUN_109869acc(param_1,uVar17);
                          uVar17 = uVar17 + 3;
                        } while (uVar17 < (uint)((ulong)(((long *)param_1[2])[1] -
                                                        *(long *)param_1[2]) >> 2));
                      }
                    }
                    else if (uVar18 != 0) {
                      uVar17 = 0;
                      do {
                        func_0x000109869c88(param_1,uVar17);
                        uVar17 = uVar17 + 3;
                      } while (uVar17 < (uint)((ulong)(((long *)param_1[2])[1] - *(long *)param_1[2]
                                                      ) >> 2));
                    }
                  }
                  FUN_109866ccc(param_1 + 0x38);
                  lVar11 = param_1[0x35];
                  if (param_1[0x36] != lVar11) {
                    uVar18 = 0;
                    do {
                      FUN_1098765cc(lVar11 + uVar18 * 0x120 + 8,*plVar9);
                      lVar19 = param_1[0x35];
                      lVar11 = lVar19 + uVar18 * 0x120;
                      puVar20 = *(undefined4 **)(lVar11 + 0x108);
                      puVar1 = *(undefined4 **)(lVar11 + 0x110);
                      if (puVar20 != puVar1) {
                        do {
                          puVar21 = puVar20 + 1;
                          FUN_109876784(param_1[0x35] + uVar18 * 0x120 + 8,*puVar20);
                          puVar20 = puVar21;
                        } while (puVar21 != puVar1);
                        lVar19 = param_1[0x35];
                      }
                      uVar13 = lVar19 + uVar18 * 0x120 + 8;
                      FUN_109876950(uVar13,0,0);
                      if ((uVar13 & 1) == 0) {
                        return;
                      }
                      uVar18 = (ulong)((int)uVar18 + 1);
                      lVar11 = param_1[0x35];
                      uVar13 = (param_1[0x36] - lVar11 >> 5) * -0x71c71c71c71c71c7;
                    } while (uVar18 <= uVar13 && uVar13 - uVar18 != 0);
                  }
                  FUN_109866d18(param_1 + 0x2d,
                                (ulong)(*(long *)(param_1[2] + 0x38) - *(long *)(param_1[2] + 0x30))
                                >> 2);
                  lVar11 = param_1[0x35];
                  if (param_1[0x36] != lVar11) {
                    uVar18 = 0;
                    uVar13 = 1;
                    do {
                      lVar11 = lVar11 + uVar18 * 0x120;
                      iVar7 = (int)((ulong)(*(long *)(lVar11 + 0x78) - *(long *)(lVar11 + 0x70)) >>
                                   2);
                      iVar15 = (int)((ulong)(*(long *)(param_1[2] + 0x38) -
                                            *(long *)(param_1[2] + 0x30)) >> 2);
                      if (iVar7 <= iVar15) {
                        iVar7 = iVar15;
                      }
                      FUN_109866d18(lVar11 + 0xd0,iVar7);
                      lVar11 = param_1[0x35];
                      uVar18 = (param_1[0x36] - lVar11 >> 5) * -0x71c71c71c71c71c7;
                      bVar6 = uVar13 <= uVar18;
                      lVar19 = uVar18 - uVar13;
                      uVar18 = uVar13;
                      uVar13 = (ulong)((int)uVar13 + 1);
                    } while (bVar6 && lVar19 != 0);
                  }
                  FUN_109869e84(param_1,plVar10);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1098684a8; end: 109868b3b;  */

undefined8 * FUN_1098684a8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  byte bStack_88;
  uint uStack_84;
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar17 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar23 = (long)puVar15 - (long)puVar17;
  bVar6 = param_2 < (long *)((lVar23 >> 5) * -0x71c71c71c71c71c7);
  uVar18 = (long)param_2 + (lVar23 >> 5) * 0x71c71c71c71c71c7;
  if (bVar6 || uVar18 == 0) {
    puVar9 = param_1;
    if (bVar6) {
      while (puVar15 != puVar17 + (long)param_2 * 0x24) {
        puVar15 = puVar15 + -0x24;
        puVar9 = puVar15;
        FUN_10986e2d4(puVar15);
      }
      param_1[1] = puVar17 + (long)param_2 * 0x24;
    }
    return puVar9;
  }
  if (uVar18 <= (ulong)((param_1[2] - (long)puVar15 >> 5) * -0x71c71c71c71c71c7)) {
    puVar17 = puVar15 + uVar18 * 0x24;
    do {
      *(undefined4 *)puVar15 = 0xffffffff;
      puVar15[4] = 0;
      puVar15[3] = 0;
      puVar15[6] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[1] = 0;
      *(undefined1 *)(puVar15 + 7) = 1;
      puVar15[9] = 0;
      puVar15[8] = 0;
      puVar15[0xb] = 0;
      puVar15[10] = 0;
      puVar15[0xd] = 0;
      puVar15[0xc] = 0;
      puVar15[0xf] = 0;
      puVar15[0xe] = 0;
      puVar15[0x11] = 0;
      puVar15[0x10] = 0;
      puVar15[0x12] = puVar15 + 1;
      puVar15[0x14] = 0;
      puVar15[0x13] = 0;
      puVar15[0x16] = 0;
      puVar15[0x15] = 0;
      puVar15[0x18] = 0;
      puVar15[0x17] = 0;
      *(undefined1 *)(puVar15 + 0x19) = 1;
      puVar15[0x1b] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1e] = 0;
      *(undefined4 *)(puVar15 + 0x20) = 0;
      puVar15[0x21] = 0;
      puVar15[0x22] = 0;
      puVar15[0x23] = 0;
      puVar15 = puVar15 + 0x24;
    } while (puVar15 != puVar17);
    param_1[1] = puVar17;
    return param_1;
  }
  lVar11 = param_1[2] - (long)puVar17 >> 5;
  plVar12 = (long *)(lVar11 * 0x1c71c71c71c71c72);
  if (plVar12 < param_2 || (long)plVar12 - (long)param_2 == 0) {
    plVar12 = param_2;
  }
  if (0x71c71c71c71c70 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
    plVar12 = (long *)0xe38e38e38e38e3;
  }
  if (plVar12 < (long *)0xe38e38e38e38e4) {
    puVar9 = (undefined8 *)((long)plVar12 * 0x120);
    __Znwm();
    puVar2 = (undefined4 *)((long)puVar9 + lVar23);
    puVar13 = puVar2;
    do {
      *puVar13 = 0xffffffff;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      *(undefined8 *)(puVar13 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined1 *)(puVar13 + 0xe) = 1;
      *(undefined8 *)(puVar13 + 0x12) = 0;
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0x16) = 0;
      *(undefined8 *)(puVar13 + 0x14) = 0;
      *(undefined8 *)(puVar13 + 0x1a) = 0;
      *(undefined8 *)(puVar13 + 0x18) = 0;
      *(undefined8 *)(puVar13 + 0x1e) = 0;
      *(undefined8 *)(puVar13 + 0x1c) = 0;
      *(undefined8 *)(puVar13 + 0x22) = 0;
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined4 **)(puVar13 + 0x24) = puVar13 + 2;
      *(undefined8 *)(puVar13 + 0x28) = 0;
      *(undefined8 *)(puVar13 + 0x26) = 0;
      *(undefined8 *)(puVar13 + 0x2c) = 0;
      *(undefined8 *)(puVar13 + 0x2a) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(undefined8 *)(puVar13 + 0x2e) = 0;
      *(undefined1 *)(puVar13 + 0x32) = 1;
      *(undefined8 *)(puVar13 + 0x36) = 0;
      *(undefined8 *)(puVar13 + 0x34) = 0;
      *(undefined8 *)(puVar13 + 0x3a) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x3e) = 0;
      *(undefined8 *)(puVar13 + 0x3c) = 0;
      puVar13[0x40] = 0;
      *(undefined8 *)(puVar13 + 0x42) = 0;
      *(undefined8 *)(puVar13 + 0x44) = 0;
      *(undefined8 *)(puVar13 + 0x46) = 0;
      puVar13 = puVar13 + 0x48;
    } while (puVar13 != puVar2 + uVar18 * 0x48);
    puVar22 = puVar9 + (long)plVar12 * 0x24;
    puVar10 = puVar17;
    puVar13 = (undefined4 *)((long)puVar2 - lVar23);
    if (puVar17 != puVar15) {
      do {
        *puVar13 = *(undefined4 *)puVar10;
        *(undefined8 *)(puVar13 + 2) = puVar10[1];
        uVar24 = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = uVar24;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[1] = 0;
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        uVar24 = puVar10[5];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 10) = uVar24;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[4] = 0;
        *(undefined1 *)(puVar13 + 0xe) = *(undefined1 *)(puVar10 + 7);
        *(undefined8 *)(puVar13 + 0x12) = 0;
        *(undefined8 *)(puVar13 + 0x14) = 0;
        *(undefined8 *)(puVar13 + 0x10) = 0;
        uVar24 = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = uVar24;
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        *(undefined8 *)(puVar13 + 0x16) = 0;
        *(undefined8 *)(puVar13 + 0x18) = 0;
        *(undefined8 *)(puVar13 + 0x1a) = 0;
        uVar24 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x18) = puVar10[0xc];
        *(undefined8 *)(puVar13 + 0x16) = uVar24;
        *(undefined8 *)(puVar13 + 0x1a) = puVar10[0xd];
        puVar10[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        *(undefined8 *)(puVar13 + 0x1c) = 0;
        *(undefined8 *)(puVar13 + 0x1e) = 0;
        *(undefined8 *)(puVar13 + 0x20) = 0;
        uVar24 = puVar10[0xe];
        *(undefined8 *)(puVar13 + 0x1e) = puVar10[0xf];
        *(undefined8 *)(puVar13 + 0x1c) = uVar24;
        *(undefined8 *)(puVar13 + 0x20) = puVar10[0x10];
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0xe] = 0;
        uVar24 = puVar10[0x11];
        *(undefined8 *)(puVar13 + 0x24) = puVar10[0x12];
        *(undefined8 *)(puVar13 + 0x22) = uVar24;
        *(undefined8 *)(puVar13 + 0x28) = 0;
        *(undefined8 *)(puVar13 + 0x2a) = 0;
        *(undefined8 *)(puVar13 + 0x26) = 0;
        uVar24 = puVar10[0x13];
        *(undefined8 *)(puVar13 + 0x28) = puVar10[0x14];
        *(undefined8 *)(puVar13 + 0x26) = uVar24;
        *(undefined8 *)(puVar13 + 0x2a) = puVar10[0x15];
        puVar10[0x13] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        *(undefined8 *)(puVar13 + 0x2c) = 0;
        *(undefined8 *)(puVar13 + 0x2e) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        uVar24 = puVar10[0x16];
        *(undefined8 *)(puVar13 + 0x2e) = puVar10[0x17];
        *(undefined8 *)(puVar13 + 0x2c) = uVar24;
        *(undefined8 *)(puVar13 + 0x30) = puVar10[0x18];
        puVar10[0x17] = 0;
        puVar10[0x18] = 0;
        puVar10[0x16] = 0;
        *(undefined1 *)(puVar13 + 0x32) = *(undefined1 *)(puVar10 + 0x19);
        *(undefined8 *)(puVar13 + 0x36) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x34) = 0;
        uVar24 = puVar10[0x1a];
        *(undefined8 *)(puVar13 + 0x36) = puVar10[0x1b];
        *(undefined8 *)(puVar13 + 0x34) = uVar24;
        *(undefined8 *)(puVar13 + 0x38) = puVar10[0x1c];
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x1c] = 0;
        *(undefined8 *)(puVar13 + 0x3a) = 0;
        *(undefined8 *)(puVar13 + 0x3c) = 0;
        *(undefined8 *)(puVar13 + 0x3e) = 0;
        uVar24 = puVar10[0x1d];
        *(undefined8 *)(puVar13 + 0x3c) = puVar10[0x1e];
        *(undefined8 *)(puVar13 + 0x3a) = uVar24;
        *(undefined8 *)(puVar13 + 0x3e) = puVar10[0x1f];
        puVar10[0x1e] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x1d] = 0;
        puVar13[0x40] = *(undefined4 *)(puVar10 + 0x20);
        *(undefined8 *)(puVar13 + 0x44) = 0;
        *(undefined8 *)(puVar13 + 0x46) = 0;
        *(undefined8 *)(puVar13 + 0x42) = 0;
        *(undefined8 *)(puVar13 + 0x42) = puVar10[0x21];
        uVar24 = puVar10[0x22];
        *(undefined8 *)(puVar13 + 0x46) = puVar10[0x23];
        *(undefined8 *)(puVar13 + 0x44) = uVar24;
        puVar10[0x21] = 0;
        puVar10[0x22] = 0;
        puVar10[0x23] = 0;
        puVar10 = puVar10 + 0x24;
        puVar13 = puVar13 + 0x48;
      } while (puVar10 != puVar15);
      do {
        puVar9 = puVar17;
        FUN_10986e2d4(puVar17);
        puVar17 = puVar17 + 0x24;
      } while (puVar17 != puVar15);
      puVar17 = (undefined8 *)*param_1;
    }
    *param_1 = (undefined4 *)((long)puVar2 - lVar23);
    param_1[1] = puVar2 + uVar18 * 0x48;
    param_1[2] = puVar22;
    if (puVar17 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar17);
      return puVar17;
    }
    return puVar9;
  }
  puVar9 = param_1;
  func_0x000104c4f740();
  uStack_48 = 0x10986883c;
  lStack_80 = lVar23;
  plStack_78 = plVar12;
  uStack_70 = uVar18;
  puStack_68 = puVar17;
  puStack_60 = puVar15;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(byte *)(puVar9[1] + 0x48) < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    uVar16 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    iVar20 = 1;
    func_0x00010986e988(1,&uStack_84,param_2);
    uVar16 = uStack_84;
    if (iVar20 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (uVar16 != 0) {
    if ((uint)((ulong)(((long *)puVar9[2])[1] - *(long *)puVar9[2] >> 2) / 3) < uVar16) {
      return (undefined8 *)0xffffffff;
    }
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar11 = param_2[1];
        lVar3 = param_2[2];
        lVar23 = lVar3 + 4;
        if (lVar11 < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        lVar14 = *param_2;
        iStack_90 = *(int *)(lVar14 + lVar3);
        param_2[2] = lVar23;
        lVar1 = lVar3 + 8;
        if (lVar11 < lVar1) {
          return (undefined8 *)0xffffffff;
        }
        uStack_8c = *(uint *)(lVar14 + lVar23);
        param_2[2] = lVar1;
        if (lVar11 < lVar3 + 9) {
          return (undefined8 *)0xffffffff;
        }
        bVar5 = *(byte *)(lVar14 + lVar1);
        param_2[2] = lVar3 + 9;
        bStack_88 = bStack_88 & 0xfe | bVar5 & 1;
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      uVar19 = 0;
      uVar21 = uVar16;
      do {
        iVar20 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        uVar19 = uStack_94 + uVar19;
        iVar20 = 1;
        uStack_8c = uVar19;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iStack_90 = uVar19 - uStack_94;
        if (uVar19 < uStack_94) {
          return (undefined8 *)0xffffffff;
        }
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      *(undefined1 *)(param_2 + 6) = 1;
      param_2[3] = *param_2 + param_2[2];
      param_2[4] = *param_2 + param_2[1];
      param_2[5] = 0;
      uVar18 = (ulong)uVar16;
      lVar23 = 8;
      do {
        uVar4 = 1;
        if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) <
            0x202) {
          uVar4 = 2;
        }
        func_0x00010985f050(param_2,uVar4,&iStack_90);
        *(byte *)(puVar9[9] + lVar23) = *(byte *)(puVar9[9] + lVar23) & 0xfe | (byte)iStack_90 & 1;
        lVar23 = lVar23 + 0xc;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      *(undefined1 *)(param_2 + 6) = 0;
      param_2[2] = param_2[2] + (param_2[5] + 7U >> 3);
    }
  }
  iStack_90 = 0;
  bVar5 = *(byte *)(puVar9[1] + 0x48);
  if (bVar5 < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    iVar20 = *(int *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    if (0x200 < CONCAT11(bVar5,*(undefined1 *)(puVar9[1] + 0x49))) goto LAB_109868b18;
    iVar7 = 1;
    func_0x00010986e988(1,&iStack_90,param_2);
    iVar20 = iStack_90;
    if (iVar7 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (iVar20 != 0) {
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar23 = param_2[2] + 4;
        if (param_2[1] < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        uVar4 = *(undefined4 *)(*param_2 + param_2[2]);
        param_2[2] = lVar23;
        FUN_109867418(puVar9 + 0xc,uVar4);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    else {
      iVar7 = 0;
      do {
        iVar8 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar8 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iVar7 = uStack_94 + iVar7;
        FUN_109867418(puVar9 + 0xc,iVar7);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
  }
LAB_109868b18:
  return (undefined8 *)(ulong)*(uint *)(param_2 + 2);
}



/* Entry: 109868b3c; end: 109868bbb;  */

void FUN_109868b3c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uStack_24;
  
  lVar2 = param_1;
  FUN_109865bfc();
  if ((int)lVar2 != 0) {
    lVar2 = param_2[2] + 4;
    if (lVar2 <= param_2[1]) {
      iVar1 = *(int *)(*param_2 + param_2[2]);
      param_2[2] = lVar2;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xe0))) {
        uStack_24 = 0;
        FUN_1094f81d8(param_1 + 0xe8,*(int *)(param_1 + 0xe0),&uStack_24);
        FUN_10985d80c(param_1 + 0x100,param_2);
      }
    }
  }
  return;
}



/* Entry: 109868bbc; end: 109869acb;  */

ulong FUN_109868bbc(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint ****ppppuVar7;
  int iVar8;
  ulong uVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  long *plVar33;
  long *plStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_c9;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  uint ****ppppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  uint ****ppppuStack_78;
  uint auStack_6c [3];
  
  ppppuStack_88 = (uint ****)0x0;
  ppppuStack_80 = (uint ****)0x0;
  ppppuStack_78 = (uint ****)0x0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  ppppuStack_c8 = (uint ****)0x0;
  ppppuStack_c0 = (uint ****)0x0;
  ppppuStack_b8 = (uint ****)0x0;
  iVar31 = *(int *)(param_1 + 0xf0);
  if ((int)param_2 < 1) {
    param_2 = 0;
  }
  else {
    uVar30 = 0;
    lVar20 = *(long *)(param_1 + 0x1a8);
    lVar22 = *(long *)(param_1 + 0x1b0);
    do {
      if (*(int *)(param_1 + 0x2dc) == -1) {
LAB_109868c60:
        func_0x00010985f050(param_1 + 0x1f8,1,&plStack_e8);
        uVar17 = 0;
        if ((uint)plStack_e8 != 0) {
          func_0x00010985f050(param_1 + 0x1f8,2,auStack_6c);
          uVar17 = (uint)plStack_e8 | auStack_6c[0] << 1;
        }
      }
      else {
        iVar16 = (int)param_1 + 0x2c0;
        FUN_10985d980();
        if (iVar16 == 0) goto LAB_109868c60;
        uVar17 = *(uint *)(param_1 + 0x2dc);
      }
      pppppuVar11 = (uint *****)ppppuStack_80;
      pppppuVar12 = (uint *****)ppppuStack_88;
      *(uint *)(param_1 + 0x2d8) = uVar17;
      uVar29 = (uint)uVar30;
      if (uVar17 == 0) {
        if (ppppuStack_88 == ppppuStack_80) goto LAB_109869a18;
        uVar17 = *(uint *)((long)ppppuStack_80 + -4);
        plVar14 = *(long **)(param_1 + 0x10);
        if (uVar17 == 0xffffffff) {
LAB_109868dd4:
          uVar9 = 0xffffffff;
        }
        else {
          uVar28 = uVar17 - 2;
          if (0x55555555 < (uVar17 + 1) * -0x55555555) {
            uVar28 = uVar17 + 1;
          }
          if (uVar28 == 0xffffffff) goto LAB_109868dd4;
          uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar28 * 4);
        }
        lVar19 = plVar14[6];
        iVar16 = *(int *)(lVar19 + uVar9 * 4);
        if (iVar16 == -1) {
          uVar28 = 0xffffffff;
        }
        else {
          uVar28 = iVar16 - 2;
          if (0x55555555 < (uint)((iVar16 + 1) * -0x55555555)) {
            uVar28 = iVar16 + 1;
          }
        }
        if (((uVar17 == uVar28) ||
            ((lVar15 = plVar14[3], uVar17 != 0xffffffff &&
             (*(int *)(lVar15 + (ulong)uVar17 * 4) != -1)))) ||
           ((uVar28 != 0xffffffff && (*(int *)(lVar15 + (ulong)uVar28 * 4) != -1))))
        goto LAB_109869a18;
        uVar6 = uVar29 * 3;
        uVar23 = uVar6 + 1;
        *(uint *)(lVar15 + (ulong)uVar17 * 4) = uVar23;
        *(uint *)(lVar15 + (ulong)uVar23 * 4) = uVar17;
        uVar1 = uVar6 + 2;
        *(uint *)(lVar15 + (ulong)uVar28 * 4) = uVar1;
        *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar28;
        if (uVar17 == 0xffffffff) {
LAB_109868f6c:
          uVar24 = 0xffffffff;
        }
        else {
          iVar16 = 2;
          if (0x55555555 < uVar17 * -0x55555555) {
            iVar16 = -1;
          }
          if (iVar16 + uVar17 == 0xffffffff) goto LAB_109868f6c;
          uVar24 = (ulong)*(uint *)(*plVar14 + (ulong)(iVar16 + uVar17) * 4);
        }
        if (uVar28 == 0xffffffff) {
LAB_109868fa0:
          uVar25 = 0xffffffff;
        }
        else {
          uVar17 = uVar28 - 2;
          if (0x55555555 < (uVar28 + 1) * -0x55555555) {
            uVar17 = uVar28 + 1;
          }
          if (uVar17 == 0xffffffff) goto LAB_109868fa0;
          uVar25 = (ulong)*(uint *)(*plVar14 + (ulong)uVar17 * 4);
        }
        uVar32 = 0xffffffff;
        if ((uVar9 == uVar24) || (uVar9 == uVar25)) goto LAB_109869a1c;
        lVar15 = *plVar14;
        *(int *)(lVar15 + (ulong)uVar6 * 4) = (int)uVar9;
        *(int *)(lVar15 + (ulong)uVar23 * 4) = (int)uVar25;
        *(int *)(lVar15 + (ulong)uVar1 * 4) = (int)uVar24;
        if (uVar24 != 0xffffffff) {
          *(uint *)(lVar19 + uVar24 * 4) = uVar1;
        }
        bVar5 = false;
        uVar24 = uVar9 >> 3 & 0x1ffffff8;
        *(ulong *)(*(long *)(param_1 + 0xe8) + uVar24) =
             *(ulong *)(*(long *)(param_1 + 0xe8) + uVar24) &
             (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
        *(uint *)((long)ppppuStack_80 + -4) = uVar6;
      }
      else {
        uVar32 = 0xffffffff;
        if ((int)uVar17 < 5) {
          if (uVar17 == 1) {
            if (ppppuStack_88 != ppppuStack_80) {
              pppppuVar10 = (uint *****)((long)ppppuStack_80 + -4);
              uVar17 = *(uint *)pppppuVar10;
              lVar19 = lStack_b0;
              ppppuStack_80 = (uint ****)pppppuVar10;
              FUN_109870f34(lStack_b0,uStack_a8,uVar30);
              if (lVar19 != 0) {
                if (pppppuVar10 < ppppuStack_78) {
                  *(uint *)pppppuVar10 = *(uint *)(lVar19 + 0x14);
                  pppppuVar10 = pppppuVar11;
                }
                else {
                  pppppuVar10 = &ppppuStack_88;
                  FUN_10986dcb4(pppppuVar10,lVar19 + 0x14);
                  pppppuVar12 = (uint *****)ppppuStack_88;
                }
                ppppuStack_80 = (uint ****)pppppuVar10;
              }
              if ((pppppuVar12 != pppppuVar10) &&
                 (uVar28 = *(uint *)((long)pppppuVar10 + -4), uVar28 != uVar17)) {
                plVar14 = *(long **)(param_1 + 0x10);
                lVar19 = plVar14[3];
                if (((uVar28 == 0xffffffff) || (*(int *)(lVar19 + (ulong)uVar28 * 4) == -1)) &&
                   ((uVar17 == 0xffffffff || (*(int *)(lVar19 + (ulong)uVar17 * 4) == -1)))) {
                  uVar6 = uVar29 * 3;
                  uVar23 = uVar6 + 2;
                  *(uint *)(lVar19 + (ulong)uVar28 * 4) = uVar23;
                  *(uint *)(lVar19 + (ulong)uVar23 * 4) = uVar28;
                  uVar1 = uVar6 + 1;
                  *(uint *)(lVar19 + (ulong)uVar17 * 4) = uVar1;
                  *(uint *)(lVar19 + (ulong)uVar1 * 4) = uVar17;
                  if (uVar28 == 0xffffffff) {
                    lVar15 = *plVar14;
                    uVar9 = 0xffffffff;
                    *(undefined4 *)(lVar15 + (ulong)uVar6 * 4) = 0xffffffff;
                    uVar26 = 0xffffffff;
                  }
                  else {
                    iVar16 = 2;
                    if (0x55555555 < uVar28 * -0x55555555) {
                      iVar16 = -1;
                    }
                    lVar15 = *plVar14;
                    if (iVar16 + uVar28 == 0xffffffff) {
                      uVar9 = 0xffffffff;
                    }
                    else {
                      uVar9 = (ulong)*(uint *)(lVar15 + (ulong)(iVar16 + uVar28) * 4);
                    }
                    *(int *)(lVar15 + (ulong)uVar6 * 4) = (int)uVar9;
                    uVar26 = uVar28 - 2;
                    if (0x55555555 < (uVar28 + 1) * -0x55555555) {
                      uVar26 = uVar28 + 1;
                    }
                    if (uVar26 != 0xffffffff) {
                      uVar26 = *(uint *)(lVar15 + (ulong)uVar26 * 4);
                    }
                  }
                  *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar26;
                  if (uVar17 == 0xffffffff) {
                    uVar28 = 0xffffffff;
                    *(undefined4 *)(lVar15 + (ulong)uVar23 * 4) = 0xffffffff;
                    uVar24 = 0xffffffff;
                  }
                  else {
                    iVar16 = 2;
                    if (0x55555555 < uVar17 * -0x55555555) {
                      iVar16 = -1;
                    }
                    if (iVar16 + uVar17 == 0xffffffff) {
                      *(undefined4 *)(lVar15 + (ulong)uVar23 * 4) = 0xffffffff;
                    }
                    else {
                      uVar28 = *(uint *)(lVar15 + (ulong)(iVar16 + uVar17) * 4);
                      *(uint *)(lVar15 + (ulong)uVar23 * 4) = uVar28;
                      if (uVar28 != 0xffffffff) {
                        *(uint *)(plVar14[6] + (ulong)uVar28 * 4) = uVar23;
                      }
                    }
                    uVar28 = uVar17 - 2;
                    if (0x55555555 < (uVar17 + 1) * -0x55555555) {
                      uVar28 = uVar17 + 1;
                    }
                    if (uVar28 == 0xffffffff) {
                      uVar24 = 0xffffffff;
                      uVar28 = 0xffffffff;
                    }
                    else {
                      uVar24 = (ulong)*(uint *)(lVar15 + (ulong)uVar28 * 4);
                    }
                  }
                  plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,(uint)uVar24);
                  lVar27 = *(long *)(param_1 + 0x2a8);
                  *(int *)(lVar27 + uVar9 * 4) =
                       *(int *)(lVar27 + uVar9 * 4) + *(int *)(lVar27 + uVar24 * 4);
                  lVar27 = plVar14[6];
                  uVar17 = uVar28;
                  if (uVar9 != 0xffffffff) {
                    *(undefined4 *)(lVar27 + uVar9 * 4) = *(undefined4 *)(lVar27 + uVar24 * 4);
                  }
                  while (uVar17 != 0xffffffff) {
                    *(int *)(lVar15 + (ulong)uVar17 * 4) = (int)uVar9;
                    uVar23 = uVar17 - 2;
                    if (0x55555555 < (uVar17 + 1) * -0x55555555) {
                      uVar23 = uVar17 + 1;
                    }
                    if (((uVar23 != 0xffffffff) &&
                        (uVar17 = *(uint *)(lVar19 + (ulong)uVar23 * 4), uVar23 = uVar17,
                        uVar17 != 0xffffffff)) &&
                       (uVar23 = uVar17 - 2, 0x55555555 < (uVar17 + 1) * -0x55555555)) {
                      uVar23 = uVar17 + 1;
                    }
                    uVar17 = uVar23;
                    if (uVar23 == uVar28) goto LAB_109869a18;
                  }
                  *(undefined4 *)(lVar27 + uVar24 * 4) = 0xffffffff;
                  pppppuVar11 = pppppuVar10;
                  if (lVar20 == lVar22) {
                    if (ppppuStack_c0 < ppppuStack_b8) {
                      *(uint *)ppppuStack_c0 = (uint)uVar24;
                      ppppuStack_c0 = (uint ****)((long)ppppuStack_c0 + 4);
                    }
                    else {
                      pppppuVar12 = &ppppuStack_c8;
                      FUN_10986ddcc(pppppuVar12,&plStack_e8);
                      pppppuVar11 = (uint *****)ppppuStack_80;
                      ppppuStack_c0 = (uint ****)pppppuVar12;
                    }
                  }
                  bVar5 = false;
                  *(uint *)((long)pppppuVar11 + -4) = uVar6;
                  goto LAB_109869158;
                }
              }
            }
            goto LAB_109869a18;
          }
          if (uVar17 != 3) goto LAB_109869a1c;
LAB_109868d10:
          if (ppppuStack_88 == ppppuStack_80) goto LAB_109869a18;
          uVar28 = *(uint *)((long)ppppuStack_80 + -4);
          uVar9 = *(ulong *)(param_1 + 0x10);
          lVar19 = *(long *)(uVar9 + 0x18);
          if ((uVar28 != 0xffffffff) && (*(int *)(lVar19 + (ulong)uVar28 * 4) != -1))
          goto LAB_109869a18;
          uVar6 = uVar29 * 3;
          uVar23 = uVar6 + 2;
          uVar1 = uVar6;
          if (uVar17 == 5) {
            uVar1 = uVar6 + 1;
            uVar23 = uVar6;
          }
          iVar16 = 1;
          if (uVar17 == 5) {
            iVar16 = 2;
          }
          uVar17 = iVar16 + uVar6;
          *(uint *)(lVar19 + (ulong)uVar17 * 4) = uVar28;
          *(uint *)(lVar19 + (ulong)uVar28 * 4) = uVar17;
          FUN_1098672c4();
          pppppuVar11 = (uint *****)ppppuStack_80;
          plVar14 = *(long **)(param_1 + 0x10);
          lVar19 = plVar14[6];
          if (iVar31 < (int)((ulong)(plVar14[7] - lVar19) >> 2)) goto LAB_109869a18;
          lVar15 = *plVar14;
          *(int *)(lVar15 + (ulong)uVar17 * 4) = (int)uVar9;
          if ((int)uVar9 != -1) {
            *(uint *)(lVar19 + (uVar9 & 0xffffffff) * 4) = uVar17;
          }
          if (uVar28 == 0xffffffff) {
            uVar17 = 0xffffffff;
            *(undefined4 *)(lVar15 + (ulong)uVar23 * 4) = 0xffffffff;
          }
          else {
            iVar16 = 2;
            if (0x55555555 < uVar28 * -0x55555555) {
              iVar16 = -1;
            }
            if (iVar16 + uVar28 == 0xffffffff) {
              *(undefined4 *)(lVar15 + (ulong)uVar23 * 4) = 0xffffffff;
            }
            else {
              uVar17 = *(uint *)(lVar15 + (ulong)(iVar16 + uVar28) * 4);
              *(uint *)(lVar15 + (ulong)uVar23 * 4) = uVar17;
              if (uVar17 != 0xffffffff) {
                *(uint *)(lVar19 + (ulong)uVar17 * 4) = uVar23;
              }
            }
            uVar17 = uVar28 - 2;
            if (0x55555555 < (uVar28 + 1) * -0x55555555) {
              uVar17 = uVar28 + 1;
            }
            if (uVar17 != 0xffffffff) {
              uVar17 = *(uint *)(lVar15 + (ulong)uVar17 * 4);
            }
          }
          *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar17;
          *(uint *)((long)ppppuStack_80 + -4) = uVar6;
        }
        else {
          if (uVar17 != 7) {
            if (uVar17 == 5) goto LAB_109868d10;
            goto LAB_109869a1c;
          }
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar29 * 3);
          uVar9 = *(ulong *)(param_1 + 0x10);
          FUN_1098672c4();
          plVar33 = *(long **)(param_1 + 0x10);
          iVar16 = (uint)plStack_e8;
          iVar8 = (int)uVar9;
          *(int *)(*plVar33 + ((ulong)plStack_e8 & 0xffffffff) * 4) = iVar8;
          plVar14 = plVar33;
          FUN_1098672c4();
          *(int *)(*plVar33 + (ulong)(iVar16 + 1) * 4) = (int)plVar14;
          plVar33 = *(long **)(param_1 + 0x10);
          iVar16 = (uint)plStack_e8;
          plVar14 = plVar33;
          FUN_1098672c4();
          *(int *)(*plVar33 + (ulong)(iVar16 + 2) * 4) = (int)plVar14;
          piVar21 = *(int **)(*(long *)(param_1 + 0x10) + 0x30);
          if (iVar31 < (int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) - (long)piVar21) >>
                            2)) goto LAB_109869a18;
          if (iVar8 == -1) {
            *piVar21 = (uint)plStack_e8 + 1;
            uVar17 = 1;
LAB_10986911c:
            piVar21[uVar17] = (uint)plStack_e8 + 2;
          }
          else {
            piVar21[uVar9 & 0xffffffff] = (uint)plStack_e8;
            if (iVar8 + 1U == 0xffffffff) {
              uVar17 = 0;
              goto LAB_10986911c;
            }
            piVar21[iVar8 + 1U] = (uint)plStack_e8 + 1;
            uVar17 = iVar8 + 2;
            if (uVar17 != 0xffffffff) goto LAB_10986911c;
          }
          if (ppppuStack_80 < ppppuStack_78) {
            pppppuVar11 = (uint *****)((long)ppppuStack_80 + 4);
            *(uint *)ppppuStack_80 = (uint)plStack_e8;
          }
          else {
            pppppuVar11 = &ppppuStack_88;
            FUN_10986dcb4(pppppuVar11,&plStack_e8);
          }
          ppppuStack_80 = (uint ****)pppppuVar11;
        }
        bVar5 = true;
      }
LAB_109869158:
      uVar28 = *(uint *)((long)pppppuVar11 + -4);
      uVar9 = (ulong)uVar28;
      uVar17 = uVar28 - 2;
      if (0x55555555 < uVar28 * -0x55555555 + 0xaaaaaaab) {
        uVar17 = uVar28 + 1;
      }
      uVar23 = uVar28 + 2;
      if (0x55555555 < uVar28 * -0x55555555) {
        uVar23 = uVar28 - 1;
      }
      uVar1 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (uVar28 != 0xffffffff) {
        uVar1 = uVar23;
        uVar6 = uVar17;
      }
      uVar17 = *(uint *)(param_1 + 0x2d8);
      if ((int)uVar17 < 5) {
        if (uVar17 < 2) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar6 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          lVar19 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar19 + uVar9 * 4) = *(int *)(lVar19 + uVar9 * 4) + 1;
          if (uVar1 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
          }
          piVar21 = (int *)(lVar19 + uVar9 * 4);
LAB_1098692d8:
          iVar16 = 1;
          goto LAB_109869338;
        }
        if (uVar17 == 3) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + uVar9 * 4);
          }
          lVar19 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar19 + uVar9 * 4) = *(int *)(lVar19 + uVar9 * 4) + 1;
          if (uVar6 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          *(int *)(lVar19 + uVar9 * 4) = *(int *)(lVar19 + uVar9 * 4) + 2;
          if (uVar1 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
          }
          piVar21 = (int *)(lVar19 + uVar9 * 4);
          goto LAB_1098692d8;
        }
      }
      else {
        if (uVar17 == 5) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + uVar9 * 4);
          }
          lVar19 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar19 + uVar9 * 4) = *(int *)(lVar19 + uVar9 * 4) + 1;
          if (uVar6 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          iVar16 = *(int *)(lVar19 + uVar9 * 4) + 1;
        }
        else {
          if (uVar17 != 7) goto LAB_109869348;
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + uVar9 * 4);
          }
          lVar19 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar19 + uVar9 * 4) = *(int *)(lVar19 + uVar9 * 4) + 2;
          if (uVar6 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          iVar16 = *(int *)(lVar19 + uVar9 * 4) + 2;
        }
        *(int *)(lVar19 + uVar9 * 4) = iVar16;
        if (uVar1 == 0xffffffff) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
        }
        piVar21 = (int *)(lVar19 + uVar9 * 4);
        iVar16 = 2;
LAB_109869338:
        *piVar21 = *piVar21 + iVar16;
        uVar17 = *(uint *)(param_1 + 0x2d8);
      }
LAB_109869348:
      if ((uVar17 == 5) || (uVar17 == 0)) {
        if (uVar28 == 0xffffffff) {
LAB_109869388:
          uVar9 = 0xffffffff;
        }
        else {
          uVar17 = uVar28 - 2;
          if (0x55555555 < (uVar28 + 1) * -0x55555555) {
            uVar17 = uVar28 + 1;
          }
          if (uVar17 == 0xffffffff) goto LAB_109869388;
          uVar9 = (ulong)*(uint *)(**(long **)(param_1 + 0x298) + (ulong)uVar17 * 4);
        }
        uVar18 = 0;
        if (*(int *)(*(long *)(param_1 + 0x2a8) + uVar9 * 4) < 6) {
          uVar18 = 5;
        }
      }
      else {
        uVar18 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x2dc) = uVar18;
      if ((bVar5) && (lVar19 = *(long *)(param_1 + 0x50), lVar19 != *(long *)(param_1 + 0x48))) {
        do {
          if (param_2 + ~uVar29 < *(uint *)(lVar19 + -8)) goto LAB_109869a18;
          if (*(uint *)(lVar19 + -8) != param_2 + ~uVar29) break;
          bVar4 = *(byte *)(lVar19 + -4);
          uVar17 = *(uint *)(lVar19 + -0xc);
          *(long *)(param_1 + 0x50) = lVar19 + -0xc;
          if ((int)uVar17 < 0) goto LAB_109869a18;
          uVar28 = *(uint *)((long)ppppuStack_80 + -4);
          if ((bVar4 & 1) == 0) {
            iVar8 = uVar28 + 2;
            if (0x55555555 < uVar28 * -0x55555555) {
              iVar8 = uVar28 - 1;
            }
            iVar16 = -1;
            if (uVar28 != 0xffffffff) {
              iVar16 = iVar8;
            }
          }
          else if (uVar28 == 0xffffffff) {
            iVar16 = -1;
          }
          else {
            iVar16 = uVar28 - 2;
            if (0x55555555 < (uVar28 + 1) * -0x55555555) {
              iVar16 = uVar28 + 1;
            }
          }
          iVar8 = param_2 + ~uVar17;
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,iVar8);
          plVar14 = &lStack_b0;
          FUN_109870fcc(plVar14,iVar8,&plStack_e8);
          *(int *)((long)plVar14 + 0x14) = iVar16;
          lVar19 = *(long *)(param_1 + 0x50);
        } while (lVar19 != *(long *)(param_1 + 0x48));
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != param_2);
  }
  plVar14 = *(long **)(param_1 + 0x10);
  if ((int)((ulong)(plVar14[7] - plVar14[6]) >> 2) <= iVar31) {
    if (ppppuStack_88 != ppppuStack_80) {
      do {
        ppppuStack_80 = (uint ****)((long)ppppuStack_80 + -4);
        auStack_6c[0] = *(uint *)ppppuStack_80;
        if (*(ushort *)(param_1 + 0x1f2) < 0x202) {
          func_0x00010985f050(param_1 + 0x248,1,&plStack_e8);
          if ((uint)plStack_e8 == 0) goto LAB_1098696d0;
LAB_109869674:
          plVar14 = *(long **)(param_1 + 0x10);
          lVar20 = *plVar14;
          if ((int)((ulong)(plVar14[1] - lVar20 >> 2) / 3) <= (int)param_2) goto LAB_109869a18;
          if (auStack_6c[0] == 0xffffffff) {
LAB_1098696f8:
            uVar30 = 0xffffffff;
          }
          else {
            uVar17 = auStack_6c[0] - 2;
            if (0x55555555 < (auStack_6c[0] + 1) * -0x55555555) {
              uVar17 = auStack_6c[0] + 1;
            }
            if (uVar17 == 0xffffffff) goto LAB_1098696f8;
            uVar30 = (ulong)*(uint *)(lVar20 + (ulong)uVar17 * 4);
          }
          iVar31 = *(int *)(plVar14[6] + uVar30 * 4);
          if (iVar31 == -1) {
            uVar17 = 0xffffffff;
LAB_109869760:
            uVar9 = 0xffffffff;
          }
          else {
            uVar17 = iVar31 - 2;
            if (0x55555555 < (uint)((iVar31 + 1) * -0x55555555)) {
              uVar17 = iVar31 + 1;
            }
            if (uVar17 == 0xffffffff) {
              uVar9 = 0xffffffff;
              uVar17 = 0xffffffff;
            }
            else {
              uVar29 = uVar17 - 2;
              if (0x55555555 < (uVar17 + 1) * -0x55555555) {
                uVar29 = uVar17 + 1;
              }
              if (uVar29 == 0xffffffff) goto LAB_109869760;
              uVar9 = (ulong)*(uint *)(lVar20 + (ulong)uVar29 * 4);
            }
          }
          uVar28 = *(uint *)(plVar14[6] + uVar9 * 4);
          uVar29 = uVar28;
          if ((uVar28 != 0xffffffff) &&
             (uVar29 = uVar28 - 2, 0x55555555 < (uVar28 + 1) * -0x55555555)) {
            uVar29 = uVar28 + 1;
          }
          if (((((auStack_6c[0] == uVar17) || (auStack_6c[0] == uVar29)) || (uVar17 == uVar29)) ||
              ((auStack_6c[0] != 0xffffffff &&
               (*(int *)(plVar14[3] + (ulong)auStack_6c[0] * 4) != -1)))) ||
             ((lVar22 = plVar14[3], uVar17 != 0xffffffff &&
              (*(int *)(lVar22 + (ulong)uVar17 * 4) != -1)))) goto LAB_109869a18;
          if (uVar29 == 0xffffffff) {
            uVar28 = 0xffffffff;
          }
          else {
            if (*(int *)(lVar22 + (ulong)uVar29 * 4) != -1) goto LAB_109869a18;
            uVar28 = uVar29 - 2;
            if (0x55555555 < (uVar29 + 1) * -0x55555555) {
              uVar28 = uVar29 + 1;
            }
            if (uVar28 != 0xffffffff) {
              uVar28 = *(uint *)(lVar20 + (ulong)uVar28 * 4);
            }
          }
          uVar23 = param_2 * 3;
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar23);
          *(uint *)(lVar22 + (ulong)uVar23 * 4) = auStack_6c[0];
          *(uint *)(lVar22 + (ulong)auStack_6c[0] * 4) = uVar23;
          *(uint *)(lVar22 + (ulong)(uVar23 + 1) * 4) = uVar17;
          *(uint *)(lVar22 + (ulong)uVar17 * 4) = uVar23 + 1;
          *(uint *)(lVar22 + (ulong)(uVar23 + 2) * 4) = uVar29;
          *(uint *)(lVar22 + (ulong)uVar29 * 4) = uVar23 + 2;
          *(int *)(lVar20 + (ulong)uVar23 * 4) = (int)uVar9;
          *(uint *)(lVar20 + (ulong)(uVar23 + 1) * 4) = uVar28;
          *(int *)(lVar20 + (ulong)(uVar23 + 2) * 4) = (int)uVar30;
          lVar19 = *(long *)(param_1 + 0xe8);
          lVar22 = 3;
          uVar30 = (ulong)uVar23;
          do {
            if ((int)uVar30 == -1) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (ulong)*(uint *)(lVar20 + uVar30 * 4);
            }
            uVar24 = uVar9 >> 3 & 0x1ffffff8;
            *(ulong *)(lVar19 + uVar24) =
                 *(ulong *)(lVar19 + uVar24) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
            lVar22 = lVar22 + -1;
            uVar30 = (ulong)((int)uVar30 + 1);
          } while (lVar22 != 0);
          uStack_c9 = 1;
          func_0x0001078db3d4(param_1 + 0x78,&uStack_c9);
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          if (puVar3 < *(undefined4 **)(param_1 + 0xa0)) {
            puVar13 = puVar3 + 1;
            *puVar3 = (uint)plStack_e8;
          }
          else {
            puVar13 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar13,&plStack_e8);
          }
          param_2 = param_2 + 1;
        }
        else {
          iVar31 = (int)param_1 + 0x230;
          FUN_10985d980();
          if (iVar31 != 0) goto LAB_109869674;
LAB_1098696d0:
          plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffffff00);
          func_0x0001078db3d4(param_1 + 0x78,&plStack_e8);
          puVar2 = *(uint **)(param_1 + 0x98);
          if (puVar2 < *(uint **)(param_1 + 0xa0)) {
            puVar13 = puVar2 + 1;
            *puVar2 = auStack_6c[0];
          }
          else {
            puVar13 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar13,auStack_6c);
          }
        }
        *(uint **)(param_1 + 0x98) = puVar13;
      } while (ppppuStack_88 != ppppuStack_80);
      plVar14 = *(long **)(param_1 + 0x10);
    }
    ppppuVar7 = ppppuStack_c0;
    if (param_2 == (uint)((ulong)(plVar14[1] - *plVar14 >> 2) / 3)) {
      uVar32 = (ulong)(plVar14[7] - plVar14[6]) >> 2;
      uVar17 = uStack_e0;
      for (pppppuVar12 = (uint *****)ppppuStack_c8; uStack_e0 = uVar17,
          pppppuVar12 != (uint *****)ppppuVar7; pppppuVar12 = (uint *****)((long)pppppuVar12 + 4)) {
        uVar29 = (int)uVar32 - 1;
        uVar30 = (ulong)uVar29;
        uStack_e0 = *(uint *)(plVar14[6] + uVar30 * 4);
        if (uStack_e0 == 0xffffffff) {
          do {
            iVar31 = (int)uVar32;
            uVar30 = (ulong)(iVar31 - 2);
            uVar32 = (ulong)(iVar31 - 1);
            uStack_e0 = *(uint *)(plVar14[6] + uVar30 * 4);
          } while (uStack_e0 == 0xffffffff);
          uVar29 = iVar31 - 2;
        }
        uVar28 = *(uint *)pppppuVar12;
        if (uVar28 <= uVar29) {
          uStack_d8 = 1;
          plStack_e8 = plVar14;
          uStack_dc = uStack_e0;
          do {
            if (*(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) != uVar29)
            goto LAB_109869a18;
            *(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) = uVar28;
            FUN_10985a764(&plStack_e8);
          } while (uStack_dc != 0xffffffff);
          plVar14 = *(long **)(param_1 + 0x10);
          lVar20 = plVar14[6];
          if (uVar28 != 0xffffffff) {
            *(undefined4 *)(lVar20 + (ulong)uVar28 * 4) = *(undefined4 *)(lVar20 + uVar30 * 4);
          }
          *(undefined4 *)(lVar20 + uVar30 * 4) = 0xffffffff;
          lVar20 = *(long *)(param_1 + 0xe8);
          uVar9 = uVar30 >> 6;
          uVar30 = 1L << (uVar30 & 0x3f);
          uVar24 = (ulong)(uVar28 >> 6);
          uVar25 = 1L << ((ulong)uVar28 & 0x3f);
          if ((*(ulong *)(lVar20 + uVar9 * 8) & uVar30) == 0) {
            uVar25 = *(ulong *)(lVar20 + uVar24 * 8) & (uVar25 ^ 0xffffffffffffffff);
          }
          else {
            uVar25 = *(ulong *)(lVar20 + uVar24 * 8) | uVar25;
          }
          *(ulong *)(lVar20 + uVar24 * 8) = uVar25;
          *(ulong *)(lVar20 + uVar9 * 8) =
               *(ulong *)(lVar20 + uVar9 * 8) & (uVar30 ^ 0xffffffffffffffff);
          uVar32 = (ulong)((int)uVar32 - 1);
          uVar17 = uStack_e0;
        }
        uStack_e0 = uVar17;
        uVar17 = uStack_e0;
      }
      goto LAB_109869a1c;
    }
  }
LAB_109869a18:
  uVar32 = 0xffffffff;
LAB_109869a1c:
  if ((uint *****)ppppuStack_c8 != (uint *****)0x0) {
    ppppuStack_c0 = ppppuStack_c8;
    __ZdlPv();
  }
  func_0x000109870eec(&lStack_b0);
  if ((uint *****)ppppuStack_88 != (uint *****)0x0) {
    ppppuStack_80 = ppppuStack_88;
    __ZdlPv();
  }
  return uVar32;
}



/* Entry: 109869acc; end: 109869e83;  */

long FUN_109869acc(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong unaff_x27;
  uint auStack_1a0 [4];
  long lStack_190;
  long lStack_188;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  uint *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  ulong uStack_100;
  uint uStack_f8;
  uint auStack_f4 [3];
  long lStack_e8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  uint uStack_78;
  uint auStack_74 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_74[0] = (uint)param_2;
  if (param_2 == (uint *)0xffffffff) {
    auStack_74[1] = -1;
    auStack_74[2] = -1;
  }
  else {
    auStack_74[1] = auStack_74[0] - 2;
    if (0x55555555 < auStack_74[0] * -0x55555555 + 0xaaaaaaab) {
      auStack_74[1] = auStack_74[0] + 1;
    }
    auStack_74[2] = auStack_74[0] + 2;
    if (0x55555555 < auStack_74[0] * -0x55555555) {
      auStack_74[2] = auStack_74[0] - 1;
    }
  }
  lVar18 = 0;
  uVar20 = 0x8e38e38e38e38e39;
  lVar6 = param_1;
  do {
    uVar22 = auStack_74[lVar18];
    if (uVar22 == 0xffffffff) {
      lVar19 = *(long *)(param_1 + 0x1a8);
      lVar11 = *(long *)(param_1 + 0x1b0);
LAB_109869bfc:
      if (lVar11 != lVar19) {
        uVar23 = 0;
        uVar10 = 1;
        do {
          lVar6 = lVar19 + uVar23 * 0x120 + 0x108;
          param_2 = &uStack_78;
          uStack_78 = uVar22;
          FUN_1092d7128();
          lVar19 = *(long *)(param_1 + 0x1a8);
          uVar23 = (*(long *)(param_1 + 0x1b0) - lVar19 >> 5) * -0x71c71c71c71c71c7;
          bVar5 = uVar10 <= uVar23;
          lVar11 = uVar23 - uVar10;
          uVar23 = uVar10;
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (bVar5 && lVar11 != 0);
      }
    }
    else {
      lVar19 = *(long *)(param_1 + 0x1a8);
      lVar11 = *(long *)(param_1 + 0x1b0);
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + (ulong)uVar22 * 4) == -1)
      goto LAB_109869bfc;
      if (lVar11 != lVar19) {
        uVar23 = 1;
        uVar10 = 0;
        do {
          unaff_x27 = uVar23;
          lVar6 = *(long *)(param_1 + 0x280) + (long)((int)unaff_x27 + -1) * 0x18;
          FUN_10985d980();
          if ((int)lVar6 != 0) {
            lVar6 = *(long *)(param_1 + 0x1a8) + uVar10 * 0x120 + 0x108;
            param_2 = &uStack_78;
            uStack_78 = uVar22;
            FUN_1092d7128();
          }
          uVar9 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) *
                  -0x71c71c71c71c71c7;
          uVar23 = (ulong)((int)unaff_x27 + 1);
          uVar10 = unaff_x27;
        } while (unaff_x27 <= uVar9 && uVar9 - unaff_x27 != 0);
      }
    }
    lVar18 = lVar18 + 1;
    if (lVar18 == 3) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return lVar6;
      }
      ___stack_chk_fail();
      uStack_88 = 0x109869c88;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      auStack_f4[0] = (uint)param_2;
      if (param_2 == (uint *)0xffffffff) {
        auStack_f4[1] = -1;
        auStack_f4[2] = -1;
      }
      else {
        auStack_f4[1] = auStack_f4[0] - 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555 + 0xaaaaaaab) {
          auStack_f4[1] = auStack_f4[0] + 1;
        }
        auStack_f4[2] = auStack_f4[0] + 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555) {
          auStack_f4[2] = auStack_f4[0] - 1;
        }
      }
      lVar19 = 0;
      uStack_100 = ((ulong)param_2 & 0xffffffff) / 3;
      lVar18 = lVar6;
      puVar8 = param_2;
      puStack_90 = &stack0xfffffffffffffff0;
      do {
        uVar22 = auStack_f4[lVar19];
        if ((uVar22 == 0xffffffff) ||
           (uVar12 = *(uint *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x18) + (ulong)uVar22 * 4),
           uVar12 == 0xffffffff)) {
          lVar11 = *(long *)(lVar6 + 0x1a8);
          if (*(long *)(lVar6 + 0x1b0) != lVar11) {
            uVar23 = 0;
            uVar10 = 1;
            do {
              lVar18 = lVar11 + uVar23 * 0x120 + 0x108;
              puVar8 = &uStack_f8;
              uStack_f8 = uVar22;
              FUN_1092d7128();
              lVar11 = *(long *)(lVar6 + 0x1a8);
              uVar20 = (*(long *)(lVar6 + 0x1b0) - lVar11 >> 5) * -0x71c71c71c71c71c7;
              bVar5 = uVar10 <= uVar20;
              lVar1 = uVar20 - uVar10;
              uVar20 = (ulong)((int)uVar10 + 1);
              uVar23 = uVar10;
              uVar10 = uVar20;
            } while (bVar5 && lVar1 != 0);
          }
        }
        else if (((param_2 != (uint *)0xffffffff) && ((uint)uStack_100 <= uVar12 / 3)) &&
                (*(long *)(lVar6 + 0x1b0) != *(long *)(lVar6 + 0x1a8))) {
          uVar23 = 0;
          unaff_x27 = 1;
          do {
            uVar20 = unaff_x27;
            lVar18 = *(long *)(lVar6 + 0x280) + (long)((int)uVar20 + -1) * 0x18;
            FUN_10985d980();
            if ((int)lVar18 != 0) {
              lVar18 = *(long *)(lVar6 + 0x1a8) + uVar23 * 0x120 + 0x108;
              puVar8 = &uStack_f8;
              uStack_f8 = uVar22;
              FUN_1092d7128();
            }
            uVar10 = (*(long *)(lVar6 + 0x1b0) - *(long *)(lVar6 + 0x1a8) >> 5) *
                     -0x71c71c71c71c71c7;
            unaff_x27 = (ulong)((int)uVar20 + 1);
            uVar23 = uVar20;
          } while (uVar20 <= uVar10 && uVar10 - uVar20 != 0);
        }
        uVar7 = SUB84(puVar8,0);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        return lVar18;
      }
      ___stack_chk_fail();
      uStack_160 = 0x18;
      uStack_150 = 0x8e38e38e38e38e39;
      uStack_148 = 0x120;
      pcStack_108 = FUN_109869e84;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (*(long **)(lVar18 + 0x10))[1] - **(long **)(lVar18 + 0x10) >> 2;
      uStack_170 = (ulong)uStack_170._4_4_ << 0x20;
      lStack_178 = 0;
      uStack_158 = unaff_x27;
      puStack_140 = auStack_f4;
      uStack_138 = uVar20;
      uStack_130 = (ulong)uVar22;
      lStack_128 = lVar19;
      lStack_120 = lVar6;
      puStack_118 = param_2;
      ppuStack_110 = &puStack_90;
      FUN_10986e004(*(long *)(*(long *)(lVar18 + 8) + 0x58) + 0xc0,
                    (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&lStack_178);
      if (*(long *)(lVar18 + 0x1a8) == *(long *)(lVar18 + 0x1b0)) {
        lVar19 = *(long *)(lVar18 + 8);
        lVar6 = *(long *)(lVar19 + 0x58);
        if ((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0)) >> 2) * -0x55555555 != 0
           ) {
          uVar22 = 0;
          uVar20 = 0;
          do {
            lVar19 = 0;
            uStack_170 = uStack_170 & 0xffffffff00000000;
            lStack_178 = 0;
            uVar12 = uVar22;
            do {
              if (uVar12 == 0xffffffff) {
                uVar13 = 0xffffffff;
              }
              else {
                uVar13 = *(undefined4 *)(**(long **)(lVar18 + 0x10) + (ulong)uVar12 * 4);
              }
              *(undefined4 *)((long)&lStack_178 + lVar19) = uVar13;
              lVar19 = lVar19 + 4;
              uVar12 = uVar12 + 1;
            } while (lVar19 != 0xc);
            FUN_1098674ec(lVar6,uVar20,&lStack_178);
            uVar20 = uVar20 + 1;
            lVar19 = *(long *)(lVar18 + 8);
            lVar6 = *(long *)(lVar19 + 0x58);
            uVar22 = uVar22 + 3;
          } while (uVar20 < (uint)((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0))
                                        >> 2) * -0x55555555));
        }
        *(undefined4 *)(*(long *)(lVar19 + 8) + 0xa0) = uVar7;
        lVar6 = 1;
      }
      else {
        lStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        FUN_10925b8c4(&lStack_190,
                      ((*(long **)(lVar18 + 0x10))[1] - **(long **)(lVar18 + 0x10)) * 0x40000000 >>
                      0x20);
        lVar19 = *(long *)(lVar18 + 0x10);
        lVar6 = *(long *)(lVar19 + 0x30);
        if (0 < (int)((ulong)(*(long *)(lVar19 + 0x38) - lVar6) >> 2)) {
          uVar20 = 0;
          do {
            uVar22 = *(uint *)(lVar6 + uVar20 * 4);
            uVar23 = (ulong)uVar22;
            if (uVar22 != 0xffffffff) {
              iVar21 = 2;
              uVar10 = uVar23;
              if ((*(ulong *)(*(long *)(lVar18 + 0xe8) + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1)
                  == 0) {
                lVar6 = *(long *)(lVar18 + 0x1b0) - *(long *)(lVar18 + 0x1a8);
                if (lVar6 != 0) {
                  uVar16 = 0;
                  uVar9 = (lVar6 >> 5) * -0x71c71c71c71c71c7;
                  iVar2 = iVar21;
                  if (0x55555555 < uVar22 * -0x55555555) {
                    iVar2 = -1;
                  }
                  do {
                    lVar6 = *(long *)(lVar18 + 0x1a8) + uVar16 * 0x120;
                    uVar12 = *(uint *)(**(long **)(lVar6 + 0x88) + uVar23 * 4);
                    if ((*(ulong *)(*(long *)(lVar6 + 0x20) + (ulong)(uVar12 >> 6) * 8) >>
                         ((ulong)uVar12 & 0x3f) & 1) != 0) {
                      uVar10 = 0xffffffff;
                      if ((ulong)(iVar2 + uVar22) != 0xffffffff) {
                        iVar15 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar22) * 4);
                        if (iVar15 == -1) {
                          uVar10 = 0xffffffff;
                        }
                        else if ((uint)(iVar15 * -0x55555555) < 0x55555556) {
                          uVar10 = (ulong)(iVar15 + 2);
                        }
                        else {
                          uVar10 = (ulong)(iVar15 - 1);
                        }
                      }
                      if ((uint)uVar10 != uVar22) {
                        do {
                          iVar15 = (int)uVar10;
                          if (iVar15 == -1) {
                            lVar6 = 0;
                            goto LAB_10986a364;
                          }
                          if (*(int *)(*(long *)(lVar6 + 0x40) + uVar10 * 4) !=
                              *(int *)(*(long *)(lVar6 + 0x40) + uVar23 * 4)) goto LAB_109869f74;
                          iVar3 = iVar21;
                          if (0x55555555 < (uint)(iVar15 * -0x55555555)) {
                            iVar3 = -1;
                          }
                          if ((iVar3 + iVar15 == 0xffffffff) ||
                             (iVar15 = *(int *)(*(long *)(lVar19 + 0x18) +
                                               (ulong)(uint)(iVar3 + iVar15) * 4), iVar15 == -1)) {
                            uVar10 = 0xffffffff;
                          }
                          else if ((uint)(iVar15 * -0x55555555) < 0x55555556) {
                            uVar10 = (ulong)(iVar15 + 2);
                          }
                          else {
                            uVar10 = (ulong)(iVar15 - 1);
                          }
                        } while ((uint)uVar10 != uVar22);
                      }
                    }
                    uVar16 = (ulong)((int)uVar16 + 1);
                    uVar10 = uVar23;
                  } while (uVar16 <= uVar9 && uVar9 - uVar16 != 0);
                }
              }
LAB_109869f74:
              *(int *)(lStack_190 + uVar10 * 4) = (int)(uStack_170 - lStack_178 >> 2);
              uVar22 = (uint)uVar10;
              auStack_1a0[0] = uVar22;
              FUN_1092d7128(&lStack_178,auStack_1a0);
              lVar19 = *(long *)(lVar18 + 0x10);
              iVar15 = 2;
              iVar2 = iVar15;
              if (0x55555555 < uVar22 * -0x55555555) {
                iVar2 = -1;
              }
              if ((iVar2 + uVar22 != 0xffffffff) &&
                 (iVar2 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar22) * 4),
                 iVar2 != -1)) {
                if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
                  iVar15 = -1;
                }
                uVar12 = iVar15 + iVar2;
                if (uVar12 != 0xffffffff && uVar12 != uVar22) {
                  do {
                    uVar23 = (ulong)uVar12;
                    lVar6 = *(long *)(lVar18 + 0x1b0) - *(long *)(lVar18 + 0x1a8);
                    if (lVar6 != 0) {
                      uVar14 = (lVar6 >> 5) * -0x71c71c71c71c71c7;
                      uVar9 = 1;
                      uVar16 = 0;
                      do {
                        uVar17 = uVar9;
                        lVar6 = *(long *)(*(long *)(lVar18 + 0x1a8) + uVar16 * 0x120 + 0x40);
                        if (*(int *)(lVar6 + uVar23 * 4) != *(int *)(lVar6 + uVar10 * 4)) {
                          *(int *)(lStack_190 + uVar23 * 4) = (int)(uStack_170 - lStack_178 >> 2);
                          auStack_1a0[0] = uVar12;
                          FUN_1092d7128(&lStack_178,auStack_1a0);
                          lVar19 = *(long *)(lVar18 + 0x10);
                          goto LAB_10986a1a8;
                        }
                        uVar9 = (ulong)((int)uVar17 + 1);
                        uVar16 = uVar17;
                      } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
                    }
                    *(undefined4 *)(lStack_190 + uVar23 * 4) =
                         *(undefined4 *)(lStack_190 + uVar10 * 4);
LAB_10986a1a8:
                    if (uVar12 == 0xffffffff) break;
                    iVar2 = iVar21;
                    if (0x55555555 < uVar12 * -0x55555555) {
                      iVar2 = -1;
                    }
                    if ((iVar2 + uVar12 == 0xffffffff) ||
                       (iVar2 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar12) * 4),
                       iVar2 == -1)) break;
                    iVar15 = iVar21;
                    if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
                      iVar15 = -1;
                    }
                    uVar12 = iVar15 + iVar2;
                    uVar10 = uVar23;
                    if (uVar12 == 0xffffffff || uVar12 == uVar22) break;
                  } while( true );
                }
              }
            }
            uVar20 = uVar20 + 1;
            lVar6 = *(long *)(lVar19 + 0x30);
          } while ((long)uVar20 < (long)(int)((ulong)(*(long *)(lVar19 + 0x38) - lVar6) >> 2));
        }
        lVar19 = *(long *)(lVar18 + 8);
        lVar6 = *(long *)(lVar19 + 0x58);
        if ((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0)) >> 2) * -0x55555555 != 0
           ) {
          uVar23 = 0;
          uVar20 = 0;
          do {
            lVar19 = 0;
            auStack_1a0[2] = 0;
            auStack_1a0[0] = 0;
            auStack_1a0[1] = 0;
            uVar10 = uVar23;
            do {
              *(undefined4 *)((long)auStack_1a0 + lVar19) =
                   *(undefined4 *)(lStack_190 + (uVar10 & 0xffffffff) * 4);
              lVar19 = lVar19 + 4;
              uVar10 = uVar10 + 1;
            } while (lVar19 != 0xc);
            FUN_1098674ec(lVar6,uVar20,auStack_1a0);
            uVar20 = uVar20 + 1;
            lVar19 = *(long *)(lVar18 + 8);
            lVar6 = *(long *)(lVar19 + 0x58);
            uVar23 = uVar23 + 3;
          } while (uVar20 < (uint)((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0))
                                        >> 2) * -0x55555555));
        }
        *(int *)(*(long *)(lVar19 + 8) + 0xa0) = (int)(uStack_170 - lStack_178 >> 2);
        lVar6 = 1;
LAB_10986a364:
        if (lStack_190 != 0) {
          lStack_188 = lStack_190;
          __ZdlPv();
        }
        if (lStack_178 != 0) {
          uStack_170 = lStack_178;
          __ZdlPv();
        }
      }
      return lVar6;
    }
  } while( true );
}



/* Entry: 109869e84; end: 10986a3e3;  */

undefined8 FUN_109869e84(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10) >> 2;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  lStack_78 = 0;
  FUN_10986e004(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xc0,
                (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&lStack_78);
  if (*(long *)(param_1 + 0x1a8) == *(long *)(param_1 + 0x1b0)) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar17 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        lStack_78 = 0;
        uVar6 = uVar17;
        do {
          if (uVar6 == 0xffffffff) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(**(long **)(param_1 + 0x10) + (ulong)uVar6 * 4);
          }
          *(undefined4 *)((long)&lStack_78 + lVar5) = uVar7;
          lVar5 = lVar5 + 4;
          uVar6 = uVar6 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,&lStack_78);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar17 = uVar17 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(undefined4 *)(*(long *)(lVar5 + 8) + 0xa0) = param_2;
    uVar14 = 1;
  }
  else {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10925b8c4(&lStack_90,
                  ((*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10)) * 0x40000000 >>
                  0x20);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (0 < (int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2)) {
      uVar15 = 0;
      do {
        uVar17 = *(uint *)(lVar4 + uVar15 * 4);
        uVar18 = (ulong)uVar17;
        if (uVar17 != 0xffffffff) {
          iVar16 = 2;
          uVar12 = uVar18;
          if ((*(ulong *)(*(long *)(param_1 + 0xe8) + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) ==
              0) {
            lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
            if (lVar4 != 0) {
              uVar11 = 0;
              uVar8 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
              iVar1 = iVar16;
              if (0x55555555 < uVar17 * -0x55555555) {
                iVar1 = -1;
              }
              do {
                lVar4 = *(long *)(param_1 + 0x1a8) + uVar11 * 0x120;
                uVar6 = *(uint *)(**(long **)(lVar4 + 0x88) + uVar18 * 4);
                if ((*(ulong *)(*(long *)(lVar4 + 0x20) + (ulong)(uVar6 >> 6) * 8) >>
                     ((ulong)uVar6 & 0x3f) & 1) != 0) {
                  uVar12 = 0xffffffff;
                  if ((ulong)(iVar1 + uVar17) != 0xffffffff) {
                    iVar10 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4);
                    if (iVar10 == -1) {
                      uVar12 = 0xffffffff;
                    }
                    else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                      uVar12 = (ulong)(iVar10 + 2);
                    }
                    else {
                      uVar12 = (ulong)(iVar10 - 1);
                    }
                  }
                  if ((uint)uVar12 != uVar17) {
                    do {
                      iVar10 = (int)uVar12;
                      if (iVar10 == -1) {
                        uVar14 = 0;
                        goto LAB_10986a364;
                      }
                      if (*(int *)(*(long *)(lVar4 + 0x40) + uVar12 * 4) !=
                          *(int *)(*(long *)(lVar4 + 0x40) + uVar18 * 4)) goto LAB_109869f74;
                      iVar2 = iVar16;
                      if (0x55555555 < (uint)(iVar10 * -0x55555555)) {
                        iVar2 = -1;
                      }
                      if ((iVar2 + iVar10 == 0xffffffff) ||
                         (iVar10 = *(int *)(*(long *)(lVar5 + 0x18) +
                                           (ulong)(uint)(iVar2 + iVar10) * 4), iVar10 == -1)) {
                        uVar12 = 0xffffffff;
                      }
                      else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                        uVar12 = (ulong)(iVar10 + 2);
                      }
                      else {
                        uVar12 = (ulong)(iVar10 - 1);
                      }
                    } while ((uint)uVar12 != uVar17);
                  }
                }
                uVar11 = (ulong)((int)uVar11 + 1);
                uVar12 = uVar18;
              } while (uVar11 <= uVar8 && uVar8 - uVar11 != 0);
            }
          }
LAB_109869f74:
          *(int *)(lStack_90 + uVar12 * 4) = (int)(uStack_70 - lStack_78 >> 2);
          uVar17 = (uint)uVar12;
          auStack_a0[0] = uVar17;
          FUN_1092d7128(&lStack_78,auStack_a0);
          lVar5 = *(long *)(param_1 + 0x10);
          iVar10 = 2;
          iVar1 = iVar10;
          if (0x55555555 < uVar17 * -0x55555555) {
            iVar1 = -1;
          }
          if ((iVar1 + uVar17 != 0xffffffff) &&
             (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4), iVar1 != -1))
          {
            if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
              iVar10 = -1;
            }
            uVar6 = iVar10 + iVar1;
            if (uVar6 != 0xffffffff && uVar6 != uVar17) {
              do {
                uVar18 = (ulong)uVar6;
                lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
                if (lVar4 != 0) {
                  uVar9 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
                  uVar8 = 1;
                  uVar11 = 0;
                  do {
                    uVar13 = uVar8;
                    lVar4 = *(long *)(*(long *)(param_1 + 0x1a8) + uVar11 * 0x120 + 0x40);
                    if (*(int *)(lVar4 + uVar18 * 4) != *(int *)(lVar4 + uVar12 * 4)) {
                      *(int *)(lStack_90 + uVar18 * 4) = (int)(uStack_70 - lStack_78 >> 2);
                      auStack_a0[0] = uVar6;
                      FUN_1092d7128(&lStack_78,auStack_a0);
                      lVar5 = *(long *)(param_1 + 0x10);
                      goto LAB_10986a1a8;
                    }
                    uVar8 = (ulong)((int)uVar13 + 1);
                    uVar11 = uVar13;
                  } while (uVar13 <= uVar9 && uVar9 - uVar13 != 0);
                }
                *(undefined4 *)(lStack_90 + uVar18 * 4) = *(undefined4 *)(lStack_90 + uVar12 * 4);
LAB_10986a1a8:
                if (uVar6 == 0xffffffff) break;
                iVar1 = iVar16;
                if (0x55555555 < uVar6 * -0x55555555) {
                  iVar1 = -1;
                }
                if ((iVar1 + uVar6 == 0xffffffff) ||
                   (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar6) * 4),
                   iVar1 == -1)) break;
                iVar10 = iVar16;
                if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
                  iVar10 = -1;
                }
                uVar6 = iVar10 + iVar1;
                uVar12 = uVar18;
                if (uVar6 == 0xffffffff || uVar6 == uVar17) break;
              } while( true );
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar4 = *(long *)(lVar5 + 0x30);
      } while ((long)uVar15 < (long)(int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2));
    }
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar18 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        auStack_a0[2] = 0;
        auStack_a0[0] = 0;
        auStack_a0[1] = 0;
        uVar12 = uVar18;
        do {
          *(undefined4 *)((long)auStack_a0 + lVar5) =
               *(undefined4 *)(lStack_90 + (uVar12 & 0xffffffff) * 4);
          lVar5 = lVar5 + 4;
          uVar12 = uVar12 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,auStack_a0);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar18 = uVar18 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(int *)(*(long *)(lVar5 + 8) + 0xa0) = (int)(uStack_70 - lStack_78 >> 2);
    uVar14 = 1;
LAB_10986a364:
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if (lStack_78 != 0) {
      uStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return uVar14;
}



/* Entry: 10986a3e4; end: 10986a503;  */

undefined8 FUN_10986a3e4(void)

{
  return 1;
}



/* Entry: 10986a504; end: 10986a73f;  */

long FUN_10986a504(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (*(long *)(param_1 + 0x1b0) == lVar3) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar1 = *(uint *)(lVar3 + uVar7 * 0x120);
    if ((-1 < (int)uVar1) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10),
       (int)uVar1 < (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar3) >> 3))) {
      plVar5 = *(long **)(lVar3 + (ulong)uVar1 * 8);
      plVar2 = plVar5;
      (**(code **)(*plVar5 + 0x30))();
      if (0 < (int)plVar2) {
        iVar6 = 0;
        do {
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x28))(plVar5,iVar6);
          if ((int)plVar2 == param_2) {
            lVar3 = *(long *)(param_1 + 0x1a8) + uVar7 * 0x120;
            if (*(char *)(lVar3 + 200) != '\0') {
              return lVar3 + 8;
            }
            return 0;
          }
          iVar6 = iVar6 + 1;
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x30))();
        } while (iVar6 < (int)plVar2);
      }
    }
    uVar7 = (ulong)((int)uVar7 + 1);
    lVar3 = *(long *)(param_1 + 0x1a8);
    uVar4 = (*(long *)(param_1 + 0x1b0) - lVar3 >> 5) * -0x71c71c71c71c71c7;
  } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  return 0;
}



/* Entry: 10986a740; end: 10986a9f7;  */

undefined8 FUN_10986a740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
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
  
  lVar10 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(lVar10 + 0x40);
  lVar8 = plVar11[1];
  lVar3 = plVar11[2];
  lVar7 = lVar3 + 1;
  if (lVar8 < lVar7) {
    return 0;
  }
  lVar13 = *plVar11;
  bVar4 = *(byte *)(lVar13 + lVar3);
  plVar11[2] = lVar7;
  lVar1 = lVar3 + 2;
  if (lVar8 < lVar1) {
    return 0;
  }
  cVar5 = *(char *)(lVar13 + lVar7);
  plVar11[2] = lVar1;
  if ((char)bVar4 < '\0') {
    if (-1 < *(int *)(param_1 + 0x1a0)) {
      return 0;
    }
    piVar14 = (int *)(param_1 + 0x1a0);
  }
  else {
    uVar15 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) * -0x71c71c71c71c71c7;
    if (uVar15 < bVar4 || uVar15 - bVar4 == 0) {
      return 0;
    }
    piVar14 = (int *)(*(long *)(param_1 + 0x1a8) + (ulong)bVar4 * 0x120);
    if (-1 < *piVar14) {
      return 0;
    }
  }
  *piVar14 = (int)param_2;
  if ((ushort)(*(ushort *)(lVar10 + 0x48) >> 8 | *(ushort *)(lVar10 + 0x48) << 8) < 0x102) {
    if (cVar5 != '\0') {
      if ((char)bVar4 < '\0') {
        return 0;
      }
      goto LAB_10986a834;
    }
    bVar12 = 0;
  }
  else {
    if (lVar8 < lVar3 + 3) {
      return 0;
    }
    bVar12 = *(byte *)(lVar13 + lVar1);
    plVar11[2] = lVar3 + 3;
    if (1 < bVar12) {
      return 0;
    }
    if (cVar5 != '\0') {
      if (bVar12 != 0) {
        return 0;
      }
      if ((char)bVar4 < '\0') {
        return 0;
      }
LAB_10986a834:
      puVar16 = *(undefined **)(lVar10 + 0x58);
      lVar7 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
      puVar2 = (undefined *)(lVar7 + 0xd0);
      lVar7 = lVar7 + 8;
      ppuVar6 = (undefined **)0xa0;
      __Znwm();
      *ppuVar6 = (undefined *)&PTR_DAT_110b161d8;
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[3] = (undefined *)0x0;
      ppuVar6[6] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuVar6[8] = (undefined *)0x0;
      ppuVar6[7] = (undefined *)0x0;
      ppuVar6[10] = (undefined *)0x0;
      ppuVar6[9] = (undefined *)0x0;
      ppuVar6[0xc] = (undefined *)0x0;
      ppuVar6[0xb] = (undefined *)0x0;
      ppuVar6[0xd] = (undefined *)0x0;
      ppuVar6[0xe] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)&PTR_FUN_110b16008;
      ppuVar6[0xf] = (undefined *)0x0;
      ppuVar6[0x10] = (undefined *)0x0;
      ppuVar6[0x11] = puVar16;
      ppuVar6[0x12] = puVar2;
      ppuVar6[0x13] = (undefined *)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      ppuStack_b8 = &PTR_FUN_110b16008;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_d8 = lVar7;
      puStack_d0 = puVar2;
      puStack_c8 = puVar16;
      ppuStack_c0 = ppuVar6;
      FUN_109864c78(&ppuStack_b8,lVar7,&lStack_d8);
      FUN_109864cfc(ppuVar6,&ppuStack_b8);
      FUN_109864d80(&ppuStack_b8);
      goto LAB_10986a948;
    }
  }
  if ((char)bVar4 < '\0') {
    lVar7 = param_1 + 0x168;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
    lVar7 = lVar8 + 0xd0;
    *(undefined1 *)(lVar8 + 200) = 0;
  }
  if (bVar12 == 1) {
    FUN_10986a9f8();
  }
  else {
    FUN_10986ab5c(&ppuStack_b8,param_1,lVar7);
  }
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 == (undefined **)0x0) {
    return 0;
  }
LAB_10986a948:
  plVar11 = (long *)0x80;
  __Znwm();
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[1] = 0;
  *plVar11 = (long)&PTR_DAT_110b14db8;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0xf] = (long)ppuVar6;
  uVar9 = *(undefined8 *)(param_1 + 8);
  plStack_e0 = plVar11;
  FUN_109864dbc(uVar9,param_2,&plStack_e0);
  plVar11 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
    return uVar9;
  }
  return uVar9;
}



/* Entry: 10986a9f8; end: 10986ab5b;  */

void FUN_10986a9f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
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
  long alStack_88 [7];
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  *puVar1 = &PTR_FUN_110b16080;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[2] = &PTR_FUN_110b160d8;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = uVar3;
  puVar1[0x1c] = param_3;
  puVar1[0x1d] = 0;
  uStack_138 = *(undefined8 *)(param_2 + 0x10);
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuStack_118 = &PTR_FUN_110b160d8;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  alStack_88[1] = 0;
  alStack_88[0] = 0;
  alStack_88[2] = 0;
  alStack_88[4] = 0;
  alStack_88[5] = 0;
  alStack_88[6] = 0;
  uStack_130 = param_3;
  uStack_128 = uVar3;
  puStack_120 = puVar1;
  func_0x00010986ea80(&ppuStack_118,uStack_138,&uStack_138);
  FUN_10986eb00(puVar1,&ppuStack_118);
  *param_1 = puVar1;
  ppuStack_118 = &PTR_FUN_110b160d8;
  if (alStack_88[4] != 0) {
    alStack_88[5] = alStack_88[4];
    __ZdlPv();
  }
  lVar2 = 0;
  do {
    if (*(long *)((long)alStack_88 + lVar2) != 0) {
      *(long *)((long)alStack_88 + lVar2 + 8) = *(long *)((long)alStack_88 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x48);
  FUN_10986f99c(&ppuStack_118);
  return;
}



/* Entry: 10986ab5c; end: 10986ac6b;  */

void FUN_10986ab5c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
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
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = &PTR_DAT_110b16150;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_110b16198;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = param_3;
  puVar1[0x13] = 0;
  uStack_d8 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  ppuStack_b8 = &PTR_FUN_110b16198;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  puStack_c0 = puVar1;
  func_0x00010986ea80(&ppuStack_b8,uStack_d8,&uStack_d8);
  FUN_10986fbb4(puVar1,&ppuStack_b8);
  *param_1 = puVar1;
  ppuStack_b8 = &PTR_FUN_110b16198;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  FUN_10986f99c(&ppuStack_b8);
  return;
}



/* Entry: 10986ac6c; end: 10986b333;  */

void FUN_10986ac6c(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined2 uStack_7e;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 *puVar21;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_109870e88(param_1 + 0x21);
  lVar11 = param_1[1];
  bVar3 = *(byte *)(lVar11 + 0x48);
  if (CONCAT11(bVar3,*(undefined1 *)(lVar11 + 0x49)) < 0x202) {
    plVar9 = *(long **)(lVar11 + 0x40);
    if (bVar3 < 2) {
      lVar19 = plVar9[2] + 4;
      if (plVar9[1] < lVar19) {
        return;
      }
      uVar14 = *(undefined4 *)(*plVar9 + plVar9[2]);
      plVar9[2] = lVar19;
    }
    else {
      iVar7 = 1;
      func_0x00010986e988(1,&lStack_b0);
      if (iVar7 == 0) {
        return;
      }
      lVar11 = param_1[1];
      bVar3 = *(byte *)(lVar11 + 0x48);
      uVar14 = (undefined4)lStack_b0;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar14;
  }
  plVar9 = *(long **)(lVar11 + 0x40);
  if (bVar3 < 2) {
    lVar19 = plVar9[1];
    lVar11 = plVar9[2] + 4;
    if (lVar19 < lVar11) {
      return;
    }
    uStack_64 = *(undefined4 *)(*plVar9 + plVar9[2]);
    plVar9[2] = lVar11;
    *(undefined4 *)(param_1 + 0x26) = uStack_64;
  }
  else {
    iVar7 = 1;
    func_0x00010986e988(1,&uStack_64);
    if (iVar7 == 0) {
      return;
    }
    bVar3 = *(byte *)(param_1[1] + 0x48);
    *(undefined4 *)(param_1 + 0x26) = uStack_64;
    plVar9 = *(long **)(param_1[1] + 0x40);
    if (1 < bVar3) {
      iVar7 = 1;
      func_0x00010986e988(1,&uStack_68);
      if (iVar7 == 0) {
        return;
      }
      goto LAB_10986ada0;
    }
    lVar19 = plVar9[1];
    lVar11 = plVar9[2];
  }
  if (lVar19 < lVar11 + 4) {
    return;
  }
  uStack_68 = *(uint *)(*plVar9 + lVar11);
  plVar9[2] = lVar11 + 4;
LAB_10986ada0:
  uVar17 = uStack_68;
  if (uStack_68 < 0x55555556) {
    uVar5 = *(uint *)(param_1 + 0x26);
    if ((uVar5 <= uStack_68 * 3) &&
       ((ulong)(uStack_68 * 3 >> 1) <= (ulong)(((long)(int)uVar5 + -1) * (long)(int)uVar5) >> 1)) {
      lVar16 = param_1[1];
      plVar9 = *(long **)(lVar16 + 0x40);
      lVar19 = plVar9[2];
      lVar11 = lVar19 + 1;
      if (lVar11 <= plVar9[1]) {
        bVar3 = *(byte *)(*plVar9 + lVar19);
        plVar9[2] = lVar11;
        if (*(byte *)(lVar16 + 0x48) < 2) {
          if (plVar9[1] < lVar19 + 5) {
            return;
          }
          uStack_6c = *(uint *)(*plVar9 + lVar11);
          plVar9[2] = lVar19 + 5;
        }
        else {
          iVar7 = 1;
          func_0x00010986e988(1,&uStack_6c);
          if (iVar7 == 0) {
            return;
          }
        }
        uVar5 = uStack_6c;
        uVar18 = (ulong)uStack_6c;
        if ((uStack_6c <= uVar17) && (uVar17 <= (uint)(uVar18 * 0x2aaaaaaab >> 0x21))) {
          plVar9 = *(long **)(param_1[1] + 0x40);
          if (*(byte *)(param_1[1] + 0x48) < 2) {
            lVar11 = plVar9[2] + 4;
            if (plVar9[1] < lVar11) {
              return;
            }
            uVar2 = *(uint *)(*plVar9 + plVar9[2]);
            plVar9[2] = lVar11;
          }
          else {
            iVar7 = 1;
            func_0x00010986e988(1,&uStack_70);
            uVar2 = uStack_70;
            if (iVar7 == 0) {
              return;
            }
          }
          if (uVar2 <= uVar5) {
            param_1[7] = param_1[6];
            puVar8 = (undefined8 *)0xa8;
            uStack_70 = uVar2;
            __Znwm();
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[1] = 0;
            *puVar8 = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[9] = 0;
            puVar8[8] = 0;
            *(undefined4 *)(puVar8 + 10) = 0;
            puVar8[0xd] = 0;
            puVar8[0xe] = puVar8;
            puVar8[0x10] = 0;
            puVar8[0xf] = 0;
            puVar8[0x12] = 0;
            puVar8[0x11] = 0;
            puVar8[0x14] = 0;
            puVar8[0x13] = 0;
            plVar9 = param_1 + 2;
            lVar11 = *plVar9;
            *plVar9 = (long)puVar8;
            if ((lVar11 == 0) || (func_0x00010986e9f8(plVar9), *plVar9 != 0)) {
              param_1[0x28] = param_1[0x27];
              func_0x000107c27e9c(param_1 + 0x27,uVar17);
              param_1[0x2b] = param_1[0x2a];
              func_0x000107c27e9c(param_1 + 0x2a,uVar17);
              param_1[10] = param_1[9];
              param_1[0xd] = param_1[0xc];
              param_1[0x10] = 0;
              param_1[0x13] = param_1[0x12];
              *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
              param_1[0x15] = -1;
              lVar11 = param_1[0x35];
              lVar19 = param_1[0x36];
              while (lVar19 != lVar11) {
                lVar19 = lVar19 + -0x120;
                FUN_10986e38c(lVar19);
              }
              param_1[0x36] = lVar11;
              FUN_10986b334(param_1 + 0x35,bVar3);
              lVar11 = param_1[2];
              FUN_109875fc4(lVar11,uVar17,(int)param_1[0x26] + uVar2);
              if ((int)lVar11 != 0) {
                lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
                func_0x000108adee10(param_1 + 0x1d,(int)param_1[0x26] + uVar2,&lStack_b0);
                lVar11 = param_1[1];
                if (CONCAT11(*(byte *)(lVar11 + 0x48),*(undefined1 *)(lVar11 + 0x49)) < 0x202) {
                  plVar10 = *(long **)(lVar11 + 0x40);
                  if (*(byte *)(lVar11 + 0x48) < 2) {
                    lVar11 = plVar10[2] + 4;
                    if (plVar10[1] < lVar11) {
                      return;
                    }
                    uStack_74 = *(uint *)(*plVar10 + plVar10[2]);
                    plVar10[2] = lVar11;
                  }
                  else {
                    iVar7 = 1;
                    func_0x00010986e988(1,&uStack_74);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                  if (uStack_74 == 0) {
                    return;
                  }
                  plVar10 = *(long **)(param_1[1] + 0x40);
                  if (plVar10[1] - plVar10[2] < (long)(ulong)uStack_74) {
                    return;
                  }
                  uStack_98 = 0;
                  uStack_90 = 0;
                  uStack_80 = 0;
                  uStack_88 = 0;
                  lStack_b0 = plVar10[2] + (ulong)uStack_74 + *plVar10;
                  lStack_a8 = plVar10[1] - (plVar10[2] + (ulong)uStack_74);
                  uStack_7e = *(undefined2 *)((long)plVar10 + 0x32);
                  lStack_a0 = 0;
                  plVar10 = param_1;
                  func_0x00010986b6c8(param_1,&lStack_b0);
                  iVar7 = (int)plVar10;
                  if (iVar7 == -1) {
                    return;
                  }
                }
                else {
                  plVar10 = param_1;
                  func_0x00010986b6c8(param_1,*(undefined8 *)(lVar11 + 0x40));
                  if ((int)plVar10 == -1) {
                    return;
                  }
                  iVar7 = -1;
                }
                FUN_109865b70(param_1 + 0x38,param_1);
                plVar10 = param_1;
                (**(code **)(*param_1 + 0x48))();
                param_1[0x53] = (long)plVar10;
                *(uint *)(param_1 + 0x54) = (int)param_1[0x26] + uVar2;
                *(uint *)(param_1 + 0x51) = (uint)bVar3;
                uStack_7e = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_80 = 0;
                plVar10 = param_1 + 0x38;
                func_0x00010986b9c8(plVar10,&lStack_b0);
                if (((int)plVar10 != 0) &&
                   (plVar10 = param_1, FUN_10986bc20(param_1,uVar18), (int)plVar10 != -1)) {
                  lVar11 = param_1[1];
                  plVar12 = *(long **)(lVar11 + 0x40);
                  *plVar12 = lStack_b0 + lStack_a0;
                  plVar12[1] = lStack_a8 - lStack_a0;
                  plVar12[2] = 0;
                  uVar4 = *(ushort *)(lVar11 + 0x48);
                  uVar4 = uVar4 >> 8 | uVar4 << 8;
                  if (uVar4 < 0x202) {
                    plVar12[2] = (long)iVar7;
                  }
                  if (param_1[0x35] != param_1[0x36]) {
                    uVar18 = ((long *)*plVar9)[1] - *(long *)*plVar9 & 0x3fffffffc;
                    if (uVar4 < 0x201) {
                      if (uVar18 != 0) {
                        uVar17 = 0;
                        do {
                          FUN_10986cc08(param_1,uVar17);
                          uVar17 = uVar17 + 3;
                        } while (uVar17 < (uint)((ulong)(((long *)param_1[2])[1] -
                                                        *(long *)param_1[2]) >> 2));
                      }
                    }
                    else if (uVar18 != 0) {
                      uVar17 = 0;
                      do {
                        func_0x00010986cdc4(param_1,uVar17);
                        uVar17 = uVar17 + 3;
                      } while (uVar17 < (uint)((ulong)(((long *)param_1[2])[1] - *(long *)param_1[2]
                                                      ) >> 2));
                    }
                  }
                  FUN_109866ccc(param_1 + 0x38);
                  lVar11 = param_1[0x35];
                  if (param_1[0x36] != lVar11) {
                    uVar18 = 0;
                    do {
                      FUN_1098765cc(lVar11 + uVar18 * 0x120 + 8,*plVar9);
                      lVar19 = param_1[0x35];
                      lVar11 = lVar19 + uVar18 * 0x120;
                      puVar20 = *(undefined4 **)(lVar11 + 0x108);
                      puVar1 = *(undefined4 **)(lVar11 + 0x110);
                      if (puVar20 != puVar1) {
                        do {
                          puVar21 = puVar20 + 1;
                          FUN_109876784(param_1[0x35] + uVar18 * 0x120 + 8,*puVar20);
                          puVar20 = puVar21;
                        } while (puVar21 != puVar1);
                        lVar19 = param_1[0x35];
                      }
                      uVar13 = lVar19 + uVar18 * 0x120 + 8;
                      FUN_109876950(uVar13,0,0);
                      if ((uVar13 & 1) == 0) {
                        return;
                      }
                      uVar18 = (ulong)((int)uVar18 + 1);
                      lVar11 = param_1[0x35];
                      uVar13 = (param_1[0x36] - lVar11 >> 5) * -0x71c71c71c71c71c7;
                    } while (uVar18 <= uVar13 && uVar13 - uVar18 != 0);
                  }
                  FUN_109866d18(param_1 + 0x2d,
                                (ulong)(*(long *)(param_1[2] + 0x38) - *(long *)(param_1[2] + 0x30))
                                >> 2);
                  lVar11 = param_1[0x35];
                  if (param_1[0x36] != lVar11) {
                    uVar18 = 0;
                    uVar13 = 1;
                    do {
                      lVar11 = lVar11 + uVar18 * 0x120;
                      iVar7 = (int)((ulong)(*(long *)(lVar11 + 0x78) - *(long *)(lVar11 + 0x70)) >>
                                   2);
                      iVar15 = (int)((ulong)(*(long *)(param_1[2] + 0x38) -
                                            *(long *)(param_1[2] + 0x30)) >> 2);
                      if (iVar7 <= iVar15) {
                        iVar7 = iVar15;
                      }
                      FUN_109866d18(lVar11 + 0xd0,iVar7);
                      lVar11 = param_1[0x35];
                      uVar18 = (param_1[0x36] - lVar11 >> 5) * -0x71c71c71c71c71c7;
                      bVar6 = uVar13 <= uVar18;
                      lVar19 = uVar18 - uVar13;
                      uVar18 = uVar13;
                      uVar13 = (ulong)((int)uVar13 + 1);
                    } while (bVar6 && lVar19 != 0);
                  }
                  FUN_10986cfc0(param_1,plVar10);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10986b334; end: 10986bc1f;  */

undefined8 * FUN_10986b334(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  byte bStack_88;
  uint uStack_84;
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar17 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar23 = (long)puVar15 - (long)puVar17;
  bVar6 = param_2 < (long *)((lVar23 >> 5) * -0x71c71c71c71c71c7);
  uVar18 = (long)param_2 + (lVar23 >> 5) * 0x71c71c71c71c71c7;
  if (bVar6 || uVar18 == 0) {
    puVar9 = param_1;
    if (bVar6) {
      while (puVar15 != puVar17 + (long)param_2 * 0x24) {
        puVar15 = puVar15 + -0x24;
        puVar9 = puVar15;
        FUN_10986e38c(puVar15);
      }
      param_1[1] = puVar17 + (long)param_2 * 0x24;
    }
    return puVar9;
  }
  if (uVar18 <= (ulong)((param_1[2] - (long)puVar15 >> 5) * -0x71c71c71c71c71c7)) {
    puVar17 = puVar15 + uVar18 * 0x24;
    do {
      *(undefined4 *)puVar15 = 0xffffffff;
      puVar15[4] = 0;
      puVar15[3] = 0;
      puVar15[6] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[1] = 0;
      *(undefined1 *)(puVar15 + 7) = 1;
      puVar15[9] = 0;
      puVar15[8] = 0;
      puVar15[0xb] = 0;
      puVar15[10] = 0;
      puVar15[0xd] = 0;
      puVar15[0xc] = 0;
      puVar15[0xf] = 0;
      puVar15[0xe] = 0;
      puVar15[0x11] = 0;
      puVar15[0x10] = 0;
      puVar15[0x12] = puVar15 + 1;
      puVar15[0x14] = 0;
      puVar15[0x13] = 0;
      puVar15[0x16] = 0;
      puVar15[0x15] = 0;
      puVar15[0x18] = 0;
      puVar15[0x17] = 0;
      *(undefined1 *)(puVar15 + 0x19) = 1;
      puVar15[0x1b] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1e] = 0;
      *(undefined4 *)(puVar15 + 0x20) = 0;
      puVar15[0x21] = 0;
      puVar15[0x22] = 0;
      puVar15[0x23] = 0;
      puVar15 = puVar15 + 0x24;
    } while (puVar15 != puVar17);
    param_1[1] = puVar17;
    return param_1;
  }
  lVar11 = param_1[2] - (long)puVar17 >> 5;
  plVar12 = (long *)(lVar11 * 0x1c71c71c71c71c72);
  if (plVar12 < param_2 || (long)plVar12 - (long)param_2 == 0) {
    plVar12 = param_2;
  }
  if (0x71c71c71c71c70 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
    plVar12 = (long *)0xe38e38e38e38e3;
  }
  if (plVar12 < (long *)0xe38e38e38e38e4) {
    puVar9 = (undefined8 *)((long)plVar12 * 0x120);
    __Znwm();
    puVar2 = (undefined4 *)((long)puVar9 + lVar23);
    puVar13 = puVar2;
    do {
      *puVar13 = 0xffffffff;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      *(undefined8 *)(puVar13 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined1 *)(puVar13 + 0xe) = 1;
      *(undefined8 *)(puVar13 + 0x12) = 0;
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0x16) = 0;
      *(undefined8 *)(puVar13 + 0x14) = 0;
      *(undefined8 *)(puVar13 + 0x1a) = 0;
      *(undefined8 *)(puVar13 + 0x18) = 0;
      *(undefined8 *)(puVar13 + 0x1e) = 0;
      *(undefined8 *)(puVar13 + 0x1c) = 0;
      *(undefined8 *)(puVar13 + 0x22) = 0;
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined4 **)(puVar13 + 0x24) = puVar13 + 2;
      *(undefined8 *)(puVar13 + 0x28) = 0;
      *(undefined8 *)(puVar13 + 0x26) = 0;
      *(undefined8 *)(puVar13 + 0x2c) = 0;
      *(undefined8 *)(puVar13 + 0x2a) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(undefined8 *)(puVar13 + 0x2e) = 0;
      *(undefined1 *)(puVar13 + 0x32) = 1;
      *(undefined8 *)(puVar13 + 0x36) = 0;
      *(undefined8 *)(puVar13 + 0x34) = 0;
      *(undefined8 *)(puVar13 + 0x3a) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x3e) = 0;
      *(undefined8 *)(puVar13 + 0x3c) = 0;
      puVar13[0x40] = 0;
      *(undefined8 *)(puVar13 + 0x42) = 0;
      *(undefined8 *)(puVar13 + 0x44) = 0;
      *(undefined8 *)(puVar13 + 0x46) = 0;
      puVar13 = puVar13 + 0x48;
    } while (puVar13 != puVar2 + uVar18 * 0x48);
    puVar22 = puVar9 + (long)plVar12 * 0x24;
    puVar10 = puVar17;
    puVar13 = (undefined4 *)((long)puVar2 - lVar23);
    if (puVar17 != puVar15) {
      do {
        *puVar13 = *(undefined4 *)puVar10;
        *(undefined8 *)(puVar13 + 2) = puVar10[1];
        uVar24 = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = uVar24;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[1] = 0;
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        uVar24 = puVar10[5];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 10) = uVar24;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[4] = 0;
        *(undefined1 *)(puVar13 + 0xe) = *(undefined1 *)(puVar10 + 7);
        *(undefined8 *)(puVar13 + 0x12) = 0;
        *(undefined8 *)(puVar13 + 0x14) = 0;
        *(undefined8 *)(puVar13 + 0x10) = 0;
        uVar24 = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = uVar24;
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        *(undefined8 *)(puVar13 + 0x16) = 0;
        *(undefined8 *)(puVar13 + 0x18) = 0;
        *(undefined8 *)(puVar13 + 0x1a) = 0;
        uVar24 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x18) = puVar10[0xc];
        *(undefined8 *)(puVar13 + 0x16) = uVar24;
        *(undefined8 *)(puVar13 + 0x1a) = puVar10[0xd];
        puVar10[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        *(undefined8 *)(puVar13 + 0x1c) = 0;
        *(undefined8 *)(puVar13 + 0x1e) = 0;
        *(undefined8 *)(puVar13 + 0x20) = 0;
        uVar24 = puVar10[0xe];
        *(undefined8 *)(puVar13 + 0x1e) = puVar10[0xf];
        *(undefined8 *)(puVar13 + 0x1c) = uVar24;
        *(undefined8 *)(puVar13 + 0x20) = puVar10[0x10];
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0xe] = 0;
        uVar24 = puVar10[0x11];
        *(undefined8 *)(puVar13 + 0x24) = puVar10[0x12];
        *(undefined8 *)(puVar13 + 0x22) = uVar24;
        *(undefined8 *)(puVar13 + 0x28) = 0;
        *(undefined8 *)(puVar13 + 0x2a) = 0;
        *(undefined8 *)(puVar13 + 0x26) = 0;
        uVar24 = puVar10[0x13];
        *(undefined8 *)(puVar13 + 0x28) = puVar10[0x14];
        *(undefined8 *)(puVar13 + 0x26) = uVar24;
        *(undefined8 *)(puVar13 + 0x2a) = puVar10[0x15];
        puVar10[0x13] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        *(undefined8 *)(puVar13 + 0x2c) = 0;
        *(undefined8 *)(puVar13 + 0x2e) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        uVar24 = puVar10[0x16];
        *(undefined8 *)(puVar13 + 0x2e) = puVar10[0x17];
        *(undefined8 *)(puVar13 + 0x2c) = uVar24;
        *(undefined8 *)(puVar13 + 0x30) = puVar10[0x18];
        puVar10[0x17] = 0;
        puVar10[0x18] = 0;
        puVar10[0x16] = 0;
        *(undefined1 *)(puVar13 + 0x32) = *(undefined1 *)(puVar10 + 0x19);
        *(undefined8 *)(puVar13 + 0x36) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x34) = 0;
        uVar24 = puVar10[0x1a];
        *(undefined8 *)(puVar13 + 0x36) = puVar10[0x1b];
        *(undefined8 *)(puVar13 + 0x34) = uVar24;
        *(undefined8 *)(puVar13 + 0x38) = puVar10[0x1c];
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x1c] = 0;
        *(undefined8 *)(puVar13 + 0x3a) = 0;
        *(undefined8 *)(puVar13 + 0x3c) = 0;
        *(undefined8 *)(puVar13 + 0x3e) = 0;
        uVar24 = puVar10[0x1d];
        *(undefined8 *)(puVar13 + 0x3c) = puVar10[0x1e];
        *(undefined8 *)(puVar13 + 0x3a) = uVar24;
        *(undefined8 *)(puVar13 + 0x3e) = puVar10[0x1f];
        puVar10[0x1e] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x1d] = 0;
        puVar13[0x40] = *(undefined4 *)(puVar10 + 0x20);
        *(undefined8 *)(puVar13 + 0x44) = 0;
        *(undefined8 *)(puVar13 + 0x46) = 0;
        *(undefined8 *)(puVar13 + 0x42) = 0;
        *(undefined8 *)(puVar13 + 0x42) = puVar10[0x21];
        uVar24 = puVar10[0x22];
        *(undefined8 *)(puVar13 + 0x46) = puVar10[0x23];
        *(undefined8 *)(puVar13 + 0x44) = uVar24;
        puVar10[0x21] = 0;
        puVar10[0x22] = 0;
        puVar10[0x23] = 0;
        puVar10 = puVar10 + 0x24;
        puVar13 = puVar13 + 0x48;
      } while (puVar10 != puVar15);
      do {
        puVar9 = puVar17;
        FUN_10986e38c(puVar17);
        puVar17 = puVar17 + 0x24;
      } while (puVar17 != puVar15);
      puVar17 = (undefined8 *)*param_1;
    }
    *param_1 = (undefined4 *)((long)puVar2 - lVar23);
    param_1[1] = puVar2 + uVar18 * 0x48;
    param_1[2] = puVar22;
    if (puVar17 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar17);
      return puVar17;
    }
    return puVar9;
  }
  puVar9 = param_1;
  func_0x000104c4f740();
  uStack_48 = 0x10986b6c8;
  lStack_80 = lVar23;
  plStack_78 = plVar12;
  uStack_70 = uVar18;
  puStack_68 = puVar17;
  puStack_60 = puVar15;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(byte *)(puVar9[1] + 0x48) < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    uVar16 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    iVar20 = 1;
    func_0x00010986e988(1,&uStack_84,param_2);
    uVar16 = uStack_84;
    if (iVar20 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (uVar16 != 0) {
    if ((uint)((ulong)(((long *)puVar9[2])[1] - *(long *)puVar9[2] >> 2) / 3) < uVar16) {
      return (undefined8 *)0xffffffff;
    }
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar11 = param_2[1];
        lVar3 = param_2[2];
        lVar23 = lVar3 + 4;
        if (lVar11 < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        lVar14 = *param_2;
        iStack_90 = *(int *)(lVar14 + lVar3);
        param_2[2] = lVar23;
        lVar1 = lVar3 + 8;
        if (lVar11 < lVar1) {
          return (undefined8 *)0xffffffff;
        }
        uStack_8c = *(uint *)(lVar14 + lVar23);
        param_2[2] = lVar1;
        if (lVar11 < lVar3 + 9) {
          return (undefined8 *)0xffffffff;
        }
        bVar5 = *(byte *)(lVar14 + lVar1);
        param_2[2] = lVar3 + 9;
        bStack_88 = bStack_88 & 0xfe | bVar5 & 1;
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      uVar19 = 0;
      uVar21 = uVar16;
      do {
        iVar20 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        uVar19 = uStack_94 + uVar19;
        iVar20 = 1;
        uStack_8c = uVar19;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iStack_90 = uVar19 - uStack_94;
        if (uVar19 < uStack_94) {
          return (undefined8 *)0xffffffff;
        }
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      *(undefined1 *)(param_2 + 6) = 1;
      param_2[3] = *param_2 + param_2[2];
      param_2[4] = *param_2 + param_2[1];
      param_2[5] = 0;
      uVar18 = (ulong)uVar16;
      lVar23 = 8;
      do {
        uVar4 = 1;
        if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) <
            0x202) {
          uVar4 = 2;
        }
        func_0x00010985f050(param_2,uVar4,&iStack_90);
        *(byte *)(puVar9[9] + lVar23) = *(byte *)(puVar9[9] + lVar23) & 0xfe | (byte)iStack_90 & 1;
        lVar23 = lVar23 + 0xc;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      *(undefined1 *)(param_2 + 6) = 0;
      param_2[2] = param_2[2] + (param_2[5] + 7U >> 3);
    }
  }
  iStack_90 = 0;
  bVar5 = *(byte *)(puVar9[1] + 0x48);
  if (bVar5 < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    iVar20 = *(int *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    if (0x200 < CONCAT11(bVar5,*(undefined1 *)(puVar9[1] + 0x49))) goto LAB_10986b9a4;
    iVar7 = 1;
    func_0x00010986e988(1,&iStack_90,param_2);
    iVar20 = iStack_90;
    if (iVar7 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (iVar20 != 0) {
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar23 = param_2[2] + 4;
        if (param_2[1] < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        uVar4 = *(undefined4 *)(*param_2 + param_2[2]);
        param_2[2] = lVar23;
        FUN_109867418(puVar9 + 0xc,uVar4);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    else {
      iVar7 = 0;
      do {
        iVar8 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar8 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iVar7 = uStack_94 + iVar7;
        FUN_109867418(puVar9 + 0xc,iVar7);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
  }
LAB_10986b9a4:
  return (undefined8 *)(ulong)*(uint *)(param_2 + 2);
}



/* Entry: 10986bc20; end: 10986cc07;  */

ulong FUN_10986bc20(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint ****ppppuVar7;
  int iVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint *puVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  long *plVar33;
  long *plStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_c9;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  uint ****ppppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  uint ****ppppuStack_78;
  uint auStack_6c [3];
  
  ppppuStack_88 = (uint ****)0x0;
  ppppuStack_80 = (uint ****)0x0;
  ppppuStack_78 = (uint ****)0x0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  ppppuStack_c8 = (uint ****)0x0;
  ppppuStack_c0 = (uint ****)0x0;
  ppppuStack_b8 = (uint ****)0x0;
  iVar31 = *(int *)(param_1 + 0xf0);
  if ((int)param_2 < 1) {
    param_2 = 0;
  }
  else {
    uVar30 = 0;
    lVar18 = *(long *)(param_1 + 0x1a8);
    lVar21 = *(long *)(param_1 + 0x1b0);
    do {
      iVar13 = *(int *)(param_1 + 0x2c4);
      uVar29 = (uint)uVar30;
      if (iVar13 == -1) {
        plVar14 = *(long **)(param_1 + 0x290);
        (**(code **)(*plVar14 + 0x40))();
        if ((ushort)(*(ushort *)(plVar14 + 9) >> 8 | *(ushort *)(plVar14 + 9) << 8) < 0x202) {
          func_0x00010985f050(param_1 + 0x1f8,1,&plStack_e8);
          uVar16 = 0;
          if ((uint)plStack_e8 != 0) {
            func_0x00010985f050(param_1 + 0x1f8,2,auStack_6c);
            uVar16 = (uint)plStack_e8 | auStack_6c[0] << 1;
          }
          goto LAB_10986bce0;
        }
        *(undefined4 *)(param_1 + 0x2c0) = 7;
LAB_10986bea8:
        plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar29 * 3);
        uVar32 = *(ulong *)(param_1 + 0x10);
        FUN_1098672c4();
        plVar33 = *(long **)(param_1 + 0x10);
        iVar13 = (uint)plStack_e8;
        iVar8 = (int)uVar32;
        *(int *)(*plVar33 + ((ulong)plStack_e8 & 0xffffffff) * 4) = iVar8;
        plVar14 = plVar33;
        FUN_1098672c4();
        *(int *)(*plVar33 + (ulong)(iVar13 + 1) * 4) = (int)plVar14;
        plVar33 = *(long **)(param_1 + 0x10);
        iVar13 = (uint)plStack_e8;
        plVar14 = plVar33;
        FUN_1098672c4();
        *(int *)(*plVar33 + (ulong)(iVar13 + 2) * 4) = (int)plVar14;
        piVar19 = *(int **)(*(long *)(param_1 + 0x10) + 0x30);
        if (iVar31 < (int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) - (long)piVar19) >> 2
                          )) goto LAB_10986cb54;
        if (iVar8 == -1) {
          *piVar19 = (uint)plStack_e8 + 1;
          uVar16 = 1;
LAB_10986c130:
          piVar19[uVar16] = (uint)plStack_e8 + 2;
        }
        else {
          piVar19[uVar32 & 0xffffffff] = (uint)plStack_e8;
          if (iVar8 + 1U == 0xffffffff) {
            uVar16 = 0;
            goto LAB_10986c130;
          }
          piVar19[iVar8 + 1U] = (uint)plStack_e8 + 1;
          uVar16 = iVar8 + 2;
          if (uVar16 != 0xffffffff) goto LAB_10986c130;
        }
        if (ppppuStack_80 < ppppuStack_78) {
          pppppuVar9 = (uint *****)((long)ppppuStack_80 + 4);
          *(uint *)ppppuStack_80 = (uint)plStack_e8;
        }
        else {
          pppppuVar9 = &ppppuStack_88;
          FUN_10986dcb4(pppppuVar9,&plStack_e8);
        }
        ppppuStack_80 = (uint ****)pppppuVar9;
LAB_10986c1b4:
        bVar5 = true;
      }
      else {
        iVar8 = *(int *)(*(long *)(param_1 + 0x2e8) + (long)iVar13 * 4);
        uVar16 = iVar8 - 1;
        *(uint *)(*(long *)(param_1 + 0x2e8) + (long)iVar13 * 4) = uVar16;
        if ((iVar8 < 1) ||
           (uVar16 = *(uint *)(*(long *)(*(long *)(param_1 + 0x2d0) +
                                        (long)*(int *)(param_1 + 0x2c4) * 0x18) + (ulong)uVar16 * 4)
           , 4 < uVar16)) goto LAB_10986cb54;
        uVar16 = *(uint *)(&UNK_10e0046ec + (ulong)uVar16 * 4);
LAB_10986bce0:
        pppppuVar9 = (uint *****)ppppuStack_80;
        pppppuVar11 = (uint *****)ppppuStack_88;
        *(uint *)(param_1 + 0x2c0) = uVar16;
        iVar13 = 2;
        if (uVar16 == 0) {
          if (ppppuStack_88 == ppppuStack_80) goto LAB_10986cb54;
          uVar16 = *(uint *)((long)ppppuStack_80 + -4);
          plVar14 = *(long **)(param_1 + 0x10);
          if (uVar16 == 0xffffffff) {
LAB_10986bf50:
            uVar24 = 0xffffffff;
          }
          else {
            uVar28 = uVar16 - 2;
            if (0x55555555 < (uVar16 + 1) * -0x55555555) {
              uVar28 = uVar16 + 1;
            }
            if (uVar28 == 0xffffffff) goto LAB_10986bf50;
            uVar24 = (ulong)*(uint *)(*plVar14 + (ulong)uVar28 * 4);
          }
          lVar17 = plVar14[6];
          iVar8 = *(int *)(lVar17 + uVar24 * 4);
          if (iVar8 == -1) {
            uVar28 = 0xffffffff;
          }
          else {
            uVar28 = iVar8 - 2;
            if (0x55555555 < (uint)((iVar8 + 1) * -0x55555555)) {
              uVar28 = iVar8 + 1;
            }
          }
          if (((uVar16 == uVar28) ||
              ((lVar15 = plVar14[3], uVar16 != 0xffffffff &&
               (*(int *)(lVar15 + (ulong)uVar16 * 4) != -1)))) ||
             ((uVar28 != 0xffffffff && (*(int *)(lVar15 + (ulong)uVar28 * 4) != -1))))
          goto LAB_10986cb54;
          uVar6 = uVar29 * 3;
          uVar22 = uVar6 + 1;
          *(uint *)(lVar15 + (ulong)uVar16 * 4) = uVar22;
          *(uint *)(lVar15 + (ulong)uVar22 * 4) = uVar16;
          uVar1 = uVar6 + 2;
          *(uint *)(lVar15 + (ulong)uVar28 * 4) = uVar1;
          *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar28;
          if (uVar16 == 0xffffffff) {
LAB_10986c06c:
            uVar23 = 0xffffffff;
          }
          else {
            if (0x55555555 < uVar16 * -0x55555555) {
              iVar13 = -1;
            }
            if (iVar13 + uVar16 == 0xffffffff) goto LAB_10986c06c;
            uVar23 = (ulong)*(uint *)(*plVar14 + (ulong)(iVar13 + uVar16) * 4);
          }
          if (uVar28 == 0xffffffff) {
LAB_10986c0a8:
            uVar25 = 0xffffffff;
          }
          else {
            uVar16 = uVar28 - 2;
            if (0x55555555 < (uVar28 + 1) * -0x55555555) {
              uVar16 = uVar28 + 1;
            }
            if (uVar16 == 0xffffffff) goto LAB_10986c0a8;
            uVar25 = (ulong)*(uint *)(*plVar14 + (ulong)uVar16 * 4);
          }
          uVar32 = 0xffffffff;
          if ((uVar24 == uVar23) || (uVar24 == uVar25)) goto LAB_10986cb58;
          lVar15 = *plVar14;
          *(int *)(lVar15 + (ulong)uVar6 * 4) = (int)uVar24;
          *(int *)(lVar15 + (ulong)uVar22 * 4) = (int)uVar25;
          *(int *)(lVar15 + (ulong)uVar1 * 4) = (int)uVar23;
          if (uVar23 != 0xffffffff) {
            *(uint *)(lVar17 + uVar23 * 4) = uVar1;
          }
          bVar5 = false;
          uVar32 = uVar24 >> 3 & 0x1ffffff8;
          *(ulong *)(*(long *)(param_1 + 0xe8) + uVar32) =
               *(ulong *)(*(long *)(param_1 + 0xe8) + uVar32) &
               (1L << (uVar24 & 0x3f) ^ 0xffffffffffffffffU);
          *(uint *)((long)ppppuStack_80 + -4) = uVar6;
        }
        else {
          uVar32 = 0xffffffff;
          if (4 < (int)uVar16) {
            if (uVar16 == 7) goto LAB_10986bea8;
            if (uVar16 == 5) {
LAB_10986bdbc:
              if (ppppuStack_88 != ppppuStack_80) {
                uVar28 = *(uint *)((long)ppppuStack_80 + -4);
                uVar32 = *(ulong *)(param_1 + 0x10);
                lVar17 = *(long *)(uVar32 + 0x18);
                if ((uVar28 == 0xffffffff) || (*(int *)(lVar17 + (ulong)uVar28 * 4) == -1)) {
                  uVar6 = uVar29 * 3;
                  uVar22 = uVar6 + 2;
                  uVar1 = uVar6;
                  if (uVar16 == 5) {
                    uVar1 = uVar6 + 1;
                    uVar22 = uVar6;
                  }
                  iVar13 = 1;
                  if (uVar16 == 5) {
                    iVar13 = 2;
                  }
                  uVar16 = iVar13 + uVar6;
                  *(uint *)(lVar17 + (ulong)uVar16 * 4) = uVar28;
                  *(uint *)(lVar17 + (ulong)uVar28 * 4) = uVar16;
                  FUN_1098672c4();
                  pppppuVar9 = (uint *****)ppppuStack_80;
                  plVar14 = *(long **)(param_1 + 0x10);
                  lVar17 = plVar14[6];
                  if ((int)((ulong)(plVar14[7] - lVar17) >> 2) <= iVar31) {
                    lVar15 = *plVar14;
                    *(int *)(lVar15 + (ulong)uVar16 * 4) = (int)uVar32;
                    if ((int)uVar32 != -1) {
                      *(uint *)(lVar17 + (uVar32 & 0xffffffff) * 4) = uVar16;
                    }
                    if (uVar28 == 0xffffffff) {
                      uVar16 = 0xffffffff;
                      *(undefined4 *)(lVar15 + (ulong)uVar22 * 4) = 0xffffffff;
                    }
                    else {
                      iVar13 = 2;
                      if (0x55555555 < uVar28 * -0x55555555) {
                        iVar13 = -1;
                      }
                      if (iVar13 + uVar28 == 0xffffffff) {
                        *(undefined4 *)(lVar15 + (ulong)uVar22 * 4) = 0xffffffff;
                      }
                      else {
                        uVar16 = *(uint *)(lVar15 + (ulong)(iVar13 + uVar28) * 4);
                        *(uint *)(lVar15 + (ulong)uVar22 * 4) = uVar16;
                        if (uVar16 != 0xffffffff) {
                          *(uint *)(lVar17 + (ulong)uVar16 * 4) = uVar22;
                        }
                      }
                      uVar16 = uVar28 - 2;
                      if (0x55555555 < (uVar28 + 1) * -0x55555555) {
                        uVar16 = uVar28 + 1;
                      }
                      if (uVar16 != 0xffffffff) {
                        uVar16 = *(uint *)(lVar15 + (ulong)uVar16 * 4);
                      }
                    }
                    *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar16;
                    *(uint *)((long)ppppuStack_80 + -4) = uVar6;
                    goto LAB_10986c1b4;
                  }
                }
              }
              goto LAB_10986cb54;
            }
            goto LAB_10986cb58;
          }
          if (uVar16 != 1) {
            if (uVar16 == 3) goto LAB_10986bdbc;
            goto LAB_10986cb58;
          }
          if (ppppuStack_88 == ppppuStack_80) goto LAB_10986cb54;
          pppppuVar10 = (uint *****)((long)ppppuStack_80 + -4);
          uVar16 = *(uint *)pppppuVar10;
          lVar17 = lStack_b0;
          ppppuStack_80 = (uint ****)pppppuVar10;
          FUN_109870f34(lStack_b0,uStack_a8,uVar30);
          if (lVar17 != 0) {
            if (pppppuVar10 < ppppuStack_78) {
              *(uint *)pppppuVar10 = *(uint *)(lVar17 + 0x14);
              pppppuVar10 = pppppuVar9;
            }
            else {
              pppppuVar10 = &ppppuStack_88;
              FUN_10986dcb4(pppppuVar10,lVar17 + 0x14);
              pppppuVar11 = (uint *****)ppppuStack_88;
            }
            ppppuStack_80 = (uint ****)pppppuVar10;
          }
          if ((pppppuVar11 == pppppuVar10) ||
             (uVar28 = *(uint *)((long)pppppuVar10 + -4), uVar28 == uVar16)) goto LAB_10986cb54;
          plVar14 = *(long **)(param_1 + 0x10);
          lVar17 = plVar14[3];
          if (((uVar28 != 0xffffffff) && (*(int *)(lVar17 + (ulong)uVar28 * 4) != -1)) ||
             ((uVar16 != 0xffffffff && (*(int *)(lVar17 + (ulong)uVar16 * 4) != -1))))
          goto LAB_10986cb54;
          uVar6 = uVar29 * 3;
          uVar22 = uVar6 + 2;
          *(uint *)(lVar17 + (ulong)uVar28 * 4) = uVar22;
          *(uint *)(lVar17 + (ulong)uVar22 * 4) = uVar28;
          uVar1 = uVar6 + 1;
          *(uint *)(lVar17 + (ulong)uVar16 * 4) = uVar1;
          *(uint *)(lVar17 + (ulong)uVar1 * 4) = uVar16;
          if (uVar28 == 0xffffffff) {
            lVar15 = *plVar14;
            uVar32 = 0xffffffff;
            *(undefined4 *)(lVar15 + (ulong)uVar6 * 4) = 0xffffffff;
            uVar26 = 0xffffffff;
          }
          else {
            iVar8 = iVar13;
            if (0x55555555 < uVar28 * -0x55555555) {
              iVar8 = -1;
            }
            lVar15 = *plVar14;
            if (iVar8 + uVar28 == 0xffffffff) {
              uVar32 = 0xffffffff;
            }
            else {
              uVar32 = (ulong)*(uint *)(lVar15 + (ulong)(iVar8 + uVar28) * 4);
            }
            *(int *)(lVar15 + (ulong)uVar6 * 4) = (int)uVar32;
            uVar26 = uVar28 - 2;
            if (0x55555555 < (uVar28 + 1) * -0x55555555) {
              uVar26 = uVar28 + 1;
            }
            if (uVar26 != 0xffffffff) {
              uVar26 = *(uint *)(lVar15 + (ulong)uVar26 * 4);
            }
          }
          *(uint *)(lVar15 + (ulong)uVar1 * 4) = uVar26;
          if (uVar16 == 0xffffffff) {
            uVar28 = 0xffffffff;
            *(undefined4 *)(lVar15 + (ulong)uVar22 * 4) = 0xffffffff;
            uVar24 = 0xffffffff;
          }
          else {
            if (0x55555555 < uVar16 * -0x55555555) {
              iVar13 = -1;
            }
            if (iVar13 + uVar16 == 0xffffffff) {
              *(undefined4 *)(lVar15 + (ulong)uVar22 * 4) = 0xffffffff;
            }
            else {
              uVar28 = *(uint *)(lVar15 + (ulong)(iVar13 + uVar16) * 4);
              *(uint *)(lVar15 + (ulong)uVar22 * 4) = uVar28;
              if (uVar28 != 0xffffffff) {
                *(uint *)(plVar14[6] + (ulong)uVar28 * 4) = uVar22;
              }
            }
            uVar28 = uVar16 - 2;
            if (0x55555555 < (uVar16 + 1) * -0x55555555) {
              uVar28 = uVar16 + 1;
            }
            if (uVar28 == 0xffffffff) {
              uVar24 = 0xffffffff;
              uVar28 = 0xffffffff;
            }
            else {
              uVar24 = (ulong)*(uint *)(lVar15 + (ulong)uVar28 * 4);
            }
          }
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,(uint)uVar24);
          lVar27 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar27 + uVar32 * 4) =
               *(int *)(lVar27 + uVar32 * 4) + *(int *)(lVar27 + uVar24 * 4);
          lVar27 = plVar14[6];
          uVar16 = uVar28;
          if (uVar32 != 0xffffffff) {
            *(undefined4 *)(lVar27 + uVar32 * 4) = *(undefined4 *)(lVar27 + uVar24 * 4);
          }
          while (uVar16 != 0xffffffff) {
            *(int *)(lVar15 + (ulong)uVar16 * 4) = (int)uVar32;
            uVar22 = uVar16 - 2;
            if (0x55555555 < (uVar16 + 1) * -0x55555555) {
              uVar22 = uVar16 + 1;
            }
            if (((uVar22 != 0xffffffff) &&
                (uVar16 = *(uint *)(lVar17 + (ulong)uVar22 * 4), uVar22 = uVar16,
                uVar16 != 0xffffffff)) &&
               (uVar22 = uVar16 - 2, 0x55555555 < (uVar16 + 1) * -0x55555555)) {
              uVar22 = uVar16 + 1;
            }
            uVar16 = uVar22;
            if (uVar22 == uVar28) goto LAB_10986cb54;
          }
          *(undefined4 *)(lVar27 + uVar24 * 4) = 0xffffffff;
          pppppuVar9 = pppppuVar10;
          if (lVar18 == lVar21) {
            if (ppppuStack_c0 < ppppuStack_b8) {
              *(uint *)ppppuStack_c0 = (uint)uVar24;
              ppppuStack_c0 = (uint ****)((long)ppppuStack_c0 + 4);
            }
            else {
              pppppuVar11 = &ppppuStack_c8;
              FUN_10986ddcc(pppppuVar11,&plStack_e8);
              pppppuVar9 = (uint *****)ppppuStack_80;
              ppppuStack_c0 = (uint ****)pppppuVar11;
            }
          }
          bVar5 = false;
          *(uint *)((long)pppppuVar9 + -4) = uVar6;
        }
      }
      uVar28 = *(uint *)((long)pppppuVar9 + -4);
      uVar32 = (ulong)uVar28;
      uVar16 = uVar28 - 2;
      if (0x55555555 < uVar28 * -0x55555555 + 0xaaaaaaab) {
        uVar16 = uVar28 + 1;
      }
      uVar22 = uVar28 + 2;
      if (0x55555555 < uVar28 * -0x55555555) {
        uVar22 = uVar28 - 1;
      }
      uVar1 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (uVar28 != 0xffffffff) {
        uVar1 = uVar22;
        uVar6 = uVar16;
      }
      uVar16 = *(uint *)(param_1 + 0x2c0);
      if ((int)uVar16 < 5) {
        if (uVar16 < 2) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar6 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          lVar17 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar17 + uVar32 * 4) = *(int *)(lVar17 + uVar32 * 4) + 1;
          if (uVar1 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
          }
          piVar19 = (int *)(lVar17 + uVar32 * 4);
LAB_10986c340:
          iVar13 = 1;
          goto LAB_10986c3a0;
        }
        if (uVar16 == 3) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + uVar32 * 4);
          }
          lVar17 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar17 + uVar32 * 4) = *(int *)(lVar17 + uVar32 * 4) + 1;
          if (uVar6 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          *(int *)(lVar17 + uVar32 * 4) = *(int *)(lVar17 + uVar32 * 4) + 2;
          if (uVar1 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
          }
          piVar19 = (int *)(lVar17 + uVar32 * 4);
          goto LAB_10986c340;
        }
      }
      else {
        if (uVar16 == 5) {
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + uVar32 * 4);
          }
          lVar17 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar17 + uVar32 * 4) = *(int *)(lVar17 + uVar32 * 4) + 1;
          if (uVar6 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          iVar13 = *(int *)(lVar17 + uVar32 * 4) + 1;
        }
        else {
          if (uVar16 != 7) goto LAB_10986c3ac;
          plVar14 = *(long **)(param_1 + 0x298);
          if (uVar28 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + uVar32 * 4);
          }
          lVar17 = *(long *)(param_1 + 0x2a8);
          *(int *)(lVar17 + uVar32 * 4) = *(int *)(lVar17 + uVar32 * 4) + 2;
          if (uVar6 == 0xffffffff) {
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar6 * 4);
          }
          iVar13 = *(int *)(lVar17 + uVar32 * 4) + 2;
        }
        *(int *)(lVar17 + uVar32 * 4) = iVar13;
        if (uVar1 == 0xffffffff) {
          uVar32 = 0xffffffff;
        }
        else {
          uVar32 = (ulong)*(uint *)(*plVar14 + (ulong)uVar1 * 4);
        }
        piVar19 = (int *)(lVar17 + uVar32 * 4);
        iVar13 = 2;
LAB_10986c3a0:
        *piVar19 = *piVar19 + iVar13;
      }
LAB_10986c3ac:
      if (uVar6 == 0xffffffff) {
        uVar32 = 0xffffffff;
      }
      else {
        uVar32 = (ulong)*(uint *)(**(long **)(param_1 + 0x298) + (ulong)uVar6 * 4);
      }
      iVar8 = *(int *)(*(long *)(param_1 + 0x2a8) + uVar32 * 4);
      iVar13 = *(int *)(param_1 + 0x2c8);
      iVar20 = iVar13;
      if ((iVar13 <= iVar8) && (iVar20 = iVar8, *(int *)(param_1 + 0x2cc) <= iVar8)) {
        iVar20 = *(int *)(param_1 + 0x2cc);
      }
      *(int *)(param_1 + 0x2c4) = iVar20 - iVar13;
      if ((bVar5) && (lVar17 = *(long *)(param_1 + 0x50), lVar17 != *(long *)(param_1 + 0x48))) {
        do {
          if (param_2 + ~uVar29 < *(uint *)(lVar17 + -8)) goto LAB_10986cb54;
          if (*(uint *)(lVar17 + -8) != param_2 + ~uVar29) break;
          bVar4 = *(byte *)(lVar17 + -4);
          uVar16 = *(uint *)(lVar17 + -0xc);
          *(long *)(param_1 + 0x50) = lVar17 + -0xc;
          if ((int)uVar16 < 0) goto LAB_10986cb54;
          uVar28 = *(uint *)((long)ppppuStack_80 + -4);
          if ((bVar4 & 1) == 0) {
            iVar8 = uVar28 + 2;
            if (0x55555555 < uVar28 * -0x55555555) {
              iVar8 = uVar28 - 1;
            }
            iVar13 = -1;
            if (uVar28 != 0xffffffff) {
              iVar13 = iVar8;
            }
          }
          else if (uVar28 == 0xffffffff) {
            iVar13 = -1;
          }
          else {
            iVar13 = uVar28 - 2;
            if (0x55555555 < (uVar28 + 1) * -0x55555555) {
              iVar13 = uVar28 + 1;
            }
          }
          iVar8 = param_2 + ~uVar16;
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,iVar8);
          plVar14 = &lStack_b0;
          FUN_109870fcc(plVar14,iVar8,&plStack_e8);
          *(int *)((long)plVar14 + 0x14) = iVar13;
          lVar17 = *(long *)(param_1 + 0x50);
        } while (lVar17 != *(long *)(param_1 + 0x48));
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != param_2);
  }
  plVar14 = *(long **)(param_1 + 0x10);
  if ((int)((ulong)(plVar14[7] - plVar14[6]) >> 2) <= iVar31) {
    if (ppppuStack_88 != ppppuStack_80) {
      do {
        ppppuStack_80 = (uint ****)((long)ppppuStack_80 + -4);
        auStack_6c[0] = *(uint *)ppppuStack_80;
        if (*(ushort *)(param_1 + 0x1f2) < 0x202) {
          func_0x00010985f050(param_1 + 0x248,1,&plStack_e8);
          if ((uint)plStack_e8 == 0) goto LAB_10986c80c;
LAB_10986c7b0:
          plVar14 = *(long **)(param_1 + 0x10);
          lVar18 = *plVar14;
          if ((int)((ulong)(plVar14[1] - lVar18 >> 2) / 3) <= (int)param_2) goto LAB_10986cb54;
          if (auStack_6c[0] == 0xffffffff) {
LAB_10986c834:
            uVar30 = 0xffffffff;
          }
          else {
            uVar29 = auStack_6c[0] - 2;
            if (0x55555555 < (auStack_6c[0] + 1) * -0x55555555) {
              uVar29 = auStack_6c[0] + 1;
            }
            if (uVar29 == 0xffffffff) goto LAB_10986c834;
            uVar30 = (ulong)*(uint *)(lVar18 + (ulong)uVar29 * 4);
          }
          iVar31 = *(int *)(plVar14[6] + uVar30 * 4);
          if (iVar31 == -1) {
            uVar29 = 0xffffffff;
LAB_10986c89c:
            uVar32 = 0xffffffff;
          }
          else {
            uVar29 = iVar31 - 2;
            if (0x55555555 < (uint)((iVar31 + 1) * -0x55555555)) {
              uVar29 = iVar31 + 1;
            }
            if (uVar29 == 0xffffffff) {
              uVar32 = 0xffffffff;
              uVar29 = 0xffffffff;
            }
            else {
              uVar16 = uVar29 - 2;
              if (0x55555555 < (uVar29 + 1) * -0x55555555) {
                uVar16 = uVar29 + 1;
              }
              if (uVar16 == 0xffffffff) goto LAB_10986c89c;
              uVar32 = (ulong)*(uint *)(lVar18 + (ulong)uVar16 * 4);
            }
          }
          uVar28 = *(uint *)(plVar14[6] + uVar32 * 4);
          uVar16 = uVar28;
          if ((uVar28 != 0xffffffff) &&
             (uVar16 = uVar28 - 2, 0x55555555 < (uVar28 + 1) * -0x55555555)) {
            uVar16 = uVar28 + 1;
          }
          if (((((auStack_6c[0] == uVar29) || (auStack_6c[0] == uVar16)) || (uVar29 == uVar16)) ||
              ((auStack_6c[0] != 0xffffffff &&
               (*(int *)(plVar14[3] + (ulong)auStack_6c[0] * 4) != -1)))) ||
             ((lVar21 = plVar14[3], uVar29 != 0xffffffff &&
              (*(int *)(lVar21 + (ulong)uVar29 * 4) != -1)))) goto LAB_10986cb54;
          if (uVar16 == 0xffffffff) {
            uVar28 = 0xffffffff;
          }
          else {
            if (*(int *)(lVar21 + (ulong)uVar16 * 4) != -1) goto LAB_10986cb54;
            uVar28 = uVar16 - 2;
            if (0x55555555 < (uVar16 + 1) * -0x55555555) {
              uVar28 = uVar16 + 1;
            }
            if (uVar28 != 0xffffffff) {
              uVar28 = *(uint *)(lVar18 + (ulong)uVar28 * 4);
            }
          }
          uVar22 = param_2 * 3;
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar22);
          *(uint *)(lVar21 + (ulong)uVar22 * 4) = auStack_6c[0];
          *(uint *)(lVar21 + (ulong)auStack_6c[0] * 4) = uVar22;
          *(uint *)(lVar21 + (ulong)(uVar22 + 1) * 4) = uVar29;
          *(uint *)(lVar21 + (ulong)uVar29 * 4) = uVar22 + 1;
          *(uint *)(lVar21 + (ulong)(uVar22 + 2) * 4) = uVar16;
          *(uint *)(lVar21 + (ulong)uVar16 * 4) = uVar22 + 2;
          *(int *)(lVar18 + (ulong)uVar22 * 4) = (int)uVar32;
          *(uint *)(lVar18 + (ulong)(uVar22 + 1) * 4) = uVar28;
          *(int *)(lVar18 + (ulong)(uVar22 + 2) * 4) = (int)uVar30;
          lVar17 = *(long *)(param_1 + 0xe8);
          lVar21 = 3;
          uVar30 = (ulong)uVar22;
          do {
            if ((int)uVar30 == -1) {
              uVar32 = 0xffffffff;
            }
            else {
              uVar32 = (ulong)*(uint *)(lVar18 + uVar30 * 4);
            }
            uVar24 = uVar32 >> 3 & 0x1ffffff8;
            *(ulong *)(lVar17 + uVar24) =
                 *(ulong *)(lVar17 + uVar24) & (1L << (uVar32 & 0x3f) ^ 0xffffffffffffffffU);
            lVar21 = lVar21 + -1;
            uVar30 = (ulong)((int)uVar30 + 1);
          } while (lVar21 != 0);
          uStack_c9 = 1;
          func_0x0001078db3d4(param_1 + 0x78,&uStack_c9);
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          if (puVar3 < *(undefined4 **)(param_1 + 0xa0)) {
            puVar12 = puVar3 + 1;
            *puVar3 = (uint)plStack_e8;
          }
          else {
            puVar12 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar12,&plStack_e8);
          }
          param_2 = param_2 + 1;
        }
        else {
          iVar31 = (int)param_1 + 0x230;
          FUN_10985d980();
          if (iVar31 != 0) goto LAB_10986c7b0;
LAB_10986c80c:
          plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffffff00);
          func_0x0001078db3d4(param_1 + 0x78,&plStack_e8);
          puVar2 = *(uint **)(param_1 + 0x98);
          if (puVar2 < *(uint **)(param_1 + 0xa0)) {
            puVar12 = puVar2 + 1;
            *puVar2 = auStack_6c[0];
          }
          else {
            puVar12 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar12,auStack_6c);
          }
        }
        *(uint **)(param_1 + 0x98) = puVar12;
      } while (ppppuStack_88 != ppppuStack_80);
      plVar14 = *(long **)(param_1 + 0x10);
    }
    ppppuVar7 = ppppuStack_c0;
    if (param_2 == (uint)((ulong)(plVar14[1] - *plVar14 >> 2) / 3)) {
      uVar32 = (ulong)(plVar14[7] - plVar14[6]) >> 2;
      uVar29 = uStack_e0;
      for (pppppuVar9 = (uint *****)ppppuStack_c8; uStack_e0 = uVar29,
          pppppuVar9 != (uint *****)ppppuVar7; pppppuVar9 = (uint *****)((long)pppppuVar9 + 4)) {
        uVar16 = (int)uVar32 - 1;
        uVar30 = (ulong)uVar16;
        uStack_e0 = *(uint *)(plVar14[6] + uVar30 * 4);
        if (uStack_e0 == 0xffffffff) {
          do {
            iVar31 = (int)uVar32;
            uVar30 = (ulong)(iVar31 - 2);
            uVar32 = (ulong)(iVar31 - 1);
            uStack_e0 = *(uint *)(plVar14[6] + uVar30 * 4);
          } while (uStack_e0 == 0xffffffff);
          uVar16 = iVar31 - 2;
        }
        uVar28 = *(uint *)pppppuVar9;
        if (uVar28 <= uVar16) {
          uStack_d8 = 1;
          plStack_e8 = plVar14;
          uStack_dc = uStack_e0;
          do {
            if (*(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) != uVar16)
            goto LAB_10986cb54;
            *(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) = uVar28;
            FUN_10985a764(&plStack_e8);
          } while (uStack_dc != 0xffffffff);
          plVar14 = *(long **)(param_1 + 0x10);
          lVar18 = plVar14[6];
          if (uVar28 != 0xffffffff) {
            *(undefined4 *)(lVar18 + (ulong)uVar28 * 4) = *(undefined4 *)(lVar18 + uVar30 * 4);
          }
          *(undefined4 *)(lVar18 + uVar30 * 4) = 0xffffffff;
          lVar18 = *(long *)(param_1 + 0xe8);
          uVar24 = uVar30 >> 6;
          uVar30 = 1L << (uVar30 & 0x3f);
          uVar23 = (ulong)(uVar28 >> 6);
          uVar25 = 1L << ((ulong)uVar28 & 0x3f);
          if ((*(ulong *)(lVar18 + uVar24 * 8) & uVar30) == 0) {
            uVar25 = *(ulong *)(lVar18 + uVar23 * 8) & (uVar25 ^ 0xffffffffffffffff);
          }
          else {
            uVar25 = *(ulong *)(lVar18 + uVar23 * 8) | uVar25;
          }
          *(ulong *)(lVar18 + uVar23 * 8) = uVar25;
          *(ulong *)(lVar18 + uVar24 * 8) =
               *(ulong *)(lVar18 + uVar24 * 8) & (uVar30 ^ 0xffffffffffffffff);
          uVar32 = (ulong)((int)uVar32 - 1);
          uVar29 = uStack_e0;
        }
        uStack_e0 = uVar29;
        uVar29 = uStack_e0;
      }
      goto LAB_10986cb58;
    }
  }
LAB_10986cb54:
  uVar32 = 0xffffffff;
LAB_10986cb58:
  if ((uint *****)ppppuStack_c8 != (uint *****)0x0) {
    ppppuStack_c0 = ppppuStack_c8;
    __ZdlPv();
  }
  func_0x000109870eec(&lStack_b0);
  if ((uint *****)ppppuStack_88 != (uint *****)0x0) {
    ppppuStack_80 = ppppuStack_88;
    __ZdlPv();
  }
  return uVar32;
}



/* Entry: 10986cc08; end: 10986cfbf;  */

long FUN_10986cc08(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong unaff_x27;
  uint auStack_1a0 [4];
  long lStack_190;
  long lStack_188;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  uint *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  ulong uStack_100;
  uint uStack_f8;
  uint auStack_f4 [3];
  long lStack_e8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  uint uStack_78;
  uint auStack_74 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_74[0] = (uint)param_2;
  if (param_2 == (uint *)0xffffffff) {
    auStack_74[1] = -1;
    auStack_74[2] = -1;
  }
  else {
    auStack_74[1] = auStack_74[0] - 2;
    if (0x55555555 < auStack_74[0] * -0x55555555 + 0xaaaaaaab) {
      auStack_74[1] = auStack_74[0] + 1;
    }
    auStack_74[2] = auStack_74[0] + 2;
    if (0x55555555 < auStack_74[0] * -0x55555555) {
      auStack_74[2] = auStack_74[0] - 1;
    }
  }
  lVar18 = 0;
  uVar20 = 0x8e38e38e38e38e39;
  lVar6 = param_1;
  do {
    uVar22 = auStack_74[lVar18];
    if (uVar22 == 0xffffffff) {
      lVar19 = *(long *)(param_1 + 0x1a8);
      lVar11 = *(long *)(param_1 + 0x1b0);
LAB_10986cd38:
      if (lVar11 != lVar19) {
        uVar23 = 0;
        uVar10 = 1;
        do {
          lVar6 = lVar19 + uVar23 * 0x120 + 0x108;
          param_2 = &uStack_78;
          uStack_78 = uVar22;
          FUN_1092d7128();
          lVar19 = *(long *)(param_1 + 0x1a8);
          uVar23 = (*(long *)(param_1 + 0x1b0) - lVar19 >> 5) * -0x71c71c71c71c71c7;
          bVar5 = uVar10 <= uVar23;
          lVar11 = uVar23 - uVar10;
          uVar23 = uVar10;
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (bVar5 && lVar11 != 0);
      }
    }
    else {
      lVar19 = *(long *)(param_1 + 0x1a8);
      lVar11 = *(long *)(param_1 + 0x1b0);
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + (ulong)uVar22 * 4) == -1)
      goto LAB_10986cd38;
      if (lVar11 != lVar19) {
        uVar23 = 1;
        uVar10 = 0;
        do {
          unaff_x27 = uVar23;
          lVar6 = *(long *)(param_1 + 0x280) + (long)((int)unaff_x27 + -1) * 0x18;
          FUN_10985d980();
          if ((int)lVar6 != 0) {
            lVar6 = *(long *)(param_1 + 0x1a8) + uVar10 * 0x120 + 0x108;
            param_2 = &uStack_78;
            uStack_78 = uVar22;
            FUN_1092d7128();
          }
          uVar9 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) *
                  -0x71c71c71c71c71c7;
          uVar23 = (ulong)((int)unaff_x27 + 1);
          uVar10 = unaff_x27;
        } while (unaff_x27 <= uVar9 && uVar9 - unaff_x27 != 0);
      }
    }
    lVar18 = lVar18 + 1;
    if (lVar18 == 3) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return lVar6;
      }
      ___stack_chk_fail();
      uStack_88 = 0x10986cdc4;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      auStack_f4[0] = (uint)param_2;
      if (param_2 == (uint *)0xffffffff) {
        auStack_f4[1] = -1;
        auStack_f4[2] = -1;
      }
      else {
        auStack_f4[1] = auStack_f4[0] - 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555 + 0xaaaaaaab) {
          auStack_f4[1] = auStack_f4[0] + 1;
        }
        auStack_f4[2] = auStack_f4[0] + 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555) {
          auStack_f4[2] = auStack_f4[0] - 1;
        }
      }
      lVar19 = 0;
      uStack_100 = ((ulong)param_2 & 0xffffffff) / 3;
      lVar18 = lVar6;
      puVar8 = param_2;
      puStack_90 = &stack0xfffffffffffffff0;
      do {
        uVar22 = auStack_f4[lVar19];
        if ((uVar22 == 0xffffffff) ||
           (uVar12 = *(uint *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x18) + (ulong)uVar22 * 4),
           uVar12 == 0xffffffff)) {
          lVar11 = *(long *)(lVar6 + 0x1a8);
          if (*(long *)(lVar6 + 0x1b0) != lVar11) {
            uVar23 = 0;
            uVar10 = 1;
            do {
              lVar18 = lVar11 + uVar23 * 0x120 + 0x108;
              puVar8 = &uStack_f8;
              uStack_f8 = uVar22;
              FUN_1092d7128();
              lVar11 = *(long *)(lVar6 + 0x1a8);
              uVar20 = (*(long *)(lVar6 + 0x1b0) - lVar11 >> 5) * -0x71c71c71c71c71c7;
              bVar5 = uVar10 <= uVar20;
              lVar1 = uVar20 - uVar10;
              uVar20 = (ulong)((int)uVar10 + 1);
              uVar23 = uVar10;
              uVar10 = uVar20;
            } while (bVar5 && lVar1 != 0);
          }
        }
        else if (((param_2 != (uint *)0xffffffff) && ((uint)uStack_100 <= uVar12 / 3)) &&
                (*(long *)(lVar6 + 0x1b0) != *(long *)(lVar6 + 0x1a8))) {
          uVar23 = 0;
          unaff_x27 = 1;
          do {
            uVar20 = unaff_x27;
            lVar18 = *(long *)(lVar6 + 0x280) + (long)((int)uVar20 + -1) * 0x18;
            FUN_10985d980();
            if ((int)lVar18 != 0) {
              lVar18 = *(long *)(lVar6 + 0x1a8) + uVar23 * 0x120 + 0x108;
              puVar8 = &uStack_f8;
              uStack_f8 = uVar22;
              FUN_1092d7128();
            }
            uVar10 = (*(long *)(lVar6 + 0x1b0) - *(long *)(lVar6 + 0x1a8) >> 5) *
                     -0x71c71c71c71c71c7;
            unaff_x27 = (ulong)((int)uVar20 + 1);
            uVar23 = uVar20;
          } while (uVar20 <= uVar10 && uVar10 - uVar20 != 0);
        }
        uVar7 = SUB84(puVar8,0);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        return lVar18;
      }
      ___stack_chk_fail();
      uStack_160 = 0x18;
      uStack_150 = 0x8e38e38e38e38e39;
      uStack_148 = 0x120;
      pcStack_108 = FUN_10986cfc0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (*(long **)(lVar18 + 0x10))[1] - **(long **)(lVar18 + 0x10) >> 2;
      uStack_170 = (ulong)uStack_170._4_4_ << 0x20;
      lStack_178 = 0;
      uStack_158 = unaff_x27;
      puStack_140 = auStack_f4;
      uStack_138 = uVar20;
      uStack_130 = (ulong)uVar22;
      lStack_128 = lVar19;
      lStack_120 = lVar6;
      puStack_118 = param_2;
      ppuStack_110 = &puStack_90;
      FUN_10986e004(*(long *)(*(long *)(lVar18 + 8) + 0x58) + 0xc0,
                    (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&lStack_178);
      if (*(long *)(lVar18 + 0x1a8) == *(long *)(lVar18 + 0x1b0)) {
        lVar19 = *(long *)(lVar18 + 8);
        lVar6 = *(long *)(lVar19 + 0x58);
        if ((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0)) >> 2) * -0x55555555 != 0
           ) {
          uVar22 = 0;
          uVar20 = 0;
          do {
            lVar19 = 0;
            uStack_170 = uStack_170 & 0xffffffff00000000;
            lStack_178 = 0;
            uVar12 = uVar22;
            do {
              if (uVar12 == 0xffffffff) {
                uVar13 = 0xffffffff;
              }
              else {
                uVar13 = *(undefined4 *)(**(long **)(lVar18 + 0x10) + (ulong)uVar12 * 4);
              }
              *(undefined4 *)((long)&lStack_178 + lVar19) = uVar13;
              lVar19 = lVar19 + 4;
              uVar12 = uVar12 + 1;
            } while (lVar19 != 0xc);
            FUN_1098674ec(lVar6,uVar20,&lStack_178);
            uVar20 = uVar20 + 1;
            lVar19 = *(long *)(lVar18 + 8);
            lVar6 = *(long *)(lVar19 + 0x58);
            uVar22 = uVar22 + 3;
          } while (uVar20 < (uint)((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0))
                                        >> 2) * -0x55555555));
        }
        *(undefined4 *)(*(long *)(lVar19 + 8) + 0xa0) = uVar7;
        lVar6 = 1;
      }
      else {
        lStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        FUN_10925b8c4(&lStack_190,
                      ((*(long **)(lVar18 + 0x10))[1] - **(long **)(lVar18 + 0x10)) * 0x40000000 >>
                      0x20);
        lVar19 = *(long *)(lVar18 + 0x10);
        lVar6 = *(long *)(lVar19 + 0x30);
        if (0 < (int)((ulong)(*(long *)(lVar19 + 0x38) - lVar6) >> 2)) {
          uVar20 = 0;
          do {
            uVar22 = *(uint *)(lVar6 + uVar20 * 4);
            uVar23 = (ulong)uVar22;
            if (uVar22 != 0xffffffff) {
              iVar21 = 2;
              uVar10 = uVar23;
              if ((*(ulong *)(*(long *)(lVar18 + 0xe8) + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1)
                  == 0) {
                lVar6 = *(long *)(lVar18 + 0x1b0) - *(long *)(lVar18 + 0x1a8);
                if (lVar6 != 0) {
                  uVar16 = 0;
                  uVar9 = (lVar6 >> 5) * -0x71c71c71c71c71c7;
                  iVar2 = iVar21;
                  if (0x55555555 < uVar22 * -0x55555555) {
                    iVar2 = -1;
                  }
                  do {
                    lVar6 = *(long *)(lVar18 + 0x1a8) + uVar16 * 0x120;
                    uVar12 = *(uint *)(**(long **)(lVar6 + 0x88) + uVar23 * 4);
                    if ((*(ulong *)(*(long *)(lVar6 + 0x20) + (ulong)(uVar12 >> 6) * 8) >>
                         ((ulong)uVar12 & 0x3f) & 1) != 0) {
                      uVar10 = 0xffffffff;
                      if ((ulong)(iVar2 + uVar22) != 0xffffffff) {
                        iVar15 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar22) * 4);
                        if (iVar15 == -1) {
                          uVar10 = 0xffffffff;
                        }
                        else if ((uint)(iVar15 * -0x55555555) < 0x55555556) {
                          uVar10 = (ulong)(iVar15 + 2);
                        }
                        else {
                          uVar10 = (ulong)(iVar15 - 1);
                        }
                      }
                      if ((uint)uVar10 != uVar22) {
                        do {
                          iVar15 = (int)uVar10;
                          if (iVar15 == -1) {
                            lVar6 = 0;
                            goto LAB_10986d4a0;
                          }
                          if (*(int *)(*(long *)(lVar6 + 0x40) + uVar10 * 4) !=
                              *(int *)(*(long *)(lVar6 + 0x40) + uVar23 * 4)) goto LAB_10986d0b0;
                          iVar3 = iVar21;
                          if (0x55555555 < (uint)(iVar15 * -0x55555555)) {
                            iVar3 = -1;
                          }
                          if ((iVar3 + iVar15 == 0xffffffff) ||
                             (iVar15 = *(int *)(*(long *)(lVar19 + 0x18) +
                                               (ulong)(uint)(iVar3 + iVar15) * 4), iVar15 == -1)) {
                            uVar10 = 0xffffffff;
                          }
                          else if ((uint)(iVar15 * -0x55555555) < 0x55555556) {
                            uVar10 = (ulong)(iVar15 + 2);
                          }
                          else {
                            uVar10 = (ulong)(iVar15 - 1);
                          }
                        } while ((uint)uVar10 != uVar22);
                      }
                    }
                    uVar16 = (ulong)((int)uVar16 + 1);
                    uVar10 = uVar23;
                  } while (uVar16 <= uVar9 && uVar9 - uVar16 != 0);
                }
              }
LAB_10986d0b0:
              *(int *)(lStack_190 + uVar10 * 4) = (int)(uStack_170 - lStack_178 >> 2);
              uVar22 = (uint)uVar10;
              auStack_1a0[0] = uVar22;
              FUN_1092d7128(&lStack_178,auStack_1a0);
              lVar19 = *(long *)(lVar18 + 0x10);
              iVar15 = 2;
              iVar2 = iVar15;
              if (0x55555555 < uVar22 * -0x55555555) {
                iVar2 = -1;
              }
              if ((iVar2 + uVar22 != 0xffffffff) &&
                 (iVar2 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar22) * 4),
                 iVar2 != -1)) {
                if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
                  iVar15 = -1;
                }
                uVar12 = iVar15 + iVar2;
                if (uVar12 != 0xffffffff && uVar12 != uVar22) {
                  do {
                    uVar23 = (ulong)uVar12;
                    lVar6 = *(long *)(lVar18 + 0x1b0) - *(long *)(lVar18 + 0x1a8);
                    if (lVar6 != 0) {
                      uVar14 = (lVar6 >> 5) * -0x71c71c71c71c71c7;
                      uVar9 = 1;
                      uVar16 = 0;
                      do {
                        uVar17 = uVar9;
                        lVar6 = *(long *)(*(long *)(lVar18 + 0x1a8) + uVar16 * 0x120 + 0x40);
                        if (*(int *)(lVar6 + uVar23 * 4) != *(int *)(lVar6 + uVar10 * 4)) {
                          *(int *)(lStack_190 + uVar23 * 4) = (int)(uStack_170 - lStack_178 >> 2);
                          auStack_1a0[0] = uVar12;
                          FUN_1092d7128(&lStack_178,auStack_1a0);
                          lVar19 = *(long *)(lVar18 + 0x10);
                          goto LAB_10986d2e4;
                        }
                        uVar9 = (ulong)((int)uVar17 + 1);
                        uVar16 = uVar17;
                      } while (uVar17 <= uVar14 && uVar14 - uVar17 != 0);
                    }
                    *(undefined4 *)(lStack_190 + uVar23 * 4) =
                         *(undefined4 *)(lStack_190 + uVar10 * 4);
LAB_10986d2e4:
                    if (uVar12 == 0xffffffff) break;
                    iVar2 = iVar21;
                    if (0x55555555 < uVar12 * -0x55555555) {
                      iVar2 = -1;
                    }
                    if ((iVar2 + uVar12 == 0xffffffff) ||
                       (iVar2 = *(int *)(*(long *)(lVar19 + 0x18) + (ulong)(iVar2 + uVar12) * 4),
                       iVar2 == -1)) break;
                    iVar15 = iVar21;
                    if (0x55555555 < (uint)(iVar2 * -0x55555555)) {
                      iVar15 = -1;
                    }
                    uVar12 = iVar15 + iVar2;
                    uVar10 = uVar23;
                    if (uVar12 == 0xffffffff || uVar12 == uVar22) break;
                  } while( true );
                }
              }
            }
            uVar20 = uVar20 + 1;
            lVar6 = *(long *)(lVar19 + 0x30);
          } while ((long)uVar20 < (long)(int)((ulong)(*(long *)(lVar19 + 0x38) - lVar6) >> 2));
        }
        lVar19 = *(long *)(lVar18 + 8);
        lVar6 = *(long *)(lVar19 + 0x58);
        if ((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0)) >> 2) * -0x55555555 != 0
           ) {
          uVar23 = 0;
          uVar20 = 0;
          do {
            lVar19 = 0;
            auStack_1a0[2] = 0;
            auStack_1a0[0] = 0;
            auStack_1a0[1] = 0;
            uVar10 = uVar23;
            do {
              *(undefined4 *)((long)auStack_1a0 + lVar19) =
                   *(undefined4 *)(lStack_190 + (uVar10 & 0xffffffff) * 4);
              lVar19 = lVar19 + 4;
              uVar10 = uVar10 + 1;
            } while (lVar19 != 0xc);
            FUN_1098674ec(lVar6,uVar20,auStack_1a0);
            uVar20 = uVar20 + 1;
            lVar19 = *(long *)(lVar18 + 8);
            lVar6 = *(long *)(lVar19 + 0x58);
            uVar23 = uVar23 + 3;
          } while (uVar20 < (uint)((int)((ulong)(*(long *)(lVar6 + 200) - *(long *)(lVar6 + 0xc0))
                                        >> 2) * -0x55555555));
        }
        *(int *)(*(long *)(lVar19 + 8) + 0xa0) = (int)(uStack_170 - lStack_178 >> 2);
        lVar6 = 1;
LAB_10986d4a0:
        if (lStack_190 != 0) {
          lStack_188 = lStack_190;
          __ZdlPv();
        }
        if (lStack_178 != 0) {
          uStack_170 = lStack_178;
          __ZdlPv();
        }
      }
      return lVar6;
    }
  } while( true );
}



/* Entry: 10986cfc0; end: 10986d51f;  */

undefined8 FUN_10986cfc0(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10) >> 2;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  lStack_78 = 0;
  FUN_10986e004(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xc0,
                (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&lStack_78);
  if (*(long *)(param_1 + 0x1a8) == *(long *)(param_1 + 0x1b0)) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar17 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        lStack_78 = 0;
        uVar6 = uVar17;
        do {
          if (uVar6 == 0xffffffff) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(**(long **)(param_1 + 0x10) + (ulong)uVar6 * 4);
          }
          *(undefined4 *)((long)&lStack_78 + lVar5) = uVar7;
          lVar5 = lVar5 + 4;
          uVar6 = uVar6 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,&lStack_78);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar17 = uVar17 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(undefined4 *)(*(long *)(lVar5 + 8) + 0xa0) = param_2;
    uVar14 = 1;
  }
  else {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10925b8c4(&lStack_90,
                  ((*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10)) * 0x40000000 >>
                  0x20);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (0 < (int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2)) {
      uVar15 = 0;
      do {
        uVar17 = *(uint *)(lVar4 + uVar15 * 4);
        uVar18 = (ulong)uVar17;
        if (uVar17 != 0xffffffff) {
          iVar16 = 2;
          uVar12 = uVar18;
          if ((*(ulong *)(*(long *)(param_1 + 0xe8) + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) ==
              0) {
            lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
            if (lVar4 != 0) {
              uVar11 = 0;
              uVar8 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
              iVar1 = iVar16;
              if (0x55555555 < uVar17 * -0x55555555) {
                iVar1 = -1;
              }
              do {
                lVar4 = *(long *)(param_1 + 0x1a8) + uVar11 * 0x120;
                uVar6 = *(uint *)(**(long **)(lVar4 + 0x88) + uVar18 * 4);
                if ((*(ulong *)(*(long *)(lVar4 + 0x20) + (ulong)(uVar6 >> 6) * 8) >>
                     ((ulong)uVar6 & 0x3f) & 1) != 0) {
                  uVar12 = 0xffffffff;
                  if ((ulong)(iVar1 + uVar17) != 0xffffffff) {
                    iVar10 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4);
                    if (iVar10 == -1) {
                      uVar12 = 0xffffffff;
                    }
                    else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                      uVar12 = (ulong)(iVar10 + 2);
                    }
                    else {
                      uVar12 = (ulong)(iVar10 - 1);
                    }
                  }
                  if ((uint)uVar12 != uVar17) {
                    do {
                      iVar10 = (int)uVar12;
                      if (iVar10 == -1) {
                        uVar14 = 0;
                        goto LAB_10986d4a0;
                      }
                      if (*(int *)(*(long *)(lVar4 + 0x40) + uVar12 * 4) !=
                          *(int *)(*(long *)(lVar4 + 0x40) + uVar18 * 4)) goto LAB_10986d0b0;
                      iVar2 = iVar16;
                      if (0x55555555 < (uint)(iVar10 * -0x55555555)) {
                        iVar2 = -1;
                      }
                      if ((iVar2 + iVar10 == 0xffffffff) ||
                         (iVar10 = *(int *)(*(long *)(lVar5 + 0x18) +
                                           (ulong)(uint)(iVar2 + iVar10) * 4), iVar10 == -1)) {
                        uVar12 = 0xffffffff;
                      }
                      else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                        uVar12 = (ulong)(iVar10 + 2);
                      }
                      else {
                        uVar12 = (ulong)(iVar10 - 1);
                      }
                    } while ((uint)uVar12 != uVar17);
                  }
                }
                uVar11 = (ulong)((int)uVar11 + 1);
                uVar12 = uVar18;
              } while (uVar11 <= uVar8 && uVar8 - uVar11 != 0);
            }
          }
LAB_10986d0b0:
          *(int *)(lStack_90 + uVar12 * 4) = (int)(uStack_70 - lStack_78 >> 2);
          uVar17 = (uint)uVar12;
          auStack_a0[0] = uVar17;
          FUN_1092d7128(&lStack_78,auStack_a0);
          lVar5 = *(long *)(param_1 + 0x10);
          iVar10 = 2;
          iVar1 = iVar10;
          if (0x55555555 < uVar17 * -0x55555555) {
            iVar1 = -1;
          }
          if ((iVar1 + uVar17 != 0xffffffff) &&
             (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4), iVar1 != -1))
          {
            if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
              iVar10 = -1;
            }
            uVar6 = iVar10 + iVar1;
            if (uVar6 != 0xffffffff && uVar6 != uVar17) {
              do {
                uVar18 = (ulong)uVar6;
                lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
                if (lVar4 != 0) {
                  uVar9 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
                  uVar8 = 1;
                  uVar11 = 0;
                  do {
                    uVar13 = uVar8;
                    lVar4 = *(long *)(*(long *)(param_1 + 0x1a8) + uVar11 * 0x120 + 0x40);
                    if (*(int *)(lVar4 + uVar18 * 4) != *(int *)(lVar4 + uVar12 * 4)) {
                      *(int *)(lStack_90 + uVar18 * 4) = (int)(uStack_70 - lStack_78 >> 2);
                      auStack_a0[0] = uVar6;
                      FUN_1092d7128(&lStack_78,auStack_a0);
                      lVar5 = *(long *)(param_1 + 0x10);
                      goto LAB_10986d2e4;
                    }
                    uVar8 = (ulong)((int)uVar13 + 1);
                    uVar11 = uVar13;
                  } while (uVar13 <= uVar9 && uVar9 - uVar13 != 0);
                }
                *(undefined4 *)(lStack_90 + uVar18 * 4) = *(undefined4 *)(lStack_90 + uVar12 * 4);
LAB_10986d2e4:
                if (uVar6 == 0xffffffff) break;
                iVar1 = iVar16;
                if (0x55555555 < uVar6 * -0x55555555) {
                  iVar1 = -1;
                }
                if ((iVar1 + uVar6 == 0xffffffff) ||
                   (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar6) * 4),
                   iVar1 == -1)) break;
                iVar10 = iVar16;
                if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
                  iVar10 = -1;
                }
                uVar6 = iVar10 + iVar1;
                uVar12 = uVar18;
                if (uVar6 == 0xffffffff || uVar6 == uVar17) break;
              } while( true );
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar4 = *(long *)(lVar5 + 0x30);
      } while ((long)uVar15 < (long)(int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2));
    }
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar18 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        auStack_a0[2] = 0;
        auStack_a0[0] = 0;
        auStack_a0[1] = 0;
        uVar12 = uVar18;
        do {
          *(undefined4 *)((long)auStack_a0 + lVar5) =
               *(undefined4 *)(lStack_90 + (uVar12 & 0xffffffff) * 4);
          lVar5 = lVar5 + 4;
          uVar12 = uVar12 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,auStack_a0);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar18 = uVar18 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(int *)(*(long *)(lVar5 + 8) + 0xa0) = (int)(uStack_70 - lStack_78 >> 2);
    uVar14 = 1;
LAB_10986d4a0:
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if (lStack_78 != 0) {
      uStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return uVar14;
}



/* Entry: 10986d520; end: 10986d53b;  */

undefined8 FUN_10986d520(void)

{
  return 1;
}



/* Entry: 10986d53c; end: 10986d54f;  */

void FUN_10986d53c(void)

{
  FUN_10986e5d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10986d550; end: 10986d553;  */

undefined8 * FUN_10986d550(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b15ef0;
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    __ZdlPv();
  }
  lVar1 = param_1[0x50];
  param_1[0x50] = 0;
  if (lVar1 != 0) {
    __ZdaPv(lVar1 + -0x10);
  }
  FUN_10986e26c(param_1 + 0x35);
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  FUN_1093c8ab0(param_1 + 0x21);
  if (param_1[0x1d] != 0) {
    __ZdlPv();
  }
  if (param_1[0x1a] != 0) {
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010986e9f8();
  }
  return param_1;
}



/* Entry: 10986d554; end: 10986d567;  */

void FUN_10986d554(void)

{
  func_0x00010986e6f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10986d568; end: 10986d56b;  */

undefined8 * FUN_10986d568(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b15f50;
  if (param_1[0x5d] != 0) {
    param_1[0x5e] = param_1[0x5d];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x5a;
  func_0x000109848f28(&puStack_28);
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    __ZdlPv();
  }
  lVar1 = param_1[0x50];
  param_1[0x50] = 0;
  if (lVar1 != 0) {
    __ZdaPv(lVar1 + -0x10);
  }
  FUN_10986e324(param_1 + 0x35);
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  FUN_1093c8ab0(param_1 + 0x21);
  if (param_1[0x1d] != 0) {
    __ZdlPv();
  }
  if (param_1[0x1a] != 0) {
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010986e9f8();
  }
  return param_1;
}



/* Entry: 10986d56c; end: 10986d57f;  */

void FUN_10986d56c(void)

{
  func_0x00010986e82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10986d580; end: 10986d5e7;  */

void FUN_10986d580(long *param_1)

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
        lVar2 = lVar2 + -0x120;
        func_0x00010986d8cc(lVar2);
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



/* Entry: 10986d5e8; end: 10986d66b;  */

undefined8 * FUN_10986d5e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16058;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986d66c; end: 10986d66f;  */

undefined8 * FUN_10986d66c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16058;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986d670; end: 10986d683;  */

void FUN_10986d670(void)

{
  FUN_10986d5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10986d684; end: 10986d707;  */

/* WARNING: Possible PIC construction at 0x00010986d804: Changing call to branch */

undefined1  [16] FUN_10986d684(ulong *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  puVar12 = (undefined8 *)param_1[1];
  uVar10 = (long)((long)puVar12 - *param_1) >> 3;
  if (param_2 <= uVar10) {
    puVar6 = param_1;
    if (param_2 < uVar10) {
      puVar2 = (undefined8 *)(*param_1 + param_2 * 8);
      while (puVar12 != puVar2) {
        puVar12 = puVar12 + -1;
        puVar6 = (ulong *)*puVar12;
        *puVar12 = 0;
        if (puVar6 != (ulong *)0x0) {
          (**(code **)(*puVar6 + 8))();
        }
      }
      param_1[1] = (ulong)puVar2;
    }
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = puVar6;
    return auVar19;
  }
  param_2 = param_2 - uVar10;
  puVar4 = (ulong *)auStack_80;
  ppuVar17 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (ulong *)param_1[1];
  if ((ulong)((long)(param_1[2] - (long)puVar6) >> 3) < param_2) {
    uVar13 = *param_1;
    lVar15 = (long)puVar6 - uVar13;
    lVar16 = lVar15 >> 3;
    uVar10 = param_2 + lVar16;
    if (uVar10 >> 0x3d == 0) {
      uVar8 = param_1[2] - uVar13;
      uVar11 = (long)uVar8 >> 2;
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar11 = 0x1fffffffffffffff;
      }
      puStack_58 = param_1;
      if (uVar11 == 0) {
        puVar6 = (ulong *)0x0;
        lVar14 = lVar15;
      }
      else {
        puVar6 = param_1;
        FUN_10986d83c();
        uVar13 = *param_1;
        lVar16 = (long)(param_1[1] - uVar13) >> 3;
        lVar14 = param_1[1] - uVar13;
      }
      lVar15 = (long)puVar6 + lVar15;
      _bzero(lVar15,param_2 * 8);
      lVar1 = param_2 * 8;
      param_2 = lVar15 + lVar16 * -8;
      _memcpy(param_2,uVar13,lVar14);
      uStack_68 = *param_1;
      *param_1 = param_2;
      param_1[1] = lVar15 + lVar1;
      uStack_60 = param_1[2];
      param_1[2] = (ulong)(puVar6 + uVar11);
      uStack_78 = uStack_68;
      uStack_70 = uStack_68;
      puVar6 = &uStack_78;
      uVar18 = 0x10986d808;
    }
    else {
      uVar13 = param_2;
      FUN_10986d828();
      pcStack_88 = FUN_10986d828;
      puVar6 = (ulong *)&DAT_10f62a4d8;
      ppuStack_90 = ppuVar17;
      func_0x000104c4f6cc();
      puVar4 = &uStack_b0;
      pcStack_98 = FUN_10986d83c;
      ppuVar17 = &puStack_a0;
      uStack_b0 = param_2;
      puStack_a8 = param_1;
      if (uVar13 >> 0x3d == 0) {
        lVar16 = uVar13 << 3;
        puStack_a0 = (undefined1 *)&ppuStack_90;
        __Znwm(lVar16);
        auVar21._8_8_ = uVar13;
        auVar21._0_8_ = lVar16;
        return auVar21;
      }
      uVar18 = 0x10986d870;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      func_0x000104c4f740();
    }
    *(ulong *)((long)puVar4 + -0x20) = param_2;
    *(ulong **)((long)puVar4 + -0x18) = param_1;
    *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar17;
    *(undefined8 *)((long)puVar4 + -8) = uVar18;
    plVar3 = (long *)puVar6[1];
    plVar9 = (long *)puVar6[2];
    while (plVar9 != plVar3) {
      plVar9 = plVar9 + -1;
      plVar7 = (long *)*plVar9;
      puVar6[2] = (ulong)plVar9;
      *plVar9 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        plVar9 = (long *)puVar6[2];
      }
    }
    if (*puVar6 != 0) {
      __ZdlPv();
    }
    auVar22._8_8_ = uVar13;
    auVar22._0_8_ = puVar6;
    return auVar22;
  }
  lVar16 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    lVar16 = param_2 * 8;
    puVar5 = puVar6;
    _bzero(puVar6,lVar16);
    puVar6 = puVar6 + param_2;
  }
  param_1[1] = (ulong)puVar6;
  auVar20._8_8_ = lVar16;
  auVar20._0_8_ = puVar5;
  return auVar20;
}



/* Entry: 10986d708; end: 10986d827;  */

/* WARNING: Possible PIC construction at 0x00010986d804: Changing call to branch */

undefined1  [16] FUN_10986d708(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong uStack_b0;
  ulong *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  puVar4 = (ulong *)auStack_80;
  ppuVar15 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (ulong *)param_1[1];
  if (param_2 <= (ulong)((long)(param_1[2] - (long)puVar6) >> 3)) {
    lVar14 = 0;
    puVar5 = param_1;
    if (param_2 != 0) {
      lVar14 = param_2 << 3;
      puVar5 = puVar6;
      _bzero(puVar6,lVar14);
      puVar6 = puVar6 + param_2;
    }
    param_1[1] = (ulong)puVar6;
    auVar17._8_8_ = lVar14;
    auVar17._0_8_ = puVar5;
    return auVar17;
  }
  uVar11 = *param_1;
  lVar13 = (long)puVar6 - uVar11;
  lVar14 = lVar13 >> 3;
  uVar2 = param_2 + lVar14;
  if (uVar2 >> 0x3d == 0) {
    uVar8 = param_1[2] - uVar11;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    puStack_58 = param_1;
    if (uVar10 == 0) {
      puVar6 = (ulong *)0x0;
      lVar12 = lVar13;
    }
    else {
      puVar6 = param_1;
      FUN_10986d83c();
      uVar11 = *param_1;
      lVar14 = (long)(param_1[1] - uVar11) >> 3;
      lVar12 = param_1[1] - uVar11;
    }
    lVar13 = (long)puVar6 + lVar13;
    _bzero(lVar13,param_2 << 3);
    lVar1 = param_2 * 8;
    param_2 = lVar13 + lVar14 * -8;
    _memcpy(param_2,uVar11,lVar12);
    uStack_68 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar13 + lVar1;
    uStack_60 = param_1[2];
    param_1[2] = (ulong)(puVar6 + uVar10);
    uStack_78 = uStack_68;
    uStack_70 = uStack_68;
    puVar6 = &uStack_78;
    uVar16 = 0x10986d808;
  }
  else {
    uVar11 = param_2;
    FUN_10986d828();
    pcStack_88 = FUN_10986d828;
    puVar6 = (ulong *)&DAT_10f62a4d8;
    ppuStack_90 = ppuVar15;
    func_0x000104c4f6cc();
    puVar4 = &uStack_b0;
    pcStack_98 = FUN_10986d83c;
    ppuVar15 = &puStack_a0;
    uStack_b0 = param_2;
    puStack_a8 = param_1;
    if (uVar11 >> 0x3d == 0) {
      lVar14 = uVar11 << 3;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      __Znwm(lVar14);
      auVar18._8_8_ = uVar11;
      auVar18._0_8_ = lVar14;
      return auVar18;
    }
    uVar16 = 0x10986d870;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104c4f740();
  }
  *(ulong *)((long)puVar4 + -0x20) = param_2;
  *(ulong **)((long)puVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar4 + -0x10) = ppuVar15;
  *(undefined8 *)((long)puVar4 + -8) = uVar16;
  plVar3 = (long *)puVar6[1];
  plVar9 = (long *)puVar6[2];
  while (plVar9 != plVar3) {
    plVar9 = plVar9 + -1;
    plVar7 = (long *)*plVar9;
    puVar6[2] = (ulong)plVar9;
    *plVar9 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      plVar9 = (long *)puVar6[2];
    }
  }
  if (*puVar6 != 0) {
    __ZdlPv();
  }
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 10986d828; end: 10986d83b;  */

undefined1  [16] FUN_10986d828(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  plVar1 = (long *)plVar2[1];
  plVar5 = (long *)plVar2[2];
  while (plVar5 != plVar1) {
    plVar5 = plVar5 + -1;
    plVar4 = (long *)*plVar5;
    plVar2[2] = (long)plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar5 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 10986d83c; end: 10986da6f;  */

undefined1  [16] FUN_10986d83c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar1 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    plVar3 = (long *)*plVar4;
    param_1[2] = (long)plVar4;
    *plVar4 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar4 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10986da70; end: 10986db2b;  */

void FUN_10986da70(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (0 < (int)uVar1) {
    lVar5 = (ulong)uVar1 * 0x18;
    puVar2 = (undefined8 *)(lVar5 + 0x10);
    __Znam();
    *puVar2 = 0x18;
    puVar2[1] = (ulong)uVar1;
    puVar4 = puVar2 + 2;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    lVar5 = *(long *)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar2 + 2;
    if ((lVar5 == 0) || (__ZdaPv(lVar5 + -0x10), 0 < *(int *)(param_1 + 200))) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        uVar3 = *(long *)(param_1 + 0xc0) + lVar6;
        FUN_10985d80c(uVar3,param_1);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x18;
      } while (lVar5 < *(int *)(param_1 + 200));
    }
  }
  return;
}



/* Entry: 10986db2c; end: 10986dbff;  */

void FUN_10986db2c(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar6 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar6 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_10986dc00();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_1);
      plVar5 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar2 = (undefined4 *)*plVar5;
      puVar3 = (undefined4 *)plVar5[1];
      puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
      puVar4 = puVar1;
      for (puVar8 = puVar2; puVar3 != puVar8; puVar8 = puVar8 + 1) {
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
      }
      param_2[1] = puVar1;
      lVar6 = *plVar5;
      *plVar5 = (long)puVar1;
      plVar5[1] = (long)puVar2;
      param_2[1] = lVar6;
      lVar6 = plVar5[1];
      plVar5[1] = param_2[2];
      param_2[2] = lVar6;
      lVar6 = plVar5[2];
      plVar5[2] = param_2[3];
      param_2[3] = lVar6;
      *param_2 = param_2[1];
      return;
    }
    lVar7 = param_1[1];
    plVar5 = param_1;
    plStack_28 = param_1;
    FUN_10986dc80();
    lStack_40 = (long)plVar5 + (lVar7 - lVar6);
    lStack_30 = (long)plVar5 + (long)param_2 * 4;
    plStack_48 = plVar5;
    lStack_38 = lStack_40;
    FUN_10986dc14(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10986dc00; end: 10986dc13;  */

void FUN_10986dc00(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar2 = (undefined4 *)*plVar5;
  puVar3 = (undefined4 *)plVar5[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar7 = puVar2; puVar3 != puVar7; puVar7 = puVar7 + 1) {
    *puVar4 = *puVar7;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar6 = *plVar5;
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)puVar2;
  param_2[1] = lVar6;
  lVar6 = plVar5[1];
  plVar5[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar5[2];
  plVar5[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10986dc14; end: 10986dc7f;  */

void FUN_10986dc14(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
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



/* Entry: 10986dc80; end: 10986dcb3;  */

undefined1  [16] FUN_10986dc80(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar6 = (long)param_2 << 2;
    __Znwm(lVar6);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar6;
    return auVar12;
  }
  func_0x000104c4f740();
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 1;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar9) {
      uVar10 = 0x3fffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar10 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_10986dc80();
    }
    puStack_70 = (undefined4 *)((long)plVar7 + lVar6);
    lStack_60 = (long)plVar7 + uVar10 * 4;
    puStack_68 = puStack_70 + 1;
    *puStack_70 = *(undefined4 *)param_2;
    pplVar8 = &plStack_78;
    plStack_78 = plVar7;
    FUN_10986dc14(param_1,pplVar8);
    lVar6 = param_1[1];
    if (puStack_68 != puStack_70) {
      puStack_68 = (undefined4 *)
                   ((long)puStack_68 +
                   ((long)puStack_70 + (3 - (long)puStack_68) & 0xfffffffffffffffcU));
    }
    if (plStack_78 != (long *)0x0) {
      __ZdlPv();
    }
    auVar13._8_8_ = pplVar8;
    auVar13._0_8_ = lVar6;
    return auVar13;
  }
  FUN_10986dc00();
  if (puStack_68 != puStack_70) {
    puStack_68 = (undefined4 *)
                 ((long)puStack_68 +
                 (((long)puStack_70 - (long)puStack_68) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_78 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 1;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar9) {
      uVar10 = 0x3fffffffffffffff;
    }
    plStack_b8 = param_1;
    if (uVar10 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_10986df64();
    }
    puStack_d0 = (undefined4 *)((long)plVar7 + lVar6);
    lStack_c0 = (long)plVar7 + uVar10 * 4;
    puStack_c8 = puStack_d0 + 1;
    *puStack_d0 = *(undefined4 *)param_2;
    pplVar8 = &plStack_d8;
    plStack_d8 = plVar7;
    FUN_10986dee4(param_1,pplVar8);
    lVar6 = param_1[1];
    if (puStack_c8 != puStack_d0) {
      puStack_c8 = (undefined4 *)
                   ((long)puStack_c8 +
                   ((long)puStack_d0 + (3 - (long)puStack_c8) & 0xfffffffffffffffcU));
    }
    if (plStack_d8 != (long *)0x0) {
      __ZdlPv();
    }
    auVar14._8_8_ = pplVar8;
    auVar14._0_8_ = lVar6;
    return auVar14;
  }
  FUN_10986df50();
  if (puStack_c8 != puStack_d0) {
    puStack_c8 = (undefined4 *)
                 ((long)puStack_c8 +
                 (((long)puStack_d0 - (long)puStack_c8) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_d8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar11 = puVar3; puVar4 != puVar11; puVar11 = puVar11 + 1) {
    *puVar5 = *puVar11;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar6 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 10986dcb4; end: 10986ddcb;  */

long * FUN_10986dcb4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long *plStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_1;
      FUN_10986dc80();
    }
    puStack_50 = (undefined4 *)((long)plVar9 + lVar10);
    lStack_40 = (long)plVar9 + uVar7 * 4;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *(undefined4 *)param_2;
    plStack_58 = plVar9;
    FUN_10986dc14(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_10986dc00();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plStack_98 = param_1;
    if (uVar7 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_1;
      FUN_10986df64();
    }
    puStack_b0 = (undefined4 *)((long)plVar9 + lVar10);
    lStack_a0 = (long)plVar9 + uVar7 * 4;
    puStack_a8 = puStack_b0 + 1;
    *puStack_b0 = *(undefined4 *)param_2;
    plStack_b8 = plVar9;
    FUN_10986dee4(param_1,&plStack_b8);
    plVar9 = (long *)param_1[1];
    if (puStack_a8 != puStack_b0) {
      puStack_a8 = (undefined4 *)
                   ((long)puStack_a8 +
                   ((long)puStack_b0 + (3 - (long)puStack_a8) & 0xfffffffffffffffcU));
    }
    if (plStack_b8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_10986df50();
  if (puStack_a8 != puStack_b0) {
    puStack_a8 = (undefined4 *)
                 ((long)puStack_a8 +
                 (((long)puStack_b0 - (long)puStack_a8) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_b8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar8 = puVar3; puVar4 != puVar8; puVar8 = puVar8 + 1) {
    *puVar5 = *puVar8;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 10986ddcc; end: 10986dee3;  */

long * FUN_10986ddcc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_1;
      FUN_10986df64();
    }
    puStack_50 = (undefined4 *)((long)plVar9 + lVar10);
    lStack_40 = (long)plVar9 + uVar7 * 4;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *(undefined4 *)param_2;
    plStack_58 = plVar9;
    FUN_10986dee4(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_10986df50();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar8 = puVar3; puVar4 != puVar8; puVar8 = puVar8 + 1) {
    *puVar5 = *puVar8;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 10986dee4; end: 10986df4f;  */

void FUN_10986dee4(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
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



/* Entry: 10986df50; end: 10986df63;  */

undefined1  [16] FUN_10986df50(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    lVar6 = param_2 << 2;
    __Znwm(lVar6);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar6;
    return auVar15;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x1555555555555556) {
    lVar6 = param_2 * 0xc;
    __Znwm(lVar6);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  func_0x000104c4f740();
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar6 = *plVar7;
  puVar2 = (undefined8 *)plVar7[1];
  lVar11 = (long)puVar2 - lVar6 >> 2;
  bVar5 = param_2 < (ulong)(lVar11 * -0x5555555555555555);
  uVar4 = param_2 + lVar11 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      plVar7[1] = lVar6 + param_2 * 0xc;
    }
  }
  else if ((ulong)((plVar7[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar7 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar7[0x15] != 0) {
          plVar7[0x16] = plVar7[0x15];
          __ZdlPv();
        }
        if (plVar7[0x12] != 0) {
          plVar7[0x13] = plVar7[0x12];
          __ZdlPv();
        }
        if (plVar7[0xd] != 0) {
          plVar7[0xe] = plVar7[0xd];
          __ZdlPv();
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[7] != 0) {
          plVar7[8] = plVar7[7];
          __ZdlPv();
        }
        if (plVar7[3] != 0) {
          __ZdlPv();
        }
        if (*plVar7 != 0) {
          __ZdlPv();
        }
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = plVar7;
        return auVar19;
      }
      lVar6 = param_2 * 0xc;
      __Znwm(lVar6);
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = lVar6;
      return auVar18;
    }
    lVar10 = plVar7[2] - lVar6 >> 2;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < param_2 || uVar12 - param_2 == 0) {
      uVar12 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0x1555555555555555;
    }
    plVar8 = plVar7;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar8 + ((long)puVar2 - lVar6));
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    puVar9 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar9 - (long)puVar3));
    puVar14 = puVar1;
    if (puVar3 != puVar9) {
      do {
        uVar13 = *puVar9;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar14 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (puVar9 != puVar3);
      puVar9 = (undefined8 *)*plVar7;
    }
    *plVar7 = (long)puVar1;
    plVar7[1] = (long)((long)puVar2 + uVar4 * 0xc);
    plVar7[2] = (long)((long)plVar8 + uVar12 * 0xc);
    plVar7 = (long *)0x0;
    param_2 = uVar12;
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar20._8_8_ = uVar12;
      auVar20._0_8_ = puVar9;
      return auVar20;
    }
  }
  else {
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    plVar7[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar7;
  return auVar17;
}



/* Entry: 10986df64; end: 10986df97;  */

undefined1  [16] FUN_10986df64(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar6 = param_2 << 2;
    __Znwm(lVar6);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar6;
    return auVar15;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x1555555555555556) {
    lVar6 = param_2 * 0xc;
    __Znwm(lVar6);
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  func_0x000104c4f740();
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar6 = *plVar7;
  puVar2 = (undefined8 *)plVar7[1];
  lVar11 = (long)puVar2 - lVar6 >> 2;
  bVar5 = param_2 < (ulong)(lVar11 * -0x5555555555555555);
  uVar4 = param_2 + lVar11 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      plVar7[1] = lVar6 + param_2 * 0xc;
    }
  }
  else if ((ulong)((plVar7[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar7 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar7[0x15] != 0) {
          plVar7[0x16] = plVar7[0x15];
          __ZdlPv();
        }
        if (plVar7[0x12] != 0) {
          plVar7[0x13] = plVar7[0x12];
          __ZdlPv();
        }
        if (plVar7[0xd] != 0) {
          plVar7[0xe] = plVar7[0xd];
          __ZdlPv();
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[7] != 0) {
          plVar7[8] = plVar7[7];
          __ZdlPv();
        }
        if (plVar7[3] != 0) {
          __ZdlPv();
        }
        if (*plVar7 != 0) {
          __ZdlPv();
        }
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = plVar7;
        return auVar19;
      }
      lVar6 = param_2 * 0xc;
      __Znwm(lVar6);
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = lVar6;
      return auVar18;
    }
    lVar10 = plVar7[2] - lVar6 >> 2;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < param_2 || uVar12 - param_2 == 0) {
      uVar12 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0x1555555555555555;
    }
    plVar8 = plVar7;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar8 + ((long)puVar2 - lVar6));
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    puVar9 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar9 - (long)puVar3));
    puVar14 = puVar1;
    if (puVar3 != puVar9) {
      do {
        uVar13 = *puVar9;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar14 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (puVar9 != puVar3);
      puVar9 = (undefined8 *)*plVar7;
    }
    *plVar7 = (long)puVar1;
    plVar7[1] = (long)((long)puVar2 + uVar4 * 0xc);
    plVar7[2] = (long)((long)plVar8 + uVar12 * 0xc);
    plVar7 = (long *)0x0;
    param_2 = uVar12;
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar20._8_8_ = uVar12;
      auVar20._0_8_ = puVar9;
      return auVar20;
    }
  }
  else {
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    plVar7[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar7;
  return auVar17;
}



/* Entry: 10986df98; end: 10986dfab;  */

undefined1  [16] FUN_10986df98(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x1555555555555556) {
    lVar6 = param_2 * 0xc;
    __Znwm(lVar6);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar6;
    return auVar15;
  }
  func_0x000104c4f740();
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar6 = *plVar7;
  puVar2 = (undefined8 *)plVar7[1];
  lVar11 = (long)puVar2 - lVar6 >> 2;
  bVar5 = param_2 < (ulong)(lVar11 * -0x5555555555555555);
  uVar4 = param_2 + lVar11 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      plVar7[1] = lVar6 + param_2 * 0xc;
    }
  }
  else if ((ulong)((plVar7[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar7 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar7[0x15] != 0) {
          plVar7[0x16] = plVar7[0x15];
          __ZdlPv();
        }
        if (plVar7[0x12] != 0) {
          plVar7[0x13] = plVar7[0x12];
          __ZdlPv();
        }
        if (plVar7[0xd] != 0) {
          plVar7[0xe] = plVar7[0xd];
          __ZdlPv();
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[7] != 0) {
          plVar7[8] = plVar7[7];
          __ZdlPv();
        }
        if (plVar7[3] != 0) {
          __ZdlPv();
        }
        if (*plVar7 != 0) {
          __ZdlPv();
        }
        auVar18._8_8_ = param_2;
        auVar18._0_8_ = plVar7;
        return auVar18;
      }
      lVar6 = param_2 * 0xc;
      __Znwm(lVar6);
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = lVar6;
      return auVar17;
    }
    lVar10 = plVar7[2] - lVar6 >> 2;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < param_2 || uVar12 - param_2 == 0) {
      uVar12 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0x1555555555555555;
    }
    plVar8 = plVar7;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar8 + ((long)puVar2 - lVar6));
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    puVar9 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar9 - (long)puVar3));
    puVar14 = puVar1;
    if (puVar3 != puVar9) {
      do {
        uVar13 = *puVar9;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar14 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (puVar9 != puVar3);
      puVar9 = (undefined8 *)*plVar7;
    }
    *plVar7 = (long)puVar1;
    plVar7[1] = (long)((long)puVar2 + uVar4 * 0xc);
    plVar7[2] = (long)((long)plVar8 + uVar12 * 0xc);
    plVar7 = (long *)0x0;
    param_2 = uVar12;
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar19._8_8_ = uVar12;
      auVar19._0_8_ = puVar9;
      return auVar19;
    }
  }
  else {
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    plVar7[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar7;
  return auVar16;
}



/* Entry: 10986dfac; end: 10986dfef;  */

undefined1  [16] FUN_10986dfac(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar6 = param_2 * 0xc;
    __Znwm(lVar6);
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = lVar6;
    return auVar15;
  }
  func_0x000104c4f740();
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar6 = *plVar7;
  puVar2 = (undefined8 *)plVar7[1];
  lVar11 = (long)puVar2 - lVar6 >> 2;
  bVar5 = param_2 < (ulong)(lVar11 * -0x5555555555555555);
  uVar4 = param_2 + lVar11 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      plVar7[1] = lVar6 + param_2 * 0xc;
    }
  }
  else if ((ulong)((plVar7[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar7 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar7[0x15] != 0) {
          plVar7[0x16] = plVar7[0x15];
          __ZdlPv();
        }
        if (plVar7[0x12] != 0) {
          plVar7[0x13] = plVar7[0x12];
          __ZdlPv();
        }
        if (plVar7[0xd] != 0) {
          plVar7[0xe] = plVar7[0xd];
          __ZdlPv();
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[7] != 0) {
          plVar7[8] = plVar7[7];
          __ZdlPv();
        }
        if (plVar7[3] != 0) {
          __ZdlPv();
        }
        if (*plVar7 != 0) {
          __ZdlPv();
        }
        auVar18._8_8_ = param_2;
        auVar18._0_8_ = plVar7;
        return auVar18;
      }
      lVar6 = param_2 * 0xc;
      __Znwm(lVar6);
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = lVar6;
      return auVar17;
    }
    lVar10 = plVar7[2] - lVar6 >> 2;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < param_2 || uVar12 - param_2 == 0) {
      uVar12 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0x1555555555555555;
    }
    plVar8 = plVar7;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar8 + ((long)puVar2 - lVar6));
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    puVar9 = (undefined8 *)*plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar9 - (long)puVar3));
    puVar14 = puVar1;
    if (puVar3 != puVar9) {
      do {
        uVar13 = *puVar9;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar14 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (puVar9 != puVar3);
      puVar9 = (undefined8 *)*plVar7;
    }
    *plVar7 = (long)puVar1;
    plVar7[1] = (long)((long)puVar2 + uVar4 * 0xc);
    plVar7[2] = (long)((long)plVar8 + uVar12 * 0xc);
    plVar7 = (long *)0x0;
    param_2 = uVar12;
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar19._8_8_ = uVar12;
      auVar19._0_8_ = puVar9;
      return auVar19;
    }
  }
  else {
    lVar6 = param_2 * 0xc + lVar11 * -4;
    puVar9 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar9 = uVar13;
      lVar6 = lVar6 + -0xc;
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
    } while (lVar6 != 0);
    plVar7[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar7;
  return auVar16;
}



/* Entry: 10986dff0; end: 10986e003;  */

undefined1  [16] FUN_10986dff0(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar10 = *plVar6;
  puVar2 = (undefined8 *)plVar6[1];
  lVar11 = (long)puVar2 - lVar10 >> 2;
  bVar5 = param_2 < (ulong)(lVar11 * -0x5555555555555555);
  uVar4 = param_2 + lVar11 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      plVar6[1] = lVar10 + param_2 * 0xc;
    }
  }
  else if ((ulong)((plVar6[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar6 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar6[0x15] != 0) {
          plVar6[0x16] = plVar6[0x15];
          __ZdlPv();
        }
        if (plVar6[0x12] != 0) {
          plVar6[0x13] = plVar6[0x12];
          __ZdlPv();
        }
        if (plVar6[0xd] != 0) {
          plVar6[0xe] = plVar6[0xd];
          __ZdlPv();
        }
        if (plVar6[10] != 0) {
          plVar6[0xb] = plVar6[10];
          __ZdlPv();
        }
        if (plVar6[7] != 0) {
          plVar6[8] = plVar6[7];
          __ZdlPv();
        }
        if (plVar6[3] != 0) {
          __ZdlPv();
        }
        if (*plVar6 != 0) {
          __ZdlPv();
        }
        auVar17._8_8_ = param_2;
        auVar17._0_8_ = plVar6;
        return auVar17;
      }
      lVar10 = param_2 * 0xc;
      __Znwm(lVar10);
      auVar16._8_8_ = param_2;
      auVar16._0_8_ = lVar10;
      return auVar16;
    }
    lVar9 = plVar6[2] - lVar10 >> 2;
    uVar12 = lVar9 * 0x5555555555555556;
    if (uVar12 < param_2 || uVar12 - param_2 == 0) {
      uVar12 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar12 = 0x1555555555555555;
    }
    plVar7 = plVar6;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar7 + ((long)puVar2 - lVar10));
    lVar10 = param_2 * 0xc + lVar11 * -4;
    puVar8 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar8 = uVar13;
      lVar10 = lVar10 + -0xc;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
    } while (lVar10 != 0);
    puVar8 = (undefined8 *)*plVar6;
    puVar3 = (undefined8 *)plVar6[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar8 - (long)puVar3));
    puVar14 = puVar1;
    if (puVar3 != puVar8) {
      do {
        uVar13 = *puVar8;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar14 = uVar13;
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        puVar14 = (undefined8 *)((long)puVar14 + 0xc);
      } while (puVar8 != puVar3);
      puVar8 = (undefined8 *)*plVar6;
    }
    *plVar6 = (long)puVar1;
    plVar6[1] = (long)((long)puVar2 + uVar4 * 0xc);
    plVar6[2] = (long)((long)plVar7 + uVar12 * 0xc);
    plVar6 = (long *)0x0;
    param_2 = uVar12;
    if (puVar8 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar18._8_8_ = uVar12;
      auVar18._0_8_ = puVar8;
      return auVar18;
    }
  }
  else {
    lVar10 = param_2 * 0xc + lVar11 * -4;
    puVar8 = puVar2;
    do {
      uVar13 = *param_3;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar8 = uVar13;
      lVar10 = lVar10 + -0xc;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
    } while (lVar10 != 0);
    plVar6[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar6;
  return auVar15;
}



/* Entry: 10986e004; end: 10986e18b;  */

undefined1  [16] FUN_10986e004(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar9 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar2 - lVar9 >> 2;
  bVar5 = param_2 < (ulong)(lVar10 * -0x5555555555555555);
  uVar4 = param_2 + lVar10 * 0x5555555555555555;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      param_1[1] = lVar9 + param_2 * 0xc;
    }
  }
  else if ((ulong)((param_1[2] - (long)puVar2 >> 2) * -0x5555555555555555) < uVar4) {
    if (0x1555555555555555 < param_2) {
      FUN_10986e18c();
      plVar7 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (0x1555555555555555 < param_2) {
        func_0x000104c4f740();
        if (plVar7[0x15] != 0) {
          plVar7[0x16] = plVar7[0x15];
          __ZdlPv();
        }
        if (plVar7[0x12] != 0) {
          plVar7[0x13] = plVar7[0x12];
          __ZdlPv();
        }
        if (plVar7[0xd] != 0) {
          plVar7[0xe] = plVar7[0xd];
          __ZdlPv();
        }
        if (plVar7[10] != 0) {
          plVar7[0xb] = plVar7[10];
          __ZdlPv();
        }
        if (plVar7[7] != 0) {
          plVar7[8] = plVar7[7];
          __ZdlPv();
        }
        if (plVar7[3] != 0) {
          __ZdlPv();
        }
        if (*plVar7 != 0) {
          __ZdlPv();
        }
        auVar16._8_8_ = param_2;
        auVar16._0_8_ = plVar7;
        return auVar16;
      }
      lVar9 = param_2 * 0xc;
      __Znwm(lVar9);
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = lVar9;
      return auVar15;
    }
    lVar8 = param_1[2] - lVar9 >> 2;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < param_2 || uVar11 - param_2 == 0) {
      uVar11 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0x1555555555555555;
    }
    plVar7 = param_1;
    FUN_10986e1a0();
    puVar2 = (undefined8 *)((long)plVar7 + ((long)puVar2 - lVar9));
    lVar9 = param_2 * 0xc + lVar10 * -4;
    puVar6 = puVar2;
    do {
      uVar12 = *param_3;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar6 = uVar12;
      lVar9 = lVar9 + -0xc;
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
    } while (lVar9 != 0);
    puVar6 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar2 + ((long)puVar6 - (long)puVar3));
    puVar13 = puVar1;
    if (puVar3 != puVar6) {
      do {
        uVar12 = *puVar6;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar6 + 1);
        *puVar13 = uVar12;
        puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
      } while (puVar6 != puVar3);
      puVar6 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar2 + uVar4 * 0xc;
    param_1[2] = (long)plVar7 + uVar11 * 0xc;
    param_1 = (long *)0x0;
    param_2 = uVar11;
    if (puVar6 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar17._8_8_ = uVar11;
      auVar17._0_8_ = puVar6;
      return auVar17;
    }
  }
  else {
    lVar9 = param_2 * 0xc + lVar10 * -4;
    puVar6 = puVar2;
    do {
      uVar12 = *param_3;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar6 = uVar12;
      lVar9 = lVar9 + -0xc;
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
    } while (lVar9 != 0);
    param_1[1] = (long)puVar2 + uVar4 * 0xc;
  }
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 10986e18c; end: 10986e19f;  */

undefined1  [16] FUN_10986e18c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar2 = param_2 * 0xc;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  if (plVar1[0x15] != 0) {
    plVar1[0x16] = plVar1[0x15];
    __ZdlPv();
  }
  if (plVar1[0x12] != 0) {
    plVar1[0x13] = plVar1[0x12];
    __ZdlPv();
  }
  if (plVar1[0xd] != 0) {
    plVar1[0xe] = plVar1[0xd];
    __ZdlPv();
  }
  if (plVar1[10] != 0) {
    plVar1[0xb] = plVar1[10];
    __ZdlPv();
  }
  if (plVar1[7] != 0) {
    plVar1[8] = plVar1[7];
    __ZdlPv();
  }
  if (plVar1[3] != 0) {
    __ZdlPv();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10986e1a0; end: 10986e26b;  */

undefined1  [16] FUN_10986e1a0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar1 = param_2 * 0xc;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    __ZdlPv();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10986e26c; end: 10986e2d3;  */

void FUN_10986e26c(long *param_1)

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
        lVar2 = lVar2 + -0x120;
        FUN_10986e2d4(lVar2);
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



/* Entry: 10986e2d4; end: 10986e323;  */

long * FUN_10986e2d4(long param_1)

{
  if (*(long *)(param_1 + 0x108) != 0) {
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x108);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZdlPv();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10986e324; end: 10986e38b;  */

void FUN_10986e324(long *param_1)

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
        lVar2 = lVar2 + -0x120;
        FUN_10986e38c(lVar2);
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



/* Entry: 10986e38c; end: 10986e3db;  */

long * FUN_10986e38c(long param_1)

{
  if (*(long *)(param_1 + 0x108) != 0) {
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x108);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZdlPv();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10986e3dc; end: 10986e46f;  */

long * FUN_10986e3dc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  uVar7 = param_2 + lVar5 * 0x5555555555555555;
  if (bVar2 || uVar7 == 0) {
    plVar4 = param_1;
    if (bVar2) {
      puVar10 = (undefined8 *)(*param_1 + param_2 * 0x18);
      puVar12 = (undefined8 *)param_1[1];
      while (puVar1 = puVar12, puVar1 != puVar10) {
        puVar12 = puVar1 + -3;
        plVar4 = (long *)*puVar12;
        if (plVar4 != (long *)0x0) {
          puVar1[-2] = plVar4;
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar10;
    }
    return plVar4;
  }
  plVar4 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar4 >> 3) * -0x5555555555555555) < uVar7) {
    lVar5 = (long)plVar4 - *param_1;
    uVar8 = uVar7 + (lVar5 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_109452bbc();
      *param_1 = (long)&PTR_DAT_110b15e90;
      lVar5 = param_1[0x50];
      param_1[0x50] = 0;
      if (lVar5 != 0) {
        __ZdaPv(lVar5 + -0x10);
      }
      FUN_10986d580(param_1 + 0x35);
      if (param_1[0x30] != 0) {
        param_1[0x31] = param_1[0x30];
        __ZdlPv();
      }
      if (param_1[0x2d] != 0) {
        param_1[0x2e] = param_1[0x2d];
        __ZdlPv();
      }
      if (param_1[0x2a] != 0) {
        param_1[0x2b] = param_1[0x2a];
        __ZdlPv();
      }
      if (param_1[0x27] != 0) {
        param_1[0x28] = param_1[0x27];
        __ZdlPv();
      }
      FUN_1093c8ab0(param_1 + 0x21);
      if (param_1[0x1d] != 0) {
        __ZdlPv();
      }
      if (param_1[0x1a] != 0) {
        __ZdlPv();
      }
      if (param_1[0x17] != 0) {
        __ZdlPv();
      }
      if (param_1[0x12] != 0) {
        param_1[0x13] = param_1[0x12];
        __ZdlPv();
      }
      if (param_1[0xf] != 0) {
        __ZdlPv();
      }
      if (param_1[0xc] != 0) {
        param_1[0xd] = param_1[0xc];
        __ZdlPv();
      }
      if (param_1[9] != 0) {
        param_1[10] = param_1[9];
        __ZdlPv();
      }
      if (param_1[6] != 0) {
        param_1[7] = param_1[6];
        __ZdlPv();
      }
      if (param_1[3] != 0) {
        param_1[4] = param_1[3];
        __ZdlPv();
      }
      lVar5 = param_1[2];
      param_1[2] = 0;
      if (lVar5 != 0) {
        func_0x00010986e9f8();
      }
      return param_1;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      func_0x00010984a730();
    }
    lVar5 = (long)plVar4 + lVar5;
    lVar6 = ((uVar7 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar5,lVar6);
    lVar11 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lStack_68 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar5 + lVar6;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar9 * 3);
    plVar3 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000107442cc4(plVar3);
  }
  else {
    plVar3 = param_1;
    if (uVar7 != 0) {
      uVar7 = (uVar7 * 0x18 - 0x18) / 0x18;
      plVar3 = plVar4;
      _bzero(plVar4,uVar7 * 0x18 + 0x18);
      plVar4 = plVar4 + uVar7 * 3 + 3;
    }
    param_1[1] = (long)plVar4;
  }
  return plVar3;
}



/* Entry: 10986e470; end: 10986e5d3;  */

long * FUN_10986e470(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 3) * -0x5555555555555555) < param_2) {
    lVar7 = (long)plVar2 - *param_1;
    uVar4 = param_2 + (lVar7 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_109452bbc();
      *param_1 = (long)&PTR_DAT_110b15e90;
      lVar7 = param_1[0x50];
      param_1[0x50] = 0;
      if (lVar7 != 0) {
        __ZdaPv(lVar7 + -0x10);
      }
      FUN_10986d580(param_1 + 0x35);
      if (param_1[0x30] != 0) {
        param_1[0x31] = param_1[0x30];
        __ZdlPv();
      }
      if (param_1[0x2d] != 0) {
        param_1[0x2e] = param_1[0x2d];
        __ZdlPv();
      }
      if (param_1[0x2a] != 0) {
        param_1[0x2b] = param_1[0x2a];
        __ZdlPv();
      }
      if (param_1[0x27] != 0) {
        param_1[0x28] = param_1[0x27];
        __ZdlPv();
      }
      FUN_1093c8ab0(param_1 + 0x21);
      if (param_1[0x1d] != 0) {
        __ZdlPv();
      }
      if (param_1[0x1a] != 0) {
        __ZdlPv();
      }
      if (param_1[0x17] != 0) {
        __ZdlPv();
      }
      if (param_1[0x12] != 0) {
        param_1[0x13] = param_1[0x12];
        __ZdlPv();
      }
      if (param_1[0xf] != 0) {
        __ZdlPv();
      }
      if (param_1[0xc] != 0) {
        param_1[0xd] = param_1[0xc];
        __ZdlPv();
      }
      if (param_1[9] != 0) {
        param_1[10] = param_1[9];
        __ZdlPv();
      }
      if (param_1[6] != 0) {
        param_1[7] = param_1[6];
        __ZdlPv();
      }
      if (param_1[3] != 0) {
        param_1[4] = param_1[3];
        __ZdlPv();
      }
      lVar7 = param_1[2];
      param_1[2] = 0;
      if (lVar7 != 0) {
        func_0x00010986e9f8();
      }
      return param_1;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010984a730();
    }
    lVar7 = (long)plVar2 + lVar7;
    lVar3 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar3);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + lVar3;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 3);
    plVar1 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000107442cc4(plVar1);
  }
  else {
    plVar1 = param_1;
    if (param_2 != 0) {
      uVar4 = (param_2 * 0x18 - 0x18) / 0x18;
      plVar1 = plVar2;
      _bzero(plVar2,uVar4 * 0x18 + 0x18);
      plVar2 = plVar2 + uVar4 * 3 + 3;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 10986e5d4; end: 10986eaff;  */

undefined8 * FUN_10986e5d4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110b15e90;
  lVar1 = param_1[0x50];
  param_1[0x50] = 0;
  if (lVar1 != 0) {
    __ZdaPv(lVar1 + -0x10);
  }
  FUN_10986d580(param_1 + 0x35);
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  FUN_1093c8ab0(param_1 + 0x21);
  if (param_1[0x1d] != 0) {
    __ZdlPv();
  }
  if (param_1[0x1a] != 0) {
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  if (param_1[0xf] != 0) {
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010986e9f8();
  }
  return param_1;
}



/* Entry: 10986eb00; end: 10986ebef;  */

void FUN_10986eb00(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  func_0x000108b0402c(param_1 + 0x40,param_2 + 0x30);
  func_0x000108b0402c(param_1 + 0x58,param_2 + 0x48);
  lVar7 = param_1 + 0x70;
  plVar10 = (long *)(param_2 + 0x68);
  lVar11 = 2;
  do {
    if (param_1 + 0x10 == param_2) {
      if (lVar11 == 0) {
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xa8);
        return;
      }
    }
    else {
      FUN_10986fa5c(lVar7,plVar10[-1],*plVar10,*plVar10 - plVar10[-1] >> 2);
      if (lVar11 == 0) {
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xa8);
        lVar7 = *(long *)(param_2 + 0xb0);
        lVar11 = *(long *)(param_2 + 0xb8);
        uVar4 = lVar11 - lVar7 >> 2;
        puVar9 = (undefined8 *)(param_1 + 0xc0);
        uVar5 = *(ulong *)(param_1 + 0xd0);
        puVar8 = (undefined8 *)*puVar9;
        if ((ulong)((long)(uVar5 - (long)puVar8) >> 2) < uVar4) {
          puVar1 = puVar9;
          lVar2 = lVar7;
          lVar6 = lVar11;
          uVar3 = uVar4;
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 200) = puVar8;
            __ZdlPv();
            uVar5 = 0;
            *puVar9 = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
            puVar1 = puVar8;
          }
          if (uVar4 >> 0x3e != 0) {
            FUN_10923f788();
            if (uVar3 != 0) {
              FUN_10925b938();
              lVar7 = puVar1[1];
              lVar6 = lVar6 - lVar2;
              if (lVar6 != 0) {
                _memmove(lVar7,lVar2,lVar6);
              }
              puVar1[1] = lVar7 + lVar6;
            }
            return;
          }
          uVar3 = (long)uVar5 >> 1;
          if ((ulong)((long)uVar5 >> 1) <= uVar4) {
            uVar3 = uVar4;
          }
          if (0x7ffffffffffffffb < uVar5) {
            uVar3 = 0x3fffffffffffffff;
          }
          FUN_10925b938(puVar9,uVar3);
          lVar6 = *(long *)(param_1 + 200);
          lVar11 = lVar11 - lVar7;
          if (lVar11 != 0) {
            _memmove(lVar6,lVar7,lVar11);
          }
          lVar6 = lVar6 + lVar11;
        }
        else {
          puVar9 = *(undefined8 **)(param_1 + 200);
          if ((ulong)((long)puVar9 - (long)puVar8 >> 2) < uVar4) {
            lVar6 = lVar7 + ((long)puVar9 - (long)puVar8);
            if (puVar9 != puVar8) {
              _memmove(puVar8,lVar7);
              puVar9 = *(undefined8 **)(param_1 + 200);
            }
            lVar11 = lVar11 - lVar6;
            if (lVar11 != 0) {
              _memmove(puVar9,lVar6,lVar11);
            }
            lVar6 = (long)puVar9 + lVar11;
          }
          else {
            lVar11 = lVar11 - lVar7;
            if (lVar11 != 0) {
              _memmove(puVar8,lVar7,lVar11);
            }
            lVar6 = (long)puVar8 + lVar11;
          }
        }
        *(long *)(param_1 + 200) = lVar6;
        return;
      }
    }
    lVar11 = lVar11 + -1;
    lVar7 = lVar7 + 0x18;
    plVar10 = plVar10 + 3;
  } while( true );
}



/* Entry: 10986ebf0; end: 10986ec4f;  */

undefined8 * FUN_10986ebf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b160d8;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  lVar2 = 0;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x90);
    if (lVar1 != 0) {
      *(long *)((long)param_1 + lVar2 + 0x98) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x48);
  *param_1 = &PTR_FUN_110b16128;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986ec50; end: 10986ef4f;  */

undefined8 * FUN_10986ec50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b16080;
  param_1[2] = &PTR_FUN_110b160d8;
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  lVar2 = 0;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0xa0);
    if (lVar1 != 0) {
      *(long *)((long)param_1 + lVar2 + 0xa8) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x48);
  FUN_10986f99c(param_1 + 2);
  return param_1;
}



/* Entry: 10986ef50; end: 10986f023;  */

void FUN_10986ef50(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar6 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar6 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_10986f024();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_1);
      plVar5 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar2 = (undefined4 *)*plVar5;
      puVar3 = (undefined4 *)plVar5[1];
      puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
      puVar4 = puVar1;
      for (puVar8 = puVar2; puVar3 != puVar8; puVar8 = puVar8 + 1) {
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
      }
      param_2[1] = puVar1;
      lVar6 = *plVar5;
      *plVar5 = (long)puVar1;
      plVar5[1] = (long)puVar2;
      param_2[1] = lVar6;
      lVar6 = plVar5[1];
      plVar5[1] = param_2[2];
      param_2[2] = lVar6;
      lVar6 = plVar5[2];
      plVar5[2] = param_2[3];
      param_2[3] = lVar6;
      *param_2 = param_2[1];
      return;
    }
    lVar7 = param_1[1];
    plVar5 = param_1;
    plStack_28 = param_1;
    FUN_10986f0a4();
    lStack_40 = (long)plVar5 + (lVar7 - lVar6);
    lStack_30 = (long)plVar5 + (long)param_2 * 4;
    plStack_48 = plVar5;
    lStack_38 = lStack_40;
    FUN_10986f038(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10986f024; end: 10986f037;  */

void FUN_10986f024(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar2 = (undefined4 *)*plVar5;
  puVar3 = (undefined4 *)plVar5[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar7 = puVar2; puVar3 != puVar7; puVar7 = puVar7 + 1) {
    *puVar4 = *puVar7;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar6 = *plVar5;
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)puVar2;
  param_2[1] = lVar6;
  lVar6 = plVar5[1];
  plVar5[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar5[2];
  plVar5[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10986f038; end: 10986f0a3;  */

void FUN_10986f038(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
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



/* Entry: 10986f0a4; end: 10986f0d7;  */

undefined1  [16] FUN_10986f0a4(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar4 = (long)param_2 << 2;
    __Znwm(lVar4);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  func_0x000104c4f740();
  uStack_8c = (uint)param_2;
  if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xb0)) goto LAB_10986f498;
  puVar1 = (uint *)(param_1 + 0x60);
  puVar5 = *(uint **)(param_1 + 0x68);
  if (puVar5 < *(uint **)(param_1 + 0x70)) {
    puVar12 = puVar5 + 1;
    *puVar5 = uStack_8c;
  }
  else {
    param_2 = &uStack_8c;
    puVar12 = puVar1;
    FUN_10986dcb4(puVar1,param_2);
  }
  *(uint **)(param_1 + 0x68) = puVar12;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (uStack_8c == 0xffffffff) {
    uVar14 = 0xffffffff;
LAB_10986f1b8:
    uVar13 = 0xffffffff;
  }
  else {
    uVar14 = uStack_8c - 2;
    if (0x55555555 < (uStack_8c + 1) * -0x55555555) {
      uVar14 = uStack_8c + 1;
    }
    if (uVar14 == 0xffffffff) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = *(uint *)(**(long **)(param_1 + 8) + (ulong)uVar14 * 4);
    }
    iVar8 = 2;
    if (0x55555555 < uStack_8c * -0x55555555) {
      iVar8 = -1;
    }
    if (iVar8 + uStack_8c == 0xffffffff) goto LAB_10986f1b8;
    uVar13 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)(iVar8 + uStack_8c) * 4);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  uVar9 = 1L << ((ulong)uVar14 & 0x3f);
  uVar10 = *(ulong *)(lVar4 + (ulong)(uVar14 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(lVar4 + (ulong)(uVar14 >> 6) * 8) = uVar10 | uVar9;
    uVar16 = uStack_8c;
    if ((uStack_8c != 0xffffffff) &&
       (uVar16 = uStack_8c - 2, 0x55555555 < (uStack_8c + 1) * -0x55555555)) {
      uVar16 = uStack_8c + 1;
    }
    uStack_84 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar16 / 3) * 0xc +
                         (ulong)(uVar16 % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar5 = *(uint **)(puVar12 + 2);
    uStack_88 = uVar16;
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uStack_84;
    }
    else {
      param_2 = &uStack_84;
      puVar6 = puVar12;
      FUN_10986f884(puVar12,param_2);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar5 = *(uint **)(puVar12 + 2);
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uVar16;
      puVar5 = puVar12;
    }
    else {
      param_2 = &uStack_88;
      puVar6 = puVar12;
      FUN_10986dcb4(puVar12,param_2);
      puVar5 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    uVar16 = puVar5[0xc];
    *(uint *)(*(long *)(puVar5 + 6) + (ulong)uVar14 * 4) = uVar16;
    puVar5[0xc] = uVar16 + 1;
    lVar4 = *(long *)(param_1 + 0x48);
  }
  uVar9 = 1L << (uVar13 & 0x3f);
  uVar10 = *(ulong *)(lVar4 + (uVar13 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(lVar4 + (uVar13 >> 6) * 8) = uVar10 | uVar9;
    uVar14 = uStack_8c;
    if (uStack_8c != 0xffffffff) {
      if (uStack_8c * -0x55555555 < 0x55555556) {
        uVar14 = uStack_8c + 2;
      }
      else {
        uVar14 = uStack_8c - 1;
      }
    }
    uStack_84 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar14 / 3) * 0xc +
                         (ulong)(uVar14 % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar5 = *(uint **)(puVar12 + 2);
    uStack_88 = uVar14;
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uStack_84;
    }
    else {
      param_2 = &uStack_84;
      puVar6 = puVar12;
      FUN_10986f884(puVar12,param_2);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar5 = *(uint **)(puVar12 + 2);
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uVar14;
      puVar5 = puVar12;
    }
    else {
      param_2 = &uStack_88;
      puVar6 = puVar12;
      FUN_10986dcb4(puVar12,param_2);
      puVar5 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    uVar14 = puVar5[0xc];
    *(uint *)(*(long *)(puVar5 + 6) + uVar13 * 4) = uVar14;
    puVar5[0xc] = uVar14 + 1;
  }
  uVar14 = uStack_8c;
  if (uStack_8c == 0xffffffff) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)uStack_8c * 4);
  }
  uVar9 = 1L << (uVar13 & 0x3f);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8) = uVar10 | uVar9;
    uStack_84 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uStack_8c / 3) * 0xc
                         + (ulong)(uStack_8c % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar5 = *(uint **)(puVar12 + 2);
    uStack_88 = uStack_8c;
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uStack_84;
    }
    else {
      param_2 = &uStack_84;
      puVar6 = puVar12;
      FUN_10986f884(puVar12,param_2);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar5 = *(uint **)(puVar12 + 2);
    if (puVar5 < *(uint **)(puVar12 + 4)) {
      puVar6 = puVar5 + 1;
      *puVar5 = uVar14;
      puVar5 = puVar12;
    }
    else {
      param_2 = &uStack_88;
      puVar6 = puVar12;
      FUN_10986dcb4(puVar12,param_2);
      puVar5 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar6;
    uVar14 = puVar5[0xc];
    *(uint *)(*(long *)(puVar5 + 6) + uVar13 * 4) = uVar14;
    puVar5[0xc] = uVar14 + 1;
  }
  uVar14 = *(uint *)(param_1 + 0xa8);
  if ((int)uVar14 < 3) {
    do {
      lVar4 = (long)(int)uVar14 + -3;
      plVar7 = (long *)(param_1 + 0x68 + (long)(int)uVar14 * 0x18);
      while (plVar7[-1] == *plVar7) {
        uVar14 = uVar14 + 1;
        plVar7 = plVar7 + 3;
        bVar3 = lVar4 == -1;
        lVar4 = lVar4 + 1;
        if (bVar3) goto LAB_10986f498;
      }
      puVar5 = (uint *)(*plVar7 + -4);
      uVar16 = *puVar5;
      *plVar7 = (long)puVar5;
      *(uint *)(param_1 + 0xa8) = uVar14;
      if (uVar16 == 0xffffffff) break;
      lVar4 = *(long *)(param_1 + 0x30);
      if ((*(ulong *)(lVar4 + ((ulong)uVar16 / 0xc0) * 8) >> ((ulong)uVar16 / 3 & 0x3f) & 1) == 0) {
LAB_10986f560:
        do {
          uVar13 = (ulong)uVar16 / 3;
          uVar9 = (ulong)uVar16 / 0x18 & 0xffffff8;
          *(ulong *)(lVar4 + uVar9) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar4 + uVar9);
          if (uVar16 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)uVar16 * 4);
          }
          uVar10 = 1L << (uVar9 & 0x3f);
          uVar11 = *(ulong *)(*(long *)(param_1 + 0x48) + (uVar9 >> 6) * 8);
          uStack_8c = uVar16;
          if ((uVar11 & uVar10) == 0) {
            *(ulong *)(*(long *)(param_1 + 0x48) + (uVar9 >> 6) * 8) = uVar11 | uVar10;
            uStack_84 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + uVar13 * 0xc +
                                 (ulong)(uVar16 % 3) * 4);
            puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
            puVar5 = *(uint **)(puVar12 + 2);
            uStack_88 = uVar16;
            if (puVar5 < *(uint **)(puVar12 + 4)) {
              puVar6 = puVar5 + 1;
              *puVar5 = uStack_84;
            }
            else {
              param_2 = &uStack_84;
              puVar6 = puVar12;
              FUN_10986f884(puVar12,param_2);
            }
            *(uint **)(puVar12 + 2) = puVar6;
            puVar12 = *(uint **)(param_1 + 0x18);
            puVar5 = *(uint **)(puVar12 + 2);
            if (puVar5 < *(uint **)(puVar12 + 4)) {
              puVar6 = puVar5 + 1;
              *puVar5 = uVar16;
              puVar5 = puVar12;
            }
            else {
              param_2 = &uStack_88;
              puVar6 = puVar12;
              FUN_10986dcb4(puVar12,param_2);
              puVar5 = *(uint **)(param_1 + 0x18);
            }
            *(uint **)(puVar12 + 2) = puVar6;
            uVar14 = puVar5[0xc];
            *(uint *)(*(long *)(puVar5 + 6) + uVar9 * 4) = uVar14;
            puVar5[0xc] = uVar14 + 1;
          }
          if (uStack_8c == 0xffffffff) goto LAB_10986f840;
          plVar7 = *(long **)(param_1 + 8);
          uVar14 = uStack_8c - 2;
          if (0x55555555 < (uStack_8c + 1) * -0x55555555) {
            uVar14 = uStack_8c + 1;
          }
          if (uVar14 == 0xffffffff) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = *(uint *)(plVar7[3] + (ulong)uVar14 * 4);
          }
          iVar8 = 2;
          if (0x55555555 < uStack_8c * -0x55555555) {
            iVar8 = -1;
          }
          if (iVar8 + uStack_8c == 0xffffffff) {
            uVar16 = 0xffffffff;
          }
          else {
            uVar16 = *(uint *)(plVar7[3] + (ulong)(iVar8 + uStack_8c) * 4);
          }
          uVar13 = (ulong)uVar16;
          if (uVar14 != 0xffffffff) {
            lVar4 = *(long *)(param_1 + 0x30);
            uVar9 = *(ulong *)(lVar4 + ((ulong)uVar14 / 0xc0) * 8) &
                    1L << ((ulong)uVar14 / 3 & 0x3f);
            bVar3 = uVar9 != 0;
            if (uVar16 != 0xffffffff) {
              if ((*(ulong *)(lVar4 + (uVar13 / 0xc0) * 8) >> (uVar13 / 3 & 0x3f) & 1) == 0)
              goto LAB_10986f72c;
              if (uVar9 != 0) goto LAB_10986f840;
              goto LAB_10986f7d4;
            }
            if (uVar9 != 0) goto LAB_10986f840;
            goto LAB_10986f7d8;
          }
          if ((uVar16 == 0xffffffff) ||
             (lVar4 = *(long *)(param_1 + 0x30),
             (*(ulong *)(lVar4 + (uVar13 / 0xc0) * 8) >> (uVar13 / 3 & 0x3f) & 1) != 0))
          goto LAB_10986f840;
          bVar3 = true;
LAB_10986f72c:
          uVar2 = *(uint *)(*plVar7 + (ulong)uVar16 * 4);
          uVar13 = (ulong)uVar2;
          if ((*(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar2 >> 6) * 8) >> (uVar13 & 0x3f) &
              1) == 0) {
            iVar8 = *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4);
            *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4) = iVar8 + 1;
            lVar15 = 1;
            if (iVar8 < 1) {
              lVar15 = 2;
            }
            if (bVar3) goto LAB_10986f778;
            break;
          }
          lVar15 = 0;
          if (!bVar3) break;
LAB_10986f778:
        } while ((int)lVar15 <= *(int *)(param_1 + 0xa8));
        puVar12 = puVar1 + lVar15 * 6;
        puVar5 = *(uint **)(puVar12 + 2);
        if (puVar5 < *(uint **)(puVar12 + 4)) {
          puVar6 = puVar5 + 1;
          *puVar5 = uVar16;
        }
        else {
          param_2 = &uStack_84;
          puVar6 = puVar12;
          uStack_84 = uVar16;
          FUN_10986dcb4(puVar12,param_2);
        }
        *(uint **)(puVar12 + 2) = puVar6;
        if ((int)lVar15 < *(int *)(param_1 + 0xa8)) {
          *(int *)(param_1 + 0xa8) = (int)lVar15;
        }
        if (bVar3) {
LAB_10986f840:
          uVar14 = *(uint *)(param_1 + 0xa8);
          goto LAB_10986f848;
        }
        if (uVar14 == 0xffffffff) {
          uVar13 = 0xffffffff;
        }
        else {
LAB_10986f7d4:
          plVar7 = *(long **)(param_1 + 8);
LAB_10986f7d8:
          uVar13 = (ulong)*(uint *)(*plVar7 + (ulong)uVar14 * 4);
        }
        if ((*(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0)
        {
          iVar8 = *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4);
          *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4) = iVar8 + 1;
          uVar16 = 1;
          if (iVar8 < 1) {
            uVar16 = 2;
          }
        }
        else {
          uVar16 = 0;
        }
        if ((int)uVar16 <= *(int *)(param_1 + 0xa8)) {
          lVar4 = *(long *)(param_1 + 0x30);
          uVar16 = uVar14;
          goto LAB_10986f560;
        }
        puVar12 = puVar1 + (ulong)uVar16 * 6;
        puVar5 = *(uint **)(puVar12 + 2);
        if (puVar5 < *(uint **)(puVar12 + 4)) {
          puVar6 = puVar5 + 1;
          *puVar5 = uVar14;
        }
        else {
          param_2 = &uStack_84;
          puVar6 = puVar12;
          uStack_84 = uVar14;
          FUN_10986dcb4(puVar12,param_2);
        }
        *(uint **)(puVar12 + 2) = puVar6;
        uVar14 = *(uint *)(param_1 + 0xa8);
        if ((int)uVar16 < (int)*(uint *)(param_1 + 0xa8)) {
          *(uint *)(param_1 + 0xa8) = uVar16;
          uVar14 = uVar16;
        }
      }
LAB_10986f848:
    } while ((int)uVar14 < 3);
  }
LAB_10986f498:
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = 1;
  return auVar18;
}



/* Entry: 10986f0d8; end: 10986f883;  */

undefined8 FUN_10986f0d8(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xb0)) {
    return 1;
  }
  puVar1 = (uint *)(param_1 + 0x60);
  puVar4 = *(uint **)(param_1 + 0x68);
  uStack_6c = param_2;
  if (puVar4 < *(uint **)(param_1 + 0x70)) {
    puVar12 = puVar4 + 1;
    *puVar4 = param_2;
  }
  else {
    puVar12 = puVar1;
    FUN_10986dcb4(puVar1,&uStack_6c);
  }
  *(uint **)(param_1 + 0x68) = puVar12;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (uStack_6c == 0xffffffff) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = uStack_6c - 2;
    if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
      uVar14 = uStack_6c + 1;
    }
    if (uVar14 == 0xffffffff) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = *(uint *)(**(long **)(param_1 + 8) + (ulong)uVar14 * 4);
    }
    iVar8 = 2;
    if (0x55555555 < uStack_6c * -0x55555555) {
      iVar8 = -1;
    }
    if (iVar8 + uStack_6c != 0xffffffff) {
      uVar13 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)(iVar8 + uStack_6c) * 4);
      goto LAB_10986f1bc;
    }
  }
  uVar13 = 0xffffffff;
LAB_10986f1bc:
  lVar6 = *(long *)(param_1 + 0x48);
  uVar9 = 1L << ((ulong)uVar14 & 0x3f);
  uVar10 = *(ulong *)(lVar6 + (ulong)(uVar14 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(lVar6 + (ulong)(uVar14 >> 6) * 8) = uVar10 | uVar9;
    uVar16 = uStack_6c;
    if ((uStack_6c != 0xffffffff) &&
       (uVar16 = uStack_6c - 2, 0x55555555 < (uStack_6c + 1) * -0x55555555)) {
      uVar16 = uStack_6c + 1;
    }
    uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar16 / 3) * 0xc +
                         (ulong)(uVar16 % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar4 = *(uint **)(puVar12 + 2);
    uStack_68 = uVar16;
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uStack_64;
    }
    else {
      puVar5 = puVar12;
      FUN_10986f884(puVar12,&uStack_64);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar4 = *(uint **)(puVar12 + 2);
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uVar16;
      puVar4 = puVar12;
    }
    else {
      puVar5 = puVar12;
      FUN_10986dcb4(puVar12,&uStack_68);
      puVar4 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    uVar16 = puVar4[0xc];
    *(uint *)(*(long *)(puVar4 + 6) + (ulong)uVar14 * 4) = uVar16;
    puVar4[0xc] = uVar16 + 1;
    lVar6 = *(long *)(param_1 + 0x48);
  }
  uVar9 = 1L << (uVar13 & 0x3f);
  uVar10 = *(ulong *)(lVar6 + (uVar13 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(lVar6 + (uVar13 >> 6) * 8) = uVar10 | uVar9;
    uVar14 = uStack_6c;
    if (uStack_6c != 0xffffffff) {
      if (uStack_6c * -0x55555555 < 0x55555556) {
        uVar14 = uStack_6c + 2;
      }
      else {
        uVar14 = uStack_6c - 1;
      }
    }
    uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar14 / 3) * 0xc +
                         (ulong)(uVar14 % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar4 = *(uint **)(puVar12 + 2);
    uStack_68 = uVar14;
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uStack_64;
    }
    else {
      puVar5 = puVar12;
      FUN_10986f884(puVar12,&uStack_64);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar4 = *(uint **)(puVar12 + 2);
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uVar14;
      puVar4 = puVar12;
    }
    else {
      puVar5 = puVar12;
      FUN_10986dcb4(puVar12,&uStack_68);
      puVar4 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    uVar14 = puVar4[0xc];
    *(uint *)(*(long *)(puVar4 + 6) + uVar13 * 4) = uVar14;
    puVar4[0xc] = uVar14 + 1;
  }
  uVar14 = uStack_6c;
  if (uStack_6c == 0xffffffff) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)uStack_6c * 4);
  }
  uVar9 = 1L << (uVar13 & 0x3f);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8);
  if ((uVar10 & uVar9) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8) = uVar10 | uVar9;
    uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uStack_6c / 3) * 0xc
                         + (ulong)(uStack_6c % 3) * 4);
    puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
    puVar4 = *(uint **)(puVar12 + 2);
    uStack_68 = uStack_6c;
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uStack_64;
    }
    else {
      puVar5 = puVar12;
      FUN_10986f884(puVar12,&uStack_64);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    puVar12 = *(uint **)(param_1 + 0x18);
    puVar4 = *(uint **)(puVar12 + 2);
    if (puVar4 < *(uint **)(puVar12 + 4)) {
      puVar5 = puVar4 + 1;
      *puVar4 = uVar14;
      puVar4 = puVar12;
    }
    else {
      puVar5 = puVar12;
      FUN_10986dcb4(puVar12,&uStack_68);
      puVar4 = *(uint **)(param_1 + 0x18);
    }
    *(uint **)(puVar12 + 2) = puVar5;
    uVar14 = puVar4[0xc];
    *(uint *)(*(long *)(puVar4 + 6) + uVar13 * 4) = uVar14;
    puVar4[0xc] = uVar14 + 1;
  }
  uVar14 = *(uint *)(param_1 + 0xa8);
  if ((int)uVar14 < 3) {
    do {
      lVar6 = (long)(int)uVar14 + -3;
      plVar7 = (long *)(param_1 + 0x68 + (long)(int)uVar14 * 0x18);
      while (plVar7[-1] == *plVar7) {
        uVar14 = uVar14 + 1;
        plVar7 = plVar7 + 3;
        bVar3 = lVar6 == -1;
        lVar6 = lVar6 + 1;
        if (bVar3) {
          return 1;
        }
      }
      puVar4 = (uint *)(*plVar7 + -4);
      uVar16 = *puVar4;
      *plVar7 = (long)puVar4;
      *(uint *)(param_1 + 0xa8) = uVar14;
      if (uVar16 == 0xffffffff) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0x30);
      if ((*(ulong *)(lVar6 + ((ulong)uVar16 / 0xc0) * 8) >> ((ulong)uVar16 / 3 & 0x3f) & 1) == 0) {
LAB_10986f560:
        do {
          uVar13 = (ulong)uVar16 / 3;
          uVar9 = (ulong)uVar16 / 0x18 & 0xffffff8;
          *(ulong *)(lVar6 + uVar9) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar6 + uVar9);
          if (uVar16 == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)(**(long **)(param_1 + 8) + (ulong)uVar16 * 4);
          }
          uVar10 = 1L << (uVar9 & 0x3f);
          uVar11 = *(ulong *)(*(long *)(param_1 + 0x48) + (uVar9 >> 6) * 8);
          uStack_6c = uVar16;
          if ((uVar11 & uVar10) == 0) {
            *(ulong *)(*(long *)(param_1 + 0x48) + (uVar9 >> 6) * 8) = uVar11 | uVar10;
            uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + uVar13 * 0xc +
                                 (ulong)(uVar16 % 3) * 4);
            puVar12 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
            puVar4 = *(uint **)(puVar12 + 2);
            uStack_68 = uVar16;
            if (puVar4 < *(uint **)(puVar12 + 4)) {
              puVar5 = puVar4 + 1;
              *puVar4 = uStack_64;
            }
            else {
              puVar5 = puVar12;
              FUN_10986f884(puVar12,&uStack_64);
            }
            *(uint **)(puVar12 + 2) = puVar5;
            puVar12 = *(uint **)(param_1 + 0x18);
            puVar4 = *(uint **)(puVar12 + 2);
            if (puVar4 < *(uint **)(puVar12 + 4)) {
              puVar5 = puVar4 + 1;
              *puVar4 = uVar16;
              puVar4 = puVar12;
            }
            else {
              puVar5 = puVar12;
              FUN_10986dcb4(puVar12,&uStack_68);
              puVar4 = *(uint **)(param_1 + 0x18);
            }
            *(uint **)(puVar12 + 2) = puVar5;
            uVar14 = puVar4[0xc];
            *(uint *)(*(long *)(puVar4 + 6) + uVar9 * 4) = uVar14;
            puVar4[0xc] = uVar14 + 1;
          }
          if (uStack_6c == 0xffffffff) goto LAB_10986f840;
          plVar7 = *(long **)(param_1 + 8);
          uVar14 = uStack_6c - 2;
          if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
            uVar14 = uStack_6c + 1;
          }
          if (uVar14 == 0xffffffff) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = *(uint *)(plVar7[3] + (ulong)uVar14 * 4);
          }
          iVar8 = 2;
          if (0x55555555 < uStack_6c * -0x55555555) {
            iVar8 = -1;
          }
          if (iVar8 + uStack_6c == 0xffffffff) {
            uVar16 = 0xffffffff;
          }
          else {
            uVar16 = *(uint *)(plVar7[3] + (ulong)(iVar8 + uStack_6c) * 4);
          }
          uVar13 = (ulong)uVar16;
          if (uVar14 != 0xffffffff) {
            lVar6 = *(long *)(param_1 + 0x30);
            uVar9 = *(ulong *)(lVar6 + ((ulong)uVar14 / 0xc0) * 8) &
                    1L << ((ulong)uVar14 / 3 & 0x3f);
            bVar3 = uVar9 != 0;
            if (uVar16 != 0xffffffff) {
              if ((*(ulong *)(lVar6 + (uVar13 / 0xc0) * 8) >> (uVar13 / 3 & 0x3f) & 1) == 0)
              goto LAB_10986f72c;
              if (uVar9 != 0) goto LAB_10986f840;
              goto LAB_10986f7d4;
            }
            if (uVar9 != 0) goto LAB_10986f840;
            goto LAB_10986f7d8;
          }
          if ((uVar16 == 0xffffffff) ||
             (lVar6 = *(long *)(param_1 + 0x30),
             (*(ulong *)(lVar6 + (uVar13 / 0xc0) * 8) >> (uVar13 / 3 & 0x3f) & 1) != 0))
          goto LAB_10986f840;
          bVar3 = true;
LAB_10986f72c:
          uVar2 = *(uint *)(*plVar7 + (ulong)uVar16 * 4);
          uVar13 = (ulong)uVar2;
          if ((*(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar2 >> 6) * 8) >> (uVar13 & 0x3f) &
              1) == 0) {
            iVar8 = *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4);
            *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4) = iVar8 + 1;
            lVar15 = 1;
            if (iVar8 < 1) {
              lVar15 = 2;
            }
            if (bVar3) goto LAB_10986f778;
            break;
          }
          lVar15 = 0;
          if (!bVar3) break;
LAB_10986f778:
        } while ((int)lVar15 <= *(int *)(param_1 + 0xa8));
        puVar12 = puVar1 + lVar15 * 6;
        puVar4 = *(uint **)(puVar12 + 2);
        if (puVar4 < *(uint **)(puVar12 + 4)) {
          puVar5 = puVar4 + 1;
          *puVar4 = uVar16;
        }
        else {
          puVar5 = puVar12;
          uStack_64 = uVar16;
          FUN_10986dcb4(puVar12,&uStack_64);
        }
        *(uint **)(puVar12 + 2) = puVar5;
        if ((int)lVar15 < *(int *)(param_1 + 0xa8)) {
          *(int *)(param_1 + 0xa8) = (int)lVar15;
        }
        if (bVar3) {
LAB_10986f840:
          uVar14 = *(uint *)(param_1 + 0xa8);
          goto LAB_10986f848;
        }
        if (uVar14 == 0xffffffff) {
          uVar13 = 0xffffffff;
        }
        else {
LAB_10986f7d4:
          plVar7 = *(long **)(param_1 + 8);
LAB_10986f7d8:
          uVar13 = (ulong)*(uint *)(*plVar7 + (ulong)uVar14 * 4);
        }
        if ((*(ulong *)(*(long *)(param_1 + 0x48) + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0)
        {
          iVar8 = *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4);
          *(int *)(*(long *)(param_1 + 0xb0) + uVar13 * 4) = iVar8 + 1;
          uVar16 = 1;
          if (iVar8 < 1) {
            uVar16 = 2;
          }
        }
        else {
          uVar16 = 0;
        }
        if ((int)uVar16 <= *(int *)(param_1 + 0xa8)) {
          lVar6 = *(long *)(param_1 + 0x30);
          uVar16 = uVar14;
          goto LAB_10986f560;
        }
        puVar12 = puVar1 + (ulong)uVar16 * 6;
        puVar4 = *(uint **)(puVar12 + 2);
        if (puVar4 < *(uint **)(puVar12 + 4)) {
          puVar5 = puVar4 + 1;
          *puVar4 = uVar14;
        }
        else {
          puVar5 = puVar12;
          uStack_64 = uVar14;
          FUN_10986dcb4(puVar12,&uStack_64);
        }
        *(uint **)(puVar12 + 2) = puVar5;
        uVar14 = *(uint *)(param_1 + 0xa8);
        if ((int)uVar16 < (int)*(uint *)(param_1 + 0xa8)) {
          *(uint *)(param_1 + 0xa8) = uVar16;
          uVar14 = uVar16;
        }
      }
LAB_10986f848:
    } while ((int)uVar14 < 3);
  }
  return 1;
}



/* Entry: 10986f884; end: 10986f99b;  */

long * FUN_10986f884(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar3 = (long)uVar2 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar2) {
      uVar3 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar3 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10986f0a4();
    }
    puStack_50 = (undefined4 *)((long)plVar4 + lVar5);
    lStack_40 = (long)plVar4 + uVar3 * 4;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    plStack_58 = plVar4;
    FUN_10986f038(param_1,&plStack_58);
    plVar4 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (3 - (long)puStack_48) & 0xfffffffffffffffcU));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar4;
  }
  FUN_10986f024();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 3U & 0xfffffffffffffffc));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_110b16128;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986f99c; end: 10986fa43;  */

undefined8 * FUN_10986f99c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16128;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986fa44; end: 10986fa47;  */

undefined8 * FUN_10986fa44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16128;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986fa48; end: 10986fa5b;  */

void FUN_10986fa48(void)

{
  FUN_10986f99c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10986fa5c; end: 10986fb7b;  */

void FUN_10986fa5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar4 = param_1[2];
    puVar3 = (undefined8 *)*param_1;
    if (param_4 <= (ulong)((long)(uVar4 - (long)puVar3) >> 2)) {
      puVar6 = (undefined8 *)param_1[1];
      lVar8 = (long)puVar6 - (long)puVar3;
      if ((ulong)(lVar8 >> 2) < param_4) {
        puVar7 = (undefined8 *)((long)param_2 + lVar8);
        puVar2 = puVar6;
        if (puVar6 != puVar3) {
          do {
            *(undefined4 *)puVar3 = *(undefined4 *)param_2;
            lVar8 = lVar8 + -4;
            puVar3 = (undefined8 *)((long)puVar3 + 4);
            param_2 = (undefined8 *)((long)param_2 + 4);
          } while (lVar8 != 0);
        }
        for (; puVar7 != param_3; puVar7 = (undefined8 *)((long)puVar7 + 4)) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
          puVar2 = (undefined8 *)((long)puVar2 + 4);
        }
        param_1[1] = puVar2;
      }
      else {
        for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 4)) {
          *(undefined4 *)puVar3 = *(undefined4 *)param_2;
          puVar3 = (undefined8 *)((long)puVar3 + 4);
        }
        param_1[1] = puVar3;
      }
      return;
    }
    puVar6 = param_2;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[1] = puVar3;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3e == 0) {
      uVar1 = (long)uVar4 >> 1;
      if ((ulong)((long)uVar4 >> 1) <= param_4) {
        uVar1 = param_4;
      }
      if (0x7ffffffffffffffb < uVar4) {
        uVar1 = 0x3fffffffffffffff;
      }
      FUN_10986fb7c(param_1,uVar1);
      puVar5 = (undefined4 *)param_1[1];
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 4)) {
        *puVar5 = *(undefined4 *)param_2;
        puVar5 = puVar5 + 1;
      }
      param_1[1] = puVar5;
      return;
    }
    FUN_10986dc00();
    *(undefined8 **)((long)register0x00000008 + -0x50) = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10986fb7c;
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar7 = puVar3;
      FUN_10986dc80();
      *puVar3 = puVar7;
      puVar3[1] = puVar7;
      puVar3[2] = (undefined4 *)((long)puVar7 + (long)puVar6 * 4);
      return;
    }
    FUN_10986dc00();
    *(ulong *)((long)register0x00000008 + -0x80) = param_4;
    *(undefined8 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined8 **)((long)register0x00000008 + -0x70) = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10986fbb4;
    uVar10 = puVar6[2];
    uVar9 = puVar6[1];
    uVar12 = puVar6[4];
    uVar11 = puVar6[3];
    puVar3[7] = puVar6[5];
    puVar3[6] = uVar12;
    puVar3[5] = uVar11;
    puVar3[4] = uVar10;
    puVar3[3] = uVar9;
    func_0x000108b0402c(puVar3 + 8,puVar6 + 6);
    func_0x000108b0402c(puVar3 + 0xb,puVar6 + 9);
    if (puVar3 + 2 == puVar6) break;
    param_2 = (undefined8 *)puVar6[0xc];
    param_3 = (undefined8 *)puVar6[0xd];
    param_4 = (long)param_3 - (long)param_2 >> 2;
    param_1 = puVar3 + 0xe;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return;
}



/* Entry: 10986fb7c; end: 10986fbb3;  */

void FUN_10986fb7c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((ulong)param_2 >> 0x3e == 0) {
      puVar3 = param_1;
      FUN_10986dc80();
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = (undefined4 *)((long)puVar3 + (long)param_2 * 4);
      return;
    }
    FUN_10986dc00();
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) = FUN_10986fbb4;
    uVar10 = param_2[2];
    uVar9 = param_2[1];
    uVar12 = param_2[4];
    uVar11 = param_2[3];
    param_1[7] = param_2[5];
    param_1[6] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    param_1[3] = uVar9;
    func_0x000108b0402c(param_1 + 8,param_2 + 6);
    func_0x000108b0402c(param_1 + 0xb,param_2 + 9);
    if (param_1 + 2 == param_2) {
      return;
    }
    unaff_x21 = (undefined8 *)param_2[0xc];
    unaff_x20 = (undefined8 *)param_2[0xd];
    unaff_x22 = (long)unaff_x20 - (long)unaff_x21 >> 2;
    unaff_x19 = param_1 + 0xe;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
    uVar4 = param_1[0x10];
    puVar3 = (undefined8 *)*unaff_x19;
    if (unaff_x22 <= (ulong)((long)(uVar4 - (long)puVar3) >> 2)) {
      puVar6 = (undefined8 *)param_1[0xf];
      lVar8 = (long)puVar6 - (long)puVar3;
      if ((ulong)(lVar8 >> 2) < unaff_x22) {
        puVar7 = (undefined8 *)((long)unaff_x21 + lVar8);
        puVar2 = puVar6;
        if (puVar6 != puVar3) {
          do {
            *(undefined4 *)puVar3 = *(undefined4 *)unaff_x21;
            lVar8 = lVar8 + -4;
            puVar3 = (undefined8 *)((long)puVar3 + 4);
            unaff_x21 = (undefined8 *)((long)unaff_x21 + 4);
          } while (lVar8 != 0);
        }
        for (; puVar7 != unaff_x20; puVar7 = (undefined8 *)((long)puVar7 + 4)) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
          puVar2 = (undefined8 *)((long)puVar2 + 4);
        }
        param_1[0xf] = puVar2;
      }
      else {
        for (; unaff_x21 != unaff_x20; unaff_x21 = (undefined8 *)((long)unaff_x21 + 4)) {
          *(undefined4 *)puVar3 = *(undefined4 *)unaff_x21;
          puVar3 = (undefined8 *)((long)puVar3 + 4);
        }
        param_1[0xf] = puVar3;
      }
      return;
    }
    param_2 = unaff_x21;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[0xf] = puVar3;
      __ZdlPv();
      uVar4 = 0;
      *unaff_x19 = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
    }
    if (unaff_x22 >> 0x3e == 0) break;
    unaff_x30 = FUN_10986fb7c;
    FUN_10986dc00();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = puVar3;
  }
  uVar1 = (long)uVar4 >> 1;
  if ((ulong)((long)uVar4 >> 1) <= unaff_x22) {
    uVar1 = unaff_x22;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar1 = 0x3fffffffffffffff;
  }
  FUN_10986fb7c(unaff_x19,uVar1);
  puVar5 = (undefined4 *)param_1[0xf];
  for (; unaff_x21 != unaff_x20; unaff_x21 = (undefined8 *)((long)unaff_x21 + 4)) {
    *puVar5 = *(undefined4 *)unaff_x21;
    puVar5 = puVar5 + 1;
  }
  param_1[0xf] = puVar5;
  return;
}



/* Entry: 10986fbb4; end: 10986fc37;  */

void FUN_10986fbb4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar10 = param_2[2];
    uVar9 = param_2[1];
    uVar12 = param_2[4];
    uVar11 = param_2[3];
    param_1[7] = param_2[5];
    param_1[6] = uVar12;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    param_1[3] = uVar9;
    func_0x000108b0402c(param_1 + 8,param_2 + 6);
    func_0x000108b0402c(param_1 + 0xb,param_2 + 9);
    if (param_1 + 2 == param_2) {
      return;
    }
    unaff_x21 = (undefined8 *)param_2[0xc];
    unaff_x20 = (undefined8 *)param_2[0xd];
    unaff_x22 = (long)unaff_x20 - (long)unaff_x21 >> 2;
    unaff_x19 = param_1 + 0xe;
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
    uVar4 = param_1[0x10];
    puVar3 = (undefined8 *)*unaff_x19;
    if (unaff_x22 <= (ulong)((long)(uVar4 - (long)puVar3) >> 2)) break;
    param_2 = unaff_x21;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[0xf] = puVar3;
      __ZdlPv();
      uVar4 = 0;
      *unaff_x19 = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
    }
    if (unaff_x22 >> 0x3e == 0) {
      uVar1 = (long)uVar4 >> 1;
      if ((ulong)((long)uVar4 >> 1) <= unaff_x22) {
        uVar1 = unaff_x22;
      }
      if (0x7ffffffffffffffb < uVar4) {
        uVar1 = 0x3fffffffffffffff;
      }
      FUN_10986fb7c(unaff_x19,uVar1);
      puVar5 = (undefined4 *)param_1[0xf];
      for (; unaff_x21 != unaff_x20; unaff_x21 = (undefined8 *)((long)unaff_x21 + 4)) {
        *puVar5 = *(undefined4 *)unaff_x21;
        puVar5 = puVar5 + 1;
      }
      param_1[0xf] = puVar5;
      return;
    }
    FUN_10986dc00();
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10986fb7c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    if ((ulong)param_2 >> 0x3e == 0) {
      puVar6 = puVar3;
      FUN_10986dc80();
      *puVar3 = puVar6;
      puVar3[1] = puVar6;
      puVar3[2] = (undefined4 *)((long)puVar6 + (long)param_2 * 4);
      return;
    }
    unaff_x30 = FUN_10986fbb4;
    FUN_10986dc00();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = puVar3;
  }
  puVar6 = (undefined8 *)param_1[0xf];
  lVar8 = (long)puVar6 - (long)puVar3;
  if ((ulong)(lVar8 >> 2) < unaff_x22) {
    puVar7 = (undefined8 *)((long)unaff_x21 + lVar8);
    puVar2 = puVar6;
    if (puVar6 != puVar3) {
      do {
        *(undefined4 *)puVar3 = *(undefined4 *)unaff_x21;
        lVar8 = lVar8 + -4;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 4);
      } while (lVar8 != 0);
    }
    for (; puVar7 != unaff_x20; puVar7 = (undefined8 *)((long)puVar7 + 4)) {
      *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
      puVar2 = (undefined8 *)((long)puVar2 + 4);
    }
    param_1[0xf] = puVar2;
  }
  else {
    for (; unaff_x21 != unaff_x20; unaff_x21 = (undefined8 *)((long)unaff_x21 + 4)) {
      *(undefined4 *)puVar3 = *(undefined4 *)unaff_x21;
      puVar3 = (undefined8 *)((long)puVar3 + 4);
    }
    param_1[0xf] = puVar3;
  }
  return;
}



/* Entry: 10986fc38; end: 10986fd1b;  */

undefined8 * FUN_10986fc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16198;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b16128;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10986fd1c; end: 10986fef3;  */

bool FUN_10986fd1c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  plVar13 = *(long **)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xa0);
  *(undefined1 *)(param_2 + 100) = 0;
  FUN_109851e9c(param_2 + 0x48,uVar2,&UNK_10e0047a4);
  lVar10 = *(long *)(param_1 + 0x88);
  lVar1 = *(long *)(lVar10 + 0xc0);
  uVar6 = (int)((ulong)(*(long *)(lVar10 + 200) - lVar1) >> 2) * -0x55555555;
  if (uVar6 != 0) {
    uVar8 = 0;
    uVar9 = 0;
    bVar7 = false;
    uVar3 = *(uint *)(lVar10 + 0xa0);
    uVar11 = 0xffffffff;
    do {
      lVar10 = 3;
      uVar12 = uVar8;
      do {
        if (uVar11 + lVar10 == 3) {
          return bVar7;
        }
        uVar4 = *(uint *)(*plVar13 + (uVar12 & 0xffffffff) * 4);
        if (uVar4 == 0xffffffff) {
          return bVar7;
        }
        uVar5 = *(uint *)(lVar1 + uVar12 * 4);
        uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + (ulong)uVar4 * 4);
        if (uVar3 <= uVar5 || uVar3 <= uVar4) {
          return bVar7;
        }
        *(uint *)(*(long *)(param_2 + 0x48) + (ulong)uVar5 * 4) = uVar4;
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar9 = uVar9 + 1;
      uVar11 = (ulong)((int)uVar11 - 3);
      uVar8 = uVar8 + 3;
      bVar7 = uVar6 <= uVar9;
    } while (uVar9 != uVar6);
  }
  return true;
}



/* Entry: 10986fef4; end: 109870523;  */

undefined8 FUN_10986fef4(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  if ((param_2 == 0xffffffff) ||
     ((*(ulong *)(*(long *)(param_1 + 0x30) + ((ulong)param_2 / 0xc0) * 8) >>
       ((ulong)param_2 / 3 & 0x3f) & 1) != 0)) {
LAB_10986ff48:
    uVar4 = 1;
  }
  else {
    puVar16 = (ulong *)(param_1 + 0x60);
    puVar5 = (uint *)*puVar16;
    *(uint **)(param_1 + 0x68) = puVar5;
    uStack_6c = param_2;
    if (puVar5 < *(uint **)(param_1 + 0x70)) {
      puVar10 = (ulong *)(puVar5 + 1);
      *puVar5 = param_2;
    }
    else {
      puVar10 = puVar16;
      FUN_10986dcb4(puVar16,&uStack_6c);
    }
    *(ulong **)(param_1 + 0x68) = puVar10;
    if (uStack_6c != 0xffffffff) {
      uVar18 = uStack_6c - 2;
      if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
        uVar18 = uStack_6c + 1;
      }
      if (uVar18 == 0xffffffff) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(uint *)(**(long **)(param_1 + 8) + (ulong)uVar18 * 4);
      }
      iVar13 = 2;
      if (0x55555555 < uStack_6c * -0x55555555) {
        iVar13 = -1;
      }
      if (iVar13 + uStack_6c != 0xffffffff) {
        if (uVar11 == 0xffffffff) {
          return 0;
        }
        uVar1 = *(uint *)(**(long **)(param_1 + 8) + (ulong)(iVar13 + uStack_6c) * 4);
        if (uVar1 == 0xffffffff) {
          return 0;
        }
        lVar8 = *(long *)(param_1 + 0x48);
        uVar12 = 1L << ((ulong)uVar11 & 0x3f);
        uVar14 = *(ulong *)(lVar8 + (ulong)(uVar11 >> 6) * 8);
        if ((uVar14 & uVar12) == 0) {
          *(ulong *)(lVar8 + (ulong)(uVar11 >> 6) * 8) = uVar14 | uVar12;
          uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) +
                                ((ulong)uVar18 / 3) * 0xc + (ulong)(uVar18 % 3) * 4);
          puVar17 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
          puVar5 = *(uint **)(puVar17 + 2);
          uStack_68 = uVar18;
          if (puVar5 < *(uint **)(puVar17 + 4)) {
            puVar6 = puVar5 + 1;
            *puVar5 = uStack_64;
          }
          else {
            puVar6 = puVar17;
            FUN_10986f884(puVar17,&uStack_64);
          }
          *(uint **)(puVar17 + 2) = puVar6;
          puVar17 = *(uint **)(param_1 + 0x18);
          puVar5 = *(uint **)(puVar17 + 2);
          if (puVar5 < *(uint **)(puVar17 + 4)) {
            puVar6 = puVar5 + 1;
            *puVar5 = uVar18;
            puVar5 = puVar17;
          }
          else {
            puVar6 = puVar17;
            FUN_10986dcb4(puVar17,&uStack_68);
            puVar5 = *(uint **)(param_1 + 0x18);
          }
          *(uint **)(puVar17 + 2) = puVar6;
          uVar18 = puVar5[0xc];
          *(uint *)(*(long *)(puVar5 + 6) + (ulong)uVar11 * 4) = uVar18;
          puVar5[0xc] = uVar18 + 1;
          lVar8 = *(long *)(param_1 + 0x48);
        }
        uVar12 = 1L << ((ulong)uVar1 & 0x3f);
        uVar14 = *(ulong *)(lVar8 + (ulong)(uVar1 >> 6) * 8);
        if ((uVar14 & uVar12) == 0) {
          *(ulong *)(lVar8 + (ulong)(uVar1 >> 6) * 8) = uVar14 | uVar12;
          if (uStack_6c == 0xffffffff) {
            uVar18 = 0xffffffff;
          }
          else if (uStack_6c * -0x55555555 < 0x55555556) {
            uVar18 = uStack_6c + 2;
          }
          else {
            uVar18 = uStack_6c - 1;
          }
          uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) +
                                ((ulong)uVar18 / 3) * 0xc + (ulong)(uVar18 % 3) * 4);
          puVar17 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
          puVar5 = *(uint **)(puVar17 + 2);
          uStack_68 = uVar18;
          if (puVar5 < *(uint **)(puVar17 + 4)) {
            puVar6 = puVar5 + 1;
            *puVar5 = uStack_64;
          }
          else {
            puVar6 = puVar17;
            FUN_10986f884(puVar17,&uStack_64);
          }
          *(uint **)(puVar17 + 2) = puVar6;
          puVar17 = *(uint **)(param_1 + 0x18);
          puVar5 = *(uint **)(puVar17 + 2);
          if (puVar5 < *(uint **)(puVar17 + 4)) {
            puVar6 = puVar5 + 1;
            *puVar5 = uVar18;
            puVar5 = puVar17;
          }
          else {
            puVar6 = puVar17;
            FUN_10986dcb4(puVar17,&uStack_68);
            puVar5 = *(uint **)(param_1 + 0x18);
          }
          *(uint **)(puVar17 + 2) = puVar6;
          uVar18 = puVar5[0xc];
          *(uint *)(*(long *)(puVar5 + 6) + (ulong)uVar1 * 4) = uVar18;
          puVar5[0xc] = uVar18 + 1;
        }
        puVar10 = *(ulong **)(param_1 + 0x60);
        puVar7 = *(ulong **)(param_1 + 0x68);
        if (puVar10 != puVar7) {
          do {
            puVar7 = (ulong *)((long)puVar7 + -4);
            uStack_6c = *(uint *)puVar7;
            if (uStack_6c == 0xffffffff) {
LAB_10987023c:
              *(ulong **)(param_1 + 0x68) = puVar7;
            }
            else {
              uVar12 = (ulong)uStack_6c / 0xc0;
              uVar14 = 1L << ((ulong)uStack_6c / 3 & 0x3f);
              uVar15 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 8);
              if ((uVar15 & uVar14) != 0) goto LAB_10987023c;
              *(ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 8) = uVar15 | uVar14;
              plVar9 = *(long **)(param_1 + 8);
LAB_109870258:
              uVar11 = uStack_6c;
              uVar18 = *(uint *)(*plVar9 + (ulong)uStack_6c * 4);
              uVar12 = (ulong)uVar18;
              if (uVar18 == 0xffffffff) goto LAB_10987051c;
              uVar14 = 1L << (uVar12 & 0x3f);
              uVar15 = *(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar18 >> 6) * 8);
              if ((uVar15 & uVar14) != 0) {
LAB_109870394:
                uStack_64 = uStack_6c - 2;
                if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
                  uStack_64 = uStack_6c + 1;
                }
                if (uStack_64 != 0xffffffff) {
                  uStack_64 = *(uint *)(plVar9[3] + (ulong)uStack_64 * 4);
                }
                iVar13 = 2;
                if (0x55555555 < uStack_6c * -0x55555555) {
                  iVar13 = -1;
                }
                if (iVar13 + uStack_6c == 0xffffffff) {
                  uVar18 = 0xffffffff;
                }
                else {
                  uVar18 = *(uint *)(plVar9[3] + (ulong)(iVar13 + uStack_6c) * 4);
                }
                uVar14 = (ulong)uVar18;
                uVar15 = uVar14 / 3;
                if (uStack_64 != 0xffffffff) {
                  uVar12 = (ulong)uStack_64 / 3;
                  lVar8 = *(long *)(param_1 + 0x30);
                  if ((*(ulong *)(lVar8 + ((ulong)uStack_64 / 0xc0) * 8) >> (uVar12 & 0x3f) & 1) ==
                      0) {
                    if ((uVar18 == 0xffffffff) ||
                       ((*(ulong *)(lVar8 + (uVar14 / 0xc0) * 8) >> (uVar15 & 0x3f) & 1) != 0))
                    goto LAB_10987043c;
                    puVar5 = *(uint **)(param_1 + 0x68);
                    puVar5[-1] = uVar18;
                    if (puVar5 < *(uint **)(param_1 + 0x70)) {
                      puVar7 = (ulong *)(puVar5 + 1);
                      *puVar5 = uStack_64;
                    }
                    else {
                      puVar7 = puVar16;
                      FUN_10986dcb4(puVar16,&uStack_64);
                    }
                    goto LAB_1098704e0;
                  }
                }
                if ((uVar18 == 0xffffffff) ||
                   (lVar8 = *(long *)(param_1 + 0x30), uVar12 = uVar15, uStack_64 = uVar18,
                   (*(ulong *)(lVar8 + (uVar14 / 0xc0) * 8) >> (uVar15 & 0x3f) & 1) != 0))
                goto LAB_1098704d8;
LAB_10987043c:
                uVar14 = uVar12 >> 3 & 0xffffff8;
                *(ulong *)(lVar8 + uVar14) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar8 + uVar14);
                uStack_6c = uStack_64;
                if (uStack_64 == 0xffffffff) goto LAB_10987051c;
                goto LAB_109870258;
              }
              iVar13 = *(int *)(plVar9[6] + uVar12 * 4);
              if (iVar13 == -1) {
LAB_1098702dc:
                bVar3 = true;
              }
              else {
                uVar1 = iVar13 - 2;
                if (0x55555555 < (uint)((iVar13 + 1) * -0x55555555)) {
                  uVar1 = iVar13 + 1;
                }
                if ((uVar1 == 0xffffffff) ||
                   (iVar13 = *(int *)(plVar9[3] + (ulong)uVar1 * 4), iVar13 == -1))
                goto LAB_1098702dc;
                iVar2 = iVar13 + -2;
                if (0x55555555 < (uint)((iVar13 + 1) * -0x55555555)) {
                  iVar2 = iVar13 + 1;
                }
                bVar3 = iVar2 == -1;
              }
              *(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar18 >> 6) * 8) = uVar15 | uVar14;
              uStack_64 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) +
                                    ((ulong)uStack_6c / 3) * 0xc + (ulong)(uStack_6c % 3) * 4);
              puVar17 = *(uint **)(*(long *)(param_1 + 0x28) + 8);
              puVar5 = *(uint **)(puVar17 + 2);
              uStack_68 = uStack_6c;
              if (puVar5 < *(uint **)(puVar17 + 4)) {
                puVar6 = puVar5 + 1;
                *puVar5 = uStack_64;
              }
              else {
                puVar6 = puVar17;
                FUN_10986f884(puVar17,&uStack_64);
              }
              *(uint **)(puVar17 + 2) = puVar6;
              puVar17 = *(uint **)(param_1 + 0x18);
              puVar5 = *(uint **)(puVar17 + 2);
              if (puVar5 < *(uint **)(puVar17 + 4)) {
                puVar6 = puVar5 + 1;
                *puVar5 = uVar11;
                puVar5 = puVar17;
              }
              else {
                puVar6 = puVar17;
                FUN_10986dcb4(puVar17,&uStack_68);
                puVar5 = *(uint **)(param_1 + 0x18);
              }
              *(uint **)(puVar17 + 2) = puVar6;
              uVar18 = puVar5[0xc];
              *(uint *)(*(long *)(puVar5 + 6) + uVar12 * 4) = uVar18;
              puVar5[0xc] = uVar18 + 1;
              plVar9 = *(long **)(param_1 + 8);
              if (!bVar3) {
                if (uStack_6c == 0xffffffff) {
                  uStack_64 = 0xffffffff;
                }
                else {
                  uStack_64 = uStack_6c - 2;
                  if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
                    uStack_64 = uStack_6c + 1;
                  }
                  if (uStack_64 != 0xffffffff) {
                    uStack_64 = *(uint *)(plVar9[3] + (ulong)uStack_64 * 4);
                  }
                }
                lVar8 = *(long *)(param_1 + 0x30);
                uVar12 = (ulong)uStack_64 / 3;
                goto LAB_10987043c;
              }
              if (uStack_6c != 0xffffffff) goto LAB_109870394;
LAB_1098704d8:
              puVar7 = (ulong *)(*(long *)(param_1 + 0x68) + -4);
LAB_1098704e0:
              *(ulong **)(param_1 + 0x68) = puVar7;
              puVar10 = *(ulong **)(param_1 + 0x60);
            }
          } while (puVar10 != puVar7);
        }
        goto LAB_10986ff48;
      }
    }
LAB_10987051c:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 109870524; end: 10987060b;  */

void FUN_109870524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16198;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  FUN_10986f99c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10987060c; end: 1098707cf;  */

bool FUN_10987060c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xa0);
  *(undefined1 *)(param_2 + 100) = 0;
  FUN_109851e9c(param_2 + 0x48,uVar2,&UNK_10e0047a4);
  lVar10 = *(long *)(param_1 + 0x88);
  lVar1 = *(long *)(lVar10 + 0xc0);
  uVar6 = (int)((ulong)(*(long *)(lVar10 + 200) - lVar1) >> 2) * -0x55555555;
  if (uVar6 != 0) {
    uVar8 = 0;
    uVar9 = 0;
    bVar7 = false;
    uVar3 = *(uint *)(lVar10 + 0xa0);
    lVar10 = *(long *)(lVar12 + 0x38);
    do {
      lVar12 = 3;
      uVar11 = uVar8;
      do {
        uVar4 = *(uint *)(lVar10 + (uVar11 & 0xffffffff) * 4);
        if (uVar4 == 0xffffffff) {
          return bVar7;
        }
        uVar5 = *(uint *)(lVar1 + uVar11 * 4);
        uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + (ulong)uVar4 * 4);
        if (uVar3 <= uVar5 || uVar3 <= uVar4) {
          return bVar7;
        }
        *(uint *)(*(long *)(param_2 + 0x48) + (ulong)uVar5 * 4) = uVar4;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 3;
      bVar7 = uVar6 <= uVar9;
    } while (uVar9 != uVar6);
  }
  return true;
}



/* Entry: 1098707d0; end: 109870e87;  */

undefined8 FUN_1098707d0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  ulong *puVar8;
  int *piVar9;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  int *piVar21;
  uint *puVar22;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  
  if ((param_2 != 0xffffffff) &&
     ((*(ulong *)(*(long *)(param_1 + 0x30) + ((ulong)param_2 / 0xc0) * 8) >>
       ((ulong)param_2 / 3 & 0x3f) & 1) == 0)) {
    puVar20 = (ulong *)(param_1 + 0x60);
    puVar5 = (uint *)*puVar20;
    *(uint **)(param_1 + 0x68) = puVar5;
    uStack_6c = param_2;
    if (puVar5 < *(uint **)(param_1 + 0x70)) {
      puVar11 = (ulong *)(puVar5 + 1);
      *puVar5 = param_2;
    }
    else {
      puVar11 = puVar20;
      FUN_10986dcb4(puVar20,&uStack_6c);
    }
    *(ulong **)(param_1 + 0x68) = puVar11;
    if (uStack_6c == 0xffffffff) {
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      uVar12 = *(uint *)(lVar14 + 0x3fffffffc);
      uVar15 = 0xffffffff;
    }
    else {
      uVar12 = uStack_6c - 2;
      if (0x55555555 < uStack_6c * -0x55555555 + 0xaaaaaaab) {
        uVar12 = uStack_6c + 1;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      uVar12 = *(uint *)(lVar14 + (ulong)uVar12 * 4);
      uVar15 = uStack_6c + 2;
      if (0x55555555 < uStack_6c * -0x55555555) {
        uVar15 = uStack_6c - 1;
      }
    }
    uVar15 = *(uint *)(lVar14 + (ulong)uVar15 * 4);
    if (uVar12 == 0xffffffff || uVar15 == 0xffffffff) {
      return 0;
    }
    lVar14 = *(long *)(param_1 + 0x48);
    uVar16 = 1L << ((ulong)uVar12 & 0x3f);
    uVar17 = *(ulong *)(lVar14 + (ulong)(uVar12 >> 6) * 8);
    if ((uVar17 & uVar16) == 0) {
      *(ulong *)(lVar14 + (ulong)(uVar12 >> 6) * 8) = uVar17 | uVar16;
      uVar2 = uStack_6c - 2;
      if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
        uVar2 = uStack_6c + 1;
      }
      uVar1 = 0xffffffff;
      if (uStack_6c != 0xffffffff) {
        uVar1 = uVar2;
      }
      iStack_64 = *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar1 / 3) * 0xc +
                          (ulong)(uVar1 % 3) * 4);
      piVar21 = *(int **)(*(long *)(param_1 + 0x28) + 8);
      piVar9 = *(int **)(piVar21 + 2);
      uStack_68 = uVar1;
      if (piVar9 < *(int **)(piVar21 + 4)) {
        piVar6 = piVar9 + 1;
        *piVar9 = iStack_64;
      }
      else {
        piVar6 = piVar21;
        FUN_10986f884(piVar21,&iStack_64);
      }
      *(int **)(piVar21 + 2) = piVar6;
      puVar22 = *(uint **)(param_1 + 0x18);
      puVar5 = *(uint **)(puVar22 + 2);
      if (puVar5 < *(uint **)(puVar22 + 4)) {
        puVar7 = puVar5 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar22;
      }
      else {
        puVar7 = puVar22;
        FUN_10986dcb4(puVar22,&uStack_68);
        puVar5 = *(uint **)(param_1 + 0x18);
      }
      *(uint **)(puVar22 + 2) = puVar7;
      uVar2 = puVar5[0xc];
      *(uint *)(*(long *)(puVar5 + 6) + (ulong)uVar12 * 4) = uVar2;
      puVar5[0xc] = uVar2 + 1;
      lVar14 = *(long *)(param_1 + 0x48);
    }
    uVar16 = 1L << ((ulong)uVar15 & 0x3f);
    uVar17 = *(ulong *)(lVar14 + (ulong)(uVar15 >> 6) * 8);
    if ((uVar17 & uVar16) == 0) {
      *(ulong *)(lVar14 + (ulong)(uVar15 >> 6) * 8) = uVar17 | uVar16;
      if (uStack_6c == 0xffffffff) {
        uVar12 = 0xffffffff;
      }
      else if (uStack_6c * -0x55555555 < 0x55555556) {
        uVar12 = uStack_6c + 2;
      }
      else {
        uVar12 = uStack_6c - 1;
      }
      iStack_64 = *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + ((ulong)uVar12 / 3) * 0xc +
                          (ulong)(uVar12 % 3) * 4);
      piVar21 = *(int **)(*(long *)(param_1 + 0x28) + 8);
      piVar9 = *(int **)(piVar21 + 2);
      uStack_68 = uVar12;
      if (piVar9 < *(int **)(piVar21 + 4)) {
        piVar6 = piVar9 + 1;
        *piVar9 = iStack_64;
      }
      else {
        piVar6 = piVar21;
        FUN_10986f884(piVar21,&iStack_64);
      }
      *(int **)(piVar21 + 2) = piVar6;
      puVar22 = *(uint **)(param_1 + 0x18);
      puVar5 = *(uint **)(puVar22 + 2);
      if (puVar5 < *(uint **)(puVar22 + 4)) {
        puVar7 = puVar5 + 1;
        *puVar5 = uVar12;
        puVar5 = puVar22;
      }
      else {
        puVar7 = puVar22;
        FUN_10986dcb4(puVar22,&uStack_68);
        puVar5 = *(uint **)(param_1 + 0x18);
      }
      *(uint **)(puVar22 + 2) = puVar7;
      uVar12 = puVar5[0xc];
      *(uint *)(*(long *)(puVar5 + 6) + (ulong)uVar15 * 4) = uVar12;
      puVar5[0xc] = uVar12 + 1;
    }
    puVar11 = *(ulong **)(param_1 + 0x60);
    puVar8 = *(ulong **)(param_1 + 0x68);
    if (puVar11 != puVar8) {
LAB_109870b04:
      puVar8 = (ulong *)((long)puVar8 + -4);
      uStack_6c = *(uint *)puVar8;
      uVar16 = (ulong)uStack_6c;
      if (uStack_6c != 0xffffffff) {
        uVar17 = 1L << (uVar16 / 3 & 0x3f);
        uVar18 = *(ulong *)(*(long *)(param_1 + 0x30) + (uVar16 / 0xc0) * 8);
        if ((uVar18 & uVar17) == 0) {
          *(ulong *)(*(long *)(param_1 + 0x30) + (uVar16 / 0xc0) * 8) = uVar18 | uVar17;
          plVar10 = *(long **)(param_1 + 8);
          uVar12 = *(uint *)(plVar10[7] + (ulong)uStack_6c * 4);
          do {
            uVar15 = (uint)uVar16;
            uVar17 = (ulong)uVar12;
            if (uVar12 == 0xffffffff) {
              return 0;
            }
            uVar18 = 1L << (uVar17 & 0x3f);
            uVar19 = *(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar12 >> 6) * 8);
            if ((uVar19 & uVar18) == 0) {
              iVar13 = *(int *)(plVar10[10] + uVar17 * 4);
              if (iVar13 == -1) {
LAB_109870bb8:
                bVar4 = true;
              }
              else {
                uVar2 = iVar13 - 2;
                if (0x55555555 < (uint)((iVar13 + 1) * -0x55555555)) {
                  uVar2 = iVar13 + 1;
                }
                if (((uVar2 == 0xffffffff) ||
                    ((*(ulong *)(*plVar10 + (ulong)(uVar2 >> 6) * 8) >> ((ulong)uVar2 & 0x3f) & 1)
                     != 0)) ||
                   (iVar13 = *(int *)(*(long *)(plVar10[0x10] + 0x18) + (ulong)uVar2 * 4),
                   iVar13 == -1)) goto LAB_109870bb8;
                iVar3 = iVar13 + -2;
                if (0x55555555 < (uint)((iVar13 + 1) * -0x55555555)) {
                  iVar3 = iVar13 + 1;
                }
                bVar4 = iVar3 == -1;
              }
              *(ulong *)(*(long *)(param_1 + 0x48) + (ulong)(uVar12 >> 6) * 8) = uVar19 | uVar18;
              iStack_64 = *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + (uVar16 / 3) * 0xc
                                  + (ulong)(uVar15 + (int)(uVar16 / 3) * -3) * 4);
              piVar21 = *(int **)(*(long *)(param_1 + 0x28) + 8);
              piVar9 = *(int **)(piVar21 + 2);
              uStack_68 = uVar15;
              if (piVar9 < *(int **)(piVar21 + 4)) {
                piVar6 = piVar9 + 1;
                *piVar9 = iStack_64;
              }
              else {
                piVar6 = piVar21;
                FUN_10986f884(piVar21,&iStack_64);
              }
              *(int **)(piVar21 + 2) = piVar6;
              puVar22 = *(uint **)(param_1 + 0x18);
              puVar5 = *(uint **)(puVar22 + 2);
              if (puVar5 < *(uint **)(puVar22 + 4)) {
                puVar7 = puVar5 + 1;
                *puVar5 = uVar15;
                puVar5 = puVar22;
              }
              else {
                puVar7 = puVar22;
                FUN_10986dcb4(puVar22,&uStack_68);
                puVar5 = *(uint **)(param_1 + 0x18);
              }
              *(uint **)(puVar22 + 2) = puVar7;
              uVar12 = puVar5[0xc];
              *(uint *)(*(long *)(puVar5 + 6) + uVar17 * 4) = uVar12;
              puVar5[0xc] = uVar12 + 1;
              plVar10 = *(long **)(param_1 + 8);
              uVar15 = uStack_6c;
              if (bVar4) goto LAB_109870c68;
              if (uStack_6c == 0xffffffff) {
LAB_109870ce0:
                uVar16 = 0xffffffff;
              }
              else {
                uVar12 = uStack_6c - 2;
                if (0x55555555 < (uStack_6c + 1) * -0x55555555) {
                  uVar12 = uStack_6c + 1;
                }
                uVar16 = (ulong)uVar12;
                if (uVar12 != 0xffffffff) {
                  if ((*(ulong *)(*plVar10 + (ulong)(uVar12 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0)
                  goto LAB_109870ce0;
                  uVar16 = (ulong)*(uint *)(*(long *)(plVar10[0x10] + 0x18) + uVar16 * 4);
                }
              }
              uStack_6c = (uint)uVar16;
              uVar19 = uVar16 / 3;
              lVar14 = *(long *)(param_1 + 0x30);
            }
            else {
LAB_109870c68:
              if (uVar15 == 0xffffffff) goto LAB_109870e44;
              uVar12 = uVar15 - 2;
              if (0x55555555 < (uVar15 + 1) * -0x55555555) {
                uVar12 = uVar15 + 1;
              }
              uVar16 = (ulong)uVar12;
              if (uVar12 != 0xffffffff) {
                if ((*(ulong *)(*plVar10 + (ulong)(uVar12 >> 6) * 8) >> (uVar16 & 0x3f) & 1) == 0) {
                  uVar16 = (ulong)*(uint *)(*(long *)(plVar10[0x10] + 0x18) + uVar16 * 4);
                }
                else {
                  uVar16 = 0xffffffff;
                }
              }
              iStack_64 = (int)uVar16;
              uVar17 = 0xffffffff;
              lVar14 = 2;
              if (0x55555555 < uVar15 * -0x55555555) {
                lVar14 = 0xffffffff;
              }
              uVar18 = lVar14 + (ulong)uVar15 & 0xffffffff;
              if (uVar18 != 0xffffffff) {
                if ((*(ulong *)(*plVar10 + (uVar18 >> 6) * 8) >> (lVar14 + (ulong)uVar15 & 0x3f) & 1
                    ) == 0) {
                  uVar17 = (ulong)*(uint *)(*(long *)(plVar10[0x10] + 0x18) + uVar18 * 4);
                }
                else {
                  uVar17 = 0xffffffff;
                }
              }
              uVar18 = uVar17 / 3;
              iVar13 = (int)uVar17;
              if (iStack_64 == -1) {
LAB_109870d80:
                if ((iVar13 == -1) ||
                   (lVar14 = *(long *)(param_1 + 0x30), uVar16 = uVar17, uVar19 = uVar18,
                   (*(ulong *)(lVar14 + (uVar17 / 0xc0) * 8) >> (uVar18 & 0x3f) & 1) != 0))
                goto LAB_109870e44;
              }
              else {
                uVar19 = uVar16 / 3;
                lVar14 = *(long *)(param_1 + 0x30);
                if ((*(ulong *)(lVar14 + (uVar16 / 0xc0) * 8) >> (uVar19 & 0x3f) & 1) != 0)
                goto LAB_109870d80;
                if ((iVar13 != -1) &&
                   ((*(ulong *)(lVar14 + (uVar17 / 0xc0) * 8) >> (uVar18 & 0x3f) & 1) == 0)) {
                  piVar9 = *(int **)(param_1 + 0x68);
                  piVar9[-1] = iVar13;
                  if (piVar9 < *(int **)(param_1 + 0x70)) {
                    puVar8 = (ulong *)(piVar9 + 1);
                    *piVar9 = iStack_64;
                  }
                  else {
                    puVar8 = puVar20;
                    FUN_10986dcb4(puVar20,&iStack_64);
                  }
                  goto LAB_109870e4c;
                }
              }
              uStack_6c = (uint)uVar16;
            }
            uVar17 = uVar19 >> 3 & 0xffffff8;
            *(ulong *)(lVar14 + uVar17) = 1L << (uVar19 & 0x3f) | *(ulong *)(lVar14 + uVar17);
            uVar12 = *(uint *)(plVar10[7] + uVar16 * 4);
          } while( true );
        }
      }
      *(ulong **)(param_1 + 0x68) = puVar8;
      goto LAB_109870b38;
    }
  }
  return 1;
LAB_109870e44:
  puVar8 = (ulong *)(*(long *)(param_1 + 0x68) + -4);
LAB_109870e4c:
  *(ulong **)(param_1 + 0x68) = puVar8;
  puVar11 = *(ulong **)(param_1 + 0x60);
LAB_109870b38:
  if (puVar11 == puVar8) {
    return 1;
  }
  goto LAB_109870b04;
}



/* Entry: 109870e88; end: 109870f33;  */

void FUN_109870e88(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 109870f34; end: 109870fcb;  */

long * FUN_109870f34(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar2 = (ulong)param_3;
    uVar3 = param_2 - 1;
    if ((param_2 & uVar3) == 0) {
      uVar4 = uVar3 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (param_2 <= uVar2) {
        uVar4 = 0;
        if (param_2 != 0) {
          uVar4 = uVar2 / param_2;
        }
        uVar4 = uVar2 - uVar4 * param_2;
      }
    }
    plVar5 = *(long **)(param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == uVar2) {
          if (*(int *)(plVar5 + 2) == param_3) {
            return plVar5;
          }
        }
        else {
          if ((param_2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (param_2 <= uVar6) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar1 * param_2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109870fcc; end: 109871377;  */

long * FUN_109870fcc(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar13 = (ulong)param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar13) {
          if (*(int *)(plVar7 + 2) == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x18;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  *(undefined4 *)(plVar7 + 2) = *param_3;
  *(undefined4 *)((long)plVar7 + 0x14) = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_10987111c:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109871364);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_10987111c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_1098712fc;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_1098712fc:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 109871378; end: 109871667;  */

void FUN_109871378(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uStack_5c;
  uint auStack_58 [4];
  uint uStack_48;
  uint uStack_44;
  
  plVar8 = *(long **)(param_1 + 0x40);
  if ((ushort)(*(ushort *)(param_1 + 0x48) >> 8 | *(ushort *)(param_1 + 0x48) << 8) < 0x202) {
    lVar10 = plVar8[2];
    lVar9 = lVar10 + 4;
    if (plVar8[1] < lVar9) {
      return;
    }
    uVar2 = *(uint *)(*plVar8 + lVar10);
    plVar8[2] = lVar9;
    if (plVar8[1] < lVar10 + 8) {
      return;
    }
    uStack_48 = *(uint *)(*plVar8 + lVar9);
    plVar8[2] = lVar10 + 8;
  }
  else {
    iVar7 = 1;
    FUN_109871bc8(1,&uStack_44);
    if (iVar7 == 0) {
      return;
    }
    iVar7 = 1;
    FUN_109871bc8(1,&uStack_48,*(undefined8 *)(param_1 + 0x40));
    uVar2 = uStack_44;
    if (iVar7 == 0) {
      return;
    }
  }
  uVar12 = uStack_48;
  if (uVar2 < 0x55555556) {
    plVar8 = *(long **)(param_1 + 0x40);
    lVar9 = plVar8[2];
    lVar10 = SUB168(SEXT816(plVar8[1] - lVar9) * SEXT816(0x5555555555555556),8);
    if (((ulong)uVar2 <= (ulong)(lVar10 - (lVar10 >> 0x3f))) && (lVar9 + 1 <= plVar8[1])) {
      cVar4 = *(char *)(*plVar8 + lVar9);
      plVar8[2] = lVar9 + 1;
      if (cVar4 == '\0') {
        lVar9 = param_1;
        FUN_109871668(param_1,(ulong)uVar2);
        uVar12 = uStack_48;
        if ((int)lVar9 == 0) {
          return;
        }
      }
      else if (uStack_48 < 0x100) {
        if (uVar2 != 0) {
          uVar13 = 0;
          do {
            lVar9 = 0;
            auStack_58[2] = 0;
            auStack_58[0] = 0;
            auStack_58[1] = 0;
            plVar8 = *(long **)(param_1 + 0x40);
            lVar10 = plVar8[1];
            lVar11 = plVar8[2];
            do {
              lVar1 = lVar11 + 1;
              if (lVar10 < lVar1) {
                return;
              }
              bVar5 = *(byte *)(*plVar8 + lVar11);
              plVar8[2] = lVar1;
              *(uint *)((long)auStack_58 + lVar9) = (uint)bVar5;
              lVar9 = lVar9 + 4;
              lVar11 = lVar1;
            } while (lVar9 != 0xc);
            FUN_10987189c(*(long *)(param_1 + 0x58) + 0xc0,auStack_58);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar2);
        }
      }
      else if (uStack_48 >> 0x10 == 0) {
        if (uVar2 != 0) {
          uVar13 = 0;
          do {
            lVar9 = 0;
            auStack_58[2] = 0;
            auStack_58[0] = 0;
            auStack_58[1] = 0;
            plVar8 = *(long **)(param_1 + 0x40);
            lVar10 = plVar8[1];
            lVar11 = plVar8[2];
            do {
              lVar1 = lVar11 + 2;
              if (lVar10 < lVar1) {
                return;
              }
              uVar6 = *(ushort *)(*plVar8 + lVar11);
              plVar8[2] = lVar1;
              *(uint *)((long)auStack_58 + lVar9) = (uint)uVar6;
              lVar9 = lVar9 + 4;
              lVar11 = lVar1;
            } while (lVar9 != 0xc);
            FUN_10987189c(*(long *)(param_1 + 0x58) + 0xc0,auStack_58);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar2);
        }
      }
      else if ((uStack_48 >> 0x15 == 0) &&
              (0x201 < (ushort)(*(ushort *)(param_1 + 0x48) >> 8 | *(ushort *)(param_1 + 0x48) << 8)
              )) {
        if (uVar2 != 0) {
          uVar13 = 0;
          do {
            lVar9 = 0;
            auStack_58[2] = 0;
            auStack_58[0] = 0;
            auStack_58[1] = 0;
            do {
              iVar7 = 1;
              FUN_109871bc8(1,&uStack_5c,*(undefined8 *)(param_1 + 0x40));
              if (iVar7 == 0) {
                return;
              }
              *(undefined4 *)((long)auStack_58 + lVar9) = uStack_5c;
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0xc);
            FUN_10987189c(*(long *)(param_1 + 0x58) + 0xc0,auStack_58);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar2);
        }
      }
      else if (uVar2 != 0) {
        uVar13 = 0;
        do {
          lVar9 = 0;
          auStack_58[2] = 0;
          auStack_58[0] = 0;
          auStack_58[1] = 0;
          plVar8 = *(long **)(param_1 + 0x40);
          lVar10 = plVar8[1];
          lVar11 = plVar8[2];
          do {
            lVar1 = lVar11 + lVar9 + 4;
            if (lVar10 < lVar1) {
              return;
            }
            uVar3 = *(undefined4 *)(*plVar8 + lVar11 + lVar9);
            plVar8[2] = lVar1;
            *(undefined4 *)((long)auStack_58 + lVar9) = uVar3;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0xc);
          FUN_10987189c(*(long *)(param_1 + 0x58) + 0xc0,auStack_58);
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar2);
      }
      *(uint *)(*(long *)(param_1 + 8) + 0xa0) = uVar12;
    }
  }
  return;
}



/* Entry: 109871668; end: 10987178f;  */

undefined8 FUN_109871668(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint auStack_68 [4];
  long lStack_58;
  long lStack_50;
  
  iVar6 = param_2 * 3;
  FUN_109265eec(&lStack_58,iVar6);
  FUN_10985ea30(iVar6,1,*(undefined8 *)(param_1 + 0x40),lStack_58);
  if (iVar6 == 0) {
LAB_109871740:
    uVar5 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar6 = 0;
      iVar8 = 0;
      uVar7 = 0;
      do {
        lVar3 = 0;
        auStack_68[2] = 0;
        auStack_68[0] = 0;
        auStack_68[1] = 0;
        lVar1 = (long)iVar8;
        do {
          uVar2 = *(uint *)(lStack_58 + lVar1 * 4 + lVar3);
          uVar4 = uVar2 >> 1;
          if ((uVar2 & 1) == 0) {
            if ((uVar7 ^ 0x7fffffff) < uVar4) goto LAB_109871740;
          }
          else {
            if ((int)uVar7 < (int)uVar4) goto LAB_109871740;
            uVar4 = -uVar4;
          }
          uVar7 = uVar4 + uVar7;
          *(uint *)((long)auStack_68 + lVar3) = uVar7;
          lVar3 = lVar3 + 4;
          iVar8 = iVar8 + 1;
        } while (lVar3 != 0xc);
        FUN_10987189c(*(long *)(param_1 + 0x58) + 0xc0,auStack_68);
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_2);
    }
    uVar5 = 1;
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return uVar5;
}



/* Entry: 109871790; end: 109871883;  */

long FUN_109871790(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plStack_38;
  
  plVar2 = (long *)0x80;
  __Znwm();
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0xa0);
  *puVar3 = &PTR_FUN_110b162b0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  plVar2[2] = 0;
  plVar2[1] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  plVar2[8] = 0;
  plVar2[7] = 0;
  *plVar2 = (long)&PTR_DAT_110b14db8;
  plVar2[10] = 0;
  plVar2[9] = 0;
  plVar2[0xc] = 0;
  plVar2[0xb] = 0;
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  plVar2[0xf] = (long)puVar3;
  plStack_38 = plVar2;
  FUN_109864dbc(param_1,param_2,&plStack_38);
  plVar2 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 109871884; end: 109871887;  */

undefined8 * FUN_109871884(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b162f8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  FUN_1098643ac(&puStack_28);
  return param_1;
}



/* Entry: 109871888; end: 10987189b;  */

void FUN_109871888(void)

{
  FUN_109864358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10987189c; end: 1098719af;  */

void FUN_10987189c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar4 = uVar5;
    lVar10 = (long)puVar4 + 0xc;
  }
  else {
    lVar10 = (long)puVar4 - *param_1;
    uVar7 = (lVar10 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar7) {
      FUN_10986e18c();
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    plVar3 = param_1;
    FUN_10986e1a0();
    puVar1 = (undefined8 *)((long)plVar3 + lVar10);
    uVar5 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar5;
    lVar10 = (long)puVar1 + 0xc;
    puVar4 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    lVar6 = (long)puVar4 - (long)puVar2;
    puVar1 = (undefined8 *)((long)puVar1 + lVar6);
    puVar9 = puVar1;
    if (lVar6 != 0) {
      do {
        uVar5 = *puVar4;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar4 + 1);
        *puVar9 = uVar5;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      } while (puVar4 != puVar2);
      puVar4 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = lVar10;
    param_1[2] = (long)plVar3 + uVar8 * 0xc;
    if (puVar4 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 1098719b0; end: 1098719cf;  */

void FUN_1098719b0(void)

{
  return;
}



/* Entry: 1098719d0; end: 109871a43;  */

long * FUN_1098719d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar10 = (ulong)uVar3;
  if (-1 < (int)uVar3) {
    plVar4 = *(long **)(param_1 + 8);
    FUN_109871a44();
    uVar11 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar11) {
      uVar9 = 0;
      lVar12 = **(long **)(param_1 + 8);
      lVar1 = (*(long **)(param_1 + 8))[1];
      do {
        if (lVar1 - lVar12 >> 2 == uVar9) {
          FUN_109871bb4();
          uVar9 = plVar4[1] - *plVar4 >> 2;
          if (uVar10 <= uVar9) {
            if (uVar10 < uVar9) {
              plVar4[1] = *plVar4 + uVar10 * 4;
            }
            return plVar4;
          }
          puVar7 = (uint *)(uVar10 - uVar9);
          plVar6 = (long *)plVar4[1];
          if (puVar7 <= (uint *)(plVar4[2] - (long)plVar6 >> 2)) {
            plVar5 = plVar4;
            if (puVar7 != (uint *)0x0) {
              plVar5 = plVar6;
              _bzero(plVar6,(long)puVar7 * 4);
              plVar6 = (long *)((long)plVar6 + (long)puVar7 * 4);
            }
            plVar4[1] = (long)plVar6;
            return plVar5;
          }
          lVar12 = (long)plVar6 - *plVar4;
          uVar10 = (long)puVar7 + (lVar12 >> 2);
          if (uVar10 >> 0x3e == 0) {
            uVar8 = plVar4[2] - *plVar4;
            uVar9 = (long)uVar8 >> 1;
            if (uVar9 <= uVar10) {
              uVar9 = uVar10;
            }
            if (0x7ffffffffffffffb < uVar8) {
              uVar9 = 0x3fffffffffffffff;
            }
            plStack_58 = plVar4;
            if (uVar9 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = plVar4;
              FUN_10986f0a4();
            }
            lVar12 = (long)plVar6 + lVar12;
            lStack_60 = (long)plVar6 + uVar9 * 4;
            plStack_78 = plVar6;
            lStack_70 = lVar12;
            _bzero(lVar12,(long)puVar7 * 4);
            lStack_68 = lVar12 + (long)puVar7 * 4;
            FUN_10986f038(plVar4,&plStack_78);
            if (lStack_68 != lStack_70) {
              lStack_68 = lStack_68 + ((lStack_70 - lStack_68) + 3U & 0xfffffffffffffffc);
            }
            if (plStack_78 == (long *)0x0) {
              return (long *)0x0;
            }
            __ZdlPv();
            return plStack_78;
          }
          FUN_10986f024();
          if (lStack_68 != lStack_70) {
            lStack_68 = lStack_68 + ((lStack_70 - lStack_68) + 3U & 0xfffffffffffffffc);
          }
          if (plStack_78 != (long *)0x0) {
            __ZdlPv();
          }
          __Unwind_Resume(plVar4);
          uVar3 = 0xf62a4d8;
          FUN_109262df8();
          if (uVar3 < 6) {
            lVar12 = param_3[2] + 1;
            if (param_3[1] < lVar12) {
              return (long *)0x0;
            }
            bVar2 = *(byte *)(*param_3 + param_3[2]);
            uVar11 = (uint)bVar2;
            param_3[2] = lVar12;
            if ((char)bVar2 < '\0') {
              plVar4 = (long *)(ulong)(uVar3 + 1);
              FUN_109871bc8(plVar4,puVar7);
              if ((int)plVar4 == 0) {
                return plVar4;
              }
              uVar11 = uVar11 & 0x7f | *puVar7 << 7;
            }
            *puVar7 = uVar11;
            return (long *)0x1;
          }
          return (long *)0x0;
        }
        *(int *)(lVar12 + uVar9 * 4) = (int)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
    }
  }
  return (long *)(ulong)(~uVar3 >> 0x1f);
}



/* Entry: 109871a44; end: 109871a73;  */

long * FUN_109871a44(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar7 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return param_1;
  }
  puVar5 = (uint *)(param_2 - uVar7);
  plVar4 = (long *)param_1[1];
  if (puVar5 <= (uint *)(param_1[2] - (long)plVar4 >> 2)) {
    plVar3 = param_1;
    if (puVar5 != (uint *)0x0) {
      plVar3 = plVar4;
      _bzero(plVar4,(long)puVar5 * 4);
      plVar4 = (long *)((long)plVar4 + (long)puVar5 * 4);
    }
    param_1[1] = (long)plVar4;
    return plVar3;
  }
  lVar10 = (long)plVar4 - *param_1;
  uVar7 = (long)puVar5 + (lVar10 >> 2);
  if (uVar7 >> 0x3e == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 1;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar8 = 0x3fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10986f0a4();
    }
    lVar10 = (long)plVar4 + lVar10;
    lStack_40 = (long)plVar4 + uVar8 * 4;
    plStack_58 = plVar4;
    lStack_50 = lVar10;
    _bzero(lVar10,(long)puVar5 * 4);
    lStack_48 = lVar10 + (long)puVar5 * 4;
    FUN_10986f038(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_58 == (long *)0x0) {
      return (long *)0x0;
    }
    __ZdlPv();
    return plStack_58;
  }
  FUN_10986f024();
  if (lStack_48 != lStack_50) {
    lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 3U & 0xfffffffffffffffc);
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  uVar2 = 0xf62a4d8;
  FUN_109262df8();
  if (uVar2 < 6) {
    lVar10 = param_3[2] + 1;
    if (param_3[1] < lVar10) {
      return (long *)0x0;
    }
    bVar1 = *(byte *)(*param_3 + param_3[2]);
    uVar9 = (uint)bVar1;
    param_3[2] = lVar10;
    if ((char)bVar1 < '\0') {
      plVar4 = (long *)(ulong)(uVar2 + 1);
      FUN_109871bc8(plVar4,puVar5);
      if ((int)plVar4 == 0) {
        return plVar4;
      }
      uVar9 = uVar9 & 0x7f | *puVar5 << 7;
    }
    *puVar5 = uVar9;
    return (long *)0x1;
  }
  return (long *)0x0;
}



/* Entry: 109871a74; end: 109871bb3;  */

long * FUN_109871a74(long *param_1,uint *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = (long *)param_1[1];
  if (param_2 <= (uint *)(param_1[2] - (long)plVar5 >> 2)) {
    plVar4 = param_1;
    if (param_2 != (uint *)0x0) {
      plVar4 = plVar5;
      _bzero(plVar5,(long)param_2 << 2);
      plVar5 = (long *)((long)plVar5 + (long)param_2 * 4);
    }
    param_1[1] = (long)plVar5;
    return plVar4;
  }
  lVar9 = (long)plVar5 - *param_1;
  uVar1 = (long)param_2 + (lVar9 >> 2);
  if (uVar1 >> 0x3e != 0) {
    FUN_10986f024();
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    __Unwind_Resume(param_1);
    uVar3 = 0xf62a4d8;
    FUN_109262df8();
    if (uVar3 < 6) {
      lVar9 = param_3[2] + 1;
      if (param_3[1] < lVar9) {
        return (long *)0x0;
      }
      bVar2 = *(byte *)(*param_3 + param_3[2]);
      uVar8 = (uint)bVar2;
      param_3[2] = lVar9;
      if ((char)bVar2 < '\0') {
        plVar5 = (long *)(ulong)(uVar3 + 1);
        FUN_109871bc8(plVar5,param_2);
        if ((int)plVar5 == 0) {
          return plVar5;
        }
        uVar8 = uVar8 & 0x7f | *param_2 << 7;
      }
      *param_2 = uVar8;
      return (long *)0x1;
    }
    return (long *)0x0;
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 1;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar7 = 0x3fffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = param_1;
    FUN_10986f0a4();
  }
  lVar9 = (long)plVar5 + lVar9;
  lStack_40 = (long)plVar5 + uVar7 * 4;
  plStack_58 = plVar5;
  lStack_50 = lVar9;
  _bzero(lVar9,(long)param_2 << 2);
  lStack_48 = lVar9 + (long)param_2 * 4;
  FUN_10986f038(param_1,&plStack_58);
  if (lStack_48 != lStack_50) {
    lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 3U & 0xfffffffffffffffc);
  }
  if (plStack_58 == (long *)0x0) {
    return (long *)0x0;
  }
  __ZdlPv();
  return plStack_58;
}



/* Entry: 109871bb4; end: 109871bc7;  */

ulong FUN_109871bb4(undefined8 param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = 0xf62a4d8;
  FUN_109262df8();
  if (5 < uVar3) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar5 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar4 = (ulong)(uVar3 + 1);
      FUN_109871bc8(uVar4,param_2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar5 = uVar5 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar5;
    return 1;
  }
  return 0;
}



/* Entry: 109871bc8; end: 109871c37;  */

ulong FUN_109871bc8(uint param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (5 < param_1) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar4 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar3 = (ulong)(param_1 + 1);
      FUN_109871bc8(uVar3,param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = uVar4 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar4;
    return 1;
  }
  return 0;
}



/* Entry: 109871c38; end: 109871e1f;  */

undefined8 * FUN_109871c38(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x16,param_2,&uStack_48);
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x19,param_2,&uStack_48);
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  uVar1 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x1c,uVar1,&uStack_48);
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    lStack_40 = CONCAT44(uStack_44,uStack_48);
    __ZdlPv();
  }
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  FUN_10984a630(param_1 + 0x1f,uVar1,&uStack_48);
  lStack_40 = CONCAT44(uStack_44,uStack_48);
  if (lStack_40 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109871e20; end: 109871fef;  */

undefined8 * FUN_109871e20(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x14,param_2,&uStack_48);
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x17,param_2,&uStack_48);
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  uVar1 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x1a,uVar1,&uStack_48);
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    lStack_40 = CONCAT44(uStack_44,uStack_48);
    __ZdlPv();
  }
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  FUN_10984a630(param_1 + 0x1d,uVar1,&uStack_48);
  lStack_40 = CONCAT44(uStack_44,uStack_48);
  if (lStack_40 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109871ff0; end: 1098721eb;  */

undefined8 * FUN_109871ff0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  lVar3 = 0x10;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x310);
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x74,param_2,&uStack_58);
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x77,param_2,&uStack_58);
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  uVar2 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x7a,uVar2,&uStack_58);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    lStack_50 = CONCAT44(uStack_54,uStack_58);
    __ZdlPv();
  }
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  FUN_10984a630(param_1 + 0x7d,uVar2,&uStack_58);
  lStack_50 = CONCAT44(uStack_54,uStack_58);
  if (lStack_50 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098721ec; end: 1098723e7;  */

undefined8 * FUN_1098721ec(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  lVar3 = 0x10;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x310);
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x74,param_2,&uStack_58);
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x77,param_2,&uStack_58);
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  uVar2 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x7a,uVar2,&uStack_58);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    lStack_50 = CONCAT44(uStack_54,uStack_58);
    __ZdlPv();
  }
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  FUN_10984a630(param_1 + 0x7d,uVar2,&uStack_58);
  lStack_50 = CONCAT44(uStack_54,uStack_58);
  if (lStack_50 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098723e8; end: 109872463;  */

ulong FUN_1098723e8(long param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uStack_14;
  
  uStack_14 = 0;
  if (param_2 < 0x40) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar2 = 0;
    }
    else {
      uVar3 = 1;
      uVar1 = 0;
      do {
        uVar2 = uVar3 & 0xffffffff;
        if (*(uint *)(*param_3 + uVar1 * 4) <= *(uint *)(*param_3 + uVar3 * 4)) {
          uVar2 = uVar1;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar2;
      } while (*(uint *)(param_1 + 0xc) != uVar3);
    }
  }
  else {
    FUN_109849b44(param_1 + 0x350,4,&uStack_14);
    uVar2 = (ulong)uStack_14;
  }
  return uVar2;
}



/* Entry: 109872464; end: 109872773;  */

bool FUN_109872464(uint *param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_438 [1024];
  long *plStack_38;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar2 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar2;
    lVar4 = param_2[2];
    lVar1 = lVar4 + 4;
    param_2[2] = lVar1;
    if ((uVar2 < 0x20) && (lVar4 + 8 <= param_2[1])) {
      param_1[1] = *(uint *)(*param_2 + lVar1);
      lVar4 = param_2[2];
      lVar1 = lVar4 + 4;
      param_2[2] = lVar1;
      if (lVar4 + 8 <= param_2[1]) {
        uVar2 = *(uint *)(*param_2 + lVar1);
        param_1[3] = uVar2;
        lVar4 = param_2[2];
        lVar1 = lVar4 + 4;
        param_2[2] = lVar1;
        if (((param_1[5] == 0) || (uVar2 == param_1[5])) && (lVar4 + 8 <= param_2[1])) {
          uVar3 = *(uint *)(*param_2 + lVar1);
          param_1[4] = uVar3;
          param_2[2] = param_2[2] + 4;
          if (uVar3 < 7) {
            if (uVar2 != 0) {
              plStack_38 = param_3;
              FUN_109872774(param_3);
              uVar2 = param_1[4];
              if ((int)uVar2 < 3) {
                if (uVar2 == 0) {
                  FUN_109871c38(auStack_438,3);
                  FUN_1098728d8(auStack_438,param_2,&plStack_38);
                  func_0x00010984803c(auStack_438);
                }
                else if (uVar2 == 1) {
                  FUN_109850420(auStack_438,3);
                  func_0x000109872f40(auStack_438,param_2,&plStack_38);
                  func_0x000109848104(auStack_438);
                }
                else {
                  if (uVar2 != 2) {
                    return false;
                  }
                  FUN_109871e20(auStack_438,3);
                  FUN_10987348c(auStack_438,param_2,&plStack_38);
                  func_0x0001098481cc(auStack_438);
                }
              }
              else if ((int)uVar2 < 5) {
                if (uVar2 == 3) {
                  FUN_109850608(auStack_438,3);
                  FUN_1098739e0(auStack_438,param_2,&plStack_38);
                  func_0x00010984827c(auStack_438);
                }
                else {
                  if (uVar2 != 4) {
                    return false;
                  }
                  FUN_109871ff0(auStack_438,3);
                  FUN_109873f34(auStack_438,param_2,&plStack_38);
                  FUN_109848fbc(auStack_438);
                }
              }
              else if (uVar2 == 5) {
                FUN_1098507d8(auStack_438,3);
                FUN_109874494(auStack_438,param_2,&plStack_38);
                func_0x00010984906c(auStack_438);
              }
              else {
                if (uVar2 != 6) {
                  return false;
                }
                FUN_1098721ec(auStack_438,3);
                FUN_1098749f4(auStack_438,param_2,&plStack_38);
                func_0x00010984911c(auStack_438);
              }
            }
            return (param_3[1] - *param_3 >> 2) * -0x5555555555555555 - (ulong)param_1[3] == 0;
          }
          _printf(&UNK_10f581cfd);
        }
      }
    }
  }
  return false;
}



/* Entry: 109872774; end: 1098727fb;  */

void FUN_109872774(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 2) * -0x5555555555555555) < param_2) {
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_28 = param_1;
    FUN_109872894();
    lStack_40 = param_2 + (lVar3 - lVar2);
    lStack_30 = param_2 + uVar1 * 0xc;
    uStack_48 = param_2;
    lStack_38 = lStack_40;
    FUN_109872810(param_1,&uStack_48);
    if (uStack_48 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1098727fc; end: 10987280f;  */

void FUN_1098727fc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = *plVar5;
  lVar4 = plVar5[1];
  lVar2 = param_2[1] + (lVar3 - lVar4);
  lVar1 = lVar2;
  for (lVar6 = lVar3; lVar4 != lVar6; lVar6 = lVar6 + 0xc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar7) = *(undefined4 *)(lVar6 + lVar7);
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xc);
    lVar1 = lVar1 + 0xc;
  }
  param_2[1] = lVar2;
  lVar6 = *plVar5;
  *plVar5 = lVar2;
  plVar5[1] = lVar3;
  param_2[1] = lVar6;
  lVar6 = plVar5[1];
  plVar5[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar5[2];
  plVar5[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 109872810; end: 109872893;  */

void FUN_109872810(long *param_1,undefined8 *param_2)

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


