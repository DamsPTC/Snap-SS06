/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108772c14; end: 108772c33;  */

void FUN_108772c14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108771e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108772c34; end: 108772c37;  */

void FUN_108772c34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108772c38; end: 108772cd7;  */

undefined8 * FUN_108772c38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6cfd8;
  func_0x000107c279dc(param_1 + 0x2c);
  func_0x0001086ff014(param_1 + 0x27);
  func_0x000107c279dc(param_1 + 0x23);
  FUN_1088eb028(param_1 + 0x1a);
  *param_1 = &PTR_FUN_110a6ba48;
  func_0x000100565838(param_1 + 0x17);
  func_0x00010054fa34(param_1 + 0x15);
  func_0x000100563508(param_1 + 0x13);
  func_0x0001004b55ac(param_1 + 0x11);
  func_0x000100568bec(param_1 + 0xf);
  func_0x0001005620dc(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108772cd8; end: 108772db3;  */

void FUN_108772cd8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108772db4; end: 10877305b;  */

void FUN_108772db4(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  undefined8 *puVar11;
  long lVar12;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  *puVar6 = FUN_10877648c;
  puVar6[1] = FUN_108776610;
  puVar6[8] = param_1;
  func_0x000107c27f94(puVar6 + 2);
  func_0x000108776780();
  plVar7 = (long *)(param_1 + 8);
  FUN_108659ed0(puVar6 + 7);
  func_0x0001087769d8(puVar6[7]);
  do {
    func_0x0001087766bc();
  } while (extraout_w10 != 0);
  func_0x0001087767c0(puVar6[4]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xb) = 0;
    lVar14 = puVar6[4];
    func_0x00010877690c();
    lVar16 = *plVar7;
    if (lVar16 == 0) {
      func_0x000107c3a5c0();
      lVar16 = *plVar7;
    }
    func_0x000108776a1c();
    plVar15 = extraout_x8;
    do {
      if (*plVar15 == 0) {
        func_0x000108776700();
        plVar15 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar13 = extraout_w11_00;
      }
      else {
        func_0x000108776818();
        plVar15 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar13 = extraout_w11;
      }
      if ((uVar13 & 1) != 0) {
        func_0x000108776754();
        if ((bool)in_ZR) {
          func_0x0001087766f0();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x00010877668c();
          *(undefined1 *)plVar7 = uVar4;
          func_0x0001087766dc(0);
          *(long **)(lVar14 + 0x90) = plVar7;
        }
        func_0x000108776744();
        *(long *)(extraout_x8_03 + 0x20) = lVar16;
LAB_108772fe4:
        func_0x00010877672c(*(undefined8 *)(lVar14 + 0x90));
        *(undefined8 *)(lVar14 + 0x10) = 0;
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  func_0x000108776854();
  func_0x000108776764();
  func_0x00010877679c();
  func_0x00010877690c();
  do {
    if (*(long *)(puVar6[8] + 0xd8) == 0) {
      func_0x0001087767b8();
      func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    plVar8 = puVar6 + 4;
    FUN_10877305c();
    plVar15 = (long *)(puVar6[8] + 0xd0);
    while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
      plVar8 = puVar6 + 4;
      func_0x000108774e14(plVar8,plVar15 + 8);
    }
    puVar10 = (undefined8 *)puVar6[4];
    puVar11 = (undefined8 *)puVar6[5];
    puVar6[9] = puVar11;
    while (puVar6[10] = puVar10, puVar10 != puVar11) {
      puVar6[7] = *puVar10;
      do {
        func_0x0001087766bc();
      } while (extraout_w10_02 != 0);
      func_0x0001087767c0(puVar6[7]);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0xb) = 1;
        lVar14 = puVar6[7];
        lVar16 = *plVar7;
        if (lVar16 == 0) {
          func_0x000107c3a5c0();
          lVar16 = *plVar8;
        }
        plVar15 = (long *)(lVar14 + 0x10);
        do {
          lVar12 = *plVar15;
          if (lVar12 == 0) {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar5 = cVar2 == '\0';
            if (bVar5) {
              uVar4 = 1;
              func_0x000108776754();
              if (bVar5) {
                func_0x0001087766f0();
                iVar1 = extraout_w8_02;
                if ((bool)uVar4) {
                  iVar1 = extraout_w9_00;
                }
                func_0x00010877680c();
                puVar9 = (undefined1 *)(ulong)(uint)(extraout_w9_01 + iVar1 * extraout_w8_03);
                _malloc();
                *puVar9 = (char)iVar1;
                func_0x0001087766dc(0);
                *(undefined1 **)(lVar14 + 0x90) = puVar9;
              }
              func_0x000108776744();
              *(long *)(extraout_x8_02 + 0x20) = lVar16;
              goto LAB_108772fe4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
      }
      plVar8 = puVar6 + 7;
      func_0x000107c28834();
      func_0x00010877679c();
      puVar11 = (undefined8 *)puVar6[9];
      puVar10 = (undefined8 *)(puVar6[10] + 8);
    }
    func_0x00010877685c();
  } while( true );
}



/* Entry: 10877305c; end: 1087730cb;  */

void FUN_10877305c(long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long *plVar1;
  long lVar2;
  long *plStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [64];
  
  plVar1 = param_1 + 2;
  if ((ulong)(*plVar1 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_1086e3164();
      func_0x0001087768a4();
      func_0x0001087767fc();
      plStack_170 = plVar1;
      func_0x000107c27994(auStack_168);
      lVar2 = plVar1[3];
      uStack_150 = param_3;
      uStack_148 = param_4;
      uStack_144 = param_5;
      uStack_140 = param_6;
      uStack_13f = param_7;
      uStack_13e = param_8;
      FUN_108775584(auStack_130,&plStack_170);
      func_0x000107c288a8(auStack_f8,plVar1 + 1);
      FUN_108775688(auStack_f0,auStack_130);
      FUN_1087755e8(auStack_138,auStack_f0,lVar2);
      func_0x0001087755bc(auStack_f0);
      func_0x0001087755bc(auStack_130);
      func_0x000107c27914(auStack_168);
      func_0x000107c27f9c(auStack_138);
      return;
    }
    FUN_1086e3178();
    func_0x000108776920();
    func_0x0001087768a4();
  }
  return;
}



/* Entry: 1087730cc; end: 1087731db;  */

void FUN_1087730cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  long lStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [64];
  
  lStack_120 = param_1;
  func_0x000107c27994(auStack_118);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = param_3;
  uStack_f8 = param_4;
  uStack_f4 = param_5;
  uStack_f0 = param_6;
  uStack_ef = param_7;
  uStack_ee = param_8;
  FUN_108775584(auStack_e0,&lStack_120);
  func_0x000107c288a8(auStack_a8,param_1 + 8);
  FUN_108775688(auStack_a0,auStack_e0);
  FUN_1087755e8(auStack_e8,auStack_a0,uVar1);
  func_0x0001087755bc(auStack_a0);
  func_0x0001087755bc(auStack_e0);
  func_0x000107c27914(auStack_118);
  func_0x000107c27f9c(auStack_e8);
  return;
}



/* Entry: 1087731dc; end: 108773777;  */

void FUN_1087731dc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int extraout_w10;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined1 auStack_160 [48];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  char cStack_c0;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c27994(auStack_a0);
  puVar2 = (undefined8 *)0x28;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_7c = param_6;
  uStack_78 = param_7;
  uStack_77 = param_8;
  uStack_76 = param_9;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a6d300;
  plVar10 = puVar2 + 3;
  *plVar10 = 0;
  plStack_130 = (long *)0x0;
  func_0x000107c27f9c(&plStack_130);
  puVar11 = puVar2 + 4;
  *puVar11 = 0;
  plStack_130 = (long *)0x0;
  func_0x000107c27f98(&plStack_130);
  FUN_108752334(&plStack_130);
  uStack_e8 = plStack_128;
  plStack_f0 = plStack_130;
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  func_0x000107c27f98(&uStack_70);
  func_0x00010877693c();
  func_0x000107c27fec(&plStack_130);
  func_0x000107c288b0(plVar10,&plStack_f0);
  func_0x000107c2887c(puVar11,(ulong)&plStack_f0 | 8);
  func_0x000107c27f98((ulong)&plStack_f0 | 8);
  func_0x000107c27f9c(&plStack_f0);
  lVar4 = *plVar10;
  *param_1 = lVar4;
  plStack_b0 = plVar10;
  puStack_a8 = puVar2;
  if (lVar4 != 0) {
    do {
      func_0x0001087766bc();
    } while (extraout_w10 != 0);
  }
  FUN_1086f321c(&plStack_130,auStack_a0);
  puStack_f8 = puStack_a8;
  plStack_100 = plStack_b0;
  plStack_b0 = (long *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  FUN_1086f2f44(&plStack_f0,param_2 + 0xa8,&plStack_130);
  FUN_1086f34d8(&plStack_130);
  if (cStack_c0 != '\x01') goto LAB_1087736c4;
  FUN_1086f321c(auStack_160,&plStack_f0);
  FUN_108773778(&uStack_68,param_2,auStack_160);
  func_0x000108776998();
  func_0x0001087767c0(uStack_68);
  if ((extraout_w8 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)(param_2 + 0xd8);
    FUN_1086f3194(puVar2,&plStack_f0);
    puVar13 = *(undefined8 **)(param_2 + 200);
    if (puVar13 != (undefined8 *)0x0) {
      uVar12 = (long)puVar13 - 1;
      if (((ulong)puVar13 & uVar12) == 0) {
        puVar11 = (undefined8 *)(uVar12 & (ulong)puVar2);
      }
      else {
        puVar11 = puVar2;
        if (puVar13 <= puVar2) {
          uVar6 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            uVar6 = (ulong)puVar2 / (ulong)puVar13;
          }
          puVar11 = (undefined8 *)((long)puVar2 - uVar6 * (long)puVar13);
        }
      }
      plVar10 = *(long **)(*(long *)(param_2 + 0xc0) + (long)puVar11 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_1087733f8;
            puVar5 = (undefined8 *)plVar10[1];
            if (puVar5 != puVar2) break;
            plVar3 = plVar10 + 2;
            FUN_1086f39c0(plVar3,&plStack_f0);
            if (((ulong)plVar3 & 1) != 0) goto LAB_1087736b4;
          }
          if (((ulong)puVar13 & uVar12) == 0) {
            puVar5 = (undefined8 *)((ulong)puVar5 & uVar12);
          }
          else if (puVar13 <= puVar5) {
            uVar6 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar6 = (ulong)puVar5 / (ulong)puVar13;
            }
            puVar5 = (undefined8 *)((long)puVar5 - uVar6 * (long)puVar13);
          }
        } while (puVar5 == puVar11);
      }
    }
LAB_1087733f8:
    plVar10 = (long *)0x48;
    __Znwm();
    plVar3 = (long *)(param_2 + 0xd0);
    uStack_120 = 0;
    *plVar10 = 0;
    plVar10[1] = (long)puVar2;
    plStack_130 = plVar10;
    plStack_128 = plVar3;
    FUN_1086f321c(plVar10 + 2,&plStack_f0);
    func_0x000107c289d0(plVar10 + 8);
    uStack_120 = CONCAT71(uStack_120._1_7_,1);
    fVar14 = (float)(*(long *)(param_2 + 0xd8) + 1);
    if ((puVar13 == (undefined8 *)0x0) || (*(float *)(param_2 + 0xe0) * (float)puVar13 < fVar14)) {
      uVar12 = 1;
      if ((undefined8 *)0x2 < puVar13) {
        uVar12 = (ulong)(((ulong)puVar13 & (long)puVar13 - 1U) != 0);
      }
      puVar11 = (undefined8 *)(uVar12 | (long)puVar13 << 1);
      puVar13 = (undefined8 *)(long)(fVar14 / *(float *)(param_2 + 0xe0));
      if (puVar11 <= puVar13) {
        puVar11 = puVar13;
      }
      if ((long)puVar11 - 1U == 0) {
        puVar11 = (undefined8 *)0x2;
      }
      else if (((ulong)puVar11 & (long)puVar11 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar13 = *(undefined8 **)(param_2 + 200);
      if (puVar13 < puVar11) {
LAB_1087734b0:
        if ((ulong)puVar11 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x108773704);
          (*pcVar1)();
        }
        lVar4 = (long)puVar11 << 3;
        __Znwm(lVar4);
        func_0x000108775974(param_2 + 0xc0,lVar4);
        *(undefined8 **)(param_2 + 200) = puVar11;
        lVar4 = *(long *)(param_2 + 0xc0);
        for (puVar13 = (undefined8 *)0x0; puVar11 != puVar13;
            puVar13 = (undefined8 *)((long)puVar13 + 1)) {
          *(undefined8 *)(lVar4 + (long)puVar13 * 8) = 0;
        }
        plVar7 = (long *)*plVar3;
        puVar13 = puVar11;
        if (plVar7 != (long *)0x0) {
          puVar5 = (undefined8 *)plVar7[1];
          uVar6 = (long)puVar11 - 1;
          uVar12 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar12 = (ulong)puVar5 / (ulong)puVar11;
          }
          puVar9 = puVar5;
          if (puVar11 <= puVar5) {
            puVar9 = (undefined8 *)((long)puVar5 - uVar12 * (long)puVar11);
          }
          if (((ulong)puVar11 & uVar6) == 0) {
            puVar9 = (undefined8 *)((ulong)puVar5 & uVar6);
          }
          *(long **)(lVar4 + (long)puVar9 * 8) = plVar3;
          while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
            puVar5 = (undefined8 *)plVar7[1];
            if (((ulong)puVar11 & uVar6) == 0) {
              puVar5 = (undefined8 *)((ulong)puVar5 & uVar6);
            }
            else if (puVar11 <= puVar5) {
              uVar12 = 0;
              if (puVar11 != (undefined8 *)0x0) {
                uVar12 = (ulong)puVar5 / (ulong)puVar11;
              }
              puVar5 = (undefined8 *)((long)puVar5 - uVar12 * (long)puVar11);
            }
            if (puVar5 != puVar9) {
              if (*(long *)(lVar4 + (long)puVar5 * 8) == 0) {
                *(long **)(lVar4 + (long)puVar5 * 8) = plVar8;
                puVar9 = puVar5;
              }
              else {
                *plVar8 = *plVar7;
                *plVar7 = **(undefined8 **)(lVar4 + (long)puVar5 * 8);
                **(long **)(lVar4 + (long)puVar5 * 8) = (long)plVar7;
                plVar7 = plVar8;
              }
            }
          }
        }
      }
      else if (puVar11 < puVar13) {
        puVar5 = (undefined8 *)
                 (long)((float)*(ulong *)(param_2 + 0xd8) / *(float *)(param_2 + 0xe0));
        if ((puVar13 < (undefined8 *)0x3) || (((ulong)puVar13 & (long)puVar13 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 *)0x1 < puVar5) {
          puVar5 = (undefined8 *)(1L << (-LZCOUNT((long)puVar5 + -1) & 0x3fU));
        }
        if (puVar11 <= puVar5) {
          puVar11 = puVar5;
        }
        if (puVar11 < puVar13) {
          if (puVar11 != (undefined8 *)0x0) goto LAB_1087734b0;
          func_0x000108775974(param_2 + 0xc0,0);
          *(undefined8 *)(param_2 + 200) = 0;
          puVar13 = (undefined8 *)0x0;
        }
        else {
          puVar13 = *(undefined8 **)(param_2 + 200);
        }
      }
      if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
        puVar11 = (undefined8 *)((long)puVar13 - 1U & (ulong)puVar2);
      }
      else {
        puVar11 = puVar2;
        if (puVar13 <= puVar2) {
          uVar12 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            uVar12 = (ulong)puVar2 / (ulong)puVar13;
          }
          puVar11 = (undefined8 *)((long)puVar2 - uVar12 * (long)puVar13);
        }
      }
    }
    lVar4 = *(long *)(param_2 + 0xc0);
    plVar7 = *(long **)(lVar4 + (long)puVar11 * 8);
    if (plVar7 == (long *)0x0) {
      *plVar10 = *plVar3;
      *plVar3 = (long)plVar10;
      *(long **)(lVar4 + (long)puVar11 * 8) = plVar3;
      if (*plVar10 != 0) {
        puVar11 = *(undefined8 **)(*plVar10 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar11) {
          uVar12 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            uVar12 = (ulong)puVar11 / (ulong)puVar13;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar12 * (long)puVar13);
        }
        *(long **)(lVar4 + (long)puVar11 * 8) = plVar10;
      }
    }
    else {
      *plVar10 = *plVar7;
      *plVar7 = (long)plVar10;
    }
    plStack_130 = (long *)0x0;
    *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0xd8) + 1;
    FUN_10877598c(&plStack_130);
LAB_1087736b4:
    func_0x000107c288b0(plVar10 + 8,&uStack_68);
  }
  func_0x00010877693c();
LAB_1087736c4:
  FUN_108774f70(&plStack_f0);
  func_0x0001086f3500(&plStack_b0);
  func_0x000107c27914(auStack_a0);
  return;
}



/* Entry: 108773778; end: 108774287;  */

void FUN_108773778(undefined8 param_1,long param_2,ulong *param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  code *extraout_x8;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *plVar19;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  ulong *puVar20;
  long extraout_x8_12;
  long lVar21;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  int extraout_w9_01;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  long *plVar22;
  ulong extraout_x13;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  long *plVar27;
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  ulong *puVar31;
  ulong uVar32;
  ulong uStack_e0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = (undefined8 *)0x2f8;
  __Znwm();
  *puVar14 = FUN_108775e04;
  puVar14[1] = FUN_108776404;
  puVar14[0x5b] = param_2;
  puVar25 = puVar14 + 0x4d;
  puVar2 = (uint *)(puVar14 + 0x3f);
  uVar29 = *param_3;
  puVar3 = puVar14 + 0x55;
  puVar14[0x4e] = param_3[1];
  *puVar25 = uVar29;
  puVar14[0x4f] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar29 = param_3[3];
  puVar14[0x51] = param_3[4];
  puVar14[0x50] = uVar29;
  *(undefined4 *)((long)puVar14 + 0x28f) = *(undefined4 *)((long)param_3 + 0x27);
  func_0x000107c27f94(puVar14 + 2);
  func_0x000107c287c4(param_1,puVar14 + 2);
  iVar13 = *(int *)(puVar14 + 0x51);
  *(int *)(puVar14 + 0x5d) = iVar13;
  iVar6 = *(int *)((long)puVar14 + 0x28c);
  *(int *)((long)puVar14 + 0x2ec) = iVar6;
  bVar1 = (0 < iVar13 && iVar6 != 0) && (iVar13 < 1 || -1 < iVar6);
  bVar7 = *(byte *)(puVar14 + 0x52);
  *(byte *)((long)puVar14 + 0x2f1) = bVar7;
  lVar30 = puVar14[0x50];
  puVar14[0x5c] = lVar30;
  FUN_1086e5330(puVar3,*(long *)(param_2 + 0x68) + 0x10);
  plVar27 = (long *)puVar14[0x55];
  if (plVar27 == (long *)0x0) {
    uVar15 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000108774f90();
    ___cxa_throw(uVar15,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x108774090);
    (*pcVar10)();
  }
  puVar4 = puVar14 + 0x57;
  if (iVar13 < 1) {
    func_0x000108776884();
    FUN_108774288();
    FUN_108926cd8(&uStack_b8);
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0xc0);
    func_0x0001087768e8(uVar15);
    (*extraout_x8)();
    uVar9 = (uint)(bVar1 | bVar7);
    (**(code **)(*plVar27 + 0xb8))
              (puVar4,plVar27,uVar15,puVar25,lVar30 + ((ulong)uVar9 & 1),1,iVar13 + (uVar9 & 1),
               *(undefined1 *)((long)puVar14 + 0x292));
  }
  puVar17 = puVar14 + 0x58;
  uVar11 = iVar6 != 0;
  uVar12 = iVar6 == 1;
  if (iVar6 < 1) {
    func_0x000108776884();
    FUN_108774288(puVar17);
    FUN_108926cd8(&uStack_b8);
  }
  else {
    plVar27 = (long *)*puVar3;
    uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0xc0);
    func_0x0001087768e8(uVar15);
    (*extraout_x8_00)();
    uVar9 = (bVar1 ^ 1) & (uint)bVar7;
    (**(code **)(*plVar27 + 0xb8))
              (puVar17,plVar27,uVar15,puVar25,lVar30 - (ulong)uVar9,2,iVar6 + uVar9,
               *(undefined1 *)((long)puVar14 + 0x292));
  }
  puVar31 = puVar14 + 0x46;
  cVar8 = *(char *)((long)puVar14 + 0x291);
  FUN_1086708f8(puVar31);
  puVar5 = puVar14 + 0x53;
  if (cVar8 != '\0') {
    plVar27 = *(long **)(*(long *)(param_2 + 0x68) + 0x90);
    (**(code **)(*plVar27 + 0x30))(plVar27,puVar25);
    if ((int)plVar27 != 0) {
      uStack_b8 = CONCAT26(uStack_b8._6_2_,0x1001200b2);
      func_0x000107c27994(auStack_b0,puVar25);
      uStack_98 = 0;
      pppuStack_78 = &ppuStack_90;
      uStack_80 = puVar14[0x47];
      uStack_88 = puVar14[0x46];
      if (puVar14[0x47] != 0) {
        plVar27 = (long *)(puVar14[0x47] + 8);
        do {
          cVar8 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar1) {
            *plVar27 = *plVar27 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppuStack_90 = &PTR_SUB_110a6d280;
      *puVar5 = 0;
      puVar14[0x54] = 0;
      uStack_70 = 0;
      FUN_10867340c(puVar5);
      uStack_70 = 1;
      plVar27 = *(long **)(*(long *)(param_2 + 0x68) + 0x90);
      (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_b8);
      func_0x0001086cf1c0(&uStack_b8);
      goto LAB_108773a30;
    }
  }
  func_0x000108776980(*puVar31);
LAB_108773a30:
  plVar27 = puVar14 + 0x59;
  lVar30 = *(long *)(*puVar31 + 8);
  *plVar27 = lVar30;
  if (lVar30 != 0) {
    do {
      func_0x0001087766bc();
    } while (extraout_w10 != 0);
  }
  FUN_10867340c(puVar31);
  FUN_10865b428(&uStack_b8);
  FUN_10865b464(&uStack_c0,3);
  uVar15 = uStack_c0;
  uStack_c0 = 0;
  FUN_10865b56c(lStack_a8 + 0x18,uVar15);
  func_0x00010865b5d0(&uStack_c0);
  *(undefined8 *)(lStack_a8 + 8) = 3;
  func_0x000107c2887c(lStack_a8,auStack_b0);
  FUN_10865b4a4(lStack_a8,0,puVar4);
  FUN_10865b4a4(lStack_a8,1,puVar17);
  puVar28 = puVar14 + 0x5a;
  FUN_108688ba8(lStack_a8,2,plVar27);
  uVar29 = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *puVar28 = uVar29;
  func_0x000107c27f9c(&uStack_c0);
  FUN_10865b628(&uStack_b8);
  puVar16 = (ulong *)(param_2 + 8);
  puVar18 = puVar28;
  func_0x000107c2883c(puVar2);
  func_0x0001087769d8(*(undefined8 *)puVar2);
  do {
    func_0x0001087766bc();
  } while (extraout_w10_00 != 0);
  func_0x0001087767c0(puVar14[4]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar14 + 0x5e) = 0;
    lVar30 = puVar14[4];
    func_0x000108776830();
    uVar29 = *puVar16;
    if (uVar29 == 0) {
      func_0x000107c3a5c0();
      uVar29 = *puVar16;
    }
    func_0x000108776a1c();
    plVar19 = extraout_x8_01;
    do {
      if (*plVar19 == 0) {
        func_0x000108776700();
        plVar19 = extraout_x8_03;
        uVar9 = extraout_w10_02;
        uVar32 = extraout_x11_00;
      }
      else {
        func_0x000108776818();
        plVar19 = extraout_x8_02;
        uVar9 = extraout_w10_01;
        uVar32 = extraout_x11;
      }
      if ((uVar32 & 1) != 0) {
        puVar25 = *(ulong **)(lVar30 + 0x90);
        func_0x000108776754();
        if ((bool)uVar12) {
          func_0x0001087766f0();
          uVar9 = extraout_w8_03;
          if ((bool)uVar11) {
            uVar9 = extraout_w9_00;
          }
          puVar28 = (ulong *)(ulong)uVar9;
          func_0x00010877680c();
          puVar16 = (ulong *)(ulong)(extraout_w9_01 + uVar9 * extraout_w8_04);
          _malloc();
          *(char *)puVar16 = (char)uVar9;
          func_0x0001087766dc(0);
          *(ulong **)(lVar30 + 0x90) = puVar16;
        }
        func_0x000108776744();
        *(ulong *)(extraout_x8_10 + 0x20) = uVar29;
        goto LAB_108773da0;
      }
    } while ((uVar9 >> 1 & 1) == 0);
  }
  func_0x000108776854();
  func_0x000108776764();
  func_0x000108776934();
  func_0x0001087768ac();
  puVar16 = *(ulong **)(*(long *)(puVar14[0x5b] + 0x68) + 0x20);
  puVar18 = puVar25;
  func_0x000107c29f64(puVar14 + 4,puVar16,puVar25,2);
  if ((*(byte *)(puVar14 + 0x3e) & 1) == 0) {
    uStack_e0 = 0;
    uVar29 = 7;
  }
  else {
    *puVar31 = *puVar4;
    do {
      func_0x0001087766bc();
    } while (extraout_w10_03 != 0);
    func_0x0001087767c0(*puVar31);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar14 + 0x5e) = 1;
      lVar30 = puVar14[0x46];
      func_0x000108776830();
      puVar28 = (ulong *)*puVar16;
      if (puVar28 == (ulong *)0x0) {
        func_0x000107c3a5c0();
        puVar28 = (ulong *)*puVar16;
      }
      func_0x000108776a1c();
      plVar19 = extraout_x8_04;
      do {
        if (*plVar19 == 0) {
          func_0x000108776700();
          plVar19 = extraout_x8_06;
          uVar9 = extraout_w10_05;
          uVar29 = extraout_x11_02;
        }
        else {
          func_0x000108776818();
          plVar19 = extraout_x8_05;
          uVar9 = extraout_w10_04;
          uVar29 = extraout_x11_01;
        }
        if ((uVar29 & 1) != 0) goto LAB_108773d70;
      } while ((uVar9 >> 1 & 1) == 0);
    }
    puVar18 = puVar31;
    FUN_108774338();
    FUN_108774fb4(puVar2);
    puVar16 = puVar31;
    func_0x000107c27f9c();
    *puVar5 = *puVar17;
    do {
      func_0x0001087766bc();
    } while (extraout_w10_06 != 0);
    func_0x0001087767c0(*puVar5);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar14 + 0x5e) = 2;
      lVar30 = puVar14[0x53];
      func_0x000108776830();
      puVar28 = (ulong *)*puVar16;
      if (puVar28 == (ulong *)0x0) {
        func_0x000107c3a5c0();
        puVar28 = (ulong *)*puVar16;
      }
      func_0x000108776a1c();
      plVar19 = extraout_x8_07;
      do {
        if (*plVar19 == 0) {
          func_0x000108776700();
          plVar19 = extraout_x8_09;
          uVar9 = extraout_w10_08;
          uVar29 = extraout_x11_04;
        }
        else {
          func_0x000108776818();
          plVar19 = extraout_x8_08;
          uVar9 = extraout_w10_07;
          uVar29 = extraout_x11_03;
        }
        if ((uVar29 & 1) != 0) {
LAB_108773d70:
          puVar25 = *(ulong **)(lVar30 + 0x90);
          func_0x000108776754();
          if ((bool)uVar12) {
            func_0x0001087766f0();
            uVar12 = extraout_w8;
            if ((bool)uVar11) {
              uVar12 = extraout_w9;
            }
            func_0x00010877668c();
            *(undefined1 *)puVar16 = uVar12;
            func_0x0001087766dc(0);
            *(ulong **)(lVar30 + 0x90) = puVar16;
          }
          func_0x000108776744();
          *(ulong **)(extraout_x8_11 + 0x20) = puVar28;
LAB_108773da0:
          func_0x00010877672c(*(undefined8 *)(lVar30 + 0x90));
          *(undefined8 *)(lVar30 + 0x10) = 0;
          goto LAB_108774024;
        }
      } while ((uVar9 >> 1 & 1) == 0);
    }
    puVar17 = puVar5;
    FUN_108774338(puVar5);
    FUN_108774fb4(puVar31,puVar17);
    func_0x000107c27f9c(puVar5);
    if (*(int *)(puVar14 + 0x45) == 0) {
      func_0x0001087750a8(puVar2);
      uStack_e0 = 0;
      puVar28 = (ulong *)(ulong)*puVar2;
    }
    else if (*(int *)(puVar14 + 0x4c) == 0) {
      func_0x0001087750a8(puVar31);
      uStack_e0 = 0;
      puVar28 = (ulong *)(ulong)(uint)*puVar31;
    }
    else {
      func_0x0001087750c0(puVar2);
      puVar28 = puVar31;
      func_0x0001087750c0();
      func_0x000108776864();
      FUN_108774398();
      uStack_e0 = (ulong)puVar28 & 0x100000000;
    }
    FUN_108775030(puVar31);
    func_0x00010877692c();
    uVar29 = (ulong)puVar28 & 0xffffffff;
  }
  func_0x00010877684c();
  func_0x000107c27f9c(plVar27);
  func_0x0001087768e0();
  func_0x00010877694c();
  func_0x000107c288e8(puVar3);
  do {
    puVar18 = puVar25;
    FUN_1086f3088(puVar14 + 4,puVar14[0x5b] + 0xa8);
    lVar30 = puVar14[0x5b];
    puVar31 = *(ulong **)(lVar30 + 200);
    if ((puVar31 != (ulong *)0x0) && (puVar28 = (ulong *)(lVar30 + 0xd8), *puVar28 != 0)) {
      puVar16 = puVar28;
      puVar18 = puVar25;
      FUN_1086f3194();
      uVar32 = (long)puVar31 - 1;
      if (((ulong)puVar31 & uVar32) == 0) {
        puVar26 = (ulong *)((ulong)puVar16 & uVar32);
      }
      else {
        puVar26 = puVar16;
        if (puVar31 <= puVar16) {
          uVar23 = 0;
          if (puVar31 != (ulong *)0x0) {
            uVar23 = (ulong)puVar16 / (ulong)puVar31;
          }
          puVar26 = (ulong *)((long)puVar16 - uVar23 * (long)puVar31);
        }
      }
      plVar27 = *(long **)(*(long *)(lVar30 + 0xc0) + (long)puVar26 * 8);
      if (plVar27 != (long *)0x0) {
LAB_108773e78:
        while (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0) {
          puVar20 = (ulong *)plVar27[1];
          uVar12 = puVar20 == puVar16;
          if (!(bool)uVar12) goto LAB_108773ea0;
          iVar13 = (int)plVar27 + 0x10;
          puVar18 = puVar25;
          FUN_1086f39c0();
          if (iVar13 != 0) {
            func_0x0001087769e4();
            if ((bool)uVar12) {
              uVar32 = extraout_x13 & extraout_x9;
            }
            else {
              uVar32 = extraout_x9;
              if (extraout_x10 <= extraout_x9) {
                uVar32 = 0;
                if (extraout_x10 != 0) {
                  uVar32 = extraout_x9 / extraout_x10;
                }
                uVar32 = extraout_x9 - uVar32 * extraout_x10;
              }
            }
            lVar30 = *(long *)(lVar30 + 0xc0);
            plVar19 = *(long **)(lVar30 + uVar32 * 8);
            do {
              plVar22 = plVar19;
              plVar19 = (long *)*plVar22;
            } while ((long *)*plVar22 != plVar27);
            lVar21 = extraout_x8_12;
            if (plVar22 == (long *)(puVar14[0x5b] + 0xd0)) {
LAB_108773f44:
              if (extraout_x8_12 == 0) {
LAB_108773f78:
                *(undefined8 *)(lVar30 + uVar32 * 8) = 0;
                lVar21 = *plVar27;
                goto LAB_108773f80;
              }
              uVar23 = *(ulong *)(extraout_x8_12 + 8);
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar24 = uVar23 & extraout_x13;
              }
              else {
                uVar24 = uVar23;
                if (extraout_x10 <= uVar23) {
                  uVar24 = 0;
                  if (extraout_x10 != 0) {
                    uVar24 = uVar23 / extraout_x10;
                  }
                  uVar24 = uVar23 - uVar24 * extraout_x10;
                }
              }
              if (uVar24 != uVar32) goto LAB_108773f78;
LAB_108773f88:
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar23 = uVar23 & extraout_x13;
              }
              else if (extraout_x10 <= uVar23) {
                uVar24 = 0;
                if (extraout_x10 != 0) {
                  uVar24 = uVar23 / extraout_x10;
                }
                uVar23 = uVar23 - uVar24 * extraout_x10;
              }
              if (uVar23 != uVar32) {
                *(long **)(lVar30 + uVar23 * 8) = plVar22;
                lVar21 = *plVar27;
              }
            }
            else {
              uVar23 = plVar22[1];
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar23 = uVar23 & extraout_x13;
              }
              else if (extraout_x10 <= uVar23) {
                uVar24 = 0;
                if (extraout_x10 != 0) {
                  uVar24 = uVar23 / extraout_x10;
                }
                uVar23 = uVar23 - uVar24 * extraout_x10;
              }
              if (uVar23 != uVar32) goto LAB_108773f44;
LAB_108773f80:
              if (lVar21 != 0) {
                uVar23 = *(ulong *)(lVar21 + 8);
                goto LAB_108773f88;
              }
            }
            *plVar22 = lVar21;
            *plVar27 = 0;
            *puVar28 = *puVar28 - 1;
            func_0x0001087768b4(puVar2);
            FUN_10877598c();
            break;
          }
        }
      }
    }
LAB_108773fd4:
    if ((*(byte *)(puVar14 + 7) & 1) != 0) {
      puVar28 = (ulong *)puVar14[5];
      for (puVar31 = (ulong *)puVar14[4]; puVar31 != puVar28; puVar31 = puVar31 + 8) {
        puVar18 = (ulong *)(puVar31[6] + 8);
        uStack_b8 = uStack_e0 | uVar29;
        FUN_1087523cc(*puVar18,puVar18,&uStack_b8);
      }
    }
    func_0x0001087767b8();
    func_0x0001087768d8();
    func_0x00010877673c();
    puVar16 = puVar25;
    func_0x000107c27914(puVar25);
    func_0x00010877683c();
LAB_108774024:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar18 != 0) goto LAB_1087741c4;
    do {
      __Unwind_Resume(puVar16);
LAB_1087741c4:
      func_0x000104bd46a0(puVar16);
      func_0x0001087769f8();
    } while ((int)puVar18 == 0);
    func_0x0001087768e0();
    func_0x000107c27f9c(puVar4);
    func_0x000107c288e8(puVar3);
    if ((int)puVar28 == 3) {
      ___cxa_begin_catch(puVar16);
      ___cxa_end_catch();
      uStack_e0 = 0;
      uVar29 = 0xb;
    }
    else {
      ___cxa_begin_catch(puVar16);
      if ((int)puVar28 == 2) {
        ___cxa_end_catch();
      }
      else {
        ___cxa_end_catch();
      }
      uVar29 = 0;
      uStack_e0 = 0;
    }
  } while( true );
LAB_108773ea0:
  if (((ulong)puVar31 & uVar32) == 0) {
    puVar20 = (ulong *)((ulong)puVar20 & uVar32);
  }
  else if (puVar31 <= puVar20) {
    uVar23 = 0;
    if (puVar31 != (ulong *)0x0) {
      uVar23 = (ulong)puVar20 / (ulong)puVar31;
    }
    puVar20 = (ulong *)((long)puVar20 - uVar23 * (long)puVar31);
  }
  if (puVar20 != puVar26) goto LAB_108773fd4;
  goto LAB_108773e78;
}



/* Entry: 108774288; end: 108774337;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108774288(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  FUN_1087759d0(&uStack_48);
  do {
    alStack_40[1] = 0;
    lVar1 = alStack_40[0] + 0x10;
    func_0x000107c27ff0(lVar1,alStack_40 + 1,1,2);
    if ((int)lVar1 != 0) {
      func_0x000108775ac4(alStack_40[0] + 0x98);
      FUN_108775af4(alStack_40[0] + 0x98,param_2);
      *(undefined1 *)(alStack_40[0] + 0xd0) = 1;
      *(undefined8 *)(alStack_40[0] + 0x10) = 2;
      func_0x000107c31508(alStack_40[0],alStack_40);
      break;
    }
  } while (((uint)alStack_40[1] >> 1 & 1) == 0);
  *param_1 = uStack_48;
  uStack_48 = 0;
  func_0x000107c27fec(&uStack_48);
  return;
}



/* Entry: 108774338; end: 108774397;  */

long FUN_108774338(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108774388);
  (*pcVar1)();
}



/* Entry: 108774398; end: 108774c93;  */

undefined8
FUN_108774398(long param_1,long param_2,long param_3,ulong param_4,uint param_5,long param_6,
             long param_7)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  code *extraout_x8;
  code *extraout_x8_00;
  ushort uVar15;
  ulong uVar16;
  byte bVar17;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_650;
  long *plStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  int iStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  undefined8 uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  byte bStack_5e0;
  char cStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5b0;
  undefined1 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined1 uStack_590;
  undefined1 uStack_588;
  undefined1 auStack_580 [120];
  undefined1 auStack_508 [24];
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined1 uStack_4e0;
  undefined1 uStack_4c8;
  undefined1 uStack_4c0;
  undefined1 uStack_4bc;
  ulong uStack_4b8;
  byte bStack_4b0;
  uint uStack_4a8;
  undefined1 uStack_4a4;
  undefined1 uStack_4a0;
  undefined1 uStack_498;
  undefined1 uStack_490;
  undefined1 uStack_48c;
  undefined1 uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_468;
  undefined1 uStack_460;
  undefined1 uStack_45c;
  undefined1 uStack_458;
  undefined1 uStack_454;
  undefined1 uStack_450;
  undefined1 uStack_448;
  undefined1 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined1 uStack_418;
  uint uStack_410;
  byte bStack_40c;
  undefined1 auStack_408 [5];
  undefined2 uStack_403;
  undefined1 uStack_401;
  ulong uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b8;
  byte bStack_228;
  undefined1 auStack_218 [232];
  undefined *puStack_130;
  char cStack_70;
  
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  uVar14 = (ulong)*(int *)(param_6 + 0x18);
  lVar20 = (long)*(int *)(param_7 + 0x18) + uVar14;
  iVar12 = (int)lVar20;
  if (iVar12 != 0) {
    if (iVar12 < 0) {
      func_0x0001087750fc();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x108774b88);
      (*pcVar5)();
    }
    FUN_108775194(&uStack_3d8,lVar20,0,&uStack_5f8);
    FUN_108775110(&uStack_608,&uStack_3d8);
    FUN_108775200(&uStack_3d8);
    uVar14 = (ulong)*(uint *)(param_6 + 0x18);
  }
  uVar16 = *(ulong *)(param_6 + 0x10);
  puVar1 = (ulong *)(param_6 + 0x10);
  if ((uVar16 & 1) != 0) {
    puVar1 = (ulong *)(uVar16 + 7);
  }
  for (uVar14 = -(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3; uVar14 != 0
      ; uVar14 = uVar14 - 8) {
    func_0x000108775248(&uStack_608,*(undefined8 *)((long)puVar1 + (uVar14 - 8)));
  }
  puVar9 = (undefined8 *)(param_7 + 0x10);
  if ((*(ulong *)(param_7 + 0x10) & 1) != 0) {
    puVar9 = (undefined8 *)(*(ulong *)(param_7 + 0x10) + 7);
  }
  for (lVar20 = (long)*(int *)(param_7 + 0x18) << 3; lVar20 != 0; lVar20 = lVar20 + -8) {
    func_0x000108775248(&uStack_608,*puVar9);
    puVar9 = puVar9 + 1;
  }
  uStack_610 = 0;
  if (param_4 < 0x100) {
    if (param_3 == 0) {
      uStack_610 = 0x100;
      if ((param_5 >> 8 & 1) == 0) goto LAB_1087744e0;
    }
    else if ((param_5 >> 8 & 1) == 0) goto LAB_1087744b8;
LAB_1087744d8:
    uVar15 = (ushort)param_5 | 0x100;
  }
  else {
    uStack_610 = param_4 & 0xffff;
    if ((param_5 >> 8 & 1) != 0) goto LAB_1087744d8;
LAB_1087744b8:
    if (param_3 != 0x7fffffffffffffff) goto LAB_1087744e0;
    uVar15 = 0x100;
  }
  uStack_610 = (ulong)CONCAT22(uVar15,(undefined2)uStack_610);
LAB_1087744e0:
  lStack_620 = param_3;
  lStack_618 = param_3;
  if (uStack_608 != uStack_600) {
    lStack_620 = *(long *)(uStack_608 + 0x60);
    lStack_618 = *(long *)(uStack_600 - 0x18);
  }
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  lStack_698 = 0;
  lStack_6a0 = 0;
  uStack_650 = 0x3f800000;
  plStack_640 = (long *)0x0;
  uStack_638 = 0;
  plStack_648 = (long *)0x0;
  iStack_630 = 0;
  lStack_628 = param_3;
  if (uStack_608 != uStack_600) {
    FUN_1088635cc(&uStack_3d8,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),param_2,param_3);
    func_0x000107c28998(auStack_218,&uStack_3d8);
    func_0x000107c28948(&uStack_3d8);
    uVar14 = uStack_600;
    puVar2 = puStack_130;
    if (cStack_70 == '\0') {
      puVar2 = (undefined *)0x0;
    }
    uStack_3f0 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x50);
    uStack_3e8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60);
    uStack_3e0 = 0;
    uVar16 = uStack_608;
    lStack_3f8 = param_2;
    for (uVar22 = uStack_608; uVar22 != uVar14; uVar22 = uVar22 + 0x78) {
      FUN_1086a2c40(uVar22,*(long *)(param_1 + 0x68) + 0xa0);
      if ((*(byte *)(uVar22 + 0x10) & 1) == 0) {
        param_4 = param_4 & 0xffffffffffff0000;
        FUN_108842468(uVar22,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xa0),param_4);
      }
      else {
        lVar20 = *(long *)(param_1 + 0x68);
        func_0x000107c278b8(&uStack_5f0,&UNK_10f4ba382);
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5b0 = CONCAT44(uStack_5b0._4_4_,0x3f800000);
        FUN_1086a32e0(&uStack_3d8,lVar20 + 0x20,lVar20 + 0xa0,param_2,uVar22,&uStack_5f0,&uStack_5d0
                     );
        func_0x00010867bb84(&uStack_5d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5f0);
        if ((uStack_3d8 & 1) == 0) {
          uVar7 = uStack_3b8;
          if ((bStack_228 & 1) == 0) {
            iStack_630 = iStack_630 + 1;
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0);
            func_0x0001087768e8();
            (*extraout_x8)();
          }
          uVar21 = *(ulong *)(uVar22 + 0x60);
          ppuVar3 = &PTR_PTR_113286e08;
          if (*(undefined ***)(uVar22 + 0x30) != (undefined **)0x0) {
            ppuVar3 = *(undefined ***)(uVar22 + 0x30);
          }
          if ((*(byte *)(uVar22 + 0x10) >> 2 & 1) == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(int *)(*(long *)(uVar22 + 0x28) + 0xa8) == 0;
          }
          puVar18 = ppuVar3[0x25];
          uVar8 = (ulong)*(uint *)(uVar22 + 0x68);
          uStack_400 = uVar21;
          func_0x000108842b30(uVar8,bVar6);
          uVar4 = uStack_600;
          if ((int)uVar8 != 0) {
            for (; puVar18 = puVar2, uVar16 != uVar4; uVar16 = uVar16 + 0x78) {
              ppuVar3 = &PTR_PTR_113286e08;
              if (*(undefined ***)(uVar16 + 0x30) != (undefined **)0x0) {
                ppuVar3 = *(undefined ***)(uVar16 + 0x30);
              }
              puVar18 = ppuVar3[0x25];
              if (puVar18 != (undefined *)0x0) {
                if ((*(byte *)(uVar16 + 0x10) >> 2 & 1) == 0) {
                  bVar6 = false;
                }
                else {
                  bVar6 = *(int *)(*(long *)(uVar16 + 0x28) + 0xa8) == 0;
                }
                iVar12 = *(int *)(uVar16 + 0x68);
                func_0x000108842b30(iVar12,bVar6);
                if ((iVar12 != 0) && (uVar21 <= *(ulong *)(uVar16 + 0x60))) break;
              }
            }
            uVar8 = uVar22;
            FUN_1086a2754();
            *(undefined **)(uVar8 + 0x128) = puVar18;
          }
          uStack_410 = uStack_410 & 0xffffff00;
          bStack_40c = 0;
          auStack_408[0] = 0;
          uStack_403 = 0;
          uStack_401 = *(int *)(param_2 + 0x108) == 1;
          uStack_420 = 0;
          uStack_428 = 0;
          uStack_418 = 0;
          func_0x000107c28258();
          uStack_418 = 1;
          lVar20 = param_2;
          uStack_420 = uVar8;
          FUN_108842828(param_2,uStack_400,uVar22,*(long *)(param_1 + 0x68) + 0x30,
                        *(long *)(param_1 + 0x68) + 0x40,&lStack_3f8,&uStack_410);
          puVar9 = &uStack_428;
          func_0x000107c2825c();
          iVar12 = (int)lVar20;
          uVar13 = 4;
          if (iVar12 != 2) {
            uVar13 = 2;
          }
          func_0x000107c27994(&uStack_5d0,param_2);
          uStack_5b0 = uStack_400;
          uStack_5a8 = 1;
          uStack_5a0 = *(undefined8 *)(uVar22 + 0x70);
          uStack_598 = 1;
          uStack_590 = 0;
          uStack_588 = 0;
          uStack_5b8 = uVar7;
          func_0x000107c287dc(auStack_580,uVar22);
          FUN_1088449f4(auStack_508,uVar13);
          ppuVar3 = &PTR_PTR_113286e08;
          if (*(undefined ***)(uVar22 + 0x30) != (undefined **)0x0) {
            ppuVar3 = *(undefined ***)(uVar22 + 0x30);
          }
          puStack_4f0 = ppuVar3[0x24];
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4c0 = 0;
          uStack_4bc = 0;
          uStack_4b8 = uStack_4b8 & 0xffffffffffffff00;
          bStack_4b0 = 0;
          uStack_4a8 = uStack_4a8 & 0xffffff00;
          uStack_4a4 = 0;
          uStack_4a0 = 0;
          uStack_498 = 0;
          uStack_490 = 0;
          uStack_48c = 0;
          uStack_488 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          uStack_460 = 0;
          uStack_45c = 0;
          uStack_458 = 0;
          uStack_454 = 0;
          uStack_450 = 0;
          uStack_448 = 0;
          uStack_430 = 0;
          puStack_4e8 = puVar18;
          FUN_10886e2e0(&uStack_5d0);
          uStack_490 = iVar12 == 1;
          if ((iVar12 == 2) && ((bStack_40c & 1) != 0)) {
            if (uStack_410 - 0x2100f5 < 10) {
              uVar21 = *(ulong *)(&UNK_10df51830 + (ulong)(uStack_410 - 0x2100f5) * 8) | 0x100000000
              ;
            }
            else {
              uVar21 = 0;
            }
            uStack_48c = (undefined1)uVar21;
            uStack_488 = (undefined1)(uVar21 >> 0x20);
          }
          if (bStack_228 == 1) {
            FUN_10883f8ec(*(long *)(param_1 + 0x68) + 0xb0,param_2,*(long *)(param_1 + 0x68) + 0x100
                          ,auStack_408,&uStack_3d0,&uStack_5d0,lVar20,&uStack_410,puVar9);
          }
          FUN_10869a5c8(&uStack_5f0,uVar22,param_2,*(long *)(param_1 + 0x68) + 0x100,
                        *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20));
          if (cStack_5d8 == '\x01') {
            uStack_4b8 = uStack_5e8;
            bStack_4b0 = bStack_5e0;
            uStack_4a8 = (uint)uStack_5f0;
            uStack_4a4 = 1;
            FUN_10869a84c(uVar22,0x1400bc,uStack_5f0 & 0xffffffff,
                          *(undefined8 *)(*(long *)(param_1 + 0x68) + 0xa0));
            if (((cStack_5d8 == '\x01') && ((bStack_5e0 & 1) != 0)) && ((uint)uStack_5f0 == 0)) {
              FUN_10867b1ac(&uStack_670,&uStack_5e8);
            }
          }
          if ((bStack_228 & 1) == 0) {
            uVar21 = 0;
            func_0x000107c28e64();
            if ((uVar21 & 1) != 0) goto LAB_1087749d8;
            ppuVar3 = &PTR_PTR_113286e08;
            if (*(undefined ***)(uVar22 + 0x30) != (undefined **)0x0) {
              ppuVar3 = *(undefined ***)(uVar22 + 0x30);
            }
            bVar17 = *(byte *)(ppuVar3 + 0x28) ^ 1;
          }
          else {
LAB_1087749d8:
            bVar17 = 0;
          }
          FUN_10867b444(&lStack_6a0,&uStack_5d0);
          func_0x000107c28944(&uStack_688,&uStack_400);
          if ((bVar17 & 1) != 0) {
            uStack_5f0 = (lStack_698 - lStack_6a0) / 0x1a8 - 1;
            func_0x0001057f9264(&plStack_648,&uStack_5f0);
          }
          func_0x000107c288e0(&uStack_5d0);
        }
        func_0x0001087769a8();
      }
    }
    FUN_1086ceab4(&lStack_3f8);
    func_0x000107c288dc(auStack_218);
  }
  func_0x0001087768e8(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x70));
  (*extraout_x8_00)();
  FUN_10886a540(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),param_2,&uStack_688,1);
  plVar10 = *(long **)(*(long *)(param_1 + 0x68) + 0x80);
  (**(code **)(*plVar10 + 0x10))(plVar10,param_2,&uStack_670);
  if (plStack_648 != plStack_640) {
    pcVar11 = (char *)(param_1 + 0x78);
    func_0x000107c289e8();
    if (*pcVar11 == '\x01') {
      uStack_3d0 = 0;
      uStack_3d8 = 0;
      uStack_3c8 = 0;
      FUN_10867d03c(&uStack_3d8,(long)plStack_640 - (long)plStack_648 >> 3);
      plVar10 = plStack_640;
      for (plVar19 = plStack_648; plVar19 != plVar10; plVar19 = plVar19 + 1) {
        FUN_10867b444(&uStack_3d8,lStack_6a0 + *plVar19 * 0x1a8);
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x68) + 0xe0);
      (**(code **)(*plVar10 + 0x80))(plVar10,param_2,&uStack_3d8);
      func_0x00010867b9fc(&uStack_3d8);
    }
  }
  FUN_108774f38(&lStack_6a0);
  func_0x000108775310(&uStack_608);
  return 0x100000000;
}



/* Entry: 108774c94; end: 108774c97;  */

undefined8 * FUN_108774c94(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a6d1f0;
  plVar1 = (long *)param_1[0x1a];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1087753ec(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = param_1 + 0x15;
  if (*plVar1 != 0) {
    func_0x0001086f3a4c(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x000107c289f8(param_1 + 0xf);
  func_0x000107c29804(param_1 + 0xd);
  FUN_10865a95c(param_1 + 1);
  return param_1;
}



/* Entry: 108774c98; end: 108774cab;  */

void FUN_108774c98(void)

{
  FUN_108775358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108774cac; end: 108774cf7;  */

void FUN_108774cac(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001087767ac();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108774cf8(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001087767cc();
  return;
}



/* Entry: 108774cf8; end: 108774d73;  */

void FUN_108774cf8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puStack_28 = *param_2;
    *param_2 = 0;
    puStack_28 = puStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_108774d74();
  FUN_1086e31b8(&uStack_50);
  return;
}



/* Entry: 108774d74; end: 108774dd3;  */

void FUN_108774d74(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 108774dd4; end: 108774ddb;  */

void FUN_108774dd4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087767ac(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 108774ddc; end: 108774e5b;  */

void FUN_108774ddc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087767ac();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 108774e5c; end: 108774ef7;  */

long FUN_108774e5c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long lVar3;
  undefined8 *unaff_x20;
  
  func_0x000108776a10();
  FUN_108774ef8();
  lVar3 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plVar2 = unaff_x19 + 2;
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_1086e3178();
  }
  *(undefined8 *)((long)plVar2 + (lVar1 - lVar3)) = *unaff_x20;
  *unaff_x20 = 0;
  func_0x000108776920();
  lVar3 = unaff_x19[1];
  func_0x0001087768a4();
  return lVar3;
}



/* Entry: 108774ef8; end: 108774f37;  */

long * FUN_108774ef8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1086e3164();
  func_0x0001057f951c(param_1 + 0xb);
  func_0x00010867bb84(param_1 + 6);
  func_0x000107c27ae4(param_1 + 3);
  plStack_38 = param_1;
  func_0x00010867ba30(&plStack_38);
  return param_1;
}



/* Entry: 108774f38; end: 108774f6f;  */

long FUN_108774f38(long param_1)

{
  long lStack_28;
  
  func_0x0001057f951c(param_1 + 0x58);
  func_0x00010867bb84(param_1 + 0x30);
  func_0x000107c27ae4(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010867ba30(&lStack_28);
  return param_1;
}



/* Entry: 108774f70; end: 108774fb3;  */

void FUN_108774f70(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108774fb4; end: 10877502f;  */

void FUN_108774fb4(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108776a10();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  FUN_108775030();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_110a6d260)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 108775030; end: 10877507b;  */

void FUN_108775030(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a6d250)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10877507c; end: 1087750a7;  */

void FUN_10877507c(void)

{
  return;
}



/* Entry: 1087750a8; end: 10877510f;  */

void FUN_1087750a8(long param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x30) == 1) {
    return;
  }
  func_0x00010563ab98();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001086f3c0c();
  }
  return;
}



/* Entry: 108775110; end: 108775193;  */

void FUN_108775110(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001087767ac();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x78) * 0x78;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
    func_0x000107c28974(lVar2,lVar3);
    lVar2 = lVar2 + 0x78;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x78) {
    func_0x000107c2a5a4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001087767cc();
  return;
}



/* Entry: 108775194; end: 1087751ff;  */

long * FUN_108775194(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  func_0x000108776a10();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0x222222222222222 < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x78;
        func_0x000107c2a5a4();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 * 0x78;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x78;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x78;
  return unaff_x19;
}



/* Entry: 108775200; end: 108775357;  */

long * FUN_108775200(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x78;
    func_0x000107c2a5a4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108775358; end: 1087753eb;  */

undefined8 * FUN_108775358(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a6d1f0;
  plVar1 = (long *)param_1[0x1a];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1087753ec(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = param_1 + 0x15;
  if (*plVar1 != 0) {
    func_0x0001086f3a4c(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x000107c289f8(param_1 + 0xf);
  func_0x000107c29804(param_1 + 0xd);
  FUN_10865a95c(param_1 + 1);
  return param_1;
}



/* Entry: 1087753ec; end: 10877543f;  */

long FUN_1087753ec(long param_1)

{
  long lStack_28;
  
  func_0x000107c27f9c(param_1 + 0x30);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108775440; end: 108775453;  */

void FUN_108775440(void)

{
  func_0x000108775414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108775454; end: 1087754a3;  */

void FUN_108775454(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x18;
  __Znwm();
  *puVar4 = &PTR_SUB_110a6d280;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1087754a4; end: 1087754f3;  */

void FUN_1087754a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110a6d280;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1087754f4; end: 10877553f;  */

void FUN_1087754f4(long param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000108776980(*(undefined8 *)(param_1 + 8));
  func_0x000108776998();
  return;
}



/* Entry: 108775540; end: 108775577;  */

long FUN_108775540(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6d2e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108775578; end: 108775583;  */

undefined ** FUN_108775578(void)

{
  return &PTR_DAT_110a6d2e0;
}



/* Entry: 108775584; end: 1087755e7;  */

void FUN_108775584(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001087767ac();
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x2f) = *(undefined4 *)(unaff_x19 + 0x2f);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1087755e8; end: 108775687;  */

void FUN_1087755e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *puVar1 = FUN_108775cc4;
  puVar1[1] = FUN_108775dcc;
  FUN_108775688(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000108776780();
  puVar1[0xc] = param_2;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  func_0x0001087768e8(*param_2);
  (*extraout_x8)();
  return;
}



/* Entry: 108775688; end: 1087756af;  */

void FUN_108775688(long param_1,long param_2)

{
  FUN_108775584();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 1087756b0; end: 1087757d3;  */

void FUN_1087756b0(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_108775c50;
  puVar2[1] = FUN_108775ca0;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000108776780();
  FUN_1087757d4(puVar2 + 5);
  func_0x0001087769d8(puVar2[5]);
  do {
    func_0x0001087766bc();
  } while (extraout_w10 != 0);
  func_0x0001087767c0(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010877671c();
    if (*param_1 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108776a04();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000108776700();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108776818();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010877676c();
        if ((bool)in_ZR) {
          func_0x0001087766f0();
          func_0x00010877668c();
          func_0x00010877669c();
        }
        func_0x000108776650();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108776854();
  func_0x000108776764();
  func_0x0001087767a4();
  func_0x0001087767b8();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087757d4; end: 10877591f;  */

void FUN_1087757d4(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_108775bdc;
  puVar2[1] = FUN_108775c2c;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000108776780();
  (**(code **)(*plVar4 + 0x20))
            (puVar2 + 5,plVar4,param_1 + 1,param_1[4],*(undefined4 *)(param_1 + 5),
             *(undefined4 *)((long)param_1 + 0x2c),*(undefined1 *)(param_1 + 6),
             *(undefined1 *)((long)param_1 + 0x31),*(undefined1 *)((long)param_1 + 0x32));
  func_0x0001087769d8(puVar2[5]);
  do {
    func_0x0001087766bc();
  } while (extraout_w10 != 0);
  func_0x0001087767c0(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010877671c();
    if (*plVar4 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108776a04();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000108776700();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108776818();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010877676c();
        if ((bool)in_ZR) {
          func_0x0001087766f0();
          func_0x00010877668c();
          func_0x00010877669c();
        }
        func_0x000108776650();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1086cc64c(puVar2 + 4);
  func_0x000108776764();
  func_0x0001087767a4();
  func_0x0001087767b8();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 108775920; end: 108775923;  */

void FUN_108775920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108775924; end: 108775937;  */

void FUN_108775924(void)

{
  FUN_108775960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108775938; end: 10877595f;  */

undefined8 * FUN_108775938(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  func_0x000107c27f98(param_1 + 0x20);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 108775960; end: 10877598b;  */

void FUN_108775960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877598c; end: 1087759cf;  */

long * FUN_10877598c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1087753ec(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1087759d0; end: 108775a1b;  */

void FUN_1087759d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xd8;
  __Znwm();
  FUN_108775a1c();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 108775a1c; end: 108775a47;  */

void FUN_108775a1c(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a6d350;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



/* Entry: 108775a48; end: 108775a4b;  */

undefined8 * FUN_108775a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d350;
  func_0x000108775a94(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108775a4c; end: 108775a5f;  */

void FUN_108775a4c(void)

{
  FUN_108775a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108775a60; end: 108775af3;  */

undefined8 * FUN_108775a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d350;
  func_0x000108775a94(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108775af4; end: 108775b0b;  */

void FUN_108775af4(void)

{
  FUN_108775b0c();
  return;
}



/* Entry: 108775b0c; end: 108775b27;  */

void FUN_108775b0c(long param_1)

{
  FUN_108775b28();
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108775b28; end: 108775b33;  */

undefined8 * FUN_108775b28(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a98398;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_108775b78(param_1,param_2);
  return param_1;
}



/* Entry: 108775b34; end: 108775b77;  */

undefined8 * FUN_108775b34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a98398;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_108775b78(param_1,param_3);
  return param_1;
}



/* Entry: 108775b78; end: 108775bdb;  */

long FUN_108775b78(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x000108926ec0(param_1);
    }
    else {
      func_0x000108926e88(param_1);
    }
  }
  return param_1;
}



/* Entry: 108775bdc; end: 108775c2b;  */

void FUN_108775bdc(long param_1)

{
  FUN_1086cc64c(param_1 + 0x20);
  func_0x000108776764();
  func_0x0001087767a4();
  func_0x0001087767b8();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108775c2c; end: 108775c4f;  */

void FUN_108775c2c(void)

{
  func_0x0001087769b4();
  func_0x0001087767a4();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108775c50; end: 108775c9f;  */

void FUN_108775c50(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000108776764();
  func_0x0001087767a4();
  func_0x0001087767b8();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108775ca0; end: 108775cc3;  */

void FUN_108775ca0(void)

{
  func_0x0001087769b4();
  func_0x0001087767a4();
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108775cc4; end: 108775dcb;  */

void FUN_108775cc4(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087756b0(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    do {
      func_0x0001087766bc();
    } while (extraout_w10 != 0);
    func_0x0001087767c0(*(undefined8 *)(param_1 + 0x60));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      func_0x00010877671c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108776a04();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108776700();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108776818();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010877676c();
          if ((bool)in_ZR) {
            func_0x0001087766f0();
            func_0x00010877668c();
            func_0x00010877669c();
          }
          func_0x000108776650();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x60);
  func_0x000108776944();
  func_0x000108776978();
  func_0x0001087767b8();
  func_0x00010877673c();
  func_0x0001087769c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108775dcc; end: 108775e03;  */

void FUN_108775dcc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x000108776944();
    func_0x000108776978();
  }
  func_0x00010877673c();
  func_0x0001087769c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108775e04; end: 108776403;  */

void FUN_108775e04(long param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar12;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  ulong extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x13;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar1 = (uint *)(param_1 + 0x1f8);
  puVar17 = (uint *)(param_1 + 0x230);
  plVar22 = (long *)(param_1 + 0x298);
  cVar3 = *(char *)(param_1 + 0x2f0);
  if (cVar3 != '\x02') {
    uVar5 = cVar3 != '\0';
    uVar6 = cVar3 == '\x01';
    if (!(bool)uVar6) {
      func_0x000108776854();
      func_0x000108776764();
      func_0x0001087769a0();
      func_0x000108776918();
      plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x2d8) + 0x68) + 0x20);
      func_0x000107c29f64(param_1 + 0x20,plVar15,param_1 + 0x268,2);
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
        uStack_70 = 0;
        uVar16 = 7;
        goto LAB_10877604c;
      }
      *(undefined8 *)puVar17 = *(undefined8 *)(param_1 + 0x2b8);
      do {
        func_0x0001087766bc();
      } while (extraout_w10_02 != 0);
      func_0x0001087767c0(*(undefined8 *)puVar17);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x2f0) = 1;
        lVar21 = *(long *)puVar17;
        func_0x00010877698c();
        lVar19 = *plVar15;
        if (lVar19 == 0) {
          func_0x000107c3a5c0();
          lVar19 = *plVar15;
        }
        plVar15 = (long *)(lVar21 + 0x10);
        do {
          if (*plVar15 == 0) {
            func_0x000108776700();
            plVar15 = extraout_x8_02;
            uVar4 = extraout_w10_04;
            uVar16 = extraout_x11_02;
          }
          else {
            func_0x000108776818();
            plVar15 = extraout_x8_01;
            uVar4 = extraout_w10_03;
            uVar16 = extraout_x11_01;
          }
          if ((uVar16 & 1) != 0) {
            func_0x000108776754();
            if ((bool)uVar6) {
              func_0x0001087766f0();
              iVar2 = extraout_w8_03;
              if ((bool)uVar5) {
                iVar2 = extraout_w9_01;
              }
              func_0x00010877680c();
              puVar10 = (undefined1 *)(ulong)(uint)(extraout_w9_02 + iVar2 * extraout_w8_04);
              _malloc();
              *puVar10 = (char)iVar2;
              func_0x0001087766dc(0);
              *(undefined1 **)(lVar21 + 0x90) = puVar10;
            }
            func_0x000108776744();
            *(long *)(extraout_x8_05 + 0x20) = lVar19;
            goto LAB_1087761b4;
          }
        } while ((uVar4 >> 1 & 1) == 0);
      }
    }
    puVar7 = puVar17;
    FUN_108774338(puVar17);
    puVar8 = puVar1;
    FUN_108774fb4(puVar1,puVar7);
    func_0x000108776934();
    *plVar22 = *(long *)(param_1 + 0x2c0);
    do {
      func_0x0001087766bc();
    } while (extraout_w10 != 0);
    func_0x0001087767c0(*plVar22);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2f0) = 2;
      lVar21 = *plVar22;
      func_0x00010877698c();
      lVar19 = *(long *)puVar8;
      if (lVar19 == 0) {
        func_0x000107c3a5c0();
        lVar19 = *(long *)puVar8;
      }
      plVar15 = (long *)(lVar21 + 0x10);
      do {
        if (*plVar15 == 0) {
          func_0x000108776700();
          plVar15 = extraout_x8_00;
          uVar4 = extraout_w10_01;
          uVar16 = extraout_x11_00;
        }
        else {
          func_0x000108776818();
          plVar15 = extraout_x8;
          uVar4 = extraout_w10_00;
          uVar16 = extraout_x11;
        }
        if ((uVar16 & 1) != 0) {
          func_0x000108776754();
          if ((bool)uVar6) {
            func_0x0001087766f0();
            iVar2 = extraout_w8_01;
            if ((bool)uVar5) {
              iVar2 = extraout_w9;
            }
            func_0x00010877680c();
            puVar10 = (undefined1 *)(ulong)(uint)(extraout_w9_00 + iVar2 * extraout_w8_02);
            _malloc();
            *puVar10 = (char)iVar2;
            func_0x0001087766dc(0);
            *(undefined1 **)(lVar21 + 0x90) = puVar10;
          }
          func_0x000108776744();
          *(long *)(extraout_x8_03 + 0x20) = lVar19;
LAB_1087761b4:
          func_0x00010877672c(*(undefined8 *)(lVar21 + 0x90));
          *(undefined8 *)(lVar21 + 0x10) = 0;
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
  }
  FUN_108774338(plVar22);
  FUN_108774fb4(puVar17,plVar22);
  func_0x0001087768e0();
  if (*(int *)(param_1 + 0x228) == 0) {
    func_0x0001087750a8(puVar1);
    uStack_70 = 0;
    puVar17 = (uint *)(ulong)*puVar1;
  }
  else if (*(int *)(param_1 + 0x260) == 0) {
    func_0x0001087750a8(puVar17);
    uStack_70 = 0;
    puVar17 = (uint *)(ulong)*puVar17;
  }
  else {
    func_0x0001087750c0(puVar1);
    func_0x0001087750c0();
    func_0x000108776864();
    FUN_108774398();
    uStack_70 = (ulong)puVar17 & 0x100000000;
  }
  func_0x00010877692c();
  FUN_108775030(puVar1);
  uVar16 = (ulong)puVar17 & 0xffffffff;
LAB_10877604c:
  func_0x00010877684c();
  func_0x0001087769d0();
  func_0x0001087768ac();
  func_0x00010877694c();
  func_0x0001087769c8();
  FUN_1086f3088(param_1 + 0x20,*(long *)(param_1 + 0x2d8) + 0xa8,param_1 + 0x268);
  lVar21 = *(long *)(param_1 + 0x2d8);
  plVar22 = *(long **)(lVar21 + 200);
  if ((plVar22 != (long *)0x0) && (plVar15 = (long *)(lVar21 + 0xd8), *plVar15 != 0)) {
    plVar9 = plVar15;
    FUN_1086f3194(plVar15,param_1 + 0x268);
    uVar23 = (long)plVar22 - 1;
    if (((ulong)plVar22 & uVar23) == 0) {
      plVar20 = (long *)((ulong)plVar9 & uVar23);
    }
    else {
      plVar20 = plVar9;
      if (plVar22 <= plVar9) {
        uVar13 = 0;
        if (plVar22 != (long *)0x0) {
          uVar13 = (ulong)plVar9 / (ulong)plVar22;
        }
        plVar20 = (long *)((long)plVar9 - uVar13 * (long)plVar22);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar21 + 0xc0) + (long)plVar20 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_1087762b4;
          plVar12 = (long *)plVar18[1];
          uVar6 = plVar12 == plVar9;
          if (!(bool)uVar6) break;
          plVar12 = plVar18 + 2;
          FUN_1086f39c0(plVar12,param_1 + 0x268);
          if ((int)plVar12 != 0) {
            func_0x0001087769e4();
            if ((bool)uVar6) {
              uVar23 = extraout_x13 & extraout_x9;
            }
            else {
              uVar23 = extraout_x9;
              if (extraout_x10 <= extraout_x9) {
                uVar23 = 0;
                if (extraout_x10 != 0) {
                  uVar23 = extraout_x9 / extraout_x10;
                }
                uVar23 = extraout_x9 - uVar23 * extraout_x10;
              }
            }
            lVar21 = *(long *)(lVar21 + 0xc0);
            plVar22 = *(long **)(lVar21 + uVar23 * 8);
            do {
              plVar9 = plVar22;
              plVar22 = (long *)*plVar9;
            } while ((long *)*plVar9 != plVar18);
            lVar19 = extraout_x8_04;
            if (plVar9 == (long *)(*(long *)(param_1 + 0x2d8) + 0xd0)) {
LAB_108776220:
              if (extraout_x8_04 == 0) {
LAB_108776254:
                *(undefined8 *)(lVar21 + uVar23 * 8) = 0;
                lVar19 = *plVar18;
                goto LAB_10877625c;
              }
              uVar13 = *(ulong *)(extraout_x8_04 + 8);
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar14 = uVar13 & extraout_x13;
              }
              else {
                uVar14 = uVar13;
                if (extraout_x10 <= uVar13) {
                  uVar14 = 0;
                  if (extraout_x10 != 0) {
                    uVar14 = uVar13 / extraout_x10;
                  }
                  uVar14 = uVar13 - uVar14 * extraout_x10;
                }
              }
              if (uVar14 != uVar23) goto LAB_108776254;
LAB_108776264:
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar13 = uVar13 & extraout_x13;
              }
              else if (extraout_x10 <= uVar13) {
                uVar14 = 0;
                if (extraout_x10 != 0) {
                  uVar14 = uVar13 / extraout_x10;
                }
                uVar13 = uVar13 - uVar14 * extraout_x10;
              }
              if (uVar13 != uVar23) {
                *(long **)(lVar21 + uVar13 * 8) = plVar9;
                lVar19 = *plVar18;
              }
            }
            else {
              uVar13 = plVar9[1];
              if ((extraout_x10 & extraout_x13) == 0) {
                uVar13 = uVar13 & extraout_x13;
              }
              else if (extraout_x10 <= uVar13) {
                uVar14 = 0;
                if (extraout_x10 != 0) {
                  uVar14 = uVar13 / extraout_x10;
                }
                uVar13 = uVar13 - uVar14 * extraout_x10;
              }
              if (uVar13 != uVar23) goto LAB_108776220;
LAB_10877625c:
              if (lVar19 != 0) {
                uVar13 = *(ulong *)(lVar19 + 8);
                goto LAB_108776264;
              }
            }
            *plVar9 = lVar19;
            *plVar18 = 0;
            *plVar15 = *plVar15 + -1;
            func_0x0001087768b4();
            FUN_10877598c(puVar1);
            goto LAB_1087762b4;
          }
        }
        if (((ulong)plVar22 & uVar23) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar23);
        }
        else if (plVar22 <= plVar12) {
          uVar13 = 0;
          if (plVar22 != (long *)0x0) {
            uVar13 = (ulong)plVar12 / (ulong)plVar22;
          }
          plVar12 = (long *)((long)plVar12 - uVar13 * (long)plVar22);
        }
      } while (plVar12 == plVar20);
    }
  }
LAB_1087762b4:
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    lVar19 = *(long *)(param_1 + 0x28);
    for (lVar21 = *(long *)(param_1 + 0x20); lVar21 != lVar19; lVar21 = lVar21 + 0x40) {
      puVar11 = (undefined8 *)(*(long *)(lVar21 + 0x30) + 8);
      uStack_68 = uStack_70 | uVar16;
      FUN_1087523cc(*puVar11,puVar11,&uStack_68);
    }
  }
  func_0x0001087767b8();
  func_0x0001087768d8();
  func_0x00010877673c();
  func_0x000107c27914(param_1 + 0x268);
  func_0x00010877683c();
  return;
}



/* Entry: 108776404; end: 10877648b;  */

void FUN_108776404(long param_1)

{
  if (*(char *)(param_1 + 0x2f0) == '\x02') {
    func_0x000107c27f9c(param_1 + 0x298);
    FUN_108775030(param_1 + 0x1f8);
  }
  else {
    if (*(char *)(param_1 + 0x2f0) != '\x01') {
      func_0x000108776764();
      func_0x000107c27f9c(param_1 + 0x1f8);
      func_0x000108776918();
      goto LAB_10877645c;
    }
    func_0x000107c27f9c(param_1 + 0x230);
  }
  func_0x00010877684c();
LAB_10877645c:
  func_0x0001087769d0();
  func_0x000107c27f9c(param_1 + 0x2c0);
  func_0x000107c27f9c(param_1 + 0x2b8);
  func_0x0001087769c8();
  func_0x00010877673c();
  func_0x000107c27914(param_1 + 0x268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10877648c; end: 10877660f;  */

void FUN_10877648c(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  uint extraout_w8;
  undefined8 *puVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar5;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long *plVar7;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) goto LAB_1087765b8;
  func_0x000108776854();
  func_0x000108776764();
  func_0x00010877679c();
  do {
    if (*(long *)(*(long *)(param_1 + 0x40) + 0xd8) == 0) {
      func_0x0001087767b8();
      func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = (long *)(param_1 + 0x20);
    FUN_10877305c();
    plVar7 = (long *)(*(long *)(param_1 + 0x40) + 0xd0);
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      plVar3 = (long *)(param_1 + 0x20);
      func_0x000108774e14(plVar3,plVar7 + 8);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    while (*(undefined8 **)(param_1 + 0x50) = puVar4, puVar4 != puVar5) {
      *(undefined8 *)(param_1 + 0x38) = *puVar4;
      uVar2 = 0;
      do {
        func_0x0001087766bc();
      } while (extraout_w10 != 0);
      func_0x0001087767c0(*(undefined8 *)(param_1 + 0x38));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x58) = 1;
        func_0x00010877671c();
        if (*plVar3 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108776a04();
        plVar3 = extraout_x8;
        do {
          if (*plVar3 == 0) {
            func_0x000108776700();
            plVar3 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar6 = extraout_w11_00;
          }
          else {
            func_0x000108776818();
            plVar3 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar6 = extraout_w11;
          }
          if ((uVar6 & 1) != 0) {
            func_0x00010877676c();
            if ((bool)uVar2) {
              func_0x0001087766f0();
              func_0x00010877668c();
              func_0x00010877669c();
            }
            func_0x000108776650();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
LAB_1087765b8:
      plVar3 = (long *)(param_1 + 0x38);
      func_0x000107c28834();
      func_0x00010877679c();
      puVar5 = *(undefined8 **)(param_1 + 0x48);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    }
    func_0x00010877685c();
  } while( true );
}



/* Entry: 108776610; end: 10877664f;  */

void FUN_108776610(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010877679c();
    func_0x00010877685c();
  }
  else {
    func_0x000108776764();
    func_0x00010877679c();
  }
  func_0x00010877673c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108776650; end: 108776a27;  */

void FUN_108776650(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 108776a28; end: 108776b7f;  */

undefined8 *
FUN_108776a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 *param_10,undefined8 param_11)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_410;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [3];
  undefined1 auStack_3e0 [440];
  byte bStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_120;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  puVar6 = param_1;
  func_0x000108777768();
  *puVar6 = &PTR_FUN_110a6d390;
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba3c1);
  ppuStack_88 = &PTR_FUN_110a6d568;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_10;
  *param_10 = 0;
  puStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,param_3,&ppuStack_88,param_11,&uStack_a8,0x17);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *param_1 = &PTR_FUN_110a6d390;
  func_0x000107c27994(param_1 + 0x16,param_4);
  param_1[0x19] = param_5;
  *(undefined4 *)(param_1 + 0x1a) = param_6;
  *(undefined4 *)((long)param_1 + 0xd4) = param_7;
  *(undefined1 *)(param_1 + 0x1b) = param_8;
  puVar6 = param_1 + 0x1c;
  FUN_10877766c(puVar6,param_9);
  func_0x000108777738(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10875b664(param_1);
  __Unwind_Resume();
  func_0x000108777768();
  uStack_120 = extraout_x8_00;
  func_0x000107c29820(&ppuStack_1b8);
  func_0x000107c29f64(auStack_3f8,ppuStack_1b8[0xc],puVar6 + 0x16,2);
  func_0x000108777784();
  if ((bStack_228 & 1) == 0) {
    FUN_10875ebcc(puVar6,7);
  }
  else {
    uVar11 = puVar6[0xb];
    func_0x000107c278b8();
    puVar7 = auStack_3e0;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_150,(&PTR_DAT_110a6d5d8)[(ulong)puVar7 & 0xffffffff]);
    func_0x000107c28b34(uVar11,&ppuStack_1b8,&pcStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1b8);
    func_0x000107c297b4(&puStack_410,puVar6 + 1);
    puStack_400 = puVar6;
    func_0x000107c297b4(&uStack_430,puVar6 + 1);
    puStack_218 = (undefined8 *)lStack_408;
    puStack_220 = puStack_410;
    puStack_410 = (undefined8 *)0x0;
    lStack_408 = 0;
    puStack_210 = puStack_400;
    puStack_420 = puVar6;
    func_0x000107c29820(&ppuStack_1b8,puVar6);
    puStack_200 = ppuStack_1b8[0x4b];
    puStack_208 = ppuStack_1b8[0x4a];
    if (ppuStack_1b8[0x4b] != (undefined *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10 != 0);
    }
    uStack_1f8 = *(undefined4 *)(puVar6[0xb] + 0xfc);
    func_0x000108777784();
    pcStack_180 = FUN_10877741c;
    ppuStack_178 = &PTR_FUN_110a6d540;
    puVar8 = (undefined8 *)0x30;
    __Znwm();
    puVar8[1] = puStack_218;
    *puVar8 = puStack_220;
    if (puStack_218 != (undefined8 *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10_00 != 0);
    }
    puVar8[3] = puStack_208;
    puVar8[2] = puStack_210;
    puVar8[4] = puStack_200;
    if (puStack_200 != (undefined *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar8 + 5) = uStack_1f8;
    uVar11 = puVar6[1];
    lVar1 = puVar6[2];
    uStack_1c8 = uVar11;
    lStack_1c0 = lVar1;
    puStack_170 = puVar8;
    if (lVar1 == 0) {
      uVar14 = puVar6[0xb];
    }
    else {
      do {
        func_0x000108777718();
      } while (extraout_w10_02 != 0);
      uVar14 = puVar6[0xb];
      do {
        func_0x000108777718();
      } while (extraout_w10_03 != 0);
    }
    puVar9 = (undefined8 *)0xb8;
    uStack_1e8 = uVar11;
    lStack_1e0 = lVar1;
    __Znwm();
    uVar5 = uStack_428;
    uVar4 = uStack_430;
    plVar12 = puVar9 + 1;
    *plVar12 = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110a6d400;
    ppuStack_1b8 = (undefined **)FUN_108777114;
    ppuStack_1b0 = &PTR_FUN_110a6d440;
    lStack_1e0 = 0;
    uStack_1e8 = 0;
    puVar13 = puVar9 + 3;
    *puVar13 = &PTR_DAT_110a6d480;
    pcStack_150 = FUN_108777198;
    ppuStack_148 = &PTR_FUN_110a6d458;
    uStack_430 = 0;
    uStack_428 = 0;
    uStack_138 = 0;
    puStack_130 = puStack_420;
    puVar9[4] = FUN_108777198;
    puVar9[5] = &PTR_FUN_110a6d458;
    puVar9[7] = uVar5;
    puVar9[6] = uVar4;
    uStack_140 = 0;
    puVar9[8] = puStack_420;
    puVar9[10] = FUN_10877741c;
    puVar9[0xb] = &PTR_FUN_110a6d540;
    puVar9[0xc] = puVar8;
    puStack_170 = (undefined8 *)0x0;
    puVar9[0x10] = FUN_108777114;
    puVar9[0x11] = &PTR_FUN_110a6d440;
    puVar9[0x12] = uVar11;
    puVar9[0x13] = lVar1;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puVar9[0x16] = uVar14;
    func_0x000107c297a4(&uStack_140);
    func_0x000107c297a8(&uStack_1a8);
    func_0x000107c297a8(&uStack_1e8);
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    puStack_440 = puVar13;
    puStack_438 = puVar9;
    FUN_1087776c8(&uStack_1d8);
    func_0x000107c297a8(&uStack_1c8);
    func_0x00010877774c();
    FUN_1087770c4(&puStack_220);
    ppuStack_1b8 = &PTR_FUN_110a98348;
    ppuStack_1b0 = (undefined **)0x0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_188 = 0;
    func_0x000107c29ee4(&pcStack_150,puVar6 + 0x16);
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,1);
    uVar11 = 0;
    func_0x000107c287e0();
    uStack_1a0 = uVar11;
    func_0x000107c287d0();
    func_0x000107c2a2e0(&pcStack_150);
    uStack_198 = puVar6[0x19];
    uStack_190 = puVar6[0x1a];
    uStack_188 = *(undefined1 *)(puVar6 + 0x1b);
    func_0x000107c29820(&pcStack_150,puVar6);
    plVar10 = *(long **)(pcStack_150 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_220 = puVar13;
    puStack_218 = puVar9;
    (**(code **)(*plVar10 + 0xc0))(plVar10,&ppuStack_1b8,&puStack_220);
    func_0x0001087776f0(&puStack_220);
    func_0x000107c297b0(&pcStack_150);
    FUN_108926938(&ppuStack_1b8);
    FUN_1087776c8(&puStack_440);
    func_0x000107c297a4(&uStack_430);
    func_0x000107c297a4(&puStack_410);
  }
  puVar6 = auStack_3f8;
  func_0x000107c288c8(puVar6);
  func_0x000108777738(uStack_120);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087776f0(&puStack_220);
    func_0x000107c297b0(&pcStack_150);
    FUN_108926938(&ppuStack_1b8);
    FUN_1087776c8(&puStack_440);
    func_0x000107c297a4(&uStack_430);
    func_0x000107c297a4(&puStack_410);
    func_0x000107c288c8(auStack_3f8);
    do {
      func_0x000108777730();
      func_0x000108777784();
    } while( true );
  }
  return puVar6;
}



/* Entry: 108776b80; end: 10877702f;  */

void FUN_108776b80(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 *puStack_360;
  long lStack_358;
  long lStack_350;
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [440];
  byte bStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  
  func_0x000108777768();
  uStack_70 = extraout_x8;
  func_0x000107c29820(&ppuStack_108);
  func_0x000107c29f64(auStack_348,ppuStack_108[0xc],param_1 + 0xb0,2);
  func_0x000108777784();
  if ((bStack_178 & 1) == 0) {
    FUN_10875ebcc(param_1,7);
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c278b8();
    puVar6 = auStack_330;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_a0,(&PTR_DAT_110a6d5d8)[(ulong)puVar6 & 0xffffffff]);
    func_0x000107c28b34(uVar10,&ppuStack_108,&pcStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_108);
    func_0x000107c297b4(&puStack_360,param_1 + 8);
    lStack_350 = param_1;
    func_0x000107c297b4(&uStack_380,param_1 + 8);
    puStack_168 = (undefined8 *)lStack_358;
    puStack_170 = puStack_360;
    puStack_360 = (undefined8 *)0x0;
    lStack_358 = 0;
    lStack_160 = lStack_350;
    lStack_370 = param_1;
    func_0x000107c29820(&ppuStack_108,param_1);
    puStack_150 = ppuStack_108[0x4b];
    puStack_158 = ppuStack_108[0x4a];
    if (ppuStack_108[0x4b] != (undefined *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10 != 0);
    }
    uStack_148 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
    func_0x000108777784();
    pcStack_d0 = FUN_10877741c;
    ppuStack_c8 = &PTR_FUN_110a6d540;
    puVar7 = (undefined8 *)0x30;
    __Znwm();
    puVar7[1] = puStack_168;
    *puVar7 = puStack_170;
    if (puStack_168 != (undefined8 *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10_00 != 0);
    }
    puVar7[3] = puStack_158;
    puVar7[2] = lStack_160;
    puVar7[4] = puStack_150;
    if (puStack_150 != (undefined *)0x0) {
      do {
        func_0x000108777718();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar7 + 5) = uStack_148;
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    uStack_118 = uVar10;
    lStack_110 = lVar1;
    puStack_c0 = puVar7;
    if (lVar1 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      do {
        func_0x000108777718();
      } while (extraout_w10_02 != 0);
      uVar13 = *(undefined8 *)(param_1 + 0x58);
      do {
        func_0x000108777718();
      } while (extraout_w10_03 != 0);
    }
    puVar8 = (undefined8 *)0xb8;
    uStack_138 = uVar10;
    lStack_130 = lVar1;
    __Znwm();
    uVar5 = uStack_378;
    uVar4 = uStack_380;
    plVar11 = puVar8 + 1;
    *plVar11 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110a6d400;
    ppuStack_108 = (undefined **)FUN_108777114;
    ppuStack_100 = &PTR_FUN_110a6d440;
    lStack_130 = 0;
    uStack_138 = 0;
    puVar12 = puVar8 + 3;
    *puVar12 = &PTR_DAT_110a6d480;
    pcStack_a0 = FUN_108777198;
    ppuStack_98 = &PTR_FUN_110a6d458;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_88 = 0;
    lStack_80 = lStack_370;
    puVar8[4] = FUN_108777198;
    puVar8[5] = &PTR_FUN_110a6d458;
    puVar8[7] = uVar5;
    puVar8[6] = uVar4;
    uStack_90 = 0;
    puVar8[8] = lStack_370;
    puVar8[10] = FUN_10877741c;
    puVar8[0xb] = &PTR_FUN_110a6d540;
    puVar8[0xc] = puVar7;
    puStack_c0 = (undefined8 *)0x0;
    puVar8[0x10] = FUN_108777114;
    puVar8[0x11] = &PTR_FUN_110a6d440;
    puVar8[0x12] = uVar10;
    puVar8[0x13] = lVar1;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puVar8[0x16] = uVar13;
    func_0x000107c297a4(&uStack_90);
    func_0x000107c297a8(&uStack_f8);
    func_0x000107c297a8(&uStack_138);
    uStack_120 = 0;
    uStack_128 = 0;
    puStack_390 = puVar12;
    puStack_388 = puVar8;
    FUN_1087776c8(&uStack_128);
    func_0x000107c297a8(&uStack_118);
    func_0x00010877774c();
    FUN_1087770c4(&puStack_170);
    ppuStack_108 = &PTR_FUN_110a98348;
    ppuStack_100 = (undefined **)0x0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    func_0x000107c29ee4(&pcStack_a0,param_1 + 0xb0);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
    uVar10 = 0;
    func_0x000107c287e0();
    uStack_f0 = uVar10;
    func_0x000107c287d0();
    func_0x000107c2a2e0(&pcStack_a0);
    uStack_e8 = *(undefined8 *)(param_1 + 200);
    uStack_e0 = *(undefined8 *)(param_1 + 0xd0);
    uStack_d8 = *(undefined1 *)(param_1 + 0xd8);
    func_0x000107c29820(&pcStack_a0,param_1);
    plVar9 = *(long **)(pcStack_a0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_170 = puVar12;
    puStack_168 = puVar8;
    (**(code **)(*plVar9 + 0xc0))(plVar9,&ppuStack_108,&puStack_170);
    func_0x0001087776f0(&puStack_170);
    func_0x000107c297b0(&pcStack_a0);
    FUN_108926938(&ppuStack_108);
    FUN_1087776c8(&puStack_390);
    func_0x000107c297a4(&uStack_380);
    func_0x000107c297a4(&puStack_360);
  }
  func_0x000107c288c8(auStack_348);
  func_0x000108777738(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087776f0(&puStack_170);
    func_0x000107c297b0(&pcStack_a0);
    FUN_108926938(&ppuStack_108);
    FUN_1087776c8(&puStack_390);
    func_0x000107c297a4(&uStack_380);
    func_0x000107c297a4(&puStack_360);
    func_0x000107c288c8(auStack_348);
    do {
      func_0x000108777730();
      func_0x000108777784();
    } while( true );
  }
  return;
}



/* Entry: 108777030; end: 108777033;  */

undefined8 * FUN_108777030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d390;
  func_0x00010877752c(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108777034; end: 108777047;  */

void FUN_108777034(void)

{
  FUN_1087774ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108777048; end: 1087770c3;  */

undefined1 * FUN_108777048(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  func_0x000108777768();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x000108777738(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x000108777730();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 1087770c4; end: 1087770eb;  */

undefined8 FUN_1087770c4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087770ec; end: 1087770ef;  */

void FUN_1087770ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d400;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087770f0; end: 108777103;  */

void FUN_1087770f0(void)

{
  FUN_10877740c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108777104; end: 108777113;  */

void FUN_108777104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010877710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108777114; end: 108777173;  */

long FUN_108777114(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 108777174; end: 108777197;  */

void FUN_108777174(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108777198; end: 1087771fb;  */

void FUN_108777198(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [56];
  
  lVar3 = *(long *)(param_2 + 0x20);
  FUN_108775af4(auStack_58,param_1);
  plVar2 = *(long **)(lVar3 + 0xf8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_58);
    func_0x000108777760();
    FUN_10875ec20(lVar3);
    return;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087771f0);
  (*pcVar1)();
}



/* Entry: 1087771fc; end: 10877722b;  */

void FUN_1087771fc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10877722c; end: 10877723f;  */

void FUN_10877722c(void)

{
  func_0x0001087773d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108777240; end: 108777257;  */

void FUN_108777240(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 108777258; end: 10877729b;  */

void FUN_108777258(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108777778();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010877728c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10877729c; end: 108777347;  */

void FUN_10877729c(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108777778();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 108777348; end: 10877734b;  */

undefined8 * FUN_108777348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d508;
  func_0x000108777798(param_1[8]);
  func_0x000108777798(param_1[2]);
  return param_1;
}



/* Entry: 10877734c; end: 10877735f;  */

void FUN_10877734c(void)

{
  FUN_10877739c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108777360; end: 10877739b;  */

void FUN_108777360(void)

{
  return;
}



/* Entry: 10877739c; end: 10877740b;  */

undefined8 * FUN_10877739c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d508;
  func_0x000108777798(param_1[8]);
  func_0x000108777798(param_1[2]);
  return param_1;
}



/* Entry: 10877740c; end: 10877741b;  */

void FUN_10877740c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d400;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877741c; end: 1087774b3;  */

void FUN_10877741c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 1087774b4; end: 1087774d3;  */

void FUN_1087774b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087770c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087774d4; end: 1087774eb;  */

void FUN_1087774d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087774ec; end: 10877756f;  */

undefined8 * FUN_1087774ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d390;
  func_0x00010877752c(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108777570; end: 108777577;  */

void FUN_108777570(void)

{
  return;
}



/* Entry: 108777578; end: 1087775a7;  */

void FUN_108777578(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6d568;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1087775a8; end: 1087775d3;  */

void FUN_1087775a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6d568;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1087775d4; end: 108777627;  */

void FUN_1087775d4(long param_1,ulong *param_2)

{
  long *plVar1;
  undefined4 auStack_58 [12];
  undefined4 uStack_28;
  
  if (((*param_2 >> 0x20 & 1) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 8) + 0xf8), plVar1 != (long *)0x0)) {
    auStack_58[0] = (undefined4)*param_2;
    uStack_28 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1,auStack_58);
    func_0x000108777760();
  }
  return;
}



/* Entry: 108777628; end: 10877765f;  */

long FUN_108777628(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6d5c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}


