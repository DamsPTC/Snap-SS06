/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107269ed4; end: 10726a187;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107269ed4(long *******param_1,long *******param_2,undefined8 *param_3,ulong param_4,
                  long *******param_5,ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uVar4;
  int iVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  undefined8 *puVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *******ppppppplVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  undefined8 unaff_x30;
  long *******ppppppplStack_258;
  undefined8 *puStack_250;
  long *******ppppppplStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined1 auStack_230 [72];
  long lStack_1e8;
  ulong uStack_1e0;
  long *******ppppppplStack_1d8;
  long lStack_1d0;
  long *******ppppppplStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  long *******ppppppplStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_150 [24];
  ulong uStack_138;
  long *******ppppppplStack_130;
  ulong *puStack_128;
  undefined8 uStack_68;
  
  func_0x000107274388();
  uVar4 = param_4 == 2;
  ppppppplVar7 = param_1;
  ppppppplVar6 = param_2;
  uStack_68 = extraout_x8;
  if (1 < param_4) {
    if ((bool)uVar4) {
      func_0x000107274c6c();
      FUN_10726a1c0();
      ppppppplVar6 = param_2;
      if ((int)ppppppplVar7 != 0) {
        func_0x00010727416c(uStack_68);
        ppppppplVar6 = param_2;
        if ((bool)uVar4) {
          func_0x000107274b34();
          func_0x0001072753c4();
code_r0x00010726a96c:
          func_0x0001072747d8();
          func_0x000107274388();
          func_0x000107274e94(auStack_230);
          func_0x000107274d28();
          FUN_10726a9d4();
          func_0x000107274dd8();
          FUN_10726a9d4();
          FUN_107269ea4(auStack_230);
          func_0x00010727416c(extraout_x8_00);
          if ((bool)uVar4) {
            return;
          }
          ___stack_chk_fail();
          func_0x0001072748a4();
          FUN_107269ea4();
          func_0x00010727477c();
          pcStack_238 = FUN_10726a9d4;
          puStack_250 = param_3;
          ppppppplStack_248 = param_1;
          puStack_240 = auStack_150;
          func_0x0001072747cc();
          func_0x000104c2f1f0();
          uVar2 = *(uint *)(param_3 + 0x12);
          if (*(int *)(param_1 + 0x12) != -1 || uVar2 != 0xffffffff) {
            ppppppplVar6 = param_1 + 7;
            if (uVar2 == 0xffffffff) {
              FUN_107261ecc(ppppppplVar6);
            }
            else {
              ppppppplStack_258 = ppppppplVar6;
              (*(code *)(&PTR_FUN_110995e88)[uVar2])(&ppppppplStack_258,ppppppplVar6,param_3 + 7);
            }
          }
          FUN_107269df4(param_1 + 0x13,param_3 + 0x13);
          func_0x0001072754c4();
          return;
        }
        goto LAB_10726a154;
      }
    }
    else {
      if (0 < (long)param_4) {
        uVar13 = param_4 >> 1;
        ppppppplVar9 = param_1 + uVar13 * 0x19;
        uVar4 = param_4 == param_6;
        if ((long)param_6 < (long)param_4) {
          func_0x000107275518();
          func_0x00010727576c();
          lVar15 = param_4 - uVar13;
          ppppppplVar7 = ppppppplVar9;
          func_0x00010727576c(ppppppplVar9,param_2,param_3,lVar15,param_5);
          func_0x00010727416c(uStack_68);
          if ((bool)uVar4) {
            ppppppplVar6 = param_1;
            puVar8 = param_3;
            func_0x0001072753c4(unaff_x30);
            ppppppplVar7 = param_5;
            while( true ) {
              if (lVar15 == 0) {
                return;
              }
              ppppppplVar14 = ppppppplVar6;
              ppppppplStack_1c8 = ppppppplVar7;
              uVar3 = uVar13;
              if (lVar15 <= (long)param_6 || (long)uVar13 <= (long)param_6) break;
              while( true ) {
                if (uVar3 == 0) {
                  return;
                }
                puVar11 = puVar8;
                func_0x0001072755b4(puVar8,ppppppplVar9);
                if (((ulong)puVar11 & 1) != 0) break;
                ppppppplVar6 = ppppppplVar6 + 0x19;
                ppppppplVar14 = ppppppplVar14 + 0x19;
                uVar3 = uVar3 - 1;
              }
              uStack_1e0 = param_6;
              ppppppplStack_1d8 = param_2;
              lStack_1d0 = lVar15;
              if ((long)uVar3 < lVar15) {
                ppppppplVar20 = ppppppplVar9 + (lVar15 / 2) * 0x19;
                lVar15 = lVar15 / 2;
                ppppppplVar7 = ppppppplVar6;
                uVar13 = ((long)ppppppplVar9 - (long)ppppppplVar14) / 200;
                while (lStack_1e8 = lVar15, puStack_1c0 = puVar8, uVar13 != 0) {
                  uVar17 = uVar13 >> 1;
                  FUN_10726a1c0(puVar8,ppppppplVar20,ppppppplVar7 + uVar17 * 0x19);
                  uVar1 = uVar13 + (uVar13 >> 1 ^ 0xffffffffffffffff);
                  iVar5 = (int)puVar8;
                  lVar15 = lStack_1e8;
                  puVar8 = puStack_1c0;
                  uVar13 = uVar17;
                  if (iVar5 == 0) {
                    ppppppplVar7 = ppppppplVar7 + uVar17 * 0x19 + 0x19;
                    uVar13 = uVar1;
                  }
                }
                uVar13 = ((long)ppppppplVar7 - (long)ppppppplVar14) / 200;
              }
              else {
                puStack_1c0 = puVar8;
                if (uVar3 == 1) {
                  uVar4 = 1;
                  goto code_r0x00010726a96c;
                }
                uVar13 = (long)uVar3 / 2;
                ppppppplVar7 = ppppppplVar6 + uVar13 * 0x19;
                puStack_1a8 = (undefined8 *)puVar8[1];
                ppppppplStack_1b0 = (long *******)*puVar8;
                ppppppplVar14 = ppppppplVar9;
                uVar1 = ((long)param_2 - (long)ppppppplVar9) / 200;
                while (ppppppplVar20 = ppppppplVar14, uVar1 != 0) {
                  uVar17 = uVar1 >> 1;
                  iVar5 = (int)&ppppppplStack_1b0;
                  func_0x0001072755a8();
                  ppppppplVar14 = ppppppplVar20 + uVar17 * 0x19 + 0x19;
                  uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
                  if (iVar5 == 0) {
                    ppppppplVar14 = ppppppplVar20;
                    uVar1 = uVar17;
                  }
                }
                lVar15 = ((long)ppppppplVar20 - (long)ppppppplVar9) / 200;
              }
              puVar8 = puStack_1c0;
              param_2 = ppppppplVar20;
              if ((ppppppplVar7 != ppppppplVar9) &&
                 (param_2 = ppppppplVar7, ppppppplVar14 = ppppppplVar9,
                 ppppppplVar9 != ppppppplVar20)) {
                while( true ) {
                  lStack_1e8 = lVar15;
                  ppppppplVar12 = ppppppplVar14;
                  FUN_10726a96c(param_2,ppppppplVar9);
                  param_2 = param_2 + 0x19;
                  ppppppplVar9 = ppppppplVar9 + 0x19;
                  if (ppppppplVar9 == ppppppplVar20) break;
                  ppppppplVar14 = ppppppplVar9;
                  lVar15 = lStack_1e8;
                  if (param_2 != ppppppplVar12) {
                    ppppppplVar14 = ppppppplVar12;
                  }
                }
                lVar15 = lStack_1e8;
                ppppppplVar9 = param_2;
                ppppppplVar14 = ppppppplVar12;
                if (param_2 != ppppppplVar12) {
                  do {
                    while( true ) {
                      ppppppplVar19 = ppppppplVar14;
                      FUN_10726a96c(ppppppplVar9,ppppppplVar12);
                      ppppppplVar9 = ppppppplVar9 + 0x19;
                      ppppppplVar12 = ppppppplVar12 + 0x19;
                      if (ppppppplVar12 == ppppppplVar20) break;
                      ppppppplVar14 = ppppppplVar12;
                      if (ppppppplVar9 != ppppppplVar19) {
                        ppppppplVar14 = ppppppplVar19;
                      }
                    }
                    lVar15 = lStack_1e8;
                    ppppppplVar12 = ppppppplVar19;
                    ppppppplVar14 = ppppppplVar19;
                  } while (ppppppplVar9 != ppppppplVar19);
                }
              }
              param_6 = uStack_1e0;
              lVar18 = lStack_1d0 - lVar15;
              if ((long)(uVar13 + lVar15) < (long)((lStack_1d0 - (uVar13 + lVar15)) + uVar3)) {
                func_0x0001072754f4();
                param_6 = uStack_1e0;
                FUN_10726a518();
                lVar15 = lVar18;
                ppppppplVar6 = param_2;
                ppppppplVar9 = ppppppplVar20;
                param_2 = ppppppplStack_1d8;
                uVar13 = uVar3 - uVar13;
                ppppppplVar7 = ppppppplStack_1c8;
              }
              else {
                FUN_10726a518(param_2,ppppppplVar20,ppppppplStack_1d8,puVar8,uVar3 - uVar13,lVar18,
                              ppppppplStack_1c8,uStack_1e0);
                ppppppplVar9 = ppppppplVar7;
                ppppppplVar7 = ppppppplStack_1c8;
              }
            }
            puStack_1a8 = &uStack_1b8;
            uStack_1b8 = 0;
            ppppppplVar14 = ppppppplVar7;
            ppppppplStack_1b0 = ppppppplVar7;
            if (lVar15 < (long)uVar13) {
              while (ppppppplVar9 != param_2) {
                FUN_107269d80(ppppppplVar7);
                func_0x000107275964();
              }
              while (param_2 = param_2 + -0x19, ppppppplVar14 != ppppppplVar7) {
                if (ppppppplVar9 == ppppppplVar6) goto LAB_10726a8fc;
                puVar11 = puVar8;
                func_0x0001072755a8();
                ppppppplVar20 = ppppppplVar14;
                ppppppplVar19 = ppppppplVar9 + -0x19;
                ppppppplVar12 = ppppppplVar9 + -0x19;
                if ((int)puVar11 == 0) {
                  ppppppplVar20 = ppppppplVar14 + -0x19;
                  ppppppplVar19 = ppppppplVar9;
                  ppppppplVar12 = ppppppplVar14 + -0x19;
                }
                ppppppplVar9 = ppppppplVar19;
                FUN_10726a9d4(param_2,ppppppplVar12);
                ppppppplVar14 = ppppppplVar20;
              }
            }
            else {
              while (ppppppplVar6 != ppppppplVar9) {
                FUN_107269d80(ppppppplVar14,ppppppplVar6);
                func_0x000107275964();
                ppppppplVar14 = ppppppplVar14 + 0x19;
              }
              while (ppppppplVar14 != ppppppplVar7) {
                if (ppppppplVar9 == param_2) goto LAB_10726a890;
                puVar11 = puVar8;
                FUN_10726a1c0(puVar8,ppppppplVar9,ppppppplVar7);
                if ((int)puVar11 == 0) {
                  func_0x0001072754f4();
                  FUN_10726a9d4();
                  ppppppplVar7 = ppppppplVar7 + 0x19;
                }
                else {
                  FUN_10726a9d4(ppppppplVar6,ppppppplVar9);
                  ppppppplVar9 = ppppppplVar9 + 0x19;
                }
                ppppppplVar6 = ppppppplVar6 + 0x19;
              }
            }
            goto LAB_10726a904;
          }
          goto LAB_10726a154;
        }
        uStack_138 = 0;
        puStack_128 = &uStack_138;
        ppppppplStack_130 = param_5;
        func_0x000107275518();
        FUN_10726a2e8();
        ppppppplVar7 = param_5 + uVar13 * 0x19;
        uStack_138 = uVar13;
        FUN_10726a2e8(ppppppplVar9,param_2,param_3,param_4 - uVar13,ppppppplVar7);
        ppppppplVar14 = param_5 + param_4 * 0x19;
        ppppppplVar6 = ppppppplVar7;
        uStack_138 = param_4;
        while (param_5 != ppppppplVar7) {
          if (ppppppplVar6 == ppppppplVar14) goto LAB_10726a140;
          func_0x0001072754f4();
          FUN_10726a1c0();
          if ((int)ppppppplVar9 == 0) {
            func_0x000107274b34();
            FUN_10726a9d4();
            param_5 = param_5 + 0x19;
          }
          else {
            func_0x000107274f4c();
            FUN_10726a9d4();
            ppppppplVar6 = ppppppplVar6 + 0x19;
          }
        }
        for (; uVar4 = ppppppplVar6 == ppppppplVar14, !(bool)uVar4;
            ppppppplVar6 = ppppppplVar6 + 0x19) {
          func_0x000107274f4c();
          FUN_10726a9d4();
        }
        goto LAB_10726a148;
      }
      uVar4 = param_1 == param_2;
      if (!(bool)uVar4) {
        lVar15 = 0;
        ppppppplVar9 = param_1;
        while( true ) {
          ppppppplVar9 = ppppppplVar9 + 0x19;
          uVar4 = 1;
          if (ppppppplVar9 == param_2) break;
          func_0x000107274c6c();
          FUN_10726a1c0();
          if ((int)ppppppplVar7 != 0) {
            FUN_107269d80(&ppppppplStack_130,ppppppplVar9);
            lVar18 = lVar15;
            do {
              lVar16 = lVar18;
              FUN_10726a9d4((long)param_1 + lVar16 + 200);
              ppppppplVar7 = param_1;
              if (lVar16 == 0) goto LAB_10726a06c;
              puVar8 = param_3;
              FUN_10726a1c0(param_3,&ppppppplStack_130,(long)param_1 + lVar16 + -200);
              lVar18 = lVar16 + -200;
            } while (((ulong)puVar8 & 1) != 0);
            ppppppplVar7 = (long *******)((long)param_1 + lVar16);
LAB_10726a06c:
            ppppppplVar6 = (long *******)&ppppppplStack_130;
            FUN_10726a9d4(ppppppplVar7);
            ppppppplVar7 = (long *******)&ppppppplStack_130;
            FUN_107269ea4();
          }
          lVar15 = lVar15 + 200;
        }
      }
    }
  }
  goto LAB_107269f04;
LAB_10726a8fc:
  while (ppppppplVar14 != ppppppplVar7) {
    ppppppplVar14 = ppppppplVar14 + -0x19;
    FUN_10726a9d4(param_2,ppppppplVar14);
    param_2 = param_2 + -0x19;
  }
  goto LAB_10726a904;
LAB_10726a890:
  for (; ppppppplVar14 != ppppppplVar7; ppppppplVar7 = ppppppplVar7 + 0x19) {
    func_0x0001072754f4();
    FUN_10726a9d4();
  }
LAB_10726a904:
  FUN_10726ab84(&ppppppplStack_1b0);
  return;
LAB_10726a140:
  for (; uVar4 = param_5 == ppppppplVar7, !(bool)uVar4; param_5 = param_5 + 0x19) {
    func_0x000107274b34();
    FUN_10726a9d4();
  }
LAB_10726a148:
  ppppppplVar7 = (long *******)&ppppppplStack_130;
  FUN_10726ab84();
  ppppppplVar6 = param_2;
LAB_107269f04:
  func_0x00010727416c(uStack_68);
  if ((bool)uVar4) {
    func_0x0001072753c4(unaff_x30);
    return;
  }
LAB_10726a154:
  ___stack_chk_fail();
  func_0x000107275990();
  FUN_10726ab84();
  func_0x00010727477c();
  pppppplVar10 = *ppppppplVar7;
  *ppppppplVar7 = (long ******)ppppppplVar6;
  if (pppppplVar10 != (long ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726a188; end: 10726a19f;  */

void FUN_10726a188(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726a1a0; end: 10726a1bf;  */

void FUN_10726a1a0(void)

{
  func_0x000100168718();
  FUN_10726a188();
  return;
}



/* Entry: 10726a1c0; end: 10726a2e7;  */

uint FUN_10726a1c0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  float fVar9;
  
  lVar6 = *(long *)*param_1;
  if ((*(char *)(lVar6 + 0xd8) == '\x01') &&
     ((int)((*(long *)(lVar6 + 0xb8) - *(long *)(lVar6 + 0xb0)) / 0x38) != 0)) {
    func_0x000107274670();
    lVar6 = 0;
    uVar8 = 0;
    while( true ) {
      lVar7 = *(long *)(*(long *)(unaff_x21 + 8) + 0xb8) -
              *(long *)(*(long *)(unaff_x21 + 8) + 0xb0);
      uVar1 = lVar7 / 0x38;
      if ((uVar1 & 0xffffffff) <= uVar8) break;
      pfVar5 = (float *)(*(long *)(unaff_x20 + 0x98) + lVar6);
      if ((*(char *)(pfVar5 + 1) == '\x01') &&
         (pfVar4 = (float *)(*(long *)(unaff_x19 + 0x98) + lVar6), *(char *)(pfVar4 + 1) == '\x01'))
      {
        pfVar3 = pfVar5;
        FUN_10726a954();
        fVar9 = *pfVar3;
        pfVar3 = pfVar4;
        FUN_10726a954();
        if (*pfVar3 < fVar9) {
          lVar7 = 1;
          break;
        }
        FUN_10726a954();
        fVar9 = *pfVar4;
        FUN_10726a954();
        if (*pfVar5 < fVar9) {
          lVar7 = 0;
          break;
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 8;
    }
    uVar2 = (uint)(uVar8 < (uVar1 & 0xffffffff)) & (uint)lVar7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10726a2e8; end: 10726a517;  */

undefined8 *
FUN_10726a2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  
  func_0x000107275128();
  if (param_4 == 0) {
    return param_1;
  }
  uVar6 = param_4;
  func_0x000107274dcc();
  if (uVar6 == 2) {
    func_0x000107275384();
    iVar2 = (int)param_1;
    func_0x000107274b74();
    func_0x0001072755b4();
    lVar7 = unaff_x21 + -200;
    if (iVar2 == 0) {
      lVar7 = unaff_x20;
    }
    FUN_107269d80(param_5,lVar7);
    func_0x0001072748b0();
    func_0x000107274e94(param_5 + 0x19);
  }
  else {
    if (param_4 == 1) {
      func_0x0001001685d4();
      lVar7 = in_stack_00000058;
      puVar5 = in_stack_00000050;
      func_0x0001072747d8();
      func_0x000104c318bc();
      func_0x000107275648();
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      uVar9 = *(undefined8 *)(lVar7 + 0x98);
      puVar5[0x14] = *(undefined8 *)(lVar7 + 0xa0);
      puVar5[0x13] = uVar9;
      puVar5[0x15] = *(undefined8 *)(lVar7 + 0xa8);
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(undefined8 *)(lVar7 + 0xa0) = 0;
      *(undefined8 *)(lVar7 + 0xa8) = 0;
      uVar10 = *(undefined8 *)(lVar7 + 0xb8);
      uVar9 = *(undefined8 *)(lVar7 + 0xb0);
      *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(lVar7 + 0xc0);
      puVar5[0x17] = uVar10;
      puVar5[0x16] = uVar9;
      return puVar5;
    }
    if ((long)param_4 < 9) {
      if (unaff_x20 == unaff_x21) {
        return param_1;
      }
      func_0x000107275384();
      func_0x0001001685d4();
      FUN_107269d80();
      puVar5 = param_5;
      do {
        func_0x0001072748b0();
        puVar4 = puVar5;
        while( true ) {
          iVar2 = (int)param_1;
          unaff_x20 = unaff_x20 + 200;
          if (unaff_x20 == unaff_x21) goto LAB_10726a4ec;
          func_0x000107275288();
          FUN_10726a1c0();
          puVar5 = puVar4 + 0x19;
          if (iVar2 == 0) break;
          puVar3 = puVar5;
          func_0x000107275584();
          func_0x0001072748b0();
          while (iVar2 = (int)puVar3, param_1 = param_5, puVar4 != param_5) {
            puVar8 = puVar4 + -0x19;
            func_0x000107275288();
            FUN_10726a1c0();
            param_1 = puVar4;
            if (iVar2 == 0) break;
            FUN_10726a9d4(puVar4,puVar8);
            puVar3 = puVar4;
            puVar4 = puVar8;
          }
          FUN_10726a9d4(param_1,unaff_x20);
          puVar4 = puVar5;
        }
        param_1 = puVar5;
        func_0x000107274e94();
      } while( true );
    }
    lVar1 = (param_4 >> 1) * 200 + unaff_x20;
    FUN_107269ed4();
    FUN_107269ed4(lVar1);
    func_0x000107275384();
    lVar7 = lVar1;
    while (unaff_x20 != lVar1) {
      if (lVar7 == unaff_x21) goto LAB_10726a4e4;
      uVar9 = param_3;
      func_0x0001072755b4(param_3,lVar7);
      if ((int)uVar9 == 0) {
        func_0x0001001685d4();
        FUN_107269d80();
        unaff_x20 = unaff_x20 + 200;
      }
      else {
        func_0x000107275584(param_5);
        lVar7 = lVar7 + 200;
      }
      func_0x0001072748b0();
      param_5 = param_5 + 0x19;
    }
    for (; lVar7 != unaff_x21; lVar7 = lVar7 + 200) {
      func_0x000107275584(param_5);
      param_5 = param_5 + 0x19;
      func_0x0001072748b0();
    }
  }
LAB_10726a4ec:
  in_stack_00000008 = 0;
  puVar5 = &stack0x00000008;
  FUN_10726ab84(puVar5);
  return puVar5;
LAB_10726a4e4:
  for (; unaff_x20 != lVar1; unaff_x20 = unaff_x20 + 200) {
    func_0x0001001685d4();
    FUN_107269d80();
    func_0x0001072748b0();
  }
  goto LAB_10726a4ec;
}



/* Entry: 10726a518; end: 10726a953;  */

void FUN_10726a518(long param_1,long param_2,long param_3,long *param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_118 [3];
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [72];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  lVar9 = param_7;
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    lVar11 = param_1;
    lStack_88 = lVar9;
    lVar1 = param_5;
    if (param_6 <= param_8 || param_5 <= param_8) break;
    while( true ) {
      if (lVar1 == 0) {
        return;
      }
      plVar7 = param_4;
      func_0x0001072755b4(param_4,param_2);
      if (((ulong)plVar7 & 1) != 0) break;
      param_1 = param_1 + 200;
      lVar11 = lVar11 + 200;
      lVar1 = lVar1 + -1;
    }
    lStack_a0 = param_8;
    lStack_98 = param_3;
    lStack_90 = param_6;
    if (lVar1 < param_6) {
      lVar13 = param_2 + (param_6 / 2) * 200;
      param_6 = param_6 / 2;
      uVar3 = (param_2 - lVar11) / 200;
      lVar9 = param_1;
      while (lStack_a8 = param_6, plStack_80 = param_4, uVar3 != 0) {
        lVar8 = lVar9 + (uVar3 >> 1) * 200;
        FUN_10726a1c0(param_4,lVar13,lVar8);
        uVar10 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
        iVar6 = (int)param_4;
        param_6 = lStack_a8;
        uVar3 = uVar3 >> 1;
        param_4 = plStack_80;
        if (iVar6 == 0) {
          uVar3 = uVar10;
          lVar9 = lVar8 + 200;
        }
      }
      param_5 = (lVar9 - lVar11) / 200;
    }
    else {
      uVar5 = lVar1 == 1;
      plStack_80 = param_4;
      if ((bool)uVar5) {
        func_0x0001072747d8(param_1,param_2);
        func_0x000107274388();
        func_0x000107274e94(auStack_f0);
        func_0x000107274d28();
        FUN_10726a9d4();
        func_0x000107274dd8();
        FUN_10726a9d4();
        FUN_107269ea4(auStack_f0);
        func_0x00010727416c(extraout_x8);
        if ((bool)uVar5) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001072748a4();
        FUN_107269ea4();
        func_0x00010727477c();
        pcStack_f8 = FUN_10726a9d4;
        puStack_100 = &stack0xfffffffffffffff0;
        func_0x0001072747cc();
        func_0x000104c2f1f0();
        uVar2 = *(uint *)(unaff_x20 + 0x90);
        if (*(int *)(unaff_x19 + 0x90) != -1 || uVar2 != 0xffffffff) {
          lVar9 = unaff_x19 + 0x38;
          if (uVar2 == 0xffffffff) {
            FUN_107261ecc(lVar9);
          }
          else {
            alStack_118[0] = lVar9;
            (*(code *)(&PTR_FUN_110995e88)[uVar2])(alStack_118,lVar9,unaff_x20 + 0x38);
          }
        }
        FUN_107269df4(unaff_x19 + 0x98,unaff_x20 + 0x98);
        func_0x0001072754c4();
        return;
      }
      param_5 = lVar1 / 2;
      lVar9 = param_1 + param_5 * 200;
      puStack_68 = (undefined8 *)param_4[1];
      lStack_70 = *param_4;
      uVar3 = (param_3 - param_2) / 200;
      lVar11 = param_2;
      while (lVar13 = lVar11, uVar3 != 0) {
        uVar10 = uVar3 >> 1;
        iVar6 = (int)&lStack_70;
        func_0x0001072755a8();
        uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
        lVar11 = lVar13 + uVar10 * 200 + 200;
        if (iVar6 == 0) {
          uVar3 = uVar10;
          lVar11 = lVar13;
        }
      }
      param_6 = (lVar13 - param_2) / 200;
    }
    param_4 = plStack_80;
    param_3 = lVar13;
    if ((lVar9 != param_2) && (param_3 = lVar9, lVar11 = param_2, param_2 != lVar13)) {
      while( true ) {
        lStack_a8 = param_6;
        lVar8 = lVar11;
        FUN_10726a96c(param_3,param_2);
        param_3 = param_3 + 200;
        param_2 = param_2 + 200;
        if (param_2 == lVar13) break;
        lVar11 = param_2;
        param_6 = lStack_a8;
        if (param_3 != lVar8) {
          lVar11 = lVar8;
        }
      }
      param_6 = lStack_a8;
      lVar11 = param_3;
      lVar4 = lVar8;
      if (param_3 != lVar8) {
        do {
          while( true ) {
            lVar12 = lVar4;
            FUN_10726a96c(lVar11,lVar8);
            lVar11 = lVar11 + 200;
            lVar8 = lVar8 + 200;
            if (lVar8 == lVar13) break;
            lVar4 = lVar8;
            if (lVar11 != lVar12) {
              lVar4 = lVar12;
            }
          }
          param_6 = lStack_a8;
          lVar8 = lVar12;
          lVar4 = lVar12;
        } while (lVar11 != lVar12);
      }
    }
    param_8 = lStack_a0;
    lVar11 = lStack_90 - param_6;
    if (param_5 + param_6 < (lStack_90 - (param_5 + param_6)) + lVar1) {
      func_0x0001072754f4();
      param_8 = lStack_a0;
      FUN_10726a518();
      param_6 = lVar11;
      param_1 = param_3;
      param_2 = lVar13;
      param_3 = lStack_98;
      param_5 = lVar1 - param_5;
      lVar9 = lStack_88;
    }
    else {
      FUN_10726a518(param_3,lVar13,lStack_98,param_4,lVar1 - param_5,lVar11,lStack_88,lStack_a0);
      param_2 = lVar9;
      lVar9 = lStack_88;
    }
  }
  puStack_68 = &uStack_78;
  uStack_78 = 0;
  lVar11 = lVar9;
  lStack_70 = lVar9;
  if (param_6 < param_5) {
    while (param_2 != param_3) {
      FUN_107269d80(lVar9);
      func_0x000107275964();
    }
    while (param_3 = param_3 + -200, lVar11 != lVar9) {
      if (param_2 == param_1) goto LAB_10726a8fc;
      plVar7 = param_4;
      func_0x0001072755a8();
      lVar1 = lVar11;
      lVar8 = param_2 + -200;
      lVar13 = param_2 + -200;
      if ((int)plVar7 == 0) {
        lVar1 = lVar11 + -200;
        lVar8 = param_2;
        lVar13 = lVar11 + -200;
      }
      param_2 = lVar8;
      FUN_10726a9d4(param_3,lVar13);
      lVar11 = lVar1;
    }
  }
  else {
    while (param_1 != param_2) {
      FUN_107269d80(lVar11,param_1);
      func_0x000107275964();
      lVar11 = lVar11 + 200;
    }
    while (lVar11 != lVar9) {
      if (param_2 == param_3) goto LAB_10726a890;
      plVar7 = param_4;
      FUN_10726a1c0(param_4,param_2,lVar9);
      if ((int)plVar7 == 0) {
        func_0x0001072754f4();
        FUN_10726a9d4();
        lVar9 = lVar9 + 200;
      }
      else {
        FUN_10726a9d4(param_1,param_2);
        param_2 = param_2 + 200;
      }
      param_1 = param_1 + 200;
    }
  }
LAB_10726a904:
  FUN_10726ab84(&lStack_70);
  return;
LAB_10726a8fc:
  while (lVar11 != lVar9) {
    lVar11 = lVar11 + -200;
    FUN_10726a9d4(param_3,lVar11);
    param_3 = param_3 + -200;
  }
  goto LAB_10726a904;
LAB_10726a890:
  for (; lVar11 != lVar9; lVar9 = lVar9 + 200) {
    func_0x0001072754f4();
    FUN_10726a9d4();
  }
  goto LAB_10726a904;
}



/* Entry: 10726a954; end: 10726a96b;  */

void FUN_10726a954(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lStack_128;
  undefined1 auStack_100 [200];
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001072747d8();
  func_0x000107274388();
  uStack_38 = extraout_x8;
  func_0x000107274e94(auStack_100);
  func_0x000107274d28();
  FUN_10726a9d4();
  func_0x000107274dd8();
  FUN_10726a9d4();
  FUN_107269ea4(auStack_100);
  func_0x00010727416c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  FUN_107269ea4();
  func_0x00010727477c();
  func_0x0001072747cc();
  func_0x000104c2f1f0();
  uVar2 = *(uint *)(unaff_x20 + 0x90);
  if (*(int *)(unaff_x19 + 0x90) != -1 || uVar2 != 0xffffffff) {
    lVar1 = unaff_x19 + 0x38;
    if (uVar2 == 0xffffffff) {
      FUN_107261ecc(lVar1);
    }
    else {
      lStack_128 = lVar1;
      (*(code *)(&PTR_FUN_110995e88)[uVar2])(&lStack_128,lVar1,unaff_x20 + 0x38);
    }
  }
  FUN_107269df4(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x0001072754c4();
  return;
}



/* Entry: 10726a96c; end: 10726a9d3;  */

void FUN_10726a96c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lStack_118;
  undefined1 auStack_f0 [200];
  undefined8 uStack_28;
  
  func_0x0001072747d8();
  func_0x000107274388();
  uStack_28 = extraout_x8;
  func_0x000107274e94(auStack_f0);
  func_0x000107274d28();
  FUN_10726a9d4();
  func_0x000107274dd8();
  FUN_10726a9d4();
  FUN_107269ea4(auStack_f0);
  func_0x00010727416c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  FUN_107269ea4();
  func_0x00010727477c();
  func_0x0001072747cc();
  func_0x000104c2f1f0();
  uVar2 = *(uint *)(unaff_x20 + 0x90);
  if (*(int *)(unaff_x19 + 0x90) != -1 || uVar2 != 0xffffffff) {
    lVar1 = unaff_x19 + 0x38;
    if (uVar2 == 0xffffffff) {
      FUN_107261ecc(lVar1);
    }
    else {
      lStack_118 = lVar1;
      (*(code *)(&PTR_FUN_110995e88)[uVar2])(&lStack_118,lVar1,unaff_x20 + 0x38);
    }
  }
  FUN_107269df4(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x0001072754c4();
  return;
}



/* Entry: 10726a9d4; end: 10726aa4f;  */

void FUN_10726a9d4(void)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long lStack_28;
  
  func_0x0001072747cc();
  func_0x000104c2f1f0();
  uVar2 = *(uint *)(unaff_x20 + 0x90);
  if (*(int *)(unaff_x19 + 0x90) != -1 || uVar2 != 0xffffffff) {
    lVar1 = unaff_x19 + 0x38;
    if (uVar2 == 0xffffffff) {
      FUN_107261ecc(lVar1);
    }
    else {
      lStack_28 = lVar1;
      (*(code *)(&PTR_FUN_110995e88)[uVar2])(&lStack_28,lVar1,unaff_x20 + 0x38);
    }
  }
  FUN_107269df4(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x0001072754c4();
  return;
}



/* Entry: 10726aa50; end: 10726aa93;  */

void FUN_10726aa50(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[0x16] == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_107261ecc(puVar1);
    *puVar1 = *param_3;
    puVar1[0x16] = 0;
  }
  return;
}



/* Entry: 10726aa94; end: 10726aaff;  */

void FUN_10726aa94(long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  bVar1 = *(int *)(*param_1 + 0x58) == 1;
  if (bVar1) {
    func_0x000107274d58(param_2);
    if (!bVar1) {
      uVar2 = *(ulong *)(unaff_x19 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x00010727511c();
        uVar2 = extraout_x8;
      }
      uVar3 = *(ulong *)(param_3 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x000107275110();
        uVar2 = extraout_x8_00;
        uVar3 = extraout_x9;
      }
      if (uVar2 == uVar3) {
        func_0x0001079376a0();
      }
      else {
        func_0x000107937670();
      }
    }
  }
  else {
    func_0x0001072747d8(*param_1,param_3);
    FUN_107261ecc();
    func_0x000107274d28();
    func_0x000107262d00();
    *(undefined4 *)(unaff_x20 + 0x58) = 1;
  }
  return;
}



/* Entry: 10726ab00; end: 10726ab83;  */

void FUN_10726ab00(void)

{
  long unaff_x20;
  
  func_0x0001072747d8();
  FUN_107261ecc();
  func_0x000107274d28();
  func_0x000107262d00();
  *(undefined4 *)(unaff_x20 + 0x58) = 1;
  return;
}



/* Entry: 10726ab84; end: 10726abcf;  */

void FUN_10726ab84(long param_1)

{
  undefined8 *unaff_x19;
  ulong uVar1;
  ulong *puVar2;
  
  func_0x000107274b5c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    puVar2 = (ulong *)unaff_x19[1];
    for (uVar1 = 0; uVar1 < *puVar2; uVar1 = uVar1 + 1) {
      FUN_107269ea4();
    }
  }
  return;
}



/* Entry: 10726abd0; end: 10726abe7;  */

void FUN_10726abd0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726abe8; end: 10726ac03;  */

void FUN_10726abe8(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      FUN_10726ac88(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 10726ac04; end: 10726ac37;  */

void FUN_10726ac04(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      FUN_10726ac88(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 10726ac38; end: 10726ac87;  */

void FUN_10726ac38(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  func_0x000104c2fe00();
  func_0x0001072751cc();
  FUN_10726ec14();
  func_0x000107269c3c(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x0001072754c4();
  return;
}



/* Entry: 10726ac88; end: 10726ad0f;  */

void FUN_10726ac88(void)

{
  func_0x000107274b80();
  FUN_107269ea4();
  func_0x000107274878();
  return;
}



/* Entry: 10726ad10; end: 10726ad93;  */

void FUN_10726ad10(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131acf40 & 1) == 0) {
    iVar1 = 0x131acf40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10726ad94(0x1131acf30);
      ___cxa_guard_release(0x1131acf40);
    }
  }
  func_0x000107275304();
  if (extraout_x8 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10726ad94; end: 10726adaf;  */

void FUN_10726ad94(void)

{
  undefined1 uStack_11;
  
  FUN_10726adb0(&uStack_11);
  return;
}



/* Entry: 10726adb0; end: 10726ae1f;  */

void FUN_10726adb0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_10726ae20();
  *puStack_30 = &PTR_FUN_1109967c0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &UNK_10e52b660;
  puStack_30[6] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0;
  func_0x00010727428c();
  FUN_10726b254();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072752c0();
  FUN_10726ae40();
  func_0x000107275158();
  return;
}



/* Entry: 10726ae20; end: 10726ae3f;  */

void FUN_10726ae20(void)

{
  func_0x0001072752c0();
  FUN_10726ae40();
  func_0x000107275158();
  return;
}



/* Entry: 10726ae40; end: 10726ae57;  */

void FUN_10726ae40(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109967c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10726ae58; end: 10726ae5b;  */

void FUN_10726ae58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109967c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10726ae5c; end: 10726ae6f;  */

void FUN_10726ae5c(void)

{
  func_0x00010726ae7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10726ae70; end: 10726ae87;  */

void FUN_10726ae70(long param_1)

{
  long extraout_x8;
  
  func_0x000107274f8c(param_1 + 0x18);
  if (extraout_x8 != 0) {
    FUN_10726aeb8();
    func_0x000107274f80();
  }
  return;
}



/* Entry: 10726ae88; end: 10726aeb7;  */

void FUN_10726ae88(void)

{
  long extraout_x8;
  
  func_0x000107274f8c();
  if (extraout_x8 != 0) {
    FUN_10726aeb8();
    func_0x000107274f80();
  }
  return;
}



/* Entry: 10726aeb8; end: 10726af17;  */

void FUN_10726aeb8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010726aef4(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0xa8;
  }
  return;
}



/* Entry: 10726af18; end: 10726af5b;  */

void FUN_10726af18(long param_1)

{
  if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110995ea8)[*(uint *)(param_1 + 0x60)]);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



/* Entry: 10726af5c; end: 10726af9b;  */

void FUN_10726af5c(void)

{
  return;
}



/* Entry: 10726af9c; end: 10726b00f;  */

void FUN_10726af9c(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10726b010; end: 10726b017;  */

void FUN_10726b010(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x120;
    func_0x00010726b04c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726b018; end: 10726b07b;  */

void FUN_10726b018(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x120;
    func_0x00010726b04c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10726b07c; end: 10726b09b;  */

void FUN_10726b07c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10726b09c();
  }
  return;
}



/* Entry: 10726b09c; end: 10726b0e3;  */

void FUN_10726b09c(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10726b0e4();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  FUN_10726b120(param_1);
  return;
}



/* Entry: 10726b0e4; end: 10726b11f;  */

long FUN_10726b0e4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10726b120; end: 10726b143;  */

void FUN_10726b120(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10726b144; end: 10726b163;  */

void FUN_10726b144(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10726b164();
  }
  return;
}



/* Entry: 10726b164; end: 10726b187;  */

void FUN_10726b164(void)

{
  func_0x00010727599c();
  func_0x0001001148fc();
  func_0x000107274878();
  return;
}



/* Entry: 10726b188; end: 10726b1cf;  */

void FUN_10726b188(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10726b1d0();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  FUN_10726b20c(param_1);
  return;
}



/* Entry: 10726b1d0; end: 10726b20b;  */

long FUN_10726b1d0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10726b20c; end: 10726b253;  */

void FUN_10726b20c(long param_1)

{
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10726b254; end: 10726b263;  */

void FUN_10726b254(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726b264; end: 10726b2ab;  */

void FUN_10726b264(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10726b2ac();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230(param_1);
  return;
}



/* Entry: 10726b2ac; end: 10726b2e7;  */

long FUN_10726b2ac(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10726b2e8; end: 10726b383;  */

long FUN_10726b2e8(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072753f8();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 10726b384; end: 10726b3db;  */

void FUN_10726b384(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x0001072747cc();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (param_3 = param_3 << 2; param_3 != 0; param_3 = param_3 + -4) {
    FUN_10726b3dc();
  }
  return;
}



/* Entry: 10726b3dc; end: 10726b533;  */

void FUN_10726b3dc(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long *plVar4;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar5;
  ulong extraout_x10;
  long *unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  
  func_0x000107275128();
  func_0x00010727584c();
  if (unaff_x22 != 0) {
    func_0x000107274c60();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & unaff_x23;
      in_ZR = true;
    }
    else {
      in_NG = (long)(unaff_x22 - unaff_x23) < 0;
      in_ZR = unaff_x22 == unaff_x23;
      unaff_x24 = unaff_x23;
      if (unaff_x22 <= unaff_x23) {
        uVar5 = 0;
        if (unaff_x22 != 0) {
          uVar5 = unaff_x23 / unaff_x22;
        }
        unaff_x24 = unaff_x23 - uVar5 * unaff_x22;
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10726b478;
          uVar5 = plVar4[1];
          if (uVar5 != unaff_x23) break;
          in_NG = *(int *)(plVar4 + 2) - unaff_w21 < 0;
          in_ZR = false;
          if (*(int *)(plVar4 + 2) == unaff_w21) {
            return;
          }
        }
        if ((unaff_x22 & extraout_x8) == 0) {
          uVar5 = uVar5 & extraout_x8;
        }
        else if (unaff_x22 <= uVar5) {
          uVar1 = 0;
          if (unaff_x22 != 0) {
            uVar1 = uVar5 / unaff_x22;
          }
          uVar5 = uVar5 - uVar1 * unaff_x22;
        }
        in_NG = (long)(uVar5 - unaff_x24) < 0;
        in_ZR = uVar5 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_10726b478:
  func_0x000107274cb4();
  func_0x000107274f24();
  *param_1 = 0;
  param_1[1] = unaff_x23;
  *(int *)(param_1 + 2) = unaff_w21;
  func_0x00010727423c();
  if ((unaff_x22 == 0) || (func_0x0001072748dc(), (bool)in_NG)) {
    func_0x000107274590();
    uVar2 = unaff_x22 == 3;
    func_0x00010727413c();
    FUN_1072652b0();
    func_0x000107274b04();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x24 = extraout_x8_00 & unaff_x23;
    }
    else {
      in_ZR = unaff_x22 == unaff_x23;
      unaff_x24 = unaff_x23;
      if (unaff_x22 <= unaff_x23) {
        uVar5 = 0;
        if (unaff_x22 != 0) {
          uVar5 = unaff_x23 / unaff_x22;
        }
        unaff_x24 = unaff_x23 - uVar5 * unaff_x22;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x24 * 8) == 0) {
    func_0x000107274b14();
    if (extraout_x9 != 0) {
      func_0x0001072748ec();
      lVar3 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar5 = extraout_x9_00;
        if (unaff_x22 <= extraout_x9_00) {
          func_0x000107274f18();
          lVar3 = extraout_x8_02;
          uVar5 = extraout_x9_01;
        }
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x000107274e14();
  }
  func_0x000107274578();
  FUN_1072653fc();
  return;
}



/* Entry: 10726b534; end: 10726b59f;  */

undefined8 FUN_10726b534(void)

{
  undefined8 unaff_x19;
  
  func_0x000107274b50();
  func_0x00010726b558();
  func_0x000100168718();
  FUN_10726b5a0();
  return unaff_x19;
}



/* Entry: 10726b5a0; end: 10726b5b7;  */

void FUN_10726b5a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726b5b8; end: 10726b5eb;  */

void FUN_10726b5b8(long param_1)

{
  func_0x00010014ae40();
  func_0x000104c2fe00();
  FUN_10726b5ec(param_1 + 0x38);
  return;
}



/* Entry: 10726b5ec; end: 10726b623;  */

void FUN_10726b5ec(long param_1)

{
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_10726578c();
  FUN_10726b624(param_1 + 0x2d8,unaff_x20 + 0x2d8);
  return;
}



/* Entry: 10726b624; end: 10726b65b;  */

void FUN_10726b624(void)

{
  func_0x000107274368();
  FUN_1072652b0();
  FUN_10726b65c();
  return;
}



/* Entry: 10726b65c; end: 10726b68b;  */

void FUN_10726b65c(undefined8 param_1,long *param_2)

{
  long *unaff_x19;
  
  func_0x0001072747d8();
  while (param_2 != (long *)0x0) {
    FUN_10726b3dc();
    unaff_x19 = (long *)*unaff_x19;
    param_2 = unaff_x19;
  }
  return;
}



/* Entry: 10726b68c; end: 10726b793;  */

void FUN_10726b68c(undefined8 *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uVar1 = param_3;
  if (param_3 <= param_4) {
    uVar1 = param_4;
  }
  auStack_60._0_8_ = *param_2;
  auStack_60._8_8_ = param_2[1];
  auStack_50 = FUN_107259180(auStack_60);
  auVar5 = FUN_10726b794(auStack_50,uVar1);
  auStack_50._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_2 + 2);
  auStack_50._8_8_ = param_2[3];
  auVar6 = *(undefined1 (*) [16])(param_2 + 2);
  if (180.0 < (double)param_2[3]) {
    auVar6 = FUN_107259180(auStack_50);
  }
  if (param_4 <= param_3) {
    param_3 = param_4;
  }
  auStack_60 = auVar6;
  auVar7 = FUN_10726b794(auStack_60,uVar1);
  auVar3._0_8_ = _ldexp(0x3ff0000000000000,uVar1);
  auVar4._0_8_ = (long)(double)(long)auVar5._0_8_;
  auVar4._8_8_ = (long)(double)(long)auVar7._0_8_;
  lVar2 = (long)auVar5._8_8_;
  auVar3._8_8_ = auVar3._0_8_;
  auVar6[8] = (char)lVar2;
  auVar6._0_8_ = (long)auVar7._8_8_;
  auVar6[9] = (char)((ulong)lVar2 >> 8);
  auVar6[10] = (char)((ulong)lVar2 >> 0x10);
  auVar6[0xb] = (char)((ulong)lVar2 >> 0x18);
  auVar6[0xc] = (char)((ulong)lVar2 >> 0x20);
  auVar6[0xd] = (char)((ulong)lVar2 >> 0x28);
  auVar6[0xe] = (char)((ulong)lVar2 >> 0x30);
  auVar6[0xf] = (char)((ulong)lVar2 >> 0x38);
  auVar6 = NEON_fminnm(auVar3,auVar6,8);
  auVar6 = NEON_fmaxnm(auVar6,ZEXT216(0),8);
  auVar5._0_8_ = (long)auVar6._0_8_;
  auVar5._8_8_ = (long)auVar6._8_8_;
  auVar6 = NEON_sli(auVar4,auVar5,0x20,8);
  param_1[1] = auVar6._8_8_;
  *param_1 = auVar6._0_8_;
  *(ushort *)(param_1 + 2) = (ushort)param_3 | (ushort)(uVar1 << 8);
  return;
}



/* Entry: 10726b794; end: 10726b7a3;  */

undefined1  [16] FUN_10726b794(undefined8 *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = (double)param_1[1];
  dVar1 = (double)NEON_fminnm(*param_1,0x40554345b1a549d7);
  if (dVar1 <= -85.0511287798066) {
    dVar1 = -85.0511287798066;
  }
  dVar1 = (dVar1 * 3.141592653589793) / 360.0 + 0.7853981633974483;
  _tan(dVar1);
  _log();
  dVar3 = (double)(1 << (ulong)(param_2 & 0x1f)) / 360.0;
  auVar4._0_8_ = dVar3 * (dVar2 + 180.0);
  auVar4._8_8_ = dVar3 * (dVar1 * -57.29577951308232 + 180.0);
  return auVar4;
}



/* Entry: 10726b7a4; end: 10726b83f;  */

char * FUN_10726b7a4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *pcVar2;
  undefined8 extraout_x8;
  undefined8 uStack_50;
  char acStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  pcVar1 = (char *)&uStack_50;
  func_0x000107274388(param_1,param_2,param_2);
  acStack_48[0] = '\x06';
  acStack_48[1] = '\0';
  acStack_48[2] = '\0';
  acStack_48[3] = '\0';
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  pcVar2 = acStack_48;
  uStack_28 = extraout_x8;
  func_0x00010787da4c(&uStack_50);
  func_0x000104c3365c(acStack_48);
  func_0x0001078823ac(acStack_48,uStack_50);
  func_0x000107880dc4();
  func_0x00010727416c(uStack_28);
  if ((bool)in_ZR) {
    func_0x0001001685d4();
    return pcVar1;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  func_0x000107880dc4();
  func_0x00010727477c();
  if ((*pcVar1 == *pcVar2) && (*(int *)(pcVar1 + 4) == *(int *)(pcVar2 + 4))) {
    return (char *)(ulong)(*(int *)(pcVar1 + 8) == *(int *)(pcVar2 + 8));
  }
  return (char *)0x0;
}



/* Entry: 10726b840; end: 10726b877;  */

bool FUN_10726b840(char *param_1,char *param_2)

{
  if ((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
  }
  return false;
}



/* Entry: 10726b878; end: 10726b8f3;  */

void FUN_10726b878(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_10726b8b0:
    func_0x0001001685d4();
    if (param_2 == 0) {
      FUN_10726b9a0(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      FUN_10726b9b8();
      func_0x0001001686b8();
      FUN_10726b9a0();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto LAB_10726b8b0;
  }
  return;
}



/* Entry: 10726b8f4; end: 10726b99f;  */

void FUN_10726b8f4(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_10726b9a0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001001685e0();
    FUN_10726b9b8();
    func_0x0001001686b8();
    FUN_10726b9a0();
    func_0x0001001686dc();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001001686ec();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072742e0();
      func_0x0001072742f4();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x000107274bf0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107274bd8();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107274bcc();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010727411c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10726b9a0; end: 10726b9b7;  */

void FUN_10726b9a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726b9b8; end: 10726b9cf;  */

void FUN_10726b9b8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000100168718();
  FUN_10726b9f0();
  return;
}



/* Entry: 10726b9d0; end: 10726b9ef;  */

void FUN_10726b9d0(void)

{
  func_0x000100168718();
  FUN_10726b9f0();
  return;
}



/* Entry: 10726b9f0; end: 10726ba07;  */

void FUN_10726b9f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726ba08; end: 10726bb3b;  */

void FUN_10726ba08(long *param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  ulong extraout_x13;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = param_1;
  FUN_10726bb3c();
  if (plVar2 == (long *)0x0) {
    return;
  }
  func_0x0001072758c8();
  if ((bool)in_ZR) {
    uVar4 = extraout_x13 & extraout_x9;
  }
  else {
    uVar4 = extraout_x9;
    if (extraout_x10 <= extraout_x9) {
      uVar4 = 0;
      if (extraout_x10 != 0) {
        uVar4 = extraout_x9 / extraout_x10;
      }
      uVar4 = extraout_x9 - uVar4 * extraout_x10;
    }
  }
  lVar6 = *param_1;
  plVar1 = *(long **)(lVar6 + uVar4 * 8);
  do {
    plVar5 = plVar1;
    plVar1 = (long *)*plVar5;
  } while ((long *)*plVar5 != plVar2);
  plStack_30 = param_1 + 2;
  lVar3 = extraout_x8;
  if (plVar5 == plStack_30) {
LAB_10726ba94:
    if (extraout_x8 == 0) {
LAB_10726bac8:
      *(undefined8 *)(lVar6 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10726bad0;
    }
    uVar7 = *(ulong *)(extraout_x8 + 8);
    if ((extraout_x10 & extraout_x13) == 0) {
      uVar8 = uVar7 & extraout_x13;
    }
    else {
      uVar8 = uVar7;
      if (extraout_x10 <= uVar7) {
        uVar8 = 0;
        if (extraout_x10 != 0) {
          uVar8 = uVar7 / extraout_x10;
        }
        uVar8 = uVar7 - uVar8 * extraout_x10;
      }
    }
    if (uVar8 != uVar4) goto LAB_10726bac8;
  }
  else {
    uVar7 = plVar5[1];
    if ((extraout_x10 & extraout_x13) == 0) {
      uVar7 = uVar7 & extraout_x13;
    }
    else if (extraout_x10 <= uVar7) {
      uVar8 = 0;
      if (extraout_x10 != 0) {
        uVar8 = uVar7 / extraout_x10;
      }
      uVar7 = uVar7 - uVar8 * extraout_x10;
    }
    if (uVar7 != uVar4) goto LAB_10726ba94;
LAB_10726bad0:
    if (lVar3 == 0) goto LAB_10726bb08;
    uVar7 = *(ulong *)(lVar3 + 8);
  }
  if ((extraout_x10 & extraout_x13) == 0) {
    uVar7 = uVar7 & extraout_x13;
  }
  else if (extraout_x10 <= uVar7) {
    uVar8 = 0;
    if (extraout_x10 != 0) {
      uVar8 = uVar7 / extraout_x10;
    }
    uVar7 = uVar7 - uVar8 * extraout_x10;
  }
  if (uVar7 != uVar4) {
    *(long **)(lVar6 + uVar7 * 8) = plVar5;
    lVar3 = *plVar2;
  }
LAB_10726bb08:
  *plVar5 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  plStack_38 = plVar2;
  func_0x000107274b68();
  uStack_27 = 0;
  uStack_23 = 0;
  FUN_10726558c(&plStack_38);
  return;
}



/* Entry: 10726bb3c; end: 10726bbd7;  */

long FUN_10726bb3c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x000107274e78();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107274fd0();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 10726bbd8; end: 10726bc53;  */

void FUN_10726bbd8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107274b40();
  if (unaff_x20 != 0) {
    func_0x000107275404();
    if ((bool)in_ZR) {
      func_0x00010726bc0c(unaff_x20 + 0x10);
    }
    func_0x000107274f38();
  }
  return;
}



/* Entry: 10726bc54; end: 10726bce3;  */

void FUN_10726bc54(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726bce4; end: 10726bcff;  */

bool FUN_10726bce4(long param_1)

{
  FUN_10726bd00();
  return param_1 != 0;
}



/* Entry: 10726bd00; end: 10726bda7;  */

long FUN_10726bd00(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x0001072750b4(), extraout_x8 != 0)) {
    func_0x00010784b234();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072753f8();
        if (!(bool)in_ZR) break;
        lVar1 = (long)(unaff_x21 + 2);
        FUN_10726b840(lVar1,param_2);
        if ((int)lVar1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000107274f40();
          uVar2 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar2 == unaff_x24);
  }
  return 0;
}



/* Entry: 10726bda8; end: 10726be1b;  */

void FUN_10726bda8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_58 [40];
  
  lVar1 = param_3;
  if (*(long *)(param_2 + 0x88) <= *(long *)(param_3 + 0x88)) {
    lVar1 = param_2;
    param_2 = param_3;
  }
  FUN_10726b624(auStack_58,param_2 + 0x2d8);
  FUN_10726b65c(auStack_58,*(undefined8 *)(lVar1 + 0x2e8));
  func_0x0001001685d4();
  FUN_10726578c();
  FUN_107265688(param_1 + 0x2d8,auStack_58);
  FUN_10726b534(auStack_58);
  return;
}



/* Entry: 10726be1c; end: 10726bfdb;  */

long * FUN_10726be1c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  long *plVar9;
  long *unaff_x22;
  long *plVar10;
  long *plVar11;
  ulong unaff_x24;
  ulong unaff_x25;
  long *plVar12;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  func_0x000107275128();
  func_0x00010727471c();
  FUN_10726364c();
  func_0x0001072754b8();
  if (unaff_x24 != 0) {
    uVar8 = unaff_x24 - 1;
    in_NG = (long)(unaff_x24 & uVar8) < 0;
    in_ZR = (unaff_x24 & uVar8) == 0;
    bVar3 = false;
    if ((bool)in_ZR) {
      unaff_x25 = uVar8 & unaff_x20;
    }
    else {
      func_0x000107275464();
      if (bVar3) {
        func_0x000107274d10();
      }
    }
    plVar12 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10726bebc;
          uVar6 = plVar12[1];
          in_NG = (long)(uVar6 - unaff_x20) < 0;
          in_ZR = uVar6 == unaff_x20;
          if (!(bool)in_ZR) break;
          param_1 = plVar12 + 2;
          func_0x000104c32db4();
          if (((ulong)param_1 & 1) != 0) {
            plVar5 = plVar12 + 9;
            func_0x000107265740();
            if (plVar5 != unaff_x22) {
              *(int *)(plVar12 + 0x68) = (int)unaff_x22[0x5f];
              plVar10 = (long *)unaff_x22[0x5d];
              lVar7 = plVar12[0x65];
              if (lVar7 != 0) {
                puVar2 = (undefined8 *)plVar12[100];
                for (; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar2 = 0;
                  puVar2 = puVar2 + 1;
                }
                plVar9 = (long *)plVar12[0x66];
                plVar12[0x67] = 0;
                plVar12[0x66] = 0;
                for (plVar11 = plVar10;
                    (plVar10 = plVar11, plVar9 != (long *)0x0 &&
                    (plVar10 = (long *)0x0, plVar11 != (long *)0x0)); plVar11 = (long *)*plVar11) {
                  *(undefined4 *)(plVar9 + 2) = *(undefined4 *)(plVar11 + 2);
                  plVar9 = (long *)*plVar9;
                  func_0x000107274c6c();
                  FUN_10726c100();
                }
                func_0x000107274c6c();
                func_0x00010726b558();
              }
              for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                iVar1 = *(int *)(plVar10 + 2);
                func_0x000107274cb4();
                in_stack_00000028 = 1;
                *(int *)(plVar5 + 2) = iVar1;
                in_stack_00000018 = plVar5;
                in_stack_00000020 = (long)(plVar12 + 0x66);
                *plVar5 = 0;
                plVar5[1] = (long)iVar1;
                FUN_10726c100(plVar12 + 100,plVar5);
                in_stack_00000018 = (long *)0x0;
                plVar5 = (long *)&stack0x00000018;
                FUN_1072653fc();
              }
            }
            return plVar12 + 9;
          }
        }
        if ((unaff_x24 & uVar8) == 0) {
          uVar6 = uVar6 & uVar8;
        }
        else if (unaff_x24 <= uVar6) {
          func_0x0001072750f8();
          uVar6 = extraout_x8;
        }
        in_NG = (long)(uVar6 - unaff_x25) < 0;
        in_ZR = uVar6 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10726bebc:
  plVar12 = unaff_x19 + 2;
  func_0x0001072757b0();
  in_stack_00000018 = (long *)0x0;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  func_0x000104c2fe00(param_1 + 2);
  plVar5 = param_1 + 9;
  FUN_10726b5ec(plVar5);
  func_0x000107274b68();
  func_0x00010727423c();
  if ((unaff_x24 == 0) || (func_0x0001072747bc(), uVar8 = unaff_x25, (bool)in_NG)) {
    func_0x0001072743fc();
    uVar4 = unaff_x24 == 3;
    func_0x00010727413c();
    FUN_107265450();
    func_0x000107274aec();
    plVar5 = unaff_x19;
    if ((bool)uVar4) {
      in_ZR = 1;
      uVar8 = extraout_x8_00 & unaff_x20;
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      uVar8 = unaff_x20;
      if (unaff_x24 <= unaff_x20) {
        func_0x000107274d10();
        plVar5 = unaff_x19;
        uVar8 = unaff_x25;
      }
    }
  }
  func_0x0001072752b4();
  if (extraout_x9 == (long *)0x0) {
    *param_1 = *plVar12;
    *plVar12 = (long)param_1;
    *(long **)(extraout_x8_01 + uVar8 * 8) = plVar12;
    if (*param_1 != 0) {
      func_0x0001072747ac();
      lVar7 = extraout_x8_02;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar8 = extraout_x9_00;
        if (unaff_x24 <= extraout_x9_00) {
          func_0x0001072750ec();
          lVar7 = extraout_x8_03;
          uVar8 = extraout_x9_01;
        }
      }
      *(long **)(lVar7 + uVar8 * 8) = param_1;
    }
  }
  else {
    *param_1 = *extraout_x9;
    *extraout_x9 = (long)param_1;
  }
  func_0x000107274274();
  FUN_10726558c();
  return plVar5;
}



/* Entry: 10726bfdc; end: 10726c0ff;  */

undefined8 *** FUN_10726bfdc(undefined8 ***param_1,undefined8 ***param_2)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  pppuVar2 = param_1;
  func_0x000107265740();
  if (pppuVar2 != param_2) {
    *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
    ppuVar5 = param_2[0x5d];
    ppuVar3 = param_1[0x5c];
    if (ppuVar3 != (undefined8 **)0x0) {
      ppuVar4 = param_1[0x5b];
      for (; ppuVar3 != (undefined8 **)0x0; ppuVar3 = (undefined8 **)((long)ppuVar3 + -1)) {
        *ppuVar4 = (undefined8 *)0x0;
        ppuVar4 = ppuVar4 + 1;
      }
      ppuVar4 = param_1[0x5d];
      param_1[0x5e] = (undefined8 **)0x0;
      param_1[0x5d] = (undefined8 **)0x0;
      for (ppuVar3 = ppuVar5;
          (ppuVar5 = ppuVar3, ppuVar4 != (undefined8 **)0x0 &&
          (ppuVar5 = (undefined8 **)0x0, ppuVar3 != (undefined8 **)0x0));
          ppuVar3 = (undefined8 **)*ppuVar3) {
        *(undefined4 *)(ppuVar4 + 2) = *(undefined4 *)(ppuVar3 + 2);
        ppuVar4 = (undefined8 **)*ppuVar4;
        func_0x000107274c6c();
        FUN_10726c100();
      }
      func_0x000107274c6c();
      func_0x00010726b558();
    }
    for (; ppuVar5 != (undefined8 **)0x0; ppuVar5 = (undefined8 **)*ppuVar5) {
      iVar1 = *(int *)(ppuVar5 + 2);
      func_0x000107274cb4();
      uStack_48 = 1;
      *(int *)(pppuVar2 + 2) = iVar1;
      ppuStack_58 = pppuVar2;
      ppuStack_50 = param_1 + 0x5d;
      *pppuVar2 = (undefined8 **)0x0;
      pppuVar2[1] = (undefined8 **)(long)iVar1;
      FUN_10726c100(param_1 + 0x5b,pppuVar2);
      ppuStack_58 = (undefined8 **)0x0;
      pppuVar2 = &ppuStack_58;
      FUN_1072653fc();
    }
  }
  return param_1;
}



/* Entry: 10726c100; end: 10726c437;  */

void FUN_10726c100(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  ulong uVar10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  ulong uVar11;
  long *plVar12;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  func_0x0001072747cc();
  uVar14 = (ulong)*(int *)(param_3 + 0x10);
  *(ulong *)(param_3 + 8) = uVar14;
  uVar15 = *(ulong *)(param_2 + 8);
  func_0x000107274964(*(undefined8 *)(param_2 + 0x18));
  if ((uVar15 == 0) ||
     (func_0x000107274958(param_1,*(undefined4 *)(param_2 + 0x20),(float)uVar15), (bool)in_NG)) {
    func_0x000107274ac4();
    bVar3 = 2 < uVar15;
    bVar4 = uVar15 == 3;
    func_0x0001072741d0();
    uVar13 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar13 = extraout_x9;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = unaff_x19[1];
      param_2 = uVar13;
    }
    if (uVar15 < uVar13) {
LAB_10726c184:
      FUN_1072653e0(uVar13);
      func_0x000107275500();
      FUN_1072653c8();
      uVar15 = 0;
      unaff_x19[1] = uVar13;
      lVar6 = *unaff_x19;
      while (uVar13 != uVar15) {
        func_0x0001001686ec();
        lVar6 = extraout_x8_00;
        uVar15 = extraout_x9_00;
      }
      plVar8 = (long *)unaff_x19[2];
      uVar15 = uVar13;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar7 = uVar13 - 1;
        if ((uVar13 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar13 <= uVar10) {
          uVar11 = 0;
          if (uVar13 != 0) {
            uVar11 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar11 * uVar13;
        }
        *(long **)(lVar6 + uVar10 * 8) = unaff_x19 + 2;
        while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
          uVar11 = plVar8[1];
          if ((uVar13 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar13 <= uVar11) {
            uVar1 = 0;
            if (uVar13 != 0) {
              uVar1 = uVar11 / uVar13;
            }
            uVar11 = uVar11 - uVar1 * uVar13;
          }
          if (uVar11 != uVar10) {
            plVar12 = plVar8;
            if (*(long *)(lVar6 + uVar11 * 8) == 0) {
              func_0x00010727591c();
              lVar6 = extraout_x8_02;
              uVar7 = extraout_x9_02;
              plVar8 = extraout_x12;
              uVar10 = extraout_x11_00;
            }
            else {
              do {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) break;
              } while (*(int *)(plVar8 + 2) == *(int *)(plVar12 + 2));
              *plVar9 = (long)plVar12;
              func_0x0001072753e0();
              lVar6 = extraout_x8_01;
              uVar7 = extraout_x9_01;
              plVar8 = extraout_x10;
              uVar10 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar13 < uVar15) {
      func_0x0001072741b8();
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001072740fc();
      }
      if (uVar13 <= param_2) {
        uVar13 = param_2;
      }
      if (uVar13 < uVar15) {
        if (uVar13 != 0) goto LAB_10726c184;
        FUN_1072653c8();
        unaff_x19[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = unaff_x19[1];
      }
    }
  }
  uVar13 = uVar15 - 1;
  if ((uVar15 & uVar13) == 0) {
    uVar7 = uVar13 & uVar14;
  }
  else {
    uVar7 = uVar14;
    if (uVar15 <= uVar14) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar14 / uVar15;
      }
      uVar7 = uVar14 - uVar7 * uVar15;
    }
  }
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar9 = plVar8;
      plVar8 = (long *)*plVar9;
      if (plVar8 == (long *)0x0) break;
      uVar10 = plVar8[1];
      if ((uVar15 & uVar13) == 0) {
        uVar11 = uVar10 & uVar13;
      }
      else {
        uVar11 = uVar10;
        if (uVar15 <= uVar10) {
          uVar11 = 0;
          if (uVar15 != 0) {
            uVar11 = uVar10 / uVar15;
          }
          uVar11 = uVar10 - uVar11 * uVar15;
        }
      }
      if (uVar11 != uVar7) break;
      if (uVar10 == uVar14) {
        bVar3 = (int)plVar8[2] == (int)unaff_x20[2];
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar14 = unaff_x20[1];
  if ((uVar15 & uVar13) == 0) {
    uVar14 = uVar13 & uVar14;
    if (plVar9 == (long *)0x0) goto LAB_10726c398;
LAB_10726c35c:
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_10726c3ec;
    uVar7 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar15 & uVar13) == 0) {
      uVar7 = uVar7 & uVar13;
    }
    else if (uVar15 <= uVar7) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = uVar7 / uVar15;
      }
      uVar7 = uVar7 - uVar13 * uVar15;
    }
    if (uVar7 == uVar14) goto LAB_10726c3ec;
  }
  else {
    if (uVar15 <= uVar14) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar7 * uVar15;
    }
    if (plVar9 != (long *)0x0) goto LAB_10726c35c;
LAB_10726c398:
    plVar8 = unaff_x19 + 2;
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    *(long **)(lVar6 + uVar14 * 8) = plVar8;
    if (*unaff_x20 == 0) goto LAB_10726c3ec;
    uVar7 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar15 & uVar13) == 0) {
      uVar7 = uVar7 & uVar13;
    }
    else if (uVar15 <= uVar7) {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar7 / uVar15;
      }
      uVar7 = uVar7 - uVar14 * uVar15;
    }
  }
  *(long **)(lVar6 + uVar7 * 8) = unaff_x20;
LAB_10726c3ec:
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 10726c438; end: 10726c723;  */

ulong * FUN_10726c438(ulong *param_1)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong *extraout_x9_04;
  ulong *extraout_x9_05;
  ulong *extraout_x10;
  ulong extraout_x10_00;
  ulong *puVar8;
  ulong *puVar9;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong *extraout_x12;
  ulong *puVar10;
  long *unaff_x19;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *unaff_x25;
  
  func_0x000107275128();
  func_0x000107274760();
  puVar14 = (ulong *)unaff_x19[1];
  puVar4 = param_1;
  if (puVar14 != (ulong *)0x0) {
    uVar13 = (long)puVar14 - 1;
    if (((ulong)puVar14 & uVar13) == 0) {
      unaff_x25 = (ulong *)(uVar13 & (ulong)param_1);
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)param_1 - (long)puVar14 < 0;
      in_ZR = param_1 == puVar14;
      unaff_x25 = param_1;
      if (puVar14 <= param_1) {
        uVar7 = 0;
        if (puVar14 != (ulong *)0x0) {
          uVar7 = (ulong)param_1 / (ulong)puVar14;
        }
        unaff_x25 = (ulong *)((long)param_1 - uVar7 * (long)puVar14);
      }
    }
    puVar11 = *(ulong **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (puVar11 != (ulong *)0x0) {
      do {
        while( true ) {
          puVar11 = (ulong *)*puVar11;
          if (puVar11 == (ulong *)0x0) goto LAB_10726c4dc;
          puVar5 = (ulong *)puVar11[1];
          in_NG = (long)puVar5 - (long)param_1 < 0;
          in_ZR = puVar5 == param_1;
          if (!(bool)in_ZR) break;
          func_0x000107275634();
          if (((ulong)puVar4 & 1) != 0) goto LAB_10726c6f0;
        }
        if (((ulong)puVar14 & uVar13) == 0) {
          puVar5 = (ulong *)((ulong)puVar5 & uVar13);
        }
        else if (puVar14 <= puVar5) {
          func_0x0001072750f8();
          puVar5 = extraout_x8;
        }
        in_NG = (long)puVar5 - (long)unaff_x25 < 0;
        in_ZR = puVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10726c4dc:
  puVar11 = (ulong *)(unaff_x19 + 2);
  func_0x0001072756b0();
  puVar5 = puVar4;
  func_0x0001072757a4();
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  func_0x00010727423c();
  if ((puVar14 != (ulong *)0x0) && (func_0x0001072747bc(), !(bool)in_NG)) goto LAB_10726c6a0;
  func_0x0001072743fc();
  bVar2 = (ulong *)0x2 < puVar14;
  bVar3 = puVar14 == (ulong *)0x3;
  func_0x0001072741d0();
  puVar12 = extraout_x8_00;
  if (!bVar2 || bVar3) {
    puVar12 = extraout_x9;
  }
  if ((long)puVar12 - 1U == 0) {
    puVar12 = (ulong *)0x2;
  }
  else if (((ulong)puVar12 & (long)puVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar5 = puVar12;
  }
  puVar14 = (ulong *)unaff_x19[1];
  if (puVar14 < puVar12) {
LAB_10726c554:
    if ((ulong)puVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10726c718);
      (*pcVar1)();
    }
    __Znwm((long)puVar12 << 3);
    FUN_10726c87c();
    puVar14 = (ulong *)0x0;
    unaff_x19[1] = (long)puVar12;
    lVar6 = *unaff_x19;
    while (puVar12 != puVar14) {
      func_0x0001001686ec();
      lVar6 = extraout_x8_01;
      puVar14 = extraout_x9_00;
    }
    puVar5 = (ulong *)*puVar11;
    puVar14 = puVar12;
    if (puVar5 != (ulong *)0x0) {
      puVar8 = (ulong *)puVar5[1];
      uVar7 = (long)puVar12 - 1;
      uVar13 = 0;
      if (puVar12 != (ulong *)0x0) {
        uVar13 = (ulong)puVar8 / (ulong)puVar12;
      }
      puVar9 = puVar8;
      if (puVar12 <= puVar8) {
        puVar9 = (ulong *)((long)puVar8 - uVar13 * (long)puVar12);
      }
      if (((ulong)puVar12 & uVar7) == 0) {
        puVar9 = (ulong *)((ulong)puVar8 & uVar7);
      }
      *(ulong **)(lVar6 + (long)puVar9 * 8) = puVar11;
      while (puVar8 = puVar5, puVar5 = (ulong *)*puVar8, puVar5 != (ulong *)0x0) {
        puVar10 = (ulong *)puVar5[1];
        if (((ulong)puVar12 & uVar7) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & uVar7);
        }
        else if (puVar12 <= puVar10) {
          uVar13 = 0;
          if (puVar12 != (ulong *)0x0) {
            uVar13 = (ulong)puVar10 / (ulong)puVar12;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar13 * (long)puVar12);
        }
        if (puVar10 != puVar9) {
          if (*(long *)(lVar6 + (long)puVar10 * 8) == 0) {
            func_0x00010727591c();
            lVar6 = extraout_x8_03;
            uVar7 = extraout_x9_02;
            puVar5 = extraout_x12;
            puVar9 = extraout_x11_00;
          }
          else {
            *puVar8 = *puVar5;
            func_0x000107274154();
            lVar6 = extraout_x8_02;
            uVar7 = extraout_x9_01;
            puVar5 = extraout_x10;
            puVar9 = extraout_x11;
          }
        }
      }
    }
  }
  else if (puVar12 < puVar14) {
    func_0x0001072741b8();
    if ((puVar14 < (ulong *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072740fc();
    }
    if (puVar12 <= puVar5) {
      puVar12 = puVar5;
    }
    if (puVar12 < puVar14) {
      if (puVar12 != (ulong *)0x0) goto LAB_10726c554;
      FUN_10726c87c();
      unaff_x19[1] = 0;
      puVar14 = (ulong *)0x0;
    }
    else {
      puVar14 = (ulong *)unaff_x19[1];
    }
  }
  if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
    in_ZR = 1;
    unaff_x25 = (ulong *)((long)puVar14 - 1U & (ulong)param_1);
  }
  else {
    in_ZR = param_1 == puVar14;
    unaff_x25 = param_1;
    if (puVar14 <= param_1) {
      uVar13 = 0;
      if (puVar14 != (ulong *)0x0) {
        uVar13 = (ulong)param_1 / (ulong)puVar14;
      }
      unaff_x25 = (ulong *)((long)param_1 - uVar13 * (long)puVar14);
    }
  }
LAB_10726c6a0:
  func_0x0001072752b4();
  if (extraout_x9_03 == 0) {
    *puVar4 = *puVar11;
    *puVar11 = (ulong)puVar4;
    *(ulong **)(extraout_x8_04 + (long)unaff_x25 * 8) = puVar11;
    if (*puVar4 != 0) {
      func_0x0001072747ac();
      lVar6 = extraout_x8_05;
      if ((bool)in_ZR) {
        puVar11 = (ulong *)((ulong)extraout_x9_04 & extraout_x10_00);
      }
      else {
        puVar11 = extraout_x9_04;
        if (puVar14 <= extraout_x9_04) {
          func_0x0001072750ec();
          lVar6 = extraout_x8_06;
          puVar11 = extraout_x9_05;
        }
      }
      *(ulong **)(lVar6 + (long)puVar11 * 8) = puVar4;
    }
  }
  else {
    func_0x000107274e14();
  }
  func_0x000107274274();
  FUN_10726bbd8();
  puVar11 = puVar4;
LAB_10726c6f0:
  return puVar11 + 9;
}



/* Entry: 10726c724; end: 10726c7bf;  */

undefined8 FUN_10726c724(long *param_1,int param_2)

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
    uVar3 = (ulong)param_2;
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
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar7 != uVar3) break;
          if (*(int *)(plVar6 + 2) == param_2) {
            return 1;
          }
        }
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
      } while (uVar7 == uVar5);
    }
  }
  return 0;
}



/* Entry: 10726c7c0; end: 10726c87b;  */

undefined1  [16] FUN_10726c7c0(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_30 [16];
  
  dVar1 = (double)NEON_fminnm(*param_1,0x40554345b1a549d7);
  if (dVar1 <= -85.0511287798066) {
    dVar1 = -85.0511287798066;
  }
  dVar2 = (double)NEON_fminnm(param_1[1],0x4066800000000000);
  if (dVar2 <= -180.0) {
    dVar2 = -180.0;
  }
  dVar1 = dVar1 * 0.017453292519943295;
  _sin();
  dVar1 = (double)NEON_fminnm(dVar1,0x3feffffffffffff7);
  if (dVar1 <= -0.999999999999999) {
    dVar1 = -0.999999999999999;
  }
  dVar1 = (dVar1 + 1.0) / (1.0 - dVar1);
  _log(dVar1);
  FUN_10726c894(dVar1 * 3189068.5,dVar2 * 6378137.0 * 0.017453292519943295,auStack_30);
  return auStack_30;
}



/* Entry: 10726c87c; end: 10726c893;  */

void FUN_10726c87c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10726c894; end: 10726c917;  */

void FUN_10726c894(double param_1,double param_2,double *param_3)

{
  long lVar1;
  long unaff_x20;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  if (NAN(param_1)) {
    lVar1 = 0x10;
    ___cxa_allocate_exception();
    FUN_107246610();
  }
  else {
    if (!NAN(param_2)) {
      return;
    }
    lVar1 = 0x10;
    ___cxa_allocate_exception();
    FUN_107246610();
  }
  ___cxa_throw(lVar1,PTR___ZTISt12domain_error_110352230,PTR___ZNSt12domain_errorD1Ev_110346160);
  func_0x000107274890();
  ___cxa_free_exception();
  func_0x000107274794();
  func_0x00010727455c();
  func_0x0001072747d8();
  FUN_10726d358();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  return;
}



/* Entry: 10726c918; end: 10726c923;  */

void FUN_10726c918(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010727455c();
  func_0x0001072747d8();
  FUN_10726d358();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10726c924; end: 10726c94b;  */

void FUN_10726c924(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  FUN_10726d358();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10726c94c; end: 10726c9e7;  */

undefined1  [16] FUN_10726c94c(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  ulong unaff_x28;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long alStack_b0 [13];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000107274260();
  uStack_48 = extraout_x8;
  FUN_10726c9e8();
  uVar4 = param_2;
  if ((param_2 & 1) == 0) {
    alStack_b0[0] = *param_3;
    func_0x000107274c90(2);
    plVar3 = alStack_b0;
    FUN_10726af18();
  }
  else {
    plVar3 = plVar2;
    func_0x0001072754f4();
    FUN_10726ca60();
  }
  lVar1 = param_1[1];
  *unaff_x19 = *param_1 + (long)plVar2;
  unaff_x19[1] = lVar1 + (long)plVar2 * 0xa8;
  *(char *)(unaff_x19 + 2) = (char)param_2;
  func_0x00010727416c(uStack_48);
  if ((bool)in_ZR) {
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = plVar3;
    return auVar7;
  }
  ___stack_chk_fail();
  func_0x0001072759bc();
  func_0x0001072746bc();
  func_0x000107274648();
  do {
    func_0x000107274aac();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x000107274fac();
      FUN_10726cac8();
      if (((ulong)plVar3 & 1) != 0) {
        uVar5 = 0;
        goto LAB_10726ca40;
      }
    }
    func_0x0001072752f4();
  } while ((extraout_x8_00 & 1) == 0);
  func_0x000107274b34();
  FUN_10726ca78();
  uVar5 = 1;
  plVar2 = plVar3;
LAB_10726ca40:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10726c9e8; end: 10726ca5f;  */

undefined1  [16] FUN_10726c9e8(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x0001072759bc();
  func_0x0001072746bc();
  func_0x000107274648();
  do {
    func_0x000107274aac();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x000107274fac();
      FUN_10726cac8();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10726ca40;
      }
    }
    func_0x0001072752f4();
  } while ((extraout_x8 & 1) == 0);
  func_0x000107274b34();
  FUN_10726ca78();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_10726ca40:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 10726ca60; end: 10726ca77;  */

void FUN_10726ca60(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0xa8;
  func_0x000107274eb4(lVar1,param_3,param_4);
  *(undefined8 *)(lVar1 + 0x40) = *unaff_x19;
  *(undefined4 *)(lVar1 + 0xa0) = 2;
  return;
}



/* Entry: 10726ca78; end: 10726cac7;  */

void FUN_10726ca78(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001072747cc();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_10726cb4c();
    func_0x0001001685d4();
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  func_0x00010727443c(lVar1);
  return;
}



/* Entry: 10726cac8; end: 10726cad3;  */

bool FUN_10726cac8(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10726cad4; end: 10726cb4b;  */

void FUN_10726cad4(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x000107274f98();
  FUN_10726cb7c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726cbb4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10726cb4c; end: 10726cb7b;  */

undefined * FUN_10726cb4c(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107274388();
    puVar2 = &UNK_1109965a0;
    func_0x00010ae6c914();
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107274f98(param_1,uVar3 << 1 | 1);
  FUN_10726cb7c();
  for (lVar5 = 0; unaff_x23 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar5)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726cbb4();
    }
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10726cb7c; end: 10726cc03;  */

void FUN_10726cb7c(undefined8 param_1)

{
  func_0x000107274f8c();
  func_0x000107274e50();
  func_0x000107274e24();
  func_0x0001000631d0(param_1,0xa8);
  return;
}



/* Entry: 10726cc04; end: 10726cc2b;  */

void FUN_10726cc04(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107274918();
  *(undefined4 *)(param_1 + 0x60) = extraout_w8;
  FUN_10726cc2c();
  return;
}



/* Entry: 10726cc2c; end: 10726cc73;  */

void FUN_10726cc2c(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  FUN_10726af18();
  uVar1 = *(uint *)(unaff_x20 + 0x60);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_FUN_110995ef8)[uVar1]);
    *(uint *)(unaff_x19 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 10726cc74; end: 10726ccd3;  */

void FUN_10726cc74(void)

{
  return;
}



/* Entry: 10726ccd4; end: 10726cd2f;  */

void FUN_10726ccd4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c318bc();
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* Entry: 10726cd30; end: 10726cd6f;  */

undefined * FUN_10726cd30(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107274388();
  puVar1 = &UNK_1109965a0;
  func_0x00010ae6c914();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10726cd70; end: 10726cd77;  */

long FUN_10726cd70(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10726cd78; end: 10726cd9f;  */

void FUN_10726cd78(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107274eb4();
  *(undefined8 *)(param_1 + 0x40) = *unaff_x19;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  return;
}



/* Entry: 10726cda0; end: 10726cdc3;  */

undefined8 FUN_10726cda0(undefined8 param_1)

{
  FUN_10726cdc4();
  return param_1;
}



/* Entry: 10726cdc4; end: 10726ce17;  */

void FUN_10726cdc4(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x60) != -1 || *(int *)(param_2 + 0x60) != -1) {
    if (*(int *)(param_2 + 0x60) == -1) {
      if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
        func_0x0001072745a8((&PTR_FUN_110995ea8)[*(uint *)(param_1 + 0x60)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      return;
    }
    func_0x000107274ed8();
  }
  return;
}



/* Entry: 10726ce18; end: 10726ce47;  */

void FUN_10726ce18(long *param_1)

{
  if (*(int *)(*param_1 + 0x60) != 0) {
    func_0x000107274a44();
    FUN_10726ce70();
  }
  return;
}



/* Entry: 10726ce48; end: 10726ce6f;  */

void FUN_10726ce48(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x000107274a44();
    FUN_10726ce70();
  }
  return;
}


