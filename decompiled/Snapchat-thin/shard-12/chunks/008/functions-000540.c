/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098b6e80; end: 1098b6f5b;  */

/* WARNING: Type propagation algorithm not settling */

undefined *** FUN_1098b6e80(undefined ***param_1)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  code **ppcVar8;
  undefined8 *******pppppppuVar9;
  long in_x5;
  long *extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *****pppppuVar13;
  long *plVar14;
  int iVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuStack_200;
  undefined8 ******ppppppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined8 *****pppppuStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined8 *apuStack_f0 [7];
  long lStack_b8;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar14 = &lStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  pcStack_68 = FUN_1098b7058;
  ppuStack_60 = &PTR_FUN_110ae9180;
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  ppcVar8 = &pcStack_68;
  FUN_1098b6f5c();
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_f8 = *ppcVar8;
  (**(code **)(ppcVar8[1] + 0x10))(apuStack_f0);
  lStack_108 = plVar14[1];
  lStack_110 = *plVar14;
  lStack_100 = plVar14[2];
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  FUN_1098aeecc(pppuVar4,&pcStack_f8,&UNK_110b17bc0,&lStack_110);
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  ppuVar5 = apuStack_f0;
  (*(code *)*apuStack_f0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  (*(code *)*apuStack_f0[0])(apuStack_f0);
  __Unwind_Resume(ppuVar5);
  func_0x000105277f8c();
  pppppppuVar7 = &pppppppuStack_200;
  pppppppuStack_1a0 = (undefined8 *******)0x0;
  pppppppuStack_198 = (undefined8 *******)0x0;
  pppppppuStack_190 = (undefined8 *******)0x0;
  pppppppuStack_1b0 = (undefined8 *******)0x0;
  lStack_1a8 = 0;
  uVar10 = *(long *)(in_x5 + 0x20) - *(long *)(in_x5 + 0x18);
  iVar15 = (int)(uVar10 >> 3);
  pppppppuStack_1b8 = &pppppppuStack_1b0;
  if (iVar15 != (int)uVar10 * 0x20000000) {
    uVar10 = -(uVar10 >> 2 & 1) & 0xffffffff00000000 | (uVar10 & 7) << 0x1d;
    do {
      pppppppuStack_200 = (undefined8 *******)CONCAT44(pppppppuStack_200._4_4_,(int)uVar10);
      lVar11 = *(long *)(*(long *)(in_x5 + 0x18) + uVar10 * 8);
      ppppppuVar17 = *(undefined8 *******)(lVar11 + 0x60);
      if ((ppppppuVar17 != (undefined8 ******)0x0) &&
         (pppppppuVar12 = &pppppppuStack_1b0, pppppppuVar9 = pppppppuStack_1b0,
         ppppppuVar17 != *(undefined8 *******)(lVar11 + 0x58))) {
        while (pppppppuVar16 = pppppppuVar12, pppppppuVar9 != (undefined8 *******)0x0) {
          while (pppppppuVar6 = pppppppuVar9, pppppppuVar6[4] <= ppppppuVar17) {
            if (ppppppuVar17 <= pppppppuVar6[4]) goto LAB_1098b7178;
            pppppppuVar9 = (undefined8 *******)pppppppuVar6[1];
            if ((undefined8 *******)pppppppuVar6[1] == (undefined8 *******)0x0) {
              pppppppuVar12 = pppppppuVar6 + 1;
              pppppppuVar16 = pppppppuVar6;
              goto LAB_1098b7124;
            }
          }
          pppppppuVar12 = pppppppuVar6;
          pppppppuVar9 = (undefined8 *******)*pppppppuVar6;
        }
LAB_1098b7124:
        pppppppuVar6 = (undefined8 *******)0x40;
        __Znwm();
        pppppppuVar6[4] = ppppppuVar17;
        pppppppuVar6[5] = (undefined8 ******)0x0;
        pppppppuVar6[6] = (undefined8 ******)0x0;
        pppppppuVar6[7] = (undefined8 ******)0x0;
        *pppppppuVar6 = (undefined8 ******)0x0;
        pppppppuVar6[1] = (undefined8 ******)0x0;
        pppppppuVar6[2] = pppppppuVar16;
        *pppppppuVar12 = pppppppuVar6;
        pppppppuVar9 = pppppppuVar6;
        if ((undefined8 *******)*pppppppuStack_1b8 != (undefined8 *******)0x0) {
          pppppppuStack_1b8 = (undefined8 *******)*pppppppuStack_1b8;
          pppppppuVar9 = (undefined8 *******)*pppppppuVar12;
        }
        func_0x000107c27d40(pppppppuStack_1b0,pppppppuVar9);
        lStack_1a8 = lStack_1a8 + 1;
LAB_1098b7178:
        FUN_10923b3a0(pppppppuVar6 + 5,&pppppppuStack_200);
      }
      uVar10 = uVar10 + 1;
      pppppppuVar12 = pppppppuStack_1b8;
    } while ((int)uVar10 != iVar15);
    while ((undefined8 ********)pppppppuVar12 != &pppppppuStack_1b0) {
      ppppppuStack_1c0 = pppppppuVar12[4] + 2;
      pppppuStack_1c8 = pppppppuVar12[4][0x44] + 0xd;
      bStack_1d0 = 0;
      lStack_1e8 = 0;
      lStack_1f0 = 0;
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      ppppppuStack_1f8 = (undefined8 ******)0x0;
      pppppppuStack_200 = (undefined8 *******)0x0;
      ppppppuVar17 = pppppppuVar12[5];
      ppppppuVar1 = pppppppuVar12[6];
      if (ppppppuVar17 == ppppppuVar1) {
LAB_1098b71fc:
        if ((lStack_1e8 != lStack_1e0) || ((bStack_1d0 & 1) != 0)) goto LAB_1098b7210;
      }
      else {
        do {
          FUN_1098ad16c(*(undefined8 *)(*(long *)(in_x5 + 0x18) + (long)*(int *)ppppppuVar17 * 8),
                        &pppppppuStack_200);
          ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 + 4);
        } while (ppppppuVar17 != ppppppuVar1);
        if (pppppppuStack_200 == (undefined8 *******)ppppppuStack_1f8) goto LAB_1098b71fc;
LAB_1098b7210:
        func_0x0001098b0f24(&ppppppuStack_188,&ppppppuStack_1c0,&pppppppuStack_200);
        if (pppppppuStack_198 < pppppppuStack_190) {
          *pppppppuStack_198 = ppppppuStack_188;
          pppppppuStack_198 = pppppppuStack_198 + 1;
        }
        else {
          pppppppuVar9 = &pppppppuStack_1a0;
          FUN_1098b74c4(pppppppuVar9,&ppppppuStack_188);
          ppppppuVar17 = ppppppuStack_188;
          pppppppuStack_198 = pppppppuVar9;
          if (ppppppuStack_188 != (undefined8 ******)0x0) {
            ppppppuVar1 = ppppppuStack_188 + 1;
            do {
              pppppuVar13 = *ppppppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar3) {
                *ppppppuVar1 = (undefined8 *****)((long)pppppuVar13 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)pppppuVar13 & 0x1fffffffc) == 4) {
              do {
                pppppuVar13 = *ppppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
                if (bVar3) {
                  *ppppppuVar1 = (undefined8 *****)((long)pppppuVar13 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((undefined8 *****)((long)pppppuVar13 + -1) == (undefined8 *****)0x0) {
                (*(code *)(*ppppppuVar17)[1])();
              }
            }
          }
        }
      }
      if (lStack_1e8 != 0) {
        lStack_1e0 = lStack_1e8;
        __ZdlPv();
      }
      ppppppuStack_188 = &pppppppuStack_200;
      FUN_1098b0a40(&ppppppuStack_188);
      pppppppuVar9 = (undefined8 *******)pppppppuVar12[1];
      pppppppuVar16 = pppppppuVar12;
      if ((undefined8 *******)pppppppuVar12[1] == (undefined8 *******)0x0) {
        do {
          pppppppuVar12 = (undefined8 *******)pppppppuVar16[2];
          bVar3 = (undefined8 *******)*pppppppuVar12 != pppppppuVar16;
          pppppppuVar16 = pppppppuVar12;
        } while (bVar3);
      }
      else {
        do {
          pppppppuVar12 = pppppppuVar9;
          pppppppuVar9 = (undefined8 *******)*pppppppuVar12;
        } while ((undefined8 *******)*pppppppuVar12 != (undefined8 *******)0x0);
      }
    }
  }
  FUN_1098b790c(pppppppuStack_1b0);
  pppppppuVar9 = pppppppuStack_198;
  pppppppuVar12 = pppppppuStack_1a0;
  if (pppppppuStack_1a0 == pppppppuStack_198) {
    *extraout_x8 = 0;
  }
  else {
    pppppppuStack_1b8 = (undefined8 *******)((long)pppppppuStack_198 - (long)pppppppuStack_1a0 >> 3)
    ;
    FUN_1098b7954(&pppppppuStack_200,&pppppppuStack_1b8);
    plVar14 = (long *)(lStack_1f0 + 8);
    if (*plVar14 != 0) {
      FUN_1092b4274(plVar14);
    }
    *plVar14 = (long)ppppppuStack_1f8;
    ppppppuStack_1f8 = (undefined8 ******)0x0;
    lVar11 = 0;
    do {
      FUN_1098b799c(lStack_1f0,lVar11,pppppppuVar12);
      pppppppuVar12 = pppppppuVar12 + 1;
      lVar11 = lVar11 + 1;
    } while (pppppppuVar12 != pppppppuVar9);
    *extraout_x8 = (long)pppppppuStack_200;
    pppppppuStack_200 = (undefined8 *******)0x0;
    if ((ppppppuStack_1f8 != (undefined8 ******)0x0) &&
       (FUN_1092b4274(&ppppppuStack_1f8), pppppppuStack_200 != (undefined8 *******)0x0)) {
      ppppppuVar17 = pppppppuStack_200 + 1;
      do {
        pppppuVar13 = *ppppppuVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
        if (bVar3) {
          *ppppppuVar17 = (undefined8 *****)((long)pppppuVar13 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)pppppuVar13 & 0x1fffffffc) == 4) {
        do {
          pppppuVar13 = *ppppppuVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
          if (bVar3) {
            *ppppppuVar17 = (undefined8 *****)((long)pppppuVar13 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 *****)((long)pppppuVar13 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppppuStack_200)[1])();
        }
      }
    }
  }
  pppppppuStack_200 = &pppppppuStack_1a0;
  func_0x0001098b784c(&pppppppuStack_200);
  return (undefined ***)pppppppuVar7;
}



/* Entry: 1098b6f5c; end: 1098b7057;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_1098b6f5c(undefined1 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  long *extraout_x8;
  ulong uVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *****pppppuVar11;
  long *plVar12;
  int iVar13;
  undefined8 *******pppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuStack_180;
  undefined8 ******ppppppuStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined8 *****pppppuStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1098aeecc(param_1,&uStack_78,&UNK_110b17bc0,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar4 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume(ppuVar4);
  func_0x000105277f8c();
  pppppppuVar6 = &pppppppuStack_180;
  pppppppuStack_120 = (undefined8 *******)0x0;
  pppppppuStack_118 = (undefined8 *******)0x0;
  pppppppuStack_110 = (undefined8 *******)0x0;
  pppppppuStack_130 = (undefined8 *******)0x0;
  lStack_128 = 0;
  uVar8 = *(long *)(param_6 + 0x20) - *(long *)(param_6 + 0x18);
  iVar13 = (int)(uVar8 >> 3);
  pppppppuStack_138 = &pppppppuStack_130;
  if (iVar13 != (int)uVar8 * 0x20000000) {
    uVar8 = -(uVar8 >> 2 & 1) & 0xffffffff00000000 | (uVar8 & 7) << 0x1d;
    do {
      pppppppuStack_180 = (undefined8 *******)CONCAT44(pppppppuStack_180._4_4_,(int)uVar8);
      lVar9 = *(long *)(*(long *)(param_6 + 0x18) + uVar8 * 8);
      ppppppuVar15 = *(undefined8 *******)(lVar9 + 0x60);
      if ((ppppppuVar15 != (undefined8 ******)0x0) &&
         (pppppppuVar10 = &pppppppuStack_130, pppppppuVar7 = pppppppuStack_130,
         ppppppuVar15 != *(undefined8 *******)(lVar9 + 0x58))) {
        while (pppppppuVar14 = pppppppuVar10, pppppppuVar7 != (undefined8 *******)0x0) {
          while (pppppppuVar5 = pppppppuVar7, pppppppuVar5[4] <= ppppppuVar15) {
            if (ppppppuVar15 <= pppppppuVar5[4]) goto LAB_1098b7178;
            pppppppuVar7 = (undefined8 *******)pppppppuVar5[1];
            if ((undefined8 *******)pppppppuVar5[1] == (undefined8 *******)0x0) {
              pppppppuVar10 = pppppppuVar5 + 1;
              pppppppuVar14 = pppppppuVar5;
              goto LAB_1098b7124;
            }
          }
          pppppppuVar10 = pppppppuVar5;
          pppppppuVar7 = (undefined8 *******)*pppppppuVar5;
        }
LAB_1098b7124:
        pppppppuVar5 = (undefined8 *******)0x40;
        __Znwm();
        pppppppuVar5[4] = ppppppuVar15;
        pppppppuVar5[5] = (undefined8 ******)0x0;
        pppppppuVar5[6] = (undefined8 ******)0x0;
        pppppppuVar5[7] = (undefined8 ******)0x0;
        *pppppppuVar5 = (undefined8 ******)0x0;
        pppppppuVar5[1] = (undefined8 ******)0x0;
        pppppppuVar5[2] = pppppppuVar14;
        *pppppppuVar10 = pppppppuVar5;
        pppppppuVar7 = pppppppuVar5;
        if ((undefined8 *******)*pppppppuStack_138 != (undefined8 *******)0x0) {
          pppppppuStack_138 = (undefined8 *******)*pppppppuStack_138;
          pppppppuVar7 = (undefined8 *******)*pppppppuVar10;
        }
        func_0x000107c27d40(pppppppuStack_130,pppppppuVar7);
        lStack_128 = lStack_128 + 1;
LAB_1098b7178:
        FUN_10923b3a0(pppppppuVar5 + 5,&pppppppuStack_180);
      }
      uVar8 = uVar8 + 1;
      pppppppuVar10 = pppppppuStack_138;
    } while ((int)uVar8 != iVar13);
    while ((undefined8 ********)pppppppuVar10 != &pppppppuStack_130) {
      ppppppuStack_140 = pppppppuVar10[4] + 2;
      pppppuStack_148 = pppppppuVar10[4][0x44] + 0xd;
      bStack_150 = 0;
      lStack_168 = 0;
      lStack_170 = 0;
      uStack_158 = 0;
      lStack_160 = 0;
      ppppppuStack_178 = (undefined8 ******)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      ppppppuVar15 = pppppppuVar10[5];
      ppppppuVar1 = pppppppuVar10[6];
      if (ppppppuVar15 == ppppppuVar1) {
LAB_1098b71fc:
        if ((lStack_168 != lStack_160) || ((bStack_150 & 1) != 0)) goto LAB_1098b7210;
      }
      else {
        do {
          FUN_1098ad16c(*(undefined8 *)(*(long *)(param_6 + 0x18) + (long)*(int *)ppppppuVar15 * 8),
                        &pppppppuStack_180);
          ppppppuVar15 = (undefined8 ******)((long)ppppppuVar15 + 4);
        } while (ppppppuVar15 != ppppppuVar1);
        if (pppppppuStack_180 == (undefined8 *******)ppppppuStack_178) goto LAB_1098b71fc;
LAB_1098b7210:
        func_0x0001098b0f24(&ppppppuStack_108,&ppppppuStack_140,&pppppppuStack_180);
        if (pppppppuStack_118 < pppppppuStack_110) {
          *pppppppuStack_118 = ppppppuStack_108;
          pppppppuStack_118 = pppppppuStack_118 + 1;
        }
        else {
          pppppppuVar7 = &pppppppuStack_120;
          FUN_1098b74c4(pppppppuVar7,&ppppppuStack_108);
          ppppppuVar15 = ppppppuStack_108;
          pppppppuStack_118 = pppppppuVar7;
          if (ppppppuStack_108 != (undefined8 ******)0x0) {
            ppppppuVar1 = ppppppuStack_108 + 1;
            do {
              pppppuVar11 = *ppppppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar3) {
                *ppppppuVar1 = (undefined8 *****)((long)pppppuVar11 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)pppppuVar11 & 0x1fffffffc) == 4) {
              do {
                pppppuVar11 = *ppppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
                if (bVar3) {
                  *ppppppuVar1 = (undefined8 *****)((long)pppppuVar11 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((undefined8 *****)((long)pppppuVar11 + -1) == (undefined8 *****)0x0) {
                (*(code *)(*ppppppuVar15)[1])();
              }
            }
          }
        }
      }
      if (lStack_168 != 0) {
        lStack_160 = lStack_168;
        __ZdlPv();
      }
      ppppppuStack_108 = &pppppppuStack_180;
      FUN_1098b0a40(&ppppppuStack_108);
      pppppppuVar7 = (undefined8 *******)pppppppuVar10[1];
      pppppppuVar14 = pppppppuVar10;
      if ((undefined8 *******)pppppppuVar10[1] == (undefined8 *******)0x0) {
        do {
          pppppppuVar10 = (undefined8 *******)pppppppuVar14[2];
          bVar3 = (undefined8 *******)*pppppppuVar10 != pppppppuVar14;
          pppppppuVar14 = pppppppuVar10;
        } while (bVar3);
      }
      else {
        do {
          pppppppuVar10 = pppppppuVar7;
          pppppppuVar7 = (undefined8 *******)*pppppppuVar10;
        } while ((undefined8 *******)*pppppppuVar10 != (undefined8 *******)0x0);
      }
    }
  }
  FUN_1098b790c(pppppppuStack_130);
  pppppppuVar7 = pppppppuStack_118;
  pppppppuVar10 = pppppppuStack_120;
  if (pppppppuStack_120 == pppppppuStack_118) {
    *extraout_x8 = 0;
  }
  else {
    pppppppuStack_138 = (undefined8 *******)((long)pppppppuStack_118 - (long)pppppppuStack_120 >> 3)
    ;
    FUN_1098b7954(&pppppppuStack_180,&pppppppuStack_138);
    plVar12 = (long *)(lStack_170 + 8);
    if (*plVar12 != 0) {
      FUN_1092b4274(plVar12);
    }
    *plVar12 = (long)ppppppuStack_178;
    ppppppuStack_178 = (undefined8 ******)0x0;
    lVar9 = 0;
    do {
      FUN_1098b799c(lStack_170,lVar9,pppppppuVar10);
      pppppppuVar10 = pppppppuVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (pppppppuVar10 != pppppppuVar7);
    *extraout_x8 = (long)pppppppuStack_180;
    pppppppuStack_180 = (undefined8 *******)0x0;
    if ((ppppppuStack_178 != (undefined8 ******)0x0) &&
       (FUN_1092b4274(&ppppppuStack_178), pppppppuStack_180 != (undefined8 *******)0x0)) {
      ppppppuVar15 = pppppppuStack_180 + 1;
      do {
        pppppuVar11 = *ppppppuVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar3) {
          *ppppppuVar15 = (undefined8 *****)((long)pppppuVar11 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)pppppuVar11 & 0x1fffffffc) == 4) {
        do {
          pppppuVar11 = *ppppppuVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
          if (bVar3) {
            *ppppppuVar15 = (undefined8 *****)((long)pppppuVar11 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 *****)((long)pppppuVar11 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppppuStack_180)[1])();
        }
      }
    }
  }
  pppppppuStack_180 = &pppppppuStack_120;
  func_0x0001098b784c(&pppppppuStack_180);
  return (undefined1 *)pppppppuVar6;
}



/* Entry: 1098b7058; end: 1098b7067;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098b7058(void)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  long in_x5;
  long *extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  int iVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  long lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  
  func_0x000105277f8c();
  pppppppuStack_90 = (undefined8 *******)0x0;
  pppppppuStack_88 = (undefined8 *******)0x0;
  pppppppuStack_80 = (undefined8 *******)0x0;
  pppppppuStack_a0 = (undefined8 *******)0x0;
  lStack_98 = 0;
  uVar6 = *(long *)(in_x5 + 0x20) - *(long *)(in_x5 + 0x18);
  iVar11 = (int)(uVar6 >> 3);
  pppppppuStack_a8 = &pppppppuStack_a0;
  if (iVar11 != (int)uVar6 * 0x20000000) {
    uVar6 = -(uVar6 >> 2 & 1) & 0xffffffff00000000 | (uVar6 & 7) << 0x1d;
    do {
      pppppppuStack_f0 = (undefined8 *******)CONCAT44(pppppppuStack_f0._4_4_,(int)uVar6);
      lVar7 = *(long *)(*(long *)(in_x5 + 0x18) + uVar6 * 8);
      ppppppuVar13 = *(undefined8 *******)(lVar7 + 0x60);
      if ((ppppppuVar13 != (undefined8 ******)0x0) &&
         (pppppppuVar8 = &pppppppuStack_a0, pppppppuVar5 = pppppppuStack_a0,
         ppppppuVar13 != *(undefined8 *******)(lVar7 + 0x58))) {
        while (pppppppuVar12 = pppppppuVar8, pppppppuVar5 != (undefined8 *******)0x0) {
          while (pppppppuVar4 = pppppppuVar5, pppppppuVar4[4] <= ppppppuVar13) {
            if (ppppppuVar13 <= pppppppuVar4[4]) goto LAB_1098b7178;
            pppppppuVar5 = (undefined8 *******)pppppppuVar4[1];
            if ((undefined8 *******)pppppppuVar4[1] == (undefined8 *******)0x0) {
              pppppppuVar8 = pppppppuVar4 + 1;
              pppppppuVar12 = pppppppuVar4;
              goto LAB_1098b7124;
            }
          }
          pppppppuVar8 = pppppppuVar4;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar4;
        }
LAB_1098b7124:
        pppppppuVar4 = (undefined8 *******)0x40;
        __Znwm();
        pppppppuVar4[4] = ppppppuVar13;
        pppppppuVar4[5] = (undefined8 ******)0x0;
        pppppppuVar4[6] = (undefined8 ******)0x0;
        pppppppuVar4[7] = (undefined8 ******)0x0;
        *pppppppuVar4 = (undefined8 ******)0x0;
        pppppppuVar4[1] = (undefined8 ******)0x0;
        pppppppuVar4[2] = pppppppuVar12;
        *pppppppuVar8 = pppppppuVar4;
        pppppppuVar5 = pppppppuVar4;
        if ((undefined8 *******)*pppppppuStack_a8 != (undefined8 *******)0x0) {
          pppppppuStack_a8 = (undefined8 *******)*pppppppuStack_a8;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
        }
        func_0x000107c27d40(pppppppuStack_a0,pppppppuVar5);
        lStack_98 = lStack_98 + 1;
LAB_1098b7178:
        FUN_10923b3a0(pppppppuVar4 + 5,&pppppppuStack_f0);
      }
      uVar6 = uVar6 + 1;
      pppppppuVar8 = pppppppuStack_a8;
    } while ((int)uVar6 != iVar11);
    while ((undefined8 ********)pppppppuVar8 != &pppppppuStack_a0) {
      ppppppuStack_b0 = pppppppuVar8[4] + 2;
      pppppuStack_b8 = pppppppuVar8[4][0x44] + 0xd;
      bStack_c0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      ppppppuStack_e8 = (undefined8 ******)0x0;
      pppppppuStack_f0 = (undefined8 *******)0x0;
      ppppppuVar13 = pppppppuVar8[5];
      ppppppuVar1 = pppppppuVar8[6];
      if (ppppppuVar13 == ppppppuVar1) {
LAB_1098b71fc:
        if ((lStack_d8 != lStack_d0) || ((bStack_c0 & 1) != 0)) goto LAB_1098b7210;
      }
      else {
        do {
          FUN_1098ad16c(*(undefined8 *)(*(long *)(in_x5 + 0x18) + (long)*(int *)ppppppuVar13 * 8),
                        &pppppppuStack_f0);
          ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 4);
        } while (ppppppuVar13 != ppppppuVar1);
        if (pppppppuStack_f0 == (undefined8 *******)ppppppuStack_e8) goto LAB_1098b71fc;
LAB_1098b7210:
        func_0x0001098b0f24(&ppppppuStack_78,&ppppppuStack_b0,&pppppppuStack_f0);
        if (pppppppuStack_88 < pppppppuStack_80) {
          *pppppppuStack_88 = ppppppuStack_78;
          pppppppuStack_88 = pppppppuStack_88 + 1;
        }
        else {
          pppppppuVar5 = &pppppppuStack_90;
          FUN_1098b74c4(pppppppuVar5,&ppppppuStack_78);
          ppppppuVar13 = ppppppuStack_78;
          pppppppuStack_88 = pppppppuVar5;
          if (ppppppuStack_78 != (undefined8 ******)0x0) {
            ppppppuVar1 = ppppppuStack_78 + 1;
            do {
              pppppuVar9 = *ppppppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar3) {
                *ppppppuVar1 = (undefined8 *****)((long)pppppuVar9 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)pppppuVar9 & 0x1fffffffc) == 4) {
              do {
                pppppuVar9 = *ppppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
                if (bVar3) {
                  *ppppppuVar1 = (undefined8 *****)((long)pppppuVar9 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((undefined8 *****)((long)pppppuVar9 + -1) == (undefined8 *****)0x0) {
                (*(code *)(*ppppppuVar13)[1])();
              }
            }
          }
        }
      }
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        __ZdlPv();
      }
      ppppppuStack_78 = &pppppppuStack_f0;
      FUN_1098b0a40(&ppppppuStack_78);
      pppppppuVar5 = (undefined8 *******)pppppppuVar8[1];
      pppppppuVar12 = pppppppuVar8;
      if ((undefined8 *******)pppppppuVar8[1] == (undefined8 *******)0x0) {
        do {
          pppppppuVar8 = (undefined8 *******)pppppppuVar12[2];
          bVar3 = (undefined8 *******)*pppppppuVar8 != pppppppuVar12;
          pppppppuVar12 = pppppppuVar8;
        } while (bVar3);
      }
      else {
        do {
          pppppppuVar8 = pppppppuVar5;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
        } while ((undefined8 *******)*pppppppuVar8 != (undefined8 *******)0x0);
      }
    }
  }
  FUN_1098b790c(pppppppuStack_a0);
  pppppppuVar5 = pppppppuStack_88;
  pppppppuVar8 = pppppppuStack_90;
  if (pppppppuStack_90 == pppppppuStack_88) {
    *extraout_x8 = 0;
  }
  else {
    pppppppuStack_a8 = (undefined8 *******)((long)pppppppuStack_88 - (long)pppppppuStack_90 >> 3);
    FUN_1098b7954(&pppppppuStack_f0,&pppppppuStack_a8);
    plVar10 = (long *)(lStack_e0 + 8);
    if (*plVar10 != 0) {
      FUN_1092b4274(plVar10);
    }
    *plVar10 = (long)ppppppuStack_e8;
    ppppppuStack_e8 = (undefined8 ******)0x0;
    lVar7 = 0;
    do {
      FUN_1098b799c(lStack_e0,lVar7,pppppppuVar8);
      pppppppuVar8 = pppppppuVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (pppppppuVar8 != pppppppuVar5);
    *extraout_x8 = (long)pppppppuStack_f0;
    pppppppuStack_f0 = (undefined8 *******)0x0;
    if ((ppppppuStack_e8 != (undefined8 ******)0x0) &&
       (FUN_1092b4274(&ppppppuStack_e8), pppppppuStack_f0 != (undefined8 *******)0x0)) {
      ppppppuVar13 = pppppppuStack_f0 + 1;
      do {
        pppppuVar9 = *ppppppuVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar3) {
          *ppppppuVar13 = (undefined8 *****)((long)pppppuVar9 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)pppppuVar9 & 0x1fffffffc) == 4) {
        do {
          pppppuVar9 = *ppppppuVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
          if (bVar3) {
            *ppppppuVar13 = (undefined8 *****)((long)pppppuVar9 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 *****)((long)pppppuVar9 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppppuStack_f0)[1])();
        }
      }
    }
  }
  pppppppuStack_f0 = &pppppppuStack_90;
  func_0x0001098b784c(&pppppppuStack_f0);
  return;
}



/* Entry: 1098b7068; end: 1098b747f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1098b7068(long *param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  int iVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  pppppppuStack_80 = (undefined8 *******)0x0;
  pppppppuStack_78 = (undefined8 *******)0x0;
  pppppppuStack_70 = (undefined8 *******)0x0;
  pppppppuStack_90 = (undefined8 *******)0x0;
  lStack_88 = 0;
  uVar6 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
  iVar11 = (int)(uVar6 >> 3);
  pppppppuStack_98 = &pppppppuStack_90;
  if (iVar11 != (int)uVar6 * 0x20000000) {
    uVar6 = -(uVar6 >> 2 & 1) & 0xffffffff00000000 | (uVar6 & 7) << 0x1d;
    do {
      pppppppuStack_e0 = (undefined8 *******)CONCAT44(pppppppuStack_e0._4_4_,(int)uVar6);
      lVar7 = *(long *)(*(long *)(param_2 + 0x18) + uVar6 * 8);
      ppppppuVar13 = *(undefined8 *******)(lVar7 + 0x60);
      if ((ppppppuVar13 != (undefined8 ******)0x0) &&
         (pppppppuVar8 = &pppppppuStack_90, pppppppuVar5 = pppppppuStack_90,
         ppppppuVar13 != *(undefined8 *******)(lVar7 + 0x58))) {
        while (pppppppuVar12 = pppppppuVar8, pppppppuVar5 != (undefined8 *******)0x0) {
          while (pppppppuVar4 = pppppppuVar5, pppppppuVar4[4] <= ppppppuVar13) {
            if (ppppppuVar13 <= pppppppuVar4[4]) goto LAB_1098b7178;
            pppppppuVar5 = (undefined8 *******)pppppppuVar4[1];
            if ((undefined8 *******)pppppppuVar4[1] == (undefined8 *******)0x0) {
              pppppppuVar8 = pppppppuVar4 + 1;
              pppppppuVar12 = pppppppuVar4;
              goto LAB_1098b7124;
            }
          }
          pppppppuVar8 = pppppppuVar4;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar4;
        }
LAB_1098b7124:
        pppppppuVar4 = (undefined8 *******)0x40;
        __Znwm();
        pppppppuVar4[4] = ppppppuVar13;
        pppppppuVar4[5] = (undefined8 ******)0x0;
        pppppppuVar4[6] = (undefined8 ******)0x0;
        pppppppuVar4[7] = (undefined8 ******)0x0;
        *pppppppuVar4 = (undefined8 ******)0x0;
        pppppppuVar4[1] = (undefined8 ******)0x0;
        pppppppuVar4[2] = pppppppuVar12;
        *pppppppuVar8 = pppppppuVar4;
        pppppppuVar5 = pppppppuVar4;
        if ((undefined8 *******)*pppppppuStack_98 != (undefined8 *******)0x0) {
          pppppppuStack_98 = (undefined8 *******)*pppppppuStack_98;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
        }
        func_0x000107c27d40(pppppppuStack_90,pppppppuVar5);
        lStack_88 = lStack_88 + 1;
LAB_1098b7178:
        FUN_10923b3a0(pppppppuVar4 + 5,&pppppppuStack_e0);
      }
      uVar6 = uVar6 + 1;
      pppppppuVar8 = pppppppuStack_98;
    } while ((int)uVar6 != iVar11);
    while ((undefined8 ********)pppppppuVar8 != &pppppppuStack_90) {
      ppppppuStack_a0 = pppppppuVar8[4] + 2;
      pppppuStack_a8 = pppppppuVar8[4][0x44] + 0xd;
      bStack_b0 = 0;
      lStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      lStack_c0 = 0;
      ppppppuStack_d8 = (undefined8 ******)0x0;
      pppppppuStack_e0 = (undefined8 *******)0x0;
      ppppppuVar13 = pppppppuVar8[5];
      ppppppuVar1 = pppppppuVar8[6];
      if (ppppppuVar13 == ppppppuVar1) {
LAB_1098b71fc:
        if ((lStack_c8 != lStack_c0) || ((bStack_b0 & 1) != 0)) goto LAB_1098b7210;
      }
      else {
        do {
          FUN_1098ad16c(*(undefined8 *)(*(long *)(param_2 + 0x18) + (long)*(int *)ppppppuVar13 * 8),
                        &pppppppuStack_e0);
          ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 4);
        } while (ppppppuVar13 != ppppppuVar1);
        if (pppppppuStack_e0 == (undefined8 *******)ppppppuStack_d8) goto LAB_1098b71fc;
LAB_1098b7210:
        func_0x0001098b0f24(&ppppppuStack_68,&ppppppuStack_a0,&pppppppuStack_e0);
        if (pppppppuStack_78 < pppppppuStack_70) {
          *pppppppuStack_78 = ppppppuStack_68;
          pppppppuStack_78 = pppppppuStack_78 + 1;
        }
        else {
          pppppppuVar5 = &pppppppuStack_80;
          FUN_1098b74c4(pppppppuVar5,&ppppppuStack_68);
          ppppppuVar13 = ppppppuStack_68;
          pppppppuStack_78 = pppppppuVar5;
          if (ppppppuStack_68 != (undefined8 ******)0x0) {
            ppppppuVar1 = ppppppuStack_68 + 1;
            do {
              pppppuVar9 = *ppppppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar3) {
                *ppppppuVar1 = (undefined8 *****)((long)pppppuVar9 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)pppppuVar9 & 0x1fffffffc) == 4) {
              do {
                pppppuVar9 = *ppppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
                if (bVar3) {
                  *ppppppuVar1 = (undefined8 *****)((long)pppppuVar9 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((undefined8 *****)((long)pppppuVar9 + -1) == (undefined8 *****)0x0) {
                (*(code *)(*ppppppuVar13)[1])();
              }
            }
          }
        }
      }
      if (lStack_c8 != 0) {
        lStack_c0 = lStack_c8;
        __ZdlPv();
      }
      ppppppuStack_68 = &pppppppuStack_e0;
      FUN_1098b0a40(&ppppppuStack_68);
      pppppppuVar5 = (undefined8 *******)pppppppuVar8[1];
      pppppppuVar12 = pppppppuVar8;
      if ((undefined8 *******)pppppppuVar8[1] == (undefined8 *******)0x0) {
        do {
          pppppppuVar8 = (undefined8 *******)pppppppuVar12[2];
          bVar3 = (undefined8 *******)*pppppppuVar8 != pppppppuVar12;
          pppppppuVar12 = pppppppuVar8;
        } while (bVar3);
      }
      else {
        do {
          pppppppuVar8 = pppppppuVar5;
          pppppppuVar5 = (undefined8 *******)*pppppppuVar8;
        } while ((undefined8 *******)*pppppppuVar8 != (undefined8 *******)0x0);
      }
    }
  }
  FUN_1098b790c(pppppppuStack_90);
  pppppppuVar5 = pppppppuStack_78;
  pppppppuVar8 = pppppppuStack_80;
  if (pppppppuStack_80 == pppppppuStack_78) {
    *param_1 = 0;
  }
  else {
    pppppppuStack_98 = (undefined8 *******)((long)pppppppuStack_78 - (long)pppppppuStack_80 >> 3);
    FUN_1098b7954(&pppppppuStack_e0,&pppppppuStack_98);
    plVar10 = (long *)(lStack_d0 + 8);
    if (*plVar10 != 0) {
      FUN_1092b4274(plVar10);
    }
    *plVar10 = (long)ppppppuStack_d8;
    ppppppuStack_d8 = (undefined8 ******)0x0;
    lVar7 = 0;
    do {
      FUN_1098b799c(lStack_d0,lVar7,pppppppuVar8);
      pppppppuVar8 = pppppppuVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (pppppppuVar8 != pppppppuVar5);
    *param_1 = (long)pppppppuStack_e0;
    pppppppuStack_e0 = (undefined8 *******)0x0;
    if ((ppppppuStack_d8 != (undefined8 ******)0x0) &&
       (FUN_1092b4274(&ppppppuStack_d8), pppppppuStack_e0 != (undefined8 *******)0x0)) {
      ppppppuVar13 = pppppppuStack_e0 + 1;
      do {
        pppppuVar9 = *ppppppuVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar3) {
          *ppppppuVar13 = (undefined8 *****)((long)pppppuVar9 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)pppppuVar9 & 0x1fffffffc) == 4) {
        do {
          pppppuVar9 = *ppppppuVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
          if (bVar3) {
            *ppppppuVar13 = (undefined8 *****)((long)pppppuVar9 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 *****)((long)pppppuVar9 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppppuStack_e0)[1])();
        }
      }
    }
  }
  pppppppuStack_e0 = &pppppppuStack_80;
  func_0x0001098b784c(&pppppppuStack_e0);
  return;
}



/* Entry: 1098b7480; end: 1098b74c3;  */

long FUN_1098b7480(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_1098b0a40(&lStack_28);
  return param_1;
}



/* Entry: 1098b74c4; end: 1098b75cb;  */

/* WARNING: Possible PIC construction at 0x0001098b7574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098b7578) */

void FUN_1098b74c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 **ppuVar16;
  undefined8 uVar17;
  undefined1 auStack_d8 [56];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  ppuVar4 = (undefined8 **)auStack_70;
  ppuVar16 = (undefined1 **)&stack0xfffffffffffffff0;
  plVar8 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  lVar15 = (long)plVar9 - (long)plVar8;
  lVar12 = lVar15 >> 3;
  uVar13 = lVar12 + 1;
  if (uVar13 >> 0x3d == 0) {
    uVar14 = param_1[2] - (long)plVar8 >> 2;
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - (long)plVar8)) {
      uVar14 = 0x1fffffffffffffff;
    }
    puStack_48 = param_1;
    if (uVar14 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = param_1;
      FUN_1098b75e0();
      plVar8 = (long *)*param_1;
      plVar9 = (long *)param_1[1];
      lVar12 = (long)plVar9 - (long)plVar8 >> 3;
    }
    puStack_60 = (undefined8 *)((long)puVar5 + lVar15);
    param_4 = puStack_60 + -lVar12;
    puStack_58 = puStack_60 + 1;
    *puStack_60 = *param_2;
    puStack_50 = puVar5 + uVar14;
    *param_2 = 0;
    uVar17 = 0x1098b7578;
    puVar6 = param_1;
    puStack_68 = puVar5;
  }
  else {
    FUN_1098b75cc();
    func_0x0001098b7794(&puStack_68);
    __Unwind_Resume(param_1);
    pcStack_78 = FUN_1098b75cc;
    puVar6 = (undefined8 *)&DAT_10f62a4d8;
    ppuStack_80 = ppuVar16;
    func_0x000104c4f6cc();
    ppuVar4 = &puStack_a0;
    pcStack_88 = FUN_1098b75e0;
    ppuVar16 = &puStack_90;
    puStack_a0 = param_2;
    puStack_98 = param_1;
    if ((ulong)plVar8 >> 0x3d == 0) {
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm((long)plVar8 << 3);
      return;
    }
    uVar17 = 0x1098b7614;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  *(undefined8 **)((long)ppuVar4 + -0x20) = param_2;
  *(undefined8 **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar16;
  *(undefined8 *)((long)ppuVar4 + -8) = uVar17;
  *(long **)((long)ppuVar4 + -0x28) = param_4;
  *(long **)((long)ppuVar4 + -0x30) = param_4;
  *(undefined8 **)((long)ppuVar4 + -0x50) = puVar6;
  *(undefined1 **)((long)ppuVar4 + -0x48) = (undefined1 *)((long)ppuVar4 + -0x30);
  *(undefined1 **)((long)ppuVar4 + -0x40) = (undefined1 *)((long)ppuVar4 + -0x28);
  plVar7 = plVar8;
  if (plVar8 == plVar9) {
    *(undefined1 *)((long)ppuVar4 + -0x38) = 1;
  }
  else {
    do {
      plVar10 = param_4 + 1;
      *param_4 = *plVar7;
      plVar11 = plVar7 + 1;
      *plVar7 = 0;
      param_4 = plVar10;
      plVar7 = plVar11;
    } while (plVar11 != plVar9);
    *(long **)((long)ppuVar4 + -0x28) = plVar10;
    *(undefined1 *)((long)ppuVar4 + -0x38) = 1;
    do {
      plVar7 = (long *)*plVar8;
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
  }
  FUN_1098b76e8((undefined1 *)((long)ppuVar4 + -0x50));
  return;
}



/* Entry: 1098b75cc; end: 1098b75df;  */

void FUN_1098b75cc(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    pplStack_78 = &plStack_60;
    pplStack_70 = &plStack_58;
    plVar5 = param_2;
    puStack_80 = puVar4;
    plStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
      plStack_58 = param_4;
    }
    else {
      do {
        plStack_58 = param_4 + 1;
        *param_4 = *plVar5;
        plVar6 = plVar5 + 1;
        *plVar5 = 0;
        param_4 = plStack_58;
        plVar5 = plVar6;
      } while (plVar6 != param_3);
      uStack_68 = 1;
      do {
        plVar5 = (long *)*param_2;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    FUN_1098b76e8(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 1098b75e0; end: 1098b76e7;  */

void FUN_1098b75e0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104c4f740();
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    plVar4 = param_2;
    uStack_70 = param_1;
    plStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
      plStack_48 = param_4;
    }
    else {
      do {
        plStack_48 = param_4 + 1;
        *param_4 = *plVar4;
        plVar5 = plVar4 + 1;
        *plVar4 = 0;
        param_4 = plStack_48;
        plVar4 = plVar5;
      } while (plVar5 != param_3);
      uStack_58 = 1;
      do {
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
            do {
              uVar6 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar6 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar6 - 1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    FUN_1098b76e8(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 1098b76e8; end: 1098b771b;  */

long FUN_1098b76e8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1098b771c(param_1);
  }
  return param_1;
}



/* Entry: 1098b771c; end: 1098b788b;  */

void FUN_1098b771c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)**(undefined8 **)(param_1 + 0x10);
  plVar7 = (long *)**(undefined8 **)(param_1 + 8);
  while (plVar6 != plVar7) {
    plVar6 = plVar6 + -1;
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  return;
}



/* Entry: 1098b788c; end: 1098b790b;  */

void FUN_1098b788c(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1098b790c; end: 1098b7953;  */

void FUN_1098b790c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1098b790c(*param_1);
    FUN_1098b790c(param_1[1]);
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1098b7954; end: 1098b799b;  */

void FUN_1098b7954(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  FUN_1098b7a54();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0xa0;
  return;
}



/* Entry: 1098b799c; end: 1098b7a53;  */

undefined1 FUN_1098b799c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + param_2 * 0x10);
  plVar2[1] = param_1;
  FUN_1092b4524(plVar2,param_3);
  lVar6 = *plVar2;
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pcStack_48 = FUN_1098b7cfc;
        ppuStack_38 = &PTR_PTR_1132fed68;
        plStack_40 = plVar2;
        func_0x000109d1b588(lVar6 + 0x18,&pcStack_48);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      func_0x000109d183ec(param_1);
      return 0;
    }
  } while( true );
}



/* Entry: 1098b7a54; end: 1098b7aeb;  */

undefined8 * FUN_1098b7a54(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 3;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_110b17cb0;
  FUN_1098b7ba0(param_1 + 0x14,*param_3);
  return param_1;
}



/* Entry: 1098b7aec; end: 1098b7b9f;  */

undefined8 * FUN_1098b7aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17cb0;
  func_0x0001098b7c64(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1092b4274();
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1098b7ba0; end: 1098b7bf3;  */

undefined8 * FUN_1098b7ba0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1098b7bf4(param_1 + 3);
  return param_1;
}



/* Entry: 1098b7bf4; end: 1098b7cfb;  */

undefined8 * FUN_1098b7bf4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_2 * 0x10;
  puVar2 = (undefined8 *)(uVar3 + 0x10);
  if (0xffffffffffffffef < uVar3 || (param_2 & 0xf000000000000000) != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = param_2;
  puVar1 = puVar2 + 2;
  while (param_2 != 0) {
    *puVar1 = 0;
    uVar3 = uVar3 - 0x10;
    puVar1 = puVar1 + 2;
    param_2 = uVar3;
  }
  *param_1 = puVar2 + 2;
  return param_1;
}



/* Entry: 1098b7cfc; end: 1098b7d13;  */

void FUN_1098b7cfc(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_18;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar3 = plVar4[3];
  plVar5 = plVar4 + 2;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == *plVar4 + -1) {
    lStack_18 = plVar4[1];
    plVar4[1] = 0;
    plVar4 = (long *)(lStack_18 + 0x10);
    do {
      lVar6 = *plVar4;
      if (lVar6 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          func_0x000109d1b4dc(lStack_18 + 0x18,param_1 - lVar3 >> 4);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    if (lStack_18 != 0) {
      FUN_1092b4274(&lStack_18);
    }
  }
  return;
}



/* Entry: 1098b7d14; end: 1098b7ddf;  */

void FUN_1098b7d14(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar5 = *param_2;
  __ZNSt3__15mutex4lockEv(lVar5 + 0x558);
  plVar4 = *(long **)(lVar5 + 0x550);
  *(undefined8 *)(lVar5 + 0x550) = 0;
  *(undefined8 *)(lVar5 + 0x548) = 0;
  __ZNSt3__15mutex6unlockEv(lVar5 + 0x558);
  if (plVar4 != (long *)0x0) {
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lStack_48 = *param_2 + 0x10;
  uStack_38 = 1;
  lStack_40 = lStack_48;
  FUN_1098bef88(param_1,*param_2 + 0xa8,&lStack_48);
  return;
}



/* Entry: 1098b7de0; end: 1098b7eb3;  */

void FUN_1098b7de0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 **ppuVar12;
  code *pcVar13;
  undefined8 *apuStack_160 [7];
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  plVar6 = &lStack_80;
  plVar4 = &lStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *param_1;
  lStack_80 = *param_2;
  lStack_78 = param_2[1];
  appuStack_70[0] = &PTR_FUN_110ae9180;
  plVar10 = param_2 + 2;
  (**(code **)(*plVar10 + 0x10))(appuStack_70,plVar10);
  param_2[1] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar10)(plVar10);
  *plVar10 = (long)&PTR_FUN_110ae9180;
  FUN_1098c11d4(uVar9);
  FUN_1092ba41c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092ba41c(&lStack_80);
  __Unwind_Resume();
  pcStack_88 = FUN_1098b7eb4;
  ppuVar12 = &puStack_90;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_1098b7fe8(*plVar4);
  uVar9 = *(undefined8 *)(*plVar4 + 0x660);
  lVar11 = *plVar4;
  uVar8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_160,param_3 + 1);
  lStack_128 = lVar11 + 0x10;
  lStack_120 = lVar11;
  puStack_118 = (undefined1 *)plVar6;
  uStack_110 = uVar9;
  uStack_108 = uVar8;
  (*(code *)apuStack_160[0][2])(apuStack_100,apuStack_160);
  plVar4 = &lStack_128;
  FUN_1098b80cc(extraout_x8,lVar11 + 0xa8);
  (*(code *)*apuStack_100[0])(apuStack_100);
  ppuVar5 = apuStack_160;
  (*(code *)*apuStack_160[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_100[0])(apuStack_100);
  (*(code *)*apuStack_160[0])(apuStack_160);
  __Unwind_Resume();
  pcVar13 = FUN_1098b7fe8;
  ppuVar1 = ppuVar5 + 0xb3;
  do {
    puVar7 = *ppuVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
    if (bVar3) {
      *ppuVar1 = plVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((puVar7 != (undefined8 *)0x0 && (long)plVar4 <= (long)puVar7) &&
     ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    ppuVar1 = (undefined8 **)ppuVar5[0x29];
    if (-1 < *(char *)((long)ppuVar5 + 0x15f)) {
      ppuVar1 = ppuVar5 + 0x29;
    }
    func_0x00010ae06f08(1,8,&UNK_10f5861bb,&UNK_10f58623f,0x50,&UNK_10f586284,in_x6,in_x7,
                        &UNK_10f5862f9,ppuVar1,puVar7,plVar4,ppuVar12,pcVar13);
  }
  return;
}



/* Entry: 1098b7eb4; end: 1098b7fe7;  */

void FUN_1098b7eb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 *apuStack_e0 [7];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  puVar10 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1098b7fe8(*param_2);
  uVar6 = *(undefined8 *)(*param_2 + 0x660);
  lVar9 = *param_2;
  uVar8 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_e0,param_4 + 1);
  lStack_a8 = lVar9 + 0x10;
  lStack_a0 = lVar9;
  uStack_98 = param_3;
  uStack_90 = uVar6;
  uStack_88 = uVar8;
  (*(code *)apuStack_e0[0][2])(apuStack_80,apuStack_e0);
  plVar5 = &lStack_a8;
  FUN_1098b80cc(param_1,lVar9 + 0xa8);
  (*(code *)*apuStack_80[0])(apuStack_80);
  ppuVar4 = apuStack_e0;
  (*(code *)*apuStack_e0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  (*(code *)*apuStack_e0[0])(apuStack_e0);
  __Unwind_Resume();
  pcVar11 = FUN_1098b7fe8;
  ppuVar1 = ppuVar4 + 0xb3;
  do {
    puVar7 = *ppuVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
    if (bVar3) {
      *ppuVar1 = plVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((puVar7 != (undefined8 *)0x0 && (long)plVar5 <= (long)puVar7) &&
     ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    ppuVar1 = (undefined8 **)ppuVar4[0x29];
    if (-1 < *(char *)((long)ppuVar4 + 0x15f)) {
      ppuVar1 = ppuVar4 + 0x29;
    }
    func_0x00010ae06f08(1,8,&UNK_10f5861bb,&UNK_10f58623f,0x50,&UNK_10f586284,in_x6,in_x7,
                        &UNK_10f5862f9,ppuVar1,puVar7,plVar5,puVar10,pcVar11);
  }
  return;
}



/* Entry: 1098b7fe8; end: 1098b8073;  */

void FUN_1098b7fe8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x598);
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = param_2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((lVar5 != 0 && param_2 <= lVar5) && ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x148);
    if (-1 < *(char *)(param_1 + 0x15f)) {
      lVar2 = param_1 + 0x148;
    }
    func_0x00010ae06f08(1,8,&UNK_10f5861bb,&UNK_10f58623f,0x50,&UNK_10f586284,in_x6,in_x7,
                        &UNK_10f5862f9,lVar2,lVar5,param_2);
  }
  return;
}



/* Entry: 1098b8074; end: 1098b80cb;  */

long FUN_1098b8074(long param_1)

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



/* Entry: 1098b80cc; end: 1098b83ef;  */

/* WARNING: Removing unreachable block (ram,0x0001098b81d8) */

void FUN_1098b80cc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0xc8;
  __Znwm();
  *puVar5 = FUN_1098b9b54;
  puVar5[1] = FUN_1098b9dc0;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[9] = *param_3;
  uVar11 = param_3[1];
  puVar5[0xb] = param_3[2];
  puVar5[10] = uVar11;
  uVar11 = param_3[4];
  puVar5[0xc] = param_3[3];
  puVar5[0xd] = uVar11;
  (**(code **)(param_3[5] + 0x10))(puVar5 + 0xe,param_3 + 5);
  puVar5[0x15] = param_2;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  puVar6 = puVar5 + 0x15;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098b83f0(puVar5 + 0x17,puVar5 + 9);
    puVar5[0x15] = puVar5[0x17];
    plVar7 = (long *)(puVar5[0x17] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0x15] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x18) = 1;
      lVar8 = puVar5[0x15];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0x15];
    if (((uint)*(undefined8 *)(puVar5[0x15] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0x17];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      (**(code **)puVar5[0xe])(puVar5 + 0xe);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b8304);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098b83f0; end: 1098b86ff;  */

void FUN_1098b83f0(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar10 = *param_2;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_1098b981c;
  puVar5[1] = FUN_1098b9a88;
  puVar5[0xc] = param_2;
  puVar5[0xd] = lVar10;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar6 = lVar10 + 0x20;
  puVar5[10] = uVar6;
  func_0x000109d197a4();
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xe) = 0;
    uVar6 = puVar5[10];
    uStack_38 = puVar5[3];
    uStack_48 = 0;
    puStack_40 = puVar5;
    func_0x000109d197e8(uVar6,&uStack_48);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  puVar5[9] = puVar5[10];
  FUN_1098b8700(puVar5 + 0xb,puVar5[0xd] + 0x98,puVar5[0xc] + 8);
  puVar5[10] = puVar5[0xb];
  plVar7 = (long *)(puVar5[0xb] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xe) = 1;
    lVar8 = puVar5[10];
    plVar7 = (long *)(lVar8 + 0x10);
    uVar9 = puVar5[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          uStack_38 = uVar9;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar5[10];
  if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    FUN_1092ba100(puVar5 + 2);
    func_0x000109d19904(puVar5 + 9);
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
    return;
  }
  FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b8614);
  (*pcVar4)();
}



/* Entry: 1098b8700; end: 1098b8a1b;  */

/* WARNING: Removing unreachable block (ram,0x0001098b8804) */

void FUN_1098b8700(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0xc0;
  __Znwm();
  *puVar5 = FUN_1098b94dc;
  puVar5[1] = FUN_1098b9748;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  uVar11 = param_3[3];
  puVar5[0xb] = param_3[2];
  puVar5[0xc] = uVar11;
  (**(code **)(param_3[4] + 0x10))(puVar5 + 0xd,param_3 + 4);
  puVar5[0x14] = param_2;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  *(undefined1 *)(puVar5 + 0x17) = 0;
  puVar6 = puVar5 + 0x14;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098b8a1c(puVar5 + 0x16,puVar5 + 9);
    puVar5[0x14] = puVar5[0x16];
    plVar7 = (long *)(puVar5[0x16] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0x14] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x17) = 1;
      lVar8 = puVar5[0x14];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0x14];
    if (((uint)*(undefined8 *)(puVar5[0x14] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0x16];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      (**(code **)puVar5[0xd])(puVar5 + 0xd);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b8930);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098b8a1c; end: 1098b8fab;  */

/* WARNING: Removing unreachable block (ram,0x0001098b8c34) */

void FUN_1098b8a1c(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_1098b91b8;
  puVar5[1] = FUN_1098b93e0;
  puVar5[0xd] = param_2;
  FUN_1092ba17c(puVar5 + 2);
  lVar9 = puVar5[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar9;
  *(undefined4 *)(*param_2 + 0x28) = 2;
  lVar9 = *param_2;
  puVar5[0xe] = lVar9;
  if (*(long *)(lVar9 + 0x660) == param_2[2]) {
    lVar9 = *param_2;
    if (*(int *)(lVar9 + 8) == 1) {
      if (*(long *)(lVar9 + 0x598) != param_2[1]) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          lVar11 = *param_2;
          lVar9 = *(long *)(lVar11 + 0x148);
          if (-1 < *(char *)(lVar11 + 0x15f)) {
            lVar9 = lVar11 + 0x148;
          }
          func_0x00010ae06f08(1,4,&UNK_10f586302,&UNK_10f58638e,0x38,&UNK_10f586452,in_x6,in_x7,
                              &UNK_10f5862f9,lVar9);
        }
        goto LAB_1098b8e68;
      }
      lVar9 = *param_2;
    }
    if ((int)((ulong)(*(long *)(*(long *)(lVar9 + 0x220) + 0x20) -
                     *(long *)(*(long *)(lVar9 + 0x220) + 0x18)) >> 5) * -0x55555555 != 0) {
      uVar12 = *(undefined8 *)(lVar9 + 0x5a0);
      lVar9 = *(long *)(lVar9 + 0x5a8);
      puVar6 = (undefined8 *)0x38;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110b17ce8;
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6[3] = uVar12;
      puVar6[4] = lVar9;
      lStack_58 = 0;
      puStack_50 = (undefined8 *)0x0;
      FUN_1098b2808(puVar6 + 5,uVar12);
      puVar5[9] = puVar6 + 3;
      puVar5[10] = puVar6;
      lStack_58 = puVar6[6];
      puStack_50 = (undefined8 *)(*(long *)(puVar6[3] + 0x40) + 0x38);
      plVar8 = &lStack_58;
      FUN_1098b9090(plVar8,0);
      lVar9 = param_2[1];
      plVar7 = (long *)0x8;
      __Znwm();
      *plVar7 = lVar9;
      lVar9 = *plVar8;
      *plVar8 = (long)plVar7;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
      lVar9 = *param_2;
      if (*(int *)(lVar9 + 0x228) != -1) {
        (*(code *)param_2[3])
                  (((long *)puVar5[9])[3],
                   *(long *)(*(long *)puVar5[9] + 0x40) + (long)*(int *)(lVar9 + 0x228) * 0x38);
        lVar9 = *param_2;
      }
      FUN_1098c1260(puVar5 + 0xc,lVar9,puVar5 + 9);
      puVar5[0xb] = puVar5[0xc];
      plVar8 = (long *)(puVar5[0xc] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0xf) = 0;
        lVar9 = puVar5[0xb];
        plVar8 = (long *)(lVar9 + 0x10);
        uStack_48 = puVar5[3];
        do {
          lVar11 = *plVar8;
          if (lVar11 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lStack_58 = 0;
              puStack_50 = puVar5;
              func_0x000109d1b588(lVar9 + 0x18,&lStack_58);
              *(undefined8 *)(lVar9 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar11 >> 1 & 1) == 0);
      }
      plVar8 = (long *)puVar5[0xb];
      if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
        FUN_1092af97c(plVar8 + 0x12);
        goto LAB_1098b8e7c;
      }
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar5[0xc];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar10 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar10 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar5[10];
      if (plVar8 != (long *)0x0) {
        plVar7 = plVar8 + 1;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar9 = *(long *)puVar5[0xd];
    }
    FUN_1098bdbd8(lVar9 + 0x10,0);
    if ((*(byte *)(*(long *)puVar5[0xd] + 0x10) & 1) == 0) {
      FUN_1092ba100(puVar5 + 2);
      *(undefined4 *)(puVar5[0xe] + 0x28) = 0;
      func_0x000109d1a1d0(puVar5 + 2);
      __ZdlPv(puVar5);
      return;
    }
    *(byte *)(*(long *)puVar5[0xd] + 0x10) = 0;
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      lVar11 = *param_2;
      lVar9 = *(long *)(lVar11 + 0x148);
      if (-1 < *(char *)(lVar11 + 0x15f)) {
        lVar9 = lVar11 + 0x148;
      }
      func_0x00010ae06f08(1,4,&UNK_10f586302,&UNK_10f58638e,0x33,&UNK_10f586413,in_x6,in_x7,
                          &UNK_10f5862f9,lVar9);
    }
LAB_1098b8e68:
    func_0x000109d1857c();
  }
  FUN_1092af97c();
LAB_1098b8e7c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b8e80);
  (*pcVar4)();
}



/* Entry: 1098b8fac; end: 1098b8fbb;  */

void FUN_1098b8fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17ce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098b8fbc; end: 1098b8fdb;  */

void FUN_1098b8fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17ce8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098b8fdc; end: 1098b9003;  */

long FUN_1098b8fdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0001098b288c(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 1098b9004; end: 1098b9007;  */

void FUN_1098b9004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098b9008; end: 1098b908f;  */

long FUN_1098b9008(long param_1)

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



/* Entry: 1098b9090; end: 1098b915f;  */

long FUN_1098b9090(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam00000001132e0540 & 1) == 0) {
    iVar2 = 0x132e0540;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(0x1098b9060,0x1132e0538,0x100000000);
      ___cxa_guard_release(0x1132e0540);
    }
  }
  plVar3 = (long *)param_1[1];
  uVar1 = (int)param_2 >> 0x1d;
  if (uVar1 == 1) {
    lVar4 = plVar3[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      plVar3 = plVar3 + 6;
      goto LAB_1098b90e4;
    }
    lVar4 = *plVar3;
  }
  plVar3 = (long *)(lVar4 + (param_2 & 0x1fffffff) * 8);
LAB_1098b90e4:
  if (*plVar3 == -1) {
    lVar4 = 0x1132e0538;
  }
  else {
    lVar4 = *param_1 + *plVar3;
  }
  return lVar4;
}



/* Entry: 1098b9160; end: 1098b91b7;  */

long FUN_1098b9160(long param_1)

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



/* Entry: 1098b91b8; end: 1098b93df;  */

void FUN_1098b91b8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar8 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar8 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar8 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x50);
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar9 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    FUN_1098bdbd8(**(long **)(param_1 + 0x68) + 0x10,0);
    lVar9 = **(long **)(param_1 + 0x68);
    pbVar3 = (byte *)(lVar9 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      FUN_1092ba100(param_1 + 0x10);
      *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x28) = 0;
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    *pbVar3 = 0;
    FUN_1092af97c(lVar9 + 0x18);
  }
  else {
    FUN_1092af97c(plVar7 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098b9310);
  (*pcVar6)();
}



/* Entry: 1098b93e0; end: 1098b94db;  */

void FUN_1098b93e0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x28) = 0;
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b94dc; end: 1098b9747;  */

void FUN_1098b94dc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    FUN_1098b8a1c(param_1 + 0xb0,param_1 + 0x48);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xb0);
    plVar5 = (long *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      lVar8 = *(long *)(param_1 + 0xa0);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b967c);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x68))();
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b9748; end: 1098b981b;  */

void FUN_1098b9748(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xa0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xb0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x68))();
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b981c; end: 1098b9a87;  */

void FUN_1098b981c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    FUN_1098b8700(param_1 + 0x58,*(long *)(param_1 + 0x68) + 0x98,*(long *)(param_1 + 0x60) + 8);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar8 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b99c4);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  func_0x000109d19904(param_1 + 0x48);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b9a88; end: 1098b9b53;  */

void FUN_1098b9a88(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    func_0x000109d19904(param_1 + 0x48);
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b9b54; end: 1098b9dbf;  */

void FUN_1098b9b54(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    FUN_1098b83f0(param_1 + 0xb8,param_1 + 0x48);
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xb8);
    plVar5 = (long *)(*(long *)(param_1 + 0xb8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      lVar8 = *(long *)(param_1 + 0xa8);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0xa8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b9cf4);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0xb8);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x70))();
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b9dc0; end: 1098b9e93;  */

void FUN_1098b9dc0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xa8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x70))();
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b9e94; end: 1098b9fe7;  */

undefined *** FUN_1098b9e94(undefined ***param_1)

{
  ulong *puVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  long *plVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[7] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[9] = (undefined **)0x0;
  param_1[8] = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  param_1[5] = (undefined **)0x0;
  param_1[4] = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  *param_1 = (undefined **)0x0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  ppuStack_c0 = &PTR_FUN_110ae9180;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_88 = 0x1098ba5f4;
  ppuStack_80 = &PTR_FUN_110ae9180;
  puVar5 = (undefined8 *)0xb0;
  __Znwm();
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[6] = FUN_1098ba5e4;
  puVar5[7] = &PTR_FUN_110ae9180;
  puVar5[0xe] = 0x1098ba5f4;
  puVar5[0xf] = &PTR_FUN_110ae9180;
  *puVar5 = &PTR_DAT_110b17d38;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  FUN_1098ba2b4(param_1,&UNK_10e009763,0x24,puVar5);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  pppuVar6 = &ppuStack_c0;
  (*(code *)*ppuStack_c0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  func_0x0001098baad8(param_1 + 6);
  FUN_1098ba600(param_1);
  __Unwind_Resume();
  lStack_130 = 0;
  plStack_128 = (long *)0x0;
  plStack_120 = (long *)0x0;
  FUN_1098ba1fc(&lStack_130,pppuVar6[5]);
  ppuVar9 = pppuVar6[1];
  ppuVar11 = pppuVar6[2];
  if (ppuVar11 != ppuVar9) {
    ppuVar10 = pppuVar6[4];
    ppuVar2 = pppuVar6[5];
    uVar13 = (ulong)ppuVar10 >> 4;
    ppuVar12 = ppuVar9 + uVar13;
    puVar15 = *ppuVar12 + ((ulong)ppuVar10 & 0xf) * 0x668;
    puVar14 = ppuVar9[(ulong)((long)ppuVar2 + (long)ppuVar10) >> 4];
    if (puVar15 != puVar14 + ((long)ppuVar2 + (long)ppuVar10 & 0xfU) * 0x668) {
      do {
        plStack_118 = (long *)(puVar15 + 0x10);
        FUN_1098be350(&plStack_138,&PTR_PTR_1132fed50,&plStack_118);
        if (plStack_128 < plStack_120) {
          *plStack_128 = (long)plStack_138;
          plStack_128 = plStack_128 + 1;
        }
        else {
          plVar7 = &lStack_130;
          FUN_1098b74c4(plVar7,&plStack_138);
          plStack_128 = plVar7;
          if (plStack_138 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_138 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plStack_138 + 8))();
              }
            }
          }
        }
        puVar15 = puVar15 + 0x668;
        if ((long)puVar15 - (long)*ppuVar12 == 0x6680) {
          ppuVar12 = ppuVar12 + 1;
          puVar15 = *ppuVar12;
        }
      } while (puVar15 != puVar14 + ((long)ppuVar2 + (long)ppuVar10 & 0xfU) * 0x668);
      ppuVar10 = pppuVar6[4];
      ppuVar9 = pppuVar6[1];
      ppuVar11 = pppuVar6[2];
      uVar13 = (ulong)ppuVar10 >> 4;
    }
    if (ppuVar11 != ppuVar9) {
      ppuVar11 = ppuVar9 + uVar13;
      puVar15 = *ppuVar11 + ((ulong)ppuVar10 & 0xf) * 0x668;
      ppuVar12 = pppuVar6[5];
      puVar14 = ppuVar9[(ulong)((long)ppuVar12 + (long)ppuVar10) >> 4];
      if (puVar15 != puVar14 + ((long)ppuVar12 + (long)ppuVar10 & 0xfU) * 0x668) {
        lVar16 = 0;
        do {
          uVar8 = (uint)*(undefined8 *)(*(long *)(lStack_130 + lVar16 * 8) + 0x10);
          while ((uVar8 >> 1 & 1) == 0) {
            func_0x000109d202f4(puVar15 + 0x270);
            uVar8 = (uint)*(undefined8 *)(*(long *)(lStack_130 + lVar16 * 8) + 0x10);
          }
          puVar15 = puVar15 + 0x668;
          if ((long)puVar15 - (long)*ppuVar11 == 0x6680) {
            ppuVar11 = ppuVar11 + 1;
            puVar15 = *ppuVar11;
          }
          lVar16 = lVar16 + 1;
        } while (puVar15 != puVar14 + ((long)ppuVar12 + (long)ppuVar10 & 0xfU) * 0x668);
      }
    }
  }
  plStack_118 = &lStack_130;
  func_0x0001098b784c(&plStack_118);
  func_0x0001098baad8(pppuVar6 + 6);
  FUN_1098ba600(pppuVar6);
  return pppuVar6;
}



/* Entry: 1098b9fe8; end: 1098ba1fb;  */

void FUN_1098b9fe8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  FUN_1098ba1fc(&lStack_60,*(undefined8 *)(param_1 + 0x28));
  lVar12 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != lVar12) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar8 = uVar7 >> 4;
    plVar9 = (long *)(lVar12 + uVar8 * 8);
    lVar11 = *plVar9 + (uVar7 & 0xf) * 0x668;
    uVar6 = *(long *)(param_1 + 0x28) + uVar7;
    lVar13 = *(long *)(lVar12 + (uVar6 >> 4) * 8) + (uVar6 & 0xf) * 0x668;
    if (lVar11 != lVar13) {
      do {
        plStack_48 = (long *)(lVar11 + 0x10);
        FUN_1098be350(&plStack_68,&PTR_PTR_1132fed50,&plStack_48);
        if (plStack_58 < plStack_50) {
          *plStack_58 = (long)plStack_68;
          plStack_58 = plStack_58 + 1;
        }
        else {
          plVar4 = &lStack_60;
          FUN_1098b74c4(plVar4,&plStack_68);
          plStack_58 = plVar4;
          if (plStack_68 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_68 + 1);
            do {
              uVar6 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar6 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar6 & 0x1fffffffc) == 4) {
              do {
                uVar6 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar6 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar6 - 1 == 0) {
                (**(code **)(*plStack_68 + 8))();
              }
            }
          }
        }
        lVar11 = lVar11 + 0x668;
        if (lVar11 - *plVar9 == 0x6680) {
          plVar9 = plVar9 + 1;
          lVar11 = *plVar9;
        }
      } while (lVar11 != lVar13);
      uVar7 = *(ulong *)(param_1 + 0x20);
      lVar12 = *(long *)(param_1 + 8);
      lVar10 = *(long *)(param_1 + 0x10);
      uVar8 = uVar7 >> 4;
    }
    if (lVar10 != lVar12) {
      plVar9 = (long *)(lVar12 + uVar8 * 8);
      lVar10 = *plVar9 + (uVar7 & 0xf) * 0x668;
      uVar7 = *(long *)(param_1 + 0x28) + uVar7;
      lVar12 = *(long *)(lVar12 + (uVar7 >> 4) * 8) + (uVar7 & 0xf) * 0x668;
      if (lVar10 != lVar12) {
        lVar11 = 0;
        do {
          uVar5 = (uint)*(undefined8 *)(*(long *)(lStack_60 + lVar11 * 8) + 0x10);
          while ((uVar5 >> 1 & 1) == 0) {
            func_0x000109d202f4(lVar10 + 0x270);
            uVar5 = (uint)*(undefined8 *)(*(long *)(lStack_60 + lVar11 * 8) + 0x10);
          }
          lVar10 = lVar10 + 0x668;
          if (lVar10 - *plVar9 == 0x6680) {
            plVar9 = plVar9 + 1;
            lVar10 = *plVar9;
          }
          lVar11 = lVar11 + 1;
        } while (lVar10 != lVar12);
      }
    }
  }
  plStack_48 = &lStack_60;
  func_0x0001098b784c(&plStack_48);
  func_0x0001098baad8(param_1 + 0x30);
  FUN_1098ba600(param_1);
  return;
}



/* Entry: 1098ba1fc; end: 1098ba2b3;  */

void FUN_1098ba1fc(long *param_1,ulong param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong *apuStack_b8 [3];
  long *plStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_1098b75cc();
      func_0x0001098b7794(&plStack_58);
      __Unwind_Resume();
      plVar2 = param_1 + 6;
      plStack_a0 = param_4;
      uStack_98 = param_2;
      uStack_90 = param_3;
      FUN_1098bbfb0(plVar2,&uStack_98);
      if (plVar2 == (long *)0x0) {
        apuStack_b8[0] = &uStack_98;
        pplStack_88 = &plStack_a0;
        FUN_1098bbb14(param_1 + 6,&uStack_98,&UNK_10dd5b8f9,apuStack_b8,&pplStack_88);
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f5864bd,&UNK_10f586536,0x22,&UNK_10f5865a6,param_7,param_8,
                              &UNK_10f5865c9,&UNK_10f5865d2,uStack_98);
        }
        plVar2 = plStack_a0;
        plStack_a0 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        return;
      }
      func_0x00010b0ae4b8(apuStack_b8,&UNK_10f58648f,0x2d);
      func_0x000105687ee0(apuStack_b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098ba3c4);
      (*pcVar1)();
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_1098b75e0();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar3;
    plStack_48 = (long *)lVar3;
    plStack_40 = plVar2 + param_2;
    func_0x0001098b7614(param_1,*param_1,param_1[1],lVar4);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + param_2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x0001098b7794(&plStack_58);
  }
  return;
}



/* Entry: 1098ba2b4; end: 1098ba403;  */

void FUN_1098ba2b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *apuStack_58 [3];
  long *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long **pplStack_28;
  
  lVar3 = param_1 + 0x30;
  plStack_40 = param_4;
  uStack_38 = param_2;
  uStack_30 = param_3;
  FUN_1098bbfb0(lVar3,&uStack_38);
  if (lVar3 == 0) {
    apuStack_58[0] = &uStack_38;
    pplStack_28 = &plStack_40;
    FUN_1098bbb14(param_1 + 0x30,&uStack_38,&UNK_10dd5b8f9,apuStack_58,&pplStack_28);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f5864bd,&UNK_10f586536,0x22,&UNK_10f5865a6,param_7,param_8,
                          &UNK_10f5865c9,&UNK_10f5865d2,uStack_38);
    }
    plVar1 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    return;
  }
  func_0x00010b0ae4b8(apuStack_58,&UNK_10f58648f,0x2d);
  func_0x000105687ee0(apuStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098ba3c4);
  (*pcVar2)();
}



/* Entry: 1098ba404; end: 1098ba4ef;  */

long FUN_1098ba404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar5 != lVar4) {
    lVar3 = (lVar5 - lVar4) * 2 + -1;
  }
  if (lVar3 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_1098bc0ac(param_1);
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == lVar4) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar4 + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x668;
  }
  FUN_1098bc4ec(lVar3,param_2,param_3,param_4);
  lVar3 = *(long *)(param_1 + 0x28) + 1;
  *(long *)(param_1 + 0x28) = lVar3;
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 >> 4) * 8);
  lVar5 = *plVar2;
  lVar3 = lVar5 + (uVar1 & 0xf) * 0x668;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar4 = lVar3;
  }
  if (lVar4 == lVar5) {
    lVar3 = plVar2[-1] + 0x6680;
  }
  return lVar3 + -0x668;
}



/* Entry: 1098ba4f0; end: 1098ba5e3;  */

long FUN_1098ba4f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((param_3 != 0) && (lVar2 = *(long *)(param_1 + 8), *(long *)(param_1 + 0x10) != lVar2)) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    plVar7 = (long *)(lVar2 + (uVar3 >> 4) * 8);
    lVar8 = *plVar7;
    uVar1 = *(long *)(param_1 + 0x28) + uVar3;
    lVar6 = *(long *)(lVar2 + (uVar1 >> 4) * 8);
    lVar2 = lVar8 + (uVar3 & 0xf) * 0x668;
    while (lVar2 != lVar6 + (uVar1 & 0xf) * 0x668) {
      bVar4 = *(byte *)(lVar2 + 0x15f);
      uVar3 = *(ulong *)(lVar2 + 0x150);
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
      }
      if (uVar3 - 5 <= uVar3) {
        uVar3 = uVar3 - 5;
      }
      if (uVar3 == param_3) {
        lVar5 = *(long *)(lVar2 + 0x148);
        if (-1 < (char)bVar4) {
          lVar5 = lVar2 + 0x148;
        }
        _memcmp(lVar5,param_2,param_3);
        if ((int)lVar5 == 0) {
          return lVar2;
        }
      }
      lVar2 = lVar2 + 0x668;
      if (lVar2 - lVar8 == 0x6680) {
        plVar7 = plVar7 + 1;
        lVar8 = *plVar7;
        lVar2 = lVar8;
      }
    }
  }
  return 0;
}



/* Entry: 1098ba5e4; end: 1098ba5ff;  */

long * FUN_1098ba5e4(void)

{
  long *in_x3;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  func_0x000105277f8c();
  func_0x000105277f8c();
  puVar3 = (undefined8 *)in_x3[1];
  puVar1 = (undefined8 *)in_x3[2];
  puVar5 = puVar3;
  if (puVar1 != puVar3) {
    uVar2 = in_x3[4];
    plVar4 = puVar3 + (uVar2 >> 4);
    lVar6 = *plVar4 + (uVar2 & 0xf) * 0x668;
    lVar7 = puVar3[in_x3[5] + uVar2 >> 4] + (in_x3[5] + uVar2 & 0xf) * 0x668;
    puVar5 = puVar1;
    if (lVar6 != lVar7) {
      do {
        FUN_1098ba788(lVar6 + 0x658,0);
        FUN_1098ba7b0(lVar6 + 0x5b0);
        FUN_1098b9008(lVar6 + 0x5a0);
        __ZNSt3__15mutexD1Ev(lVar6 + 0x558);
        FUN_1098b8074(lVar6 + 0x548);
        func_0x0001098ba888(lVar6 + 0x10);
        lVar6 = lVar6 + 0x668;
        if (lVar6 - *plVar4 == 0x6680) {
          plVar4 = plVar4 + 1;
          lVar6 = *plVar4;
        }
      } while (lVar6 != lVar7);
      puVar3 = (undefined8 *)in_x3[1];
      puVar1 = (undefined8 *)in_x3[2];
      puVar5 = puVar1;
    }
  }
  in_x3[5] = 0;
  lVar6 = (long)puVar5 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar1 = (undefined8 *)in_x3[2];
    puVar3 = (undefined8 *)(in_x3[1] + 8);
    in_x3[1] = (long)puVar3;
    puVar5 = puVar1;
    lVar6 = (long)puVar1 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar6 = 8;
  }
  else {
    if (uVar2 != 2) goto LAB_1098ba72c;
    lVar6 = 0x10;
  }
  in_x3[4] = lVar6;
LAB_1098ba72c:
  if (puVar3 != puVar5) {
    do {
      puVar1 = puVar3 + 1;
      __ZdlPv(*puVar3);
      puVar3 = puVar1;
    } while (puVar1 != puVar5);
    puVar5 = (undefined8 *)in_x3[1];
    puVar1 = (undefined8 *)in_x3[2];
  }
  if (puVar1 != puVar5) {
    in_x3[2] = (long)puVar1 + ((long)puVar5 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*in_x3 != 0) {
    __ZdlPv();
  }
  return in_x3;
}



/* Entry: 1098ba600; end: 1098ba787;  */

long * FUN_1098ba600(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar5 = puVar3;
  if (puVar1 != puVar3) {
    uVar2 = param_1[4];
    plVar4 = puVar3 + (uVar2 >> 4);
    lVar6 = *plVar4 + (uVar2 & 0xf) * 0x668;
    lVar7 = puVar3[param_1[5] + uVar2 >> 4] + (param_1[5] + uVar2 & 0xf) * 0x668;
    puVar5 = puVar1;
    if (lVar6 != lVar7) {
      do {
        FUN_1098ba788(lVar6 + 0x658,0);
        FUN_1098ba7b0(lVar6 + 0x5b0);
        FUN_1098b9008(lVar6 + 0x5a0);
        __ZNSt3__15mutexD1Ev(lVar6 + 0x558);
        FUN_1098b8074(lVar6 + 0x548);
        func_0x0001098ba888(lVar6 + 0x10);
        lVar6 = lVar6 + 0x668;
        if (lVar6 - *plVar4 == 0x6680) {
          plVar4 = plVar4 + 1;
          lVar6 = *plVar4;
        }
      } while (lVar6 != lVar7);
      puVar3 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      puVar5 = puVar1;
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar5 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar1 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    puVar5 = puVar1;
    lVar6 = (long)puVar1 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar6 = 8;
  }
  else {
    if (uVar2 != 2) goto LAB_1098ba72c;
    lVar6 = 0x10;
  }
  param_1[4] = lVar6;
LAB_1098ba72c:
  if (puVar3 != puVar5) {
    do {
      puVar1 = puVar3 + 1;
      __ZdlPv(*puVar3);
      puVar3 = puVar1;
    } while (puVar1 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != puVar5) {
    param_1[2] = (long)puVar1 + ((long)puVar5 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098ba788; end: 1098ba7af;  */

void FUN_1098ba788(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1092ba41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1098ba7b0; end: 1098ba98f;  */

long * FUN_1098ba7b0(long *param_1)

{
  long *plStack_28;
  
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  plStack_28 = param_1 + 0xf;
  func_0x0001098ba848(&plStack_28);
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
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098ba990; end: 1098baa0b;  */

void FUN_1098ba990(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 1098baa0c; end: 1098bac03;  */

long * FUN_1098baa0c(long *param_1)

{
  long lVar1;
  
  func_0x0001098baa44(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098bac04; end: 1098bae4b;  */

/* WARNING: Removing unreachable block (ram,0x0001098bade0) */
/* WARNING: Removing unreachable block (ram,0x0001098bade4) */
/* WARNING: Removing unreachable block (ram,0x0001098badec) */
/* WARNING: Removing unreachable block (ram,0x0001098badf4) */
/* WARNING: Removing unreachable block (ram,0x0001098badf8) */

void FUN_1098bac04(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110b17d88;
  FUN_1098bae4c(puVar5,&UNK_10e009af5,0x22,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x31,in_x7,0,0,
                &uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110b17d88;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110b17dd8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110b17ed8;
  puVar5[0x25] = &UNK_110b17ea8;
  *(undefined1 *)(puVar5 + 0x28) = 0;
  *(undefined1 *)(puVar5 + 0x29) = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_DAT_110b17ed8;
  puVar5[0x2b] = &UNK_110b17ea8;
  *(undefined1 *)(puVar5 + 0x2e) = 0;
  *(undefined1 *)(puVar5 + 0x2f) = 0;
  *(undefined2 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x32) = 0;
  puVar5[0x35] = 0x1098bb94c;
  puVar5[0x36] = &UNK_110b17f98;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x31] = &PTR_DAT_110b17f68;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3a] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x181) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1098bae4c; end: 1098baf97;  */

undefined8 *
FUN_1098bae4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11)

{
  bool bVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110b17b10;
  param_1[1] = param_2;
  param_1[2] = param_3;
  bVar1 = true;
  FUN_1098b4f5c(param_1 + 3,1);
  param_1[9] = 0;
  func_0x000109d1b124(param_1 + 10);
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  *param_1 = &PTR_DAT_110b17ab0;
  param_1[0xd] = param_6;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_7;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = param_9;
  param_1[0x15] = param_10;
  uVar2 = *param_11;
  param_1[0x17] = param_11[1];
  param_1[0x16] = uVar2;
  *param_11 = 0;
  param_11[1] = 0;
  if (param_1[0xc] != 0) {
    bVar1 = param_1[0xc] == param_1[0xb];
  }
  *(bool *)(param_1 + 0x18) = bVar1;
  FUN_1098ac2ec(param_1);
  return param_1;
}



/* Entry: 1098baf98; end: 1098bb043;  */

undefined8 * FUN_1098baf98(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b17d88;
  param_1[0x19] = &PTR_FUN_110b17dd8;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  FUN_1098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  FUN_1098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  FUN_1098ad298(&puStack_28);
  return param_1;
}



/* Entry: 1098bb044; end: 1098bb097;  */

void FUN_1098bb044(void)

{
  return;
}



/* Entry: 1098bb098; end: 1098bb303;  */

/* WARNING: Removing unreachable block (ram,0x0001098bb208) */
/* WARNING: Removing unreachable block (ram,0x0001098bb20c) */
/* WARNING: Removing unreachable block (ram,0x0001098bb214) */
/* WARNING: Removing unreachable block (ram,0x0001098bb21c) */
/* WARNING: Removing unreachable block (ram,0x0001098bb228) */
/* WARNING: Removing unreachable block (ram,0x0001098bb230) */
/* WARNING: Removing unreachable block (ram,0x0001098bb238) */
/* WARNING: Removing unreachable block (ram,0x0001098bb23c) */

void FUN_1098bb098(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar7 = puVar5 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar7;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_FUN_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  uStack_d8 = *(undefined8 *)(lVar8 + 0x20);
  uStack_e8 = 0x1098bba9c;
  ppuStack_e0 = &PTR_DAT_110b17ff0;
  uStack_a8 = 0x1098bba9c;
  ppuStack_a0 = &PTR_DAT_110b17ff0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  lStack_100 = 0;
  param_2 = param_2 + 0x18;
  puStack_108 = puVar5;
  uStack_98 = uStack_d8;
  FUN_1098aeecc(param_2,&uStack_a8,&UNK_110b17fd0,&lStack_100);
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  plVar1 = puVar5 + 2;
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  *(int *)(lVar8 + 0x10) = (int)param_2;
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x000109d1b4dc(puVar7);
        goto LAB_1098bb1e8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_1098bb1e8:
      while( true ) {
        *param_1 = puVar5;
        puVar7 = puVar5;
        FUN_1092b4274(&puStack_108);
        lVar8 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        ___stack_chk_fail();
        if ((int)puVar7 == 0) break;
        if (lStack_100 != 0) {
          lStack_f8 = lStack_100;
          __ZdlPv();
        }
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        (*(code *)*ppuStack_e0)(&ppuStack_e0);
        ___cxa_begin_catch(lVar8);
        __ZSt17current_exceptionv(&uStack_e8);
        func_0x000109d1b350(puVar5,&uStack_e8);
        __ZNSt13exception_ptrD1Ev(&uStack_e8);
        ___cxa_end_catch();
      }
      __Unwind_Resume(lVar8);
      func_0x000104bd46a0();
      puVar5 = (undefined8 *)0x20;
      __Znwm();
      puVar5[1] = 0;
      *puVar5 = &PTR_FUN_110b17e50;
      puVar5[2] = 0;
      puVar5[3] = 0;
      lVar8 = *(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40);
      if (lVar8 != 0) {
        uVar6 = lVar8 >> 3;
        if (uVar6 >> 0x3d != 0) {
          FUN_1098bb688();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1098bb3a4);
          (*pcVar4)();
        }
        FUN_1098bb69c();
        puVar5[1] = uVar6;
        puVar5[3] = uVar6 + (long)puVar7 * 8;
        _memmove();
        puVar5[2] = uVar6 + lVar8;
      }
      *extraout_x8 = puVar5;
      return;
    }
  } while( true );
}



/* Entry: 1098bb304; end: 1098bb3c7;  */

void FUN_1098bb304(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110b17e50;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_1098bb688();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1098bb3a4);
      (*pcVar2)();
    }
    FUN_1098bb69c();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 8;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1098bb3c8; end: 1098bb487;  */

void FUN_1098bb3c8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 < *(undefined8 **)(param_1 + 0x50)) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *(long *)(param_1 + 0x40);
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_1098bb688();
      lVar7 = *(long *)(param_1 + 0x48);
      if ((long)(int)param_2 + 1 != lVar7 - *(long *)(param_1 + 0x40) >> 3) {
        *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)param_2 * 8) =
             *(undefined8 *)(lVar7 + -8);
        lVar7 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar7 + -8;
      return;
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40);
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    puVar3 = param_2;
    FUN_1098bb69c();
    puVar2 = (undefined8 *)(uVar5 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar6);
    lVar7 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar6;
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    *(ulong *)(param_1 + 0x50) = uVar5 + (long)puVar3 * 8;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  *(undefined8 **)(param_1 + 0x48) = puVar8;
  return;
}



/* Entry: 1098bb488; end: 1098bb4b7;  */

void FUN_1098bb488(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((long)param_2 + 1 != lVar1 - *(long *)(param_1 + 0x40) >> 3) {
    *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)param_2 * 8) = *(undefined8 *)(lVar1 + -8);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  *(long *)(param_1 + 0x48) = lVar1 + -8;
  return;
}



/* Entry: 1098bb4b8; end: 1098bb52f;  */

undefined8 * FUN_1098bb4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17e50;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098bb530; end: 1098bb687;  */

undefined1  [16] FUN_1098bb530(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 **ppuVar4;
  code **ppcVar5;
  long *plVar6;
  undefined *unaff_x21;
  undefined8 *puVar7;
  long unaff_x22;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  code *pcStack_148;
  undefined8 *apuStack_140 [7];
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  code **ppcStack_f0;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  code **ppcStack_d0;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  plVar6 = &lStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1098bb7cc(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3);
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    unaff_x22 = 0;
    lVar8 = 0;
    unaff_x21 = &UNK_10e009763;
    do {
      plVar1 = param_2;
      FUN_1098ac018(param_2,&UNK_10e009763,0x24,*(long *)(param_1 + 8) + unaff_x22,2,1);
      *(int *)(lStack_a0 + lVar8 * 4) = (int)plVar1;
      lVar8 = lVar8 + 1;
      unaff_x22 = unaff_x22 + 8;
    } while (lVar3 >> 2 != lVar8);
  }
  pcStack_88 = FUN_1098bb848;
  appuStack_80[0] = &PTR_DAT_110b17e90;
  ppcVar5 = &pcStack_88;
  FUN_1098bb6d0(*param_2 + 0x18);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar9._8_8_ = ppcVar5;
    auVar9._0_8_ = lVar3;
    return auVar9;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  pcStack_a8 = FUN_1098bb688;
  puVar2 = &DAT_10f62a4d8;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_b8 = FUN_1098bb69c;
  ppuStack_e0 = &puStack_c0;
  ppcStack_d0 = &pcStack_88;
  if ((ulong)puVar2 >> 0x3d == 0) {
    lVar3 = (long)puVar2 << 3;
    puStack_c0 = (undefined1 *)&puStack_b0;
    __Znwm(lVar3);
    auVar10._8_8_ = puVar2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  puStack_c0 = (undefined1 *)&puStack_b0;
  func_0x000104c4f740();
  pcStack_d8 = FUN_1098bb6d0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_148 = *ppcVar5;
  lStack_100 = unaff_x22;
  puStack_f8 = unaff_x21;
  ppcStack_f0 = &pcStack_88;
  (**(code **)(ppcVar5[1] + 0x10))(apuStack_140);
  lStack_158 = plVar6[1];
  lStack_160 = *plVar6;
  lStack_150 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  ppcVar5 = &pcStack_148;
  FUN_1098aeecc(puVar2,ppcVar5,&UNK_110b17c68,&lStack_160);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  ppuVar4 = apuStack_140;
  (*(code *)*apuStack_140[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    auVar11._8_8_ = ppcVar5;
    auVar11._0_8_ = puVar2;
    return auVar11;
  }
  ___stack_chk_fail();
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  (*(code *)*apuStack_140[0])(apuStack_140);
  __Unwind_Resume();
  *ppuVar4 = (undefined8 *)0x0;
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  puVar2 = (undefined *)0x0;
  if (ppcVar5 != (code **)0x0) {
    FUN_1098afc84(ppuVar4);
    puVar7 = ppuVar4[1];
    puVar2 = &UNK_10dfdff30;
    _memset_pattern16(puVar7,&UNK_10dfdff30,(long)ppcVar5 << 2);
    ppuVar4[1] = (undefined8 *)((long)puVar7 + (long)ppcVar5 * 4);
  }
  auVar12._8_8_ = puVar2;
  auVar12._0_8_ = ppuVar4;
  return auVar12;
}



/* Entry: 1098bb688; end: 1098bb69b;  */

undefined1  [16] FUN_1098bb688(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3d == 0) {
    lVar2 = (long)puVar1 << 3;
    __Znwm(lVar2);
    auVar6._8_8_ = puVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_a0);
  lStack_b8 = param_3[1];
  lStack_c0 = *param_3;
  lStack_b0 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar4 = &uStack_a8;
  FUN_1098aeecc(puVar1,puVar4,&UNK_110b17c68,&lStack_c0);
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  ppuVar3 = apuStack_a0;
  (*(code *)*apuStack_a0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar1;
    return auVar7;
  }
  ___stack_chk_fail();
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  __Unwind_Resume();
  *ppuVar3 = (undefined8 *)0x0;
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  puVar1 = (undefined *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1098afc84(ppuVar3);
    puVar5 = ppuVar3[1];
    puVar1 = &UNK_10dfdff30;
    _memset_pattern16(puVar5,&UNK_10dfdff30,(long)puVar4 << 2);
    ppuVar3[1] = (undefined8 *)((long)puVar5 + (long)puVar4 * 4);
  }
  auVar8._8_8_ = puVar1;
  auVar8._0_8_ = ppuVar3;
  return auVar8;
}



/* Entry: 1098bb69c; end: 1098bb6cf;  */

undefined1  [16] FUN_1098bb69c(ulong param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000104c4f740();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_90);
  lStack_a8 = param_3[1];
  lStack_b0 = *param_3;
  lStack_a0 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar3 = &uStack_98;
  FUN_1098aeecc(param_1,puVar3,&UNK_110b17c68,&lStack_b0);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  ppuVar2 = apuStack_90;
  (*(code *)*apuStack_90[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar7._8_8_ = puVar3;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  ___stack_chk_fail();
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  (*(code *)*apuStack_90[0])(apuStack_90);
  __Unwind_Resume();
  *ppuVar2 = (undefined8 *)0x0;
  ppuVar2[1] = (undefined8 *)0x0;
  ppuVar2[2] = (undefined8 *)0x0;
  puVar4 = (undefined *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1098afc84(ppuVar2);
    puVar5 = ppuVar2[1];
    puVar4 = &UNK_10dfdff30;
    _memset_pattern16(puVar5,&UNK_10dfdff30,(long)puVar3 << 2);
    ppuVar2[1] = (undefined8 *)((long)puVar5 + (long)puVar3 * 4);
  }
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = ppuVar2;
  return auVar8;
}



/* Entry: 1098bb6d0; end: 1098bb7cb;  */

undefined8 ** FUN_1098bb6d0(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar2 = &uStack_78;
  FUN_1098aeecc(param_1,puVar2,&UNK_110b17c68,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  ppuVar1[1] = (undefined8 *)0x0;
  ppuVar1[2] = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1098afc84(ppuVar1);
    puVar3 = ppuVar1[1];
    _memset_pattern16(puVar3,&UNK_10dfdff30,(long)puVar2 << 2);
    ppuVar1[1] = (undefined8 *)((long)puVar3 + (long)puVar2 * 4);
  }
  return ppuVar1;
}



/* Entry: 1098bb7cc; end: 1098bb847;  */

undefined8 * FUN_1098bb7cc(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1098afc84(param_1);
    lVar1 = param_1[1];
    _memset_pattern16(lVar1,&UNK_10dfdff30,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 1098bb848; end: 1098bb8a3;  */

void FUN_1098bb848(void)

{
  return;
}



/* Entry: 1098bb8a4; end: 1098bb8f3;  */

void FUN_1098bb8a4(undefined8 *param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined4 uStack_14;
  
  lVar1 = 0x10;
  if (param_4 != 0) {
    lVar1 = 0x18;
  }
  uStack_14 = *(undefined4 *)(param_2 + lVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1098afc14(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
  return;
}



/* Entry: 1098bb8f4; end: 1098bb967;  */

void FUN_1098bb8f4(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110b17ed8;
  param_1[1] = &UNK_110b17ea8;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1098bb968; end: 1098bba1f;  */

void FUN_1098bb968(long param_1,long *param_2,ulong param_3,undefined4 *param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_40;
  long *plStack_38;
  
  plVar3 = &lStack_40;
  lStack_40 = param_1;
  plStack_38 = param_2;
  FUN_1098af634(&lStack_40,*param_4);
  if ((char)plVar3[3] != '\x01') {
    return;
  }
  uVar1 = (int)param_3 >> 0x1d;
  if (uVar1 == 1) {
    lVar4 = param_2[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      param_2 = param_2 + 6;
      goto LAB_1098bb9dc;
    }
    lVar4 = *param_2;
  }
  param_2 = (long *)(lVar4 + (param_3 & 0x1fffffff) * 8);
LAB_1098bb9dc:
  puVar2 = (undefined8 *)0x11373bf18;
  if (*param_2 != -1) {
    puVar2 = (undefined8 *)(param_1 + *param_2);
  }
  puVar5 = *(undefined8 **)(*plVar3 + *(long *)(param_6 + 0x10) * 8);
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = *puVar5;
  }
  *puVar2 = uVar6;
  return;
}



/* Entry: 1098bba20; end: 1098bba43;  */

void FUN_1098bba20(void)

{
  return;
}



/* Entry: 1098bba44; end: 1098bba8f;  */

undefined8 * FUN_1098bba44(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110b17e28;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098bba90; end: 1098bbb13;  */

void FUN_1098bba90(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1098bbb14; end: 1098bbd87;  */

undefined1  [16]
FUN_1098bbb14(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar7 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x27 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar3, plVar8 != (long *)0x0)) {
      uVar2 = *param_2;
      lVar5 = param_2[1];
      do {
        plVar4 = (long *)plVar8[1];
        if (plVar4 == plVar7) {
          if (plVar8[3] == lVar5) {
            lVar1 = plVar8[2];
            _memcmp(lVar1,uVar2,lVar5);
            if ((int)lVar1 == 0) {
              uVar2 = 0;
              goto LAB_1098bbd48;
            }
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x27) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  uStack_68 = 1;
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  plVar4 = (long *)*param_5;
  lVar5 = *(long *)*param_4;
  plVar8[3] = ((long *)*param_4)[1];
  plVar8[2] = lVar5;
  lVar5 = *plVar4;
  *plVar4 = 0;
  plVar8[4] = lVar5;
  plStack_70 = param_1;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    plStack_78 = plVar8;
    FUN_1098bbd88(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar5 + (long)unaff_x27 * 8) = plVar7;
    if (*plVar8 != 0) {
      plVar7 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  plStack_78 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1098bbf58(&plStack_78);
  uVar2 = 1;
LAB_1098bbd48:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1098bbd88; end: 1098bbf57;  */

void FUN_1098bbd88(long *param_1,long *param_2)

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
    plVar4 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1098bbf58; end: 1098bbfaf;  */

void FUN_1098bbf58(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if ((char)param_1[2] == '\x01') {
      plVar1 = *(long **)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1098bbfb0; end: 1098bc0ab;  */

long * FUN_1098bbfb0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar4 == plVar7) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1098bc0ac; end: 1098bc3bb;  */

void FUN_1098bc0ac(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0xf < param_1[4]) {
    param_1[4] = param_1[4] - 0x10;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_1098bc0e4:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_1098bc4b8();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x6680;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_1098bc4b8();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_1098bc0e4;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_1098bc4b8();
    uVar3 = 0x6680;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_1098bc4b8();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_1098bc4b8();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 1098bc3bc; end: 1098bc4b7;  */

void FUN_1098bc3bc(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098bc4b8();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098bc4b8; end: 1098bc4eb;  */

undefined1  [16]
FUN_1098bc4b8(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte *apbStack_188 [2];
  char cStack_171;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **appuStack_100 [7];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **appuStack_b8 [7];
  undefined4 uStack_80;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_1 >> 0x3d == 0) {
    lVar4 = param_1 << 3;
    __Znwm(lVar4);
    auVar11._8_8_ = param_1;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x000104c4f740();
  ppbVar7 = &pbStack_130;
  pcStack_28 = FUN_1098bc4ec;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = param_2[1];
  pbStack_130 = (byte *)*param_2;
  lStack_120 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_110 = *param_3;
  uStack_108 = param_3[1];
  appuStack_100[0] = &PTR_FUN_110ae9180;
  plVar10 = param_3 + 2;
  puStack_30 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar10 + 0x10))(appuStack_100,plVar10);
  param_3[1] = &UNK_1053a6a3c;
  (**(code **)*plVar10)(plVar10);
  *plVar10 = (long)&PTR_FUN_110ae9180;
  plVar9 = param_3 + 0xb;
  uStack_c8 = param_3[9];
  uStack_c0 = param_3[10];
  appuStack_b8[0] = &PTR_FUN_110ae9180;
  (**(code **)(*plVar9 + 0x10))(appuStack_b8,plVar9);
  param_3[10] = &UNK_1053a6a3c;
  (**(code **)*plVar9)(plVar9);
  *plVar9 = (long)&PTR_FUN_110ae9180;
  uStack_80 = *(undefined4 *)(param_3 + 0x12);
  FUN_1098c0eb8(param_1,&pbStack_130,&uStack_110,param_4);
  FUN_1092ba41c(&uStack_c8);
  pbVar6 = (byte *)&uStack_110;
  FUN_1092ba41c();
  if (lStack_120 < 0) {
    pbVar6 = pbStack_130;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar12._8_8_ = ppbVar7;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  ___stack_chk_fail();
  FUN_1092ba41c(&uStack_c8);
  FUN_1092ba41c(&uStack_110);
  if (lStack_120 < 0) {
    __ZdlPv(pbStack_130);
  }
  pbVar5 = pbVar6;
  __Unwind_Resume();
  ppuStack_170 = &PTR_FUN_110ae9180;
  pcStack_138 = FUN_1098bc668;
  ppuStack_140 = &puStack_30;
  pbStack_148 = pbVar6;
  uStack_150 = param_4;
  plStack_158 = plVar9;
  plStack_160 = plVar10;
  puStack_168 = &uStack_110;
  puVar8 = (undefined1 *)ppbVar7;
  pbVar6 = pbVar5;
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    FUN_1098bc760(apbStack_188,ppbVar7);
    pbVar6 = (byte *)0x1;
    puVar8 = (undefined1 *)0x2;
    func_0x00010ae06f08(1,2,&UNK_10f5865db,&UNK_10f586662,0xf,&UNK_10f5866d6);
    if (cStack_171 < '\0') {
      __ZdlPv(apbStack_188[0]);
      pbVar6 = apbStack_188[0];
    }
  }
  do {
    bVar1 = *pbVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar5,0x10);
    if (bVar3) {
      *pbVar5 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 & 1) == 0) {
    pbVar6 = pbVar5 + 8;
    __ZNSt13exception_ptraSERKS_(pbVar6,ppbVar7);
    puVar8 = (undefined1 *)ppbVar7;
  }
  auVar13._8_8_ = puVar8;
  auVar13._0_8_ = pbVar6;
  return auVar13;
}



/* Entry: 1098bc4ec; end: 1098bc667;  */

byte * FUN_1098bc4ec(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte **ppbVar6;
  long *plVar7;
  long *plVar8;
  byte *apbStack_168 [2];
  char cStack_151;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **appuStack_e0 [7];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **appuStack_98 [7];
  undefined4 uStack_60;
  long lStack_58;
  
  ppbVar6 = &pbStack_110;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = param_2[1];
  pbStack_110 = (byte *)*param_2;
  lStack_100 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_f0 = *param_3;
  uStack_e8 = param_3[1];
  appuStack_e0[0] = &PTR_FUN_110ae9180;
  plVar8 = param_3 + 2;
  (**(code **)(*plVar8 + 0x10))(appuStack_e0,plVar8);
  param_3[1] = &UNK_1053a6a3c;
  (**(code **)*plVar8)(plVar8);
  *plVar8 = (long)&PTR_FUN_110ae9180;
  plVar7 = param_3 + 0xb;
  uStack_a8 = param_3[9];
  uStack_a0 = param_3[10];
  appuStack_98[0] = &PTR_FUN_110ae9180;
  (**(code **)(*plVar7 + 0x10))(appuStack_98,plVar7);
  param_3[10] = &UNK_1053a6a3c;
  (**(code **)*plVar7)(plVar7);
  *plVar7 = (long)&PTR_FUN_110ae9180;
  uStack_60 = *(undefined4 *)(param_3 + 0x12);
  FUN_1098c0eb8(param_1,&pbStack_110,&uStack_f0,param_4);
  FUN_1092ba41c(&uStack_a8);
  pbVar5 = (byte *)&uStack_f0;
  FUN_1092ba41c();
  if (lStack_100 < 0) {
    pbVar5 = pbStack_110;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1092ba41c(&uStack_a8);
  FUN_1092ba41c(&uStack_f0);
  if (lStack_100 < 0) {
    __ZdlPv(pbStack_110);
  }
  pbVar4 = pbVar5;
  __Unwind_Resume();
  ppuStack_150 = &PTR_FUN_110ae9180;
  pcStack_118 = FUN_1098bc668;
  puStack_120 = &stack0xfffffffffffffff0;
  pbStack_128 = pbVar5;
  uStack_130 = param_4;
  plStack_138 = plVar7;
  plStack_140 = plVar8;
  puStack_148 = &uStack_f0;
  pbVar5 = pbVar4;
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    FUN_1098bc760(apbStack_168,ppbVar6);
    pbVar5 = (byte *)0x1;
    func_0x00010ae06f08(1,2,&UNK_10f5865db,&UNK_10f586662,0xf,&UNK_10f5866d6);
    if (cStack_151 < '\0') {
      __ZdlPv(apbStack_168[0]);
      pbVar5 = apbStack_168[0];
    }
  }
  do {
    bVar1 = *pbVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
    if (bVar3) {
      *pbVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 8;
    __ZNSt13exception_ptraSERKS_(pbVar5,ppbVar6);
  }
  return pbVar5;
}



/* Entry: 1098bc668; end: 1098bc75f;  */

void FUN_1098bc668(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    FUN_1098bc760(auStack_58,param_2);
    func_0x00010ae06f08(1,2,&UNK_10f5865db,&UNK_10f586662,0xf,&UNK_10f5866d6);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((bVar1 & 1) == 0) {
    __ZNSt13exception_ptraSERKS_(param_1 + 8,param_2);
  }
  return;
}



/* Entry: 1098bc760; end: 1098bc87f;  */

void FUN_1098bc760(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [8];
  
  __ZNSt13exception_ptrC1ERKS_(auStack_38,param_1);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098bc790);
  (*pcVar1)();
}



/* Entry: 1098bc880; end: 1098bc91b;  */

void FUN_1098bc880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [8];
  
  __ZSt17current_exceptionv(auStack_58);
  FUN_1098bc668(param_1,auStack_58,param_2,param_3,param_4,param_5,param_6,param_7);
  __ZNSt13exception_ptrD1Ev(auStack_58);
  return;
}



/* Entry: 1098bc91c; end: 1098bc93f;  */

void FUN_1098bc91c(byte *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = 0;
    lVar5 = *param_2;
    *param_2 = 0;
    lStack_28 = lVar5;
    func_0x000109d1b350(lVar5,param_1 + 8);
    if (lVar5 != 0) {
      FUN_1092b4274(&lStack_28,lVar5);
    }
    return;
  }
  lVar5 = *param_2;
  *param_2 = 0;
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar4 = *plVar1;
    lStack_28 = lVar5;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x000109d1b4dc(lVar5 + 0x18);
        goto code_r0x000109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      if (lVar5 != 0) {
code_r0x000109d1a7c8:
        FUN_1092b4274(&lStack_28,lVar5);
      }
      return;
    }
  } while( true );
}



/* Entry: 1098bc940; end: 1098bccaf;  */

undefined *** FUN_1098bc940(undefined ***param_1,undefined *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  *param_1 = (undefined **)(param_1 + 1);
  pppuVar4 = param_1 + 3;
  *pppuVar4 = (undefined **)0x0;
  param_1[4] = (undefined **)0x0;
  param_1[5] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  if ((bRam000000011373bf20 & 1) == 0) {
    iVar1 = 0x1373bf20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuStack_98 = (undefined **)0x0;
      ppuStack_a0 = (undefined **)0x10ef12930;
      uStack_90 = 0;
      FUN_1098bd274(&ppuStack_a0,1);
      ___cxa_atexit(FUN_1098bccb0,0x11373bf28,0x100000000);
      ___cxa_guard_release(0x11373bf20);
    }
  }
  ppuVar2 = (undefined **)0x130;
  __Znwm();
  *ppuVar2 = (undefined *)&PTR_FUN_110b17b10;
  ppuVar2[1] = &DAT_10f361ebc;
  ppuVar2[2] = (undefined *)0x6;
  FUN_1098b4f5c(ppuVar2 + 3,1);
  ppuVar2[9] = (undefined *)0x0;
  func_0x000109d1b124(ppuVar2 + 10);
  ppuVar2[0xb] = param_2;
  ppuVar2[0xc] = param_2;
  *ppuVar2 = (undefined *)&PTR_FUN_110b18030;
  *(undefined4 *)(ppuVar2 + 0xd) = 1;
  ppuVar2[0xe] = (undefined *)0x32aaaba7;
  ppuVar2[0x10] = (undefined *)0x0;
  ppuVar2[0xf] = (undefined *)0x0;
  ppuVar2[0x12] = (undefined *)0x0;
  ppuVar2[0x11] = (undefined *)0x0;
  ppuVar2[0x14] = (undefined *)0x0;
  ppuVar2[0x13] = (undefined *)0x0;
  ppuVar2[0x16] = (undefined *)0x0;
  ppuVar2[0x15] = (undefined *)0x0;
  ppuVar2[0x18] = (undefined *)0x0;
  ppuVar2[0x17] = (undefined *)0x0;
  ppuVar2[0x1a] = (undefined *)0x0;
  ppuVar2[0x19] = (undefined *)0x0;
  ppuVar2[0x1b] = (undefined *)0x0;
  ppuVar2[0x1c] = (undefined *)(ppuVar2 + 3);
  ppuVar2[0x1f] = (undefined *)0x0;
  ppuVar2[0x1e] = (undefined *)0x0;
  ppuVar2[0x1d] = (undefined *)(ppuVar2 + 0x1e);
  ppuVar2[0x21] = (undefined *)0x0;
  ppuVar2[0x20] = (undefined *)0x0;
  ppuVar2[0x23] = (undefined *)0x0;
  ppuVar2[0x22] = (undefined *)0x0;
  ppuVar2[0x25] = (undefined *)0x0;
  ppuVar2[0x24] = (undefined *)0x0;
  param_1[6] = ppuVar2;
  ppuStack_a0 = ppuVar2;
  FUN_1098bccd8(pppuVar4,&ppuStack_a0);
  ppuVar2 = ppuStack_a0;
  ppuStack_a0 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 8))();
  }
  *(undefined8 *)(param_1[4][-1] + 0x48) = uRam000000011373bf28;
  ppuVar2 = (undefined **)0x68;
  __Znwm();
  *ppuVar2 = (undefined *)&PTR_FUN_110b17b10;
  ppuVar2[1] = &UNK_10f58671e;
  ppuVar2[2] = (undefined *)0xc;
  FUN_1098b4f5c(ppuVar2 + 3,1);
  ppuVar2[9] = (undefined *)0x0;
  func_0x000109d1b124(ppuVar2 + 10);
  ppuVar2[0xb] = param_2;
  ppuVar2[0xc] = param_2;
  ppuStack_a0 = ppuVar2;
  FUN_1098bccd8(pppuVar4,&ppuStack_a0);
  ppuVar2 = ppuStack_a0;
  ppuStack_a0 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    (**(code **)(*ppuVar2 + 8))();
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  pppuStack_e0 = (undefined ***)FUN_1098b7058;
  ppuStack_d8 = &PTR_FUN_110ae9180;
  ppuStack_a0 = (undefined **)FUN_1098b7058;
  ppuStack_98 = &PTR_FUN_110ae9180;
  lStack_f0 = 0;
  uStack_e8 = 0;
  lStack_f8 = 0;
  FUN_1098aeecc(param_1[4][-1] + 0x18,&ppuStack_a0,&UNK_110b18058,&lStack_f8);
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  (*(code *)*ppuStack_98)(&ppuStack_98);
  pppuVar3 = &ppuStack_d8;
  (*(code *)*ppuStack_d8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x11373bf20);
  pppuStack_e0 = pppuVar4;
  FUN_1098ba990(&pppuStack_e0);
  FUN_1098b3a34(param_1,param_1[1]);
  __Unwind_Resume();
  FUN_1098b3a34();
  return pppuVar3;
}



/* Entry: 1098bccb0; end: 1098bccd7;  */

long FUN_1098bccb0(long param_1)

{
  FUN_1098b3a34(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1098bccd8; end: 1098bcdbb;  */

undefined8 * FUN_1098bccd8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uStack_94;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  uint *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar12 = puVar4 + 1;
    *puVar4 = uVar5;
    puVar4 = param_1;
LAB_1098bcd98:
    param_1[1] = puVar12;
    return puVar4;
  }
  puVar8 = (undefined8 *)*param_1;
  lVar11 = (long)puVar4 - (long)puVar8;
  uVar1 = (lVar11 >> 3) + 1;
  puVar4 = param_1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = (long)param_1[2] - (long)puVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar4 = (undefined8 *)(lVar3 + lVar11);
      uVar5 = *param_2;
      *param_2 = 0;
      puVar10 = puVar4 + -(lVar11 >> 3);
      puVar12 = puVar4 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar10;
      _memcpy(puVar10,puVar8,lVar11);
      *param_1 = puVar10;
      param_1[1] = puVar12;
      param_1[2] = lVar3 + uVar7 * 8;
      if (puVar8 != (undefined8 *)0x0) {
        __ZdlPv(puVar8);
        puVar4 = puVar8;
      }
      goto LAB_1098bcd98;
    }
  }
  else {
    FUN_1098bd260();
  }
  func_0x000104c4f740();
  pcStack_58 = FUN_1098bcdbc;
  plVar9 = puVar4 + 3;
  uStack_94 = (uint)((ulong)(puVar4[4] - *plVar9) >> 3);
  ppuStack_78 = &puStack_90;
  puStack_80 = &uStack_94;
  puStack_90 = param_2;
  uStack_88 = param_3;
  puStack_70 = puVar8;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1098bd474();
  *(undefined8 **)(*param_4 + 0x48) = puVar4;
  ppuStack_78 = (undefined8 **)*param_4;
  *param_4 = 0;
  FUN_1098bccd8(plVar9,&ppuStack_78);
  ppuVar2 = ppuStack_78;
  ppuStack_78 = (undefined8 **)0x0;
  if (ppuVar2 != (undefined8 **)0x0) {
    (*(code *)(*ppuVar2)[1])();
  }
  return (undefined8 *)(ulong)uStack_94;
}



/* Entry: 1098bcdbc; end: 1098bce83;  */

undefined4 FUN_1098bcdbc(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined4 uStack_44;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  long *plStack_28;
  
  plVar1 = (long *)(param_1 + 0x18);
  uStack_44 = (undefined4)((ulong)(*(long *)(param_1 + 0x20) - *plVar1) >> 3);
  plStack_28 = &lStack_40;
  puStack_30 = &uStack_44;
  lStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1098bd474(param_1,&lStack_40,&UNK_10dd5b8f9,&plStack_28,&puStack_30);
  *(long *)(*param_4 + 0x48) = param_1;
  plStack_28 = (long *)*param_4;
  *param_4 = 0;
  FUN_1098bccd8(plVar1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return uStack_44;
}



/* Entry: 1098bce84; end: 1098bcefb;  */

long FUN_1098bce84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_4;
  *param_4 = 0;
  lVar1 = param_1;
  FUN_1098bcdbc();
  *(int *)(param_1 + 0x38) = (int)lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return lVar1;
}



/* Entry: 1098bcefc; end: 1098bd18b;  */

void FUN_1098bcefc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  iVar1 = (int)param_2[3];
  lVar11 = (long)iVar1;
  iVar5 = (int)((ulong)(param_2[1] - *param_2) >> 2);
  if (iVar1 < iVar5) {
    iVar5 = iVar5 - iVar1;
    do {
      iVar1 = *(int *)(*param_2 + lVar11 * 4);
      if (iVar1 != -1) {
        lVar7 = param_1[3];
        uVar8 = *(undefined8 *)(lVar7 + lVar11 * 8);
        *(undefined8 *)(lVar7 + lVar11 * 8) = 0;
        plVar4 = *(long **)(lVar7 + (long)iVar1 * 8);
        *(undefined8 *)(lVar7 + (long)iVar1 * 8) = uVar8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      lVar11 = lVar11 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  plVar13 = (long *)param_1[4];
  plVar4 = (long *)(param_1[3] + (long)*(int *)((long)param_2 + 0x1c) * 8);
  if (plVar4 != plVar13) {
    plVar6 = (long *)(param_1[3] + (long)*(int *)((long)param_2 + 0x1c) * 8);
    plVar4 = (long *)((long)plVar6 + ((long)plVar13 - (long)plVar4));
    if (plVar4 != plVar13) {
      do {
        lVar11 = *plVar4;
        *plVar4 = 0;
        plVar12 = (long *)*plVar6;
        *plVar6 = lVar11;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar4 = plVar4 + 1;
        plVar6 = plVar6 + 1;
      } while (plVar4 != plVar13);
      plVar13 = (long *)param_1[4];
    }
    while (plVar13 != plVar6) {
      plVar13 = plVar13 + -1;
      plVar4 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    param_1[4] = plVar6;
    plVar13 = plVar6;
  }
  if (*(int *)(param_1 + 7) != -1) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(*param_2 + (long)*(int *)(param_1 + 7) * 4);
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != param_1 + 1) {
    do {
      iVar1 = *(int *)(*param_2 + (long)(int)plVar4[6] * 4);
      if (iVar1 == -1) {
        plVar13 = (long *)plVar4[1];
        plVar6 = plVar4;
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar12 = (long *)plVar6[2];
            bVar3 = (long *)*plVar12 != plVar6;
            plVar6 = plVar12;
          } while (bVar3);
        }
        else {
          do {
            plVar12 = plVar13;
            plVar13 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar4) {
          *param_1 = plVar12;
        }
        param_1[2] = param_1[2] + -1;
        func_0x000104c611f0(param_1[1],plVar4);
        __ZdlPv(plVar4);
        plVar4 = plVar12;
      }
      else {
        *(int *)(plVar4 + 6) = iVar1;
        plVar13 = (long *)plVar4[1];
        plVar6 = plVar4;
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar6[2];
            bVar3 = (long *)*plVar4 != plVar6;
            plVar6 = plVar4;
          } while (bVar3);
        }
        else {
          do {
            plVar4 = plVar13;
            plVar13 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      }
    } while (plVar4 != param_1 + 1);
    plVar13 = (long *)param_1[4];
  }
  plVar6 = (long *)param_1[3];
  uVar2 = (long)plVar13 - (long)plVar6;
  plVar4 = plVar6;
  if (uVar2 != 0) {
    do {
      lVar11 = *(long *)(*plVar4 + 0x30);
      lVar7 = *(long *)(*plVar4 + 0x38);
      if (lVar11 != lVar7) {
        lVar10 = *param_2;
        do {
          if (-1 < (int)*(uint *)(lVar11 + 4)) {
            *(undefined4 *)(lVar11 + 4) = *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar11 + 4) * 4)
            ;
          }
          lVar11 = lVar11 + 0xc;
        } while (lVar11 != lVar7);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar13);
    if (2 < (int)(uVar2 >> 3)) {
      lVar11 = *param_2;
      uVar9 = 2;
      do {
        lVar10 = *(long *)(*(long *)(plVar6[uVar9] + 0x68) + 0x18);
        for (lVar7 = *(long *)(*(long *)(plVar6[uVar9] + 0x68) + 0x10); lVar7 != lVar10;
            lVar7 = lVar7 + 0xc) {
          *(undefined4 *)(lVar7 + 4) = *(undefined4 *)(lVar11 + (long)*(int *)(lVar7 + 4) * 4);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != (uVar2 >> 3 & 0x7fffffff));
    }
  }
  return;
}



/* Entry: 1098bd18c; end: 1098bd25f;  */

undefined8 * FUN_1098bd18c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b18030;
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  FUN_109638924(param_1 + 0x1d,param_1[0x1e]);
  func_0x0001098b08dc(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  *param_1 = &PTR_FUN_110b17b10;
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  FUN_1098ad298(&puStack_28);
  return param_1;
}



/* Entry: 1098bd260; end: 1098bd273;  */

void FUN_1098bd260(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plStack_68;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uRam000000011373bf38 = 0;
  plRam000000011373bf30 = (long *)0x0;
  lRam000000011373bf28 = 0x11373bf30;
  if (param_2 != 0) {
    puVar8 = puVar4 + param_2 * 3;
    plVar1 = (long *)0x11373bf30;
    do {
      plVar7 = plVar1;
      if (lRam000000011373bf28 == 0x11373bf30) {
joined_r0x0001098bd2ec:
        plStack_68 = plVar7;
        if (plRam000000011373bf30 != (long *)0x0) {
          plVar7 = plStack_68 + 1;
          goto LAB_1098bd338;
        }
        plStack_68 = (long *)0x11373bf30;
        plVar7 = plVar1;
LAB_1098bd35c:
        plVar6 = plStack_68;
        lVar5 = 0x38;
        __Znwm();
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        *(undefined8 *)(lVar5 + 0x30) = puVar4[2];
        *(undefined8 *)(lVar5 + 0x28) = uVar10;
        *(undefined8 *)(lVar5 + 0x20) = uVar9;
        FUN_1098b3ae8(0x11373bf28,plVar6,plVar7,lVar5);
      }
      else {
        plVar6 = plVar1;
        plVar2 = plRam000000011373bf30;
        if (plRam000000011373bf30 == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar3 = (long *)*plVar7 == plVar6;
            plVar6 = plVar7;
          } while (bVar3);
        }
        else {
          do {
            plVar7 = plVar2;
            plVar2 = (long *)plVar7[1];
          } while ((long *)plVar7[1] != (long *)0x0);
        }
        lVar5 = plVar7[4];
        func_0x000107c2abd8(lVar5,plVar7[5],*puVar4,puVar4[1]);
        if (((uint)lVar5 >> 7 & 1) != 0) goto joined_r0x0001098bd2ec;
        plVar7 = (long *)0x11373bf28;
        FUN_1098bd3d0(0x11373bf28,&plStack_68,puVar4);
LAB_1098bd338:
        if (*plVar7 == 0) goto LAB_1098bd35c;
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar8);
  }
  return;
}



/* Entry: 1098bd274; end: 1098bd3cf;  */

void FUN_1098bd274(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plStack_58;
  
  uRam000000011373bf38 = 0;
  plRam000000011373bf30 = (long *)0x0;
  lRam000000011373bf28 = 0x11373bf30;
  if (param_2 != 0) {
    puVar7 = param_1 + param_2 * 3;
    plVar1 = (long *)0x11373bf30;
    do {
      plVar6 = plVar1;
      if (lRam000000011373bf28 == 0x11373bf30) {
joined_r0x0001098bd2ec:
        plStack_58 = plVar6;
        if (plRam000000011373bf30 != (long *)0x0) {
          plVar6 = plStack_58 + 1;
          goto LAB_1098bd338;
        }
        plStack_58 = (long *)0x11373bf30;
        plVar6 = plVar1;
LAB_1098bd35c:
        plVar5 = plStack_58;
        lVar4 = 0x38;
        __Znwm();
        uVar9 = param_1[1];
        uVar8 = *param_1;
        *(undefined8 *)(lVar4 + 0x30) = param_1[2];
        *(undefined8 *)(lVar4 + 0x28) = uVar9;
        *(undefined8 *)(lVar4 + 0x20) = uVar8;
        FUN_1098b3ae8(0x11373bf28,plVar5,plVar6,lVar4);
      }
      else {
        plVar5 = plVar1;
        plVar2 = plRam000000011373bf30;
        if (plRam000000011373bf30 == (long *)0x0) {
          do {
            plVar6 = (long *)plVar5[2];
            bVar3 = (long *)*plVar6 == plVar5;
            plVar5 = plVar6;
          } while (bVar3);
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)plVar6[1];
          } while ((long *)plVar6[1] != (long *)0x0);
        }
        lVar4 = plVar6[4];
        func_0x000107c2abd8(lVar4,plVar6[5],*param_1,param_1[1]);
        if (((uint)lVar4 >> 7 & 1) != 0) goto joined_r0x0001098bd2ec;
        plVar6 = (long *)0x11373bf28;
        FUN_1098bd3d0(0x11373bf28,&plStack_58,param_1);
LAB_1098bd338:
        if (*plVar6 == 0) goto LAB_1098bd35c;
      }
      param_1 = param_1 + 3;
    } while (param_1 != puVar7);
  }
  return;
}



/* Entry: 1098bd3d0; end: 1098bd453;  */

long * FUN_1098bd3d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = (long *)(param_1 + 8);
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while( true ) {
      plVar5 = plVar3;
      uVar1 = *param_3;
      func_0x000107c2abd8(uVar1,param_3[1],plVar5[4],plVar5[5]);
      if (((uint)uVar1 >> 7 & 1) != 0) break;
      lVar2 = plVar5[4];
      func_0x000107c2abd8(lVar2,plVar5[5],*param_3,param_3[1]);
      if (((uint)lVar2 >> 7 & 1) == 0) goto LAB_1098bd43c;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_1098bd43c;
    }
    plVar4 = plVar5;
    plVar3 = (long *)*plVar5;
  }
LAB_1098bd43c:
  *param_2 = plVar5;
  return plVar4;
}



/* Entry: 1098bd454; end: 1098bd473;  */

void FUN_1098bd454(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1098bd474; end: 1098bd50f;  */

undefined1  [16]
FUN_1098bd474(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_1098bd3d0(param_1,&uStack_48,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x38;
    __Znwm();
    puVar3 = (undefined4 *)*param_5;
    uVar5 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar4 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined4 *)(lVar4 + 0x30) = *puVar3;
    FUN_1098b3ae8(param_1,uStack_48,plVar2,lVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}


