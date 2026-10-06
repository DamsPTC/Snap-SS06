/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f83038; end: 109f8808b;  */

/* WARNING: Removing unreachable block (ram,0x000109f8756c) */
/* WARNING: Removing unreachable block (ram,0x000109f83a54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f83038(uint *******param_1,uint *******param_2,uint *******param_3,uint *******param_4,
                  uint *******param_5,uint *******param_6,uint param_7)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  char cVar7;
  undefined7 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  undefined *puVar17;
  uint *******pppppppuVar18;
  undefined **ppuVar19;
  uint *******pppppppuVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  uint *******pppppppuVar24;
  uint *******unaff_x20;
  uint *******unaff_x21;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint *******unaff_x24;
  uint *******unaff_x25;
  uint *******unaff_x26;
  uint *******unaff_x27;
  uint *******unaff_x28;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint auStack_1b8 [2];
  uint ******ppppppuStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  uint ******ppppppuStack_198;
  byte bStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  uint *******pppppppuStack_170;
  uint *******pppppppuStack_168;
  uint *******pppppppuStack_160;
  uint *******pppppppuStack_158;
  uint *******pppppppuStack_150;
  uint *******pppppppuStack_148;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  char cStack_c9;
  uint ******ppppppuStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  char cStack_89;
  undefined7 uStack_88;
  char cStack_81;
  uint ******ppppppuStack_80;
  byte bStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar20 = param_5;
  if (*(int *)(param_5 + 5) == 0x154) {
    param_1[3] = (uint ******)0x0;
    param_1[2] = (uint ******)0x0;
    param_1[5] = (uint ******)0x0;
    param_1[4] = (uint ******)0x0;
    param_1[1] = (uint ******)0x0;
    *param_1 = (uint ******)0x0;
    *(undefined1 *)(param_1 + 5) = 1;
    pppppppuVar15 = param_2;
    pppppppuVar18 = param_3;
    ppuVar19 = (undefined **)param_4;
    param_3 = unaff_x20;
    param_5 = unaff_x21;
    param_2 = unaff_x24;
    param_4 = unaff_x28;
    goto LAB_109f87d30;
  }
  unaff_x23 = param_5 + 6;
  bVar1 = *(byte *)((long)param_5 + 0x4c);
  unaff_x25 = (uint *******)(ulong)bVar1;
  pppppppuVar18 = param_4;
  ppuVar19 = (undefined **)param_5;
  pppppppuStack_f8 = param_1;
  pppppppuStack_f0 = param_2;
  func_0x000109f70234(param_2,param_3);
  unaff_x26 = param_4 + 0x1b;
  pppppppuStack_e8 = unaff_x23;
  FUN_109f73558(unaff_x26,&pppppppuStack_e8);
  if (unaff_x26 == (uint *******)0x0) {
    pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
    ppuVar19 = (undefined **)param_4[0x2c];
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar18 = param_3;
    pppppppuVar20 = param_2;
    param_6 = unaff_x25;
    FUN_109f80034();
    if ((bStack_c0 & 1) != 0) {
      unaff_x22 = param_4 + 5;
      pcVar23 = (char *)((long)param_4 + 0x3f);
      pppppppuStack_110 = (uint *******)*unaff_x22;
      if (-1 < *pcVar23) {
        pppppppuStack_110 = unaff_x22;
      }
      pppppppuStack_108 = (uint *******)(ulong)*(uint *)(param_5 + 9);
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628641);
      goto LAB_109f83170;
    }
    goto LAB_109f87d00;
  }
  unaff_x22 = param_4 + 8;
  pcVar23 = (char *)((long)param_4 + 0x57);
  pppppppuStack_110 = (uint *******)*unaff_x22;
  if (-1 < *pcVar23) {
    pppppppuStack_110 = unaff_x22;
  }
  pppppppuStack_108 = (uint *******)(ulong)*(uint *)(param_5 + 9);
  (*(code *)(*param_3)[3])(param_3,&UNK_10f62aa0c);
LAB_109f83170:
  if ((*pcVar23 < '\0') && (unaff_x22 = (uint *******)*unaff_x22, unaff_x22 == (uint *******)0x0)) {
    func_0x000107c31940(&uStack_a0,&UNK_10f628647);
    ppuVar19 = &PTR_DAT_110b93f50;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    goto LAB_109f83ce0;
  }
  uVar29 = (uint)param_2;
  unaff_x27 = (uint *******)(ulong)(uVar29 & 0x86);
  uVar22 = *(uint *)(param_5 + 5);
  lVar4 = (ulong)uVar22 * 0x68;
  pppppppuVar24 = (uint *******)(&PTR_DAT_110b78538 + (ulong)uVar22 * 0xd);
  uVar30 = (uint)bVar1;
  pppppppuVar15 = param_3;
  param_1 = param_3;
  if ((int)uVar22 < 0x146) {
    if ((int)uVar22 < 0x120) {
      if (((0x33 < uVar22 - 0x3e) ||
          ((1L << ((ulong)(uVar22 - 0x3e) & 0x3f) & 0x8000004000001U) == 0)) && (uVar22 != 0x19))
      goto LAB_109f83688;
      ppuVar19 = (undefined **)param_5[0xd];
      if ((uint *******)ppuVar19 == (uint *******)0x0) {
        func_0x000107c31940(&uStack_a0,&UNK_10f628758);
        ppuVar19 = &PTR_DAT_110b93f98;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
      }
      else if (*(char *)((long)ppuVar19 + 0x1d) == '\x01') {
        param_1 = pppppppuStack_f0;
        pppppppuVar18 = param_4;
        func_0x000109f70334();
        if (((uint)param_1 & 0x86) == 6) {
          uVar22 = 0x135;
          if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\0') {
            uVar22 = 0x1c1;
          }
          if ((&UNK_110b78540)[(ulong)*(uint *)(param_5 + 5) * 0x68] == '\x03') {
            if (uVar30 == 1) {
              (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
              param_1 = (uint *******)&pppppppuStack_e8;
              param_6 = (uint *******)0x0;
              param_7 = 6;
              pppppppuVar15 = pppppppuStack_f0;
              pppppppuVar18 = param_3;
              ppuVar19 = (undefined **)param_4;
              pppppppuVar20 = param_5;
              FUN_109f8808c();
              if ((bStack_c0 & 1) != 0) {
                (*(code *)(*param_3)[3])(param_3,&UNK_10f48d20f);
                param_1 = (uint *******)&pppppppuStack_e8;
                param_6 = (uint *******)0x1;
                pppppppuVar15 = pppppppuStack_f0;
                pppppppuVar18 = param_3;
                ppuVar19 = (undefined **)param_4;
                pppppppuVar20 = param_5;
                pppppppuVar24 = param_2;
                FUN_109f8808c();
                param_7 = (uint)pppppppuVar24;
                if ((bStack_c0 & 1) != 0) {
                  (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
                  param_1 = (uint *******)&pppppppuStack_e8;
                  param_6 = (uint *******)0x2;
                  pppppppuVar15 = pppppppuStack_f0;
                  pppppppuVar18 = param_3;
                  ppuVar19 = (undefined **)param_4;
                  pppppppuVar20 = param_5;
                  pppppppuVar24 = param_2;
                  FUN_109f8808c();
                  param_7 = (uint)pppppppuVar24;
                  if ((bStack_c0 & 1) != 0) {
                    pppppppuVar15 = (uint *******)&UNK_10f480bab;
                    param_1 = param_3;
                    (*(code *)(*param_3)[3])();
                    goto LAB_109f87e18;
                  }
                }
              }
            }
            else {
              if (*(uint *)(pppppppuStack_f0[6] + 0x1d) <= uVar22) {
                if (unaff_x26 == (uint *******)0x0) {
                  pppppppuVar15 = (uint *******)&UNK_10f480bab;
                  param_1 = param_3;
                  (*(code *)(*param_3)[3])();
                }
                puVar17 = &UNK_10f6258e0;
                if (uVar30 < 5) {
                  puVar17 = &UNK_10f6258f1;
                }
                if (uVar30 != 0) {
                  unaff_x23 = (uint *******)0x0;
                  do {
                    cVar2 = puVar17[(long)unaff_x23];
                    unaff_x27 = (uint *******)(long)cVar2;
                    if ((unaff_x26 == (uint *******)0x0) || (unaff_x23 != (uint *******)0x0)) {
                      pppppppuStack_108 = (uint *******)(ulong)*(uint *)(param_5 + 9);
                      pppppppuStack_110 = unaff_x22;
                      pppppppuStack_100 = unaff_x27;
                      (*(code *)(*param_3)[3])(param_3,&UNK_10f628844);
                    }
                    else {
                      pppppppuStack_110 = unaff_x27;
                      (*(code *)(*param_3)[3])(param_3,&UNK_10f62883d);
                    }
                    param_1 = (uint *******)&pppppppuStack_e8;
                    param_6 = (uint *******)0x0;
                    param_7 = 6;
                    pppppppuVar15 = pppppppuStack_f0;
                    pppppppuVar18 = param_3;
                    ppuVar19 = (undefined **)param_4;
                    pppppppuVar20 = param_5;
                    FUN_109f8808c();
                    if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
                    pppppppuStack_110 = (uint *******)(long)(int)cVar2;
                    (*(code *)(*param_3)[3])(param_3,&UNK_10f62884f);
                    param_1 = (uint *******)&pppppppuStack_e8;
                    param_6 = (uint *******)0x1;
                    pppppppuVar15 = pppppppuStack_f0;
                    pppppppuVar18 = param_3;
                    ppuVar19 = (undefined **)param_4;
                    pppppppuVar20 = param_5;
                    pppppppuVar24 = param_2;
                    FUN_109f8808c();
                    param_7 = (uint)pppppppuVar24;
                    if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
                    pppppppuStack_110 = unaff_x27;
                    (*(code *)(*param_3)[3])(param_3,&UNK_10f628856);
                    param_1 = (uint *******)&pppppppuStack_e8;
                    param_6 = (uint *******)0x2;
                    pppppppuVar15 = pppppppuStack_f0;
                    pppppppuVar18 = param_3;
                    ppuVar19 = (undefined **)param_4;
                    pppppppuVar20 = param_5;
                    pppppppuVar24 = param_2;
                    FUN_109f8808c();
                    param_7 = (uint)pppppppuVar24;
                    if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
                    pppppppuVar15 = (uint *******)&UNK_10f62885d;
                    param_1 = param_3;
                    pppppppuStack_110 = unaff_x27;
                    (*(code *)(*param_3)[3])();
                    unaff_x23 = (uint *******)((long)unaff_x23 + 1);
                  } while (unaff_x25 != unaff_x23);
                }
                goto LAB_109f87e18;
              }
              (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
              (*(code *)(*param_3)[3])(param_3,&UNK_10f628838);
              param_1 = (uint *******)&pppppppuStack_e8;
              param_6 = (uint *******)0x2;
              pppppppuVar15 = pppppppuStack_f0;
              pppppppuVar18 = param_3;
              ppuVar19 = (undefined **)param_4;
              pppppppuVar20 = param_5;
              pppppppuVar24 = param_2;
              FUN_109f8808c();
              param_7 = (uint)pppppppuVar24;
              if ((bStack_c0 & 1) != 0) {
                (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
                param_1 = (uint *******)&pppppppuStack_e8;
                param_6 = (uint *******)0x1;
                pppppppuVar15 = pppppppuStack_f0;
                pppppppuVar18 = param_3;
                ppuVar19 = (undefined **)param_4;
                pppppppuVar20 = param_5;
                pppppppuVar24 = param_2;
                FUN_109f8808c();
                param_7 = (uint)pppppppuVar24;
                if ((bStack_c0 & 1) != 0) {
                  (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
                  param_1 = (uint *******)&pppppppuStack_e8;
                  param_6 = (uint *******)0x0;
                  param_7 = 6;
                  pppppppuVar15 = pppppppuStack_f0;
                  pppppppuVar18 = param_3;
                  ppuVar19 = (undefined **)param_4;
                  pppppppuVar20 = param_5;
                  FUN_109f8808c();
                  if ((bStack_c0 & 1) != 0) {
                    pppppppuVar15 = (uint *******)&UNK_10f628703;
                    param_1 = param_3;
                    (*(code *)(*param_3)[3])();
                    goto LAB_109f87e18;
                  }
                }
              }
            }
            goto LAB_109f87d00;
          }
          func_0x000107c31940(&uStack_a0,&UNK_10f62880a);
          ppuVar19 = &PTR_DAT_110b93fe0;
          param_1 = (uint *******)&pppppppuStack_e8;
          pppppppuVar15 = (uint *******)&uStack_a0;
          pppppppuVar18 = (uint *******)0x2;
          FUN_109f76188();
        }
        else {
          func_0x000107c31940(&uStack_a0,&UNK_10f62879f);
          ppuVar19 = &PTR_DAT_110b93fc8;
          param_1 = (uint *******)&pppppppuStack_e8;
          pppppppuVar15 = (uint *******)&uStack_a0;
          pppppppuVar18 = (uint *******)0x2;
          FUN_109f76188();
        }
      }
      else {
        func_0x000107c31940(&uStack_a0,&UNK_10f628774);
        ppuVar19 = &PTR_DAT_110b93fb0;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
      }
    }
    else if (uVar22 == 0x120) {
LAB_109f8353c:
      if (uVar22 == 0x120) {
        pppppppuVar15 = (uint *******)&DAT_10f2e8297;
        unaff_x22 = (uint *******)&DAT_10f5af57c;
      }
      else if (uVar22 == 0x152) {
        pppppppuVar15 = (uint *******)&DAT_10f47f5f7;
        unaff_x22 = (uint *******)&UNK_10f628733;
      }
      else {
        if (uVar22 != 0x14a) {
          func_0x000107c31940(&uStack_a0,&UNK_10f628714);
          ppuVar19 = &PTR_DAT_110b93f68;
          param_1 = (uint *******)&pppppppuStack_e8;
          pppppppuVar15 = (uint *******)&uStack_a0;
          pppppppuVar18 = (uint *******)0x2;
          FUN_109f76188();
          goto LAB_109f83ce0;
        }
        pppppppuVar15 = (uint *******)&DAT_10f387e68;
        unaff_x22 = (uint *******)&DAT_10f5fa831;
      }
      if ((uVar29 & 0x86) != 6) {
        unaff_x22 = pppppppuVar15;
      }
      if ((&UNK_110b78540)[lVar4] == '\x02') {
        if (uVar30 == 1) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            pppppppuStack_110 = unaff_x22;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f614b1d);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto LAB_109f87e18;
            }
          }
        }
        else {
          unaff_x23 = (uint *******)&UNK_10f6258e0;
          if (uVar30 < 5) {
            unaff_x23 = (uint *******)&UNK_10f6258f1;
          }
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
          pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
          ppuVar19 = (undefined **)param_4[0x2c];
          param_1 = (uint *******)&pppppppuStack_e8;
          pppppppuVar18 = param_3;
          pppppppuVar20 = unaff_x27;
          param_6 = unaff_x25;
          FUN_109f80034();
          if ((bStack_c0 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
            pppppppuVar15 = unaff_x26;
            if (uVar30 != 0) {
              pppppppuVar24 = (uint *******)0x0;
              unaff_x26 = (uint *******)&UNK_10f625a3f;
              do {
                unaff_x27 = (uint *******)(long)*(char *)((long)unaff_x23 + (long)pppppppuVar24);
                pppppppuStack_110 = (uint *******)"";
                if (pppppppuVar24 != (uint *******)0x0) {
                  pppppppuStack_110 = (uint *******)&DAT_10f68f19e;
                }
                (*(code *)(*param_3)[3])(param_3,&UNK_10f625a3f);
                param_1 = (uint *******)&pppppppuStack_e8;
                param_6 = (uint *******)0x0;
                pppppppuVar15 = pppppppuStack_f0;
                pppppppuVar18 = param_3;
                ppuVar19 = (undefined **)param_4;
                pppppppuVar20 = param_5;
                pppppppuVar14 = param_2;
                FUN_109f8808c();
                param_7 = (uint)pppppppuVar14;
                if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
                pppppppuStack_110 = unaff_x27;
                pppppppuStack_108 = unaff_x22;
                (*(code *)(*param_3)[3])(param_3,&UNK_10f628750);
                param_1 = (uint *******)&pppppppuStack_e8;
                param_6 = (uint *******)0x1;
                pppppppuVar15 = pppppppuStack_f0;
                pppppppuVar18 = param_3;
                ppuVar19 = (undefined **)param_4;
                pppppppuVar20 = param_5;
                pppppppuVar14 = param_2;
                FUN_109f8808c();
                param_7 = (uint)pppppppuVar14;
                if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
                pppppppuStack_110 = unaff_x27;
                (*(code *)(*param_3)[3])(param_3,&UNK_10f628710);
                pppppppuVar24 = (uint *******)((long)pppppppuVar24 + 1);
                pppppppuVar15 = (uint *******)&UNK_10f625a3f;
              } while (unaff_x25 != pppppppuVar24);
            }
            unaff_x26 = pppppppuVar15;
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f628736);
      ppuVar19 = &PTR_DAT_110b93f80;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      if (uVar22 != 0x13b) goto LAB_109f83688;
      pppppppuVar15 = param_4 + 0xb;
      pppppppuStack_e8 = unaff_x23;
      FUN_109f88bfc(pppppppuVar15,&pppppppuStack_e8);
      if (pppppppuVar15 == (uint *******)0x0) {
        func_0x000107c31940(&uStack_a0,&UNK_10f628863);
        ppuVar19 = &PTR_DAT_110b94040;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
      }
      else {
        if ((uVar29 & 0x86) - 2 < 4) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f48d65e);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto LAB_109f87e18;
            }
          }
          goto LAB_109f87d00;
        }
        func_0x000107c31940(&uStack_a0,&UNK_10f6288cf);
        ppuVar19 = &PTR_DAT_110b94058;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
      }
    }
    goto LAB_109f83ce0;
  }
  if (0x1c4 < (int)uVar22) {
    if (2 < uVar22 - 0x1c5) goto LAB_109f83688;
    pppppppuVar15 = param_4 + 0xb;
    pppppppuStack_e8 = unaff_x23;
    FUN_109f88bfc(pppppppuVar15,&pppppppuStack_e8);
    if (pppppppuVar15 == (uint *******)0x0) {
      func_0x000107c31940(&uStack_a0,&UNK_10f628863);
      ppuVar19 = &PTR_DAT_110b93ff8;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      if (*(char *)((long)param_5 + 0x4c) == (&UNK_110b78540)[(ulong)*(uint *)(param_5 + 5) * 0x68])
      {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
        ppuVar19 = (undefined **)param_4[0x2c];
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar18 = param_3;
        pppppppuVar20 = unaff_x27;
        param_6 = unaff_x25;
        FUN_109f80034();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
          if (uVar30 != 0) {
            unaff_x26 = (uint *******)0x0;
            unaff_x27 = (uint *******)&DAT_10f68f19e;
            do {
              if ((int)unaff_x26 != 0) {
                (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
              }
              param_1 = (uint *******)&pppppppuStack_e8;
              pppppppuVar15 = pppppppuStack_f0;
              pppppppuVar18 = param_3;
              ppuVar19 = (undefined **)param_4;
              pppppppuVar20 = param_5;
              param_6 = unaff_x26;
              pppppppuVar24 = param_2;
              FUN_109f8808c();
              param_7 = (uint)pppppppuVar24;
              if (bStack_c0 != 1) goto LAB_109f87d00;
              uVar22 = (int)unaff_x26 + 1;
              unaff_x26 = (uint *******)(ulong)uVar22;
            } while (uVar30 != uVar22);
          }
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f62888a);
      ppuVar19 = &PTR_DAT_110b94010;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    goto LAB_109f83ce0;
  }
  if (uVar22 == 0x146) {
    if (*(char *)((long)param_5 + 0x4d) == '\x01') {
      if (uVar30 == 1) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f6286f6);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      else {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f6286fb);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
    }
    else if (uVar30 == 1) {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628707);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
    }
    else {
      unaff_x22 = (uint *******)&UNK_10f6258e0;
      if (uVar30 < 5) {
        unaff_x22 = (uint *******)&UNK_10f6258f1;
      }
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
      ppuVar19 = (undefined **)param_4[0x2c];
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar18 = param_3;
      pppppppuVar20 = unaff_x27;
      param_6 = unaff_x25;
      FUN_109f80034();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
        pppppppuVar15 = unaff_x26;
        if (uVar30 != 0) {
          pppppppuVar24 = (uint *******)0x0;
          unaff_x26 = (uint *******)&UNK_10f62870c;
          unaff_x27 = (uint *******)&UNK_10f628710;
          do {
            unaff_x23 = (uint *******)(long)*(char *)((long)unaff_x22 + (long)pppppppuVar24);
            pppppppuStack_110 = (uint *******)"";
            if (pppppppuVar24 != (uint *******)0x0) {
              pppppppuStack_110 = (uint *******)&DAT_10f68f19e;
            }
            (*(code *)(*param_3)[3])(param_3,&UNK_10f62870c);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar14 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar14;
            if (bStack_c0 != 1) goto LAB_109f87d00;
            pppppppuStack_110 = unaff_x23;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f628710);
            pppppppuVar24 = (uint *******)((long)pppppppuVar24 + 1);
            pppppppuVar15 = (uint *******)&UNK_10f62870c;
          } while (unaff_x25 != pppppppuVar24);
        }
        unaff_x26 = pppppppuVar15;
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
    }
    goto LAB_109f87d00;
  }
  if ((uVar22 == 0x14a) || (uVar22 == 0x152)) goto LAB_109f8353c;
LAB_109f83688:
  if (0x194 < (int)uVar22) {
    if ((int)uVar22 < 0x1a2) {
      if (uVar22 == 0x195) goto LAB_109f84d38;
      if (uVar22 == 0x19a) goto LAB_109f84dec;
      if (uVar22 == 0x1a0) goto code_r0x000109f847f4;
    }
    else if ((int)uVar22 < 0x1b5) {
      if (uVar22 == 0x1a2) goto LAB_109f84ea0;
      if (uVar22 == 0x1a4) goto code_r0x000109f83fa0;
    }
    else {
      if (uVar22 == 0x1b5) {
        uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
        if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
          if (299 < uVar22) {
LAB_109f87984:
            (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
            (*(code *)(*param_3)[3])(param_3,&UNK_10f628c2a);
            param_7 = 0x24;
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            FUN_109f8808c();
            if ((bStack_c0 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f628703;
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto LAB_109f87e18;
            }
            goto LAB_109f87d00;
          }
        }
        else if (0x1a3 < uVar22) goto LAB_109f87984;
        func_0x000107c31940(&uStack_a0,&UNK_10f628b9e);
        ppuVar19 = &PTR_DAT_110b946a0;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
        goto LAB_109f83ce0;
      }
      if (uVar22 == 0x1c0) goto code_r0x000109f84f84;
    }
    goto LAB_109f854e4;
  }
  switch(uVar22) {
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628ad0);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628a37;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94478;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    if ((&UNK_110b78540)[lVar4] != '\x02') {
      func_0x000107c31940(&uStack_a0,&UNK_10f628736);
      ppuVar19 = &PTR_DAT_110b94448;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
      break;
    }
    unaff_x25 = pppppppuStack_f0;
    func_0x000109f70334(pppppppuStack_f0,param_3,param_4,param_5[0xd]);
    param_2 = pppppppuStack_f0;
    func_0x000109f70334(pppppppuStack_f0,param_3,param_4,param_5[0x13]);
    if ((((uint)param_2 ^ (uint)unaff_x25) & 0x86) == 0) {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628ad0);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = unaff_x25;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628a37;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    FUN_109f88b50(&uStack_b8,*(undefined4 *)(param_5 + 5));
    pppppppuStack_110 = (uint *******)CONCAT17(uStack_b8._7_1_,(undefined7)uStack_b8);
    if (-1 < cStack_a1) {
      pppppppuStack_110 = (uint *******)&uStack_b8;
    }
    FUN_109f7d45c(&uStack_a0,&UNK_10f628a69);
    ppuVar19 = &PTR_DAT_110b94460;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    goto code_r0x000109f8552c;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628aa2);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628a37;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94418;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      unaff_x25 = pppppppuStack_f0;
      func_0x000109f70334(pppppppuStack_f0,param_3,param_4,param_5[0xd]);
      param_2 = pppppppuStack_f0;
      func_0x000109f70334(pppppppuStack_f0,param_3,param_4,param_5[0x13]);
      if ((((uint)param_2 ^ (uint)unaff_x25) & 0x86) != 0) {
        FUN_109f88b50(&uStack_b8,*(undefined4 *)(param_5 + 5));
        pppppppuStack_110 = (uint *******)CONCAT17(uStack_b8._7_1_,(undefined7)uStack_b8);
        if (-1 < cStack_a1) {
          pppppppuStack_110 = (uint *******)&uStack_b8;
        }
        FUN_109f7d45c(&uStack_a0,&UNK_10f628a69);
        ppuVar19 = &PTR_DAT_110b94400;
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar15 = (uint *******)&uStack_a0;
        pppppppuVar18 = (uint *******)0x2;
        FUN_109f76188();
        goto code_r0x000109f8552c;
      }
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628aa2);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = unaff_x25;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628a37;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b943e8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x88:
  case 0x89:
  case 0x8b:
  case 0x8d:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0xaa:
  case 0xac:
  case 0xad:
  case 0xb2:
  case 0xb3:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 0xcb:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe4:
  case 0xe6:
  case 0xe9:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf8:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0x100:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x113:
  case 0x114:
  case 0x117:
  case 0x118:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x181:
  case 0x182:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
    goto LAB_109f854e4;
  case 0x87:
  case 0x8a:
  case 0x8c:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
      pppppppuVar15 = (uint *******)&UNK_10f480bab;
      param_1 = param_3;
      (*(code *)(*param_3)[3])();
      goto LAB_109f87e18;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b946b8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x8e:
  case 0x8f:
  case 0x90:
code_r0x000109f84054:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      if (((&UNK_110b7859c)[lVar4] & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_6 = (uint *******)(ulong)*(byte *)((long)param_5 + 0x4c);
        pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
        ppuVar19 = (undefined **)param_4[0x2c];
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar20 = (uint *******)0x2;
        pppppppuVar18 = param_3;
        FUN_109f80034();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f62891f);
      ppuVar19 = &PTR_DAT_110b94148;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
      ppuVar19 = &PTR_DAT_110b94130;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x95:
  case 0x96:
  case 0x97:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      if (((&UNK_110b7859c)[lVar4] & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_6 = (uint *******)(ulong)*(byte *)((long)param_5 + 0x4c);
        pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
        ppuVar19 = (undefined **)param_4[0x2c];
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar20 = (uint *******)0x4;
        pppppppuVar18 = param_3;
        FUN_109f80034();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f62891f);
      ppuVar19 = &PTR_DAT_110b94178;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
      ppuVar19 = &PTR_DAT_110b94160;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x9b:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289d1);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94298;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x9c:
  case 0x11d:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f5aeb6c);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94070;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628ade);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628aca;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94490;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628ab3);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628aca;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94430;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xa9:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628997);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94220;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xab:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f62894b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b941c0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xae:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b6d);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b945e0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xaf:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b78);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b945f8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xb0:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b83);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b94610;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xb1:
  case 0x123:
  case 0x18e:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d651);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b940a0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xb4:
  case 0xb6:
  case 0xb8:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a21);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94328;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xb5:
  case 0xb7:
  case 0xb9:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      pppppppuStack_110 = unaff_x25;
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a29);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628a37;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94340;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
    if ((&UNK_110b78540)[lVar4] != '\x02') {
      func_0x000107c31940(&uStack_a0,&UNK_10f628736);
      ppuVar19 = &PTR_DAT_110b94388;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
      break;
    }
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = pppppppuStack_f0;
    pppppppuVar18 = param_3;
    ppuVar19 = (undefined **)param_4;
    pppppppuVar20 = param_5;
    FUN_109f886f8();
    if ((bStack_c0 & 1) == 0) goto code_r0x000109f85e2c;
    param_1 = (uint *******)&pppppppuStack_e8;
    FUN_109f88a48();
    if (((ulong)*param_1 & 1) != 0) {
code_r0x000109f87e00:
      if (((bStack_c0 & 1) == 0) && (cStack_c9 < '\0')) {
        param_1 = pppppppuStack_e0;
        __ZdlPv();
      }
      goto LAB_109f87e18;
    }
    (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
    if (uVar30 == 1) {
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&uStack_a0;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_78 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d83a);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&uStack_a0;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_78 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
code_r0x000109f878cc:
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto code_r0x000109f87e00;
        }
      }
    }
    else {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a58);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&uStack_a0;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_78 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&uStack_a0;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_78 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          goto code_r0x000109f878cc;
        }
      }
    }
code_r0x000109f87e34:
    cVar2 = cStack_81;
    uVar8 = uStack_88;
    cVar7 = cStack_89;
    uVar6 = uStack_90;
    pppppppuVar24 = (uint *******)CONCAT17(uStack_91,uStack_98);
    uStack_90 = 0;
    cStack_89 = '\0';
    uStack_88 = 0;
    cStack_81 = '\0';
    uStack_98 = 0;
    uStack_91 = 0;
    *(undefined4 *)pppppppuStack_f8 = uStack_a0;
    *(ulong *)((long)pppppppuStack_f8 + 0x17) = CONCAT71(uVar8,cVar7);
    ppppppuVar16 = (uint ******)CONCAT17(cVar7,uVar6);
code_r0x000109f87e6c:
    pppppppuStack_f8[1] = (uint ******)pppppppuVar24;
    pppppppuStack_f8[2] = ppppppuVar16;
    *(char *)((long)pppppppuStack_f8 + 0x1f) = cVar2;
    pppppppuStack_f8[4] = ppppppuStack_80;
    *(undefined1 *)(pppppppuStack_f8 + 5) = 0;
    if (((bStack_c0 & 1) != 0) || (pppppppuVar24 = pppppppuStack_e0, -1 < cStack_c9))
    goto LAB_109f87d30;
    goto LAB_109f83d0c;
  case 200:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a06);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b942e0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xc9:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628941);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b941a8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xca:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
      if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
        if (0x13f < uVar22) {
code_r0x000109f87630:
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628b65);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
            param_7 = *(uint *)(&UNK_110b7855c + lVar4);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            FUN_109f8808c();
            if ((bStack_c0 & 1) != 0) {
              (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
              param_7 = *(uint *)(&UNK_110b78560 + lVar4);
              param_1 = (uint *******)&pppppppuStack_e8;
              param_6 = (uint *******)0x2;
              pppppppuVar15 = pppppppuStack_f0;
              pppppppuVar18 = param_3;
              ppuVar19 = (undefined **)param_4;
              pppppppuVar20 = param_5;
              FUN_109f8808c();
              if ((bStack_c0 & 1) != 0) {
                pppppppuVar15 = (uint *******)&UNK_10f628703;
                param_1 = param_3;
                (*(code *)(*param_3)[3])();
                goto LAB_109f87e18;
              }
            }
          }
          goto LAB_109f87d00;
        }
      }
      else if (399 < uVar22) goto code_r0x000109f87630;
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d65e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f5aeb6c);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f480bab;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b945c8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xcc:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628937);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94190;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xcd:
  case 0x12a:
LAB_109f84d38:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      if (uVar30 == 1) {
        param_7 = *(uint *)(&UNK_110b78558 + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d8a9);
          param_7 = *(uint *)(&UNK_110b7855c + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f480bab;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      else {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628a3c);
        param_7 = *(uint *)(&UNK_110b78558 + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
          param_7 = *(uint *)(&UNK_110b7855c + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94358;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xd9:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289fd);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b942c8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xda:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628b5d);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b94550;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xdb:
  case 0x12f:
LAB_109f84dec:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      if (uVar30 == 1) {
        param_7 = *(uint *)(&UNK_110b78558 + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d8a0);
          param_7 = *(uint *)(&UNK_110b7855c + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f480bab;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      else {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628a4e);
        param_7 = *(uint *)(&UNK_110b78558 + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
          param_7 = *(uint *)(&UNK_110b7855c + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94370;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xe3:
  case 0x137:
code_r0x000109f847f4:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628b3b);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94538;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xe5:
  case 0x138:
LAB_109f84ea0:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628b33);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94520;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xe7:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628b2b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94508;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xe8:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d65e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94088;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xea:
  case 0x145:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      (*(code *)(*param_3)[3])(param_3,"-");
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b940d0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f886f8();
      if ((bStack_c0 & 1) != 0) {
        param_1 = (uint *******)&pppppppuStack_e8;
        FUN_109f88a48();
        if (((ulong)*param_1 & 1) != 0) goto code_r0x000109f87e00;
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        if (uVar30 == 1) {
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f48d89b);
            param_7 = *(uint *)(&UNK_110b7855c + lVar4);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            FUN_109f8808c();
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
code_r0x000109f87968:
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto code_r0x000109f87e00;
            }
          }
        }
        else {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628a5f);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
            param_7 = *(uint *)(&UNK_110b7855c + lVar4);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            FUN_109f8808c();
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f628703;
              goto code_r0x000109f87968;
            }
          }
        }
        goto code_r0x000109f87e34;
      }
code_r0x000109f85e2c:
      cVar2 = cStack_c9;
      uVar6 = uStack_d0;
      uVar5 = uStack_d1;
      pppppppuVar24 = pppppppuStack_e0;
      uStack_a0 = (undefined4)uStack_d8;
      uStack_9c = CONCAT13(uStack_d1,(int3)((uint7)uStack_d8 >> 0x20));
      uStack_98 = uStack_d0;
      uStack_d8 = 0;
      uStack_d1 = 0;
      uStack_d0 = 0;
      cStack_c9 = '\0';
      pppppppuStack_e0 = (uint *******)0x0;
      *(undefined4 *)pppppppuStack_f8 = pppppppuStack_e8._0_4_;
      *(ulong *)((long)pppppppuStack_f8 + 0x17) = CONCAT71(uVar6,uVar5);
      ppppppuVar16 = (uint ******)CONCAT44(uStack_9c,uStack_a0);
      ppppppuStack_80 = ppppppuStack_c8;
      goto code_r0x000109f87e6c;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b943a0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xf7:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a19);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f628703;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b94310;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xf9:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628a0f);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b942f8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xfd:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289aa);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94250;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xfe:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289c1);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94280;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0xff:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628907);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628911;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b940e8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x101:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f62895b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b941f0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x102:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f628953);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b941d8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x106:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289b8);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94268;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x107:
  case 0x150:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&DAT_10f415643);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b940b8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x10b:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f6289a0);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f628703;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94238;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x17e:
  case 0x17f:
  case 0x180:
code_r0x000109f846fc:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      if (((&UNK_110b7859c)[lVar4] & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_6 = (uint *******)(ulong)*(byte *)((long)param_5 + 0x4c);
        pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
        ppuVar19 = (undefined **)param_4[0x2c];
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar20 = (uint *******)0x80;
        pppppppuVar18 = param_3;
        FUN_109f80034();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f62891f);
      ppuVar19 = &PTR_DAT_110b94118;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
      ppuVar19 = &PTR_DAT_110b94100;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x115:
  case 0x116:
  case 0x119:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b946d0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x11a:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b8d);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b94628;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x11b:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b96);
        param_7 = *(uint *)(&UNK_110b7855c + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d213);
          param_7 = *(uint *)(&UNK_110b78560 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x2;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
    ppuVar19 = &PTR_DAT_110b94640;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x11c:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
      if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
        if (299 < uVar22) {
code_r0x000109f875a0:
          (*(code *)(*param_3)[3])(param_3,&UNK_10f6289d1);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
          goto LAB_109f87d00;
        }
      }
      else if (0x81 < uVar22) goto code_r0x000109f875a0;
      if (uVar30 != 1) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        (*(code *)(*param_3)[3])();
        unaff_x23 = (uint *******)&UNK_10f6258e0;
        if (uVar30 < 5) {
          unaff_x23 = (uint *******)&UNK_10f6258f1;
        }
        if (uVar30 != 0) {
          param_2 = (uint *******)&UNK_10f628976;
          do {
            unaff_x26 = (uint *******)(long)*(char *)unaff_x23;
            pppppppuStack_108 = (uint *******)(ulong)*(uint *)(param_5 + 9);
            pppppppuStack_110 = unaff_x22;
            pppppppuStack_100 = unaff_x26;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f628976);
            unaff_x27 = (uint *******)(ulong)*(uint *)(&UNK_110b78558 + lVar4);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = unaff_x27;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
            pppppppuStack_110 = unaff_x26;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f6289e8);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = unaff_x27;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
            pppppppuStack_110 = unaff_x26;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f6289f5);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = unaff_x27;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
            pppppppuVar15 = (uint *******)&UNK_10f62885d;
            param_1 = param_3;
            pppppppuStack_110 = unaff_x26;
            (*(code *)(*param_3)[3])();
            unaff_x23 = (uint *******)((long)unaff_x23 + 1);
            unaff_x25 = (uint *******)((long)unaff_x25 + -1);
          } while (unaff_x25 != (uint *******)0x0);
        }
        goto LAB_109f87e18;
      }
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
      param_2 = (uint *******)(ulong)*(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f6289d9);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f6289e3);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f480bab;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b942b0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x11e:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      if ((uVar29 & 0x86) - 2 < 4) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f5aeb6c);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f5aeb6c);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x2;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto LAB_109f87e18;
            }
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f6288cf);
      ppuVar19 = &PTR_DAT_110b94580;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
      ppuVar19 = &PTR_DAT_110b94568;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x124:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      ppuVar19 = (undefined **)(param_5 + 10);
      pppppppuVar20 = param_5 + 0x10;
      param_6 = (uint *******)0x24;
      param_1 = pppppppuStack_f0;
      pppppppuVar18 = param_4;
      FUN_109f73320(&pppppppuStack_e8);
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar20 = (uint *******)&pppppppuStack_e8;
        FUN_109f88acc();
        param_2 = (uint *******)(ulong)*(uint *)pppppppuVar20;
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        if (uVar30 == 1) {
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f48d83a);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
code_r0x000109f87df0:
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto code_r0x000109f87e00;
            }
          }
        }
        else {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628a58);
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f628703;
              goto code_r0x000109f87df0;
            }
          }
        }
        goto code_r0x000109f87e34;
      }
      goto code_r0x000109f85e2c;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b943b8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x133:
    if ((&UNK_110b78540)[lVar4] == '\x03') {
      if ((uVar29 & 0x86) - 2 < 4) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d65e);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f5aeb6c);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x2;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_c0 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto LAB_109f87e18;
            }
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f6288cf);
      ppuVar19 = &PTR_DAT_110b945b0;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f628b43);
      ppuVar19 = &PTR_DAT_110b94598;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x139:
code_r0x000109f83fa0:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = param_2;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b26);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b944f0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      ppuVar19 = (undefined **)(param_5 + 10);
      pppppppuVar20 = param_5 + 0x10;
      param_6 = (uint *******)0x24;
      param_1 = pppppppuStack_f0;
      pppppppuVar18 = param_4;
      FUN_109f73320(&pppppppuStack_e8);
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar20 = (uint *******)&pppppppuStack_e8;
        FUN_109f88acc();
        pppppppuVar15 = pppppppuStack_f0;
        param_2 = (uint *******)(ulong)*(uint *)pppppppuVar20;
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        if (uVar30 == 1) {
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&UNK_10f48d89b);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f480bab;
code_r0x000109f8743c:
              param_1 = param_3;
              (*(code *)(*param_3)[3])();
              goto code_r0x000109f87e00;
            }
          }
        }
        else {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628a5f);
          param_1 = (uint *******)&uStack_a0;
          param_6 = (uint *******)0x0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_78 & 1) != 0) {
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68f19e);
            param_1 = (uint *******)&uStack_a0;
            param_6 = (uint *******)0x1;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            pppppppuVar24 = param_2;
            FUN_109f8808c();
            param_7 = (uint)pppppppuVar24;
            if ((bStack_78 & 1) != 0) {
              pppppppuVar15 = (uint *******)&UNK_10f628703;
              goto code_r0x000109f8743c;
            }
          }
        }
        goto code_r0x000109f87e34;
      }
      goto code_r0x000109f85e2c;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b943d0;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x14d:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      if ((uVar29 & 0x86) - 2 < 4) {
        uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
        if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) != '\x01') {
          if (uVar22 < 0x82) goto code_r0x000109f86afc;
code_r0x000109f87b38:
          uVar22 = uVar29 & 0x79 | 4;
          unaff_x26 = (uint *******)(ulong)uVar22;
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
          if (uVar29 != uVar22) {
            pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
            ppuVar19 = (undefined **)param_4[0x2c];
            param_1 = (uint *******)&pppppppuStack_e8;
            pppppppuVar18 = param_3;
            pppppppuVar20 = unaff_x27;
            param_6 = unaff_x25;
            FUN_109f80034();
            if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
            (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
          }
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = unaff_x26;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628af2);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = unaff_x26;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
          if (uVar29 != uVar22) {
            puVar17 = &DAT_10f684600;
            goto code_r0x000109f87c20;
          }
code_r0x000109f87c30:
          pppppppuVar15 = (uint *******)&UNK_10f480bab;
          param_1 = param_3;
          (*(code *)(*param_3)[3])();
          goto LAB_109f87e18;
        }
        if (299 < uVar22) goto code_r0x000109f87b38;
code_r0x000109f86afc:
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628af7);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x1;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          pppppppuVar24 = param_2;
          FUN_109f8808c();
          param_7 = (uint)pppppppuVar24;
          if ((bStack_c0 & 1) != 0) {
            puVar17 = &UNK_10f628b0a;
code_r0x000109f87c20:
            (*(code *)(*param_3)[3])(param_3,puVar17);
            goto code_r0x000109f87c30;
          }
        }
        goto LAB_109f87d00;
      }
      func_0x000107c31940(&uStack_a0,&UNK_10f6288cf);
      ppuVar19 = &PTR_DAT_110b944c0;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f628736);
      ppuVar19 = &PTR_DAT_110b944a8;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x14e:
code_r0x000109f84f84:
    if ((&UNK_110b78540)[lVar4] == '\x02') {
      uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
      if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
        if (299 < uVar22) goto LAB_109f87458;
LAB_109f84fb0:
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b13);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = param_2;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
        puVar17 = &UNK_10f628b0a;
LAB_109f87540:
        (*(code *)(*param_3)[3])(param_3,puVar17);
LAB_109f87550:
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      if (uVar22 < 0x82) goto LAB_109f84fb0;
LAB_109f87458:
      uVar22 = uVar29 & 0x79 | 4;
      unaff_x26 = (uint *******)(ulong)uVar22;
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      if (uVar29 != uVar22) {
        pppppppuVar15 = (uint *******)pppppppuStack_f0[6];
        ppuVar19 = (undefined **)param_4[0x2c];
        param_1 = (uint *******)&pppppppuStack_e8;
        pppppppuVar18 = param_3;
        pppppppuVar20 = unaff_x27;
        param_6 = unaff_x25;
        FUN_109f80034();
        if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
        (*(code *)(*param_3)[3])(param_3,&DAT_10f68e8ec);
      }
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      pppppppuVar24 = unaff_x26;
      FUN_109f8808c();
      param_7 = (uint)pppppppuVar24;
      if ((bStack_c0 & 1) != 0) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f628b0e);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x1;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        pppppppuVar24 = unaff_x26;
        FUN_109f8808c();
        param_7 = (uint)pppppppuVar24;
        if ((bStack_c0 & 1) != 0) {
          if (uVar29 != uVar22) {
            puVar17 = &DAT_10f684600;
            goto LAB_109f87540;
          }
          goto LAB_109f87550;
        }
      }
LAB_109f87d00:
      *(undefined4 *)pppppppuStack_f8 = pppppppuStack_e8._0_4_;
      pppppppuStack_f8[1] = (uint ******)pppppppuStack_e0;
      pppppppuStack_f8[2] = (uint ******)CONCAT17(uStack_d1,uStack_d8);
      *(ulong *)((long)pppppppuStack_f8 + 0x17) = CONCAT71(uStack_d0,uStack_d1);
      *(char *)((long)pppppppuStack_f8 + 0x1f) = cStack_c9;
      pppppppuStack_f8[4] = ppppppuStack_c8;
      *(undefined1 *)(pppppppuStack_f8 + 5) = 0;
      goto LAB_109f87d30;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f628736);
    ppuVar19 = &PTR_DAT_110b944d8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x14f:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
      unaff_x27 = pppppppuVar24;
      if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
        if (299 < uVar22) {
code_r0x000109f877e8:
          (*(code *)(*param_3)[3])(param_3,&UNK_10f62895b);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
          goto LAB_109f87d00;
        }
      }
      else if (0x81 < uVar22) goto code_r0x000109f877e8;
      if (uVar30 == 1) {
        (*(code *)(*param_3)[3])(param_3,&UNK_10f48d81b);
        param_7 = *(uint *)(&UNK_110b78558 + lVar4);
        param_1 = (uint *******)&pppppppuStack_e8;
        param_6 = (uint *******)0x0;
        pppppppuVar15 = pppppppuStack_f0;
        pppppppuVar18 = param_3;
        ppuVar19 = (undefined **)param_4;
        pppppppuVar20 = param_5;
        FUN_109f8808c();
        if ((bStack_c0 & 1) == 0) goto LAB_109f87d00;
        pppppppuVar15 = (uint *******)&UNK_10f628964;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
      }
      else {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        (*(code *)(*param_3)[3])();
        pcVar23 = "abcdefghijklmnop";
        if (uVar30 < 5) {
          pcVar23 = "xyzw";
        }
        if (uVar30 != 0) {
          param_2 = (uint *******)&UNK_10f628976;
          unaff_x26 = (uint *******)&UNK_10f628982;
          do {
            unaff_x23 = (uint *******)(long)*pcVar23;
            pppppppuStack_108 = (uint *******)(ulong)*(uint *)(param_5 + 9);
            pppppppuStack_110 = unaff_x22;
            pppppppuStack_100 = unaff_x23;
            (*(code *)(*param_3)[3])(param_3,&UNK_10f628976);
            param_7 = *(uint *)(&UNK_110b78558 + lVar4);
            param_1 = (uint *******)&pppppppuStack_e8;
            param_6 = (uint *******)0x0;
            pppppppuVar15 = pppppppuStack_f0;
            pppppppuVar18 = param_3;
            ppuVar19 = (undefined **)param_4;
            pppppppuVar20 = param_5;
            FUN_109f8808c();
            if (bStack_c0 != 1) goto LAB_109f87d00;
            param_1 = param_3;
            pppppppuVar15 = (uint *******)&UNK_10f628982;
            pppppppuStack_110 = unaff_x23;
            (*(code *)(*param_3)[3])();
            pcVar23 = pcVar23 + 1;
            unaff_x25 = (uint *******)((long)unaff_x25 + -1);
          } while (unaff_x25 != (uint *******)0x0);
        }
      }
LAB_109f87e18:
      pppppppuStack_f8[3] = (uint ******)0x0;
      pppppppuStack_f8[2] = (uint ******)0x0;
      pppppppuStack_f8[5] = (uint ******)0x0;
      pppppppuStack_f8[4] = (uint ******)0x0;
      pppppppuStack_f8[1] = (uint ******)0x0;
      *pppppppuStack_f8 = (uint ******)0x0;
      *(undefined1 *)(pppppppuStack_f8 + 5) = 1;
      goto LAB_109f87d30;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b94208;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  case 0x166:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      uVar22 = *(uint *)(pppppppuStack_f0[6] + 0x1d);
      if (*(char *)((long)pppppppuStack_f0[6] + 0xe4) == '\x01') {
        if (299 < uVar22) {
code_r0x000109f87740:
          (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
          (*(code *)(*param_3)[3])(param_3,&UNK_10f628c1c);
          param_7 = *(uint *)(&UNK_110b78558 + lVar4);
          param_1 = (uint *******)&pppppppuStack_e8;
          param_6 = (uint *******)0x0;
          pppppppuVar15 = pppppppuStack_f0;
          pppppppuVar18 = param_3;
          ppuVar19 = (undefined **)param_4;
          pppppppuVar20 = param_5;
          FUN_109f8808c();
          if ((bStack_c0 & 1) != 0) {
            pppppppuVar15 = (uint *******)&UNK_10f628703;
            param_1 = param_3;
            (*(code *)(*param_3)[3])();
            goto LAB_109f87e18;
          }
          goto LAB_109f87d00;
        }
      }
      else if (0x1a3 < uVar22) goto code_r0x000109f87740;
      func_0x000107c31940(&uStack_a0,&UNK_10f628b9e);
      ppuVar19 = &PTR_DAT_110b94670;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    else {
      func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
      ppuVar19 = &PTR_DAT_110b94658;
      param_1 = (uint *******)&pppppppuStack_e8;
      pppppppuVar15 = (uint *******)&uStack_a0;
      pppppppuVar18 = (uint *******)0x2;
      FUN_109f76188();
    }
    break;
  case 0x183:
  case 0x184:
    if ((&UNK_110b78540)[lVar4] == '\x01') {
      (*(code *)(*param_3)[3])(param_3,&UNK_10f48d1ff);
      param_7 = *(uint *)(&UNK_110b78558 + lVar4);
      param_1 = (uint *******)&pppppppuStack_e8;
      param_6 = (uint *******)0x0;
      pppppppuVar15 = pppppppuStack_f0;
      pppppppuVar18 = param_3;
      ppuVar19 = (undefined **)param_4;
      pppppppuVar20 = param_5;
      FUN_109f8808c();
      if ((bStack_c0 & 1) != 0) {
        pppppppuVar15 = (uint *******)&UNK_10f480bab;
        param_1 = param_3;
        (*(code *)(*param_3)[3])();
        goto LAB_109f87e18;
      }
      goto LAB_109f87d00;
    }
    func_0x000107c31940(&uStack_a0,&UNK_10f6288ed);
    ppuVar19 = &PTR_DAT_110b946e8;
    param_1 = (uint *******)&pppppppuStack_e8;
    pppppppuVar15 = (uint *******)&uStack_a0;
    pppppppuVar18 = (uint *******)0x2;
    FUN_109f76188();
    break;
  default:
    if (uVar22 - 0x22 < 4) goto code_r0x000109f84054;
    if (uVar22 - 0x1e < 3) goto code_r0x000109f846fc;
    goto LAB_109f854e4;
  }
LAB_109f83ce0:
  *(undefined4 *)pppppppuStack_f8 = pppppppuStack_e8._0_4_;
  pppppppuStack_f8[2] = (uint ******)CONCAT17(uStack_d1,uStack_d8);
  pppppppuStack_f8[1] = (uint ******)pppppppuStack_e0;
  pppppppuStack_f8[3] = (uint ******)CONCAT17(cStack_c9,uStack_d0);
  pppppppuStack_f8[4] = ppppppuStack_c8;
  *(undefined1 *)(pppppppuStack_f8 + 5) = 0;
  if (cStack_89 < '\0') {
    pppppppuVar24 = (uint *******)CONCAT44(uStack_9c,uStack_a0);
LAB_109f83d0c:
    __ZdlPv();
    param_1 = pppppppuVar24;
  }
LAB_109f87d30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (((bStack_c0 & 1) == 0) && (cStack_c9 < '\0')) {
    __ZdlPv(pppppppuStack_e0);
  }
  pppppppuVar24 = param_1;
  __Unwind_Resume();
  pcStack_118 = FUN_109f8808c;
  uVar3 = (ulong)param_6 & 0xffffffff;
  uVar22 = (uint)*(byte *)((long)pppppppuVar20 + 0x4c);
  if ((byte)(&UNK_110b78548)
            [(ulong)*(uint *)(pppppppuVar20 + 5) * 0x68 + ((ulong)param_6 & 0xffffffff)] != 0) {
    uVar22 = (uint)(byte)(&UNK_110b78548)
                         [(ulong)*(uint *)(pppppppuVar20 + 5) * 0x68 + ((ulong)param_6 & 0xffffffff)
                         ];
  }
  cVar2 = *(char *)((long)pppppppuVar20[uVar3 * 6 + 0xd] + 0x1c);
  uVar31 = 2;
  uVar32 = 3;
  uVar29 = 0;
  uVar30 = 1;
  iVar25 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar28 = 0;
  iVar21 = 0x10;
  do {
    iVar25 = iVar25 + (uint)(uVar29 < uVar22);
    iVar26 = iVar26 + (uint)(uVar30 < uVar22);
    iVar27 = iVar27 + (uint)(uVar31 < uVar22);
    iVar28 = iVar28 + (uint)(uVar32 < uVar22);
    uVar29 = uVar29 + 4;
    uVar30 = uVar30 + 4;
    uVar31 = uVar31 + 4;
    uVar32 = uVar32 + 4;
    iVar21 = iVar21 + -4;
  } while (iVar21 != 0);
  uVar30 = iVar25 + iVar26 + iVar27 + iVar28;
  uVar29 = 299;
  uVar22 = uVar29;
  if (*(char *)((long)pppppppuVar15[6] + 0xe4) == '\0') {
    uVar22 = 0x81;
  }
  uVar31 = param_7 & 0x79 | 2;
  if (uVar22 < *(uint *)(pppppppuVar15[6] + 0x1d) || (param_7 & 0x86) != 4) {
    uVar31 = param_7;
  }
  pppppppuVar14 = pppppppuVar15;
  pppppppuStack_170 = param_4;
  pppppppuStack_168 = unaff_x27;
  pppppppuStack_160 = unaff_x26;
  pppppppuStack_158 = unaff_x25;
  pppppppuStack_150 = param_2;
  pppppppuStack_148 = unaff_x23;
  pppppppuStack_140 = unaff_x22;
  pppppppuStack_138 = param_5;
  pppppppuStack_130 = param_3;
  pppppppuStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000109f70334(pppppppuVar15,pppppppuVar18,ppuVar19);
  ppppppuVar16 = pppppppuVar15[6];
  if (*(char *)((long)ppppppuVar16 + 0xe4) == '\0') {
    uVar29 = 0x81;
  }
  uVar32 = (uint)pppppppuVar14;
  uVar22 = uVar32 & 0x79 | 2;
  if (uVar29 < *(uint *)(ppppppuVar16 + 0x1d) || (uVar32 & 0x86) != 4) {
    uVar22 = uVar32;
  }
  uVar29 = uVar22 & 0x86;
  uVar32 = uVar31 & 0x86;
  if ((cVar2 == '\x01') && (1 < uVar30)) {
    if (((uVar29 == 0x80) && ((uVar31 & 0x86) - 2 < 4)) ||
       (((uVar22 & 0x86) - 2 < 4 && (uVar32 == 0x80)))) {
      bVar9 = true;
    }
    else {
      if (uVar29 != 0 && uVar29 != uVar32) {
        func_0x000107c31940(auStack_188,&UNK_10f628d13);
        FUN_109f76188(auStack_1b8,auStack_188,2,&PTR_DAT_110b94718);
        goto LAB_109f8869c;
      }
      bVar9 = false;
    }
    FUN_109f80034(auStack_1b8,ppppppuVar16,pppppppuVar18,ppuVar19[0x2c],uVar32,uVar30);
    if ((bStack_190 & 1) == 0) {
LAB_109f88624:
      *(uint *)pppppppuVar24 = auStack_1b8[0];
      pppppppuVar24[1] = ppppppuStack_1b0;
      pppppppuVar24[2] = (uint ******)CONCAT17(uStack_1a1,uStack_1a8);
      *(ulong *)((long)pppppppuVar24 + 0x17) = CONCAT71(uStack_1a0,uStack_1a1);
      *(undefined1 *)((long)pppppppuVar24 + 0x1f) = uStack_199;
      pppppppuVar24[4] = ppppppuStack_198;
      *(undefined1 *)(pppppppuVar24 + 5) = 0;
      return;
    }
    (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&DAT_10f68e8ec);
    if (bVar9) {
      (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&UNK_10f60da23);
      if (uVar29 != 0) {
        uVar32 = uVar29;
      }
      FUN_109f81fc4(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20 + uVar3 * 6 + 10,
                    uVar32);
      if ((bStack_190 & 1) == 0) goto LAB_109f88624;
      (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&DAT_10f684600);
    }
    else {
      if (uVar29 != 0) {
        uVar32 = uVar29;
      }
      FUN_109f81fc4(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20 + uVar3 * 6 + 10,
                    uVar32);
      if (bStack_190 != 1) goto LAB_109f88624;
    }
  }
  else {
    bVar11 = uVar29 != 0x80;
    bVar9 = 3 < uVar32 - 2;
    bVar10 = uVar29 - 2 < 4;
    bVar12 = uVar32 != 0x80;
    if (*pppppppuVar20[uVar3 * 6 + 0xd] == (uint *****)0x0) {
      bVar13 = true;
    }
    else {
      bVar13 = *(int *)(*pppppppuVar20[uVar3 * 6 + 0xd] + 3) != 5;
    }
    if ((((!bVar11 && !bVar9 || bVar10 && !bVar12) && cVar2 == '\x01') && bVar13) && uVar30 == 1) {
      if (bVar11 || bVar9) {
        if (!bVar10 || bVar12) {
          func_0x000107c31940(auStack_188,&UNK_10f628dd6);
          FUN_109f76188(auStack_1b8,auStack_188,2,&PTR_DAT_110b94748);
LAB_109f8869c:
          *(uint *)pppppppuVar24 = auStack_1b8[0];
          pppppppuVar24[2] = (uint ******)CONCAT17(uStack_1a1,uStack_1a8);
          pppppppuVar24[1] = ppppppuStack_1b0;
          pppppppuVar24[3] = (uint ******)CONCAT17(uStack_199,uStack_1a0);
          pppppppuVar24[4] = ppppppuStack_198;
          *(undefined1 *)(pppppppuVar24 + 5) = 0;
          if (-1 < cStack_171) {
            return;
          }
          __ZdlPv(auStack_188[0]);
          return;
        }
        if (uVar29 == 2) {
          puVar17 = &UNK_10f628e27;
        }
        else {
          if (uVar29 != 4) {
            func_0x000107c31940(auStack_188,&UNK_10f628dff);
            FUN_109f76188(auStack_1b8,auStack_188,2,&PTR_DAT_110b94760);
            goto LAB_109f8869c;
          }
          puVar17 = &UNK_10f628dee;
        }
      }
      else if (uVar32 == 2) {
        puVar17 = &UNK_10f628dc6;
      }
      else {
        if (uVar32 != 4) {
          func_0x000107c31940(auStack_188,&UNK_10f628d99);
          FUN_109f76188(auStack_1b8,auStack_188,2,&PTR_DAT_110b94730);
          goto LAB_109f8869c;
        }
        puVar17 = &UNK_10f628d88;
      }
      (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,puVar17);
      FUN_109f81fc4(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20 + uVar3 * 6 + 10,
                    uVar22);
    }
    else {
      if (uVar29 == 0 || uVar29 == uVar32) {
        FUN_109f81fc4(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,
                      pppppppuVar20 + uVar3 * 6 + 10,uVar31);
        if (((bStack_190 & 1) == 0) ||
           (FUN_109f73144(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20,
                          (ulong)param_6 & 0xffffffff,uVar31), (bStack_190 & 1) == 0))
        goto LAB_109f88624;
        goto LAB_109f88608;
      }
      if ((!bVar11 && !bVar9) || (bVar10 && !bVar12)) {
        (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&UNK_10f60da23);
      }
      else {
        FUN_109f80034(auStack_1b8,ppppppuVar16,pppppppuVar18,ppuVar19[0x2c],uVar32,uVar30);
        if ((bStack_190 & 1) == 0) goto LAB_109f88624;
        (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&DAT_10f68e8ec);
      }
      FUN_109f81fc4(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20 + uVar3 * 6 + 10,
                    uVar22);
      if ((bStack_190 & 1) == 0) goto LAB_109f88624;
      FUN_109f73144(auStack_1b8,pppppppuVar15,pppppppuVar18,ppuVar19,pppppppuVar20,(int)param_6,
                    uVar31);
    }
    if ((bStack_190 & 1) == 0) goto LAB_109f88624;
  }
  (*(code *)(*pppppppuVar18)[3])(pppppppuVar18,&DAT_10f684600);
LAB_109f88608:
  pppppppuVar24[3] = (uint ******)0x0;
  pppppppuVar24[2] = (uint ******)0x0;
  pppppppuVar24[5] = (uint ******)0x0;
  pppppppuVar24[4] = (uint ******)0x0;
  pppppppuVar24[1] = (uint ******)0x0;
  *pppppppuVar24 = (uint ******)0x0;
  *(undefined1 *)(pppppppuVar24 + 5) = 1;
  return;
LAB_109f854e4:
  FUN_109f88b50(&uStack_b8);
  pppppppuStack_110 = (uint *******)CONCAT17(uStack_b8._7_1_,(undefined7)uStack_b8);
  if (-1 < cStack_a1) {
    pppppppuStack_110 = (uint *******)&uStack_b8;
  }
  FUN_109f7d45c(&uStack_a0,&UNK_10f628c3a);
  ppuVar19 = &PTR_DAT_110b94700;
  param_1 = (uint *******)&pppppppuStack_e8;
  pppppppuVar15 = (uint *******)&uStack_a0;
  pppppppuVar18 = (uint *******)0x2;
  FUN_109f76188();
code_r0x000109f8552c:
  *(undefined4 *)pppppppuStack_f8 = pppppppuStack_e8._0_4_;
  pppppppuStack_f8[2] = (uint ******)CONCAT17(uStack_d1,uStack_d8);
  pppppppuStack_f8[1] = (uint ******)pppppppuStack_e0;
  pppppppuStack_f8[3] = (uint ******)CONCAT17(cStack_c9,uStack_d0);
  pppppppuStack_f8[4] = ppppppuStack_c8;
  *(undefined1 *)(pppppppuStack_f8 + 5) = 0;
  if (cStack_89 < '\0') {
    param_1 = (uint *******)CONCAT44(uStack_9c,uStack_a0);
    __ZdlPv();
  }
  if (cStack_a1 < '\0') {
    pppppppuVar24 = (uint *******)CONCAT17(uStack_b8._7_1_,(undefined7)uStack_b8);
    goto LAB_109f83d0c;
  }
  goto LAB_109f87d30;
}



/* Entry: 109f8808c; end: 109f886f7;  */

void FUN_109f8808c(undefined8 *param_1,long param_2,long *param_3,long param_4,long param_5,
                  uint param_6,uint param_7)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  lVar12 = param_5 + (ulong)param_6 * 0x30;
  uVar1 = (uint)*(byte *)(param_5 + 0x4c);
  if ((byte)(&UNK_110b78548)[(ulong)*(uint *)(param_5 + 0x28) * 0x68 + (ulong)param_6] != 0) {
    uVar1 = (uint)(byte)(&UNK_110b78548)[(ulong)*(uint *)(param_5 + 0x28) * 0x68 + (ulong)param_6];
  }
  cVar2 = *(char *)(*(long *)(lVar12 + 0x68) + 0x1c);
  uVar19 = 2;
  uVar20 = 3;
  uVar17 = 0;
  uVar18 = 1;
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  iVar16 = 0;
  iVar11 = 0x10;
  do {
    iVar13 = iVar13 + (uint)(uVar17 < uVar1);
    iVar14 = iVar14 + (uint)(uVar18 < uVar1);
    iVar15 = iVar15 + (uint)(uVar19 < uVar1);
    iVar16 = iVar16 + (uint)(uVar20 < uVar1);
    uVar17 = uVar17 + 4;
    uVar18 = uVar18 + 4;
    uVar19 = uVar19 + 4;
    uVar20 = uVar20 + 4;
    iVar11 = iVar11 + -4;
  } while (iVar11 != 0);
  uVar18 = iVar13 + iVar14 + iVar15 + iVar16;
  uVar17 = 299;
  uVar1 = uVar17;
  if (*(char *)(*(long *)(param_2 + 0x30) + 0xe4) == '\0') {
    uVar1 = 0x81;
  }
  uVar19 = param_7 & 0x79 | 2;
  if (uVar1 < *(uint *)(*(long *)(param_2 + 0x30) + 0xe8) || (param_7 & 0x86) != 4) {
    uVar19 = param_7;
  }
  lVar8 = param_2;
  func_0x000109f70334(param_2,param_3,param_4);
  lVar9 = *(long *)(param_2 + 0x30);
  if (*(char *)(lVar9 + 0xe4) == '\0') {
    uVar17 = 0x81;
  }
  uVar20 = (uint)lVar8;
  uVar1 = uVar20 & 0x79 | 2;
  if (uVar17 < *(uint *)(lVar9 + 0xe8) || (uVar20 & 0x86) != 4) {
    uVar1 = uVar20;
  }
  uVar17 = uVar1 & 0x86;
  uVar20 = uVar19 & 0x86;
  if ((cVar2 == '\x01') && (1 < uVar18)) {
    if (((uVar17 == 0x80) && ((uVar19 & 0x86) - 2 < 4)) ||
       (((uVar1 & 0x86) - 2 < 4 && (uVar20 == 0x80)))) {
      bVar3 = true;
    }
    else {
      if (uVar17 != 0 && uVar17 != uVar20) {
        func_0x000107c31940(auStack_78,&UNK_10f628d13);
        FUN_109f76188(auStack_a8,auStack_78,2,&PTR_DAT_110b94718);
        goto LAB_109f8869c;
      }
      bVar3 = false;
    }
    FUN_109f80034(auStack_a8,lVar9,param_3,*(undefined8 *)(param_4 + 0x160),uVar20,uVar18);
    if ((bStack_80 & 1) == 0) {
LAB_109f88624:
      *(undefined4 *)param_1 = auStack_a8[0];
      param_1[1] = uStack_a0;
      param_1[2] = CONCAT17(uStack_91,uStack_98);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_90,uStack_91);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_89;
      param_1[4] = uStack_88;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
    if (bVar3) {
      (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f60da23);
      if (uVar17 != 0) {
        uVar20 = uVar17;
      }
      FUN_109f81fc4(auStack_a8,param_2,param_3,param_4,lVar12 + 0x50,uVar20);
      if ((bStack_80 & 1) == 0) goto LAB_109f88624;
      (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f684600);
    }
    else {
      if (uVar17 != 0) {
        uVar20 = uVar17;
      }
      FUN_109f81fc4(auStack_a8,param_2,param_3,param_4,lVar12 + 0x50,uVar20);
      if (bStack_80 != 1) goto LAB_109f88624;
    }
  }
  else {
    bVar5 = uVar17 != 0x80;
    bVar3 = 3 < uVar20 - 2;
    bVar4 = uVar17 - 2 < 4;
    bVar6 = uVar20 != 0x80;
    if (**(long **)(lVar12 + 0x68) == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = *(int *)(**(long **)(lVar12 + 0x68) + 0x18) != 5;
    }
    if ((((!bVar5 && !bVar3 || bVar4 && !bVar6) && cVar2 == '\x01') && bVar7) && uVar18 == 1) {
      if (bVar5 || bVar3) {
        if (!bVar4 || bVar6) {
          func_0x000107c31940(auStack_78,&UNK_10f628dd6);
          FUN_109f76188(auStack_a8,auStack_78,2,&PTR_DAT_110b94748);
LAB_109f8869c:
          *(undefined4 *)param_1 = auStack_a8[0];
          param_1[2] = CONCAT17(uStack_91,uStack_98);
          param_1[1] = uStack_a0;
          param_1[3] = CONCAT17(uStack_89,uStack_90);
          param_1[4] = uStack_88;
          *(undefined1 *)(param_1 + 5) = 0;
          if (-1 < cStack_61) {
            return;
          }
          __ZdlPv(auStack_78[0]);
          return;
        }
        if (uVar17 == 2) {
          puVar10 = &UNK_10f628e27;
        }
        else {
          if (uVar17 != 4) {
            func_0x000107c31940(auStack_78,&UNK_10f628dff);
            FUN_109f76188(auStack_a8,auStack_78,2,&PTR_DAT_110b94760);
            goto LAB_109f8869c;
          }
          puVar10 = &UNK_10f628dee;
        }
      }
      else if (uVar20 == 2) {
        puVar10 = &UNK_10f628dc6;
      }
      else {
        if (uVar20 != 4) {
          func_0x000107c31940(auStack_78,&UNK_10f628d99);
          FUN_109f76188(auStack_a8,auStack_78,2,&PTR_DAT_110b94730);
          goto LAB_109f8869c;
        }
        puVar10 = &UNK_10f628d88;
      }
      (**(code **)(*param_3 + 0x18))(param_3,puVar10);
      FUN_109f81fc4(auStack_a8,param_2,param_3,param_4,lVar12 + 0x50,uVar1);
    }
    else {
      if (uVar17 == 0 || uVar17 == uVar20) {
        FUN_109f81fc4(auStack_a8,param_2,param_3,param_4,lVar12 + 0x50,uVar19);
        if (((bStack_80 & 1) == 0) ||
           (FUN_109f73144(auStack_a8,param_2,param_3,param_4,param_5,param_6,uVar19),
           (bStack_80 & 1) == 0)) goto LAB_109f88624;
        goto LAB_109f88608;
      }
      if ((!bVar5 && !bVar3) || (bVar4 && !bVar6)) {
        (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f60da23);
      }
      else {
        FUN_109f80034(auStack_a8,lVar9,param_3,*(undefined8 *)(param_4 + 0x160),uVar20,uVar18);
        if ((bStack_80 & 1) == 0) goto LAB_109f88624;
        (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
      }
      FUN_109f81fc4(auStack_a8,param_2,param_3,param_4,lVar12 + 0x50,uVar1);
      if ((bStack_80 & 1) == 0) goto LAB_109f88624;
      FUN_109f73144(auStack_a8,param_2,param_3,param_4,param_5,param_6,uVar19);
    }
    if ((bStack_80 & 1) == 0) goto LAB_109f88624;
  }
  (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f684600);
LAB_109f88608:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 109f886f8; end: 109f88a47;  */

void FUN_109f886f8(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  float *pfVar8;
  long *unaff_x20;
  undefined *puVar9;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  long lStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  long lStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  char *pcStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined6 uStack_ff;
  char cStack_f9;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  byte bStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e7;
  byte bStack_d0;
  long *aplStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  if ((0x81 < *(uint *)(param_2[6] + 0xe8)) && (*(byte *)(param_5 + 0x4c) < 2)) {
    uVar2 = *(uint *)(param_5 + 0x28);
    if (0x32 < uVar2 - 0xc0 || (1L << ((ulong)(uVar2 - 0xc0) & 0x3f) & 0x780000000000fU) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_109f88758;
    }
    if ((&UNK_110b78540)[(ulong)uVar2 * 0x68] != '\x02') {
      func_0x000107c31940(aplStack_c8,&UNK_10f628736);
      plVar4 = (long *)&uStack_118;
      FUN_109f76188(plVar4,aplStack_c8,2,&PTR_DAT_110b94778);
LAB_109f888c0:
      *(undefined4 *)param_1 = uStack_118;
      param_1[2] = CONCAT71(uStack_107,uStack_108);
      param_1[1] = CONCAT71(uStack_110._1_7_,(undefined1)uStack_110);
      param_1[3] = CONCAT17(cStack_f9,CONCAT61(uStack_ff,uStack_100));
      param_1[4] = CONCAT71(uStack_f7,uStack_f8);
      *(undefined1 *)(param_1 + 5) = 0;
      plVar5 = aplStack_c8[0];
      param_1 = plVar4;
      if (-1 < cStack_b1) goto LAB_109f88758;
      goto LAB_109f888e8;
    }
    plVar4 = param_2;
    FUN_109f7344c(&uStack_118,param_2,param_3,param_4,param_5 + 0x80);
    uStack_88 = uStack_ef;
    uStack_80 = uStack_e7;
    uStack_b0 = CONCAT17((undefined1)uStack_110,CONCAT43(uStack_114,uStack_118._1_3_));
    unaff_x20 = param_3;
    if ((bStack_d0 & 1) != 0) {
      pcVar1 = "!";
      if (3 < uVar2 - 0xef) {
        pcVar1 = "";
      }
      if (CONCAT44(uStack_114,uStack_118) != 0) {
        lVar6 = CONCAT44(uStack_114,uStack_118) << 2;
        pfVar8 = (float *)&uStack_110;
        do {
          if (!NAN(*pfVar8)) {
            if (CONCAT44(uStack_114,uStack_118) == 0) goto LAB_109f88950;
            lVar6 = CONCAT44(uStack_114,uStack_118) << 2;
            puVar7 = (uint *)&uStack_110;
            goto LAB_109f88938;
          }
          lVar6 = lVar6 + -4;
          pfVar8 = pfVar8 + 1;
        } while (lVar6 != 0);
      }
      puVar9 = &UNK_10f628f29;
      goto LAB_109f88958;
    }
  }
  *(undefined1 *)param_1 = 0;
  param_3 = unaff_x20;
  goto LAB_109f88754;
  while (lVar6 = lVar6 + -4, puVar7 = puVar7 + 1, lVar6 != 0) {
LAB_109f88938:
    if ((*puVar7 & 0x7fffffff) != 0x7f800000) {
      func_0x000107c31940(aplStack_c8,&UNK_10f628eec);
      plVar4 = (long *)&uStack_118;
      FUN_109f76188(plVar4,aplStack_c8,3,&PTR_DAT_110b94790);
      goto LAB_109f888c0;
    }
  }
LAB_109f88950:
  puVar9 = &UNK_10f628f30;
LAB_109f88958:
  pcStack_120 = pcVar1;
  (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f61b269);
  (**(code **)(*param_3 + 0x18))(param_3,puVar9);
  plVar4 = (long *)&uStack_118;
  FUN_109f8808c(plVar4,param_2,param_3,param_4,param_5,0,
                *(undefined4 *)(&UNK_110b78558 + (ulong)uVar2 * 0x68));
  if ((bStack_f0 & 1) == 0) {
    *(undefined1 *)param_1 = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    param_1 = plVar4;
    if (-1 < cStack_f9) goto LAB_109f88758;
    plVar5 = (long *)CONCAT71(uStack_110._1_7_,(undefined1)uStack_110);
LAB_109f888e8:
    __ZdlPv();
    param_1 = plVar5;
    goto LAB_109f88758;
  }
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f628703);
  *(undefined1 *)param_1 = 1;
LAB_109f88754:
  *(undefined1 *)(param_1 + 5) = 1;
  param_1 = plVar4;
  unaff_x20 = param_3;
LAB_109f88758:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(aplStack_c8[0]);
  }
  plVar4 = param_1;
  __Unwind_Resume();
  pcStack_128 = FUN_109f88a48;
  if ((*(byte *)(plVar4 + 5) & 1) == 0) {
    uStack_168 = (undefined4)*plVar4;
    lStack_160 = plVar4[1];
    uStack_158 = (undefined7)plVar4[2];
    uStack_151 = (undefined1)*(undefined8 *)((long)plVar4 + 0x17);
    uStack_150 = (undefined7)((ulong)*(undefined8 *)((long)plVar4 + 0x17) >> 8);
    uStack_149 = *(undefined1 *)((long)plVar4 + 0x1f);
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[1] = 0;
    lStack_148 = plVar4[4];
    ppuStack_170 = &PTR_LAB_110b93678;
    plStack_140 = unaff_x20;
    plStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000109f6d428(&ppuStack_170);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109f88ab8);
    (*pcVar3)();
  }
  return;
}



/* Entry: 109f88a48; end: 109f88acb;  */

void FUN_109f88a48(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return;
  }
  uStack_48 = *param_1;
  uStack_40 = *(undefined8 *)(param_1 + 2);
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 4);
  uStack_31 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
  uStack_30 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
  uStack_29 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_50 = &PTR_LAB_110b93678;
  func_0x000109f6d428(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f88ab8);
  (*pcVar1)();
}



/* Entry: 109f88acc; end: 109f88b4f;  */

void FUN_109f88acc(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return;
  }
  uStack_48 = *param_1;
  uStack_40 = *(undefined8 *)(param_1 + 2);
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 4);
  uStack_31 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
  uStack_30 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
  uStack_29 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_50 = &PTR_LAB_110b93678;
  func_0x000109f6d428(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f88b3c);
  (*pcVar1)();
}



/* Entry: 109f88b50; end: 109f88bfb;  */

ulong * FUN_109f88b50(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  puVar3 = param_1;
  if ((uint)param_2 < 0x80) {
    uVar10 = *(ulong *)(&UNK_110b947b0 + ((ulong)param_2 & 0xffffffff) * 0x10);
    if (0x7ffffffffffffff7 < uVar10) {
      func_0x000104c4f6b8();
      uVar10 = param_1[1];
      if (uVar10 != 0) {
        uVar4 = *param_2;
        uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
        uVar5 = (uVar4 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
        uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
        uVar6 = uVar10 - 1;
        if ((uVar10 & uVar6) == 0) {
          uVar7 = uVar5 & uVar6;
        }
        else {
          uVar7 = uVar5;
          if (uVar10 <= uVar5) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar5 / uVar10;
            }
            uVar7 = uVar5 - uVar7 * uVar10;
          }
        }
        plVar8 = *(long **)(*param_1 + uVar7 * 8);
        if (plVar8 != (long *)0x0) {
          puVar3 = (ulong *)*plVar8;
          do {
            if (puVar3 == (ulong *)0x0) {
              return (ulong *)0x0;
            }
            uVar9 = puVar3[1];
            if (uVar5 - uVar9 == 0) {
              if (puVar3[2] == uVar4) {
                return puVar3;
              }
            }
            else {
              if ((uVar10 & uVar6) == 0) {
                uVar9 = uVar9 & uVar6;
              }
              else if (uVar10 <= uVar9) {
                uVar2 = 0;
                if (uVar10 != 0) {
                  uVar2 = uVar9 / uVar10;
                }
                uVar9 = uVar9 - uVar2 * uVar10;
              }
              if (uVar9 != uVar7) {
                return (ulong *)0x0;
              }
            }
            puVar3 = (ulong *)*puVar3;
          } while( true );
        }
      }
      return (ulong *)0x0;
    }
    puVar11 = (&PTR_DAT_110b947a8)[((ulong)param_2 & 0xffffffff) * 2];
    if (uVar10 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar10;
      if (uVar10 == 0) goto LAB_109f88be4;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((uVar10 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar10 | 7) + 1);
      }
      puVar3 = puVar1;
      __Znwm();
      param_1[1] = uVar10;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar3;
    }
    param_1 = puVar3;
    _memmove(puVar3,puVar11,uVar10);
  }
  else {
    uVar10 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
LAB_109f88be4:
  *(undefined1 *)((long)puVar3 + uVar10) = 0;
  return param_1;
}



/* Entry: 109f88bfc; end: 109f88cd3;  */

long * FUN_109f88bfc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 109f88cd4; end: 109f88d7f;  */

/* WARNING: Removing unreachable block (ram,0x000109f82bbc) */
/* WARNING: Removing unreachable block (ram,0x000109f821d4) */
/* WARNING: Removing unreachable block (ram,0x000109f82bac) */
/* WARNING: Removing unreachable block (ram,0x000109f82130) */
/* WARNING: Removing unreachable block (ram,0x000109f82134) */

void FUN_109f88cd4(undefined8 *param_1,ulong param_2,long *param_3,long param_4,long param_5,
                  uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  double dVar15;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  char cStack_209;
  byte bStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  char cStack_1d9;
  byte bStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  char cStack_1a9;
  byte bStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  char cStack_179;
  byte bStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  char cStack_149;
  byte bStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [48];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined1 auStack_c0 [32];
  
  if (0x7f < (uint)param_2) {
    uVar18 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
LAB_109f88d68:
    *(undefined1 *)((long)param_1 + uVar18) = 0;
    return;
  }
  uVar18 = *(ulong *)(&UNK_110b95028 + (param_2 & 0xffffffff) * 0x10);
  if (uVar18 < 0x7ffffffffffffff8) {
    puVar20 = (&PTR_DAT_110b95020)[(param_2 & 0xffffffff) * 2];
    if (uVar18 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar18;
      puVar10 = param_1;
      if (uVar18 == 0) goto LAB_109f88d68;
    }
    else {
      puVar2 = (undefined8 *)0x19;
      if ((uVar18 | 7) != 0x17) {
        puVar2 = (undefined8 *)((uVar18 | 7) + 1);
      }
      puVar10 = puVar2;
      __Znwm();
      param_1[1] = uVar18;
      param_1[2] = (ulong)puVar2 | 0x8000000000000000;
      *param_1 = puVar10;
    }
    _memmove(puVar10,puVar20,uVar18);
    param_1 = puVar10;
    goto LAB_109f88d68;
  }
  func_0x000104c4f6b8();
  lVar19 = *(long *)(param_4 + 0x160) + 0x680;
  FUN_109f7af48(lVar19,param_5);
  if (lVar19 != 0) {
    lVar12 = (long)*(char *)(lVar19 + 0x47);
    if (lVar12 < 0) {
      lVar11 = *(long *)(lVar19 + 0x30);
      lVar12 = *(long *)(lVar19 + 0x38);
    }
    else {
      lVar11 = lVar19 + 0x30;
    }
    (**(code **)(*param_3 + 0x10))(param_3,lVar11,lVar12);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if (*(long **)(param_5 + 0x18) == (long *)0x0) {
    func_0x000107c31940(auStack_c0,&UNK_10f62a8e8);
    FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95b50);
  }
  else {
    lVar19 = **(long **)(param_5 + 0x18);
    if (lVar19 != 0) {
      uVar16 = 299;
      if (*(char *)(*(long *)(param_2 + 0x30) + 0xe4) == '\0') {
        uVar16 = 0x81;
      }
      uVar1 = param_6 & 0x79 | 2;
      if (uVar16 < *(uint *)(*(long *)(param_2 + 0x30) + 0xe8) || (param_6 & 0x86) != 4) {
        uVar1 = param_6;
      }
      if (uVar1 == 0) {
        uVar13 = 0;
        bVar7 = false;
        uVar18 = 0;
      }
      else {
        uVar16 = uVar1 & 0x86;
        if (*(int *)(lVar19 + 0x18) != 5) {
          uVar18 = param_2;
          func_0x000109f70334(param_2,param_3,param_4);
          lVar12 = *(long *)(param_2 + 0x30);
          uVar13 = 299;
          if (*(char *)(lVar12 + 0xe4) == '\0') {
            uVar13 = 0x81;
          }
          uVar8 = (uint)uVar18;
          if (((uVar8 & 0x86) == 4) && (*(uint *)(lVar12 + 0xe8) <= uVar13)) {
            uVar18 = (ulong)(uVar8 & 0x79 | 2);
          }
          else if (uVar8 == 0) goto LAB_109f82160;
          uVar13 = (uint)uVar18 & 0x86;
          if (uVar13 != uVar16) {
            if ((uVar13 == 0x80) && (uVar16 == 4 || uVar16 == 2)) {
LAB_109f82434:
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f60da23);
            }
            else {
              if ((uVar16 == 0x80) && (uVar13 == 2 || uVar13 == 4)) goto LAB_109f82434;
              FUN_109f80034(&lStack_f0,lVar12,param_3,*(undefined8 *)(param_4 + 0x160),uVar16,
                            *(undefined1 *)(*(long *)(param_5 + 0x18) + 0x1c));
              if (bStack_c8 != 1) {
                *(undefined4 *)param_1 = (undefined4)lStack_f0;
                param_1[1] = uStack_e8;
                param_1[2] = CONCAT17(uStack_d9,uStack_e0);
                uVar9 = CONCAT71(uStack_d8,uStack_d9);
                goto LAB_109f82e6c;
              }
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
            }
            bVar7 = true;
            goto LAB_109f8216c;
          }
        }
LAB_109f82160:
        bVar7 = false;
        uVar18 = (ulong)uVar1;
        uVar13 = uVar16;
      }
LAB_109f8216c:
      iVar3 = *(int *)(lVar19 + 0x18);
      if (3 < iVar3) {
        if (iVar3 == 4) {
          iVar3 = *(int *)(lVar19 + 0x28);
          if (iVar3 - 0x59U < 6) {
LAB_109f8222c:
            lStack_f0 = *(long *)(param_5 + 0x18);
            FUN_109f73558(param_4 + 0xd8,&lStack_f0);
            pcVar17 = *(code **)(*param_3 + 0x18);
            puVar20 = &UNK_10f62aa0c;
LAB_109f8228c:
            (*pcVar17)(param_3,puVar20);
            goto LAB_109f82294;
          }
          if (iVar3 == 100) {
            uVar18 = param_2;
            func_0x000109f70334(param_2,param_3,param_4,*(undefined8 *)(lVar19 + 0x98));
            FUN_109f81fc4(&lStack_f0,param_2,param_3,param_4,lVar19 + 0x80,uVar18);
            if ((bStack_c8 & 1) == 0) {
              *(undefined4 *)param_1 = (undefined4)lStack_f0;
              param_1[1] = uStack_e8;
              param_1[2] = CONCAT17(uStack_d9,uStack_e0);
              uVar9 = CONCAT71(uStack_d8,uStack_d9);
              goto LAB_109f82e6c;
            }
            pcVar17 = *(code **)(*param_3 + 0x18);
            puVar20 = &UNK_10f629645;
            goto LAB_109f82a20;
          }
          if (iVar3 != 0x112) {
            FUN_109f88cd4(auStack_138);
            FUN_109f7d45c(auStack_c0,&UNK_10f629078);
            FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95c10);
            *(undefined4 *)param_1 = (undefined4)lStack_f0;
            uVar9 = CONCAT17(uStack_d9,uStack_e0);
            goto LAB_109f82b94;
          }
          lVar12 = **(long **)(lVar19 + 0x98);
          if (lVar12 == 0 || *(int *)(lVar12 + 0x18) != 1) {
LAB_109f826b4:
            FUN_109f81fc4(&lStack_f0,param_2,param_3,param_4,lVar19 + 0x80,uVar18);
          }
          else {
            while (*(int *)(lVar12 + 0x28) != 0) {
              if (*(int *)(lVar12 + 0x28) == 5) goto LAB_109f826b4;
              lVar12 = **(long **)(lVar12 + 0x50);
              if (*(int *)(lVar12 + 0x18) != 1) {
                lVar12 = 0;
              }
            }
            if ((((*(long *)(lVar12 + 0x38) == 0) ||
                 (*(char *)(*(long *)(param_4 + 0x160) + 0x43a) != '\x01')) ||
                (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) != 4)) ||
               (((*(ulong *)(*(long *)(lVar12 + 0x38) + 0x20) ^ 0xffffffffffffffff) & 0x8000000008)
                != 0)) goto LAB_109f826b4;
            FUN_109f8904c(&lStack_f0,param_2,param_3,param_4,lVar19);
          }
          if ((bStack_c8 & 1) == 0) {
            *(undefined4 *)param_1 = (undefined4)lStack_f0;
            param_1[1] = uStack_e8;
            param_1[2] = CONCAT17(uStack_d9,uStack_e0);
            uVar9 = CONCAT71(uStack_d8,uStack_d9);
LAB_109f82e6c:
            *(undefined8 *)((long)param_1 + 0x17) = uVar9;
            *(undefined1 *)((long)param_1 + 0x1f) = uStack_d1;
            param_1[4] = uStack_d0;
            *(undefined1 *)(param_1 + 5) = 0;
            return;
          }
          goto LAB_109f82294;
        }
        if (iVar3 != 5) {
          if (iVar3 != 7) goto LAB_109f8222c;
          if (1 < *(byte *)(lVar19 + 0x44)) {
            FUN_109f80034(auStack_120,*(undefined8 *)(param_2 + 0x30),param_3,
                          *(undefined8 *)(param_4 + 0x160),uVar13);
          }
          if (uVar13 < 6) {
            if (uVar13 == 2) {
              pcVar17 = *(code **)(*param_3 + 0x18);
              puVar20 = &UNK_10f6295e6;
            }
            else {
              if (uVar13 != 4) {
LAB_109f828cc:
                FUN_109f82f70(auStack_138,uVar13);
                FUN_109f7d45c(auStack_c0,&UNK_10f6295f8);
                FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95b80);
                goto LAB_109f82918;
              }
              pcVar17 = *(code **)(*param_3 + 0x18);
              puVar20 = &UNK_10f6295ec;
            }
          }
          else if (uVar13 == 0x80) {
            pcVar17 = *(code **)(*param_3 + 0x18);
            puVar20 = &UNK_10f6295de;
          }
          else {
            if (uVar13 != 6) goto LAB_109f828cc;
            pcVar17 = *(code **)(*param_3 + 0x18);
            puVar20 = &UNK_10f6295d4;
          }
          goto LAB_109f8228c;
        }
        bVar4 = *(byte *)(lVar19 + 0x44);
        uVar18 = (ulong)bVar4;
        if (bVar4 < 2) {
          uVar18 = 1;
        }
        else {
          FUN_109f80034(auStack_228,*(undefined8 *)(param_2 + 0x30),param_3,
                        *(undefined8 *)(param_4 + 0x160),uVar13,uVar18);
          if (((bStack_200 & 1) == 0) && (cStack_209 < '\0')) {
            __ZdlPv(uStack_220);
          }
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
          puVar14 = (ulong *)(lVar19 + 0x48);
          uVar21 = uVar18;
          do {
            if (((*puVar14 ^ *(ulong *)(lVar19 + 0x48)) &
                ~(-1L << ((ulong)*(byte *)(lVar19 + 0x45) & 0x3f))) != 0) goto LAB_109f82764;
            uVar21 = uVar21 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar21 != 0);
          uVar18 = 1;
        }
LAB_109f82764:
        if (uVar13 < 6) {
          if (uVar13 == 2) {
            uVar21 = 0;
            do {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f6296b2);
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
          }
          else {
            if (uVar13 != 4) {
LAB_109f8287c:
              FUN_109f82f70(auStack_138,uVar13);
              FUN_109f7d45c(auStack_c0,&UNK_10f6295f8);
              FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95c28);
LAB_109f82918:
              *(undefined4 *)param_1 = (undefined4)lStack_f0;
              uVar9 = CONCAT17(uStack_d9,uStack_e0);
              goto LAB_109f82b94;
            }
            uVar21 = 0;
            do {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f6296a7);
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
          }
        }
        else if (uVar13 == 0x80) {
          if ((*(byte *)(*(long *)(param_4 + 0x160) + 0x43a) & 1) == 0) {
            uVar16 = *(uint *)(*(long *)(param_2 + 0x30) + 0xe8);
            bVar6 = 0x81 < uVar16;
            if (*(char *)(*(long *)(param_2 + 0x30) + 0xe4) == '\x01') {
              bVar6 = 299 < uVar16;
            }
          }
          else {
            bVar6 = true;
          }
          uVar21 = 0;
          cVar5 = *(char *)(lVar19 + 0x45);
          do {
            dVar15 = *(double *)(lVar19 + 0x48 + uVar21 * 8);
            fVar22 = SUB84(dVar15,0);
            if (cVar5 == '@') {
              fVar22 = (float)dVar15;
            }
            else if (cVar5 != ' ') {
              fVar23 = (float)(((uint)fVar22 & 0x7fff) << 0xd) * 5.192297e+33;
              if (65536.0 <= fVar23) {
                fVar23 = (float)((uint)fVar23 | 0x7f800000);
              }
              fVar22 = (float)((uint)fVar23 | ((uint)fVar22 >> 0xf) << 0x1f);
            }
            if ((uint)ABS(fVar22) < 0x7f800000) {
              if ((float)(int)fVar22 == fVar22) {
                pcVar17 = *(code **)(*param_3 + 0x18);
                puVar20 = &UNK_10f629696;
              }
              else {
                pcVar17 = *(code **)(*param_3 + 0x18);
                puVar20 = &UNK_10f62969f;
              }
              (*pcVar17)(param_3,puVar20);
            }
            else if (bVar6) {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f62964f);
            }
            else {
              if (NAN(fVar22)) {
                pcVar17 = *(code **)(*param_3 + 0x18);
                puVar20 = &UNK_10f62966b;
              }
              else {
                puVar20 = &UNK_10f629679;
                if (fVar22 <= 0.0) {
                  puVar20 = &UNK_10f629687;
                }
                pcVar17 = *(code **)(*param_3 + 0x18);
              }
              (*pcVar17)(param_3,puVar20);
            }
            uVar21 = uVar21 + 1;
          } while (uVar18 != uVar21);
        }
        else {
          if (uVar13 != 6) goto LAB_109f8287c;
          do {
            (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f48da3e);
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (bVar4 < 2) goto LAB_109f82294;
        pcVar17 = *(code **)(*param_3 + 0x18);
        puVar20 = &DAT_10f684600;
LAB_109f82a20:
        (*pcVar17)(param_3,puVar20);
LAB_109f82294:
        if (bVar7) {
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f684600);
        }
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 1;
        return;
      }
      if (iVar3 == 0) {
        if (*(int *)(lVar19 + 0x28) == 0x154) {
          FUN_109f8808c(auStack_1f8,param_2,param_3,param_4,lVar19,0,uVar18);
          if (((bStack_1d0 & 1) == 0) && (cStack_1d9 < '\0')) {
            __ZdlPv(uStack_1f0);
          }
          goto LAB_109f82294;
        }
        lStack_f0 = lVar19 + 0x30;
        FUN_109f73558(param_4 + 0xd8,&lStack_f0);
        pcVar17 = *(code **)(*param_3 + 0x18);
        puVar20 = &UNK_10f62aa0c;
LAB_109f824c0:
        (*pcVar17)(param_3,puVar20);
        goto LAB_109f82294;
      }
      if (iVar3 != 1) goto LAB_109f8222c;
      iVar3 = *(int *)(lVar19 + 0x28);
      if (iVar3 < 3) {
        if (iVar3 == 0) {
          uVar9 = *(undefined8 *)(lVar19 + 0x38);
          FUN_109f7c628(uVar9,param_4);
          (**(code **)(*param_3 + 0x10))(param_3,uVar9,param_4);
          goto LAB_109f82294;
        }
        if (iVar3 != 1) {
LAB_109f8292c:
          FUN_109f88fa0(auStack_138);
          FUN_109f7d45c(auStack_c0,&UNK_10f62a9ec);
          FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95bf8);
          *(undefined4 *)param_1 = (undefined4)lStack_f0;
          uVar9 = CONCAT17(uStack_d9,uStack_e0);
LAB_109f82b94:
          param_1[2] = uVar9;
          param_1[1] = uStack_e8;
          param_1[3] = CONCAT17(uStack_d1,uStack_d8);
          param_1[4] = uStack_d0;
          *(undefined1 *)(param_1 + 5) = 0;
          return;
        }
LAB_109f825d0:
        if (*(long **)(lVar19 + 0x50) == (long *)0x0) {
          func_0x000107c31940(auStack_c0,&UNK_10f62a9be);
          FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95bc8);
        }
        else {
          if (**(long **)(lVar19 + 0x50) != 0) {
            FUN_109f81fc4(auStack_198,param_2,param_3,param_4,lVar19 + 0x38,uVar18);
            if (((bStack_170 & 1) == 0) && (cStack_179 < '\0')) {
              __ZdlPv(uStack_190);
            }
            if ((*(int *)(**(long **)(lVar19 + 0x50) + 0x18) == 1) &&
               (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) == 4)) {
              lVar12 = *(long *)(param_4 + 0x160) + 0x400;
              func_0x0001072720a4(lVar12,*(long *)(**(long **)(lVar19 + 0x50) + 0x38) + 0x34);
              if (lVar12 != 0) goto LAB_109f82294;
            }
            lVar12 = **(long **)(lVar19 + 0x70);
            if (*(int *)(lVar12 + 0x18) == 5) {
              func_0x000109f7b01c(*(undefined1 *)(lVar12 + 0x45),*(undefined8 *)(lVar12 + 0x48));
              pcVar17 = *(code **)(*param_3 + 0x18);
              puVar20 = &UNK_10f629640;
            }
            else {
              uVar18 = param_2;
              func_0x000109f70334(param_2,param_3,param_4);
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f62a9e8);
              FUN_109f81fc4(auStack_1c8,param_2,param_3,param_4,lVar19 + 0x58,uVar18);
              if (((bStack_1a0 & 1) == 0) && (cStack_1a9 < '\0')) {
                __ZdlPv(uStack_1c0);
              }
              pcVar17 = *(code **)(*param_3 + 0x18);
              puVar20 = &DAT_10f62a9ea;
            }
            goto LAB_109f82a20;
          }
          func_0x000107c31940(auStack_c0,&UNK_10f629615);
          FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95be0);
        }
      }
      else {
        if (iVar3 == 3) goto LAB_109f825d0;
        if (iVar3 != 4) goto LAB_109f8292c;
        if (*(long **)(lVar19 + 0x50) == (long *)0x0) {
          func_0x000107c31940(auStack_c0,&UNK_10f62a9be);
          FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95b98);
        }
        else {
          if (**(long **)(lVar19 + 0x50) != 0) {
            FUN_109f81fc4(auStack_168,param_2,param_3,param_4,lVar19 + 0x38,uVar18);
            if (((bStack_140 & 1) == 0) && (cStack_149 < '\0')) {
              __ZdlPv(uStack_160);
            }
            (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f62a9de);
            pcVar17 = *(code **)(*param_3 + 0x18);
            puVar20 = &UNK_10f625a3f;
            goto LAB_109f824c0;
          }
          func_0x000107c31940(auStack_c0,&UNK_10f629615);
          FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95bb0);
        }
      }
      *(undefined4 *)param_1 = (undefined4)lStack_f0;
      uVar9 = CONCAT17(uStack_d9,uStack_e0);
      goto LAB_109f82118;
    }
    func_0x000107c31940(auStack_c0,&UNK_10f62a99c);
    FUN_109f76188(&lStack_f0,auStack_c0,2,&PTR_DAT_110b95b68);
  }
  *(undefined4 *)param_1 = (undefined4)lStack_f0;
  uVar9 = CONCAT17(uStack_d9,uStack_e0);
LAB_109f82118:
  param_1[2] = uVar9;
  param_1[1] = uStack_e8;
  param_1[3] = CONCAT17(uStack_d1,uStack_d8);
  param_1[4] = uStack_d0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 109f88d80; end: 109f88e37;  */

/* WARNING: Removing unreachable block (ram,0x000109f82bbc) */
/* WARNING: Removing unreachable block (ram,0x000109f821d4) */
/* WARNING: Removing unreachable block (ram,0x000109f82bac) */
/* WARNING: Removing unreachable block (ram,0x000109f82130) */
/* WARNING: Removing unreachable block (ram,0x000109f82134) */

void FUN_109f88d80(undefined8 *param_1,ulong param_2,long *param_3,long param_4,long param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  double dVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  char cStack_1d9;
  byte bStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  char cStack_1a9;
  byte bStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  char cStack_179;
  byte bStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  char cStack_149;
  byte bStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  char cStack_119;
  byte bStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [48];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined1 auStack_90 [32];
  
  lVar17 = *(long *)(param_4 + 0x160) + 0x680;
  FUN_109f7af48(lVar17,param_5);
  if (lVar17 != 0) {
    lVar11 = (long)*(char *)(lVar17 + 0x47);
    if (lVar11 < 0) {
      lVar10 = *(long *)(lVar17 + 0x30);
      lVar11 = *(long *)(lVar17 + 0x38);
    }
    else {
      lVar10 = lVar17 + 0x30;
    }
    (**(code **)(*param_3 + 0x10))(param_3,lVar10,lVar11);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if (*(long **)(param_5 + 0x18) == (long *)0x0) {
    func_0x000107c31940(auStack_90,&UNK_10f62a8e8);
    FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95b50);
  }
  else {
    lVar17 = **(long **)(param_5 + 0x18);
    if (lVar17 != 0) {
      uVar15 = 299;
      if (*(char *)(*(long *)(param_2 + 0x30) + 0xe4) == '\0') {
        uVar15 = 0x81;
      }
      uVar1 = param_6 & 0x79 | 2;
      if (uVar15 < *(uint *)(*(long *)(param_2 + 0x30) + 0xe8) || (param_6 & 0x86) != 4) {
        uVar1 = param_6;
      }
      if (uVar1 == 0) {
        uVar12 = 0;
        bVar6 = false;
        uVar19 = 0;
      }
      else {
        uVar15 = uVar1 & 0x86;
        if (*(int *)(lVar17 + 0x18) != 5) {
          uVar19 = param_2;
          func_0x000109f70334(param_2,param_3,param_4);
          lVar11 = *(long *)(param_2 + 0x30);
          uVar12 = 299;
          if (*(char *)(lVar11 + 0xe4) == '\0') {
            uVar12 = 0x81;
          }
          uVar7 = (uint)uVar19;
          if (((uVar7 & 0x86) == 4) && (*(uint *)(lVar11 + 0xe8) <= uVar12)) {
            uVar19 = (ulong)(uVar7 & 0x79 | 2);
          }
          else if (uVar7 == 0) goto LAB_109f82160;
          uVar12 = (uint)uVar19 & 0x86;
          if (uVar12 != uVar15) {
            if ((uVar12 == 0x80) && (uVar15 == 4 || uVar15 == 2)) {
LAB_109f82434:
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f60da23);
            }
            else {
              if ((uVar15 == 0x80) && (uVar12 == 2 || uVar12 == 4)) goto LAB_109f82434;
              FUN_109f80034(&lStack_c0,lVar11,param_3,*(undefined8 *)(param_4 + 0x160),uVar15,
                            *(undefined1 *)(*(long *)(param_5 + 0x18) + 0x1c));
              if (bStack_98 != 1) {
                *(undefined4 *)param_1 = (undefined4)lStack_c0;
                param_1[1] = uStack_b8;
                param_1[2] = CONCAT17(uStack_a9,uStack_b0);
                uVar8 = CONCAT71(uStack_a8,uStack_a9);
                goto LAB_109f82e6c;
              }
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
            }
            bVar6 = true;
            goto LAB_109f8216c;
          }
        }
LAB_109f82160:
        bVar6 = false;
        uVar19 = (ulong)uVar1;
        uVar12 = uVar15;
      }
LAB_109f8216c:
      iVar2 = *(int *)(lVar17 + 0x18);
      if (3 < iVar2) {
        if (iVar2 == 4) {
          iVar2 = *(int *)(lVar17 + 0x28);
          if (iVar2 - 0x59U < 6) {
LAB_109f8222c:
            lStack_c0 = *(long *)(param_5 + 0x18);
            FUN_109f73558(param_4 + 0xd8,&lStack_c0);
            pcVar16 = *(code **)(*param_3 + 0x18);
            puVar9 = &UNK_10f62aa0c;
LAB_109f8228c:
            (*pcVar16)(param_3,puVar9);
            goto LAB_109f82294;
          }
          if (iVar2 == 100) {
            uVar19 = param_2;
            func_0x000109f70334(param_2,param_3,param_4,*(undefined8 *)(lVar17 + 0x98));
            FUN_109f81fc4(&lStack_c0,param_2,param_3,param_4,lVar17 + 0x80,uVar19);
            if ((bStack_98 & 1) == 0) {
              *(undefined4 *)param_1 = (undefined4)lStack_c0;
              param_1[1] = uStack_b8;
              param_1[2] = CONCAT17(uStack_a9,uStack_b0);
              uVar8 = CONCAT71(uStack_a8,uStack_a9);
              goto LAB_109f82e6c;
            }
            pcVar16 = *(code **)(*param_3 + 0x18);
            puVar9 = &UNK_10f629645;
            goto LAB_109f82a20;
          }
          if (iVar2 != 0x112) {
            FUN_109f88cd4(auStack_108);
            FUN_109f7d45c(auStack_90,&UNK_10f629078);
            FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95c10);
            *(undefined4 *)param_1 = (undefined4)lStack_c0;
            uVar8 = CONCAT17(uStack_a9,uStack_b0);
            goto LAB_109f82b94;
          }
          lVar11 = **(long **)(lVar17 + 0x98);
          if (lVar11 == 0 || *(int *)(lVar11 + 0x18) != 1) {
LAB_109f826b4:
            FUN_109f81fc4(&lStack_c0,param_2,param_3,param_4,lVar17 + 0x80,uVar19);
          }
          else {
            while (*(int *)(lVar11 + 0x28) != 0) {
              if (*(int *)(lVar11 + 0x28) == 5) goto LAB_109f826b4;
              lVar11 = **(long **)(lVar11 + 0x50);
              if (*(int *)(lVar11 + 0x18) != 1) {
                lVar11 = 0;
              }
            }
            if ((((*(long *)(lVar11 + 0x38) == 0) ||
                 (*(char *)(*(long *)(param_4 + 0x160) + 0x43a) != '\x01')) ||
                (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) != 4)) ||
               (((*(ulong *)(*(long *)(lVar11 + 0x38) + 0x20) ^ 0xffffffffffffffff) & 0x8000000008)
                != 0)) goto LAB_109f826b4;
            FUN_109f8904c(&lStack_c0,param_2,param_3,param_4,lVar17);
          }
          if ((bStack_98 & 1) == 0) {
            *(undefined4 *)param_1 = (undefined4)lStack_c0;
            param_1[1] = uStack_b8;
            param_1[2] = CONCAT17(uStack_a9,uStack_b0);
            uVar8 = CONCAT71(uStack_a8,uStack_a9);
LAB_109f82e6c:
            *(undefined8 *)((long)param_1 + 0x17) = uVar8;
            *(undefined1 *)((long)param_1 + 0x1f) = uStack_a1;
            param_1[4] = uStack_a0;
            *(undefined1 *)(param_1 + 5) = 0;
            return;
          }
          goto LAB_109f82294;
        }
        if (iVar2 != 5) {
          if (iVar2 != 7) goto LAB_109f8222c;
          if (1 < *(byte *)(lVar17 + 0x44)) {
            FUN_109f80034(auStack_f0,*(undefined8 *)(param_2 + 0x30),param_3,
                          *(undefined8 *)(param_4 + 0x160),uVar12);
          }
          if (uVar12 < 6) {
            if (uVar12 == 2) {
              pcVar16 = *(code **)(*param_3 + 0x18);
              puVar9 = &UNK_10f6295e6;
            }
            else {
              if (uVar12 != 4) {
LAB_109f828cc:
                FUN_109f82f70(auStack_108,uVar12);
                FUN_109f7d45c(auStack_90,&UNK_10f6295f8);
                FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95b80);
                goto LAB_109f82918;
              }
              pcVar16 = *(code **)(*param_3 + 0x18);
              puVar9 = &UNK_10f6295ec;
            }
          }
          else if (uVar12 == 0x80) {
            pcVar16 = *(code **)(*param_3 + 0x18);
            puVar9 = &UNK_10f6295de;
          }
          else {
            if (uVar12 != 6) goto LAB_109f828cc;
            pcVar16 = *(code **)(*param_3 + 0x18);
            puVar9 = &UNK_10f6295d4;
          }
          goto LAB_109f8228c;
        }
        bVar3 = *(byte *)(lVar17 + 0x44);
        uVar19 = (ulong)bVar3;
        if (bVar3 < 2) {
          uVar19 = 1;
        }
        else {
          FUN_109f80034(auStack_1f8,*(undefined8 *)(param_2 + 0x30),param_3,
                        *(undefined8 *)(param_4 + 0x160),uVar12,uVar19);
          if (((bStack_1d0 & 1) == 0) && (cStack_1d9 < '\0')) {
            __ZdlPv(uStack_1f0);
          }
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f68e8ec);
          puVar13 = (ulong *)(lVar17 + 0x48);
          uVar18 = uVar19;
          do {
            if (((*puVar13 ^ *(ulong *)(lVar17 + 0x48)) &
                ~(-1L << ((ulong)*(byte *)(lVar17 + 0x45) & 0x3f))) != 0) goto LAB_109f82764;
            uVar18 = uVar18 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar18 != 0);
          uVar19 = 1;
        }
LAB_109f82764:
        if (uVar12 < 6) {
          if (uVar12 == 2) {
            uVar18 = 0;
            do {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f6296b2);
              uVar18 = uVar18 + 1;
            } while (uVar19 != uVar18);
          }
          else {
            if (uVar12 != 4) {
LAB_109f8287c:
              FUN_109f82f70(auStack_108,uVar12);
              FUN_109f7d45c(auStack_90,&UNK_10f6295f8);
              FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95c28);
LAB_109f82918:
              *(undefined4 *)param_1 = (undefined4)lStack_c0;
              uVar8 = CONCAT17(uStack_a9,uStack_b0);
              goto LAB_109f82b94;
            }
            uVar18 = 0;
            do {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f6296a7);
              uVar18 = uVar18 + 1;
            } while (uVar19 != uVar18);
          }
        }
        else if (uVar12 == 0x80) {
          if ((*(byte *)(*(long *)(param_4 + 0x160) + 0x43a) & 1) == 0) {
            uVar15 = *(uint *)(*(long *)(param_2 + 0x30) + 0xe8);
            bVar5 = 0x81 < uVar15;
            if (*(char *)(*(long *)(param_2 + 0x30) + 0xe4) == '\x01') {
              bVar5 = 299 < uVar15;
            }
          }
          else {
            bVar5 = true;
          }
          uVar18 = 0;
          cVar4 = *(char *)(lVar17 + 0x45);
          do {
            dVar14 = *(double *)(lVar17 + 0x48 + uVar18 * 8);
            fVar20 = SUB84(dVar14,0);
            if (cVar4 == '@') {
              fVar20 = (float)dVar14;
            }
            else if (cVar4 != ' ') {
              fVar21 = (float)(((uint)fVar20 & 0x7fff) << 0xd) * 5.192297e+33;
              if (65536.0 <= fVar21) {
                fVar21 = (float)((uint)fVar21 | 0x7f800000);
              }
              fVar20 = (float)((uint)fVar21 | ((uint)fVar20 >> 0xf) << 0x1f);
            }
            if ((uint)ABS(fVar20) < 0x7f800000) {
              if ((float)(int)fVar20 == fVar20) {
                pcVar16 = *(code **)(*param_3 + 0x18);
                puVar9 = &UNK_10f629696;
              }
              else {
                pcVar16 = *(code **)(*param_3 + 0x18);
                puVar9 = &UNK_10f62969f;
              }
              (*pcVar16)(param_3,puVar9);
            }
            else if (bVar5) {
              (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f62964f);
            }
            else {
              if (NAN(fVar20)) {
                pcVar16 = *(code **)(*param_3 + 0x18);
                puVar9 = &UNK_10f62966b;
              }
              else {
                puVar9 = &UNK_10f629679;
                if (fVar20 <= 0.0) {
                  puVar9 = &UNK_10f629687;
                }
                pcVar16 = *(code **)(*param_3 + 0x18);
              }
              (*pcVar16)(param_3,puVar9);
            }
            uVar18 = uVar18 + 1;
          } while (uVar19 != uVar18);
        }
        else {
          if (uVar12 != 6) goto LAB_109f8287c;
          do {
            (**(code **)(*param_3 + 0x18))(param_3,&UNK_10f48da3e);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (bVar3 < 2) goto LAB_109f82294;
        pcVar16 = *(code **)(*param_3 + 0x18);
        puVar9 = &DAT_10f684600;
LAB_109f82a20:
        (*pcVar16)(param_3,puVar9);
LAB_109f82294:
        if (bVar6) {
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f684600);
        }
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 1;
        return;
      }
      if (iVar2 == 0) {
        if (*(int *)(lVar17 + 0x28) == 0x154) {
          FUN_109f8808c(auStack_1c8,param_2,param_3,param_4,lVar17,0,uVar19);
          if (((bStack_1a0 & 1) == 0) && (cStack_1a9 < '\0')) {
            __ZdlPv(uStack_1c0);
          }
          goto LAB_109f82294;
        }
        lStack_c0 = lVar17 + 0x30;
        FUN_109f73558(param_4 + 0xd8,&lStack_c0);
        pcVar16 = *(code **)(*param_3 + 0x18);
        puVar9 = &UNK_10f62aa0c;
LAB_109f824c0:
        (*pcVar16)(param_3,puVar9);
        goto LAB_109f82294;
      }
      if (iVar2 != 1) goto LAB_109f8222c;
      iVar2 = *(int *)(lVar17 + 0x28);
      if (iVar2 < 3) {
        if (iVar2 == 0) {
          uVar8 = *(undefined8 *)(lVar17 + 0x38);
          FUN_109f7c628(uVar8,param_4);
          (**(code **)(*param_3 + 0x10))(param_3,uVar8,param_4);
          goto LAB_109f82294;
        }
        if (iVar2 != 1) {
LAB_109f8292c:
          FUN_109f88fa0(auStack_108);
          FUN_109f7d45c(auStack_90,&UNK_10f62a9ec);
          FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95bf8);
          *(undefined4 *)param_1 = (undefined4)lStack_c0;
          uVar8 = CONCAT17(uStack_a9,uStack_b0);
LAB_109f82b94:
          param_1[2] = uVar8;
          param_1[1] = uStack_b8;
          param_1[3] = CONCAT17(uStack_a1,uStack_a8);
          param_1[4] = uStack_a0;
          *(undefined1 *)(param_1 + 5) = 0;
          return;
        }
LAB_109f825d0:
        if (*(long **)(lVar17 + 0x50) == (long *)0x0) {
          func_0x000107c31940(auStack_90,&UNK_10f62a9be);
          FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95bc8);
        }
        else {
          if (**(long **)(lVar17 + 0x50) != 0) {
            FUN_109f81fc4(auStack_168,param_2,param_3,param_4,lVar17 + 0x38,uVar19);
            if (((bStack_140 & 1) == 0) && (cStack_149 < '\0')) {
              __ZdlPv(uStack_160);
            }
            if ((*(int *)(**(long **)(lVar17 + 0x50) + 0x18) == 1) &&
               (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) == 4)) {
              lVar11 = *(long *)(param_4 + 0x160) + 0x400;
              func_0x0001072720a4(lVar11,*(long *)(**(long **)(lVar17 + 0x50) + 0x38) + 0x34);
              if (lVar11 != 0) goto LAB_109f82294;
            }
            lVar11 = **(long **)(lVar17 + 0x70);
            if (*(int *)(lVar11 + 0x18) == 5) {
              func_0x000109f7b01c(*(undefined1 *)(lVar11 + 0x45),*(undefined8 *)(lVar11 + 0x48));
              pcVar16 = *(code **)(*param_3 + 0x18);
              puVar9 = &UNK_10f629640;
            }
            else {
              uVar19 = param_2;
              func_0x000109f70334(param_2,param_3,param_4);
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f62a9e8);
              FUN_109f81fc4(auStack_198,param_2,param_3,param_4,lVar17 + 0x58,uVar19);
              if (((bStack_170 & 1) == 0) && (cStack_179 < '\0')) {
                __ZdlPv(uStack_190);
              }
              pcVar16 = *(code **)(*param_3 + 0x18);
              puVar9 = &DAT_10f62a9ea;
            }
            goto LAB_109f82a20;
          }
          func_0x000107c31940(auStack_90,&UNK_10f629615);
          FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95be0);
        }
      }
      else {
        if (iVar2 == 3) goto LAB_109f825d0;
        if (iVar2 != 4) goto LAB_109f8292c;
        if (*(long **)(lVar17 + 0x50) == (long *)0x0) {
          func_0x000107c31940(auStack_90,&UNK_10f62a9be);
          FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95b98);
        }
        else {
          if (**(long **)(lVar17 + 0x50) != 0) {
            FUN_109f81fc4(auStack_138,param_2,param_3,param_4,lVar17 + 0x38,uVar19);
            if (((bStack_110 & 1) == 0) && (cStack_119 < '\0')) {
              __ZdlPv(uStack_130);
            }
            (**(code **)(*param_3 + 0x18))(param_3,&DAT_10f62a9de);
            pcVar16 = *(code **)(*param_3 + 0x18);
            puVar9 = &UNK_10f625a3f;
            goto LAB_109f824c0;
          }
          func_0x000107c31940(auStack_90,&UNK_10f629615);
          FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95bb0);
        }
      }
      *(undefined4 *)param_1 = (undefined4)lStack_c0;
      uVar8 = CONCAT17(uStack_a9,uStack_b0);
      goto LAB_109f82118;
    }
    func_0x000107c31940(auStack_90,&UNK_10f62a99c);
    FUN_109f76188(&lStack_c0,auStack_90,2,&PTR_DAT_110b95b68);
  }
  *(undefined4 *)param_1 = (undefined4)lStack_c0;
  uVar8 = CONCAT17(uStack_a9,uStack_b0);
LAB_109f82118:
  param_1[2] = uVar8;
  param_1[1] = uStack_b8;
  param_1[3] = CONCAT17(uStack_a1,uStack_a8);
  param_1[4] = uStack_a0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 109f88e38; end: 109f88f9f;  */

void FUN_109f88e38(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  byte bStack_38;
  
  param_6 = param_6 & 0x86;
  FUN_109f80034(auStack_60);
  if ((bStack_38 & 1) == 0) {
    *(undefined4 *)param_1 = auStack_60[0];
    param_1[1] = uStack_58;
    param_1[2] = CONCAT17(uStack_49,uStack_50);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_48,uStack_49);
    *(undefined1 *)((long)param_1 + 0x1f) = uStack_41;
    param_1[4] = uStack_40;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    if (param_6 == 4) {
      puVar1 = &UNK_10f62936b;
    }
    else if (param_6 == 6) {
      puVar1 = &UNK_10f629359;
    }
    else if (param_6 == 0x80) {
      puVar1 = &UNK_10f629363;
    }
    else {
      if (param_6 != 2) {
        func_0x000107c31940(auStack_78,&UNK_10f629377);
        FUN_109f76188(auStack_60,auStack_78,2,&PTR_DAT_110b95940);
        *(undefined4 *)param_1 = auStack_60[0];
        param_1[2] = CONCAT17(uStack_49,uStack_50);
        param_1[1] = uStack_58;
        param_1[3] = CONCAT17(uStack_41,uStack_48);
        param_1[4] = uStack_40;
        *(undefined1 *)(param_1 + 5) = 0;
        if (-1 < cStack_61) {
          return;
        }
        __ZdlPv(auStack_78[0]);
        return;
      }
      puVar1 = &UNK_10f62943c;
    }
    (**(code **)(*param_3 + 0x18))(param_3,puVar1);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



/* Entry: 109f88fa0; end: 109f8904b;  */

void FUN_109f88fa0(uint *param_1,ulong param_2,uint **param_3,uint **param_4,char *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint **ppuVar13;
  uint **unaff_x21;
  undefined *puVar14;
  char *unaff_x22;
  char *pcVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 auStack_150 [2];
  char cStack_139;
  uint auStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char *pcStack_110;
  uint **ppuStack_108;
  uint **ppuStack_100;
  uint *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  uint auStack_d8 [2];
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  byte bStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  char cStack_79;
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (5 < (uint)param_2) {
    ppuVar13 = (uint **)0x0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
LAB_109f89034:
    *(undefined1 *)((long)param_1 + (long)ppuVar13) = 0;
    return;
  }
  ppuVar13 = *(uint ***)(&UNK_110b95c48 + (param_2 & 0xffffffff) * 0x10);
  if (ppuVar13 < (uint **)0x7ffffffffffffff8) {
    puVar14 = (&PTR_DAT_110b95c40)[(param_2 & 0xffffffff) * 2];
    if (ppuVar13 < (uint **)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)ppuVar13;
      puVar4 = param_1;
      if (ppuVar13 == (uint **)0x0) goto LAB_109f89034;
    }
    else {
      puVar16 = (uint *)0x19;
      if (((ulong)ppuVar13 | 7) != 0x17) {
        puVar16 = (uint *)(((ulong)ppuVar13 | 7) + 1);
      }
      puVar4 = puVar16;
      __Znwm();
      *(uint ***)(param_1 + 2) = ppuVar13;
      *(ulong *)(param_1 + 4) = (ulong)puVar16 | 0x8000000000000000;
      *(uint **)param_1 = puVar4;
    }
    _memmove(puVar4,puVar14,ppuVar13);
    param_1 = puVar4;
    goto LAB_109f89034;
  }
  func_0x000104c4f6b8();
  pcStack_38 = FUN_109f8904c;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (uint **)**(undefined8 **)(param_5 + 0x98);
  ppuVar6 = ppuVar5;
  puStack_40 = &stack0xfffffffffffffff0;
  if (ppuVar5 == (uint **)0x0 || *(int *)(ppuVar5 + 3) != 1) {
    func_0x000107c31940(&puStack_a8,&UNK_10f6296b7);
    puVar16 = auStack_d8;
    ppuVar5 = &puStack_a8;
    ppuVar6 = (uint **)0x2;
    FUN_109f76188();
    param_3 = ppuVar13;
    param_4 = unaff_x21;
    param_5 = unaff_x22;
LAB_109f891dc:
    *param_1 = auStack_d8[0];
    *(ulong *)(param_1 + 4) = CONCAT17(uStack_c1,uStack_c8);
    *(undefined8 *)(param_1 + 2) = uStack_d0;
    *(ulong *)(param_1 + 6) = CONCAT17(uStack_b9,uStack_c0);
    *(undefined8 *)(param_1 + 8) = uStack_b8;
    *(undefined1 *)(param_1 + 10) = 0;
    puVar4 = puStack_a0;
    if (-1 < lStack_98) goto LAB_109f89208;
  }
  else {
    while (*(int *)(ppuVar6 + 5) != 0) {
      if (*(int *)(ppuVar6 + 5) == 5) goto LAB_109f89188;
      ppuVar6 = *(uint ***)ppuVar6[10];
      if (*(int *)(ppuVar6 + 3) != 1) {
        ppuVar6 = (uint **)0x0;
      }
    }
    puVar16 = ppuVar6[7];
    if (puVar16 == (uint *)0x0) {
LAB_109f89188:
      func_0x000107c31940(&puStack_a8,&UNK_10f629774);
      puVar16 = auStack_d8;
      ppuVar5 = &puStack_a8;
      ppuVar6 = (uint **)0x2;
      FUN_109f76188();
      goto LAB_109f891dc;
    }
    if (((*(char *)((long)param_4[0x2c] + 0x43a) != '\x01') ||
        (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) != 4)) ||
       (((*(ulong *)(puVar16 + 8) ^ 0xffffffffffffffff) & 0x8000000008) != 0)) {
      func_0x000107c31940(&puStack_a8,&UNK_10f629783);
      puVar16 = auStack_d8;
      ppuVar5 = &puStack_a8;
      ppuVar6 = (uint **)0x2;
      FUN_109f76188();
      goto LAB_109f891dc;
    }
    puStack_a8 = (uint *)0x0;
    puStack_a0 = (uint *)0x0;
    lStack_98 = 0;
    ppuVar6 = &puStack_a8;
    FUN_109f8945c(auStack_d8);
    if ((bStack_b0 & 1) == 0) {
LAB_109f8939c:
      *param_1 = auStack_d8[0];
      *(undefined8 *)(param_1 + 2) = uStack_d0;
      *(ulong *)(param_1 + 4) = CONCAT17(uStack_c1,uStack_c8);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_c0,uStack_c1);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_b9;
      *(undefined8 *)(param_1 + 8) = uStack_b8;
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      if (((*(long *)(puVar16 + 4) != 0) && (*(char *)(*(long *)(puVar16 + 4) + 4) != '\x13')) &&
         (((long)puStack_a0 - (long)puStack_a8 == 4 && (*puStack_a8 == 0)))) {
        puStack_a0 = puStack_a8;
      }
      if ((ulong)((long)puStack_a0 - (long)puStack_a8) < 5) {
        (**(code **)(*param_3 + 6))(param_3,&UNK_10f629819);
        ppuVar5 = param_3;
        ppuVar6 = param_4;
        FUN_109f7d1d8(auStack_d8,param_3,param_4,puVar16,&puStack_a8);
        if ((bStack_b0 & 1) == 0) goto LAB_109f8939c;
        ppuVar5 = (uint **)&DAT_10f684600;
        (**(code **)(*param_3 + 6))(param_3);
        bVar2 = param_5[0x4c];
        uVar17 = (ulong)bVar2;
        if (bVar2 < 4) {
          ppuVar5 = param_3;
          ppuVar6 = param_4;
          func_0x000109f70334();
          uVar3 = (uint)param_2 & 0x86;
          if (((uVar3 == 2) || (uVar3 == 0x80)) || (uVar3 == 4)) {
            ppuVar5 = (uint **)&DAT_10f62a9de;
            (**(code **)(*param_3 + 6))(param_3);
            if (bVar2 != 0) {
              param_4 = (uint **)&DAT_10f54e1cd;
              pcVar15 = "xyzw";
              do {
                param_5 = pcVar15 + 1;
                lStack_e0 = (long)*pcVar15;
                ppuVar5 = (uint **)&DAT_10f54e1cd;
                (**(code **)(*param_3 + 6))(param_3);
                uVar17 = uVar17 - 1;
                pcVar15 = param_5;
              } while (uVar17 != 0);
            }
          }
        }
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 10) = 1;
      }
      else {
        func_0x000107c31940(&uStack_90,&UNK_10f6297c5);
        ppuVar5 = (uint **)&uStack_90;
        ppuVar6 = (uint **)0x5;
        FUN_109f76188(auStack_d8,ppuVar5,5,&PTR_DAT_110b95ce8);
        *param_1 = auStack_d8[0];
        *(ulong *)(param_1 + 4) = CONCAT17(uStack_c1,uStack_c8);
        *(undefined8 *)(param_1 + 2) = uStack_d0;
        *(ulong *)(param_1 + 6) = CONCAT17(uStack_b9,uStack_c0);
        *(undefined8 *)(param_1 + 8) = uStack_b8;
        *(undefined1 *)(param_1 + 10) = 0;
        if (cStack_79 < '\0') {
          __ZdlPv(CONCAT17(uStack_90._7_1_,(undefined7)uStack_90));
        }
      }
    }
    puVar16 = puStack_a8;
    puVar4 = puStack_a8;
    if (puStack_a8 == (uint *)0x0) goto LAB_109f89208;
  }
  puStack_a0 = puVar4;
  puVar16 = puStack_a8;
  __ZdlPv();
LAB_109f89208:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_a8 != (uint *)0x0) {
    puStack_a0 = puStack_a8;
    __ZdlPv();
  }
  puVar4 = puVar16;
  __Unwind_Resume();
  pcStack_e8 = FUN_109f8945c;
  ppuVar6[1] = *ppuVar6;
  pcStack_110 = param_5;
  ppuStack_108 = param_4;
  ppuStack_100 = param_3;
  puStack_f8 = puVar16;
  ppuStack_f0 = &puStack_40;
  if (ppuVar5 != (uint **)0x0) {
    do {
      iVar8 = *(int *)(ppuVar5 + 5);
      if (iVar8 < 3) {
        if (iVar8 == 1) goto LAB_109f894b8;
        if (iVar8 == 0) {
          puVar16 = *ppuVar6;
          puVar10 = ppuVar6[1] + -1;
          if (puVar16 != ppuVar6[1] && puVar16 < puVar10) {
            do {
              puVar12 = puVar16 + 1;
              uVar3 = *puVar16;
              *puVar16 = *puVar10;
              puVar11 = puVar10 + -1;
              *puVar10 = uVar3;
              puVar10 = puVar11;
              puVar16 = puVar12;
            } while (puVar12 < puVar11);
          }
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[0] = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 10) = 1;
          return;
        }
LAB_109f8951c:
        if (iVar8 == 0) break;
      }
      else {
        if (iVar8 == 3) {
LAB_109f894b8:
          lVar9 = *(long *)ppuVar5[0xe];
          if (*(int *)(lVar9 + 0x18) == 5) {
            auStack_138[0] = (uint)*(undefined8 *)(lVar9 + 0x48);
            uVar3 = (*(byte *)(lVar9 + 0x45) & 0xaaaaaaaa) >> 1 |
                    (*(byte *)(lVar9 + 0x45) & 0x55555555) << 1;
            uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
            uVar7 = (uint)LZCOUNT((uVar3 >> 4 | (uVar3 & 0xf0f0f0f) << 4) << 0x18);
            uVar3 = auStack_138[0] & 0xff;
            if (uVar7 != 3) {
              uVar3 = auStack_138[0] & 0xffff;
            }
            uVar1 = auStack_138[0] & 1;
            if (uVar7 != 0) {
              uVar1 = uVar3;
            }
            if (uVar7 < 5) {
              auStack_138[0] = uVar1;
            }
            func_0x0001093aa148(ppuVar6,auStack_138);
            iVar8 = *(int *)(ppuVar5 + 5);
            goto LAB_109f8951c;
          }
          func_0x000107c31940(auStack_150,&UNK_10f629902);
          FUN_109f76188(auStack_138,auStack_150,5,&PTR_DAT_110b95d18);
          goto LAB_109f8955c;
        }
        if (iVar8 != 5) {
          if (iVar8 != 4) goto LAB_109f8951c;
          func_0x000107c31940(auStack_150,&UNK_10f629826);
          FUN_109f76188(auStack_138,auStack_150,5,&PTR_DAT_110b95d00);
          goto LAB_109f8955c;
        }
      }
      ppuVar5 = *(uint ***)ppuVar5[10];
    } while (*(int *)(ppuVar5 + 3) == 1);
  }
  func_0x000107c31940(auStack_150,&UNK_10f629944);
  FUN_109f76188(auStack_138,auStack_150,2,&PTR_DAT_110b95d30);
LAB_109f8955c:
  *puVar4 = auStack_138[0];
  *(undefined8 *)(puVar4 + 4) = uStack_128;
  *(undefined8 *)(puVar4 + 2) = uStack_130;
  *(undefined8 *)(puVar4 + 6) = uStack_120;
  *(undefined8 *)(puVar4 + 8) = uStack_118;
  *(undefined1 *)(puVar4 + 10) = 0;
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  return;
}



/* Entry: 109f8904c; end: 109f8945b;  */

void FUN_109f8904c(uint *param_1,long param_2,uint **param_3,uint **param_4,char *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint **unaff_x20;
  uint **unaff_x21;
  char *unaff_x22;
  char *pcVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 auStack_120 [2];
  char cStack_109;
  uint auStack_108 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  uint **ppuStack_d8;
  uint **ppuStack_d0;
  uint *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  uint auStack_a8 [2];
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  byte bStack_80;
  uint *puStack_78;
  uint *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (uint **)**(undefined8 **)(param_5 + 0x98);
  ppuVar6 = ppuVar5;
  if (ppuVar5 == (uint **)0x0 || *(int *)(ppuVar5 + 3) != 1) {
    func_0x000107c31940(&puStack_78,&UNK_10f6296b7);
    puVar14 = auStack_a8;
    ppuVar5 = &puStack_78;
    ppuVar6 = (uint **)0x2;
    FUN_109f76188();
    param_3 = unaff_x20;
    param_4 = unaff_x21;
    param_5 = unaff_x22;
LAB_109f891dc:
    *param_1 = auStack_a8[0];
    *(ulong *)(param_1 + 4) = CONCAT17(uStack_91,uStack_98);
    *(undefined8 *)(param_1 + 2) = uStack_a0;
    *(ulong *)(param_1 + 6) = CONCAT17(uStack_89,uStack_90);
    *(undefined8 *)(param_1 + 8) = uStack_88;
    *(undefined1 *)(param_1 + 10) = 0;
    puVar4 = puStack_70;
    if (-1 < lStack_68) goto LAB_109f89208;
  }
  else {
    while (*(int *)(ppuVar6 + 5) != 0) {
      if (*(int *)(ppuVar6 + 5) == 5) goto LAB_109f89188;
      ppuVar6 = *(uint ***)ppuVar6[10];
      if (*(int *)(ppuVar6 + 3) != 1) {
        ppuVar6 = (uint **)0x0;
      }
    }
    puVar14 = ppuVar6[7];
    if (puVar14 == (uint *)0x0) {
LAB_109f89188:
      func_0x000107c31940(&puStack_78,&UNK_10f629774);
      puVar14 = auStack_a8;
      ppuVar5 = &puStack_78;
      ppuVar6 = (uint **)0x2;
      FUN_109f76188();
      goto LAB_109f891dc;
    }
    if (((*(char *)((long)param_4[0x2c] + 0x43a) != '\x01') ||
        (*(int *)(*(long *)(param_2 + 0x30) + 0xf8) != 4)) ||
       (((*(ulong *)(puVar14 + 8) ^ 0xffffffffffffffff) & 0x8000000008) != 0)) {
      func_0x000107c31940(&puStack_78,&UNK_10f629783);
      puVar14 = auStack_a8;
      ppuVar5 = &puStack_78;
      ppuVar6 = (uint **)0x2;
      FUN_109f76188();
      goto LAB_109f891dc;
    }
    puStack_78 = (uint *)0x0;
    puStack_70 = (uint *)0x0;
    lStack_68 = 0;
    ppuVar6 = &puStack_78;
    FUN_109f8945c(auStack_a8);
    if ((bStack_80 & 1) == 0) {
LAB_109f8939c:
      *param_1 = auStack_a8[0];
      *(undefined8 *)(param_1 + 2) = uStack_a0;
      *(ulong *)(param_1 + 4) = CONCAT17(uStack_91,uStack_98);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_90,uStack_91);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_89;
      *(undefined8 *)(param_1 + 8) = uStack_88;
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else {
      if (((*(long *)(puVar14 + 4) != 0) && (*(char *)(*(long *)(puVar14 + 4) + 4) != '\x13')) &&
         (((long)puStack_70 - (long)puStack_78 == 4 && (*puStack_78 == 0)))) {
        puStack_70 = puStack_78;
      }
      if ((ulong)((long)puStack_70 - (long)puStack_78) < 5) {
        (**(code **)(*param_3 + 6))(param_3,&UNK_10f629819);
        ppuVar5 = param_3;
        ppuVar6 = param_4;
        FUN_109f7d1d8(auStack_a8,param_3,param_4,puVar14,&puStack_78);
        if ((bStack_80 & 1) == 0) goto LAB_109f8939c;
        ppuVar5 = (uint **)&DAT_10f684600;
        (**(code **)(*param_3 + 6))(param_3);
        bVar2 = param_5[0x4c];
        uVar15 = (ulong)bVar2;
        if (bVar2 < 4) {
          ppuVar5 = param_3;
          ppuVar6 = param_4;
          func_0x000109f70334();
          uVar3 = (uint)param_2 & 0x86;
          if (((uVar3 == 2) || (uVar3 == 0x80)) || (uVar3 == 4)) {
            ppuVar5 = (uint **)&DAT_10f62a9de;
            (**(code **)(*param_3 + 6))(param_3);
            if (bVar2 != 0) {
              param_4 = (uint **)&DAT_10f54e1cd;
              pcVar13 = "xyzw";
              do {
                param_5 = pcVar13 + 1;
                lStack_b0 = (long)*pcVar13;
                ppuVar5 = (uint **)&DAT_10f54e1cd;
                (**(code **)(*param_3 + 6))(param_3);
                uVar15 = uVar15 - 1;
                pcVar13 = param_5;
              } while (uVar15 != 0);
            }
          }
        }
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 10) = 1;
      }
      else {
        func_0x000107c31940(&uStack_60,&UNK_10f6297c5);
        ppuVar5 = (uint **)&uStack_60;
        ppuVar6 = (uint **)0x5;
        FUN_109f76188(auStack_a8,ppuVar5,5,&PTR_DAT_110b95ce8);
        *param_1 = auStack_a8[0];
        *(ulong *)(param_1 + 4) = CONCAT17(uStack_91,uStack_98);
        *(undefined8 *)(param_1 + 2) = uStack_a0;
        *(ulong *)(param_1 + 6) = CONCAT17(uStack_89,uStack_90);
        *(undefined8 *)(param_1 + 8) = uStack_88;
        *(undefined1 *)(param_1 + 10) = 0;
        if (cStack_49 < '\0') {
          __ZdlPv(CONCAT17(uStack_60._7_1_,(undefined7)uStack_60));
        }
      }
    }
    puVar14 = puStack_78;
    puVar4 = puStack_78;
    if (puStack_78 == (uint *)0x0) goto LAB_109f89208;
  }
  puStack_70 = puVar4;
  puVar14 = puStack_78;
  __ZdlPv();
LAB_109f89208:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_78 != (uint *)0x0) {
    puStack_70 = puStack_78;
    __ZdlPv();
  }
  puVar4 = puVar14;
  __Unwind_Resume();
  pcStack_b8 = FUN_109f8945c;
  ppuVar6[1] = *ppuVar6;
  pcStack_e0 = param_5;
  ppuStack_d8 = param_4;
  ppuStack_d0 = param_3;
  puStack_c8 = puVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (ppuVar5 != (uint **)0x0) {
    do {
      iVar8 = *(int *)(ppuVar5 + 5);
      if (iVar8 < 3) {
        if (iVar8 == 1) goto LAB_109f894b8;
        if (iVar8 == 0) {
          puVar14 = *ppuVar6;
          puVar10 = ppuVar6[1] + -1;
          if (puVar14 != ppuVar6[1] && puVar14 < puVar10) {
            do {
              puVar12 = puVar14 + 1;
              uVar3 = *puVar14;
              *puVar14 = *puVar10;
              puVar11 = puVar10 + -1;
              *puVar10 = uVar3;
              puVar10 = puVar11;
              puVar14 = puVar12;
            } while (puVar12 < puVar11);
          }
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[0] = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 10) = 1;
          return;
        }
LAB_109f8951c:
        if (iVar8 == 0) break;
      }
      else {
        if (iVar8 == 3) {
LAB_109f894b8:
          lVar9 = *(long *)ppuVar5[0xe];
          if (*(int *)(lVar9 + 0x18) == 5) {
            auStack_108[0] = (uint)*(undefined8 *)(lVar9 + 0x48);
            uVar3 = (*(byte *)(lVar9 + 0x45) & 0xaaaaaaaa) >> 1 |
                    (*(byte *)(lVar9 + 0x45) & 0x55555555) << 1;
            uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
            uVar7 = (uint)LZCOUNT((uVar3 >> 4 | (uVar3 & 0xf0f0f0f) << 4) << 0x18);
            uVar3 = auStack_108[0] & 0xff;
            if (uVar7 != 3) {
              uVar3 = auStack_108[0] & 0xffff;
            }
            uVar1 = auStack_108[0] & 1;
            if (uVar7 != 0) {
              uVar1 = uVar3;
            }
            if (uVar7 < 5) {
              auStack_108[0] = uVar1;
            }
            func_0x0001093aa148(ppuVar6,auStack_108);
            iVar8 = *(int *)(ppuVar5 + 5);
            goto LAB_109f8951c;
          }
          func_0x000107c31940(auStack_120,&UNK_10f629902);
          FUN_109f76188(auStack_108,auStack_120,5,&PTR_DAT_110b95d18);
          goto LAB_109f8955c;
        }
        if (iVar8 != 5) {
          if (iVar8 != 4) goto LAB_109f8951c;
          func_0x000107c31940(auStack_120,&UNK_10f629826);
          FUN_109f76188(auStack_108,auStack_120,5,&PTR_DAT_110b95d00);
          goto LAB_109f8955c;
        }
      }
      ppuVar5 = *(uint ***)ppuVar5[10];
    } while (*(int *)(ppuVar5 + 3) == 1);
  }
  func_0x000107c31940(auStack_120,&UNK_10f629944);
  FUN_109f76188(auStack_108,auStack_120,2,&PTR_DAT_110b95d30);
LAB_109f8955c:
  *puVar4 = auStack_108[0];
  *(undefined8 *)(puVar4 + 4) = uStack_f8;
  *(undefined8 *)(puVar4 + 2) = uStack_100;
  *(undefined8 *)(puVar4 + 6) = uStack_f0;
  *(undefined8 *)(puVar4 + 8) = uStack_e8;
  *(undefined1 *)(puVar4 + 10) = 0;
  if (cStack_109 < '\0') {
    __ZdlPv(auStack_120[0]);
  }
  return;
}



/* Entry: 109f8945c; end: 109f89663;  */

void FUN_109f8945c(uint *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 auStack_70 [2];
  char cStack_59;
  uint auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_3[1] = *param_3;
  if (param_2 != 0) {
    do {
      iVar6 = *(int *)(param_2 + 0x28);
      if (iVar6 < 3) {
        if (iVar6 == 1) goto LAB_109f894b8;
        if (iVar6 == 0) {
          puVar2 = (undefined4 *)*param_3;
          puVar8 = (undefined4 *)param_3[1] + -1;
          if (puVar2 != (undefined4 *)param_3[1] && puVar2 < puVar8) {
            do {
              puVar10 = puVar2 + 1;
              uVar3 = *puVar2;
              *puVar2 = *puVar8;
              puVar9 = puVar8 + -1;
              *puVar8 = uVar3;
              puVar8 = puVar9;
              puVar2 = puVar10;
            } while (puVar10 < puVar9);
          }
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 10) = 1;
          return;
        }
LAB_109f8951c:
        if (iVar6 == 0) break;
      }
      else {
        if (iVar6 == 3) {
LAB_109f894b8:
          lVar7 = **(long **)(param_2 + 0x70);
          if (*(int *)(lVar7 + 0x18) == 5) {
            auStack_58[0] = (uint)*(undefined8 *)(lVar7 + 0x48);
            uVar4 = (*(byte *)(lVar7 + 0x45) & 0xaaaaaaaa) >> 1 |
                    (*(byte *)(lVar7 + 0x45) & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar5 = (uint)LZCOUNT((uVar4 >> 4 | (uVar4 & 0xf0f0f0f) << 4) << 0x18);
            uVar4 = auStack_58[0] & 0xff;
            if (uVar5 != 3) {
              uVar4 = auStack_58[0] & 0xffff;
            }
            uVar1 = auStack_58[0] & 1;
            if (uVar5 != 0) {
              uVar1 = uVar4;
            }
            if (uVar5 < 5) {
              auStack_58[0] = uVar1;
            }
            func_0x0001093aa148(param_3,auStack_58);
            iVar6 = *(int *)(param_2 + 0x28);
            goto LAB_109f8951c;
          }
          func_0x000107c31940(auStack_70,&UNK_10f629902);
          FUN_109f76188(auStack_58,auStack_70,5,&PTR_DAT_110b95d18);
          goto LAB_109f8955c;
        }
        if (iVar6 != 5) {
          if (iVar6 != 4) goto LAB_109f8951c;
          func_0x000107c31940(auStack_70,&UNK_10f629826);
          FUN_109f76188(auStack_58,auStack_70,5,&PTR_DAT_110b95d00);
          goto LAB_109f8955c;
        }
      }
      param_2 = **(long **)(param_2 + 0x50);
    } while (*(int *)(param_2 + 0x18) == 1);
  }
  func_0x000107c31940(auStack_70,&UNK_10f629944);
  FUN_109f76188(auStack_58,auStack_70,2,&PTR_DAT_110b95d30);
LAB_109f8955c:
  *param_1 = auStack_58[0];
  *(undefined8 *)(param_1 + 4) = uStack_48;
  *(undefined8 *)(param_1 + 2) = uStack_50;
  *(undefined8 *)(param_1 + 6) = uStack_40;
  *(undefined8 *)(param_1 + 8) = uStack_38;
  *(undefined1 *)(param_1 + 10) = 0;
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 109f89664; end: 109f89f97;  */

void FUN_109f89664(undefined8 *param_1,ulong *****param_2,long *param_3,long *param_4)

{
  ulong *****pppppuVar1;
  ulong *****pppppuVar2;
  uint uVar3;
  uint uVar4;
  ulong ***pppuVar5;
  code *pcVar6;
  bool bVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  long lVar17;
  ulong uVar18;
  ulong ****ppppuVar19;
  ulong ****ppppuVar20;
  ulong *****pppppuVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 uVar25;
  int iVar26;
  ulong *****pppppuVar27;
  ulong *****pppppuVar28;
  undefined8 uVar29;
  ulong *****pppppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong ***pppuStack_d8;
  ulong ***pppuStack_d0;
  ulong ***pppuStack_c8;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  ulong ****ppppuStack_98;
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_2[5] + 0xd) & 1) != 0) {
    do {
      if ((long *)*param_3 == (long *)0x0) goto LAB_109f89e74;
      plVar11 = param_3 + 4;
      param_3 = (long *)*param_3;
    } while (-1 < (char)*plVar11);
    plVar11 = (long *)*param_4;
    if (plVar11 != (long *)0x0) {
      pppppuVar1 = param_2 + 0xe;
      pppppuVar2 = param_2 + 0x10;
      pppppuVar16 = param_2;
      do {
        if ((param_4[6] != 0) && (lVar17 = *(long *)(param_4[6] + 0x30), lVar17 != 0)) {
          do {
            plVar11 = *(long **)(lVar17 + 0x20);
            for (plVar13 = (long *)**(long **)(lVar17 + 0x20); plVar13 != (long *)0x0;
                plVar13 = (long *)*plVar13) {
              if (((*(int *)(plVar11 + 3) == 4) && (*(int *)(plVar11 + 5) == 0x112)) &&
                 (puVar23 = *(undefined8 **)plVar11[0x13],
                 puVar23 != (undefined8 *)0x0 && *(int *)(puVar23 + 3) == 1)) {
                pppppuVar21 = (ulong *****)0x0;
                pppppuVar27 = (ulong *****)0x0;
                pppppuVar30 = (ulong *****)0x0;
                ppppuStack_98 = (ulong ****)0x0;
                ppppuStack_90 = (ulong ****)0x0;
                iVar26 = 1000;
                ppppuStack_88 = (ulong ****)0x0;
                do {
                  iVar10 = *(int *)(puVar23 + 5);
                  pppppuVar28 = pppppuVar27;
                  pppppuVar15 = pppppuVar21;
                  if (iVar10 < 3) {
                    if (iVar10 == 1) goto LAB_109f89780;
                    if (iVar10 != 0) goto LAB_109f8984c;
                    lVar24 = puVar23[7];
                    ppppuStack_98 = (ulong ****)pppppuVar27;
                    ppppuStack_90 = (ulong ****)pppppuVar21;
                    ppppuStack_88 = (ulong ****)pppppuVar30;
                    if ((lVar24 != 0) &&
                       ((*(ulong *)(lVar24 + 0x20) & 0x1fffff) == 0x80 && pppppuVar27 != pppppuVar21
                       )) {
                      pppppuVar16 = pppppuVar21 + -1;
                      if (pppppuVar27 < pppppuVar16) {
                        pppppuVar21 = pppppuVar27 + 1;
                        do {
                          uVar4 = *(uint *)((long)pppppuVar21 + -4);
                          uVar14 = (ulong)uVar4;
                          uVar3 = *(uint *)((long)pppppuVar16 + 4);
                          if (uVar4 != 0xffffffff || uVar3 != 0xffffffff) {
                            pppppuVar30 = pppppuVar21 + -1;
                            if (uVar4 == 0xffffffff) {
                              uVar14 = 0xffffffffffffffff;
                            }
                            bVar7 = uVar4 == 0xffffffff;
                            if (uVar3 != 0xffffffff) {
                              bVar7 = uVar14 == uVar3;
                            }
                            if (bVar7) {
                              (*(code *)(&PTR_FUN_110b95db8)[uVar14])
                                        (&ppppuStack_c0,pppppuVar30,pppppuVar16);
                            }
                            else {
                              ppppuVar8 = *pppppuVar16;
                              *(undefined4 *)((long)pppppuVar16 + 4) = 0xffffffff;
                              uVar3 = *(uint *)((long)pppppuVar21 + -4);
                              pppuStack_d8 = (ulong ***)ppppuVar8;
                              if (uVar3 != 0xffffffff) {
                                ppppuStack_c0 = (ulong ****)pppppuVar16;
                                (*(code *)(&PTR_DAT_110b95dc8)[uVar3])(&ppppuStack_c0,pppppuVar30);
                                *(uint *)((long)pppppuVar16 + 4) = uVar3;
                              }
                              *(undefined4 *)((long)pppppuVar21 + -4) = 0xffffffff;
                              if ((ulong)ppppuVar8 >> 0x20 != 0xffffffff) {
                                ppppuStack_c0 = (ulong ****)pppppuVar30;
                                (*(code *)(&PTR_DAT_110b95dc8)[(ulong)ppppuVar8 >> 0x20])
                                          (&ppppuStack_c0,&pppuStack_d8);
                                *(int *)((long)pppppuVar21 + -4) = (int)((ulong)ppppuVar8 >> 0x20);
                              }
                            }
                          }
                          pppppuVar16 = pppppuVar16 + -1;
                          bVar7 = pppppuVar21 < pppppuVar16;
                          pppppuVar21 = pppppuVar21 + 1;
                        } while (bVar7);
                      }
                      func_0x000107c31940(&pppuStack_d8,*(undefined8 *)(lVar24 + 0x18));
                      pppppuVar16 = pppppuVar1;
                      func_0x000107c31944(pppppuVar1,&pppuStack_d8);
                      pppppuVar30 = (ulong *****)param_2[0xf];
                      if (pppppuVar30 == (ulong *****)0x0) {
LAB_109f89af8:
                        pppppuVar27 = (ulong *****)0x40;
                        __Znwm();
                        pppuVar5 = pppuStack_c8;
                        uStack_b0 = 1;
                        uStack_a9 = 0;
                        *pppppuVar27 = (ulong ****)0x0;
                        pppppuVar27[1] = (ulong ****)pppppuVar16;
                        pppppuVar27[3] = (ulong ****)pppuStack_d0;
                        pppppuVar27[2] = (ulong ****)pppuStack_d8;
                        pppuStack_d8 = (ulong ***)0x0;
                        pppuStack_d0 = (ulong ***)0x0;
                        pppuStack_c8 = (ulong ***)0x0;
                        pppppuVar27[4] = (ulong ****)pppuVar5;
                        pppppuVar27[5] = (ulong ****)0x0;
                        pppppuVar27[6] = (ulong ****)0x0;
                        pppppuVar27[7] = (ulong ****)0x0;
                        ppppuStack_c0 = (ulong ****)pppppuVar27;
                        ppppuStack_b8 = (ulong ****)pppppuVar1;
                        if ((pppppuVar30 != (ulong *****)0x0) &&
                           ((float)((long)param_2[0x11] + 1) <=
                            *(float *)(param_2 + 0x12) * (float)pppppuVar30)) {
LAB_109f89d40:
                          ppppuVar9 = *pppppuVar1;
                          ppppuVar8 = (ulong ****)ppppuVar9[(long)pppppuVar21];
                          if (ppppuVar8 == (ulong ****)0x0) {
                            *pppppuVar27 = *pppppuVar2;
                            *pppppuVar2 = (ulong ****)pppppuVar27;
                            ppppuVar9[(long)pppppuVar21] = (ulong ***)pppppuVar2;
                            if (*pppppuVar27 != (ulong ****)0x0) {
                              pppppuVar16 = (ulong *****)(*pppppuVar27)[1];
                              if (((ulong)pppppuVar30 & (long)pppppuVar30 - 1U) == 0) {
                                pppppuVar16 = (ulong *****)
                                              ((ulong)pppppuVar16 & (long)pppppuVar30 - 1U);
                              }
                              else if (pppppuVar30 <= pppppuVar16) {
                                uVar14 = 0;
                                if (pppppuVar30 != (ulong *****)0x0) {
                                  uVar14 = (ulong)pppppuVar16 / (ulong)pppppuVar30;
                                }
                                pppppuVar16 = (ulong *****)
                                              ((long)pppppuVar16 - uVar14 * (long)pppppuVar30);
                              }
                              ppppuVar8 = *pppppuVar1 + (long)pppppuVar16;
                              goto LAB_109f89dac;
                            }
                          }
                          else {
                            *pppppuVar27 = (ulong ****)*ppppuVar8;
LAB_109f89dac:
                            *ppppuVar8 = (ulong ***)pppppuVar27;
                          }
                          param_2[0x11] = (ulong ****)((long)param_2[0x11] + 1);
                          goto LAB_109f89dc0;
                        }
                        uVar14 = 1;
                        if ((ulong *****)0x2 < pppppuVar30) {
                          uVar14 = (ulong)(((ulong)pppppuVar30 & (long)pppppuVar30 - 1U) != 0);
                        }
                        pppppuVar21 = (ulong *****)(uVar14 | (long)pppppuVar30 << 1);
                        pppppuVar30 = (ulong *****)
                                      (long)((float)((long)param_2[0x11] + 1) /
                                            *(float *)(param_2 + 0x12));
                        if (pppppuVar21 <= pppppuVar30) {
                          pppppuVar21 = pppppuVar30;
                        }
                        if ((long)pppppuVar21 - 1U == 0) {
                          pppppuVar21 = (ulong *****)0x2;
                        }
                        else if (((ulong)pppppuVar21 & (long)pppppuVar21 - 1U) != 0) {
                          __ZNSt3__112__next_primeEm();
                        }
                        pppppuVar30 = (ulong *****)param_2[0xf];
                        if (pppppuVar21 <= pppppuVar30) {
                          if (pppppuVar21 < pppppuVar30) {
                            pppppuVar15 = (ulong *****)
                                          (long)((float)param_2[0x11] / *(float *)(param_2 + 0x12));
                            if ((pppppuVar30 < (ulong *****)0x3) ||
                               (((ulong)pppppuVar30 & (long)pppppuVar30 - 1U) != 0)) {
                              __ZNSt3__112__next_primeEm();
                            }
                            else if ((ulong *****)0x1 < pppppuVar15) {
                              pppppuVar15 = (ulong *****)
                                            (1L << (-LZCOUNT((long)pppppuVar15 + -1) & 0x3fU));
                            }
                            if (pppppuVar21 <= pppppuVar15) {
                              pppppuVar21 = pppppuVar15;
                            }
                            if (pppppuVar21 < pppppuVar30) {
                              if (pppppuVar21 != (ulong *****)0x0) goto LAB_109f89bb4;
                              ppppuVar8 = *pppppuVar1;
                              *pppppuVar1 = (ulong ****)0x0;
                              if (ppppuVar8 != (ulong ****)0x0) {
                                __ZdlPv();
                              }
                              pppppuVar30 = (ulong *****)0x0;
                              param_2[0xf] = (ulong ****)0x0;
                            }
                            else {
                              pppppuVar30 = (ulong *****)param_2[0xf];
                            }
                          }
LAB_109f89d14:
                          if (((ulong)pppppuVar30 & (long)pppppuVar30 - 1U) == 0) {
                            pppppuVar21 = (ulong *****)((long)pppppuVar30 - 1U & (ulong)pppppuVar16)
                            ;
                          }
                          else {
                            pppppuVar21 = pppppuVar16;
                            if (pppppuVar30 <= pppppuVar16) {
                              uVar14 = 0;
                              if (pppppuVar30 != (ulong *****)0x0) {
                                uVar14 = (ulong)pppppuVar16 / (ulong)pppppuVar30;
                              }
                              pppppuVar21 = (ulong *****)
                                            ((long)pppppuVar16 - uVar14 * (long)pppppuVar30);
                            }
                          }
                          goto LAB_109f89d40;
                        }
LAB_109f89bb4:
                        pppppuVar30 = pppppuVar21;
                        if ((ulong)pppppuVar30 >> 0x3d == 0) {
                          ppppuVar8 = (ulong ****)((long)pppppuVar30 << 3);
                          __Znwm();
                          ppppuVar9 = *pppppuVar1;
                          *pppppuVar1 = ppppuVar8;
                          if (ppppuVar9 != (ulong ****)0x0) {
                            __ZdlPv();
                          }
                          pppppuVar21 = (ulong *****)0x0;
                          param_2[0xf] = (ulong ****)pppppuVar30;
                          do {
                            (*pppppuVar1)[(long)pppppuVar21] = (ulong ***)0x0;
                            pppppuVar21 = (ulong *****)((long)pppppuVar21 + 1);
                          } while (pppppuVar30 != pppppuVar21);
                          ppppuVar8 = *pppppuVar2;
                          if (ppppuVar8 != (ulong ****)0x0) {
                            pppppuVar21 = (ulong *****)ppppuVar8[1];
                            uVar14 = (long)pppppuVar30 - 1;
                            if (((ulong)pppppuVar30 & uVar14) == 0) {
                              pppppuVar21 = (ulong *****)((ulong)pppppuVar21 & uVar14);
                            }
                            else if (pppppuVar30 <= pppppuVar21) {
                              uVar18 = 0;
                              if (pppppuVar30 != (ulong *****)0x0) {
                                uVar18 = (ulong)pppppuVar21 / (ulong)pppppuVar30;
                              }
                              pppppuVar21 = (ulong *****)
                                            ((long)pppppuVar21 - uVar18 * (long)pppppuVar30);
                            }
                            (*pppppuVar1)[(long)pppppuVar21] = (ulong ***)pppppuVar2;
                            ppppuVar9 = (ulong ****)*ppppuVar8;
                            while (ppppuVar9 != (ulong ****)0x0) {
                              pppppuVar15 = (ulong *****)ppppuVar9[1];
                              if (((ulong)pppppuVar30 & uVar14) == 0) {
                                pppppuVar15 = (ulong *****)((ulong)pppppuVar15 & uVar14);
                              }
                              else if (pppppuVar30 <= pppppuVar15) {
                                uVar18 = 0;
                                if (pppppuVar30 != (ulong *****)0x0) {
                                  uVar18 = (ulong)pppppuVar15 / (ulong)pppppuVar30;
                                }
                                pppppuVar15 = (ulong *****)
                                              ((long)pppppuVar15 - uVar18 * (long)pppppuVar30);
                              }
                              ppppuVar19 = ppppuVar9;
                              if (pppppuVar15 != pppppuVar21) {
                                ppppuVar20 = *pppppuVar1;
                                if (ppppuVar20[(long)pppppuVar15] == (ulong ***)0x0) {
                                  ppppuVar20[(long)pppppuVar15] = (ulong ***)ppppuVar8;
                                  pppppuVar21 = pppppuVar15;
                                }
                                else {
                                  *ppppuVar8 = *ppppuVar9;
                                  *ppppuVar9 = (ulong ***)*ppppuVar20[(long)pppppuVar15];
                                  *ppppuVar20[(long)pppppuVar15] = (ulong **)ppppuVar9;
                                  ppppuVar19 = ppppuVar8;
                                }
                              }
                              ppppuVar8 = ppppuVar19;
                              ppppuVar9 = (ulong ****)*ppppuVar19;
                            }
                          }
                          goto LAB_109f89d14;
                        }
                        goto LAB_109f89f0c;
                      }
                      uVar14 = (long)pppppuVar30 - 1;
                      if (((ulong)pppppuVar30 & uVar14) == 0) {
                        pppppuVar21 = (ulong *****)(uVar14 & (ulong)pppppuVar16);
                      }
                      else {
                        pppppuVar21 = pppppuVar16;
                        if (pppppuVar30 <= pppppuVar16) {
                          uVar18 = 0;
                          if (pppppuVar30 != (ulong *****)0x0) {
                            uVar18 = (ulong)pppppuVar16 / (ulong)pppppuVar30;
                          }
                          pppppuVar21 = (ulong *****)
                                        ((long)pppppuVar16 - uVar18 * (long)pppppuVar30);
                        }
                      }
                      if ((*pppppuVar1)[(long)pppppuVar21] == (ulong ***)0x0) goto LAB_109f89af8;
                      pppppuVar27 = (ulong *****)*(*pppppuVar1)[(long)pppppuVar21];
                      while( true ) {
                        if (pppppuVar27 == (ulong *****)0x0) goto LAB_109f89af8;
                        pppppuVar15 = (ulong *****)pppppuVar27[1];
                        if (pppppuVar15 == pppppuVar16) break;
                        if (((ulong)pppppuVar30 & uVar14) == 0) {
                          pppppuVar15 = (ulong *****)((ulong)pppppuVar15 & uVar14);
                        }
                        else if (pppppuVar30 <= pppppuVar15) {
                          uVar18 = 0;
                          if (pppppuVar30 != (ulong *****)0x0) {
                            uVar18 = (ulong)pppppuVar15 / (ulong)pppppuVar30;
                          }
                          pppppuVar15 = (ulong *****)
                                        ((long)pppppuVar15 - uVar18 * (long)pppppuVar30);
                        }
                        if (pppppuVar15 != pppppuVar21) goto LAB_109f89af8;
LAB_109f89af0:
                        pppppuVar27 = (ulong *****)*pppppuVar27;
                      }
                      pppppuVar15 = pppppuVar1;
                      func_0x000104c4fbc4(pppppuVar1,pppppuVar27 + 2,&pppuStack_d8);
                      if (((ulong)pppppuVar15 & 1) == 0) goto LAB_109f89af0;
LAB_109f89dc0:
                      if ((long)pppuStack_c8 < 0) {
                        __ZdlPv(pppuStack_d8);
                      }
                      pppppuVar16 = &ppppuStack_98;
                      FUN_109f8b930(pppppuVar27 + 5,pppppuVar16,0);
                    }
                    uVar22 = 0;
                    pppppuVar21 = (ulong *****)0x0;
                    uVar25 = 0;
                    uVar29 = 0;
                    uStack_78 = 0;
                    uStack_80 = 0;
                    uStack_79 = 0;
                    bVar7 = true;
                    pppppuVar27 = (ulong *****)ppppuStack_98;
                    pppppuVar30 = (ulong *****)ppppuStack_90;
                    goto joined_r0x000109f89e00;
                  }
                  if (iVar10 == 3) {
LAB_109f89780:
                    if (pppppuVar21 < pppppuVar30) {
                      *(undefined4 *)((long)pppppuVar21 + 4) = 1;
                    }
                    else {
                      uVar14 = ((long)pppppuVar21 - (long)pppppuVar27 >> 3) + 1;
                      if (uVar14 >> 0x3d != 0) {
                        ppppuStack_98 = (ulong ****)pppppuVar27;
                        ppppuStack_88 = (ulong ****)pppppuVar30;
                        FUN_109f8bb60();
                        goto LAB_109f89f10;
                      }
                      uVar18 = (long)pppppuVar30 - (long)pppppuVar27 >> 2;
                      if (uVar18 <= uVar14) {
                        uVar18 = uVar14;
                      }
                      if (0x7ffffffffffffff7 < (ulong)((long)pppppuVar30 - (long)pppppuVar27)) {
                        uVar18 = 0x1fffffffffffffff;
                      }
                      FUN_109f8bb74();
                      pppppuVar15 = (ulong *****)(uVar18 + ((long)pppppuVar21 - (long)pppppuVar27));
                      pppppuVar30 = (ulong *****)(uVar18 + (long)pppppuVar16 * 8);
                      *(undefined4 *)((long)pppppuVar15 + 4) = 1;
LAB_109f89824:
                      pppppuVar28 = (ulong *****)
                                    ((long)pppppuVar15 - ((long)pppppuVar21 - (long)pppppuVar27));
                      pppppuVar16 = pppppuVar27;
                      _memcpy(pppppuVar28);
                      if (pppppuVar27 != (ulong *****)0x0) {
                        __ZdlPv(pppppuVar27);
                      }
                    }
LAB_109f89848:
                    pppppuVar21 = pppppuVar15 + 1;
                    iVar10 = *(int *)(puVar23 + 5);
                    pppppuVar27 = pppppuVar28;
                    goto LAB_109f8984c;
                  }
                  if (iVar10 == 4) {
                    if (pppppuVar21 < pppppuVar30) {
                      *(undefined4 *)pppppuVar21 = *(undefined4 *)(puVar23 + 0xb);
                      *(undefined4 *)((long)pppppuVar21 + 4) = 0;
                      goto LAB_109f89848;
                    }
                    uVar14 = ((long)pppppuVar21 - (long)pppppuVar27 >> 3) + 1;
                    if (uVar14 >> 0x3d == 0) {
                      uVar18 = (long)pppppuVar30 - (long)pppppuVar27 >> 2;
                      if (uVar18 <= uVar14) {
                        uVar18 = uVar14;
                      }
                      if (0x7ffffffffffffff7 < (ulong)((long)pppppuVar30 - (long)pppppuVar27)) {
                        uVar18 = 0x1fffffffffffffff;
                      }
                      FUN_109f8bb74();
                      pppppuVar15 = (ulong *****)(uVar18 + ((long)pppppuVar21 - (long)pppppuVar27));
                      pppppuVar30 = (ulong *****)(uVar18 + (long)pppppuVar16 * 8);
                      *(undefined4 *)pppppuVar15 = *(undefined4 *)(puVar23 + 0xb);
                      *(undefined4 *)((long)pppppuVar15 + 4) = 0;
                      goto LAB_109f89824;
                    }
                    ppppuStack_98 = (ulong ****)pppppuVar27;
                    ppppuStack_88 = (ulong ****)pppppuVar30;
                    FUN_109f8bb60();
                    goto LAB_109f89f10;
                  }
LAB_109f8984c:
                  if ((iVar10 != 0) &&
                     (puVar12 = *(undefined8 **)puVar23[10], *(int *)(puVar12 + 3) == 1)) {
                    uVar29 = *puVar12;
                    uVar32 = puVar12[3];
                    uVar31 = puVar12[2];
                    puVar23[1] = puVar12[1];
                    *puVar23 = uVar29;
                    puVar23[3] = uVar32;
                    puVar23[2] = uVar31;
                    uVar31 = puVar12[5];
                    uVar29 = puVar12[4];
                    uVar33 = puVar12[7];
                    uVar32 = puVar12[6];
                    uVar34 = puVar12[8];
                    uVar36 = puVar12[0xb];
                    uVar35 = puVar12[10];
                    puVar23[9] = puVar12[9];
                    puVar23[8] = uVar34;
                    puVar23[0xb] = uVar36;
                    puVar23[10] = uVar35;
                    puVar23[5] = uVar31;
                    puVar23[4] = uVar29;
                    puVar23[7] = uVar33;
                    puVar23[6] = uVar32;
                    uVar31 = puVar12[0xd];
                    uVar29 = puVar12[0xc];
                    uVar33 = puVar12[0xf];
                    uVar32 = puVar12[0xe];
                    uVar34 = puVar12[0x10];
                    uVar36 = puVar12[0x13];
                    uVar35 = puVar12[0x12];
                    puVar23[0x11] = puVar12[0x11];
                    puVar23[0x10] = uVar34;
                    puVar23[0x13] = uVar36;
                    puVar23[0x12] = uVar35;
                    puVar23[0xd] = uVar31;
                    puVar23[0xc] = uVar29;
                    puVar23[0xf] = uVar33;
                    puVar23[0xe] = uVar32;
                  }
                  iVar26 = iVar26 + -1;
                } while (iVar26 != 0);
                ppppuStack_98 = (ulong ****)pppppuVar27;
                ppppuStack_88 = (ulong ****)pppppuVar30;
                FUN_109f7d45c(&pppuStack_d8,&UNK_10f629a62);
                pppppuVar16 = (ulong *****)&pppuStack_d8;
                FUN_109f76188(&ppppuStack_c0,pppppuVar16,2,&PTR_DAT_110b95da0);
                uVar29 = uStack_a0;
                uVar25 = uStack_a1;
                pppppuVar21 = (ulong *****)ppppuStack_b8;
                uVar22 = ppppuStack_c0._0_4_;
                uStack_80 = uStack_b0;
                uStack_79 = uStack_a9;
                uStack_78 = uStack_a8;
                if ((long)pppuStack_c8 < 0) {
                  __ZdlPv(pppuStack_d8);
                }
                bVar7 = false;
                pppppuVar30 = (ulong *****)ppppuStack_90;
joined_r0x000109f89e00:
                ppppuStack_90 = (ulong ****)pppppuVar27;
                if ((ulong *****)ppppuStack_90 != (ulong *****)0x0) {
                  __ZdlPv(ppppuStack_90);
                  pppppuVar30 = (ulong *****)ppppuStack_90;
                }
                ppppuStack_90 = (ulong ****)pppppuVar30;
                if (!bVar7) {
                  *(undefined4 *)param_1 = uVar22;
                  param_1[1] = pppppuVar21;
                  param_1[2] = CONCAT17(uStack_79,uStack_80);
                  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_78,uStack_79);
                  *(undefined1 *)((long)param_1 + 0x1f) = uVar25;
                  param_1[4] = uVar29;
                  *(undefined1 *)(param_1 + 5) = 0;
                  goto LAB_109f89e88;
                }
                plVar13 = (long *)*plVar11;
              }
              plVar11 = plVar13;
            }
            FUN_109ecc434();
          } while (lVar17 != 0);
          plVar11 = (long *)*param_4;
        }
        param_4 = plVar11;
        plVar11 = (long *)*param_4;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_109f89e74:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
LAB_109f89e88:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109f89f0c:
  func_0x000104c4f740();
LAB_109f89f10:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f89f14);
  (*pcVar6)();
}



/* Entry: 109f89f98; end: 109f8b14f;  */

/* WARNING: Removing unreachable block (ram,0x000109f8a124) */

void FUN_109f89f98(uint *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  undefined8 *puVar14;
  long *****ppppplVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long ****pppplVar20;
  undefined1 uVar21;
  long *****ppppplVar22;
  undefined8 *puVar23;
  long lVar24;
  long ****unaff_x24;
  long lVar25;
  long lVar26;
  long lVar27;
  long ****pppplVar28;
  undefined8 *puVar29;
  ulong in_stack_fffffffffffffe30;
  long ***ppplStack_1b8;
  long ****pppplStack_1a0;
  long ***ppplStack_198;
  uint uStack_18c;
  ulong uStack_188;
  long ****pppplStack_180;
  long ***ppplStack_178;
  undefined7 uStack_170;
  char cStack_169;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long **pplStack_148;
  long ****pppplStack_140;
  long ***ppplStack_138;
  undefined7 uStack_130;
  char cStack_129;
  undefined7 uStack_128;
  byte bStack_121;
  char cStack_120;
  undefined7 uStack_11f;
  byte bStack_118;
  long ****apppplStack_110 [2];
  char cStack_f9;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  undefined7 uStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  undefined7 uStack_98;
  undefined7 uStack_90;
  char cStack_89;
  undefined7 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)**(long **)(param_3 + 8);
  if (plVar10 != (long *)0x0) {
    pppplStack_1a0 = (long ****)&pppplStack_f0;
    plVar16 = *(long **)(param_3 + 8);
    do {
      plVar11 = plVar10;
      pppplVar13 = unaff_x24;
      if ((*(byte *)((long)plVar16 + 0x21) >> 1 & 1) != 0) {
        func_0x000107c31940(&pppplStack_180,plVar16[3]);
        ppppplVar12 = &pppplStack_180;
        func_0x00010726db4c(param_2 + 9,ppppplVar12,&pppplStack_180);
        if (cStack_169 < '\0') {
          __ZdlPv(pppplStack_180);
        }
        if (((ulong)ppppplVar12 & 1) != 0) {
          if (plVar16[2] == 0) {
            func_0x000107c31940(&pppplStack_140,&UNK_10f629b00);
            FUN_109f76188(&pppplStack_180,&pppplStack_140,1,&PTR_DAT_110b95dd8);
            pppplVar13 = (long ****)ppplStack_178;
            uStack_188._0_4_ = (uint)pppplStack_180;
            uStack_90 = uStack_170;
            cStack_89 = cStack_169;
            uStack_88 = (undefined7)
                        (CONCAT35((undefined3)uStack_164,CONCAT41(uStack_168,cStack_169)) >> 8);
            uVar21 = uStack_164._3_1_;
            ppplStack_198 = (long ***)CONCAT44(uStack_15c,uStack_160);
            if (cStack_129 < '\0') {
              __ZdlPv(pppplStack_140);
            }
          }
          else {
            uStack_170 = 0;
            cStack_169 = '\0';
            ppplStack_178 = (long ***)0x0;
            pppplStack_180 = (long ****)0x0;
            uStack_168 = 0xffffffff;
            uStack_164 = 0;
            uStack_160 = 0;
            uStack_150 = 0;
            uStack_14c = 0;
            pplStack_148 = (long **)0x0;
            uStack_158 = 0;
            uStack_154 = 0;
            lVar26 = plVar16[0x11];
            if ((lVar26 == 0) || (*(char *)(lVar26 + 4) != '\x12')) {
              func_0x000107c31940(&pppplStack_f8,&UNK_10f629b6a);
              FUN_109f76188(&pppplStack_140,&pppplStack_f8,2,&PTR_DAT_110b95df0);
LAB_109f8a1b0:
              pppplVar13 = (long ****)ppplStack_138;
              uStack_90 = uStack_130;
              cStack_89 = cStack_129;
              uStack_88 = uStack_128;
              uStack_18c = (uint)bStack_121;
              uStack_188 = (ulong)pppplStack_140 & 0xffffffff;
              ppplStack_198 = (long ***)CONCAT71(uStack_11f,cStack_120);
              if ((long)uStack_e8 < 0) {
                __ZdlPv(pppplStack_f8);
              }
              bVar3 = false;
            }
            else {
              if (*(long *)(lVar26 + 0x30) == 0) {
                func_0x000107c31940(&pppplStack_f8,&UNK_10f629bbe);
                FUN_109f76188(&pppplStack_140,&pppplStack_f8,1,&PTR_DAT_110b95e08);
                goto LAB_109f8a1b0;
              }
              if (*(int *)(lVar26 + 0x10) == 0) {
LAB_109f8a24c:
                FUN_10ae03000(0,plVar16[3]);
                ppuVar8 = &PTR_PTR_1132ff420;
                FUN_10ae079a0();
                FUN_10ae03038();
                FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132ff420);
                bVar3 = true;
                pppplVar13 = unaff_x24;
              }
              else {
                lVar27 = 0;
                uVar19 = 0;
                do {
                  lVar25 = *(long *)(lVar26 + 0x30);
                  ppplStack_1b8 = (long ***)unaff_x24;
                  if (*(long *)(lVar25 + lVar27) == 0) {
                    func_0x000107c31940(&pppplStack_f8,&UNK_10f629be1);
                    FUN_109f76188(&pppplStack_140,&pppplStack_f8,1,&PTR_DAT_110b95e20);
                    goto LAB_109f8a1b0;
                  }
                  uVar1 = *(undefined4 *)(lVar25 + lVar27 + 0x18);
                  uVar9 = *(uint *)(lVar26 + 4);
                  func_0x000107c31940(&ppplStack_d0,*(undefined8 *)(lVar25 + lVar27 + 8));
                  pppplStack_f8 = (long ****)((ulong)pppplStack_f8 & 0xffffffffffffff00);
                  ppplStack_d8 = (long ***)((ulong)ppplStack_d8 & 0xffffffffffffff00);
                  in_stack_fffffffffffffe30 = CONCAT71((int7)(in_stack_fffffffffffffe30 >> 8),1);
                  FUN_109f8bcd0(&pppplStack_140,param_2,&uStack_158,uVar1,uVar9 >> 0x16 & 3,
                                &ppplStack_d0,*(undefined8 *)(lVar25 + lVar27),&pppplStack_f8,
                                in_stack_fffffffffffffe30);
                  if ((char)ppplStack_d8 == '\x01') {
                    apppplStack_110[0] = pppplStack_1a0;
                    FUN_109f8b660(apppplStack_110);
                  }
                  pppplVar13 = (long ****)ppplStack_138;
                  if ((bStack_118 & 1) == 0) {
                    bVar3 = false;
                    uStack_90 = uStack_130;
                    cStack_89 = cStack_129;
                    uStack_88 = uStack_128;
                    uStack_18c = (uint)bStack_121;
                    uStack_188 = (ulong)pppplStack_140 & 0xffffffff;
                    ppplStack_138 = (long ***)0x0;
                    uStack_130 = 0;
                    cStack_129 = '\0';
                    uStack_128 = 0;
                    bStack_121 = 0;
                    ppplStack_198 = (long ***)CONCAT71(uStack_11f,cStack_120);
                    goto LAB_109f8a1f0;
                  }
                  uVar19 = uVar19 + 1;
                  lVar27 = lVar27 + 0x30;
                } while (uVar19 < *(uint *)(lVar26 + 0x10));
                lVar26 = CONCAT44(uStack_14c,uStack_150);
                if (CONCAT44(uStack_154,uStack_158) == lVar26) goto LAB_109f8a24c;
                uStack_164 = *(int *)(lVar26 + -0x14) + *(int *)(lVar26 + -0x18);
                puVar6 = (undefined *)plVar16[2];
                if (((byte)puVar6[0xc] >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                else {
                  puVar6 = &UNK_10e05bf38 + *(long *)(puVar6 + 0x18);
                }
                func_0x000107c2c4dc(&pppplStack_180,puVar6);
                uStack_160 = 3;
                if ((*(uint *)(plVar16 + 6) & 0x10) != 0) {
                  uStack_160 = 1;
                }
                if ((*(uint *)(plVar16 + 6) & 8) != 0) {
                  uStack_160 = 2;
                }
                func_0x000107c31940(&pppplStack_f8,plVar16[3]);
                FUN_109f8c8c8(&pppplStack_140,param_2,&pppplStack_f8);
                if ((long)uStack_e8 < 0) {
                  __ZdlPv(pppplStack_f8);
                }
                pppplVar13 = (long ****)ppplStack_138;
                if ((bStack_118 & 1) == 0) {
                  bVar3 = false;
                  uStack_90 = uStack_130;
                  cStack_89 = cStack_129;
                  uStack_88 = uStack_128;
                  uStack_18c = (uint)bStack_121;
                  uStack_188 = (ulong)pppplStack_140 & 0xffffffff;
                  ppplStack_138 = (long ***)0x0;
                  uStack_130 = 0;
                  cStack_129 = '\0';
                  uStack_128 = 0;
                  bStack_121 = 0;
                  ppplStack_198 = (long ***)CONCAT71(uStack_11f,cStack_120);
                }
                else {
                  FUN_109f8c9c0(&pppplStack_140);
                  uStack_168 = (uint)pppplStack_140;
                  lVar26 = param_2[1];
                  plVar10 = *(long **)(lVar26 + 0x28);
                  if (plVar10 < *(long **)(lVar26 + 0x30)) {
                    plVar10[2] = CONCAT17(cStack_169,uStack_170);
                    plVar10[1] = (long)ppplStack_178;
                    *plVar10 = (long)pppplStack_180;
                    ppplStack_178 = (long ***)0x0;
                    uStack_170 = 0;
                    cStack_169 = '\0';
                    pppplStack_180 = (long ****)0x0;
                    plVar10[3] = CONCAT44(uStack_164,(uint)pppplStack_140);
                    *(undefined4 *)(plVar10 + 4) = uStack_160;
                    plVar10[6] = 0;
                    plVar10[7] = 0;
                    plVar10[5] = 0;
                    plVar10[6] = CONCAT44(uStack_14c,uStack_150);
                    plVar10[5] = CONCAT44(uStack_154,uStack_158);
                    plVar10[7] = (long)pplStack_148;
                    uStack_158 = 0;
                    uStack_154 = 0;
                    uStack_150 = 0;
                    uStack_14c = 0;
                    pplStack_148 = (long **)0x0;
                    pppplVar28 = (long ****)(plVar10 + 8);
                  }
                  else {
                    pppplVar13 = (long ****)(lVar26 + 0x20);
                    lVar27 = (long)plVar10 - (long)*pppplVar13;
                    uVar19 = (lVar27 >> 6) + 1;
                    if (uVar19 >> 0x3a != 0) {
                      FUN_109f5f2dc();
                      goto LAB_109f8af74;
                    }
                    uVar17 = (long)*(long **)(lVar26 + 0x30) - (long)*pppplVar13;
                    uVar18 = (long)uVar17 >> 5;
                    if (uVar18 <= uVar19) {
                      uVar18 = uVar19;
                    }
                    if (0x7fffffffffffffbf < uVar17) {
                      uVar18 = 0x3ffffffffffffff;
                    }
                    ppplStack_d8 = (long ***)pppplVar13;
                    if (uVar18 == 0) {
                      pppplVar20 = (long ****)0x0;
                    }
                    else {
                      pppplVar20 = pppplVar13;
                      FUN_109f5f2f0();
                    }
                    pppplStack_f0 = (long ****)((long)pppplVar20 + lVar27);
                    pppplStack_f0[2] = (long ***)CONCAT17(cStack_169,uStack_170);
                    pppplStack_f0[1] = ppplStack_178;
                    *pppplStack_f0 = (long ***)pppplStack_180;
                    ppplStack_178 = (long ***)0x0;
                    uStack_170 = 0;
                    cStack_169 = '\0';
                    pppplStack_180 = (long ****)0x0;
                    *(undefined4 *)(pppplStack_f0 + 4) = uStack_160;
                    pppplStack_f0[3] = (long ***)CONCAT44(uStack_164,uStack_168);
                    pppplStack_f0[6] = (long ***)0x0;
                    pppplStack_f0[7] = (long ***)0x0;
                    pppplStack_f0[5] = (long ***)0x0;
                    pppplStack_f0[6] = (long ***)CONCAT44(uStack_14c,uStack_150);
                    pppplStack_f0[5] = (long ***)CONCAT44(uStack_154,uStack_158);
                    pppplStack_f0[7] = (long ***)pplStack_148;
                    uStack_158 = 0;
                    uStack_154 = 0;
                    uStack_150 = 0;
                    uStack_14c = 0;
                    pplStack_148 = (long **)0x0;
                    pppplVar28 = pppplStack_f0 + 8;
                    lVar27 = (long)pppplStack_f0 +
                             (*(long *)(lVar26 + 0x20) - *(long *)(lVar26 + 0x28));
                    pppplStack_f8 = pppplVar20;
                    uStack_e8 = (long *****)pppplVar28;
                    ppplStack_e0 = (long ***)(pppplVar20 + uVar18 * 8);
                    func_0x000109f5f324(pppplVar13,*(long *)(lVar26 + 0x20),*(long *)(lVar26 + 0x28)
                                        ,lVar27);
                    pppplStack_f8 = *(long *****)(lVar26 + 0x20);
                    *(long *)(lVar26 + 0x20) = lVar27;
                    *(long *****)(lVar26 + 0x28) = pppplVar28;
                    ppplStack_e0 = *(long ****)(lVar26 + 0x30);
                    *(long *****)(lVar26 + 0x30) = pppplVar20 + uVar18 * 8;
                    pppplStack_f0 = pppplStack_f8;
                    uStack_e8 = (long *****)pppplStack_f8;
                    func_0x000109f5f3bc(&pppplStack_f8);
                  }
                  *(long *****)(lVar26 + 0x28) = pppplVar28;
                  if (((bStack_118 & 1) == 0) && ((char)bStack_121 < '\0')) {
                    __ZdlPv(ppplStack_138);
                  }
                  bVar3 = true;
                  pppplVar13 = unaff_x24;
                }
              }
            }
LAB_109f8a1f0:
            pppplStack_140 = (long ****)&uStack_158;
            func_0x000109f48c10(&pppplStack_140);
            if (cStack_169 < '\0') {
              __ZdlPv(pppplStack_180);
            }
            if (bVar3) {
              plVar11 = (long *)*plVar16;
              goto LAB_109f8a214;
            }
            uVar21 = (undefined1)uStack_18c;
          }
          *param_1 = (uint)uStack_188;
          *(long *****)(param_1 + 2) = pppplVar13;
          *(ulong *)(param_1 + 4) = CONCAT17(cStack_89,uStack_90);
          *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_88,cStack_89);
          *(undefined1 *)((long)param_1 + 0x1f) = uVar21;
          *(long ****)(param_1 + 8) = ppplStack_198;
          goto LAB_109f8af14;
        }
        break;
      }
LAB_109f8a214:
      plVar10 = (long *)*plVar11;
      unaff_x24 = pppplVar13;
      plVar16 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  cStack_89 = '\0';
  ppppplVar12 = (long *****)**(long ******)(param_3 + 8);
  if (ppppplVar12 == (long *****)0x0) {
LAB_109f8abd8:
    uStack_98 = 0;
    uStack_a0 = 0;
    cStack_99 = '\0';
    plVar10 = *(long **)(param_3 + 8);
    plVar16 = (long *)**(long **)(param_3 + 8);
    do {
      if (plVar16 == (long *)0x0) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 10) = 1;
LAB_109f8af18:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
LAB_109f8af68:
        func_0x000104c4f6b8();
LAB_109f8af74:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109f8af78);
        (*pcVar5)();
      }
      if ((*(byte *)(plVar10 + 4) >> 1 & 1) != 0) {
        if (plVar10[2] == 0) {
          func_0x000107c31940(&pppplStack_140,&UNK_10f629b00);
          FUN_109f76188(&pppplStack_180,&pppplStack_140,1,&PTR_DAT_110b96128);
          pppplVar13 = (long ****)ppplStack_178;
          uVar9 = (uint)pppplStack_180;
          uStack_b0 = uStack_170;
          cStack_a9 = cStack_169;
          uStack_a8 = (undefined7)
                      (CONCAT35((undefined3)uStack_164,CONCAT41(uStack_168,cStack_169)) >> 8);
          uVar21 = uStack_164._3_1_;
          ppplStack_1b8 = (long ***)CONCAT44(uStack_15c,uStack_160);
          if (cStack_129 < '\0') {
            __ZdlPv(pppplStack_140);
          }
        }
        else {
          func_0x000107c31940(&pppplStack_140,plVar10[3]);
          FUN_109f8d1c0(&pppplStack_180,param_2,&pppplStack_140,plVar10[2],
                        *(ulong *)((long)plVar10 + 0x2c) >> 0x29 & 0x1f);
          if (cStack_129 < '\0') {
            __ZdlPv(pppplStack_140);
          }
          if ((uStack_158 & 1) != 0) {
            plVar16 = (long *)*plVar10;
            goto LAB_109f8ac44;
          }
          ppplStack_1b8 = (long ***)CONCAT44(uStack_15c,uStack_160);
          uStack_b0 = uStack_170;
          cStack_a9 = cStack_169;
          uStack_a8 = (undefined7)
                      (CONCAT35((undefined3)uStack_164,CONCAT41(uStack_168,cStack_169)) >> 8);
          pppplVar13 = (long ****)ppplStack_178;
          uVar9 = (uint)pppplStack_180;
          uVar21 = uStack_164._3_1_;
        }
        *param_1 = uVar9;
        *(long *****)(param_1 + 2) = pppplVar13;
        *(ulong *)(param_1 + 4) = CONCAT17(cStack_a9,uStack_b0);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_a8,cStack_a9);
        *(undefined1 *)((long)param_1 + 0x1f) = uVar21;
LAB_109f8af10:
        *(long ****)(param_1 + 8) = ppplStack_1b8;
LAB_109f8af14:
        *(undefined1 *)(param_1 + 10) = 0;
        goto LAB_109f8af18;
      }
LAB_109f8ac44:
      plVar10 = plVar16;
      plVar16 = (long *)*plVar16;
    } while( true );
  }
  ppppplVar22 = *(long ******)(param_3 + 8);
LAB_109f8a584:
  ppppplVar15 = ppppplVar12;
  if (-1 < *(char *)(ppppplVar22 + 4)) goto LAB_109f8ab38;
  func_0x000107c31940(&pppplStack_180,ppppplVar22[3]);
  ppppplVar12 = &pppplStack_180;
  func_0x00010726db4c(param_2 + 9,ppppplVar12,&pppplStack_180);
  if (cStack_169 < '\0') {
    __ZdlPv(pppplStack_180);
  }
  if (((ulong)ppppplVar12 & 1) == 0) goto LAB_109f8abd8;
  pppplVar13 = ppppplVar22[2];
  if (pppplVar13 == (long ****)0x0) {
    func_0x000107c31940(&pppplStack_140,&UNK_10f629b00);
    FUN_109f76188(&pppplStack_180,&pppplStack_140,1,&PTR_DAT_110b95f58);
    uStack_a0 = uStack_170;
    cStack_99 = cStack_169;
    uStack_98 = (undefined7)(CONCAT35((undefined3)uStack_164,CONCAT41(uStack_168,cStack_169)) >> 8);
    pppplStack_1a0._0_1_ = (undefined1)((uint)uStack_164 >> 0x18);
    ppplStack_1b8 = (long ***)CONCAT44(uStack_15c,uStack_160);
    ppppplVar12 = (long *****)pppplStack_140;
    ppplStack_198 = ppplStack_178;
    uStack_18c = (uint)pppplStack_180;
    iVar4 = uStack_164;
    if (cStack_129 < '\0') {
LAB_109f8aef0:
      pppplStack_1a0._0_1_ = (undefined1)((uint)iVar4 >> 0x18);
      __ZdlPv(ppppplVar12);
    }
    goto LAB_109f8aef4;
  }
  pppplVar20 = ppppplVar22[0x11];
  if ((pppplVar20 == (long ****)0x0) || (*(char *)((long)pppplVar20 + 4) != '\x12')) {
    bVar2 = *(byte *)((long)pppplVar13 + 4);
    pppplVar20 = pppplVar13;
    if (bVar2 != 0x11) {
      if (bVar2 < 0x17) {
        ppppplVar22 = *(long ******)(&UNK_110b95fc0 + (ulong)bVar2 * 0x10);
        if ((long *****)0x7ffffffffffffff7 < ppppplVar22) goto LAB_109f8af68;
        puVar6 = (&PTR_DAT_110b95fb8)[(ulong)bVar2 * 2];
        if (ppppplVar22 < (long *****)0x17) {
          uStack_e8 = (long *****)CONCAT17((char)ppppplVar22,(undefined7)uStack_e8);
          ppppplVar12 = &pppplStack_f8;
          if (ppppplVar22 == (long *****)0x0) goto LAB_109f8ae74;
        }
        else {
          ppppplVar15 = (long *****)0x19;
          if (((ulong)ppppplVar22 | 7) != 0x17) {
            ppppplVar15 = (long *****)(((ulong)ppppplVar22 | 7) + 1);
          }
          ppppplVar12 = ppppplVar15;
          __Znwm();
          uStack_e8 = (long *****)((ulong)ppppplVar15 | 0x8000000000000000);
          pppplStack_f8 = (long ****)ppppplVar12;
          pppplStack_f0 = (long ****)ppppplVar22;
        }
        _memmove(ppppplVar12,puVar6,ppppplVar22);
      }
      else {
        ppppplVar22 = (long *****)0x0;
        uStack_e8 = (long *****)((ulong)uStack_e8 & 0xffffffffffffff);
        ppppplVar12 = &pppplStack_f8;
      }
LAB_109f8ae74:
      *(undefined1 *)((long)ppppplVar12 + (long)ppppplVar22) = 0;
      FUN_109f7d45c(&pppplStack_140,&UNK_10f629f83);
      FUN_109f76188(&pppplStack_180,&pppplStack_140,2,&PTR_DAT_110b95f70);
      iVar4 = uStack_164;
      ppplStack_198 = ppplStack_178;
      uStack_18c = (uint)pppplStack_180;
      uStack_a0 = uStack_170;
      cStack_99 = cStack_169;
      uStack_98 = (undefined7)
                  (CONCAT35((undefined3)uStack_164,CONCAT41(uStack_168,cStack_169)) >> 8);
      pppplStack_1a0._0_1_ = (undefined1)((uint)uStack_164 >> 0x18);
      ppplStack_1b8 = (long ***)CONCAT44(uStack_15c,uStack_160);
      if (cStack_129 < '\0') {
        __ZdlPv(pppplStack_140);
      }
      ppppplVar12 = (long *****)pppplStack_f8;
      if ((long)uStack_e8 < 0) goto LAB_109f8aef0;
      goto LAB_109f8aef4;
    }
  }
  ppplStack_d0 = (long ***)((ulong)ppplStack_d0 & 0xffffffffffffff00);
  cStack_b8 = '\0';
  pppplStack_f8 = (long ****)((ulong)pppplStack_f8 & 0xffffffffffffff00);
  ppplStack_d8 = (long ***)((ulong)ppplStack_d8 & 0xffffffffffffff00);
  func_0x000107c31940(&pppplStack_180,ppppplVar22[3]);
  puVar7 = param_2 + 0xe;
  func_0x000107c31944(puVar7,&pppplStack_180);
  puVar23 = (undefined8 *)param_2[0xf];
  if (puVar23 == (undefined8 *)0x0) {
    bVar3 = true;
  }
  else {
    uVar19 = (long)puVar23 - 1;
    if (((ulong)puVar23 & uVar19) == 0) {
      puVar29 = (undefined8 *)(uVar19 & (ulong)puVar7);
    }
    else {
      puVar29 = puVar7;
      if (puVar23 <= puVar7) {
        uVar18 = 0;
        if (puVar23 != (undefined8 *)0x0) {
          uVar18 = (ulong)puVar7 / (ulong)puVar23;
        }
        puVar29 = (undefined8 *)((long)puVar7 - uVar18 * (long)puVar23);
      }
    }
    plVar10 = *(long **)(param_2[0xe] + (long)puVar29 * 8);
    if (plVar10 != (long *)0x0) {
      for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        puVar14 = (undefined8 *)plVar10[1];
        if (puVar7 == puVar14) {
          puVar14 = param_2 + 0xe;
          func_0x000104c4fbc4(puVar14,plVar10 + 2,&pppplStack_180);
          if (((ulong)puVar14 & 1) != 0) {
            bVar3 = false;
            goto LAB_109f8a6c0;
          }
        }
        else {
          if (((ulong)puVar23 & uVar19) == 0) {
            puVar14 = (undefined8 *)((ulong)puVar14 & uVar19);
          }
          else if (puVar23 <= puVar14) {
            uVar18 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar18 = (ulong)puVar14 / (ulong)puVar23;
            }
            puVar14 = (undefined8 *)((long)puVar14 - uVar18 * (long)puVar23);
          }
          if (puVar14 != puVar29) break;
        }
      }
    }
    bVar3 = true;
  }
LAB_109f8a6c0:
  if (-1 < cStack_169) {
    if (bVar3) goto LAB_109f8a804;
LAB_109f8a6dc:
    func_0x000107c31940(&pppplStack_180,ppppplVar22[3]);
    puVar7 = param_2 + 0xe;
    func_0x000107c31944(puVar7,&pppplStack_180);
    puVar23 = (undefined8 *)param_2[0xf];
    if (puVar23 != (undefined8 *)0x0) {
      uVar19 = (long)puVar23 - 1;
      if (((ulong)puVar23 & uVar19) == 0) {
        puVar29 = (undefined8 *)(uVar19 & (ulong)puVar7);
      }
      else {
        puVar29 = puVar7;
        if (puVar23 <= puVar7) {
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (ulong)puVar7 / (ulong)puVar23;
          }
          puVar29 = (undefined8 *)((long)puVar7 - uVar18 * (long)puVar23);
        }
      }
      plVar10 = *(long **)(param_2[0xe] + (long)puVar29 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        do {
          puVar14 = (undefined8 *)plVar10[1];
          if (puVar14 == puVar7) {
            puVar14 = param_2 + 0xe;
            func_0x000104c4fbc4(puVar14,plVar10 + 2,&pppplStack_180);
            if (((ulong)puVar14 & 1) != 0) goto LAB_109f8a794;
          }
          else {
            if (((ulong)puVar23 & uVar19) == 0) {
              puVar14 = (undefined8 *)((ulong)puVar14 & uVar19);
            }
            else if (puVar23 <= puVar14) {
              uVar18 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar18 = (ulong)puVar14 / (ulong)puVar23;
              }
              puVar14 = (undefined8 *)((long)puVar14 - uVar18 * (long)puVar23);
            }
            if (puVar14 != puVar29) break;
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) break;
        } while( true );
      }
    }
    func_0x000109262df8(&UNK_10f639994);
    goto LAB_109f8af74;
  }
  __ZdlPv(pppplStack_180);
  if (!bVar3) goto LAB_109f8a6dc;
LAB_109f8a804:
  pppplStack_180 = (long ****)0x0;
  ppplStack_178 = (long ***)0x0;
  uStack_170 = 0;
  cStack_169 = '\0';
  uStack_168 = 0xffffffff;
  uStack_14c = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  if (pppplVar20[6] == (long ***)0x0) {
    func_0x000107c31940(apppplStack_110,&UNK_10f629fbe);
    FUN_109f76188(&pppplStack_140,apppplStack_110,1,&PTR_DAT_110b95f88);
LAB_109f8a9c8:
    uStack_18c = (uint)pppplStack_140;
    ppplStack_198 = ppplStack_138;
    uStack_a0 = uStack_130;
    cStack_99 = cStack_129;
    uStack_98 = uStack_128;
    pppplStack_1a0 = (long ****)(ulong)bStack_121;
    ppplStack_1b8 = (long ***)CONCAT71(uStack_11f,cStack_120);
    if (cStack_f9 < '\0') {
      __ZdlPv(apppplStack_110[0]);
    }
    bVar3 = false;
    goto LAB_109f8aadc;
  }
  if (*(int *)(pppplVar20 + 2) == 0) {
LAB_109f8a960:
    FUN_10ae03000(0,ppppplVar22[3]);
    ppuVar8 = &PTR_PTR_1132ff460;
    FUN_10ae079a0();
    FUN_10ae03038();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132ff460);
  }
  else {
    lVar26 = 0;
    uVar19 = 0;
    do {
      plVar10 = (long *)((long)pppplVar20[6] + lVar26);
      lVar27 = *plVar10;
      if (lVar27 == 0) {
        func_0x000107c31940(apppplStack_110,&UNK_10f629be1);
        FUN_109f76188(&pppplStack_140,apppplStack_110,1,&PTR_DAT_110b95fa0);
        goto LAB_109f8a9c8;
      }
      lVar24 = plVar10[1];
      lVar25 = plVar10[3];
      if (cStack_b8 == '\x01') {
        FUN_109f8ca44(&pppplStack_140,ppplStack_d0,uStack_c8,uVar19);
        FUN_109f8ccb4(&pppplStack_f8,&pppplStack_140);
        if (cStack_120 == '\x01') {
          apppplStack_110[0] = &ppplStack_138;
          FUN_109f8b660(apppplStack_110);
        }
      }
      uVar9 = *(uint *)((long)pppplVar20 + 4);
      func_0x000107c31940(apppplStack_110,lVar24);
      in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
      FUN_109f8bcd0(&pppplStack_140,param_2,&uStack_160,(int)lVar25,uVar9 >> 0x16 & 3,
                    apppplStack_110,lVar27,&pppplStack_f8,in_stack_fffffffffffffe30);
      if (cStack_f9 < '\0') {
        __ZdlPv(apppplStack_110[0]);
      }
      if ((bStack_118 & 1) == 0) goto LAB_109f8aa98;
      uVar19 = uVar19 + 1;
      lVar26 = lVar26 + 0x30;
    } while (uVar19 < *(uint *)(pppplVar20 + 2));
    lVar26 = CONCAT44(uStack_154,uStack_158);
    if (CONCAT44(uStack_15c,uStack_160) == lVar26) goto LAB_109f8a960;
    uStack_164 = *(int *)(lVar26 + -0x14) + *(int *)(lVar26 + -0x18);
    pppplVar13 = ppppplVar22[2];
    if ((*(byte *)((long)pppplVar13 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      pppplVar13 = (long ****)(&UNK_10e05bf38 + (long)pppplVar13[3]);
    }
    func_0x000107c2c4dc(&pppplStack_180,pppplVar13);
    func_0x000107c31940(apppplStack_110,ppppplVar22[3]);
    FUN_109f8c8c8(&pppplStack_140,param_2,apppplStack_110);
    if (cStack_f9 < '\0') {
      __ZdlPv(apppplStack_110[0]);
    }
    if ((bStack_118 & 1) == 0) {
LAB_109f8aa98:
      bVar3 = false;
      uStack_18c = (uint)pppplStack_140;
      ppplStack_198 = ppplStack_138;
      uStack_a0 = uStack_130;
      cStack_99 = cStack_129;
      uStack_98 = uStack_128;
      pppplStack_1a0 = (long ****)(ulong)bStack_121;
      ppplStack_138 = (long ***)0x0;
      cStack_129 = '\0';
      uStack_130 = 0;
      bStack_121 = 0;
      uStack_128 = 0;
      ppplStack_1b8 = (long ***)CONCAT71(uStack_11f,cStack_120);
      goto LAB_109f8aadc;
    }
    FUN_109f8c9c0(&pppplStack_140);
    uStack_168 = (uint)pppplStack_140;
    lVar26 = param_2[4] + 0x60;
    apppplStack_110[0] = (long ****)ppppplVar22;
    FUN_109f8cf84(lVar26,apppplStack_110);
    if (lVar26 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar26 + 0x18);
    }
    lVar26 = *(long *)*param_2 + (ulong)uVar9 * 0x98;
    plVar10 = *(long **)(lVar26 + 0x10);
    if (plVar10 < *(long **)(lVar26 + 0x18)) {
      plVar10[2] = CONCAT17(cStack_169,uStack_170);
      plVar10[1] = (long)ppplStack_178;
      *plVar10 = (long)pppplStack_180;
      ppplStack_178 = (long ***)0x0;
      uStack_170 = 0;
      cStack_169 = '\0';
      pppplStack_180 = (long ****)0x0;
      plVar10[3] = CONCAT44(uStack_164,uStack_168);
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      plVar10[5] = CONCAT44(uStack_154,uStack_158);
      plVar10[4] = CONCAT44(uStack_15c,uStack_160);
      plVar10[6] = CONCAT44(uStack_14c,uStack_150);
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      plVar10 = plVar10 + 7;
    }
    else {
      plVar10 = (long *)(lVar26 + 8);
      FUN_109f8d05c(plVar10,&pppplStack_180);
    }
    *(long **)(lVar26 + 0x10) = plVar10;
    if (((bStack_118 & 1) == 0) && ((char)bStack_121 < '\0')) {
      __ZdlPv(ppplStack_138);
    }
  }
  bVar3 = true;
LAB_109f8aadc:
  pppplStack_140 = (long ****)&uStack_160;
  func_0x000109f48c10(&pppplStack_140);
  if (cStack_169 < '\0') {
    __ZdlPv(pppplStack_180);
  }
  if ((char)ppplStack_d8 == '\x01') {
    pppplStack_180 = (long ****)&pppplStack_f0;
    FUN_109f8b660(&pppplStack_180);
  }
  if (cStack_b8 == '\x01') {
    pppplStack_180 = &ppplStack_d0;
    FUN_109f8b660(&pppplStack_180);
  }
  if (!bVar3) {
LAB_109f8aef4:
    *param_1 = uStack_18c;
    *(long ****)(param_1 + 2) = ppplStack_198;
    *(ulong *)(param_1 + 4) = CONCAT17(cStack_99,uStack_a0);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,cStack_99);
    *(undefined1 *)((long)param_1 + 0x1f) = pppplStack_1a0._0_1_;
    goto LAB_109f8af10;
  }
  ppppplVar15 = (long *****)*ppppplVar22;
LAB_109f8ab38:
  ppppplVar12 = (long *****)*ppppplVar15;
  ppppplVar22 = ppppplVar15;
  if ((long *****)*ppppplVar15 == (long *****)0x0) goto LAB_109f8abd8;
  goto LAB_109f8a584;
LAB_109f8a794:
  if (cStack_b8 == '\x01') {
    if (&ppplStack_d0 != (long ****)(plVar10 + 5)) {
      FUN_109f8cddc(&ppplStack_d0,plVar10[5],plVar10[6],plVar10[6] - plVar10[5] >> 5);
    }
  }
  else {
    ppplStack_d0 = (long ***)0x0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    FUN_109f8cb50(&ppplStack_d0,plVar10[5],plVar10[6],plVar10[6] - plVar10[5] >> 5);
    cStack_b8 = '\x01';
  }
  if (cStack_169 < '\0') {
    __ZdlPv(pppplStack_180);
  }
  goto LAB_109f8a804;
}



/* Entry: 109f8b150; end: 109f8b1db;  */

long **** FUN_109f8b150(long ****param_1,ulong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long ***ppplStack_128;
  long **pplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long lStack_f8;
  undefined8 *puStack_f0;
  long ***ppplStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long ***ppplStack_c8;
  long **pplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long lStack_98;
  undefined8 *puStack_90;
  long ***ppplStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long ***ppplStack_68;
  long **pplStack_60;
  long **pplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  
  pppplVar3 = (long ****)param_1[1];
  lVar7 = (long)pppplVar3 - (long)*param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar7 * -0x79435e50d79435e5);
  puVar1 = (undefined8 *)(param_2 + lVar7 * 0x79435e50d79435e5);
  if (bVar2 || puVar1 == (undefined8 *)0x0) {
    pppplVar4 = param_1;
    if (bVar2) {
      pppplVar12 = (long ****)(*param_1 + param_2 * 0x13);
      while (pppplVar3 != pppplVar12) {
        pppplVar3 = pppplVar3 + -0x13;
        pppplVar4 = pppplVar3;
        FUN_109f5a0c8(pppplVar3);
      }
      param_1[1] = (long ***)pppplVar12;
    }
    return pppplVar4;
  }
  pppplVar3 = (long ****)param_1[1];
  if ((undefined8 *)(((long)param_1[2] - (long)pppplVar3 >> 3) * -0x79435e50d79435e5) < puVar1) {
    lVar7 = (long)pppplVar3 - (long)*param_1;
    uVar11 = (long)puVar1 + (lVar7 >> 3) * -0x79435e50d79435e5;
    if (0x1af286bca1af286 < uVar11) {
      puVar6 = puVar1;
      FUN_109f59f38();
      func_0x000109f5a5fc(&ppplStack_68);
      pppplVar3 = param_1;
      __Unwind_Resume();
      pcStack_78 = FUN_109f8b394;
      lStack_f8 = (long)pppplVar3[1] - (long)*pppplVar3;
      uVar11 = (lStack_f8 >> 5) + 1;
      lStack_98 = lVar7;
      puStack_90 = puVar1;
      ppplStack_88 = (long ***)param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      if (uVar11 >> 0x3b == 0) {
        uVar9 = (long)pppplVar3[2] - (long)*pppplVar3;
        uVar10 = (long)uVar9 >> 4;
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar10 = 0x7ffffffffffffff;
        }
        ppplStack_a8 = (long ***)pppplVar3;
        if (uVar10 == 0) {
          pppplVar4 = (long ****)0x0;
        }
        else {
          pppplVar4 = pppplVar3;
          FUN_109f5f6b8();
        }
        pplStack_c0 = (long **)((long)pppplVar4 + lStack_f8);
        uVar15 = puVar6[1];
        uVar14 = *puVar6;
        pplStack_c0[2] = (long *)puVar6[2];
        pplStack_c0[1] = (long *)uVar15;
        *pplStack_c0 = (long *)uVar14;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        pplStack_c0[3] = (long *)puVar6[3];
        pppplVar12 = (long ****)(pplStack_c0 + 4);
        ppplVar5 = (long ***)((long)pplStack_c0 + ((long)*pppplVar3 - (long)pppplVar3[1]));
        ppplStack_c8 = (long ***)pppplVar4;
        ppplStack_b8 = (long ***)pppplVar12;
        ppplStack_b0 = (long ***)(pppplVar4 + uVar10 * 4);
        func_0x000109f5f6ec(pppplVar3,*pppplVar3,pppplVar3[1],ppplVar5);
        ppplStack_c8 = *pppplVar3;
        *pppplVar3 = ppplVar5;
        pppplVar3[1] = (long ***)pppplVar12;
        ppplStack_b0 = pppplVar3[2];
        pppplVar3[2] = (long ***)(pppplVar4 + uVar10 * 4);
        pplStack_c0 = (long **)ppplStack_c8;
        ppplStack_b8 = ppplStack_c8;
        func_0x000109f5f81c(&ppplStack_c8);
        return pppplVar12;
      }
      FUN_109f5f6a4();
      func_0x000109f5f81c(&ppplStack_c8);
      pppplVar4 = pppplVar3;
      __Unwind_Resume();
      pcStack_d8 = FUN_109f8b4a4;
      lVar7 = (long)pppplVar4[1] - (long)*pppplVar4;
      uVar11 = (lVar7 >> 5) + 1;
      puStack_f0 = puVar1;
      ppplStack_e8 = (long ***)pppplVar3;
      ppuStack_e0 = &puStack_80;
      if (uVar11 >> 0x3b != 0) {
        FUN_109f5fee4();
        func_0x000109f6005c(&ppplStack_128);
        __Unwind_Resume();
        ppplVar5 = pppplVar4[2];
        while (ppplVar5 != (long ***)0x0) {
          ppplVar13 = (long ***)*ppplVar5;
          FUN_109f8b610(ppplVar5 + 2);
          __ZdlPv(ppplVar5);
          ppplVar5 = ppplVar13;
        }
        ppplVar5 = *pppplVar4;
        *pppplVar4 = (long ***)0x0;
        if (ppplVar5 != (long ***)0x0) {
          __ZdlPv();
        }
        return pppplVar4;
      }
      uVar9 = (long)pppplVar4[2] - (long)*pppplVar4;
      uVar10 = (long)uVar9 >> 4;
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      if (0x7fffffffffffffdf < uVar9) {
        uVar10 = 0x7ffffffffffffff;
      }
      ppplStack_108 = (long ***)pppplVar4;
      if (uVar10 == 0) {
        pppplVar3 = (long ****)0x0;
      }
      else {
        pppplVar3 = pppplVar4;
        FUN_109f5fef8();
      }
      pplStack_120 = (long **)((long)pppplVar3 + lVar7);
      uVar15 = puVar6[1];
      uVar14 = *puVar6;
      pplStack_120[2] = (long *)puVar6[2];
      pplStack_120[1] = (long *)uVar15;
      *pplStack_120 = (long *)uVar14;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      pplStack_120[3] = (long *)puVar6[3];
      pppplVar12 = (long ****)(pplStack_120 + 4);
      ppplVar5 = (long ***)((long)pplStack_120 + ((long)*pppplVar4 - (long)pppplVar4[1]));
      ppplStack_128 = (long ***)pppplVar3;
      ppplStack_118 = (long ***)pppplVar12;
      ppplStack_110 = (long ***)(pppplVar3 + uVar10 * 4);
      func_0x000109f5ff2c(pppplVar4,*pppplVar4,pppplVar4[1],ppplVar5);
      ppplStack_128 = *pppplVar4;
      *pppplVar4 = ppplVar5;
      pppplVar4[1] = (long ***)pppplVar12;
      ppplStack_110 = pppplVar4[2];
      pppplVar4[2] = (long ***)(pppplVar3 + uVar10 * 4);
      pplStack_120 = (long **)ppplStack_128;
      ppplStack_118 = ppplStack_128;
      func_0x000109f6005c(&ppplStack_128);
      return pppplVar12;
    }
    lVar8 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar10 = lVar8 * 0xd79435e50d79436;
    if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
      uVar10 = uVar11;
    }
    if (0xd79435e50d7942 < (ulong)(lVar8 * -0x79435e50d79435e5)) {
      uVar10 = 0x1af286bca1af286;
    }
    ppplStack_48 = (long ***)param_1;
    if (uVar10 == 0) {
      pppplVar3 = (long ****)0x0;
    }
    else {
      pppplVar3 = param_1;
      FUN_109f59f4c();
    }
    lVar7 = (long)pppplVar3 + lVar7;
    lVar8 = (((long)puVar1 * 0x98 - 0x98U) / 0x98) * 0x98 + 0x98;
    ppplStack_68 = (long ***)pppplVar3;
    pplStack_60 = (long **)lVar7;
    ppplStack_50 = (long ***)(pppplVar3 + uVar10 * 0x13);
    _bzero(lVar7,lVar8);
    ppplVar5 = (long ***)(lVar7 + lVar8);
    ppplVar13 = (long ***)((long)*param_1 + (lVar7 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar5;
    FUN_109f59f94(param_1,*param_1,param_1[1],ppplVar13);
    ppplStack_68 = *param_1;
    *param_1 = ppplVar13;
    param_1[1] = ppplVar5;
    ppplStack_50 = param_1[2];
    param_1[2] = (long ***)(pppplVar3 + uVar10 * 0x13);
    pppplVar4 = &ppplStack_68;
    pplStack_60 = (long **)ppplStack_68;
    pplStack_58 = (long **)ppplStack_68;
    func_0x000109f5a5fc(pppplVar4);
  }
  else {
    pppplVar4 = param_1;
    if (puVar1 != (undefined8 *)0x0) {
      uVar11 = ((long)puVar1 * 0x98 - 0x98U) / 0x98;
      pppplVar4 = pppplVar3;
      _bzero(pppplVar3,uVar11 * 0x98 + 0x98);
      pppplVar3 = pppplVar3 + uVar11 * 0x13 + 0x13;
    }
    param_1[1] = (long ***)pppplVar3;
  }
  return pppplVar4;
}



/* Entry: 109f8b1dc; end: 109f8b393;  */

long **** FUN_109f8b1dc(long ****param_1,undefined8 *param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long ***ppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long ***ppplStack_128;
  long **pplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_c8;
  long **pplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_68;
  long **pplStack_60;
  long **pplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  
  pppplVar2 = (long ****)param_1[1];
  if ((undefined8 *)(((long)param_1[2] - (long)pppplVar2 >> 3) * -0x79435e50d79435e5) < param_2) {
    lVar8 = (long)pppplVar2 - (long)*param_1;
    uVar7 = (long)param_2 + (lVar8 >> 3) * -0x79435e50d79435e5;
    if (0x1af286bca1af286 < uVar7) {
      FUN_109f59f38();
      func_0x000109f5a5fc(&ppplStack_68);
      __Unwind_Resume();
      lVar8 = (long)param_1[1] - (long)*param_1;
      uVar7 = (lVar8 >> 5) + 1;
      if (uVar7 >> 0x3b == 0) {
        uVar5 = (long)param_1[2] - (long)*param_1;
        uVar6 = (long)uVar5 >> 4;
        if (uVar6 <= uVar7) {
          uVar6 = uVar7;
        }
        if (0x7fffffffffffffdf < uVar5) {
          uVar6 = 0x7ffffffffffffff;
        }
        ppplStack_a8 = (long ***)param_1;
        if (uVar6 == 0) {
          pppplVar2 = (long ****)0x0;
        }
        else {
          pppplVar2 = param_1;
          FUN_109f5f6b8();
        }
        pplStack_c0 = (long **)((long)pppplVar2 + lVar8);
        uVar11 = param_2[1];
        uVar10 = *param_2;
        pplStack_c0[2] = (long *)param_2[2];
        pplStack_c0[1] = (long *)uVar11;
        *pplStack_c0 = (long *)uVar10;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        pplStack_c0[3] = (long *)param_2[3];
        pppplVar1 = (long ****)(pplStack_c0 + 4);
        ppplVar3 = (long ***)((long)pplStack_c0 + ((long)*param_1 - (long)param_1[1]));
        ppplStack_c8 = (long ***)pppplVar2;
        ppplStack_b8 = (long ***)pppplVar1;
        ppplStack_b0 = (long ***)(pppplVar2 + uVar6 * 4);
        func_0x000109f5f6ec(param_1,*param_1,param_1[1],ppplVar3);
        ppplStack_c8 = *param_1;
        *param_1 = ppplVar3;
        param_1[1] = (long ***)pppplVar1;
        ppplStack_b0 = param_1[2];
        param_1[2] = (long ***)(pppplVar2 + uVar6 * 4);
        pplStack_c0 = (long **)ppplStack_c8;
        ppplStack_b8 = ppplStack_c8;
        func_0x000109f5f81c(&ppplStack_c8);
        return pppplVar1;
      }
      FUN_109f5f6a4();
      func_0x000109f5f81c(&ppplStack_c8);
      __Unwind_Resume();
      lVar8 = (long)param_1[1] - (long)*param_1;
      uVar7 = (lVar8 >> 5) + 1;
      if (uVar7 >> 0x3b != 0) {
        FUN_109f5fee4();
        func_0x000109f6005c(&ppplStack_128);
        __Unwind_Resume();
        ppplVar3 = param_1[2];
        while (ppplVar3 != (long ***)0x0) {
          ppplVar9 = (long ***)*ppplVar3;
          FUN_109f8b610(ppplVar3 + 2);
          __ZdlPv(ppplVar3);
          ppplVar3 = ppplVar9;
        }
        ppplVar3 = *param_1;
        *param_1 = (long ***)0x0;
        if (ppplVar3 != (long ***)0x0) {
          __ZdlPv();
        }
        return param_1;
      }
      uVar5 = (long)param_1[2] - (long)*param_1;
      uVar6 = (long)uVar5 >> 4;
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (0x7fffffffffffffdf < uVar5) {
        uVar6 = 0x7ffffffffffffff;
      }
      ppplStack_108 = (long ***)param_1;
      if (uVar6 == 0) {
        pppplVar2 = (long ****)0x0;
      }
      else {
        pppplVar2 = param_1;
        FUN_109f5fef8();
      }
      pplStack_120 = (long **)((long)pppplVar2 + lVar8);
      uVar11 = param_2[1];
      uVar10 = *param_2;
      pplStack_120[2] = (long *)param_2[2];
      pplStack_120[1] = (long *)uVar11;
      *pplStack_120 = (long *)uVar10;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      pplStack_120[3] = (long *)param_2[3];
      pppplVar1 = (long ****)(pplStack_120 + 4);
      ppplVar3 = (long ***)((long)pplStack_120 + ((long)*param_1 - (long)param_1[1]));
      ppplStack_128 = (long ***)pppplVar2;
      ppplStack_118 = (long ***)pppplVar1;
      ppplStack_110 = (long ***)(pppplVar2 + uVar6 * 4);
      func_0x000109f5ff2c(param_1,*param_1,param_1[1],ppplVar3);
      ppplStack_128 = *param_1;
      *param_1 = ppplVar3;
      param_1[1] = (long ***)pppplVar1;
      ppplStack_110 = param_1[2];
      param_1[2] = (long ***)(pppplVar2 + uVar6 * 4);
      pplStack_120 = (long **)ppplStack_128;
      ppplStack_118 = ppplStack_128;
      func_0x000109f6005c(&ppplStack_128);
      return pppplVar1;
    }
    lVar4 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar6 = lVar4 * 0xd79435e50d79436;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0xd79435e50d7942 < (ulong)(lVar4 * -0x79435e50d79435e5)) {
      uVar6 = 0x1af286bca1af286;
    }
    ppplStack_48 = (long ***)param_1;
    if (uVar6 == 0) {
      pppplVar2 = (long ****)0x0;
    }
    else {
      pppplVar2 = param_1;
      FUN_109f59f4c();
    }
    lVar8 = (long)pppplVar2 + lVar8;
    lVar4 = (((long)param_2 * 0x98 - 0x98U) / 0x98) * 0x98 + 0x98;
    ppplStack_68 = (long ***)pppplVar2;
    pplStack_60 = (long **)lVar8;
    ppplStack_50 = (long ***)(pppplVar2 + uVar6 * 0x13);
    _bzero(lVar8,lVar4);
    ppplVar3 = (long ***)(lVar8 + lVar4);
    ppplVar9 = (long ***)((long)*param_1 + (lVar8 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar3;
    FUN_109f59f94(param_1,*param_1,param_1[1],ppplVar9);
    ppplStack_68 = *param_1;
    *param_1 = ppplVar9;
    param_1[1] = ppplVar3;
    ppplStack_50 = param_1[2];
    param_1[2] = (long ***)(pppplVar2 + uVar6 * 0x13);
    pppplVar1 = &ppplStack_68;
    pplStack_60 = (long **)ppplStack_68;
    pplStack_58 = (long **)ppplStack_68;
    func_0x000109f5a5fc(pppplVar1);
  }
  else {
    pppplVar1 = param_1;
    if (param_2 != (undefined8 *)0x0) {
      uVar7 = ((long)param_2 * 0x98 - 0x98U) / 0x98;
      pppplVar1 = pppplVar2;
      _bzero(pppplVar2,uVar7 * 0x98 + 0x98);
      pppplVar2 = pppplVar2 + uVar7 * 0x13 + 0x13;
    }
    param_1[1] = (long ***)pppplVar2;
  }
  return pppplVar1;
}



/* Entry: 109f8b394; end: 109f8b4a3;  */

long * FUN_109f8b394(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109f5f6b8();
    }
    plStack_50 = (long *)((long)plVar3 + lVar6);
    uVar8 = param_2[1];
    uVar7 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar8;
    *plStack_50 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plStack_50[3] = param_2[3];
    plVar2 = plStack_50 + 4;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar3;
    plStack_48 = plVar2;
    plStack_40 = plVar3 + uVar5 * 4;
    func_0x000109f5f6ec(param_1,*param_1,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 4);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000109f5f81c(&plStack_58);
    return plVar2;
  }
  FUN_109f5f6a4();
  func_0x000109f5f81c(&plStack_58);
  __Unwind_Resume();
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_109f5fee4();
    func_0x000109f6005c(&plStack_b8);
    __Unwind_Resume();
    plVar3 = (long *)param_1[2];
    while (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      FUN_109f8b610(plVar3 + 2);
      __ZdlPv(plVar3);
      plVar3 = (long *)lVar6;
    }
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 4;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar5 = 0x7ffffffffffffff;
  }
  plStack_98 = param_1;
  if (uVar5 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    FUN_109f5fef8();
  }
  plStack_b0 = (long *)((long)plVar3 + lVar6);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  plStack_b0[2] = param_2[2];
  plStack_b0[1] = uVar8;
  *plStack_b0 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  plStack_b0[3] = param_2[3];
  plVar2 = plStack_b0 + 4;
  lVar6 = (long)plStack_b0 + (*param_1 - param_1[1]);
  plStack_b8 = plVar3;
  plStack_a8 = plVar2;
  plStack_a0 = plVar3 + uVar5 * 4;
  func_0x000109f5ff2c(param_1,*param_1,param_1[1],lVar6);
  plStack_b8 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar2;
  plStack_a0 = (long *)param_1[2];
  param_1[2] = (long)(plVar3 + uVar5 * 4);
  plStack_b0 = plStack_b8;
  plStack_a8 = plStack_b8;
  func_0x000109f6005c(&plStack_b8);
  return plVar2;
}



/* Entry: 109f8b4a4; end: 109f8b5b3;  */

long * FUN_109f8b4a4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_109f5fee4();
    func_0x000109f6005c(&plStack_58);
    __Unwind_Resume();
    plVar3 = (long *)param_1[2];
    while (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      FUN_109f8b610(plVar3 + 2);
      __ZdlPv(plVar3);
      plVar3 = (long *)lVar6;
    }
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 4;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar5 = 0x7ffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar5 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    FUN_109f5fef8();
  }
  plStack_50 = (long *)((long)plVar3 + lVar6);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  plStack_50[2] = param_2[2];
  plStack_50[1] = uVar8;
  *plStack_50 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  plStack_50[3] = param_2[3];
  plVar2 = plStack_50 + 4;
  lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
  plStack_58 = plVar3;
  plStack_48 = plVar2;
  plStack_40 = plVar3 + uVar5 * 4;
  func_0x000109f5ff2c(param_1,*param_1,param_1[1],lVar6);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar2;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar3 + uVar5 * 4);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  func_0x000109f6005c(&plStack_58);
  return plVar2;
}



/* Entry: 109f8b5b4; end: 109f8b60f;  */

long * FUN_109f8b5b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109f8b610(plVar1 + 2);
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



/* Entry: 109f8b610; end: 109f8b65f;  */

void FUN_109f8b610(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  FUN_109f8b660(&puStack_28);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109f8b660; end: 109f8b6e7;  */

void FUN_109f8b660(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x20;
        lStack_38 = lVar1 + -0x18;
        FUN_109f8b660(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 109f8b6e8; end: 109f8b81f;  */

undefined8 ** FUN_109f8b6e8(undefined8 **param_1,long *param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  lVar17 = (long)param_1[1] - (long)*param_1;
  uVar13 = (lVar17 >> 3) * -0x3333333333333333 + 1;
  if (uVar13 < 0x666666666666667) {
    lVar11 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar15 = lVar11 * -0x6666666666666666;
    if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
      uVar15 = uVar13;
    }
    if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
      uVar15 = 0x666666666666666;
    }
    ppuStack_38 = param_1;
    if (uVar15 == 0) {
      ppuVar7 = (undefined8 **)0x0;
    }
    else {
      ppuVar7 = param_1;
      FUN_109f602dc();
    }
    ppuStack_50 = (undefined8 **)((long)ppuVar7 + lVar17);
    lVar11 = param_2[1];
    lVar17 = *param_2;
    ppuStack_50[2] = (undefined8 *)param_2[2];
    ppuStack_50[1] = (undefined8 *)lVar11;
    *ppuStack_50 = (undefined8 *)lVar17;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    lVar17 = param_2[3];
    *(int *)(ppuStack_50 + 4) = (int)param_2[4];
    ppuStack_50[3] = (undefined8 *)lVar17;
    ppuVar1 = ppuStack_50 + 5;
    puVar12 = (undefined8 *)((long)ppuStack_50 + ((long)*param_1 - (long)param_1[1]));
    ppuStack_58 = ppuVar7;
    ppuStack_48 = ppuVar1;
    ppuStack_40 = ppuVar7 + uVar15 * 5;
    func_0x000109f60320(param_1,*param_1,param_1[1],puVar12);
    ppuStack_58 = (undefined8 **)*param_1;
    *param_1 = puVar12;
    param_1[1] = ppuVar1;
    ppuStack_40 = (undefined8 **)param_1[2];
    param_1[2] = ppuVar7 + uVar15 * 5;
    ppuStack_50 = ppuStack_58;
    ppuStack_48 = ppuStack_58;
    func_0x000109f60458(&ppuStack_58);
    return ppuVar1;
  }
  FUN_109f602c8();
  func_0x000109f60458(&ppuStack_58);
  __Unwind_Resume();
  lVar17 = (long)param_1[1] - (long)*param_1;
  uVar13 = (lVar17 >> 5) + 1;
  if (uVar13 >> 0x3b == 0) {
    uVar9 = (long)param_1[2] - (long)*param_1;
    uVar15 = (long)uVar9 >> 4;
    if (uVar15 <= uVar13) {
      uVar15 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar15 = 0x7ffffffffffffff;
    }
    ppuStack_98 = param_1;
    if (uVar15 == 0) {
      ppuVar7 = (undefined8 **)0x0;
    }
    else {
      ppuVar7 = param_1;
      FUN_109f60670();
    }
    ppuStack_b0 = (undefined8 **)((long)ppuVar7 + lVar17);
    lVar11 = param_2[1];
    lVar17 = *param_2;
    ppuStack_b0[2] = (undefined8 *)param_2[2];
    ppuStack_b0[1] = (undefined8 *)lVar11;
    *ppuStack_b0 = (undefined8 *)lVar17;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    ppuStack_b0[3] = (undefined8 *)param_2[3];
    ppuVar1 = ppuStack_b0 + 4;
    puVar12 = (undefined8 *)((long)ppuStack_b0 + ((long)*param_1 - (long)param_1[1]));
    ppuStack_b8 = ppuVar7;
    ppuStack_a8 = ppuVar1;
    ppuStack_a0 = ppuVar7 + uVar15 * 4;
    func_0x000109f606a4(param_1,*param_1,param_1[1],puVar12);
    ppuStack_b8 = (undefined8 **)*param_1;
    *param_1 = puVar12;
    param_1[1] = ppuVar1;
    ppuStack_a0 = (undefined8 **)param_1[2];
    param_1[2] = ppuVar7 + uVar15 * 4;
    ppuStack_b0 = ppuStack_b8;
    ppuStack_a8 = ppuStack_b8;
    func_0x000109f607d4(&ppuStack_b8);
    return ppuVar1;
  }
  FUN_109f6065c();
  func_0x000109f607d4(&ppuStack_b8);
  __Unwind_Resume();
  uVar13 = param_2[1] - *param_2 >> 3;
  if (uVar13 <= param_3) {
    return param_1;
  }
  piVar2 = (int *)(*param_2 + param_3 * 8);
  piVar4 = (int *)*param_1;
  piVar19 = (int *)param_1[1];
  piVar16 = piVar4;
  if (piVar4 == piVar19) {
LAB_109f8b9bc:
    if (piVar16 != piVar19) goto LAB_109f8bb08;
  }
  else {
    do {
      if ((piVar2[1] == piVar16[1]) && ((piVar2[1] != 0 || (*piVar16 == *piVar2))))
      goto LAB_109f8b9bc;
      piVar16 = piVar16 + 8;
    } while (piVar16 != piVar19);
  }
  uVar14 = *(undefined8 *)piVar2;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  if (piVar19 < param_1[2]) {
    *(undefined8 *)piVar19 = uVar14;
    piVar19[2] = 0;
    piVar19[3] = 0;
    piVar19[4] = 0;
    piVar19[5] = 0;
    piVar19[6] = 0;
    piVar19[7] = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    piVar19 = piVar19 + 8;
    uStack_130 = 0;
  }
  else {
    uVar13 = ((long)piVar19 - (long)piVar4 >> 5) + 1;
    if (uVar13 >> 0x3b != 0) {
      FUN_109f8bc1c();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109f8bb48);
      (*pcVar6)();
    }
    uVar9 = (long)param_1[2] - (long)piVar4;
    uVar15 = (long)uVar9 >> 4;
    if (uVar15 <= uVar13) {
      uVar15 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar15 = 0x7ffffffffffffff;
    }
    plVar8 = param_2;
    FUN_109f8bc30();
    puVar3 = (undefined8 *)(uVar15 + ((long)piVar19 - (long)piVar4));
    *puVar3 = uVar14;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[2] = uStack_138;
    puVar3[1] = uStack_140;
    puVar3[3] = uStack_130;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    piVar19 = (int *)(puVar3 + 4);
    puVar18 = *param_1;
    puVar5 = param_1[1];
    puVar3 = (undefined8 *)((long)puVar3 + ((long)puVar18 - (long)puVar5));
    puVar10 = puVar3;
    puVar12 = puVar18;
    if ((long)puVar18 - (long)puVar5 != 0) {
      do {
        *puVar10 = *puVar12;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        uVar14 = puVar12[1];
        puVar10[2] = puVar12[2];
        puVar10[1] = uVar14;
        puVar10[3] = puVar12[3];
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12 = puVar12 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar12 != puVar5);
      do {
        puStack_128 = puVar18 + 1;
        FUN_109f8b660(&puStack_128);
        puVar18 = puVar18 + 4;
      } while (puVar18 != puVar5);
      puVar18 = *param_1;
    }
    *param_1 = puVar3;
    param_1[1] = (undefined8 *)piVar19;
    param_1[2] = (undefined8 *)(uVar15 + (long)plVar8 * 0x20);
    if (puVar18 != (undefined8 *)0x0) {
      __ZdlPv(puVar18);
    }
  }
  param_1[1] = (undefined8 *)piVar19;
  ppuVar7 = &puStack_128;
  puStack_128 = &uStack_140;
  FUN_109f8b660(ppuVar7);
  piVar16 = (int *)(param_1[1] + -4);
  uVar13 = param_2[1] - *param_2 >> 3;
  param_1 = ppuVar7;
LAB_109f8bb08:
  if (param_3 + 1 < uVar13) {
    param_1 = (undefined8 **)(piVar16 + 2);
    FUN_109f8b930(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109f8b820; end: 109f8b92f;  */

undefined8 ** FUN_109f8b820(undefined8 **param_1,long *param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  lVar16 = (long)param_1[1] - (long)*param_1;
  uVar13 = (lVar16 >> 5) + 1;
  if (uVar13 >> 0x3b == 0) {
    uVar9 = (long)param_1[2] - (long)*param_1;
    uVar12 = (long)uVar9 >> 4;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar12 = 0x7ffffffffffffff;
    }
    ppuStack_38 = param_1;
    if (uVar12 == 0) {
      ppuVar7 = (undefined8 **)0x0;
    }
    else {
      ppuVar7 = param_1;
      FUN_109f60670();
    }
    ppuStack_50 = (undefined8 **)((long)ppuVar7 + lVar16);
    lVar19 = param_2[1];
    lVar16 = *param_2;
    ppuStack_50[2] = (undefined8 *)param_2[2];
    ppuStack_50[1] = (undefined8 *)lVar19;
    *ppuStack_50 = (undefined8 *)lVar16;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    ppuStack_50[3] = (undefined8 *)param_2[3];
    ppuVar1 = ppuStack_50 + 4;
    puVar11 = (undefined8 *)((long)ppuStack_50 + ((long)*param_1 - (long)param_1[1]));
    ppuStack_58 = ppuVar7;
    ppuStack_48 = ppuVar1;
    ppuStack_40 = ppuVar7 + uVar12 * 4;
    func_0x000109f606a4(param_1,*param_1,param_1[1],puVar11);
    ppuStack_58 = (undefined8 **)*param_1;
    *param_1 = puVar11;
    param_1[1] = ppuVar1;
    ppuStack_40 = (undefined8 **)param_1[2];
    param_1[2] = ppuVar7 + uVar12 * 4;
    ppuStack_50 = ppuStack_58;
    ppuStack_48 = ppuStack_58;
    func_0x000109f607d4(&ppuStack_58);
    return ppuVar1;
  }
  FUN_109f6065c();
  func_0x000109f607d4(&ppuStack_58);
  __Unwind_Resume();
  uVar13 = param_2[1] - *param_2 >> 3;
  if (uVar13 <= param_3) {
    return param_1;
  }
  piVar2 = (int *)(*param_2 + param_3 * 8);
  piVar4 = (int *)*param_1;
  piVar18 = (int *)param_1[1];
  piVar15 = piVar4;
  if (piVar4 == piVar18) {
LAB_109f8b9bc:
    if (piVar15 != piVar18) goto LAB_109f8bb08;
  }
  else {
    do {
      if ((piVar2[1] == piVar15[1]) && ((piVar2[1] != 0 || (*piVar15 == *piVar2))))
      goto LAB_109f8b9bc;
      piVar15 = piVar15 + 8;
    } while (piVar15 != piVar18);
  }
  uVar14 = *(undefined8 *)piVar2;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (piVar18 < param_1[2]) {
    *(undefined8 *)piVar18 = uVar14;
    piVar18[2] = 0;
    piVar18[3] = 0;
    piVar18[4] = 0;
    piVar18[5] = 0;
    piVar18[6] = 0;
    piVar18[7] = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    piVar18 = piVar18 + 8;
    uStack_d0 = 0;
  }
  else {
    uVar13 = ((long)piVar18 - (long)piVar4 >> 5) + 1;
    if (uVar13 >> 0x3b != 0) {
      FUN_109f8bc1c();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109f8bb48);
      (*pcVar6)();
    }
    uVar9 = (long)param_1[2] - (long)piVar4;
    uVar12 = (long)uVar9 >> 4;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar12 = 0x7ffffffffffffff;
    }
    plVar8 = param_2;
    FUN_109f8bc30();
    puVar3 = (undefined8 *)(uVar12 + ((long)piVar18 - (long)piVar4));
    *puVar3 = uVar14;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[2] = uStack_d8;
    puVar3[1] = uStack_e0;
    puVar3[3] = uStack_d0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    piVar18 = (int *)(puVar3 + 4);
    puVar17 = *param_1;
    puVar5 = param_1[1];
    puVar3 = (undefined8 *)((long)puVar3 + ((long)puVar17 - (long)puVar5));
    puVar10 = puVar3;
    puVar11 = puVar17;
    if ((long)puVar17 - (long)puVar5 != 0) {
      do {
        *puVar10 = *puVar11;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        uVar14 = puVar11[1];
        puVar10[2] = puVar11[2];
        puVar10[1] = uVar14;
        puVar10[3] = puVar11[3];
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar11 != puVar5);
      do {
        puStack_c8 = puVar17 + 1;
        FUN_109f8b660(&puStack_c8);
        puVar17 = puVar17 + 4;
      } while (puVar17 != puVar5);
      puVar17 = *param_1;
    }
    *param_1 = puVar3;
    param_1[1] = (undefined8 *)piVar18;
    param_1[2] = (undefined8 *)(uVar12 + (long)plVar8 * 0x20);
    if (puVar17 != (undefined8 *)0x0) {
      __ZdlPv(puVar17);
    }
  }
  param_1[1] = (undefined8 *)piVar18;
  ppuVar7 = &puStack_c8;
  puStack_c8 = &uStack_e0;
  FUN_109f8b660(ppuVar7);
  piVar15 = (int *)(param_1[1] + -4);
  uVar13 = param_2[1] - *param_2 >> 3;
  param_1 = ppuVar7;
LAB_109f8bb08:
  if (param_3 + 1 < uVar13) {
    param_1 = (undefined8 **)(piVar15 + 2);
    FUN_109f8b930(param_1,param_2);
  }
  return param_1;
}



/* Entry: 109f8b930; end: 109f8bb5f;  */

void FUN_109f8b930(ulong *param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  uVar10 = param_2[1] - *param_2 >> 3;
  if (uVar10 <= param_3) {
    return;
  }
  piVar1 = (int *)(*param_2 + param_3 * 8);
  piVar3 = (int *)*param_1;
  piVar15 = (int *)param_1[1];
  piVar13 = piVar3;
  if (piVar3 == piVar15) {
LAB_109f8b9bc:
    if (piVar13 != piVar15) goto LAB_109f8bb08;
  }
  else {
    do {
      if ((piVar1[1] == piVar13[1]) && ((piVar1[1] != 0 || (*piVar13 == *piVar1))))
      goto LAB_109f8b9bc;
      piVar13 = piVar13 + 8;
    } while (piVar13 != piVar15);
  }
  uVar11 = *(undefined8 *)piVar1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (piVar15 < (int *)param_1[2]) {
    *(undefined8 *)piVar15 = uVar11;
    piVar15[2] = 0;
    piVar15[3] = 0;
    piVar15[4] = 0;
    piVar15[5] = 0;
    piVar15[6] = 0;
    piVar15[7] = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    piVar15 = piVar15 + 8;
    uStack_70 = 0;
  }
  else {
    uVar10 = ((long)piVar15 - (long)piVar3 >> 5) + 1;
    if (uVar10 >> 0x3b != 0) {
      FUN_109f8bc1c();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109f8bb48);
      (*pcVar5)();
    }
    uVar8 = (long)param_1[2] - (long)piVar3;
    uVar12 = (long)uVar8 >> 4;
    if (uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar12 = 0x7ffffffffffffff;
    }
    plVar6 = param_2;
    FUN_109f8bc30();
    puVar2 = (undefined8 *)(uVar12 + ((long)piVar15 - (long)piVar3));
    *puVar2 = uVar11;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[2] = uStack_78;
    puVar2[1] = uStack_80;
    puVar2[3] = uStack_70;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    piVar15 = (int *)(puVar2 + 4);
    puVar14 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar2 + ((long)puVar14 - (long)puVar4));
    puVar7 = puVar2;
    puVar9 = puVar14;
    if ((long)puVar14 - (long)puVar4 != 0) {
      do {
        *puVar7 = *puVar9;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        uVar11 = puVar9[1];
        puVar7[2] = puVar9[2];
        puVar7[1] = uVar11;
        puVar7[3] = puVar9[3];
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = puVar9 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar9 != puVar4);
      do {
        puStack_68 = puVar14 + 1;
        FUN_109f8b660(&puStack_68);
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar4);
      puVar14 = (undefined8 *)*param_1;
    }
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)piVar15;
    param_1[2] = uVar12 + (long)plVar6 * 0x20;
    if (puVar14 != (undefined8 *)0x0) {
      __ZdlPv(puVar14);
    }
  }
  param_1[1] = (ulong)piVar15;
  puStack_68 = &uStack_80;
  FUN_109f8b660(&puStack_68);
  piVar13 = (int *)(param_1[1] - 0x20);
  uVar10 = param_2[1] - *param_2 >> 3;
LAB_109f8bb08:
  if (param_3 + 1 < uVar10) {
    FUN_109f8b930(piVar13 + 2,param_2);
  }
  return;
}



/* Entry: 109f8bb60; end: 109f8bb73;  */

void FUN_109f8bb60(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3d == 0) {
    __Znwm((long)puVar2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar1;
  return;
}



/* Entry: 109f8bb74; end: 109f8bba7;  */

void FUN_109f8bb74(ulong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar1;
  return;
}



/* Entry: 109f8bba8; end: 109f8bbd3;  */

void FUN_109f8bba8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar1;
  return;
}



/* Entry: 109f8bbd4; end: 109f8bc1b;  */

void FUN_109f8bbd4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109f8b610(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109f8bc1c; end: 109f8bc2f;  */

undefined1  [16] FUN_109f8bc1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000104c4f740();
    if ((puVar1[0x18] & 1) == 0) {
      lVar3 = **(long **)(puVar1 + 8);
      for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != lVar3; lVar2 = lVar2 + -0x20) {
        lStack_68 = lVar2 + -0x18;
        FUN_109f8b660(&lStack_68);
      }
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = puVar1;
    return auVar5;
  }
  lVar2 = (long)puVar1 << 5;
  __Znwm(lVar2);
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 109f8bc30; end: 109f8bc63;  */

undefined1  [16] FUN_109f8bc30(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_58;
  
  if (param_1 >> 0x3b != 0) {
    func_0x000104c4f740();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      lVar2 = **(long **)(param_1 + 8);
      for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
        lStack_58 = lVar1 + -0x18;
        FUN_109f8b660(&lStack_58);
      }
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_1 << 5;
  __Znwm(lVar1);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 109f8bc64; end: 109f8bccf;  */

long FUN_109f8bc64(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
      lStack_38 = lVar1 + -0x18;
      FUN_109f8b660(&lStack_38);
    }
  }
  return param_1;
}



/* Entry: 109f8bcd0; end: 109f8c8c7;  */

/* WARNING: Removing unreachable block (ram,0x000109f8c4ac) */
/* WARNING: Removing unreachable block (ram,0x000109f8c2a8) */
/* WARNING: Removing unreachable block (ram,0x000109f8bec4) */
/* WARNING: Removing unreachable block (ram,0x000109f8c690) */
/* WARNING: Removing unreachable block (ram,0x000109f8c2e4) */
/* WARNING: Removing unreachable block (ram,0x000109f8c714) */
/* WARNING: Removing unreachable block (ram,0x000109f8bed4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f8bcd0(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 param_4,undefined8 *******param_5,undefined8 *******param_6,
                  long param_7,long param_8,byte param_9)

{
  char cVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  byte bVar9;
  undefined **ppuVar10;
  undefined8 unaff_x20;
  undefined8 ******unaff_x21;
  undefined8 *******unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined4 auStack_1b8 [2];
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 uStack_180;
  undefined8 *******pppppppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 uStack_158;
  undefined8 ******ppppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  uint uStack_114;
  undefined8 *******pppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined7 uStack_100;
  byte bStack_f9;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  undefined8 ******ppppppuStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_a9;
  undefined8 ******appppppuStack_a8 [3];
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 ******ppppppuStack_80;
  long lStack_78;
  
  uStack_114 = (uint)param_9;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar9 = *(byte *)(param_7 + 4);
  pppppppuVar8 = param_3;
  pppppppuStack_138 = param_1;
  uStack_130 = param_4;
  lStack_128 = param_8;
  pppppppuStack_120 = param_2;
  lVar12 = param_7;
  if (bVar9 == 0x13) {
    if (*(long *)(param_7 + 0x30) == 0) {
      func_0x000107c31940(&uStack_d8,&UNK_10f629d66);
      param_1 = &pppppppuStack_110;
      param_2 = (undefined8 *******)&uStack_d8;
      pppppppuVar8 = (undefined8 *******)0x1;
      FUN_109f76188();
LAB_109f8bfa4:
      *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
      pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bStack_f9,uStack_100);
      pppppppuStack_138[1] = ppppppuStack_108;
      pppppppuStack_138[3] = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
      pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
      *(undefined1 *)(pppppppuStack_138 + 5) = 0;
      if (cStack_c1 < '\0') {
        param_1 = (undefined8 *******)CONCAT44(uStack_d8._4_4_,(uint)uStack_d8);
        __ZdlPv();
      }
      goto LAB_109f8c600;
    }
    if (2 < *(byte *)(*(long *)(param_7 + 0x30) + 4) - 0x11) goto joined_r0x000109f8c2f8;
    cVar1 = *(char *)((long)param_6 + 0x17);
    if (cVar1 < '\0') {
      pppppppuVar8 = (undefined8 *******)param_6[1];
      func_0x000107c3192c(&uStack_90,*param_6);
      cVar1 = *(char *)((long)param_6 + 0x17);
      if (-1 < cVar1) goto LAB_109f8bfec;
      ppppppuVar7 = param_6[1];
    }
    else {
      uStack_88 = SUB87(param_6[1],0);
      uStack_81 = (undefined1)((ulong)param_6[1] >> 0x38);
      uStack_90._0_7_ = SUB87(*param_6,0);
      uStack_90._7_1_ = (byte)((ulong)*param_6 >> 0x38);
      ppppppuStack_80 = param_6[2];
LAB_109f8bfec:
      ppppppuVar7 = (undefined8 ******)(long)(int)cVar1;
    }
    param_1 = (undefined8 *******)&uStack_90;
    param_2 = (undefined8 *******)((long)ppppppuVar7 + 3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
    pppppppuVar6 = (undefined8 *******)CONCAT17(uStack_81,uStack_88);
    if (-1 < (long)ppppppuStack_80) {
      pppppppuVar6 = (undefined8 *******)((ulong)ppppppuStack_80 >> 0x38);
    }
    uStack_d8._0_4_ = (uint)uStack_d8 & 0xffffff00;
    cStack_b8 = '\0';
    if (*(char *)(lStack_128 + 0x20) == '\x01') {
      param_2 = *(undefined8 ********)(lStack_128 + 8);
      if (param_2 == *(undefined8 ********)(lStack_128 + 0x10)) {
        func_0x000107c31940(appppppuStack_a8,&UNK_10f629d47);
        param_1 = &pppppppuStack_110;
        param_2 = appppppuStack_a8;
        pppppppuVar8 = (undefined8 *******)0x2;
        FUN_109f76188();
      }
      else {
        if (*(uint *)((long)param_2 + 4) == 1) {
          param_1 = (undefined8 *******)&uStack_d8;
          func_0x000109f8cacc();
          goto LAB_109f8c04c;
        }
        func_0x000107c31940(appppppuStack_a8,&UNK_10f629d80);
        param_1 = &pppppppuStack_110;
        param_2 = appppppuStack_a8;
        pppppppuVar8 = (undefined8 *******)0x2;
        FUN_109f76188();
      }
      *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
      pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bStack_f9,uStack_100);
      pppppppuStack_138[1] = ppppppuStack_108;
      ppppppuStack_108 = (undefined8 ******)0x0;
      uStack_100 = 0;
      bStack_f9 = 0;
      ppppppuVar7 = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
      uStack_f8 = 0;
      uStack_f4 = 0;
      pppppppuStack_138[3] = ppppppuVar7;
      pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
      *(undefined1 *)(pppppppuStack_138 + 5) = 0;
      unaff_x20 = 0;
    }
    else {
LAB_109f8c04c:
      if (0 < *(int *)(param_7 + 0x10)) {
        unaff_x21 = (undefined8 ******)0x0;
        unaff_x22 = &pppppppuStack_110;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&uStack_90,&DAT_10f62a9e8,1);
          __ZNSt3__19to_stringEi(&pppppppuStack_110,unaff_x21);
          ppppppuVar7 = ppppppuStack_108;
          pppppppuVar8 = pppppppuStack_110;
          if (-1 < (char)bStack_f9) {
            ppppppuVar7 = (undefined8 ******)(ulong)bStack_f9;
            pppppppuVar8 = unaff_x22;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&uStack_90,pppppppuVar8,ppppppuVar7);
          if ((char)bStack_f9 < '\0') {
            __ZdlPv(pppppppuStack_110);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&uStack_90,&DAT_10f62a9ea,1);
          pppppppuStack_160 = (undefined8 *******)CONCAT71(pppppppuStack_160._1_7_,(char)uStack_114)
          ;
          param_1 = &pppppppuStack_110;
          param_2 = pppppppuStack_120;
          pppppppuVar8 = param_3;
          FUN_109f8bcd0();
          bVar9 = bStack_f9;
          uVar2 = uStack_100;
          ppppppuVar7 = ppppppuStack_108;
          if ((uStack_e8 & 1) == 0) {
            unaff_x20 = 0;
            appppppuStack_a8[1]._0_7_ =
                 (undefined7)(CONCAT35((undefined3)uStack_f4,CONCAT41(uStack_f8,bStack_f9)) >> 8);
            uVar3 = uStack_f4._3_1_;
            uStack_100 = 0;
            bStack_f9 = 0;
            uStack_f8 = 0;
            uStack_f4 = 0;
            ppppppuStack_108 = (undefined8 ******)0x0;
            *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
            *(ulong *)((long)pppppppuStack_138 + 0x17) = CONCAT71(appppppuStack_a8[1]._0_7_,bVar9);
            pppppppuStack_138[1] = ppppppuVar7;
            pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bVar9,uVar2);
            *(undefined1 *)((long)pppppppuStack_138 + 0x1f) = uVar3;
            pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
            *(undefined1 *)(pppppppuStack_138 + 5) = 0;
            goto LAB_109f8c2b4;
          }
          param_1 = (undefined8 *******)&uStack_90;
          pppppppuVar8 = (undefined8 *******)0x0;
          param_2 = pppppppuVar6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
          uVar4 = (int)unaff_x21 + 1;
          unaff_x21 = (undefined8 ******)(ulong)uVar4;
        } while ((int)uVar4 < *(int *)(param_7 + 0x10));
      }
      unaff_x20 = 1;
    }
LAB_109f8c2b4:
    if (cStack_b8 == '\x01') {
      pppppppuStack_110 = &ppppppuStack_d0;
      param_1 = &pppppppuStack_110;
      FUN_109f8b660();
    }
    if ((int)unaff_x20 == 0) goto LAB_109f8c600;
    bVar9 = *(byte *)(param_7 + 4);
joined_r0x000109f8c2f8:
    while (bVar9 == 0x13) {
      bVar9 = *(byte *)(*(long *)(lVar12 + 0x30) + 4);
      lVar12 = *(long *)(lVar12 + 0x30);
    }
    if (bVar9 < 0xc) {
      if ((int)param_5 == 0) {
        param_5 = (undefined8 *******)0x10;
        __Znwm();
        ppuVar10 = &PTR_FUN_110b87840;
        *param_5 = (undefined8 ******)&PTR_FUN_110b87840;
        *(undefined1 *)(param_5 + 1) = 0;
      }
      else {
        param_5 = (undefined8 *******)0x8;
        __Znwm();
        ppuVar10 = &PTR_DAT_110b878b8;
        *param_5 = (undefined8 ******)&PTR_DAT_110b878b8;
      }
      pppppppuVar6 = param_5;
      (*(code *)ppuVar10[2])(param_5,param_7);
      uVar4 = (uint)pppppppuVar6;
      param_1 = param_5;
      if (uVar4 - 1 < (uVar4 ^ uVar4 - 1)) {
        if ((((uint)uStack_130 + uVar4) - 1 & -uVar4) != (uint)uStack_130) {
          func_0x000107c31940(&uStack_d8,&UNK_10f629dfa);
          param_2 = (undefined8 *******)&uStack_d8;
          pppppppuVar8 = (undefined8 *******)0x2;
          FUN_109f76188(&pppppppuStack_110,param_2,2,&PTR_DAT_110b95ef8);
          goto LAB_109f8c518;
        }
        FUN_109f47700(&uStack_90,param_5,param_7);
        if (CONCAT17(uStack_90._7_1_,(undefined7)uStack_90) != CONCAT17(uStack_81,uStack_88)) {
          uStack_e4 = 0;
          ppppppuStack_108 = (undefined8 ******)0x0;
          pppppppuStack_110 = (undefined8 *******)0x0;
          uStack_100 = 0;
          bStack_f9 = 0;
          uStack_ec = 0;
          uStack_e8._0_1_ = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&pppppppuStack_110);
          uStack_f8 = (uint)uStack_130;
          lVar12 = CONCAT17(uStack_90._7_1_,(undefined7)uStack_90);
          uStack_e4 = *(undefined4 *)(lVar12 + 0x2c);
          uStack_ec = *(undefined4 *)(lVar12 + 0x24);
          uStack_f4 = (undefined4)*(undefined8 *)(lVar12 + 0x1c);
          uStack_f0 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x1c) >> 0x20);
          bVar9 = 1;
          if (((uStack_114 & 1) == 0) && ((*(byte *)(lStack_128 + 0x20) & 1) == 0)) {
            bVar9 = *(byte *)((long)pppppppuStack_120[5] + 0xd) ^ 1;
          }
          uVar4 = CONCAT31(uStack_e8._1_3_,bVar9);
          uStack_e8 = uVar4 & 0xffffff01;
          ppppppuVar7 = param_3[1];
          if ((*param_3 == ppppppuVar7) ||
             ((uint)(*(int *)((long)ppppppuVar7 - 0x14) + *(int *)(ppppppuVar7 + -3)) <= uStack_f8))
          {
            if (ppppppuVar7 < param_3[2]) {
              ppppppuVar7[2] = (undefined8 *****)CONCAT17(bStack_f9,uStack_100);
              ppppppuVar7[1] = ppppppuStack_108;
              *ppppppuVar7 = pppppppuStack_110;
              ppppppuStack_108 = (undefined8 ******)0x0;
              uStack_100 = 0;
              bStack_f9 = 0;
              pppppppuStack_110 = (undefined8 *******)0x0;
              ppppppuVar7[4] = (undefined8 *****)CONCAT44(uStack_ec,uStack_f0);
              ppppppuVar7[3] = (undefined8 *****)CONCAT44(uStack_f4,uStack_f8);
              ppppppuVar7[5] = (undefined8 *****)(CONCAT44(uStack_e4,uVar4) & 0xffffffffffffff01);
              pppppppuVar6 = (undefined8 *******)(ppppppuVar7 + 6);
              param_2 = param_6;
            }
            else {
              param_2 = &pppppppuStack_110;
              pppppppuVar6 = param_3;
              FUN_109f48c9c();
            }
            param_3[1] = pppppppuVar6;
            unaff_x20 = 1;
          }
          else {
            func_0x000107c31940(appppppuStack_a8,&UNK_10f629e3f);
            param_2 = appppppuStack_a8;
            pppppppuVar8 = (undefined8 *******)0x2;
            FUN_109f76188(&uStack_d8,param_2,2,&PTR_DAT_110b95f28);
            *(uint *)pppppppuStack_138 = (uint)uStack_d8;
            pppppppuStack_138[2] = (undefined8 ******)CONCAT17(cStack_c1,uStack_c8);
            pppppppuStack_138[1] = ppppppuStack_d0;
            pppppppuStack_138[3] = ppppppuStack_c0;
            pppppppuStack_138[4] = (undefined8 ******)CONCAT71(uStack_b7,cStack_b8);
            *(undefined1 *)(pppppppuStack_138 + 5) = 0;
            unaff_x20 = 0;
          }
          if ((char)bStack_f9 < '\0') {
            __ZdlPv(pppppppuStack_110);
          }
          pppppppuStack_110 = (undefined8 *******)&uStack_90;
          func_0x000109f48c10(&pppppppuStack_110);
          (*(code *)(*param_5)[1])();
          if ((int)unaff_x20 == 0) goto LAB_109f8c600;
          goto LAB_109f8c318;
        }
        func_0x000107c31940(&uStack_d8,&UNK_10f629e26);
        param_2 = (undefined8 *******)&uStack_d8;
        pppppppuVar8 = (undefined8 *******)0x2;
        FUN_109f76188(&pppppppuStack_110,param_2,2,&PTR_DAT_110b95f10);
        *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
        pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bStack_f9,uStack_100);
        pppppppuStack_138[1] = ppppppuStack_108;
        pppppppuStack_138[3] = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
        pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
        *(undefined1 *)(pppppppuStack_138 + 5) = 0;
        if (cStack_c1 < '\0') {
          __ZdlPv(CONCAT44(uStack_d8._4_4_,(uint)uStack_d8));
        }
        pppppppuStack_110 = (undefined8 *******)&uStack_90;
        func_0x000109f48c10(&pppppppuStack_110);
      }
      else {
        uStack_158 = uStack_130;
        pppppppuStack_160 = pppppppuVar6;
        FUN_109f7d45c(&uStack_d8,&UNK_10f629dcd);
        param_2 = (undefined8 *******)&uStack_d8;
        pppppppuVar8 = (undefined8 *******)0x2;
        FUN_109f76188(&pppppppuStack_110,param_2,2,&PTR_DAT_110b95ee0);
LAB_109f8c518:
        *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
        pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bStack_f9,uStack_100);
        pppppppuStack_138[1] = ppppppuStack_108;
        pppppppuStack_138[3] = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
        pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
        *(undefined1 *)(pppppppuStack_138 + 5) = 0;
        if (cStack_c1 < '\0') {
          __ZdlPv(CONCAT44(uStack_d8._4_4_,(uint)uStack_d8));
        }
      }
      (*(code *)(*param_5)[1])();
      goto LAB_109f8c600;
    }
  }
  else {
    if (bVar9 != 0x11) goto joined_r0x000109f8c2f8;
    if (*(long *)(param_7 + 0x30) == 0) {
      func_0x000107c31940(&uStack_d8,&UNK_10f629bf4);
      param_1 = &pppppppuStack_110;
      param_2 = (undefined8 *******)&uStack_d8;
      pppppppuVar8 = (undefined8 *******)0x1;
      FUN_109f76188();
      goto LAB_109f8bfa4;
    }
    if (0 < *(int *)(param_7 + 0x10)) {
      lVar13 = 0;
      lVar12 = 0;
      ppppppuStack_148 = &ppppppuStack_108;
      pppppppuStack_140 = &ppppppuStack_d0;
      do {
        lVar11 = *(long *)(param_7 + 0x30);
        if (*(long *)(lVar11 + lVar13) == 0) {
          func_0x000107c31940(&uStack_d8,&UNK_10f629be1);
          param_1 = &pppppppuStack_110;
          param_2 = (undefined8 *******)&uStack_d8;
          pppppppuVar8 = (undefined8 *******)0x1;
          FUN_109f76188();
          param_5 = param_3;
          goto LAB_109f8bfa4;
        }
        if (*(char *)(*(long *)(lVar11 + lVar13) + 4) == '\r') {
          func_0x000107c31940(&uStack_d8,&UNK_10f629d15);
          param_1 = &pppppppuStack_110;
          param_2 = (undefined8 *******)&uStack_d8;
          pppppppuVar8 = (undefined8 *******)0x2;
          FUN_109f76188();
          param_5 = param_3;
          goto LAB_109f8bfa4;
        }
        unaff_x22 = (undefined8 *******)(ulong)*(uint *)(lVar11 + lVar13 + 0x18);
        uStack_d8._0_4_ = (uint)uStack_d8 & 0xffffff00;
        cStack_b8 = '\0';
        if (*(char *)(lStack_128 + 0x20) == '\x01') {
          if (*(long *)(lStack_128 + 8) != *(long *)(lStack_128 + 0x10)) {
            FUN_109f8ca44(&pppppppuStack_110,*(long *)(lStack_128 + 8),*(long *)(lStack_128 + 0x10),
                          lVar12);
            FUN_109f8ccb4(&uStack_d8,&pppppppuStack_110);
            if ((char)uStack_f0 == '\x01') {
              uStack_90._0_7_ = SUB87(ppppppuStack_148,0);
              uStack_90._7_1_ = (byte)((ulong)ppppppuStack_148 >> 0x38);
              FUN_109f8b660(&uStack_90);
            }
            goto LAB_109f8bdec;
          }
          func_0x000107c31940(&uStack_90,&UNK_10f629d47);
          param_1 = &pppppppuStack_110;
          param_2 = (undefined8 *******)&uStack_90;
          pppppppuVar8 = (undefined8 *******)0x2;
          FUN_109f76188();
          *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
          pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bStack_f9,uStack_100);
          pppppppuStack_138[1] = ppppppuStack_108;
          pppppppuStack_138[3] = (undefined8 ******)CONCAT44(uStack_f4,uStack_f8);
          pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
          *(undefined1 *)(pppppppuStack_138 + 5) = 0;
LAB_109f8c698:
          param_5 = param_3;
          if (cStack_b8 == '\x01') {
            pppppppuStack_110 = pppppppuStack_140;
            param_1 = &pppppppuStack_110;
            FUN_109f8b660();
          }
          goto LAB_109f8c600;
        }
LAB_109f8bdec:
        ppppppuVar7 = param_6[1];
        if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
          ppppppuVar7 = (undefined8 ******)(ulong)*(byte *)((long)param_6 + 0x17);
        }
        func_0x000104c4f768(appppppuStack_a8,(long)ppppppuVar7 + 1,&uStack_a9);
        unaff_x21 = appppppuStack_a8;
        if (ppppppuVar7 != (undefined8 ******)0x0) {
          pppppppuVar8 = (undefined8 *******)*param_6;
          if (-1 < *(char *)((long)param_6 + 0x17)) {
            pppppppuVar8 = param_6;
          }
          _memmove(unaff_x21,pppppppuVar8,ppppppuVar7);
        }
        *(undefined2 *)((long)unaff_x21 + (long)ppppppuVar7) = 0x2e;
        unaff_x20 = *(undefined8 *)(lVar11 + lVar13 + 8);
        uVar5 = unaff_x20;
        _strlen(unaff_x20);
        ppppppuVar7 = appppppuStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar7,unaff_x20,uVar5);
        ppppppuStack_80 = (undefined8 ******)ppppppuVar7[2];
        uStack_88 = SUB87(ppppppuVar7[1],0);
        uStack_81 = (undefined1)((ulong)ppppppuVar7[1] >> 0x38);
        uStack_90._0_7_ = SUB87(*ppppppuVar7,0);
        uStack_90._7_1_ = (byte)((ulong)*ppppppuVar7 >> 0x38);
        ppppppuVar7[1] = (undefined8 *****)0x0;
        ppppppuVar7[2] = (undefined8 *****)0x0;
        *ppppppuVar7 = (undefined8 *****)0x0;
        pppppppuStack_160 = (undefined8 *******)CONCAT71(pppppppuStack_160._1_7_,(char)uStack_114);
        param_1 = &pppppppuStack_110;
        param_2 = pppppppuStack_120;
        pppppppuVar8 = param_3;
        FUN_109f8bcd0();
        bVar9 = bStack_f9;
        uVar2 = uStack_100;
        ppppppuVar7 = ppppppuStack_108;
        if ((uStack_e8 & 1) == 0) {
          uStack_90._0_7_ = uStack_100;
          uStack_90._7_1_ = bStack_f9;
          uStack_88 = (undefined7)
                      (CONCAT35((undefined3)uStack_f4,CONCAT41(uStack_f8,bStack_f9)) >> 8);
          uVar3 = uStack_f4._3_1_;
          uStack_100 = 0;
          bStack_f9 = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          ppppppuStack_108 = (undefined8 ******)0x0;
          *(undefined4 *)pppppppuStack_138 = pppppppuStack_110._0_4_;
          *(ulong *)((long)pppppppuStack_138 + 0x17) = CONCAT71(uStack_88,bVar9);
          pppppppuStack_138[1] = ppppppuVar7;
          pppppppuStack_138[2] = (undefined8 ******)CONCAT17(bVar9,uVar2);
          *(undefined1 *)((long)pppppppuStack_138 + 0x1f) = uVar3;
          pppppppuStack_138[4] = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
          *(undefined1 *)(pppppppuStack_138 + 5) = 0;
          param_3 = param_5;
          goto LAB_109f8c698;
        }
        if (cStack_b8 == '\x01') {
          pppppppuStack_110 = pppppppuStack_140;
          param_1 = &pppppppuStack_110;
          FUN_109f8b660();
        }
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 0x30;
      } while (lVar12 < *(int *)(param_7 + 0x10));
    }
  }
LAB_109f8c318:
  pppppppuStack_138[3] = (undefined8 ******)0x0;
  pppppppuStack_138[2] = (undefined8 ******)0x0;
  pppppppuStack_138[5] = (undefined8 ******)0x0;
  pppppppuStack_138[4] = (undefined8 ******)0x0;
  pppppppuStack_138[1] = (undefined8 ******)0x0;
  *pppppppuStack_138 = (undefined8 ******)0x0;
  *(undefined1 *)(pppppppuStack_138 + 5) = 1;
LAB_109f8c600:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_f9 < '\0') {
    __ZdlPv(pppppppuStack_110);
  }
  pppppppuStack_110 = (undefined8 *******)&uStack_90;
  func_0x000109f48c10(&pppppppuStack_110);
  (*(code *)(*param_5)[1])(param_5);
  pppppppuVar6 = param_1;
  __Unwind_Resume();
  pcStack_168 = FUN_109f8c8c8;
  ppppppuVar7 = param_2[4];
  pppppppuStack_190 = unaff_x22;
  ppppppuStack_188 = unaff_x21;
  uStack_180 = unaff_x20;
  pppppppuStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_109f7c7c8(ppppppuVar7,pppppppuVar8);
  if ((ulong)ppppppuVar7 >> 0x20 == 0) {
    ppppppuVar7 = param_2[7];
    func_0x0001099ae6c8(ppppppuVar7,pppppppuVar8);
    if (ppppppuVar7 == (undefined8 ******)0x0) {
      FUN_109f7d45c(auStack_1d0,&UNK_10f629e84);
      FUN_109f76188(auStack_1b8,auStack_1d0,2,&PTR_DAT_110b95f40);
      *(undefined4 *)pppppppuVar6 = auStack_1b8[0];
      pppppppuVar6[2] = ppppppuStack_1a8;
      pppppppuVar6[1] = ppppppuStack_1b0;
      pppppppuVar6[3] = ppppppuStack_1a0;
      pppppppuVar6[4] = ppppppuStack_198;
      *(undefined1 *)(pppppppuVar6 + 5) = 0;
      if (-1 < cStack_1b9) {
        return;
      }
      __ZdlPv(auStack_1d0[0]);
      return;
    }
    *(int *)pppppppuVar6 = (int)ppppppuVar7[5];
  }
  else {
    *(int *)pppppppuVar6 = (int)ppppppuVar7;
  }
  *(undefined1 *)(pppppppuVar6 + 5) = 1;
  return;
}



/* Entry: 109f8c8c8; end: 109f8c9bf;  */

void FUN_109f8c8c8(undefined4 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  FUN_109f7c7c8(uVar1,param_3);
  if (uVar1 >> 0x20 == 0) {
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x0001099ae6c8(lVar2,param_3);
    if (lVar2 == 0) {
      FUN_109f7d45c(auStack_70,&UNK_10f629e84);
      FUN_109f76188(auStack_58,auStack_70,2,&PTR_DAT_110b95f40);
      *param_1 = auStack_58[0];
      *(undefined8 *)(param_1 + 4) = uStack_48;
      *(undefined8 *)(param_1 + 2) = uStack_50;
      *(undefined8 *)(param_1 + 6) = uStack_40;
      *(undefined8 *)(param_1 + 8) = uStack_38;
      *(undefined1 *)(param_1 + 10) = 0;
      if (-1 < cStack_59) {
        return;
      }
      __ZdlPv(auStack_70[0]);
      return;
    }
    *param_1 = (int)*(undefined8 *)(lVar2 + 0x28);
  }
  else {
    *param_1 = (int)uVar1;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



/* Entry: 109f8c9c0; end: 109f8ca43;  */

void FUN_109f8c9c0(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return;
  }
  uStack_48 = *param_1;
  uStack_40 = *(undefined8 *)(param_1 + 2);
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 4);
  uStack_31 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
  uStack_30 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
  uStack_29 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_50 = &PTR_LAB_110b93678;
  func_0x000109f6d428(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f8ca30);
  (*pcVar1)();
}



/* Entry: 109f8ca44; end: 109f8cb4f;  */

void FUN_109f8ca44(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  
  if (param_2 == param_3) {
LAB_109f8ca7c:
    if (param_2 != param_3) {
      *param_1 = *(undefined8 *)param_2;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      FUN_109f8cb50(param_1 + 1,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                    *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 5);
      uVar1 = 1;
      goto LAB_109f8cabc;
    }
  }
  else {
    do {
      if (param_2[1] == 0 && *param_2 == param_4) goto LAB_109f8ca7c;
      param_2 = param_2 + 8;
    } while (param_2 != param_3);
  }
  uVar1 = 0;
  *(undefined1 *)param_1 = 0;
LAB_109f8cabc:
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 109f8cb50; end: 109f8cbd3;  */

void FUN_109f8cb50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109f8cbd4(param_1,param_4);
    lVar1 = param_1;
    FUN_109f8cc10(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109f8cbd4; end: 109f8cc0f;  */

undefined8 *
FUN_109f8cbd4(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    puVar1 = param_2;
    FUN_109f8bc30();
    *param_1 = (ulong)param_2;
    param_1[1] = (ulong)param_2;
    param_1[2] = (ulong)(param_2 + (long)puVar1 * 4);
    return param_2;
  }
  FUN_109f8bc1c();
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    *param_4 = *param_2;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[1] = 0;
    FUN_109f8cb50(param_4 + 1,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 5);
    param_4 = param_4 + 4;
  }
  return param_4;
}



/* Entry: 109f8cc10; end: 109f8ccb3;  */

undefined8 *
FUN_109f8cc10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    *param_4 = *param_2;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[1] = 0;
    FUN_109f8cb50(param_4 + 1,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 5);
    param_4 = param_4 + 4;
  }
  return param_4;
}



/* Entry: 109f8ccb4; end: 109f8cd63;  */

void FUN_109f8ccb4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == *(char *)(param_2 + 4)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      FUN_109f8cd64(param_1 + 1);
      uVar2 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      param_1[3] = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    param_1[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puStack_28 = param_1 + 1;
    FUN_109f8b660(&puStack_28);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



/* Entry: 109f8cd64; end: 109f8cddb;  */

void FUN_109f8cd64(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x20;
        lStack_38 = lVar1 + -0x18;
        FUN_109f8b660(&lStack_38);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109f8cddc; end: 109f8cf17;  */

long ******
FUN_109f8cddc(long ******param_1,long ******param_2,undefined8 param_3,long *****param_4)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  long ******pppppplVar4;
  long *****ppppplVar5;
  long lVar6;
  long *****ppppplStack_48;
  
  pppppplVar3 = (long ******)*param_1;
  pppppplVar4 = param_1;
  if ((long *****)((long)param_1[2] - (long)pppppplVar3 >> 5) < param_4) {
    pppppplVar1 = param_1;
    pppppplVar2 = param_2;
    FUN_109f8cd64();
    if ((ulong)param_4 >> 0x3b != 0) {
      FUN_109f8bc1c();
      param_1[1] = param_4;
      __Unwind_Resume();
      for (; pppppplVar1 != pppppplVar2; pppppplVar1 = pppppplVar1 + 4) {
        *pppppplVar3 = *pppppplVar1;
        if (pppppplVar1 != pppppplVar3) {
          FUN_109f8cddc(pppppplVar3 + 1,pppppplVar1[1],pppppplVar1[2],
                        (long)pppppplVar1[2] - (long)pppppplVar1[1] >> 5);
        }
        pppppplVar3 = pppppplVar3 + 4;
      }
      return pppppplVar3;
    }
    ppppplVar5 = (long *****)((long)param_1[2] - (long)*param_1 >> 4);
    if (ppppplVar5 <= param_4) {
      ppppplVar5 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)((long)param_1[2] - (long)*param_1)) {
      ppppplVar5 = (long *****)0x7ffffffffffffff;
    }
    FUN_109f8cbd4(param_1,ppppplVar5);
    FUN_109f8cc10(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = (long)param_1[1] - (long)pppppplVar3;
    if (param_4 <= (long *****)(lVar6 >> 5)) {
      FUN_109f8cf18(param_2,param_3);
      pppppplVar3 = param_2;
      for (pppppplVar4 = (long ******)param_1[1]; pppppplVar4 != param_2;
          pppppplVar4 = pppppplVar4 + -4) {
        ppppplStack_48 = (long *****)(pppppplVar4 + -3);
        pppppplVar3 = &ppppplStack_48;
        FUN_109f8b660(pppppplVar3);
      }
      param_1[1] = (long *****)param_2;
      return pppppplVar3;
    }
    FUN_109f8cf18(param_2,(long)param_2 + lVar6);
    FUN_109f8cc10(param_1,(long)param_2 + lVar6,param_3,param_1[1]);
  }
  param_1[1] = (long *****)pppppplVar4;
  return pppppplVar4;
}



/* Entry: 109f8cf18; end: 109f8cf83;  */

undefined8 * FUN_109f8cf18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    if (param_1 != param_3) {
      FUN_109f8cddc(param_3 + 1,param_1[1],param_1[2],(long)(param_1[2] - param_1[1]) >> 5);
    }
    param_3 = param_3 + 4;
  }
  return param_3;
}



/* Entry: 109f8cf84; end: 109f8d05b;  */

long * FUN_109f8cf84(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 109f8d05c; end: 109f8d1bf;  */

/* WARNING: Removing unreachable block (ram,0x000109f8dcc4) */
/* WARNING: Removing unreachable block (ram,0x000109f8dbec) */
/* WARNING: Removing unreachable block (ram,0x000109f8d400) */

long *******
FUN_109f8d05c(long *******param_1,undefined8 *param_2,undefined8 *param_3,long *******param_4,
             ulong param_5)

{
  ulong *puVar1;
  long *******ppppppplVar2;
  byte bVar3;
  long *******ppppppplVar4;
  uint uVar5;
  code *pcVar6;
  long *******ppppppplVar7;
  undefined8 *puVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  long ******pppppplVar20;
  long lVar21;
  ulong *puVar22;
  bool bVar23;
  char cVar24;
  undefined8 uVar25;
  long ******pppppplVar26;
  long *plVar27;
  long *plVar28;
  long ******pppppplStack_1b8;
  undefined8 uStack_1b0;
  undefined7 uStack_1a8;
  char cStack_1a1;
  long ******pppppplStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  uint uStack_188;
  undefined4 uStack_184;
  long ******pppppplStack_180;
  long ******pppppplStack_178;
  undefined7 uStack_170;
  byte bStack_169;
  undefined7 uStack_168;
  char cStack_161;
  long *****ppppplStack_160;
  byte bStack_158;
  long ******pppppplStack_150;
  long ******pppppplStack_148;
  undefined7 uStack_140;
  byte bStack_139;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long *****ppppplStack_130;
  byte bStack_128;
  undefined1 uStack_111;
  undefined7 uStack_110;
  byte bStack_109;
  undefined7 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long ******pppppplStack_58;
  long *****ppppplStack_50;
  long ******pppppplStack_48;
  long ******pppppplStack_40;
  long ******pppppplStack_38;
  
  lVar21 = (long)param_1[1] - (long)*param_1;
  uVar15 = (lVar21 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar15 < 0x492492492492493) {
    lVar12 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar18 = lVar12 * -0x2492492492492492;
    if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
      uVar18 = uVar15;
    }
    if (0x249249249249248 < (ulong)(lVar12 * 0x6db6db6db6db6db7)) {
      uVar18 = 0x492492492492492;
    }
    pppppplStack_38 = (long ******)param_1;
    if (uVar18 == 0) {
      ppppppplVar7 = (long *******)0x0;
    }
    else {
      ppppppplVar7 = param_1;
      FUN_109f5dba0();
    }
    ppppplStack_50 = (long *****)((long)ppppppplVar7 + lVar21);
    uVar25 = param_2[1];
    uVar13 = *param_2;
    ppppplStack_50[2] = (long ****)param_2[2];
    ppppplStack_50[1] = (long ****)uVar25;
    *ppppplStack_50 = (long ****)uVar13;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar13 = param_2[3];
    ppppplStack_50[5] = (long ****)0x0;
    ppppplStack_50[6] = (long ****)0x0;
    ppppplStack_50[3] = (long ****)uVar13;
    ppppplStack_50[4] = (long ****)0x0;
    uVar13 = param_2[4];
    ppppplStack_50[5] = (long ****)param_2[5];
    ppppplStack_50[4] = (long ****)uVar13;
    ppppplStack_50[6] = (long ****)param_2[6];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    ppppppplVar10 = (long *******)(ppppplStack_50 + 7);
    pppppplVar20 = (long ******)((long)ppppplStack_50 + ((long)*param_1 - (long)param_1[1]));
    pppppplStack_58 = (long ******)ppppppplVar7;
    pppppplStack_48 = (long ******)ppppppplVar10;
    pppppplStack_40 = (long ******)(ppppppplVar7 + uVar18 * 7);
    func_0x000109f5dbe8(param_1,*param_1,param_1[1],pppppplVar20);
    pppppplStack_58 = *param_1;
    *param_1 = pppppplVar20;
    param_1[1] = (long ******)ppppppplVar10;
    pppppplStack_40 = param_1[2];
    param_1[2] = (long ******)(ppppppplVar7 + uVar18 * 7);
    ppppplStack_50 = (long *****)pppppplStack_58;
    pppppplStack_48 = pppppplStack_58;
    func_0x000109f5dc74(&pppppplStack_58);
    return ppppppplVar10;
  }
  FUN_109f5db8c();
  func_0x000109f5dc74(&pppppplStack_58);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)((long)param_4 + 4);
  ppppppplVar7 = param_1;
  ppppppplVar10 = param_4;
  if (bVar3 < 0x11) {
    if (bVar3 != 0xd) {
      if (bVar3 != 0xe) goto joined_r0x000109f8d894;
      ppppppplVar7 = (long *******)(param_2 + 9);
      puVar8 = param_3;
      func_0x000107c2827c(ppppppplVar7,param_3,param_3);
      if (((ulong)puVar8 & 1) == 0) goto LAB_109f8dd14;
      ppppppplVar7 = &pppppplStack_150;
      FUN_109f8c8c8(ppppppplVar7,param_2,param_3);
      if (bStack_128 != 1) {
        *(undefined4 *)param_1 = pppppplStack_150._0_4_;
        param_1[1] = pppppplStack_148;
        param_1[2] = (long ******)CONCAT17(bStack_139,uStack_140);
        *(ulong *)((long)param_1 + 0x17) =
             CONCAT35((undefined3)uStack_134,CONCAT41(uStack_138,bStack_139));
        *(char *)((long)param_1 + 0x1f) = uStack_134._3_1_;
        param_1[4] = (long ******)ppppplStack_130;
        goto LAB_109f8dd7c;
      }
      FUN_109f8c9c0(&pppppplStack_150);
      uVar19 = pppppplStack_150._0_4_;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_f1 = 0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      uStack_e8 = 0xffffffff;
      uStack_e0 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_100,param_3);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar19);
      func_0x000109f4911c();
      uStack_e8 = CONCAT44((int)param_4,(undefined4)uStack_e8);
      uStack_e0 = 0;
      lVar21 = param_2[1];
      puVar8 = *(undefined8 **)(lVar21 + 0x70);
      if (puVar8 < *(undefined8 **)(lVar21 + 0x78)) {
        puVar8[2] = uStack_f0;
        puVar8[1] = CONCAT17(uStack_f1,uStack_f8);
        *puVar8 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        uStack_f8 = 0;
        uStack_f1 = 0;
        uStack_f0 = 0;
        uStack_100._0_4_ = 0;
        uStack_100._4_4_ = 0;
        puVar8[3] = uStack_e8;
        *(undefined4 *)(puVar8 + 4) = 0;
        *(undefined8 **)(lVar21 + 0x70) = puVar8 + 5;
      }
      else {
        pppppplVar20 = (long ******)(lVar21 + 0x68);
        lVar12 = (long)puVar8 - (long)*pppppplVar20;
        uVar15 = (lVar12 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar15) {
          FUN_109f5fc94();
          goto LAB_109f8dda4;
        }
        lVar16 = (long)*(undefined8 **)(lVar21 + 0x78) - (long)*pppppplVar20 >> 3;
        uVar18 = lVar16 * -0x6666666666666666;
        if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
          uVar18 = uVar15;
        }
        if (0x333333333333332 < (ulong)(lVar16 * -0x3333333333333333)) {
          uVar18 = 0x666666666666666;
        }
        ppppplStack_160 = (long *****)pppppplVar20;
        if (uVar18 == 0) {
          pppppplVar9 = (long ******)0x0;
        }
        else {
          pppppplVar9 = pppppplVar20;
          FUN_109f5fca8();
        }
        pppppplStack_178 = (long ******)((long)pppppplVar9 + lVar12);
        pppppplVar26 = pppppplVar9 + uVar18 * 5;
        uStack_168 = SUB87(pppppplVar26,0);
        cStack_161 = (char)((ulong)pppppplVar26 >> 0x38);
        pppppplStack_178[2] = (long *****)uStack_f0;
        pppppplStack_178[1] = (long *****)CONCAT17(uStack_f1,uStack_f8);
        *pppppplStack_178 = (long *****)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        uStack_f8 = 0;
        uStack_f1 = 0;
        uStack_f0 = 0;
        uStack_100._0_4_ = 0;
        uStack_100._4_4_ = 0;
        *(undefined4 *)(pppppplStack_178 + 4) = uStack_e0;
        pppppplStack_178[3] = (long *****)uStack_e8;
        puVar8 = pppppplStack_178 + 5;
        uStack_170 = SUB87(puVar8,0);
        bStack_169 = (byte)((ulong)puVar8 >> 0x38);
        lVar12 = (long)pppppplStack_178 + (*(long *)(lVar21 + 0x68) - *(long *)(lVar21 + 0x70));
        pppppplStack_180 = pppppplVar9;
        func_0x000109f5fcec(pppppplVar20,*(long *)(lVar21 + 0x68),*(long *)(lVar21 + 0x70),lVar12);
        pppppplStack_180 = *(long *******)(lVar21 + 0x68);
        *(long *)(lVar21 + 0x68) = lVar12;
        *(undefined8 **)(lVar21 + 0x70) = puVar8;
        uVar13 = *(undefined8 *)(lVar21 + 0x78);
        *(long *******)(lVar21 + 0x78) = pppppplVar26;
        uStack_170 = SUB87(pppppplStack_180,0);
        bStack_169 = (byte)((ulong)pppppplStack_180 >> 0x38);
        uStack_168 = (undefined7)uVar13;
        cStack_161 = (char)((ulong)uVar13 >> 0x38);
        param_4 = &pppppplStack_180;
        pppppplStack_178 = pppppplStack_180;
        func_0x000109f5fe24(param_4);
        *(undefined8 **)(lVar21 + 0x70) = puVar8;
      }
      ppppppplVar7 = param_4;
      if (((bStack_128 & 1) != 0) ||
         (ppppppplVar10 = (long *******)pppppplStack_148, -1 < uStack_134)) goto LAB_109f8dd14;
LAB_109f8dce0:
      __ZdlPv(ppppppplVar10);
      ppppppplVar7 = ppppppplVar10;
      goto LAB_109f8dd14;
    }
    ppppppplVar7 = (long *******)(param_2 + 9);
    puVar8 = param_3;
    func_0x000107c2827c(ppppppplVar7,param_3,param_3);
    if (((ulong)puVar8 & 1) == 0) goto LAB_109f8dd14;
    ppppppplVar7 = &pppppplStack_150;
    FUN_109f8c8c8(ppppppplVar7,param_2,param_3);
    if ((bStack_128 & 1) == 0) {
      uStack_110 = uStack_140;
      bStack_109 = bStack_139;
      uStack_108 = (undefined7)
                   (CONCAT35((undefined3)uStack_134,CONCAT41(uStack_138,bStack_139)) >> 8);
      ppppppplVar10 = (long *******)pppppplStack_148;
      uVar19 = pppppplStack_150._0_4_;
      cVar24 = uStack_134._3_1_;
    }
    else {
      FUN_109f8c9c0(&pppppplStack_150);
      uVar19 = pppppplStack_150._0_4_;
      plVar28 = *(long **)(param_2[4] + 0x2d8);
      for (plVar27 = *(long **)(param_2[4] + 0x2d0); plVar27 != plVar28; plVar27 = plVar27 + 1) {
        lVar12 = *plVar27;
        lVar21 = *(long *)(lVar12 + 0x18);
        if (lVar21 != 0) {
          lVar16 = lVar21;
          _strlen();
          if ((long)*(char *)((long)param_3 + 0x17) < 0) {
            if (lVar16 == param_3[1]) {
              if (lVar16 != -1) {
                puVar8 = (undefined8 *)*param_3;
                goto LAB_109f8d4c0;
              }
              goto LAB_109f8dd90;
            }
          }
          else {
            puVar8 = param_3;
            if (lVar16 == *(char *)((long)param_3 + 0x17)) {
LAB_109f8d4c0:
              _memcmp(puVar8,lVar21);
              if ((int)puVar8 == 0) {
                uStack_100._0_4_ = (undefined4)lVar12;
                uStack_100._4_4_ = (undefined4)((ulong)lVar12 >> 0x20);
                lVar21 = param_2[4] + 0x218;
                FUN_109f7d2ac(lVar21,&uStack_100);
                if (lVar21 != 0) {
                  lVar12 = 0x18;
                  goto LAB_109f8d608;
                }
              }
            }
          }
        }
      }
      lVar21 = param_2[8];
      func_0x0001099ae6c8(lVar21,param_3);
      if (lVar21 == 0) {
        FUN_109f7d45c(&pppppplStack_1a0,&UNK_10f62a0ba);
        ppppppplVar7 = (long *******)&uStack_100;
        FUN_109f76188(ppppppplVar7,&pppppplStack_1a0,2,&PTR_DAT_110b96188);
        uVar19 = (undefined4)uStack_100;
        pppppplStack_178 = (long ******)CONCAT17(uStack_f1,uStack_f8);
        uStack_170 = (undefined7)uStack_f0;
        bStack_169 = (byte)((ulong)uStack_f0 >> 0x38);
        ppppplStack_130 = (long *****)CONCAT44(uStack_dc,uStack_e0);
        uStack_168 = (undefined7)uStack_e8;
        cStack_161 = (char)((ulong)uStack_e8 >> 0x38);
        if (lStack_190 < 0) {
          ppppppplVar7 = (long *******)pppppplStack_1a0;
          __ZdlPv(pppppplStack_1a0);
        }
        bVar23 = false;
        uStack_110 = uStack_170;
        bStack_109 = bStack_169;
        uStack_108 = uStack_168;
        ppppppplVar10 = (long *******)pppppplStack_178;
        cVar24 = cStack_161;
      }
      else {
        lVar12 = 0x28;
LAB_109f8d608:
        pppppplStack_180 =
             (long ******)CONCAT44(pppppplStack_180._4_4_,(int)*(undefined8 *)(lVar21 + lVar12));
        bStack_158 = 1;
        FUN_109f8c9c0(&pppppplStack_180);
        uVar5 = (uint)pppppplStack_180;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_f1 = 0;
        uStack_100._0_4_ = 0;
        uStack_100._4_4_ = 0;
        uStack_e8 = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_100,param_3);
        uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar19);
        ppppppplVar7 = param_4;
        func_0x000109f4911c();
        uStack_e8 = CONCAT44((int)ppppppplVar7,(undefined4)uStack_e8);
        lVar21 = param_2[1];
        puVar8 = *(undefined8 **)(lVar21 + 0x58);
        if (puVar8 < *(undefined8 **)(lVar21 + 0x60)) {
          puVar8[2] = uStack_f0;
          puVar8[1] = CONCAT17(uStack_f1,uStack_f8);
          *puVar8 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
          uStack_f8 = 0;
          uStack_f1 = 0;
          uStack_f0 = 0;
          uStack_100._0_4_ = 0;
          uStack_100._4_4_ = 0;
          puVar8[3] = uStack_e8;
          puVar8 = puVar8 + 4;
        }
        else {
          puVar8 = (undefined8 *)(lVar21 + 0x50);
          FUN_109f8b394(puVar8,&uStack_100);
        }
        *(undefined8 **)(lVar21 + 0x58) = puVar8;
        pppppplStack_1a0 = (long ******)0x0;
        uStack_198 = 0;
        lStack_190 = 0;
        uStack_188 = uVar5;
        uVar15 = param_3[1];
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar15 = (ulong)*(byte *)((long)param_3 + 0x17);
        }
        func_0x000104c4f768(&pppppplStack_1b8,uVar15 + 5,&uStack_111);
        ppppppplVar7 = (long *******)pppppplStack_1b8;
        if (-1 < cStack_1a1) {
          ppppppplVar7 = &pppppplStack_1b8;
        }
        if (uVar15 != 0) {
          puVar8 = (undefined8 *)*param_3;
          if (-1 < *(char *)((long)param_3 + 0x17)) {
            puVar8 = param_3;
          }
          _memmove(ppppppplVar7,puVar8,uVar15);
        }
        *(undefined4 *)((long)ppppppplVar7 + uVar15) = 0x53706d53;
        *(undefined2 *)((undefined4 *)((long)ppppppplVar7 + uVar15) + 1) = 0x43;
        lVar21 = param_2[1];
        puVar8 = *(undefined8 **)(lVar21 + 0x88);
        uStack_198 = uStack_1b0;
        pppppplStack_1a0 = pppppplStack_1b8;
        lStack_190 = CONCAT17(cStack_1a1,uStack_1a8);
        uStack_184 = 1;
        if (((ulong)*param_4 & 0x10000000000000) != 0) {
          uStack_184 = 2;
        }
        if (puVar8 < *(undefined8 **)(lVar21 + 0x90)) {
          puVar8[1] = uStack_1b0;
          *puVar8 = pppppplStack_1b8;
          puVar8[2] = lStack_190;
          uStack_198 = 0;
          lStack_190 = 0;
          pppppplStack_1a0 = (long ******)0x0;
          uVar15 = CONCAT44(uStack_184,uStack_188);
          puVar8[3] = uVar15;
          ppppppplVar7 = (long *******)(puVar8 + 4);
        }
        else {
          ppppppplVar7 = (long *******)(lVar21 + 0x80);
          FUN_109f8b4a4(ppppppplVar7,&pppppplStack_1a0);
          uVar15 = (ulong)uStack_188;
        }
        lVar12 = uStack_e8;
        *(long ********)(lVar21 + 0x88) = ppppppplVar7;
        plVar27 = (long *)param_2[2];
        puVar22 = (ulong *)plVar27[1];
        if (puVar22 < (ulong *)plVar27[2]) {
          *puVar22 = param_5 & 0xffffffff | uStack_e8 << 0x20;
          puVar22[1] = param_5 & 0xffffffff | uVar15 << 0x20;
          puVar22 = puVar22 + 2;
        }
        else {
          lVar21 = (long)puVar22 - *plVar27;
          uVar18 = (lVar21 >> 4) + 1;
          if (uVar18 >> 0x3c != 0) {
            FUN_109f60920();
            goto LAB_109f8dda4;
          }
          uVar14 = plVar27[2] - *plVar27;
          uVar17 = (long)uVar14 >> 3;
          if (uVar17 <= uVar18) {
            uVar17 = uVar18;
          }
          if (0x7fffffffffffffef < uVar14) {
            uVar17 = 0xfffffffffffffff;
          }
          plVar28 = plVar27;
          FUN_109f60934();
          puVar1 = (ulong *)((long)plVar28 + lVar21);
          *puVar1 = param_5 & 0xffffffff | lVar12 << 0x20;
          puVar1[1] = param_5 & 0xffffffff | uVar15 << 0x20;
          puVar22 = puVar1 + 2;
          lVar21 = (long)puVar1 - (plVar27[1] - *plVar27);
          _memcpy(lVar21);
          ppppppplVar7 = (long *******)*plVar27;
          *plVar27 = lVar21;
          plVar27[1] = (long)puVar22;
          plVar27[2] = (long)(plVar28 + uVar17 * 2);
          if (ppppppplVar7 != (long *******)0x0) {
            __ZdlPv();
          }
        }
        plVar27[1] = (long)puVar22;
        uStack_110 = 0;
        bStack_109 = 0;
        uStack_108 = 0;
        if (lStack_190 < 0) {
          ppppppplVar7 = (long *******)pppppplStack_1a0;
          __ZdlPv(pppppplStack_1a0);
        }
        uVar19 = 0;
        bVar23 = true;
        ppppppplVar10 = (long *******)0x0;
        if ((bStack_158 & 1) == 0) {
          ppppplStack_130 = (long *****)0x0;
          cVar24 = '\0';
          if (cStack_161 < '\0') {
            ppppppplVar7 = (long *******)pppppplStack_178;
            __ZdlPv(pppppplStack_178);
            uVar19 = 0;
            ppppplStack_130 = (long *****)0x0;
            ppppppplVar10 = (long *******)0x0;
            cVar24 = '\0';
          }
        }
        else {
          ppppplStack_130 = (long *****)0x0;
          cVar24 = '\0';
        }
      }
      if (((bStack_128 & 1) == 0) && (uStack_134 < 0)) {
        ppppppplVar7 = (long *******)pppppplStack_148;
        __ZdlPv(pppppplStack_148);
      }
      if (bVar23) goto LAB_109f8dd14;
    }
    *(undefined4 *)param_1 = uVar19;
    param_1[1] = (long ******)ppppppplVar10;
    param_1[2] = (long ******)CONCAT17(bStack_109,uStack_110);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_108,bStack_109);
    *(char *)((long)param_1 + 0x1f) = cVar24;
    param_1[4] = (long ******)ppppplStack_130;
LAB_109f8dd7c:
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    if (bVar3 == 0x13) {
      pppppplVar20 = param_4[6];
      if (pppppplVar20 == (long ******)0x0) {
        func_0x000107c31940(&pppppplStack_180,&UNK_10f629d66);
        ppppppplVar7 = &pppppplStack_150;
        FUN_109f76188(ppppppplVar7,&pppppplStack_180,1,&PTR_DAT_110b96170);
        goto LAB_109f8d574;
      }
      if (2 < *(byte *)((long)pppppplVar20 + 4) - 0x11) goto joined_r0x000109f8d894;
      cVar24 = *(char *)((long)param_3 + 0x17);
      if (cVar24 < '\0') {
        func_0x000107c3192c(&pppppplStack_180,*param_3,param_3[1]);
        cVar24 = *(char *)((long)param_3 + 0x17);
        if (-1 < cVar24) goto LAB_109f8d74c;
        lVar21 = param_3[1];
      }
      else {
        pppppplStack_178 = (long ******)param_3[1];
        pppppplStack_180 = (long ******)*param_3;
        uStack_170 = (undefined7)param_3[2];
        bStack_169 = (byte)((ulong)param_3[2] >> 0x38);
LAB_109f8d74c:
        lVar21 = (long)(int)cVar24;
      }
      ppppppplVar7 = &pppppplStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (ppppppplVar7,lVar21 + 3);
      ppppppplVar2 = (long *******)pppppplStack_178;
      if (-1 < (char)bStack_169) {
        ppppppplVar2 = (long *******)(ulong)bStack_169;
      }
      if (0 < *(int *)(param_4 + 2)) {
        iVar11 = 0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppplStack_180,&DAT_10f62a9e8,1);
          __ZNSt3__19to_stringEi(&pppppplStack_150,iVar11);
          ppppppplVar7 = (long *******)pppppplStack_148;
          ppppppplVar4 = (long *******)pppppplStack_150;
          if (-1 < (char)bStack_139) {
            ppppppplVar7 = (long *******)(ulong)bStack_139;
            ppppppplVar4 = &pppppplStack_150;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppplStack_180,ppppppplVar4,ppppppplVar7);
          if ((char)bStack_139 < '\0') {
            __ZdlPv(pppppplStack_150);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppplStack_180,&DAT_10f62a9ea,1);
          ppppppplVar7 = &pppppplStack_150;
          FUN_109f8d1c0(ppppppplVar7,param_2,&pppppplStack_180,pppppplVar20,param_5);
          if ((bStack_128 & 1) == 0) {
            uStack_100._0_4_ = (undefined4)uStack_140;
            uStack_100._4_4_ = CONCAT13(bStack_139,(int3)((uint7)uStack_140 >> 0x20));
            uStack_f8 = (undefined7)
                        (CONCAT35((undefined3)uStack_134,CONCAT41(uStack_138,bStack_139)) >> 8);
            *(undefined4 *)param_1 = pppppplStack_150._0_4_;
            param_1[1] = pppppplStack_148;
            param_1[2] = (long ******)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
            *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_f8,bStack_139);
            *(char *)((long)param_1 + 0x1f) = uStack_134._3_1_;
            param_1[4] = (long ******)ppppplStack_130;
            *(undefined1 *)(param_1 + 5) = 0;
            bVar23 = true;
            goto LAB_109f8d878;
          }
          ppppppplVar7 = &pppppplStack_180;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (ppppppplVar7,ppppppplVar2,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_4 + 2));
      }
      bVar23 = false;
LAB_109f8d878:
      if ((char)bStack_169 < '\0') {
        ppppppplVar7 = (long *******)pppppplStack_180;
        __ZdlPv(pppppplStack_180);
      }
      if (bVar23) goto LAB_109f8dd28;
      bVar3 = *(byte *)((long)param_4 + 4);
    }
    else if (bVar3 == 0x11) {
      if (param_4[6] != (long ******)0x0) {
        iVar11 = *(int *)(param_4 + 2);
        if (0 < iVar11) {
          lVar12 = 0;
          lVar21 = 0;
          do {
            pppppplVar20 = param_4[6];
            if (*(char *)(param_2[5] + 0xc) == '\x01') {
              if (*(char *)(*(long *)((long)pppppplVar20 + lVar12) + 4) != '\r') goto LAB_109f8d338;
            }
            else {
              if (*(long *)((long)pppppplVar20 + lVar12) == 0) {
                func_0x000107c31940(&pppppplStack_180,&UNK_10f629be1);
                ppppppplVar7 = &pppppplStack_150;
                FUN_109f76188(ppppppplVar7,&pppppplStack_180,1,&PTR_DAT_110b96158);
                *(undefined4 *)param_1 = pppppplStack_150._0_4_;
                param_1[2] = (long ******)CONCAT17(bStack_139,uStack_140);
                param_1[1] = pppppplStack_148;
                param_1[3] = (long ******)CONCAT44(uStack_134,uStack_138);
                goto LAB_109f8d58c;
              }
LAB_109f8d338:
              uVar15 = param_3[1];
              if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
                uVar15 = (ulong)*(byte *)((long)param_3 + 0x17);
              }
              func_0x000104c4f768(&uStack_100,uVar15 + 1,&pppppplStack_1a0);
              if (uVar15 != 0) {
                puVar8 = (undefined8 *)*param_3;
                if (-1 < *(char *)((long)param_3 + 0x17)) {
                  puVar8 = param_3;
                }
                _memmove(&uStack_100,puVar8,uVar15);
              }
              *(undefined2 *)((long)&uStack_100 + uVar15) = 0x2e;
              uVar25 = *(undefined8 *)((long)pppppplVar20 + lVar12 + 8);
              uVar13 = uVar25;
              _strlen(uVar25);
              puVar8 = &uStack_100;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar8,uVar25,uVar13);
              pppppplStack_178 = (long ******)puVar8[1];
              pppppplStack_180 = (long ******)*puVar8;
              uStack_170 = (undefined7)puVar8[2];
              bStack_169 = (byte)((ulong)puVar8[2] >> 0x38);
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = 0;
              ppppppplVar7 = &pppppplStack_150;
              FUN_109f8d1c0(ppppppplVar7,param_2,&pppppplStack_180,
                            *(undefined8 *)((long)pppppplVar20 + lVar12),param_5);
              if ((char)bStack_169 < '\0') {
                ppppppplVar7 = (long *******)pppppplStack_180;
                __ZdlPv(pppppplStack_180);
              }
              if ((bStack_128 & 1) == 0) {
                param_1[1] = pppppplStack_148;
                param_1[2] = (long ******)CONCAT17(bStack_139,uStack_140);
                *(ulong *)((long)param_1 + 0x17) =
                     CONCAT35((undefined3)uStack_134,CONCAT41(uStack_138,bStack_139));
                *(char *)((long)param_1 + 0x1f) = uStack_134._3_1_;
                param_1[4] = (long ******)ppppplStack_130;
                *(undefined1 *)(param_1 + 5) = 0;
                *(undefined4 *)param_1 = pppppplStack_150._0_4_;
                goto LAB_109f8dd28;
              }
              iVar11 = *(int *)(param_4 + 2);
            }
            lVar21 = lVar21 + 1;
            lVar12 = lVar12 + 0x30;
          } while (lVar21 < iVar11);
        }
        goto LAB_109f8dd14;
      }
      func_0x000107c31940(&pppppplStack_180,&UNK_10f629bf4);
      ppppppplVar7 = &pppppplStack_150;
      FUN_109f76188(ppppppplVar7,&pppppplStack_180,1,&PTR_DAT_110b96140);
LAB_109f8d574:
      *(undefined4 *)param_1 = pppppplStack_150._0_4_;
      param_1[2] = (long ******)CONCAT17(bStack_139,uStack_140);
      param_1[1] = pppppplStack_148;
      param_1[3] = (long ******)CONCAT44(uStack_134,uStack_138);
LAB_109f8d58c:
      param_1[4] = (long ******)ppppplStack_130;
      *(undefined1 *)(param_1 + 5) = 0;
      if ((char)bStack_169 < '\0') {
        ppppppplVar7 = (long *******)pppppplStack_180;
        __ZdlPv(pppppplStack_180);
      }
      goto LAB_109f8dd28;
    }
joined_r0x000109f8d894:
    while (bVar3 == 0x13) {
      bVar3 = *(byte *)((long)ppppppplVar10[6] + 4);
      ppppppplVar10 = (long *******)ppppppplVar10[6];
    }
    if ((bVar3 < 0xc) && ((*(byte *)(param_2[5] + 0xc) & 1) == 0)) {
      ppppppplVar7 = (long *******)(param_2 + 9);
      puVar8 = param_3;
      func_0x000107c2827c(ppppppplVar7,param_3,param_3);
      if (((ulong)puVar8 & 1) != 0) {
        pppppplStack_148 = (long ******)0x0;
        pppppplStack_150 = (long ******)0x0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        bStack_139 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&pppppplStack_150,param_3);
        ppppppplVar7 = param_4;
        func_0x000109f48fa8(param_4,1);
        uStack_134 = *(int *)(param_4 + 2);
        uStack_138 = SUB84(ppppppplVar7,0);
        lVar21 = param_2[1];
        puVar8 = *(undefined8 **)(lVar21 + 0x40);
        if (puVar8 < *(undefined8 **)(lVar21 + 0x48)) {
          puVar8[2] = CONCAT17(bStack_139,uStack_140);
          puVar8[1] = pppppplStack_148;
          *puVar8 = pppppplStack_150;
          puVar8[3] = CONCAT44(uStack_134,uStack_138);
          *(undefined8 **)(lVar21 + 0x40) = puVar8 + 4;
        }
        else {
          ppppppplVar7 = (long *******)(lVar21 + 0x38);
          FUN_109f8df04(ppppppplVar7,&pppppplStack_150);
          *(long ********)(lVar21 + 0x40) = ppppppplVar7;
          ppppppplVar10 = (long *******)pppppplStack_150;
          if ((char)bStack_139 < '\0') goto LAB_109f8dce0;
        }
      }
    }
LAB_109f8dd14:
    param_1[3] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    param_1[5] = (long ******)0x0;
    param_1[4] = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    *param_1 = (long ******)0x0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
LAB_109f8dd28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppppppplVar7;
  }
  ___stack_chk_fail();
LAB_109f8dd90:
  func_0x000109276104();
LAB_109f8dda4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f8dda8);
  (*pcVar6)();
}



/* Entry: 109f8d1c0; end: 109f8df03;  */

/* WARNING: Removing unreachable block (ram,0x000109f8dcc4) */
/* WARNING: Removing unreachable block (ram,0x000109f8dbec) */
/* WARNING: Removing unreachable block (ram,0x000109f8d400) */

void FUN_109f8d1c0(undefined8 *param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  undefined8 ******ppppppuVar2;
  byte bVar3;
  undefined8 ******ppppppuVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 ******ppppppuVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 *****pppppuVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  bool bVar23;
  char cVar24;
  undefined8 uVar25;
  undefined8 *****pppppuVar26;
  long *plVar27;
  long *plVar28;
  undefined8 *****pppppuStack_158;
  long lStack_150;
  undefined7 uStack_148;
  char cStack_141;
  undefined8 *****pppppuStack_140;
  long lStack_138;
  long lStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 *****pppppuStack_120;
  undefined8 *****pppppuStack_118;
  undefined7 uStack_110;
  byte bStack_109;
  undefined7 uStack_108;
  char cStack_101;
  undefined8 ****ppppuStack_100;
  byte bStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined7 uStack_e0;
  byte bStack_d9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  byte bStack_a9;
  undefined7 uStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)(param_4 + 4);
  lVar21 = param_4;
  if (bVar3 < 0x11) {
    if (bVar3 != 0xd) {
      if (bVar3 != 0xe) goto joined_r0x000109f8d894;
      plVar27 = param_3;
      func_0x000107c2827c(param_2 + 0x48,param_3,param_3);
      if (((ulong)plVar27 & 1) == 0) goto LAB_109f8dd14;
      FUN_109f8c8c8(&pppppuStack_f0,param_2,param_3);
      if (bStack_c8 != 1) {
        *(undefined4 *)param_1 = pppppuStack_f0._0_4_;
        param_1[1] = pppppuStack_e8;
        param_1[2] = CONCAT17(bStack_d9,uStack_e0);
        *(ulong *)((long)param_1 + 0x17) =
             CONCAT35((undefined3)uStack_d4,CONCAT41(uStack_d8,bStack_d9));
        *(char *)((long)param_1 + 0x1f) = uStack_d4._3_1_;
        param_1[4] = uStack_d0;
        goto LAB_109f8dd7c;
      }
      FUN_109f8c9c0(&pppppuStack_f0);
      uVar18 = pppppuStack_f0._0_4_;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_91 = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      uStack_88 = 0xffffffff;
      uStack_80 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a0,param_3);
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
      func_0x000109f4911c();
      uStack_88 = CONCAT44((int)param_4,(undefined4)uStack_88);
      uStack_80 = 0;
      lVar21 = *(long *)(param_2 + 8);
      puVar8 = *(undefined8 **)(lVar21 + 0x70);
      if (puVar8 < *(undefined8 **)(lVar21 + 0x78)) {
        puVar8[2] = uStack_90;
        puVar8[1] = CONCAT17(uStack_91,uStack_98);
        *puVar8 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
        uStack_98 = 0;
        uStack_91 = 0;
        uStack_90 = 0;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        puVar8[3] = uStack_88;
        *(undefined4 *)(puVar8 + 4) = 0;
        *(undefined8 **)(lVar21 + 0x70) = puVar8 + 5;
      }
      else {
        pppppuVar19 = (undefined8 *****)(lVar21 + 0x68);
        lVar20 = (long)puVar8 - (long)*pppppuVar19;
        uVar12 = (lVar20 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar12) {
          FUN_109f5fc94();
          goto LAB_109f8dda4;
        }
        lVar15 = (long)*(undefined8 **)(lVar21 + 0x78) - (long)*pppppuVar19 >> 3;
        uVar17 = lVar15 * -0x6666666666666666;
        if (uVar17 < uVar12 || uVar17 - uVar12 == 0) {
          uVar17 = uVar12;
        }
        if (0x333333333333332 < (ulong)(lVar15 * -0x3333333333333333)) {
          uVar17 = 0x666666666666666;
        }
        ppppuStack_100 = pppppuVar19;
        if (uVar17 == 0) {
          pppppuVar9 = (undefined8 *****)0x0;
        }
        else {
          pppppuVar9 = pppppuVar19;
          FUN_109f5fca8();
        }
        pppppuStack_118 = (undefined8 *****)((long)pppppuVar9 + lVar20);
        pppppuVar26 = pppppuVar9 + uVar17 * 5;
        uStack_108 = SUB87(pppppuVar26,0);
        cStack_101 = (char)((ulong)pppppuVar26 >> 0x38);
        pppppuStack_118[2] = (undefined8 ****)uStack_90;
        pppppuStack_118[1] = (undefined8 ****)CONCAT17(uStack_91,uStack_98);
        *pppppuStack_118 = (undefined8 ****)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
        uStack_98 = 0;
        uStack_91 = 0;
        uStack_90 = 0;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        *(undefined4 *)(pppppuStack_118 + 4) = uStack_80;
        pppppuStack_118[3] = (undefined8 ****)uStack_88;
        puVar8 = pppppuStack_118 + 5;
        uStack_110 = SUB87(puVar8,0);
        bStack_109 = (byte)((ulong)puVar8 >> 0x38);
        lVar20 = (long)pppppuStack_118 + (*(long *)(lVar21 + 0x68) - *(long *)(lVar21 + 0x70));
        pppppuStack_120 = pppppuVar9;
        func_0x000109f5fcec(pppppuVar19,*(long *)(lVar21 + 0x68),*(long *)(lVar21 + 0x70),lVar20);
        pppppuStack_120 = *(undefined8 ******)(lVar21 + 0x68);
        *(long *)(lVar21 + 0x68) = lVar20;
        *(undefined8 **)(lVar21 + 0x70) = puVar8;
        uVar14 = *(undefined8 *)(lVar21 + 0x78);
        *(undefined8 ******)(lVar21 + 0x78) = pppppuVar26;
        uStack_110 = SUB87(pppppuStack_120,0);
        bStack_109 = (byte)((ulong)pppppuStack_120 >> 0x38);
        uStack_108 = (undefined7)uVar14;
        cStack_101 = (char)((ulong)uVar14 >> 0x38);
        pppppuStack_118 = pppppuStack_120;
        func_0x000109f5fe24(&pppppuStack_120);
        *(undefined8 **)(lVar21 + 0x70) = puVar8;
      }
      if (((bStack_c8 & 1) != 0) ||
         (ppppppuVar10 = (undefined8 ******)pppppuStack_e8, -1 < uStack_d4)) goto LAB_109f8dd14;
LAB_109f8dce0:
      __ZdlPv(ppppppuVar10);
      goto LAB_109f8dd14;
    }
    plVar27 = param_3;
    func_0x000107c2827c(param_2 + 0x48,param_3,param_3);
    if (((ulong)plVar27 & 1) == 0) goto LAB_109f8dd14;
    FUN_109f8c8c8(&pppppuStack_f0,param_2,param_3);
    if ((bStack_c8 & 1) == 0) {
      uStack_b0 = uStack_e0;
      bStack_a9 = bStack_d9;
      uStack_a8 = (undefined7)(CONCAT35((undefined3)uStack_d4,CONCAT41(uStack_d8,bStack_d9)) >> 8);
      ppppppuVar10 = (undefined8 ******)pppppuStack_e8;
      uVar18 = pppppuStack_f0._0_4_;
      cVar24 = uStack_d4._3_1_;
    }
    else {
      FUN_109f8c9c0(&pppppuStack_f0);
      uVar18 = pppppuStack_f0._0_4_;
      plVar28 = *(long **)(*(long *)(param_2 + 0x20) + 0x2d8);
      for (plVar27 = *(long **)(*(long *)(param_2 + 0x20) + 0x2d0); plVar27 != plVar28;
          plVar27 = plVar27 + 1) {
        lVar20 = *plVar27;
        lVar21 = *(long *)(lVar20 + 0x18);
        if (lVar21 != 0) {
          lVar15 = lVar21;
          _strlen();
          if ((long)*(char *)((long)param_3 + 0x17) < 0) {
            if (lVar15 == param_3[1]) {
              if (lVar15 != -1) {
                plVar7 = (long *)*param_3;
                goto LAB_109f8d4c0;
              }
              goto LAB_109f8dd90;
            }
          }
          else {
            plVar7 = param_3;
            if (lVar15 == *(char *)((long)param_3 + 0x17)) {
LAB_109f8d4c0:
              _memcmp(plVar7,lVar21);
              if ((int)plVar7 == 0) {
                uStack_a0._0_4_ = (undefined4)lVar20;
                uStack_a0._4_4_ = (undefined4)((ulong)lVar20 >> 0x20);
                lVar21 = *(long *)(param_2 + 0x20) + 0x218;
                FUN_109f7d2ac(lVar21,&uStack_a0);
                if (lVar21 != 0) {
                  lVar20 = 0x18;
                  goto LAB_109f8d608;
                }
              }
            }
          }
        }
      }
      lVar21 = *(long *)(param_2 + 0x40);
      func_0x0001099ae6c8(lVar21,param_3);
      if (lVar21 == 0) {
        FUN_109f7d45c(&pppppuStack_140,&UNK_10f62a0ba);
        FUN_109f76188(&uStack_a0,&pppppuStack_140,2,&PTR_DAT_110b96188);
        uVar18 = (undefined4)uStack_a0;
        pppppuStack_118 = (undefined8 *****)CONCAT17(uStack_91,uStack_98);
        uStack_110 = (undefined7)uStack_90;
        bStack_109 = (byte)((ulong)uStack_90 >> 0x38);
        uStack_d0 = CONCAT44(uStack_7c,uStack_80);
        uStack_108 = (undefined7)uStack_88;
        cStack_101 = (char)((ulong)uStack_88 >> 0x38);
        if (lStack_130 < 0) {
          __ZdlPv(pppppuStack_140);
        }
        bVar23 = false;
        uStack_b0 = uStack_110;
        bStack_a9 = bStack_109;
        uStack_a8 = uStack_108;
        ppppppuVar10 = (undefined8 ******)pppppuStack_118;
        cVar24 = cStack_101;
      }
      else {
        lVar20 = 0x28;
LAB_109f8d608:
        pppppuStack_120 =
             (undefined8 *****)CONCAT44(pppppuStack_120._4_4_,(int)*(undefined8 *)(lVar21 + lVar20))
        ;
        bStack_f8 = 1;
        FUN_109f8c9c0(&pppppuStack_120);
        uVar5 = (uint)pppppuStack_120;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_91 = 0;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        uStack_88 = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a0,param_3)
        ;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar18);
        lVar21 = param_4;
        func_0x000109f4911c();
        uStack_88 = CONCAT44((int)lVar21,(undefined4)uStack_88);
        lVar21 = *(long *)(param_2 + 8);
        puVar8 = *(undefined8 **)(lVar21 + 0x58);
        if (puVar8 < *(undefined8 **)(lVar21 + 0x60)) {
          puVar8[2] = uStack_90;
          puVar8[1] = CONCAT17(uStack_91,uStack_98);
          *puVar8 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
          uStack_98 = 0;
          uStack_91 = 0;
          uStack_90 = 0;
          uStack_a0._0_4_ = 0;
          uStack_a0._4_4_ = 0;
          puVar8[3] = uStack_88;
          puVar8 = puVar8 + 4;
        }
        else {
          puVar8 = (undefined8 *)(lVar21 + 0x50);
          FUN_109f8b394(puVar8,&uStack_a0);
        }
        *(undefined8 **)(lVar21 + 0x58) = puVar8;
        pppppuStack_140 = (undefined8 *****)0x0;
        lStack_138 = 0;
        lStack_130 = 0;
        uStack_128 = uVar5;
        uVar12 = param_3[1];
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)param_3 + 0x17);
        }
        func_0x000104c4f768(&pppppuStack_158,uVar12 + 5,&uStack_b1);
        ppppppuVar10 = (undefined8 ******)pppppuStack_158;
        if (-1 < cStack_141) {
          ppppppuVar10 = &pppppuStack_158;
        }
        if (uVar12 != 0) {
          plVar27 = (long *)*param_3;
          if (-1 < *(char *)((long)param_3 + 0x17)) {
            plVar27 = param_3;
          }
          _memmove(ppppppuVar10,plVar27,uVar12);
        }
        *(undefined4 *)((long)ppppppuVar10 + uVar12) = 0x53706d53;
        *(undefined2 *)((undefined4 *)((long)ppppppuVar10 + uVar12) + 1) = 0x43;
        lVar21 = *(long *)(param_2 + 8);
        plVar27 = *(long **)(lVar21 + 0x88);
        lStack_138 = lStack_150;
        pppppuStack_140 = pppppuStack_158;
        lStack_130 = CONCAT17(cStack_141,uStack_148);
        uStack_124 = 1;
        if ((*(uint *)(param_4 + 4) & 0x100000) != 0) {
          uStack_124 = 2;
        }
        if (plVar27 < *(long **)(lVar21 + 0x90)) {
          plVar27[1] = lStack_150;
          *plVar27 = (long)pppppuStack_158;
          plVar27[2] = lStack_130;
          lStack_138 = 0;
          lStack_130 = 0;
          pppppuStack_140 = (undefined8 ******)0x0;
          uVar12 = CONCAT44(uStack_124,uStack_128);
          plVar27[3] = uVar12;
          plVar27 = plVar27 + 4;
        }
        else {
          plVar27 = (long *)(lVar21 + 0x80);
          FUN_109f8b4a4(plVar27,&pppppuStack_140);
          uVar12 = (ulong)uStack_128;
        }
        lVar20 = uStack_88;
        *(long **)(lVar21 + 0x88) = plVar27;
        plVar27 = *(long **)(param_2 + 0x10);
        puVar22 = (ulong *)plVar27[1];
        if (puVar22 < (ulong *)plVar27[2]) {
          *puVar22 = param_5 & 0xffffffff | uStack_88 << 0x20;
          puVar22[1] = param_5 & 0xffffffff | uVar12 << 0x20;
          puVar22 = puVar22 + 2;
        }
        else {
          lVar21 = (long)puVar22 - *plVar27;
          uVar17 = (lVar21 >> 4) + 1;
          if (uVar17 >> 0x3c != 0) {
            FUN_109f60920();
            goto LAB_109f8dda4;
          }
          uVar13 = plVar27[2] - *plVar27;
          uVar16 = (long)uVar13 >> 3;
          if (uVar16 <= uVar17) {
            uVar16 = uVar17;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar16 = 0xfffffffffffffff;
          }
          plVar28 = plVar27;
          FUN_109f60934();
          puVar1 = (ulong *)((long)plVar28 + lVar21);
          *puVar1 = param_5 & 0xffffffff | lVar20 << 0x20;
          puVar1[1] = param_5 & 0xffffffff | uVar12 << 0x20;
          puVar22 = puVar1 + 2;
          lVar20 = (long)puVar1 - (plVar27[1] - *plVar27);
          _memcpy(lVar20);
          lVar21 = *plVar27;
          *plVar27 = lVar20;
          plVar27[1] = (long)puVar22;
          plVar27[2] = (long)(plVar28 + uVar16 * 2);
          if (lVar21 != 0) {
            __ZdlPv();
          }
        }
        plVar27[1] = (long)puVar22;
        uStack_b0 = 0;
        bStack_a9 = 0;
        uStack_a8 = 0;
        if (lStack_130 < 0) {
          __ZdlPv(pppppuStack_140);
        }
        uVar18 = 0;
        bVar23 = true;
        ppppppuVar10 = (undefined8 ******)0x0;
        if ((bStack_f8 & 1) == 0) {
          uStack_d0 = 0;
          cVar24 = '\0';
          if (cStack_101 < '\0') {
            __ZdlPv(pppppuStack_118);
            uVar18 = 0;
            uStack_d0 = 0;
            ppppppuVar10 = (undefined8 ******)0x0;
            cVar24 = '\0';
          }
        }
        else {
          uStack_d0 = 0;
          cVar24 = '\0';
        }
      }
      if (((bStack_c8 & 1) == 0) && (uStack_d4 < 0)) {
        __ZdlPv(pppppuStack_e8);
      }
      if (bVar23) goto LAB_109f8dd14;
    }
    *(undefined4 *)param_1 = uVar18;
    param_1[1] = ppppppuVar10;
    param_1[2] = CONCAT17(bStack_a9,uStack_b0);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_a8,bStack_a9);
    *(char *)((long)param_1 + 0x1f) = cVar24;
    param_1[4] = uStack_d0;
LAB_109f8dd7c:
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    if (bVar3 == 0x13) {
      lVar20 = *(long *)(param_4 + 0x30);
      if (lVar20 == 0) {
        func_0x000107c31940(&pppppuStack_120,&UNK_10f629d66);
        FUN_109f76188(&pppppuStack_f0,&pppppuStack_120,1,&PTR_DAT_110b96170);
        goto LAB_109f8d574;
      }
      if (2 < *(byte *)(lVar20 + 4) - 0x11) goto joined_r0x000109f8d894;
      cVar24 = *(char *)((long)param_3 + 0x17);
      if (cVar24 < '\0') {
        func_0x000107c3192c(&pppppuStack_120,*param_3,param_3[1]);
        cVar24 = *(char *)((long)param_3 + 0x17);
        if (-1 < cVar24) goto LAB_109f8d74c;
        lVar15 = param_3[1];
      }
      else {
        pppppuStack_118 = (undefined8 *****)param_3[1];
        pppppuStack_120 = (undefined8 *****)*param_3;
        uStack_110 = (undefined7)param_3[2];
        bStack_109 = (byte)((ulong)param_3[2] >> 0x38);
LAB_109f8d74c:
        lVar15 = (long)(int)cVar24;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&pppppuStack_120,lVar15 + 3);
      ppppppuVar10 = (undefined8 ******)pppppuStack_118;
      if (-1 < (char)bStack_109) {
        ppppppuVar10 = (undefined8 ******)(ulong)bStack_109;
      }
      if (0 < *(int *)(param_4 + 0x10)) {
        iVar11 = 0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppuStack_120,&DAT_10f62a9e8,1);
          __ZNSt3__19to_stringEi(&pppppuStack_f0,iVar11);
          ppppppuVar2 = (undefined8 ******)pppppuStack_e8;
          ppppppuVar4 = (undefined8 ******)pppppuStack_f0;
          if (-1 < (char)bStack_d9) {
            ppppppuVar2 = (undefined8 ******)(ulong)bStack_d9;
            ppppppuVar4 = &pppppuStack_f0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppuStack_120,ppppppuVar4,ppppppuVar2);
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(pppppuStack_f0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppuStack_120,&DAT_10f62a9ea,1);
          FUN_109f8d1c0(&pppppuStack_f0,param_2,&pppppuStack_120,lVar20,param_5);
          if ((bStack_c8 & 1) == 0) {
            uStack_a0._0_4_ = (undefined4)uStack_e0;
            uStack_a0._4_4_ = CONCAT13(bStack_d9,(int3)((uint7)uStack_e0 >> 0x20));
            uStack_98 = (undefined7)
                        (CONCAT35((undefined3)uStack_d4,CONCAT41(uStack_d8,bStack_d9)) >> 8);
            *(undefined4 *)param_1 = pppppuStack_f0._0_4_;
            param_1[1] = pppppuStack_e8;
            param_1[2] = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
            *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,bStack_d9);
            *(char *)((long)param_1 + 0x1f) = uStack_d4._3_1_;
            param_1[4] = uStack_d0;
            *(undefined1 *)(param_1 + 5) = 0;
            bVar23 = true;
            goto LAB_109f8d878;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (&pppppuStack_120,ppppppuVar10,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_4 + 0x10));
      }
      bVar23 = false;
LAB_109f8d878:
      if ((char)bStack_109 < '\0') {
        __ZdlPv(pppppuStack_120);
      }
      if (bVar23) goto LAB_109f8dd28;
      bVar3 = *(byte *)(param_4 + 4);
    }
    else if (bVar3 == 0x11) {
      if (*(long *)(param_4 + 0x30) != 0) {
        iVar11 = *(int *)(param_4 + 0x10);
        if (0 < iVar11) {
          lVar20 = 0;
          lVar21 = 0;
          do {
            lVar15 = *(long *)(param_4 + 0x30);
            if (*(char *)(*(long *)(param_2 + 0x28) + 0xc) == '\x01') {
              if (*(char *)(*(long *)(lVar15 + lVar20) + 4) != '\r') goto LAB_109f8d338;
            }
            else {
              if (*(long *)(lVar15 + lVar20) == 0) {
                func_0x000107c31940(&pppppuStack_120,&UNK_10f629be1);
                FUN_109f76188(&pppppuStack_f0,&pppppuStack_120,1,&PTR_DAT_110b96158);
                *(undefined4 *)param_1 = pppppuStack_f0._0_4_;
                param_1[2] = CONCAT17(bStack_d9,uStack_e0);
                param_1[1] = pppppuStack_e8;
                param_1[3] = CONCAT44(uStack_d4,uStack_d8);
                goto LAB_109f8d58c;
              }
LAB_109f8d338:
              uVar12 = param_3[1];
              if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
                uVar12 = (ulong)*(byte *)((long)param_3 + 0x17);
              }
              func_0x000104c4f768(&uStack_a0,uVar12 + 1,&pppppuStack_140);
              if (uVar12 != 0) {
                plVar27 = (long *)*param_3;
                if (-1 < *(char *)((long)param_3 + 0x17)) {
                  plVar27 = param_3;
                }
                _memmove(&uStack_a0,plVar27,uVar12);
              }
              *(undefined2 *)((long)&uStack_a0 + uVar12) = 0x2e;
              uVar25 = *(undefined8 *)(lVar15 + lVar20 + 8);
              uVar14 = uVar25;
              _strlen(uVar25);
              plVar27 = &uStack_a0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (plVar27,uVar25,uVar14);
              pppppuStack_118 = (undefined8 *****)plVar27[1];
              pppppuStack_120 = (undefined8 *****)*plVar27;
              uStack_110 = (undefined7)plVar27[2];
              bStack_109 = (byte)((ulong)plVar27[2] >> 0x38);
              plVar27[1] = 0;
              plVar27[2] = 0;
              *plVar27 = 0;
              FUN_109f8d1c0(&pppppuStack_f0,param_2,&pppppuStack_120,
                            *(undefined8 *)(lVar15 + lVar20),param_5);
              if ((char)bStack_109 < '\0') {
                __ZdlPv(pppppuStack_120);
              }
              if ((bStack_c8 & 1) == 0) {
                param_1[1] = pppppuStack_e8;
                param_1[2] = CONCAT17(bStack_d9,uStack_e0);
                *(ulong *)((long)param_1 + 0x17) =
                     CONCAT35((undefined3)uStack_d4,CONCAT41(uStack_d8,bStack_d9));
                *(char *)((long)param_1 + 0x1f) = uStack_d4._3_1_;
                param_1[4] = uStack_d0;
                *(undefined1 *)(param_1 + 5) = 0;
                *(undefined4 *)param_1 = pppppuStack_f0._0_4_;
                goto LAB_109f8dd28;
              }
              iVar11 = *(int *)(param_4 + 0x10);
            }
            lVar21 = lVar21 + 1;
            lVar20 = lVar20 + 0x30;
          } while (lVar21 < iVar11);
        }
        goto LAB_109f8dd14;
      }
      func_0x000107c31940(&pppppuStack_120,&UNK_10f629bf4);
      FUN_109f76188(&pppppuStack_f0,&pppppuStack_120,1,&PTR_DAT_110b96140);
LAB_109f8d574:
      *(undefined4 *)param_1 = pppppuStack_f0._0_4_;
      param_1[2] = CONCAT17(bStack_d9,uStack_e0);
      param_1[1] = pppppuStack_e8;
      param_1[3] = CONCAT44(uStack_d4,uStack_d8);
LAB_109f8d58c:
      param_1[4] = uStack_d0;
      *(undefined1 *)(param_1 + 5) = 0;
      if ((char)bStack_109 < '\0') {
        __ZdlPv(pppppuStack_120);
      }
      goto LAB_109f8dd28;
    }
joined_r0x000109f8d894:
    while (bVar3 == 0x13) {
      bVar3 = *(byte *)(*(long *)(lVar21 + 0x30) + 4);
      lVar21 = *(long *)(lVar21 + 0x30);
    }
    if (((bVar3 < 0xc) && ((*(byte *)(*(long *)(param_2 + 0x28) + 0xc) & 1) == 0)) &&
       (plVar27 = param_3, func_0x000107c2827c(param_2 + 0x48,param_3,param_3),
       ((ulong)plVar27 & 1) != 0)) {
      pppppuStack_e8 = (undefined8 ******)0x0;
      pppppuStack_f0 = (undefined8 ******)0x0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      bStack_d9 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pppppuStack_f0,param_3);
      lVar21 = param_4;
      func_0x000109f48fa8(param_4,1);
      uStack_d4 = *(int *)(param_4 + 0x10);
      uStack_d8 = (undefined4)lVar21;
      lVar21 = *(long *)(param_2 + 8);
      plVar27 = *(long **)(lVar21 + 0x40);
      if (plVar27 < *(long **)(lVar21 + 0x48)) {
        plVar27[2] = CONCAT17(bStack_d9,uStack_e0);
        plVar27[1] = (long)pppppuStack_e8;
        *plVar27 = (long)pppppuStack_f0;
        plVar27[3] = CONCAT44(uStack_d4,uStack_d8);
        *(long **)(lVar21 + 0x40) = plVar27 + 4;
      }
      else {
        lVar20 = lVar21 + 0x38;
        FUN_109f8df04(lVar20,&pppppuStack_f0);
        *(long *)(lVar21 + 0x40) = lVar20;
        ppppppuVar10 = (undefined8 ******)pppppuStack_f0;
        if ((char)bStack_d9 < '\0') goto LAB_109f8dce0;
      }
    }
LAB_109f8dd14:
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
LAB_109f8dd28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_109f8dd90:
  func_0x000109276104();
LAB_109f8dda4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f8dda8);
  (*pcVar6)();
}



/* Entry: 109f8df04; end: 109f8e013;  */

/* WARNING: Removing unreachable block (ram,0x000109f8e5b8) */
/* WARNING: Removing unreachable block (ram,0x000109f8e174) */
/* WARNING: Removing unreachable block (ram,0x000109f8e6a0) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_109f8df04(long *******param_1,long *param_2,uint *param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *******ppppppplVar7;
  undefined8 uVar8;
  long *plVar9;
  long *******ppppppplVar10;
  int iVar11;
  ulong uVar12;
  long ******pppppplVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *******ppppppplStack_188;
  long *plStack_180;
  long *******ppppppplStack_178;
  undefined1 **ppuStack_170;
  undefined8 uStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_148;
  undefined **ppuStack_140;
  undefined1 uStack_138;
  long *******ppppppplStack_130;
  long ******pppppplStack_128;
  undefined7 uStack_120;
  byte bStack_119;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  ulong uStack_f0;
  long alStack_e0 [4];
  undefined1 *puStack_70;
  code *pcStack_68;
  long *******ppppppplStack_58;
  long ******pppppplStack_50;
  long *******ppppppplStack_48;
  long *******ppppppplStack_40;
  long *******ppppppplStack_38;
  
  lVar15 = (long)param_1[1] - (long)*param_1;
  uVar1 = (lVar15 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar12 = (long)param_1[2] - (long)*param_1;
    uVar14 = (long)uVar12 >> 4;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar12) {
      uVar14 = 0x7ffffffffffffff;
    }
    ppppppplStack_38 = param_1;
    if (uVar14 == 0) {
      ppppppplVar7 = (long *******)0x0;
    }
    else {
      ppppppplVar7 = param_1;
      FUN_109f5f480();
    }
    pppppplStack_50 = (long ******)((long)ppppppplVar7 + lVar15);
    lVar18 = param_2[1];
    lVar15 = *param_2;
    pppppplStack_50[2] = (long *****)param_2[2];
    pppppplStack_50[1] = (long *****)lVar18;
    *pppppplStack_50 = (long *****)lVar15;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    pppppplStack_50[3] = (long *****)param_2[3];
    ppppppplVar10 = (long *******)(pppppplStack_50 + 4);
    pppppplVar13 = (long ******)((long)pppppplStack_50 + ((long)*param_1 - (long)param_1[1]));
    ppppppplStack_58 = ppppppplVar7;
    ppppppplStack_48 = ppppppplVar10;
    ppppppplStack_40 = ppppppplVar7 + uVar14 * 4;
    func_0x000109f5f4b4(param_1,*param_1,param_1[1],pppppplVar13);
    ppppppplStack_58 = (long *******)*param_1;
    *param_1 = pppppplVar13;
    param_1[1] = (long ******)ppppppplVar10;
    ppppppplStack_40 = (long *******)param_1[2];
    param_1[2] = (long ******)(ppppppplVar7 + uVar14 * 4);
    pppppplStack_50 = (long ******)ppppppplStack_58;
    ppppppplStack_48 = ppppppplStack_58;
    func_0x000109f5f5e4(&ppppppplStack_58);
    return ppppppplVar10;
  }
  FUN_109f5f46c();
  func_0x000109f5f5e4(&ppppppplStack_58);
  __Unwind_Resume();
  pcStack_68 = FUN_109f8e014;
  alStack_e0[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)(param_5 + 4);
  ppppppplVar7 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  lVar15 = param_5;
  if (bVar3 == 0x13) {
    lVar18 = *(long *)(param_5 + 0x30);
    if (lVar18 != 0) {
      if (2 < *(byte *)(lVar18 + 4) - 0x11) goto joined_r0x000109f8e3f0;
      cVar4 = *(char *)((long)param_4 + 0x17);
      if (cVar4 < '\0') {
        func_0x000107c3192c(&ppppppplStack_100,*param_4,param_4[1]);
        cVar4 = *(char *)((long)param_4 + 0x17);
        if (-1 < cVar4) goto LAB_109f8e2a4;
        lVar17 = param_4[1];
      }
      else {
        ppppppplStack_f8 = (long *******)param_4[1];
        ppppppplStack_100 = (long *******)*param_4;
        uStack_f0 = param_4[2];
LAB_109f8e2a4:
        lVar17 = (long)(int)cVar4;
      }
      ppppppplVar7 = (long *******)&ppppppplStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (ppppppplVar7,lVar17 + 3);
      ppppppplVar10 = ppppppplStack_f8;
      if (-1 < (long)uStack_f0) {
        ppppppplVar10 = (long *******)(uStack_f0 >> 0x38);
      }
      if (0 < *(int *)(param_5 + 0x10)) {
        iVar11 = 0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppplStack_100,&DAT_10f62a9e8,1);
          __ZNSt3__19to_stringEi(&ppppppplStack_130,iVar11);
          pppppplVar13 = pppppplStack_128;
          ppppppplVar7 = ppppppplStack_130;
          if (-1 < (char)bStack_119) {
            pppppplVar13 = (long ******)(ulong)bStack_119;
            ppppppplVar7 = (long *******)&ppppppplStack_130;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppplStack_100,ppppppplVar7,pppppplVar13);
          if ((char)bStack_119 < '\0') {
            __ZdlPv(ppppppplStack_130);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppplStack_100,&DAT_10f62a9ea,1);
          ppppppplVar7 = (long *******)&ppppppplStack_130;
          FUN_109f8e014(ppppppplVar7,param_2,param_3,&ppppppplStack_100,lVar18);
          if ((uStack_108 & 1) == 0) {
            alStack_e0[1]._0_7_ =
                 (undefined7)(CONCAT35((undefined3)uStack_114,CONCAT41(uStack_118,bStack_119)) >> 8)
            ;
            *(undefined4 *)param_1 = ppppppplStack_130._0_4_;
            param_1[1] = pppppplStack_128;
            param_1[2] = (long ******)CONCAT17(bStack_119,uStack_120);
            *(ulong *)((long)param_1 + 0x17) = CONCAT71((undefined7)alStack_e0[1],bStack_119);
            *(undefined1 *)((long)param_1 + 0x1f) = uStack_114._3_1_;
            param_1[4] = (long ******)CONCAT44(uStack_10c,uStack_110);
            *(undefined1 *)(param_1 + 5) = 0;
            bVar5 = true;
            goto LAB_109f8e3cc;
          }
          ppppppplVar7 = (long *******)&ppppppplStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (ppppppplVar7,ppppppplVar10,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_5 + 0x10));
      }
      bVar5 = false;
LAB_109f8e3cc:
      if ((long)uStack_f0 < 0) {
        ppppppplVar7 = ppppppplStack_100;
        __ZdlPv();
      }
      if (bVar5) goto LAB_109f8e618;
      bVar3 = *(byte *)(param_5 + 4);
      goto joined_r0x000109f8e3f0;
    }
    func_0x000107c31940(&ppppppplStack_100,&UNK_10f629d66);
    ppppppplVar7 = (long *******)&ppppppplStack_130;
    FUN_109f76188(ppppppplVar7,&ppppppplStack_100,1,&PTR_DAT_110b961d0);
LAB_109f8e538:
    *(undefined4 *)param_1 = ppppppplStack_130._0_4_;
    param_1[2] = (long ******)CONCAT17(bStack_119,uStack_120);
    param_1[1] = pppppplStack_128;
    pppppplVar13 = (long ******)CONCAT44(uStack_10c,uStack_110);
    param_1[3] = (long ******)CONCAT44(uStack_114,uStack_118);
LAB_109f8e550:
    param_1[4] = pppppplVar13;
    *(undefined1 *)(param_1 + 5) = 0;
    if ((long)uStack_f0 < 0) {
      ppppppplVar7 = ppppppplStack_100;
      __ZdlPv();
    }
  }
  else {
    if (bVar3 == 0x11) {
      if (*(long *)(param_5 + 0x30) == 0) {
        func_0x000107c31940(&ppppppplStack_100,&UNK_10f629bf4);
        ppppppplVar7 = (long *******)&ppppppplStack_130;
        FUN_109f76188(ppppppplVar7,&ppppppplStack_100,1,&PTR_DAT_110b961a0);
        goto LAB_109f8e538;
      }
      iVar11 = *(int *)(param_5 + 0x10);
      if (0 < iVar11) {
        lVar18 = 0;
        lVar15 = 0;
        uStack_148 = param_2[1] - *param_2;
        do {
          lVar17 = *(long *)(param_5 + 0x30);
          if (*(long *)(lVar17 + lVar18) == 0) {
            func_0x000107c31940(&ppppppplStack_100,&UNK_10f629be1);
            ppppppplVar7 = (long *******)&ppppppplStack_130;
            FUN_109f76188(ppppppplVar7,&ppppppplStack_100,1,&PTR_DAT_110b961b8);
            *(undefined4 *)param_1 = ppppppplStack_130._0_4_;
            param_1[2] = (long ******)CONCAT17(bStack_119,uStack_120);
            param_1[1] = pppppplStack_128;
            pppppplVar13 = (long ******)CONCAT44(uStack_10c,uStack_110);
            param_1[3] = (long ******)CONCAT44(uStack_114,uStack_118);
            goto LAB_109f8e550;
          }
          if (*(char *)(*(long *)(lVar17 + lVar18) + 4) != '\r') {
            uVar1 = param_4[1];
            if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
            }
            func_0x000104c4f768(alStack_e0,uVar1 + 1,&ppuStack_140);
            if (uVar1 != 0) {
              puVar2 = (undefined8 *)*param_4;
              if (-1 < *(char *)((long)param_4 + 0x17)) {
                puVar2 = param_4;
              }
              _memmove(alStack_e0,puVar2,uVar1);
            }
            *(undefined2 *)((long)alStack_e0 + uVar1) = 0x2e;
            uVar16 = *(undefined8 *)(lVar17 + lVar18 + 8);
            uVar8 = uVar16;
            _strlen(uVar16);
            plVar9 = alStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar9,uVar16,uVar8);
            ppppppplStack_f8 = (long *******)plVar9[1];
            ppppppplStack_100 = (long *******)*plVar9;
            uStack_f0 = plVar9[2];
            plVar9[1] = 0;
            plVar9[2] = 0;
            *plVar9 = 0;
            ppppppplVar7 = (long *******)&ppppppplStack_130;
            FUN_109f8e014(ppppppplVar7,param_2,param_3,&ppppppplStack_100,
                          *(undefined8 *)(lVar17 + lVar18));
            if ((long)uStack_f0 < 0) {
              ppppppplVar7 = ppppppplStack_100;
              __ZdlPv();
            }
            if ((uStack_108 & 1) == 0) {
              param_1[1] = pppppplStack_128;
              param_1[2] = (long ******)CONCAT17(bStack_119,uStack_120);
              *(ulong *)((long)param_1 + 0x17) =
                   CONCAT35((undefined3)uStack_114,CONCAT41(uStack_118,bStack_119));
              *(undefined1 *)((long)param_1 + 0x1f) = uStack_114._3_1_;
              param_1[4] = (long ******)CONCAT44(uStack_10c,uStack_110);
              *(undefined1 *)(param_1 + 5) = 0;
              *(undefined4 *)param_1 = ppppppplStack_130._0_4_;
              goto LAB_109f8e618;
            }
            iVar11 = *(int *)(param_5 + 0x10);
          }
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x30;
        } while (lVar15 < iVar11);
        if (uStack_148 < (ulong)(param_2[1] - *param_2)) {
          *param_3 = *param_3 + 0xf & 0xfffffff0;
        }
      }
    }
    else {
joined_r0x000109f8e3f0:
      while (bVar3 == 0x13) {
        bVar3 = *(byte *)(*(long *)(lVar15 + 0x30) + 4);
        lVar15 = *(long *)(lVar15 + 0x30);
      }
      if (bVar3 < 0xc) {
        ppuStack_140 = &PTR_FUN_110b87840;
        uStack_138 = 1;
        lVar15 = param_5;
        FUN_109ec8a54(param_5,0);
        uVar6 = (uint)lVar15;
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
          uStack_158 = (ulong)*param_3;
          lStack_160 = lVar15;
          FUN_109f7d45c(&ppppppplStack_100,&UNK_10f62a22d);
          ppppppplVar7 = (long *******)&ppppppplStack_130;
          FUN_109f76188(ppppppplVar7,&ppppppplStack_100,2,&PTR_DAT_110b961e8);
          goto LAB_109f8e538;
        }
        FUN_109f47700(&ppppppplStack_100,&ppuStack_140,param_5);
        if (ppppppplStack_100 == ppppppplStack_f8) {
          func_0x000107c31940(alStack_e0,&UNK_10f629e26);
          FUN_109f76188(&ppppppplStack_130,alStack_e0,2,&PTR_DAT_110b96200);
          *(undefined4 *)param_1 = ppppppplStack_130._0_4_;
          param_1[2] = (long ******)CONCAT17(bStack_119,uStack_120);
          param_1[1] = pppppplStack_128;
          param_1[3] = (long ******)CONCAT44(uStack_114,uStack_118);
          param_1[4] = (long ******)CONCAT44(uStack_10c,uStack_110);
          *(undefined1 *)(param_1 + 5) = 0;
          ppppppplStack_130 = (long *******)&ppppppplStack_100;
          ppppppplVar7 = (long *******)&ppppppplStack_130;
          func_0x000109f48c10();
          goto LAB_109f8e618;
        }
        uStack_104 = 0;
        pppppplStack_128 = (long ******)0x0;
        ppppppplStack_130 = (long *******)0x0;
        uStack_120 = 0;
        bStack_119 = 0;
        uStack_10c = 0;
        uStack_108._0_1_ = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppppppplStack_130,param_4);
        uStack_118 = (uVar6 + *param_3) - 1 & -uVar6;
        uStack_104 = *(undefined4 *)((long)ppppppplStack_100 + 0x2c);
        uStack_10c = *(undefined4 *)((long)ppppppplStack_100 + 0x24);
        uStack_114 = (undefined4)*(undefined8 *)((long)ppppppplStack_100 + 0x1c);
        uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)ppppppplStack_100 + 0x1c) >> 0x20);
        uStack_108 = CONCAT31(uStack_108._1_3_,1);
        *param_3 = *(int *)((long)ppppppplStack_100 + 0x1c) + uStack_118;
        puVar2 = (undefined8 *)param_2[1];
        if (puVar2 < (undefined8 *)param_2[2]) {
          puVar2[2] = CONCAT17(bStack_119,uStack_120);
          puVar2[1] = pppppplStack_128;
          *puVar2 = ppppppplStack_130;
          pppppplStack_128 = (long ******)0x0;
          uStack_120 = 0;
          bStack_119 = 0;
          puVar2[4] = CONCAT44(uStack_10c,uStack_110);
          puVar2[3] = CONCAT44(uStack_114,uStack_118);
          puVar2[5] = CONCAT44(uStack_104,uStack_108);
          param_2[1] = (long)(puVar2 + 6);
        }
        else {
          plVar9 = param_2;
          FUN_109f48c9c(param_2,&ppppppplStack_130);
          param_2[1] = (long)plVar9;
          if ((char)bStack_119 < '\0') {
            __ZdlPv(ppppppplStack_130);
          }
        }
        ppppppplStack_130 = (long *******)&ppppppplStack_100;
        ppppppplVar7 = (long *******)&ppppppplStack_130;
        func_0x000109f48c10();
      }
    }
    param_1[3] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    param_1[5] = (long ******)0x0;
    param_1[4] = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    *param_1 = (long ******)0x0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
LAB_109f8e618:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_e0[3]) {
    return ppppppplVar7;
  }
  ___stack_chk_fail();
  ppppppplStack_130 = (long *******)&ppppppplStack_100;
  func_0x000109f48c10(&ppppppplStack_130);
  ppppppplVar10 = ppppppplVar7;
  __Unwind_Resume();
  uStack_168 = 0x109f8e75c;
  plStack_180 = param_2;
  ppppppplStack_178 = ppppppplVar7;
  ppuStack_170 = &puStack_70;
  if (ppppppplVar10[0xc6] != (long ******)0x0) {
    ppppppplVar10[199] = ppppppplVar10[0xc6];
    __ZdlPv();
  }
  if (ppppppplVar10[0xc3] != (long ******)0x0) {
    ppppppplVar10[0xc4] = ppppppplVar10[0xc3];
    __ZdlPv();
  }
  func_0x000109f8e804(ppppppplVar10 + 0xbe);
  func_0x000109f8e84c(ppppppplVar10 + 0xb9);
  if (ppppppplVar10[0xaa] != (long ******)0x0) {
    ppppppplVar10[0xab] = ppppppplVar10[0xaa];
    __ZdlPv();
  }
  func_0x000109f8e804(ppppppplVar10 + 0xa5);
  func_0x000109f7f78c(ppppppplVar10 + 0xa0);
  if (ppppppplVar10[0x99] != (long ******)0x0) {
    ppppppplVar10[0x9a] = ppppppplVar10[0x99];
    __ZdlPv();
  }
  func_0x000109f8e804(ppppppplVar10 + 0x94);
  func_0x000109f7f78c(ppppppplVar10 + 0x8f);
  if (ppppppplVar10[0x88] != (long ******)0x0) {
    ppppppplVar10[0x89] = ppppppplVar10[0x88];
    __ZdlPv();
  }
  func_0x000109f8e84c(ppppppplVar10 + 0x7e);
  ppppppplStack_188 = ppppppplVar10 + 0x79;
  func_0x000109f8e9e4(&ppppppplStack_188);
  FUN_109f8ea70(ppppppplVar10 + 0x74);
  func_0x000109f8eab8(ppppppplVar10 + 0x6f);
  func_0x000109f8eb34(ppppppplVar10 + 0x6c,ppppppplVar10[0x6d]);
  func_0x000109f8eb84(ppppppplVar10 + 0x69,ppppppplVar10[0x6a]);
  if (ppppppplVar10[0x66] != (long ******)0x0) {
    ppppppplVar10[0x67] = ppppppplVar10[0x66];
    __ZdlPv();
  }
  if (ppppppplVar10[99] != (long ******)0x0) {
    ppppppplVar10[100] = ppppppplVar10[99];
    __ZdlPv();
  }
  if (ppppppplVar10[0x60] != (long ******)0x0) {
    ppppppplVar10[0x61] = ppppppplVar10[0x60];
    __ZdlPv();
  }
  if (ppppppplVar10[0x5d] != (long ******)0x0) {
    ppppppplVar10[0x5e] = ppppppplVar10[0x5d];
    __ZdlPv();
  }
  if (ppppppplVar10[0x5a] != (long ******)0x0) {
    ppppppplVar10[0x5b] = ppppppplVar10[0x5a];
    __ZdlPv();
  }
  if (ppppppplVar10[0x57] != (long ******)0x0) {
    ppppppplVar10[0x58] = ppppppplVar10[0x57];
    __ZdlPv();
  }
  func_0x000109f8ec10(ppppppplVar10 + 0x52);
  func_0x000109f8ec10(ppppppplVar10 + 0x4d);
  func_0x000109f8ec58(ppppppplVar10 + 0x48);
  func_0x000109f8e84c(ppppppplVar10 + 0x43);
  func_0x000109f7f78c(ppppppplVar10 + 0x3e);
  func_0x0001086af8b0(ppppppplVar10 + 0x39);
  func_0x000109f7f78c(ppppppplVar10 + 0x34);
  func_0x000109f8e84c(ppppppplVar10 + 0x2f);
  func_0x000109f7f78c(ppppppplVar10 + 0x2a);
  func_0x000109f7f78c(ppppppplVar10 + 0x25);
  func_0x000109f7f78c(ppppppplVar10 + 0x20);
  func_0x0001086af8b0(ppppppplVar10 + 0x1b);
  func_0x000109f7f78c(ppppppplVar10 + 0x16);
  FUN_109d4882c(ppppppplVar10 + 0x11,ppppppplVar10[0x12]);
  func_0x000109f8eccc(ppppppplVar10 + 0xc);
  func_0x000109f8ed14(ppppppplVar10 + 9,ppppppplVar10[10]);
  func_0x000109f6ed60(ppppppplVar10 + 4);
  return ppppppplVar10;
}



/* Entry: 109f8e014; end: 109f8e75b;  */

/* WARNING: Removing unreachable block (ram,0x000109f8e5b8) */
/* WARNING: Removing unreachable block (ram,0x000109f8e174) */
/* WARNING: Removing unreachable block (ram,0x000109f8e6a0) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_109f8e014(undefined8 *******param_1,long *param_2,uint *param_3,undefined8 *param_4,long param_5
             )

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  long *plVar9;
  undefined8 *******pppppppuVar10;
  int iVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *******pppppppuStack_128;
  long *plStack_120;
  undefined8 *******pppppppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined1 uStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined7 uStack_c0;
  byte bStack_b9;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  long alStack_80 [4];
  
  alStack_80[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = *(byte *)(param_5 + 4);
  pppppppuVar8 = param_1;
  lVar14 = param_5;
  if (bVar3 == 0x13) {
    lVar16 = *(long *)(param_5 + 0x30);
    if (lVar16 != 0) {
      if (2 < *(byte *)(lVar16 + 4) - 0x11) goto joined_r0x000109f8e3f0;
      cVar4 = *(char *)((long)param_4 + 0x17);
      if (cVar4 < '\0') {
        func_0x000107c3192c(&pppppppuStack_a0,*param_4,param_4[1]);
        cVar4 = *(char *)((long)param_4 + 0x17);
        if (-1 < cVar4) goto LAB_109f8e2a4;
        lVar15 = param_4[1];
      }
      else {
        pppppppuStack_98 = (undefined8 *******)param_4[1];
        pppppppuStack_a0 = (undefined8 *******)*param_4;
        uStack_90 = param_4[2];
LAB_109f8e2a4:
        lVar15 = (long)(int)cVar4;
      }
      pppppppuVar8 = &pppppppuStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (pppppppuVar8,lVar15 + 3);
      pppppppuVar10 = pppppppuStack_98;
      if (-1 < (long)uStack_90) {
        pppppppuVar10 = (undefined8 *******)(uStack_90 >> 0x38);
      }
      if (0 < *(int *)(param_5 + 0x10)) {
        iVar11 = 0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,&DAT_10f62a9e8,1);
          __ZNSt3__19to_stringEi(&pppppppuStack_d0,iVar11);
          ppppppuVar12 = ppppppuStack_c8;
          pppppppuVar8 = pppppppuStack_d0;
          if (-1 < (char)bStack_b9) {
            ppppppuVar12 = (undefined8 ******)(ulong)bStack_b9;
            pppppppuVar8 = &pppppppuStack_d0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,pppppppuVar8,ppppppuVar12);
          if ((char)bStack_b9 < '\0') {
            __ZdlPv(pppppppuStack_d0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,&DAT_10f62a9ea,1);
          pppppppuVar8 = &pppppppuStack_d0;
          FUN_109f8e014(pppppppuVar8,param_2,param_3,&pppppppuStack_a0,lVar16);
          if ((uStack_a8 & 1) == 0) {
            alStack_80[1]._0_7_ =
                 (undefined7)(CONCAT35((undefined3)uStack_b4,CONCAT41(uStack_b8,bStack_b9)) >> 8);
            *(undefined4 *)param_1 = pppppppuStack_d0._0_4_;
            param_1[1] = ppppppuStack_c8;
            param_1[2] = (undefined8 ******)CONCAT17(bStack_b9,uStack_c0);
            *(ulong *)((long)param_1 + 0x17) = CONCAT71((undefined7)alStack_80[1],bStack_b9);
            *(undefined1 *)((long)param_1 + 0x1f) = uStack_b4._3_1_;
            param_1[4] = (undefined8 ******)CONCAT44(uStack_ac,uStack_b0);
            *(undefined1 *)(param_1 + 5) = 0;
            bVar5 = true;
            goto LAB_109f8e3cc;
          }
          pppppppuVar8 = &pppppppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (pppppppuVar8,pppppppuVar10,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_5 + 0x10));
      }
      bVar5 = false;
LAB_109f8e3cc:
      if ((long)uStack_90 < 0) {
        pppppppuVar8 = pppppppuStack_a0;
        __ZdlPv();
      }
      if (bVar5) goto LAB_109f8e618;
      bVar3 = *(byte *)(param_5 + 4);
      goto joined_r0x000109f8e3f0;
    }
    func_0x000107c31940(&pppppppuStack_a0,&UNK_10f629d66);
    pppppppuVar8 = &pppppppuStack_d0;
    FUN_109f76188(pppppppuVar8,&pppppppuStack_a0,1,&PTR_DAT_110b961d0);
LAB_109f8e538:
    *(undefined4 *)param_1 = pppppppuStack_d0._0_4_;
    param_1[2] = (undefined8 ******)CONCAT17(bStack_b9,uStack_c0);
    param_1[1] = ppppppuStack_c8;
    ppppppuVar12 = (undefined8 ******)CONCAT44(uStack_ac,uStack_b0);
    param_1[3] = (undefined8 ******)CONCAT44(uStack_b4,uStack_b8);
LAB_109f8e550:
    param_1[4] = ppppppuVar12;
    *(undefined1 *)(param_1 + 5) = 0;
    if ((long)uStack_90 < 0) {
      pppppppuVar8 = pppppppuStack_a0;
      __ZdlPv();
    }
  }
  else {
    if (bVar3 == 0x11) {
      if (*(long *)(param_5 + 0x30) == 0) {
        func_0x000107c31940(&pppppppuStack_a0,&UNK_10f629bf4);
        pppppppuVar8 = &pppppppuStack_d0;
        FUN_109f76188(pppppppuVar8,&pppppppuStack_a0,1,&PTR_DAT_110b961a0);
        goto LAB_109f8e538;
      }
      iVar11 = *(int *)(param_5 + 0x10);
      if (0 < iVar11) {
        lVar16 = 0;
        lVar14 = 0;
        uStack_e8 = param_2[1] - *param_2;
        do {
          lVar15 = *(long *)(param_5 + 0x30);
          if (*(long *)(lVar15 + lVar16) == 0) {
            func_0x000107c31940(&pppppppuStack_a0,&UNK_10f629be1);
            pppppppuVar8 = &pppppppuStack_d0;
            FUN_109f76188(pppppppuVar8,&pppppppuStack_a0,1,&PTR_DAT_110b961b8);
            *(undefined4 *)param_1 = pppppppuStack_d0._0_4_;
            param_1[2] = (undefined8 ******)CONCAT17(bStack_b9,uStack_c0);
            param_1[1] = ppppppuStack_c8;
            ppppppuVar12 = (undefined8 ******)CONCAT44(uStack_ac,uStack_b0);
            param_1[3] = (undefined8 ******)CONCAT44(uStack_b4,uStack_b8);
            goto LAB_109f8e550;
          }
          if (*(char *)(*(long *)(lVar15 + lVar16) + 4) != '\r') {
            uVar1 = param_4[1];
            if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
              uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
            }
            func_0x000104c4f768(alStack_80,uVar1 + 1,&ppuStack_e0);
            if (uVar1 != 0) {
              puVar2 = (undefined8 *)*param_4;
              if (-1 < *(char *)((long)param_4 + 0x17)) {
                puVar2 = param_4;
              }
              _memmove(alStack_80,puVar2,uVar1);
            }
            *(undefined2 *)((long)alStack_80 + uVar1) = 0x2e;
            uVar13 = *(undefined8 *)(lVar15 + lVar16 + 8);
            uVar7 = uVar13;
            _strlen(uVar13);
            plVar9 = alStack_80;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar9,uVar13,uVar7);
            pppppppuStack_98 = (undefined8 *******)plVar9[1];
            pppppppuStack_a0 = (undefined8 *******)*plVar9;
            uStack_90 = plVar9[2];
            plVar9[1] = 0;
            plVar9[2] = 0;
            *plVar9 = 0;
            pppppppuVar8 = &pppppppuStack_d0;
            FUN_109f8e014(pppppppuVar8,param_2,param_3,&pppppppuStack_a0,
                          *(undefined8 *)(lVar15 + lVar16));
            if ((long)uStack_90 < 0) {
              pppppppuVar8 = pppppppuStack_a0;
              __ZdlPv();
            }
            if ((uStack_a8 & 1) == 0) {
              param_1[1] = ppppppuStack_c8;
              param_1[2] = (undefined8 ******)CONCAT17(bStack_b9,uStack_c0);
              *(ulong *)((long)param_1 + 0x17) =
                   CONCAT35((undefined3)uStack_b4,CONCAT41(uStack_b8,bStack_b9));
              *(undefined1 *)((long)param_1 + 0x1f) = uStack_b4._3_1_;
              param_1[4] = (undefined8 ******)CONCAT44(uStack_ac,uStack_b0);
              *(undefined1 *)(param_1 + 5) = 0;
              *(undefined4 *)param_1 = pppppppuStack_d0._0_4_;
              goto LAB_109f8e618;
            }
            iVar11 = *(int *)(param_5 + 0x10);
          }
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + 0x30;
        } while (lVar14 < iVar11);
        if (uStack_e8 < (ulong)(param_2[1] - *param_2)) {
          *param_3 = *param_3 + 0xf & 0xfffffff0;
        }
      }
    }
    else {
joined_r0x000109f8e3f0:
      while (bVar3 == 0x13) {
        bVar3 = *(byte *)(*(long *)(lVar14 + 0x30) + 4);
        lVar14 = *(long *)(lVar14 + 0x30);
      }
      if (bVar3 < 0xc) {
        ppuStack_e0 = &PTR_FUN_110b87840;
        uStack_d8 = 1;
        lVar14 = param_5;
        FUN_109ec8a54(param_5,0);
        uVar6 = (uint)lVar14;
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
          uStack_f8 = (ulong)*param_3;
          lStack_100 = lVar14;
          FUN_109f7d45c(&pppppppuStack_a0,&UNK_10f62a22d);
          pppppppuVar8 = &pppppppuStack_d0;
          FUN_109f76188(pppppppuVar8,&pppppppuStack_a0,2,&PTR_DAT_110b961e8);
          goto LAB_109f8e538;
        }
        FUN_109f47700(&pppppppuStack_a0,&ppuStack_e0,param_5);
        if (pppppppuStack_a0 == pppppppuStack_98) {
          func_0x000107c31940(alStack_80,&UNK_10f629e26);
          FUN_109f76188(&pppppppuStack_d0,alStack_80,2,&PTR_DAT_110b96200);
          *(undefined4 *)param_1 = pppppppuStack_d0._0_4_;
          param_1[2] = (undefined8 ******)CONCAT17(bStack_b9,uStack_c0);
          param_1[1] = ppppppuStack_c8;
          param_1[3] = (undefined8 ******)CONCAT44(uStack_b4,uStack_b8);
          param_1[4] = (undefined8 ******)CONCAT44(uStack_ac,uStack_b0);
          *(undefined1 *)(param_1 + 5) = 0;
          pppppppuStack_d0 = &pppppppuStack_a0;
          pppppppuVar8 = &pppppppuStack_d0;
          func_0x000109f48c10();
          goto LAB_109f8e618;
        }
        uStack_a4 = 0;
        ppppppuStack_c8 = (undefined8 ******)0x0;
        pppppppuStack_d0 = (undefined8 *******)0x0;
        uStack_c0 = 0;
        bStack_b9 = 0;
        uStack_ac = 0;
        uStack_a8._0_1_ = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&pppppppuStack_d0,param_4);
        uStack_b8 = (uVar6 + *param_3) - 1 & -uVar6;
        uStack_a4 = *(undefined4 *)((long)pppppppuStack_a0 + 0x2c);
        uStack_ac = *(undefined4 *)((long)pppppppuStack_a0 + 0x24);
        uStack_b4 = (undefined4)*(undefined8 *)((long)pppppppuStack_a0 + 0x1c);
        uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)pppppppuStack_a0 + 0x1c) >> 0x20);
        uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
        *param_3 = *(int *)((long)pppppppuStack_a0 + 0x1c) + uStack_b8;
        puVar2 = (undefined8 *)param_2[1];
        if (puVar2 < (undefined8 *)param_2[2]) {
          puVar2[2] = CONCAT17(bStack_b9,uStack_c0);
          puVar2[1] = ppppppuStack_c8;
          *puVar2 = pppppppuStack_d0;
          ppppppuStack_c8 = (undefined8 ******)0x0;
          uStack_c0 = 0;
          bStack_b9 = 0;
          puVar2[4] = CONCAT44(uStack_ac,uStack_b0);
          puVar2[3] = CONCAT44(uStack_b4,uStack_b8);
          puVar2[5] = CONCAT44(uStack_a4,uStack_a8);
          param_2[1] = (long)(puVar2 + 6);
        }
        else {
          plVar9 = param_2;
          FUN_109f48c9c(param_2,&pppppppuStack_d0);
          param_2[1] = (long)plVar9;
          if ((char)bStack_b9 < '\0') {
            __ZdlPv(pppppppuStack_d0);
          }
        }
        pppppppuStack_d0 = &pppppppuStack_a0;
        pppppppuVar8 = &pppppppuStack_d0;
        func_0x000109f48c10();
      }
    }
    param_1[3] = (undefined8 ******)0x0;
    param_1[2] = (undefined8 ******)0x0;
    param_1[5] = (undefined8 ******)0x0;
    param_1[4] = (undefined8 ******)0x0;
    param_1[1] = (undefined8 ******)0x0;
    *param_1 = (undefined8 ******)0x0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
LAB_109f8e618:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_80[3]) {
    return pppppppuVar8;
  }
  ___stack_chk_fail();
  pppppppuStack_d0 = &pppppppuStack_a0;
  func_0x000109f48c10(&pppppppuStack_d0);
  pppppppuVar10 = pppppppuVar8;
  __Unwind_Resume();
  uStack_108 = 0x109f8e75c;
  plStack_120 = param_2;
  pppppppuStack_118 = pppppppuVar8;
  puStack_110 = &stack0xfffffffffffffff0;
  if (pppppppuVar10[0xc6] != (undefined8 ******)0x0) {
    pppppppuVar10[199] = pppppppuVar10[0xc6];
    __ZdlPv();
  }
  if (pppppppuVar10[0xc3] != (undefined8 ******)0x0) {
    pppppppuVar10[0xc4] = pppppppuVar10[0xc3];
    __ZdlPv();
  }
  func_0x000109f8e804(pppppppuVar10 + 0xbe);
  func_0x000109f8e84c(pppppppuVar10 + 0xb9);
  if (pppppppuVar10[0xaa] != (undefined8 ******)0x0) {
    pppppppuVar10[0xab] = pppppppuVar10[0xaa];
    __ZdlPv();
  }
  func_0x000109f8e804(pppppppuVar10 + 0xa5);
  func_0x000109f7f78c(pppppppuVar10 + 0xa0);
  if (pppppppuVar10[0x99] != (undefined8 ******)0x0) {
    pppppppuVar10[0x9a] = pppppppuVar10[0x99];
    __ZdlPv();
  }
  func_0x000109f8e804(pppppppuVar10 + 0x94);
  func_0x000109f7f78c(pppppppuVar10 + 0x8f);
  if (pppppppuVar10[0x88] != (undefined8 ******)0x0) {
    pppppppuVar10[0x89] = pppppppuVar10[0x88];
    __ZdlPv();
  }
  func_0x000109f8e84c(pppppppuVar10 + 0x7e);
  pppppppuStack_128 = pppppppuVar10 + 0x79;
  func_0x000109f8e9e4(&pppppppuStack_128);
  FUN_109f8ea70(pppppppuVar10 + 0x74);
  func_0x000109f8eab8(pppppppuVar10 + 0x6f);
  func_0x000109f8eb34(pppppppuVar10 + 0x6c,pppppppuVar10[0x6d]);
  func_0x000109f8eb84(pppppppuVar10 + 0x69,pppppppuVar10[0x6a]);
  if (pppppppuVar10[0x66] != (undefined8 ******)0x0) {
    pppppppuVar10[0x67] = pppppppuVar10[0x66];
    __ZdlPv();
  }
  if (pppppppuVar10[99] != (undefined8 ******)0x0) {
    pppppppuVar10[100] = pppppppuVar10[99];
    __ZdlPv();
  }
  if (pppppppuVar10[0x60] != (undefined8 ******)0x0) {
    pppppppuVar10[0x61] = pppppppuVar10[0x60];
    __ZdlPv();
  }
  if (pppppppuVar10[0x5d] != (undefined8 ******)0x0) {
    pppppppuVar10[0x5e] = pppppppuVar10[0x5d];
    __ZdlPv();
  }
  if (pppppppuVar10[0x5a] != (undefined8 ******)0x0) {
    pppppppuVar10[0x5b] = pppppppuVar10[0x5a];
    __ZdlPv();
  }
  if (pppppppuVar10[0x57] != (undefined8 ******)0x0) {
    pppppppuVar10[0x58] = pppppppuVar10[0x57];
    __ZdlPv();
  }
  func_0x000109f8ec10(pppppppuVar10 + 0x52);
  func_0x000109f8ec10(pppppppuVar10 + 0x4d);
  func_0x000109f8ec58(pppppppuVar10 + 0x48);
  func_0x000109f8e84c(pppppppuVar10 + 0x43);
  func_0x000109f7f78c(pppppppuVar10 + 0x3e);
  func_0x0001086af8b0(pppppppuVar10 + 0x39);
  func_0x000109f7f78c(pppppppuVar10 + 0x34);
  func_0x000109f8e84c(pppppppuVar10 + 0x2f);
  func_0x000109f7f78c(pppppppuVar10 + 0x2a);
  func_0x000109f7f78c(pppppppuVar10 + 0x25);
  func_0x000109f7f78c(pppppppuVar10 + 0x20);
  func_0x0001086af8b0(pppppppuVar10 + 0x1b);
  func_0x000109f7f78c(pppppppuVar10 + 0x16);
  FUN_109d4882c(pppppppuVar10 + 0x11,pppppppuVar10[0x12]);
  func_0x000109f8eccc(pppppppuVar10 + 0xc);
  func_0x000109f8ed14(pppppppuVar10 + 9,pppppppuVar10[10]);
  func_0x000109f6ed60(pppppppuVar10 + 4);
  return pppppppuVar10;
}



/* Entry: 109f8e75c; end: 109f8ea23;  */

long FUN_109f8e75c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x630) != 0) {
    *(long *)(param_1 + 0x638) = *(long *)(param_1 + 0x630);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x618) != 0) {
    *(long *)(param_1 + 0x620) = *(long *)(param_1 + 0x618);
    __ZdlPv();
  }
  func_0x000109f8e804(param_1 + 0x5f0);
  func_0x000109f8e84c(param_1 + 0x5c8);
  if (*(long *)(param_1 + 0x550) != 0) {
    *(long *)(param_1 + 0x558) = *(long *)(param_1 + 0x550);
    __ZdlPv();
  }
  func_0x000109f8e804(param_1 + 0x528);
  func_0x000109f7f78c(param_1 + 0x500);
  if (*(long *)(param_1 + 0x4c8) != 0) {
    *(long *)(param_1 + 0x4d0) = *(long *)(param_1 + 0x4c8);
    __ZdlPv();
  }
  func_0x000109f8e804(param_1 + 0x4a0);
  func_0x000109f7f78c(param_1 + 0x478);
  if (*(long *)(param_1 + 0x440) != 0) {
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x440);
    __ZdlPv();
  }
  func_0x000109f8e84c(param_1 + 0x3f0);
  lStack_28 = param_1 + 0x3c8;
  func_0x000109f8e9e4(&lStack_28);
  FUN_109f8ea70(param_1 + 0x3a0);
  func_0x000109f8eab8(param_1 + 0x378);
  func_0x000109f8eb34(param_1 + 0x360,*(undefined8 *)(param_1 + 0x368));
  func_0x000109f8eb84(param_1 + 0x348,*(undefined8 *)(param_1 + 0x350));
  if (*(long *)(param_1 + 0x330) != 0) {
    *(long *)(param_1 + 0x338) = *(long *)(param_1 + 0x330);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x318) != 0) {
    *(long *)(param_1 + 800) = *(long *)(param_1 + 0x318);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    *(long *)(param_1 + 0x308) = *(long *)(param_1 + 0x300);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2e8) != 0) {
    *(long *)(param_1 + 0x2f0) = *(long *)(param_1 + 0x2e8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    *(long *)(param_1 + 0x2d8) = *(long *)(param_1 + 0x2d0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2b8) != 0) {
    *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2b8);
    __ZdlPv();
  }
  func_0x000109f8ec10(param_1 + 0x290);
  func_0x000109f8ec10(param_1 + 0x268);
  func_0x000109f8ec58(param_1 + 0x240);
  func_0x000109f8e84c(param_1 + 0x218);
  func_0x000109f7f78c(param_1 + 0x1f0);
  func_0x0001086af8b0(param_1 + 0x1c8);
  func_0x000109f7f78c(param_1 + 0x1a0);
  func_0x000109f8e84c(param_1 + 0x178);
  func_0x000109f7f78c(param_1 + 0x150);
  func_0x000109f7f78c(param_1 + 0x128);
  func_0x000109f7f78c(param_1 + 0x100);
  func_0x0001086af8b0(param_1 + 0xd8);
  func_0x000109f7f78c(param_1 + 0xb0);
  FUN_109d4882c(param_1 + 0x88,*(undefined8 *)(param_1 + 0x90));
  func_0x000109f8eccc(param_1 + 0x60);
  func_0x000109f8ed14(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  func_0x000109f6ed60(param_1 + 0x20);
  return param_1;
}



/* Entry: 109f8ea24; end: 109f8ea6f;  */

/* WARNING: Removing unreachable block (ram,0x000109f8ea4c) */

void FUN_109f8ea24(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x40) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109f8ea70; end: 109f8ed53;  */

long * FUN_109f8ea70(long *param_1)

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



/* Entry: 109f8ed54; end: 109f8edcb;  */

long FUN_109f8ed54(long param_1)

{
  FUN_109f6ffbc();
  func_0x000109f8eab8(param_1 + 0x130);
  FUN_109f8edcc(param_1 + 0x100);
  func_0x000109f8eeb0(param_1 + 0xd8);
  func_0x000109f8eef8(param_1 + 0xb0);
  func_0x000109f8ef88(param_1 + 0x80);
  func_0x000109f8f06c(param_1 + 0x58);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  return param_1;
}



/* Entry: 109f8edcc; end: 109f8ee63;  */

long * FUN_109f8edcc(long *param_1)

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
    if (uVar2 != 2) goto LAB_109f8ee48;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_109f8ee48:
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



/* Entry: 109f8ee64; end: 109f8ef2f;  */

long * FUN_109f8ee64(long *param_1)

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



/* Entry: 109f8ef30; end: 109f8f01f;  */

void FUN_109f8ef30(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    FUN_109f73fdc(param_2 + 0xd);
    func_0x000109f740c0(param_2 + 8);
    func_0x000109f74108(param_2 + 3);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 109f8f020; end: 109f8f0df;  */

long * FUN_109f8f020(long *param_1)

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



/* Entry: 109f8f0e0; end: 109f8f1b3;  */

/* WARNING: Possible PIC construction at 0x000109f8f154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f8f158) */
/* WARNING: Removing unreachable block (ram,0x000109f8f168) */
/* WARNING: Removing unreachable block (ram,0x000109f8f174) */
/* WARNING: Removing unreachable block (ram,0x000109f8f17c) */
/* WARNING: Removing unreachable block (ram,0x000109f8f1a0) */

ulong * FUN_109f8f0e0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar17;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *puVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [16];
  
  puVar11 = auStack_40;
  puVar9 = &stack0xfffffffffffffff0;
  uVar7 = (ulong)(char)*(byte *)((long)param_2 + 0x17);
  if ((long)uVar7 < 0) {
    uVar7 = param_2[1];
    puVar2 = (ulong *)*param_2;
    if (uVar7 < 4) goto LAB_109f8f148;
  }
  else {
    puVar2 = param_2;
    if (*(byte *)((long)param_2 + 0x17) < 4) {
LAB_109f8f148:
      puVar4 = (ulong *)param_1[1];
      puVar19 = (undefined1 *)((long)puVar2 + uVar7);
      unaff_x30 = 0x109f8f158;
      unaff_x19 = param_1;
      goto code_r0x0001092a6ef8;
    }
  }
  puVar4 = (ulong *)param_1[1];
  puVar19 = (undefined1 *)((long)puVar2 + 4);
  uVar7 = 4;
  puVar11 = (undefined1 *)register0x00000008;
  param_2 = unaff_x20;
  puVar9 = unaff_x29;
code_r0x0001092a6ef8:
  *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
  *(ulong **)(puVar11 + -0x20) = param_2;
  *(ulong **)(puVar11 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar11 + -0x10) = puVar9;
  *(undefined8 *)(puVar11 + -8) = unaff_x30;
  puVar1 = puVar4;
  if (0 < (long)uVar7) {
    puVar9 = (undefined1 *)param_1[1];
    if ((long)(param_1[2] - (long)puVar9) < (long)uVar7) {
      uVar18 = *param_1;
      puVar14 = puVar9 + (uVar7 - uVar18);
      if ((long)puVar14 < 0) {
        puVar1 = param_1;
        puVar3 = puVar4;
        puVar5 = puVar2;
        uVar8 = uVar7;
        func_0x000104c591bc();
        *(undefined8 *)(puVar11 + -0xb0) = unaff_x26;
        *(undefined8 *)(puVar11 + -0xa8) = unaff_x25;
        *(undefined8 *)(puVar11 + -0xa0) = unaff_x24;
        *(ulong *)(puVar11 + -0x98) = uVar18;
        *(ulong *)(puVar11 + -0x90) = uVar7;
        *(ulong **)(puVar11 + -0x88) = param_1;
        *(ulong **)(puVar11 + -0x80) = puVar2;
        *(ulong **)(puVar11 + -0x78) = puVar4;
        *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x68) = &UNK_1092a70fc;
        puVar2 = puVar3;
        if (0 < (long)uVar8) {
          puVar9 = (undefined1 *)puVar1[1];
          if ((long)(puVar1[2] - (long)puVar9) < (long)uVar8) {
            uVar7 = *puVar1;
            puVar14 = puVar9 + (uVar8 - uVar7);
            if ((long)puVar14 < 0) {
              puVar2 = puVar1;
              puVar17 = puVar3;
              puVar6 = puVar5;
              func_0x000104c591bc();
              *(undefined1 **)(puVar11 + -0xe0) = puVar9;
              *(ulong **)(puVar11 + -0xd8) = puVar1;
              *(ulong **)(puVar11 + -0xd0) = puVar5;
              *(ulong **)(puVar11 + -200) = puVar3;
              *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0x70;
              *(undefined **)(puVar11 + -0xb8) = &UNK_1092a730c;
              puVar4 = puVar2;
              if (puVar19 != (undefined1 *)0x0) {
                func_0x000109246380();
                puVar9 = (undefined1 *)puVar2[1];
                for (; puVar17 != puVar6; puVar17 = (ulong *)((long)puVar17 + 1)) {
                  *puVar9 = (char)*puVar17;
                  puVar9 = puVar9 + 1;
                }
                puVar2[1] = (ulong)puVar9;
              }
              return puVar4;
            }
            uVar18 = puVar1[2] - uVar7;
            puVar11 = (undefined1 *)(uVar18 * 2);
            if (puVar11 < puVar14 || (long)puVar11 - (long)puVar14 == 0) {
              puVar11 = puVar14;
            }
            if (0x3ffffffffffffffe < uVar18) {
              puVar11 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar11 == (undefined1 *)0x0) {
              puVar19 = (undefined1 *)0x0;
            }
            else {
              puVar19 = puVar11;
              __Znwm();
            }
            puVar2 = (ulong *)((long)puVar3 + ((long)puVar19 - uVar7));
            puVar14 = (undefined1 *)((long)puVar2 + uVar8);
            puVar4 = puVar2;
            do {
              *(char *)puVar4 = (char)*puVar5;
              uVar8 = uVar8 - 1;
              puVar4 = (ulong *)((long)puVar4 + 1);
              puVar5 = (ulong *)((long)puVar5 + 1);
            } while (uVar8 != 0);
            _memcpy(puVar14,puVar3,(long)puVar9 - (long)puVar3);
            puVar1[1] = (ulong)puVar3;
            uVar7 = *puVar1;
            puVar10 = (undefined1 *)((long)puVar2 + (uVar7 - (long)puVar3));
            _memcpy(puVar10,uVar7,(long)puVar3 - uVar7);
            *puVar1 = (ulong)puVar10;
            puVar1[1] = (ulong)(puVar14 + ((long)puVar9 - (long)puVar3));
            puVar1[2] = (ulong)(puVar19 + (long)puVar11);
            if (uVar7 != 0) {
              __ZdlPv(uVar7);
            }
          }
          else {
            uVar7 = (long)puVar9 - (long)puVar3;
            if ((long)uVar7 < (long)uVar8) {
              lVar13 = (long)puVar19 - (long)(uVar7 + (long)puVar5);
              if (lVar13 != 0) {
                _memmove(puVar9,(undefined1 *)(uVar7 + (long)puVar5),lVar13);
              }
              puVar11 = puVar9 + lVar13;
              puVar1[1] = (ulong)puVar11;
              if ((long)uVar7 < 1) {
                return puVar3;
              }
              puVar14 = puVar11;
              if (puVar11 + -uVar8 < puVar9) {
                lVar13 = (long)puVar19 - (long)(uVar8 + (long)puVar5);
                lVar16 = (long)puVar19 - (long)puVar5;
                do {
                  *(undefined1 *)(lVar16 + (long)puVar3) = *(undefined1 *)(lVar13 + (long)puVar3);
                  lVar13 = lVar13 + 1;
                  lVar16 = lVar16 + 1;
                } while ((undefined1 *)(lVar13 + (long)puVar3) < puVar9);
                puVar14 = (undefined1 *)(lVar16 + (long)puVar3);
              }
              puVar1[1] = (ulong)puVar14;
              if (puVar11 != (undefined1 *)((long)puVar3 + uVar8)) {
                _memmove((undefined1 *)((long)puVar3 + uVar8),puVar3);
              }
            }
            else {
              puVar11 = puVar9 + -uVar8;
              puVar19 = puVar9;
              puVar14 = puVar9;
              if (puVar9 + -uVar8 < puVar9) {
                do {
                  puVar10 = puVar11 + 1;
                  puVar14 = puVar19 + 1;
                  *puVar19 = *puVar11;
                  puVar11 = puVar10;
                  puVar19 = puVar14;
                } while (puVar10 != puVar9);
              }
              puVar1[1] = (ulong)puVar14;
              uVar7 = uVar8;
              if (puVar9 != (undefined1 *)((long)puVar3 + uVar8)) {
                _memmove((undefined1 *)((long)puVar3 + uVar8),puVar3);
              }
            }
            _memmove(puVar3,puVar5,uVar7);
          }
        }
        return puVar2;
      }
      uVar8 = param_1[2] - uVar18;
      puVar11 = (undefined1 *)(uVar8 * 2);
      if (puVar11 < puVar14 || (long)puVar11 - (long)puVar14 == 0) {
        puVar11 = puVar14;
      }
      if (0x3ffffffffffffffe < uVar8) {
        puVar11 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar11 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)0x0;
      }
      else {
        puVar19 = puVar11;
        __Znwm();
      }
      puVar1 = (ulong *)(puVar19 + ((long)puVar4 - uVar18));
      _memcpy(puVar1,puVar2,uVar7);
      _memcpy((undefined1 *)((long)puVar1 + uVar7),puVar4,(long)puVar9 - (long)puVar4);
      param_1[1] = (ulong)puVar4;
      _memcpy(puVar19,uVar18,(long)puVar4 - uVar18);
      *param_1 = (ulong)puVar19;
      param_1[1] = (ulong)((undefined1 *)((long)puVar1 + uVar7) + ((long)puVar9 - (long)puVar4));
      param_1[2] = (ulong)(puVar19 + (long)puVar11);
      if (uVar18 != 0) {
        __ZdlPv(uVar18);
      }
    }
    else {
      uVar18 = (long)puVar9 - (long)puVar4;
      if ((long)uVar18 < (long)uVar7) {
        puVar11 = puVar9;
        puVar14 = puVar9;
        if ((undefined1 *)((long)puVar2 + uVar18) != puVar19) {
          puVar11 = (undefined1 *)((long)puVar4 + (long)puVar19) + -(long)puVar2;
          puVar10 = puVar9;
          puVar15 = (undefined1 *)((long)puVar2 + uVar18);
          do {
            puVar12 = puVar15 + 1;
            puVar14 = puVar10 + 1;
            *puVar10 = *puVar15;
            puVar10 = puVar14;
            puVar15 = puVar12;
          } while (puVar12 != puVar19);
        }
        param_1[1] = (ulong)puVar11;
        if ((long)uVar18 < 1) {
          return puVar4;
        }
        puVar19 = puVar11 + -uVar7;
        puVar10 = puVar11;
        if (puVar11 + -uVar7 < puVar9) {
          do {
            puVar15 = puVar19 + 1;
            puVar11 = puVar10 + 1;
            *puVar10 = *puVar19;
            puVar19 = puVar15;
            puVar10 = puVar11;
          } while (puVar15 != puVar9);
        }
        param_1[1] = (ulong)puVar11;
        if (puVar14 != (undefined1 *)((long)puVar4 + uVar7)) {
          _memmove((undefined1 *)((long)puVar4 + uVar7),puVar4);
        }
      }
      else {
        puVar11 = puVar9 + -uVar7;
        puVar19 = puVar9;
        puVar14 = puVar9;
        if (puVar9 + -uVar7 < puVar9) {
          do {
            puVar10 = puVar11 + 1;
            puVar14 = puVar19 + 1;
            *puVar19 = *puVar11;
            puVar11 = puVar10;
            puVar19 = puVar14;
          } while (puVar10 != puVar9);
        }
        param_1[1] = (ulong)puVar14;
        uVar18 = uVar7;
        if (puVar9 != (undefined1 *)((long)puVar4 + uVar7)) {
          _memmove((undefined1 *)((long)puVar4 + uVar7),puVar4);
        }
      }
      _memmove(puVar4,puVar2,uVar18);
    }
  }
  return puVar1;
}



/* Entry: 109f8f1b4; end: 109f9273f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109f8f1b4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *****pppppuVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  long ***ppplVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *****pppppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *****pppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 *extraout_x8;
  undefined8 **ppuVar23;
  undefined8 ***pppuVar24;
  long *plVar25;
  long ****pppplVar26;
  undefined2 uVar27;
  uint uVar28;
  long lVar29;
  undefined2 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 *puVar33;
  int iVar34;
  long *plVar35;
  undefined4 *puVar36;
  undefined8 *****pppppuVar37;
  undefined8 *****pppppuVar38;
  int *piVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  ulong uVar42;
  long *plVar43;
  int iVar44;
  long lVar45;
  int *piVar46;
  undefined8 ****ppppuVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 ****ppppuVar50;
  ulong uStack_16e8;
  ulong uStack_16e0;
  undefined7 uStack_16d8;
  undefined1 uStack_16d1;
  undefined7 uStack_16d0;
  undefined1 uStack_16c9;
  undefined8 uStack_16c8;
  byte bStack_16c0;
  undefined8 ****ppppuStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  long lStack_1688;
  undefined8 uStack_1680;
  undefined8 *puStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  long lStack_1648;
  undefined8 uStack_1640;
  undefined8 *puStack_1638;
  long *plStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined4 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined4 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined4 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined4 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined4 uStack_14d8;
  undefined2 uStack_14d0;
  undefined8 *puStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined4 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined4 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined4 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined4 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined4 uStack_1370;
  undefined2 uStack_1368;
  undefined8 *puStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined4 uStack_1318;
  undefined8 *puStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined4 uStack_12d8;
  undefined8 *puStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined4 uStack_12b8;
  undefined1 uStack_12b4;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined4 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined4 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined4 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined4 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined4 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined4 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined4 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined4 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined4 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined4 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined4 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined4 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined4 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 *puStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 *puStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined4 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined4 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined1 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined4 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 *puStack_f18;
  undefined8 *puStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined4 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined4 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined4 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined4 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined4 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined4 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined4 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined4 uStack_cc8;
  undefined8 *******pppppppuStack_cb8;
  long lStack_cb0;
  char cStack_ca1;
  undefined8 *******pppppppuStack_ca0;
  undefined8 *****pppppuStack_c98;
  undefined8 uStack_c90;
  long lStack_c88;
  undefined8 *puStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined8 uStack_c60;
  undefined1 auStack_c58 [256];
  undefined1 auStack_b58 [272];
  undefined8 *****pppppuStack_a48;
  undefined8 *puStack_a40;
  undefined8 *****pppppuStack_a38;
  undefined8 ****ppppuStack_a30;
  undefined8 *****pppppuStack_a28;
  undefined8 *****pppppuStack_a20;
  undefined8 *****pppppuStack_a18;
  undefined8 ***pppuStack_a10;
  undefined8 ***pppuStack_a08;
  undefined8 ***pppuStack_a00;
  undefined8 ***pppuStack_9f8;
  undefined8 ***pppuStack_9f0;
  undefined8 ***pppuStack_9e8;
  undefined8 *****pppppuStack_9e0;
  undefined8 *****pppppuStack_9d8;
  undefined8 *****pppppuStack_9d0;
  undefined8 ***pppuStack_9c8;
  undefined8 ***pppuStack_9c0;
  undefined8 ***pppuStack_9b8;
  undefined8 ***pppuStack_9b0;
  undefined8 ***pppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  undefined8 ***pppuStack_998;
  undefined8 ***pppuStack_990;
  undefined8 *****pppppuStack_988;
  undefined8 ******ppppppuStack_980;
  undefined8 ***pppuStack_978;
  undefined8 ***pppuStack_970;
  undefined8 ******ppppppuStack_968;
  undefined8 ******ppppppuStack_960;
  undefined8 *****pppppuStack_958;
  undefined8 ******ppppppuStack_950;
  undefined8 ***pppuStack_948;
  undefined8 ***pppuStack_940;
  undefined8 ***pppuStack_938;
  undefined8 ***pppuStack_930;
  undefined8 ***pppuStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined4 uStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined4 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined4 uStack_868;
  undefined8 ****ppppuStack_860;
  undefined8 ****ppppuStack_858;
  undefined8 ****ppppuStack_850;
  undefined8 ****ppppuStack_848;
  undefined8 ****ppppuStack_840;
  undefined8 ****ppppuStack_838;
  undefined8 ****ppppuStack_830;
  undefined8 ****ppppuStack_828;
  undefined8 ****ppppuStack_820;
  undefined8 ****ppppuStack_818;
  undefined8 ****ppppuStack_810;
  undefined8 ****ppppuStack_808;
  undefined8 ****ppppuStack_800;
  undefined8 ****ppppuStack_7f8;
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
  undefined8 *puStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 uStack_778;
  undefined1 *puStack_770;
  undefined8 uStack_768;
  undefined1 auStack_760 [64];
  undefined1 *puStack_720;
  undefined8 uStack_718;
  undefined1 auStack_710 [64];
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined4 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined4 uStack_638;
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined *puStack_600;
  undefined2 uStack_5f8;
  undefined1 uStack_5f6;
  undefined1 uStack_5f5;
  undefined4 uStack_5f4;
  undefined2 uStack_5f0;
  undefined1 uStack_5ee;
  undefined8 uStack_5e8;
  undefined8 *****pppppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 ****ppppuStack_5d0;
  undefined8 *****pppppuStack_5c8;
  undefined8 *****pppppuStack_5c0;
  undefined8 ***pppuStack_5b8;
  undefined8 *****pppppuStack_5b0;
  undefined8 ***pppuStack_5a8;
  undefined8 ******ppppppuStack_5a0;
  undefined8 ******ppppppuStack_598;
  undefined8 ******ppppppuStack_590;
  undefined8 *****pppppuStack_588;
  undefined8 *****pppppuStack_580;
  undefined8 *****pppppuStack_578;
  undefined8 ***pppuStack_570;
  undefined8 ****ppppuStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined1 uStack_467;
  undefined6 uStack_466;
  byte bStack_460;
  undefined8 *****pppppuStack_378;
  undefined8 uStack_370;
  undefined8 ****ppppuStack_368;
  undefined8 uStack_360;
  long lStack_358;
  uint uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 *****pppppuStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_210;
  undefined8 *****pppppuStack_208;
  undefined8 ***pppuStack_200;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined1 uStack_1da;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 *puStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined8 uStack_198;
  byte bStack_190;
  long *plStack_128;
  long *plStack_120;
  long alStack_118 [8];
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  char cStack_bf;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar11 = 1 < *(uint *)(param_4 + 4);
  puVar19 = &UNK_10f62a4df;
  if (bVar11) {
    puVar19 = &UNK_10f62a4f9;
  }
  uVar30 = 1;
  if (bVar11) {
    uVar30 = 0x8001;
  }
  uVar28 = 5;
  if (bVar11) {
    uVar28 = 6;
  }
  uVar27 = 0x10;
  if (bVar11) {
    uVar27 = 0xe;
  }
  lVar29 = *(long *)(param_1[7] + 0x28);
  if (lVar29 == 0) {
    func_0x000107c31940(&pppppuStack_a48,&UNK_10f625b6b);
    FUN_109f92740(&uStack_16b0,&pppppuStack_a48,1,&PTR_DAT_110b96218);
  }
  else {
    lVar31 = *(long *)(param_1[8] + 0x28);
    if (lVar31 == 0) {
      func_0x000107c31940(&pppppuStack_a48,&UNK_10f625b94);
      FUN_109f92740(&uStack_16b0,&pppppuStack_a48,1,&PTR_DAT_110b96230);
    }
    else if (*(long *)(lVar29 + 0x160) == 0) {
      func_0x000107c31940(&pppppuStack_a48,&UNK_10f62a37c);
      FUN_109f92740(&uStack_16b0,&pppppuStack_a48,1,&PTR_DAT_110b96248);
    }
    else {
      if (*(long *)(lVar31 + 0x160) != 0) {
        uStack_16a8 = param_1[4];
        uStack_16b0 = param_1[3];
        uStack_16a0 = *param_1;
        uStack_1698 = param_1[1];
        uStack_1690 = param_1[2];
        uStack_1680 = param_1[9];
        uStack_1640 = param_1[10];
        uStack_1668 = param_1[6];
        uStack_1670 = param_1[5];
        lStack_1688 = param_1[7];
        puStack_1678 = param_1;
        uStack_1660 = uStack_16a0;
        uStack_1658 = uStack_1698;
        uStack_1650 = uStack_1690;
        lStack_1648 = param_1[8];
        puStack_1638 = param_1;
        FUN_109f6f7cc(&plStack_1630,0x100);
        uStack_1610 = 0;
        uStack_1618 = 0;
        uStack_1620 = 0;
        uStack_1628 = 0;
        uStack_15f8 = 0;
        uStack_1600 = 0;
        uStack_15e8 = 0;
        uStack_15f0 = 0;
        uStack_15d8 = 0;
        uStack_15e0 = 0;
        uStack_15c8 = 0;
        uStack_15d0 = 0;
        uStack_15b8 = 0;
        uStack_15c0 = 0;
        uStack_1608 = 0;
        uStack_15b0 = 0x3f800000;
        uStack_15a0 = 0;
        uStack_15a8 = 0;
        uStack_1590 = 0;
        uStack_1598 = 0;
        uStack_1580 = 0;
        uStack_1588 = 0;
        uStack_1570 = 0;
        uStack_1578 = 0;
        uStack_1560 = 0;
        uStack_1568 = 0;
        uStack_1558 = 0x3f800000;
        uStack_1548 = 0;
        uStack_1550 = 0;
        uStack_1538 = 0;
        uStack_1540 = 0;
        uStack_1530 = 0x3f800000;
        uStack_1520 = 0;
        uStack_1528 = 0;
        uStack_1510 = 0;
        uStack_1518 = 0;
        uStack_1500 = 0;
        uStack_1508 = 0;
        uStack_14f0 = 0;
        uStack_14f8 = 0;
        uStack_14e0 = 0;
        uStack_14e8 = 0;
        uStack_14d8 = 0x3f800000;
        uStack_14d0 = 0;
        uStack_14b8 = 0;
        uStack_14c0 = 0;
        uStack_14a8 = 0;
        uStack_14b0 = 0;
        uStack_14a0 = 0;
        uStack_1490 = 0;
        uStack_1498 = 0;
        uStack_1480 = 0;
        uStack_1488 = 0;
        uStack_1470 = 0;
        uStack_1478 = 0;
        uStack_1460 = 0;
        uStack_1468 = 0;
        uStack_1450 = 0;
        uStack_1458 = 0;
        uStack_1448 = 0x3f800000;
        uStack_1408 = 0;
        uStack_1410 = 0;
        uStack_13f8 = 0;
        uStack_1400 = 0;
        uStack_1428 = 0;
        uStack_1430 = 0;
        uStack_1418 = 0;
        uStack_1420 = 0;
        uStack_1438 = 0;
        uStack_1440 = 0;
        uStack_13f0 = 0x3f800000;
        uStack_13e0 = 0;
        uStack_13e8 = 0;
        uStack_13d0 = 0;
        uStack_13d8 = 0;
        uStack_13c8 = 0x3f800000;
        uStack_13b8 = 0;
        uStack_13c0 = 0;
        uStack_13a8 = 0;
        uStack_13b0 = 0;
        uStack_1398 = 0;
        uStack_13a0 = 0;
        uStack_1388 = 0;
        uStack_1390 = 0;
        uStack_1378 = 0;
        uStack_1380 = 0;
        uStack_1370 = 0x3f800000;
        uStack_1368 = 0;
        uStack_1330 = 0;
        uStack_1338 = 0;
        uStack_1320 = 0;
        uStack_1328 = 0;
        uStack_1350 = 0;
        uStack_1358 = 0;
        uStack_1340 = 0;
        uStack_1348 = 0;
        uStack_1318 = 0x3f800000;
        puStack_1310 = &uStack_1308;
        uStack_1300 = 0;
        uStack_1308 = 0;
        uStack_12f0 = 0;
        uStack_12f8 = 0;
        uStack_12e0 = 0;
        uStack_12e8 = 0;
        uStack_12d8 = 0x3f800000;
        puStack_12d0 = &uStack_12c8;
        uStack_12c0 = 0;
        uStack_12c8 = 0;
        uStack_12b8 = 0;
        uStack_12b4 = 0;
        uStack_1290 = 0;
        uStack_1298 = 0;
        uStack_12a0 = 0;
        uStack_12a8 = 0;
        uStack_12b0 = 0;
        uStack_1288 = 0x3f800000;
        uStack_1268 = 0;
        uStack_1270 = 0;
        uStack_1278 = 0;
        uStack_1280 = 0;
        uStack_1260 = 0x3f800000;
        uStack_1250 = 0;
        uStack_1258 = 0;
        uStack_1240 = 0;
        uStack_1248 = 0;
        uStack_1238 = 0x3f800000;
        uStack_1218 = 0;
        uStack_1220 = 0;
        uStack_1228 = 0;
        uStack_1230 = 0;
        uStack_1210 = 0x3f800000;
        uStack_1200 = 0;
        uStack_1208 = 0;
        uStack_11f0 = 0;
        uStack_11f8 = 0;
        uStack_11e8 = 0x3f800000;
        uStack_11c8 = 0;
        uStack_11d0 = 0;
        uStack_11d8 = 0;
        uStack_11e0 = 0;
        uStack_11c0 = 0x3f800000;
        uStack_11b0 = 0;
        uStack_11b8 = 0;
        uStack_11a0 = 0;
        uStack_11a8 = 0;
        uStack_1198 = 0x3f800000;
        uStack_1178 = 0;
        uStack_1180 = 0;
        uStack_1188 = 0;
        uStack_1190 = 0;
        uStack_1170 = 0x3f800000;
        uStack_1160 = 0;
        uStack_1168 = 0;
        uStack_1150 = 0;
        uStack_1158 = 0;
        uStack_1148 = 0x3f800000;
        uStack_1128 = 0;
        uStack_1130 = 0;
        uStack_1138 = 0;
        uStack_1140 = 0;
        uStack_1120 = 0x3f800000;
        uStack_1110 = 0;
        uStack_1118 = 0;
        uStack_1100 = 0;
        uStack_1108 = 0;
        uStack_10f8 = 0x3f800000;
        uStack_10d8 = 0;
        uStack_10e0 = 0;
        uStack_10e8 = 0;
        uStack_10f0 = 0;
        uStack_10d0 = 0x3f800000;
        uStack_10c0 = 0;
        uStack_10c8 = 0;
        uStack_10b0 = 0;
        uStack_10b8 = 0;
        uStack_10a8 = 0x3f800000;
        puStack_1010 = &uStack_1008;
        uStack_1000 = 0;
        uStack_1008 = 0;
        uStack_1018 = 0;
        uStack_1020 = 0;
        uStack_1028 = 0;
        uStack_1030 = 0;
        uStack_1038 = 0;
        uStack_1040 = 0;
        uStack_1048 = 0;
        uStack_1050 = 0;
        uStack_1058 = 0;
        uStack_1060 = 0;
        uStack_1068 = 0;
        uStack_1070 = 0;
        uStack_1078 = 0;
        uStack_1080 = 0;
        uStack_1088 = 0;
        uStack_1090 = 0;
        uStack_1098 = 0;
        uStack_10a0 = 0;
        puStack_ff8 = &uStack_ff0;
        uStack_fe8 = 0;
        uStack_ff0 = 0;
        uStack_fc8 = 0;
        uStack_fd0 = 0;
        uStack_fd8 = 0;
        uStack_fe0 = 0;
        uStack_fc0 = 0x3f800000;
        uStack_fb0 = 0;
        uStack_fb8 = 0;
        uStack_fa0 = 0;
        uStack_fa8 = 0;
        uStack_f98 = 0x3f800000;
        uStack_f78 = 0;
        uStack_f80 = 0;
        uStack_f88 = 0;
        uStack_f90 = 0;
        uStack_f50 = 0;
        uStack_f58 = 0;
        uStack_f60 = 0;
        uStack_f68 = 0;
        uStack_f70 = 0;
        uStack_f48 = 0x3f800000;
        uStack_ec8 = 0;
        uStack_ed0 = 0;
        uStack_ed8 = 0;
        uStack_ee0 = 0;
        uStack_ee8 = 0;
        uStack_ef0 = 0;
        uStack_ef8 = 0;
        uStack_f00 = 0;
        uStack_f08 = 0;
        puStack_f10 = (undefined8 *)0x0;
        puStack_f18 = (undefined8 *)0x0;
        uStack_f20 = 0;
        uStack_f28 = 0;
        uStack_f30 = 0;
        uStack_f38 = 0;
        uStack_f40 = 0;
        uStack_ec0 = 0x3f800000;
        uStack_eb0 = 0;
        uStack_eb8 = 0;
        uStack_ea0 = 0;
        uStack_ea8 = 0;
        uStack_e98 = 0x3f800000;
        uStack_e40 = 0;
        uStack_e48 = 0;
        uStack_e50 = 0;
        uStack_e58 = 0;
        uStack_e60 = 0;
        uStack_e68 = 0;
        uStack_e70 = 0;
        uStack_e78 = 0;
        uStack_e80 = 0;
        uStack_e88 = 0;
        uStack_e90 = 0;
        uStack_e38 = 0x3f800000;
        uStack_e18 = 0;
        uStack_e20 = 0;
        uStack_e28 = 0;
        uStack_e30 = 0;
        uStack_e10 = 0x3f800000;
        uStack_d90 = 0;
        uStack_d98 = 0;
        uStack_d80 = 0;
        uStack_d88 = 0;
        uStack_db0 = 0;
        uStack_db8 = 0;
        uStack_da0 = 0;
        uStack_da8 = 0;
        uStack_dd0 = 0;
        uStack_dd8 = 0;
        uStack_dc0 = 0;
        uStack_dc8 = 0;
        uStack_df0 = 0;
        uStack_df8 = 0;
        uStack_de0 = 0;
        uStack_de8 = 0;
        uStack_e00 = 0;
        uStack_e08 = 0;
        uStack_d78 = 0;
        uStack_d70 = 0x3f800000;
        uStack_d60 = 0;
        uStack_d68 = 0;
        uStack_d50 = 0;
        uStack_d58 = 0;
        uStack_d48 = 0x3f800000;
        uStack_cf8 = 0;
        uStack_d00 = 0;
        uStack_d08 = 0;
        uStack_d10 = 0;
        uStack_d18 = 0;
        uStack_d20 = 0;
        uStack_d28 = 0;
        uStack_d30 = 0;
        uStack_d38 = 0;
        uStack_d40 = 0;
        uStack_cf0 = 0x3f800000;
        uStack_ce0 = 0;
        uStack_ce8 = 0;
        uStack_cd0 = 0;
        uStack_cd8 = 0;
        uStack_cc8 = 0x3f800000;
        puStack_14c8 = &uStack_16b0;
        puStack_1360 = &uStack_16b0;
        FUN_109f6fee4(&uStack_16b0,&uStack_1628,
                      *(undefined8 *)(*(long *)(param_1[7] + 0x28) + 0x160),param_2);
        FUN_109f6fee4(&uStack_1670,&uStack_14c0,
                      *(undefined8 *)(*(long *)(param_1[8] + 0x28) + 0x160),param_2);
        FUN_109f96784(&pppppuStack_a48,
                      *(undefined8 *)(*(long *)(*(long *)(lStack_1688 + 0x28) + 0x160) + 0x178),
                      &uStack_1628);
        if (((ulong)pppppuStack_a20 & 1) == 0) {
          if ((long)ppppuStack_a30 < 0) {
            __ZdlPv(puStack_a40);
          }
          func_0x000107c31940(&pppppuStack_378,&UNK_10f62a517);
          FUN_109f92740(&pppppuStack_a48,&pppppuStack_378,2,&PTR_DAT_110b962d8);
LAB_109f901ac:
          ppppuVar47 = ppppuStack_a30;
          puVar40 = puStack_a40;
          if ((long)ppppuStack_368 < 0) {
            __ZdlPv(pppppuStack_378);
          }
          if ((long)ppppuVar47 < 0) {
            __ZdlPv(puVar40);
          }
          func_0x000107c31940(&pppppuStack_378,&UNK_10f62a3d8);
          FUN_109f92740(&pppppuStack_a48,&pppppuStack_378,2,&PTR_DAT_110b96278);
LAB_109f9020c:
          *(undefined4 *)extraout_x8 = pppppuStack_a48._0_4_;
          extraout_x8[2] = pppppuStack_a38;
          extraout_x8[1] = puStack_a40;
          extraout_x8[3] = ppppuStack_a30;
          extraout_x8[4] = pppppuStack_a28;
          *(undefined1 *)(extraout_x8 + 5) = 0;
          if ((long)ppppuStack_368 < 0) {
            __ZdlPv(pppppuStack_378);
          }
        }
        else {
          FUN_109f96784(&pppppuStack_a48,
                        *(undefined8 *)(*(long *)(*(long *)(lStack_1648 + 0x28) + 0x160) + 0x178),
                        &uStack_14c0);
          if (((ulong)pppppuStack_a20 & 1) == 0) {
            if ((long)ppppuStack_a30 < 0) {
              __ZdlPv(puStack_a40);
            }
            func_0x000107c31940(&pppppuStack_378,&UNK_10f62a5f8);
            FUN_109f92740(&pppppuStack_a48,&pppppuStack_378,2,&PTR_DAT_110b962f0);
            goto LAB_109f901ac;
          }
          FUN_109fc6cf0(&pppppuStack_a48,param_1,param_2,&uStack_16b0);
          if (((ulong)pppppuStack_a20 & 1) == 0) {
            if ((long)ppppuStack_a30 < 0) {
              __ZdlPv(puStack_a40);
            }
            func_0x000107c31940(&pppppuStack_378,&UNK_10f62a41d);
            FUN_109f92740(&pppppuStack_a48,&pppppuStack_378,2,&PTR_DAT_110b96290);
            goto LAB_109f9020c;
          }
          FUN_109d8d7d8(&ppppuStack_16b8);
          *(undefined2 *)(ppppuStack_16b8 + 0x14f) = 0x100;
          puStack_a40 = &uStack_16b0;
          pppuStack_938 = (undefined8 ***)0x0;
          pppuStack_940 = (undefined8 ***)0x0;
          pppuStack_928 = (undefined8 ***)0x0;
          pppuStack_930 = (undefined8 ***)0x0;
          uStack_918 = 0;
          uStack_920 = 0;
          uStack_908 = 0;
          uStack_910 = 0;
          pppppuStack_a28 = (undefined8 *****)0x0;
          ppppuStack_a30 = (undefined8 ****)0x0;
          pppppuStack_a18 = (undefined8 *****)0x0;
          pppppuStack_a20 = (undefined8 *****)0x0;
          pppuStack_a08 = (undefined8 ***)0x0;
          pppuStack_a10 = (undefined8 ***)0x0;
          pppuStack_9f8 = (undefined8 ***)0x0;
          pppuStack_a00 = (undefined8 ***)0x0;
          pppuStack_9e8 = (undefined8 ***)0x0;
          pppuStack_9f0 = (undefined8 ***)0x0;
          pppppuStack_9d8 = (undefined8 *****)0x0;
          pppppuStack_9e0 = (undefined8 *****)0x0;
          pppuStack_9c8 = (undefined8 ***)0x0;
          pppppuStack_9d0 = (undefined8 *****)0x0;
          pppuStack_9b8 = (undefined8 ***)0x0;
          pppuStack_9c0 = (undefined8 ***)0x0;
          pppuStack_9a8 = (undefined8 ***)0x0;
          pppuStack_9b0 = (undefined8 ***)0x0;
          pppuStack_998 = (undefined8 ***)0x0;
          pppuStack_9a0 = (undefined8 ***)0x0;
          pppppuStack_988 = (undefined8 *****)0x0;
          pppuStack_990 = (undefined8 ***)0x0;
          pppuStack_978 = (undefined8 ***)0x0;
          ppppppuStack_980 = (undefined8 ******)0x0;
          ppppppuStack_968 = (undefined8 ******)0x0;
          pppuStack_970 = (undefined8 ***)0x0;
          pppppuStack_958 = (undefined8 *****)0x0;
          ppppppuStack_960 = (undefined8 ******)0x0;
          pppuStack_948 = (undefined8 ***)0x0;
          ppppppuStack_950 = (undefined8 ******)0x0;
          uStack_900 = 0x3f800000;
          puStack_8f8 = &uStack_8f0;
          uStack_8e8 = 0;
          uStack_8f0 = 0;
          uStack_8d8 = 0;
          uStack_8e0 = 0;
          uStack_8c8 = 0;
          uStack_8d0 = 0;
          uStack_8c0 = 0x3f800000;
          uStack_8b0 = 0;
          uStack_8b8 = 0;
          uStack_8a0 = 0;
          uStack_8a8 = 0;
          uStack_898 = 0;
          uStack_890 = 0x3f800000;
          puVar20 = &UNK_10f62aa81;
          pppuVar24 = ppppuStack_16b8 + 0x21;
          pppppuStack_a48 = &ppppuStack_16b8;
          pppppuStack_a38 = &ppppuStack_16b8;
          FUN_109d956b4(pppuVar24,&UNK_10f62aa81,0xf);
          ppuVar23 = *pppuVar24;
          if (((ulong)puVar20 & 1) != 0) {
            ppuVar23[2] = ppuVar23;
          }
          pppppuStack_378 = (undefined8 *****)(ppuVar23 + 1);
          ppppuVar47 = &ppppuStack_16b8;
          FUN_109d974c0(ppppuVar47,&pppppuStack_378,1,0,1);
          pppppuVar38 = pppppuStack_a38;
          puVar20 = &UNK_10f62aa91;
          ppppuVar50 = *pppppuStack_a38 + 0x21;
          ppppuStack_a30 = ppppuVar47;
          FUN_109d956b4(ppppuVar50,&UNK_10f62aa91,0xf);
          pppuVar24 = *ppppuVar50;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_378 = (undefined8 *****)(pppuVar24 + 1);
          uStack_370 = (undefined8 *****)ppppuStack_a30;
          ppppuVar47 = *pppppuStack_a38 + 0xf6;
          FUN_109d678e8(ppppuVar47,0,0);
          FUN_109d94e24();
          ppppuStack_368 = ppppuVar47;
          FUN_109d974c0(pppppuVar38,&pppppuStack_378,3,0,1);
          pppppuVar13 = pppppuStack_a38;
          puVar20 = &UNK_10f62aaa1;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          pppppuStack_a28 = pppppuVar38;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aaa1,0xb);
          pppuVar24 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_378 = (undefined8 *****)(pppuVar24 + 1);
          uStack_370 = pppppuStack_a28;
          ppppuVar47 = *pppppuStack_a38 + 0xf6;
          FUN_109d678e8(ppppuVar47,0,0);
          FUN_109d94e24();
          ppppuStack_368 = ppppuVar47;
          FUN_109d974c0(pppppuVar13,&pppppuStack_378,3,0,1);
          pppppuVar38 = pppppuStack_a38;
          pppppuStack_378 = pppppuStack_a28;
          uStack_370 = pppppuStack_a28;
          ppppuVar47 = *pppppuStack_a38 + 0xf6;
          pppppuStack_a20 = pppppuVar13;
          FUN_109d678e8(ppppuVar47,0,0);
          FUN_109d94e24();
          ppppuStack_368 = ppppuVar47;
          FUN_109d974c0(pppppuVar38,&pppppuStack_378,3,0,1);
          puVar20 = &UNK_10f62aaad;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          pppppuStack_a18 = pppppuVar38;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aaad,0xb);
          pppuStack_a10 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_a10[2] = pppuStack_a10;
          }
          pppuStack_a10 = pppuStack_a10 + 1;
          puVar20 = &UNK_10f62aab9;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aab9,0xb);
          pppuStack_a08 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_a08[2] = pppuStack_a08;
          }
          pppuStack_a08 = pppuStack_a08 + 1;
          puVar20 = &UNK_10f62aac5;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aac5,10);
          pppuStack_a00 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_a00[2] = pppuStack_a00;
          }
          pppuStack_a00 = pppuStack_a00 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aad0,10);
          pppuStack_9f8 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_9f8[2] = pppuStack_9f8;
          }
          pppuStack_9f8 = pppuStack_9f8 + 1;
          puVar20 = &UNK_10f62aadb;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aadb,0x13);
          pppuStack_9f0 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9f0[2] = pppuStack_9f0;
          }
          pppuStack_9f0 = pppuStack_9f0 + 1;
          puVar20 = &UNK_10f62aaef;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aaef,0x15);
          pppuStack_9e8 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9e8[2] = pppuStack_9e8;
          }
          pppuStack_9e8 = pppuStack_9e8 + 1;
          puVar20 = &UNK_10f62ab05;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab05,0x12);
          pppuVar24 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_9e0 = (undefined8 *****)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab18,0x11);
          pppuVar24 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_9d8 = (undefined8 *****)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab2a,0xc);
          pppuVar24 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_9d0 = (undefined8 *****)(pppuVar24 + 1);
          puVar20 = &UNK_10f62ab37;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab37,0x11);
          pppuStack_9c8 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9c8[2] = pppuStack_9c8;
          }
          pppuStack_9c8 = pppuStack_9c8 + 1;
          puVar20 = &UNK_10f62ab49;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab49,0x17);
          pppuStack_9c0 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9c0[2] = pppuStack_9c0;
          }
          pppuStack_9c0 = pppuStack_9c0 + 1;
          puVar20 = &UNK_10f62ab61;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab61,0x14);
          pppuStack_9b8 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9b8[2] = pppuStack_9b8;
          }
          pppuStack_9b8 = pppuStack_9b8 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab76,8);
          pppuStack_9b0 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_9b0[2] = pppuStack_9b0;
          }
          pppuStack_9b0 = pppuStack_9b0 + 1;
          puVar20 = &UNK_10f62ab7f;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab7f,0xe);
          pppuStack_9a8 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_9a8[2] = pppuStack_9a8;
          }
          pppuStack_9a8 = pppuStack_9a8 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ab8e,0x11);
          pppuStack_9a0 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_9a0[2] = pppuStack_9a0;
          }
          pppuStack_9a0 = pppuStack_9a0 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aba0,0xf);
          pppuStack_998 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_998[2] = pppuStack_998;
          }
          pppuStack_998 = pppuStack_998 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62abb0,0xe);
          pppuStack_990 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_990[2] = pppuStack_990;
          }
          pppuStack_990 = pppuStack_990 + 1;
          puVar20 = &UNK_10f62abbf;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62abbf,0x10);
          pppuVar24 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_988 = (undefined8 *****)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62abd0,0x11);
          pppuVar24 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          ppppppuStack_980 = (undefined8 ******)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62abe2,0x12);
          pppuStack_978 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_978[2] = pppuStack_978;
          }
          pppuStack_978 = pppuStack_978 + 1;
          puVar20 = &UNK_10f62abf5;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62abf5,0x11);
          pppuStack_970 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_970[2] = pppuStack_970;
          }
          pppuStack_970 = pppuStack_970 + 1;
          puVar20 = &UNK_10f62ac07;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac07,0xc);
          pppuVar24 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          ppppppuStack_968 = (undefined8 ******)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac14,0x11);
          pppuVar24 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          ppppppuStack_960 = (undefined8 ******)(pppuVar24 + 1);
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac26,0x1c);
          pppuVar24 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          pppppuStack_958 = (undefined8 *****)(pppuVar24 + 1);
          puVar20 = &UNK_10f62ac43;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac43,0x1d);
          pppuVar24 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuVar24[2] = pppuVar24;
          }
          ppppppuStack_950 = (undefined8 ******)(pppuVar24 + 1);
          puVar20 = &UNK_10f62ac61;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac61,0x10);
          pppuStack_948 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_948[2] = pppuStack_948;
          }
          pppuStack_948 = pppuStack_948 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac72,10);
          pppuStack_940 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_940[2] = pppuStack_940;
          }
          pppuStack_940 = pppuStack_940 + 1;
          puVar20 = &UNK_10f62ac7d;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac7d,0xf);
          pppuStack_938 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_938[2] = pppuStack_938;
          }
          pppuStack_938 = pppuStack_938 + 1;
          puVar20 = &UNK_10f62ac8d;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62ac8d,0x12);
          pppuStack_930 = *ppppuVar47;
          if (((ulong)puVar20 & 1) != 0) {
            pppuStack_930[2] = pppuStack_930;
          }
          pppuStack_930 = pppuStack_930 + 1;
          uVar14 = 0;
          ppppuVar47 = *pppppuStack_a38 + 0x21;
          FUN_109d956b4(ppppuVar47,&UNK_10f62aca0,8);
          pppuStack_928 = *ppppuVar47;
          if ((uVar14 & 1) != 0) {
            pppuStack_928[2] = pppuStack_928;
          }
          pppuStack_928 = pppuStack_928 + 1;
          uStack_880 = 0;
          uStack_888 = 0;
          uStack_870 = 0;
          uStack_878 = 0;
          uStack_868 = 0x3f800000;
          uStack_780 = 0;
          uStack_788 = 0;
          ppppuStack_828 = (undefined8 ****)0x0;
          ppppuStack_818 = (undefined8 ****)0x0;
          ppppuStack_820 = (undefined8 ****)0x0;
          ppppuStack_808 = (undefined8 ****)0x0;
          ppppuStack_810 = (undefined8 ****)0x0;
          ppppuStack_7f8 = (undefined8 ****)0x0;
          ppppuStack_800 = (undefined8 ****)0x0;
          uStack_7e8 = 0;
          uStack_7f0 = 0;
          uStack_7d8 = 0;
          uStack_7e0 = 0;
          uStack_7c8 = 0;
          uStack_7d0 = 0;
          uStack_7b8 = 0;
          uStack_7c0 = 0;
          uStack_7a8 = 0;
          uStack_7b0 = 0;
          uStack_798 = 0;
          uStack_7a0 = 0;
          uStack_778 = 0;
          puStack_770 = auStack_760;
          uStack_768 = 0x1000000000;
          puStack_720 = auStack_710;
          uStack_718 = 0x1000000000;
          uStack_6c8 = 0;
          uStack_6d0 = 0;
          uStack_6b8 = 0;
          uStack_6c0 = 0;
          uStack_6b0 = 0x3f800000;
          uStack_6a0 = 0;
          uStack_6a8 = 0;
          uStack_690 = 0;
          uStack_698 = 0;
          uStack_688 = 0x3f800000;
          uStack_678 = 0;
          uStack_680 = 0;
          uStack_668 = 0;
          uStack_670 = 0;
          uStack_660 = 0x3f800000;
          uStack_650 = 0;
          uStack_658 = 0;
          uStack_640 = 0;
          uStack_648 = 0;
          uStack_638 = 0x3f800000;
          puStack_630 = &uStack_628;
          uStack_620 = 0;
          uStack_628 = 0;
          uStack_610 = 0;
          uStack_618 = 0;
          uStack_608 = 0;
          uStack_5f6 = 2;
          uStack_5f5 = (undefined1)uVar28;
          uStack_5f4 = 0x70003;
          ppppuStack_830 = *pppppuStack_a48;
          ppppuStack_860 = ppppuStack_830 + 0xea;
          ppppuStack_858 = ppppuStack_830 + 0xed;
          ppppuStack_850 = ppppuStack_830 + 0xf0;
          ppppuVar47 = ppppuStack_830 + 0xc9;
          ppppuStack_840 = ppppuStack_830 + 0xcf;
          ppppuStack_838 = ppppuStack_830 + 0xf3;
          ppppuStack_830 = ppppuStack_830 + 0xf6;
          ppppuStack_848 = ppppuVar47;
          puStack_790 = &uStack_788;
          puStack_600 = puVar19;
          uStack_5f8 = uVar30;
          uStack_5f0 = uVar27;
          uStack_5ee = bVar11;
          func_0x000109da00ec(ppppuVar47,2);
          ppppuVar50 = ppppuStack_840;
          ppppuStack_828 = ppppuVar47;
          func_0x000109da00ec(ppppuStack_840,2);
          ppppuVar47 = ppppuStack_840;
          ppppuStack_820 = ppppuVar50;
          func_0x000109da00ec(ppppuStack_840,3);
          ppppuVar50 = ppppuStack_840;
          ppppuStack_818 = ppppuVar47;
          func_0x000109da00ec(ppppuStack_840,4);
          ppppuVar47 = ppppuStack_838;
          ppppuStack_810 = ppppuVar50;
          func_0x000109da00ec(ppppuStack_838,2);
          ppppuVar50 = ppppuStack_838;
          ppppuStack_808 = ppppuVar47;
          func_0x000109da00ec(ppppuStack_838,3);
          ppppuVar47 = ppppuStack_838;
          ppppuStack_800 = ppppuVar50;
          func_0x000109da00ec(ppppuStack_838,4);
          uVar14 = 0x2e0;
          ppppuStack_7f8 = ppppuVar47;
          __Znwm();
          FUN_109d9ceb8();
          if (*(char *)(uVar14 + 0xcf) < '\0') {
            __ZdlPv(*(undefined8 *)(uVar14 + 0xb8));
          }
          puVar19 = puStack_600;
          *(undefined1 *)(uVar14 + 0xc0) = 0x74;
          *(undefined8 *)(uVar14 + 0xb8) = 0x7265765f6e69616d;
          *(undefined1 *)(uVar14 + 0xc1) = 0;
          *(undefined1 *)(uVar14 + 0xcf) = 9;
          if (puStack_600 == (undefined *)0x0) {
            puVar20 = (undefined *)0x0;
          }
          else {
            puVar20 = puStack_600;
            _strlen(puStack_600);
          }
          FUN_109d3879c(uVar14,puVar19,puVar20);
          FUN_109d71d68(uVar14 + 0x100,&UNK_10f62aca9,0xd7);
          FUN_109f988ec(&pppppuStack_a48);
          puVar40 = puStack_a40;
          ppppuStack_d0 = (undefined8 ****)0x800000000;
          plVar35 = (long *)puStack_a40[0x105];
          ppppuStack_d8 = (undefined8 ****)&uStack_c8;
          for (plVar32 = (long *)puStack_a40[0x104]; plVar32 != plVar35; plVar32 = plVar32 + 1) {
            pppppuVar38 = &pppppuStack_a48;
            FUN_109f9a5a4(pppppuVar38,*(undefined4 *)(*(long *)(*plVar32 + 0x10) + 4),
                          *(undefined1 *)(*(long *)(*plVar32 + 0x10) + 0xd));
            func_0x000109d33d14(&ppppuStack_d8,pppppuVar38);
          }
          plVar32 = puVar40 + 0xf6;
          if (*plVar32 != 0) {
            func_0x000109d33d14(&ppppuStack_d8,ppppuStack_810);
          }
          if (puVar40[0xf9] != 0) {
            ppppuVar47 = ppppuStack_840;
            FUN_109d9ffc0(ppppuStack_840,*(undefined4 *)(*(long *)(puVar40[0xf9] + 0x10) + 0x10));
            func_0x000109d33d14(&ppppuStack_d8,ppppuVar47);
          }
          if (puStack_a40[0xf2] != 0) {
            func_0x000109d33d14(&ppppuStack_d8,ppppuStack_838);
          }
          pppppuVar38 = pppppuStack_a48;
          FUN_109d9fa44(pppppuStack_a48,ppppuStack_d8,(ulong)ppppuStack_d0 & 0xffffffff,1);
          puVar9 = puStack_a40;
          plStack_120 = (long *)0x800000000;
          lVar31 = puStack_a40[0xf4];
          plStack_128 = alStack_118;
          for (lVar29 = puStack_a40[0xf3]; lVar29 != lVar31; lVar29 = lVar29 + 0x10) {
            bVar3 = *(byte *)(*(long *)(*(long *)(lVar29 + 8) + 0x10) + 0xd);
            if (bVar3 < 2) {
              bVar3 = 1;
            }
            pppppuVar13 = &pppppuStack_a48;
            func_0x000109f9a5dc(pppppuVar13,bVar3);
            func_0x000109d33d14(&plStack_128,pppppuVar13);
          }
          uStack_c70 = 0;
          uStack_c78 = 0;
          puStack_c80 = &uStack_c78;
          puVar41 = puStack_790;
          while (puVar41 != &uStack_788) {
            uVar2 = plStack_120._0_4_;
            ppuVar23 = &puStack_c80;
            FUN_109f9e6dc(ppuVar23,*(undefined4 *)(puVar41 + 4));
            *(undefined4 *)(ppuVar23 + 4) = uVar2;
            uVar15 = puVar41[5];
            func_0x000109da017c(uVar15,2);
            func_0x000109d33d14(&plStack_128,uVar15);
            puVar48 = (undefined8 *)puVar41[1];
            puVar49 = puVar41;
            if ((undefined8 *)puVar41[1] == (undefined8 *)0x0) {
              do {
                puVar41 = (undefined8 *)puVar49[2];
                bVar12 = (undefined8 *)*puVar41 != puVar49;
                puVar49 = puVar41;
              } while (bVar12);
            }
            else {
              do {
                puVar41 = puVar48;
                puVar48 = (undefined8 *)*puVar41;
              } while ((undefined8 *)*puVar41 != (undefined8 *)0x0);
            }
          }
          puStack_1b8 = &uStack_1a8;
          uStack_1b0 = 0x400000000;
          if ((undefined8 *****)puVar9[0xee] != (undefined8 *****)0x0) {
            pppppuStack_378 = (undefined8 *****)puVar9[0xee];
            func_0x000107c31940(&uStack_370,&UNK_10f62ad81);
            ppuVar23 = &puStack_1b8;
            FUN_109f9e784(ppuVar23,&pppppuStack_378);
            puVar41 = puStack_1b8 + (uStack_1b0 & 0xffffffff) * 4;
            *puVar41 = *ppuVar23;
            puVar49 = ppuVar23[2];
            puVar48 = ppuVar23[1];
            puVar41[3] = ppuVar23[3];
            puVar41[2] = puVar49;
            puVar41[1] = puVar48;
            ppuVar23[2] = (undefined8 *)0x0;
            ppuVar23[3] = (undefined8 *)0x0;
            ppuVar23[1] = (undefined8 *)0x0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if ((long)uStack_360 < 0) {
              __ZdlPv(uStack_370);
            }
          }
          if ((undefined8 *****)puVar9[0xf1] != (undefined8 *****)0x0) {
            pppppuStack_378 = (undefined8 *****)puVar9[0xf1];
            func_0x000107c31940(&uStack_370,&UNK_10f62ad91);
            ppuVar23 = &puStack_1b8;
            FUN_109f9e784(ppuVar23,&pppppuStack_378);
            puVar41 = puStack_1b8 + (uStack_1b0 & 0xffffffff) * 4;
            *puVar41 = *ppuVar23;
            puVar49 = ppuVar23[2];
            puVar48 = ppuVar23[1];
            puVar41[3] = ppuVar23[3];
            puVar41[2] = puVar49;
            puVar41[1] = puVar48;
            ppuVar23[2] = (undefined8 *)0x0;
            ppuVar23[3] = (undefined8 *)0x0;
            ppuVar23[1] = (undefined8 *)0x0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if ((long)uStack_360 < 0) {
              __ZdlPv(uStack_370);
            }
          }
          if ((undefined8 *****)puVar9[0xef] != (undefined8 *****)0x0) {
            pppppuStack_378 = (undefined8 *****)puVar9[0xef];
            func_0x000107c31940(&uStack_370,&UNK_10f62ad9f);
            ppuVar23 = &puStack_1b8;
            FUN_109f9e784(ppuVar23,&pppppuStack_378);
            puVar41 = puStack_1b8 + (uStack_1b0 & 0xffffffff) * 4;
            *puVar41 = *ppuVar23;
            puVar49 = ppuVar23[2];
            puVar48 = ppuVar23[1];
            puVar41[3] = ppuVar23[3];
            puVar41[2] = puVar49;
            puVar41[1] = puVar48;
            ppuVar23[2] = (undefined8 *)0x0;
            ppuVar23[3] = (undefined8 *)0x0;
            ppuVar23[1] = (undefined8 *)0x0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if ((long)uStack_360 < 0) {
              __ZdlPv(uStack_370);
            }
          }
          if ((undefined8 *****)puVar9[0xf0] != (undefined8 *****)0x0) {
            pppppuStack_378 = (undefined8 *****)puVar9[0xf0];
            func_0x000107c31940(&uStack_370,&UNK_10f62adb1);
            ppuVar23 = &puStack_1b8;
            FUN_109f9e784(ppuVar23,&pppppuStack_378);
            puVar41 = puStack_1b8 + (uStack_1b0 & 0xffffffff) * 4;
            *puVar41 = *ppuVar23;
            puVar49 = ppuVar23[2];
            puVar48 = ppuVar23[1];
            puVar41[3] = ppuVar23[3];
            puVar41[2] = puVar49;
            puVar41[1] = puVar48;
            ppuVar23[2] = (undefined8 *)0x0;
            ppuVar23[3] = (undefined8 *)0x0;
            ppuVar23[1] = (undefined8 *)0x0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if ((long)uStack_360 < 0) {
              __ZdlPv(uStack_370);
            }
          }
          if ((undefined8 *****)puVar9[0xf2] != (undefined8 *****)0x0) {
            pppppuStack_378 = (undefined8 *****)puVar9[0xf2];
            func_0x000107c31940(&uStack_370,&UNK_10f62adc1);
            ppuVar23 = &puStack_1b8;
            FUN_109f9e784(ppuVar23,&pppppuStack_378);
            puVar41 = puStack_1b8 + (uStack_1b0 & 0xffffffff) * 4;
            *puVar41 = *ppuVar23;
            puVar49 = ppuVar23[2];
            puVar48 = ppuVar23[1];
            puVar41[3] = ppuVar23[3];
            puVar41[2] = puVar49;
            puVar41[1] = puVar48;
            ppuVar23[2] = (undefined8 *)0x0;
            ppuVar23[3] = (undefined8 *)0x0;
            ppuVar23[1] = (undefined8 *)0x0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
            if (uStack_360._7_1_ < '\0') {
              __ZdlPv(uStack_370);
            }
          }
          if ((int)uStack_1b0 != 0) {
            lVar29 = (uStack_1b0 & 0xffffffff) << 5;
            do {
              func_0x000109d33d14(&plStack_128,ppppuStack_838);
              lVar29 = lVar29 + -0x20;
            } while (lVar29 != 0);
          }
          pppppuVar13 = pppppuVar38;
          FUN_109d9f92c(pppppuVar38,plStack_128,(ulong)plStack_120 & 0xffffffff,0);
          pppppuStack_378 = (undefined8 *****)&UNK_10f62a458;
          lStack_358 = CONCAT62(lStack_358._2_6_,0x103);
          FUN_109f9a62c();
          FUN_109f9a6a8();
          puVar41 = puStack_c80;
          pppppuStack_210 = pppppuStack_a48;
          puVar48 = puStack_a40;
          while (pppppuStack_a48 = pppppuStack_210, puStack_a40 = puVar48, puVar41 != &uStack_c78) {
            lVar29 = puVar48[0xe4];
            lVar31 = puVar48[0xe5];
            if (lVar29 == lVar31) {
              lVar45 = 0;
            }
            else {
              lVar45 = 0;
              iVar34 = *(int *)((long)puVar41 + 0x1c);
              do {
                puVar49 = puVar48 + 0x6b;
                FUN_109f9ca04(puVar49,lVar29);
                if ((int)puVar49 == iVar34) {
                  lVar45 = lVar45 + 1;
                }
                lVar29 = lVar29 + 0x40;
              } while (lVar29 != lVar31);
              lVar45 = lVar45 << 3;
            }
            pppppuVar37 = pppppuVar13 + 0xe;
            FUN_109d5ab08(pppppuVar37,**pppppuVar13,*(int *)(puVar41 + 4) + 1,0x15);
            pppppuVar13[0xe] = pppppuVar37;
            pppppuVar37 = pppppuVar13 + 0xe;
            FUN_109d5ab08(pppppuVar37,**pppppuVar13,*(int *)(puVar41 + 4) + 1,0x2d);
            pppppuVar13[0xe] = pppppuVar37;
            uVar2 = *(undefined4 *)(puVar41 + 4);
            pppppuVar16 = pppppuStack_a48;
            FUN_109d59ae0(pppppuStack_a48,0x4b,8);
            pppppuVar37 = pppppuVar13 + 0xe;
            pppppuStack_378._0_4_ = uVar2;
            FUN_109d5b144(pppppuVar37,**pppppuVar13,&pppppuStack_378,1,pppppuVar16);
            pppppuVar13[0xe] = pppppuVar37;
            uVar2 = *(undefined4 *)(puVar41 + 4);
            pppppuVar16 = pppppuStack_a48;
            FUN_109d59ae0(pppppuStack_a48,0x4e,lVar45);
            pppppuVar37 = pppppuVar13 + 0xe;
            pppppuStack_378._0_4_ = uVar2;
            FUN_109d5b144(pppppuVar37,**pppppuVar13,&pppppuStack_378,1,pppppuVar16);
            pppppuVar13[0xe] = pppppuVar37;
            uVar2 = *(undefined4 *)(puVar41 + 4);
            pppppuVar16 = pppppuStack_a48;
            FUN_109d59c4c(pppppuStack_a48,&UNK_10f62add6,0x13,0,0);
            pppppuStack_378 = (undefined8 *****)CONCAT44(pppppuStack_378._4_4_,uVar2);
            pppppuVar37 = pppppuVar13 + 0xe;
            FUN_109d5b144(pppppuVar37,**pppppuVar13,&pppppuStack_378,1,pppppuVar16);
            pppppuVar13[0xe] = pppppuVar37;
            puVar49 = (undefined8 *)puVar41[1];
            puVar33 = puVar41;
            pppppuStack_210 = pppppuStack_a48;
            puVar48 = puStack_a40;
            if ((undefined8 *)puVar41[1] == (undefined8 *)0x0) {
              do {
                puVar41 = (undefined8 *)puVar33[2];
                bVar12 = (undefined8 *)*puVar41 != puVar33;
                puVar33 = puVar41;
              } while (bVar12);
            }
            else {
              do {
                puVar41 = puVar49;
                puVar49 = (undefined8 *)*puVar41;
              } while ((undefined8 *)*puVar41 != (undefined8 *)0x0);
            }
          }
          lStack_358._2_6_ = (undefined6)((ulong)lStack_358 >> 0x10);
          lStack_358 = CONCAT62(lStack_358._2_6_,0x101);
          FUN_109d38918(pppppuStack_210,&pppppuStack_378,pppppuVar13,0);
          pppppuStack_208 = pppppuStack_210 + 5;
          pppuStack_200 = **pppppuStack_210;
          ppppuStack_368 = (undefined8 ****)&uStack_240;
          pppuStack_1f8 = &ppuStack_1c8;
          pppuStack_1f0 = &ppuStack_1c0;
          uStack_238 = 0x200000000;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0x200;
          uStack_1da = 7;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          ppuStack_1c8 = &PTR_FUN_110b57990;
          ppuStack_1c0 = &PTR_FUN_110b57a80;
          pppppuStack_378 = &pppppuStack_a48;
          lStack_358 = *(long *)(*(long *)(puStack_a40[5] + 0x28) + 0x160);
          uStack_350 = 0;
          uStack_340 = 0;
          uStack_348 = 0;
          uStack_330 = 0;
          uStack_338 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_328 = 0x3f800000;
          uStack_300 = 0x3f800000;
          pppppuStack_2f8 = (undefined8 *****)0x0;
          uStack_2f0 = 0;
          uStack_2e0 = 0;
          uStack_2e8 = 0;
          uStack_2d0 = 0;
          uStack_2d8 = 0;
          uStack_2c8 = 0x3f800000;
          puStack_2c0 = &uStack_2b8;
          uStack_2b8 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2b0 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_270 = 0x3f800000;
          uStack_248 = 0;
          lStack_250 = 0;
          lStack_258 = 0;
          uStack_260 = 0;
          uStack_268 = 0;
          uStack_240 = &pplStack_230;
          puStack_2a8 = &uStack_2a0;
          uStack_370 = (undefined8 *****)uVar14;
          uStack_360 = pppppuVar13;
          puVar41 = puStack_c80;
          while (puVar41 != &uStack_c78) {
            puVar36 = (undefined4 *)((long)puVar41 + 0x1c);
            uVar2 = *(undefined4 *)(puVar41 + 4);
            ppuVar23 = &puStack_2a8;
            FUN_109f9e6dc(ppuVar23,*puVar36,puVar36);
            *(undefined4 *)(ppuVar23 + 4) = uVar2;
            uVar22 = *(uint *)(puVar41 + 4);
            if ((*(ushort *)((long)pppppuVar13 + 0x12) & 1) != 0) {
              FUN_109d85318(pppppuVar13);
            }
            ppppuVar47 = pppppuVar13[0xb];
            ppuVar23 = &puStack_2c0;
            func_0x000109f9e8d4(ppuVar23,*puVar36,puVar36);
            ppuVar23[5] = ppppuVar47 + (ulong)uVar22 * 5;
            puVar48 = (undefined8 *)puVar41[1];
            puVar49 = puVar41;
            if ((undefined8 *)puVar41[1] == (undefined8 *)0x0) {
              do {
                puVar41 = (undefined8 *)puVar49[2];
                bVar12 = (undefined8 *)*puVar41 != puVar49;
                puVar49 = puVar41;
              } while (bVar12);
            }
            else {
              do {
                puVar41 = puVar48;
                puVar48 = (undefined8 *)*puVar41;
              } while ((undefined8 *)*puVar41 != (undefined8 *)0x0);
            }
          }
          uStack_2f0 = 0;
          puVar41 = (undefined8 *)puVar40[0x105];
          if ((undefined8 *)puVar40[0x104] == puVar41) {
            iVar34 = 0;
          }
          else {
            puVar48 = (undefined8 *)puVar40[0x104];
            iVar44 = 0;
            do {
              puVar49 = puVar48 + 1;
              ppppuStack_488 = (undefined8 ****)*puVar48;
              puVar48 = &uStack_2e8;
              FUN_109f9e9a4(puVar48,ppppuStack_488,&ppppuStack_488);
              iVar34 = iVar44 + 1;
              *(int *)(puVar48 + 3) = iVar44;
              puVar48 = puVar49;
              iVar44 = iVar34;
            } while (puVar49 != puVar41);
          }
          if (*plVar32 != 0) {
            puVar41 = &uStack_2e8;
            FUN_109f9e9a4(puVar41,*plVar32,plVar32);
            *(int *)(puVar41 + 3) = iVar34;
            iVar34 = iVar34 + 1;
          }
          plVar35 = puVar40 + 0xf9;
          if (*plVar35 != 0) {
            puVar41 = &uStack_2e8;
            FUN_109f9e9a4(puVar41,*plVar35,plVar35);
            *(int *)(puVar41 + 3) = iVar34;
          }
          puVar41 = (undefined8 *)puVar9[0xf4];
          if ((undefined8 *)puVar9[0xf3] != puVar41) {
            uVar42 = 0;
            puVar48 = (undefined8 *)puVar9[0xf3] + 1;
            do {
              if ((*(ushort *)((long)pppppuVar13 + 0x12) & 1) != 0) {
                FUN_109d85318(pppppuVar13);
              }
              ppppuVar47 = pppppuVar13[0xb];
              puVar49 = &uStack_320;
              FUN_109f9ede0(puVar49,*puVar48,puVar48);
              puVar49[3] = ppppuVar47 + uVar42 * 5;
              puVar49 = puVar48 + 1;
              puVar48 = puVar48 + 2;
              uVar42 = (ulong)((int)uVar42 + 1);
            } while (puVar49 != puVar41);
          }
          if ((int)uStack_1b0 != 0) {
            uVar22 = (int)((ulong)(puVar9[0xf4] - puVar9[0xf3]) >> 4) + (int)uStack_780;
            lVar29 = (uStack_1b0 & 0xffffffff) << 5;
            puVar41 = puStack_1b8;
            do {
              if ((*(ushort *)((long)pppppuVar13 + 0x12) & 1) != 0) {
                FUN_109d85318(pppppuVar13);
              }
              ppppuVar47 = pppppuVar13[0xb];
              puVar48 = &uStack_320;
              FUN_109f9ede0(puVar48,*puVar41,puVar41);
              puVar48[3] = ppppuVar47 + (ulong)uVar22 * 5;
              puVar41 = puVar41 + 4;
              uVar22 = uVar22 + 1;
              lVar29 = lVar29 + -0x20;
            } while (lVar29 != 0);
          }
          lVar29 = lStack_358;
          plVar43 = *(long **)(lStack_358 + 0x178);
          plVar8 = (long *)*plVar43;
          if ((long *)*plVar43 != (long *)0x0) {
            do {
              plVar25 = plVar8;
              if (plVar43[6] != 0) {
                for (pppppuVar37 = *(undefined8 ******)(plVar43[6] + 0x58);
                    ppppppuStack_5a0 = (undefined8 ******)0x0, *pppppuVar37 != (undefined8 ****)0x0;
                    pppppuVar37 = (undefined8 *****)*pppppuVar37) {
                  ppppuVar47 = *pppppuStack_378;
                  ppppppuStack_5a0 = (undefined8 ******)pppppuVar37;
                  FUN_109f9f1c0(ppppuVar47,pppppuVar37[2],pppppuStack_378 + 0x38);
                  if (ppppuVar47 != (undefined8 ****)0x0) {
                    ppppuVar50 = (undefined8 ****)"";
                    if (pppppuVar37[3] != (undefined8 ****)0x0) {
                      ppppuVar50 = pppppuVar37[3];
                    }
                    uStack_467 = 1;
                    if (*(char *)ppppuVar50 == '\0') {
                      uStack_468 = 1;
                    }
                    else {
                      uStack_468 = 3;
                      ppppuStack_488 = ppppuVar50;
                    }
                    puVar41 = &uStack_240;
                    FUN_109f9a95c(puVar41,ppppuVar47,&ppppuStack_488);
                    uVar42 = (long)uStack_370 + 0x100;
                    FUN_109d73128(uVar42,ppppuVar47,1);
                    uVar22 = (uint)(1L << (uVar42 & 0x3f));
                    if (uVar22 < 5) {
                      uVar22 = 4;
                    }
                    *(ushort *)((long)puVar41 + 0x12) =
                         *(ushort *)((long)puVar41 + 0x12) & 0xffc0 |
                         (ushort)LZCOUNT((ulong)uVar22) ^ 0x3f;
                    puVar48 = &uStack_320;
                    FUN_109f9ede0(puVar48,pppppuVar37,&ppppppuStack_5a0);
                    puVar48[3] = puVar41;
                  }
                }
                plVar25 = (long *)*plVar43;
              }
              plVar8 = (long *)*plVar25;
              plVar43 = plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
            plVar8 = *(long **)(lVar29 + 0x178);
            for (plVar43 = (long *)**(long **)(lVar29 + 0x178); plVar43 != (long *)0x0;
                plVar43 = (long *)*plVar43) {
              if ((plVar8[6] != 0) && (plVar25 = *(long **)(plVar8[6] + 0x30), *plVar25 != 0)) {
                do {
                  FUN_109f9aa64(&ppppuStack_488,&pppppuStack_378,plVar25);
                  if ((bStack_460 & 1) == 0) {
                    uStack_16e0 = uStack_480;
                    uStack_16d8 = (undefined7)uStack_478;
                    uStack_16d1 = uStack_478._7_1_;
                    uStack_16d0 = (undefined7)uStack_470;
                    uStack_16c8 = CONCAT62(uStack_466,CONCAT11(uStack_467,uStack_468));
                    uStack_16e8 = CONCAT44(uStack_16e8._4_4_,ppppuStack_488._0_4_);
                    uStack_16c9 = uStack_470._7_1_;
                    bStack_16c0 = 0;
                    goto LAB_109f91970;
                  }
                  plVar25 = (long *)*plVar25;
                } while (*plVar25 != 0);
                plVar43 = (long *)*plVar8;
              }
              plVar8 = plVar43;
            }
          }
          FUN_109f9b674(pppppuVar13,&puStack_2a8);
          if (pppppuStack_2f8 == (undefined8 *****)0x0) {
            func_0x000109d677ec();
            pppppuStack_2f8 = pppppuVar38;
          }
          plVar8 = puVar9 + 0xf2;
          if (*plVar8 != 0) {
            puVar41 = &uStack_320;
            FUN_109f9ede0(puVar41,*plVar8,plVar8);
            ppppppuStack_5a0 =
                 (undefined8 ******)CONCAT44(ppppppuStack_5a0._4_4_,(int)ppppuStack_d0 + -1);
            uStack_468 = 1;
            uStack_467 = 1;
            pppppuVar38 = (undefined8 *****)&uStack_240;
            FUN_109d5d384(pppppuVar38,pppppuStack_2f8,puVar41[3],&ppppppuStack_5a0,1,&ppppuStack_488
                         );
            pppppuStack_2f8 = pppppuVar38;
          }
          pppuVar24 = pppuStack_200;
          FUN_109d38b34(pppuStack_200,pppppuStack_2f8,0);
          uStack_468 = 1;
          uStack_467 = 1;
          FUN_109faba1c(&uStack_240,pppuVar24,&ppppuStack_488);
          FUN_109f9baec(uVar14,pppppuStack_a48,&puStack_600);
          uStack_480 = 0x2000000000;
          plVar43 = (long *)puVar40[0x104];
          plVar25 = (long *)puVar40[0x105];
          ppppuStack_488 = (undefined8 ****)&uStack_478;
          if (plVar43 != plVar25) {
            iVar34 = 0;
            do {
              lStack_c88 = *plVar43;
              puVar41 = puVar40 + 0xff;
              FUN_109faba88(puVar41,&lStack_c88);
              if (puVar41 == (undefined8 *)0x0) {
                func_0x000107c31940(&uStack_5e8,*(undefined8 *)(lStack_c88 + 0x18));
              }
              else {
                pppppuVar38 = (undefined8 *****)puVar41[4];
                if ((undefined8 *****)0x7ffffffffffffff7 < pppppuVar38) goto LAB_109f92078;
                uVar15 = puVar41[3];
                if (pppppuVar38 < (undefined8 *****)0x17) {
                  uStack_5d8 = (undefined8 *****)CONCAT17((char)pppppuVar38,(undefined7)uStack_5d8);
                  pppppuVar16 = (undefined8 *****)&uStack_5e8;
                  if (pppppuVar38 != (undefined8 *****)0x0) goto LAB_109f91058;
                }
                else {
                  pppppuVar37 = (undefined8 *****)0x19;
                  if (((ulong)pppppuVar38 | 7) != 0x17) {
                    pppppuVar37 = (undefined8 *****)(((ulong)pppppuVar38 | 7) + 1);
                  }
                  pppppuVar16 = pppppuVar37;
                  __Znwm();
                  uStack_5d8 = (undefined8 *****)((ulong)pppppuVar37 | 0x8000000000000000);
                  uStack_5e8 = pppppuVar16;
                  pppppuStack_5e0 = pppppuVar38;
LAB_109f91058:
                  _memmove(pppppuVar16,uVar15,pppppuVar38);
                }
                *(undefined1 *)((long)pppppuVar16 + (long)pppppuVar38) = 0;
              }
              __ZNSt3__19to_stringEj(&pppppppuStack_cb8,iVar34);
              pppppppuVar17 = &pppppppuStack_cb8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (pppppppuVar17,0,&UNK_10f62adea,9);
              ppppppuStack_598 = pppppppuVar17[1];
              ppppppuStack_5a0 = *pppppppuVar17;
              ppppppuStack_590 = pppppppuVar17[2];
              pppppppuVar17[1] = (undefined8 ******)0x0;
              pppppppuVar17[2] = (undefined8 ******)0x0;
              *pppppppuVar17 = (undefined8 ******)0x0;
              ppppppuVar18 = &ppppppuStack_5a0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (ppppppuVar18,&DAT_10f684600,1);
              pppppuStack_c98 = ppppppuVar18[1];
              pppppppuStack_ca0 = (undefined8 *******)*ppppppuVar18;
              uStack_c90 = ppppppuVar18[2];
              ppppppuVar18[1] = (undefined8 *****)0x0;
              ppppppuVar18[2] = (undefined8 *****)0x0;
              *ppppppuVar18 = (undefined8 *****)0x0;
              if ((long)ppppppuStack_590 < 0) {
                __ZdlPv(ppppppuStack_5a0);
              }
              if (cStack_ca1 < '\0') {
                __ZdlPv(pppppppuStack_cb8);
              }
              FUN_109f9c150(&pppppppuStack_cb8,*(undefined8 *)(lStack_c88 + 0x10));
              pppppuVar38 = pppppuStack_a48;
              ppppppuStack_5a0 = ppppppuStack_980;
              pppppppuVar17 = pppppppuStack_ca0;
              if (-1 < (long)uStack_c90._7_1_) {
                pppppppuVar17 = &pppppppuStack_ca0;
              }
              pppppuVar37 = pppppuStack_c98;
              if (-1 < (long)uStack_c90) {
                pppppuVar37 = (undefined8 *****)(long)uStack_c90._7_1_;
              }
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              FUN_109d956b4(ppppuVar47,pppppppuVar17,pppppuVar37);
              pppuVar24 = *ppppuVar47;
              if (((ulong)pppppppuVar17 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              ppppppuStack_598 = (undefined8 ******)(pppuVar24 + 1);
              ppppppuStack_590 = (undefined8 ******)pppppuStack_9d8;
              pppppppuVar17 = pppppppuStack_cb8;
              if (-1 < (long)cStack_ca1) {
                pppppppuVar17 = &pppppppuStack_cb8;
              }
              lVar29 = lStack_cb0;
              if (-1 < cStack_ca1) {
                lVar29 = (long)cStack_ca1;
              }
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              FUN_109d956b4(ppppuVar47,pppppppuVar17,lVar29);
              pppuVar24 = *ppppuVar47;
              if (((ulong)pppppppuVar17 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              pppppuStack_588 = (undefined8 *****)(pppuVar24 + 1);
              pppppuStack_580 = pppppuStack_9d0;
              pppppuVar37 = uStack_5e8;
              if (-1 < (long)uStack_5d8._7_1_) {
                pppppuVar37 = (undefined8 *****)&uStack_5e8;
              }
              pppppuVar16 = pppppuStack_5e0;
              if (-1 < (long)uStack_5d8) {
                pppppuVar16 = (undefined8 *****)(long)uStack_5d8._7_1_;
              }
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              FUN_109d956b4(ppppuVar47,pppppuVar37,pppppuVar16);
              pppuVar24 = *ppppuVar47;
              if (((ulong)pppppuVar37 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              pppppuStack_578 = (undefined8 *****)(pppuVar24 + 1);
              FUN_109d974c0(pppppuVar38,&ppppppuStack_5a0,6,0,1);
              func_0x000109d33e60(&ppppuStack_488,pppppuVar38);
              if (cStack_ca1 < '\0') {
                __ZdlPv(pppppppuStack_cb8);
              }
              if ((long)uStack_c90 < 0) {
                __ZdlPv(pppppppuStack_ca0);
              }
              if ((long)uStack_5d8 < 0) {
                __ZdlPv(uStack_5e8);
              }
              plVar43 = plVar43 + 1;
              iVar34 = iVar34 + 1;
            } while (plVar43 != plVar25);
          }
          pppppuVar38 = pppppuStack_a48;
          if (*plVar32 != 0) {
            ppppppuStack_5a0 = ppppppuStack_968;
            ppppppuStack_598 = (undefined8 ******)pppppuStack_9d8;
            uVar42 = 0;
            ppppuVar47 = *pppppuStack_a48 + 0x21;
            FUN_109d956b4(ppppuVar47,&DAT_10f62adf6,6);
            pppuVar24 = *ppppuVar47;
            if ((uVar42 & 1) != 0) {
              pppuVar24[2] = pppuVar24;
            }
            ppppppuStack_590 = (undefined8 ******)(pppuVar24 + 1);
            pppppuStack_588 = pppppuStack_9d0;
            uVar42 = 0;
            ppppuVar47 = *pppppuStack_a48 + 0x21;
            FUN_109d956b4(ppppuVar47,&UNK_10f606096,0xb);
            pppuVar24 = *ppppuVar47;
            if ((uVar42 & 1) != 0) {
              pppuVar24[2] = pppuVar24;
            }
            pppppuStack_580 = (undefined8 *****)(pppuVar24 + 1);
            FUN_109d974c0(pppppuVar38,&ppppppuStack_5a0,5,0,1);
            func_0x000109d33e60(&ppppuStack_488,pppppuVar38);
          }
          pppppuVar38 = pppppuStack_a48;
          if (*plVar35 != 0) {
            ppppppuStack_598 = (undefined8 ******)pppppuStack_958;
            ppppppuStack_5a0 = ppppppuStack_960;
            pppppuVar37 = (undefined8 *****)(*pppppuStack_a48 + 0xf3);
            FUN_109d678e8(pppppuVar37,(long)*(int *)(*(long *)(*plVar35 + 0x10) + 0x10),0);
            FUN_109d94e24();
            pppppuStack_588 = pppppuStack_9d8;
            uVar42 = 0;
            ppppuVar47 = *pppppuStack_a48 + 0x21;
            ppppppuStack_590 = (undefined8 ******)pppppuVar37;
            FUN_109d956b4(ppppuVar47,&DAT_10f33a2d8,5);
            pppuVar24 = *ppppuVar47;
            if ((uVar42 & 1) != 0) {
              pppuVar24[2] = pppuVar24;
            }
            pppppuStack_580 = (undefined8 *****)(pppuVar24 + 1);
            pppppuStack_578 = pppppuStack_9d0;
            puVar19 = &UNK_10f60d67f;
            ppppuVar47 = *pppppuStack_a48 + 0x21;
            FUN_109d956b4(ppppuVar47,&UNK_10f60d67f,0xf);
            pppuStack_570 = *ppppuVar47;
            if (((ulong)puVar19 & 1) != 0) {
              pppuStack_570[2] = pppuStack_570;
            }
            pppuStack_570 = pppuStack_570 + 1;
            FUN_109d974c0(pppppuVar38,&ppppppuStack_5a0,7,0,1);
            func_0x000109d33e60(&ppppuStack_488,pppppuVar38);
          }
          pppppuVar38 = pppppuStack_a48;
          if (*plVar8 != 0) {
            ppppppuStack_5a0 = ppppppuStack_950;
            ppppppuStack_598 = (undefined8 ******)pppppuStack_9d8;
            uVar42 = 0;
            ppppuVar47 = *pppppuStack_a48 + 0x21;
            FUN_109d956b4(ppppuVar47,&DAT_10f49122c,4);
            pppppuVar37 = pppppuStack_a48;
            pppuVar24 = *ppppuVar47;
            if ((uVar42 & 1) != 0) {
              pppuVar24[2] = pppuVar24;
            }
            ppppppuStack_590 = (undefined8 ******)(pppuVar24 + 1);
            pppppuStack_588 = pppppuStack_9d0;
            uVar42 = *(ulong *)(*plVar8 + 0x18);
            if (uVar42 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar42;
              _strlen(uVar42);
            }
            ppppuVar47 = *pppppuVar37 + 0x21;
            FUN_109d956b4(ppppuVar47,uVar42,uVar21);
            pppuVar24 = *ppppuVar47;
            if ((uVar42 & 1) != 0) {
              pppuVar24[2] = pppuVar24;
            }
            pppppuStack_580 = (undefined8 *****)(pppuVar24 + 1);
            FUN_109d974c0(pppppuVar38,&ppppppuStack_5a0,5,0,1);
            func_0x000109d33e60(&ppppuStack_488,pppppuVar38);
          }
          pppppuVar38 = pppppuStack_a48;
          FUN_109d974c0(pppppuStack_a48,ppppuStack_488,uStack_480 & 0xffffffff,0,1);
          ppppppuStack_598 = (undefined8 ******)0x2000000000;
          piVar39 = (int *)puVar9[0xf3];
          piVar46 = (int *)puVar9[0xf4];
          ppppppuStack_5a0 = &ppppppuStack_590;
          if (piVar39 == piVar46) {
            iVar34 = 0;
            puVar40 = puStack_2a8;
          }
          else {
            iVar34 = 0;
            do {
              FUN_109f9c150(&pppppppuStack_ca0,*(undefined8 *)(*(long *)(piVar39 + 2) + 0x10));
              pppppuVar16 = pppppuStack_a48;
              pppppuVar37 = (undefined8 *****)(*pppppuStack_a48 + 0xf3);
              FUN_109d678e8(pppppuVar37,(long)iVar34,0);
              FUN_109d94e24();
              pppppuStack_5e0 = pppppuStack_988;
              uStack_5d8 = pppppuStack_9e0;
              ppppuVar47 = *pppppuStack_a48 + 0xf3;
              uStack_5e8 = pppppuVar37;
              FUN_109d678e8(ppppuVar47,(long)*piVar39,0);
              FUN_109d94e24();
              pppppuVar37 = (undefined8 *****)(*pppppuStack_a48 + 0xf3);
              ppppuStack_5d0 = ppppuVar47;
              FUN_109d678e8(pppppuVar37,1,0);
              FUN_109d94e24();
              pppppuStack_5c0 = pppppuStack_9d8;
              pppppppuVar17 = pppppppuStack_ca0;
              if (-1 < (long)uStack_c90._7_1_) {
                pppppppuVar17 = &pppppppuStack_ca0;
              }
              pppppuVar1 = pppppuStack_c98;
              if (-1 < (long)uStack_c90) {
                pppppuVar1 = (undefined8 *****)(long)uStack_c90._7_1_;
              }
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              pppppuStack_5c8 = pppppuVar37;
              FUN_109d956b4(ppppuVar47,pppppppuVar17,pppppuVar1);
              pppppuVar37 = pppppuStack_a48;
              pppuStack_5b8 = *ppppuVar47;
              if (((ulong)pppppppuVar17 & 1) != 0) {
                pppuStack_5b8[2] = pppuStack_5b8;
              }
              pppuStack_5b8 = pppuStack_5b8 + 1;
              pppppuStack_5b0 = pppppuStack_9d0;
              uVar42 = *(ulong *)(*(long *)(piVar39 + 2) + 0x18);
              if (uVar42 == 0) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar42;
                _strlen(uVar42);
              }
              ppppuVar47 = *pppppuVar37 + 0x21;
              FUN_109d956b4(ppppuVar47,uVar42,uVar21);
              pppuStack_5a8 = *ppppuVar47;
              if ((uVar42 & 1) != 0) {
                pppuStack_5a8[2] = pppuStack_5a8;
              }
              pppuStack_5a8 = pppuStack_5a8 + 1;
              FUN_109d974c0(pppppuVar16,&uStack_5e8,9,0,1);
              func_0x000109d33e60(&ppppppuStack_5a0,pppppuVar16);
              if ((long)uStack_c90 < 0) {
                __ZdlPv(pppppppuStack_ca0);
              }
              piVar39 = piVar39 + 4;
              iVar34 = iVar34 + 1;
              puVar40 = puStack_2a8;
            } while (piVar39 != piVar46);
          }
          while (puVar40 != &uStack_2a0) {
            uVar22 = *(uint *)(puVar40 + 4);
            if ((*(ushort *)((long)pppppuVar13 + 0x12) & 1) != 0) {
              FUN_109d85318(pppppuVar13);
            }
            pppppuVar37 = &pppppuStack_a48;
            FUN_109f9c4d8(pppppuVar37,iVar34,*(undefined4 *)((long)puVar40 + 0x1c),
                          pppppuVar13[0xb][(ulong)uVar22 * 5 + 1] == (undefined8 ***)0x0);
            func_0x000109d33e60(&ppppppuStack_5a0,pppppuVar37);
            puVar9 = (undefined8 *)puVar40[1];
            if ((undefined8 *)puVar40[1] == (undefined8 *)0x0) {
              do {
                puVar41 = (undefined8 *)puVar40[2];
                bVar12 = (undefined8 *)*puVar41 != puVar40;
                puVar40 = puVar41;
              } while (bVar12);
            }
            else {
              do {
                puVar41 = puVar9;
                puVar9 = (undefined8 *)*puVar41;
              } while ((undefined8 *)*puVar41 != (undefined8 *)0x0);
            }
            iVar34 = iVar34 + 1;
            puVar40 = puVar41;
          }
          if ((int)uStack_1b0 != 0) {
            lVar29 = (uStack_1b0 & 0xffffffff) << 5;
            plVar32 = puStack_1b8 + 2;
            do {
              pppppuVar16 = pppppuStack_a48;
              pppppuVar37 = (undefined8 *****)(*pppppuStack_a48 + 0xf3);
              FUN_109d678e8(pppppuVar37,(long)iVar34,0);
              FUN_109d94e24();
              cVar5 = *(char *)((long)plVar32 + 0xf);
              plVar35 = (long *)plVar32[-1];
              if (-1 < (long)cVar5) {
                plVar35 = plVar32 + -1;
              }
              lVar31 = *plVar32;
              if (-1 < cVar5) {
                lVar31 = (long)cVar5;
              }
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              uStack_5e8 = pppppuVar37;
              FUN_109d956b4(ppppuVar47,plVar35,lVar31);
              pppuVar24 = *ppppuVar47;
              if (((ulong)plVar35 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              pppppuStack_5e0 = (undefined8 *****)(pppuVar24 + 1);
              uStack_5d8 = pppppuStack_9d8;
              ppppuVar47 = *pppppuStack_a48 + 0x21;
              uVar42 = 0;
              FUN_109d956b4(ppppuVar47,&DAT_10f49122c,4);
              pppppuVar37 = pppppuStack_a48;
              pppuVar24 = *ppppuVar47;
              if ((uVar42 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              ppppuStack_5d0 = (undefined8 ****)(pppuVar24 + 1);
              pppppuStack_5c8 = pppppuStack_9d0;
              uVar42 = *(ulong *)(plVar32[-2] + 0x18);
              if (uVar42 == 0) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar42;
                _strlen(uVar42);
              }
              ppppuVar47 = *pppppuVar37 + 0x21;
              FUN_109d956b4(ppppuVar47,uVar42,uVar21);
              pppuVar24 = *ppppuVar47;
              if ((uVar42 & 1) != 0) {
                pppuVar24[2] = pppuVar24;
              }
              pppppuStack_5c0 = (undefined8 *****)(pppuVar24 + 1);
              FUN_109d974c0(pppppuVar16,&uStack_5e8,6,0,1);
              func_0x000109d33e60(&ppppppuStack_5a0,pppppuVar16);
              iVar34 = iVar34 + 1;
              plVar32 = plVar32 + 4;
              lVar29 = lVar29 + -0x20;
            } while (lVar29 != 0);
          }
          pppppuVar16 = pppppuStack_a48;
          FUN_109d974c0(pppppuStack_a48,ppppppuStack_5a0,(ulong)ppppppuStack_598 & 0xffffffff,0,1);
          pppppuVar37 = pppppuStack_a48;
          FUN_109d94e24();
          uStack_5e8 = pppppuVar13;
          pppppuStack_5e0 = pppppuVar38;
          uStack_5d8 = pppppuVar16;
          FUN_109d974c0(pppppuVar37,&uStack_5e8,3,0,1);
          uVar42 = uVar14;
          FUN_109d9d608(uVar14,&UNK_10f62ae04,10);
          uStack_5e8 = pppppuVar37;
          FUN_109d9781c(*(undefined8 *)(uVar42 + 0x30),&uStack_5e8);
          bStack_16c0 = 1;
          uStack_16e8 = uVar14;
          if ((undefined8 *******)ppppppuStack_5a0 != &ppppppuStack_590) {
            _free();
          }
          if (ppppuStack_488 != (undefined8 ****)&uStack_478) {
            _free();
          }
          uVar14 = 0;
LAB_109f91970:
          if (lStack_258 != 0) {
            lStack_250 = lStack_258;
            __ZdlPv();
          }
          FUN_109fadda8(&uStack_290);
          func_0x000109a093d0(&puStack_2a8,uStack_2a0);
          func_0x000109faddf0(uStack_2b8);
          func_0x000109f8eccc(&uStack_2e8);
          func_0x000109fade28(&uStack_320);
          func_0x000109fade70(&uStack_348);
          if (uStack_240 != &pplStack_230) {
            _free();
          }
          FUN_109fadeb8(&puStack_1b8);
          func_0x000109a093d0(&puStack_c80,uStack_c78);
          if (plStack_128 != alStack_118) {
            _free();
          }
          if (ppppuStack_d8 != (undefined8 ****)&uStack_c8) {
            _free();
          }
          if (uVar14 != 0) {
            FUN_109d9d1b8(uVar14);
            __ZdlPv();
          }
          uVar6 = uStack_16c9;
          if ((bStack_16c0 & 1) == 0) {
            extraout_x8[1] = uStack_16e0;
            extraout_x8[2] = CONCAT17(uStack_16d1,uStack_16d8);
            *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_16d0,uStack_16d1);
            uStack_16d8 = 0;
            uStack_16d1 = 0;
            uStack_16d0 = 0;
            uStack_16c9 = 0;
            uStack_16e0 = 0;
            *(undefined4 *)extraout_x8 = (undefined4)uStack_16e8;
            *(undefined1 *)((long)extraout_x8 + 0x1f) = uVar6;
            extraout_x8[4] = uStack_16c8;
            *(undefined1 *)(extraout_x8 + 5) = 0;
          }
          else {
            FUN_109f928dc(&uStack_16e8);
            uVar14 = uStack_16e8;
            uStack_16e8 = 0;
            FUN_109f92960(&puStack_1b8,&pppppuStack_a48);
            uVar6 = uStack_199;
            if ((bStack_190 & 1) == 0) {
              extraout_x8[1] = uStack_1b0;
              extraout_x8[2] = CONCAT17(uStack_1a8._7_1_,(undefined7)uStack_1a8);
              *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_1a0,uStack_1a8._7_1_);
              uStack_1a0 = 0;
              uStack_199 = 0;
              uStack_1a8._0_7_ = 0;
              uStack_1a8._7_1_ = 0;
              uStack_1b0 = 0;
              *(undefined4 *)extraout_x8 = puStack_1b8._0_4_;
              *(undefined1 *)((long)extraout_x8 + 0x1f) = uVar6;
              extraout_x8[4] = uStack_198;
              *(undefined1 *)(extraout_x8 + 5) = 0;
            }
            else {
              FUN_109f928dc(&puStack_1b8);
              puVar40 = puStack_1b8;
              puStack_1b8 = (undefined8 *)0x0;
              FUN_109f949c8(uVar14);
              FUN_109f949c8(puVar40);
              FUN_109f94acc(uVar14);
              FUN_109f94acc(puVar40);
              if (!bVar11) {
                FUN_109f94fec(uVar14);
                FUN_109f94fec(puVar40);
              }
              uStack_478._0_7_ = 0x28;
              uStack_478._7_1_ = 0;
              uStack_480 = 0;
              ppppppuStack_590 = (undefined8 ******)0x28;
              ppppppuStack_598 = (undefined8 ******)0x0;
              ppppppuStack_5a0 = &pppppuStack_588;
              ppppuStack_488 = (undefined8 ****)&uStack_470;
              FUN_109d37ad8(&pppppuStack_378,&ppppuStack_488);
              FUN_109d43300(uVar14,&pppppuStack_378,0,0,0,0);
              pppppuStack_378 = (undefined8 *****)&PTR_DAT_110b5c4a0;
              if (((int)uStack_340 == 1) && (ppppuStack_368 != (undefined8 ****)0x0)) {
                __ZdaPv();
              }
              FUN_109d37ad8(&pppppuStack_378,&ppppppuStack_5a0);
              FUN_109d43300(puVar40,&pppppuStack_378,0,0,0,0);
              pppppuStack_378 = (undefined8 *****)&PTR_DAT_110b5c4a0;
              if (((int)uStack_340 == 1) && (ppppuStack_368 != (undefined8 ****)0x0)) {
                __ZdaPv();
              }
              ppplVar7 = uStack_240;
              puVar9 = puStack_f10;
              uStack_240._6_2_ = SUB82(ppplVar7,6);
              uStack_240._0_6_ = CONCAT24(uVar27,CONCAT22(7,uVar30));
              uStack_228 = 0;
              uStack_238 = 0;
              pplStack_230 = (long **)0x0;
              pppppuStack_378 = &ppppuStack_368;
              uStack_370 = (undefined8 *****)0x800000000;
              if (puStack_f18 != puStack_f10) {
                puVar41 = puStack_f18;
                do {
                  func_0x000107c31940(&ppppuStack_d8,*(undefined8 *)(puVar41[1] + 0x18));
                  pppppuVar38 = pppppuStack_378;
                  uStack_c0 = (char)*puVar41;
                  bVar3 = *(byte *)(*(long *)(puVar41[1] + 0x10) + 0xd);
                  if (bVar3 < 2) {
                    bVar3 = 1;
                  }
                  bVar4 = *(byte *)(*(long *)(puVar41[1] + 0x10) + 4);
                  cStack_bf = '\x03';
                  if (bVar4 < 2) {
                    if (bVar4 == 0) {
                      cStack_bf = bVar3 + 0x20;
                    }
                    else if (bVar4 == 1) {
                      cStack_bf = bVar3 + 0x1c;
                    }
                  }
                  else if (bVar4 == 0xb) {
                    cStack_bf = bVar3 + 0x34;
                  }
                  else if (bVar4 == 3) {
                    cStack_bf = bVar3 + 0xf;
                  }
                  else if (bVar4 == 2) {
                    cStack_bf = bVar3 + 2;
                  }
                  uVar42 = (ulong)uStack_370 & 0xffffffff;
                  if ((uint)uStack_370 < uStack_370._4_4_) {
                    pppplVar26 = (long ****)&ppppuStack_d8;
                  }
                  else if ((&ppppuStack_d8 < pppppuStack_378) ||
                          (pppppuStack_378 + uVar42 * 4 <= &ppppuStack_d8)) {
                    FUN_109fae198(&pppppuStack_378,uVar42 + 1);
                    pppplVar26 = (long ****)&ppppuStack_d8;
                  }
                  else {
                    FUN_109fae198(&pppppuStack_378,uVar42 + 1);
                    pppplVar26 = (long ****)
                                 ((long)pppppuStack_378 + ((long)&ppppuStack_d8 - (long)pppppuVar38)
                                 );
                  }
                  pppppuVar38 = pppppuStack_378 + ((ulong)uStack_370 & 0xffffffff) * 4;
                  ppppuVar50 = (undefined8 ****)pppplVar26[1];
                  ppppuVar47 = (undefined8 ****)*pppplVar26;
                  pppppuVar38[2] = (undefined8 ****)pppplVar26[2];
                  pppppuVar38[1] = ppppuVar50;
                  *pppppuVar38 = ppppuVar47;
                  pppplVar26[1] = (long ***)0x0;
                  pppplVar26[2] = (long ***)0x0;
                  *pppplVar26 = (long ***)0x0;
                  *(undefined2 *)(pppppuVar38 + 3) = *(undefined2 *)(pppplVar26 + 3);
                  uStack_370 = (undefined8 *****)CONCAT44(uStack_370._4_4_,(uint)uStack_370 + 1);
                  if (uStack_c8 < 0) {
                    __ZdlPv(ppppuStack_d8);
                  }
                  puVar41 = puVar41 + 2;
                } while (puVar41 != puVar9);
              }
              func_0x000107c31940(&ppppuStack_d8,&UNK_10f62a458);
              alStack_118[0] = 0;
              plStack_128 = (long *)0x0;
              plStack_120 = (long *)0x0;
              func_0x0001092b13d0(&plStack_128,ppppuStack_488,
                                  (char *)((long)ppppuStack_488 + uStack_480));
              FUN_109fae820(auStack_b58,&pppppuStack_378);
              uVar42 = (ulong)uVar28 << 0x10 | 2;
              FUN_109f95200(&uStack_240,&ppppuStack_d8,0,&plStack_128,3,uVar42,auStack_b58);
              FUN_109fae7ac(auStack_b58);
              if (plStack_128 != (long *)0x0) {
                plStack_120 = plStack_128;
                __ZdlPv();
              }
              if (uStack_c8._7_1_ < '\0') {
                __ZdlPv(ppppuStack_d8);
              }
              FUN_109fae7ac(&pppppuStack_378);
              func_0x000107c31940(&pppppuStack_378,&UNK_10f62a468);
              ppppuStack_d0 = (undefined8 ****)0x0;
              uStack_c8 = 0;
              ppppuStack_d8 = (undefined8 ****)0x0;
              func_0x0001092b13d0(&ppppuStack_d8,ppppppuStack_5a0,
                                  (long)ppppppuStack_5a0 + (long)ppppppuStack_598);
              puStack_c68 = auStack_c58;
              uStack_c60 = 0x800000000;
              FUN_109f95200(&uStack_240,&pppppuStack_378,1,&ppppuStack_d8,3,uVar42,&puStack_c68);
              FUN_109fae7ac(&puStack_c68);
              if (ppppuStack_d8 != (undefined8 ****)0x0) {
                ppppuStack_d0 = ppppuStack_d8;
                __ZdlPv();
              }
              if ((long)ppppuStack_368 < 0) {
                __ZdlPv(pppppuStack_378);
              }
              FUN_109f9570c(&ppppuStack_d8,&uStack_240);
              func_0x000109a11460(param_3,(long)ppppuStack_d0 - (long)ppppuStack_d8);
              _memcpy(*param_3,ppppuStack_d8,(long)ppppuStack_d0 - (long)ppppuStack_d8);
              uStack_5e8._0_2_ = CONCAT11(2,*param_4);
              uStack_5e8 = (undefined8 *****)((ulong)uStack_5e8 & 0xffffffff);
              FUN_109fc6e34(&pppppuStack_378,param_1,&uStack_16b0,param_3 + 3,&uStack_5e8);
              if ((uStack_350 & 1) == 0) {
                if ((long)uStack_360 < 0) {
                  __ZdlPv(uStack_370);
                }
                func_0x000107c31940(&plStack_128,&UNK_10f62a472);
                FUN_109f92740(&pppppuStack_378,&plStack_128,2,&PTR_DAT_110b962a8);
                *(undefined4 *)extraout_x8 = pppppuStack_378._0_4_;
                extraout_x8[2] = ppppuStack_368;
                extraout_x8[1] = uStack_370;
                extraout_x8[3] = uStack_360;
                extraout_x8[4] = lStack_358;
                *(undefined1 *)(extraout_x8 + 5) = 0;
                if (alStack_118[0] < 0) {
                  __ZdlPv(plStack_128);
                }
              }
              else {
                extraout_x8[3] = 0;
                extraout_x8[2] = 0;
                extraout_x8[5] = 0;
                extraout_x8[4] = 0;
                extraout_x8[1] = 0;
                *extraout_x8 = 0;
                *(undefined1 *)(extraout_x8 + 5) = 1;
              }
              if (ppppuStack_d8 != (undefined8 ****)0x0) {
                ppppuStack_d0 = ppppuStack_d8;
                __ZdlPv();
              }
              func_0x000109fae5cc(&uStack_238);
              if (ppppppuStack_5a0 != &pppppuStack_588) {
                _free();
              }
              if (ppppuStack_488 != (undefined8 ****)&uStack_470) {
                _free();
              }
              FUN_109d9d1b8(puVar40);
              __ZdlPv();
            }
            FUN_109fae634(&puStack_1b8);
            if (uVar14 != 0) {
              FUN_109d9d1b8(uVar14);
              __ZdlPv();
            }
          }
          FUN_109fae634(&uStack_16e8);
          func_0x000109fae680(&pppppuStack_a48);
          if (ppppuStack_16b8 != (undefined8 ****)0x0) {
            FUN_109d8eae8();
            __ZdlPv();
          }
        }
        func_0x000109f8eccc(&uStack_ce8);
        func_0x000109fae730(&uStack_d10);
        FUN_109f8e75c(&uStack_1358);
        FUN_109f8ed54(&uStack_14c0);
        FUN_109f8ed54(&uStack_1628);
        plVar32 = plStack_1630;
        plStack_1630 = (long *)0x0;
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 8))();
        }
        goto LAB_109f90288;
      }
      func_0x000107c31940(&pppppuStack_a48,&UNK_10f62a3aa);
      FUN_109f92740(&uStack_16b0,&pppppuStack_a48,1,&PTR_DAT_110b96260);
    }
  }
  *(undefined4 *)extraout_x8 = (undefined4)uStack_16b0;
  extraout_x8[2] = uStack_16a0;
  extraout_x8[1] = uStack_16a8;
  extraout_x8[3] = uStack_1698;
  extraout_x8[4] = uStack_1690;
  *(undefined1 *)(extraout_x8 + 5) = 0;
  if ((long)pppppuStack_a38 < 0) {
    __ZdlPv(pppppuStack_a48);
  }
LAB_109f90288:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109f92078:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109f92080);
  (*pcVar10)();
}



/* Entry: 109f92740; end: 109f928db;  */

void FUN_109f92740(uint *param_1,ulong *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 **ppuVar7;
  undefined **ppuStack_e0;
  uint uStack_d8;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  char *pcStack_58;
  
  ppuVar3 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar5 = *(ulong *)(&UNK_110b935f8 + (ulong)param_3 * 0x10);
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
    if ((param_1[10] & 1) == 0) {
      uStack_d8 = *param_1;
      uStack_d0 = *(undefined8 *)(param_1 + 2);
      uStack_c8 = (undefined7)*(undefined8 *)(param_1 + 4);
      uStack_c1 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
      uStack_c0 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
      uStack_b9 = *(undefined1 *)((long)param_1 + 0x1f);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uStack_b8 = *(undefined8 *)(param_1 + 8);
      ppuStack_e0 = &PTR_LAB_110b93678;
      func_0x000109f6d428(&ppuStack_e0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109f9294c);
      (*pcVar2)();
    }
    return;
  }
  puVar6 = (&PTR_DAT_110b935f0)[(ulong)param_3 * 2];
  if (uVar5 < 0x17) {
    uStack_80 = CONCAT17((char)uVar5,(undefined7)uStack_80);
    if (uVar5 == 0) goto LAB_109f927dc;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((uVar5 | 7) != 0x17) {
      puVar1 = (undefined1 *)((uVar5 | 7) + 1);
    }
    ppuVar3 = (undefined1 **)puVar1;
    __Znwm();
    uStack_80 = (ulong)puVar1 | 0x8000000000000000;
    puStack_90 = (undefined1 *)ppuVar3;
    uStack_88 = uVar5;
  }
  _memmove(ppuVar3,puVar6,uVar5);
  ppuVar7 = ppuVar3;
LAB_109f927dc:
  *(undefined1 *)((long)ppuVar7 + uVar5) = 0;
  if (param_4 == (undefined8 *)0x0) {
    uStack_64 = 0;
    uStack_68 = 0;
    pcStack_58 = "";
    pcStack_60 = pcStack_58;
  }
  else {
    pcStack_58 = (char *)*param_4;
    uStack_64 = *(undefined4 *)(param_4 + 2);
    uStack_68 = *(undefined4 *)((long)param_4 + 0x14);
    pcStack_60 = (char *)param_4[1];
  }
  FUN_109f6d194(&puStack_90,param_2,&pcStack_58,&pcStack_60,&uStack_64,&uStack_68);
  ppuVar4 = &PTR_PTR_1132ff358;
  FUN_10ae079a0();
  func_0x000109f6d228();
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_1132ff358);
  if ((long)uStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  puStack_90 = (undefined1 *)CONCAT44(puStack_90._4_4_,param_3);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_88,*param_2,param_2[1]);
    param_3 = (uint)puStack_90;
  }
  else {
    uStack_80 = param_2[1];
    uStack_88 = *param_2;
    uStack_78 = param_2[2];
  }
  *param_1 = param_3;
  *(ulong *)(param_1 + 4) = uStack_80;
  *(ulong *)(param_1 + 2) = uStack_88;
  *(ulong *)(param_1 + 6) = uStack_78;
  *(undefined8 **)(param_1 + 8) = param_4;
  return;
}



/* Entry: 109f928dc; end: 109f9295f;  */

void FUN_109f928dc(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return;
  }
  uStack_48 = *param_1;
  uStack_40 = *(undefined8 *)(param_1 + 2);
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 4);
  uStack_31 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
  uStack_30 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
  uStack_29 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_50 = &PTR_LAB_110b93678;
  func_0x000109f6d428(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f9294c);
  (*pcVar1)();
}



/* Entry: 109f92960; end: 109f949c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109f92960(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined7 *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ******ppppppuVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  undefined8 ******ppppppuVar12;
  long lVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 **ppuVar17;
  undefined8 *******pppppppuVar18;
  ulong *puVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  ulong *puVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  long *plVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  ulong *puVar35;
  ulong uVar36;
  undefined4 *puVar37;
  char *pcVar38;
  undefined8 uVar39;
  undefined8 *******pppppppuVar40;
  ulong uVar41;
  long lVar42;
  undefined1 *puVar43;
  undefined8 *puVar44;
  undefined1 *puVar45;
  long lVar46;
  undefined8 *****pppppuVar47;
  undefined1 *puVar48;
  uint uVar49;
  ulong uVar50;
  undefined1 *puStack_650;
  undefined8 *******pppppppuStack_638;
  ulong uStack_630;
  byte bStack_621;
  undefined8 *******pppppppuStack_620;
  undefined7 uStack_618;
  undefined1 uStack_611;
  undefined7 uStack_610;
  byte bStack_609;
  undefined8 *******pppppppuStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  ulong *puStack_5e0;
  undefined1 *puStack_5d8;
  undefined1 **ppuStack_5d0;
  undefined8 ******ppppppuStack_5c8;
  long lStack_5c0;
  undefined4 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined8 ******ppppppuStack_560;
  undefined4 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined7 uStack_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  undefined8 *******pppppppuStack_480;
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  byte bStack_469;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  undefined7 uStack_438;
  undefined1 uStack_431;
  undefined7 uStack_430;
  undefined1 uStack_429;
  byte bStack_421;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  char *pcStack_310;
  undefined8 uStack_308;
  undefined7 uStack_300;
  undefined1 uStack_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined1 uStack_2f0;
  undefined1 uStack_2ef;
  undefined6 uStack_2ee;
  byte bStack_2e8;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [32];
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined1 uStack_19a;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  ulong uStack_170;
  long alStack_168 [8];
  undefined1 *puStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [64];
  undefined1 *puStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [64];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_650 = (undefined1 *)0x2e0;
  __Znwm();
  FUN_109d9ceb8();
  if ((char)puStack_650[0xcf] < '\0') {
    __ZdlPv(*(undefined8 *)(puStack_650 + 0xb8));
  }
  puStack_650[0xc0] = 0x67;
  *(undefined8 *)(puStack_650 + 0xb8) = 0x6172665f6e69616d;
  puStack_650[0xc1] = 0;
  puStack_650[0xcf] = 9;
  uVar32 = param_2[0x89];
  if (uVar32 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = uVar32;
    _strlen(uVar32);
  }
  FUN_109d3879c(puStack_650,uVar32,uVar24);
  FUN_109d71d68(puStack_650 + 0x100,&UNK_10f62aca9,0xd7);
  FUN_109f988ec(param_2);
  uStack_d0 = 0x800000000;
  uVar32 = param_2[1];
  lVar29 = *(long *)(uVar32 + 0x970);
  lVar33 = *(long *)(uVar32 + 0x978);
  puStack_d8 = auStack_c8;
  if (lVar29 == lVar33) {
LAB_109f92ae0:
    func_0x000109d33d14(&puStack_d8,param_2[0x47]);
  }
  else {
    do {
      lVar23 = *(long *)(*(long *)(lVar29 + 8) + 0x10);
      if ((*(uint *)(lVar23 + 4) & 0xff) == 0x13) {
        puVar35 = param_2;
        FUN_109f9a5a4(param_2,*(undefined4 *)(*(long *)(lVar23 + 0x30) + 4),
                      *(undefined1 *)(*(long *)(lVar23 + 0x30) + 0xd));
        func_0x000109d33d14(&puStack_d8,puVar35);
      }
      else {
        puVar35 = param_2;
        FUN_109f9a5a4(param_2,*(uint *)(lVar23 + 4),*(undefined1 *)(lVar23 + 0xd));
        func_0x000109d33d14(&puStack_d8,puVar35);
      }
      lVar29 = lVar29 + 0x38;
    } while (lVar29 != lVar33);
    if ((int)uStack_d0 == 0) goto LAB_109f92ae0;
  }
  ppppppuVar9 = (undefined8 ******)*param_2;
  FUN_109d9fa44(ppppppuVar9,puStack_d8,uStack_d0 & 0xffffffff,1);
  uStack_120 = 0x800000000;
  uVar24 = param_2[1];
  plVar34 = *(long **)(uVar24 + 0x8b0);
  puStack_128 = auStack_118;
  for (plVar30 = *(long **)(uVar24 + 0x8a8); plVar30 != plVar34; plVar30 = plVar30 + 1) {
    puVar35 = param_2;
    FUN_109f9a5a4(param_2,*(undefined4 *)(*(long *)(*plVar30 + 0x10) + 4),
                  *(undefined1 *)(*(long *)(*plVar30 + 0x10) + 0xd));
    func_0x000109d33d14(&puStack_128,puVar35);
  }
  uStack_498 = 0;
  uStack_4a0 = 0;
  puVar35 = (ulong *)param_2[0x57];
  puStack_4a8 = &uStack_4a0;
  while (puVar35 != param_2 + 0x58) {
    uVar3 = (undefined4)uStack_120;
    ppuVar10 = &puStack_4a8;
    FUN_109f9e6dc(ppuVar10,(int)puVar35[4]);
    *(undefined4 *)(ppuVar10 + 4) = uVar3;
    uVar11 = puVar35[5];
    func_0x000109da017c(uVar11,2);
    func_0x000109d33d14(&puStack_128,uVar11);
    puVar26 = (ulong *)puVar35[1];
    puVar19 = puVar35;
    if ((ulong *)puVar35[1] == (ulong *)0x0) {
      do {
        puVar35 = (ulong *)puVar19[2];
        bVar8 = (ulong *)*puVar35 != puVar19;
        puVar19 = puVar35;
      } while (bVar8);
    }
    else {
      do {
        puVar35 = puVar26;
        puVar26 = (ulong *)*puVar35;
      } while ((ulong *)*puVar35 != (ulong *)0x0);
    }
  }
  uVar41 = uStack_120 & 0xffffffff;
  lVar29 = *(long *)(uVar24 + 0x848);
  uVar11 = uVar41;
  if (lVar29 != 0) {
    func_0x000109d33d14(&puStack_128,param_2[0x3d]);
    uVar11 = uStack_120 & 0xffffffff;
  }
  lVar33 = *(long *)(uVar24 + 0x840);
  if (lVar33 != 0) {
    func_0x000109d33d14(&puStack_128,param_2[0x47]);
  }
  lVar23 = *(long *)(uVar32 + 0x970);
  if (lVar23 == *(long *)(uVar32 + 0x978)) {
    uVar36 = 0;
  }
  else {
    uVar36 = 0;
    do {
      iVar31 = *(int *)(*(long *)(lVar23 + 8) + 0x3c);
      if (iVar31 == 2) {
        uVar27 = 0;
LAB_109f92c6c:
        lVar42 = 0;
        if (*(long *)(lVar23 + 0x10) != -1) {
          lVar42 = *(long *)(lVar23 + 0x10);
        }
        if (lVar42 + uVar27 < 8) {
          uVar36 = 1L << (lVar42 + uVar27 & 0x3f) | uVar36;
        }
      }
      else {
        uVar27 = (ulong)(iVar31 - 4);
        if (3 < iVar31) goto LAB_109f92c6c;
      }
      lVar23 = lVar23 + 0x38;
    } while (lVar23 != *(long *)(uVar32 + 0x978));
  }
  uStack_170 = 0x400000000;
  plVar34 = *(long **)(uVar32 + 0x990);
  plStack_178 = alStack_168;
  for (plVar30 = *(long **)(uVar32 + 0x988); plVar30 != plVar34; plVar30 = plVar30 + 1) {
    lVar42 = *plVar30;
    lVar23 = *(long *)(lVar42 + 0x10);
    iVar28 = *(int *)(lVar42 + 0x3c);
    iVar31 = iVar28;
    if (iVar28 < 5) {
      iVar31 = 4;
    }
    uVar27 = (ulong)(iVar31 - 4);
    if (*(char *)(lVar23 + 4) == '\x13') {
      if (*(int *)(lVar23 + 0x10) != 0) {
        uVar50 = 0;
        uVar1 = 0;
        if (uVar27 < 9) {
          uVar1 = 8 - uVar27;
        }
        do {
          if (uVar50 == uVar1) {
            func_0x000109262df8(&UNK_10f62bc82);
            goto LAB_109f946d8;
          }
          if ((uVar36 >> (uVar50 + uVar27 & 0x3f) & 1) != 0) {
            bVar5 = *(byte *)(*(long *)(lVar23 + 0x30) + 0xd);
            func_0x000109fadf28(&plStack_178,lVar42,uStack_120 & 0xffffffff | uVar50 << 0x20);
            if (bVar5 < 2) {
              bVar5 = 1;
            }
            puVar35 = param_2;
            func_0x000109f9a5dc(param_2,bVar5);
            func_0x000109d33d14(&puStack_128,puVar35);
            lVar23 = *(long *)(lVar42 + 0x10);
          }
          uVar50 = uVar50 + 1;
        } while (uVar50 < *(uint *)(lVar23 + 0x10));
      }
    }
    else {
      if (0xb < iVar28) {
        func_0x000109262df8(&UNK_10f62bc82);
        goto LAB_109f946d8;
      }
      if ((uVar36 >> (uVar27 & 0x3f) & 1) != 0) {
        bVar5 = *(byte *)(lVar23 + 0xd);
        func_0x000109fadf28(&plStack_178,lVar42,uStack_120 & 0xffffffff);
        if (bVar5 < 2) {
          bVar5 = 1;
        }
        puVar35 = param_2;
        func_0x000109f9a5dc(param_2,bVar5);
        func_0x000109d33d14(&puStack_128,puVar35);
      }
    }
  }
  ppppppuVar12 = ppppppuVar9;
  FUN_109d9f92c(ppppppuVar9,puStack_128,uStack_120 & 0xffffffff,0);
  puStack_5e0 = (ulong *)&UNK_10f62a468;
  lStack_5c0 = CONCAT62(lStack_5c0._2_6_,0x103);
  FUN_109f9a62c();
  FUN_109f9a6a8();
  puVar15 = puStack_4a8;
  while (puVar15 != &uStack_4a0) {
    uVar36 = param_2[1];
    lVar23 = *(long *)(uVar36 + 0x720);
    lVar42 = *(long *)(uVar36 + 0x728);
    if (lVar23 == lVar42) {
      lVar46 = 0;
    }
    else {
      lVar46 = 0;
      iVar31 = *(int *)((long)puVar15 + 0x1c);
      do {
        lVar13 = uVar36 + 0x358;
        FUN_109f9ca04(lVar13,lVar23);
        if ((int)lVar13 == iVar31) {
          lVar46 = lVar46 + 1;
        }
        lVar23 = lVar23 + 0x40;
      } while (lVar23 != lVar42);
      lVar46 = lVar46 << 3;
    }
    ppppppuVar14 = ppppppuVar12 + 0xe;
    FUN_109d5ab08(ppppppuVar14,**ppppppuVar12,*(int *)(puVar15 + 4) + 1,0x15);
    ppppppuVar12[0xe] = ppppppuVar14;
    ppppppuVar14 = ppppppuVar12 + 0xe;
    FUN_109d5ab08(ppppppuVar14,**ppppppuVar12,*(int *)(puVar15 + 4) + 1,0x2d);
    ppppppuVar12[0xe] = ppppppuVar14;
    uVar3 = *(undefined4 *)(puVar15 + 4);
    uVar36 = *param_2;
    FUN_109d59ae0(uVar36,0x4b,8);
    ppppppuVar14 = ppppppuVar12 + 0xe;
    puStack_5e0._0_4_ = uVar3;
    FUN_109d5b144(ppppppuVar14,**ppppppuVar12,&puStack_5e0,1,uVar36);
    ppppppuVar12[0xe] = ppppppuVar14;
    uVar3 = *(undefined4 *)(puVar15 + 4);
    uVar36 = *param_2;
    FUN_109d59ae0(uVar36,0x4e,lVar46);
    ppppppuVar14 = ppppppuVar12 + 0xe;
    puStack_5e0._0_4_ = uVar3;
    FUN_109d5b144(ppppppuVar14,**ppppppuVar12,&puStack_5e0,1,uVar36);
    ppppppuVar12[0xe] = ppppppuVar14;
    uVar3 = *(undefined4 *)(puVar15 + 4);
    uVar36 = *param_2;
    FUN_109d59c4c(uVar36,&UNK_10f62add6,0x13,0,0);
    puStack_5e0 = (ulong *)CONCAT44(puStack_5e0._4_4_,uVar3);
    ppppppuVar14 = ppppppuVar12 + 0xe;
    FUN_109d5b144(ppppppuVar14,**ppppppuVar12,&puStack_5e0,1,uVar36);
    ppppppuVar12[0xe] = ppppppuVar14;
    puVar44 = (undefined8 *)puVar15[1];
    puVar16 = puVar15;
    if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
      do {
        puVar15 = (undefined8 *)puVar16[2];
        bVar8 = (undefined8 *)*puVar15 != puVar16;
        puVar16 = puVar15;
      } while (bVar8);
    }
    else {
      do {
        puVar15 = puVar44;
        puVar44 = (undefined8 *)*puVar15;
      } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
    }
  }
  puVar15 = (undefined8 *)*param_2;
  lStack_5c0._2_6_ = (undefined6)((ulong)lStack_5c0 >> 0x10);
  lStack_5c0 = CONCAT62(lStack_5c0._2_6_,0x101);
  FUN_109d38918(puVar15,&puStack_5e0,ppppppuVar12,0);
  puStack_1c8 = puVar15 + 5;
  uStack_1c0 = *(undefined8 *)*puVar15;
  ppuStack_5d0 = &puStack_200;
  pppuStack_1b8 = &ppuStack_188;
  pppuStack_1b0 = &ppuStack_180;
  uStack_1f8 = 0x200000000;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0x200;
  uStack_19a = 7;
  uStack_190 = 0;
  uStack_198 = 0;
  ppuStack_188 = &PTR_FUN_110b57990;
  ppuStack_180 = &PTR_FUN_110b57a80;
  lStack_5c0 = *(long *)(*(long *)(*(long *)(param_2[1] + 0x68) + 0x28) + 0x160);
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_5b8 = 4;
  uStack_590 = 0x3f800000;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_568 = 0x3f800000;
  ppppppuStack_560 = (undefined8 ******)0x0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_558 = 0;
  uStack_530 = 0x3f800000;
  puStack_528 = &uStack_520;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_518 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  uStack_4d8 = 0x3f800000;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  lStack_4b8 = 0;
  lStack_4c0 = 0;
  uStack_4b0 = 0;
  puStack_200 = auStack_1f0;
  puStack_510 = &uStack_508;
  puStack_5d8 = puStack_650;
  ppppppuStack_5c8 = ppppppuVar12;
  puStack_1d0 = puVar15;
  puStack_5e0 = param_2;
  puVar15 = puStack_4a8;
  while (puVar15 != &uStack_4a0) {
    puVar37 = (undefined4 *)((long)puVar15 + 0x1c);
    uVar3 = *(undefined4 *)(puVar15 + 4);
    ppuVar10 = &puStack_510;
    FUN_109f9e6dc(ppuVar10,*puVar37,puVar37);
    *(undefined4 *)(ppuVar10 + 4) = uVar3;
    uVar22 = *(uint *)(puVar15 + 4);
    if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
      FUN_109d85318(ppppppuVar12);
    }
    pppppuVar47 = ppppppuVar12[0xb];
    ppuVar10 = &puStack_528;
    func_0x000109f9e8d4(ppuVar10,*puVar37,puVar37);
    ppuVar10[5] = pppppuVar47 + (ulong)uVar22 * 5;
    puVar44 = (undefined8 *)puVar15[1];
    puVar16 = puVar15;
    if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
      do {
        puVar15 = (undefined8 *)puVar16[2];
        bVar8 = (undefined8 *)*puVar15 != puVar16;
        puVar16 = puVar15;
      } while (bVar8);
    }
    else {
      do {
        puVar15 = puVar44;
        puVar44 = (undefined8 *)*puVar15;
      } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
    }
  }
  uStack_558 = 0;
  puVar15 = *(undefined8 **)(uVar32 + 0x978);
  if (*(undefined8 **)(uVar32 + 0x970) != puVar15) {
    iVar31 = 0;
    puVar44 = *(undefined8 **)(uVar32 + 0x970) + 1;
    do {
      puVar16 = &uStack_550;
      FUN_109f8cf84(puVar16,puVar44);
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = &uStack_550;
        FUN_109f9e9a4(puVar16,*puVar44,puVar44);
        *(int *)(puVar16 + 3) = iVar31;
      }
      iVar31 = iVar31 + 1;
      puVar16 = puVar44 + 6;
      puVar44 = puVar44 + 7;
    } while (puVar16 != puVar15);
  }
  puVar15 = *(undefined8 **)(uVar24 + 0x8a8);
  puVar44 = *(undefined8 **)(uVar24 + 0x8b0);
  if (puVar15 != puVar44) {
    uVar36 = 0;
    do {
      pcVar38 = (char *)*puVar15;
      pcStack_310 = pcVar38;
      if ((*(byte *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
        FUN_109d85318(ppppppuVar12);
      }
      pppppuVar47 = ppppppuVar12[0xb];
      puVar16 = &uStack_588;
      FUN_109f9ede0(puVar16,pcVar38,&pcStack_310);
      puVar16[3] = pppppuVar47 + uVar36 * 5;
      puVar15 = puVar15 + 1;
      uVar36 = (ulong)((int)uVar36 + 1);
    } while (puVar15 != puVar44);
  }
  if (lVar29 != 0) {
    if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
      FUN_109d85318(ppppppuVar12);
    }
    pppppuVar47 = ppppppuVar12[0xb];
    puVar15 = &uStack_588;
    FUN_109f9ede0(puVar15,*(undefined8 *)(uVar24 + 0x848));
    puVar15[3] = pppppuVar47 + uVar41 * 5;
  }
  if (lVar33 != 0) {
    if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
      FUN_109d85318(ppppppuVar12);
    }
    pppppuVar47 = ppppppuVar12[0xb];
    puVar15 = &uStack_588;
    FUN_109f9ede0(puVar15,*(undefined8 *)(uVar24 + 0x840));
    puVar15[3] = pppppuVar47 + uVar11 * 5;
  }
  if ((int)uStack_170 != 0) {
    lVar23 = (uStack_170 & 0xffffffff) << 4;
    plVar30 = plStack_178;
    do {
      uVar22 = *(uint *)(plVar30 + 1);
      if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
        FUN_109d85318(ppppppuVar12);
      }
      pppppuVar47 = ppppppuVar12[0xb];
      puVar15 = &uStack_588;
      FUN_109f9ede0(puVar15,*plVar30,plVar30);
      puVar15[3] = pppppuVar47 + (ulong)uVar22 * 5;
      plVar30 = plVar30 + 2;
      lVar23 = lVar23 + -0x10;
    } while (lVar23 != 0);
  }
  lVar23 = lStack_5c0;
  plVar34 = *(long **)(lStack_5c0 + 0x178);
  plVar30 = (long *)*plVar34;
  if ((long *)*plVar34 != (long *)0x0) {
    do {
      plVar25 = plVar30;
      if (plVar34[6] != 0) {
        plVar30 = *(long **)(plVar34[6] + 0x58);
        while( true ) {
          plVar25 = (long *)0x0;
          if (*plVar30 != 0) {
            plVar25 = plVar30;
          }
          uStack_420._0_7_ = SUB87(plVar25,0);
          uStack_420._7_1_ = (undefined1)((ulong)plVar25 >> 0x38);
          if (*plVar30 == 0) break;
          uVar11 = *puStack_5e0;
          FUN_109f9f1c0(uVar11,plVar30[2],puStack_5e0 + 0x38);
          if (uVar11 != 0) {
            pcVar38 = "";
            if ((char *)plVar30[3] != (char *)0x0) {
              pcVar38 = (char *)plVar30[3];
            }
            uStack_2ef = 1;
            if (*pcVar38 == '\0') {
              uStack_2f0 = 1;
            }
            else {
              uStack_2f0 = 3;
              pcStack_310 = pcVar38;
            }
            ppuVar17 = &puStack_200;
            FUN_109f9a95c(ppuVar17,uVar11,&pcStack_310);
            puVar20 = puStack_5d8 + 0x100;
            FUN_109d73128(puVar20,uVar11,1);
            uVar22 = (uint)(1L << ((ulong)puVar20 & 0x3f));
            if (uVar22 < 5) {
              uVar22 = 4;
            }
            *(ushort *)((long)ppuVar17 + 0x12) =
                 *(ushort *)((long)ppuVar17 + 0x12) & 0xffc0 | (ushort)LZCOUNT((ulong)uVar22) ^ 0x3f
            ;
            puVar15 = &uStack_588;
            FUN_109f9ede0(puVar15,plVar30,&uStack_420);
            puVar15[3] = ppuVar17;
          }
          plVar30 = (long *)*plVar30;
        }
        plVar25 = (long *)*plVar34;
      }
      plVar30 = (long *)*plVar25;
      plVar34 = plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
    plVar30 = *(long **)(lVar23 + 0x178);
    for (plVar34 = (long *)**(long **)(lVar23 + 0x178); plVar34 != (long *)0x0;
        plVar34 = (long *)*plVar34) {
      if ((plVar30[6] != 0) && (plVar25 = *(long **)(plVar30[6] + 0x30), *plVar25 != 0)) {
        do {
          FUN_109f9aa64(&pcStack_310,&puStack_5e0,plVar25);
          if ((bStack_2e8 & 1) == 0) {
            uStack_420._0_7_ = uStack_300;
            uStack_420._7_1_ = uStack_2f9;
            uStack_418._0_4_ = (undefined4)uStack_2f8;
            uStack_418._4_3_ = (undefined3)((uint7)uStack_2f8 >> 0x20);
            *(undefined4 *)param_1 = pcStack_310._0_4_;
            param_1[1] = uStack_308;
            param_1[2] = CONCAT17(uStack_2f9,uStack_300);
            *(ulong *)((long)param_1 + 0x17) =
                 CONCAT35(uStack_418._4_3_,CONCAT41((undefined4)uStack_418,uStack_2f9));
            *(undefined1 *)((long)param_1 + 0x1f) = uStack_2f1;
            param_1[4] = CONCAT62(uStack_2ee,CONCAT11(uStack_2ef,uStack_2f0));
            *(undefined1 *)(param_1 + 5) = 0;
            goto LAB_109f945ac;
          }
          plVar25 = (long *)*plVar25;
        } while (*plVar25 != 0);
        plVar34 = (long *)*plVar30;
      }
      plVar30 = plVar34;
    }
  }
  FUN_109f9b674(ppppppuVar12,&puStack_510);
  if (ppppppuStack_560 == (undefined8 ******)0x0) {
    func_0x000109d677ec();
    ppppppuStack_560 = ppppppuVar9;
  }
  uVar39 = uStack_1c0;
  FUN_109d38b34(uStack_1c0,ppppppuStack_560,0);
  uStack_2f0 = 1;
  uStack_2ef = 1;
  FUN_109faba1c(&puStack_200,uVar39,&pcStack_310);
  FUN_109f9baec(puStack_650,*param_2,param_2 + 0x89);
  uStack_308 = 0x2000000000;
  puVar35 = *(ulong **)(uVar32 + 0x970);
  puVar26 = *(ulong **)(uVar32 + 0x978);
  pcStack_310 = (char *)&uStack_300;
  if (puVar35 != puVar26) {
    do {
      if (*(int *)(puVar35[1] + 0x3c) == 0) {
        plVar34 = (long *)*param_2;
        plVar30 = (long *)(*plVar34 + 0x108);
        puVar21 = &UNK_10f62bc55;
        FUN_109d956b4(plVar30,&UNK_10f62bc55,9);
        lVar23 = *plVar30;
        if (((ulong)puVar21 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_420._0_7_ = (undefined7)(lVar23 + 8);
        uStack_420._7_1_ = (undefined1)((ulong)(lVar23 + 8) >> 0x38);
        plVar30 = (long *)(*(long *)*param_2 + 0x108);
        puVar21 = &UNK_10f62bc5f;
        FUN_109d956b4(plVar30,&UNK_10f62bc5f,7);
        lVar23 = *plVar30;
        if (((ulong)puVar21 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_418 = lVar23 + 8;
        uStack_410 = (undefined8 ******)param_2[0xe];
        plVar30 = (long *)(*(long *)*param_2 + 0x108);
        uVar32 = 0;
        FUN_109d956b4(plVar30,&DAT_10f33a2d8,5);
        lVar23 = *plVar30;
        if ((uVar32 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_408 = lVar23 + 8;
        uStack_400 = param_2[0xf];
        uVar32 = puVar35[4];
        if (0x7ffffffffffffff7 < uVar32) {
          func_0x000104c4f6b8();
          goto LAB_109f946d8;
        }
        plVar30 = (long *)*param_2;
        uVar11 = puVar35[3];
        if (uVar32 < 0x17) {
          bStack_469 = (byte)uVar32;
          pppppppuVar18 = &pppppppuStack_480;
          if (uVar32 != 0) goto LAB_109f9367c;
        }
        else {
          pppppppuVar40 = (undefined8 *******)0x19;
          if ((uVar32 | 7) != 0x17) {
            pppppppuVar40 = (undefined8 *******)((uVar32 | 7) + 1);
          }
          pppppppuVar18 = pppppppuVar40;
          __Znwm();
          bStack_469 = (byte)((ulong)pppppppuVar40 >> 0x38) | 0x80;
          uStack_470 = SUB87(pppppppuVar40,0);
          uStack_478 = (undefined7)uVar32;
          uStack_471 = (undefined1)(uVar32 >> 0x38);
          pppppppuStack_480 = pppppppuVar18;
LAB_109f9367c:
          _memmove(pppppppuVar18,uVar11,uVar32);
        }
        *(undefined1 *)((long)pppppppuVar18 + uVar32) = 0;
        pppppppuVar40 = pppppppuStack_480;
        if (-1 < (long)(char)bStack_469) {
          pppppppuVar40 = &pppppppuStack_480;
        }
        lVar23 = CONCAT17(uStack_471,uStack_478);
        if (-1 < (char)bStack_469) {
          lVar23 = (long)(char)bStack_469;
        }
        plVar30 = (long *)(*plVar30 + 0x108);
        FUN_109d956b4(plVar30,pppppppuVar40,lVar23);
        lVar23 = *plVar30;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_3f8 = lVar23 + 8;
        FUN_109d974c0(plVar34,&uStack_420,6,0,1);
        func_0x000109d33e60(&pcStack_310,plVar34);
      }
      else {
        uStack_478 = 0;
        uStack_471 = 0;
        pppppppuStack_480 = (undefined8 *******)0x0;
        uStack_470 = 0;
        bStack_469 = 0;
        pppppppuStack_600 = (undefined8 *******)0x0;
        uStack_5f8 = 0;
        uStack_5f0 = (undefined8 ******)0x0;
        uVar32 = *puVar35;
        iVar31 = (int)uVar32 + -4;
        if (uVar32 < 4) {
          iVar31 = (int)uVar32;
        }
        iVar28 = 0;
        if (uVar32 != 2) {
          iVar28 = iVar31;
        }
        if (*(char *)(*(long *)(puVar35[1] + 0x10) + 4) == '\x13') {
          uVar32 = puVar35[4];
          if (0x7ffffffffffffff7 < uVar32) {
            func_0x000104c4f6b8();
            goto LAB_109f946d8;
          }
          uVar11 = puVar35[2];
          uVar41 = puVar35[3];
          if (uVar32 < 0x17) {
            bStack_609 = (byte)uVar32;
            pppppppuVar18 = &pppppppuStack_620;
            if (uVar32 != 0) goto LAB_109f9371c;
          }
          else {
            pppppppuVar40 = (undefined8 *******)0x19;
            if ((uVar32 | 7) != 0x17) {
              pppppppuVar40 = (undefined8 *******)((uVar32 | 7) + 1);
            }
            pppppppuVar18 = pppppppuVar40;
            __Znwm();
            bStack_609 = (byte)((ulong)pppppppuVar40 >> 0x38) | 0x80;
            uStack_618 = (undefined7)uVar32;
            uStack_611 = (undefined1)(uVar32 >> 0x38);
            uStack_610 = SUB87(pppppppuVar40,0);
            pppppppuStack_620 = pppppppuVar18;
LAB_109f9371c:
            _memmove(pppppppuVar18,uVar41,uVar32);
          }
          *(undefined1 *)((long)pppppppuVar18 + uVar32) = 0;
          pppppppuVar40 = &pppppppuStack_620;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar40,"_",1);
          uStack_410 = pppppppuVar40[2];
          uStack_418._0_4_ = SUB84(pppppppuVar40[1],0);
          uStack_418._4_4_ = (undefined4)((ulong)pppppppuVar40[1] >> 0x20);
          uStack_420._0_7_ = SUB87(*pppppppuVar40,0);
          uStack_420._7_1_ = (undefined1)((ulong)*pppppppuVar40 >> 0x38);
          pppppppuVar40[1] = (undefined8 ******)0x0;
          pppppppuVar40[2] = (undefined8 ******)0x0;
          *pppppppuVar40 = (undefined8 ******)0x0;
          __ZNSt3__19to_stringEm(&pppppppuStack_638,puVar35[2]);
          uVar32 = uStack_630;
          pppppppuVar40 = pppppppuStack_638;
          if (-1 < (char)bStack_621) {
            uVar32 = (ulong)bStack_621;
            pppppppuVar40 = &pppppppuStack_638;
          }
          puVar19 = &uStack_420;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,pppppppuVar40,uVar32);
          pppppppuVar40 = (undefined8 *******)*puVar19;
          uStack_438 = (undefined7)puVar19[1];
          uStack_431 = (undefined1)*(undefined8 *)((long)puVar19 + 0xf);
          uStack_430 = (undefined7)((ulong)*(undefined8 *)((long)puVar19 + 0xf) >> 8);
          bVar5 = *(byte *)((long)puVar19 + 0x17);
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          if ((char)bStack_469 < '\0') {
            __ZdlPv(pppppppuStack_480);
          }
          uStack_478 = uStack_438;
          uStack_471 = uStack_431;
          uStack_470 = uStack_430;
          pppppppuStack_480 = pppppppuVar40;
          bStack_469 = bVar5;
          if ((char)bStack_621 < '\0') {
            __ZdlPv(pppppppuStack_638);
          }
          if ((long)uStack_410 < 0) {
            __ZdlPv(CONCAT17(uStack_420._7_1_,(undefined7)uStack_420));
          }
          if ((char)bStack_609 < '\0') {
            __ZdlPv(pppppppuStack_620);
          }
          FUN_109f9c150(&uStack_420,*(undefined8 *)(*(long *)(puVar35[1] + 0x10) + 0x30));
          if ((long)uStack_5f0 < 0) {
            __ZdlPv(pppppppuStack_600);
          }
          iVar28 = iVar28 + (int)uVar11;
          uStack_5f8 = CONCAT44(uStack_418._4_4_,(undefined4)uStack_418);
          pppppppuStack_600 = (undefined8 *******)CONCAT17(uStack_420._7_1_,(undefined7)uStack_420);
        }
        else {
          uVar32 = puVar35[4];
          if (0x7ffffffffffffff7 < uVar32) {
            func_0x000104c4f6b8();
            goto LAB_109f946d8;
          }
          uVar11 = puVar35[3];
          if (uVar32 < 0x17) {
            uStack_410 = (undefined8 ******)CONCAT17((char)uVar32,(undefined7)uStack_410);
            puVar44 = &uStack_420;
            if (uVar32 != 0) goto LAB_109f93868;
          }
          else {
            puVar15 = (undefined8 *)0x19;
            if ((uVar32 | 7) != 0x17) {
              puVar15 = (undefined8 *)((uVar32 | 7) + 1);
            }
            puVar44 = puVar15;
            __Znwm();
            uStack_410 = (undefined8 ******)((ulong)puVar15 | 0x8000000000000000);
            uStack_420._0_7_ = SUB87(puVar44,0);
            uStack_420._7_1_ = (undefined1)((ulong)puVar44 >> 0x38);
            uStack_418 = uVar32;
LAB_109f93868:
            _memmove(puVar44,uVar11,uVar32);
          }
          *(undefined1 *)((long)puVar44 + uVar32) = 0;
          if ((char)bStack_469 < '\0') {
            __ZdlPv(pppppppuStack_480);
          }
          pppppppuStack_480 = (undefined8 *******)CONCAT17(uStack_420._7_1_,(undefined7)uStack_420);
          uStack_478 = (undefined7)uStack_418;
          uStack_471 = (undefined1)(uStack_418 >> 0x38);
          uStack_470 = SUB87(uStack_410,0);
          bStack_469 = (byte)((ulong)uStack_410 >> 0x38);
          FUN_109f9c150(&uStack_420,*(undefined8 *)(puVar35[1] + 0x10));
          uVar32 = uStack_418;
          if ((long)uStack_5f0 < 0) {
            __ZdlPv(pppppppuStack_600);
            uVar32 = uStack_418;
          }
          uStack_5f8 = uVar32;
          pppppppuStack_600 = (undefined8 *******)CONCAT17(uStack_420._7_1_,(undefined7)uStack_420);
        }
        uStack_5f0 = uStack_410;
        plVar30 = (long *)*param_2;
        uStack_420._0_7_ = (undefined7)param_2[0x1b];
        uStack_420._7_1_ = (undefined1)(param_2[0x1b] >> 0x38);
        lVar23 = *plVar30 + 0x798;
        uStack_418 = uStack_5f8;
        FUN_109d678e8(lVar23,(long)iVar28,0);
        FUN_109d94e24();
        uStack_418._0_4_ = (undefined4)lVar23;
        uStack_418._4_4_ = (undefined4)((ulong)lVar23 >> 0x20);
        uVar32 = *(long *)*param_2 + 0x798;
        FUN_109d678e8(uVar32,0,0);
        FUN_109d94e24();
        uStack_408 = param_2[0xe];
        pppppppuVar40 = pppppppuStack_600;
        if (-1 < (long)uStack_5f0._7_1_) {
          pppppppuVar40 = &pppppppuStack_600;
        }
        uVar11 = uStack_5f8;
        if (-1 < (long)uStack_5f0) {
          uVar11 = (long)uStack_5f0._7_1_;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        uStack_410 = (undefined8 ******)uVar32;
        FUN_109d956b4(plVar34,pppppppuVar40,uVar11);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_400 = lVar23 + 8;
        uStack_3f8 = param_2[0xf];
        pppppppuVar40 = pppppppuStack_480;
        if (-1 < (long)(char)bStack_469) {
          pppppppuVar40 = &pppppppuStack_480;
        }
        lVar23 = CONCAT17(uStack_471,uStack_478);
        if (-1 < (char)bStack_469) {
          lVar23 = (long)(char)bStack_469;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        FUN_109d956b4(plVar34,pppppppuVar40,lVar23);
        lStack_3f0 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lStack_3f0 + 0x10) = lStack_3f0;
        }
        lStack_3f0 = lStack_3f0 + 8;
        FUN_109d974c0(plVar30,&uStack_420,7,0,1);
        func_0x000109d33e60(&pcStack_310,plVar30);
        if ((long)uStack_5f0 < 0) {
          __ZdlPv(pppppppuStack_600);
        }
      }
      if ((char)bStack_469 < '\0') {
        __ZdlPv(pppppppuStack_480);
      }
      puVar35 = puVar35 + 7;
    } while (puVar35 != puVar26);
    if ((int)uStack_308 != 0) goto LAB_109f93aac;
  }
  plVar34 = (long *)*param_2;
  uStack_420._0_7_ = (undefined7)param_2[0x1b];
  uStack_420._7_1_ = (undefined1)(param_2[0x1b] >> 0x38);
  lVar23 = *plVar34 + 0x798;
  FUN_109d678e8(lVar23,0,0);
  FUN_109d94e24();
  uStack_418._0_4_ = (undefined4)lVar23;
  uStack_418._4_4_ = (undefined4)((ulong)lVar23 >> 0x20);
  uVar32 = *(long *)*param_2 + 0x798;
  FUN_109d678e8(uVar32,0,0);
  FUN_109d94e24();
  uStack_408 = param_2[0xe];
  uVar11 = 0;
  plVar30 = (long *)(*(long *)*param_2 + 0x108);
  uStack_410 = (undefined8 ******)uVar32;
  FUN_109d956b4(plVar30,&DAT_10f62adf6,6);
  lVar23 = *plVar30;
  if ((uVar11 & 1) != 0) {
    *(long *)(lVar23 + 0x10) = lVar23;
  }
  uStack_400 = lVar23 + 8;
  FUN_109d974c0(plVar34,&uStack_420,5,0,1);
  func_0x000109d33e60(&pcStack_310,plVar34);
LAB_109f93aac:
  uVar32 = *param_2;
  FUN_109d974c0(uVar32,pcStack_310,(int)uStack_308,0,1);
  uStack_420._0_7_ = SUB87(&uStack_410,0);
  uStack_420._7_1_ = (undefined1)((ulong)&uStack_410 >> 0x38);
  uStack_418._0_4_ = 0;
  uStack_418._4_4_ = 0x20;
  puVar15 = *(undefined8 **)(uVar24 + 0x8a8);
  puVar44 = *(undefined8 **)(uVar24 + 0x8b0);
  if (puVar15 == puVar44) {
    iVar31 = 0;
    puVar16 = puStack_510;
  }
  else {
    iVar31 = 0;
    do {
      uStack_490 = (undefined7)*puVar15;
      uStack_489 = (undefined1)((ulong)*puVar15 >> 0x38);
      lVar23 = uVar24 + 0x880;
      FUN_109faba88(lVar23,&uStack_490);
      if (lVar23 == 0) {
        func_0x000107c31940(&pppppppuStack_600,
                            *(undefined8 *)(CONCAT17(uStack_489,uStack_490) + 0x18));
      }
      else {
        uVar11 = *(ulong *)(lVar23 + 0x20);
        if (0x7ffffffffffffff7 < uVar11) {
          func_0x000104c4f6b8();
LAB_109f946d8:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109f946dc);
          (*pcVar7)();
        }
        uVar39 = *(undefined8 *)(lVar23 + 0x18);
        if (uVar11 < 0x17) {
          uStack_5f0 = (undefined8 ******)CONCAT17((char)uVar11,(undefined7)uStack_5f0);
          pppppppuVar18 = &pppppppuStack_600;
          if (uVar11 != 0) goto LAB_109f93b8c;
        }
        else {
          pppppppuVar40 = (undefined8 *******)0x19;
          if ((uVar11 | 7) != 0x17) {
            pppppppuVar40 = (undefined8 *******)((uVar11 | 7) + 1);
          }
          pppppppuVar18 = pppppppuVar40;
          __Znwm();
          uStack_5f0 = (undefined8 ******)((ulong)pppppppuVar40 | 0x8000000000000000);
          pppppppuStack_600 = pppppppuVar18;
          uStack_5f8 = uVar11;
LAB_109f93b8c:
          _memmove(pppppppuVar18,uVar39,uVar11);
        }
        *(undefined1 *)((long)pppppppuVar18 + uVar11) = 0;
      }
      func_0x000107c31940(&pppppppuStack_638,&UNK_10f62adea);
      __ZNSt3__19to_stringEj(&uStack_438,iVar31);
      uVar11 = CONCAT17(uStack_429,uStack_430);
      puVar6 = (undefined7 *)CONCAT17(uStack_431,uStack_438);
      if (-1 < (char)bStack_421) {
        uVar11 = (ulong)bStack_421;
        puVar6 = &uStack_438;
      }
      pppppppuVar40 = &pppppppuStack_638;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar40,puVar6,uVar11);
      pppppppuStack_480 = (undefined8 *******)*pppppppuVar40;
      uStack_470 = SUB87(pppppppuVar40[2],0);
      bStack_469 = (byte)((ulong)pppppppuVar40[2] >> 0x38);
      uStack_478 = SUB87(pppppppuVar40[1],0);
      uStack_471 = (undefined1)((ulong)pppppppuVar40[1] >> 0x38);
      pppppppuVar40[1] = (undefined8 ******)0x0;
      pppppppuVar40[2] = (undefined8 ******)0x0;
      *pppppppuVar40 = (undefined8 ******)0x0;
      pppppppuVar40 = &pppppppuStack_480;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar40,&DAT_10f684600,1);
      pppppppuStack_620 = (undefined8 *******)*pppppppuVar40;
      uStack_610 = SUB87(pppppppuVar40[2],0);
      bStack_609 = (byte)((ulong)pppppppuVar40[2] >> 0x38);
      uStack_618 = SUB87(pppppppuVar40[1],0);
      uStack_611 = (undefined1)((ulong)pppppppuVar40[1] >> 0x38);
      pppppppuVar40[1] = (undefined8 ******)0x0;
      pppppppuVar40[2] = (undefined8 ******)0x0;
      *pppppppuVar40 = (undefined8 ******)0x0;
      if ((char)bStack_469 < '\0') {
        __ZdlPv(pppppppuStack_480);
      }
      if ((char)bStack_421 < '\0') {
        __ZdlPv(CONCAT17(uStack_431,uStack_438));
      }
      if ((char)bStack_621 < '\0') {
        __ZdlPv(pppppppuStack_638);
      }
      FUN_109f9c150(&pppppppuStack_638,*(undefined8 *)(CONCAT17(uStack_489,uStack_490) + 0x10));
      bVar5 = *(byte *)(*(long *)(CONCAT17(uStack_489,uStack_490) + 0x10) + 4);
      if ((bVar5 < 0xc) && ((1 << (ulong)(bVar5 & 0x1f) & 0x803U) != 0)) {
        plVar30 = (long *)*param_2;
        pppppppuVar40 = (undefined8 *******)(*plVar30 + 0x798);
        FUN_109d678e8(pppppppuVar40,(long)iVar31,0);
        FUN_109d94e24();
        uStack_478 = (undefined7)param_2[0x1a];
        uStack_471 = (undefined1)(param_2[0x1a] >> 0x38);
        pppppppuVar18 = pppppppuStack_620;
        if (-1 < (long)(char)bStack_609) {
          pppppppuVar18 = &pppppppuStack_620;
        }
        lVar23 = CONCAT17(uStack_611,uStack_618);
        if (-1 < (char)bStack_609) {
          lVar23 = (long)(char)bStack_609;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        pppppppuStack_480 = pppppppuVar40;
        FUN_109d956b4(plVar34,pppppppuVar18,lVar23);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar18 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_468 = param_2[0x24];
        uStack_470 = (undefined7)(lVar23 + 8);
        bStack_469 = (byte)((ulong)(lVar23 + 8) >> 0x38);
        uStack_460 = param_2[0xe];
        pppppppuVar40 = pppppppuStack_638;
        if (-1 < (long)(char)bStack_621) {
          pppppppuVar40 = &pppppppuStack_638;
        }
        uVar11 = uStack_630;
        if (-1 < (char)bStack_621) {
          uVar11 = (long)(char)bStack_621;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        FUN_109d956b4(plVar34,pppppppuVar40,uVar11);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_458 = lVar23 + 8;
        uStack_450 = param_2[0xf];
        pppppppuVar40 = pppppppuStack_600;
        if (-1 < (long)uStack_5f0._7_1_) {
          pppppppuVar40 = &pppppppuStack_600;
        }
        uVar11 = uStack_5f8;
        if (-1 < (long)uStack_5f0) {
          uVar11 = (long)uStack_5f0._7_1_;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        FUN_109d956b4(plVar34,pppppppuVar40,uVar11);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_448 = lVar23 + 8;
        FUN_109d974c0(plVar30,&pppppppuStack_480,8,0,1);
        func_0x000109d33e60(&uStack_420,plVar30);
      }
      else {
        plVar30 = (long *)*param_2;
        pppppppuVar40 = (undefined8 *******)(*plVar30 + 0x798);
        FUN_109d678e8(pppppppuVar40,(long)iVar31,0);
        FUN_109d94e24();
        uStack_478 = (undefined7)param_2[0x1a];
        uStack_471 = (undefined1)(param_2[0x1a] >> 0x38);
        pppppppuVar18 = pppppppuStack_620;
        if (-1 < (long)(char)bStack_609) {
          pppppppuVar18 = &pppppppuStack_620;
        }
        lVar23 = CONCAT17(uStack_611,uStack_618);
        if (-1 < (char)bStack_609) {
          lVar23 = (long)(char)bStack_609;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        pppppppuStack_480 = pppppppuVar40;
        FUN_109d956b4(plVar34,pppppppuVar18,lVar23);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar18 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_460 = param_2[0x22];
        uStack_468 = param_2[0x21];
        uStack_458 = param_2[0xe];
        uStack_470 = (undefined7)(lVar23 + 8);
        bStack_469 = (byte)((ulong)(lVar23 + 8) >> 0x38);
        pppppppuVar40 = pppppppuStack_638;
        if (-1 < (long)(char)bStack_621) {
          pppppppuVar40 = &pppppppuStack_638;
        }
        uVar11 = uStack_630;
        if (-1 < (char)bStack_621) {
          uVar11 = (long)(char)bStack_621;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        FUN_109d956b4(plVar34,pppppppuVar40,uVar11);
        lVar23 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lVar23 + 0x10) = lVar23;
        }
        uStack_450 = lVar23 + 8;
        uStack_448 = param_2[0xf];
        pppppppuVar40 = pppppppuStack_600;
        if (-1 < (long)uStack_5f0._7_1_) {
          pppppppuVar40 = &pppppppuStack_600;
        }
        uVar11 = uStack_5f8;
        if (-1 < (long)uStack_5f0) {
          uVar11 = (long)uStack_5f0._7_1_;
        }
        plVar34 = (long *)(*(long *)*param_2 + 0x108);
        FUN_109d956b4(plVar34,pppppppuVar40,uVar11);
        lStack_440 = *plVar34;
        if (((ulong)pppppppuVar40 & 1) != 0) {
          *(long *)(lStack_440 + 0x10) = lStack_440;
        }
        lStack_440 = lStack_440 + 8;
        FUN_109d974c0(plVar30,&pppppppuStack_480,9,0,1);
        func_0x000109d33e60(&uStack_420,plVar30);
      }
      if ((char)bStack_621 < '\0') {
        __ZdlPv(pppppppuStack_638);
      }
      if ((char)bStack_609 < '\0') {
        __ZdlPv(pppppppuStack_620);
      }
      if ((long)uStack_5f0 < 0) {
        __ZdlPv(pppppppuStack_600);
      }
      puVar15 = puVar15 + 1;
      iVar31 = iVar31 + 1;
      puVar16 = puStack_510;
    } while (puVar15 != puVar44);
  }
  while (puVar16 != &uStack_508) {
    uVar22 = *(uint *)(puVar16 + 4);
    if ((*(ushort *)((long)ppppppuVar12 + 0x12) & 1) != 0) {
      FUN_109d85318(ppppppuVar12);
    }
    puVar35 = param_2;
    FUN_109f9c4d8(param_2,iVar31,*(undefined4 *)((long)puVar16 + 0x1c),
                  ppppppuVar12[0xb][(ulong)uVar22 * 5 + 1] == (undefined8 ****)0x0);
    func_0x000109d33e60(&uStack_420,puVar35);
    puVar15 = (undefined8 *)puVar16[1];
    if ((undefined8 *)puVar16[1] == (undefined8 *)0x0) {
      do {
        puVar44 = (undefined8 *)puVar16[2];
        bVar8 = (undefined8 *)*puVar44 != puVar16;
        puVar16 = puVar44;
      } while (bVar8);
    }
    else {
      do {
        puVar44 = puVar15;
        puVar15 = (undefined8 *)*puVar44;
      } while ((undefined8 *)*puVar44 != (undefined8 *)0x0);
    }
    iVar31 = iVar31 + 1;
    puVar16 = puVar44;
  }
  if (lVar29 != 0) {
    plVar34 = (long *)*param_2;
    pppppppuVar40 = (undefined8 *******)(*plVar34 + 0x798);
    FUN_109d678e8(pppppppuVar40,(long)iVar31,0);
    FUN_109d94e24();
    uStack_478 = (undefined7)param_2[0x20];
    uStack_471 = (undefined1)(param_2[0x20] >> 0x38);
    uStack_470 = (undefined7)param_2[0xe];
    bStack_469 = (byte)(param_2[0xe] >> 0x38);
    uVar24 = 0;
    plVar30 = (long *)(*(long *)*param_2 + 0x108);
    pppppppuStack_480 = pppppppuVar40;
    FUN_109d956b4(plVar30,"bool",4);
    lVar29 = *plVar30;
    if ((uVar24 & 1) != 0) {
      *(long *)(lVar29 + 0x10) = lVar29;
    }
    uStack_468 = lVar29 + 8;
    uStack_460 = param_2[0xf];
    puVar21 = &UNK_10f60d887;
    plVar30 = (long *)(*(long *)*param_2 + 0x108);
    FUN_109d956b4(plVar30,&UNK_10f60d887,0xe);
    lVar29 = *plVar30;
    if (((ulong)puVar21 & 1) != 0) {
      *(long *)(lVar29 + 0x10) = lVar29;
    }
    uStack_458 = lVar29 + 8;
    FUN_109d974c0(plVar34,&pppppppuStack_480,6,0,1);
    func_0x000109d33e60(&uStack_420,plVar34);
    iVar31 = iVar31 + 1;
  }
  if (lVar33 != 0) {
    plVar34 = (long *)*param_2;
    pppppppuVar40 = (undefined8 *******)(*plVar34 + 0x798);
    FUN_109d678e8(pppppppuVar40,(long)iVar31,0);
    FUN_109d94e24();
    uStack_478 = (undefined7)param_2[0x1c];
    uStack_471 = (undefined1)(param_2[0x1c] >> 0x38);
    uStack_468 = param_2[0x23];
    uStack_470 = (undefined7)param_2[0x21];
    bStack_469 = (byte)(param_2[0x21] >> 0x38);
    uStack_460 = param_2[0xe];
    uVar24 = 0;
    plVar30 = (long *)(*(long *)*param_2 + 0x108);
    pppppppuStack_480 = pppppppuVar40;
    FUN_109d956b4(plVar30,&DAT_10f62adf6,6);
    lVar29 = *plVar30;
    if ((uVar24 & 1) != 0) {
      *(long *)(lVar29 + 0x10) = lVar29;
    }
    uStack_458 = lVar29 + 8;
    uStack_450 = param_2[0xf];
    uVar24 = 0;
    plVar30 = (long *)(*(long *)*param_2 + 0x108);
    FUN_109d956b4(plVar30,&UNK_10f62bc68,0xc);
    lVar29 = *plVar30;
    if ((uVar24 & 1) != 0) {
      *(long *)(lVar29 + 0x10) = lVar29;
    }
    uStack_448 = lVar29 + 8;
    FUN_109d974c0(plVar34,&pppppppuStack_480,8,0,1);
    func_0x000109d33e60(&uStack_420,plVar34);
    iVar31 = iVar31 + 1;
  }
  if ((int)uStack_170 != 0) {
    lVar29 = (uStack_170 & 0xffffffff) << 4;
    plVar30 = plStack_178;
    do {
      pppppppuStack_600 = (undefined8 *******)0x0;
      uStack_5f8 = 0;
      uStack_5f0 = (undefined8 ******)0x0;
      pppppppuStack_620 = (undefined8 *******)0x0;
      uStack_618 = 0;
      uStack_611 = 0;
      uStack_610 = 0;
      bStack_609 = '\0';
      if (*(char *)(*(long *)(*plVar30 + 0x10) + 4) == '\x13') {
        FUN_109f9c150(&pppppppuStack_480,*(undefined8 *)(*(long *)(*plVar30 + 0x10) + 0x30));
        if ((long)uStack_5f0 < 0) {
          __ZdlPv(pppppppuStack_600);
        }
        uStack_5f8 = CONCAT17(uStack_471,uStack_478);
        pppppppuStack_600 = pppppppuStack_480;
        uStack_5f0 = (undefined8 ******)CONCAT17(bStack_469,uStack_470);
        func_0x000107c31940(&pppppppuStack_638,*(undefined8 *)(*plVar30 + 0x18));
        pppppppuVar40 = &pppppppuStack_638;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar40,"_",1);
        pppppppuStack_480 = (undefined8 *******)*pppppppuVar40;
        uStack_470 = SUB87(pppppppuVar40[2],0);
        bStack_469 = (byte)((ulong)pppppppuVar40[2] >> 0x38);
        uStack_478 = SUB87(pppppppuVar40[1],0);
        uStack_471 = (undefined1)((ulong)pppppppuVar40[1] >> 0x38);
        pppppppuVar40[1] = (undefined8 ******)0x0;
        pppppppuVar40[2] = (undefined8 ******)0x0;
        *pppppppuVar40 = (undefined8 ******)0x0;
        __ZNSt3__19to_stringEj(&uStack_438,*(undefined4 *)((long)plVar30 + 0xc));
        uVar24 = CONCAT17(uStack_429,uStack_430);
        puVar6 = (undefined7 *)CONCAT17(uStack_431,uStack_438);
        if (-1 < (char)bStack_421) {
          uVar24 = (ulong)bStack_421;
          puVar6 = &uStack_438;
        }
        pppppppuVar40 = &pppppppuStack_480;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar40,puVar6,uVar24);
        pppppppuVar18 = (undefined8 *******)*pppppppuVar40;
        uStack_490 = SUB87(pppppppuVar40[1],0);
        uStack_489 = (undefined1)*(undefined8 *)((long)pppppppuVar40 + 0xf);
        uStack_488 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar40 + 0xf) >> 8);
        bVar5 = *(byte *)((long)pppppppuVar40 + 0x17);
        pppppppuVar40[1] = (undefined8 ******)0x0;
        pppppppuVar40[2] = (undefined8 ******)0x0;
        *pppppppuVar40 = (undefined8 ******)0x0;
        if ((char)bStack_609 < '\0') {
          __ZdlPv(pppppppuStack_620);
        }
        uStack_618 = uStack_490;
        uStack_611 = uStack_489;
        uStack_610 = uStack_488;
        pppppppuStack_620 = pppppppuVar18;
        bStack_609 = bVar5;
        if ((char)bStack_421 < '\0') {
          __ZdlPv(CONCAT17(uStack_431,uStack_438));
        }
        if ((char)bStack_469 < '\0') {
          __ZdlPv(pppppppuStack_480);
        }
        if ((char)bStack_621 < '\0') {
          __ZdlPv(pppppppuStack_638);
        }
        uVar4 = *(uint *)(*plVar30 + 0x3c);
        uVar22 = uVar4 - 4;
        if (uVar4 < 4) {
          uVar22 = uVar4;
        }
        uVar49 = 0;
        if (uVar4 != 2) {
          uVar49 = uVar22;
        }
        uVar49 = uVar49 + *(int *)((long)plVar30 + 0xc);
      }
      else {
        FUN_109f9c150(&pppppppuStack_480);
        if ((long)uStack_5f0 < 0) {
          __ZdlPv(pppppppuStack_600);
        }
        uStack_5f8 = CONCAT17(uStack_471,uStack_478);
        pppppppuStack_600 = pppppppuStack_480;
        uStack_5f0 = (undefined8 ******)CONCAT17(bStack_469,uStack_470);
        func_0x000107c31940(&pppppppuStack_480,*(undefined8 *)(*plVar30 + 0x18));
        if ((char)bStack_609 < '\0') {
          __ZdlPv(pppppppuStack_620);
        }
        uStack_618 = uStack_478;
        uStack_611 = uStack_471;
        pppppppuStack_620 = pppppppuStack_480;
        uStack_610 = uStack_470;
        bStack_609 = bStack_469;
        uVar4 = *(uint *)(*plVar30 + 0x3c);
        uVar22 = uVar4 - 4;
        if (uVar4 < 4) {
          uVar22 = uVar4;
        }
        uVar49 = 0;
        if (uVar4 != 2) {
          uVar49 = uVar22;
        }
      }
      plVar34 = (long *)*param_2;
      pppppppuVar40 = (undefined8 *******)(*plVar34 + 0x798);
      FUN_109d678e8(pppppppuVar40,(long)iVar31,0);
      FUN_109d94e24();
      uStack_478 = (undefined7)param_2[0x1b];
      uStack_471 = (undefined1)(param_2[0x1b] >> 0x38);
      lVar33 = *(long *)*param_2 + 0x798;
      pppppppuStack_480 = pppppppuVar40;
      FUN_109d678e8(lVar33,(long)(int)uVar49,0);
      FUN_109d94e24();
      uStack_470 = (undefined7)lVar33;
      bStack_469 = (byte)((ulong)lVar33 >> 0x38);
      uVar24 = *(long *)*param_2 + 0x798;
      FUN_109d678e8(uVar24,1,0);
      FUN_109d94e24();
      uStack_460 = param_2[0xe];
      pppppppuVar40 = pppppppuStack_600;
      if (-1 < (long)uStack_5f0._7_1_) {
        pppppppuVar40 = &pppppppuStack_600;
      }
      uVar11 = uStack_5f8;
      if (-1 < (long)uStack_5f0) {
        uVar11 = (long)uStack_5f0._7_1_;
      }
      plVar25 = (long *)(*(long *)*param_2 + 0x108);
      uStack_468 = uVar24;
      FUN_109d956b4(plVar25,pppppppuVar40,uVar11);
      lVar33 = *plVar25;
      if (((ulong)pppppppuVar40 & 1) != 0) {
        *(long *)(lVar33 + 0x10) = lVar33;
      }
      uStack_458 = lVar33 + 8;
      uStack_450 = param_2[0xf];
      pppppppuVar40 = pppppppuStack_620;
      if (-1 < (long)(char)bStack_609) {
        pppppppuVar40 = &pppppppuStack_620;
      }
      lVar33 = CONCAT17(uStack_611,uStack_618);
      if (-1 < (char)bStack_609) {
        lVar33 = (long)(char)bStack_609;
      }
      plVar25 = (long *)(*(long *)*param_2 + 0x108);
      FUN_109d956b4(plVar25,pppppppuVar40,lVar33);
      lVar33 = *plVar25;
      if (((ulong)pppppppuVar40 & 1) != 0) {
        *(long *)(lVar33 + 0x10) = lVar33;
      }
      uStack_448 = lVar33 + 8;
      FUN_109d974c0(plVar34,&pppppppuStack_480,8,0,1);
      func_0x000109d33e60(&uStack_420,plVar34);
      if ((char)bStack_609 < '\0') {
        __ZdlPv(pppppppuStack_620);
      }
      if ((long)uStack_5f0 < 0) {
        __ZdlPv(pppppppuStack_600);
      }
      plVar30 = plVar30 + 2;
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + -0x10;
    } while (lVar29 != 0);
  }
  uVar24 = *param_2;
  FUN_109d974c0(uVar24,CONCAT17(uStack_420._7_1_,(undefined7)uStack_420),(undefined4)uStack_418,0,1)
  ;
  pppppppuVar40 = (undefined8 *******)*param_2;
  FUN_109d94e24();
  uStack_478 = (undefined7)uVar32;
  uStack_471 = (undefined1)(uVar32 >> 0x38);
  uStack_470 = (undefined7)uVar24;
  bStack_469 = (byte)(uVar24 >> 0x38);
  pppppppuStack_480 = (undefined8 *******)ppppppuVar12;
  FUN_109d974c0(pppppppuVar40,&pppppppuStack_480,3,0,1);
  puVar20 = puStack_650;
  FUN_109d9d608(puStack_650,&UNK_10f62bc75,0xc);
  pppppppuStack_480 = pppppppuVar40;
  FUN_109d9781c(*(undefined8 *)(puVar20 + 0x30),&pppppppuStack_480);
  *param_1 = puStack_650;
  *(undefined1 *)(param_1 + 5) = 1;
  if ((undefined8 *)CONCAT17(uStack_420._7_1_,(undefined7)uStack_420) != &uStack_410) {
    _free();
  }
  if (pcStack_310 != (char *)&uStack_300) {
    _free();
  }
  puStack_650 = (undefined1 *)0x0;
LAB_109f945ac:
  if (lStack_4c0 != 0) {
    lStack_4b8 = lStack_4c0;
    __ZdlPv();
  }
  FUN_109fadda8(&uStack_4f8);
  func_0x000109a093d0(&puStack_510,uStack_508);
  func_0x000109faddf0(uStack_520);
  func_0x000109f8eccc(&uStack_550);
  func_0x000109fade28(&uStack_588);
  func_0x000109fade70(&uStack_5b0);
  if (puStack_200 != auStack_1f0) {
    _free();
  }
  if (plStack_178 != alStack_168) {
    _free();
  }
  func_0x000109a093d0(&puStack_4a8,uStack_4a0);
  if (puStack_128 != auStack_118) {
    _free();
  }
  puVar20 = puStack_d8;
  if (puStack_d8 != auStack_c8) {
    _free();
  }
  if (puStack_650 != (undefined1 *)0x0) {
    puVar20 = puStack_650;
    FUN_109d9d1b8();
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    if (puStack_d8 != auStack_c8) {
      _free();
    }
    FUN_109d9d1b8(puStack_650);
    __ZdlPv();
    __Unwind_Resume();
    for (puVar43 = *(undefined1 **)(puVar20 + 0x20); puVar43 != puVar20 + 0x18;
        puVar43 = *(undefined1 **)(puVar43 + 8)) {
      plVar30 = (long *)(puVar43 + 0x38);
      if ((*plVar30 != 0) && ((*(byte *)(*plVar30 + 0x16) & 1) != 0)) {
        FUN_109d5b2ec(plVar30,**(undefined8 **)(puVar43 + -0x38),0xffffffff,0x50);
        *(long **)(puVar43 + 0x38) = plVar30;
      }
      for (puVar45 = *(undefined1 **)(puVar43 + 0x18); puVar45 != puVar43 + 0x10;
          puVar45 = *(undefined1 **)(puVar45 + 8)) {
        puVar2 = (undefined1 *)0x0;
        if (puVar45 != (undefined1 *)0x0) {
          puVar2 = puVar45 + -0x18;
        }
        for (puVar48 = *(undefined1 **)(puVar45 + 0x18); puVar48 != puVar2 + 0x28;
            puVar48 = *(undefined1 **)(puVar48 + 8)) {
          if ((puVar48 != (undefined1 *)0x0) && (puVar48[-8] == 'T')) {
            puVar15 = (undefined8 *)(puVar48 + -0x18);
            plVar30 = (long *)(puVar48 + 0x28);
            if (((*plVar30 != 0) && ((*(byte *)(*plVar30 + 0x16) & 1) != 0)) ||
               (puVar44 = puVar15, FUN_109d8b798(puVar15,0x50), (int)puVar44 != 0)) {
              plVar34 = plVar30;
              FUN_109d5b2ec(plVar30,*(undefined8 *)*puVar15,0xffffffff,0x50);
              *plVar30 = (long)plVar34;
            }
          }
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 109f949c8; end: 109f94acb;  */

void FUN_109f949c8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  for (lVar6 = *(long *)(param_1 + 0x20); lVar6 != param_1 + 0x18; lVar6 = *(long *)(lVar6 + 8)) {
    plVar2 = (long *)(lVar6 + 0x38);
    if ((*plVar2 != 0) && ((*(byte *)(*plVar2 + 0x16) & 1) != 0)) {
      FUN_109d5b2ec(plVar2,**(undefined8 **)(lVar6 + -0x38),0xffffffff,0x50);
      *(long **)(lVar6 + 0x38) = plVar2;
    }
    for (lVar7 = *(long *)(lVar6 + 0x18); lVar7 != lVar6 + 0x10; lVar7 = *(long *)(lVar7 + 8)) {
      lVar1 = 0;
      if (lVar7 != 0) {
        lVar1 = lVar7 + -0x18;
      }
      for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != lVar1 + 0x28; lVar8 = *(long *)(lVar8 + 8)) {
        if ((lVar8 != 0) && (*(char *)(lVar8 + -8) == 'T')) {
          puVar5 = (undefined8 *)(lVar8 + -0x18);
          plVar2 = (long *)(lVar8 + 0x28);
          if (((*plVar2 != 0) && ((*(byte *)(*plVar2 + 0x16) & 1) != 0)) ||
             (puVar3 = puVar5, FUN_109d8b798(puVar5,0x50), (int)puVar3 != 0)) {
            plVar4 = plVar2;
            FUN_109d5b2ec(plVar2,*(undefined8 *)*puVar5,0xffffffff,0x50);
            *plVar2 = (long)plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 109f94acc; end: 109f94feb;  */

void FUN_109f94acc(long ******param_1,long ******param_2,long ******param_3,long ******param_4,
                  ulong param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long ******pppppplVar3;
  long *****ppppplVar4;
  byte bVar5;
  code *pcVar6;
  long ****pppplVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long ******pppppplVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long ******unaff_x21;
  long ******pppppplVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long ******unaff_x22;
  long *****ppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long *****ppppplVar25;
  undefined **unaff_x24;
  long ****pppplVar26;
  long ******unaff_x25;
  long ******pppppplVar27;
  long ******unaff_x26;
  long ******pppppplVar28;
  long lVar29;
  long *****ppppplVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long ****pppplStack_7e8;
  long ****pppplStack_7e0;
  long ****pppplStack_7d8;
  long ****pppplStack_7d0;
  long *****ppppplStack_7c8;
  long ****pppplStack_7c0;
  long ****pppplStack_7b8;
  long ****pppplStack_7b0;
  undefined1 uStack_7a8;
  long lStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined1 auStack_780 [272];
  long lStack_670;
  long ****apppplStack_5e8 [4];
  undefined2 uStack_5c8;
  long *****appppplStack_5c0 [2];
  long ****apppplStack_5b0 [15];
  long *****ppppplStack_538;
  undefined8 uStack_530;
  long ****apppplStack_528 [32];
  long lStack_428;
  long *****ppppplStack_420;
  long *****ppppplStack_418;
  undefined **ppuStack_410;
  long *****ppppplStack_408;
  long *****ppppplStack_400;
  long *****ppppplStack_3f8;
  long *****ppppplStack_3f0;
  long *****ppppplStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  long *****ppppplStack_3d0;
  long *****ppppplStack_3c8;
  long *****ppppplStack_3c0;
  undefined1 auStack_3b8 [32];
  undefined2 uStack_398;
  long *****ppppplStack_390;
  ulong uStack_388;
  byte bStack_379;
  long *****appppplStack_378 [2];
  long ****pppplStack_368;
  undefined8 uStack_360;
  undefined2 uStack_358;
  long *****ppppplStack_2f0;
  ulong uStack_2e8;
  long ****pppplStack_2e0;
  undefined *puStack_2d8;
  undefined2 uStack_2d0;
  long *****ppppplStack_2c0;
  ulong uStack_2b8;
  long ****apppplStack_2b0 [2];
  undefined2 uStack_2a0;
  long *****ppppplStack_290;
  ulong uStack_288;
  long ****apppplStack_280 [64];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_290 = apppplStack_280;
  uStack_288 = 0x4000000000;
  ppppplStack_3c0 = (long *****)(param_1 + 3);
  pppppplVar23 = (long ******)param_1[4];
  pppppplVar28 = (long ******)ppppplStack_290;
  ppppplStack_3c8 = (long *****)param_1;
  if (pppppplVar23 != (long ******)ppppplStack_3c0) {
    do {
      ppppplStack_3d0 = (long *****)pppppplVar28;
      pppppplVar28 = (long ******)0x0;
      if (pppppplVar23 != (long ******)0x0) {
        pppppplVar28 = pppppplVar23 + -7;
      }
      unaff_x26 = pppppplVar28 + 9;
      for (pppppplVar28 = (long ******)pppppplVar23[3]; pppppplVar28 != unaff_x26;
          pppppplVar28 = (long ******)pppppplVar28[1]) {
        pppppplVar19 = (long ******)0x0;
        if (pppppplVar28 != (long ******)0x0) {
          pppppplVar19 = pppppplVar28 + -3;
        }
        for (pppppplVar16 = (long ******)pppppplVar28[3]; pppppplVar16 != pppppplVar19 + 5;
            pppppplVar16 = (long ******)pppppplVar16[1]) {
          if (((((pppppplVar16 != (long ******)0x0) && (*(char *)(pppppplVar16 + -1) == 'T')) &&
               (param_1 = (long ******)pppppplVar16[-7], param_1 != (long ******)0x0)) &&
              ((*(char *)(param_1 + 2) == '\0' && (param_1[3] == pppppplVar16[6])))) &&
             ((*(byte *)((long)param_1 + 0x21) >> 5 & 1) != 0)) {
            if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) == 0) {
              unaff_x22 = (long ******)0x0;
              pppppplVar24 = (long ******)&UNK_10f5fa524;
            }
            else {
              func_0x000109da271c();
              pppppplVar24 = param_1 + 2;
              unaff_x22 = (long ******)*param_1;
            }
            unaff_x21 = pppppplVar16 + -3;
            unaff_x25 = (long ******)&UNK_110b965e0;
            unaff_x24 = (undefined **)0x230;
            do {
              param_3 = (long ******)*unaff_x25;
              if (param_3 <= unaff_x22) {
                if (param_3 != (long ******)0x0) {
                  param_2 = (long ******)unaff_x25[-1];
                  param_1 = pppppplVar24;
                  _memcmp();
                  if ((int)param_1 != 0) goto LAB_109f94bf4;
                }
                param_1 = &ppppplStack_290;
                param_2 = unaff_x21;
                func_0x000109d3757c();
                break;
              }
LAB_109f94bf4:
              unaff_x25 = unaff_x25 + 5;
              unaff_x24 = unaff_x24 + -5;
            } while (unaff_x24 != (undefined **)0x0);
          }
        }
      }
      pppppplVar23 = (long ******)pppppplVar23[1];
      pppppplVar28 = (long ******)ppppplStack_3d0;
    } while (pppppplVar23 != (long ******)ppppplStack_3c0);
    if ((int)uStack_288 != 0) {
      pppppplVar19 = (long ******)(ppppplStack_290 + (uStack_288 & 0xffffffff));
      unaff_x25 = (long ******)apppplStack_2b0;
      unaff_x26 = (long ******)&pppplStack_2e0;
      ppppplStack_3c0 = &pppplStack_368;
      unaff_x24 = &PTR_DAT_110b965e8;
      pppppplVar28 = (long ******)ppppplStack_290;
      do {
        unaff_x21 = (long ******)*pppppplVar28;
        param_1 = (long ******)unaff_x21[-4];
        if (((param_1 == (long ******)0x0) || (*(char *)(param_1 + 2) != '\0')) ||
           (param_1[3] != unaff_x21[9])) {
          param_1 = (long ******)0x0;
        }
        if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) == 0) {
          pppppplVar23 = (long ******)0x0;
          unaff_x22 = (long ******)&UNK_10f5fa524;
        }
        else {
          func_0x000109da271c();
          unaff_x22 = param_1 + 2;
          pppppplVar23 = (long ******)*param_1;
        }
        lVar29 = 0x230;
        ppuVar17 = unaff_x24;
LAB_109f94cc0:
        param_3 = (long ******)ppuVar17[-1];
        if (pppppplVar23 < param_3) goto LAB_109f94ce0;
        if (param_3 != (long ******)0x0) {
          param_2 = (long ******)ppuVar17[-2];
          param_1 = unaff_x22;
          _memcmp();
          if ((int)param_1 != 0) goto LAB_109f94ce0;
        }
        ppppplVar20 = *unaff_x21;
        uStack_2d0 = 0x503;
        pppplStack_2e0 = (long ****)*ppuVar17;
        puStack_2d8 = ppuVar17[1];
        ppppplStack_2f0 = (long *****)&UNK_10f62b473;
        ppppplStack_2c0 = (long *****)&ppppplStack_2f0;
        apppplStack_2b0[0] = (long ****)&DAT_10f62a9de;
        uStack_2a0 = 0x302;
        if (ppppplVar20 == (long *****)0x0) {
          uStack_360 = 3;
          pppplStack_368 = (long ****)&UNK_10f62b4a0;
        }
        else {
          uStack_360 = 3;
          pppplStack_368 = (long ****)&UNK_10f62b4a0;
          if (*(char *)(ppppplVar20 + 1) == '\x12') {
            if (*(int *)(ppppplVar20 + 4) - 2U < 3) {
              pppplStack_368 = (long ****)(&PTR_DAT_110b96820)[*(int *)(ppppplVar20 + 4) - 2U];
              uStack_360 = 5;
            }
            else {
              uStack_360 = 3;
            }
          }
        }
        appppplStack_378[0] = (long *****)&ppppplStack_2c0;
        uStack_358 = 0x502;
        FUN_109e04498(&ppppplStack_390,appppplStack_378);
        uStack_2b8 = 0x400000000;
        uStack_2e8 = 0x400000000;
        uVar13 = (ulong)*(uint *)(ppuVar17 + 2);
        pppppplVar23 = unaff_x21;
        ppppplStack_2f0 = (long *****)unaff_x26;
        ppppplStack_2c0 = (long *****)unaff_x25;
        if (*(uint *)(ppuVar17 + 2) == 0) {
          uVar13 = 0;
        }
        else {
          do {
            func_0x000109d30100(&ppppplStack_2f0,
                                pppppplVar23
                                [((ulong)*(uint *)((long)unaff_x21 + 0x14) & 0x7ffffff) * -4]);
            func_0x000109d33d14(&ppppplStack_2c0,
                                *pppppplVar23
                                 [((ulong)*(uint *)((long)unaff_x21 + 0x14) & 0x7ffffff) * -4]);
            pppppplVar23 = pppppplVar23 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          uVar13 = uStack_2b8 & 0xffffffff;
        }
        bVar5 = bStack_379;
        uVar15 = uStack_388;
        pppppplVar23 = (long ******)ppppplStack_390;
        uVar18 = (ulong)bStack_379;
        FUN_109d9f92c(ppppplVar20,ppppplStack_2c0,uVar13,0);
        if (-1 < (char)bVar5) {
          pppppplVar23 = &ppppplStack_390;
          uVar15 = uVar18;
        }
        unaff_x22 = (long ******)ppppplStack_3c8;
        FUN_109d9d3e8(ppppplStack_3c8,pppppplVar23,uVar15,ppppplVar20,0);
        FUN_109fadf90(appppplStack_378,unaff_x21);
        param_5 = uStack_2e8 & 0xffffffff;
        uStack_398 = 0x101;
        pppppplVar16 = appppplStack_378;
        param_6 = auStack_3b8;
        param_7 = 0;
        param_4 = (long ******)ppppplStack_2f0;
        FUN_109d5ce48(pppppplVar16,unaff_x22,pppppplVar23);
        *(ushort *)((long)pppppplVar16 + 0x12) = *(ushort *)((long)pppppplVar16 + 0x12) & 0xfffc | 1
        ;
        param_3 = (long ******)0x1;
        FUN_109da2b44(unaff_x21);
        param_2 = unaff_x21 + 3;
        FUN_109d5db38(unaff_x21[5] + 5);
        if (appppplStack_378[0] != ppppplStack_3c0) {
          _free();
        }
        if ((long ******)ppppplStack_2f0 != unaff_x26) {
          _free();
        }
        param_1 = (long ******)ppppplStack_2c0;
        if ((long ******)ppppplStack_2c0 != unaff_x25) {
          _free();
        }
        if ((char)bStack_379 < '\0') {
          param_1 = (long ******)ppppplStack_390;
          __ZdlPv();
        }
LAB_109f94ef8:
        pppppplVar28 = pppppplVar28 + 1;
        if (pppppplVar28 == pppppplVar19) break;
      } while( true );
    }
    if (ppppplStack_290 != ppppplStack_3d0) {
      param_1 = (long ******)ppppplStack_290;
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar20 = ppppplStack_3d0;
  if (ppppplStack_290 != ppppplStack_3d0) {
    _free();
  }
  pppppplVar28 = param_1;
  __Unwind_Resume();
  uVar8 = SUB81(param_3,0);
  uVar9 = (undefined4)param_5;
  uVar10 = SUB84(param_6,0);
  ppppplStack_420 = (long *****)unaff_x26;
  ppppplStack_418 = (long *****)unaff_x25;
  ppuStack_410 = unaff_x24;
  ppppplStack_408 = (long *****)pppppplVar23;
  ppppplStack_400 = (long *****)unaff_x22;
  ppppplStack_3f8 = (long *****)unaff_x21;
  ppppplStack_3f0 = ppppplVar20;
  ppppplStack_3e8 = (long *****)param_1;
  puStack_3e0 = &stack0xfffffffffffffff0;
  pcStack_3d8 = FUN_109f94fec;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_538 = apppplStack_528;
  uStack_530 = 0x2000000000;
  pppppplVar23 = pppppplVar28 + 3;
  pppppplVar19 = (long ******)pppppplVar28[4];
  if (pppppplVar19 != pppppplVar23) {
    uVar11 = 0;
    do {
      pppppplVar16 = (long ******)0x0;
      if (pppppplVar19 != (long ******)0x0) {
        pppppplVar16 = pppppplVar19 + -7;
      }
      pppppplVar24 = (long ******)pppppplVar19[3];
      while( true ) {
        uVar8 = SUB81(param_3,0);
        uVar9 = (undefined4)param_5;
        uVar10 = SUB84(param_6,0);
        if (pppppplVar24 == pppppplVar16 + 9) break;
        pppppplVar3 = (long ******)0x0;
        if (pppppplVar24 != (long ******)0x0) {
          pppppplVar3 = pppppplVar24 + -3;
        }
        for (pppppplVar27 = (long ******)pppppplVar24[3]; pppppplVar27 != pppppplVar3 + 5;
            pppppplVar27 = (long ******)pppppplVar27[1]) {
          if (*(char *)(pppppplVar27 + -1) == '(') {
            if (uStack_530._4_4_ <= uVar11) {
              pppppplVar28 = &ppppplStack_538;
              param_3 = (long ******)((ulong)uVar11 + 1);
              param_4 = (long ******)0x8;
              param_2 = (long ******)apppplStack_528;
              func_0x000107c2b01c();
              uVar11 = (uint)uStack_530;
            }
            ppppplStack_538[uVar11] = (long ****)(pppppplVar27 + -3);
            uVar11 = (uint)uStack_530 + 1;
            uStack_530 = CONCAT44(uStack_530._4_4_,uVar11);
          }
        }
        pppppplVar24 = (long ******)pppppplVar24[1];
      }
      pppppplVar19 = (long ******)pppppplVar19[1];
    } while (pppppplVar19 != pppppplVar23);
    if (uVar11 != 0) {
      lVar29 = (ulong)uVar11 << 3;
      pppppplVar23 = (long ******)ppppplStack_538;
      do {
        ppppplVar20 = *pppppplVar23;
        FUN_109fadf90(appppplStack_5c0,ppppplVar20);
        pppplVar7 = *ppppplVar20;
        FUN_109d67c18(pppplVar7,1);
        uStack_5c8 = 0x101;
        pppppplVar28 = appppplStack_5c0;
        param_4 = (long ******)apppplStack_5e8;
        uVar9 = 0;
        func_0x000109d5c858(pppppplVar28,pppplVar7,ppppplVar20[-4]);
        uVar8 = 1;
        FUN_109da2b44(ppppplVar20,pppppplVar28);
        param_2 = (long ******)(ppppplVar20 + 3);
        FUN_109d5db38(ppppplVar20[5] + 5);
        pppppplVar28 = (long ******)appppplStack_5c0[0];
        if (appppplStack_5c0[0] != apppplStack_5b0) {
          _free();
        }
        uVar10 = SUB84(param_6,0);
        pppppplVar23 = pppppplVar23 + 1;
        lVar29 = lVar29 + -8;
      } while (lVar29 != 0);
    }
    if (ppppplStack_538 != apppplStack_528) {
      pppppplVar28 = (long ******)ppppplStack_538;
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  if (ppppplStack_538 != apppplStack_528) {
    _free();
  }
  __Unwind_Resume();
  lStack_670 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&pppplStack_7c0,*param_2,param_2[1]);
  }
  else {
    pppplStack_7b8 = (long ****)param_2[1];
    pppplStack_7c0 = (long ****)*param_2;
    pppplStack_7b0 = (long ****)param_2[2];
  }
  lStack_798 = 0;
  uStack_790 = 0;
  lStack_7a0 = 0;
  uStack_7a8 = uVar8;
  func_0x0001092bfde0(&lStack_7a0,*param_4,param_4[1],(long)param_4[1] - (long)*param_4);
  uStack_788 = uVar9;
  uStack_784 = uVar10;
  FUN_109fae820(auStack_780,param_7);
  ppppplVar20 = pppppplVar28[2];
  if (ppppplVar20 < pppppplVar28[3]) {
    FUN_109fae07c(ppppplVar20,&pppplStack_7c0);
    ppppplVar20 = ppppplVar20 + 0x2a;
    pppppplVar28[2] = ppppplVar20;
LAB_109f95564:
    pppppplVar28[2] = ppppplVar20;
    FUN_109fae7ac(auStack_780);
    if (lStack_7a0 != 0) {
      lStack_798 = lStack_7a0;
      __ZdlPv();
    }
    if ((long)pppplStack_7b0 < 0) {
      __ZdlPv(pppplStack_7c0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_670) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppppplVar23 = pppppplVar28 + 1;
    lVar29 = (long)ppppplVar20 - (long)*pppppplVar23;
    uVar13 = (lVar29 >> 4) * -0x30c30c30c30c30c3 + 1;
    if (uVar13 < 0xc30c30c30c30c4) {
      lVar12 = (long)pppppplVar28[3] - (long)*pppppplVar23 >> 4;
      uVar15 = lVar12 * -0x6186186186186186;
      if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
        uVar15 = uVar13;
      }
      if (0x61861861861860 < (ulong)(lVar12 * -0x30c30c30c30c30c3)) {
        uVar15 = 0xc30c30c30c30c3;
      }
      ppppplStack_7c8 = (long *****)pppppplVar23;
      if (uVar15 == 0) {
        pppplVar7 = (long ****)0x0;
      }
      else {
        if (0xc30c30c30c30c3 < uVar15) {
          func_0x000104c4f740();
          goto LAB_109f95680;
        }
        pppplVar7 = (long ****)(uVar15 * 0x150);
        __Znwm();
      }
      lVar29 = (long)pppplVar7 + lVar29;
      pppplStack_7e8 = pppplVar7;
      pppplStack_7e0 = (long ****)lVar29;
      pppplStack_7d8 = (long ****)lVar29;
      pppplStack_7d0 = pppplVar7 + uVar15 * 0x2a;
      FUN_109fae07c(lVar29,&pppplStack_7c0);
      ppppplVar30 = pppppplVar28[1];
      ppppplVar4 = pppppplVar28[2];
      ppppplVar14 = (long *****)(lVar29 - ((long)ppppplVar4 - (long)ppppplVar30));
      pppplStack_7d8 = (long ****)(lVar29 + 0x150);
      ppppplVar21 = ppppplVar14;
      ppppplVar20 = (long *****)pppplStack_7d8;
      ppppplVar22 = ppppplVar30;
      ppppplVar25 = (long *****)(pppplVar7 + uVar15 * 0x2a);
      if (ppppplVar4 != ppppplVar30) {
        do {
          if (*(char *)((long)ppppplVar22 + 0x17) < '\0') {
            func_0x000107c3192c(ppppplVar21,*ppppplVar22,ppppplVar22[1]);
          }
          else {
            pppplVar26 = ppppplVar22[1];
            pppplVar7 = *ppppplVar22;
            ppppplVar21[2] = ppppplVar22[2];
            ppppplVar21[1] = pppplVar26;
            *ppppplVar21 = pppplVar7;
          }
          uVar8 = *(undefined1 *)(ppppplVar22 + 3);
          ppppplVar21[4] = (long ****)0x0;
          *(undefined1 *)(ppppplVar21 + 3) = uVar8;
          ppppplVar21[5] = (long ****)0x0;
          ppppplVar21[6] = (long ****)0x0;
          func_0x0001092bfde0(ppppplVar21 + 4,ppppplVar22[4],ppppplVar22[5],
                              (long)ppppplVar22[5] - (long)ppppplVar22[4]);
          ppppplVar21[7] = ppppplVar22[7];
          ppppplVar20 = ppppplVar21 + 10;
          ppppplVar25 = ppppplVar21 + 8;
          *ppppplVar25 = (long ****)ppppplVar20;
          ppppplVar21[9] = (long ****)0x800000000;
          if (ppppplVar21 != ppppplVar22) {
            uVar11 = *(uint *)(ppppplVar22 + 9);
            if (uVar11 != 0) {
              if (uVar11 < 9) {
                pppplVar26 = ppppplVar22[8];
                pppplVar7 = pppplVar26 + (ulong)uVar11 * 4;
LAB_109f954ac:
                lVar29 = 0;
                do {
                  puVar1 = (undefined8 *)((long)ppppplVar20 + lVar29);
                  puVar2 = (undefined8 *)((long)pppplVar26 + lVar29);
                  if (*(char *)((long)puVar2 + 0x17) < '\0') {
                    func_0x000107c3192c(puVar1,*puVar2,puVar2[1]);
                  }
                  else {
                    uVar32 = puVar2[1];
                    uVar31 = *puVar2;
                    puVar1[2] = puVar2[2];
                    puVar1[1] = uVar32;
                    *puVar1 = uVar31;
                  }
                  *(undefined2 *)((long)ppppplVar20 + lVar29 + 0x18) =
                       *(undefined2 *)((long)pppplVar26 + lVar29 + 0x18);
                  lVar29 = lVar29 + 0x20;
                } while ((long ****)((long)pppplVar26 + lVar29) != pppplVar7);
              }
              else {
                FUN_109fae138(ppppplVar25);
                FUN_109fae198(ppppplVar25,(ulong)uVar11);
                if (*(uint *)(ppppplVar22 + 9) != 0) {
                  ppppplVar20 = (long *****)*ppppplVar25;
                  pppplVar26 = ppppplVar22[8];
                  pppplVar7 = pppplVar26 + (ulong)*(uint *)(ppppplVar22 + 9) * 4;
                  goto LAB_109f954ac;
                }
              }
              *(uint *)(ppppplVar21 + 9) = uVar11;
            }
          }
          ppppplVar22 = ppppplVar22 + 0x2a;
          ppppplVar21 = ppppplVar21 + 0x2a;
        } while (ppppplVar22 != ppppplVar4);
        do {
          FUN_109fae280(ppppplVar30);
          ppppplVar30 = ppppplVar30 + 0x2a;
        } while (ppppplVar30 != ppppplVar4);
        ppppplVar30 = *pppppplVar23;
        ppppplVar20 = (long *****)pppplStack_7d8;
        ppppplVar25 = (long *****)pppplStack_7d0;
      }
      pppppplVar28[1] = ppppplVar14;
      pppppplVar28[2] = ppppplVar20;
      pppplStack_7d0 = (long ****)pppppplVar28[3];
      pppppplVar28[3] = ppppplVar25;
      pppplStack_7e8 = (long ****)ppppplVar30;
      pppplStack_7e0 = (long ****)ppppplVar30;
      pppplStack_7d8 = (long ****)ppppplVar30;
      func_0x000109fae2cc(&pppplStack_7e8);
      goto LAB_109f95564;
    }
  }
  FUN_109fae124();
LAB_109f95680:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f95684);
  (*pcVar6)();
LAB_109f94ce0:
  ppuVar17 = ppuVar17 + 5;
  lVar29 = lVar29 + -0x28;
  if (lVar29 == 0) goto LAB_109f94ef8;
  goto LAB_109f94cc0;
}



/* Entry: 109f94fec; end: 109f951ff;  */

void FUN_109f94fec(undefined8 ******param_1,undefined8 ******param_2,long param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ******ppppppuVar21;
  long lVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ******ppppppuVar25;
  undefined8 *****pppppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 ****ppppuStack_418;
  undefined8 ****ppppuStack_410;
  undefined8 ****ppppuStack_408;
  undefined8 ****ppppuStack_400;
  undefined8 *****pppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 ****ppppuStack_3e8;
  undefined8 ****ppppuStack_3e0;
  undefined1 uStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined1 auStack_3b0 [272];
  long lStack_2a0;
  long alStack_218 [4];
  undefined2 uStack_1f8;
  undefined8 *****apppppuStack_1f0 [2];
  undefined8 ****appppuStack_1e0 [15];
  undefined8 *****pppppuStack_168;
  undefined8 uStack_160;
  undefined8 ****appppuStack_158 [32];
  long lStack_58;
  
  uVar8 = (undefined1)param_3;
  uVar9 = (undefined4)param_5;
  uVar10 = (undefined4)param_6;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = 0x2000000000;
  ppppppuVar16 = param_1 + 3;
  ppppppuVar17 = (undefined8 ******)param_1[4];
  pppppuStack_168 = appppuStack_158;
  if (ppppppuVar17 != ppppppuVar16) {
    uVar11 = 0;
    do {
      ppppppuVar3 = (undefined8 ******)0x0;
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        ppppppuVar3 = ppppppuVar17 + -7;
      }
      ppppppuVar21 = (undefined8 ******)ppppppuVar17[3];
      while( true ) {
        uVar8 = (undefined1)param_3;
        uVar9 = (undefined4)param_5;
        uVar10 = (undefined4)param_6;
        if (ppppppuVar21 == ppppppuVar3 + 9) break;
        ppppppuVar4 = (undefined8 ******)0x0;
        if (ppppppuVar21 != (undefined8 ******)0x0) {
          ppppppuVar4 = ppppppuVar21 + -3;
        }
        for (ppppppuVar25 = (undefined8 ******)ppppppuVar21[3]; ppppppuVar25 != ppppppuVar4 + 5;
            ppppppuVar25 = (undefined8 ******)ppppppuVar25[1]) {
          if (*(char *)(ppppppuVar25 + -1) == '(') {
            if (uStack_160._4_4_ <= uVar11) {
              param_1 = &pppppuStack_168;
              param_3 = (ulong)uVar11 + 1;
              param_4 = (long *)0x8;
              param_2 = (undefined8 ******)appppuStack_158;
              func_0x000107c2b01c();
              uVar11 = (uint)uStack_160;
            }
            pppppuStack_168[uVar11] = ppppppuVar25 + -3;
            uVar11 = (uint)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar11);
          }
        }
        ppppppuVar21 = (undefined8 ******)ppppppuVar21[1];
      }
      ppppppuVar17 = (undefined8 ******)ppppppuVar17[1];
    } while (ppppppuVar17 != ppppppuVar16);
    if (uVar11 != 0) {
      lVar22 = (ulong)uVar11 << 3;
      ppppppuVar16 = (undefined8 ******)pppppuStack_168;
      do {
        pppppuVar18 = *ppppppuVar16;
        FUN_109fadf90(apppppuStack_1f0,pppppuVar18);
        ppppuVar7 = *pppppuVar18;
        FUN_109d67c18(ppppuVar7,1);
        uStack_1f8 = 0x101;
        ppppppuVar17 = apppppuStack_1f0;
        param_4 = alStack_218;
        uVar9 = 0;
        func_0x000109d5c858(ppppppuVar17,ppppuVar7,pppppuVar18[-4]);
        uVar8 = 1;
        FUN_109da2b44(pppppuVar18,ppppppuVar17);
        param_2 = (undefined8 ******)(pppppuVar18 + 3);
        FUN_109d5db38(pppppuVar18[5] + 5);
        param_1 = (undefined8 ******)apppppuStack_1f0[0];
        if (apppppuStack_1f0[0] != appppuStack_1e0) {
          _free();
        }
        uVar10 = (undefined4)param_6;
        ppppppuVar16 = ppppppuVar16 + 1;
        lVar22 = lVar22 + -8;
      } while (lVar22 != 0);
    }
    if (pppppuStack_168 != appppuStack_158) {
      param_1 = (undefined8 ******)pppppuStack_168;
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (pppppuStack_168 != appppuStack_158) {
    _free();
  }
  __Unwind_Resume();
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppuStack_3f0,*param_2,param_2[1]);
  }
  else {
    ppppuStack_3e8 = param_2[1];
    ppppuStack_3f0 = *param_2;
    ppppuStack_3e0 = param_2[2];
  }
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  lStack_3d0 = 0;
  uStack_3d8 = uVar8;
  func_0x0001092bfde0(&lStack_3d0,*param_4,param_4[1],param_4[1] - *param_4);
  uStack_3b8 = uVar9;
  uStack_3b4 = uVar10;
  FUN_109fae820(auStack_3b0,param_7);
  pppppuVar18 = param_1[2];
  if (pppppuVar18 < param_1[3]) {
    FUN_109fae07c(pppppuVar18,&ppppuStack_3f0);
    pppppuVar18 = pppppuVar18 + 0x2a;
    param_1[2] = pppppuVar18;
LAB_109f95564:
    param_1[2] = pppppuVar18;
    FUN_109fae7ac(auStack_3b0);
    if (lStack_3d0 != 0) {
      lStack_3c8 = lStack_3d0;
      __ZdlPv();
    }
    if ((long)ppppuStack_3e0 < 0) {
      __ZdlPv(ppppuStack_3f0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppppppuVar16 = param_1 + 1;
    lVar22 = (long)pppppuVar18 - (long)*ppppppuVar16;
    uVar13 = (lVar22 >> 4) * -0x30c30c30c30c30c3 + 1;
    if (uVar13 < 0xc30c30c30c30c4) {
      lVar12 = (long)param_1[3] - (long)*ppppppuVar16 >> 4;
      uVar15 = lVar12 * -0x6186186186186186;
      if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
        uVar15 = uVar13;
      }
      if (0x61861861861860 < (ulong)(lVar12 * -0x30c30c30c30c30c3)) {
        uVar15 = 0xc30c30c30c30c3;
      }
      pppppuStack_3f8 = ppppppuVar16;
      if (uVar15 == 0) {
        ppppuVar7 = (undefined8 ****)0x0;
      }
      else {
        if (0xc30c30c30c30c3 < uVar15) {
          func_0x000104c4f740();
          goto LAB_109f95680;
        }
        ppppuVar7 = (undefined8 ****)(uVar15 * 0x150);
        __Znwm();
      }
      lVar22 = (long)ppppuVar7 + lVar22;
      ppppuStack_418 = ppppuVar7;
      ppppuStack_410 = (undefined8 ****)lVar22;
      ppppuStack_408 = (undefined8 ****)lVar22;
      ppppuStack_400 = ppppuVar7 + uVar15 * 0x2a;
      FUN_109fae07c(lVar22,&ppppuStack_3f0);
      pppppuVar26 = param_1[1];
      pppppuVar5 = param_1[2];
      pppppuVar14 = (undefined8 *****)(lVar22 - ((long)pppppuVar5 - (long)pppppuVar26));
      ppppuStack_408 = (undefined8 ****)(lVar22 + 0x150);
      pppppuVar19 = pppppuVar14;
      pppppuVar18 = (undefined8 *****)ppppuStack_408;
      pppppuVar20 = pppppuVar26;
      pppppuVar23 = (undefined8 *****)(ppppuVar7 + uVar15 * 0x2a);
      if (pppppuVar5 != pppppuVar26) {
        do {
          if (*(char *)((long)pppppuVar20 + 0x17) < '\0') {
            func_0x000107c3192c(pppppuVar19,*pppppuVar20,pppppuVar20[1]);
          }
          else {
            ppppuVar24 = pppppuVar20[1];
            ppppuVar7 = *pppppuVar20;
            pppppuVar19[2] = pppppuVar20[2];
            pppppuVar19[1] = ppppuVar24;
            *pppppuVar19 = ppppuVar7;
          }
          uVar8 = *(undefined1 *)(pppppuVar20 + 3);
          pppppuVar19[4] = (undefined8 ****)0x0;
          *(undefined1 *)(pppppuVar19 + 3) = uVar8;
          pppppuVar19[5] = (undefined8 ****)0x0;
          pppppuVar19[6] = (undefined8 ****)0x0;
          func_0x0001092bfde0(pppppuVar19 + 4,pppppuVar20[4],pppppuVar20[5],
                              (long)pppppuVar20[5] - (long)pppppuVar20[4]);
          pppppuVar19[7] = pppppuVar20[7];
          pppppuVar18 = pppppuVar19 + 10;
          pppppuVar23 = pppppuVar19 + 8;
          *pppppuVar23 = pppppuVar18;
          pppppuVar19[9] = (undefined8 ****)0x800000000;
          if (pppppuVar19 != pppppuVar20) {
            uVar11 = *(uint *)(pppppuVar20 + 9);
            if (uVar11 != 0) {
              if (uVar11 < 9) {
                ppppuVar24 = pppppuVar20[8];
                ppppuVar7 = ppppuVar24 + (ulong)uVar11 * 4;
LAB_109f954ac:
                lVar22 = 0;
                do {
                  puVar1 = (undefined8 *)((long)pppppuVar18 + lVar22);
                  puVar2 = (undefined8 *)((long)ppppuVar24 + lVar22);
                  if (*(char *)((long)puVar2 + 0x17) < '\0') {
                    func_0x000107c3192c(puVar1,*puVar2,puVar2[1]);
                  }
                  else {
                    uVar28 = puVar2[1];
                    uVar27 = *puVar2;
                    puVar1[2] = puVar2[2];
                    puVar1[1] = uVar28;
                    *puVar1 = uVar27;
                  }
                  *(undefined2 *)((long)pppppuVar18 + lVar22 + 0x18) =
                       *(undefined2 *)((long)ppppuVar24 + lVar22 + 0x18);
                  lVar22 = lVar22 + 0x20;
                } while ((undefined8 ****)((long)ppppuVar24 + lVar22) != ppppuVar7);
              }
              else {
                FUN_109fae138(pppppuVar23);
                FUN_109fae198(pppppuVar23,(ulong)uVar11);
                if (*(uint *)(pppppuVar20 + 9) != 0) {
                  pppppuVar18 = (undefined8 *****)*pppppuVar23;
                  ppppuVar24 = pppppuVar20[8];
                  ppppuVar7 = ppppuVar24 + (ulong)*(uint *)(pppppuVar20 + 9) * 4;
                  goto LAB_109f954ac;
                }
              }
              *(uint *)(pppppuVar19 + 9) = uVar11;
            }
          }
          pppppuVar20 = pppppuVar20 + 0x2a;
          pppppuVar19 = pppppuVar19 + 0x2a;
        } while (pppppuVar20 != pppppuVar5);
        do {
          FUN_109fae280(pppppuVar26);
          pppppuVar26 = pppppuVar26 + 0x2a;
        } while (pppppuVar26 != pppppuVar5);
        pppppuVar26 = *ppppppuVar16;
        pppppuVar18 = (undefined8 *****)ppppuStack_408;
        pppppuVar23 = (undefined8 *****)ppppuStack_400;
      }
      param_1[1] = pppppuVar14;
      param_1[2] = pppppuVar18;
      ppppuStack_400 = param_1[3];
      param_1[3] = pppppuVar23;
      ppppuStack_418 = pppppuVar26;
      ppppuStack_410 = pppppuVar26;
      ppppuStack_408 = pppppuVar26;
      func_0x000109fae2cc(&ppppuStack_418);
      goto LAB_109f95564;
    }
  }
  FUN_109fae124();
LAB_109f95680:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f95684);
  (*pcVar6)();
}



/* Entry: 109f95200; end: 109f9570b;  */

void FUN_109f95200(long param_1,undefined8 *param_2,undefined1 param_3,long *param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [272];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1d0,*param_2,param_2[1]);
  }
  else {
    uStack_1c8 = param_2[1];
    uStack_1d0 = *param_2;
    lStack_1c0 = param_2[2];
  }
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_1b0 = 0;
  uStack_1b8 = param_3;
  func_0x0001092bfde0(&lStack_1b0,*param_4,param_4[1],param_4[1] - *param_4);
  uStack_198 = param_5;
  uStack_194 = param_6;
  FUN_109fae820(auStack_190,param_7);
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (uVar9 < *(ulong *)(param_1 + 0x18)) {
    FUN_109fae07c(uVar9,&uStack_1d0);
    puVar15 = (undefined8 *)(uVar9 + 0x150);
    *(undefined8 **)(param_1 + 0x10) = puVar15;
LAB_109f95564:
    *(undefined8 **)(param_1 + 0x10) = puVar15;
    FUN_109fae7ac(auStack_190);
    if (lStack_1b0 != 0) {
      lStack_1a8 = lStack_1b0;
      __ZdlPv();
    }
    if (lStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar1 = (long *)(param_1 + 8);
    lVar13 = uVar9 - *plVar1;
    uVar9 = (lVar13 >> 4) * -0x30c30c30c30c30c3 + 1;
    if (uVar9 < 0xc30c30c30c30c4) {
      lVar8 = (long)(*(ulong *)(param_1 + 0x18) - *plVar1) >> 4;
      uVar11 = lVar8 * -0x6186186186186186;
      if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
        uVar11 = uVar9;
      }
      if (0x61861861861860 < (ulong)(lVar8 * -0x30c30c30c30c30c3)) {
        uVar11 = 0xc30c30c30c30c3;
      }
      plStack_1d8 = plVar1;
      if (uVar11 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        if (0xc30c30c30c30c3 < uVar11) {
          func_0x000104c4f740();
          goto LAB_109f95680;
        }
        puVar7 = (undefined8 *)(uVar11 * 0x150);
        __Znwm();
      }
      lVar13 = (long)puVar7 + lVar13;
      puStack_1f8 = puVar7;
      puStack_1f0 = (undefined8 *)lVar13;
      puStack_1e8 = (undefined8 *)lVar13;
      puStack_1e0 = puVar7 + uVar11 * 0x2a;
      FUN_109fae07c(lVar13,&uStack_1d0);
      puVar18 = *(undefined8 **)(param_1 + 8);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      puVar10 = (undefined8 *)(lVar13 - ((long)puVar3 - (long)puVar18));
      puStack_1e8 = (undefined8 *)(lVar13 + 0x150);
      puVar12 = puVar10;
      puVar15 = puStack_1e8;
      puVar14 = puVar18;
      puVar7 = puVar7 + uVar11 * 0x2a;
      if (puVar3 != puVar18) {
        do {
          if (*(char *)((long)puVar14 + 0x17) < '\0') {
            func_0x000107c3192c(puVar12,*puVar14,puVar14[1]);
          }
          else {
            uVar20 = puVar14[1];
            uVar19 = *puVar14;
            puVar12[2] = puVar14[2];
            puVar12[1] = uVar20;
            *puVar12 = uVar19;
          }
          uVar5 = *(undefined1 *)(puVar14 + 3);
          puVar12[4] = 0;
          *(undefined1 *)(puVar12 + 3) = uVar5;
          puVar12[5] = 0;
          puVar12[6] = 0;
          func_0x0001092bfde0(puVar12 + 4,puVar14[4],puVar14[5],puVar14[5] - puVar14[4]);
          puVar12[7] = puVar14[7];
          puVar7 = puVar12 + 10;
          plVar16 = puVar12 + 8;
          *plVar16 = (long)puVar7;
          puVar12[9] = 0x800000000;
          if (puVar12 != puVar14) {
            uVar4 = *(uint *)(puVar14 + 9);
            if (uVar4 != 0) {
              if (uVar4 < 9) {
                lVar8 = puVar14[8];
                lVar13 = lVar8 + (ulong)uVar4 * 0x20;
LAB_109f954ac:
                lVar17 = 0;
                do {
                  puVar15 = (undefined8 *)((long)puVar7 + lVar17);
                  puVar2 = (undefined8 *)(lVar8 + lVar17);
                  if (*(char *)((long)puVar2 + 0x17) < '\0') {
                    func_0x000107c3192c(puVar15,*puVar2,puVar2[1]);
                  }
                  else {
                    uVar20 = puVar2[1];
                    uVar19 = *puVar2;
                    puVar15[2] = puVar2[2];
                    puVar15[1] = uVar20;
                    *puVar15 = uVar19;
                  }
                  *(undefined2 *)((long)puVar7 + lVar17 + 0x18) =
                       *(undefined2 *)(lVar8 + lVar17 + 0x18);
                  lVar17 = lVar17 + 0x20;
                } while (lVar8 + lVar17 != lVar13);
              }
              else {
                FUN_109fae138(plVar16);
                FUN_109fae198(plVar16,(ulong)uVar4);
                if (*(uint *)(puVar14 + 9) != 0) {
                  puVar7 = (undefined8 *)*plVar16;
                  lVar8 = puVar14[8];
                  lVar13 = lVar8 + (ulong)*(uint *)(puVar14 + 9) * 0x20;
                  goto LAB_109f954ac;
                }
              }
              *(uint *)(puVar12 + 9) = uVar4;
            }
          }
          puVar14 = puVar14 + 0x2a;
          puVar12 = puVar12 + 0x2a;
        } while (puVar14 != puVar3);
        do {
          FUN_109fae280(puVar18);
          puVar18 = puVar18 + 0x2a;
        } while (puVar18 != puVar3);
        puVar18 = (undefined8 *)*plVar1;
        puVar15 = puStack_1e8;
        puVar7 = puStack_1e0;
      }
      *(undefined8 **)(param_1 + 8) = puVar10;
      *(undefined8 **)(param_1 + 0x10) = puVar15;
      puStack_1e0 = *(undefined8 **)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar7;
      puStack_1f8 = puVar18;
      puStack_1f0 = puVar18;
      puStack_1e8 = puVar18;
      func_0x000109fae2cc(&puStack_1f8);
      goto LAB_109f95564;
    }
  }
  FUN_109fae124();
LAB_109f95680:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f95684);
  (*pcVar6)();
}



/* Entry: 109f9570c; end: 109f96723;  */

/* WARNING: Removing unreachable block (ram,0x000109f95a0c) */
/* WARNING: Removing unreachable block (ram,0x000109f95aa0) */

long FUN_109f9570c(undefined8 *param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 ****ppppuVar19;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined8 ***pppuStack_180;
  undefined1 *puStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  lVar14 = *(long *)(param_2 + 4);
  lVar3 = *(long *)(param_2 + 8);
  if (lVar14 == lVar3) {
    lVar14 = 0;
    uStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
  }
  else {
    do {
      uStack_1b0 = lStack_b8 - lStack_c0;
      FUN_109d34cd8(&lStack_108,&uStack_1b0);
      func_0x0001092a6ef8(&lStack_c0,lStack_b8,*(long *)(lVar14 + 0x20),*(long *)(lVar14 + 0x28),
                          *(long *)(lVar14 + 0x28) - *(long *)(lVar14 + 0x20));
      uStack_1b0 = lStack_d0 - lStack_d8;
      FUN_109d34cd8(&lStack_120,&uStack_1b0);
      uStack_1b0 = 0;
      lStack_1a8 = 0;
      lStack_1a0 = 0;
      if (*(int *)(lVar14 + 0x48) != 0) {
        uStack_90 = 0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_150 = CONCAT62(uStack_150._2_6_,(short)*(int *)(lVar14 + 0x48));
        func_0x0001092a6ef8(&uStack_90,0,&uStack_150,(long)&uStack_150 + 2,2);
        if (*(uint *)(lVar14 + 0x48) != 0) {
          puVar15 = *(undefined8 **)(lVar14 + 0x40);
          lVar16 = (ulong)*(uint *)(lVar14 + 0x48) << 5;
          do {
            lVar12 = (long)*(char *)((long)puVar15 + 0x17);
            puVar10 = puVar15;
            if (lVar12 < 0) {
              lVar12 = puVar15[1];
              puVar10 = (undefined8 *)*puVar15;
            }
            func_0x0001092a6ef8(&uStack_90,lStack_88,puVar10,(long)puVar10 + lVar12 + 1);
            uStack_150._0_1_ = *(undefined1 *)(puVar15 + 3);
            func_0x0001092a6ef8(&uStack_90,lStack_88,&uStack_150,(long)&uStack_150 + 1,1);
            uStack_150 = CONCAT71(uStack_150._1_7_,0x80);
            func_0x0001092a6ef8(&uStack_90,lStack_88,&uStack_150,(long)&uStack_150 + 1,1);
            puVar15 = puVar15 + 4;
            lVar16 = lVar16 + -0x20;
          } while (lVar16 != 0);
        }
        func_0x000107c31940(&uStack_150,&UNK_10f62bd37);
        FUN_109f8f0e0(&uStack_1b0,&uStack_150);
        if (lStack_140 < 0) {
          __ZdlPv(uStack_150);
        }
        uStack_150 = CONCAT62(uStack_150._2_6_,(short)lStack_88 - (short)uStack_90);
        func_0x0001092a6ef8(&uStack_1b0,lStack_1a8,&uStack_150,(long)&uStack_150 + 2,2);
        func_0x0001092a6ef8(&uStack_1b0,lStack_1a8,uStack_90,lStack_88,lStack_88 - uStack_90);
        uStack_150 = 0;
        lStack_148 = 0;
        lStack_140 = 0;
        uStack_168 = CONCAT62(uStack_168._2_6_,(short)*(undefined4 *)(lVar14 + 0x48));
        func_0x0001092a6ef8(&uStack_150,0,&uStack_168,(long)&uStack_168 + 2,2);
        if (*(uint *)(lVar14 + 0x48) != 0) {
          lVar16 = (ulong)*(uint *)(lVar14 + 0x48) << 5;
          puVar17 = (undefined1 *)(*(long *)(lVar14 + 0x40) + 0x19);
          do {
            uStack_168 = CONCAT71(uStack_168._1_7_,*puVar17);
            func_0x0001092a6ef8(&uStack_150,lStack_148,&uStack_168,(long)&uStack_168 + 1,1);
            lVar16 = lVar16 + -0x20;
            puVar17 = puVar17 + 0x20;
          } while (lVar16 != 0);
        }
        func_0x000107c31940(&uStack_168,&UNK_10f62bd3c);
        FUN_109f8f0e0(&uStack_1b0,&uStack_168);
        if (lStack_158 < 0) {
          __ZdlPv(uStack_168);
        }
        uStack_168 = CONCAT62(uStack_168._2_6_,(short)lStack_148 - (short)uStack_150);
        func_0x0001092a6ef8(&uStack_1b0,lStack_1a8,&uStack_168,(long)&uStack_168 + 2,2);
        func_0x0001092a6ef8(&uStack_1b0,lStack_1a8,uStack_150,lStack_148,lStack_148 - uStack_150);
        if (uStack_150 != 0) {
          lStack_148 = uStack_150;
          __ZdlPv();
        }
        if (uStack_90 != 0) {
          lStack_88 = uStack_90;
          __ZdlPv();
        }
      }
      func_0x000107c31940(&uStack_90,&UNK_10f62a260);
      FUN_109f8f0e0(&uStack_1b0,&uStack_90);
      uStack_90 = CONCAT44(uStack_90._4_4_,(int)lStack_1a8 - (int)uStack_1b0);
      func_0x0001092a6ef8(&lStack_d8,lStack_d0,&uStack_90,(long)&uStack_90 + 4,4);
      func_0x0001092a6ef8(&lStack_d8,lStack_d0,uStack_1b0,lStack_1a8,lStack_1a8 - uStack_1b0);
      if (uStack_1b0 != 0) {
        lStack_1a8 = uStack_1b0;
        __ZdlPv();
      }
      uStack_1b0 = lStack_e8 - lStack_f0;
      FUN_109d34cd8(&lStack_138,&uStack_1b0);
      uStack_1b0 = 0;
      lStack_1a8 = 0;
      lStack_1a0 = 0;
      func_0x000107c31940(&uStack_90,&UNK_10f62a260);
      FUN_109f8f0e0(&uStack_1b0,&uStack_90);
      uStack_90 = CONCAT44(uStack_90._4_4_,(int)lStack_1a8 - (int)uStack_1b0);
      func_0x0001092a6ef8(&lStack_f0,lStack_e8,&uStack_90,(long)&uStack_90 + 4,4);
      func_0x0001092a6ef8(&lStack_f0,lStack_e8,uStack_1b0,lStack_1a8,lStack_1a8 - uStack_1b0);
      if (uStack_1b0 != 0) {
        lStack_1a8 = uStack_1b0;
        __ZdlPv();
      }
      lVar14 = lVar14 + 0x150;
    } while (lVar14 != lVar3);
    lVar14 = *(long *)(param_2 + 4);
    uStack_150 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    if (*(long *)(param_2 + 8) == lVar14) {
      lVar14 = 0;
    }
    else {
      uVar13 = 0;
      do {
        plVar18 = (long *)(lVar14 + uVar13 * 0x150);
        uStack_168 = 0;
        lStack_160 = 0;
        lStack_158 = 0;
        if (*(char *)((long)plVar18 + 0x17) < '\0') {
          func_0x000107c3192c(&pppuStack_180,*plVar18,plVar18[1]);
        }
        else {
          puStack_178 = (undefined1 *)plVar18[1];
          pppuStack_180 = (undefined8 ***)*plVar18;
          uStack_170 = plVar18[2];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&pppuStack_180,0);
        func_0x000107c31940(&uStack_1b0,&DAT_10f3aec3b);
        puVar17 = puStack_178;
        ppppuVar19 = (undefined8 ****)pppuStack_180;
        if (-1 < (long)uStack_170) {
          puVar17 = (undefined1 *)(uStack_170 >> 0x38);
          ppppuVar19 = &pppuStack_180;
        }
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        puStack_198 = (undefined1 *)0x0;
        if (puVar17 != (undefined1 *)0x0) {
          if ((long)puVar17 < 0) {
            func_0x000104c591bc();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x109f96444);
            (*pcVar7)();
          }
          puVar8 = puVar17;
          __Znwm();
          puStack_188 = puVar8 + (long)puVar17;
          puVar9 = puVar8;
          do {
            puStack_190 = puVar9 + 1;
            *puVar9 = *(undefined1 *)ppppuVar19;
            puVar17 = puVar17 + -1;
            puVar9 = puStack_190;
            ppppuVar19 = (undefined8 ****)((long)ppppuVar19 + 1);
            puStack_198 = puVar8;
          } while (puVar17 != (undefined1 *)0x0);
        }
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        func_0x000107c31940(&uStack_1b0,&DAT_10f62bd46);
        uStack_90 = CONCAT71(uStack_90._1_7_,(char)plVar18[3]);
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        puStack_198 = (undefined1 *)0x0;
        func_0x0001092b13d0(&puStack_198,&uStack_90,(long)&uStack_90 + 1,1);
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        func_0x000107c31940(&uStack_1b0,&UNK_10f62bd4b);
        func_0x000109dff458(&uStack_90,plVar18[4],plVar18[5] - plVar18[4]);
        puStack_198 = (undefined1 *)0x0;
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        func_0x0001092bfde0(&puStack_198,&uStack_90,alStack_70,0x20);
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        uStack_90 = 0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_1b0 = plVar18[5] - plVar18[4];
        func_0x0001092a6ef8(&uStack_90,0,&uStack_1b0,&lStack_1a8,8);
        func_0x000107c31940(&uStack_1b0,&UNK_10f62bd50);
        puStack_198 = (undefined1 *)0x0;
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        func_0x0001092bfde0(&puStack_198,uStack_90,lStack_88,lStack_88 - uStack_90);
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        lStack_1c8 = 0;
        lStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = *(undefined8 *)(lStack_120 + uVar13 * 8);
        func_0x0001092a6ef8(&lStack_1c8,0,&uStack_1b0,&lStack_1a8,8);
        uStack_1b0 = *(undefined8 *)(lStack_138 + uVar13 * 8);
        func_0x0001092a6ef8(&lStack_1c8,lStack_1c0,&uStack_1b0,&lStack_1a8,8);
        uStack_1b0 = *(undefined8 *)(lStack_108 + uVar13 * 8);
        func_0x0001092a6ef8(&lStack_1c8,lStack_1c0,&uStack_1b0,&lStack_1a8,8);
        func_0x000107c31940(&uStack_1b0,&UNK_10f62bd55);
        puStack_198 = (undefined1 *)0x0;
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        func_0x0001092bfde0(&puStack_198,lStack_1c8,lStack_1c0,lStack_1c0 - lStack_1c8);
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        lStack_1e0 = 0;
        lStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1b0._0_2_ = *(undefined2 *)((long)plVar18 + 0x3c);
        func_0x0001092a6ef8(&lStack_1e0,0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
        uStack_1b0._0_2_ = *(undefined2 *)((long)plVar18 + 0x3e);
        func_0x0001092a6ef8(&lStack_1e0,lStack_1d8,&uStack_1b0,(long)&uStack_1b0 + 2,2);
        uStack_1b0._0_2_ = (short)plVar18[7];
        func_0x0001092a6ef8(&lStack_1e0,lStack_1d8,&uStack_1b0,(long)&uStack_1b0 + 2,2);
        uStack_1b0 = CONCAT62(uStack_1b0._2_6_,*(undefined2 *)((long)plVar18 + 0x3a));
        func_0x0001092a6ef8(&lStack_1e0,lStack_1d8,&uStack_1b0,(long)&uStack_1b0 + 2,2);
        func_0x000107c31940(&uStack_1b0,&UNK_10f62bd5a);
        puStack_198 = (undefined1 *)0x0;
        puStack_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        func_0x0001092bfde0(&puStack_198,lStack_1e0,lStack_1d8,lStack_1d8 - lStack_1e0);
        FUN_109fae318(&uStack_168,&uStack_1b0);
        if (puStack_198 != (undefined1 *)0x0) {
          puStack_190 = puStack_198;
          __ZdlPv();
        }
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        lVar3 = lStack_160;
        lStack_1f8 = 0;
        lStack_1f0 = 0;
        uStack_1e8 = 0;
        for (lVar14 = uStack_168; lVar14 != lVar3; lVar14 = lVar14 + 0x30) {
          FUN_109f8f0e0(&lStack_1f8,lVar14);
          uStack_1b0 = CONCAT62(uStack_1b0._2_6_,
                                (short)*(undefined4 *)(lVar14 + 0x20) -
                                (short)*(undefined4 *)(lVar14 + 0x18));
          func_0x0001092a6ef8(&lStack_1f8,lStack_1f0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
          func_0x0001092a6ef8(&lStack_1f8,lStack_1f0,*(long *)(lVar14 + 0x18),
                              *(long *)(lVar14 + 0x20),
                              *(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18));
        }
        func_0x000107c31940(&uStack_1b0,&UNK_10f62a260);
        FUN_109f8f0e0(&lStack_1f8,&uStack_1b0);
        if (lStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,((int)lStack_1f0 - (int)lStack_1f8) + 4);
        func_0x0001092a6ef8(&uStack_150,lStack_148,&uStack_1b0,(long)&uStack_1b0 + 4,4);
        func_0x0001092a6ef8(&uStack_150,lStack_148,lStack_1f8,lStack_1f0,lStack_1f0 - lStack_1f8);
        if (lStack_1f8 != 0) {
          lStack_1f0 = lStack_1f8;
          __ZdlPv();
        }
        if (lStack_1e0 != 0) {
          lStack_1d8 = lStack_1e0;
          __ZdlPv();
        }
        if (lStack_1c8 != 0) {
          lStack_1c0 = lStack_1c8;
          __ZdlPv();
        }
        if (uStack_90 != 0) {
          lStack_88 = uStack_90;
          __ZdlPv();
        }
        if ((long)uStack_170 < 0) {
          __ZdlPv(pppuStack_180);
        }
        FUN_109fae564(&uStack_168);
        uVar13 = uVar13 + 1;
        lVar14 = *(long *)(param_2 + 4);
      } while (uVar13 < (ulong)((*(long *)(param_2 + 8) - lVar14 >> 4) * -0x30c30c30c30c30c3));
      lVar14 = lStack_148 - uStack_150;
    }
  }
  lVar6 = lStack_b8;
  lVar5 = lStack_c0;
  lVar4 = lStack_d0;
  lVar12 = lStack_d8;
  lVar16 = lStack_e8;
  lVar3 = lStack_f0;
  func_0x000107c31940(&uStack_1b0,&UNK_10f62bd5f);
  FUN_109f8f0e0(&lStack_a8,&uStack_1b0);
  if (lStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  uVar11 = 0x8001;
  if (*param_2 != -0x7fff) {
    uVar11 = 1;
  }
  uStack_1b0._0_2_ = uVar11;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
  uStack_1b0._0_2_ = 2;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
  uStack_1b0 = CONCAT62(uStack_1b0._2_6_,param_2[1]);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
  uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 1,1);
  uStack_1b0 = CONCAT71(uStack_1b0._1_7_,0x81);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 1,1);
  uStack_1b0._0_2_ = param_2[2];
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
  uStack_1b0 = (ulong)uStack_1b0._2_6_ << 0x10;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 2,2);
  lVar1 = (lVar4 - lVar12) + lVar14 + 0x60;
  lVar2 = (lVar16 - lVar3) + lVar1;
  uStack_1b0 = (lVar6 - lVar5) + lVar2;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = 0x58;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar14;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar14 + 0x60;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar4 - lVar12;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar1;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar16 - lVar3;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar2;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = lVar6 - lVar5;
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,&lStack_1a8,8);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,
                        (int)((ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 4)) >> 4) *
                        0x3cf3cf3d);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,&uStack_1b0,(long)&uStack_1b0 + 4,4);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,uStack_150,lStack_148,lStack_148 - uStack_150);
  func_0x000107c31940(&uStack_1b0,&UNK_10f62a260);
  FUN_109f8f0e0(&lStack_a8,&uStack_1b0);
  if (lStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,lStack_d8,lStack_d0,lStack_d0 - lStack_d8);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,lStack_f0,lStack_e8,lStack_e8 - lStack_f0);
  func_0x0001092a6ef8(&lStack_a8,lStack_a0,lStack_c0,lStack_b8,lStack_b8 - lStack_c0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001092bfde0();
  if (uStack_150 != 0) {
    lStack_148 = uStack_150;
    __ZdlPv();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  lVar14 = lStack_a8;
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    if (lStack_1a0 < 0) {
      __ZdlPv(uStack_1b0);
    }
    if (uStack_150 != 0) {
      lStack_148 = uStack_150;
      __ZdlPv();
    }
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    if (lStack_120 != 0) {
      lStack_118 = lStack_120;
      __ZdlPv();
    }
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      __ZdlPv();
    }
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    __Unwind_Resume();
    func_0x000109f8eccc(lVar14 + 0x9c8);
    func_0x000109fae730(lVar14 + 0x9a0);
    FUN_109f8e75c(lVar14 + 0x358);
    FUN_109f8ed54(lVar14 + 0x1f0);
    FUN_109f8ed54(lVar14 + 0x88);
    plVar18 = *(long **)(lVar14 + 0x80);
    *(undefined8 *)(lVar14 + 0x80) = 0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    return lVar14;
  }
  return lVar14;
}



/* Entry: 109f96724; end: 109f96783;  */

long FUN_109f96724(long param_1)

{
  long *plVar1;
  
  func_0x000109f8eccc(param_1 + 0x9c8);
  func_0x000109fae730(param_1 + 0x9a0);
  FUN_109f8e75c(param_1 + 0x358);
  FUN_109f8ed54(param_1 + 0x1f0);
  FUN_109f8ed54(param_1 + 0x88);
  plVar1 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 109f96784; end: 109f9692f;  */

void FUN_109f96784(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  char cStack_69;
  undefined8 uStack_68;
  byte bStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar2 = *param_2;
  while( true ) {
    if (lVar2 == 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
    lVar2 = param_2[6];
    if (lVar2 == 0) break;
    piVar4 = (int *)param_2[2];
    piVar1 = piVar4;
    _strlen();
    if ((piVar1 != (int *)0x4) || (*piVar4 != 0x6e69616d)) {
      func_0x000107c31940(auStack_58,&UNK_10f62a6f0);
      FUN_109f92740(auStack_88,auStack_58,2,&PTR_DAT_110b96320);
      goto LAB_109f96870;
    }
    FUN_109ecc784(lVar2);
    for (plVar3 = *(long **)(lVar2 + 0x30); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109f96930(auStack_88,param_3,plVar3);
      if ((bStack_60 & 1) == 0) {
        if (cStack_69 < '\0') {
          __ZdlPv(uStack_80);
        }
        func_0x000107c31940(auStack_58,&UNK_10f62a71b);
        FUN_109f92740(auStack_88,auStack_58,2,&PTR_DAT_110b96338);
        goto LAB_109f96870;
      }
    }
    param_2 = (long *)*param_2;
    lVar2 = *param_2;
  }
  func_0x000107c31940(auStack_58,&UNK_10f62a6dc);
  FUN_109f92740(auStack_88,auStack_58,2,&PTR_DAT_110b96308);
LAB_109f96870:
  *(undefined4 *)param_1 = auStack_88[0];
  param_1[2] = uStack_78;
  param_1[1] = uStack_80;
  param_1[3] = CONCAT17(cStack_69,uStack_70);
  param_1[4] = uStack_68;
  *(undefined1 *)(param_1 + 5) = 0;
  if (-1 < cStack_41) {
    return;
  }
  __ZdlPv(auStack_58[0]);
  return;
}



/* Entry: 109f96930; end: 109f9700f;  */

/* WARNING: Removing unreachable block (ram,0x000109f96e34) */

void FUN_109f96930(long *******param_1,long ******param_2,long *******param_3)

{
  long ***ppplVar1;
  ulong uVar2;
  long ******pppppplVar3;
  uint uVar4;
  char cVar5;
  long ****pppplVar6;
  long ******pppppplVar7;
  long *****ppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  undefined8 *******pppppppuVar11;
  long *****ppppplVar12;
  long *extraout_x8;
  long ******unaff_x22;
  long ******pppppplVar13;
  undefined8 ******ppppppuStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  long *****ppppplStack_1a0;
  long ******pppppplStack_198;
  long *****ppppplStack_190;
  long ******pppppplStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long ******apppppplStack_170 [2];
  long ******pppppplStack_160;
  long **pplStack_158;
  undefined8 uStack_150;
  long *****ppppplStack_148;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  char cStack_131;
  ulong uStack_130;
  undefined4 uStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  long ******pppppplStack_110;
  undefined7 uStack_108;
  char cStack_101;
  undefined7 uStack_100;
  byte bStack_f9;
  long *****ppppplStack_f8;
  byte bStack_f0;
  char cStack_e1;
  long ******pppppplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  long ******pppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  undefined7 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(uint *)(param_3 + 2);
  ppppppplVar9 = param_1;
  if (uVar4 == 2) {
    for (param_3 = (long *******)param_3[4]; *param_3 != (long ******)0x0;
        param_3 = (long *******)*param_3) {
      ppppppplVar9 = (long *******)&ppppplStack_118;
      FUN_109f96930(ppppppplVar9,param_2,param_3);
      if ((bStack_f0 & 1) == 0) goto LAB_109f96d48;
    }
  }
  else if (uVar4 == 1) {
    for (unaff_x22 = param_3[9]; *unaff_x22 != (long *****)0x0; unaff_x22 = (long ******)*unaff_x22)
    {
      ppppppplVar9 = (long *******)&ppppplStack_118;
      FUN_109f96930(ppppppplVar9,param_2,unaff_x22);
      if (bStack_f0 != 1) goto LAB_109f96d48;
    }
    for (param_3 = (long *******)param_3[0xd]; *param_3 != (long ******)0x0;
        param_3 = (long *******)*param_3) {
      ppppppplVar9 = (long *******)&ppppplStack_118;
      FUN_109f96930(ppppppplVar9,param_2,param_3);
      if ((bStack_f0 & 1) == 0) goto LAB_109f96d48;
    }
  }
  else {
    if (uVar4 != 0) {
      if (uVar4 < 4) {
        param_2 = *(long *******)(&UNK_110b95d68 + (ulong)uVar4 * 0x10);
        if ((long ******)0x7ffffffffffffff7 < param_2) goto LAB_109f96f3c;
        unaff_x22 = (long ******)(&PTR_DAT_110b95d60)[(ulong)uVar4 * 2];
        if (param_2 < (long ******)0x17) {
          uStack_a0 = CONCAT17((char)param_2,(undefined7)uStack_a0);
          param_3 = &pppppplStack_b0;
          if (param_2 == (long ******)0x0) goto LAB_109f96dbc;
        }
        else {
          ppppppplVar9 = (long *******)0x19;
          if (((ulong)param_2 | 7) != 0x17) {
            ppppppplVar9 = (long *******)(((ulong)param_2 | 7) + 1);
          }
          param_3 = ppppppplVar9;
          __Znwm();
          uStack_a0 = (ulong)ppppppplVar9 | 0x8000000000000000;
          pppppplStack_b0 = (long ******)param_3;
          ppppplStack_a8 = (long *****)param_2;
        }
        _memmove(param_3,unaff_x22,param_2);
      }
      else {
        param_2 = (long ******)0x0;
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
        param_3 = &pppppplStack_b0;
      }
LAB_109f96dbc:
      *(undefined1 *)((long)param_3 + (long)param_2) = 0;
      apppppplStack_170[0] = (long ******)&pppppplStack_b0;
      FUN_109f97010(&pppppplStack_160,&UNK_10f6282fa);
      ppppppplVar9 = (long *******)&ppppplStack_118;
      FUN_109f92740(ppppppplVar9,&pppppplStack_160,2,&PTR_DAT_110b96350);
      *(undefined4 *)param_1 = ppppplStack_118._0_4_;
      param_1[2] = (long ******)CONCAT17(cStack_101,uStack_108);
      param_1[1] = pppppplStack_110;
      param_1[3] = (long ******)CONCAT17(bStack_f9,uStack_100);
      param_1[4] = (long ******)ppppplStack_f8;
      *(undefined1 *)(param_1 + 5) = 0;
      if ((long)uStack_150 < 0) {
        ppppppplVar9 = (long *******)pppppplStack_160;
        __ZdlPv();
      }
      goto LAB_109f96f00;
    }
    pppppplVar13 = param_3[4];
    ppppplVar12 = *pppppplVar13;
    while (ppppplVar12 != (long *****)0x0) {
      if (*(int *)(pppppplVar13 + 3) == 3) {
        unaff_x22 = (long ******)pppppplVar13[0xb];
        if (*(int *)(unaff_x22 + 4) == 0xb) {
          param_3 = (long *******)param_2[0x2c];
          ppppppplVar9 = param_3 + 0xb3;
          ppppplStack_118 = (long *****)unaff_x22;
          FUN_109f7b06c(ppppppplVar9,&ppppplStack_118);
          if (ppppppplVar9 != (long *******)0x0) goto LAB_109f96c54;
          ppppplVar12 = param_2[0x2c];
          pppppplStack_b0 = (long ******)((ulong)pppppplStack_b0 & 0xffffffffffffff00);
          ppppplStack_a8 = (long *****)0x0;
          uStack_a0 = 0;
          if (ppppplVar12[0x10] == (long ****)0x0) {
            func_0x000107c31940(&pppppplStack_160,&UNK_10f62a8d3);
            ppppppplVar9 = (long *******)&ppppplStack_118;
            FUN_109f92740(ppppppplVar9,&pppppplStack_160,2,&PTR_DAT_110b96380);
            goto LAB_109f96e94;
          }
          ppppppplVar9 = (long *******)&ppppplStack_118;
          FUN_109f97178(ppppppplVar9,ppppplVar12[0x10],param_2,unaff_x22,&pppppplStack_b0);
          if ((bStack_f0 & 1) != 0) {
            if ((char)pppppplStack_b0 == '\x01') {
              pppplVar6 = ppppplVar12[0x10];
              (*(code *)(*pppplVar6)[4])();
              if (*(char *)((long)pppplVar6 + 0x17) < '\0') {
                func_0x000107c3192c(&pppppplStack_d0,*pppplVar6,pppplVar6[1]);
              }
              else {
                pplStack_c8 = (long **)pppplVar6[1];
                pppppplStack_d0 = (long ******)*pppplVar6;
                pplStack_c0 = (long **)pppplVar6[2];
              }
              func_0x000107c31940(&ppppplStack_118,&UNK_10f62a8de);
              __ZNSt3__19to_stringEm(&pppppplStack_160,param_3[0xb6]);
              ppplVar1 = (long ***)pplStack_158;
              ppppppplVar9 = (long *******)pppppplStack_160;
              if (-1 < (long)uStack_150) {
                ppplVar1 = (long ***)((ulong)uStack_150 >> 0x38);
                ppppppplVar9 = &pppppplStack_160;
              }
              pppppplVar7 = &ppppplStack_118;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppplVar7,ppppppplVar9,ppplVar1);
              pppppplVar3 = (long ******)*pppppplVar7;
              uStack_88 = SUB87(pppppplVar7[1],0);
              uStack_81 = (undefined1)*(undefined8 *)((long)pppppplVar7 + 0xf);
              uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar7 + 0xf) >> 8);
              cVar5 = *(char *)((long)pppppplVar7 + 0x17);
              pppppplVar7[1] = (long *****)0x0;
              pppppplVar7[2] = (long *****)0x0;
              *pppppplVar7 = (long *****)0x0;
              if ((long)uStack_150 < 0) {
                __ZdlPv(pppppplStack_160);
              }
              if (cStack_101 < '\0') {
                __ZdlPv(ppppplStack_118);
              }
              uStack_150 = (long ***)pplStack_c0;
              pplStack_158 = pplStack_c8;
              pppppplStack_160 = pppppplStack_d0;
              pppppplStack_d0 = (long ******)0x0;
              pplStack_c8 = (long **)0x0;
              pplStack_c0 = (long **)0x0;
              uStack_140 = uStack_88;
              uStack_139 = uStack_81;
              uStack_138 = uStack_80;
              uStack_130 = uStack_a0;
              uStack_128 = 0;
              ppppplStack_148 = (long *****)pppppplVar3;
              cStack_131 = cVar5;
              ppppplStack_120 = (long *****)unaff_x22;
              FUN_109f7b6ac(&ppppplStack_118,&ppppplStack_120,&pppppplStack_160);
              FUN_109f7b18c(param_3 + 0xb3,&ppppplStack_118,&ppppplStack_118);
              if (cStack_e1 < '\0') {
                __ZdlPv(ppppplStack_f8);
              }
              if ((char)bStack_f9 < '\0') {
                __ZdlPv(pppppplStack_110);
              }
              if (cStack_131 < '\0') {
                __ZdlPv(ppppplStack_148);
              }
              if ((long)uStack_150 < 0) {
                __ZdlPv(pppppplStack_160);
              }
              ppppplStack_118 = (long *****)unaff_x22;
              FUN_109f9785c(param_3 + 0xd1,&ppppplStack_118);
              if ((long)pplStack_c0 < 0) {
                __ZdlPv(pppppplStack_d0);
              }
            }
            ppppplVar8 = param_2[0x2c] + 0x134;
            ppppplStack_118 = (long *****)unaff_x22;
            func_0x000109f97fc4(ppppplVar8,&ppppplStack_118);
            if (ppppplVar8 == (long *****)0x0) {
              param_3 = (long *******)param_2[0x2c];
              pppplVar6 = ppppplVar12[0x10];
              (*(code *)(*pppplVar6)[4])();
              if (*(char *)((long)pppplVar6 + 0x17) < '\0') {
                func_0x000107c3192c(&pppppplStack_160,*pppplVar6,pppplVar6[1]);
              }
              else {
                pplStack_158 = (long **)pppplVar6[1];
                pppppplStack_160 = (long ******)*pppplVar6;
                uStack_150 = pppplVar6[2];
              }
              ppppplStack_148 = ppppplStack_a8;
              if ((long)uStack_150 < 0) {
                ppppplStack_118 = (long *****)unaff_x22;
                func_0x000107c3192c(&pppppplStack_110,pppppplStack_160,pplStack_158);
              }
              else {
                uStack_108 = SUB87(pplStack_158,0);
                cStack_101 = (char)((ulong)pplStack_158 >> 0x38);
                pppppplStack_110 = pppppplStack_160;
                uStack_100 = SUB87(uStack_150,0);
                ppppplStack_118 = (long *****)unaff_x22;
                bStack_f9 = uStack_150._7_1_;
              }
              ppppplStack_f8 = ppppplStack_148;
              FUN_109f9809c(param_3 + 0x134,&ppppplStack_118,&ppppplStack_118);
              if ((char)bStack_f9 < '\0') {
                __ZdlPv(pppppplStack_110);
              }
              if ((long)uStack_150 < 0) {
                __ZdlPv(pppppplStack_160);
              }
            }
            ppppppplVar9 = (long *******)ppppplVar12[0x10];
            (*(code *)(*ppppppplVar9)[6])();
            goto LAB_109f96c54;
          }
          param_2 = (long ******)((ulong)ppppplStack_118 & 0xffffffff);
          unaff_x22 = (long ******)(ulong)bStack_f9;
          uStack_98 = uStack_108;
          cStack_91 = cStack_101;
          uStack_90 = uStack_100;
          param_3 = (long *******)pppppplStack_110;
          pppppplVar13 = (long ******)ppppplStack_f8;
        }
        else {
          func_0x000107c31940(&pppppplStack_160,&UNK_10f62a7f8);
          ppppppplVar9 = (long *******)&ppppplStack_118;
          FUN_109f92740(ppppppplVar9,&pppppplStack_160,2,&PTR_DAT_110b96368);
LAB_109f96e94:
          pppppplVar13 = (long ******)ppppplStack_f8;
          param_3 = (long *******)pppppplStack_110;
          param_2 = (long ******)((ulong)ppppplStack_118 & 0xffffffff);
          uStack_98 = uStack_108;
          cStack_91 = cStack_101;
          uStack_90 = uStack_100;
          unaff_x22 = (long ******)(ulong)bStack_f9;
          if ((long)uStack_150 < 0) {
            ppppppplVar9 = (long *******)pppppplStack_160;
            __ZdlPv();
          }
        }
        *(int *)param_1 = (int)param_2;
        param_1[1] = (long ******)param_3;
        param_1[2] = (long ******)CONCAT17(cStack_91,uStack_98);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_90,cStack_91);
        *(char *)((long)param_1 + 0x1f) = (char)unaff_x22;
        param_1[4] = pppppplVar13;
        goto LAB_109f96efc;
      }
LAB_109f96c54:
      uStack_90 = 0;
      uStack_98 = 0;
      cStack_91 = '\0';
      pppppplVar13 = (long ******)*pppppplVar13;
      ppppplVar12 = *pppppplVar13;
    }
  }
  param_1[3] = (long ******)0x0;
  param_1[2] = (long ******)0x0;
  param_1[5] = (long ******)0x0;
  param_1[4] = (long ******)0x0;
  param_1[1] = (long ******)0x0;
  *param_1 = (long ******)0x0;
  *(undefined1 *)(param_1 + 5) = 1;
  goto LAB_109f96f00;
LAB_109f96d48:
  *(undefined4 *)param_1 = ppppplStack_118._0_4_;
  param_1[1] = pppppplStack_110;
  param_1[2] = (long ******)CONCAT17(cStack_101,uStack_108);
  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_100,cStack_101);
  *(byte *)((long)param_1 + 0x1f) = bStack_f9;
  param_1[4] = (long ******)ppppplStack_f8;
LAB_109f96efc:
  *(undefined1 *)(param_1 + 5) = 0;
LAB_109f96f00:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  param_1 = ppppppplVar9;
LAB_109f96f3c:
  func_0x000104c4f6b8();
  if ((long)uStack_150 < 0) {
    __ZdlPv(pppppplStack_160);
  }
  ppppppplVar9 = param_1;
  __Unwind_Resume(param_1);
  pcStack_178 = FUN_109f97010;
  ppppppuStack_1b8 = (undefined8 *******)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  ppppppplVar10 = ppppppplVar9;
  ppppplStack_1a0 = (long *****)unaff_x22;
  pppppplStack_198 = (long ******)param_3;
  ppppplStack_190 = (long *****)param_2;
  pppppplStack_188 = (long ******)param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _strlen();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppppppuStack_1b8,(long)ppppppplVar10 << 1,0);
  uVar2 = uStack_1b0;
  pppppppuVar11 = (undefined8 *******)ppppppuStack_1b8;
  if (-1 < (long)uStack_1a8) {
    uVar2 = uStack_1a8 >> 0x38;
    pppppppuVar11 = &ppppppuStack_1b8;
  }
  _vsnprintf(pppppppuVar11,uVar2,ppppppplVar9,apppppplStack_170);
  if ((int)pppppppuVar11 < 1) {
    func_0x000107c31940(extraout_x8,"");
    if ((long)uStack_1a8 < 0) {
      __ZdlPv(ppppppuStack_1b8);
    }
  }
  else {
    uVar4 = (uint)uStack_1b0;
    if (-1 < (long)uStack_1a8) {
      uVar4 = (uint)uStack_1a8._7_1_;
    }
    if ((int)uVar4 < (int)pppppppuVar11) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppppppuStack_1b8,(ulong)pppppppuVar11 & 0xffffffff,0);
      uVar2 = uStack_1b0;
      pppppppuVar11 = (undefined8 *******)ppppppuStack_1b8;
      if (-1 < (long)uStack_1a8) {
        uVar2 = uStack_1a8 >> 0x38;
        pppppppuVar11 = &ppppppuStack_1b8;
      }
      _vsnprintf(pppppppuVar11,uVar2,ppppppplVar9,apppppplStack_170);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppppppuStack_1b8,(ulong)pppppppuVar11 & 0xffffffff,0);
    }
    extraout_x8[1] = uStack_1b0;
    *extraout_x8 = (long)ppppppuStack_1b8;
    extraout_x8[2] = uStack_1a8;
  }
  return;
}



/* Entry: 109f97010; end: 109f97177;  */

void FUN_109f97010(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  ppuStack_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar3 = param_2;
  _strlen();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppuStack_48,lVar3 << 1,0);
  uVar2 = uStack_40;
  pppuVar4 = (undefined8 ***)ppuStack_48;
  if (-1 < (long)uStack_38) {
    uVar2 = uStack_38 >> 0x38;
    pppuVar4 = &ppuStack_48;
  }
  _vsnprintf(pppuVar4,uVar2,param_2,&stack0x00000000);
  if ((int)pppuVar4 < 1) {
    func_0x000107c31940(param_1,"");
    if ((long)uStack_38 < 0) {
      __ZdlPv(ppuStack_48);
    }
  }
  else {
    uVar1 = (uint)uStack_40;
    if (-1 < (long)uStack_38) {
      uVar1 = (uint)uStack_38._7_1_;
    }
    if ((int)uVar1 < (int)pppuVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppuStack_48,(ulong)pppuVar4 & 0xffffffff,0);
      uVar2 = uStack_40;
      pppuVar4 = (undefined8 ***)ppuStack_48;
      if (-1 < (long)uStack_38) {
        uVar2 = uStack_38 >> 0x38;
        pppuVar4 = &ppuStack_48;
      }
      _vsnprintf(pppuVar4,uVar2,param_2,&stack0x00000000);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppuStack_48,(ulong)pppuVar4 & 0xffffffff,0);
    }
    param_1[1] = uStack_40;
    *param_1 = (long)ppuStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



/* Entry: 109f97178; end: 109f9781b;  */

/* WARNING: Removing unreachable block (ram,0x000109f97260) */
/* WARNING: Removing unreachable block (ram,0x000109f975ac) */
/* WARNING: Removing unreachable block (ram,0x000109f9767c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109f97178(undefined8 *param_1,long *param_2,long param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long ******pppppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  code *pcVar7;
  long *****ppppplVar8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  long *******ppppppplStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  byte bStack_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined8 uStack_68;
  byte bStack_60;
  long *******ppppppplStack_58;
  ulong uStack_50;
  
  pppppplVar4 = *(long *******)(param_4 + 0x18);
  if (pppppplVar4 == (long ******)0x0) {
    func_0x000107c31940(&ppppppplStack_58,&UNK_10f62a8e8);
    FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b96398);
    goto LAB_109f9723c;
  }
  ppppplVar8 = *pppppplVar4;
  if (ppppplVar8 == (long *****)0x0) {
    func_0x000107c31940(&ppppppplStack_58,&UNK_10f62a99c);
    FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b963b0);
    goto LAB_109f9723c;
  }
  iVar1 = *(int *)(ppppplVar8 + 3);
  if (iVar1 < 4) {
    if (iVar1 != 0) {
      if (iVar1 != 1) goto LAB_109f97314;
      iVar1 = *(int *)(ppppplVar8 + 5);
      if (iVar1 < 3) {
        if (iVar1 == 0) {
          func_0x000107c31940(&ppppppplStack_88,ppppplVar8[7][3]);
          uStack_50 = uStack_80;
          ppppppplStack_58 = ppppppplStack_88;
          if (-1 < (char)bStack_71) {
            uStack_50 = (ulong)bStack_71;
            ppppppplStack_58 = (long *******)&ppppppplStack_88;
          }
          lVar2 = param_3 + 0x130;
          FUN_109f7f7d4(lVar2,&ppppppplStack_58);
          if (lVar2 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppppppplStack_88,lVar2 + 0x20);
          }
          *(long ****)(param_5 + 8) = ppppplVar8[7][2];
          FUN_109f97920(&ppppppplStack_58,*(undefined8 *)(param_3 + 0x160),ppppplVar8[7]);
          (**(code **)(*param_2 + 0x18))(param_2,&UNK_10f48da3e);
          if ((char)bStack_71 < '\0') {
            __ZdlPv(ppppppplStack_88);
          }
          goto LAB_109f974ac;
        }
        if (iVar1 != 1) {
LAB_109f97540:
          FUN_109f97d60(auStack_a0);
          FUN_109f97010(&ppppppplStack_58,&UNK_10f62a9ec);
          FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b96428);
          *(undefined4 *)param_1 = ppppppplStack_88._0_4_;
          param_1[2] = CONCAT17(bStack_71,uStack_78);
          param_1[1] = uStack_80;
          param_1[3] = CONCAT17(uStack_69,uStack_70);
          param_1[4] = uStack_68;
          *(undefined1 *)(param_1 + 5) = 0;
          if (-1 < cStack_89) {
            return;
          }
          __ZdlPv(auStack_a0[0]);
          return;
        }
      }
      else if (iVar1 != 3) {
        if (iVar1 != 4) goto LAB_109f97540;
        if (ppppplVar8[10] == (long ****)0x0) {
          func_0x000107c31940(&ppppppplStack_58,&UNK_10f62a9be);
          FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b963c8);
          goto LAB_109f9723c;
        }
        if (*ppppplVar8[10] == (long ***)0x0) {
          func_0x000107c31940(&ppppppplStack_58,&UNK_10f629615);
          FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b963e0);
          goto LAB_109f9723c;
        }
        *param_5 = 1;
        FUN_109f97178(&ppppppplStack_88,param_2,param_3,ppppplVar8 + 7,param_5);
        if ((bStack_60 & 1) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2,&UNK_10f48da3e);
          pppplVar5 = ppppplVar8[6];
          if ((pppplVar5 != (long ****)0x0) && (*(char *)((long)pppplVar5 + 4) == '\r')) {
            *(long *****)(param_5 + 0x10) = pppplVar5;
          }
          goto LAB_109f974ac;
        }
        goto LAB_109f972e4;
      }
      if (ppppplVar8[10] == (long ****)0x0) {
        func_0x000107c31940(&ppppppplStack_58,&UNK_10f62a9be);
        FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b963f8);
LAB_109f9723c:
        *(undefined4 *)param_1 = ppppppplStack_88._0_4_;
        param_1[2] = CONCAT17(bStack_71,uStack_78);
        param_1[1] = uStack_80;
        param_1[3] = CONCAT17(uStack_69,uStack_70);
        param_1[4] = uStack_68;
        *(undefined1 *)(param_1 + 5) = 0;
        return;
      }
      if (*ppppplVar8[10] == (long ***)0x0) {
        func_0x000107c31940(&ppppppplStack_58,&UNK_10f629615);
        FUN_109f92740(&ppppppplStack_88,&ppppppplStack_58,2,&PTR_DAT_110b96410);
        goto LAB_109f9723c;
      }
      FUN_109f97178(&ppppppplStack_88,param_2,param_3,ppppplVar8 + 7,param_5);
      if ((bStack_60 & 1) == 0) goto LAB_109f972e4;
      ppplVar6 = *ppppplVar8[0xe];
      if (*(int *)(ppplVar6 + 3) == 5) {
        FUN_109f97d24(*(undefined1 *)((long)ppplVar6 + 0x45),ppplVar6[9]);
        pcVar7 = *(code **)(*param_2 + 0x18);
        puVar3 = &UNK_10f629640;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,&DAT_10f62a9e8);
        FUN_109f97178(&ppppppplStack_88,param_2,param_3,ppppplVar8 + 0xb,param_5);
        if ((bStack_60 & 1) == 0) goto LAB_109f972e4;
        pcVar7 = *(code **)(*param_2 + 0x18);
        puVar3 = &DAT_10f62a9ea;
      }
LAB_109f97294:
      (*pcVar7)(param_2,puVar3);
      goto LAB_109f974ac;
    }
    if (*(int *)(ppppplVar8 + 5) != 0x154) {
      ppppppplStack_88 = (long *******)(ppppplVar8 + 6);
      FUN_109f73558(param_3 + 0xd8,&ppppppplStack_88);
      (**(code **)(*param_2 + 0x18))(param_2,&UNK_10f62aa0c);
      goto LAB_109f974ac;
    }
    ppppplVar8 = ppppplVar8 + 10;
LAB_109f972cc:
    FUN_109f97178(&ppppppplStack_88,param_2,param_3,ppppplVar8,param_5);
    if ((bStack_60 & 1) == 0) {
LAB_109f972e4:
      *(undefined4 *)param_1 = ppppppplStack_88._0_4_;
      param_1[1] = uStack_80;
      param_1[2] = CONCAT17(bStack_71,uStack_78);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_70,bStack_71);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_69;
      param_1[4] = uStack_68;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
  }
  else {
    if (iVar1 == 4) {
      if (*(int *)(ppppplVar8 + 5) == 0x112) {
        ppppplVar8 = ppppplVar8 + 0x10;
        goto LAB_109f972cc;
      }
    }
    else if (iVar1 == 5) {
      pcVar7 = *(code **)(*param_2 + 0x18);
      puVar3 = &DAT_10f3afb0c;
      goto LAB_109f97294;
    }
LAB_109f97314:
    ppppppplStack_88 = (long *******)pppppplVar4;
    FUN_109f73558(param_3 + 0xd8,&ppppppplStack_88);
    (**(code **)(*param_2 + 0x18))(param_2,&UNK_10f62aa0c);
  }
LAB_109f974ac:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 109f9781c; end: 109f9785b;  */

undefined8 * FUN_109f9781c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109f9785c; end: 109f9791f;  */

void FUN_109f9785c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puStack_d0;
  long alStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined1 uStack_91;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    puVar15 = puVar13 + 1;
    *puVar13 = *param_2;
LAB_109f97908:
    param_1[1] = (long)puVar15;
    return;
  }
  lVar12 = (long)puVar13 - *param_1;
  uVar1 = (lVar12 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_109f7b158();
    puVar13 = (undefined8 *)((long)plVar2 + lVar12);
    puVar15 = puVar13 + 1;
    *puVar13 = *param_2;
    lVar11 = (long)puVar13 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar12 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar15;
    param_1[2] = (long)(plVar2 + uVar10);
    if (lVar12 != 0) {
      __ZdlPv();
    }
    goto LAB_109f97908;
  }
  FUN_109f7b144();
  plVar2 = param_1 + 0xe9;
  puStack_b0 = param_2;
  FUN_109f7d2ac(plVar2,&puStack_b0);
  if ((plVar2 == (long *)0x0) && ((undefined8 *)param_1[0x107] != param_2)) {
    plVar2 = param_1 + 0x110;
    puStack_b0 = param_2;
    FUN_109f7e488(plVar2,&puStack_b0);
    if ((plVar2 == (long *)0x0) && ((undefined8 *)param_1[0x10a] != param_2)) {
      if ((undefined8 *)param_1[0xf6] != param_2) {
        plVar2 = param_1 + 0xff;
        puStack_b0 = param_2;
        FUN_109f7e488(plVar2,&puStack_b0);
        if ((plVar2 == (long *)0x0) && ((undefined8 *)param_1[0xf9] != param_2)) {
          plVar2 = param_1 + 0x124;
          puStack_b0 = param_2;
          FUN_109f7d2ac(plVar2,&puStack_b0);
          if (plVar2 == (long *)0x0) {
            if ((*(byte *)((long)param_2 + 0x21) >> 1 & 1) == 0) {
              plVar2 = param_1 + 0x9f;
              puStack_b0 = param_2;
              FUN_109f97eec(plVar2,&puStack_b0);
              if (plVar2 == (long *)0x0) {
                plVar2 = param_1 + 0x81;
                puStack_b0 = param_2;
                FUN_109f97eec(plVar2,&puStack_b0);
                if (plVar2 == (long *)0x0) {
                  pcVar8 = "";
                }
                else {
                  puVar13 = (undefined8 *)param_2[3];
                  if (puVar13 != (undefined8 *)0x0) {
                    puStack_b0 = puVar13;
                    _strlen();
                    plVar2 = param_1 + 0xda;
                    puStack_a8 = puVar13;
                    FUN_109f747c8(plVar2,&puStack_b0);
                    if (plVar2 != (long *)0x0) {
                      plVar5 = param_1 + 0x7c;
                      func_0x000109df6a34(plVar5,plVar2 + 4);
                      if (param_1 + 0x7d == plVar5) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = (undefined4)plVar5[7];
                      }
                      FUN_109f97e0c(alStack_c8,&uStack_91,uVar7);
                      uVar1 = plVar2[5];
                      plVar5 = (long *)plVar2[4];
                      if (-1 < (char)*(byte *)((long)plVar2 + 0x37)) {
                        uVar1 = (ulong)*(byte *)((long)plVar2 + 0x37);
                        plVar5 = plVar2 + 4;
                      }
                      plVar2 = alStack_c8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (plVar2,plVar5,uVar1);
                      puStack_a8 = (undefined8 *)plVar2[1];
                      puStack_b0 = (undefined8 *)*plVar2;
                      lStack_a0 = plVar2[2];
                      plVar2[1] = 0;
                      plVar2[2] = 0;
                      *plVar2 = 0;
                      func_0x000109259240(extraout_x8,&puStack_b0,&DAT_10f62a9e0);
                      goto LAB_109f97cbc;
                    }
                  }
                  pcVar8 = "sc_set0.UserUniforms->";
                }
                goto LAB_109f97968;
              }
              if (*(char *)(param_2 + 4) < '\0') {
                puVar13 = (undefined8 *)param_1[200];
                puVar14 = (undefined8 *)param_1[0xc9];
                puVar15 = param_2;
                if (puVar13 != puVar14) {
                  lVar12 = param_2[3];
                  puStack_d0 = param_2;
                  do {
                    puVar15 = (undefined8 *)*puVar13;
                    if (puVar15 == param_2) break;
                    lVar11 = puVar15[3];
                    if (lVar11 != 0 && lVar12 != 0) {
                      lVar3 = lVar11;
                      _strlen();
                      lVar4 = lVar12;
                      _strlen();
                      if ((lVar3 == lVar4) && (_memcmp(lVar11,lVar12,lVar3), (int)lVar11 == 0))
                      break;
                    }
                    puVar13 = puVar13 + 1;
                    puVar15 = puStack_d0;
                  } while (puVar13 != puVar14);
                }
                puStack_d0 = puVar15;
                param_1 = param_1 + 0x77;
                FUN_109f8cf84(param_1,&puStack_d0);
                if (param_1 == (long *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (undefined4)param_1[3];
                }
                if (param_2[0x11] != 0) {
                  lVar12 = param_2[2];
                  do {
                    lVar11 = lVar12;
                    if (*(char *)(lVar11 + 4) != '\x13') break;
                    lVar12 = *(long *)(lVar11 + 0x30);
                  } while (*(long *)(lVar11 + 0x30) != 0);
                  if (lVar11 != param_2[0x11]) {
                    FUN_109f97e0c(alStack_c8,&uStack_91,uVar7);
                    puVar6 = (undefined *)param_2[0x11];
                    if (((byte)puVar6[0xc] >> 1 & 1) == 0) {
                      FUN_109eca058();
                    }
                    else {
                      puVar6 = &UNK_10e05bf38 + *(long *)(puVar6 + 0x18);
                    }
                    func_0x000109259240(&puStack_b0,alStack_c8,puVar6);
                    func_0x000109259240(extraout_x8,&puStack_b0,&DAT_10f62a9e0);
                    goto LAB_109f97cbc;
                  }
                }
                FUN_109f97e0c(extraout_x8,&uStack_91,uVar7);
                return;
              }
            }
            else if (param_2[0x11] != 0) {
              lVar12 = param_2[2];
              do {
                lVar11 = lVar12;
                if (*(char *)(lVar11 + 4) != '\x13') break;
                lVar12 = *(long *)(lVar11 + 0x30);
              } while (*(long *)(lVar11 + 0x30) != 0);
              if (lVar11 != param_2[0x11]) {
                func_0x000107c31940(alStack_c8,&UNK_10f62aa1d);
                puVar6 = (undefined *)param_2[0x11];
                if (((byte)puVar6[0xc] >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                else {
                  puVar6 = &UNK_10e05bf38 + *(long *)(puVar6 + 0x18);
                }
                func_0x000109259240(&puStack_b0,alStack_c8,puVar6);
                func_0x000109259240(extraout_x8,&puStack_b0,&DAT_10f62a9e0);
LAB_109f97cbc:
                if (lStack_a0 < 0) {
                  __ZdlPv(puStack_b0);
                }
                if (-1 < cStack_b1) {
                  return;
                }
                __ZdlPv(alStack_c8[0]);
                return;
              }
            }
            pcVar8 = "sc_set0.";
            goto LAB_109f97968;
          }
        }
      }
      pcVar8 = "out.";
      goto LAB_109f97968;
    }
  }
  pcVar8 = "in.";
LAB_109f97968:
  func_0x000107c31940(extraout_x8,pcVar8);
  return;
}



/* Entry: 109f97920; end: 109f97d23;  */

void FUN_109f97920(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lStack_a0;
  long alStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar11 = param_2 + 0x748;
  lStack_80 = param_3;
  FUN_109f7d2ac(lVar11,&lStack_80);
  if ((lVar11 == 0) && (*(long *)(param_2 + 0x838) != param_3)) {
    lVar11 = param_2 + 0x880;
    lStack_80 = param_3;
    FUN_109f7e488(lVar11,&lStack_80);
    if ((lVar11 == 0) && (*(long *)(param_2 + 0x850) != param_3)) {
      if (*(long *)(param_2 + 0x7b0) != param_3) {
        lVar11 = param_2 + 0x7f8;
        lStack_80 = param_3;
        FUN_109f7e488(lVar11,&lStack_80);
        if ((lVar11 == 0) && (*(long *)(param_2 + 0x7c8) != param_3)) {
          lVar11 = param_2 + 0x920;
          lStack_80 = param_3;
          FUN_109f7d2ac(lVar11,&lStack_80);
          if (lVar11 == 0) {
            if ((*(byte *)(param_3 + 0x21) >> 1 & 1) == 0) {
              lVar11 = param_2 + 0x4f8;
              lStack_80 = param_3;
              FUN_109f97eec(lVar11,&lStack_80);
              if (lVar11 == 0) {
                lVar11 = param_2 + 0x408;
                lStack_80 = param_3;
                FUN_109f97eec(lVar11,&lStack_80);
                if (lVar11 == 0) {
                  pcVar6 = "";
                }
                else {
                  lVar11 = *(long *)(param_3 + 0x18);
                  if (lVar11 != 0) {
                    lStack_80 = lVar11;
                    _strlen();
                    lVar7 = param_2 + 0x6d0;
                    lStack_78 = lVar11;
                    FUN_109f747c8(lVar7,&lStack_80);
                    if (lVar7 != 0) {
                      lVar11 = param_2 + 0x3e0;
                      func_0x000109df6a34(lVar11,lVar7 + 0x20);
                      if (param_2 + 1000 == lVar11) {
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = *(undefined4 *)(lVar11 + 0x38);
                      }
                      FUN_109f97e0c(alStack_98,&uStack_61,uVar5);
                      uVar1 = *(ulong *)(lVar7 + 0x28);
                      lVar11 = *(long *)(lVar7 + 0x20);
                      if (-1 < (char)*(byte *)(lVar7 + 0x37)) {
                        uVar1 = (ulong)*(byte *)(lVar7 + 0x37);
                        lVar11 = lVar7 + 0x20;
                      }
                      plVar9 = alStack_98;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (plVar9,lVar11,uVar1);
                      lStack_78 = plVar9[1];
                      lStack_80 = *plVar9;
                      lStack_70 = plVar9[2];
                      plVar9[1] = 0;
                      plVar9[2] = 0;
                      *plVar9 = 0;
                      func_0x000109259240(param_1,&lStack_80,&DAT_10f62a9e0);
                      goto LAB_109f97cbc;
                    }
                  }
                  pcVar6 = "sc_set0.UserUniforms->";
                }
                goto LAB_109f97968;
              }
              if (*(char *)(param_3 + 0x20) < '\0') {
                plVar9 = *(long **)(param_2 + 0x640);
                plVar10 = *(long **)(param_2 + 0x648);
                lVar11 = param_3;
                if (plVar9 != plVar10) {
                  lVar7 = *(long *)(param_3 + 0x18);
                  lStack_a0 = param_3;
                  do {
                    lVar11 = *plVar9;
                    if (lVar11 == param_3) break;
                    lVar8 = *(long *)(lVar11 + 0x18);
                    if (lVar8 != 0 && lVar7 != 0) {
                      lVar2 = lVar8;
                      _strlen();
                      lVar3 = lVar7;
                      _strlen();
                      if ((lVar2 == lVar3) && (_memcmp(lVar8,lVar7,lVar2), (int)lVar8 == 0)) break;
                    }
                    plVar9 = plVar9 + 1;
                    lVar11 = lStack_a0;
                  } while (plVar9 != plVar10);
                }
                lStack_a0 = lVar11;
                param_2 = param_2 + 0x3b8;
                FUN_109f8cf84(param_2,&lStack_a0);
                if (param_2 == 0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(undefined4 *)(param_2 + 0x18);
                }
                if (*(long *)(param_3 + 0x88) != 0) {
                  lVar11 = *(long *)(param_3 + 0x10);
                  do {
                    lVar7 = lVar11;
                    if (*(char *)(lVar7 + 4) != '\x13') break;
                    lVar11 = *(long *)(lVar7 + 0x30);
                  } while (*(long *)(lVar7 + 0x30) != 0);
                  if (lVar7 != *(long *)(param_3 + 0x88)) {
                    FUN_109f97e0c(alStack_98,&uStack_61,uVar5);
                    puVar4 = *(undefined **)(param_3 + 0x88);
                    if (((byte)puVar4[0xc] >> 1 & 1) == 0) {
                      FUN_109eca058();
                    }
                    else {
                      puVar4 = &UNK_10e05bf38 + *(long *)(puVar4 + 0x18);
                    }
                    func_0x000109259240(&lStack_80,alStack_98,puVar4);
                    func_0x000109259240(param_1,&lStack_80,&DAT_10f62a9e0);
                    goto LAB_109f97cbc;
                  }
                }
                FUN_109f97e0c(param_1,&uStack_61,uVar5);
                return;
              }
            }
            else if (*(long *)(param_3 + 0x88) != 0) {
              lVar11 = *(long *)(param_3 + 0x10);
              do {
                lVar7 = lVar11;
                if (*(char *)(lVar7 + 4) != '\x13') break;
                lVar11 = *(long *)(lVar7 + 0x30);
              } while (*(long *)(lVar7 + 0x30) != 0);
              if (lVar7 != *(long *)(param_3 + 0x88)) {
                func_0x000107c31940(alStack_98,&UNK_10f62aa1d);
                puVar4 = *(undefined **)(param_3 + 0x88);
                if (((byte)puVar4[0xc] >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                else {
                  puVar4 = &UNK_10e05bf38 + *(long *)(puVar4 + 0x18);
                }
                func_0x000109259240(&lStack_80,alStack_98,puVar4);
                func_0x000109259240(param_1,&lStack_80,&DAT_10f62a9e0);
LAB_109f97cbc:
                if (lStack_70 < 0) {
                  __ZdlPv(lStack_80);
                }
                if (-1 < cStack_81) {
                  return;
                }
                __ZdlPv(alStack_98[0]);
                return;
              }
            }
            pcVar6 = "sc_set0.";
            goto LAB_109f97968;
          }
        }
      }
      pcVar6 = "out.";
      goto LAB_109f97968;
    }
  }
  pcVar6 = "in.";
LAB_109f97968:
  func_0x000107c31940(param_1,pcVar6);
  return;
}



/* Entry: 109f97d24; end: 109f97d5f;  */

ulong FUN_109f97d24(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (param_1 & 0xaaaaaaaa) >> 1 | (param_1 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar1 = (long)(int)param_2;
  if (uVar3 != 5) {
    uVar1 = param_2;
  }
  uVar2 = (long)(short)param_2;
  if (uVar3 != 4) {
    uVar2 = uVar1;
  }
  uVar1 = -(param_2 & 1);
  if (uVar3 != 0) {
    uVar1 = (long)(char)param_2;
  }
  if (uVar3 < 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 109f97d60; end: 109f97e0b;  */

void FUN_109f97d60(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((uint)param_2 < 6) {
    uVar4 = *(ulong *)(&UNK_110b95c48 + (param_2 & 0xffffffff) * 0x10);
    if (0x7ffffffffffffff7 < uVar4) {
      func_0x000104c4f6b8();
      pcStack_38 = FUN_109f97e0c;
      uStack_50 = uVar4;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      __ZNSt3__19to_stringEj(auStack_88,param_2);
      puVar3 = auStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar3,0,&UNK_10f62aa3d,6);
      uStack_68 = puVar3[1];
      uStack_70 = *puVar3;
      lStack_60 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar3 = &uStack_70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar3,&DAT_10f62a9de,1);
      uVar6 = *puVar3;
      extraout_x8[1] = puVar3[1];
      *extraout_x8 = uVar6;
      extraout_x8[2] = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      return;
    }
    puVar5 = (&PTR_DAT_110b95c40)[(param_2 & 0xffffffff) * 2];
    if (uVar4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
      puVar2 = param_1;
      if (uVar4 == 0) goto LAB_109f97df4;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((uVar4 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar4 | 7) + 1);
      }
      puVar2 = puVar1;
      __Znwm();
      param_1[1] = uVar4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
    _memmove(puVar2,puVar5,uVar4);
    param_1 = puVar2;
  }
  else {
    uVar4 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
LAB_109f97df4:
  *(undefined1 *)((long)param_1 + uVar4) = 0;
  return;
}



/* Entry: 109f97e0c; end: 109f97eeb;  */

void FUN_109f97e0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  __ZNSt3__19to_stringEj(auStack_58,param_3);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar1,0,&UNK_10f62aa3d,6);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  lStack_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar1,&DAT_10f62a9de,1);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 109f97eec; end: 109f9809b;  */

long * FUN_109f97eec(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 109f9809c; end: 109f9830b;  */

undefined1  [16] FUN_109f9809c(long *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x24;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  uVar4 = *param_2;
  uVar8 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar8 = (uVar4 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar12 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar7 = uVar8 - 1;
    if ((uVar8 & uVar7) == 0) {
      unaff_x24 = uVar12 & uVar7;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar8 <= uVar12) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar12 / uVar8;
        }
        unaff_x24 = uVar12 - uVar10 * uVar8;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar9; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar10 = plVar11[1];
        if (uVar10 == uVar12) {
          if (plVar11[2] == uVar4) {
            uVar3 = 0;
            goto LAB_109f982cc;
          }
        }
        else {
          if ((uVar8 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar8 <= uVar10) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar2 * uVar8;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar11 = (long *)0x38;
  __Znwm();
  lVar5 = *param_3;
  plVar11[1] = uVar12;
  plVar11[2] = lVar5;
  lVar14 = param_3[2];
  lVar13 = param_3[1];
  param_3[1] = 0;
  param_3[2] = 0;
  lVar5 = param_3[3];
  lVar1 = param_3[4];
  param_3[3] = 0;
  *plVar11 = 0;
  plVar11[4] = lVar14;
  plVar11[3] = lVar13;
  plVar11[5] = lVar5;
  plVar11[6] = lVar1;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar8) {
      uVar4 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar4 = uVar4 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    FUN_109f9830c(param_1,uVar4);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar8 <= uVar12) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar12 / uVar8;
        }
        unaff_x24 = uVar12 - uVar4 * uVar8;
      }
    }
  }
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar11 == 0) goto LAB_109f982bc;
    uVar4 = *(ulong *)(*plVar11 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar4 = uVar4 & uVar8 - 1;
    }
    else if (uVar8 <= uVar4) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar4 / uVar8;
      }
      uVar4 = uVar4 - uVar12 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar11 = *plVar6;
  }
  *plVar6 = (long)plVar11;
LAB_109f982bc:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_109f982cc:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar11;
  return auVar15;
}



/* Entry: 109f9830c; end: 109f983db;  */

void FUN_109f9830c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_109f98354:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x18));
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
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_109f98354;
  }
  return;
}



/* Entry: 109f983dc; end: 109f985a7;  */

void FUN_109f983dc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x18));
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
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 109f985a8; end: 109f9860b;  */

long * FUN_109f985a8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 109f9860c; end: 109f98643;  */

void FUN_109f9860c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109f9860c(*param_1);
    FUN_109f9860c(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109f98644; end: 109f986a7;  */

long * FUN_109f98644(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 109f986a8; end: 109f98707;  */

void FUN_109f986a8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_109f986a8(*param_1);
  FUN_109f986a8(param_1[1]);
  plVar1 = (long *)param_1[7];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109f98708; end: 109f98763;  */

long * FUN_109f98708(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109f98764(plVar1 + 2);
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



/* Entry: 109f98764; end: 109f987ab;  */

void FUN_109f98764(undefined8 *param_1)

{
  if ((undefined8 *)param_1[3] != param_1 + 5) {
    _free();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109f987ac; end: 109f98807;  */

long * FUN_109f987ac(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109f98808(plVar1 + 2);
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



/* Entry: 109f98808; end: 109f9884f;  */

void FUN_109f98808(undefined8 *param_1)

{
  if ((undefined8 *)param_1[3] != param_1 + 5) {
    _free();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109f98850; end: 109f988b3;  */

long * FUN_109f98850(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 109f988b4; end: 109f988eb;  */

void FUN_109f988b4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109f988b4(*param_1);
    FUN_109f988b4(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109f988ec; end: 109f9a5a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109f988ec(long *param_1)

{
  long *******ppppppplVar1;
  long *****ppppplVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  code *pcVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long *plVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  long *******ppppppplVar16;
  uint uVar17;
  long *plVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 ****ppppuVar26;
  undefined4 uVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long *****ppppplVar30;
  long ******pppppplVar31;
  long *plVar32;
  undefined8 *puVar33;
  long *****ppppplVar34;
  uint uVar35;
  long *******ppppppplVar36;
  long lVar37;
  ulong uVar38;
  undefined4 uVar39;
  long ******pppppplVar40;
  undefined8 *puVar41;
  long *******unaff_x24;
  undefined8 ******ppppppuVar42;
  long lVar43;
  uint *puVar44;
  long *****ppppplVar45;
  long ******pppppplVar46;
  long *****ppppplVar47;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  undefined8 *******pppppppuStack_300;
  long ******pppppplStack_2f8;
  undefined8 uStack_2f0;
  uint *puStack_2e0;
  uint *puStack_2d8;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined8 ******ppppppuStack_2a8;
  undefined8 ******ppppppuStack_2a0;
  undefined1 *puStack_290;
  ulong uStack_288;
  undefined1 auStack_280 [128];
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  undefined8 *******pppppppuStack_1d0;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  char cStack_1b9;
  undefined8 *******pppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 uStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x5a) = 1;
    lVar37 = param_1[1];
    ppppppplStack_198 = (long *******)CONCAT44(ppppppplStack_198._4_4_,0xffffffff);
    func_0x00010742638c(param_1 + 0x86,*(long *)(lVar37 + 0x728) - *(long *)(lVar37 + 0x720) >> 6,
                        &ppppppplStack_198);
    FUN_109f9c944(&puStack_2e0,lVar37 + 0x358);
    if (puStack_2e0 != puStack_2d8) {
      ppppppplVar1 = (long *******)(param_1 + 0x7e);
      ppppplVar2 = (long *****)(param_1 + 0x80);
      puVar44 = puStack_2e0;
      do {
        uVar3 = *puVar44;
        uStack_288 = 0x1000000000;
        uVar21 = *(long *)(lVar37 + 0x728) - *(long *)(lVar37 + 0x720) >> 6;
        puStack_290 = auStack_280;
        if (0x10 < uVar21) {
          func_0x000107c2b01c(&puStack_290,auStack_280,uVar21,8);
        }
        ppppppplVar22 = (long *******)param_1[0x84];
        ppppppplVar36 = (long *******)(param_1 + 0x84);
        while (ppppppplVar16 = ppppppplVar36, ppppppplVar22 != (long *******)0x0) {
          while (ppppppplVar16 = ppppppplVar22, *(uint *)(ppppppplVar16 + 4) <= uVar3) {
            if (uVar3 <= *(uint *)(ppppppplVar16 + 4)) goto LAB_109f98ab8;
            ppppppplVar22 = (long *******)ppppppplVar16[1];
            if ((long *******)ppppppplVar16[1] == (long *******)0x0) {
              ppppppplVar36 = ppppppplVar16 + 1;
              goto LAB_109f98a50;
            }
          }
          ppppppplVar36 = ppppppplVar16;
          ppppppplVar22 = (long *******)*ppppppplVar16;
        }
LAB_109f98a50:
        ppppppplVar8 = (long *******)0x50;
        __Znwm();
        *(uint *)(ppppppplVar8 + 4) = uVar3;
        ppppppplVar8[6] = (long ******)0x0;
        ppppppplVar8[5] = (long ******)0x0;
        ppppppplVar8[8] = (long ******)0x0;
        ppppppplVar8[7] = (long ******)0x0;
        *(undefined4 *)(ppppppplVar8 + 9) = 0x3f800000;
        *ppppppplVar8 = (long ******)0x0;
        ppppppplVar8[1] = (long ******)0x0;
        ppppppplVar8[2] = (long ******)ppppppplVar16;
        *ppppppplVar36 = (long ******)ppppppplVar8;
        ppppppplVar22 = ppppppplVar8;
        if (*(long *)param_1[0x83] != 0) {
          param_1[0x83] = *(long *)param_1[0x83];
          ppppppplVar22 = (long *******)*ppppppplVar36;
        }
        func_0x000107c27d40(param_1[0x84],ppppppplVar22);
        param_1[0x85] = param_1[0x85] + 1;
        ppppppplVar16 = ppppppplVar8;
LAB_109f98ab8:
        lVar23 = *(long *)(lVar37 + 0x720);
        if (*(long *)(lVar37 + 0x728) != lVar23) {
          uVar21 = 0;
          ppppppplVar22 = ppppppplVar16 + 7;
          do {
            puVar41 = (undefined8 *)(lVar23 + uVar21 * 0x40);
            lVar23 = lVar37 + 0x358;
            FUN_109f9ca04(lVar23,puVar41);
            if ((uint)lVar23 == uVar3) {
              uVar35 = (uint)uStack_288;
              uVar38 = uStack_288 & 0xffffffff;
              iVar4 = *(int *)(puVar41 + 4);
              if (iVar4 < 4) {
                if (iVar4 == 1) {
                  if (*(long *)(lVar37 + 0x6b0) == 0) {
LAB_109f98efc:
                    plVar18 = (long *)param_1[0x55];
                    if (plVar18 == (long *)0x0) {
                      lVar23 = param_1[1];
                      func_0x000107c31940(&ppppppplStack_198,&UNK_10f62ae4d);
                      plVar18 = param_1;
                      FUN_109f9d1dc(param_1,&ppppppplStack_198,lVar23 + 0x610,param_1 + 0x5b,
                                    param_1 + 0x65,0);
                      param_1[0x55] = (long)plVar18;
                      if ((long)ppppppplStack_188 < 0) {
                        __ZdlPv(ppppppplStack_198);
                        plVar18 = (long *)param_1[0x55];
                      }
                      goto joined_r0x000109f98f50;
                    }
                  }
                  else {
                    if (*(char *)((long)puVar41 + 0x3f) < '\0') {
                      if (puVar41[6] == 0) goto LAB_109f98efc;
                    }
                    else if (*(char *)((long)puVar41 + 0x3f) == '\0') goto LAB_109f98efc;
                    lVar23 = lVar37 + 0x6a0;
                    FUN_109f9ca74(lVar23,puVar41 + 5);
                    plVar18 = param_1 + 0x6f;
                    FUN_109f9d808(plVar18,puVar41 + 5);
                    if (plVar18 == (long *)0x0) {
                      plVar32 = param_1 + 0x74;
                      FUN_109f9d8ec(plVar32,puVar41 + 5,puVar41 + 5);
                      plVar11 = param_1 + 0x79;
                      FUN_109f9d8ec(plVar11,puVar41 + 5,puVar41 + 5);
                      ppppppplVar8 = ppppppplVar1;
                      func_0x000107c31944(ppppppplVar1,puVar41 + 5);
                      ppppppplVar28 = (long *******)param_1[0x7f];
                      if (ppppppplVar28 != (long *******)0x0) {
                        uVar24 = (long)ppppppplVar28 - 1;
                        if (((ulong)ppppppplVar28 & uVar24) == 0) {
                          ppppppplVar36 = (long *******)(uVar24 & (ulong)ppppppplVar8);
                        }
                        else {
                          ppppppplVar36 = ppppppplVar8;
                          if (ppppppplVar28 <= ppppppplVar8) {
                            uVar6 = 0;
                            if (ppppppplVar28 != (long *******)0x0) {
                              uVar6 = (ulong)ppppppplVar8 / (ulong)ppppppplVar28;
                            }
                            ppppppplVar36 =
                                 (long *******)((long)ppppppplVar8 - uVar6 * (long)ppppppplVar28);
                          }
                        }
                        if ((*ppppppplVar1)[(long)ppppppplVar36] != (long *****)0x0) {
                          for (unaff_x24 = (long *******)*(*ppppppplVar1)[(long)ppppppplVar36];
                              unaff_x24 != (long *******)0x0; unaff_x24 = (long *******)*unaff_x24)
                          {
                            ppppppplVar29 = (long *******)unaff_x24[1];
                            if (ppppppplVar29 == ppppppplVar8) {
                              ppppppplVar29 = ppppppplVar1;
                              func_0x000104c4fbc4(ppppppplVar1,unaff_x24 + 2,puVar41 + 5);
                              if (((ulong)ppppppplVar29 & 1) != 0) goto LAB_109f99724;
                            }
                            else {
                              if (((ulong)ppppppplVar28 & uVar24) == 0) {
                                ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & uVar24);
                              }
                              else if (ppppppplVar28 <= ppppppplVar29) {
                                uVar6 = 0;
                                if (ppppppplVar28 != (long *******)0x0) {
                                  uVar6 = (ulong)ppppppplVar29 / (ulong)ppppppplVar28;
                                }
                                ppppppplVar29 =
                                     (long *******)
                                     ((long)ppppppplVar29 - uVar6 * (long)ppppppplVar28);
                              }
                              if (ppppppplVar29 != ppppppplVar36) break;
                            }
                          }
                        }
                      }
                      unaff_x24 = (long *******)0xb8;
                      __Znwm();
                      ppppppplStack_188 = (long *******)0x0;
                      *unaff_x24 = (long ******)0x0;
                      unaff_x24[1] = (long ******)ppppppplVar8;
                      ppppppplStack_198 = unaff_x24;
                      ppppppplStack_190 = ppppppplVar1;
                      if (*(char *)((long)puVar41 + 0x3f) < '\0') {
                        func_0x000107c3192c(unaff_x24 + 2,puVar41[5],puVar41[6]);
                      }
                      else {
                        pppppplVar9 = (long ******)puVar41[6];
                        pppppplVar40 = (long ******)puVar41[5];
                        unaff_x24[4] = (long ******)puVar41[7];
                        unaff_x24[3] = pppppplVar9;
                        unaff_x24[2] = pppppplVar40;
                      }
                      unaff_x24[5] = (long ******)(unaff_x24 + 7);
                      unaff_x24[6] = (long ******)0x1000000000;
                      ppppppplStack_188 = (long *******)CONCAT71(ppppppplStack_188._1_7_,1);
                      if ((ppppppplVar28 == (long *******)0x0) ||
                         (*(float *)(param_1 + 0x82) * (float)ppppppplVar28 <
                          (float)(param_1[0x81] + 1))) {
                        uVar24 = 1;
                        if ((long *******)0x2 < ppppppplVar28) {
                          uVar24 = (ulong)(((ulong)ppppppplVar28 & (long)ppppppplVar28 - 1U) != 0);
                        }
                        ppppppplVar36 = (long *******)(uVar24 | (long)ppppppplVar28 << 1);
                        ppppppplVar28 =
                             (long *******)
                             (long)((float)(param_1[0x81] + 1) / *(float *)(param_1 + 0x82));
                        if (ppppppplVar36 <= ppppppplVar28) {
                          ppppppplVar36 = ppppppplVar28;
                        }
                        if ((long)ppppppplVar36 - 1U == 0) {
                          ppppppplVar36 = (long *******)0x2;
                        }
                        else if (((ulong)ppppppplVar36 & (long)ppppppplVar36 - 1U) != 0) {
                          __ZNSt3__112__next_primeEm();
                        }
                        ppppppplVar28 = (long *******)param_1[0x7f];
                        if (ppppppplVar28 < ppppppplVar36) {
LAB_109f99508:
                          ppppppplVar28 = ppppppplVar36;
                          if ((ulong)ppppppplVar28 >> 0x3d != 0) goto LAB_109f9a32c;
                          pppppplVar40 = (long ******)((long)ppppppplVar28 << 3);
                          __Znwm();
                          pppppplVar9 = *ppppppplVar1;
                          *ppppppplVar1 = pppppplVar40;
                          if (pppppplVar9 != (long ******)0x0) {
                            __ZdlPv();
                          }
                          ppppppplVar36 = (long *******)0x0;
                          param_1[0x7f] = (long)ppppppplVar28;
                          do {
                            (*ppppppplVar1)[(long)ppppppplVar36] = (long *****)0x0;
                            ppppppplVar36 = (long *******)((long)ppppppplVar36 + 1);
                          } while (ppppppplVar28 != ppppppplVar36);
                          ppppplVar34 = (long *****)*ppppplVar2;
                          if (ppppplVar34 != (long *****)0x0) {
                            ppppppplVar36 = (long *******)ppppplVar34[1];
                            uVar24 = (long)ppppppplVar28 - 1;
                            if (((ulong)ppppppplVar28 & uVar24) == 0) {
                              ppppppplVar36 = (long *******)((ulong)ppppppplVar36 & uVar24);
                            }
                            else if (ppppppplVar28 <= ppppppplVar36) {
                              uVar6 = 0;
                              if (ppppppplVar28 != (long *******)0x0) {
                                uVar6 = (ulong)ppppppplVar36 / (ulong)ppppppplVar28;
                              }
                              ppppppplVar36 =
                                   (long *******)((long)ppppppplVar36 - uVar6 * (long)ppppppplVar28)
                              ;
                            }
                            (*ppppppplVar1)[(long)ppppppplVar36] = ppppplVar2;
                            ppppplVar30 = (long *****)*ppppplVar34;
                            while (ppppplVar30 != (long *****)0x0) {
                              ppppppplVar29 = (long *******)ppppplVar30[1];
                              if (((ulong)ppppppplVar28 & uVar24) == 0) {
                                ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & uVar24);
                              }
                              else if (ppppppplVar28 <= ppppppplVar29) {
                                uVar6 = 0;
                                if (ppppppplVar28 != (long *******)0x0) {
                                  uVar6 = (ulong)ppppppplVar29 / (ulong)ppppppplVar28;
                                }
                                ppppppplVar29 =
                                     (long *******)
                                     ((long)ppppppplVar29 - uVar6 * (long)ppppppplVar28);
                              }
                              ppppplVar45 = ppppplVar30;
                              if (ppppppplVar29 != ppppppplVar36) {
                                pppppplVar40 = *ppppppplVar1;
                                if (pppppplVar40[(long)ppppppplVar29] == (long *****)0x0) {
                                  pppppplVar40[(long)ppppppplVar29] = ppppplVar34;
                                  ppppppplVar36 = ppppppplVar29;
                                }
                                else {
                                  *ppppplVar34 = *ppppplVar30;
                                  *ppppplVar30 = *pppppplVar40[(long)ppppppplVar29];
                                  *pppppplVar40[(long)ppppppplVar29] = (long ****)ppppplVar30;
                                  ppppplVar45 = ppppplVar34;
                                }
                              }
                              ppppplVar34 = ppppplVar45;
                              ppppplVar30 = (long *****)*ppppplVar45;
                            }
                          }
                        }
                        else if (ppppppplVar36 < ppppppplVar28) {
                          ppppppplVar29 =
                               (long *******)
                               (long)((float)(ulong)param_1[0x81] / *(float *)(param_1 + 0x82));
                          if ((ppppppplVar28 < (long *******)0x3) ||
                             (((ulong)ppppppplVar28 & (long)ppppppplVar28 - 1U) != 0)) {
                            __ZNSt3__112__next_primeEm();
                          }
                          else if ((long *******)0x1 < ppppppplVar29) {
                            ppppppplVar29 =
                                 (long *******)(1L << (-LZCOUNT((long)ppppppplVar29 + -1) & 0x3fU));
                          }
                          if (ppppppplVar36 <= ppppppplVar29) {
                            ppppppplVar36 = ppppppplVar29;
                          }
                          if (ppppppplVar36 < ppppppplVar28) {
                            if (ppppppplVar36 != (long *******)0x0) goto LAB_109f99508;
                            pppppplVar40 = *ppppppplVar1;
                            *ppppppplVar1 = (long ******)0x0;
                            if (pppppplVar40 != (long ******)0x0) {
                              __ZdlPv();
                            }
                            ppppppplVar28 = (long *******)0x0;
                            param_1[0x7f] = 0;
                          }
                          else {
                            ppppppplVar28 = (long *******)param_1[0x7f];
                          }
                        }
                        if (((ulong)ppppppplVar28 & (long)ppppppplVar28 - 1U) == 0) {
                          ppppppplVar36 =
                               (long *******)((long)ppppppplVar28 - 1U & (ulong)ppppppplVar8);
                        }
                        else {
                          ppppppplVar36 = ppppppplVar8;
                          if (ppppppplVar28 <= ppppppplVar8) {
                            uVar24 = 0;
                            if (ppppppplVar28 != (long *******)0x0) {
                              uVar24 = (ulong)ppppppplVar8 / (ulong)ppppppplVar28;
                            }
                            ppppppplVar36 =
                                 (long *******)((long)ppppppplVar8 - uVar24 * (long)ppppppplVar28);
                          }
                        }
                      }
                      pppppplVar40 = *ppppppplVar1;
                      ppppplVar34 = pppppplVar40[(long)ppppppplVar36];
                      if (ppppplVar34 == (long *****)0x0) {
                        *unaff_x24 = (long ******)*ppppplVar2;
                        *ppppplVar2 = (long ****)unaff_x24;
                        pppppplVar40[(long)ppppppplVar36] = ppppplVar2;
                        if (*unaff_x24 != (long ******)0x0) {
                          ppppppplVar8 = (long *******)(*unaff_x24)[1];
                          if (((ulong)ppppppplVar28 & (long)ppppppplVar28 - 1U) == 0) {
                            ppppppplVar8 = (long *******)
                                           ((ulong)ppppppplVar8 & (long)ppppppplVar28 - 1U);
                          }
                          else if (ppppppplVar28 <= ppppppplVar8) {
                            uVar24 = 0;
                            if (ppppppplVar28 != (long *******)0x0) {
                              uVar24 = (ulong)ppppppplVar8 / (ulong)ppppppplVar28;
                            }
                            ppppppplVar8 = (long *******)
                                           ((long)ppppppplVar8 - uVar24 * (long)ppppppplVar28);
                          }
                          (*ppppppplVar1)[(long)ppppppplVar8] = (long *****)unaff_x24;
                        }
                      }
                      else {
                        *unaff_x24 = (long ******)*ppppplVar34;
                        *ppppplVar34 = (long ****)unaff_x24;
                      }
                      param_1[0x81] = param_1[0x81] + 1;
LAB_109f99724:
                      plVar18 = param_1;
                      FUN_109f9d1dc(param_1,puVar41 + 5,lVar23,plVar32 + 5,plVar11 + 5,unaff_x24 + 5
                                   );
                      plVar32 = param_1 + 0x6f;
                      FUN_109f9e23c(plVar32,puVar41 + 5,puVar41 + 5);
                      plVar32[5] = (long)plVar18;
                    }
                    else {
                      plVar18 = (long *)plVar18[5];
                    }
joined_r0x000109f98f50:
                    if (plVar18 == (long *)0x0) goto LAB_109f98f6c;
                  }
                  func_0x000109da017c(plVar18,2);
                  func_0x000109d33d14(&puStack_290,plVar18);
                }
                else if (iVar4 == 2) {
                  if ((puVar41[1] != 0) && (lVar23 = *(long *)(puVar41[1] + 0x88), lVar23 != 0)) {
                    lVar43 = *param_1;
                    FUN_109f9f1c0(lVar43,lVar23,param_1 + 0x38);
                    if (lVar43 != 0) {
                      func_0x000109da017c();
                      func_0x000109d33d14(&puStack_290,lVar43);
                    }
                  }
                }
                else if (((iVar4 == 3) && (puVar41[1] != 0)) &&
                        (lVar23 = *(long *)(puVar41[1] + 0x88), lVar23 != 0)) {
                  lVar43 = *param_1;
                  FUN_109f9f1c0(lVar43,lVar23,param_1 + 0x38);
                  if (lVar43 != 0) {
                    func_0x000109da017c();
                    func_0x000109d33d14(&puStack_290,lVar43);
                  }
                }
              }
              else if (iVar4 < 6) {
                if (iVar4 == 4) {
                  if ((puVar41[1] == 0) || (lVar23 = *(long *)(puVar41[1] + 0x10), lVar23 == 0)) {
                    uVar20 = 0;
                    uVar17 = 1;
                  }
                  else {
                    uVar20 = *(uint *)(lVar23 + 4);
                    uVar17 = uVar20 >> 0x10 & 0xf;
                    uVar20 = uVar20 >> 0x15 & 1;
                  }
                  FUN_109f9cab0(param_1,uVar17,uVar20);
                  func_0x000109d33d14(&puStack_290);
                }
                else if (iVar4 == 5) {
                  if (param_1[0x53] == 0) {
                    plVar32 = (long *)*param_1;
                    plVar18 = (long *)(*plVar32 + 0x7e8);
                    FUN_109d34148(plVar18,0x20,3);
                    *plVar18 = (long)plVar32;
                    *(undefined4 *)(plVar18 + 1) = 0x10;
                    *(undefined8 *)((long)plVar18 + 0x14) = 0;
                    *(undefined8 *)((long)plVar18 + 0xc) = 0;
                    *(undefined4 *)((long)plVar18 + 0x1c) = 0;
                    FUN_109d9fbf8();
                    param_1[0x53] = (long)plVar18;
                    func_0x000107c31940(&ppppppplStack_198,&UNK_10f62ae0f);
                    plVar32 = param_1 + 0x38;
                    FUN_109f9de14(plVar32,&ppppppplStack_198,&ppppppplStack_198);
                    plVar32[5] = (long)plVar18;
                    if ((long)ppppppplStack_188 < 0) {
                      __ZdlPv(ppppppplStack_198);
                    }
                  }
                  lVar23 = param_1[0x54];
                  if (lVar23 == 0) {
                    plVar32 = (long *)*param_1;
                    ppppppplVar8 = (long *******)param_1[0x53];
                    func_0x000109da017c(ppppppplVar8,2);
                    plVar18 = (long *)(*plVar32 + 0x7e8);
                    ppppppplStack_198 = ppppppplVar8;
                    FUN_109d34148(plVar18,0x20,3);
                    *plVar18 = (long)plVar32;
                    *(undefined4 *)(plVar18 + 1) = 0x10;
                    *(undefined8 *)((long)plVar18 + 0x14) = 0;
                    *(undefined8 *)((long)plVar18 + 0xc) = 0;
                    *(undefined4 *)((long)plVar18 + 0x1c) = 0;
                    FUN_109d9fbf8();
                    FUN_109d9fb38(plVar18,&ppppppplStack_198,1,0);
                    param_1[0x54] = (long)plVar18;
                    func_0x000107c31940(&ppppppplStack_198,&UNK_10f62ae21);
                    plVar32 = param_1 + 0x38;
                    FUN_109f9de14(plVar32,&ppppppplStack_198,&ppppppplStack_198);
LAB_109f98dd4:
                    plVar32[5] = (long)plVar18;
                    if ((long)ppppppplStack_188 < 0) {
                      __ZdlPv(ppppppplStack_198);
                    }
                    lVar23 = param_1[0x54];
                  }
LAB_109f98df0:
                  func_0x000109d33d14(&puStack_290,lVar23);
                }
              }
              else if (iVar4 == 6) {
                if (puVar41[3] == 0) {
                  uVar20 = 0;
                  uVar17 = 1;
                }
                else {
                  uVar20 = *(uint *)(puVar41[3] + 4);
                  uVar17 = uVar20 >> 0x10 & 0xf;
                  uVar20 = uVar20 >> 0x15 & 1;
                }
                FUN_109f9cab0(param_1,uVar17,uVar20);
                func_0x000109d33d14(&puStack_290);
              }
              else if (iVar4 == 7) {
                if (param_1[0x53] == 0) {
                  plVar32 = (long *)*param_1;
                  plVar18 = (long *)(*plVar32 + 0x7e8);
                  FUN_109d34148(plVar18,0x20,3);
                  *plVar18 = (long)plVar32;
                  *(undefined4 *)(plVar18 + 1) = 0x10;
                  *(undefined8 *)((long)plVar18 + 0x14) = 0;
                  *(undefined8 *)((long)plVar18 + 0xc) = 0;
                  *(undefined4 *)((long)plVar18 + 0x1c) = 0;
                  FUN_109d9fbf8();
                  param_1[0x53] = (long)plVar18;
                  func_0x000107c31940(&ppppppplStack_198,&UNK_10f62ae0f);
                  plVar32 = param_1 + 0x38;
                  FUN_109f9de14(plVar32,&ppppppplStack_198,&ppppppplStack_198);
                  plVar32[5] = (long)plVar18;
                  if ((long)ppppppplStack_188 < 0) {
                    __ZdlPv(ppppppplStack_198);
                  }
                }
                lVar23 = param_1[0x54];
                if (lVar23 == 0) {
                  plVar32 = (long *)*param_1;
                  ppppppplVar8 = (long *******)param_1[0x53];
                  func_0x000109da017c(ppppppplVar8,2);
                  plVar18 = (long *)(*plVar32 + 0x7e8);
                  ppppppplStack_198 = ppppppplVar8;
                  FUN_109d34148(plVar18,0x20,3);
                  *plVar18 = (long)plVar32;
                  *(undefined4 *)(plVar18 + 1) = 0x10;
                  *(undefined8 *)((long)plVar18 + 0x14) = 0;
                  *(undefined8 *)((long)plVar18 + 0xc) = 0;
                  *(undefined4 *)((long)plVar18 + 0x1c) = 0;
                  FUN_109d9fbf8();
                  FUN_109d9fb38(plVar18,&ppppppplStack_198,1,0);
                  param_1[0x54] = (long)plVar18;
                  func_0x000107c31940(&ppppppplStack_198,&UNK_10f62ae21);
                  plVar32 = param_1 + 0x38;
                  FUN_109f9de14(plVar32,&ppppppplStack_198,&ppppppplStack_198);
                  goto LAB_109f98dd4;
                }
                goto LAB_109f98df0;
              }
LAB_109f98f6c:
              if (uVar35 < (uint)uStack_288) {
                do {
                  *(int *)(param_1[0x86] + uVar21 * 4) = (int)uVar38;
                  ppppppplVar8 = (long *******)*puVar41;
                  ppppppplVar36 = (long *******)ppppppplVar16[6];
                  if (ppppppplVar36 != (long *******)0x0) {
                    uVar24 = (long)ppppppplVar36 - 1;
                    if (((ulong)ppppppplVar36 & uVar24) == 0) {
                      unaff_x24 = (long *******)(uVar24 & (ulong)ppppppplVar8);
                    }
                    else {
                      unaff_x24 = ppppppplVar8;
                      if (ppppppplVar36 <= ppppppplVar8) {
                        uVar6 = 0;
                        if (ppppppplVar36 != (long *******)0x0) {
                          uVar6 = (ulong)ppppppplVar8 / (ulong)ppppppplVar36;
                        }
                        unaff_x24 = (long *******)((long)ppppppplVar8 - uVar6 * (long)ppppppplVar36)
                        ;
                      }
                    }
                    if (ppppppplVar16[5][(long)unaff_x24] != (long *****)0x0) {
                      for (pppppplVar40 = (long ******)*ppppppplVar16[5][(long)unaff_x24];
                          pppppplVar40 != (long ******)0x0;
                          pppppplVar40 = (long ******)*pppppplVar40) {
                        ppppppplVar28 = (long *******)pppppplVar40[1];
                        if (ppppppplVar28 == ppppppplVar8) {
                          if ((long *******)pppppplVar40[2] == ppppppplVar8) goto LAB_109f99298;
                        }
                        else {
                          if (((ulong)ppppppplVar36 & uVar24) == 0) {
                            ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & uVar24);
                          }
                          else if (ppppppplVar36 <= ppppppplVar28) {
                            uVar6 = 0;
                            if (ppppppplVar36 != (long *******)0x0) {
                              uVar6 = (ulong)ppppppplVar28 / (ulong)ppppppplVar36;
                            }
                            ppppppplVar28 =
                                 (long *******)((long)ppppppplVar28 - uVar6 * (long)ppppppplVar36);
                          }
                          if (ppppppplVar28 != unaff_x24) break;
                        }
                      }
                    }
                  }
                  pppppplVar40 = (long ******)0x20;
                  __Znwm();
                  *pppppplVar40 = (long *****)0x0;
                  pppppplVar40[1] = (long *****)ppppppplVar8;
                  pppppplVar40[2] = (long *****)*puVar41;
                  *(undefined4 *)(pppppplVar40 + 3) = 0;
                  if ((ppppppplVar36 == (long *******)0x0) ||
                     (*(float *)(ppppppplVar16 + 9) * (float)ppppppplVar36 <
                      (float)((long)ppppppplVar16[8] + 1))) {
                    uVar24 = 1;
                    if ((long *******)0x2 < ppppppplVar36) {
                      uVar24 = (ulong)(((ulong)ppppppplVar36 & (long)ppppppplVar36 - 1U) != 0);
                    }
                    ppppppplVar28 = (long *******)(uVar24 | (long)ppppppplVar36 << 1);
                    ppppppplVar29 =
                         (long *******)
                         (long)((float)((long)ppppppplVar16[8] + 1) / *(float *)(ppppppplVar16 + 9))
                    ;
                    if (ppppppplVar28 <= ppppppplVar29) {
                      ppppppplVar28 = ppppppplVar29;
                    }
                    if ((long)ppppppplVar28 - 1U == 0) {
                      ppppppplVar28 = (long *******)0x2;
                    }
                    else if (((ulong)ppppppplVar28 & (long)ppppppplVar28 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      ppppppplVar36 = (long *******)ppppppplVar16[6];
                    }
                    if (ppppppplVar36 < ppppppplVar28) {
LAB_109f990b4:
                      ppppppplVar36 = ppppppplVar28;
                      if ((ulong)ppppppplVar36 >> 0x3d != 0) {
                        func_0x000104c4f740();
                        goto LAB_109f9a330;
                      }
                      pppppplVar9 = (long ******)((long)ppppppplVar36 << 3);
                      __Znwm();
                      pppppplVar10 = ppppppplVar16[5];
                      ppppppplVar16[5] = pppppplVar9;
                      if (pppppplVar10 != (long ******)0x0) {
                        __ZdlPv();
                      }
                      ppppppplVar28 = (long *******)0x0;
                      ppppppplVar16[6] = (long ******)ppppppplVar36;
                      do {
                        ppppppplVar16[5][(long)ppppppplVar28] = (long *****)0x0;
                        ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1);
                      } while (ppppppplVar36 != ppppppplVar28);
                      pppppplVar9 = *ppppppplVar22;
                      if (pppppplVar9 != (long ******)0x0) {
                        ppppppplVar28 = (long *******)pppppplVar9[1];
                        uVar24 = (long)ppppppplVar36 - 1;
                        if (((ulong)ppppppplVar36 & uVar24) == 0) {
                          ppppppplVar28 = (long *******)((ulong)ppppppplVar28 & uVar24);
                        }
                        else if (ppppppplVar36 <= ppppppplVar28) {
                          uVar6 = 0;
                          if (ppppppplVar36 != (long *******)0x0) {
                            uVar6 = (ulong)ppppppplVar28 / (ulong)ppppppplVar36;
                          }
                          ppppppplVar28 =
                               (long *******)((long)ppppppplVar28 - uVar6 * (long)ppppppplVar36);
                        }
                        ppppppplVar16[5][(long)ppppppplVar28] = (long *****)ppppppplVar22;
                        pppppplVar10 = (long ******)*pppppplVar9;
                        while (pppppplVar10 != (long ******)0x0) {
                          ppppppplVar29 = (long *******)pppppplVar10[1];
                          if (((ulong)ppppppplVar36 & uVar24) == 0) {
                            ppppppplVar29 = (long *******)((ulong)ppppppplVar29 & uVar24);
                          }
                          else if (ppppppplVar36 <= ppppppplVar29) {
                            uVar6 = 0;
                            if (ppppppplVar36 != (long *******)0x0) {
                              uVar6 = (ulong)ppppppplVar29 / (ulong)ppppppplVar36;
                            }
                            ppppppplVar29 =
                                 (long *******)((long)ppppppplVar29 - uVar6 * (long)ppppppplVar36);
                          }
                          pppppplVar46 = pppppplVar10;
                          if (ppppppplVar29 != ppppppplVar28) {
                            pppppplVar31 = ppppppplVar16[5];
                            if (pppppplVar31[(long)ppppppplVar29] == (long *****)0x0) {
                              pppppplVar31[(long)ppppppplVar29] = (long *****)pppppplVar9;
                              ppppppplVar28 = ppppppplVar29;
                            }
                            else {
                              *pppppplVar9 = *pppppplVar10;
                              *pppppplVar10 = (long *****)*pppppplVar31[(long)ppppppplVar29];
                              *pppppplVar31[(long)ppppppplVar29] = (long ****)pppppplVar10;
                              pppppplVar46 = pppppplVar9;
                            }
                          }
                          pppppplVar9 = pppppplVar46;
                          pppppplVar10 = (long ******)*pppppplVar46;
                        }
                      }
                    }
                    else if (ppppppplVar28 < ppppppplVar36) {
                      ppppppplVar29 =
                           (long *******)
                           (long)((float)ppppppplVar16[8] / *(float *)(ppppppplVar16 + 9));
                      if ((ppppppplVar36 < (long *******)0x3) ||
                         (((ulong)ppppppplVar36 & (long)ppppppplVar36 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((long *******)0x1 < ppppppplVar29) {
                        ppppppplVar29 =
                             (long *******)(1L << (-LZCOUNT((long)ppppppplVar29 + -1) & 0x3fU));
                      }
                      if (ppppppplVar28 <= ppppppplVar29) {
                        ppppppplVar28 = ppppppplVar29;
                      }
                      if (ppppppplVar28 < ppppppplVar36) {
                        if (ppppppplVar28 != (long *******)0x0) goto LAB_109f990b4;
                        pppppplVar9 = ppppppplVar16[5];
                        ppppppplVar16[5] = (long ******)0x0;
                        if (pppppplVar9 != (long ******)0x0) {
                          __ZdlPv();
                        }
                        ppppppplVar36 = (long *******)0x0;
                        ppppppplVar16[6] = (long ******)0x0;
                      }
                      else {
                        ppppppplVar36 = (long *******)ppppppplVar16[6];
                      }
                    }
                    if (((ulong)ppppppplVar36 & (long)ppppppplVar36 - 1U) == 0) {
                      unaff_x24 = (long *******)((long)ppppppplVar36 - 1U & (ulong)ppppppplVar8);
                    }
                    else {
                      unaff_x24 = ppppppplVar8;
                      if (ppppppplVar36 <= ppppppplVar8) {
                        uVar24 = 0;
                        if (ppppppplVar36 != (long *******)0x0) {
                          uVar24 = (ulong)ppppppplVar8 / (ulong)ppppppplVar36;
                        }
                        unaff_x24 = (long *******)
                                    ((long)ppppppplVar8 - uVar24 * (long)ppppppplVar36);
                      }
                    }
                  }
                  pppppplVar10 = ppppppplVar16[5];
                  pppppplVar9 = (long ******)pppppplVar10[(long)unaff_x24];
                  if (pppppplVar9 == (long ******)0x0) {
                    *pppppplVar40 = (long *****)*ppppppplVar22;
                    *ppppppplVar22 = pppppplVar40;
                    pppppplVar10[(long)unaff_x24] = (long *****)ppppppplVar22;
                    if (*pppppplVar40 != (long *****)0x0) {
                      ppppppplVar8 = (long *******)(*pppppplVar40)[1];
                      if (((ulong)ppppppplVar36 & (long)ppppppplVar36 - 1U) == 0) {
                        ppppppplVar8 = (long *******)
                                       ((ulong)ppppppplVar8 & (long)ppppppplVar36 - 1U);
                      }
                      else if (ppppppplVar36 <= ppppppplVar8) {
                        uVar24 = 0;
                        if (ppppppplVar36 != (long *******)0x0) {
                          uVar24 = (ulong)ppppppplVar8 / (ulong)ppppppplVar36;
                        }
                        ppppppplVar8 = (long *******)
                                       ((long)ppppppplVar8 - uVar24 * (long)ppppppplVar36);
                      }
                      pppppplVar9 = ppppppplVar16[5] + (long)ppppppplVar8;
                      goto LAB_109f99288;
                    }
                  }
                  else {
                    *pppppplVar40 = *pppppplVar9;
LAB_109f99288:
                    *pppppplVar9 = (long *****)pppppplVar40;
                  }
                  ppppppplVar16[8] = (long ******)((long)ppppppplVar16[8] + 1);
LAB_109f99298:
                  *(int *)(pppppplVar40 + 3) = (int)uVar38;
                  uVar38 = uVar38 + 1;
                } while (uVar38 < (uStack_288 & 0xffffffff));
              }
            }
            uVar21 = uVar21 + 1;
            lVar23 = *(long *)(lVar37 + 0x720);
          } while (uVar21 < (ulong)(*(long *)(lVar37 + 0x728) - lVar23 >> 6));
        }
        if ((uint)uStack_288 != 0) {
          __ZNSt3__19to_stringEj(&ppppppplStack_198,uVar3);
          ppppppplVar36 = (long *******)&ppppppplStack_198;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (ppppppplVar36,0,&UNK_10f62ae37,0xd);
          pppppplStack_2f8 = ppppppplVar36[1];
          pppppppuStack_300 = (undefined8 *******)*ppppppplVar36;
          uStack_2f0 = ppppppplVar36[2];
          ppppppplVar36[1] = (long ******)0x0;
          ppppppplVar36[2] = (long ******)0x0;
          *ppppppplVar36 = (long ******)0x0;
          if ((long)ppppppplStack_188 < 0) {
            __ZdlPv(ppppppplStack_198);
          }
          lVar23 = *param_1;
          pppppppuVar12 = pppppppuStack_300;
          if (-1 < (long)uStack_2f0._7_1_) {
            pppppppuVar12 = &pppppppuStack_300;
          }
          pppppplVar40 = pppppplStack_2f8;
          if (-1 < (long)uStack_2f0) {
            pppppplVar40 = (long ******)(long)uStack_2f0._7_1_;
          }
          FUN_109d9fe2c(lVar23,pppppppuVar12,pppppplVar40);
          FUN_109d9fb38();
          plVar18 = param_1 + 0x38;
          FUN_109f9e23c(plVar18,&pppppppuStack_300,&pppppppuStack_300);
          plVar18[5] = lVar23;
          plVar32 = (long *)param_1[0x58];
          plVar18 = param_1 + 0x58;
          while (plVar11 = plVar18, plVar32 != (long *)0x0) {
            while (plVar18 = plVar32, *(uint *)(plVar18 + 4) <= uVar3) {
              if (uVar3 <= *(uint *)(plVar18 + 4)) goto LAB_109f99910;
              plVar32 = (long *)plVar18[1];
              if ((long *)plVar18[1] == (long *)0x0) {
                plVar11 = plVar18 + 1;
                goto LAB_109f998b4;
              }
            }
            plVar32 = (long *)*plVar18;
          }
LAB_109f998b4:
          plVar32 = (long *)0x30;
          __Znwm();
          *(uint *)(plVar32 + 4) = uVar3;
          plVar32[5] = 0;
          *plVar32 = 0;
          plVar32[1] = 0;
          plVar32[2] = (long)plVar18;
          *plVar11 = (long)plVar32;
          plVar18 = plVar32;
          if (*(long *)param_1[0x57] != 0) {
            param_1[0x57] = *(long *)param_1[0x57];
            plVar18 = (long *)*plVar11;
          }
          func_0x000107c27d40(param_1[0x58],plVar18);
          param_1[0x59] = param_1[0x59] + 1;
          plVar18 = plVar32;
LAB_109f99910:
          plVar18[5] = lVar23;
          if (uVar3 == 0) {
            param_1[0x56] = lVar23;
          }
          ppppppplStack_318 = (long *******)0x0;
          ppppppplStack_310 = (long *******)0x0;
          ppppppplStack_308 = (long *******)0x0;
          puVar33 = *(undefined8 **)(lVar37 + 0x728);
          for (puVar41 = *(undefined8 **)(lVar37 + 0x720); puVar41 != puVar33; puVar41 = puVar41 + 8
              ) {
            lVar23 = lVar37 + 0x358;
            FUN_109f9ca04(lVar23,puVar41);
            ppppppplVar36 = ppppppplStack_310;
            if ((uint)lVar23 == uVar3) {
              if (ppppppplStack_310 < ppppppplStack_308) {
                pppppplVar9 = (long ******)puVar41[1];
                pppppplVar40 = (long ******)*puVar41;
                pppppplVar46 = (long ******)puVar41[3];
                pppppplVar10 = (long ******)puVar41[2];
                *(undefined4 *)(ppppppplStack_310 + 4) = *(undefined4 *)(puVar41 + 4);
                ppppppplStack_310[1] = pppppplVar9;
                *ppppppplStack_310 = pppppplVar40;
                ppppppplStack_310[3] = pppppplVar46;
                ppppppplStack_310[2] = pppppplVar10;
                if (*(char *)((long)puVar41 + 0x3f) < '\0') {
                  func_0x000107c3192c(ppppppplStack_310 + 5,puVar41[5],puVar41[6]);
                }
                else {
                  pppppplVar9 = (long ******)puVar41[6];
                  pppppplVar40 = (long ******)puVar41[5];
                  ppppppplStack_310[7] = (long ******)puVar41[7];
                  ppppppplStack_310[6] = pppppplVar9;
                  ppppppplStack_310[5] = pppppplVar40;
                }
                ppppppplStack_310 = ppppppplVar36 + 8;
              }
              else {
                lVar23 = (long)ppppppplStack_310 - (long)ppppppplStack_318;
                uVar21 = (lVar23 >> 6) + 1;
                if (uVar21 >> 0x3a != 0) {
                  FUN_109f9e484();
                  goto LAB_109f9a330;
                }
                uVar38 = (long)ppppppplStack_308 - (long)ppppppplStack_318 >> 5;
                if (uVar38 <= uVar21) {
                  uVar38 = uVar21;
                }
                if (0x7fffffffffffffbf < (ulong)((long)ppppppplStack_308 - (long)ppppppplStack_318))
                {
                  uVar38 = 0x3ffffffffffffff;
                }
                ppppppplStack_178 = (long *******)&ppppppplStack_318;
                if (uVar38 == 0) {
                  ppppppplVar36 = (long *******)0x0;
                }
                else {
                  ppppppplVar36 = (long *******)&ppppppplStack_318;
                  FUN_109f9e498();
                }
                ppppppplVar22 = (long *******)((long)ppppppplVar36 + lVar23);
                ppppppplStack_180 = ppppppplVar36 + uVar38 * 8;
                ppppplVar30 = (long *****)puVar41[1];
                ppppplVar34 = (long *****)*puVar41;
                ppppplVar47 = (long *****)puVar41[3];
                ppppplVar45 = (long *****)puVar41[2];
                ppppppplStack_198 = ppppppplVar36;
                ppppppplStack_190 = ppppppplVar22;
                ppppppplStack_188 = ppppppplVar22;
                *(undefined4 *)(ppppppplVar22 + 4) = *(undefined4 *)(puVar41 + 4);
                ppppppplVar22[1] = (long ******)ppppplVar30;
                *ppppppplVar22 = (long ******)ppppplVar34;
                ppppppplVar22[3] = (long ******)ppppplVar47;
                ppppppplVar22[2] = (long ******)ppppplVar45;
                if (*(char *)((long)puVar41 + 0x3f) < '\0') {
                  func_0x000107c3192c(ppppppplVar22 + 5,puVar41[5],puVar41[6]);
                  ppppppplVar22 = ppppppplStack_190;
                }
                else {
                  ppppplVar30 = (long *****)puVar41[6];
                  ppppplVar34 = (long *****)puVar41[5];
                  ppppppplVar22[7] = (long ******)puVar41[7];
                  ppppppplVar22[6] = (long ******)ppppplVar30;
                  ppppppplVar22[5] = (long ******)ppppplVar34;
                  ppppppplStack_188 = ppppppplVar22;
                }
                ppppppplStack_188 = ppppppplStack_188 + 8;
                ppppppplVar22 =
                     (long *******)
                     ((long)ppppppplVar22 + ((long)ppppppplStack_318 - (long)ppppppplStack_310));
                func_0x000109f9e4cc(&ppppppplStack_318,ppppppplStack_318,ppppppplStack_310,
                                    ppppppplVar22);
                ppppppplVar16 = ppppppplStack_188;
                ppppppplVar36 = ppppppplStack_308;
                ppppppplStack_308 = ppppppplStack_180;
                ppppppplStack_310 = ppppppplStack_188;
                ppppppplStack_188 = ppppppplStack_318;
                ppppppplStack_180 = ppppppplVar36;
                ppppppplStack_190 = ppppppplStack_318;
                ppppppplStack_198 = ppppppplStack_318;
                ppppppplStack_318 = ppppppplVar22;
                func_0x000109f9e604(&ppppppplStack_198);
                ppppppplStack_310 = ppppppplVar16;
              }
            }
          }
          ppppppplStack_190 = (long *******)0x2000000000;
          ppppppplStack_198 = (long *******)&ppppppplStack_188;
          __ZNSt3__19to_stringEj(&pppppppuStack_1b0,uVar3);
          pppppppuVar12 = &pppppppuStack_1b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar12,0,&UNK_10f62af1f,6);
          ppppppuStack_2a8 = pppppppuVar12[1];
          pppppppuStack_2b0 = (undefined8 *******)*pppppppuVar12;
          ppppppuStack_2a0 = pppppppuVar12[2];
          pppppppuVar12[1] = (undefined8 ******)0x0;
          pppppppuVar12[2] = (undefined8 ******)0x0;
          *pppppppuVar12 = (undefined8 ******)0x0;
          if ((long)uStack_1a0 < 0) {
            __ZdlPv(pppppppuStack_1b0);
          }
          plVar18 = (long *)param_1[2];
          ppppppuVar42 = ppppppuStack_2a8;
          if (-1 < (long)ppppppuStack_2a0) {
            ppppppuVar42 = (undefined8 ******)((ulong)ppppppuStack_2a0 >> 0x38);
          }
          __ZNSt3__19to_stringEm(&lStack_1f0,ppppppuVar42);
          plVar32 = &lStack_1f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (plVar32,0,&UNK_10f62af26,4);
          pppppppuStack_1d0 = (undefined8 *******)*plVar32;
          uStack_1c0 = (undefined7)plVar32[2];
          cStack_1b9 = (char)((ulong)plVar32[2] >> 0x38);
          uStack_1c8 = (undefined7)plVar32[1];
          uStack_1c1 = (undefined1)((ulong)plVar32[1] >> 0x38);
          plVar32[1] = 0;
          plVar32[2] = 0;
          *plVar32 = 0;
          ppppppuVar42 = ppppppuStack_2a8;
          pppppppuVar12 = pppppppuStack_2b0;
          if (-1 < (long)ppppppuStack_2a0) {
            ppppppuVar42 = (undefined8 ******)((ulong)ppppppuStack_2a0 >> 0x38);
            pppppppuVar12 = &pppppppuStack_2b0;
          }
          pppppppuVar13 = &pppppppuStack_1d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar13,pppppppuVar12,ppppppuVar42);
          ppppppuStack_1a8 = pppppppuVar13[1];
          pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar13;
          uStack_1a0 = pppppppuVar13[2];
          pppppppuVar13[1] = (undefined8 ******)0x0;
          pppppppuVar13[2] = (undefined8 ******)0x0;
          *pppppppuVar13 = (undefined8 ******)0x0;
          pppppppuVar12 = pppppppuStack_1b0;
          if (-1 < (long)uStack_1a0._7_1_) {
            pppppppuVar12 = &pppppppuStack_1b0;
          }
          ppppppuVar42 = ppppppuStack_1a8;
          if (-1 < (long)uStack_1a0) {
            ppppppuVar42 = (undefined8 ******)(long)uStack_1a0._7_1_;
          }
          plVar18 = (long *)(*plVar18 + 0x108);
          FUN_109d956b4(plVar18,pppppppuVar12,ppppppuVar42);
          lVar23 = *plVar18;
          if (((ulong)pppppppuVar12 & 1) != 0) {
            *(long *)(lVar23 + 0x10) = lVar23;
          }
          func_0x000109d33e60(&ppppppplStack_198,lVar23 + 8);
          if ((long)uStack_1a0 < 0) {
            __ZdlPv(pppppppuStack_1b0);
          }
          if (cStack_1b9 < '\0') {
            __ZdlPv(pppppppuStack_1d0);
          }
          if (lStack_1e0 < 0) {
            __ZdlPv(lStack_1f0);
          }
          if (ppppppplStack_310 != ppppppplStack_318) {
            lVar23 = 0;
            uVar21 = 0;
            lVar43 = 0x20;
            do {
              iVar4 = *(int *)((long)ppppppplStack_318 + lVar43);
              if (iVar4 < 6) {
                if (iVar4 == 4) {
LAB_109f99c50:
                  pppppplVar40 = (long ******)((long)ppppppplStack_318 + lVar43 + -8);
                  if (ppppppplStack_318[lVar23 + 1] != (long ******)0x0) {
                    pppppplVar40 = ppppppplStack_318[lVar23 + 1] + 2;
                  }
                  ppppplVar34 = *pppppplVar40;
                  if (ppppplVar34 == (long *****)0x0) {
                    uVar35 = 1;
                    uVar39 = 0x66;
                  }
                  else {
                    uVar17 = *(uint *)((long)ppppplVar34 + 4);
                    uVar27 = 0x69;
                    if ((uVar17 >> 8 & 0xff) != 1) {
                      uVar27 = 0x66;
                    }
                    uVar35 = uVar17 >> 0x10 & 0xf;
                    uVar39 = 0x6a;
                    if ((uVar17 >> 8 & 0xff) != 0) {
                      uVar39 = uVar27;
                    }
                  }
                  func_0x000107c31940(&pppppppuStack_1b0,&UNK_10f62af2b);
                  func_0x000107c31940(&lStack_2c8,&UNK_10f62af40);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (&lStack_2c8,uVar39);
                  plStack_1e8 = (long *)uStack_2c0;
                  lStack_1f0 = lStack_2c8;
                  lStack_1e0 = lStack_2b8;
                  uStack_2c0 = 0;
                  lStack_2b8 = 0;
                  lStack_2c8 = 0;
                  plVar18 = &lStack_1f0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (plVar18,&UNK_10f62af57,0x11);
                  pppppppuStack_1d0 = (undefined8 *******)*plVar18;
                  uStack_1c0 = (undefined7)plVar18[2];
                  cStack_1b9 = (char)((ulong)plVar18[2] >> 0x38);
                  uStack_1c8 = (undefined7)plVar18[1];
                  uStack_1c1 = (undefined1)((ulong)plVar18[1] >> 0x38);
                  plVar18[1] = 0;
                  plVar18[2] = 0;
                  *plVar18 = 0;
                  if (lStack_1e0 < 0) {
                    __ZdlPv(lStack_1f0);
                  }
                  if (lStack_2b8 < 0) {
                    __ZdlPv(lStack_2c8);
                    if (ppppplVar34 != (long *****)0x0) goto LAB_109f99e34;
LAB_109f99ea8:
                    if (uVar35 == 2) {
                      if ((long)uStack_1a0 < 0) {
                        ppppppuStack_1a8 = (undefined8 ******)0x14;
                        pppppppuVar12 = pppppppuStack_1b0;
                      }
                      else {
                        uStack_1a0 = (undefined8 ******)CONCAT17(0x14,(undefined7)uStack_1a0);
                        pppppppuVar12 = &pppppppuStack_1b0;
                      }
                      *(undefined4 *)(pppppppuVar12 + 2) = 0x745f6433;
                      pppppppuVar12[1] = (undefined8 ******)0x5f65727574786574;
                      *pppppppuVar12 = (undefined8 ******)0x5f6c6174656d5f5f;
                      *(undefined1 *)((long)pppppppuVar12 + 0x14) = 0;
                      func_0x000107c31940(&lStack_2c8,&UNK_10f62afe8);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                (&lStack_2c8,uVar39);
                      plStack_1e8 = (long *)uStack_2c0;
                      lStack_1f0 = lStack_2c8;
                      lStack_1e0 = lStack_2b8;
                      uStack_2c0 = 0;
                      lStack_2b8 = 0;
                      lStack_2c8 = 0;
                      plVar18 = &lStack_1f0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (plVar18,&UNK_10f62af57,0x11);
                      goto LAB_109f99fd8;
                    }
                    if (uVar35 == 3) {
                      if ((long)uStack_1a0 < 0) {
                        ppppppuStack_1a8 = (undefined8 ******)0x16;
                        pppppppuVar12 = pppppppuStack_1b0;
                      }
                      else {
                        uStack_1a0 = (undefined8 ******)CONCAT17(0x16,(undefined7)uStack_1a0);
                        pppppppuVar12 = &pppppppuStack_1b0;
                      }
                      pppppppuVar12[1] = (undefined8 ******)0x5f65727574786574;
                      *pppppppuVar12 = (undefined8 ******)0x5f6c6174656d5f5f;
                      *(undefined8 *)((long)pppppppuVar12 + 0xe) = 0x745f656275635f65;
                      *(undefined1 *)((long)pppppppuVar12 + 0x16) = 0;
                      func_0x000107c31940(&lStack_2c8,&UNK_10f62afb9);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                (&lStack_2c8,uVar39);
                      plStack_1e8 = (long *)uStack_2c0;
                      lStack_1f0 = lStack_2c8;
                      lStack_1e0 = lStack_2b8;
                      uStack_2c0 = 0;
                      lStack_2b8 = 0;
                      lStack_2c8 = 0;
                      plVar18 = &lStack_1f0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (plVar18,&UNK_10f62af57,0x11);
                      goto LAB_109f99fd8;
                    }
                  }
                  else {
                    if (ppppplVar34 == (long *****)0x0) goto LAB_109f99ea8;
LAB_109f99e34:
                    if (((*(byte *)((long)ppppplVar34 + 6) >> 5 & 1) == 0) || (uVar35 != 1))
                    goto LAB_109f99ea8;
                    func_0x000107c2c4d8(&pppppppuStack_1b0,&UNK_10f62af69,0x1a);
                    func_0x000107c31940(&lStack_2c8,&UNK_10f62af84);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (&lStack_2c8,uVar39);
                    plStack_1e8 = (long *)uStack_2c0;
                    lStack_1f0 = lStack_2c8;
                    lStack_1e0 = lStack_2b8;
                    uStack_2c0 = 0;
                    lStack_2b8 = 0;
                    lStack_2c8 = 0;
                    plVar18 = &lStack_1f0;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (plVar18,&UNK_10f62af57,0x11);
LAB_109f99fd8:
                    pppppppuVar12 = (undefined8 *******)*plVar18;
                    uStack_200 = (undefined7)plVar18[1];
                    uStack_1f9 = (undefined1)((ulong)plVar18[1] >> 0x38);
                    uStack_1f9 = (undefined1)*(undefined8 *)((long)plVar18 + 0xf);
                    uStack_1f8 = (undefined7)((ulong)*(undefined8 *)((long)plVar18 + 0xf) >> 8);
                    cVar5 = *(char *)((long)plVar18 + 0x17);
                    plVar18[1] = 0;
                    plVar18[2] = 0;
                    *plVar18 = 0;
                    if (cStack_1b9 < '\0') {
                      __ZdlPv(pppppppuStack_1d0);
                    }
                    uStack_1c8 = uStack_200;
                    uStack_1c1 = uStack_1f9;
                    uStack_1c0 = uStack_1f8;
                    pppppppuStack_1d0 = pppppppuVar12;
                    cStack_1b9 = cVar5;
                    if (lStack_1e0 < 0) {
                      __ZdlPv(lStack_1f0);
                    }
                    if (lStack_2b8 < 0) {
                      __ZdlPv(lStack_2c8);
                    }
                  }
                  plVar18 = (long *)param_1[2];
                  pppppppuVar12 = pppppppuStack_1b0;
                  if (-1 < (long)uStack_1a0._7_1_) {
                    pppppppuVar12 = &pppppppuStack_1b0;
                  }
                  ppppppuVar42 = ppppppuStack_1a8;
                  if (-1 < (long)uStack_1a0) {
                    ppppppuVar42 = (undefined8 ******)(long)uStack_1a0._7_1_;
                  }
                  plVar32 = (long *)(*plVar18 + 0x108);
                  FUN_109d956b4(plVar32,pppppppuVar12,ppppppuVar42);
                  lStack_1f0 = *plVar32;
                  if (((ulong)pppppppuVar12 & 1) != 0) {
                    *(long *)(lStack_1f0 + 0x10) = lStack_1f0;
                  }
                  lStack_1f0 = lStack_1f0 + 8;
                  plStack_1e8 = (long *)param_1[4];
                  lVar25 = *(long *)param_1[2] + 0x7b0;
                  FUN_109d678e8(lVar25,0,0);
                  FUN_109d94e24();
                  lStack_1e0 = lVar25;
                  FUN_109d974c0(plVar18,&lStack_1f0,3,0,1);
                  plVar32 = (long *)param_1[2];
                  pppppppuVar12 = pppppppuStack_1d0;
                  if (-1 < (long)cStack_1b9) {
                    pppppppuVar12 = &pppppppuStack_1d0;
                  }
                  lVar25 = CONCAT17(uStack_1c1,uStack_1c8);
                  if (-1 < cStack_1b9) {
                    lVar25 = (long)cStack_1b9;
                  }
                  plVar11 = (long *)(*plVar32 + 0x108);
                  FUN_109d956b4(plVar11,pppppppuVar12,lVar25);
                  lStack_1f0 = *plVar11;
                  if (((ulong)pppppppuVar12 & 1) != 0) {
                    *(long *)(lStack_1f0 + 0x10) = lStack_1f0;
                  }
                  lStack_1f0 = lStack_1f0 + 8;
                  lVar25 = *(long *)param_1[2] + 0x7b0;
                  plStack_1e8 = plVar18;
                  FUN_109d678e8(lVar25,0,0);
                  FUN_109d94e24();
                  lStack_1e0 = lVar25;
                  FUN_109d974c0(plVar32,&lStack_1f0,3,0,1);
                  if (cStack_1b9 < '\0') {
                    __ZdlPv(pppppppuStack_1d0);
                  }
                  if ((long)uStack_1a0 < 0) {
                    __ZdlPv(pppppppuStack_1b0);
                  }
                }
                else {
                  if (iVar4 == 5) goto LAB_109f99ca4;
LAB_109f99d84:
                  plVar32 = (long *)param_1[5];
                }
              }
              else {
                if (iVar4 != 7) {
                  if (iVar4 != 6) goto LAB_109f99d84;
                  goto LAB_109f99c50;
                }
LAB_109f99ca4:
                plVar32 = (long *)param_1[2];
                plVar18 = (long *)(*plVar32 + 0x108);
                puVar19 = &UNK_10f62afff;
                FUN_109d956b4(plVar18,&UNK_10f62afff,0x14);
                lVar25 = *plVar18;
                if (((ulong)puVar19 & 1) != 0) {
                  *(long *)(lVar25 + 0x10) = lVar25;
                }
                pppppppuStack_1b0 = (undefined8 *******)(lVar25 + 8);
                ppppppuVar42 = (undefined8 ******)param_1[2];
                pppppuVar14 = *ppppppuVar42 + 0x21;
                uVar38 = 0;
                FUN_109d956b4(pppppuVar14,&UNK_10f62b014,0x11);
                ppppuVar26 = *pppppuVar14;
                if ((uVar38 & 1) != 0) {
                  ppppuVar26[2] = ppppuVar26;
                }
                pppppppuStack_1d0 = (undefined8 *******)(ppppuVar26 + 1);
                uStack_1c8 = (undefined7)param_1[4];
                uStack_1c1 = (undefined1)((ulong)param_1[4] >> 0x38);
                lVar25 = *(long *)param_1[2] + 0x7b0;
                FUN_109d678e8(lVar25,0,0);
                FUN_109d94e24();
                uStack_1c0 = (undefined7)lVar25;
                cStack_1b9 = (char)((ulong)lVar25 >> 0x38);
                FUN_109d974c0(ppppppuVar42,&pppppppuStack_1d0,3,0,1);
                ppppppuVar15 = (undefined8 ******)(*(long *)param_1[2] + 0x7b0);
                ppppppuStack_1a8 = ppppppuVar42;
                FUN_109d678e8(ppppppuVar15,0,0);
                FUN_109d94e24();
                uStack_1a0 = ppppppuVar15;
                FUN_109d974c0(plVar32,&pppppppuStack_1b0,3,0,1);
              }
              func_0x000109d33e60(&ppppppplStack_198,plVar32);
              lVar25 = *(long *)param_1[2] + 0x7b0;
              FUN_109d678e8(lVar25,lVar23,0);
              FUN_109d94e24();
              func_0x000109d33e60(&ppppppplStack_198,lVar25);
              uVar21 = uVar21 + 1;
              lVar23 = lVar23 + 8;
              lVar43 = lVar43 + 0x40;
            } while (uVar21 < (ulong)((long)ppppppplStack_310 - (long)ppppppplStack_318 >> 6));
          }
          pppppplVar40 = (long ******)param_1[2];
          FUN_109d974c0(pppppplVar40,ppppppplStack_198,(ulong)ppppppplStack_190 & 0xffffffff,0,1);
          unaff_x24 = (long *******)(param_1 + 0x2b);
          while (ppppppplVar22 = (long *******)*unaff_x24, ppppppplVar36 = unaff_x24,
                (long *******)*unaff_x24 != (long *******)0x0) {
            while (unaff_x24 = ppppppplVar22, *(uint *)(unaff_x24 + 4) <= uVar3) {
              if (uVar3 <= *(uint *)(unaff_x24 + 4)) goto LAB_109f9a25c;
              ppppppplVar22 = (long *******)unaff_x24[1];
              if ((long *******)unaff_x24[1] == (long *******)0x0) {
                ppppppplVar36 = unaff_x24 + 1;
                goto LAB_109f9a204;
              }
            }
          }
LAB_109f9a204:
          ppppppplVar16 = (long *******)0x30;
          __Znwm();
          *(uint *)(ppppppplVar16 + 4) = uVar3;
          ppppppplVar16[5] = (long ******)0x0;
          *ppppppplVar16 = (long ******)0x0;
          ppppppplVar16[1] = (long ******)0x0;
          ppppppplVar16[2] = (long ******)unaff_x24;
          *ppppppplVar36 = (long ******)ppppppplVar16;
          ppppppplVar22 = ppppppplVar16;
          if (*(long *)param_1[0x2a] != 0) {
            param_1[0x2a] = *(long *)param_1[0x2a];
            ppppppplVar22 = (long *******)*ppppppplVar36;
          }
          func_0x000107c27d40(param_1[0x2b],ppppppplVar22);
          param_1[0x2c] = param_1[0x2c] + 1;
          unaff_x24 = ppppppplVar16;
LAB_109f9a25c:
          unaff_x24[5] = pppppplVar40;
          if ((long)ppppppuStack_2a0 < 0) {
            __ZdlPv(pppppppuStack_2b0);
          }
          if ((long ********)ppppppplStack_198 != &ppppppplStack_188) {
            _free();
          }
          ppppppplStack_198 = (long *******)&ppppppplStack_318;
          func_0x000109f8e9e4(&ppppppplStack_198);
          if ((long)uStack_2f0 < 0) {
            __ZdlPv(pppppppuStack_300);
          }
        }
        if (puStack_290 != auStack_280) {
          _free();
        }
        puVar44 = puVar44 + 1;
      } while (puVar44 != puStack_2d8);
    }
    if (puStack_2e0 != (uint *)0x0) {
      __ZdlPv(puStack_2e0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109f9a32c:
  func_0x000104c4f740();
LAB_109f9a330:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109f9a334);
  (*pcVar7)();
}



/* Entry: 109f9a5a4; end: 109f9a62b;  */

undefined8 * FUN_109f9a5a4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_3 & 0xff;
  if ((param_3 & 0xfe) == 0) {
    uVar1 = 1;
  }
  uStack_38 = (ulong)uVar1;
  if (((param_2 & 0xff) < 0xc) && ((1 << (ulong)(param_2 & 0x1f) & 0x803U) != 0)) {
    if (uVar1 < 3) {
      if (uVar1 == 1) {
        return *(undefined8 **)(param_1 + 0x210);
      }
      if (uVar1 == 2) {
        return *(undefined8 **)(param_1 + 0x240);
      }
    }
    else {
      if (uVar1 == 3) {
        return *(undefined8 **)(param_1 + 0x248);
      }
      if (uVar1 == 4) {
        return *(undefined8 **)(param_1 + 0x250);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x210);
  }
  else {
    if (uVar1 < 3) {
      if (uVar1 == 1) {
        return *(undefined8 **)(param_1 + 0x208);
      }
      if (uVar1 == 2) {
        return *(undefined8 **)(param_1 + 0x228);
      }
    }
    else {
      if (uVar1 == 3) {
        return *(undefined8 **)(param_1 + 0x230);
      }
      if (uVar1 == 4) {
        return *(undefined8 **)(param_1 + 0x238);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x208);
  }
  lVar5 = *(long *)*puVar4;
  lVar2 = lVar5 + 0x900;
  puStack_40 = puVar4;
  FUN_109da1690(lVar2,&puStack_40);
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(lVar5 + 0x7e8);
    FUN_109d34148(puVar3,0x28,3);
    *puVar3 = *puVar4;
    puVar3[3] = puVar4;
    *(uint *)(puVar3 + 4) = uVar1;
    puVar3[2] = puVar3 + 3;
    puVar3[1] = 0x100000012;
    *(undefined8 **)(lVar2 + 0x10) = puVar3;
  }
  return puVar3;
}



/* Entry: 109f9a62c; end: 109f9a6a7;  */

undefined8 * FUN_109f9a62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  *(uint *)((long)puVar1 + 0x1c) = *(uint *)((long)puVar1 + 0x1c) & 0x38000000 | 0x40000000;
  *puVar1 = 0;
  FUN_109d81a4c(puVar1 + 1,param_1,0,0xffffffff,param_2,param_3);
  return puVar1 + 1;
}



/* Entry: 109f9a6a8; end: 109f9a95b;  */

void FUN_109f9a6a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(ushort *)((long)param_1 + 0x12) = *(ushort *)((long)param_1 + 0x12) & 0xc00f;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff3f | 0x40;
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0xf);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x18);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x1d);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x22);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x24);
  param_1[0xe] = puVar1;
  FUN_109d853ec(param_1,0);
  puVar1 = param_1 + 0xe;
  FUN_109d5ab08(puVar1,*(undefined8 *)*param_1,0xffffffff,0x42);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b026,0x13,"true",4);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f5f9f6e,0xd,"all",3);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b041,0x16,&DAT_10f62b058,1);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b05a,0xb,0,0);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b066,0xf,"true",4);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b076,0xf,"true",4);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b086,0x17,"true",4);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b09e,0x10,"true",4);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b0af,0x1b,&DAT_10f398b2f,1);
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0xe;
  FUN_109d5adb0(puVar1,*(undefined8 *)*param_1,0xffffffff,&UNK_10f5af6dc,0xe,"true",4);
  param_1[0xe] = puVar1;
  return;
}



/* Entry: 109f9a95c; end: 109f9aa63;  */

undefined8 * FUN_109f9a95c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 auStack_68 [32];
  undefined2 uStack_48;
  
  lVar7 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
  uVar4 = lVar7 + 0x100;
  FUN_109d73128(uVar4,param_2,0);
  uVar3 = *(undefined4 *)(lVar7 + 0x104);
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *(uint *)((long)puVar5 + 0x34) = *(uint *)((long)puVar5 + 0x34) & 0x38000000 | 1;
  puVar1 = puVar5 + 4;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = puVar1;
  uStack_48 = 0x101;
  FUN_109d8bc38(puVar1,param_2,uVar3,0,uVar4 & 0xff,auStack_68,0);
  (**(code **)(*(long *)param_1[10] + 0x10))
            ((long *)param_1[10],puVar1,param_3,param_1[6],param_1[7]);
  if (*(uint *)(param_1 + 1) != 0) {
    puVar6 = (undefined4 *)*param_1;
    puVar2 = puVar6 + (ulong)*(uint *)(param_1 + 1) * 4;
    do {
      FUN_109d97dec(puVar1,*puVar6,*(undefined8 *)(puVar6 + 2));
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  return puVar1;
}



/* Entry: 109f9aa64; end: 109f9b673;  */

void FUN_109f9aa64(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  char cStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 == 2) {
    plVar19 = param_2 + 2;
    uVar20 = *(undefined8 *)(*(long *)(*plVar19 + 0x30) + 0x38);
    puVar25 = *(undefined8 **)*param_2;
    puStack_b0 = &UNK_10f62b1a6;
    uStack_90 = 0x103;
    FUN_109d38918(puVar25,&puStack_b0,uVar20,0);
    lVar6 = *(long *)*param_2;
    puStack_b0 = &UNK_10f62b1b2;
    uStack_90 = 0x103;
    FUN_109d38918(lVar6,&puStack_b0,uVar20,0);
    lVar22 = *plVar19;
    puVar17 = puVar25;
    FUN_109d38b9c(puVar25,0);
    uStack_90 = 0x101;
    FUN_109fab914(lVar22,puVar17,&puStack_b0);
    uVar28 = param_2[0x23];
    uVar20 = param_2[0x22];
    param_2[0x22] = puVar25;
    param_2[0x23] = lVar6;
    lVar22 = param_2[0x24];
    lVar13 = param_2[0x25];
    lVar8 = *plVar19;
    *(undefined8 **)(lVar8 + 0x30) = puVar25;
    *(undefined8 **)(lVar8 + 0x38) = puVar25 + 5;
    for (plVar19 = *(long **)(param_3 + 0x20); *plVar19 != 0; plVar19 = (long *)*plVar19) {
      puVar17 = param_2;
      FUN_109f9aa64(&puStack_b0,param_2,plVar19);
      if (cStack_88 != '\x01') {
        *(undefined4 *)param_1 = puStack_b0._0_4_;
        param_1[1] = uStack_a8;
        param_1[2] = CONCAT17(uStack_99,uStack_a0);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,uStack_99);
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_91;
        param_1[4] = CONCAT62(uStack_8e,uStack_90);
        *(undefined1 *)(param_1 + 5) = 0;
        goto LAB_109f9b5a8;
      }
    }
    lVar8 = param_2[2];
    plVar11 = (long *)(*(long *)(lVar8 + 0x30) + 0x28);
    plVar19 = (long *)*plVar11;
    if ((plVar19 == plVar11) || (10 < *(byte *)(plVar19 + -1) - 0x1d)) {
      FUN_109d38b9c(puVar25,0);
      uStack_90 = 0x101;
      FUN_109fab914(lVar8,puVar25,&puStack_b0);
      puVar17 = puVar25;
    }
    uVar9 = lVar13 - lVar22;
    lVar8 = (long)uVar9 >> 3;
    uVar26 = lVar8 * -0x5555555555555555;
    lVar13 = param_2[0x24];
    lVar22 = param_2[0x25];
    uVar18 = lVar22 - lVar13;
    if (uVar9 < uVar18) {
      lVar21 = lVar8 * 8;
      uVar27 = uVar26;
      do {
        puVar25 = (undefined8 *)(lVar13 + lVar21);
        lVar22 = puVar25[1];
        if (*(long *)(lVar22 + 0x30) == 0) {
LAB_109f9aed0:
          puVar23 = (undefined8 *)puVar25[2];
          func_0x000109d677ec();
          lVar22 = puVar25[1];
        }
        else {
          puVar17 = param_2 + 6;
          FUN_109fab870(puVar17,*(undefined4 *)(*(long *)(lVar22 + 0x30) + 0x18));
          if ((puVar17 == (undefined8 *)0x0) ||
             (puVar23 = (undefined8 *)puVar17[3], puVar23 == (undefined8 *)0x0)) goto LAB_109f9aed0;
        }
        lVar4 = param_2[0x1d];
        puVar17 = (undefined8 *)param_2[0x1e];
        FUN_109fab980(lVar4,puVar17,*(undefined4 *)(*(long *)(lVar22 + 0x10) + 0x40));
        if (lVar4 != 0) {
          puVar12 = (undefined8 *)*puVar23;
          puVar16 = *(undefined8 **)(lVar13 + lVar21 + 0x10);
          if (puVar12 != puVar16) {
            FUN_109d9f594();
            puVar5 = puVar16;
            uVar7 = (uint)puVar17;
            FUN_109d9f594();
            if ((puVar12 == puVar5) && (((uint)puVar17 & 0xff) == (uVar7 & 0xff))) {
              puVar12 = (undefined8 *)0x60;
              __Znwm();
              puVar17 = puVar12 + 4;
              *(uint *)((long)puVar12 + 0x34) = *(uint *)((long)puVar12 + 0x34) & 0x38000000 | 1;
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = puVar17;
              uStack_90 = 0x101;
              plVar11 = (long *)(*(long *)(lVar4 + 0x18) + 0x28);
              plVar19 = (long *)*plVar11;
              if (plVar19 == plVar11) {
                lVar22 = 0;
              }
              else {
                lVar22 = (long)(plVar19 + -3);
                if (10 < *(byte *)(plVar19 + -1) - 0x1d) {
                  lVar22 = 0;
                }
              }
              FUN_109d8cf9c(puVar17,*(undefined8 *)(lVar13 + lVar21 + 0x10),0x31,puVar23,&puStack_b0
                            ,lVar22);
              puVar23 = puVar17;
            }
            else {
              func_0x000109d677ec();
              puVar23 = puVar16;
            }
          }
          puVar17 = puVar23;
          func_0x000109d34614(*puVar25,puVar17,*(undefined8 *)(lVar4 + 0x18));
        }
        uVar27 = uVar27 + 1;
        lVar13 = param_2[0x24];
        lVar22 = param_2[0x25];
        uVar18 = lVar22 - lVar13;
        uVar10 = ((long)uVar18 >> 3) * -0x5555555555555555;
        lVar21 = lVar21 + 0x18;
      } while (uVar27 < uVar10);
    }
    else {
      uVar10 = ((long)uVar18 >> 3) * -0x5555555555555555;
    }
    if (uVar10 < uVar26) {
      if ((ulong)((param_2[0x26] - lVar22 >> 3) * -0x5555555555555555) < uVar26 - uVar10) {
        if (0xaaaaaaaaaaaaaaa < uVar26) {
          FUN_109fab818();
          goto LAB_109f9b62c;
        }
        lVar22 = param_2[0x26] - lVar13 >> 3;
        uVar10 = lVar22 * 0x5555555555555556;
        if (uVar10 < uVar26 || uVar10 + lVar8 * 0x5555555555555555 == 0) {
          uVar10 = uVar26;
        }
        if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
          uVar10 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_109fab82c();
        lVar22 = uVar10 + uVar18;
        lVar21 = (((uVar9 - uVar18) - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar22,lVar21);
        lVar8 = lVar22 - (param_2[0x25] - param_2[0x24]);
        _memcpy(lVar8);
        lVar13 = param_2[0x24];
        param_2[0x24] = lVar8;
        param_2[0x25] = lVar22 + lVar21;
        param_2[0x26] = uVar10 + (long)puVar17 * 0x18;
        if (lVar13 != 0) {
          __ZdlPv();
        }
      }
      else {
        lVar13 = (((uVar9 - uVar18) - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar22,lVar13);
        lVar22 = lVar22 + lVar13;
LAB_109f9b188:
        param_2[0x25] = lVar22;
      }
    }
    else if (uVar26 < uVar10) {
      lVar22 = lVar13 + uVar9;
      goto LAB_109f9b188;
    }
    param_2[0x23] = uVar28;
    param_2[0x22] = uVar20;
    lVar22 = param_2[2];
    *(long *)(lVar22 + 0x30) = lVar6;
    *(long *)(lVar22 + 0x38) = lVar6 + 0x28;
LAB_109f9b594:
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    goto LAB_109f9b5a8;
  }
  if (iVar1 == 1) {
    if (*(long *)(param_3 + 0x38) != 0) {
      puVar17 = param_2 + 6;
      FUN_109fab870(puVar17,*(undefined4 *)(*(long *)(param_3 + 0x38) + 0x18));
      if ((puVar17 != (undefined8 *)0x0) && (plVar19 = (long *)puVar17[3], plVar19 != (long *)0x0))
      {
        lVar22 = *plVar19;
        plVar14 = *(long **)*param_2;
        plVar11 = plVar19;
        if (lVar22 != *plVar14 + 0x750) {
          plVar11 = (long *)param_2[2];
          FUN_109d666e0(lVar22);
          uStack_90 = 0x101;
          FUN_109d3488c(plVar11,0x21,plVar19,lVar22,&puStack_b0);
          plVar14 = *(long **)*param_2;
        }
        plVar15 = param_2 + 2;
        uVar20 = *(undefined8 *)(*(long *)(*plVar15 + 0x30) + 0x38);
        puStack_b0 = &DAT_10f62b196;
        uStack_90 = 0x103;
        FUN_109d38918(plVar14,&puStack_b0,uVar20,0);
        lVar22 = *(long *)*param_2;
        puStack_b0 = &UNK_10f610585;
        uStack_90 = 0x103;
        FUN_109d38918(lVar22,&puStack_b0,uVar20,0);
        lVar13 = *(long *)*param_2;
        puStack_b0 = &UNK_10f62b1a0;
        uStack_90 = 0x103;
        FUN_109d38918(lVar13,&puStack_b0,uVar20,0);
        lVar6 = *plVar15;
        plVar19 = plVar14;
        FUN_109d38c10(plVar14,lVar22,plVar11,0);
        uStack_90 = 0x101;
        FUN_109fab914(lVar6,plVar19,&puStack_b0);
        lVar6 = *plVar15;
        *(long **)(lVar6 + 0x30) = plVar14;
        *(long **)(lVar6 + 0x38) = plVar14 + 5;
        for (plVar19 = *(long **)(param_3 + 0x48); *plVar19 != 0; plVar19 = (long *)*plVar19) {
          FUN_109f9aa64(&puStack_b0,param_2,plVar19);
          if (cStack_88 != '\x01') goto LAB_109f9b3f4;
        }
        lVar6 = param_2[2];
        plVar11 = (long *)(*(long *)(lVar6 + 0x30) + 0x28);
        plVar19 = (long *)*plVar11;
        if ((plVar19 == plVar11) || (10 < *(byte *)(plVar19 + -1) - 0x1d)) {
          lVar8 = lVar13;
          FUN_109d38b9c(lVar13,0);
          uStack_90 = 0x101;
          FUN_109fab914(lVar6,lVar8,&puStack_b0);
          lVar6 = param_2[2];
        }
        *(long *)(lVar6 + 0x30) = lVar22;
        *(long *)(lVar6 + 0x38) = lVar22 + 0x28;
        for (plVar19 = *(long **)(param_3 + 0x68); *plVar19 != 0; plVar19 = (long *)*plVar19) {
          FUN_109f9aa64(&puStack_b0,param_2,plVar19);
          if (cStack_88 != '\x01') goto LAB_109f9b3f4;
        }
        lVar22 = param_2[2];
        plVar11 = (long *)(*(long *)(lVar22 + 0x30) + 0x28);
        plVar19 = (long *)*plVar11;
        if ((plVar19 == plVar11) || (10 < *(byte *)(plVar19 + -1) - 0x1d)) {
          FUN_109f9f8c8(lVar22,lVar13);
          lVar22 = param_2[2];
        }
        *(long *)(lVar22 + 0x30) = lVar13;
        *(long *)(lVar22 + 0x38) = lVar13 + 0x28;
        goto LAB_109f9b594;
      }
    }
    func_0x000107c31940(auStack_c8,&UNK_10f62b0f9);
    FUN_109f92740(&puStack_b0,auStack_c8,2,&PTR_DAT_110b96440);
    *(undefined4 *)param_1 = puStack_b0._0_4_;
    param_1[2] = CONCAT17(uStack_99,uStack_a0);
    param_1[1] = uStack_a8;
    param_1[3] = CONCAT17(uStack_91,uStack_98);
    param_1[4] = CONCAT62(uStack_8e,uStack_90);
    *(undefined1 *)(param_1 + 5) = 0;
LAB_109f9addc:
    if (cStack_b1 < '\0') {
      __ZdlPv(auStack_c8[0]);
    }
    goto LAB_109f9b5a8;
  }
  if (iVar1 != 0) {
    FUN_109f97010(auStack_c8,&UNK_10f62b1bc);
    FUN_109f92740(&puStack_b0,auStack_c8,2,&PTR_DAT_110b96458);
    *(undefined4 *)param_1 = puStack_b0._0_4_;
    param_1[2] = CONCAT17(uStack_99,uStack_a0);
    param_1[1] = uStack_a8;
    param_1[3] = CONCAT17(uStack_91,uStack_98);
    param_1[4] = CONCAT62(uStack_8e,uStack_90);
    *(undefined1 *)(param_1 + 5) = 0;
    goto LAB_109f9addc;
  }
  for (plVar19 = *(long **)(param_3 + 0x20); *plVar19 != 0; plVar19 = (long *)*plVar19) {
    FUN_109f9f910(&puStack_b0,param_2,plVar19);
    if (cStack_88 != '\x01') {
      *(undefined4 *)param_1 = puStack_b0._0_4_;
      param_1[1] = uStack_a8;
      param_1[2] = CONCAT17(uStack_99,uStack_a0);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,uStack_99);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_91;
      param_1[4] = CONCAT62(uStack_8e,uStack_90);
      *(undefined1 *)(param_1 + 5) = 0;
      goto LAB_109f9b5a8;
    }
  }
  lVar22 = *(long *)(param_2[2] + 0x30);
  uVar7 = *(uint *)(param_3 + 0x40);
  puVar23 = (undefined8 *)(ulong)uVar7;
  puVar25 = (undefined8 *)param_2[0x1e];
  puVar17 = param_1;
  if (puVar25 != (undefined8 *)0x0) {
    uVar9 = (long)puVar25 - 1;
    uVar24 = (uint)puVar25;
    if (((ulong)puVar25 & uVar9) == 0) {
      puVar17 = (undefined8 *)(ulong)(uVar24 - 1 & uVar7);
    }
    else {
      puVar17 = puVar23;
      if (puVar25 <= puVar23) {
        uVar2 = 0;
        if (uVar24 != 0) {
          uVar2 = uVar7 / uVar24;
        }
        puVar17 = (undefined8 *)(ulong)(uVar7 - uVar2 * uVar24);
      }
    }
    puVar12 = *(undefined8 **)(param_2[0x1d] + (long)puVar17 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar12; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        puVar12 = (undefined8 *)plVar19[1];
        if (puVar12 == puVar23) {
          if (*(uint *)(plVar19 + 2) == uVar7) goto LAB_109f9b590;
        }
        else {
          if (((ulong)puVar25 & uVar9) == 0) {
            puVar12 = (undefined8 *)((ulong)puVar12 & uVar9);
          }
          else if (puVar25 <= puVar12) {
            uVar18 = 0;
            if (puVar25 != (undefined8 *)0x0) {
              uVar18 = (ulong)puVar12 / (ulong)puVar25;
            }
            puVar12 = (undefined8 *)((long)puVar12 - uVar18 * (long)puVar25);
          }
          if (puVar12 != puVar17) break;
        }
      }
    }
  }
  plVar19 = (long *)0x20;
  __Znwm();
  *plVar19 = 0;
  plVar19[1] = (long)puVar23;
  *(uint *)(plVar19 + 2) = uVar7;
  plVar19[3] = 0;
  if ((puVar25 != (undefined8 *)0x0) &&
     ((float)(param_2[0x20] + 1) <= *(float *)(param_2 + 0x21) * (float)puVar25)) {
LAB_109f9b51c:
    lVar13 = param_2[0x1d];
    plVar11 = *(long **)(lVar13 + (long)puVar17 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = param_2 + 0x1f;
      *plVar19 = *plVar11;
      *plVar11 = (long)plVar19;
      *(long **)(lVar13 + (long)puVar17 * 8) = plVar11;
      if (*plVar19 != 0) {
        puVar17 = *(undefined8 **)(*plVar19 + 8);
        if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
          puVar17 = (undefined8 *)((ulong)puVar17 & (long)puVar25 - 1U);
        }
        else if (puVar25 <= puVar17) {
          uVar9 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar17 / (ulong)puVar25;
          }
          puVar17 = (undefined8 *)((long)puVar17 - uVar9 * (long)puVar25);
        }
        plVar11 = (long *)(param_2[0x1d] + (long)puVar17 * 8);
        goto LAB_109f9b580;
      }
    }
    else {
      *plVar19 = *plVar11;
LAB_109f9b580:
      *plVar11 = (long)plVar19;
    }
    param_2[0x20] = param_2[0x20] + 1;
LAB_109f9b590:
    plVar19[3] = lVar22;
    goto LAB_109f9b594;
  }
  uVar9 = 1;
  if ((undefined8 *)0x2 < puVar25) {
    uVar9 = (ulong)(((ulong)puVar25 & (long)puVar25 - 1U) != 0);
  }
  puVar17 = (undefined8 *)(uVar9 | (long)puVar25 << 1);
  puVar12 = (undefined8 *)(long)((float)(param_2[0x20] + 1) / *(float *)(param_2 + 0x21));
  if (puVar17 <= puVar12) {
    puVar17 = puVar12;
  }
  if ((long)puVar17 - 1U == 0) {
    puVar17 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar17 & (long)puVar17 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar25 = (undefined8 *)param_2[0x1e];
  }
  if (puVar17 <= puVar25) {
    if (puVar17 < puVar25) {
      puVar12 = (undefined8 *)(long)((float)(ulong)param_2[0x20] / *(float *)(param_2 + 0x21));
      if ((puVar25 < (undefined8 *)0x3) || (((ulong)puVar25 & (long)puVar25 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar12) {
        puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
      }
      if (puVar17 <= puVar12) {
        puVar17 = puVar12;
      }
      if (puVar17 < puVar25) {
        if (puVar17 != (undefined8 *)0x0) goto LAB_109f9b338;
        lVar13 = param_2[0x1d];
        param_2[0x1d] = 0;
        if (lVar13 != 0) {
          __ZdlPv();
        }
        param_2[0x1e] = 0;
        puVar25 = (undefined8 *)0x0;
      }
      else {
        puVar25 = (undefined8 *)param_2[0x1e];
      }
    }
LAB_109f9b4f4:
    if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
      puVar17 = (undefined8 *)(ulong)((int)puVar25 - 1U & uVar7);
    }
    else {
      puVar17 = puVar23;
      if (puVar25 <= puVar23) {
        uVar9 = 0;
        if (puVar25 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar23 / (ulong)puVar25;
        }
        puVar17 = (undefined8 *)((long)puVar23 - uVar9 * (long)puVar25);
      }
    }
    goto LAB_109f9b51c;
  }
LAB_109f9b338:
  if ((ulong)puVar17 >> 0x3d == 0) {
    lVar13 = (long)puVar17 << 3;
    __Znwm();
    lVar6 = param_2[0x1d];
    param_2[0x1d] = lVar13;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    puVar25 = (undefined8 *)0x0;
    param_2[0x1e] = puVar17;
    do {
      *(undefined8 *)(param_2[0x1d] + (long)puVar25 * 8) = 0;
      puVar25 = (undefined8 *)((long)puVar25 + 1);
    } while (puVar17 != puVar25);
    plVar11 = (long *)param_2[0x1f];
    puVar25 = puVar17;
    if (plVar11 != (long *)0x0) {
      puVar12 = (undefined8 *)plVar11[1];
      uVar9 = (long)puVar17 - 1;
      if (((ulong)puVar17 & uVar9) == 0) {
        puVar12 = (undefined8 *)((ulong)puVar12 & uVar9);
      }
      else if (puVar17 <= puVar12) {
        uVar18 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          uVar18 = (ulong)puVar12 / (ulong)puVar17;
        }
        puVar12 = (undefined8 *)((long)puVar12 - uVar18 * (long)puVar17);
      }
      *(undefined8 **)(param_2[0x1d] + (long)puVar12 * 8) = param_2 + 0x1f;
      plVar14 = (long *)*plVar11;
      while (plVar14 != (long *)0x0) {
        puVar16 = (undefined8 *)plVar14[1];
        if (((ulong)puVar17 & uVar9) == 0) {
          puVar16 = (undefined8 *)((ulong)puVar16 & uVar9);
        }
        else if (puVar17 <= puVar16) {
          uVar18 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar18 = (ulong)puVar16 / (ulong)puVar17;
          }
          puVar16 = (undefined8 *)((long)puVar16 - uVar18 * (long)puVar17);
        }
        plVar15 = plVar14;
        if (puVar16 != puVar12) {
          lVar13 = param_2[0x1d];
          if (*(long *)(lVar13 + (long)puVar16 * 8) == 0) {
            *(long **)(lVar13 + (long)puVar16 * 8) = plVar11;
            puVar12 = puVar16;
          }
          else {
            *plVar11 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar13 + (long)puVar16 * 8);
            **(long **)(lVar13 + (long)puVar16 * 8) = (long)plVar14;
            plVar15 = plVar11;
          }
        }
        plVar11 = plVar15;
        plVar14 = (long *)*plVar15;
      }
    }
    goto LAB_109f9b4f4;
  }
  goto LAB_109f9b620;
LAB_109f9b3f4:
  *(undefined4 *)param_1 = puStack_b0._0_4_;
  param_1[1] = uStack_a8;
  param_1[2] = CONCAT17(uStack_99,uStack_a0);
  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,uStack_99);
  *(undefined1 *)((long)param_1 + 0x1f) = uStack_91;
  param_1[4] = CONCAT62(uStack_8e,uStack_90);
  *(undefined1 *)(param_1 + 5) = 0;
LAB_109f9b5a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109f9b620:
  func_0x000104c4f740();
LAB_109f9b62c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109f9b630);
  (*pcVar3)();
}



/* Entry: 109f9b674; end: 109f9baeb;  */

void FUN_109f9b674(long *param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  undefined8 ******ppppppuStack_78;
  long lStack_70;
  char cStack_61;
  
  plVar13 = param_1 + 9;
  plVar8 = (long *)param_1[10];
  if (plVar8 == plVar13) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      plVar7 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar7 = plVar8 + -3;
      }
      for (plVar10 = (long *)plVar8[3]; plVar10 != plVar7 + 5; plVar10 = (long *)plVar10[1]) {
        if ((((plVar10 != (long *)0x0) && ((char)plVar10[-1] == 'T')) &&
            (lVar11 = plVar10[-7], lVar11 != 0)) &&
           (((*(char *)(lVar11 + 0x10) == '\0' && (*(long *)(lVar11 + 0x18) == plVar10[6])) &&
            (*(long *)(lVar11 + 0x70) != 0)))) {
          uVar14 = uVar14 | (*(byte *)(*(long *)(lVar11 + 0x70) + 0xc) & 0x40) >> 6;
        }
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar8 != plVar13);
  }
  plVar8 = param_1;
  plVar7 = param_2;
  func_0x000109d36cbc();
  if (plVar8 == plVar7) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar11 = *plVar8;
      if (lVar11 == 0 || *(char *)(lVar11 + 8) != '\x12') {
        if ((lVar11 != 0 && *(char *)(lVar11 + 8) == '\x10') && (*(uint *)(lVar11 + 0xc) != 0)) {
          plVar10 = *(long **)(lVar11 + 0x10);
          lVar11 = (ulong)*(uint *)(lVar11 + 0xc) << 3;
          do {
            lVar9 = *plVar10;
            if (lVar9 != 0 && *(char *)(lVar9 + 8) == '\x12') {
              lVar6 = *(long *)(lVar9 + 0x18);
              if ((*(uint *)(lVar6 + 8) & 0xfe) == 0x12) {
                lVar6 = **(long **)(lVar6 + 0x10);
              }
              iVar5 = (int)lVar6;
              iVar2 = *(int *)(lVar9 + 0x20);
              FUN_109d9f594();
              uVar3 = iVar2 * iVar5;
              if (uVar12 <= uVar3) {
                uVar12 = uVar3;
              }
            }
            plVar10 = plVar10 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
      }
      else {
        lVar9 = *(long *)(lVar11 + 0x18);
        if ((*(uint *)(lVar9 + 8) & 0xfe) == 0x12) {
          lVar9 = **(long **)(lVar9 + 0x10);
        }
        iVar5 = (int)lVar9;
        iVar2 = *(int *)(lVar11 + 0x20);
        FUN_109d9f594();
        uVar3 = iVar2 * iVar5;
        if (uVar12 <= uVar3) {
          uVar12 = uVar3;
        }
      }
      plVar8 = plVar8 + 5;
    } while (plVar8 != plVar7);
  }
  for (plVar8 = (long *)param_1[10]; plVar8 != plVar13; plVar8 = (long *)plVar8[1]) {
    plVar7 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + -3;
    }
    for (plVar10 = (long *)plVar8[3]; plVar10 != plVar7 + 5; plVar10 = (long *)plVar10[1]) {
      if ((plVar10 != (long *)0x0) && ((char)plVar10[-1] == 'T')) {
        lVar11 = plVar10[-3];
        if (lVar11 == 0 || *(char *)(lVar11 + 8) != '\x12') {
          if (((lVar11 != 0) && (*(char *)(lVar11 + 8) == '\x10')) && (*(uint *)(lVar11 + 0xc) != 0)
             ) {
            plVar15 = *(long **)(lVar11 + 0x10);
            lVar11 = (ulong)*(uint *)(lVar11 + 0xc) << 3;
            do {
              lVar9 = *plVar15;
              if (lVar9 != 0 && *(char *)(lVar9 + 8) == '\x12') {
                lVar6 = *(long *)(lVar9 + 0x18);
                if ((*(uint *)(lVar6 + 8) & 0xfe) == 0x12) {
                  lVar6 = **(long **)(lVar6 + 0x10);
                }
                iVar5 = (int)lVar6;
                iVar2 = *(int *)(lVar9 + 0x20);
                FUN_109d9f594();
                uVar3 = iVar2 * iVar5;
                if (uVar12 <= uVar3) {
                  uVar12 = uVar3;
                }
              }
              plVar15 = plVar15 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
        else {
          lVar9 = *(long *)(lVar11 + 0x18);
          if ((*(uint *)(lVar9 + 8) & 0xfe) == 0x12) {
            lVar9 = **(long **)(lVar9 + 0x10);
          }
          iVar5 = (int)lVar9;
          iVar2 = *(int *)(lVar11 + 0x20);
          FUN_109d9f594();
          uVar3 = iVar2 * iVar5;
          if (uVar12 <= uVar3) {
            uVar12 = uVar3;
          }
        }
      }
    }
  }
  __ZNSt3__19to_stringEj(&ppppppuStack_78,uVar12);
  pppppppuVar1 = (undefined8 *******)ppppppuStack_78;
  if (-1 < (long)cStack_61) {
    pppppppuVar1 = &ppppppuStack_78;
  }
  if (-1 < cStack_61) {
    lStack_70 = (long)cStack_61;
  }
  plVar8 = param_1 + 0xe;
  plVar13 = plVar8;
  FUN_109d5adb0(plVar8,*(undefined8 *)*param_1,0xffffffff,&UNK_10f62b041,0x16,pppppppuVar1,lStack_70
               );
  *plVar8 = (long)plVar13;
  if (cStack_61 < '\0') {
    __ZdlPv(ppppppuStack_78);
  }
  if (uVar14 != 0) {
    plVar13 = plVar8;
    FUN_109d5ab08(plVar8,*(undefined8 *)*param_1,0xffffffff,6);
    param_1[0xe] = (long)plVar13;
    plVar13 = plVar8;
    FUN_109d5b2ec(plVar8,*(undefined8 *)*param_1,0xffffffff,0x1d);
    param_1[0xe] = (long)plVar13;
    plVar13 = plVar8;
    FUN_109d5b2ec(plVar8,*(undefined8 *)*param_1,0xffffffff,0x22);
    param_1[0xe] = (long)plVar13;
    FUN_109d853ec(param_1,0x15);
  }
  plVar13 = (long *)*param_2;
  while (plVar13 != param_2 + 1) {
    plVar7 = plVar8;
    FUN_109d5b2ec(plVar8,*(undefined8 *)*param_1,*(int *)(plVar13 + 4) + 1,0x23);
    param_1[0xe] = (long)plVar7;
    uVar14 = *(uint *)(plVar13 + 4);
    if ((*(byte *)((long)param_1 + 0x12) & 1) != 0) {
      FUN_109d85318(param_1);
    }
    if (*(long *)(param_1[0xb] + (ulong)uVar14 * 0x28 + 8) == 0) {
      plVar7 = plVar8;
      FUN_109d5b2ec(plVar8,*(undefined8 *)*param_1,*(int *)(plVar13 + 4) + 1,0x2d);
      param_1[0xe] = (long)plVar7;
      plVar7 = plVar8;
      FUN_109d5ab08(plVar8,*(undefined8 *)*param_1,*(int *)(plVar13 + 4) + 1,0x2c);
      param_1[0xe] = (long)plVar7;
    }
    plVar7 = (long *)plVar13[1];
    plVar10 = plVar13;
    if ((long *)plVar13[1] == (long *)0x0) {
      do {
        plVar13 = (long *)plVar10[2];
        bVar4 = (long *)*plVar13 != plVar10;
        plVar10 = plVar13;
      } while (bVar4);
    }
    else {
      do {
        plVar13 = plVar7;
        plVar7 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109f9baec; end: 109f9c14f;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x000109f9c428) */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_109f9baec(long param_1,ulong *******param_2,ulong *******param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *******pppppppuVar3;
  ulong *******pppppppuVar4;
  long lVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong *****pppppuVar14;
  ulong uVar15;
  ulong ******ppppppuVar16;
  long lVar17;
  undefined1 *puVar18;
  code *pcVar19;
  ulong ******ppppppuVar20;
  ulong ******ppppppuVar21;
  ulong *******pppppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  ulong *******apppppppuStack_178 [2];
  char cStack_161;
  ulong *******pppppppuStack_160;
  ulong ******ppppppuStack_158;
  ulong ******ppppppuStack_150;
  ulong *******pppppppuStack_140;
  ulong ******ppppppuStack_138;
  ulong ******ppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  ulong ******ppppppuStack_118;
  long lStack_110;
  ulong *******pppppppuStack_108;
  long lStack_100;
  ulong *******pppppppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong *******pppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong ******ppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  ulong *******pppppppuStack_60;
  long lStack_58;
  
  pppppppuVar8 = (ulong *******)&pppppppuStack_e0;
  pppppppuVar4 = (ulong *******)&pppppppuStack_e0;
  puVar18 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar16 = *param_2;
  lVar5 = param_1;
  FUN_109d9d608(param_1,&UNK_10f62ba46,0x11);
  ppppppuVar20 = ppppppuVar16 + 0xf3;
  FUN_109d9ffc0(ppppppuVar20,2);
  ppppppuVar21 = ppppppuVar16 + 0xf3;
  FUN_109d66880(ppppppuVar21,0x1a,0);
  ppppppuVar16 = ppppppuVar16 + 0xf3;
  ppppppuStack_c0 = ppppppuVar21;
  FUN_109d66880(ppppppuVar16,0,0);
  ppppppuStack_b8 = ppppppuVar16;
  FUN_109d67f1c(ppppppuVar20,&ppppppuStack_c0,2);
  ppppppuVar21 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar21,2,0);
  FUN_109d94e24();
  uVar15 = 0;
  ppppppuVar16 = *param_2 + 0x21;
  ppppppuStack_c0 = ppppppuVar21;
  FUN_109d956b4(ppppppuVar16,&UNK_10f62ba58,0xb);
  pppppuVar14 = *ppppppuVar16;
  if ((uVar15 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  ppppppuStack_b8 = (ulong ******)(pppppuVar14 + 1);
  FUN_109d94e24();
  pppppppuVar6 = param_2;
  ppppppuStack_b0 = ppppppuVar20;
  FUN_109d974c0(param_2,&ppppppuStack_c0,3,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_e0);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,1,0);
  FUN_109d94e24();
  uVar15 = 0;
  ppppppuVar21 = *param_2 + 0x21;
  ppppppuStack_c0 = ppppppuVar20;
  FUN_109d956b4(ppppppuVar21,&UNK_10f62ba64,10);
  pppppuVar14 = *ppppppuVar21;
  if ((uVar15 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  ppppppuStack_b8 = (ulong ******)(pppppuVar14 + 1);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,4,0);
  FUN_109d94e24();
  pppppppuVar6 = param_2;
  ppppppuStack_b0 = ppppppuVar20;
  FUN_109d974c0(param_2,&ppppppuStack_c0,3,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_e0);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,7,0);
  FUN_109d94e24();
  uVar15 = 0;
  ppppppuVar21 = *param_2 + 0x21;
  ppppppuStack_c0 = ppppppuVar20;
  FUN_109d956b4(ppppppuVar21,&UNK_10f5f9f6e,0xd);
  pppppuVar14 = *ppppppuVar21;
  if ((uVar15 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  ppppppuStack_b8 = (ulong ******)(pppppuVar14 + 1);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,2,0);
  FUN_109d94e24();
  pppppppuVar6 = param_2;
  ppppppuStack_b0 = ppppppuVar20;
  FUN_109d974c0(param_2,&ppppppuStack_c0,3,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_e0);
  lVar17 = 0;
  ppppppuStack_c0 = (ulong ******)&UNK_10f62ba6f;
  ppppppuStack_b0 = (ulong ******)&UNK_10f62ba86;
  puStack_a0 = &UNK_10f62ba9f;
  ppppppuStack_b8 = (ulong ******)CONCAT44(ppppppuStack_b8._4_4_,0x1f);
  uStack_a8 = 0x1f;
  uStack_98 = 0x1f;
  puStack_90 = &UNK_10f62babb;
  uStack_88 = 0x80;
  puStack_80 = &UNK_10f62bacc;
  uStack_78 = 8;
  puStack_70 = &UNK_10f62bae8;
  uStack_68 = 0x10;
  do {
    pppppppuVar6 = (ulong *******)(*param_2 + 0xf3);
    FUN_109d678e8(pppppppuVar6,7,0);
    FUN_109d94e24();
    uVar15 = *(ulong *)((long)&ppppppuStack_c0 + lVar17);
    pppppppuStack_e0 = pppppppuVar6;
    if (uVar15 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar15;
      _strlen(uVar15);
    }
    ppppppuVar20 = *param_2 + 0x21;
    uVar10 = uVar15;
    FUN_109d956b4(ppppppuVar20,uVar15,uVar12);
    pppppuVar14 = *ppppppuVar20;
    if ((uVar10 & 1) != 0) {
      pppppuVar14[2] = (ulong ****)pppppuVar14;
    }
    ppppppuStack_d8 = (ulong ******)(pppppuVar14 + 1);
    ppppppuVar20 = *param_2 + 0xf3;
    FUN_109d678e8(ppppppuVar20,(long)*(int *)((long)&ppppppuStack_b8 + lVar17),0);
    FUN_109d94e24();
    pppppppuVar6 = param_2;
    ppppppuStack_d0 = ppppppuVar20;
    FUN_109d974c0(param_2,&pppppppuStack_e0,3,0,1);
    pppppppuStack_60 = pppppppuVar6;
    FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_60);
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x60);
  lVar5 = param_1;
  FUN_109d9d608(param_1,&UNK_10f5fa5d5,10);
  uVar12 = 0;
  ppppppuVar20 = *param_2 + 0x21;
  FUN_109d956b4(ppppppuVar20,&UNK_10f62bafc,0x33);
  pppppuVar14 = *ppppppuVar20;
  if ((uVar12 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  pppppppuStack_60 = (ulong *******)(pppppuVar14 + 1);
  pppppppuVar6 = param_2;
  FUN_109d974c0(param_2,&pppppppuStack_60,1,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_e0);
  lVar5 = param_1;
  FUN_109d9d608(param_1,&UNK_10f62bb30,0xb);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,*(undefined *)((long)param_3 + 10),0);
  FUN_109d94e24();
  ppppppuVar21 = *param_2 + 0xf3;
  pppppppuStack_e0 = (ulong *******)ppppppuVar20;
  FUN_109d678e8(ppppppuVar21,*(undefined *)((long)param_3 + 0xb),0);
  FUN_109d94e24();
  ppppppuVar20 = *param_2 + 0xf3;
  ppppppuStack_d8 = ppppppuVar21;
  FUN_109d678e8(ppppppuVar20,0,0);
  FUN_109d94e24();
  pppppppuVar6 = param_2;
  ppppppuStack_d0 = ppppppuVar20;
  FUN_109d974c0(param_2,&pppppppuStack_e0,3,0,1);
  pppppppuStack_60 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_60);
  lVar5 = param_1;
  FUN_109d9d608(param_1,&UNK_10f62bb3c,0x14);
  uVar12 = 0;
  ppppppuVar20 = *param_2 + 0x21;
  FUN_109d956b4(ppppppuVar20,&UNK_10f43155c,5);
  pppppuVar14 = *ppppppuVar20;
  if ((uVar12 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  pppppppuStack_e0 = (ulong *******)(pppppuVar14 + 1);
  ppppppuVar20 = *param_2 + 0xf3;
  FUN_109d678e8(ppppppuVar20,*(undefined *)((long)param_3 + 0xc),0);
  FUN_109d94e24();
  ppppppuVar21 = *param_2 + 0xf3;
  ppppppuStack_d8 = ppppppuVar20;
  FUN_109d678e8(ppppppuVar21,*(undefined *)((long)param_3 + 0xd),0);
  FUN_109d94e24();
  ppppppuVar20 = *param_2 + 0xf3;
  ppppppuStack_d0 = ppppppuVar21;
  FUN_109d678e8(ppppppuVar20,0,0);
  FUN_109d94e24();
  pppppppuVar6 = param_2;
  ppppppuStack_c8 = ppppppuVar20;
  FUN_109d974c0(param_2,&pppppppuStack_e0,4,0,1);
  pppppppuStack_60 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(lVar5 + 0x30),&pppppppuStack_60);
  FUN_109d9d608(param_1,&UNK_10f62bb57,0x13);
  puVar11 = &UNK_10f62bb6b;
  ppppppuVar20 = *param_2 + 0x21;
  FUN_109d956b4(ppppppuVar20,&UNK_10f62bb6b,0x1b);
  pppppuVar14 = *ppppppuVar20;
  if (((ulong)puVar11 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  pppppppuStack_60 = (ulong *******)(pppppuVar14 + 1);
  pppppppuVar6 = param_2;
  FUN_109d974c0(param_2,&pppppppuStack_60,1,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(param_1 + 0x30),&pppppppuStack_e0);
  puVar11 = &UNK_10f62bb87;
  ppppppuVar20 = *param_2 + 0x21;
  FUN_109d956b4(ppppppuVar20,&UNK_10f62bb87,0x1c);
  pppppuVar14 = *ppppppuVar20;
  if (((ulong)puVar11 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  pppppppuStack_60 = (ulong *******)(pppppuVar14 + 1);
  pppppppuVar6 = param_2;
  FUN_109d974c0(param_2,&pppppppuStack_60,1,0,1);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c(*(undefined8 *)(param_1 + 0x30),&pppppppuStack_e0);
  uVar12 = 0;
  ppppppuVar20 = *param_2 + 0x21;
  FUN_109d956b4(ppppppuVar20,&UNK_10f62bba4,0x24);
  pppppuVar14 = *ppppppuVar20;
  if ((uVar12 & 1) != 0) {
    pppppuVar14[2] = (ulong ****)pppppuVar14;
  }
  pppppppuStack_60 = (ulong *******)(pppppuVar14 + 1);
  pppppppuVar6 = param_2;
  FUN_109d974c0(param_2,&pppppppuStack_60,1,0,1);
  pppppppuVar7 = *(ulong ********)(param_1 + 0x30);
  pppppppuStack_e0 = pppppppuVar6;
  FUN_109d9781c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppppuVar7;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_109f9c150;
  pcVar19 = pcStack_e8;
  lStack_110 = lVar5;
  pppppppuStack_108 = param_3;
  lStack_100 = param_1;
  pppppppuStack_f8 = param_2;
  puStack_f0 = puVar18;
  if (pppppppuVar8 == (ulong *******)0x0) {
    pppppppuVar8 = (ulong *******)&DAT_10f4912bd;
  }
  else {
    bVar1 = *(byte *)((long)pppppppuVar8 + 4);
    if (bVar1 != 0x11) {
      uStack_120 = 0;
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          if (bVar1 == 1) {
            ppppppuStack_118 = (ulong ******)0x300000000000000;
            pppppppuStack_128 = (undefined8 *******)0x746e69;
            goto LAB_109f9c294;
          }
LAB_109f9c274:
          ppppppuStack_118 = (ulong ******)0x700000000000000;
          pppppppuStack_128 = (undefined8 *******)0x6e776f6e6b6e75;
          goto LAB_109f9c294;
        }
        uVar13 = 0x746e6975;
      }
      else if (bVar1 == 0xb) {
        uVar13 = 0x6c6f6f62;
      }
      else {
        if (bVar1 != 3) {
          if (bVar1 == 2) {
            ppppppuStack_118 = (ulong ******)0x500000000000000;
            pppppppuStack_128 = (undefined8 *******)0x74616f6c66;
            goto LAB_109f9c294;
          }
          goto LAB_109f9c274;
        }
        uVar13 = 0x666c6168;
      }
      ppppppuStack_118 = (ulong ******)0x400000000000000;
      pppppppuStack_128 = (undefined8 *******)(ulong)uVar13;
LAB_109f9c294:
      bVar1 = *(byte *)((long)pppppppuVar8 + 0xe);
      bVar2 = *(byte *)((long)pppppppuVar8 + 0xd);
      if (bVar1 < 2) {
        if (bVar2 < 2) {
          pppppppuVar7[1] = (ulong ******)0x0;
          *pppppppuVar7 = (ulong ******)pppppppuStack_128;
          pppppppuVar7[2] = ppppppuStack_118;
          return (ulong *******)(ulong)bVar1;
        }
        __ZNSt3__19to_stringEj(&pppppppuStack_140,bVar2);
        uVar15 = uStack_120;
        pppppppuVar3 = pppppppuStack_128;
        if (-1 < (long)ppppppuStack_118) {
          uVar15 = (ulong)ppppppuStack_118 >> 0x38;
          pppppppuVar3 = &pppppppuStack_128;
        }
        pppppppuVar4 = (ulong *******)&pppppppuStack_140;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar4,0,pppppppuVar3,uVar15);
        ppppppuVar21 = pppppppuVar4[1];
        ppppppuVar20 = *pppppppuVar4;
        pppppppuVar7[2] = pppppppuVar4[2];
        pppppppuVar7[1] = ppppppuVar21;
        *pppppppuVar7 = ppppppuVar20;
        pppppppuVar4[1] = (ulong ******)0x0;
        pppppppuVar4[2] = (ulong ******)0x0;
        *pppppppuVar4 = (ulong ******)0x0;
        pppppppuVar8 = pppppppuStack_140;
        if (-1 < (long)ppppppuStack_130) {
          return pppppppuVar4;
        }
      }
      else {
        __ZNSt3__19to_stringEj(apppppppuStack_178);
        uVar15 = uStack_120;
        pppppppuVar3 = pppppppuStack_128;
        if (-1 < (long)ppppppuStack_118) {
          uVar15 = (ulong)ppppppuStack_118 >> 0x38;
          pppppppuVar3 = &pppppppuStack_128;
        }
        pppppppuVar4 = (ulong *******)apppppppuStack_178;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar4,0,pppppppuVar3,uVar15);
        ppppppuStack_158 = pppppppuVar4[1];
        pppppppuStack_160 = (ulong *******)*pppppppuVar4;
        ppppppuStack_150 = pppppppuVar4[2];
        pppppppuVar4[1] = (ulong ******)0x0;
        pppppppuVar4[2] = (ulong ******)0x0;
        *pppppppuVar4 = (ulong ******)0x0;
        pppppppuVar4 = (ulong *******)&pppppppuStack_160;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar4,&DAT_10f62b0e2,1);
        ppppppuStack_138 = pppppppuVar4[1];
        pppppppuStack_140 = (ulong *******)*pppppppuVar4;
        ppppppuStack_130 = pppppppuVar4[2];
        pppppppuVar4[1] = (ulong ******)0x0;
        pppppppuVar4[2] = (ulong ******)0x0;
        *pppppppuVar4 = (ulong ******)0x0;
        __ZNSt3__19to_stringEj(&pppppppuStack_190,bVar2);
        pppppppuVar4 = pppppppuStack_190;
        if (-1 < (char)bStack_179) {
          uStack_188 = (ulong)bStack_179;
          pppppppuVar4 = (ulong *******)&pppppppuStack_190;
        }
        pppppppuVar6 = (ulong *******)&pppppppuStack_140;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppppuVar6,pppppppuVar4,uStack_188);
        ppppppuVar21 = pppppppuVar6[1];
        ppppppuVar20 = *pppppppuVar6;
        pppppppuVar7[2] = pppppppuVar6[2];
        pppppppuVar7[1] = ppppppuVar21;
        *pppppppuVar7 = ppppppuVar20;
        pppppppuVar6[1] = (ulong ******)0x0;
        pppppppuVar6[2] = (ulong ******)0x0;
        *pppppppuVar6 = (ulong ******)0x0;
        if ((char)bStack_179 < '\0') {
          __ZdlPv(pppppppuStack_190);
          pppppppuVar6 = pppppppuStack_190;
        }
        if ((long)ppppppuStack_130 < 0) {
          pppppppuVar6 = pppppppuStack_140;
          __ZdlPv(pppppppuStack_140);
        }
        if ((long)ppppppuStack_150 < 0) {
          pppppppuVar6 = pppppppuStack_160;
          __ZdlPv(pppppppuStack_160);
        }
        pppppppuVar8 = apppppppuStack_178[0];
        if (-1 < cStack_161) {
          return pppppppuVar6;
        }
      }
      __ZdlPv(pppppppuVar8);
      return pppppppuVar8;
    }
    if ((*(byte *)((long)pppppppuVar8 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
      pppppppuVar4 = (ulong *******)&pppppppuStack_e0;
      param_2 = pppppppuStack_f8;
      param_3 = pppppppuStack_108;
      puVar18 = puStack_f0;
      pcVar19 = pcStack_e8;
      param_1 = lStack_100;
      lVar5 = lStack_110;
    }
    else {
      pppppppuVar4 = (ulong *******)&pppppppuStack_e0;
      pppppppuVar8 = (ulong *******)(&UNK_10e05bf38 + (long)pppppppuVar8[3]);
    }
  }
  while( true ) {
    pppppppuVar9 = pppppppuVar8;
    pppppppuVar6 = pppppppuVar7;
    *(ulong ********)((long)pppppppuVar4 + -0x40) = &ppppppuStack_c0;
    *(ulong *)((long)pppppppuVar4 + -0x38) = uVar15;
    *(long *)((long)pppppppuVar4 + -0x30) = lVar5;
    *(ulong ********)((long)pppppppuVar4 + -0x28) = param_3;
    *(long *)((long)pppppppuVar4 + -0x20) = param_1;
    *(ulong ********)((long)pppppppuVar4 + -0x18) = param_2;
    *(undefined1 **)((long)pppppppuVar4 + -0x10) = puVar18;
    *(code **)((long)pppppppuVar4 + -8) = pcVar19;
    pppppppuVar8 = pppppppuVar9;
    func_0x000107c613d0();
    if (pppppppuVar8 < (ulong *******)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(long *)((long)pppppppuVar4 + -0x60) = param_1;
    *(ulong ********)((long)pppppppuVar4 + -0x58) = pppppppuVar6;
    *(undefined1 **)((long)pppppppuVar4 + -0x50) = (undefined1 *)((long)pppppppuVar4 + -0x10);
    *(undefined **)((long)pppppppuVar4 + -0x48) = &UNK_10002d57c;
    puVar18 = (undefined1 *)((long)pppppppuVar4 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pppppppuVar8;
    }
    pppppppuVar8 = (ulong *******)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pppppppuVar8 == 0) {
      return pppppppuVar8;
    }
    pppppppuVar4 = (ulong *******)((long)pppppppuVar4 + -0x60);
    pppppppuVar7 = (ulong *******)0x1132dfae8;
    pppppppuVar8 = (ulong *******)&UNK_10f5738ce;
    param_2 = pppppppuVar6;
    param_3 = pppppppuVar9;
    pcVar19 = (code *)&UNK_10002d5bc;
  }
  if (pppppppuVar8 < (ulong *******)0x17) {
    *(char *)((long)pppppppuVar6 + 0x17) = (char)pppppppuVar8;
    pppppppuVar7 = pppppppuVar6;
    if (pppppppuVar8 == (ulong *******)0x0) goto code_r0x00010002d55c;
  }
  else {
    pppppppuVar4 = (ulong *******)0x19;
    if (((ulong)pppppppuVar8 | 7) != 0x17) {
      pppppppuVar4 = (ulong *******)(((ulong)pppppppuVar8 | 7) + 1);
    }
    pppppppuVar7 = pppppppuVar4;
    func_0x000107c60e20();
    pppppppuVar6[1] = (ulong ******)pppppppuVar8;
    pppppppuVar6[2] = (ulong ******)((ulong)pppppppuVar4 | 0x8000000000000000);
    *pppppppuVar6 = (ulong ******)pppppppuVar7;
  }
  func_0x000107c610b8(pppppppuVar7,pppppppuVar9,pppppppuVar8);
code_r0x00010002d55c:
  *(undefined1 *)((long)pppppppuVar7 + (long)pppppppuVar8) = 0;
  return pppppppuVar6;
}



/* Entry: 109f9c150; end: 109f9c4d7;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x000109f9c428) */

ulong ****** FUN_109f9c150(ulong ******param_1,ulong ******param_2)

{
  ulong uVar1;
  ulong ******ppppppuVar2;
  byte bVar3;
  byte bVar4;
  undefined8 ******ppppppuVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong ******ppppppuVar8;
  ulong ******ppppppuVar9;
  uint uVar10;
  ulong ******unaff_x19;
  undefined8 unaff_x20;
  ulong ******unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  ulong *****apppppuStack_98 [2];
  char cStack_81;
  ulong *****pppppuStack_80;
  ulong ****ppppuStack_78;
  ulong ****ppppuStack_70;
  ulong *****pppppuStack_60;
  ulong ****ppppuStack_58;
  ulong ****ppppuStack_50;
  undefined8 *****pppppuStack_48;
  ulong uStack_40;
  ulong ****ppppuStack_38;
  
  if (param_2 == (ulong ******)0x0) {
    param_2 = (ulong ******)&DAT_10f4912bd;
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 4);
    if (bVar3 != 0x11) {
      uStack_40 = 0;
      if (bVar3 < 2) {
        if (bVar3 != 0) {
          if (bVar3 == 1) {
            ppppuStack_38 = (ulong ****)0x300000000000000;
            pppppuStack_48 = (undefined8 ******)0x746e69;
            goto LAB_109f9c294;
          }
LAB_109f9c274:
          ppppuStack_38 = (ulong ****)0x700000000000000;
          pppppuStack_48 = (undefined8 ******)0x6e776f6e6b6e75;
          goto LAB_109f9c294;
        }
        uVar10 = 0x746e6975;
      }
      else if (bVar3 == 0xb) {
        uVar10 = 0x6c6f6f62;
      }
      else {
        if (bVar3 != 3) {
          if (bVar3 == 2) {
            ppppuStack_38 = (ulong ****)0x500000000000000;
            pppppuStack_48 = (undefined8 ******)0x74616f6c66;
            goto LAB_109f9c294;
          }
          goto LAB_109f9c274;
        }
        uVar10 = 0x666c6168;
      }
      ppppuStack_38 = (ulong ****)0x400000000000000;
      pppppuStack_48 = (undefined8 *****)(ulong)uVar10;
LAB_109f9c294:
      bVar3 = *(byte *)((long)param_2 + 0xe);
      bVar4 = *(byte *)((long)param_2 + 0xd);
      if (bVar3 < 2) {
        if (bVar4 < 2) {
          param_1[1] = (ulong *****)0x0;
          *param_1 = pppppuStack_48;
          param_1[2] = (ulong *****)ppppuStack_38;
          return (ulong ******)(ulong)bVar3;
        }
        __ZNSt3__19to_stringEj(&pppppuStack_60,bVar4);
        uVar1 = uStack_40;
        ppppppuVar5 = (undefined8 ******)pppppuStack_48;
        if (-1 < (long)ppppuStack_38) {
          uVar1 = (ulong)ppppuStack_38 >> 0x38;
          ppppppuVar5 = &pppppuStack_48;
        }
        ppppppuVar8 = &pppppuStack_60;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppuVar8,0,ppppppuVar5,uVar1);
        pppppuVar12 = ppppppuVar8[1];
        pppppuVar11 = *ppppppuVar8;
        param_1[2] = ppppppuVar8[2];
        param_1[1] = pppppuVar12;
        *param_1 = pppppuVar11;
        ppppppuVar8[1] = (ulong *****)0x0;
        ppppppuVar8[2] = (ulong *****)0x0;
        *ppppppuVar8 = (ulong *****)0x0;
        ppppppuVar9 = (ulong ******)pppppuStack_60;
        if (-1 < (long)ppppuStack_50) {
          return ppppppuVar8;
        }
      }
      else {
        __ZNSt3__19to_stringEj(apppppuStack_98);
        uVar1 = uStack_40;
        ppppppuVar5 = (undefined8 ******)pppppuStack_48;
        if (-1 < (long)ppppuStack_38) {
          uVar1 = (ulong)ppppuStack_38 >> 0x38;
          ppppppuVar5 = &pppppuStack_48;
        }
        ppppppuVar8 = apppppuStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppuVar8,0,ppppppuVar5,uVar1);
        ppppuStack_78 = (ulong ****)ppppppuVar8[1];
        pppppuStack_80 = *ppppppuVar8;
        ppppuStack_70 = (ulong ****)ppppppuVar8[2];
        ppppppuVar8[1] = (ulong *****)0x0;
        ppppppuVar8[2] = (ulong *****)0x0;
        *ppppppuVar8 = (ulong *****)0x0;
        ppppppuVar8 = &pppppuStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar8,&DAT_10f62b0e2,1);
        ppppuStack_58 = (ulong ****)ppppppuVar8[1];
        pppppuStack_60 = *ppppppuVar8;
        ppppuStack_50 = (ulong ****)ppppppuVar8[2];
        ppppppuVar8[1] = (ulong *****)0x0;
        ppppppuVar8[2] = (ulong *****)0x0;
        *ppppppuVar8 = (ulong *****)0x0;
        __ZNSt3__19to_stringEj(&pppppuStack_b0,bVar4);
        ppppppuVar8 = (ulong ******)pppppuStack_b0;
        if (-1 < (char)bStack_99) {
          uStack_a8 = (ulong)bStack_99;
          ppppppuVar8 = &pppppuStack_b0;
        }
        ppppppuVar7 = &pppppuStack_60;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar7,ppppppuVar8,uStack_a8);
        pppppuVar12 = ppppppuVar7[1];
        pppppuVar11 = *ppppppuVar7;
        param_1[2] = ppppppuVar7[2];
        param_1[1] = pppppuVar12;
        *param_1 = pppppuVar11;
        ppppppuVar7[1] = (ulong *****)0x0;
        ppppppuVar7[2] = (ulong *****)0x0;
        *ppppppuVar7 = (ulong *****)0x0;
        if ((char)bStack_99 < '\0') {
          __ZdlPv(pppppuStack_b0);
          ppppppuVar7 = (ulong ******)pppppuStack_b0;
        }
        if ((long)ppppuStack_50 < 0) {
          ppppppuVar7 = (ulong ******)pppppuStack_60;
          __ZdlPv(pppppuStack_60);
        }
        if ((long)ppppuStack_70 < 0) {
          ppppppuVar7 = (ulong ******)pppppuStack_80;
          __ZdlPv(pppppuStack_80);
        }
        ppppppuVar9 = (ulong ******)apppppuStack_98[0];
        if (-1 < cStack_81) {
          return ppppppuVar7;
        }
      }
      __ZdlPv(ppppppuVar9);
      return ppppppuVar9;
    }
    if ((*(byte *)((long)param_2 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    else {
      param_2 = (ulong ******)(&UNK_10e05bf38 + (long)param_2[3]);
    }
  }
  while( true ) {
    ppppppuVar7 = param_2;
    ppppppuVar9 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *******)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *******)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    ppppppuVar8 = ppppppuVar7;
    func_0x000107c613d0();
    if (ppppppuVar8 < (ulong ******)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong *******)((long)register0x00000008 + -0x58) = ppppppuVar9;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return ppppppuVar8;
    }
    ppppppuVar8 = (ulong ******)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)ppppppuVar8 == 0) {
      return ppppppuVar8;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong ******)0x1132dfae8;
    param_2 = (ulong ******)&UNK_10f5738ce;
    unaff_x19 = ppppppuVar9;
    unaff_x21 = ppppppuVar7;
  }
  if (ppppppuVar8 < (ulong ******)0x17) {
    *(char *)((long)ppppppuVar9 + 0x17) = (char)ppppppuVar8;
    ppppppuVar6 = ppppppuVar9;
    if (ppppppuVar8 == (ulong ******)0x0) goto code_r0x00010002d55c;
  }
  else {
    ppppppuVar2 = (ulong ******)0x19;
    if (((ulong)ppppppuVar8 | 7) != 0x17) {
      ppppppuVar2 = (ulong ******)(((ulong)ppppppuVar8 | 7) + 1);
    }
    ppppppuVar6 = ppppppuVar2;
    func_0x000107c60e20();
    ppppppuVar9[1] = (ulong *****)ppppppuVar8;
    ppppppuVar9[2] = (ulong *****)((ulong)ppppppuVar2 | 0x8000000000000000);
    *ppppppuVar9 = (ulong *****)ppppppuVar6;
  }
  func_0x000107c610b8(ppppppuVar6,ppppppuVar7,ppppppuVar8);
code_r0x00010002d55c:
  *(undefined1 *)((long)ppppppuVar6 + (long)ppppppuVar8) = 0;
  return ppppppuVar9;
}


