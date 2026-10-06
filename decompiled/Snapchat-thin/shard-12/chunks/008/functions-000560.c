/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10994e5b4; end: 10994e5c7;  */

void FUN_10994e5b4(void)

{
  FUN_10994ef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10994e5c8; end: 10994e5cf;  */

void FUN_10994e5c8(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined *puVar18;
  undefined1 (*pauVar19) [16];
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  ulong in_x4;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong *puVar29;
  long *unaff_x20;
  undefined8 *puVar30;
  int *unaff_x21;
  long *plVar31;
  undefined8 *puVar32;
  code ***pppcVar33;
  long lVar34;
  long unaff_x23;
  ulong uVar35;
  ulong uVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong *puVar39;
  undefined1 (*pauVar40) [16];
  ulong *unaff_x28;
  undefined1 auVar41 [16];
  undefined8 uStack_198;
  ulong *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  ulong *puStack_178;
  ulong uStack_170;
  long lStack_168;
  long *plStack_160;
  int *piStack_158;
  long *plStack_150;
  ulong *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined8 *puStack_e8;
  int iStack_dc;
  long *plStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  code **appcStack_70 [2];
  
  puVar29 = (ulong *)(param_2 + 0x30);
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar37 = (ulong *)*puVar29;
  uVar35 = *puVar37;
  plVar31 = (long *)(puVar37[1] - uVar35);
  puVar38 = puVar37;
  puStack_f8 = puVar29;
  if (plVar31 != (long *)0x0) {
    if ((long)plVar31 < 0) {
LAB_109918034:
      FUN_1099041e8();
      goto LAB_109918038;
    }
    plVar8 = plVar31;
    __Znwm();
    _memset();
    puVar29 = (ulong *)0x0;
    unaff_x20 = (long *)0x0;
    *puVar7 = plVar8;
    puVar7[1] = (undefined *)((long)plVar8 + (long)plVar31);
    unaff_x21 = (int *)((long)plVar8 + 4);
    unaff_x23 = 0xffffffff;
    puVar7[2] = (undefined *)((long)plVar8 + (long)plVar31);
    plVar31 = (long *)&UNK_10f589f24;
    do {
      iVar5 = *(int *)(*(long *)(uVar35 + (long)puVar29 * 8) + 0x28);
      pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,iVar5);
      appcStack_70[0] = (code **)CONCAT44(appcStack_70[0]._4_4_,0xffffffff);
      unaff_x28 = puVar37;
      if (iVar5 == -1) {
        ppcVar9 = &pcStack_d0;
        FUN_109904144(ppcVar9,appcStack_70,&UNK_10f589f24);
        appcStack_70[0] = ppcVar9;
        if (ppcVar9 != (code **)0x0) goto LAB_10991803c;
        uVar35 = *puVar37;
      }
      lVar24 = *(long *)(uVar35 + (long)puVar29 * 8);
      if ((*(byte *)(lVar24 + 0xc) & 1) != 0) {
LAB_109917fd4:
        pcStack_d0 = (code *)0x0;
        uStack_78 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        in_x4 = 0;
        pppcVar33 = (code ***)0x3;
        FUN_1099a9f0c(&pcStack_d0,&UNK_10f589e69,0xa3,3,FUN_1099aa768,0);
        pauVar19 = (undefined1 (*) [16])&UNK_10f589f47;
        puVar30 = (undefined8 *)0x31;
        FUN_1092b4db8(lStack_c8 + 0x7540);
        puStack_190 = puVar37;
        goto LAB_10991806c;
      }
      plVar8 = *(long **)(lVar24 + 0x10);
      if (plVar8 == (long *)0x0) {
        iVar5 = *(int *)(lVar24 + 8);
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        iVar5 = (int)plVar8;
      }
      if (iVar5 == 0) goto LAB_109917fd4;
      uVar35 = *puVar37;
      lVar24 = *(long *)(uVar35 + (long)puVar29 * 8);
      plVar8 = *(long **)(lVar24 + 0x10);
      if (plVar8 == (long *)0x0) {
        iVar5 = *(int *)(lVar24 + 8);
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        iVar5 = (int)plVar8;
        uVar35 = *puVar37;
      }
      unaff_x21[-1] = iVar5;
      *unaff_x21 = (int)unaff_x20;
      unaff_x20 = (long *)(ulong)(uint)(iVar5 + (int)unaff_x20);
      puVar29 = (ulong *)((long)puVar29 + 1);
      unaff_x21 = unaff_x21 + 2;
    } while (puVar29 < (ulong *)((long)(puVar37[1] - uVar35) >> 3));
    puVar38 = (ulong *)*puStack_f8;
  }
  uVar27 = puVar38[3];
  uVar25 = puVar38[4];
  lVar24 = uVar25 - uVar27;
  puStack_118 = param_1;
  puStack_110 = puVar7;
  if (lVar24 == 0) {
    puStack_e8 = (undefined8 *)0x0;
  }
  else {
    puVar29 = (ulong *)(lVar24 >> 3);
    puVar37 = puVar38;
    if ((ulong)puVar29 >> 0x3b != 0) {
LAB_109918038:
      func_0x0001099041fc();
LAB_10991803c:
      pauVar19 = (undefined1 (*) [16])&UNK_10f589e69;
      pppcVar33 = appcStack_70;
      puVar30 = (undefined8 *)0xa2;
      FUN_1099ab8e4(&pcStack_d0);
      puStack_190 = unaff_x28;
LAB_10991806c:
      func_0x0001099ab7c0(&pcStack_d0);
      pcStack_128 = FUN_109918074;
      pauVar13 = (undefined1 (*) [16])&DAT_10f62a4d8;
      puStack_130 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_138 = FUN_109918088;
      puStack_188 = puVar7;
      puStack_180 = param_1;
      puStack_178 = puVar37;
      uStack_170 = uVar35;
      lStack_168 = unaff_x23;
      plStack_160 = plVar31;
      piStack_158 = unaff_x21;
      plStack_150 = unaff_x20;
      puStack_148 = puVar29;
      puStack_140 = (undefined1 *)&puStack_130;
LAB_1099180bc:
      puVar32 = (undefined8 *)(pauVar19[-1] + 8);
      pauVar22 = pauVar19 + -1;
      puVar7 = (undefined8 *)(pauVar19[-2] + 8);
      pauVar23 = pauVar13;
LAB_1099180d4:
      do {
        pauVar13 = pauVar23;
        uVar35 = (long)pauVar19 - (long)pauVar13 >> 3;
        if (uVar35 - 2 != 0 && 1 < (long)uVar35) {
          if (uVar35 != 3) {
            if (uVar35 == 4) {
              puVar18 = *pauVar13 + 8;
              (*(code *)*puVar30)(puVar18,pauVar13);
              pauVar19 = pauVar13 + 1;
              (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
              if (((ulong)puVar18 & 1) == 0) {
                if ((int)pauVar19 != 0) {
                  auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar41._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar41._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar30)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar41 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar41._8_8_;
                    *(long *)*pauVar13 = auVar41._0_8_;
                  }
                }
              }
              else {
                uVar12 = *(undefined8 *)*pauVar13;
                if ((int)pauVar19 == 0) {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
                  *(undefined8 *)(*pauVar13 + 8) = uVar12;
                  pauVar19 = pauVar13 + 1;
                  (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
                  if ((int)pauVar19 != 0) {
                    auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                       *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                    *(long *)pauVar13[1] = auVar41._8_8_;
                    *(long *)(*pauVar13 + 8) = auVar41._0_8_;
                  }
                }
                else {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)pauVar13[1];
                  *(undefined8 *)pauVar13[1] = uVar12;
                }
              }
              puVar7 = puVar32;
              (*(code *)*puVar30)(puVar32,pauVar13 + 1);
              if ((int)puVar7 == 0) {
                return;
              }
              uVar12 = *(undefined8 *)pauVar13[1];
              *(undefined8 *)pauVar13[1] = *puVar32;
              *puVar32 = uVar12;
            }
            else {
              if (uVar35 != 5) goto LAB_109918110;
              puVar18 = *pauVar13 + 8;
              (*(code *)*puVar30)(puVar18,pauVar13);
              pauVar19 = pauVar13 + 1;
              (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
              if (((ulong)puVar18 & 1) == 0) {
                if ((int)pauVar19 != 0) {
                  auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar41._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar41._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar30)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar41 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar41._8_8_;
                    *(long *)*pauVar13 = auVar41._0_8_;
                  }
                }
              }
              else {
                uVar12 = *(undefined8 *)*pauVar13;
                if ((int)pauVar19 == 0) {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
                  *(undefined8 *)(*pauVar13 + 8) = uVar12;
                  pauVar19 = pauVar13 + 1;
                  (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
                  if ((int)pauVar19 != 0) {
                    auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                       *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                    *(long *)pauVar13[1] = auVar41._8_8_;
                    *(long *)(*pauVar13 + 8) = auVar41._0_8_;
                  }
                }
                else {
                  *(undefined8 *)*pauVar13 = *(undefined8 *)pauVar13[1];
                  *(undefined8 *)pauVar13[1] = uVar12;
                }
              }
              puVar18 = pauVar13[1] + 8;
              (*(code *)*puVar30)(puVar18,pauVar13 + 1);
              if ((int)puVar18 != 0) {
                auVar41 = NEON_ext(pauVar13[1],pauVar13[1],8,1);
                *(long *)(pauVar13[1] + 8) = auVar41._8_8_;
                *(long *)pauVar13[1] = auVar41._0_8_;
                pauVar19 = pauVar13 + 1;
                (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
                if ((int)pauVar19 != 0) {
                  auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                                     *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
                  *(long *)pauVar13[1] = auVar41._8_8_;
                  *(long *)(*pauVar13 + 8) = auVar41._0_8_;
                  puVar18 = *pauVar13 + 8;
                  (*(code *)*puVar30)(puVar18,pauVar13);
                  if ((int)puVar18 != 0) {
                    auVar41 = NEON_ext(*pauVar13,*pauVar13,8,1);
                    *(long *)(*pauVar13 + 8) = auVar41._8_8_;
                    *(long *)*pauVar13 = auVar41._0_8_;
                  }
                }
              }
              puVar7 = puVar32;
              (*(code *)*puVar30)(puVar32,pauVar13[1] + 8);
              if ((int)puVar7 == 0) {
                return;
              }
              uVar12 = *(undefined8 *)(pauVar13[1] + 8);
              *(undefined8 *)(pauVar13[1] + 8) = *puVar32;
              *puVar32 = uVar12;
              puVar18 = pauVar13[1] + 8;
              (*(code *)*puVar30)(puVar18,pauVar13 + 1);
              if ((int)puVar18 == 0) {
                return;
              }
              auVar41 = NEON_ext(pauVar13[1],pauVar13[1],8,1);
              *(long *)(pauVar13[1] + 8) = auVar41._8_8_;
              *(long *)pauVar13[1] = auVar41._0_8_;
            }
            pauVar19 = pauVar13 + 1;
            (*(code *)*puVar30)(pauVar19,*pauVar13 + 8);
            if ((int)pauVar19 == 0) {
              return;
            }
            auVar41 = NEON_ext(*(undefined1 (*) [16])(*pauVar13 + 8),
                               *(undefined1 (*) [16])(*pauVar13 + 8),8,1);
            *(long *)pauVar13[1] = auVar41._8_8_;
            *(long *)(*pauVar13 + 8) = auVar41._0_8_;
LAB_109918cf4:
            puVar18 = *pauVar13 + 8;
            (*(code *)*puVar30)(puVar18,pauVar13);
            if ((int)puVar18 == 0) {
              return;
            }
            auVar41 = NEON_ext(*pauVar13,*pauVar13,8,1);
            *(long *)(*pauVar13 + 8) = auVar41._8_8_;
            *(long *)*pauVar13 = auVar41._0_8_;
            return;
          }
          puVar18 = *pauVar13 + 8;
          (*(code *)*puVar30)(puVar18,pauVar13);
          puVar7 = puVar32;
          (*(code *)*puVar30)(puVar32,*pauVar13 + 8);
          if (((ulong)puVar18 & 1) == 0) {
            if ((int)puVar7 == 0) {
              return;
            }
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = *puVar32;
            *puVar32 = uVar12;
            goto LAB_109918cf4;
          }
          uVar12 = *(undefined8 *)*pauVar13;
          if ((int)puVar7 == 0) {
            *(undefined8 *)*pauVar13 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = uVar12;
            puVar7 = puVar32;
            (*(code *)*puVar30)(puVar32,*pauVar13 + 8);
            if ((int)puVar7 == 0) {
              return;
            }
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = *puVar32;
            goto LAB_1099187a4;
          }
LAB_10991879c:
          *(undefined8 *)*pauVar13 = *puVar32;
LAB_1099187a4:
          *puVar32 = uVar12;
          return;
        }
        if (uVar35 < 2) {
          return;
        }
        if (uVar35 == 2) {
          puVar7 = puVar32;
          (*(code *)*puVar30)(puVar32,pauVar13);
          if ((int)puVar7 == 0) {
            return;
          }
          uVar12 = *(undefined8 *)*pauVar13;
          goto LAB_10991879c;
        }
LAB_109918110:
        if ((long)uVar35 < 0x18) {
          pauVar23 = (undefined1 (*) [16])(*pauVar13 + 8);
          if ((in_x4 & 1) == 0) {
            if (pauVar13 == pauVar19 || pauVar23 == pauVar19) {
              return;
            }
            pauVar22 = pauVar13 + -1;
            do {
              pauVar17 = pauVar23;
              pauVar22 = (undefined1 (*) [16])(*pauVar22 + 8);
              pauVar23 = pauVar17;
              (*(code *)*puVar30)(pauVar17,pauVar13);
              if ((int)pauVar23 != 0) {
                uStack_198 = *(undefined8 *)*pauVar17;
                pauVar13 = pauVar22;
                do {
                  pauVar23 = pauVar13;
                  *(undefined8 *)pauVar23[1] = *(undefined8 *)(*pauVar23 + 8);
                  puVar7 = &uStack_198;
                  (*(code *)*puVar30)(puVar7,pauVar23);
                  pauVar13 = (undefined1 (*) [16])(pauVar23[-1] + 8);
                } while (((ulong)puVar7 & 1) != 0);
                *(undefined8 *)(*pauVar23 + 8) = uStack_198;
              }
              pauVar23 = (undefined1 (*) [16])(*pauVar17 + 8);
              pauVar13 = pauVar17;
            } while ((undefined1 (*) [16])(*pauVar17 + 8) != pauVar19);
            return;
          }
          if (pauVar13 == pauVar19 || pauVar23 == pauVar19) {
            return;
          }
          lVar24 = 0;
          pauVar22 = pauVar13;
          goto LAB_10991880c;
        }
        if (pppcVar33 == (code ***)0x0) {
          if (pauVar13 == pauVar19) {
            return;
          }
          uVar25 = uVar35 - 2 >> 1;
          uVar27 = uVar25;
          goto LAB_109918894;
        }
        puVar10 = (undefined8 *)(*pauVar13 + (uVar35 >> 1) * 8);
        if (uVar35 < 0x81) {
          pauVar23 = pauVar13;
          (*(code *)*puVar30)(pauVar13,puVar10);
          puVar20 = puVar32;
          (*(code *)*puVar30)(puVar32,pauVar13);
          if (((ulong)pauVar23 & 1) == 0) {
            if ((int)puVar20 != 0) {
              uVar12 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = *puVar32;
              *puVar32 = uVar12;
              pauVar23 = pauVar13;
              (*(code *)*puVar30)(pauVar13,puVar10);
              if ((int)pauVar23 != 0) {
                uVar12 = *puVar10;
                *puVar10 = *(undefined8 *)*pauVar13;
                *(undefined8 *)*pauVar13 = uVar12;
              }
            }
          }
          else {
            uVar12 = *puVar10;
            if ((int)puVar20 == 0) {
              *puVar10 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = uVar12;
              puVar10 = puVar32;
              (*(code *)*puVar30)(puVar32,pauVar13);
              if ((int)puVar10 == 0) goto LAB_109918494;
              uVar12 = *(undefined8 *)*pauVar13;
              *(undefined8 *)*pauVar13 = *puVar32;
            }
            else {
              *puVar10 = *puVar32;
            }
            *puVar32 = uVar12;
          }
        }
        else {
          puVar20 = puVar10;
          (*(code *)*puVar30)(puVar10,pauVar13);
          puVar14 = puVar32;
          (*(code *)*puVar30)(puVar32,puVar10);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)puVar14 != 0) {
              uVar12 = *puVar10;
              *puVar10 = *puVar32;
              *puVar32 = uVar12;
              puVar20 = puVar10;
              (*(code *)*puVar30)(puVar10,pauVar13);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)*pauVar13;
                *(undefined8 *)*pauVar13 = *puVar10;
                *puVar10 = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)*pauVar13;
            if ((int)puVar14 == 0) {
              *(undefined8 *)*pauVar13 = *puVar10;
              *puVar10 = uVar12;
              puVar20 = puVar32;
              (*(code *)*puVar30)(puVar32,puVar10);
              if ((int)puVar20 == 0) goto LAB_109918248;
              uVar12 = *puVar10;
              *puVar10 = *puVar32;
            }
            else {
              *(undefined8 *)*pauVar13 = *puVar32;
            }
            *puVar32 = uVar12;
          }
LAB_109918248:
          puVar14 = puVar10 + -1;
          puVar20 = puVar14;
          (*(code *)*puVar30)(puVar14,*pauVar13 + 8);
          pauVar23 = pauVar22;
          (*(code *)*puVar30)(pauVar22,puVar14);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)pauVar23 != 0) {
              uVar12 = *puVar14;
              *puVar14 = *(undefined8 *)*pauVar22;
              *(undefined8 *)*pauVar22 = uVar12;
              puVar20 = puVar14;
              (*(code *)*puVar30)(puVar14,*pauVar13 + 8);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)(*pauVar13 + 8);
                *(undefined8 *)(*pauVar13 + 8) = *puVar14;
                *puVar14 = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)(*pauVar13 + 8);
            if ((int)pauVar23 == 0) {
              *(undefined8 *)(*pauVar13 + 8) = *puVar14;
              *puVar14 = uVar12;
              pauVar23 = pauVar22;
              (*(code *)*puVar30)(pauVar22,puVar14);
              if ((int)pauVar23 == 0) goto LAB_109918334;
              uVar12 = *puVar14;
              *puVar14 = *(undefined8 *)*pauVar22;
            }
            else {
              *(undefined8 *)(*pauVar13 + 8) = *(undefined8 *)*pauVar22;
            }
            *(undefined8 *)*pauVar22 = uVar12;
          }
LAB_109918334:
          puVar20 = puVar10 + 1;
          (*(code *)*puVar30)(puVar20,pauVar13 + 1);
          puVar15 = puVar7;
          (*(code *)*puVar30)(puVar7,puVar10 + 1);
          if (((ulong)puVar20 & 1) == 0) {
            if ((int)puVar15 != 0) {
              uVar12 = puVar10[1];
              puVar10[1] = *puVar7;
              *puVar7 = uVar12;
              puVar20 = puVar10 + 1;
              (*(code *)*puVar30)(puVar20,pauVar13 + 1);
              if ((int)puVar20 != 0) {
                uVar12 = *(undefined8 *)pauVar13[1];
                *(undefined8 *)pauVar13[1] = puVar10[1];
                puVar10[1] = uVar12;
              }
            }
          }
          else {
            uVar12 = *(undefined8 *)pauVar13[1];
            if ((int)puVar15 == 0) {
              *(undefined8 *)pauVar13[1] = puVar10[1];
              puVar10[1] = uVar12;
              puVar20 = puVar7;
              (*(code *)*puVar30)(puVar7,puVar10 + 1);
              if ((int)puVar20 == 0) goto LAB_1099183e8;
              uVar12 = puVar10[1];
              puVar10[1] = *puVar7;
            }
            else {
              *(undefined8 *)pauVar13[1] = *puVar7;
            }
            *puVar7 = uVar12;
          }
LAB_1099183e8:
          puVar15 = puVar10;
          (*(code *)*puVar30)(puVar10,puVar14);
          puVar20 = puVar10 + 1;
          (*(code *)*puVar30)(puVar20,puVar10);
          if (((ulong)puVar15 & 1) == 0) {
            uVar12 = *puVar10;
            if ((int)puVar20 != 0) {
              *puVar10 = puVar10[1];
              puVar10[1] = uVar12;
              puVar20 = puVar10;
              (*(code *)*puVar30)(puVar10,puVar14);
              uVar12 = *puVar10;
              if ((int)puVar20 != 0) {
                uVar12 = puVar10[-1];
                puVar10[-1] = *puVar10;
                *puVar10 = uVar12;
              }
            }
          }
          else {
            uVar12 = *puVar14;
            if ((int)puVar20 == 0) {
              puVar10[-1] = *puVar10;
              *puVar10 = uVar12;
              puVar20 = puVar10 + 1;
              (*(code *)*puVar30)(puVar20,puVar10);
              uVar28 = *puVar10;
              uVar12 = uVar28;
              if ((int)puVar20 != 0) {
                uVar12 = puVar10[1];
                *puVar10 = uVar12;
                puVar10[1] = uVar28;
              }
            }
            else {
              puVar10[-1] = puVar10[1];
              puVar10[1] = uVar12;
              uVar12 = *puVar10;
            }
          }
          uVar28 = *(undefined8 *)*pauVar13;
          *(undefined8 *)*pauVar13 = uVar12;
          *puVar10 = uVar28;
        }
LAB_109918494:
        pppcVar33 = (code ***)((long)pppcVar33 + -1);
        if ((in_x4 & 1) != 0) {
          uStack_198 = *(undefined8 *)*pauVar13;
LAB_1099184bc:
          lVar24 = 0;
          do {
            lVar24 = lVar24 + 8;
            puVar18 = *pauVar13 + lVar24;
            (*(code *)*puVar30)(puVar18,&uStack_198);
          } while (((ulong)puVar18 & 1) != 0);
          pauVar17 = (undefined1 (*) [16])(*pauVar13 + lVar24);
          pauVar21 = pauVar19;
          if (lVar24 == 8) {
            do {
              if (pauVar21 <= pauVar17) break;
              pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 8);
              pauVar23 = pauVar21;
              (*(code *)*puVar30)(pauVar21,&uStack_198);
            } while (((ulong)pauVar23 & 1) == 0);
          }
          else {
            do {
              pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 8);
              pauVar23 = pauVar21;
              (*(code *)*puVar30)(pauVar21,&uStack_198);
            } while ((int)pauVar23 == 0);
          }
          pauVar40 = pauVar21;
          pauVar23 = pauVar17;
          if (pauVar17 < pauVar21) {
            do {
              uVar12 = *(undefined8 *)*pauVar23;
              *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar40;
              *(undefined8 *)*pauVar40 = uVar12;
              do {
                pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
                pauVar16 = pauVar23;
                (*(code *)*puVar30)(pauVar23,&uStack_198);
              } while (((ulong)pauVar16 & 1) != 0);
              do {
                pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 8);
                pauVar16 = pauVar40;
                (*(code *)*puVar30)(pauVar40,&uStack_198);
              } while ((int)pauVar16 == 0);
            } while (pauVar23 < pauVar40);
          }
          pauVar40 = (undefined1 (*) [16])(pauVar23[-1] + 8);
          if (pauVar40 != pauVar13) {
            *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar40;
          }
          *(undefined8 *)*pauVar40 = uStack_198;
          if (pauVar21 <= pauVar17) {
            pauVar17 = pauVar13;
            FUN_109918d34(pauVar13,pauVar40,puVar30);
            pauVar21 = pauVar23;
            FUN_109918d34(pauVar23,pauVar19,puVar30);
            if ((int)pauVar21 != 0) goto LAB_109918704;
            if (((ulong)pauVar17 & 1) != 0) goto LAB_1099180d4;
          }
          FUN_109918088(pauVar13,pauVar40,puVar30,pppcVar33,(uint)in_x4 & 1);
          in_x4 = 0;
          goto LAB_1099180d4;
        }
        puVar18 = pauVar13[-1] + 8;
        (*(code *)*puVar30)(puVar18,pauVar13);
        uStack_198 = *(undefined8 *)*pauVar13;
        if (((ulong)puVar18 & 1) != 0) goto LAB_1099184bc;
        puVar10 = &uStack_198;
        (*(code *)*puVar30)(puVar10,puVar32);
        pauVar23 = pauVar13;
        if (((ulong)puVar10 & 1) == 0) {
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            if (pauVar19 <= pauVar23) break;
            puVar10 = &uStack_198;
            (*(code *)*puVar30)(puVar10,pauVar23);
          } while ((int)puVar10 == 0);
        }
        else {
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar30)(puVar10,pauVar23);
          } while (((ulong)puVar10 & 1) == 0);
        }
        pauVar17 = pauVar19;
        if (pauVar23 < pauVar19) {
          do {
            pauVar17 = (undefined1 (*) [16])(pauVar17[-1] + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar30)(puVar10,pauVar17);
          } while (((ulong)puVar10 & 1) != 0);
        }
        while (pauVar23 < pauVar17) {
          uVar12 = *(undefined8 *)*pauVar23;
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar17;
          *(undefined8 *)*pauVar17 = uVar12;
          do {
            pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar30)(puVar10,pauVar23);
          } while ((int)puVar10 == 0);
          do {
            pauVar17 = (undefined1 (*) [16])(pauVar17[-1] + 8);
            puVar10 = &uStack_198;
            (*(code *)*puVar30)(puVar10,pauVar17);
          } while (((ulong)puVar10 & 1) != 0);
        }
        pauVar17 = (undefined1 (*) [16])(pauVar23[-1] + 8);
        if (pauVar17 != pauVar13) {
          *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar17;
        }
        in_x4 = 0;
        *(undefined8 *)*pauVar17 = uStack_198;
      } while( true );
    }
    puVar10 = (undefined8 *)(lVar24 * 4);
    __Znwm();
    puVar32 = puVar10 + (long)puVar29 * 4;
    puVar30 = puVar10;
    do {
      *puVar30 = 0xffffffffffffffff;
      puVar30[2] = 0;
      puVar30[3] = 0;
      puVar30[1] = 0;
      puVar30 = puVar30 + 4;
    } while (puVar30 != puVar32);
    puVar7[3] = puVar10;
    puVar7[4] = puVar32;
    puVar7[5] = puVar32;
    uVar27 = puVar38[3];
    uVar25 = puVar38[4];
    puStack_e8 = puVar10;
  }
  if (uVar25 != uVar27) {
    unaff_x28 = (ulong *)0x0;
    puVar29 = (ulong *)0x0;
    puVar39 = puStack_f8;
    puStack_f0 = puVar38;
    do {
      plVar31 = *(long **)(uVar27 + (long)unaff_x28 * 8);
      unaff_x21 = (int *)(puStack_e8 + (long)unaff_x28 * 4);
      lVar24 = *plVar31;
      iStack_dc = *(int *)(lVar24 + 0x20);
      *unaff_x21 = iStack_dc;
      unaff_x21[1] = (int)puVar29;
      uVar35 = *(long *)(lVar24 + 0x10) - *(long *)(lVar24 + 8);
      puVar7 = (undefined8 *)(uVar35 >> 2 & 0x7fffffff);
      iVar5 = (int)(uVar35 >> 2);
      if (iVar5 < 1) {
        uVar27 = 0;
        unaff_x23 = *(long *)(unaff_x21 + 2);
        lVar24 = *(long *)(unaff_x21 + 4);
        uVar35 = lVar24 - unaff_x23 >> 3;
LAB_109917e84:
        plStack_d8 = (long *)(unaff_x21 + 4);
        if (uVar27 < uVar35) {
          lVar24 = unaff_x23 + uVar27 * 8;
          *plStack_d8 = lVar24;
        }
        if (0 < iVar5) goto LAB_109917ec4;
      }
      else {
        uVar27 = 0;
        plVar8 = (long *)plVar31[2];
        puVar30 = puVar7;
        do {
          uVar26 = (uint)uVar27;
          if (*(int *)(*plVar8 + 0x28) != -1) {
            uVar26 = uVar26 + 1;
          }
          uVar27 = (ulong)uVar26;
          puVar30 = (undefined8 *)((long)puVar30 + -1);
          plVar8 = plVar8 + 1;
        } while (puVar30 != (undefined8 *)0x0);
        unaff_x20 = (long *)(unaff_x21 + 2);
        unaff_x23 = *unaff_x20;
        plStack_d8 = (long *)(unaff_x21 + 4);
        lVar24 = *plStack_d8;
        puVar37 = (ulong *)(lVar24 - unaff_x23);
        uVar35 = (long)puVar37 >> 3;
        puVar38 = puStack_f0;
        if (uVar27 <= uVar35) goto LAB_109917e84;
        param_1 = (undefined8 *)(uVar27 - uVar35);
        if ((undefined8 *)(*(long *)(unaff_x21 + 6) - lVar24 >> 3) < param_1) {
          uVar25 = *(long *)(unaff_x21 + 6) - unaff_x23;
          uVar35 = (long)uVar25 >> 2;
          if (uVar35 <= uVar27) {
            uVar35 = uVar27;
          }
          if (0x7ffffffffffffff7 < uVar25) {
            uVar35 = 0x1fffffffffffffff;
          }
          if (uVar35 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109918034;
          }
          lVar11 = uVar35 << 3;
          __Znwm();
          lStack_108 = lVar11 + (long)puVar37;
          lStack_100 = lVar11 + uVar35 * 8;
          _memset(lStack_108,0xff,(long)param_1 * 8);
          lVar24 = lStack_108 + (long)param_1 * 8;
          _memcpy(lVar11,unaff_x23,puVar37);
          *(long *)(unaff_x21 + 2) = lVar11;
          *(long *)(unaff_x21 + 4) = lVar24;
          *(long *)(unaff_x21 + 6) = lStack_100;
          puVar38 = puStack_f0;
          puVar39 = puStack_f8;
          if (unaff_x23 != 0) {
            __ZdlPv(unaff_x23);
            puVar38 = puStack_f0;
            puVar39 = puStack_f8;
          }
        }
        else {
          _memset(lVar24,0xff,(long)param_1 * 8);
          *plStack_d8 = lVar24 + (long)param_1 * 8;
          puVar38 = puStack_f0;
          puVar39 = puStack_f8;
        }
LAB_109917ec4:
        puVar30 = (undefined8 *)0x0;
        iVar5 = 0;
        do {
          lVar24 = *(long *)(plVar31[2] + (long)puVar30 * 8);
          if ((*(byte *)(lVar24 + 0xc) & 1) == 0) {
            plVar8 = *(long **)(lVar24 + 0x10);
            if (plVar8 == (long *)0x0) {
              iVar6 = *(int *)(lVar24 + 8);
            }
            else {
              (**(code **)(*plVar8 + 0x18))();
              iVar6 = (int)plVar8;
            }
            if (iVar6 != 0) {
              puVar2 = (undefined4 *)(*(long *)(unaff_x21 + 2) + (long)iVar5 * 8);
              *puVar2 = *(undefined4 *)(lVar24 + 0x28);
              puVar2[1] = *(undefined4 *)
                           (*(long *)(puVar39[1] + (long)unaff_x28 * 8) + (long)iVar5 * 4);
              iVar5 = iVar5 + 1;
            }
          }
          puVar30 = (undefined8 *)((long)puVar30 + 1);
        } while (puVar7 != puVar30);
        unaff_x23 = *(long *)(unaff_x21 + 2);
        lVar24 = *plStack_d8;
      }
      puVar29 = (ulong *)(ulong)(uint)(iStack_dc + (int)puVar29);
      pcStack_d0 = FUN_10991e654;
      lVar11 = 0;
      if (lVar24 != unaff_x23) {
        lVar11 = LZCOUNT(lVar24 - unaff_x23 >> 3) * -2 + 0x7e;
      }
      in_x4 = 1;
      FUN_109918088(unaff_x23,lVar24,&pcStack_d0,lVar11);
      unaff_x28 = (ulong *)((long)unaff_x28 + 1);
      uVar27 = puVar38[3];
    } while (unaff_x28 < (ulong *)((long)(puVar38[4] - uVar27) >> 3));
  }
  uVar12 = 0x28;
  __Znwm();
  FUN_10991c340();
  *puStack_118 = uVar12;
  return;
LAB_10991880c:
  pauVar17 = pauVar23;
  pauVar23 = pauVar17;
  (*(code *)*puVar30)(pauVar17,pauVar22);
  if ((int)pauVar23 != 0) {
    uStack_198 = *(undefined8 *)*pauVar17;
    lVar11 = lVar24;
    do {
      lVar34 = lVar11;
      *(undefined8 *)((long)(*pauVar13 + lVar34) + 8) = *(undefined8 *)(*pauVar13 + lVar34);
      pauVar23 = pauVar13;
      if (lVar34 == 0) goto LAB_109918868;
      puVar7 = &uStack_198;
      (*(code *)*puVar30)(puVar7,pauVar13[-1] + lVar34 + 8);
      lVar11 = lVar34 + -8;
    } while (((ulong)puVar7 & 1) != 0);
    pauVar23 = (undefined1 (*) [16])(*pauVar13 + lVar34);
LAB_109918868:
    *(undefined8 *)*pauVar23 = uStack_198;
  }
  lVar24 = lVar24 + 8;
  pauVar23 = (undefined1 (*) [16])(*pauVar17 + 8);
  pauVar22 = pauVar17;
  if ((undefined1 (*) [16])(*pauVar17 + 8) == pauVar19) {
    return;
  }
  goto LAB_10991880c;
LAB_109918894:
  do {
    if ((long)uVar27 <= (long)uVar25) {
      uVar4 = (uVar27 & 0x1fffffffffffffff) << 1 | 1;
      puVar7 = (undefined8 *)(*pauVar13 + uVar4 * 8);
      uVar3 = (uVar27 & 0x1fffffffffffffff) * 2 + 2;
      puVar32 = puVar7;
      uVar36 = uVar4;
      if ((long)uVar3 < (long)uVar35) {
        puVar10 = puVar7;
        (*(code *)*puVar30)(puVar7,puVar7 + 1);
        puVar32 = puVar7 + 1;
        uVar36 = uVar3;
        if ((int)puVar10 == 0) {
          puVar32 = puVar7;
          uVar36 = uVar4;
        }
      }
      puVar7 = (undefined8 *)(*pauVar13 + uVar27 * 8);
      puVar10 = puVar32;
      (*(code *)*puVar30)(puVar32,puVar7);
      if (((ulong)puVar10 & 1) == 0) {
        uStack_198 = *puVar7;
        do {
          puVar10 = puVar32;
          *puVar7 = *puVar10;
          if ((long)uVar25 < (long)uVar36) break;
          uVar4 = (uVar36 & 0x3fffffffffffffff) << 1 | 1;
          puVar7 = (undefined8 *)(*pauVar13 + uVar4 * 8);
          uVar3 = uVar36 * 2 + 2;
          puVar32 = puVar7;
          uVar36 = uVar4;
          if ((long)uVar3 < (long)uVar35) {
            puVar20 = puVar7;
            (*(code *)*puVar30)(puVar7,puVar7 + 1);
            puVar32 = puVar7 + 1;
            uVar36 = uVar3;
            if ((int)puVar20 == 0) {
              puVar32 = puVar7;
              uVar36 = uVar4;
            }
          }
          puVar20 = puVar32;
          (*(code *)*puVar30)(puVar32,&uStack_198);
          puVar7 = puVar10;
        } while ((int)puVar20 == 0);
        *puVar10 = uStack_198;
      }
    }
    bVar1 = 0 < (long)uVar27;
    uVar27 = uVar27 - 1;
  } while (bVar1);
  do {
    uVar27 = 0;
    uVar12 = *(undefined8 *)*pauVar13;
    pauVar23 = pauVar13;
    do {
      pauVar22 = (undefined1 (*) [16])(*pauVar23 + uVar27 * 8 + 8);
      uVar3 = uVar27 << 1 | 1;
      uVar25 = uVar27 * 2 + 2;
      pauVar17 = pauVar22;
      uVar4 = uVar3;
      if ((long)uVar25 < (long)uVar35) {
        pauVar21 = pauVar22;
        (*(code *)*puVar30)(pauVar22,(undefined1 (*) [16])(pauVar23[1] + uVar27 * 8));
        pauVar17 = (undefined1 (*) [16])(pauVar23[1] + uVar27 * 8);
        uVar4 = uVar25;
        if ((int)pauVar21 == 0) {
          pauVar17 = pauVar22;
          uVar4 = uVar3;
        }
      }
      uVar27 = uVar4;
      *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar17;
      pauVar23 = pauVar17;
    } while ((long)uVar27 <= (long)(uVar35 - 2 >> 1));
    pauVar19 = (undefined1 (*) [16])(pauVar19[-1] + 8);
    if (pauVar17 == pauVar19) {
      *(undefined8 *)*pauVar17 = uVar12;
    }
    else {
      *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar19;
      *(undefined8 *)*pauVar19 = uVar12;
      lVar24 = (long)((long)pauVar17 + (8 - (long)pauVar13)) >> 3;
      if (1 < lVar24) {
        uVar27 = lVar24 - 2U >> 1;
        pauVar23 = (undefined1 (*) [16])(*pauVar13 + uVar27 * 8);
        pauVar22 = pauVar23;
        (*(code *)*puVar30)(pauVar23,pauVar17);
        if ((int)pauVar22 != 0) {
          uStack_198 = *(undefined8 *)*pauVar17;
          do {
            pauVar22 = pauVar23;
            *(undefined8 *)*pauVar17 = *(undefined8 *)*pauVar22;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1 >> 1;
            pauVar23 = (undefined1 (*) [16])(*pauVar13 + uVar27 * 8);
            pauVar21 = pauVar23;
            (*(code *)*puVar30)(pauVar23,&uStack_198);
            pauVar17 = pauVar22;
          } while (((ulong)pauVar21 & 1) != 0);
          *(undefined8 *)*pauVar22 = uStack_198;
        }
      }
    }
    bVar1 = (long)uVar35 < 3;
    uVar35 = uVar35 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109918704:
  pauVar19 = pauVar40;
  if (((ulong)pauVar17 & 1) != 0) {
    return;
  }
  goto LAB_1099180bc;
}



/* Entry: 10994e5d0; end: 10994eddf;  */

byte FUN_10994e5d0(ulong *param_1,ulong *param_2,undefined8 param_3,double *param_4,ulong param_5,
                  double *param_6,long *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong **ppuVar10;
  ulong *puVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  ulong ***pppuVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong ***pppuVar23;
  ulong **ppuVar24;
  byte bVar25;
  ulong **ppuVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  double dVar30;
  ulong *puVar31;
  ulong **ppuStack_120;
  ulong uStack_118;
  undefined7 uStack_110;
  undefined4 uStack_109;
  undefined1 uStack_105;
  char cStack_101;
  ulong *puStack_100;
  double dStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  char cStack_d9;
  ulong *puStack_d8;
  long *plStack_d0;
  double *pdStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b1;
  ulong *puStack_b0;
  int iStack_a8;
  ulong **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d0 = param_7;
  pdStack_c8 = param_6;
  uStack_c0 = param_5;
  _gettimeofday(&ppuStack_120,0);
  dStack_f8 = (double)(long)ppuStack_120 + (double)(int)uStack_118 * 1e-06;
  puStack_f0 = (ulong *)0x6f7461756c617645;
  uStack_e8 = 0x6c61746f543a3a72;
  uStack_e0 = 0;
  cStack_d9 = '\x10';
  puStack_d8 = param_1 + 0x12;
  _gettimeofday(&puStack_b0,0);
  ppuStack_120 = (ulong **)((double)(long)puStack_b0 + (double)iStack_a8 * 1e-06);
  puVar1 = &UNK_10f58c29c;
  if (param_6 != (double *)0x0 || param_7 != (long *)0x0) {
    puVar1 = &UNK_10f58c2b0;
  }
  uStack_118 = 0x6f7461756c617645;
  uStack_110 = (undefined7)*(undefined8 *)(puVar1 + 8);
  uStack_109 = *(undefined4 *)(puVar1 + 0xf);
  uStack_105 = 0;
  cStack_101 = '\x13';
  uVar7 = param_1[5];
  puStack_100 = param_1 + 0x12;
  FUN_109978124(uVar7,param_3);
  if ((uVar7 & 1) == 0) {
    bVar25 = 0;
  }
  else {
    plVar8 = (long *)param_1[4];
    if (plVar8 != (long *)0x0) {
      puVar20 = *(undefined8 **)param_1[5];
      puVar2 = (undefined8 *)((long *)param_1[5])[1];
      if (puVar20 != puVar2) {
        do {
          plVar8 = (long *)*puVar20;
          if ((plVar8[3] != *plVar8) && ((int)plVar8[1] != 0)) {
            _memmove(*plVar8,plVar8[3],(long)(int)plVar8[1] << 3);
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar2);
        plVar8 = (long *)param_1[4];
      }
      (**(code **)(*plVar8 + 0x10))
                (plVar8,param_6 != (double *)0x0 || param_7 != (long *)0x0,
                 *(undefined1 *)((long)param_2 + 1));
      param_5 = uStack_c0;
    }
    if (param_5 != 0) {
      puVar20 = *(undefined8 **)(param_1[5] + 0x18);
      puVar2 = *(undefined8 **)(param_1[5] + 0x20);
      if (puVar20 == puVar2) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          puVar18 = puVar20 + 1;
          uVar7 = (long)*(int *)(*(long *)*puVar20 + 0x20) + (long)(int)uVar7;
          puVar20 = puVar18;
        } while (puVar18 != puVar2);
      }
      uVar19 = param_5 >> 3 & 1;
      if ((long)uVar7 <= (long)uVar19) {
        uVar19 = uVar7;
      }
      if ((param_5 & 7) != 0) {
        uVar19 = uVar7;
      }
      lVar27 = uVar7 - uVar19;
      if (0 < (long)uVar19) {
        _bzero(param_5,uVar19 << 3);
      }
      lVar22 = (lVar27 - (lVar27 >> 0x3f) & 0xfffffffffffffffeU) + uVar19;
      if (1 < lVar27) {
        lVar29 = lVar22;
        if (lVar22 <= (long)(uVar19 + 2)) {
          lVar29 = uVar19 + 2;
        }
        _bzero(param_5 + uVar19 * 8,(lVar29 + ~uVar19 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      if (lVar22 < (long)uVar7) {
        _bzero(param_5 + (lVar27 / 2) * 0x10 + uVar19 * 8,(lVar27 % 2) * 8);
      }
    }
    if (plStack_d0 != (long *)0x0) {
      (**(code **)(*plStack_d0 + 0x40))();
    }
    uVar7 = (ulong)(uint)param_1[1];
    if (0 < (int)(uint)param_1[1]) {
      lVar27 = 0;
      do {
        puVar20 = (undefined8 *)(param_1[0xe] + lVar27 * 0x28);
        *puVar20 = 0;
        if (pdStack_c8 != (double *)0x0) {
          uVar7 = puVar20[2];
          plVar8 = *(long **)param_1[5];
          plVar3 = (long *)((long *)param_1[5])[1];
          if (plVar8 == plVar3) {
            uVar19 = 0;
          }
          else {
            iVar28 = 0;
            do {
              plVar9 = *(long **)(*plVar8 + 0x10);
              if (plVar9 == (long *)0x0) {
                iVar6 = *(int *)(*plVar8 + 8);
              }
              else {
                (**(code **)(*plVar9 + 0x18))();
                iVar6 = (int)plVar9;
              }
              iVar28 = iVar6 + iVar28;
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar3);
            uVar19 = (ulong)iVar28;
          }
          uVar21 = uVar7 >> 3 & 1;
          if ((long)uVar19 <= (long)uVar21) {
            uVar21 = uVar19;
          }
          if ((uVar7 & 7) != 0) {
            uVar21 = uVar19;
          }
          if (0 < (long)uVar21) {
            _bzero(uVar7,uVar21 << 3);
          }
          lVar29 = uVar19 - uVar21;
          lVar22 = (lVar29 - (lVar29 >> 0x3f) & 0xfffffffffffffffeU) + uVar21;
          if (1 < lVar29) {
            lVar15 = lVar22;
            if (lVar22 <= (long)(uVar21 + 2)) {
              lVar15 = uVar21 + 2;
            }
            _bzero(uVar7 + uVar21 * 8,(lVar15 + ~uVar21 & 0x1ffffffffffffffe) * 8 + 0x10);
          }
          if (lVar22 < (long)uVar19) {
            _bzero(uVar7 + (lVar29 / 2) * 0x10 + uVar21 * 8,(lVar29 % 2) * 8);
          }
        }
        lVar27 = lVar27 + 1;
        uVar7 = (ulong)(int)param_1[1];
      } while (lVar27 < (long)uVar7);
    }
    lVar27 = *(long *)(param_1[5] + 0x18);
    lVar22 = *(long *)(param_1[5] + 0x20);
    uStack_b1 = 0;
    uVar19 = param_1[3];
    ppuVar10 = (ulong **)0x38;
    __Znwm();
    *ppuVar10 = (ulong *)&PTR_FUN_110b1e1e0;
    ppuVar10[1] = (ulong *)&uStack_b1;
    ppuVar10[2] = param_1;
    ppuVar10[3] = &uStack_c0;
    ppuVar10[4] = (ulong *)&pdStack_c8;
    ppuVar10[5] = (ulong *)&plStack_d0;
    ppuVar10[6] = param_2;
    ppuStack_98 = ppuVar10;
    FUN_10991514c(uVar19,0,(ulong)(lVar22 - lVar27) >> 3,uVar7,&puStack_b0);
    if (ppuStack_98 == &puStack_b0) {
      lVar27 = 0x20;
LAB_10994e9f0:
      (**(code **)((long)*ppuStack_98 + lVar27))();
    }
    else if (ppuStack_98 != (ulong **)0x0) {
      lVar27 = 0x28;
      goto LAB_10994e9f0;
    }
    if ((uStack_b1 & 1) == 0) {
      plVar8 = *(long **)param_1[5];
      plVar3 = (long *)((long *)param_1[5])[1];
      if (plVar8 == plVar3) {
        uVar7 = 0;
      }
      else {
        iVar28 = 0;
        do {
          plVar9 = *(long **)(*plVar8 + 0x10);
          if (plVar9 == (long *)0x0) {
            iVar6 = *(int *)(*plVar8 + 8);
          }
          else {
            (**(code **)(*plVar9 + 0x18))();
            iVar6 = (int)plVar9;
          }
          iVar28 = iVar6 + iVar28;
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar3);
        uVar7 = (ulong)iVar28;
      }
      pdVar12 = pdStack_c8;
      *param_4 = 0.0;
      if (pdStack_c8 != (double *)0x0) {
        uVar19 = (ulong)pdStack_c8 >> 3 & 1;
        if ((long)uVar7 <= (long)uVar19) {
          uVar19 = uVar7;
        }
        if (((ulong)pdStack_c8 & 7) != 0) {
          uVar19 = uVar7;
        }
        lVar27 = uVar7 - uVar19;
        if (0 < (long)uVar19) {
          _bzero(pdStack_c8,uVar19 << 3);
        }
        lVar22 = (lVar27 - (lVar27 >> 0x3f) & 0xfffffffffffffffeU) + uVar19;
        if (1 < lVar27) {
          lVar29 = lVar22;
          if (lVar22 <= (long)(uVar19 + 2)) {
            lVar29 = uVar19 + 2;
          }
          _bzero(pdVar12 + uVar19,(lVar29 + ~uVar19 & 0x1ffffffffffffffe) * 8 + 0x10);
        }
        if (lVar22 < (long)uVar7) {
          _bzero(pdVar12 + (lVar27 / 2) * 2 + uVar19,(lVar27 % 2) * 8);
        }
      }
      if (0 < (int)param_1[1]) {
        lVar27 = 0;
        uVar19 = (ulong)pdStack_c8 >> 3 & 1;
        if ((long)uVar7 <= (long)uVar19) {
          uVar19 = uVar7;
        }
        if (((ulong)pdStack_c8 & 7) != 0) {
          uVar19 = uVar7;
        }
        lVar29 = uVar7 - uVar19;
        uVar21 = lVar29 - (lVar29 >> 0x3f);
        lVar22 = (uVar21 & 0xfffffffffffffffe) + uVar19;
        uVar21 = uVar21 & 0x1ffffffffffffffe;
        do {
          pdVar12 = (double *)(param_1[0xe] + lVar27 * 0x28);
          *param_4 = *pdVar12 + *param_4;
          if (pdStack_c8 != (double *)0x0) {
            pdVar13 = (double *)pdVar12[2];
            pdVar12 = pdStack_c8;
            pdVar14 = pdVar13;
            uVar17 = uVar19;
            if (0 < (long)uVar19) {
              do {
                *pdVar12 = *pdVar14 + *pdVar12;
                uVar17 = uVar17 - 1;
                pdVar12 = pdVar12 + 1;
                pdVar14 = pdVar14 + 1;
              } while (uVar17 != 0);
            }
            if (1 < lVar29) {
              pdVar12 = pdVar13 + uVar19;
              pdVar14 = pdStack_c8 + uVar19;
              uVar17 = uVar19;
              do {
                dVar30 = *pdVar12;
                pdVar14[1] = pdVar12[1] + pdVar14[1];
                *pdVar14 = dVar30 + *pdVar14;
                uVar17 = uVar17 + 2;
                pdVar12 = pdVar12 + 2;
                pdVar14 = pdVar14 + 2;
              } while ((long)uVar17 < lVar22);
            }
            if (lVar22 < (long)uVar7) {
              pdVar12 = pdVar13 + uVar19 + uVar21;
              pdVar14 = pdStack_c8 + uVar19 + uVar21;
              lVar15 = lVar29 % 2;
              do {
                *pdVar14 = *pdVar12 + *pdVar14;
                lVar15 = lVar15 + -1;
                pdVar12 = pdVar12 + 1;
                pdVar14 = pdVar14 + 1;
              } while (lVar15 != 0);
            }
          }
          lVar27 = lVar27 + 1;
        } while (lVar27 < (int)param_1[1]);
      }
    }
    bVar25 = uStack_b1 ^ 1;
  }
  puVar11 = puStack_100;
  _gettimeofday(&puStack_b0,0);
  puVar5 = puStack_b0;
  ppuVar10 = ppuStack_120;
  __ZNSt3__15mutex4lockEv(puVar11);
  puStack_b0 = &uStack_118;
  puVar31 = puVar11 + 8;
  FUN_109921a64(puVar31,puStack_b0,&UNK_10dd5b8f9,&puStack_b0,&uStack_b1);
  puVar31[7] = (ulong)((((double)(long)puVar5 + (double)iStack_a8 * 1e-06) - (double)ppuVar10) +
                      (double)puVar31[7]);
  *(int *)(puVar31 + 8) = (int)puVar31[8] + 1;
  __ZNSt3__15mutex6unlockEv(puVar11);
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  puVar11 = puStack_d8;
  _gettimeofday(&ppuStack_120,0);
  dVar30 = dStack_f8;
  ppuVar24 = ppuStack_120;
  iVar28 = (int)uStack_118;
  ppuVar26 = (ulong **)(uStack_118 & 0xffffffff);
  __ZNSt3__15mutex4lockEv(puVar11);
  ppuVar10 = &puStack_f0;
  pdVar12 = (double *)&UNK_10dd5b8f9;
  puVar31 = puVar11 + 8;
  pppuVar16 = &ppuStack_120;
  ppuStack_120 = ppuVar10;
  FUN_109921a64();
  puVar31[7] = (ulong)((((double)(long)ppuVar24 + (double)iVar28 * 1e-06) - dVar30) +
                      (double)puVar31[7]);
  *(int *)(puVar31 + 8) = (int)puVar31[8] + 1;
  __ZNSt3__15mutex6unlockEv();
  if (cStack_d9 < '\0') {
    puVar11 = puStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return bVar25 & 1;
  }
  ___stack_chk_fail();
  if (ppuStack_98 == ppuVar26) {
    lVar27 = 0x20;
  }
  else {
    if (ppuStack_98 == (ulong **)0x0) goto LAB_10994edc8;
    lVar27 = 0x28;
  }
  (**(code **)((long)*ppuStack_98 + lVar27))();
LAB_10994edc8:
  FUN_109921980(&ppuStack_120);
  FUN_109921980(&dStack_f8);
  __Unwind_Resume();
  plVar8 = *(long **)puVar11[5];
  plVar3 = (long *)((long *)puVar11[5])[1];
  do {
    if (plVar8 == plVar3) {
      return 1;
    }
    lVar27 = *plVar8;
    plVar9 = *(long **)(lVar27 + 0x10);
    if (plVar9 == (long *)0x0) {
      uVar19 = (ulong)*(int *)(lVar27 + 8);
      uVar7 = (ulong)pppuVar16 >> 3 & 1;
      if ((long)uVar19 <= (long)uVar7) {
        uVar7 = uVar19;
      }
      if (((ulong)pppuVar16 & 7) != 0) {
        uVar7 = uVar19;
      }
      pppuVar23 = pppuVar16;
      ppuVar24 = ppuVar10;
      pdVar14 = pdVar12;
      uVar21 = uVar7;
      if (0 < (long)uVar7) {
        do {
          *pppuVar23 = (ulong **)((double)*ppuVar24 + *pdVar14);
          uVar21 = uVar21 - 1;
          pppuVar23 = pppuVar23 + 1;
          ppuVar24 = ppuVar24 + 1;
          pdVar14 = pdVar14 + 1;
        } while (uVar21 != 0);
      }
      lVar29 = uVar19 - uVar7;
      lVar22 = (lVar29 - (lVar29 >> 0x3f) & 0xfffffffffffffffeU) + uVar7;
      if (1 < lVar29) {
        pdVar14 = pdVar12 + uVar7;
        ppuVar24 = ppuVar10 + uVar7;
        uVar21 = uVar7;
        pppuVar23 = pppuVar16 + uVar7;
        do {
          puVar31 = *ppuVar24;
          dVar30 = *pdVar14;
          pppuVar23[1] = (ulong **)((double)ppuVar24[1] + pdVar14[1]);
          *pppuVar23 = (ulong **)((double)puVar31 + dVar30);
          uVar21 = uVar21 + 2;
          pdVar14 = pdVar14 + 2;
          ppuVar24 = ppuVar24 + 2;
          pppuVar23 = pppuVar23 + 2;
        } while ((long)uVar21 < lVar22);
      }
      if (lVar22 < (long)uVar19) {
        lVar22 = lVar29 / 2;
        lVar29 = lVar29 % 2;
        pdVar14 = pdVar12 + uVar7 + lVar22 * 2;
        ppuVar24 = ppuVar10 + uVar7 + lVar22 * 2;
        pppuVar23 = pppuVar16 + uVar7 + lVar22 * 2;
        do {
          *pppuVar23 = (ulong **)((double)*ppuVar24 + *pdVar14);
          lVar29 = lVar29 + -1;
          pdVar14 = pdVar14 + 1;
          ppuVar24 = ppuVar24 + 1;
          pppuVar23 = pppuVar23 + 1;
        } while (lVar29 != 0);
      }
    }
    else {
      (**(code **)(*plVar9 + 0x20))(plVar9,ppuVar10,pdVar12,pppuVar16);
      if (((ulong)plVar9 & 1) == 0) {
        return 0;
      }
    }
    puVar20 = *(undefined8 **)(lVar27 + 0x48);
    uVar4 = *(uint *)(lVar27 + 8);
    uVar7 = (ulong)uVar4;
    if (puVar20 == (undefined8 *)0x0) {
LAB_109978380:
      puVar20 = *(undefined8 **)(lVar27 + 0x40);
      pppuVar23 = pppuVar16;
      if (puVar20 != (undefined8 *)0x0 && 0 < (int)uVar4) {
        do {
          ppuVar24 = (ulong **)*puVar20;
          if ((double)*pppuVar23 <= (double)*puVar20) {
            ppuVar24 = *pppuVar23;
          }
          *pppuVar23 = ppuVar24;
          uVar7 = uVar7 - 1;
          puVar20 = puVar20 + 1;
          pppuVar23 = pppuVar23 + 1;
        } while (uVar7 != 0);
      }
    }
    else {
      pppuVar23 = pppuVar16;
      uVar19 = uVar7;
      if (0 < (int)uVar4) {
        do {
          ppuVar24 = (ulong **)*puVar20;
          if ((double)*puVar20 <= (double)*pppuVar23) {
            ppuVar24 = *pppuVar23;
          }
          *pppuVar23 = ppuVar24;
          uVar19 = uVar19 - 1;
          puVar20 = puVar20 + 1;
          pppuVar23 = pppuVar23 + 1;
        } while (uVar19 != 0);
        goto LAB_109978380;
      }
    }
    plVar9 = *(long **)(lVar27 + 0x10);
    if (plVar9 == (long *)0x0) {
      lVar22 = (long)(int)uVar4;
      lVar27 = lVar22;
    }
    else {
      (**(code **)(*plVar9 + 0x18))();
      lVar22 = (long)*(int *)(lVar27 + 8);
      lVar27 = (long)(int)plVar9;
    }
    ppuVar10 = ppuVar10 + (int)uVar4;
    pdVar12 = pdVar12 + lVar27;
    plVar8 = plVar8 + 1;
    pppuVar16 = pppuVar16 + lVar22;
  } while( true );
}



/* Entry: 10994ede0; end: 10994ee1b;  */

undefined8 FUN_10994ede0(long param_1,double *param_2,double *param_3,double *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  double *pdVar5;
  long lVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  plVar2 = (long *)(*(long **)(param_1 + 0x28))[1];
  do {
    if (plVar1 == plVar2) {
      return 1;
    }
    lVar12 = *plVar1;
    plVar4 = *(long **)(lVar12 + 0x10);
    if (plVar4 == (long *)0x0) {
      uVar7 = (ulong)*(int *)(lVar12 + 8);
      uVar13 = (ulong)param_4 >> 3 & 1;
      if ((long)uVar7 <= (long)uVar13) {
        uVar13 = uVar7;
      }
      if (((ulong)param_4 & 7) != 0) {
        uVar13 = uVar7;
      }
      pdVar5 = param_4;
      pdVar8 = param_2;
      pdVar10 = param_3;
      uVar11 = uVar13;
      if (0 < (long)uVar13) {
        do {
          *pdVar5 = *pdVar8 + *pdVar10;
          uVar11 = uVar11 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        } while (uVar11 != 0);
      }
      lVar9 = uVar7 - uVar13;
      lVar6 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
      if (1 < lVar9) {
        pdVar5 = param_3 + uVar13;
        pdVar8 = param_2 + uVar13;
        uVar11 = uVar13;
        pdVar10 = param_4 + uVar13;
        do {
          dVar14 = *pdVar8;
          dVar15 = *pdVar5;
          pdVar10[1] = pdVar8[1] + pdVar5[1];
          *pdVar10 = dVar14 + dVar15;
          uVar11 = uVar11 + 2;
          pdVar5 = pdVar5 + 2;
          pdVar8 = pdVar8 + 2;
          pdVar10 = pdVar10 + 2;
        } while ((long)uVar11 < lVar6);
      }
      if (lVar6 < (long)uVar7) {
        lVar6 = lVar9 / 2;
        lVar9 = lVar9 % 2;
        pdVar5 = param_3 + uVar13 + lVar6 * 2;
        pdVar8 = param_2 + uVar13 + lVar6 * 2;
        pdVar10 = param_4 + uVar13 + lVar6 * 2;
        do {
          *pdVar10 = *pdVar8 + *pdVar5;
          lVar9 = lVar9 + -1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3,param_4);
      if (((ulong)plVar4 & 1) == 0) {
        return 0;
      }
    }
    pdVar5 = *(double **)(lVar12 + 0x48);
    uVar3 = *(uint *)(lVar12 + 8);
    uVar13 = (ulong)uVar3;
    if (pdVar5 == (double *)0x0) {
LAB_109978380:
      pdVar5 = *(double **)(lVar12 + 0x40);
      pdVar8 = param_4;
      if (pdVar5 != (double *)0x0 && 0 < (int)uVar3) {
        do {
          dVar14 = *pdVar5;
          if (*pdVar8 <= *pdVar5) {
            dVar14 = *pdVar8;
          }
          *pdVar8 = dVar14;
          uVar13 = uVar13 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      pdVar8 = param_4;
      uVar7 = uVar13;
      if (0 < (int)uVar3) {
        do {
          dVar14 = *pdVar5;
          if (*pdVar5 <= *pdVar8) {
            dVar14 = *pdVar8;
          }
          *pdVar8 = dVar14;
          uVar7 = uVar7 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
        } while (uVar7 != 0);
        goto LAB_109978380;
      }
    }
    plVar4 = *(long **)(lVar12 + 0x10);
    if (plVar4 == (long *)0x0) {
      lVar6 = (long)(int)uVar3;
      lVar12 = lVar6;
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
      lVar6 = (long)*(int *)(lVar12 + 8);
      lVar12 = (long)(int)plVar4;
    }
    param_2 = param_2 + (int)uVar3;
    param_3 = param_3 + lVar12;
    plVar1 = plVar1 + 1;
    param_4 = param_4 + lVar6;
  } while( true );
}



/* Entry: 10994ee1c; end: 10994ee8b;  */

int FUN_10994ee1c(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)**(long **)(param_1 + 0x28);
  plVar1 = (long *)(*(long **)(param_1 + 0x28))[1];
  if (plVar5 == plVar1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      plVar3 = *(long **)(*plVar5 + 0x10);
      if (plVar3 == (long *)0x0) {
        iVar2 = *(int *)(*plVar5 + 8);
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        iVar2 = (int)plVar3;
      }
      iVar4 = iVar2 + iVar4;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return iVar4;
}



/* Entry: 10994ee8c; end: 10994eec3;  */

int FUN_10994ee8c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x18);
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x20);
  if (puVar3 != puVar1) {
    iVar2 = 0;
    do {
      puVar4 = puVar3 + 1;
      iVar2 = *(int *)(*(long *)*puVar3 + 0x20) + iVar2;
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
    return iVar2;
  }
  return 0;
}



/* Entry: 10994eec4; end: 10994ef6b;  */

void FUN_10994eec4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = puVar3;
  plVar4 = *(long **)(param_2 + 0xd0);
  while (plVar4 != (long *)(param_2 + 0xd8)) {
    FUN_109921df4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10994ef6c; end: 10994f093;  */

long FUN_10994ef6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  FUN_1099215c8(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
  __ZNSt3__15mutexD1Ev(param_1 + 0x90);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x28;
      plVar4 = (long *)(lVar1 + lVar2 * 0x28 + -0x10);
      do {
        lVar2 = plVar4[1];
        plVar4[1] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = *plVar4;
        *plVar4 = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = plVar4[-1];
        plVar4[-1] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = plVar4[-2];
        plVar4[-2] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        plVar4 = plVar4 + -5;
        lVar3 = lVar3 + 0x28;
      } while (lVar3 != 0);
    }
    __ZdaPv(lVar1 + -0x10);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + -8);
    if (*plVar4 != 0) {
      lVar2 = *plVar4 << 4;
      do {
        lVar3 = *(long *)((long)plVar4 + lVar2);
        *(undefined8 *)((long)plVar4 + lVar2) = 0;
        if (lVar3 != 0) {
          __ZdaPv();
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    __ZdaPv(lVar1 + -0x10);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10994f094; end: 10994f09b;  */

void FUN_10994f094(void)

{
  return;
}



/* Entry: 10994f09c; end: 10994f0e3;  */

void FUN_10994f09c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110b1e1e0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  return;
}



/* Entry: 10994f0e4; end: 10994f113;  */

void FUN_10994f0e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110b1e1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10994f114; end: 10994f4a7;  */

void FUN_10994f114(long param_1,int *param_2,int *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  double *pdVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double *pdVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  double *pdVar18;
  long *plVar19;
  double *pdVar20;
  double dVar21;
  ulong uVar22;
  double *pdVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dStack_68;
  
  lVar11 = (long)*param_3;
  lVar13 = *(long *)(param_1 + 0x10);
  if ((**(byte **)(param_1 + 8) & 1) == 0) {
    pdVar23 = (double *)(*(long *)(lVar13 + 0x70) + (long)*param_2 * 0x28);
    plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x28) + 0x18) + lVar11 * 8);
    if (**(long **)(param_1 + 0x18) == 0) {
      if (**(long **)(param_1 + 0x20) == 0) {
        pdVar20 = (double *)0x0;
      }
      else {
        pdVar20 = (double *)pdVar23[3];
      }
    }
    else {
      pdVar20 = (double *)
                (**(long **)(param_1 + 0x18) +
                (long)*(int *)(*(long *)(lVar13 + 0x78) + lVar11 * 4) * 8);
    }
    if ((**(long **)(param_1 + 0x28) == 0) && (**(long **)(param_1 + 0x20) == 0)) {
      dVar21 = 0.0;
    }
    else {
      FUN_109916bbc(*(long *)(lVar13 + 0x68) + (long)*param_2 * 0x10,plVar19,lVar11,
                    **(long **)(param_1 + 0x28),pdVar23[4]);
      dVar21 = pdVar23[4];
    }
    plVar9 = plVar19;
    FUN_1099828ac(plVar19,**(undefined1 **)(param_1 + 0x30),&dStack_68,pdVar20,dVar21,pdVar23[1]);
    if (((ulong)plVar9 & 1) == 0) {
      **(undefined1 **)(param_1 + 8) = 1;
    }
    else {
      *pdVar23 = dStack_68 + *pdVar23;
      if (**(long **)(param_1 + 0x20) != 0) {
        lVar13 = *plVar19;
        uVar12 = *(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8);
        if (0 < (int)(uVar12 >> 2)) {
          uVar22 = 0;
          uVar5 = *(uint *)(lVar13 + 0x20);
          uVar4 = uVar5 & 0xfffffffc;
          do {
            lVar13 = *(long *)(plVar19[2] + uVar22 * 8);
            if ((*(byte *)(lVar13 + 0xc) & 1) == 0) {
              plVar9 = *(long **)(lVar13 + 0x10);
              if (plVar9 == (long *)0x0) {
                iVar7 = *(int *)(lVar13 + 8);
              }
              else {
                (**(code **)(*plVar9 + 0x18))();
                iVar7 = (int)plVar9;
              }
              if (iVar7 != 0) {
                pdVar24 = *(double **)((long)dVar21 + uVar22 * 8);
                plVar9 = *(long **)(lVar13 + 0x10);
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)(ulong)*(uint *)(lVar13 + 8);
                }
                else {
                  (**(code **)(*plVar9 + 0x18))();
                }
                lVar13 = (long)pdVar23[2] + (long)*(int *)(lVar13 + 0x30) * 8;
                uVar8 = (uint)plVar9;
                if (((ulong)plVar9 & 1) != 0) {
                  lVar11 = (long)(int)(uVar8 - 1);
                  if ((int)uVar5 < 1) {
                    dVar25 = 0.0;
                  }
                  else {
                    pdVar14 = pdVar24 + lVar11;
                    dVar25 = 0.0;
                    pdVar18 = pdVar20;
                    uVar16 = uVar5;
                    do {
                      dVar25 = dVar25 + *pdVar18 * *pdVar14;
                      pdVar14 = (double *)
                                ((long)pdVar14 +
                                (-((ulong)plVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar9 & 0xffffffff) << 3));
                      uVar16 = uVar16 - 1;
                      pdVar18 = pdVar18 + 1;
                    } while (uVar16 != 0);
                  }
                  *(double *)(lVar13 + lVar11 * 8) = dVar25 + *(double *)(lVar13 + lVar11 * 8);
                  if (uVar8 == 1) goto LAB_10994f464;
                }
                uVar16 = uVar8 & 0xfffffffc;
                if ((uVar8 >> 1 & 1) != 0) {
                  if ((int)uVar5 < 1) {
                    dVar25 = 0.0;
                    dVar26 = 0.0;
                  }
                  else {
                    pdVar14 = pdVar24 + (int)uVar16;
                    dVar25 = 0.0;
                    dVar26 = 0.0;
                    pdVar18 = pdVar20;
                    uVar17 = uVar5;
                    do {
                      dVar25 = dVar25 + *pdVar14 * *pdVar18;
                      dVar26 = dVar26 + pdVar14[1] * *pdVar18;
                      pdVar14 = (double *)
                                ((long)pdVar14 +
                                (-((ulong)plVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar9 & 0xffffffff) << 3));
                      uVar17 = uVar17 - 1;
                      pdVar18 = pdVar18 + 1;
                    } while (uVar17 != 0);
                  }
                  lVar11 = (long)(int)uVar16 * 8;
                  pdVar14 = (double *)(lVar13 + lVar11);
                  dVar27 = *pdVar14;
                  pdVar18 = (double *)(lVar13 + lVar11);
                  pdVar18[1] = dVar26 + pdVar14[1];
                  *pdVar18 = dVar25 + dVar27;
                }
                if (3 < (int)uVar8) {
                  uVar15 = 0;
                  pdVar14 = pdVar24;
                  do {
                    pdVar18 = pdVar20;
                    if ((int)uVar5 < 4) {
                      pdVar10 = pdVar24 + uVar15;
                      dVar25 = 0.0;
                      dVar26 = 0.0;
                      dVar27 = 0.0;
                      dVar28 = 0.0;
                    }
                    else {
                      iVar7 = 0;
                      dVar25 = 0.0;
                      dVar26 = 0.0;
                      dVar27 = 0.0;
                      dVar28 = 0.0;
                      pdVar10 = pdVar14;
                      do {
                        pdVar1 = pdVar10 + ((ulong)plVar9 & 0xffffffff) + 2;
                        dVar6 = *pdVar18;
                        dVar29 = pdVar18[1];
                        pdVar2 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 2 + 2;
                        dVar30 = pdVar18[2];
                        dVar31 = pdVar18[3];
                        pdVar3 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 3 + 2;
                        dVar25 = dVar25 + dVar6 * *pdVar10 + pdVar1[-2] * dVar29 +
                                 pdVar2[-2] * dVar30 + pdVar3[-2] * dVar31;
                        dVar26 = dVar26 + dVar6 * pdVar10[1] + pdVar1[-1] * dVar29 +
                                 pdVar2[-1] * dVar30 + pdVar3[-1] * dVar31;
                        dVar27 = dVar27 + dVar6 * pdVar10[2] + *pdVar1 * dVar29 + *pdVar2 * dVar30 +
                                 *pdVar3 * dVar31;
                        dVar28 = dVar28 + dVar6 * pdVar10[3] + pdVar1[1] * dVar29 +
                                 pdVar2[1] * dVar30 + pdVar3[1] * dVar31;
                        pdVar18 = pdVar18 + 4;
                        iVar7 = iVar7 + 4;
                        pdVar10 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 4;
                      } while (iVar7 < (int)uVar4);
                    }
                    if (uVar4 != uVar5) {
                      pdVar10 = pdVar10 + 2;
                      uVar8 = uVar4;
                      do {
                        dVar6 = *pdVar18;
                        pdVar18 = pdVar18 + 1;
                        dVar25 = dVar25 + dVar6 * pdVar10[-2];
                        dVar26 = dVar26 + dVar6 * pdVar10[-1];
                        dVar27 = dVar27 + dVar6 * *pdVar10;
                        dVar28 = dVar28 + dVar6 * pdVar10[1];
                        uVar8 = uVar8 + 1;
                        pdVar10 = pdVar10 + ((ulong)plVar9 & 0xffffffff);
                      } while ((int)uVar8 < (int)uVar5);
                    }
                    pdVar18 = (double *)(lVar13 + uVar15 * 8);
                    pdVar18[1] = dVar26 + pdVar18[1];
                    *pdVar18 = dVar25 + *pdVar18;
                    pdVar18[3] = dVar28 + pdVar18[3];
                    pdVar18[2] = dVar27 + pdVar18[2];
                    uVar15 = uVar15 + 4;
                    pdVar14 = pdVar14 + 4;
                  } while (uVar15 < uVar16);
                }
              }
            }
LAB_10994f464:
            uVar22 = uVar22 + 1;
          } while (uVar22 != (uVar12 >> 2 & 0x7fffffff));
        }
      }
    }
  }
  return;
}



/* Entry: 10994f4a8; end: 10994f4fb;  */

/* WARNING: Removing unreachable block (ram,0x00010994f4dc) */

long FUN_10994f4a8(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00ddba) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10994f4fc; end: 10994f507;  */

undefined ** FUN_10994f4fc(void)

{
  return &PTR_DAT_110b1e240;
}



/* Entry: 10994f508; end: 10994f9fb;  */

undefined8 * FUN_10994f508(undefined8 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puStack_68;
  undefined8 *puVar15;
  
  *param_1 = &PTR_DAT_110b1e260;
  uVar28 = *(undefined8 *)(param_2 + 2);
  uVar27 = *(undefined8 *)param_2;
  uVar29 = *(undefined8 *)(param_2 + 4);
  param_1[4] = *(undefined8 *)(param_2 + 6);
  param_1[3] = uVar29;
  param_1[2] = uVar28;
  param_1[1] = uVar27;
  param_1[5] = param_3;
  param_1[6] = param_3;
  FUN_109987250(&puStack_68,param_3,*param_2);
  param_1[7] = puStack_68;
  plVar23 = param_1 + 8;
  param_1[9] = 0;
  *plVar23 = 0;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_1 + 0x15;
  puVar9 = (undefined8 *)param_3[3];
  puVar21 = (undefined8 *)param_3[4];
  uVar12 = (long)puVar21 - (long)puVar9;
  if ((uVar12 >> 3 & 0xffffffff) == 0) {
    lVar24 = 0;
LAB_10994f604:
    if ((long)puVar21 - (long)puVar9 == 0) {
      lVar24 = 0;
      lVar20 = 0;
      lVar13 = 0;
      uVar5 = *param_2;
    }
    else {
      lVar13 = 0;
      iVar18 = 0;
      do {
        iVar4 = *(int *)(*(long *)puVar9[lVar13] + 0x20);
        *(int *)(lVar24 + lVar13 * 4) = iVar18;
        iVar18 = iVar4 + iVar18;
        lVar13 = lVar13 + 1;
      } while ((long)puVar21 - (long)puVar9 >> 3 != lVar13);
      uVar12 = 0;
      uVar5 = *param_2;
      puVar14 = puVar9;
      do {
        puVar15 = puVar14 + 1;
        uVar19 = (uint)((ulong)(*(long *)(*(long *)*puVar14 + 0x10) -
                               *(long *)(*(long *)*puVar14 + 8)) >> 2);
        uVar1 = (uint)uVar12;
        if ((int)(uint)uVar12 <= (int)uVar19) {
          uVar1 = uVar19;
        }
        uVar12 = (ulong)uVar1;
        puVar14 = puVar15;
      } while (puVar15 != puVar21);
      uVar25 = 0;
      puVar14 = puVar9;
      do {
        puVar15 = puVar14 + 1;
        uVar19 = (uint)*puVar14;
        FUN_109983284();
        uVar1 = (uint)uVar25;
        if ((int)(uint)uVar25 <= (int)uVar19) {
          uVar1 = uVar19;
        }
        uVar25 = (ulong)uVar1;
        puVar14 = puVar15;
      } while (puVar15 != puVar21);
      uVar16 = 0;
      do {
        puVar14 = puVar9 + 1;
        uVar1 = (uint)uVar16;
        if ((int)(uint)uVar16 <= (int)*(uint *)(*(long *)*puVar9 + 0x20)) {
          uVar1 = *(uint *)(*(long *)*puVar9 + 0x20);
        }
        uVar16 = (ulong)uVar1;
        puVar9 = puVar14;
      } while (puVar14 != puVar21);
      lVar24 = uVar25 << 3;
      lVar13 = uVar16 << 3;
      lVar20 = uVar12 << 3;
    }
    plVar22 = (long *)*param_3;
    plVar3 = (long *)param_3[1];
    if (plVar22 == plVar3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        plVar8 = *(long **)(*plVar22 + 0x10);
        if (plVar8 == (long *)0x0) {
          iVar18 = *(int *)(*plVar22 + 8);
        }
        else {
          (**(code **)(*plVar8 + 0x18))();
          iVar18 = (int)plVar8;
        }
        uVar12 = (ulong)(uint)(iVar18 + (int)uVar12);
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar3);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (long)(int)uVar5;
    uVar25 = ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) + (long)(int)uVar5)
             * 8;
    puVar9 = (undefined8 *)(uVar25 + 0x10);
    if (0xffffffffffffffef < uVar25 || SUB168(auVar6 * ZEXT816(0x28),8) != 0) {
      puVar9 = (undefined8 *)0xffffffffffffffff;
    }
    __Znam();
    *puVar9 = 0x28;
    puVar9[1] = (long)(int)uVar5;
    puVar21 = puVar9 + 2;
    if ((uVar5 != 0) &&
       (_bzero(puVar21,((uVar25 - 0x28) / 0x28) * 0x28 + 0x28), puStack_68 = puVar21, 0 < (int)uVar5
       )) {
      uVar16 = (ulong)(int)uVar12;
      uVar25 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      if ((int)uVar12 < 0) {
        uVar25 = 0xffffffffffffffff;
      }
      uVar12 = (ulong)uVar5;
      plVar22 = puVar9 + 6;
      do {
        lVar11 = lVar24;
        __Znam();
        _bzero();
        lVar10 = plVar22[-3];
        plVar22[-3] = lVar11;
        if (lVar10 != 0) {
          __ZdaPv();
        }
        uVar26 = uVar25;
        __Znam();
        _bzero();
        lVar11 = plVar22[-2];
        plVar22[-2] = uVar26;
        if (lVar11 != 0) {
          __ZdaPv();
          uVar26 = plVar22[-2];
        }
        uVar17 = uVar26 >> 3 & 1;
        if ((long)uVar16 <= (long)uVar17) {
          uVar17 = uVar16;
        }
        if ((uVar26 & 7) != 0) {
          uVar17 = uVar16;
        }
        if (0 < (long)uVar17) {
          _bzero(uVar26,uVar17 << 3);
        }
        lVar10 = uVar16 - uVar17;
        lVar11 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar17;
        if (1 < lVar10) {
          lVar2 = lVar11;
          if (lVar11 <= (long)(uVar17 + 2)) {
            lVar2 = uVar17 + 2;
          }
          _bzero(uVar26 + uVar17 * 8,(lVar2 + ~uVar17 & 0x1ffffffffffffffe) * 8 + 0x10);
        }
        if (lVar11 < (long)uVar16) {
          _bzero(uVar26 + (lVar10 / 2) * 0x10 + uVar17 * 8,(lVar10 % 2) * 8);
        }
        lVar11 = lVar13;
        __Znam();
        _bzero();
        lVar10 = plVar22[-1];
        plVar22[-1] = lVar11;
        if (lVar10 != 0) {
          __ZdaPv();
        }
        lVar11 = lVar20;
        __Znam();
        _bzero();
        lVar10 = *plVar22;
        *plVar22 = lVar11;
        if (lVar10 != 0) {
          __ZdaPv();
        }
        plVar22 = plVar22 + 5;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    lVar24 = *plVar23;
    *plVar23 = (long)puVar21;
    if (lVar24 != 0) {
      lVar13 = *(long *)(lVar24 + -8);
      if (lVar13 != 0) {
        lVar20 = lVar13 * -0x28;
        plVar23 = (long *)(lVar24 + lVar13 * 0x28 + -0x10);
        do {
          lVar13 = plVar23[1];
          plVar23[1] = 0;
          if (lVar13 != 0) {
            __ZdaPv();
          }
          lVar13 = *plVar23;
          *plVar23 = 0;
          if (lVar13 != 0) {
            __ZdaPv();
          }
          lVar13 = plVar23[-1];
          plVar23[-1] = 0;
          if (lVar13 != 0) {
            __ZdaPv();
          }
          lVar13 = plVar23[-2];
          plVar23[-2] = 0;
          if (lVar13 != 0) {
            __ZdaPv();
          }
          plVar23 = plVar23 + -5;
          lVar20 = lVar20 + 0x28;
        } while (lVar20 != 0);
      }
      __ZdaPv(lVar24 + -0x10);
    }
    return param_1;
  }
  if ((uVar12 >> 0x22 & 1) == 0) {
    uVar12 = (long)(uVar12 * 0x20000000) >> 0x20;
    if (uVar12 >> 0x3e == 0) {
      lVar24 = uVar12 * 4;
      __Znwm();
      _bzero();
      param_1[9] = lVar24;
      param_1[10] = lVar24 + uVar12 * 4;
      param_1[0xb] = lVar24 + uVar12 * 4;
      puVar9 = (undefined8 *)param_3[3];
      puVar21 = (undefined8 *)param_3[4];
      goto LAB_10994f604;
    }
    func_0x000104c4f740();
  }
  else {
    FUN_10923f788();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10994f9a8);
  (*pcVar7)();
}



/* Entry: 10994f9fc; end: 10994fcb3;  */

long * FUN_10994f9fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x28;
      plVar4 = (long *)(lVar1 + lVar2 * 0x28 + -0x10);
      do {
        lVar2 = plVar4[1];
        plVar4[1] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = *plVar4;
        *plVar4 = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = plVar4[-1];
        plVar4[-1] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        lVar2 = plVar4[-2];
        plVar4[-2] = 0;
        if (lVar2 != 0) {
          __ZdaPv();
        }
        plVar4 = plVar4 + -5;
        lVar3 = lVar3 + 0x28;
      } while (lVar3 != 0);
    }
    __ZdaPv(lVar1 + -0x10);
  }
  return param_1;
}



/* Entry: 10994fcb4; end: 10994fcbb;  */

void FUN_10994fcb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_2 + 0x30);
  for (lVar4 = plVar3[3]; lVar4 != plVar3[4]; lVar4 = lVar4 + 8) {
  }
  plVar1 = (long *)plVar3[1];
  for (plVar3 = (long *)*plVar3; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if (*(long **)(*plVar3 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(*plVar3 + 0x10) + 0x18))();
    }
  }
  uVar2 = 0xc0;
  __Znwm();
  FUN_109939334();
  *param_1 = uVar2;
  return;
}



/* Entry: 10994fcbc; end: 1099504eb;  */

byte FUN_10994fcbc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,double *param_4,
                  ulong param_5,double *param_6,long *param_7)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 ***pppuVar21;
  undefined8 **ppuVar22;
  byte bVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  double dVar28;
  undefined8 **ppuStack_120;
  undefined8 uStack_118;
  undefined7 uStack_110;
  undefined4 uStack_109;
  undefined1 uStack_105;
  char cStack_101;
  undefined8 *puStack_100;
  double dStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  char cStack_d9;
  undefined8 *puStack_d8;
  long *plStack_d0;
  double *pdStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 *puStack_b0;
  int iStack_a8;
  undefined8 **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_d0 = param_7;
  pdStack_c8 = param_6;
  uStack_c0 = param_5;
  _gettimeofday(&ppuStack_120,0);
  dStack_f8 = (double)(long)ppuStack_120 + (double)(int)uStack_118 * 1e-06;
  puStack_f0 = (undefined8 *)0x6f7461756c617645;
  uStack_e8 = 0x6c61746f543a3a72;
  uStack_e0 = 0;
  cStack_d9 = '\x10';
  puStack_d8 = param_1 + 0xc;
  _gettimeofday(&puStack_b0,0);
  ppuStack_120 = (undefined8 **)((double)(long)puStack_b0 + (double)iStack_a8 * 1e-06);
  puVar1 = &UNK_10f58c29c;
  if (param_6 != (double *)0x0 || param_7 != (long *)0x0) {
    puVar1 = &UNK_10f58c2b0;
  }
  uStack_118 = 0x6f7461756c617645;
  uStack_110 = (undefined7)*(undefined8 *)(puVar1 + 8);
  uStack_109 = *(undefined4 *)(puVar1 + 0xf);
  uStack_105 = 0;
  cStack_101 = '\x13';
  uVar5 = param_1[5];
  puStack_100 = param_1 + 0xc;
  FUN_109978124(uVar5,param_3);
  if ((uVar5 & 1) == 0) {
    bVar23 = 0;
    goto LAB_109950310;
  }
  plVar6 = (long *)param_1[4];
  if (plVar6 != (long *)0x0) {
    puVar18 = *(undefined8 **)param_1[5];
    puVar9 = (undefined8 *)((long *)param_1[5])[1];
    if (puVar18 != puVar9) {
      do {
        plVar6 = (long *)*puVar18;
        if ((plVar6[3] != *plVar6) && ((int)plVar6[1] != 0)) {
          _memmove(*plVar6,plVar6[3],(long)(int)plVar6[1] << 3);
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar9);
      plVar6 = (long *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))
              (plVar6,param_6 != (double *)0x0 || param_7 != (long *)0x0,
               *(undefined1 *)((long)param_2 + 1));
    param_5 = uStack_c0;
  }
  if (param_5 != 0) {
    puVar18 = *(undefined8 **)(param_1[5] + 0x18);
    puVar9 = *(undefined8 **)(param_1[5] + 0x20);
    if (puVar18 == puVar9) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        puVar16 = puVar18 + 1;
        uVar5 = (long)*(int *)(*(long *)*puVar18 + 0x20) + (long)(int)uVar5;
        puVar18 = puVar16;
      } while (puVar16 != puVar9);
    }
    uVar17 = param_5 >> 3 & 1;
    if ((long)uVar5 <= (long)uVar17) {
      uVar17 = uVar5;
    }
    if ((param_5 & 7) != 0) {
      uVar17 = uVar5;
    }
    lVar25 = uVar5 - uVar17;
    if (0 < (long)uVar17) {
      _bzero(param_5,uVar17 << 3);
    }
    lVar20 = (lVar25 - (lVar25 >> 0x3f) & 0xfffffffffffffffeU) + uVar17;
    if (1 < lVar25) {
      lVar26 = lVar20;
      if (lVar20 <= (long)(uVar17 + 2)) {
        lVar26 = uVar17 + 2;
      }
      _bzero(param_5 + uVar17 * 8,(lVar26 + ~uVar17 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar20 < (long)uVar5) {
      _bzero(param_5 + (lVar25 / 2) * 0x10 + uVar17 * 8,(lVar25 % 2) * 8);
    }
  }
  if (plStack_d0 != (long *)0x0) {
    (**(code **)(*plStack_d0 + 0x40))();
  }
  uVar5 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    lVar25 = 0;
    do {
      puVar18 = (undefined8 *)(param_1[8] + lVar25 * 0x28);
      *puVar18 = 0;
      if (pdStack_c8 != (double *)0x0) {
        uVar5 = puVar18[2];
        plVar6 = *(long **)param_1[5];
        plVar2 = (long *)((long *)param_1[5])[1];
        if (plVar6 == plVar2) {
          uVar17 = 0;
        }
        else {
          iVar27 = 0;
          do {
            plVar7 = *(long **)(*plVar6 + 0x10);
            if (plVar7 == (long *)0x0) {
              iVar4 = *(int *)(*plVar6 + 8);
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
              iVar4 = (int)plVar7;
            }
            iVar27 = iVar4 + iVar27;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar2);
          uVar17 = (ulong)iVar27;
        }
        uVar19 = uVar5 >> 3 & 1;
        if ((long)uVar17 <= (long)uVar19) {
          uVar19 = uVar17;
        }
        if ((uVar5 & 7) != 0) {
          uVar19 = uVar17;
        }
        if (0 < (long)uVar19) {
          _bzero(uVar5,uVar19 << 3);
        }
        lVar26 = uVar17 - uVar19;
        lVar20 = (lVar26 - (lVar26 >> 0x3f) & 0xfffffffffffffffeU) + uVar19;
        if (1 < lVar26) {
          lVar14 = lVar20;
          if (lVar20 <= (long)(uVar19 + 2)) {
            lVar14 = uVar19 + 2;
          }
          _bzero(uVar5 + uVar19 * 8,(lVar14 + ~uVar19 & 0x1ffffffffffffffe) * 8 + 0x10);
        }
        if (lVar20 < (long)uVar17) {
          _bzero(uVar5 + (lVar26 / 2) * 0x10 + uVar19 * 8,(lVar26 % 2) * 8);
        }
      }
      lVar25 = lVar25 + 1;
      uVar5 = (ulong)*(int *)(param_1 + 1);
    } while (lVar25 < (long)uVar5);
  }
  lVar25 = *(long *)(param_1[5] + 0x18);
  lVar20 = *(long *)(param_1[5] + 0x20);
  bStack_b1 = 0;
  uVar24 = param_1[3];
  ppuVar8 = (undefined8 **)0x38;
  __Znwm();
  *ppuVar8 = &PTR_FUN_110b1e2d0;
  ppuVar8[1] = (undefined8 *)&bStack_b1;
  ppuVar8[2] = param_1;
  ppuVar8[3] = &uStack_c0;
  ppuVar8[4] = &pdStack_c8;
  ppuVar8[5] = &plStack_d0;
  ppuVar8[6] = param_2;
  ppuStack_98 = ppuVar8;
  FUN_10991514c(uVar24,0,(ulong)(lVar20 - lVar25) >> 3,uVar5,&puStack_b0);
  if (ppuStack_98 == &puStack_b0) {
    lVar25 = 0x20;
LAB_1099500dc:
    (**(code **)((long)*ppuStack_98 + lVar25))();
  }
  else if (ppuStack_98 != (undefined8 **)0x0) {
    lVar25 = 0x28;
    goto LAB_1099500dc;
  }
  if ((bStack_b1 & 1) == 0) {
    plVar6 = *(long **)param_1[5];
    plVar2 = (long *)((long *)param_1[5])[1];
    if (plVar6 == plVar2) {
      iVar27 = 0;
    }
    else {
      iVar27 = 0;
      do {
        plVar7 = *(long **)(*plVar6 + 0x10);
        if (plVar7 == (long *)0x0) {
          iVar4 = *(int *)(*plVar6 + 8);
        }
        else {
          (**(code **)(*plVar7 + 0x18))();
          iVar4 = (int)plVar7;
        }
        iVar27 = iVar4 + iVar27;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar2);
    }
    pdVar10 = pdStack_c8;
    *param_4 = 0.0;
    if (pdStack_c8 != (double *)0x0) {
      uVar17 = (ulong)iVar27;
      uVar5 = (ulong)pdStack_c8 >> 3 & 1;
      if ((long)iVar27 <= (long)uVar5) {
        uVar5 = uVar17;
      }
      if (((ulong)pdStack_c8 & 7) != 0) {
        uVar5 = uVar17;
      }
      lVar25 = uVar17 - uVar5;
      if (0 < (long)uVar5) {
        _bzero(pdStack_c8,uVar5 << 3);
      }
      lVar20 = (lVar25 - (lVar25 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
      if (1 < lVar25) {
        lVar26 = lVar20;
        if (lVar20 <= (long)(uVar5 + 2)) {
          lVar26 = uVar5 + 2;
        }
        _bzero(pdVar10 + uVar5,(lVar26 + ~uVar5 & 0x1ffffffffffffffe) * 8 + 0x10);
      }
      if (lVar20 < (long)uVar17) {
        _bzero(pdVar10 + (lVar25 / 2) * 2 + uVar5,(lVar25 % 2) * 8);
      }
    }
    if (0 < *(int *)(param_1 + 1)) {
      lVar25 = 0;
      uVar17 = (ulong)iVar27;
      uVar5 = (ulong)pdStack_c8 >> 3 & 1;
      if ((long)iVar27 <= (long)uVar5) {
        uVar5 = uVar17;
      }
      if (((ulong)pdStack_c8 & 7) != 0) {
        uVar5 = uVar17;
      }
      lVar26 = uVar17 - uVar5;
      uVar19 = lVar26 - (lVar26 >> 0x3f);
      lVar20 = (uVar19 & 0xfffffffffffffffe) + uVar5;
      uVar19 = uVar19 & 0x1ffffffffffffffe;
      do {
        pdVar10 = (double *)(param_1[8] + lVar25 * 0x28);
        *param_4 = *pdVar10 + *param_4;
        if (pdStack_c8 != (double *)0x0) {
          pdVar11 = (double *)pdVar10[2];
          pdVar10 = pdStack_c8;
          pdVar12 = pdVar11;
          uVar15 = uVar5;
          if (0 < (long)uVar5) {
            do {
              *pdVar10 = *pdVar12 + *pdVar10;
              uVar15 = uVar15 - 1;
              pdVar10 = pdVar10 + 1;
              pdVar12 = pdVar12 + 1;
            } while (uVar15 != 0);
          }
          if (1 < lVar26) {
            pdVar10 = pdVar11 + uVar5;
            pdVar12 = pdStack_c8 + uVar5;
            uVar15 = uVar5;
            do {
              dVar28 = *pdVar10;
              pdVar12[1] = pdVar10[1] + pdVar12[1];
              *pdVar12 = dVar28 + *pdVar12;
              uVar15 = uVar15 + 2;
              pdVar10 = pdVar10 + 2;
              pdVar12 = pdVar12 + 2;
            } while ((long)uVar15 < lVar20);
          }
          if (lVar20 < (long)uVar17) {
            pdVar10 = pdVar11 + uVar5 + uVar19;
            pdVar12 = pdStack_c8 + uVar5 + uVar19;
            lVar14 = lVar26 % 2;
            do {
              *pdVar12 = *pdVar10 + *pdVar12;
              lVar14 = lVar14 + -1;
              pdVar10 = pdVar10 + 1;
              pdVar12 = pdVar12 + 1;
            } while (lVar14 != 0);
          }
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)(param_1 + 1));
    }
    if (plStack_d0 != (long *)0x0) {
      FUN_109939820(plStack_d0,iVar27);
    }
  }
  bVar23 = bStack_b1 ^ 1;
LAB_109950310:
  puVar9 = puStack_100;
  _gettimeofday(&puStack_b0,0);
  puVar16 = puStack_b0;
  ppuVar8 = ppuStack_120;
  __ZNSt3__15mutex4lockEv(puVar9);
  puStack_b0 = &uStack_118;
  puVar18 = puVar9 + 8;
  FUN_109921a64(puVar18,puStack_b0,&UNK_10dd5b8f9,&puStack_b0,&bStack_b1);
  puVar18[7] = (((double)(long)puVar16 + (double)iStack_a8 * 1e-06) - (double)ppuVar8) +
               (double)puVar18[7];
  *(int *)(puVar18 + 8) = *(int *)(puVar18 + 8) + 1;
  __ZNSt3__15mutex6unlockEv(puVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  puVar9 = puStack_d8;
  _gettimeofday(&ppuStack_120,0);
  dVar28 = dStack_f8;
  ppuVar22 = ppuStack_120;
  iVar27 = (int)uStack_118;
  __ZNSt3__15mutex4lockEv(puVar9);
  ppuVar8 = &puStack_f0;
  pdVar10 = (double *)&UNK_10dd5b8f9;
  puVar18 = puVar9 + 8;
  pppuVar13 = &ppuStack_120;
  ppuStack_120 = ppuVar8;
  FUN_109921a64();
  puVar18[7] = (((double)(long)ppuVar22 + (double)iVar27 * 1e-06) - dVar28) + (double)puVar18[7];
  *(int *)(puVar18 + 8) = *(int *)(puVar18 + 8) + 1;
  __ZNSt3__15mutex6unlockEv();
  if (cStack_d9 < '\0') {
    puVar9 = puStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return bVar23 & 1;
  }
  ___stack_chk_fail();
  FUN_109921980(&ppuStack_120);
  FUN_109921980(&dStack_f8);
  __Unwind_Resume();
  plVar6 = *(long **)puVar9[5];
  plVar2 = (long *)((long *)puVar9[5])[1];
  do {
    if (plVar6 == plVar2) {
      return 1;
    }
    lVar25 = *plVar6;
    plVar7 = *(long **)(lVar25 + 0x10);
    if (plVar7 == (long *)0x0) {
      uVar17 = (ulong)*(int *)(lVar25 + 8);
      uVar5 = (ulong)pppuVar13 >> 3 & 1;
      if ((long)uVar17 <= (long)uVar5) {
        uVar5 = uVar17;
      }
      if (((ulong)pppuVar13 & 7) != 0) {
        uVar5 = uVar17;
      }
      pppuVar21 = pppuVar13;
      ppuVar22 = ppuVar8;
      pdVar12 = pdVar10;
      uVar19 = uVar5;
      if (0 < (long)uVar5) {
        do {
          *pppuVar21 = (undefined8 **)((double)*ppuVar22 + *pdVar12);
          uVar19 = uVar19 - 1;
          pppuVar21 = pppuVar21 + 1;
          ppuVar22 = ppuVar22 + 1;
          pdVar12 = pdVar12 + 1;
        } while (uVar19 != 0);
      }
      lVar26 = uVar17 - uVar5;
      lVar20 = (lVar26 - (lVar26 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
      if (1 < lVar26) {
        pdVar12 = pdVar10 + uVar5;
        ppuVar22 = ppuVar8 + uVar5;
        uVar19 = uVar5;
        pppuVar21 = pppuVar13 + uVar5;
        do {
          puVar18 = *ppuVar22;
          dVar28 = *pdVar12;
          pppuVar21[1] = (undefined8 **)((double)ppuVar22[1] + pdVar12[1]);
          *pppuVar21 = (undefined8 **)((double)puVar18 + dVar28);
          uVar19 = uVar19 + 2;
          pdVar12 = pdVar12 + 2;
          ppuVar22 = ppuVar22 + 2;
          pppuVar21 = pppuVar21 + 2;
        } while ((long)uVar19 < lVar20);
      }
      if (lVar20 < (long)uVar17) {
        lVar20 = lVar26 / 2;
        lVar26 = lVar26 % 2;
        pdVar12 = pdVar10 + uVar5 + lVar20 * 2;
        ppuVar22 = ppuVar8 + uVar5 + lVar20 * 2;
        pppuVar21 = pppuVar13 + uVar5 + lVar20 * 2;
        do {
          *pppuVar21 = (undefined8 **)((double)*ppuVar22 + *pdVar12);
          lVar26 = lVar26 + -1;
          pdVar12 = pdVar12 + 1;
          ppuVar22 = ppuVar22 + 1;
          pppuVar21 = pppuVar21 + 1;
        } while (lVar26 != 0);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x20))(plVar7,ppuVar8,pdVar10,pppuVar13);
      if (((ulong)plVar7 & 1) == 0) {
        return 0;
      }
    }
    puVar18 = *(undefined8 **)(lVar25 + 0x48);
    uVar3 = *(uint *)(lVar25 + 8);
    uVar5 = (ulong)uVar3;
    if (puVar18 == (undefined8 *)0x0) {
LAB_109978380:
      puVar18 = *(undefined8 **)(lVar25 + 0x40);
      pppuVar21 = pppuVar13;
      if (puVar18 != (undefined8 *)0x0 && 0 < (int)uVar3) {
        do {
          ppuVar22 = (undefined8 **)*puVar18;
          if ((double)*pppuVar21 <= (double)*puVar18) {
            ppuVar22 = *pppuVar21;
          }
          *pppuVar21 = ppuVar22;
          uVar5 = uVar5 - 1;
          puVar18 = puVar18 + 1;
          pppuVar21 = pppuVar21 + 1;
        } while (uVar5 != 0);
      }
    }
    else {
      pppuVar21 = pppuVar13;
      uVar17 = uVar5;
      if (0 < (int)uVar3) {
        do {
          ppuVar22 = (undefined8 **)*puVar18;
          if ((double)*puVar18 <= (double)*pppuVar21) {
            ppuVar22 = *pppuVar21;
          }
          *pppuVar21 = ppuVar22;
          uVar17 = uVar17 - 1;
          puVar18 = puVar18 + 1;
          pppuVar21 = pppuVar21 + 1;
        } while (uVar17 != 0);
        goto LAB_109978380;
      }
    }
    plVar7 = *(long **)(lVar25 + 0x10);
    if (plVar7 == (long *)0x0) {
      lVar20 = (long)(int)uVar3;
      lVar25 = lVar20;
    }
    else {
      (**(code **)(*plVar7 + 0x18))();
      lVar20 = (long)*(int *)(lVar25 + 8);
      lVar25 = (long)(int)plVar7;
    }
    ppuVar8 = ppuVar8 + (int)uVar3;
    pdVar10 = pdVar10 + lVar25;
    plVar6 = plVar6 + 1;
    pppuVar13 = pppuVar13 + lVar20;
  } while( true );
}



/* Entry: 1099504ec; end: 109950527;  */

undefined8 FUN_1099504ec(long param_1,double *param_2,double *param_3,double *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  double *pdVar5;
  long lVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  plVar2 = (long *)(*(long **)(param_1 + 0x28))[1];
  do {
    if (plVar1 == plVar2) {
      return 1;
    }
    lVar12 = *plVar1;
    plVar4 = *(long **)(lVar12 + 0x10);
    if (plVar4 == (long *)0x0) {
      uVar7 = (ulong)*(int *)(lVar12 + 8);
      uVar13 = (ulong)param_4 >> 3 & 1;
      if ((long)uVar7 <= (long)uVar13) {
        uVar13 = uVar7;
      }
      if (((ulong)param_4 & 7) != 0) {
        uVar13 = uVar7;
      }
      pdVar5 = param_4;
      pdVar8 = param_2;
      pdVar10 = param_3;
      uVar11 = uVar13;
      if (0 < (long)uVar13) {
        do {
          *pdVar5 = *pdVar8 + *pdVar10;
          uVar11 = uVar11 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        } while (uVar11 != 0);
      }
      lVar9 = uVar7 - uVar13;
      lVar6 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
      if (1 < lVar9) {
        pdVar5 = param_3 + uVar13;
        pdVar8 = param_2 + uVar13;
        uVar11 = uVar13;
        pdVar10 = param_4 + uVar13;
        do {
          dVar14 = *pdVar8;
          dVar15 = *pdVar5;
          pdVar10[1] = pdVar8[1] + pdVar5[1];
          *pdVar10 = dVar14 + dVar15;
          uVar11 = uVar11 + 2;
          pdVar5 = pdVar5 + 2;
          pdVar8 = pdVar8 + 2;
          pdVar10 = pdVar10 + 2;
        } while ((long)uVar11 < lVar6);
      }
      if (lVar6 < (long)uVar7) {
        lVar6 = lVar9 / 2;
        lVar9 = lVar9 % 2;
        pdVar5 = param_3 + uVar13 + lVar6 * 2;
        pdVar8 = param_2 + uVar13 + lVar6 * 2;
        pdVar10 = param_4 + uVar13 + lVar6 * 2;
        do {
          *pdVar10 = *pdVar8 + *pdVar5;
          lVar9 = lVar9 + -1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3,param_4);
      if (((ulong)plVar4 & 1) == 0) {
        return 0;
      }
    }
    pdVar5 = *(double **)(lVar12 + 0x48);
    uVar3 = *(uint *)(lVar12 + 8);
    uVar13 = (ulong)uVar3;
    if (pdVar5 == (double *)0x0) {
LAB_109978380:
      pdVar5 = *(double **)(lVar12 + 0x40);
      pdVar8 = param_4;
      if (pdVar5 != (double *)0x0 && 0 < (int)uVar3) {
        do {
          dVar14 = *pdVar5;
          if (*pdVar8 <= *pdVar5) {
            dVar14 = *pdVar8;
          }
          *pdVar8 = dVar14;
          uVar13 = uVar13 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      pdVar8 = param_4;
      uVar7 = uVar13;
      if (0 < (int)uVar3) {
        do {
          dVar14 = *pdVar5;
          if (*pdVar5 <= *pdVar8) {
            dVar14 = *pdVar8;
          }
          *pdVar8 = dVar14;
          uVar7 = uVar7 - 1;
          pdVar5 = pdVar5 + 1;
          pdVar8 = pdVar8 + 1;
        } while (uVar7 != 0);
        goto LAB_109978380;
      }
    }
    plVar4 = *(long **)(lVar12 + 0x10);
    if (plVar4 == (long *)0x0) {
      lVar6 = (long)(int)uVar3;
      lVar12 = lVar6;
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
      lVar6 = (long)*(int *)(lVar12 + 8);
      lVar12 = (long)(int)plVar4;
    }
    param_2 = param_2 + (int)uVar3;
    param_3 = param_3 + lVar12;
    plVar1 = plVar1 + 1;
    param_4 = param_4 + lVar6;
  } while( true );
}



/* Entry: 109950528; end: 109950597;  */

int FUN_109950528(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)**(long **)(param_1 + 0x28);
  plVar1 = (long *)(*(long **)(param_1 + 0x28))[1];
  if (plVar5 == plVar1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      plVar3 = *(long **)(*plVar5 + 0x10);
      if (plVar3 == (long *)0x0) {
        iVar2 = *(int *)(*plVar5 + 8);
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        iVar2 = (int)plVar3;
      }
      iVar4 = iVar2 + iVar4;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return iVar4;
}



/* Entry: 109950598; end: 1099505cf;  */

int FUN_109950598(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x18);
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x20);
  if (puVar3 != puVar1) {
    iVar2 = 0;
    do {
      puVar4 = puVar3 + 1;
      iVar2 = *(int *)(*(long *)*puVar3 + 0x20) + iVar2;
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
    return iVar2;
  }
  return 0;
}



/* Entry: 1099505d0; end: 109950677;  */

void FUN_1099505d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = puVar3;
  plVar4 = *(long **)(param_2 + 0xa0);
  while (plVar4 != (long *)(param_2 + 0xa8)) {
    FUN_109921df4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109950678; end: 10995067f;  */

void FUN_109950678(void)

{
  return;
}



/* Entry: 109950680; end: 1099506c7;  */

void FUN_109950680(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_FUN_110b1e2d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  return;
}



/* Entry: 1099506c8; end: 1099506f7;  */

void FUN_1099506c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110b1e2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1099506f8; end: 109950ab3;  */

void FUN_1099506f8(long param_1,int *param_2,int *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  double *pdVar17;
  long *plVar18;
  double *pdVar19;
  double dVar20;
  ulong uVar21;
  long lVar22;
  double *pdVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dStack_68;
  
  lVar22 = (long)*param_3;
  lVar12 = *(long *)(param_1 + 0x10);
  if ((**(byte **)(param_1 + 8) & 1) == 0) {
    pdVar23 = (double *)(*(long *)(lVar12 + 0x40) + (long)*param_2 * 0x28);
    plVar18 = *(long **)(*(long *)(*(long *)(lVar12 + 0x28) + 0x18) + lVar22 * 8);
    if (**(long **)(param_1 + 0x18) == 0) {
      if (**(long **)(param_1 + 0x20) == 0) {
        pdVar19 = (double *)0x0;
      }
      else {
        pdVar19 = (double *)pdVar23[3];
      }
    }
    else {
      pdVar19 = (double *)
                (**(long **)(param_1 + 0x18) +
                (long)*(int *)(*(long *)(lVar12 + 0x48) + lVar22 * 4) * 8);
    }
    if ((**(long **)(param_1 + 0x28) == 0) && (**(long **)(param_1 + 0x20) == 0)) {
      dVar20 = 0.0;
    }
    else {
      FUN_109987390(*(long *)(lVar12 + 0x38) + (long)*param_2 * 8,plVar18,lVar22,
                    **(long **)(param_1 + 0x28),pdVar23[4]);
      dVar20 = pdVar23[4];
    }
    plVar9 = plVar18;
    FUN_1099828ac(plVar18,**(undefined1 **)(param_1 + 0x30),&dStack_68,pdVar19,dVar20,pdVar23[1]);
    if (((ulong)plVar9 & 1) == 0) {
      **(undefined1 **)(param_1 + 8) = 1;
    }
    else {
      *pdVar23 = dStack_68 + *pdVar23;
      if (**(long **)(param_1 + 0x28) != 0) {
        FUN_1099390e4(lVar12 + 0x30,lVar22,*(undefined4 *)(*(long *)(lVar12 + 0x48) + lVar22 * 4),
                      dVar20);
      }
      if (**(long **)(param_1 + 0x20) != 0) {
        lVar12 = *plVar18;
        uVar11 = *(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8);
        if (0 < (int)(uVar11 >> 2)) {
          uVar21 = 0;
          uVar5 = *(uint *)(lVar12 + 0x20);
          uVar4 = uVar5 & 0xfffffffc;
          do {
            lVar12 = *(long *)(plVar18[2] + uVar21 * 8);
            if ((*(byte *)(lVar12 + 0xc) & 1) == 0) {
              plVar9 = *(long **)(lVar12 + 0x10);
              if (plVar9 == (long *)0x0) {
                iVar7 = *(int *)(lVar12 + 8);
              }
              else {
                (**(code **)(*plVar9 + 0x18))();
                iVar7 = (int)plVar9;
              }
              if (iVar7 != 0) {
                pdVar24 = *(double **)((long)dVar20 + uVar21 * 8);
                plVar9 = *(long **)(lVar12 + 0x10);
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)(ulong)*(uint *)(lVar12 + 8);
                }
                else {
                  (**(code **)(*plVar9 + 0x18))();
                }
                lVar12 = (long)pdVar23[2] + (long)*(int *)(lVar12 + 0x30) * 8;
                uVar8 = (uint)plVar9;
                if (((ulong)plVar9 & 1) != 0) {
                  lVar22 = (long)(int)(uVar8 - 1);
                  if ((int)uVar5 < 1) {
                    dVar25 = 0.0;
                  }
                  else {
                    pdVar13 = pdVar24 + lVar22;
                    dVar25 = 0.0;
                    pdVar17 = pdVar19;
                    uVar15 = uVar5;
                    do {
                      dVar25 = dVar25 + *pdVar17 * *pdVar13;
                      pdVar13 = (double *)
                                ((long)pdVar13 +
                                (-((ulong)plVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar9 & 0xffffffff) << 3));
                      uVar15 = uVar15 - 1;
                      pdVar17 = pdVar17 + 1;
                    } while (uVar15 != 0);
                  }
                  *(double *)(lVar12 + lVar22 * 8) = dVar25 + *(double *)(lVar12 + lVar22 * 8);
                  if (uVar8 == 1) goto LAB_109950a70;
                }
                uVar15 = uVar8 & 0xfffffffc;
                if ((uVar8 >> 1 & 1) != 0) {
                  if ((int)uVar5 < 1) {
                    dVar25 = 0.0;
                    dVar26 = 0.0;
                  }
                  else {
                    pdVar13 = pdVar24 + (int)uVar15;
                    dVar25 = 0.0;
                    dVar26 = 0.0;
                    pdVar17 = pdVar19;
                    uVar16 = uVar5;
                    do {
                      dVar25 = dVar25 + *pdVar13 * *pdVar17;
                      dVar26 = dVar26 + pdVar13[1] * *pdVar17;
                      pdVar13 = (double *)
                                ((long)pdVar13 +
                                (-((ulong)plVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar9 & 0xffffffff) << 3));
                      uVar16 = uVar16 - 1;
                      pdVar17 = pdVar17 + 1;
                    } while (uVar16 != 0);
                  }
                  lVar22 = (long)(int)uVar15 * 8;
                  pdVar13 = (double *)(lVar12 + lVar22);
                  dVar27 = *pdVar13;
                  pdVar17 = (double *)(lVar12 + lVar22);
                  pdVar17[1] = dVar26 + pdVar13[1];
                  *pdVar17 = dVar25 + dVar27;
                }
                if (3 < (int)uVar8) {
                  uVar14 = 0;
                  pdVar13 = pdVar24;
                  do {
                    pdVar17 = pdVar19;
                    if ((int)uVar5 < 4) {
                      pdVar10 = pdVar24 + uVar14;
                      dVar25 = 0.0;
                      dVar26 = 0.0;
                      dVar27 = 0.0;
                      dVar28 = 0.0;
                    }
                    else {
                      iVar7 = 0;
                      dVar25 = 0.0;
                      dVar26 = 0.0;
                      dVar27 = 0.0;
                      dVar28 = 0.0;
                      pdVar10 = pdVar13;
                      do {
                        pdVar1 = pdVar10 + ((ulong)plVar9 & 0xffffffff) + 2;
                        dVar6 = *pdVar17;
                        dVar29 = pdVar17[1];
                        pdVar2 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 2 + 2;
                        dVar30 = pdVar17[2];
                        dVar31 = pdVar17[3];
                        pdVar3 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 3 + 2;
                        dVar25 = dVar25 + dVar6 * *pdVar10 + pdVar1[-2] * dVar29 +
                                 pdVar2[-2] * dVar30 + pdVar3[-2] * dVar31;
                        dVar26 = dVar26 + dVar6 * pdVar10[1] + pdVar1[-1] * dVar29 +
                                 pdVar2[-1] * dVar30 + pdVar3[-1] * dVar31;
                        dVar27 = dVar27 + dVar6 * pdVar10[2] + *pdVar1 * dVar29 + *pdVar2 * dVar30 +
                                 *pdVar3 * dVar31;
                        dVar28 = dVar28 + dVar6 * pdVar10[3] + pdVar1[1] * dVar29 +
                                 pdVar2[1] * dVar30 + pdVar3[1] * dVar31;
                        pdVar17 = pdVar17 + 4;
                        iVar7 = iVar7 + 4;
                        pdVar10 = pdVar10 + ((ulong)plVar9 & 0xffffffff) * 4;
                      } while (iVar7 < (int)uVar4);
                    }
                    if (uVar4 != uVar5) {
                      pdVar10 = pdVar10 + 2;
                      uVar8 = uVar4;
                      do {
                        dVar6 = *pdVar17;
                        pdVar17 = pdVar17 + 1;
                        dVar25 = dVar25 + dVar6 * pdVar10[-2];
                        dVar26 = dVar26 + dVar6 * pdVar10[-1];
                        dVar27 = dVar27 + dVar6 * *pdVar10;
                        dVar28 = dVar28 + dVar6 * pdVar10[1];
                        uVar8 = uVar8 + 1;
                        pdVar10 = pdVar10 + ((ulong)plVar9 & 0xffffffff);
                      } while ((int)uVar8 < (int)uVar5);
                    }
                    pdVar17 = (double *)(lVar12 + uVar14 * 8);
                    pdVar17[1] = dVar26 + pdVar17[1];
                    *pdVar17 = dVar25 + *pdVar17;
                    pdVar17[3] = dVar28 + pdVar17[3];
                    pdVar17[2] = dVar27 + pdVar17[2];
                    uVar14 = uVar14 + 4;
                    pdVar13 = pdVar13 + 4;
                  } while (uVar14 < uVar15);
                }
              }
            }
LAB_109950a70:
            uVar21 = uVar21 + 1;
          } while (uVar21 != (uVar11 >> 2 & 0x7fffffff));
        }
      }
    }
  }
  return;
}



/* Entry: 109950ab4; end: 109950b07;  */

/* WARNING: Removing unreachable block (ram,0x000109950ae8) */

long FUN_109950ab4(long param_1,long param_2)

{
  if (*(undefined **)(param_2 + 8) == &DAT_10e00e03d) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109950b08; end: 109950b13;  */

undefined ** FUN_109950b08(void)

{
  return &PTR_DAT_110b1e330;
}



/* Entry: 109950b14; end: 109950bfb;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109950b14(undefined8 *param_1,ulong *param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong *extraout_x8;
  ulong *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 *******pppppppuStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puVar9 = &uStack_90;
  puVar12 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar12 = param_2;
  }
  _fopen(puVar12,&UNK_10f58c2c4);
  if (puVar12 != (ulong *)0x0) {
    uVar16 = param_1[1];
    puVar7 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar16 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar7 = param_1;
    }
    _fwrite(puVar7,1,uVar16,puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fclose_11034c270)(puVar12);
    return;
  }
  uStack_90 = 0;
  uStack_38 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_1099a9f0c(&uStack_90,&UNK_10f58c2c7,0x2f,3,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f58c344,0x18);
  FUN_10990216c();
  func_0x0001099ab7c0();
  cVar5 = *(char *)((long)param_2 + 0x17);
  uVar16 = (ulong)cVar5;
  if ((long)uVar16 < 0) {
    if (param_2[1] != 0) {
      puVar12 = (ulong *)*param_2;
      goto LAB_109950c44;
    }
LAB_109950c50:
    cVar6 = *(char *)((long)puVar9 + 0x17);
    uVar13 = (ulong)cVar6;
    if ((long)uVar13 < 0) {
      uVar15 = puVar9[1];
      if (puVar9[1] != 0) goto LAB_109950c6c;
    }
    else {
      uVar15 = uVar13;
      if (cVar6 != '\0') {
LAB_109950c6c:
        puVar12 = (ulong *)*puVar9;
        if (-1 < cVar6) {
          puVar12 = puVar9;
        }
        if (*(char *)((long)puVar12 + (uVar15 - 1)) == '/') {
          uVar15 = puVar9[1];
          if (-1 < cVar6) {
            uVar15 = uVar13;
          }
          uVar13 = param_2[1];
          if (-1 < cVar5) {
            uVar13 = uVar16;
          }
          uVar16 = uVar13 + uVar15;
          if (uVar16 < 0x7ffffffffffffff8) {
            if (uVar16 < 0x17) {
              extraout_x8[1] = 0;
              extraout_x8[2] = 0;
              *extraout_x8 = 0;
              *(char *)((long)extraout_x8 + 0x17) = (char)uVar16;
              puVar9 = extraout_x8;
            }
            else {
              puVar3 = (ulong *)0x19;
              if ((uVar16 | 7) != 0x17) {
                puVar3 = (ulong *)((uVar16 | 7) + 1);
              }
              puVar9 = puVar3;
              __Znwm();
              extraout_x8[1] = uVar16;
              extraout_x8[2] = (ulong)puVar3 | 0x8000000000000000;
              *extraout_x8 = (ulong)puVar9;
            }
            if (uVar15 != 0) {
              _memmove(puVar9,puVar12,uVar15);
            }
            if (uVar13 != 0) {
              puVar12 = (ulong *)*param_2;
              if (-1 < cVar5) {
                puVar12 = param_2;
              }
              _memmove((long)puVar9 + uVar15,puVar12,uVar13);
            }
            *(undefined1 *)((long)puVar9 + uVar15 + uVar13) = 0;
            return;
          }
LAB_109950fdc:
          func_0x000104c4f6b8();
          goto LAB_109950fe0;
        }
        uStack_118 = CONCAT17(1,(undefined7)uStack_118);
        uStack_128 = (undefined8 *******)CONCAT62(uStack_128._2_6_,0x2f);
        uVar15 = puVar9[1];
        if (-1 < cVar6) {
          uVar15 = uVar13;
        }
        if (uVar15 < 0x16) {
          if (uVar15 != 0) {
            uVar13 = uVar15;
            if (((ulong)&uStack_128 | 1) <= puVar12 || puVar12 < &uStack_128) {
              uVar13 = 0;
            }
            *(undefined1 *)((long)&uStack_128 + uVar15) = 0x2f;
            _memmove(&uStack_128,(long)puVar12 + uVar13,uVar15);
            uVar13 = uVar15 + 1;
            if (-1 < (long)uStack_118) {
              uStack_118 = CONCAT17((char)(uVar15 + 1),(undefined7)uStack_118);
              uVar13 = uStack_120;
            }
            uStack_120 = uVar13;
            puVar14 = (undefined1 *)((long)&uStack_128 + uVar15 + 1);
            goto LAB_109950e54;
          }
        }
        else {
          if (uVar15 + 0x800000000000000a < 0x800000000000001f) goto LAB_109950fdc;
          uVar13 = uVar15 + 1;
          uVar4 = 0x2c;
          if (0x2c < uVar13) {
            uVar4 = uVar15 + 1;
          }
          pppppppuVar1 = (undefined8 *******)((uVar4 | 7) + 1);
          pppppppuVar10 = pppppppuVar1;
          __Znwm();
          _memcpy();
          *(undefined1 *)((long)pppppppuVar10 + uVar15) = 0x2f;
          uStack_118 = (ulong)pppppppuVar1 | 0x8000000000000000;
          puVar14 = (undefined1 *)((long)pppppppuVar10 + uVar13);
          uStack_128 = pppppppuVar10;
          uStack_120 = uVar13;
LAB_109950e54:
          *puVar14 = 0;
        }
        uStack_100 = uStack_118;
        uStack_108 = uStack_120;
        pppppppuStack_110 = uStack_128;
        uVar13 = param_2[1];
        puVar12 = (ulong *)*param_2;
        if (-1 < cVar5) {
          uVar13 = uVar16;
          puVar12 = param_2;
        }
        uVar15 = (uStack_118 & 0x7fffffffffffffff) - 1;
        uVar16 = uStack_120;
        if (-1 < (long)uStack_118) {
          uVar15 = 0x16;
          uVar16 = uStack_118 >> 0x38;
        }
        if (uVar15 - uVar16 < uVar13) {
          uVar4 = uVar16 + uVar13;
          if (~uVar15 + 0x7ffffffffffffff7 < uVar4 - uVar15) {
LAB_109950fe0:
            func_0x000104c4f6b8();
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x109950fe8);
            (*pcVar8)();
          }
          pppppppuVar1 = uStack_128;
          if (-1 < (long)uStack_118) {
            pppppppuVar1 = &pppppppuStack_110;
          }
          pppppppuVar10 = (undefined8 *******)0x7ffffffffffffff7;
          if (uVar15 < 0x3ffffffffffffff3) {
            uVar2 = uVar4;
            if (uVar4 <= uVar15 * 2) {
              uVar2 = uVar15 << 1;
            }
            pppppppuVar11 = (undefined8 *******)0x19;
            if ((uVar2 | 7) != 0x17) {
              pppppppuVar11 = (undefined8 *******)((uVar2 | 7) + 1);
            }
            pppppppuVar10 = (undefined8 *******)0x17;
            if (0x16 < uVar2) {
              pppppppuVar10 = pppppppuVar11;
            }
          }
          pppppppuVar11 = pppppppuVar10;
          __Znwm();
          if (uVar16 != 0) {
            _memmove(pppppppuVar11,pppppppuVar1,uVar16);
          }
          _memcpy((long)pppppppuVar11 + uVar16,puVar12,uVar13);
          if (uVar15 != 0x16) {
            __ZdlPv(pppppppuVar1);
          }
          uStack_100 = (ulong)pppppppuVar10 | 0x8000000000000000;
          puVar14 = (undefined1 *)((long)pppppppuVar11 + uVar4);
          pppppppuStack_110 = pppppppuVar11;
          uStack_108 = uVar4;
LAB_109950fa8:
          *puVar14 = 0;
        }
        else if (uVar13 != 0) {
          pppppppuVar1 = uStack_128;
          if (-1 < (long)uStack_118) {
            pppppppuVar1 = &pppppppuStack_110;
          }
          _memmove((long)pppppppuVar1 + uVar16,puVar12,uVar13);
          uVar16 = uVar16 + uVar13;
          uVar13 = uVar16;
          if (-1 < (long)uStack_100) {
            uStack_100 = CONCAT17((char)uVar16,(undefined7)uStack_100) & 0x7fffffffffffffff;
            uVar13 = uStack_108;
          }
          uStack_108 = uVar13;
          puVar14 = (undefined1 *)((long)pppppppuVar1 + uVar16);
          goto LAB_109950fa8;
        }
        extraout_x8[1] = uStack_108;
        *extraout_x8 = (ulong)pppppppuStack_110;
        goto LAB_109950fb8;
      }
    }
  }
  else {
    puVar12 = param_2;
    if (cVar5 == '\0') goto LAB_109950c50;
LAB_109950c44:
    if ((char)*puVar12 != '/') goto LAB_109950c50;
  }
  if (cVar5 < '\0') {
    uVar16 = *param_2;
    uVar13 = param_2[1];
    if (uVar13 < 0x17) {
      *(char *)((long)extraout_x8 + 0x17) = (char)uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(extraout_x8,uVar16,uVar13 + 1);
      return;
    }
    if (uVar13 < 0x7ffffffffffffff7) {
      uVar16 = 0x19;
      if ((uVar13 | 7) != 0x17) {
        uVar16 = (uVar13 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(uVar16);
    return;
  }
  uVar16 = *param_2;
  extraout_x8[1] = param_2[1];
  *extraout_x8 = uVar16;
  uStack_100 = param_2[2];
LAB_109950fb8:
  extraout_x8[2] = uStack_100;
  return;
}



/* Entry: 109950bfc; end: 109950fff;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109950bfc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  ulong *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  cVar5 = *(char *)((long)param_3 + 0x17);
  uVar15 = (ulong)cVar5;
  if ((long)uVar15 < 0) {
    if (param_3[1] != 0) {
      puVar11 = (ulong *)*param_3;
      goto LAB_109950c44;
    }
LAB_109950c50:
    cVar6 = *(char *)((long)param_2 + 0x17);
    uVar12 = (ulong)cVar6;
    if ((long)uVar12 < 0) {
      uVar14 = param_2[1];
      if (param_2[1] != 0) goto LAB_109950c6c;
    }
    else {
      uVar14 = uVar12;
      if (cVar6 != '\0') {
LAB_109950c6c:
        puVar11 = (ulong *)*param_2;
        if (-1 < cVar6) {
          puVar11 = param_2;
        }
        if (*(char *)((long)puVar11 + (uVar14 - 1)) == '/') {
          uVar14 = param_2[1];
          if (-1 < cVar6) {
            uVar14 = uVar12;
          }
          uVar12 = param_3[1];
          if (-1 < cVar5) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12 + uVar14;
          if (uVar15 < 0x7ffffffffffffff8) {
            if (uVar15 < 0x17) {
              param_1[1] = 0;
              param_1[2] = 0;
              *param_1 = 0;
              *(char *)((long)param_1 + 0x17) = (char)uVar15;
              puVar8 = param_1;
            }
            else {
              puVar3 = (ulong *)0x19;
              if ((uVar15 | 7) != 0x17) {
                puVar3 = (ulong *)((uVar15 | 7) + 1);
              }
              puVar8 = puVar3;
              __Znwm();
              param_1[1] = uVar15;
              param_1[2] = (ulong)puVar3 | 0x8000000000000000;
              *param_1 = (ulong)puVar8;
            }
            if (uVar14 != 0) {
              _memmove(puVar8,puVar11,uVar14);
            }
            if (uVar12 != 0) {
              puVar11 = (ulong *)*param_3;
              if (-1 < cVar5) {
                puVar11 = param_3;
              }
              _memmove((long)puVar8 + uVar14,puVar11,uVar12);
            }
            *(undefined1 *)((long)puVar8 + uVar14 + uVar12) = 0;
            return;
          }
LAB_109950fdc:
          func_0x000104c4f6b8();
          goto LAB_109950fe0;
        }
        uStack_88 = CONCAT17(1,(undefined7)uStack_88);
        uStack_98 = (undefined8 *******)CONCAT62(uStack_98._2_6_,0x2f);
        uVar14 = param_2[1];
        if (-1 < cVar6) {
          uVar14 = uVar12;
        }
        if (uVar14 < 0x16) {
          if (uVar14 != 0) {
            uVar12 = uVar14;
            if (((ulong)&uStack_98 | 1) <= puVar11 || puVar11 < &uStack_98) {
              uVar12 = 0;
            }
            *(undefined1 *)((long)&uStack_98 + uVar14) = 0x2f;
            _memmove(&uStack_98,(long)puVar11 + uVar12,uVar14);
            uVar12 = uVar14 + 1;
            if (-1 < (long)uStack_88) {
              uStack_88 = CONCAT17((char)(uVar14 + 1),(undefined7)uStack_88);
              uVar12 = uStack_90;
            }
            uStack_90 = uVar12;
            puVar13 = (undefined1 *)((long)&uStack_98 + uVar14 + 1);
            goto LAB_109950e54;
          }
        }
        else {
          if (uVar14 + 0x800000000000000a < 0x800000000000001f) goto LAB_109950fdc;
          uVar12 = uVar14 + 1;
          uVar4 = 0x2c;
          if (0x2c < uVar12) {
            uVar4 = uVar14 + 1;
          }
          pppppppuVar1 = (undefined8 *******)((uVar4 | 7) + 1);
          pppppppuVar9 = pppppppuVar1;
          __Znwm();
          _memcpy();
          *(undefined1 *)((long)pppppppuVar9 + uVar14) = 0x2f;
          uStack_88 = (ulong)pppppppuVar1 | 0x8000000000000000;
          puVar13 = (undefined1 *)((long)pppppppuVar9 + uVar12);
          uStack_98 = pppppppuVar9;
          uStack_90 = uVar12;
LAB_109950e54:
          *puVar13 = 0;
        }
        uStack_70 = uStack_88;
        uStack_78 = uStack_90;
        pppppppuStack_80 = uStack_98;
        uVar12 = param_3[1];
        puVar11 = (ulong *)*param_3;
        if (-1 < cVar5) {
          uVar12 = uVar15;
          puVar11 = param_3;
        }
        uVar14 = (uStack_88 & 0x7fffffffffffffff) - 1;
        uVar15 = uStack_90;
        if (-1 < (long)uStack_88) {
          uVar14 = 0x16;
          uVar15 = uStack_88 >> 0x38;
        }
        if (uVar14 - uVar15 < uVar12) {
          uVar4 = uVar15 + uVar12;
          if (~uVar14 + 0x7ffffffffffffff7 < uVar4 - uVar14) {
LAB_109950fe0:
            func_0x000104c4f6b8();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x109950fe8);
            (*pcVar7)();
          }
          pppppppuVar1 = uStack_98;
          if (-1 < (long)uStack_88) {
            pppppppuVar1 = &pppppppuStack_80;
          }
          pppppppuVar9 = (undefined8 *******)0x7ffffffffffffff7;
          if (uVar14 < 0x3ffffffffffffff3) {
            uVar2 = uVar4;
            if (uVar4 <= uVar14 * 2) {
              uVar2 = uVar14 << 1;
            }
            pppppppuVar10 = (undefined8 *******)0x19;
            if ((uVar2 | 7) != 0x17) {
              pppppppuVar10 = (undefined8 *******)((uVar2 | 7) + 1);
            }
            pppppppuVar9 = (undefined8 *******)0x17;
            if (0x16 < uVar2) {
              pppppppuVar9 = pppppppuVar10;
            }
          }
          pppppppuVar10 = pppppppuVar9;
          __Znwm();
          if (uVar15 != 0) {
            _memmove(pppppppuVar10,pppppppuVar1,uVar15);
          }
          _memcpy((long)pppppppuVar10 + uVar15,puVar11,uVar12);
          if (uVar14 != 0x16) {
            __ZdlPv(pppppppuVar1);
          }
          uStack_70 = (ulong)pppppppuVar9 | 0x8000000000000000;
          puVar13 = (undefined1 *)((long)pppppppuVar10 + uVar4);
          pppppppuStack_80 = pppppppuVar10;
          uStack_78 = uVar4;
LAB_109950fa8:
          *puVar13 = 0;
        }
        else if (uVar12 != 0) {
          pppppppuVar1 = uStack_98;
          if (-1 < (long)uStack_88) {
            pppppppuVar1 = &pppppppuStack_80;
          }
          _memmove((long)pppppppuVar1 + uVar15,puVar11,uVar12);
          uVar15 = uVar15 + uVar12;
          uVar12 = uVar15;
          if (-1 < (long)uStack_70) {
            uStack_70 = CONCAT17((char)uVar15,(undefined7)uStack_70) & 0x7fffffffffffffff;
            uVar12 = uStack_78;
          }
          uStack_78 = uVar12;
          puVar13 = (undefined1 *)((long)pppppppuVar1 + uVar15);
          goto LAB_109950fa8;
        }
        param_1[1] = uStack_78;
        *param_1 = (ulong)pppppppuStack_80;
        goto LAB_109950fb8;
      }
    }
  }
  else {
    puVar11 = param_3;
    if (cVar5 == '\0') goto LAB_109950c50;
LAB_109950c44:
    if ((char)*puVar11 != '/') goto LAB_109950c50;
  }
  if (cVar5 < '\0') {
    uVar15 = *param_3;
    uVar12 = param_3[1];
    if (uVar12 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_1,uVar15,uVar12 + 1);
      return;
    }
    if (uVar12 < 0x7ffffffffffffff7) {
      uVar15 = 0x19;
      if ((uVar12 | 7) != 0x17) {
        uVar15 = (uVar12 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(uVar15);
    return;
  }
  uVar15 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar15;
  uStack_70 = param_3[2];
LAB_109950fb8:
  param_1[2] = uStack_70;
  return;
}



/* Entry: 109951000; end: 1099510ab;  */

bool FUN_109951000(long param_1)

{
  bool bVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = *(char *)(param_1 + 8) == '\x01';
  if (bVar1) {
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f58c3af,0x8e,2,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f58c447,0x2c);
    FUN_1099ab3b0(&uStack_80);
  }
  return bVar1;
}



/* Entry: 1099510ac; end: 1099519e7;  */

long * FUN_1099510ac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *******pppppppuVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *******pppppppuVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 ******ppppppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 ******ppppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  if (param_5 == 0) {
    lStack_e0 = 0;
    uStack_88 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    FUN_1099a9f0c(&lStack_e0,&UNK_10f58c3af,0xb2,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_d8 + 0x7540,&UNK_10f58c474,0x22);
    plVar9 = &lStack_e0;
    func_0x0001099ab7c0();
    if (plStack_138 != (long *)0x0) {
      plStack_130 = plStack_138;
      __ZdlPv();
    }
    if (puStack_170 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    if (uStack_110._7_1_ < '\0') {
      __ZdlPv(ppppppuStack_120);
    }
    FUN_1099519e8(param_1);
    __Unwind_Resume();
    lVar8 = *plVar9;
    *plVar9 = 0;
    if (lVar8 != 0) {
      FUN_1099733ec();
      __ZdlPv();
    }
    return plVar9;
  }
  uStack_d0 = uStack_d0 & 0xffffffffffff0000;
  uStack_c8 = *(undefined8 *)(param_4 + 0x30);
  uStack_c0 = 0;
  uStack_100 = 0x3f847ae147ae147b;
  uStack_f8 = 10;
  uStack_e8 = 0x4000000000000000;
  uStack_f0 = 0x3d719799812dea11;
  lStack_d8 = 1;
  lStack_e0 = 1;
  lVar8 = 0x108;
  uStack_108 = param_2;
  __Znwm();
  FUN_109973220();
  *param_1 = lVar8;
  puVar13 = *(undefined8 **)(param_4 + 0x78);
  puVar26 = (undefined8 *)puVar13[1];
  for (puVar19 = (undefined8 *)*puVar13; puVar19 != puVar26; puVar19 = puVar19 + 1) {
    puVar22 = (undefined8 *)*puVar19;
    FUN_109974838(lVar8,*puVar22,*(undefined4 *)(puVar22 + 1),puVar22[2]);
    if ((*(byte *)((long)puVar22 + 0xc) & 1) == 0) {
      plVar9 = (long *)puVar22[2];
      if (plVar9 == (long *)0x0) {
        iVar7 = *(int *)(puVar22 + 1);
      }
      else {
        (**(code **)(*plVar9 + 0x18))();
        iVar7 = (int)plVar9;
      }
      if (iVar7 == 0) goto LAB_10995119c;
    }
    else {
LAB_10995119c:
      FUN_109974964(lVar8,*puVar22);
    }
    if (0 < *(int *)(puVar22 + 1)) {
      lVar23 = 0;
      do {
        if (puVar22[8] == 0) {
          uVar27 = 0x7fefffffffffffff;
        }
        else {
          uVar27 = *(undefined8 *)(puVar22[8] + lVar23 * 8);
        }
        FUN_109974d04(uVar27,lVar8,*puVar22,lVar23);
        if (puVar22[9] == 0) {
          uVar27 = 0xffefffffffffffff;
        }
        else {
          uVar27 = *(undefined8 *)(puVar22[9] + lVar23 * 8);
        }
        lVar8 = *param_1;
        FUN_109974b38(uVar27,lVar8,*puVar22,lVar23);
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(puVar22 + 1));
    }
  }
  lVar23 = puVar13[3];
  if (puVar13[4] != lVar23) {
    uVar18 = 0;
    do {
      plVar9 = *(long **)(lVar23 + uVar18 * 8);
      FUN_109988e2c(&ppppppuStack_120,&UNK_10f58c497);
      plStack_138 = (long *)0x0;
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      uVar14 = *(long *)(*plVar9 + 0x10) - *(long *)(*plVar9 + 8);
      uVar16 = (long)(uVar14 * 0x40000000) >> 0x20;
      if ((uVar14 >> 2 & 0xffffffff) == 0) {
        puStack_170 = (undefined8 *)0x0;
        puStack_168 = (undefined8 *)0x0;
      }
      else {
        if (uVar16 >> 0x3d != 0) {
          func_0x000109951a9c();
          goto LAB_1099518f0;
        }
        puStack_170 = (undefined8 *)(uVar16 << 3);
        __Znwm();
        puStack_168 = puStack_170 + uVar16;
        uVar14 = *(long *)(*plVar9 + 0x10) - *(long *)(*plVar9 + 8);
        uVar16 = (long)(uVar14 * 0x40000000) >> 0x20;
      }
      if (uVar16 != 0) {
        if (uVar16 >> 0x3d != 0) {
          func_0x000109951ab0();
          goto LAB_1099518f0;
        }
        plVar10 = (long *)(uVar16 << 3);
        __Znwm();
        plStack_128 = plVar10 + uVar16;
        uVar14 = *(long *)(*plVar9 + 0x10) - *(long *)(*plVar9 + 8);
        plStack_138 = plVar10;
        plStack_130 = plVar10;
      }
      puStack_160 = puStack_170;
      if (0 < (int)(uVar14 >> 2)) {
        lVar8 = 0;
        do {
          puVar19 = *(undefined8 **)(plVar9[2] + lVar8 * 8);
          uVar27 = *puVar19;
          if (puStack_160 < puStack_168) {
            *puStack_160 = uVar27;
            puVar26 = puStack_170;
          }
          else {
            uVar16 = ((long)puStack_160 - (long)puStack_170 >> 3) + 1;
            if (uVar16 >> 0x3d != 0) {
              func_0x000109951a9c();
              goto LAB_1099518f0;
            }
            uVar14 = (long)puStack_168 - (long)puStack_170 >> 2;
            if (uVar14 <= uVar16) {
              uVar14 = uVar16;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_168 - (long)puStack_170)) {
              uVar14 = 0x1fffffffffffffff;
            }
            if (uVar14 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_1099518f0;
            }
            puVar26 = (undefined8 *)(uVar14 << 3);
            __Znwm();
            puStack_160 = (undefined8 *)((long)puVar26 + ((long)puStack_160 - (long)puStack_170));
            puStack_168 = puVar26 + uVar14;
            *puStack_160 = uVar27;
            _memcpy();
            if (puStack_170 != (undefined8 *)0x0) {
              __ZdlPv(puStack_170);
            }
          }
          puStack_170 = puVar26;
          puStack_160 = puStack_160 + 1;
          FUN_109988e8c(&ppppppuStack_120,&DAT_10f2cf7ad);
          lVar23 = (*(long *)(*plVar9 + 0x10) - *(long *)(*plVar9 + 8)) * 0x40000000 + -0x100000000
                   >> 0x20;
          puVar3 = &DAT_10f68f19e;
          if (lVar23 <= lVar8) {
            puVar3 = &DAT_10f62a9ea;
          }
          uVar16 = 1;
          if (lVar8 < lVar23) {
            uVar16 = 2;
          }
          uVar14 = (uStack_110 & 0x7fffffffffffffff) - 1;
          uVar17 = uStack_118;
          if (-1 < (long)uStack_110) {
            uVar14 = 0x16;
            uVar17 = uStack_110 >> 0x38;
          }
          if (uVar14 - uVar17 < uVar16) {
            uVar1 = uVar16 + uVar17;
            if (0x7ffffffffffffff6 - uVar14 < uVar1 - uVar14) {
              func_0x000104c4f6b8();
              goto LAB_1099518f0;
            }
            pppppppuVar4 = (undefined8 *******)ppppppuStack_120;
            if (-1 < (long)uStack_110) {
              pppppppuVar4 = &ppppppuStack_120;
            }
            if (uVar14 < 0x3ffffffffffffff3) {
              uVar5 = uVar1;
              if (uVar1 <= uVar14 * 2) {
                uVar5 = uVar14 << 1;
              }
              pppppppuVar11 = (undefined8 *******)0x19;
              if ((uVar5 | 7) != 0x17) {
                pppppppuVar11 = (undefined8 *******)((uVar5 | 7) + 1);
              }
              pppppppuVar24 = (undefined8 *******)0x17;
              if (0x16 < uVar5) {
                pppppppuVar24 = pppppppuVar11;
              }
            }
            else {
              pppppppuVar24 = (undefined8 *******)0x7ffffffffffffff7;
            }
            pppppppuVar11 = pppppppuVar24;
            __Znwm();
            if (uVar17 != 0) {
              _memmove(pppppppuVar11,pppppppuVar4,uVar17);
            }
            _memcpy((long)pppppppuVar11 + uVar17,puVar3,uVar16);
            if (uVar14 != 0x16) {
              __ZdlPv(pppppppuVar4);
            }
            uStack_110 = (ulong)pppppppuVar24 | 0x8000000000000000;
            puVar15 = (undefined1 *)((long)pppppppuVar11 + uVar1);
            ppppppuStack_120 = pppppppuVar11;
            uStack_118 = uVar1;
          }
          else {
            pppppppuVar4 = (undefined8 *******)ppppppuStack_120;
            if (-1 < (long)uStack_110) {
              pppppppuVar4 = &ppppppuStack_120;
            }
            _memcpy((long)pppppppuVar4 + uVar17,puVar3,uVar16);
            uVar16 = uVar16 + uVar17;
            uVar14 = uVar16;
            if (-1 < (long)uStack_110) {
              uStack_110 = CONCAT17((char)uVar16,(undefined7)uStack_110) & 0x7fffffffffffffff;
              uVar14 = uStack_118;
            }
            uStack_118 = uVar14;
            puVar15 = (undefined1 *)((long)pppppppuVar4 + uVar16);
          }
          *puVar15 = 0;
          lVar23 = param_4;
          FUN_109974a50(param_4,*puVar19);
          plVar10 = plStack_138;
          if (plStack_130 < plStack_128) {
            plVar20 = plStack_130 + 1;
            *plStack_130 = lVar23;
          }
          else {
            lVar21 = (long)plStack_130 - (long)plStack_138;
            uVar16 = (lVar21 >> 3) + 1;
            if (uVar16 >> 0x3d != 0) {
              func_0x000109951ab0();
              goto LAB_1099518f0;
            }
            uVar14 = (long)plStack_128 - (long)plStack_138 >> 2;
            if (uVar14 <= uVar16) {
              uVar14 = uVar16;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_128 - (long)plStack_138)) {
              uVar14 = 0x1fffffffffffffff;
            }
            if (uVar14 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_1099518f0;
            }
            plVar12 = (long *)(uVar14 << 3);
            __Znwm();
            plVar2 = (long *)((long)plVar12 + lVar21);
            plVar20 = plVar2 + 1;
            *plVar2 = lVar23;
            _memcpy();
            plStack_138 = plVar12;
            plStack_128 = plVar12 + uVar14;
            if (plVar10 != (long *)0x0) {
              plStack_130 = plVar20;
              __ZdlPv(plVar10);
            }
          }
          lVar8 = lVar8 + 1;
          plStack_130 = plVar20;
        } while (lVar8 < (int)((ulong)(*(long *)(*plVar9 + 0x10) - *(long *)(*plVar9 + 8)) >> 2));
      }
      puVar19 = (undefined8 *)0x88;
      __Znwm();
      puVar26 = (undefined8 *)*plVar9;
      if ((long)uStack_110 < 0) {
        func_0x000107c3192c(&ppppppuStack_150,ppppppuStack_120,uStack_118);
      }
      else {
        uStack_148 = uStack_118;
        ppppppuStack_150 = ppppppuStack_120;
        uStack_140 = uStack_110;
      }
      puVar19[1] = 0;
      *(undefined4 *)(puVar19 + 4) = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *puVar19 = &PTR_FUN_110b1e390;
      puVar19[5] = puVar26;
      FUN_109997e54(puVar19 + 6,puVar26,&plStack_138,&uStack_108);
      uVar16 = uStack_140;
      puVar19[0xc] = param_3;
      puVar19[0xe] = uStack_148;
      puVar19[0xd] = ppppppuStack_150;
      ppppppuStack_150 = (undefined8 *******)0x0;
      uStack_148 = 0;
      uStack_140 = 0;
      puVar19[0xf] = uVar16;
      puVar19[0x10] = param_5;
      if (puVar19 != puVar26) {
        lVar23 = puVar26[1];
        lVar21 = puVar26[2];
        uVar14 = lVar21 - lVar23;
        uVar16 = puVar19[3];
        lVar8 = puVar19[1];
        if (uVar16 - lVar8 < uVar14) {
          if (lVar8 != 0) {
            puVar19[2] = lVar8;
            __ZdlPv(lVar8);
            uVar16 = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar19[3] = 0;
          }
          uVar17 = (long)uVar14 >> 2;
          if (uVar17 >> 0x3e == 0) {
            uVar1 = (long)uVar16 >> 1;
            if ((ulong)((long)uVar16 >> 1) <= uVar17) {
              uVar1 = uVar17;
            }
            if (0x7ffffffffffffffb < uVar16) {
              uVar1 = 0x3fffffffffffffff;
            }
            if (uVar1 >> 0x3e == 0) {
              lVar8 = uVar1 << 2;
              __Znwm();
              puVar19[1] = lVar8;
              puVar19[2] = lVar8;
              puVar19[3] = lVar8 + uVar1 * 4;
              if (lVar21 != lVar23) {
                _memcpy(lVar8,lVar23,uVar14);
              }
              goto LAB_109951798;
            }
          }
          FUN_10923f788();
LAB_1099518f0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1099518f4);
          (*pcVar6)();
        }
        lVar25 = puVar19[2];
        uVar16 = lVar25 - lVar8;
        if (uVar16 < uVar14) {
          if (lVar25 != lVar8) {
            _memmove(lVar8,lVar23,uVar16);
            lVar25 = puVar19[2];
          }
          lVar21 = lVar21 - (lVar23 + uVar16);
          if (lVar21 != 0) {
            _memmove(lVar25,lVar23 + uVar16,lVar21);
          }
          lVar8 = lVar25 + lVar21;
        }
        else {
          if (lVar21 != lVar23) {
            _memmove(lVar8,lVar23,uVar14);
          }
LAB_109951798:
          lVar8 = lVar8 + uVar14;
        }
        puVar19[2] = lVar8;
      }
      *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar26 + 4);
      if ((long)uStack_140 < 0) {
        __ZdlPv(ppppppuStack_150);
      }
      FUN_109973894(*param_1,puVar19,plVar9[1],puStack_170,
                    (ulong)((long)puStack_160 - (long)puStack_170) >> 3);
      if (plStack_138 != (long *)0x0) {
        plStack_130 = plStack_138;
        __ZdlPv();
      }
      if (puStack_170 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      if ((long)uStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      uVar18 = uVar18 + 1;
      lVar23 = puVar13[3];
    } while (uVar18 < (ulong)(puVar13[4] - lVar23 >> 3));
    lVar8 = *param_1;
  }
  plVar9 = *(long **)(lVar8 + 0x78);
  func_0x0001099781ac(plVar9);
  return plVar9;
}



/* Entry: 1099519e8; end: 109951a9b;  */

long * FUN_1099519e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1099733ec();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109951a9c; end: 109951ac3;  */

undefined8 * FUN_109951a9c(void)

{
  undefined8 *puVar1;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(char *)((long)puVar1 + 0x7f) < '\0') {
    __ZdlPv(puVar1[0xd]);
  }
  FUN_109998170(puVar1 + 6);
  *puVar1 = &PTR_DAT_110b1dad0;
  if (puVar1[1] != 0) {
    puVar1[2] = puVar1[1];
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 109951ac4; end: 109951b6b;  */

undefined8 * FUN_109951ac4(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  FUN_109998170(param_1 + 6);
  *param_1 = &PTR_DAT_110b1dad0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109951b6c; end: 10995249b;  */

/* WARNING: Removing unreachable block (ram,0x000109952088) */

long * FUN_109951b6c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  long *plVar25;
  undefined8 uVar26;
  ulong uStack_168;
  undefined8 ***pppuStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  byte bStack_129;
  byte abStack_128 [8];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if (param_4 == 0) {
    plVar25 = *(long **)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000109951d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar25 + 0x10))(plVar25,param_2,param_3);
    return plVar25;
  }
  pppuStack_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  uStack_100 = 0;
  uStack_e8 = 0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  uVar7 = param_1 + 0x30;
  FUN_1099981f4(*(undefined8 *)(param_1 + 0x60),uVar7,param_2,abStack_128);
  plVar25 = (long *)(ulong)abStack_128[0];
  if (abStack_128[0] == 0) goto LAB_1099522e8;
  lVar14 = *(long *)(param_1 + 0x28);
  lVar15 = (long)*(int *)(lVar14 + 0x20);
  puVar17 = puStack_120;
  if (0 < *(int *)(lVar14 + 0x20)) {
    do {
      *param_3 = *puVar17;
      lVar15 = lVar15 + -1;
      puVar17 = puVar17 + 1;
      param_3 = param_3 + 1;
    } while (lVar15 != 0);
  }
  if (*(long *)(lVar14 + 0x10) != *(long *)(lVar14 + 8)) {
    uVar16 = 0;
    do {
      puVar17 = *(undefined8 **)(param_4 + uVar16 * 8);
      if (puVar17 != (undefined8 *)0x0) {
        plVar18 = puStack_110 + uVar16 * 3;
        puVar19 = (undefined8 *)*plVar18;
        uVar21 = plVar18[2] * plVar18[1];
        uVar20 = (ulong)puVar17 >> 3 & 1;
        if ((long)uVar21 <= (long)uVar20) {
          uVar20 = uVar21;
        }
        if (((ulong)puVar17 & 7) != 0) {
          uVar20 = uVar21;
        }
        puVar12 = puVar17;
        puVar13 = puVar19;
        uVar11 = uVar20;
        if (0 < (long)uVar20) {
          do {
            *puVar12 = *puVar13;
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar11 != 0);
        }
        lVar22 = uVar21 - uVar20;
        lVar15 = (lVar22 - (lVar22 >> 0x3f) & 0xfffffffffffffffeU) + uVar20;
        if (1 < lVar22) {
          puVar12 = puVar19 + uVar20;
          uVar11 = uVar20;
          puVar13 = puVar17 + uVar20;
          do {
            uVar26 = *puVar12;
            puVar13[1] = puVar12[1];
            *puVar13 = uVar26;
            uVar11 = uVar11 + 2;
            puVar12 = puVar12 + 2;
            puVar13 = puVar13 + 2;
          } while ((long)uVar11 < lVar15);
        }
        if (lVar15 < (long)uVar21) {
          lVar15 = lVar22 % 2;
          puVar17 = puVar17 + uVar20 + (lVar22 / 2) * 2;
          puVar19 = puVar19 + uVar20 + (lVar22 / 2) * 2;
          do {
            *puVar17 = *puVar19;
            lVar15 = lVar15 + -1;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          } while (lVar15 != 0);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 2));
  }
  if ((uVar7 & 1) != 0) goto LAB_1099522e8;
  bVar3 = *(byte *)(param_1 + 0x7f);
  uVar7 = *(ulong *)(param_1 + 0x70);
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  uVar16 = uVar7 + 0x37;
  uStack_168 = 0x7ffffffffffffff7;
  if (0x7ffffffffffffff7 < uVar16) {
    func_0x000104c4f6b8();
    goto LAB_109952418;
  }
  if (uVar16 < 0x17) {
    uStack_158 = 0x6420726f72724520;
    pppuStack_160 = (undefined8 ****)0x746e656964617247;
    uStack_148 = 0x692061727478450a;
    uStack_150 = 0x2164657463657465;
    uStack_138 = 0x65722073696874;
    pppuStack_140 = (undefined8 ****)0x20726f66206f666e;
    uStack_131 = 0x73;
    uStack_130 = 0x203a6c61756469;
    pbVar24 = &bStack_129;
LAB_109951dc8:
    plVar25 = (long *)*(long *)(param_1 + 0x68);
    if (-1 < (char)bVar3) {
      plVar25 = (long *)(param_1 + 0x68);
    }
    _memmove(pbVar24,plVar25,uVar7);
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar16 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar16 | 7) + 1);
    }
    ppppuVar8 = ppppuVar1;
    __Znwm();
    uStack_150 = (ulong)ppppuVar1 | 0x8000000000000000;
    ppppuVar8[1] = (undefined8 ***)0x6420726f72724520;
    *ppppuVar8 = (undefined8 ***)0x746e656964617247;
    ppppuVar8[3] = (undefined8 ***)0x692061727478450a;
    ppppuVar8[2] = (undefined8 ***)0x2164657463657465;
    ppppuVar8[5] = (undefined8 ***)0x7365722073696874;
    ppppuVar8[4] = (undefined8 ***)0x20726f66206f666e;
    *(undefined8 *)((long)ppppuVar8 + 0x2f) = 0x203a6c6175646973;
    pbVar24 = (byte *)((long)ppppuVar8 + 0x37);
    pppuStack_160 = ppppuVar8;
    uStack_158 = uVar16;
    if (uVar7 != 0) goto LAB_109951dc8;
  }
  pbVar24[uVar7] = 0;
  uVar16 = (uStack_150 & 0x7fffffffffffffff) - 1;
  uVar7 = uStack_158;
  if (-1 < (long)uStack_150) {
    uVar16 = 0x16;
    uVar7 = uStack_150 >> 0x38;
  }
  if (uVar16 == uVar7) {
    if (uVar16 == 0x7ffffffffffffff6) {
      func_0x000104c4f6b8();
      goto LAB_109952418;
    }
    uVar7 = uVar16 + 1;
    ppppuVar1 = (undefined8 ****)pppuStack_160;
    if (-1 < (long)uStack_150) {
      ppppuVar1 = &pppuStack_160;
    }
    ppppuVar8 = (undefined8 ****)0x7ffffffffffffff7;
    if (uVar16 < 0x3ffffffffffffff3) {
      uVar20 = uVar7;
      if (uVar7 <= uVar16 * 2) {
        uVar20 = uVar16 << 1;
      }
      ppppuVar9 = (undefined8 ****)0x19;
      if ((uVar20 | 7) != 0x17) {
        ppppuVar9 = (undefined8 ****)((uVar20 | 7) + 1);
      }
      ppppuVar8 = (undefined8 ****)0x17;
      if (0x16 < uVar20) {
        ppppuVar8 = ppppuVar9;
      }
    }
    ppppuVar9 = ppppuVar8;
    __Znwm();
    if (uVar16 == 0) {
      *(undefined1 *)ppppuVar9 = 10;
LAB_109951ef4:
      __ZdlPv(ppppuVar1);
    }
    else {
      _memmove(ppppuVar9,ppppuVar1,uVar16);
      *(undefined1 *)((long)ppppuVar9 + uVar16) = 10;
      if (uVar16 != 0x16) goto LAB_109951ef4;
    }
    uStack_150 = (ulong)ppppuVar8 | 0x8000000000000000;
    puVar23 = (undefined1 *)((long)ppppuVar9 + uVar7);
    pppuStack_160 = ppppuVar9;
    uStack_158 = uVar7;
  }
  else {
    ppppuVar1 = (undefined8 ****)pppuStack_160;
    if (-1 < (long)uStack_150) {
      ppppuVar1 = &pppuStack_160;
    }
    *(undefined1 *)((long)ppppuVar1 + uVar7) = 10;
    uVar7 = uVar7 + 1;
    uVar16 = uVar7;
    if (-1 < (long)uStack_150) {
      uStack_150 = CONCAT17((char)uVar7,(undefined7)uStack_150) & 0x7fffffffffffffff;
      uVar16 = uStack_158;
    }
    uStack_158 = uVar16;
    puVar23 = (undefined1 *)((long)ppppuVar1 + uVar7);
  }
  *puVar23 = 0;
  uVar20 = uStack_150;
  uVar16 = uStack_158;
  ppppuVar1 = (undefined8 ****)pppuStack_160;
  uStack_80 = uStack_150;
  uStack_88 = uStack_158;
  pppuStack_90 = pppuStack_160;
  uStack_158 = 0;
  uStack_150 = 0;
  pppuStack_160 = (undefined8 ****)0x0;
  uVar7 = uStack_a0;
  ppppuVar8 = (undefined8 ****)pppuStack_a8;
  if (-1 < (long)uStack_98) {
    uVar7 = uStack_98 >> 0x38;
    ppppuVar8 = &pppuStack_a8;
  }
  uVar21 = (uVar20 & 0x7fffffffffffffff) - 1;
  uVar11 = uVar16;
  if (-1 < (long)uVar20) {
    uVar21 = 0x16;
    uVar11 = uVar20 >> 0x38;
  }
  if (uVar21 - uVar11 < uVar7) {
    uVar16 = uVar11 + uVar7;
    if (~uVar21 + 0x7ffffffffffffff7 < uVar16 - uVar21) {
      func_0x000104c4f6b8();
      goto LAB_109952418;
    }
    if (-1 < (long)uVar20) {
      ppppuVar1 = &pppuStack_90;
    }
    ppppuVar9 = (undefined8 ****)0x7ffffffffffffff7;
    if (uVar21 < 0x3ffffffffffffff3) {
      uVar20 = uVar16;
      if (uVar16 <= uVar21 * 2) {
        uVar20 = uVar21 << 1;
      }
      ppppuVar10 = (undefined8 ****)0x19;
      if ((uVar20 | 7) != 0x17) {
        ppppuVar10 = (undefined8 ****)((uVar20 | 7) + 1);
      }
      ppppuVar9 = (undefined8 ****)0x17;
      if (0x16 < uVar20) {
        ppppuVar9 = ppppuVar10;
      }
    }
    ppppuVar10 = ppppuVar9;
    __Znwm();
    if (uVar11 != 0) {
      _memmove(ppppuVar10,ppppuVar1,uVar11);
    }
    _memcpy((undefined1 *)((long)ppppuVar10 + uVar11),ppppuVar8,uVar7);
    if (uVar21 != 0x16) {
      __ZdlPv(ppppuVar1);
    }
    uStack_80 = (ulong)ppppuVar9 | 0x8000000000000000;
    puVar23 = (undefined1 *)((long)ppppuVar10 + uVar16);
    pppuStack_90 = ppppuVar10;
    uStack_88 = uVar16;
LAB_109952090:
    *puVar23 = 0;
    uStack_138 = (undefined7)uStack_88;
    uStack_131 = (undefined1)(uStack_88 >> 0x38);
    pppuStack_140 = pppuStack_90;
    uStack_130 = (undefined7)uStack_80;
    bStack_129 = (byte)(uStack_80 >> 0x38);
    pppuStack_90 = (undefined8 ****)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    if ((long)uStack_150 < 0) {
      __ZdlPv(pppuStack_160);
    }
  }
  else {
    if (uVar7 != 0) {
      if (-1 < (long)uVar20) {
        ppppuVar1 = &pppuStack_90;
      }
      _memmove((undefined1 *)((long)ppppuVar1 + uVar11),ppppuVar8,uVar7);
      uStack_80 = CONCAT17((char)(uVar11 + uVar7),(undefined7)uStack_80) & 0x7fffffffffffffff;
      puVar23 = (undefined1 *)((long)ppppuVar1 + uVar11 + uVar7);
      goto LAB_109952090;
    }
    uStack_138 = (undefined7)uVar16;
    uStack_131 = (undefined1)(uVar16 >> 0x38);
    pppuStack_140 = ppppuVar1;
    uStack_130 = (undefined7)uVar20;
    bStack_129 = (byte)(uVar20 >> 0x38);
  }
  lVar15 = *(long *)(param_1 + 0x80);
  __ZNSt3__15mutex4lockEv(lVar15 + 0x28);
  bVar3 = bStack_129;
  *(undefined1 *)(lVar15 + 8) = 1;
  uVar7 = CONCAT17(uStack_131,uStack_138);
  if (-1 < (char)bStack_129) {
    uVar7 = (ulong)bStack_129;
  }
  uVar16 = uVar7 + 1;
  if (0x7ffffffffffffff7 < uVar16) {
    func_0x000104c4f6b8();
    goto LAB_109952418;
  }
  if (uVar16 < 0x17) {
    uStack_88 = 0;
    uStack_80 = uVar16 << 0x38;
    puVar23 = (undefined1 *)((ulong)&pppuStack_90 | 1);
    pppuStack_90 = (undefined8 ****)0xa;
    if (uVar7 != 0) goto LAB_109952158;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar16 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar16 | 7) + 1);
    }
    ppppuVar8 = ppppuVar1;
    __Znwm();
    uStack_80 = (ulong)ppppuVar1 | 0x8000000000000000;
    puVar23 = (undefined1 *)((long)ppppuVar8 + 1);
    *(undefined1 *)ppppuVar8 = 10;
    pppuStack_90 = ppppuVar8;
    uStack_88 = uVar16;
LAB_109952158:
    ppppuVar1 = (undefined8 ****)pppuStack_140;
    if (-1 < (char)bVar3) {
      ppppuVar1 = &pppuStack_140;
    }
    _memmove(puVar23,ppppuVar1,uVar7);
  }
  uVar16 = uStack_80;
  pppuVar5 = pppuStack_90;
  puVar23[uVar7] = 0;
  uVar7 = uStack_88;
  ppppuVar1 = (undefined8 ****)pppuStack_90;
  if (-1 < (long)uStack_80) {
    uVar7 = uStack_80 >> 0x38;
    ppppuVar1 = &pppuStack_90;
  }
  cVar4 = *(char *)(lVar15 + 0x27);
  lVar14 = (long)cVar4;
  if (lVar14 < 0) {
    lVar14 = *(long *)(lVar15 + 0x18);
    uVar20 = (*(ulong *)(lVar15 + 0x20) & 0x7fffffffffffffff) - 1;
  }
  else {
    uVar20 = 0x16;
  }
  plVar25 = (long *)(lVar15 + 0x10);
  if (uVar20 - lVar14 < uVar7) {
    uVar21 = lVar14 + uVar7;
    if (~uVar20 + 0x7ffffffffffffff7 < uVar21 - uVar20) {
      func_0x000104c4f6b8();
LAB_109952418:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10995241c);
      (*pcVar6)();
    }
    if (cVar4 < '\0') {
      plVar25 = (long *)*plVar25;
    }
    if (uVar20 < 0x3ffffffffffffff3) {
      uVar11 = uVar21;
      if (uVar21 <= uVar20 * 2) {
        uVar11 = uVar20 << 1;
      }
      uVar2 = 0x19;
      if ((uVar11 | 7) != 0x17) {
        uVar2 = (uVar11 | 7) + 1;
      }
      uStack_168 = 0x17;
      if (0x16 < uVar11) {
        uStack_168 = uVar2;
      }
    }
    uVar11 = uStack_168;
    __Znwm();
    if (lVar14 != 0) {
      _memmove(uVar11,plVar25,lVar14);
    }
    _memcpy(uVar11 + lVar14,ppppuVar1,uVar7);
    if (uVar20 != 0x16) {
      __ZdlPv(plVar25);
    }
    *(ulong *)(lVar15 + 0x18) = uVar21;
    *(ulong *)(lVar15 + 0x20) = uStack_168 | 0x8000000000000000;
    *(ulong *)(lVar15 + 0x10) = uVar11;
    puVar23 = (undefined1 *)(uVar11 + uVar21);
LAB_1099522bc:
    *puVar23 = 0;
  }
  else if (uVar7 != 0) {
    if (cVar4 < '\0') {
      plVar25 = (long *)*plVar25;
    }
    _memmove((long)plVar25 + lVar14,ppppuVar1,uVar7);
    lVar14 = lVar14 + uVar7;
    if (*(char *)(lVar15 + 0x27) < '\0') {
      *(long *)(lVar15 + 0x18) = lVar14;
    }
    else {
      *(byte *)(lVar15 + 0x27) = (byte)lVar14 & 0x7f;
    }
    puVar23 = (undefined1 *)((long)plVar25 + lVar14);
    goto LAB_1099522bc;
  }
  if ((long)uVar16 < 0) {
    __ZdlPv(pppuVar5);
  }
  __ZNSt3__15mutex6unlockEv(lVar15 + 0x28);
  if ((char)bStack_129 < '\0') {
    __ZdlPv(pppuStack_140);
  }
  plVar25 = (long *)(ulong)(uint)abStack_128[0];
LAB_1099522e8:
  if ((long)uStack_98 < 0) {
    __ZdlPv(pppuStack_a8);
  }
  puVar19 = puStack_c8;
  puVar17 = puStack_c0;
  if (puStack_c8 != (undefined8 *)0x0) {
    while (puVar17 != puVar19) {
      _free(puVar17[-3]);
      puVar17 = puVar17 + -3;
    }
    puStack_c0 = puVar19;
    __ZdlPv(puStack_c8);
  }
  puVar19 = puStack_e0;
  puVar17 = puStack_d8;
  if (puStack_e0 != (undefined8 *)0x0) {
    while (puVar17 != puVar19) {
      _free(puVar17[-3]);
      puVar17 = puVar17 + -3;
    }
    puStack_d8 = puVar19;
    __ZdlPv(puStack_e0);
  }
  puVar19 = puStack_f8;
  puVar17 = puStack_f0;
  if (puStack_f8 != (undefined8 *)0x0) {
    while (puVar17 != puVar19) {
      _free(puVar17[-3]);
      puVar17 = puVar17 + -3;
    }
    puStack_f0 = puVar19;
    __ZdlPv(puStack_f8);
  }
  puVar19 = puStack_110;
  puVar17 = puStack_108;
  if (puStack_110 != (undefined8 *)0x0) {
    while (puVar17 != puVar19) {
      _free(puVar17[-3]);
      puVar17 = puVar17 + -3;
    }
    puStack_108 = puVar19;
    __ZdlPv(puStack_110);
  }
  _free(puStack_120);
  return plVar25;
}



/* Entry: 10995249c; end: 1099525ab;  */

long FUN_10995249c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x80));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -3;
        _free(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x68) = puVar2;
    __ZdlPv(puVar1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -3;
        _free(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    __ZdlPv(puVar1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -3;
        _free(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x30);
    }
    *(undefined8 **)(param_1 + 0x38) = puVar2;
    __ZdlPv(puVar1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -3;
        _free(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    __ZdlPv(puVar1);
  }
  _free(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1099525ac; end: 109952f53;  */

void FUN_1099525ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  int *piVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_a8;
  double *pdStack_a0;
  long lStack_98;
  long lStack_90;
  double *pdStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_10996c13c(&lStack_d0,*(undefined8 *)(param_1 + 8));
    plVar5 = *(long **)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lStack_d0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (*(long *)(param_1 + 0x28) == 0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(&lStack_d0);
    lVar9 = lStack_d0;
    lStack_d0 = 0;
    lVar17 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar9;
    if (lVar17 != 0) {
      plVar5 = *(long **)(lVar17 + 0x20);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      if (plVar5 != (long *)0x0) {
        lVar9 = plVar5[3];
        if (lVar9 != 0) {
          lVar15 = plVar5[4];
          lVar12 = lVar9;
          if (lVar15 != lVar9) {
            do {
              if (*(long *)(lVar15 + -0x18) != 0) {
                *(long *)(lVar15 + -0x10) = *(long *)(lVar15 + -0x18);
                __ZdlPv();
              }
              lVar15 = lVar15 + -0x20;
            } while (lVar15 != lVar9);
            lVar12 = plVar5[3];
          }
          plVar5[4] = lVar9;
          __ZdlPv(lVar12);
        }
        if (*plVar5 != 0) {
          plVar5[1] = *plVar5;
          __ZdlPv();
        }
        __ZdlPv(plVar5);
      }
      lVar9 = *(long *)(lVar17 + 0x18);
      *(undefined8 *)(lVar17 + 0x18) = 0;
      if (lVar9 != 0) {
        __ZdaPv();
      }
      __ZdlPv(lVar17);
      lVar9 = lStack_d0;
      lStack_d0 = 0;
      if (lVar9 != 0) {
        plVar5 = *(long **)(lVar9 + 0x20);
        *(undefined8 *)(lVar9 + 0x20) = 0;
        if (plVar5 != (long *)0x0) {
          lVar17 = plVar5[3];
          if (lVar17 != 0) {
            lVar15 = plVar5[4];
            lVar12 = lVar17;
            if (lVar15 != lVar17) {
              do {
                if (*(long *)(lVar15 + -0x18) != 0) {
                  *(long *)(lVar15 + -0x10) = *(long *)(lVar15 + -0x18);
                  __ZdlPv();
                }
                lVar15 = lVar15 + -0x20;
              } while (lVar15 != lVar17);
              lVar12 = plVar5[3];
            }
            plVar5[4] = lVar17;
            __ZdlPv(lVar12);
          }
          if (*plVar5 != 0) {
            plVar5[1] = *plVar5;
            __ZdlPv();
          }
          __ZdlPv(plVar5);
        }
        lVar17 = *(long *)(lVar9 + 0x18);
        *(undefined8 *)(lVar9 + 0x18) = 0;
        if (lVar17 != 0) {
          __ZdaPv();
        }
        __ZdlPv(lVar9);
      }
    }
    if (*(int *)(*(long *)(param_1 + 8) + 4) == 1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(&lStack_d0);
      lVar9 = lStack_d0;
      lStack_d0 = 0;
      lVar17 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar9;
      if (lVar17 != 0) {
        plVar5 = *(long **)(lVar17 + 0x20);
        *(undefined8 *)(lVar17 + 0x20) = 0;
        if (plVar5 != (long *)0x0) {
          lVar9 = plVar5[3];
          if (lVar9 != 0) {
            lVar15 = plVar5[4];
            lVar12 = lVar9;
            if (lVar15 != lVar9) {
              do {
                if (*(long *)(lVar15 + -0x18) != 0) {
                  *(long *)(lVar15 + -0x10) = *(long *)(lVar15 + -0x18);
                  __ZdlPv();
                }
                lVar15 = lVar15 + -0x20;
              } while (lVar15 != lVar9);
              lVar12 = plVar5[3];
            }
            plVar5[4] = lVar9;
            __ZdlPv(lVar12);
          }
          if (*plVar5 != 0) {
            plVar5[1] = *plVar5;
            __ZdlPv();
          }
          __ZdlPv(plVar5);
        }
        lVar9 = *(long *)(lVar17 + 0x18);
        *(undefined8 *)(lVar17 + 0x18) = 0;
        if (lVar9 != 0) {
          __ZdaPv();
        }
        __ZdlPv(lVar17);
        lVar9 = lStack_d0;
        lStack_d0 = 0;
        if (lVar9 != 0) {
          plVar5 = *(long **)(lVar9 + 0x20);
          *(undefined8 *)(lVar9 + 0x20) = 0;
          if (plVar5 != (long *)0x0) {
            lVar17 = plVar5[3];
            if (lVar17 != 0) {
              lVar15 = plVar5[4];
              lVar12 = lVar17;
              if (lVar15 != lVar17) {
                do {
                  if (*(long *)(lVar15 + -0x18) != 0) {
                    *(long *)(lVar15 + -0x10) = *(long *)(lVar15 + -0x18);
                    __ZdlPv();
                  }
                  lVar15 = lVar15 + -0x20;
                } while (lVar15 != lVar17);
                lVar12 = plVar5[3];
              }
              plVar5[4] = lVar17;
              __ZdlPv(lVar12);
            }
            if (*plVar5 != 0) {
              plVar5[1] = *plVar5;
              __ZdlPv();
            }
            __ZdlPv(plVar5);
          }
          lVar17 = *(long *)(lVar9 + 0x18);
          *(undefined8 *)(lVar9 + 0x18) = 0;
          if (lVar17 != 0) {
            __ZdaPv();
          }
          __ZdlPv(lVar9);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x68))();
    iVar4 = (int)plVar5;
    lVar9 = (long)iVar4;
    if (*(long *)(param_1 + 0x40) != (long)iVar4) {
      _free(*(undefined8 *)(param_1 + 0x38));
      if (iVar4 < 1) {
        lVar17 = 0;
      }
      else {
        lVar17 = lVar9 << 3;
        _malloc();
        if (lVar17 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109952df0;
        }
      }
      *(long *)(param_1 + 0x38) = lVar17;
    }
    *(long *)(param_1 + 0x40) = lVar9;
    if (0 < iVar4) {
      _bzero(*(undefined8 *)(param_1 + 0x38),lVar9 << 3);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x70))();
    iVar4 = (int)plVar5;
    if (*(long *)(param_1 + 0x50) != (long)iVar4) {
      _free(*(undefined8 *)(param_1 + 0x48));
      if (iVar4 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)iVar4 << 3;
        _malloc();
        if (lVar9 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109952df0;
        }
      }
      *(long *)(param_1 + 0x48) = lVar9;
    }
    *(long *)(param_1 + 0x50) = (long)iVar4;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x60))();
    iVar4 = (int)plVar5;
    if (*(long *)(param_1 + 0x60) != (long)iVar4) {
      _free(*(undefined8 *)(param_1 + 0x58));
      if (iVar4 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)iVar4 << 3;
        _malloc();
        if (lVar9 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109952df0;
        }
      }
      *(long *)(param_1 + 0x58) = lVar9;
    }
    *(long *)(param_1 + 0x60) = (long)iVar4;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x60))();
    iVar4 = (int)plVar5;
    if (*(long *)(param_1 + 0x70) != (long)iVar4) {
      _free(*(undefined8 *)(param_1 + 0x68));
      if (iVar4 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)iVar4 << 3;
        _malloc();
        if (lVar9 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109952df0;
        }
      }
      *(long *)(param_1 + 0x68) = lVar9;
    }
    *(long *)(param_1 + 0x70) = (long)iVar4;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x68))();
    iVar4 = (int)plVar5;
    if (*(long *)(param_1 + 0x80) != (long)iVar4) {
      _free(*(undefined8 *)(param_1 + 0x78));
      if (iVar4 < 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)iVar4 << 3;
        _malloc();
        if (lVar9 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109952df0;
        }
      }
      *(long *)(param_1 + 0x78) = lVar9;
    }
    *(long *)(param_1 + 0x80) = (long)iVar4;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    if (*(int *)(*(long *)(param_1 + 8) + 4) == 1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x48))
                (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30));
    }
  }
  lVar17 = *(long *)(param_1 + 0x28);
  lVar9 = *(long *)(lVar17 + 0x20);
  piVar18 = *(int **)(lVar9 + 0x18);
  piVar2 = *(int **)(lVar9 + 0x20);
  if (piVar18 != piVar2) {
    lVar9 = *(long *)(param_1 + 0x18);
    do {
      lStack_98 = (long)*piVar18;
      iVar4 = piVar18[1];
      pdStack_a0 = (double *)
                   (*(long *)(lVar17 + 0x18) + (long)*(int *)(*(long *)(piVar18 + 2) + 4) * 8);
      if ((lVar9 != 0) && (0 < *piVar18)) {
        lVar12 = 0;
        pdVar8 = pdStack_a0;
        do {
          dVar20 = *(double *)(lVar9 + (long)iVar4 * 8 + lVar12 * 8);
          *pdVar8 = dVar20 * dVar20 + *pdVar8;
          lVar12 = lVar12 + 1;
          pdVar8 = pdVar8 + lStack_98 + 1;
        } while (lStack_98 != lVar12);
      }
      lStack_90 = lStack_98;
      pdStack_78 = pdStack_a0;
      lStack_70 = lStack_98;
      lStack_68 = lStack_98;
      FUN_10991a1bc(&lStack_d0,&pdStack_a0);
      if (0 < lStack_70) {
        lVar12 = 0;
        pdVar8 = pdStack_78;
        do {
          if (0 < lStack_68) {
            lVar15 = 0;
            do {
              dVar20 = 1.0;
              if (lVar12 != lVar15) {
                dVar20 = 0.0;
              }
              pdVar8[lVar15] = dVar20;
              lVar15 = lVar15 + 1;
            } while (lStack_68 != lVar15);
          }
          lVar12 = lVar12 + 1;
          pdVar8 = pdVar8 + lStack_68;
        } while (lVar12 != lStack_70);
      }
      puStack_a8 = (undefined1 *)&lStack_d0;
      if (lStack_c8 != 0) {
        puStack_a8 = (undefined1 *)&lStack_d0;
        FUN_10991a628(&puStack_a8,&pdStack_78);
      }
      if (lStack_c0 != 0) {
        FUN_10991a8cc(&lStack_d0,&pdStack_78);
      }
      _free(lStack_d0);
      piVar18 = piVar18 + 8;
    } while (piVar18 != piVar2);
  }
  if (*(int *)(*(long *)(param_1 + 8) + 4) == 1) {
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      plVar5 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar5 + 0x60))();
      lVar9 = lVar9 + (long)(int)plVar5 * 8;
    }
    lVar12 = *(long *)(param_1 + 0x30);
    lVar17 = *(long *)(lVar12 + 0x20);
    piVar2 = *(int **)(lVar17 + 0x20);
    for (piVar18 = *(int **)(lVar17 + 0x18); piVar18 != piVar2; piVar18 = piVar18 + 8) {
      lStack_98 = (long)*piVar18;
      iVar4 = piVar18[1];
      pdStack_a0 = (double *)
                   (*(long *)(lVar12 + 0x18) + (long)*(int *)(*(long *)(piVar18 + 2) + 4) * 8);
      if ((lVar9 != 0) && (0 < *piVar18)) {
        lVar17 = 0;
        pdVar8 = pdStack_a0;
        do {
          dVar20 = *(double *)(lVar9 + (long)iVar4 * 8 + lVar17 * 8);
          *pdVar8 = dVar20 * dVar20 + *pdVar8;
          lVar17 = lVar17 + 1;
          pdVar8 = pdVar8 + lStack_98 + 1;
        } while (lStack_98 != lVar17);
      }
      lStack_90 = lStack_98;
      pdStack_78 = pdStack_a0;
      lStack_70 = lStack_98;
      lStack_68 = lStack_98;
      FUN_10991a1bc(&lStack_d0,&pdStack_a0);
      if (0 < lStack_70) {
        lVar17 = 0;
        pdVar8 = pdStack_78;
        do {
          if (0 < lStack_68) {
            lVar15 = 0;
            do {
              dVar20 = 1.0;
              if (lVar17 != lVar15) {
                dVar20 = 0.0;
              }
              pdVar8[lVar15] = dVar20;
              lVar15 = lVar15 + 1;
            } while (lStack_68 != lVar15);
          }
          lVar17 = lVar17 + 1;
          pdVar8 = pdVar8 + lStack_68;
        } while (lVar17 != lStack_70);
      }
      puStack_a8 = (undefined1 *)&lStack_d0;
      if (lStack_c8 != 0) {
        puStack_a8 = (undefined1 *)&lStack_d0;
        FUN_10991a628(&puStack_a8,&pdStack_78);
      }
      if (lStack_c0 != 0) {
        FUN_10991a8cc(&lStack_d0,&pdStack_78);
      }
      _free(lStack_d0);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (0 < *(long *)(param_1 + 0x60)) {
    _bzero(uVar1,*(long *)(param_1 + 0x60) << 3);
  }
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x20),uVar1);
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x60))();
  if ((int)plVar5 < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 1;
    _calloc(1,((ulong)plVar5 & 0xffffffff) << 3);
    if (lVar9 == 0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_109952df0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109952df4);
      (*pcVar3)();
    }
  }
  FUN_10991c7e4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),lVar9);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (0 < *(long *)(param_1 + 0x50)) {
    _bzero(uVar1,*(long *)(param_1 + 0x50) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),lVar9,uVar1);
  pdVar19 = *(double **)(param_1 + 0x20);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  pdVar8 = *(double **)(param_1 + 0x48);
  lVar17 = *(long *)(param_1 + 0x50);
  uVar13 = lVar17 - (lVar17 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar17) {
    lVar12 = 0;
    pdVar10 = pdVar8;
    pdVar14 = pdVar19;
    do {
      dVar20 = *pdVar14;
      pdVar10[1] = pdVar14[1] - pdVar10[1];
      *pdVar10 = dVar20 - *pdVar10;
      lVar12 = lVar12 + 2;
      pdVar10 = pdVar10 + 2;
      pdVar14 = pdVar14 + 2;
    } while (lVar12 < (long)uVar13);
  }
  lVar12 = lVar17 % 2;
  if (lVar12 != 0 && (long)uVar13 <= lVar17) {
    pdVar8 = pdVar8 + (lVar17 / 2) * 2;
    pdVar19 = pdVar19 + (lVar17 / 2) * 2;
    do {
      *pdVar8 = *pdVar19 - *pdVar8;
      lVar12 = lVar12 + -1;
      pdVar8 = pdVar8 + 1;
      pdVar19 = pdVar19 + 1;
    } while (lVar12 != 0);
  }
  pdVar8 = *(double **)(param_1 + 0x38);
  if (0 < *(long *)(param_1 + 0x40)) {
    _bzero(pdVar8,*(long *)(param_1 + 0x40) << 3);
  }
  pdVar19 = *(double **)(param_1 + 0x48);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  lVar17 = lVar9;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _free(lVar9);
  __Unwind_Resume();
  uVar1 = *(undefined8 *)(lVar17 + 0x48);
  if (0 < *(long *)(lVar17 + 0x50)) {
    _bzero(uVar1,*(long *)(lVar17 + 0x50) << 3);
  }
  (**(code **)(**(long **)(lVar17 + 0x10) + 0x28))(*(long **)(lVar17 + 0x10),pdVar19,uVar1);
  uVar1 = *(undefined8 *)(lVar17 + 0x58);
  if (0 < *(long *)(lVar17 + 0x60)) {
    _bzero(uVar1,*(long *)(lVar17 + 0x60) << 3);
  }
  (**(code **)(**(long **)(lVar17 + 0x10) + 0x10))
            (*(long **)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x48),uVar1);
  uVar1 = *(undefined8 *)(lVar17 + 0x68);
  if (0 < *(long *)(lVar17 + 0x70)) {
    _bzero(uVar1,*(long *)(lVar17 + 0x70) << 3);
  }
  FUN_10991c7e4(*(undefined8 *)(lVar17 + 0x28),*(undefined8 *)(lVar17 + 0x58),uVar1);
  pdVar10 = *(double **)(lVar17 + 0x68);
  lVar9 = *(long *)(lVar17 + 0x70);
  uVar13 = lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar9) {
    lVar12 = 0;
    pdVar14 = pdVar10;
    do {
      pdVar14[1] = -pdVar14[1];
      *pdVar14 = -*pdVar14;
      lVar12 = lVar12 + 2;
      pdVar14 = pdVar14 + 2;
    } while (lVar12 < (long)uVar13);
  }
  lVar12 = lVar9 % 2;
  if (lVar12 != 0 && (long)uVar13 <= lVar9) {
    pdVar10 = pdVar10 + (lVar9 / 2) * 2;
    do {
      *pdVar10 = -*pdVar10;
      lVar12 = lVar12 + -1;
      pdVar10 = pdVar10 + 1;
    } while (lVar12 != 0);
  }
  (**(code **)(**(long **)(lVar17 + 0x10) + 0x20))
            (*(long **)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x68),*(undefined8 *)(lVar17 + 0x48)
            );
  plVar5 = *(long **)(lVar17 + 0x10);
  lVar9 = *(long *)(lVar17 + 0x18);
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x68))();
    uVar11 = (ulong)(int)plVar5;
    uVar13 = (ulong)pdVar8 >> 3 & 1;
    if ((long)(int)plVar5 <= (long)uVar13) {
      uVar13 = uVar11;
    }
    if (((ulong)pdVar8 & 7) != 0) {
      uVar13 = uVar11;
    }
    lVar9 = uVar11 - uVar13;
    if (0 < (long)uVar13) {
      _bzero(pdVar8,uVar13 << 3);
    }
    lVar12 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
    if (1 < lVar9) {
      lVar15 = lVar12;
      if (lVar12 <= (long)(uVar13 + 2)) {
        lVar15 = uVar13 + 2;
      }
      _bzero(pdVar8 + uVar13,(lVar15 + ~uVar13 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar12 < (long)uVar11) {
      _bzero(pdVar8 + (lVar9 / 2) * 2 + uVar13,(lVar9 % 2) * 8);
    }
  }
  else {
    (**(code **)(*plVar5 + 0x60))();
    (**(code **)(**(long **)(lVar17 + 0x10) + 0x68))();
    (**(code **)(**(long **)(lVar17 + 0x10) + 0x68))();
    plVar6 = *(long **)(lVar17 + 0x10);
    (**(code **)(*plVar6 + 0x68))();
    uVar11 = (ulong)(int)plVar6;
    uVar13 = (ulong)pdVar8 >> 3 & 1;
    if ((long)(int)plVar6 <= (long)uVar13) {
      uVar13 = uVar11;
    }
    if (((ulong)pdVar8 & 7) != 0) {
      uVar13 = uVar11;
    }
    lVar12 = uVar11 - uVar13;
    iVar4 = (int)plVar5;
    if (0 < (long)uVar13) {
      pdVar10 = pdVar8;
      pdVar14 = pdVar19;
      uVar7 = uVar13;
      pdVar16 = (double *)(lVar9 + (long)iVar4 * 8);
      do {
        *pdVar10 = *pdVar16 * *pdVar16 * *pdVar14;
        uVar7 = uVar7 - 1;
        pdVar10 = pdVar10 + 1;
        pdVar14 = pdVar14 + 1;
        pdVar16 = pdVar16 + 1;
      } while (uVar7 != 0);
    }
    lVar15 = (lVar12 - (lVar12 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
    if (1 < lVar12) {
      uVar7 = uVar13;
      pdVar10 = pdVar19 + uVar13;
      pdVar14 = (double *)(lVar9 + uVar13 * 8 + (long)iVar4 * 8);
      pdVar16 = pdVar8 + uVar13;
      do {
        dVar20 = *pdVar14;
        dVar21 = *pdVar10;
        pdVar16[1] = pdVar14[1] * pdVar14[1] * pdVar10[1];
        *pdVar16 = dVar20 * dVar20 * dVar21;
        uVar7 = uVar7 + 2;
        pdVar10 = pdVar10 + 2;
        pdVar14 = pdVar14 + 2;
        pdVar16 = pdVar16 + 2;
      } while ((long)uVar7 < lVar15);
    }
    if (lVar15 < (long)uVar11) {
      lVar15 = lVar12 / 2;
      lVar12 = lVar12 % 2;
      pdVar19 = pdVar19 + uVar13 + lVar15 * 2;
      pdVar10 = (double *)(lVar9 + lVar15 * 0x10 + uVar13 * 8 + (long)iVar4 * 8);
      pdVar14 = pdVar8 + uVar13 + lVar15 * 2;
      do {
        *pdVar14 = *pdVar10 * *pdVar10 * *pdVar19;
        lVar12 = lVar12 + -1;
        pdVar19 = pdVar19 + 1;
        pdVar10 = pdVar10 + 1;
        pdVar14 = pdVar14 + 1;
      } while (lVar12 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010995325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
            (*(long **)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x48),pdVar8);
  return;
}



/* Entry: 109952f54; end: 10995325f;  */

void FUN_109952f54(long param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  double *pdVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (0 < *(long *)(param_1 + 0x50)) {
    _bzero(uVar1,*(long *)(param_1 + 0x50) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (0 < *(long *)(param_1 + 0x60)) {
    _bzero(uVar1,*(long *)(param_1 + 0x60) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  if (0 < *(long *)(param_1 + 0x70)) {
    _bzero(uVar1,*(long *)(param_1 + 0x70) << 3);
  }
  FUN_10991c7e4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),uVar1);
  pdVar5 = *(double **)(param_1 + 0x68);
  lVar13 = *(long *)(param_1 + 0x70);
  uVar8 = lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar13) {
    lVar11 = 0;
    pdVar7 = pdVar5;
    do {
      pdVar7[1] = -pdVar7[1];
      *pdVar7 = -*pdVar7;
      lVar11 = lVar11 + 2;
      pdVar7 = pdVar7 + 2;
    } while (lVar11 < (long)uVar8);
  }
  lVar11 = lVar13 % 2;
  if (lVar11 != 0 && (long)uVar8 <= lVar13) {
    pdVar5 = pdVar5 + (lVar13 / 2) * 2;
    do {
      *pdVar5 = -*pdVar5;
      lVar11 = lVar11 + -1;
      pdVar5 = pdVar5 + 1;
    } while (lVar11 != 0);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),
             *(undefined8 *)(param_1 + 0x48));
  plVar4 = *(long **)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 == 0) {
    (**(code **)(*plVar4 + 0x68))();
    uVar6 = (ulong)(int)plVar4;
    uVar8 = (ulong)param_3 >> 3 & 1;
    if ((long)(int)plVar4 <= (long)uVar8) {
      uVar8 = uVar6;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar8 = uVar6;
    }
    lVar13 = uVar6 - uVar8;
    if (0 < (long)uVar8) {
      _bzero(param_3,uVar8 << 3);
    }
    lVar11 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
    if (1 < lVar13) {
      lVar9 = lVar11;
      if (lVar11 <= (long)(uVar8 + 2)) {
        lVar9 = uVar8 + 2;
      }
      _bzero(param_3 + uVar8,(lVar9 + ~uVar8 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar11 < (long)uVar6) {
      _bzero(param_3 + (lVar13 / 2) * 2 + uVar8,(lVar13 % 2) * 8);
    }
  }
  else {
    (**(code **)(*plVar4 + 0x60))();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
    plVar2 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar2 + 0x68))();
    uVar6 = (ulong)(int)plVar2;
    uVar8 = (ulong)param_3 >> 3 & 1;
    if ((long)(int)plVar2 <= (long)uVar8) {
      uVar8 = uVar6;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar8 = uVar6;
    }
    lVar11 = uVar6 - uVar8;
    iVar12 = (int)plVar4;
    if (0 < (long)uVar8) {
      pdVar5 = param_3;
      pdVar7 = param_2;
      uVar3 = uVar8;
      pdVar10 = (double *)(lVar13 + (long)iVar12 * 8);
      do {
        *pdVar5 = *pdVar10 * *pdVar10 * *pdVar7;
        uVar3 = uVar3 - 1;
        pdVar5 = pdVar5 + 1;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      } while (uVar3 != 0);
    }
    lVar9 = (lVar11 - (lVar11 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
    if (1 < lVar11) {
      uVar3 = uVar8;
      pdVar5 = param_2 + uVar8;
      pdVar7 = (double *)(lVar13 + uVar8 * 8 + (long)iVar12 * 8);
      pdVar10 = param_3 + uVar8;
      do {
        dVar14 = *pdVar7;
        dVar15 = *pdVar5;
        pdVar10[1] = pdVar7[1] * pdVar7[1] * pdVar5[1];
        *pdVar10 = dVar14 * dVar14 * dVar15;
        uVar3 = uVar3 + 2;
        pdVar5 = pdVar5 + 2;
        pdVar7 = pdVar7 + 2;
        pdVar10 = pdVar10 + 2;
      } while ((long)uVar3 < lVar9);
    }
    if (lVar9 < (long)uVar6) {
      lVar9 = lVar11 / 2;
      lVar11 = lVar11 % 2;
      pdVar5 = param_2 + uVar8 + lVar9 * 2;
      pdVar7 = (double *)(lVar13 + lVar9 * 0x10 + uVar8 * 8 + (long)iVar12 * 8);
      pdVar10 = param_3 + uVar8 + lVar9 * 2;
      do {
        *pdVar10 = *pdVar7 * *pdVar7 * *pdVar5;
        lVar11 = lVar11 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010995325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),param_3);
  return;
}



/* Entry: 109953260; end: 10995326f;  */

void FUN_109953260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010995326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
  return;
}



/* Entry: 109953270; end: 109953527;  */

void FUN_109953270(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  undefined8 uVar18;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x60))();
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x68))();
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x78))();
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  if (0 < *(long *)(param_1 + 0x50)) {
    _bzero(uVar18,*(long *)(param_1 + 0x50) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2,uVar18);
  pdVar7 = *(double **)(param_1 + 0x20);
  pdVar5 = *(double **)(param_1 + 0x48);
  lVar15 = *(long *)(param_1 + 0x50);
  uVar9 = lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar15) {
    lVar10 = 0;
    pdVar11 = pdVar5;
    pdVar12 = pdVar7;
    do {
      dVar17 = *pdVar12;
      pdVar11[1] = pdVar12[1] - pdVar11[1];
      *pdVar11 = dVar17 - *pdVar11;
      lVar10 = lVar10 + 2;
      pdVar11 = pdVar11 + 2;
      pdVar12 = pdVar12 + 2;
    } while (lVar10 < (long)uVar9);
  }
  lVar10 = lVar15 % 2;
  if (lVar10 != 0 && (long)uVar9 <= lVar15) {
    pdVar5 = pdVar5 + (lVar15 / 2) * 2;
    pdVar7 = pdVar7 + (lVar15 / 2) * 2;
    do {
      *pdVar5 = *pdVar7 - *pdVar5;
      lVar10 = lVar10 + -1;
      pdVar5 = pdVar5 + 1;
      pdVar7 = pdVar7 + 1;
    } while (lVar10 != 0);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  if (0 < *(long *)(param_1 + 0x60)) {
    _bzero(uVar18,*(long *)(param_1 + 0x60) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),uVar18);
  uVar16 = (ulong)(int)plVar4;
  uVar9 = param_3 >> 3 & 1;
  if ((long)(int)plVar4 <= (long)uVar9) {
    uVar9 = uVar16;
  }
  if ((param_3 & 7) != 0) {
    uVar9 = uVar16;
  }
  lVar15 = uVar16 - uVar9;
  if (0 < (long)uVar9) {
    _bzero(param_3,uVar9 << 3);
  }
  lVar10 = (lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffeU) + uVar9;
  if (1 < lVar15) {
    lVar1 = lVar10;
    if (lVar10 <= (long)(uVar9 + 2)) {
      lVar1 = uVar9 + 2;
    }
    _bzero(param_3 + uVar9 * 8,(lVar1 + ~uVar9 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  if (lVar10 < (long)uVar16) {
    _bzero(param_3 + (lVar15 / 2) * 0x10 + uVar9 * 8,(lVar15 % 2) * 8);
  }
  FUN_10991c7e4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),param_3);
  uVar16 = (ulong)(int)plVar3;
  iVar14 = (int)plVar2;
  puVar6 = (undefined8 *)(param_3 + (long)iVar14 * 8);
  uVar9 = (ulong)puVar6 >> 3 & 1;
  if ((long)(int)plVar3 <= (long)uVar9) {
    uVar9 = uVar16;
  }
  if (((ulong)puVar6 & 7) != 0) {
    uVar9 = uVar16;
  }
  lVar15 = uVar16 - uVar9;
  puVar8 = param_2;
  uVar13 = uVar9;
  if (0 < (long)uVar9) {
    do {
      *puVar6 = *puVar8;
      uVar13 = uVar13 - 1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar13 != 0);
  }
  lVar10 = (lVar15 - (lVar15 >> 0x3f) & 0xfffffffffffffffeU) + uVar9;
  if (1 < lVar15) {
    puVar6 = param_2 + uVar9;
    puVar8 = (undefined8 *)(param_3 + uVar9 * 8 + (long)iVar14 * 8);
    uVar13 = uVar9;
    do {
      uVar18 = *puVar6;
      puVar8[1] = puVar6[1];
      *puVar8 = uVar18;
      uVar13 = uVar13 + 2;
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 2;
    } while ((long)uVar13 < lVar10);
  }
  if (lVar10 < (long)uVar16) {
    lVar10 = lVar15 % 2;
    puVar6 = param_2 + uVar9 + (lVar15 / 2) * 2;
    puVar8 = (undefined8 *)(param_3 + (lVar15 / 2) * 0x10 + uVar9 * 8 + (long)iVar14 * 8);
    do {
      *puVar8 = *puVar6;
      lVar10 = lVar10 + -1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 109953528; end: 10995352b;  */

long FUN_109953528(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  _free(*(undefined8 *)(param_1 + 0x78));
  _free(*(undefined8 *)(param_1 + 0x68));
  _free(*(undefined8 *)(param_1 + 0x58));
  _free(*(undefined8 *)(param_1 + 0x48));
  _free(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (lVar4 != 0) {
        lVar5 = plVar3[4];
        lVar1 = lVar4;
        if (lVar5 != lVar4) {
          do {
            if (*(long *)(lVar5 + -0x18) != 0) {
              *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
              __ZdlPv();
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != lVar4);
          lVar1 = plVar3[3];
        }
        plVar3[4] = lVar4;
        __ZdlPv(lVar1);
      }
      if (*plVar3 != 0) {
        plVar3[1] = *plVar3;
        __ZdlPv();
      }
      __ZdlPv(plVar3);
    }
    lVar4 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
    }
    __ZdlPv(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (lVar4 != 0) {
        lVar5 = plVar3[4];
        lVar1 = lVar4;
        if (lVar5 != lVar4) {
          do {
            if (*(long *)(lVar5 + -0x18) != 0) {
              *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
              __ZdlPv();
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != lVar4);
          lVar1 = plVar3[3];
        }
        plVar3[4] = lVar4;
        __ZdlPv(lVar1);
      }
      if (*plVar3 != 0) {
        plVar3[1] = *plVar3;
        __ZdlPv();
      }
      __ZdlPv(plVar3);
    }
    lVar4 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
    }
    __ZdlPv(lVar2);
  }
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10995352c; end: 10995353f;  */

void FUN_10995352c(void)

{
  FUN_109953554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109953540; end: 109953553;  */

void FUN_109953540(long param_1,double *param_2,double *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  double *pdVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (0 < *(long *)(param_1 + 0x50)) {
    _bzero(uVar1,*(long *)(param_1 + 0x50) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (0 < *(long *)(param_1 + 0x60)) {
    _bzero(uVar1,*(long *)(param_1 + 0x60) << 3);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  if (0 < *(long *)(param_1 + 0x70)) {
    _bzero(uVar1,*(long *)(param_1 + 0x70) << 3);
  }
  FUN_10991c7e4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),uVar1);
  pdVar5 = *(double **)(param_1 + 0x68);
  lVar13 = *(long *)(param_1 + 0x70);
  uVar8 = lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar13) {
    lVar11 = 0;
    pdVar7 = pdVar5;
    do {
      pdVar7[1] = -pdVar7[1];
      *pdVar7 = -*pdVar7;
      lVar11 = lVar11 + 2;
      pdVar7 = pdVar7 + 2;
    } while (lVar11 < (long)uVar8);
  }
  lVar11 = lVar13 % 2;
  if (lVar11 != 0 && (long)uVar8 <= lVar13) {
    pdVar5 = pdVar5 + (lVar13 / 2) * 2;
    do {
      *pdVar5 = -*pdVar5;
      lVar11 = lVar11 + -1;
      pdVar5 = pdVar5 + 1;
    } while (lVar11 != 0);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),
             *(undefined8 *)(param_1 + 0x48));
  plVar4 = *(long **)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 == 0) {
    (**(code **)(*plVar4 + 0x68))();
    uVar6 = (ulong)(int)plVar4;
    uVar8 = (ulong)param_3 >> 3 & 1;
    if ((long)(int)plVar4 <= (long)uVar8) {
      uVar8 = uVar6;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar8 = uVar6;
    }
    lVar13 = uVar6 - uVar8;
    if (0 < (long)uVar8) {
      _bzero(param_3,uVar8 << 3);
    }
    lVar11 = (lVar13 - (lVar13 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
    if (1 < lVar13) {
      lVar9 = lVar11;
      if (lVar11 <= (long)(uVar8 + 2)) {
        lVar9 = uVar8 + 2;
      }
      _bzero(param_3 + uVar8,(lVar9 + ~uVar8 & 0x1ffffffffffffffe) * 8 + 0x10);
    }
    if (lVar11 < (long)uVar6) {
      _bzero(param_3 + (lVar13 / 2) * 2 + uVar8,(lVar13 % 2) * 8);
    }
  }
  else {
    (**(code **)(*plVar4 + 0x60))();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
    plVar2 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar2 + 0x68))();
    uVar6 = (ulong)(int)plVar2;
    uVar8 = (ulong)param_3 >> 3 & 1;
    if ((long)(int)plVar2 <= (long)uVar8) {
      uVar8 = uVar6;
    }
    if (((ulong)param_3 & 7) != 0) {
      uVar8 = uVar6;
    }
    lVar11 = uVar6 - uVar8;
    iVar12 = (int)plVar4;
    if (0 < (long)uVar8) {
      pdVar5 = param_3;
      pdVar7 = param_2;
      uVar3 = uVar8;
      pdVar10 = (double *)(lVar13 + (long)iVar12 * 8);
      do {
        *pdVar5 = *pdVar10 * *pdVar10 * *pdVar7;
        uVar3 = uVar3 - 1;
        pdVar5 = pdVar5 + 1;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      } while (uVar3 != 0);
    }
    lVar9 = (lVar11 - (lVar11 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
    if (1 < lVar11) {
      uVar3 = uVar8;
      pdVar5 = param_2 + uVar8;
      pdVar7 = (double *)(lVar13 + uVar8 * 8 + (long)iVar12 * 8);
      pdVar10 = param_3 + uVar8;
      do {
        dVar14 = *pdVar7;
        dVar15 = *pdVar5;
        pdVar10[1] = pdVar7[1] * pdVar7[1] * pdVar5[1];
        *pdVar10 = dVar14 * dVar14 * dVar15;
        uVar3 = uVar3 + 2;
        pdVar5 = pdVar5 + 2;
        pdVar7 = pdVar7 + 2;
        pdVar10 = pdVar10 + 2;
      } while ((long)uVar3 < lVar9);
    }
    if (lVar9 < (long)uVar6) {
      lVar9 = lVar11 / 2;
      lVar11 = lVar11 % 2;
      pdVar5 = param_2 + uVar8 + lVar9 * 2;
      pdVar7 = (double *)(lVar13 + lVar9 * 0x10 + uVar8 * 8 + (long)iVar12 * 8);
      pdVar10 = param_3 + uVar8 + lVar9 * 2;
      do {
        *pdVar10 = *pdVar7 * *pdVar7 * *pdVar5;
        lVar11 = lVar11 + -1;
        pdVar5 = pdVar5 + 1;
        pdVar7 = pdVar7 + 1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010995325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),param_3);
  return;
}



/* Entry: 109953554; end: 1099536d3;  */

long FUN_109953554(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  _free(*(undefined8 *)(param_1 + 0x78));
  _free(*(undefined8 *)(param_1 + 0x68));
  _free(*(undefined8 *)(param_1 + 0x58));
  _free(*(undefined8 *)(param_1 + 0x48));
  _free(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (lVar4 != 0) {
        lVar5 = plVar3[4];
        lVar1 = lVar4;
        if (lVar5 != lVar4) {
          do {
            if (*(long *)(lVar5 + -0x18) != 0) {
              *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
              __ZdlPv();
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != lVar4);
          lVar1 = plVar3[3];
        }
        plVar3[4] = lVar4;
        __ZdlPv(lVar1);
      }
      if (*plVar3 != 0) {
        plVar3[1] = *plVar3;
        __ZdlPv();
      }
      __ZdlPv(plVar3);
    }
    lVar4 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
    }
    __ZdlPv(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (lVar4 != 0) {
        lVar5 = plVar3[4];
        lVar1 = lVar4;
        if (lVar5 != lVar4) {
          do {
            if (*(long *)(lVar5 + -0x18) != 0) {
              *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
              __ZdlPv();
            }
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != lVar4);
          lVar1 = plVar3[3];
        }
        plVar3[4] = lVar4;
        __ZdlPv(lVar1);
      }
      if (*plVar3 != 0) {
        plVar3[1] = *plVar3;
        __ZdlPv();
      }
      __ZdlPv(plVar3);
    }
    lVar4 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar4 != 0) {
      __ZdaPv();
    }
    __ZdlPv(lVar2);
  }
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1099536d4; end: 109953827;  */

void FUN_1099536d4(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  int *piVar31;
  int *piVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  long lVar36;
  undefined4 uVar37;
  undefined *puVar38;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  if (param_5 - 3U < 0xfffffffe) {
    lStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&lStack_a0,&UNK_10f58c4fd,0x86,3,FUN_1099aa768,0);
    puVar10 = &UNK_10f58c58c;
    FUN_1092b4db8(lStack_98 + 0x7540,&UNK_10f58c58c,0x99);
  }
  else {
    lStack_a0 = CONCAT44(lStack_a0._4_4_,*(int *)(param_2 + 0x10));
    plStack_a8 = (long *)((ulong)plStack_a8 & 0xffffffff00000000);
    if (0 < *(int *)(param_2 + 0x10)) {
LAB_109953720:
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = param_2;
      *(undefined4 *)(plVar7 + 1) = param_3;
      *(undefined4 *)((long)plVar7 + 0xc) = param_4;
      plVar7[3] = 0;
      plVar7[2] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      *param_1 = plVar7;
      FUN_109953828();
      return;
    }
    plVar7 = &lStack_a0;
    FUN_109904144(plVar7,&plStack_a8,&UNK_10f58c626);
    plStack_a8 = plVar7;
    if (plVar7 == (long *)0x0) goto LAB_109953720;
    FUN_1099aa6cc(&lStack_a0,&UNK_10f58c4fd,0x87,&plStack_a8);
    puVar10 = &UNK_10f58c63b;
    FUN_109365950(lStack_98 + 0x7540);
  }
  plVar7 = &lStack_a0;
  func_0x0001099ab7c0();
  uVar37 = SUB84(puVar10,0);
  iVar17 = *(int *)((long)plVar7 + 0xc);
  lVar14 = (long)(int)plVar7[1];
  if ((int)plVar7[1] < iVar17) {
    piVar34 = (int *)0x0;
    piVar27 = (int *)0x0;
    piVar31 = (int *)0x0;
    lVar11 = *(long *)(*plVar7 + 0x20);
    puVar38 = puVar10;
    do {
      lVar12 = *(long *)(lVar11 + 0x18) + lVar14 * 0x20;
      plVar29 = (long *)(lVar12 + 8);
      lVar8 = *plVar29;
      lVar26 = *(long *)(lVar12 + 0x10);
      if (lVar26 - lVar8 != 0) {
        uVar24 = 0;
        uVar18 = lVar26 - lVar8 >> 3;
        do {
          bVar5 = (int)puVar38 != 1;
          uVar22 = 0;
          if (bVar5) {
            uVar22 = (uint)uVar24;
          }
          if (!bVar5) {
            uVar18 = uVar24 + 1;
          }
          if ((int)uVar22 < (int)uVar18) {
            piVar1 = (int *)(lVar8 + uVar24 * 8);
            lVar8 = (ulong)uVar22 << 3;
            lVar26 = (uVar18 & 0xffffffff) - (ulong)uVar22;
            piVar32 = piVar31;
            do {
              lVar36 = *plVar29;
              lVar33 = (long)piVar27 - (long)piVar32;
              lVar35 = (lVar33 >> 2) * -0x5555555555555555;
              iVar17 = (int)lVar35;
              if (piVar27 < piVar34) {
                iVar23 = *(int *)(lVar36 + lVar8);
                *piVar27 = *piVar1;
                piVar27[1] = iVar23;
                piVar27[2] = iVar17;
                piVar31 = piVar32;
              }
              else {
                uVar18 = lVar35 + 1;
                if (0x1555555555555555 < uVar18) {
                  FUN_109954344();
                  goto LAB_10995405c;
                }
                lVar35 = (long)piVar34 - (long)piVar32 >> 2;
                uVar28 = lVar35 * 0x5555555555555556;
                if (uVar28 < uVar18 || uVar28 - uVar18 == 0) {
                  uVar28 = uVar18;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar35 * -0x5555555555555555)) {
                  uVar28 = 0x1555555555555555;
                }
                if (0x1555555555555555 < uVar28) {
                  func_0x000104c4f740();
                  goto LAB_10995405c;
                }
                lVar35 = uVar28 * 0xc;
                __Znwm();
                piVar27 = (int *)(lVar35 + lVar33);
                piVar34 = (int *)(lVar35 + uVar28 * 0xc);
                iVar23 = *(int *)(lVar36 + lVar8);
                *piVar27 = *piVar1;
                piVar27[1] = iVar23;
                piVar27[2] = iVar17;
                uVar18 = SUB168(SEXT816(lVar33) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                piVar31 = piVar27 + ((uVar18 >> 1) - ((long)uVar18 >> 0x3f)) * 3;
                _memcpy(piVar31,piVar32,lVar33);
                if (piVar32 != (int *)0x0) {
                  __ZdlPv(piVar32);
                }
              }
              piVar27 = piVar27 + 3;
              lVar8 = lVar8 + 8;
              lVar26 = lVar26 + -1;
              piVar32 = piVar31;
            } while (lVar26 != 0);
            lVar8 = *plVar29;
            lVar26 = *(long *)(lVar12 + 0x10);
            puVar38 = (undefined *)((ulong)puVar10 & 0xffffffff);
          }
          uVar24 = uVar24 + 1;
          uVar18 = lVar26 - lVar8 >> 3;
        } while (uVar24 < uVar18);
        iVar17 = *(int *)((long)plVar7 + 0xc);
      }
      uVar37 = SUB84(puVar38,0);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar17);
  }
  else {
    piVar27 = (int *)0x0;
    piVar31 = (int *)0x0;
  }
  lVar11 = (long)piVar27 - (long)piVar31 >> 2;
  uVar24 = lVar11 * -0x5555555555555555;
  lVar14 = 0;
  if (piVar27 != piVar31) {
    lVar14 = LZCOUNT(uVar24) * -2 + 0x7e;
  }
  FUN_109954358(piVar31,piVar27,lVar14,1);
  plVar29 = *(long **)(*plVar7 + 0x20);
  lVar14 = *plVar29;
  uVar18 = plVar29[1] - lVar14;
  if (uVar18 == 0) {
    uVar28 = 0;
    lVar12 = 0;
  }
  else {
    if ((long)uVar18 < 0) {
      FUN_10923f788();
      goto LAB_10995405c;
    }
    uVar28 = uVar18 >> 1;
    __Znwm();
    _bzero();
    lVar12 = uVar28 + (uVar18 >> 1);
  }
  if (0 < (long)(lVar12 - uVar28)) {
    _bzero(uVar28);
  }
  *(undefined4 *)(uVar28 + (long)*piVar31 * 4) = *(undefined4 *)(lVar14 + (long)piVar31[1] * 8);
  if (1 < uVar24) {
    lVar12 = uVar24 - 1;
    piVar27 = piVar31 + 4;
    do {
      iVar17 = piVar27[-1];
      if ((iVar17 != piVar27[-4]) || (*piVar27 != piVar27[-3])) {
        *(int *)(uVar28 + (long)iVar17 * 4) =
             *(int *)(uVar28 + (long)iVar17 * 4) + *(int *)(lVar14 + (long)*piVar27 * 8);
      }
      piVar27 = piVar27 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar8 = 0x90;
  __Znwm();
  FUN_1099225b8();
  *(undefined4 *)(lVar8 + 0x58) = uVar37;
  plVar30 = *(long **)(*plVar7 + 0x20);
  uVar18 = plVar30[1] - *plVar30 >> 3;
  lVar12 = *(long *)(lVar8 + 0x60);
  lVar14 = *(long *)(lVar8 + 0x68);
  lVar26 = lVar14 - lVar12;
  uVar15 = lVar26 >> 2;
  if (uVar15 < uVar18) {
    uVar15 = uVar18 - uVar15;
    if (uVar15 <= (ulong)(*(long *)(lVar8 + 0x70) - lVar14 >> 2)) {
      _bzero(lVar14,uVar15 * 4);
      lVar14 = lVar14 + uVar15 * 4;
      goto LAB_109953c24;
    }
    if (uVar18 >> 0x3e == 0) {
      uVar16 = *(long *)(lVar8 + 0x70) - lVar12;
      uVar19 = (long)uVar16 >> 1;
      if (uVar19 <= uVar18) {
        uVar19 = uVar18;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar19 = 0x3fffffffffffffff;
      }
      if (uVar19 >> 0x3e == 0) {
        lVar14 = uVar19 << 2;
        __Znwm();
        _bzero(lVar14 + lVar26,uVar15 * 4);
        _memcpy(lVar14,lVar12,lVar26);
        *(long *)(lVar8 + 0x60) = lVar14;
        *(ulong *)(lVar8 + 0x68) = lVar14 + lVar26 + uVar15 * 4;
        *(ulong *)(lVar8 + 0x70) = lVar14 + uVar19 * 4;
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
        goto LAB_109953c28;
      }
LAB_109954048:
      func_0x000104c4f740();
      goto LAB_10995405c;
    }
LAB_109954040:
    FUN_10923f788();
    goto LAB_10995405c;
  }
  if (uVar18 < uVar15) {
    lVar14 = lVar12 + uVar18 * 4;
LAB_109953c24:
    *(long *)(lVar8 + 0x68) = lVar14;
  }
LAB_109953c28:
  uVar18 = plVar30[1] - *plVar30 >> 3;
  lVar12 = *(long *)(lVar8 + 0x78);
  lVar14 = *(long *)(lVar8 + 0x80);
  lVar26 = lVar14 - lVar12;
  uVar15 = lVar26 >> 2;
  if (uVar15 < uVar18) {
    uVar15 = uVar18 - uVar15;
    if ((ulong)(*(long *)(lVar8 + 0x88) - lVar14 >> 2) < uVar15) {
      if (uVar18 >> 0x3e != 0) goto LAB_109954040;
      uVar16 = *(long *)(lVar8 + 0x88) - lVar12;
      uVar19 = (long)uVar16 >> 1;
      if (uVar19 <= uVar18) {
        uVar19 = uVar18;
      }
      if (0x7ffffffffffffffb < uVar16) {
        uVar19 = 0x3fffffffffffffff;
      }
      if (uVar19 >> 0x3e != 0) goto LAB_109954048;
      lVar14 = uVar19 << 2;
      __Znwm();
      _bzero(lVar14 + lVar26,uVar15 * 4);
      _memcpy(lVar14,lVar12,lVar26);
      *(long *)(lVar8 + 0x78) = lVar14;
      *(ulong *)(lVar8 + 0x80) = lVar14 + lVar26 + uVar15 * 4;
      *(ulong *)(lVar8 + 0x88) = lVar14 + uVar19 * 4;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
    }
    else {
      _bzero(lVar14,uVar15 * 4);
      lVar14 = lVar14 + uVar15 * 4;
LAB_109953d00:
      *(long *)(lVar8 + 0x80) = lVar14;
    }
  }
  else if (uVar18 < uVar15) {
    lVar14 = lVar12 + uVar18 * 4;
    goto LAB_109953d00;
  }
  lVar14 = plVar30[1] - *plVar30;
  if (lVar14 != 0) {
    lVar14 = lVar14 >> 3;
    puVar13 = (undefined4 *)*plVar30;
    puVar20 = *(undefined4 **)(lVar8 + 0x60);
    puVar21 = *(undefined4 **)(lVar8 + 0x78);
    do {
      uVar37 = *puVar13;
      *puVar20 = uVar37;
      *puVar21 = uVar37;
      lVar14 = lVar14 + -1;
      puVar13 = puVar13 + 2;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    } while (lVar14 != 0);
  }
  plVar30 = (long *)plVar7[2];
  plVar7[2] = lVar8;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 8))();
    lVar8 = plVar7[2];
  }
  piVar27 = *(int **)(lVar8 + 0x10);
  *piVar27 = 0;
  lVar14 = *plVar29;
  lVar12 = plVar29[1] - lVar14;
  if (lVar12 != 0) {
    iVar17 = 0;
    lVar26 = 0;
    do {
      piVar34 = (int *)(lVar14 + lVar26 * 8);
      if (0 < *piVar34) {
        iVar23 = 0;
        do {
          iVar17 = *(int *)(uVar28 + lVar26 * 4) + iVar17;
          piVar27 = piVar27 + 1;
          *piVar27 = iVar17;
          iVar23 = iVar23 + 1;
        } while (iVar23 < *piVar34);
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != lVar12 >> 3);
  }
  lVar14 = plVar7[3];
  lVar12 = plVar7[4];
  lVar33 = lVar12 - lVar14;
  uVar18 = lVar33 >> 2;
  lVar26 = lVar14;
  if (uVar24 < uVar18 || uVar24 - uVar18 == 0) {
    if (uVar24 < uVar18) {
      plVar7[4] = lVar14 + lVar11 * -0x5555555555555554;
    }
  }
  else {
    uVar18 = uVar24 - uVar18;
    if ((ulong)(plVar7[5] - lVar12 >> 2) < uVar18) {
      if (uVar24 >> 0x3e == 0) {
        uVar19 = plVar7[5] - lVar14;
        uVar15 = (long)uVar19 >> 1;
        if (uVar15 <= uVar24) {
          uVar15 = uVar24;
        }
        if (0x7ffffffffffffffb < uVar19) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 >> 0x3e == 0) {
          lVar26 = uVar15 << 2;
          __Znwm();
          _bzero(lVar26 + lVar33,uVar18 * 4);
          _memcpy(lVar26,lVar14,lVar33);
          plVar7[3] = lVar26;
          plVar7[4] = lVar26 + lVar33 + uVar18 * 4;
          plVar7[5] = lVar26 + uVar15 * 4;
          if (lVar14 != 0) {
            __ZdlPv(lVar14);
            lVar8 = plVar7[2];
            lVar26 = plVar7[3];
          }
          goto LAB_109953e8c;
        }
        func_0x000104c4f740();
      }
      else {
        FUN_10923f788();
      }
LAB_10995405c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109954060);
      (*pcVar4)();
    }
    _bzero(lVar12,uVar18 * 4);
    plVar7[4] = lVar12 + uVar18 * 4;
  }
LAB_109953e8c:
  iVar17 = *piVar31;
  iVar23 = piVar31[1];
  iVar9 = *(int *)(uVar28 + (long)iVar17 * 4);
  lVar14 = *(long *)(lVar8 + 0x28);
  *(undefined4 *)(lVar26 + (long)piVar31[2] * 4) = 0;
  lVar11 = *plVar29;
  piVar27 = (int *)(lVar11 + (long)iVar17 * 8);
  iVar17 = *piVar27;
  if (0 < iVar17) {
    lVar12 = 0;
    puVar2 = (uint *)(lVar11 + (long)iVar23 * 8);
    uVar18 = (ulong)*puVar2;
    lVar8 = lVar14;
    do {
      if (0 < (int)uVar18) {
        lVar33 = 0;
        do {
          *(uint *)(lVar8 + lVar33 * 4) = (int)lVar33 + puVar2[1];
          lVar33 = lVar33 + 1;
          uVar18 = (ulong)(int)*puVar2;
        } while (lVar33 < (long)uVar18);
        iVar17 = *piVar27;
      }
      lVar12 = lVar12 + 1;
      lVar8 = lVar8 + (long)iVar9 * 4;
    } while (lVar12 < iVar17);
  }
  if (1 < uVar24) {
    iVar17 = 0;
    iVar23 = 0;
    uVar18 = 1;
    do {
      piVar27 = piVar31 + uVar18 * 3;
      iVar6 = piVar27[-3];
      iVar9 = *piVar27;
      if (iVar6 == iVar9) {
        iVar6 = piVar27[1];
        if (piVar27[-2] != iVar6) {
          iVar17 = *(int *)(lVar11 + (long)piVar27[-2] * 8) + iVar17;
          goto LAB_109953f80;
        }
        *(undefined4 *)(lVar26 + (long)piVar27[2] * 4) =
             *(undefined4 *)(lVar26 + (long)piVar27[-1] * 4);
      }
      else {
        iVar17 = 0;
        iVar23 = iVar23 + *(int *)(lVar11 + (long)iVar6 * 8) * *(int *)(uVar28 + (long)iVar6 * 4);
        iVar6 = piVar27[1];
LAB_109953f80:
        iVar3 = *(int *)(uVar28 + (long)iVar9 * 4);
        iVar25 = iVar17 + iVar23;
        *(int *)(lVar26 + (long)piVar27[2] * 4) = iVar25;
        piVar27 = (int *)(lVar11 + (long)iVar9 * 8);
        iVar9 = *piVar27;
        if (0 < iVar9) {
          lVar12 = 0;
          puVar2 = (uint *)(lVar11 + (long)iVar6 * 8);
          uVar15 = (ulong)*puVar2;
          do {
            if (0 < (int)uVar15) {
              lVar8 = 0;
              do {
                *(uint *)(lVar14 + (long)iVar25 * 4 + lVar8 * 4) = (int)lVar8 + puVar2[1];
                lVar8 = lVar8 + 1;
                uVar15 = (ulong)(int)*puVar2;
              } while (lVar8 < (long)uVar15);
              iVar9 = *piVar27;
            }
            lVar12 = lVar12 + 1;
            iVar25 = iVar25 + iVar3;
          } while (lVar12 < iVar9);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar24);
  }
  if (uVar28 != 0) {
    __ZdlPv(uVar28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar31);
  return;
}



/* Entry: 109953828; end: 1099540cb;  */

void FUN_109953828(long *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  int *piVar29;
  int *piVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  long lVar34;
  
  iVar15 = *(int *)((long)param_1 + 0xc);
  lVar12 = (long)(int)param_1[1];
  if ((int)param_1[1] < iVar15) {
    piVar32 = (int *)0x0;
    piVar25 = (int *)0x0;
    piVar29 = (int *)0x0;
    lVar9 = *(long *)(*param_1 + 0x20);
    do {
      lVar10 = *(long *)(lVar9 + 0x18) + lVar12 * 0x20;
      plVar27 = (long *)(lVar10 + 8);
      lVar7 = *plVar27;
      lVar24 = *(long *)(lVar10 + 0x10);
      if (lVar24 - lVar7 != 0) {
        uVar22 = 0;
        uVar16 = lVar24 - lVar7 >> 3;
        do {
          uVar20 = 0;
          if (param_2 != 1) {
            uVar20 = (uint)uVar22;
          }
          if (param_2 == 1) {
            uVar16 = uVar22 + 1;
          }
          if ((int)uVar20 < (int)uVar16) {
            piVar1 = (int *)(lVar7 + uVar22 * 8);
            lVar7 = (ulong)uVar20 << 3;
            lVar24 = (uVar16 & 0xffffffff) - (ulong)uVar20;
            piVar30 = piVar29;
            do {
              lVar34 = *plVar27;
              lVar31 = (long)piVar25 - (long)piVar30;
              lVar33 = (lVar31 >> 2) * -0x5555555555555555;
              iVar15 = (int)lVar33;
              if (piVar25 < piVar32) {
                iVar21 = *(int *)(lVar34 + lVar7);
                *piVar25 = *piVar1;
                piVar25[1] = iVar21;
                piVar25[2] = iVar15;
                piVar29 = piVar30;
              }
              else {
                uVar16 = lVar33 + 1;
                if (0x1555555555555555 < uVar16) {
                  FUN_109954344();
                  goto LAB_10995405c;
                }
                lVar33 = (long)piVar32 - (long)piVar30 >> 2;
                uVar26 = lVar33 * 0x5555555555555556;
                if (uVar26 < uVar16 || uVar26 - uVar16 == 0) {
                  uVar26 = uVar16;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar33 * -0x5555555555555555)) {
                  uVar26 = 0x1555555555555555;
                }
                if (0x1555555555555555 < uVar26) {
                  func_0x000104c4f740();
                  goto LAB_10995405c;
                }
                lVar33 = uVar26 * 0xc;
                __Znwm();
                piVar25 = (int *)(lVar33 + lVar31);
                piVar32 = (int *)(lVar33 + uVar26 * 0xc);
                iVar21 = *(int *)(lVar34 + lVar7);
                *piVar25 = *piVar1;
                piVar25[1] = iVar21;
                piVar25[2] = iVar15;
                uVar16 = SUB168(SEXT816(lVar31) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                piVar29 = piVar25 + ((uVar16 >> 1) - ((long)uVar16 >> 0x3f)) * 3;
                _memcpy(piVar29,piVar30,lVar31);
                if (piVar30 != (int *)0x0) {
                  __ZdlPv(piVar30);
                }
              }
              piVar25 = piVar25 + 3;
              lVar7 = lVar7 + 8;
              lVar24 = lVar24 + -1;
              piVar30 = piVar29;
            } while (lVar24 != 0);
            lVar7 = *plVar27;
            lVar24 = *(long *)(lVar10 + 0x10);
          }
          uVar22 = uVar22 + 1;
          uVar16 = lVar24 - lVar7 >> 3;
        } while (uVar22 < uVar16);
        iVar15 = *(int *)((long)param_1 + 0xc);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar15);
  }
  else {
    piVar25 = (int *)0x0;
    piVar29 = (int *)0x0;
  }
  lVar9 = (long)piVar25 - (long)piVar29 >> 2;
  uVar22 = lVar9 * -0x5555555555555555;
  lVar12 = 0;
  if (piVar25 != piVar29) {
    lVar12 = LZCOUNT(uVar22) * -2 + 0x7e;
  }
  FUN_109954358(piVar29,piVar25,lVar12,1);
  plVar27 = *(long **)(*param_1 + 0x20);
  lVar12 = *plVar27;
  uVar16 = plVar27[1] - lVar12;
  if (uVar16 == 0) {
    uVar26 = 0;
    lVar10 = 0;
  }
  else {
    if ((long)uVar16 < 0) {
      FUN_10923f788();
      goto LAB_10995405c;
    }
    uVar26 = uVar16 >> 1;
    __Znwm();
    _bzero();
    lVar10 = uVar26 + (uVar16 >> 1);
  }
  if (0 < (long)(lVar10 - uVar26)) {
    _bzero(uVar26);
  }
  *(undefined4 *)(uVar26 + (long)*piVar29 * 4) = *(undefined4 *)(lVar12 + (long)piVar29[1] * 8);
  if (1 < uVar22) {
    lVar10 = uVar22 - 1;
    piVar25 = piVar29 + 4;
    do {
      iVar15 = piVar25[-1];
      if ((iVar15 != piVar25[-4]) || (*piVar25 != piVar25[-3])) {
        *(int *)(uVar26 + (long)iVar15 * 4) =
             *(int *)(uVar26 + (long)iVar15 * 4) + *(int *)(lVar12 + (long)*piVar25 * 8);
      }
      piVar25 = piVar25 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  lVar7 = 0x90;
  __Znwm();
  FUN_1099225b8();
  *(int *)(lVar7 + 0x58) = param_2;
  plVar28 = *(long **)(*param_1 + 0x20);
  uVar16 = plVar28[1] - *plVar28 >> 3;
  lVar10 = *(long *)(lVar7 + 0x60);
  lVar12 = *(long *)(lVar7 + 0x68);
  lVar24 = lVar12 - lVar10;
  uVar13 = lVar24 >> 2;
  if (uVar13 < uVar16) {
    uVar13 = uVar16 - uVar13;
    if (uVar13 <= (ulong)(*(long *)(lVar7 + 0x70) - lVar12 >> 2)) {
      _bzero(lVar12,uVar13 * 4);
      lVar12 = lVar12 + uVar13 * 4;
      goto LAB_109953c24;
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(long *)(lVar7 + 0x70) - lVar10;
      uVar17 = (long)uVar14 >> 1;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (0x7ffffffffffffffb < uVar14) {
        uVar17 = 0x3fffffffffffffff;
      }
      if (uVar17 >> 0x3e == 0) {
        lVar12 = uVar17 << 2;
        __Znwm();
        _bzero(lVar12 + lVar24,uVar13 * 4);
        _memcpy(lVar12,lVar10,lVar24);
        *(long *)(lVar7 + 0x60) = lVar12;
        *(ulong *)(lVar7 + 0x68) = lVar12 + lVar24 + uVar13 * 4;
        *(ulong *)(lVar7 + 0x70) = lVar12 + uVar17 * 4;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
        goto LAB_109953c28;
      }
LAB_109954048:
      func_0x000104c4f740();
      goto LAB_10995405c;
    }
LAB_109954040:
    FUN_10923f788();
    goto LAB_10995405c;
  }
  if (uVar16 < uVar13) {
    lVar12 = lVar10 + uVar16 * 4;
LAB_109953c24:
    *(long *)(lVar7 + 0x68) = lVar12;
  }
LAB_109953c28:
  uVar16 = plVar28[1] - *plVar28 >> 3;
  lVar10 = *(long *)(lVar7 + 0x78);
  lVar12 = *(long *)(lVar7 + 0x80);
  lVar24 = lVar12 - lVar10;
  uVar13 = lVar24 >> 2;
  if (uVar13 < uVar16) {
    uVar13 = uVar16 - uVar13;
    if ((ulong)(*(long *)(lVar7 + 0x88) - lVar12 >> 2) < uVar13) {
      if (uVar16 >> 0x3e != 0) goto LAB_109954040;
      uVar14 = *(long *)(lVar7 + 0x88) - lVar10;
      uVar17 = (long)uVar14 >> 1;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (0x7ffffffffffffffb < uVar14) {
        uVar17 = 0x3fffffffffffffff;
      }
      if (uVar17 >> 0x3e != 0) goto LAB_109954048;
      lVar12 = uVar17 << 2;
      __Znwm();
      _bzero(lVar12 + lVar24,uVar13 * 4);
      _memcpy(lVar12,lVar10,lVar24);
      *(long *)(lVar7 + 0x78) = lVar12;
      *(ulong *)(lVar7 + 0x80) = lVar12 + lVar24 + uVar13 * 4;
      *(ulong *)(lVar7 + 0x88) = lVar12 + uVar17 * 4;
      if (lVar10 != 0) {
        __ZdlPv(lVar10);
      }
    }
    else {
      _bzero(lVar12,uVar13 * 4);
      lVar12 = lVar12 + uVar13 * 4;
LAB_109953d00:
      *(long *)(lVar7 + 0x80) = lVar12;
    }
  }
  else if (uVar16 < uVar13) {
    lVar12 = lVar10 + uVar16 * 4;
    goto LAB_109953d00;
  }
  lVar12 = plVar28[1] - *plVar28;
  if (lVar12 != 0) {
    lVar12 = lVar12 >> 3;
    puVar11 = (undefined4 *)*plVar28;
    puVar18 = *(undefined4 **)(lVar7 + 0x60);
    puVar19 = *(undefined4 **)(lVar7 + 0x78);
    do {
      uVar3 = *puVar11;
      *puVar18 = uVar3;
      *puVar19 = uVar3;
      lVar12 = lVar12 + -1;
      puVar11 = puVar11 + 2;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    } while (lVar12 != 0);
  }
  plVar28 = (long *)param_1[2];
  param_1[2] = lVar7;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
    lVar7 = param_1[2];
  }
  piVar25 = *(int **)(lVar7 + 0x10);
  *piVar25 = 0;
  lVar12 = *plVar27;
  lVar10 = plVar27[1] - lVar12;
  if (lVar10 != 0) {
    iVar15 = 0;
    lVar24 = 0;
    do {
      piVar32 = (int *)(lVar12 + lVar24 * 8);
      if (0 < *piVar32) {
        iVar21 = 0;
        do {
          iVar15 = *(int *)(uVar26 + lVar24 * 4) + iVar15;
          piVar25 = piVar25 + 1;
          *piVar25 = iVar15;
          iVar21 = iVar21 + 1;
        } while (iVar21 < *piVar32);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != lVar10 >> 3);
  }
  lVar12 = param_1[3];
  lVar10 = param_1[4];
  lVar31 = lVar10 - lVar12;
  uVar16 = lVar31 >> 2;
  lVar24 = lVar12;
  if (uVar22 < uVar16 || uVar22 - uVar16 == 0) {
    if (uVar22 < uVar16) {
      param_1[4] = lVar12 + lVar9 * -0x5555555555555554;
    }
  }
  else {
    uVar16 = uVar22 - uVar16;
    if ((ulong)(param_1[5] - lVar10 >> 2) < uVar16) {
      if (uVar22 >> 0x3e == 0) {
        uVar17 = param_1[5] - lVar12;
        uVar13 = (long)uVar17 >> 1;
        if (uVar13 <= uVar22) {
          uVar13 = uVar22;
        }
        if (0x7ffffffffffffffb < uVar17) {
          uVar13 = 0x3fffffffffffffff;
        }
        if (uVar13 >> 0x3e == 0) {
          lVar24 = uVar13 << 2;
          __Znwm();
          _bzero(lVar24 + lVar31,uVar16 * 4);
          _memcpy(lVar24,lVar12,lVar31);
          param_1[3] = lVar24;
          param_1[4] = lVar24 + lVar31 + uVar16 * 4;
          param_1[5] = lVar24 + uVar13 * 4;
          if (lVar12 != 0) {
            __ZdlPv(lVar12);
            lVar7 = param_1[2];
            lVar24 = param_1[3];
          }
          goto LAB_109953e8c;
        }
        func_0x000104c4f740();
      }
      else {
        FUN_10923f788();
      }
LAB_10995405c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109954060);
      (*pcVar5)();
    }
    _bzero(lVar10,uVar16 * 4);
    param_1[4] = lVar10 + uVar16 * 4;
  }
LAB_109953e8c:
  iVar15 = *piVar29;
  iVar21 = piVar29[1];
  iVar8 = *(int *)(uVar26 + (long)iVar15 * 4);
  lVar12 = *(long *)(lVar7 + 0x28);
  *(undefined4 *)(lVar24 + (long)piVar29[2] * 4) = 0;
  lVar9 = *plVar27;
  piVar25 = (int *)(lVar9 + (long)iVar15 * 8);
  iVar15 = *piVar25;
  if (0 < iVar15) {
    lVar10 = 0;
    puVar2 = (uint *)(lVar9 + (long)iVar21 * 8);
    uVar16 = (ulong)*puVar2;
    lVar7 = lVar12;
    do {
      if (0 < (int)uVar16) {
        lVar31 = 0;
        do {
          *(uint *)(lVar7 + lVar31 * 4) = (int)lVar31 + puVar2[1];
          lVar31 = lVar31 + 1;
          uVar16 = (ulong)(int)*puVar2;
        } while (lVar31 < (long)uVar16);
        iVar15 = *piVar25;
      }
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + (long)iVar8 * 4;
    } while (lVar10 < iVar15);
  }
  if (1 < uVar22) {
    iVar15 = 0;
    iVar21 = 0;
    uVar16 = 1;
    do {
      piVar25 = piVar29 + uVar16 * 3;
      iVar6 = piVar25[-3];
      iVar8 = *piVar25;
      if (iVar6 == iVar8) {
        iVar6 = piVar25[1];
        if (piVar25[-2] != iVar6) {
          iVar15 = *(int *)(lVar9 + (long)piVar25[-2] * 8) + iVar15;
          goto LAB_109953f80;
        }
        *(undefined4 *)(lVar24 + (long)piVar25[2] * 4) =
             *(undefined4 *)(lVar24 + (long)piVar25[-1] * 4);
      }
      else {
        iVar15 = 0;
        iVar21 = iVar21 + *(int *)(lVar9 + (long)iVar6 * 8) * *(int *)(uVar26 + (long)iVar6 * 4);
        iVar6 = piVar25[1];
LAB_109953f80:
        iVar4 = *(int *)(uVar26 + (long)iVar8 * 4);
        iVar23 = iVar15 + iVar21;
        *(int *)(lVar24 + (long)piVar25[2] * 4) = iVar23;
        piVar25 = (int *)(lVar9 + (long)iVar8 * 8);
        iVar8 = *piVar25;
        if (0 < iVar8) {
          lVar10 = 0;
          puVar2 = (uint *)(lVar9 + (long)iVar6 * 8);
          uVar13 = (ulong)*puVar2;
          do {
            if (0 < (int)uVar13) {
              lVar7 = 0;
              do {
                *(uint *)(lVar12 + (long)iVar23 * 4 + lVar7 * 4) = (int)lVar7 + puVar2[1];
                lVar7 = lVar7 + 1;
                uVar13 = (ulong)(int)*puVar2;
              } while (lVar7 < (long)uVar13);
              iVar8 = *piVar25;
            }
            lVar10 = lVar10 + 1;
            iVar23 = iVar23 + iVar4;
          } while (lVar10 < iVar8);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar22);
  }
  if (uVar26 != 0) {
    __ZdlPv(uVar26);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar29);
  return;
}



/* Entry: 1099540cc; end: 109954127;  */

long * FUN_1099540cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x18);
      __ZdlPv();
    }
    plVar1 = *(long **)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 109954128; end: 109954343;  */

void FUN_109954128(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  ulong uVar24;
  int *piVar25;
  int iVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  int *piVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  int *piVar36;
  long lVar37;
  int *piVar38;
  undefined8 uStack_1a0;
  int iStack_198;
  long alStack_d8 [12];
  int iStack_74;
  int *piStack_70;
  
  lVar15 = *(long *)(*param_1 + 0x18);
  plVar7 = *(long **)(*param_1 + 0x20);
  lVar34 = param_1[2];
  iVar16 = *(int *)(lVar34 + 0x58);
  lVar27 = *(long *)(lVar34 + 0x40);
  if (0 < *(long *)(lVar34 + 0x48) - lVar27) {
    _bzero(lVar27);
  }
  iVar22 = *(int *)((long)param_1 + 0xc);
  lVar34 = (long)(int)param_1[1];
  if ((int)param_1[1] < iVar22) {
    uVar29 = 0;
    do {
      puVar3 = (undefined4 *)(plVar7[3] + lVar34 * 0x20);
      lVar18 = *(long *)(puVar3 + 2);
      lVar37 = *(long *)(puVar3 + 4);
      if (lVar37 - lVar18 != 0) {
        uVar33 = 0;
        uVar24 = lVar37 - lVar18 >> 3;
        do {
          bVar10 = iVar16 != 1;
          uVar32 = 0;
          if (bVar10) {
            uVar32 = (uint)uVar33;
          }
          if (!bVar10) {
            uVar24 = uVar33 + 1;
          }
          if ((int)uVar32 < (int)uVar24) {
            piVar11 = (int *)(lVar18 + uVar33 * 8);
            uVar6 = *(undefined4 *)(*plVar7 + (long)*piVar11 * 8);
            lVar37 = (uVar24 & 0xffffffff) - (ulong)uVar32;
            lVar18 = (ulong)uVar32 << 3;
            uVar35 = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
            uVar29 = (ulong)(((int)uVar29 + (int)uVar24) - uVar32);
            do {
              FUN_109904224(lVar15 + (long)piVar11[1] * 8,*puVar3,uVar6,
                            lVar15 + (long)((int *)(*(long *)(puVar3 + 2) + lVar18))[1] * 8,*puVar3,
                            *(undefined4 *)
                             (*plVar7 + (long)*(int *)(*(long *)(puVar3 + 2) + lVar18) * 8),
                            lVar27 + (long)*(int *)(param_1[3] + uVar35) * 8,0);
              lVar18 = lVar18 + 8;
              uVar35 = uVar35 + 4;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            lVar18 = *(long *)(puVar3 + 2);
            lVar37 = *(long *)(puVar3 + 4);
          }
          uVar33 = uVar33 + 1;
          uVar24 = lVar37 - lVar18 >> 3;
        } while (uVar33 < uVar24);
        iVar22 = *(int *)((long)param_1 + 0xc);
      }
      iStack_74 = (int)uVar29;
      lVar34 = lVar34 + 1;
    } while (lVar34 < iVar22);
  }
  else {
    iStack_74 = 0;
  }
  alStack_d8[0] = param_1[4] - param_1[3] >> 2;
  if (alStack_d8[0] != iStack_74) {
    piVar11 = &iStack_74;
    FUN_1099562f4(piVar11,alStack_d8,&UNK_10f58c678);
    if (piVar11 != (int *)0x0) {
      piVar14 = (int *)&UNK_10f58c4fd;
      uVar29 = 0;
      lVar15 = 0x14a;
      piStack_70 = piVar11;
      FUN_1099ab8e4(alStack_d8);
      func_0x0001099ab7c0(alStack_d8);
      piVar11 = (int *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
LAB_109954388:
      piVar21 = piVar14 + -3;
      piVar38 = piVar14 + -6;
      piVar30 = piVar14 + -9;
      piVar23 = piVar11;
LAB_109954398:
      do {
        piVar11 = piVar23;
        uVar24 = (long)piVar14 - (long)piVar11;
        uVar33 = ((long)uVar24 >> 2) * -0x5555555555555555;
        if (uVar33 - 2 == 0 || (long)uVar33 < 2) {
          if (uVar33 < 2) {
            return;
          }
          if (uVar33 == 2) {
            piVar23 = piVar14 + -3;
            iVar22 = *piVar23;
            iVar16 = *piVar11;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar11[1];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[2]);
                bVar10 = piVar14[-1] - piVar11[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            uVar19 = *(undefined8 *)piVar11;
            iVar16 = piVar11[2];
            uVar20 = *(undefined8 *)piVar23;
            piVar11[2] = piVar14[-1];
            *(undefined8 *)piVar11 = uVar20;
            piVar14[-1] = iVar16;
            *(undefined8 *)piVar23 = uVar19;
            return;
          }
        }
        else {
          if (uVar33 == 3) {
            piVar23 = piVar11 + 3;
            iVar22 = *piVar23;
            iVar16 = *piVar11;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar16 = piVar11[4];
              iVar17 = piVar11[1];
              bVar9 = SBORROW4(iVar16,iVar17);
              bVar10 = iVar16 - iVar17 < 0;
              if (iVar16 == iVar17) {
                bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                bVar10 = piVar11[5] - piVar11[2] < 0;
              }
            }
            if (bVar10 != bVar9) {
              iVar16 = *piVar21;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar14[-2];
                iVar16 = piVar11[4];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar14[-1],piVar11[5]);
                  bVar10 = piVar14[-1] - piVar11[5] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar11;
                iVar16 = piVar11[2];
                uVar20 = *(undefined8 *)piVar21;
                piVar11[2] = piVar14[-1];
                *(undefined8 *)piVar11 = uVar20;
                piVar14[-1] = iVar16;
                *(undefined8 *)piVar21 = uVar19;
                return;
              }
              uVar19 = *(undefined8 *)piVar11;
              iVar16 = piVar11[2];
              *(undefined8 *)piVar11 = *(undefined8 *)piVar23;
              piVar11[2] = piVar11[5];
              *(undefined8 *)piVar23 = uVar19;
              piVar11[5] = iVar16;
              iVar16 = *piVar21;
              iVar22 = piVar11[3];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar14[-2];
                iVar16 = piVar11[4];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar14[-1],piVar11[5]);
                  bVar10 = piVar14[-1] - piVar11[5] < 0;
                }
              }
              if (bVar10 == bVar9) {
                return;
              }
              uVar19 = *(undefined8 *)piVar23;
              iVar16 = piVar11[5];
              iVar22 = piVar14[-1];
              *(undefined8 *)piVar23 = *(undefined8 *)piVar21;
              piVar11[5] = iVar22;
              piVar14[-1] = iVar16;
              *(undefined8 *)piVar21 = uVar19;
              return;
            }
            iVar16 = *piVar21;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar22 = piVar14[-2];
              iVar16 = piVar11[4];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[5]);
                bVar10 = piVar14[-1] - piVar11[5] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            uVar19 = *(undefined8 *)piVar23;
            iVar16 = piVar11[5];
            iVar22 = piVar14[-1];
            *(undefined8 *)piVar23 = *(undefined8 *)piVar21;
            piVar11[5] = iVar22;
            piVar14[-1] = iVar16;
            *(undefined8 *)piVar21 = uVar19;
            iVar16 = piVar11[3];
            iVar22 = *piVar11;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar11[4];
              iVar22 = piVar11[1];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                bVar10 = piVar11[5] - piVar11[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            uVar19 = *(undefined8 *)piVar11;
            iVar16 = piVar11[2];
            *(undefined8 *)piVar11 = *(undefined8 *)piVar23;
            piVar11[2] = piVar11[5];
            *(undefined8 *)piVar23 = uVar19;
            piVar11[5] = iVar16;
            return;
          }
          if (uVar33 == 4) {
            piVar23 = piVar11 + 3;
            piVar30 = piVar11 + 6;
            iVar16 = *piVar23;
            iVar22 = *piVar11;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar22 = piVar11[4];
              iVar17 = piVar11[1];
              bVar9 = SBORROW4(iVar22,iVar17);
              bVar10 = iVar22 - iVar17 < 0;
              if (iVar22 == iVar17) {
                bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                bVar10 = piVar11[5] - piVar11[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              iVar22 = *piVar30;
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                iVar16 = piVar11[7];
                iVar22 = piVar11[4];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar11[8],piVar11[5]);
                  bVar10 = piVar11[8] - piVar11[5] < 0;
                }
              }
              if (bVar10 != bVar9) {
                iVar16 = piVar11[5];
                uVar19 = *(undefined8 *)piVar23;
                *(undefined8 *)piVar23 = *(undefined8 *)piVar30;
                piVar11[5] = piVar11[8];
                *(undefined8 *)piVar30 = uVar19;
                piVar11[8] = iVar16;
                iVar16 = *piVar23;
                iVar22 = *piVar11;
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  iVar16 = piVar11[4];
                  iVar22 = piVar11[1];
                  bVar9 = SBORROW4(iVar16,iVar22);
                  bVar10 = iVar16 - iVar22 < 0;
                  if (iVar16 == iVar22) {
                    bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                    bVar10 = piVar11[5] - piVar11[2] < 0;
                  }
                }
                if (bVar10 != bVar9) {
                  iVar16 = piVar11[2];
                  uVar19 = *(undefined8 *)piVar11;
                  *(undefined8 *)piVar11 = *(undefined8 *)piVar23;
                  piVar11[2] = piVar11[5];
                  *(undefined8 *)piVar23 = uVar19;
                  piVar11[5] = iVar16;
                }
              }
            }
            else {
              iVar22 = *piVar30;
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                iVar16 = piVar11[7];
                iVar22 = piVar11[4];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar11[8],piVar11[5]);
                  bVar10 = piVar11[8] - piVar11[5] < 0;
                }
              }
              if (bVar10 == bVar9) {
                iVar16 = piVar11[2];
                uVar19 = *(undefined8 *)piVar11;
                *(undefined8 *)piVar11 = *(undefined8 *)piVar23;
                piVar11[2] = piVar11[5];
                *(undefined8 *)piVar23 = uVar19;
                piVar11[5] = iVar16;
                iVar16 = *piVar30;
                iVar22 = (int)uVar19;
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  iVar16 = piVar11[7];
                  iVar22 = piVar11[4];
                  bVar9 = SBORROW4(iVar16,iVar22);
                  bVar10 = iVar16 - iVar22 < 0;
                  if (iVar16 == iVar22) {
                    bVar9 = SBORROW4(piVar11[8],piVar11[5]);
                    bVar10 = piVar11[8] - piVar11[5] < 0;
                  }
                }
                if (bVar10 == bVar9) goto LAB_109955b94;
                iVar16 = piVar11[5];
                uVar19 = *(undefined8 *)piVar23;
                *(undefined8 *)piVar23 = *(undefined8 *)piVar30;
                piVar11[5] = piVar11[8];
              }
              else {
                iVar16 = piVar11[2];
                uVar19 = *(undefined8 *)piVar11;
                *(undefined8 *)piVar11 = *(undefined8 *)piVar30;
                piVar11[2] = piVar11[8];
              }
              *(undefined8 *)piVar30 = uVar19;
              piVar11[8] = iVar16;
            }
LAB_109955b94:
            iVar16 = *piVar21;
            iVar22 = *piVar30;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar14[-2];
              iVar22 = piVar11[7];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[8]);
                bVar10 = piVar14[-1] - piVar11[8] < 0;
              }
            }
            if (bVar10 != bVar9) {
              iVar16 = piVar11[8];
              uVar19 = *(undefined8 *)piVar30;
              iVar22 = piVar14[-1];
              *(undefined8 *)piVar30 = *(undefined8 *)piVar21;
              piVar11[8] = iVar22;
              *(undefined8 *)piVar21 = uVar19;
              piVar14[-1] = iVar16;
              iVar16 = *piVar30;
              iVar22 = *piVar23;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar11[7];
                iVar22 = piVar11[4];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar11[8],piVar11[5]);
                  bVar10 = piVar11[8] - piVar11[5] < 0;
                }
              }
              if (bVar10 != bVar9) {
                iVar16 = piVar11[5];
                uVar19 = *(undefined8 *)piVar23;
                *(undefined8 *)piVar23 = *(undefined8 *)piVar30;
                piVar11[5] = piVar11[8];
                *(undefined8 *)piVar30 = uVar19;
                piVar11[8] = iVar16;
                iVar16 = *piVar23;
                iVar22 = *piVar11;
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  iVar16 = piVar11[4];
                  iVar22 = piVar11[1];
                  bVar9 = SBORROW4(iVar16,iVar22);
                  bVar10 = iVar16 - iVar22 < 0;
                  if (iVar16 == iVar22) {
                    bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                    bVar10 = piVar11[5] - piVar11[2] < 0;
                  }
                }
                if (bVar10 != bVar9) {
                  iVar16 = piVar11[2];
                  uVar19 = *(undefined8 *)piVar11;
                  *(undefined8 *)piVar11 = *(undefined8 *)piVar23;
                  piVar11[2] = piVar11[5];
                  *(undefined8 *)piVar23 = uVar19;
                  piVar11[5] = iVar16;
                }
              }
            }
            return;
          }
          if (uVar33 == 5) {
            FUN_109955a08(piVar11,piVar11 + 3,piVar11 + 6,piVar11 + 9);
            piVar23 = piVar14 + -3;
            iVar22 = *piVar23;
            iVar16 = piVar11[9];
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar11[10];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[0xb]);
                bVar10 = piVar14[-1] - piVar11[0xb] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            uVar19 = *(undefined8 *)(piVar11 + 9);
            iVar22 = piVar11[0xb];
            iVar16 = piVar14[-1];
            *(undefined8 *)(piVar11 + 9) = *(undefined8 *)piVar23;
            piVar11[0xb] = iVar16;
            piVar14[-1] = iVar22;
            *(undefined8 *)piVar23 = uVar19;
            iVar16 = piVar11[9];
            iVar22 = piVar11[6];
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar11[10];
              iVar22 = piVar11[7];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar11[0xb],piVar11[8]);
                bVar10 = piVar11[0xb] - piVar11[8] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            iVar16 = piVar11[8];
            uVar19 = *(undefined8 *)(piVar11 + 6);
            *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar11 + 9);
            piVar11[8] = piVar11[0xb];
            *(undefined8 *)(piVar11 + 9) = uVar19;
            piVar11[0xb] = iVar16;
            iVar16 = piVar11[6];
            iVar22 = piVar11[3];
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar11[7];
              iVar22 = piVar11[4];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar11[8],piVar11[5]);
                bVar10 = piVar11[8] - piVar11[5] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            iVar16 = piVar11[5];
            uVar19 = *(undefined8 *)(piVar11 + 3);
            *(undefined8 *)(piVar11 + 3) = *(undefined8 *)(piVar11 + 6);
            piVar11[5] = piVar11[8];
            *(undefined8 *)(piVar11 + 6) = uVar19;
            piVar11[8] = iVar16;
            iVar16 = piVar11[3];
            iVar22 = *piVar11;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar11[4];
              iVar22 = piVar11[1];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar11[5],piVar11[2]);
                bVar10 = piVar11[5] - piVar11[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              return;
            }
            uVar19 = *(undefined8 *)piVar11;
            iVar16 = piVar11[2];
            *(undefined8 *)piVar11 = *(undefined8 *)(piVar11 + 3);
            piVar11[2] = piVar11[5];
            *(undefined8 *)(piVar11 + 3) = uVar19;
            piVar11[5] = iVar16;
            return;
          }
        }
        if ((long)uVar24 < 0x120) {
          piVar23 = piVar11 + 3;
          if ((uVar29 & 1) == 0) {
            if (piVar11 == piVar14 || piVar23 == piVar14) {
              return;
            }
            goto LAB_1099558c8;
          }
          if (piVar11 == piVar14 || piVar23 == piVar14) {
            return;
          }
          lVar15 = 0;
          piVar21 = piVar11;
          goto LAB_1099553a8;
        }
        if (lVar15 == 0) {
          if (piVar11 == piVar14) {
            return;
          }
          uVar35 = uVar33 - 2 >> 1;
          uVar29 = uVar35;
          goto LAB_1099554a8;
        }
        piVar23 = piVar11 + (uVar33 >> 1) * 3;
        if (uVar24 < 0x601) {
          iVar16 = *piVar11;
          iVar22 = *piVar23;
          bVar9 = SBORROW4(iVar16,iVar22);
          bVar10 = iVar16 - iVar22 < 0;
          if (iVar16 == iVar22) {
            iVar22 = piVar11[1];
            iVar17 = piVar23[1];
            bVar9 = SBORROW4(iVar22,iVar17);
            bVar10 = iVar22 - iVar17 < 0;
            if (iVar22 == iVar17) {
              bVar9 = SBORROW4(piVar11[2],piVar23[2]);
              bVar10 = piVar11[2] - piVar23[2] < 0;
            }
          }
          if (bVar10 == bVar9) {
            iVar22 = *piVar21;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar11[1];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[2]);
                bVar10 = piVar14[-1] - piVar11[2] < 0;
              }
            }
            if (bVar10 != bVar9) {
              uVar19 = *(undefined8 *)piVar11;
              iVar16 = piVar11[2];
              uVar20 = *(undefined8 *)piVar21;
              piVar11[2] = piVar14[-1];
              *(undefined8 *)piVar11 = uVar20;
              piVar14[-1] = iVar16;
              *(undefined8 *)piVar21 = uVar19;
              iVar16 = *piVar11;
              iVar22 = *piVar23;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar11[1];
                iVar22 = piVar23[1];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar11[2],piVar23[2]);
                  bVar10 = piVar11[2] - piVar23[2] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar23;
                iVar16 = piVar23[2];
                uVar20 = *(undefined8 *)piVar11;
                piVar23[2] = piVar11[2];
                *(undefined8 *)piVar23 = uVar20;
                piVar11[2] = iVar16;
                *(undefined8 *)piVar11 = uVar19;
              }
            }
          }
          else {
            iVar22 = *piVar21;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar11[1];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar11[2]);
                bVar10 = piVar14[-1] - piVar11[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              uVar19 = *(undefined8 *)piVar23;
              iVar16 = piVar23[2];
              uVar20 = *(undefined8 *)piVar11;
              piVar23[2] = piVar11[2];
              *(undefined8 *)piVar23 = uVar20;
              piVar11[2] = iVar16;
              *(undefined8 *)piVar11 = uVar19;
              iVar16 = *piVar21;
              iVar22 = *piVar11;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar14[-2];
                iVar16 = piVar11[1];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar14[-1],piVar11[2]);
                  bVar10 = piVar14[-1] - piVar11[2] < 0;
                }
              }
              if (bVar10 == bVar9) goto LAB_109954d40;
              uStack_1a0 = *(undefined8 *)piVar11;
              iStack_198 = piVar11[2];
              uVar19 = *(undefined8 *)piVar21;
              piVar11[2] = piVar14[-1];
              *(undefined8 *)piVar11 = uVar19;
            }
            else {
              uStack_1a0 = *(undefined8 *)piVar23;
              iStack_198 = piVar23[2];
              uVar19 = *(undefined8 *)piVar21;
              piVar23[2] = piVar14[-1];
              *(undefined8 *)piVar23 = uVar19;
            }
            piVar14[-1] = iStack_198;
            *(undefined8 *)piVar21 = uStack_1a0;
          }
        }
        else {
          iVar16 = *piVar23;
          iVar22 = *piVar11;
          bVar9 = SBORROW4(iVar16,iVar22);
          bVar10 = iVar16 - iVar22 < 0;
          if (iVar16 == iVar22) {
            iVar22 = piVar23[1];
            iVar17 = piVar11[1];
            bVar9 = SBORROW4(iVar22,iVar17);
            bVar10 = iVar22 - iVar17 < 0;
            if (iVar22 == iVar17) {
              bVar9 = SBORROW4(piVar23[2],piVar11[2]);
              bVar10 = piVar23[2] - piVar11[2] < 0;
            }
          }
          if (bVar10 == bVar9) {
            iVar22 = *piVar21;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar23[1];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar23[2]);
                bVar10 = piVar14[-1] - piVar23[2] < 0;
              }
            }
            if (bVar10 != bVar9) {
              uVar19 = *(undefined8 *)piVar23;
              iVar16 = piVar23[2];
              uVar20 = *(undefined8 *)piVar21;
              piVar23[2] = piVar14[-1];
              *(undefined8 *)piVar23 = uVar20;
              piVar14[-1] = iVar16;
              *(undefined8 *)piVar21 = uVar19;
              iVar16 = *piVar23;
              iVar22 = *piVar11;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar23[1];
                iVar22 = piVar11[1];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar23[2],piVar11[2]);
                  bVar10 = piVar23[2] - piVar11[2] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar11;
                iVar16 = piVar11[2];
                uVar20 = *(undefined8 *)piVar23;
                piVar11[2] = piVar23[2];
                *(undefined8 *)piVar11 = uVar20;
                piVar23[2] = iVar16;
                *(undefined8 *)piVar23 = uVar19;
              }
            }
          }
          else {
            iVar22 = *piVar21;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar22 = piVar14[-2];
              iVar16 = piVar23[1];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-1],piVar23[2]);
                bVar10 = piVar14[-1] - piVar23[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              uVar19 = *(undefined8 *)piVar11;
              iVar16 = piVar11[2];
              uVar20 = *(undefined8 *)piVar23;
              piVar11[2] = piVar23[2];
              *(undefined8 *)piVar11 = uVar20;
              piVar23[2] = iVar16;
              *(undefined8 *)piVar23 = uVar19;
              iVar16 = *piVar21;
              iVar22 = *piVar23;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar14[-2];
                iVar16 = piVar23[1];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar14[-1],piVar23[2]);
                  bVar10 = piVar14[-1] - piVar23[2] < 0;
                }
              }
              if (bVar10 == bVar9) goto LAB_109954710;
              uStack_1a0 = *(undefined8 *)piVar23;
              iStack_198 = piVar23[2];
              uVar19 = *(undefined8 *)piVar21;
              piVar23[2] = piVar14[-1];
              *(undefined8 *)piVar23 = uVar19;
            }
            else {
              uStack_1a0 = *(undefined8 *)piVar11;
              iStack_198 = piVar11[2];
              uVar19 = *(undefined8 *)piVar21;
              piVar11[2] = piVar14[-1];
              *(undefined8 *)piVar11 = uVar19;
            }
            piVar14[-1] = iStack_198;
            *(undefined8 *)piVar21 = uStack_1a0;
          }
LAB_109954710:
          piVar13 = piVar11 + 3;
          iVar16 = *piVar13;
          piVar12 = piVar23 + -3;
          iVar22 = *piVar12;
          bVar9 = SBORROW4(iVar22,iVar16);
          bVar10 = iVar22 - iVar16 < 0;
          if (iVar22 == iVar16) {
            iVar17 = piVar23[-2];
            iVar16 = piVar11[4];
            bVar9 = SBORROW4(iVar17,iVar16);
            bVar10 = iVar17 - iVar16 < 0;
            if (iVar17 == iVar16) {
              bVar9 = SBORROW4(piVar23[-1],piVar11[5]);
              bVar10 = piVar23[-1] - piVar11[5] < 0;
            }
          }
          if (bVar10 == bVar9) {
            iVar16 = *piVar38;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar14[-5];
              iVar22 = piVar23[-2];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar14[-4],piVar23[-1]);
                bVar10 = piVar14[-4] - piVar23[-1] < 0;
              }
            }
            if (bVar10 != bVar9) {
              uVar19 = *(undefined8 *)piVar12;
              iVar16 = piVar23[-1];
              uVar20 = *(undefined8 *)piVar38;
              piVar23[-1] = piVar14[-4];
              *(undefined8 *)piVar12 = uVar20;
              piVar14[-4] = iVar16;
              *(undefined8 *)piVar38 = uVar19;
              iVar16 = *piVar12;
              iVar22 = *piVar13;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar23[-2];
                iVar16 = piVar11[4];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar23[-1],piVar11[5]);
                  bVar10 = piVar23[-1] - piVar11[5] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar13;
                iVar16 = piVar11[5];
                iVar22 = piVar23[-1];
                *(undefined8 *)piVar13 = *(undefined8 *)piVar12;
                piVar11[5] = iVar22;
                piVar23[-1] = iVar16;
                *(undefined8 *)piVar12 = uVar19;
              }
            }
          }
          else {
            iVar16 = *piVar38;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar16 = piVar14[-5];
              iVar22 = piVar23[-2];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar14[-4],piVar23[-1]);
                bVar10 = piVar14[-4] - piVar23[-1] < 0;
              }
            }
            if (bVar10 == bVar9) {
              uVar19 = *(undefined8 *)piVar13;
              iVar16 = piVar11[5];
              iVar22 = piVar23[-1];
              *(undefined8 *)piVar13 = *(undefined8 *)piVar12;
              piVar11[5] = iVar22;
              piVar23[-1] = iVar16;
              *(undefined8 *)piVar12 = uVar19;
              iVar16 = *piVar38;
              iVar22 = (int)uVar19;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar14[-5];
                iVar22 = piVar23[-2];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar14[-4],piVar23[-1]);
                  bVar10 = piVar14[-4] - piVar23[-1] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar12;
                iVar16 = piVar23[-1];
                uVar20 = *(undefined8 *)piVar38;
                piVar23[-1] = piVar14[-4];
                *(undefined8 *)piVar12 = uVar20;
                piVar14[-4] = iVar16;
                *(undefined8 *)piVar38 = uVar19;
              }
            }
            else {
              uVar19 = *(undefined8 *)piVar13;
              iVar16 = piVar11[5];
              iVar22 = piVar14[-4];
              *(undefined8 *)piVar13 = *(undefined8 *)piVar38;
              piVar11[5] = iVar22;
              piVar14[-4] = iVar16;
              *(undefined8 *)piVar38 = uVar19;
            }
          }
          piVar25 = piVar11 + 6;
          iVar16 = *piVar25;
          piVar13 = piVar23 + 3;
          iVar22 = *piVar13;
          bVar9 = SBORROW4(iVar22,iVar16);
          bVar10 = iVar22 - iVar16 < 0;
          if (iVar22 == iVar16) {
            iVar16 = piVar23[4];
            iVar17 = piVar11[7];
            bVar9 = SBORROW4(iVar16,iVar17);
            bVar10 = iVar16 - iVar17 < 0;
            if (iVar16 == iVar17) {
              bVar9 = SBORROW4(piVar23[5],piVar11[8]);
              bVar10 = piVar23[5] - piVar11[8] < 0;
            }
          }
          if (bVar10 == bVar9) {
            iVar16 = *piVar30;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar22 = piVar14[-8];
              iVar16 = piVar23[4];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-7],piVar23[5]);
                bVar10 = piVar14[-7] - piVar23[5] < 0;
              }
            }
            if (bVar10 != bVar9) {
              uVar19 = *(undefined8 *)piVar13;
              iVar16 = piVar23[5];
              uVar20 = *(undefined8 *)piVar30;
              piVar23[5] = piVar14[-7];
              *(undefined8 *)piVar13 = uVar20;
              piVar14[-7] = iVar16;
              *(undefined8 *)piVar30 = uVar19;
              iVar16 = *piVar13;
              iVar22 = *piVar25;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar23[4];
                iVar22 = piVar11[7];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar23[5],piVar11[8]);
                  bVar10 = piVar23[5] - piVar11[8] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar25;
                iVar16 = piVar11[8];
                iVar22 = piVar23[5];
                *(undefined8 *)piVar25 = *(undefined8 *)piVar13;
                piVar11[8] = iVar22;
                piVar23[5] = iVar16;
                *(undefined8 *)piVar13 = uVar19;
              }
            }
          }
          else {
            iVar16 = *piVar30;
            bVar9 = SBORROW4(iVar16,iVar22);
            bVar10 = iVar16 - iVar22 < 0;
            if (iVar16 == iVar22) {
              iVar22 = piVar14[-8];
              iVar16 = piVar23[4];
              bVar9 = SBORROW4(iVar22,iVar16);
              bVar10 = iVar22 - iVar16 < 0;
              if (iVar22 == iVar16) {
                bVar9 = SBORROW4(piVar14[-7],piVar23[5]);
                bVar10 = piVar14[-7] - piVar23[5] < 0;
              }
            }
            if (bVar10 == bVar9) {
              uVar19 = *(undefined8 *)piVar25;
              iVar16 = piVar11[8];
              iVar22 = piVar23[5];
              *(undefined8 *)piVar25 = *(undefined8 *)piVar13;
              piVar11[8] = iVar22;
              piVar23[5] = iVar16;
              *(undefined8 *)piVar13 = uVar19;
              iVar16 = *piVar30;
              iVar22 = (int)uVar19;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar22 = piVar14[-8];
                iVar16 = piVar23[4];
                bVar9 = SBORROW4(iVar22,iVar16);
                bVar10 = iVar22 - iVar16 < 0;
                if (iVar22 == iVar16) {
                  bVar9 = SBORROW4(piVar14[-7],piVar23[5]);
                  bVar10 = piVar14[-7] - piVar23[5] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar13;
                iVar16 = piVar23[5];
                uVar20 = *(undefined8 *)piVar30;
                piVar23[5] = piVar14[-7];
                *(undefined8 *)piVar13 = uVar20;
                piVar14[-7] = iVar16;
                *(undefined8 *)piVar30 = uVar19;
              }
            }
            else {
              uVar19 = *(undefined8 *)piVar25;
              iVar16 = piVar11[8];
              iVar22 = piVar14[-7];
              *(undefined8 *)piVar25 = *(undefined8 *)piVar30;
              piVar11[8] = iVar22;
              piVar14[-7] = iVar16;
              *(undefined8 *)piVar30 = uVar19;
            }
          }
          iVar16 = *piVar23;
          iVar22 = piVar23[-3];
          bVar9 = SBORROW4(iVar16,iVar22);
          bVar10 = iVar16 - iVar22 < 0;
          if (iVar16 == iVar22) {
            iVar22 = piVar23[1];
            iVar17 = piVar23[-2];
            bVar9 = SBORROW4(iVar22,iVar17);
            bVar10 = iVar22 - iVar17 < 0;
            if (iVar22 == iVar17) {
              bVar9 = SBORROW4(piVar23[2],piVar23[-1]);
              bVar10 = piVar23[2] - piVar23[-1] < 0;
            }
          }
          if (bVar10 == bVar9) {
            iVar22 = *piVar13;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar16 = piVar23[4];
              iVar22 = piVar23[1];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar23[5],piVar23[2]);
                bVar10 = piVar23[5] - piVar23[2] < 0;
              }
            }
            if (bVar10 != bVar9) {
              uVar19 = *(undefined8 *)piVar23;
              iVar16 = piVar23[2];
              *(undefined8 *)piVar23 = *(undefined8 *)piVar13;
              piVar23[2] = piVar23[5];
              piVar23[5] = iVar16;
              *(undefined8 *)piVar13 = uVar19;
              iVar16 = *piVar23;
              iVar22 = piVar23[-3];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar23[1];
                iVar22 = piVar23[-2];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar23[2],piVar23[-1]);
                  bVar10 = piVar23[2] - piVar23[-1] < 0;
                }
              }
              if (bVar10 != bVar9) {
                uVar19 = *(undefined8 *)piVar12;
                iVar16 = piVar23[-1];
                *(undefined8 *)piVar12 = *(undefined8 *)piVar23;
                piVar23[-1] = piVar23[2];
                piVar23[2] = iVar16;
                *(undefined8 *)piVar23 = uVar19;
              }
            }
          }
          else {
            iVar22 = *piVar13;
            bVar9 = SBORROW4(iVar22,iVar16);
            bVar10 = iVar22 - iVar16 < 0;
            if (iVar22 == iVar16) {
              iVar16 = piVar23[4];
              iVar22 = piVar23[1];
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                bVar9 = SBORROW4(piVar23[5],piVar23[2]);
                bVar10 = piVar23[5] - piVar23[2] < 0;
              }
            }
            if (bVar10 == bVar9) {
              uVar19 = *(undefined8 *)piVar12;
              iVar22 = piVar23[-1];
              *(undefined8 *)piVar12 = *(undefined8 *)piVar23;
              iVar16 = piVar23[3];
              piVar23[-1] = piVar23[2];
              piVar23[2] = iVar22;
              *(undefined8 *)piVar23 = uVar19;
              iVar22 = (int)uVar19;
              bVar9 = SBORROW4(iVar16,iVar22);
              bVar10 = iVar16 - iVar22 < 0;
              if (iVar16 == iVar22) {
                iVar16 = piVar23[4];
                iVar22 = piVar23[1];
                bVar9 = SBORROW4(iVar16,iVar22);
                bVar10 = iVar16 - iVar22 < 0;
                if (iVar16 == iVar22) {
                  bVar9 = SBORROW4(piVar23[5],piVar23[2]);
                  bVar10 = piVar23[5] - piVar23[2] < 0;
                }
              }
              if (bVar10 == bVar9) goto LAB_109954d10;
              uStack_1a0 = *(undefined8 *)piVar23;
              iStack_198 = piVar23[2];
              *(undefined8 *)piVar23 = *(undefined8 *)piVar13;
              piVar23[2] = piVar23[5];
            }
            else {
              uStack_1a0 = *(undefined8 *)piVar12;
              iStack_198 = piVar23[-1];
              *(undefined8 *)piVar12 = *(undefined8 *)piVar13;
              piVar23[-1] = piVar23[5];
            }
            piVar23[5] = iStack_198;
            *(undefined8 *)piVar13 = uStack_1a0;
          }
LAB_109954d10:
          uVar19 = *(undefined8 *)piVar11;
          iVar16 = piVar11[2];
          uVar20 = *(undefined8 *)piVar23;
          piVar11[2] = piVar23[2];
          *(undefined8 *)piVar11 = uVar20;
          piVar23[2] = iVar16;
          *(undefined8 *)piVar23 = uVar19;
        }
LAB_109954d40:
        lVar15 = lVar15 + -1;
        iVar16 = *piVar11;
        if ((uVar29 & 1) != 0) {
LAB_109954d8c:
          lVar27 = 0;
          iVar22 = piVar11[1];
          iVar17 = piVar11[2];
          while( true ) {
            iVar26 = *(int *)((long)piVar11 + lVar27 + 0xc);
            bVar9 = SBORROW4(iVar26,iVar16);
            bVar10 = iVar26 - iVar16 < 0;
            if (iVar26 == iVar16) {
              iVar26 = *(int *)((long)piVar11 + lVar27 + 0x10);
              bVar9 = SBORROW4(iVar26,iVar22);
              bVar10 = iVar26 - iVar22 < 0;
              if (iVar26 == iVar22) {
                iVar26 = *(int *)((long)piVar11 + lVar27 + 0x14);
                bVar9 = SBORROW4(iVar26,iVar17);
                bVar10 = iVar26 - iVar17 < 0;
              }
            }
            if (bVar10 == bVar9) break;
            lVar27 = lVar27 + 0xc;
          }
          piVar12 = (int *)((long)piVar11 + lVar27 + 0xc);
          piVar13 = piVar21;
          if (lVar27 == 0) {
            piVar23 = piVar21;
            piVar13 = piVar14;
            if (piVar12 < piVar14) {
              do {
                piVar13 = piVar23;
                if (*piVar23 == iVar16) {
                  if (piVar23[1] == iVar22) {
                    if ((piVar23 <= piVar12) || (piVar23[2] < iVar17)) break;
                  }
                  else if ((piVar23 <= piVar12) || (piVar23[1] < iVar22)) break;
                }
                else if (*piVar23 < iVar16 || piVar23 <= piVar12) break;
                piVar23 = piVar23 + -3;
              } while( true );
            }
          }
          else {
            while( true ) {
              iVar26 = *piVar13;
              bVar9 = SBORROW4(iVar26,iVar16);
              bVar10 = iVar26 - iVar16 < 0;
              if (iVar26 == iVar16) {
                iVar26 = piVar13[1];
                bVar9 = SBORROW4(iVar26,iVar22);
                bVar10 = iVar26 - iVar22 < 0;
                if (iVar26 == iVar22) {
                  bVar9 = SBORROW4(piVar13[2],iVar17);
                  bVar10 = piVar13[2] - iVar17 < 0;
                }
              }
              if (bVar10 != bVar9) break;
              piVar13 = piVar13 + -3;
            }
          }
          piVar25 = piVar13;
          piVar23 = piVar12;
          piVar36 = piVar12;
          if (piVar12 < piVar13) {
            do {
              uVar19 = *(undefined8 *)piVar36;
              iVar26 = piVar36[2];
              uVar20 = *(undefined8 *)piVar25;
              piVar36[2] = piVar25[2];
              *(undefined8 *)piVar36 = uVar20;
              piVar25[2] = iVar26;
              *(undefined8 *)piVar25 = uVar19;
              do {
                piVar23 = piVar36 + 3;
                iVar26 = *piVar23;
                bVar9 = SBORROW4(iVar26,iVar16);
                bVar10 = iVar26 - iVar16 < 0;
                if (iVar26 == iVar16) {
                  iVar26 = piVar36[4];
                  bVar9 = SBORROW4(iVar26,iVar22);
                  bVar10 = iVar26 - iVar22 < 0;
                  if (iVar26 == iVar22) {
                    bVar9 = SBORROW4(piVar36[5],iVar17);
                    bVar10 = piVar36[5] - iVar17 < 0;
                  }
                }
                piVar36 = piVar23;
              } while (bVar10 != bVar9);
              do {
                piVar28 = piVar25 + -3;
                iVar26 = *piVar28;
                bVar9 = SBORROW4(iVar26,iVar16);
                bVar10 = iVar26 - iVar16 < 0;
                if (iVar26 == iVar16) {
                  iVar26 = piVar25[-2];
                  bVar9 = SBORROW4(iVar26,iVar22);
                  bVar10 = iVar26 - iVar22 < 0;
                  if (iVar26 == iVar22) {
                    bVar9 = SBORROW4(piVar25[-1],iVar17);
                    bVar10 = piVar25[-1] - iVar17 < 0;
                  }
                }
                piVar25 = piVar28;
              } while (bVar10 == bVar9);
            } while (piVar23 < piVar28);
          }
          piVar25 = piVar23 + -3;
          if (piVar25 != piVar11) {
            uVar19 = *(undefined8 *)piVar25;
            piVar11[2] = piVar23[-1];
            *(undefined8 *)piVar11 = uVar19;
          }
          piVar23[-3] = iVar16;
          piVar23[-2] = iVar22;
          piVar23[-1] = iVar17;
          if (piVar13 <= piVar12) {
            piVar12 = piVar11;
            FUN_109955c8c(piVar11,piVar25);
            piVar13 = piVar23;
            FUN_109955c8c(piVar23,piVar14);
            if ((int)piVar13 != 0) goto LAB_1099550dc;
            if (((ulong)piVar12 & 1) != 0) goto LAB_109954398;
          }
          FUN_109954358(piVar11,piVar25,lVar15,(uint)uVar29 & 1);
          uVar29 = 0;
          goto LAB_109954398;
        }
        if (piVar11[-3] != iVar16) {
          if (iVar16 <= piVar11[-3]) {
            iVar17 = piVar11[1];
            goto LAB_109954f68;
          }
          goto LAB_109954d8c;
        }
        iVar17 = piVar11[-2];
        iVar22 = piVar11[1];
        if (iVar17 != iVar22) {
          bVar10 = iVar22 <= iVar17;
          iVar17 = iVar22;
          if (bVar10) goto LAB_109954f68;
          goto LAB_109954d8c;
        }
        if (piVar11[-1] < piVar11[2]) goto LAB_109954d8c;
LAB_109954f68:
        iVar22 = piVar11[2];
        iVar26 = *piVar21;
        bVar9 = SBORROW4(iVar16,iVar26);
        bVar10 = iVar16 - iVar26 < 0;
        if (iVar16 == iVar26) {
          iVar8 = piVar14[-2];
          bVar9 = SBORROW4(iVar17,iVar8);
          bVar10 = iVar17 - iVar8 < 0;
          if (iVar17 == iVar8) {
            bVar9 = SBORROW4(iVar22,piVar14[-1]);
            bVar10 = iVar22 - piVar14[-1] < 0;
          }
        }
        piVar12 = piVar11;
        if (bVar10 == bVar9) {
          do {
            piVar23 = piVar12 + 3;
            if (piVar14 <= piVar23) break;
            iVar8 = *piVar23;
            bVar9 = SBORROW4(iVar16,iVar8);
            bVar10 = iVar16 - iVar8 < 0;
            if (iVar16 == iVar8) {
              iVar8 = piVar12[4];
              bVar9 = SBORROW4(iVar17,iVar8);
              bVar10 = iVar17 - iVar8 < 0;
              if (iVar17 == iVar8) {
                bVar9 = SBORROW4(iVar22,piVar12[5]);
                bVar10 = iVar22 - piVar12[5] < 0;
              }
            }
            piVar12 = piVar23;
          } while (bVar10 == bVar9);
        }
        else {
          do {
            piVar23 = piVar12 + 3;
            iVar8 = *piVar23;
            bVar9 = SBORROW4(iVar16,iVar8);
            bVar10 = iVar16 - iVar8 < 0;
            if (iVar16 == iVar8) {
              iVar8 = piVar12[4];
              bVar9 = SBORROW4(iVar17,iVar8);
              bVar10 = iVar17 - iVar8 < 0;
              if (iVar17 == iVar8) {
                bVar9 = SBORROW4(iVar22,piVar12[5]);
                bVar10 = iVar22 - piVar12[5] < 0;
              }
            }
            piVar12 = piVar23;
          } while (bVar10 == bVar9);
        }
        piVar12 = piVar14;
        piVar13 = piVar21;
        if (piVar23 < piVar14) {
          while( true ) {
            piVar12 = piVar13;
            bVar9 = SBORROW4(iVar16,iVar26);
            bVar10 = iVar16 - iVar26 < 0;
            if (iVar16 == iVar26) {
              iVar26 = piVar12[1];
              bVar9 = SBORROW4(iVar17,iVar26);
              bVar10 = iVar17 - iVar26 < 0;
              if (iVar17 == iVar26) {
                bVar9 = SBORROW4(iVar22,piVar12[2]);
                bVar10 = iVar22 - piVar12[2] < 0;
              }
            }
            if (bVar10 == bVar9) break;
            iVar26 = piVar12[-3];
            piVar13 = piVar12 + -3;
          }
        }
        while (piVar23 < piVar12) {
          uVar19 = *(undefined8 *)piVar23;
          iVar26 = piVar23[2];
          uVar20 = *(undefined8 *)piVar12;
          piVar23[2] = piVar12[2];
          *(undefined8 *)piVar23 = uVar20;
          piVar12[2] = iVar26;
          *(undefined8 *)piVar12 = uVar19;
          piVar13 = piVar23;
          do {
            piVar23 = piVar13 + 3;
            iVar26 = *piVar23;
            bVar9 = SBORROW4(iVar16,iVar26);
            bVar10 = iVar16 - iVar26 < 0;
            if (iVar16 == iVar26) {
              iVar26 = piVar13[4];
              bVar9 = SBORROW4(iVar17,iVar26);
              bVar10 = iVar17 - iVar26 < 0;
              if (iVar17 == iVar26) {
                bVar9 = SBORROW4(iVar22,piVar13[5]);
                bVar10 = iVar22 - piVar13[5] < 0;
              }
            }
            piVar25 = piVar12;
            piVar13 = piVar23;
          } while (bVar10 == bVar9);
          do {
            piVar12 = piVar25 + -3;
            iVar26 = *piVar12;
            bVar9 = SBORROW4(iVar16,iVar26);
            bVar10 = iVar16 - iVar26 < 0;
            if (iVar16 == iVar26) {
              iVar26 = piVar25[-2];
              bVar9 = SBORROW4(iVar17,iVar26);
              bVar10 = iVar17 - iVar26 < 0;
              if (iVar17 == iVar26) {
                bVar9 = SBORROW4(iVar22,piVar25[-1]);
                bVar10 = iVar22 - piVar25[-1] < 0;
              }
            }
            piVar25 = piVar12;
          } while (bVar10 != bVar9);
        }
        if (piVar23 + -3 != piVar11) {
          uVar19 = *(undefined8 *)(piVar23 + -3);
          piVar11[2] = piVar23[-1];
          *(undefined8 *)piVar11 = uVar19;
        }
        uVar29 = 0;
        piVar23[-3] = iVar16;
        piVar23[-2] = iVar17;
        piVar23[-1] = iVar22;
      } while( true );
    }
  }
  return;
LAB_1099558c8:
  piVar21 = piVar23;
  iVar16 = piVar11[3];
  if (iVar16 == *piVar11) {
    iVar22 = piVar11[4];
    iVar26 = piVar11[1];
    bVar10 = SBORROW4(iVar22,iVar26);
    iVar17 = iVar22 - iVar26;
    if (iVar22 == iVar26) {
      bVar10 = SBORROW4(piVar11[5],piVar11[2]);
      iVar17 = piVar11[5] - piVar11[2];
    }
    if (iVar17 < 0 != bVar10) {
LAB_10995590c:
      iVar17 = piVar11[5];
      do {
        piVar23 = piVar11;
        *(undefined8 *)(piVar23 + 3) = *(undefined8 *)piVar23;
        piVar23[5] = piVar23[2];
        iVar26 = piVar23[-3];
        bVar9 = SBORROW4(iVar16,iVar26);
        bVar10 = iVar16 - iVar26 < 0;
        if (iVar16 == iVar26) {
          iVar26 = piVar23[-2];
          bVar9 = SBORROW4(iVar22,iVar26);
          bVar10 = iVar22 - iVar26 < 0;
          if (iVar22 == iVar26) {
            bVar9 = SBORROW4(iVar17,piVar23[-1]);
            bVar10 = iVar17 - piVar23[-1] < 0;
          }
        }
        piVar11 = piVar23 + -3;
      } while (bVar10 != bVar9);
      *piVar23 = iVar16;
      piVar23[1] = iVar22;
      piVar23[2] = iVar17;
    }
  }
  else if (iVar16 < *piVar11) {
    iVar22 = piVar11[4];
    goto LAB_10995590c;
  }
  piVar23 = piVar21 + 3;
  piVar11 = piVar21;
  if (piVar23 == piVar14) {
    return;
  }
  goto LAB_1099558c8;
LAB_1099553a8:
  iVar16 = piVar21[3];
  if (iVar16 == *piVar21) {
    iVar22 = piVar21[4];
    iVar26 = piVar21[1];
    bVar10 = SBORROW4(iVar22,iVar26);
    iVar17 = iVar22 - iVar26;
    if (iVar22 == iVar26) {
      bVar10 = SBORROW4(piVar21[5],piVar21[2]);
      iVar17 = piVar21[5] - piVar21[2];
    }
    if (iVar17 < 0 != bVar10) {
LAB_1099553ec:
      iVar17 = piVar21[5];
      *(undefined8 *)piVar23 = *(undefined8 *)piVar21;
      piVar23[2] = piVar21[2];
      piVar30 = piVar11;
      lVar27 = lVar15;
      if (piVar21 != piVar11) {
        do {
          puVar4 = (undefined8 *)((long)piVar11 + lVar27);
          iVar26 = *(int *)((long)puVar4 + -0xc);
          if (iVar16 == iVar26) {
            iVar8 = *(int *)(puVar4 + -1);
            bVar10 = SBORROW4(iVar22,iVar8);
            iVar26 = iVar22 - iVar8;
            if (iVar22 == iVar8) {
              iVar26 = *(int *)((long)piVar11 + lVar27 + -4);
              bVar10 = SBORROW4(iVar17,iVar26);
              iVar26 = iVar17 - iVar26;
            }
            piVar30 = piVar21;
            if (iVar26 < 0 == bVar10) break;
          }
          else if (iVar26 <= iVar16) {
            piVar30 = (int *)((long)piVar11 + lVar27);
            break;
          }
          piVar21 = piVar21 + -3;
          *puVar4 = *(undefined8 *)((long)puVar4 + -0xc);
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar4 + -4);
          lVar27 = lVar27 + -0xc;
          piVar30 = piVar11;
        } while (lVar27 != 0);
      }
      *piVar30 = iVar16;
      piVar30[1] = iVar22;
      piVar30[2] = iVar17;
    }
  }
  else if (iVar16 < *piVar21) {
    iVar22 = piVar21[4];
    goto LAB_1099553ec;
  }
  piVar30 = piVar23 + 3;
  lVar15 = lVar15 + 0xc;
  piVar21 = piVar23;
  piVar23 = piVar30;
  if (piVar30 == piVar14) {
    return;
  }
  goto LAB_1099553a8;
LAB_1099554a8:
  do {
    if ((long)uVar29 <= (long)uVar35) {
      uVar31 = (uVar29 & 0x3fffffffffffffff) << 1 | 1;
      piVar23 = piVar11 + uVar31 * 3;
      uVar1 = uVar29 * 2 + 2;
      if ((long)uVar1 < (long)uVar33) {
        iVar22 = piVar23[3];
        iVar16 = *piVar23;
        bVar9 = SBORROW4(iVar16,iVar22);
        bVar10 = iVar16 - iVar22 < 0;
        if (iVar16 == iVar22) {
          iVar16 = piVar23[1];
          iVar22 = piVar23[4];
          bVar9 = SBORROW4(iVar16,iVar22);
          bVar10 = iVar16 - iVar22 < 0;
          if (iVar16 == iVar22) {
            bVar9 = SBORROW4(piVar23[2],piVar23[5]);
            bVar10 = piVar23[2] - piVar23[5] < 0;
          }
        }
        if (bVar10 != bVar9) {
          piVar23 = piVar23 + 3;
          uVar31 = uVar1;
        }
      }
      piVar21 = piVar11 + uVar29 * 3;
      iVar16 = *piVar21;
      if (*piVar23 == iVar16) {
        iVar17 = piVar23[1];
        iVar22 = piVar21[1];
        if (iVar17 == iVar22) {
          iVar22 = iVar17;
          if (piVar21[2] <= piVar23[2]) {
LAB_109955554:
            iVar17 = piVar21[2];
            iVar26 = piVar23[2];
            *(undefined8 *)piVar21 = *(undefined8 *)piVar23;
            piVar21[2] = iVar26;
            if (uVar31 <= uVar35) {
              do {
                uVar5 = uVar31 << 1 | 1;
                piVar21 = piVar11 + uVar5 * 3;
                uVar1 = uVar31 * 2 + 2;
                uVar31 = uVar5;
                if ((long)uVar1 < (long)uVar33) {
                  iVar8 = piVar21[3];
                  iVar26 = *piVar21;
                  bVar9 = SBORROW4(iVar26,iVar8);
                  bVar10 = iVar26 - iVar8 < 0;
                  if (iVar26 == iVar8) {
                    iVar26 = piVar21[1];
                    iVar8 = piVar21[4];
                    bVar9 = SBORROW4(iVar26,iVar8);
                    bVar10 = iVar26 - iVar8 < 0;
                    if (iVar26 == iVar8) {
                      bVar9 = SBORROW4(piVar21[2],piVar21[5]);
                      bVar10 = piVar21[2] - piVar21[5] < 0;
                    }
                  }
                  if (bVar10 != bVar9) {
                    piVar21 = piVar21 + 3;
                    uVar31 = uVar1;
                  }
                }
                iVar26 = *piVar21;
                bVar9 = SBORROW4(iVar26,iVar16);
                bVar10 = iVar26 - iVar16 < 0;
                if (iVar26 == iVar16) {
                  iVar26 = piVar21[1];
                  bVar9 = SBORROW4(iVar26,iVar22);
                  bVar10 = iVar26 - iVar22 < 0;
                  if (iVar26 == iVar22) {
                    bVar9 = SBORROW4(piVar21[2],iVar17);
                    bVar10 = piVar21[2] - iVar17 < 0;
                  }
                }
                if (bVar10 != bVar9) break;
                uVar19 = *(undefined8 *)piVar21;
                piVar23[2] = piVar21[2];
                *(undefined8 *)piVar23 = uVar19;
                piVar23 = piVar21;
              } while ((long)uVar31 <= (long)uVar35);
            }
            *piVar23 = iVar16;
            piVar23[1] = iVar22;
            piVar23[2] = iVar17;
          }
        }
        else if (iVar22 <= iVar17) goto LAB_109955554;
      }
      else if (iVar16 <= *piVar23) {
        iVar22 = piVar21[1];
        goto LAB_109955554;
      }
    }
    bVar10 = 0 < (long)uVar29;
    uVar29 = uVar29 - 1;
  } while (bVar10);
  lVar15 = (uVar24 >> 2) * -0x5555555555555555;
  do {
    uVar19 = *(undefined8 *)piVar11;
    iVar16 = piVar11[2];
    piVar23 = piVar11;
    uVar29 = 0;
    do {
      uVar24 = uVar29 << 1 | 1;
      uVar33 = uVar29 * 2 + 2;
      piVar21 = piVar23 + uVar29 * 3 + 3;
      if ((long)uVar33 < lVar15) {
        iVar17 = piVar23[uVar29 * 3 + 6];
        iVar22 = piVar23[uVar29 * 3 + 3];
        bVar9 = SBORROW4(iVar22,iVar17);
        bVar10 = iVar22 - iVar17 < 0;
        if (iVar22 == iVar17) {
          iVar22 = piVar23[uVar29 * 3 + 4];
          iVar17 = piVar23[uVar29 * 3 + 7];
          bVar9 = SBORROW4(iVar22,iVar17);
          bVar10 = iVar22 - iVar17 < 0;
          if (iVar22 == iVar17) {
            bVar9 = SBORROW4(piVar23[uVar29 * 3 + 5],piVar23[uVar29 * 3 + 8]);
            bVar10 = piVar23[uVar29 * 3 + 5] - piVar23[uVar29 * 3 + 8] < 0;
          }
        }
        if (bVar10 != bVar9) {
          piVar21 = piVar23 + uVar29 * 3 + 6;
          uVar24 = uVar33;
        }
      }
      uVar20 = *(undefined8 *)piVar21;
      piVar23[2] = piVar21[2];
      *(undefined8 *)piVar23 = uVar20;
      piVar23 = piVar21;
      uVar29 = uVar24;
    } while ((long)uVar24 <= (long)(lVar15 - 2U >> 1));
    piVar23 = piVar14 + -3;
    if (piVar21 == piVar23) {
      piVar21[2] = iVar16;
      *(undefined8 *)piVar21 = uVar19;
    }
    else {
      uVar20 = *(undefined8 *)piVar23;
      piVar21[2] = piVar14[-1];
      *(undefined8 *)piVar21 = uVar20;
      piVar14[-1] = iVar16;
      *(undefined8 *)piVar23 = uVar19;
      puVar2 = (undefined *)((long)piVar21 + (0xc - (long)piVar11));
      if (0xc < (long)puVar2) {
        uVar33 = ((ulong)puVar2 >> 2) * -0x5555555555555555 - 2;
        uVar29 = uVar33 >> 1;
        piVar14 = piVar11 + uVar29 * 3;
        iVar16 = *piVar21;
        if (*piVar14 == iVar16) {
          iVar17 = piVar14[1];
          iVar22 = piVar21[1];
          if (iVar17 == iVar22) {
            iVar22 = iVar17;
            if (piVar14[2] < piVar21[2]) {
LAB_109955784:
              iVar17 = piVar21[2];
              iVar26 = piVar14[2];
              *(undefined8 *)piVar21 = *(undefined8 *)piVar14;
              piVar21[2] = iVar26;
              while (1 < uVar33) {
                uVar33 = uVar29 - 1;
                uVar29 = uVar33 >> 1;
                piVar21 = piVar11 + uVar29 * 3;
                iVar26 = *piVar21;
                bVar9 = SBORROW4(iVar26,iVar16);
                bVar10 = iVar26 - iVar16 < 0;
                if (iVar26 == iVar16) {
                  iVar26 = piVar21[1];
                  bVar9 = SBORROW4(iVar26,iVar22);
                  bVar10 = iVar26 - iVar22 < 0;
                  if (iVar26 == iVar22) {
                    bVar9 = SBORROW4(piVar21[2],iVar17);
                    bVar10 = piVar21[2] - iVar17 < 0;
                  }
                }
                if (bVar10 == bVar9) break;
                uVar19 = *(undefined8 *)piVar21;
                piVar14[2] = piVar21[2];
                *(undefined8 *)piVar14 = uVar19;
                piVar14 = piVar21;
              }
              *piVar14 = iVar16;
              piVar14[1] = iVar22;
              piVar14[2] = iVar17;
            }
          }
          else if (iVar17 < iVar22) goto LAB_109955784;
        }
        else if (*piVar14 < iVar16) {
          iVar22 = piVar21[1];
          goto LAB_109955784;
        }
      }
    }
    bVar10 = lVar15 < 3;
    lVar15 = lVar15 + -1;
    piVar14 = piVar23;
    if (bVar10) {
      return;
    }
  } while( true );
LAB_1099550dc:
  piVar14 = piVar25;
  if (((ulong)piVar12 & 1) != 0) {
    return;
  }
  goto LAB_109954388;
}



/* Entry: 109954344; end: 109954357;  */

void FUN_109954344(undefined8 param_1,int *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  int *piVar29;
  int *piVar30;
  undefined8 uStack_80;
  int iStack_78;
  
  piVar8 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
LAB_109954388:
  piVar17 = param_2 + -3;
  piVar30 = param_2 + -6;
  piVar27 = param_2 + -9;
  piVar18 = piVar8;
LAB_109954398:
  do {
    piVar8 = piVar18;
    uVar14 = (long)param_2 - (long)piVar8;
    uVar12 = ((long)uVar14 >> 2) * -0x5555555555555555;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        piVar18 = param_2 + -3;
        iVar20 = *piVar18;
        iVar11 = *piVar8;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar8[1];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar8[2]);
            bVar7 = param_2[-1] - piVar8[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        uVar15 = *(undefined8 *)piVar8;
        iVar11 = piVar8[2];
        uVar16 = *(undefined8 *)piVar18;
        piVar8[2] = param_2[-1];
        *(undefined8 *)piVar8 = uVar16;
        param_2[-1] = iVar11;
        *(undefined8 *)piVar18 = uVar15;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        piVar18 = piVar8 + 3;
        iVar20 = *piVar18;
        iVar11 = *piVar8;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar11 = piVar8[4];
          iVar13 = piVar8[1];
          bVar6 = SBORROW4(iVar11,iVar13);
          bVar7 = iVar11 - iVar13 < 0;
          if (iVar11 == iVar13) {
            bVar6 = SBORROW4(piVar8[5],piVar8[2]);
            bVar7 = piVar8[5] - piVar8[2] < 0;
          }
        }
        if (bVar7 != bVar6) {
          iVar11 = *piVar17;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = param_2[-2];
            iVar11 = piVar8[4];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(param_2[-1],piVar8[5]);
              bVar7 = param_2[-1] - piVar8[5] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar8;
            iVar11 = piVar8[2];
            uVar16 = *(undefined8 *)piVar17;
            piVar8[2] = param_2[-1];
            *(undefined8 *)piVar8 = uVar16;
            param_2[-1] = iVar11;
            *(undefined8 *)piVar17 = uVar15;
            return;
          }
          uVar15 = *(undefined8 *)piVar8;
          iVar11 = piVar8[2];
          *(undefined8 *)piVar8 = *(undefined8 *)piVar18;
          piVar8[2] = piVar8[5];
          *(undefined8 *)piVar18 = uVar15;
          piVar8[5] = iVar11;
          iVar11 = *piVar17;
          iVar20 = piVar8[3];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = param_2[-2];
            iVar11 = piVar8[4];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(param_2[-1],piVar8[5]);
              bVar7 = param_2[-1] - piVar8[5] < 0;
            }
          }
          if (bVar7 == bVar6) {
            return;
          }
          uVar15 = *(undefined8 *)piVar18;
          iVar11 = piVar8[5];
          iVar20 = param_2[-1];
          *(undefined8 *)piVar18 = *(undefined8 *)piVar17;
          piVar8[5] = iVar20;
          param_2[-1] = iVar11;
          *(undefined8 *)piVar17 = uVar15;
          return;
        }
        iVar11 = *piVar17;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar20 = param_2[-2];
          iVar11 = piVar8[4];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar8[5]);
            bVar7 = param_2[-1] - piVar8[5] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        uVar15 = *(undefined8 *)piVar18;
        iVar11 = piVar8[5];
        iVar20 = param_2[-1];
        *(undefined8 *)piVar18 = *(undefined8 *)piVar17;
        piVar8[5] = iVar20;
        param_2[-1] = iVar11;
        *(undefined8 *)piVar17 = uVar15;
        iVar11 = piVar8[3];
        iVar20 = *piVar8;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = piVar8[4];
          iVar20 = piVar8[1];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar8[5],piVar8[2]);
            bVar7 = piVar8[5] - piVar8[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        uVar15 = *(undefined8 *)piVar8;
        iVar11 = piVar8[2];
        *(undefined8 *)piVar8 = *(undefined8 *)piVar18;
        piVar8[2] = piVar8[5];
        *(undefined8 *)piVar18 = uVar15;
        piVar8[5] = iVar11;
        return;
      }
      if (uVar12 == 4) {
        piVar18 = piVar8 + 3;
        piVar27 = piVar8 + 6;
        iVar11 = *piVar18;
        iVar20 = *piVar8;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar20 = piVar8[4];
          iVar13 = piVar8[1];
          bVar6 = SBORROW4(iVar20,iVar13);
          bVar7 = iVar20 - iVar13 < 0;
          if (iVar20 == iVar13) {
            bVar6 = SBORROW4(piVar8[5],piVar8[2]);
            bVar7 = piVar8[5] - piVar8[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          iVar20 = *piVar27;
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            iVar11 = piVar8[7];
            iVar20 = piVar8[4];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar8[8],piVar8[5]);
              bVar7 = piVar8[8] - piVar8[5] < 0;
            }
          }
          if (bVar7 != bVar6) {
            iVar11 = piVar8[5];
            uVar15 = *(undefined8 *)piVar18;
            *(undefined8 *)piVar18 = *(undefined8 *)piVar27;
            piVar8[5] = piVar8[8];
            *(undefined8 *)piVar27 = uVar15;
            piVar8[8] = iVar11;
            iVar11 = *piVar18;
            iVar20 = *piVar8;
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              iVar11 = piVar8[4];
              iVar20 = piVar8[1];
              bVar6 = SBORROW4(iVar11,iVar20);
              bVar7 = iVar11 - iVar20 < 0;
              if (iVar11 == iVar20) {
                bVar6 = SBORROW4(piVar8[5],piVar8[2]);
                bVar7 = piVar8[5] - piVar8[2] < 0;
              }
            }
            if (bVar7 != bVar6) {
              iVar11 = piVar8[2];
              uVar15 = *(undefined8 *)piVar8;
              *(undefined8 *)piVar8 = *(undefined8 *)piVar18;
              piVar8[2] = piVar8[5];
              *(undefined8 *)piVar18 = uVar15;
              piVar8[5] = iVar11;
            }
          }
        }
        else {
          iVar20 = *piVar27;
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            iVar11 = piVar8[7];
            iVar20 = piVar8[4];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar8[8],piVar8[5]);
              bVar7 = piVar8[8] - piVar8[5] < 0;
            }
          }
          if (bVar7 == bVar6) {
            iVar11 = piVar8[2];
            uVar15 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar18;
            piVar8[2] = piVar8[5];
            *(undefined8 *)piVar18 = uVar15;
            piVar8[5] = iVar11;
            iVar11 = *piVar27;
            iVar20 = (int)uVar15;
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              iVar11 = piVar8[7];
              iVar20 = piVar8[4];
              bVar6 = SBORROW4(iVar11,iVar20);
              bVar7 = iVar11 - iVar20 < 0;
              if (iVar11 == iVar20) {
                bVar6 = SBORROW4(piVar8[8],piVar8[5]);
                bVar7 = piVar8[8] - piVar8[5] < 0;
              }
            }
            if (bVar7 == bVar6) goto LAB_109955b94;
            iVar11 = piVar8[5];
            uVar15 = *(undefined8 *)piVar18;
            *(undefined8 *)piVar18 = *(undefined8 *)piVar27;
            piVar8[5] = piVar8[8];
          }
          else {
            iVar11 = piVar8[2];
            uVar15 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar27;
            piVar8[2] = piVar8[8];
          }
          *(undefined8 *)piVar27 = uVar15;
          piVar8[8] = iVar11;
        }
LAB_109955b94:
        iVar11 = *piVar17;
        iVar20 = *piVar27;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = param_2[-2];
          iVar20 = piVar8[7];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(param_2[-1],piVar8[8]);
            bVar7 = param_2[-1] - piVar8[8] < 0;
          }
        }
        if (bVar7 != bVar6) {
          iVar11 = piVar8[8];
          uVar15 = *(undefined8 *)piVar27;
          iVar20 = param_2[-1];
          *(undefined8 *)piVar27 = *(undefined8 *)piVar17;
          piVar8[8] = iVar20;
          *(undefined8 *)piVar17 = uVar15;
          param_2[-1] = iVar11;
          iVar11 = *piVar27;
          iVar20 = *piVar18;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar8[7];
            iVar20 = piVar8[4];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar8[8],piVar8[5]);
              bVar7 = piVar8[8] - piVar8[5] < 0;
            }
          }
          if (bVar7 != bVar6) {
            iVar11 = piVar8[5];
            uVar15 = *(undefined8 *)piVar18;
            *(undefined8 *)piVar18 = *(undefined8 *)piVar27;
            piVar8[5] = piVar8[8];
            *(undefined8 *)piVar27 = uVar15;
            piVar8[8] = iVar11;
            iVar11 = *piVar18;
            iVar20 = *piVar8;
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              iVar11 = piVar8[4];
              iVar20 = piVar8[1];
              bVar6 = SBORROW4(iVar11,iVar20);
              bVar7 = iVar11 - iVar20 < 0;
              if (iVar11 == iVar20) {
                bVar6 = SBORROW4(piVar8[5],piVar8[2]);
                bVar7 = piVar8[5] - piVar8[2] < 0;
              }
            }
            if (bVar7 != bVar6) {
              iVar11 = piVar8[2];
              uVar15 = *(undefined8 *)piVar8;
              *(undefined8 *)piVar8 = *(undefined8 *)piVar18;
              piVar8[2] = piVar8[5];
              *(undefined8 *)piVar18 = uVar15;
              piVar8[5] = iVar11;
            }
          }
        }
        return;
      }
      if (uVar12 == 5) {
        FUN_109955a08(piVar8,piVar8 + 3,piVar8 + 6,piVar8 + 9);
        piVar18 = param_2 + -3;
        iVar20 = *piVar18;
        iVar11 = piVar8[9];
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar8[10];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar8[0xb]);
            bVar7 = param_2[-1] - piVar8[0xb] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        uVar15 = *(undefined8 *)(piVar8 + 9);
        iVar20 = piVar8[0xb];
        iVar11 = param_2[-1];
        *(undefined8 *)(piVar8 + 9) = *(undefined8 *)piVar18;
        piVar8[0xb] = iVar11;
        param_2[-1] = iVar20;
        *(undefined8 *)piVar18 = uVar15;
        iVar11 = piVar8[9];
        iVar20 = piVar8[6];
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = piVar8[10];
          iVar20 = piVar8[7];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar8[0xb],piVar8[8]);
            bVar7 = piVar8[0xb] - piVar8[8] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        iVar11 = piVar8[8];
        uVar15 = *(undefined8 *)(piVar8 + 6);
        *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(piVar8 + 9);
        piVar8[8] = piVar8[0xb];
        *(undefined8 *)(piVar8 + 9) = uVar15;
        piVar8[0xb] = iVar11;
        iVar11 = piVar8[6];
        iVar20 = piVar8[3];
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = piVar8[7];
          iVar20 = piVar8[4];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar8[8],piVar8[5]);
            bVar7 = piVar8[8] - piVar8[5] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        iVar11 = piVar8[5];
        uVar15 = *(undefined8 *)(piVar8 + 3);
        *(undefined8 *)(piVar8 + 3) = *(undefined8 *)(piVar8 + 6);
        piVar8[5] = piVar8[8];
        *(undefined8 *)(piVar8 + 6) = uVar15;
        piVar8[8] = iVar11;
        iVar11 = piVar8[3];
        iVar20 = *piVar8;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = piVar8[4];
          iVar20 = piVar8[1];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar8[5],piVar8[2]);
            bVar7 = piVar8[5] - piVar8[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          return;
        }
        uVar15 = *(undefined8 *)piVar8;
        iVar11 = piVar8[2];
        *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + 3);
        piVar8[2] = piVar8[5];
        *(undefined8 *)(piVar8 + 3) = uVar15;
        piVar8[5] = iVar11;
        return;
      }
    }
    if ((long)uVar14 < 0x120) {
      piVar18 = piVar8 + 3;
      if ((param_4 & 1) == 0) {
        if (piVar8 == param_2 || piVar18 == param_2) {
          return;
        }
        break;
      }
      if (piVar8 == param_2 || piVar18 == param_2) {
        return;
      }
      lVar24 = 0;
      piVar17 = piVar8;
      goto LAB_1099553a8;
    }
    if (param_3 == 0) {
      if (piVar8 == param_2) {
        return;
      }
      uVar19 = uVar12 - 2 >> 1;
      uVar23 = uVar19;
      goto LAB_1099554a8;
    }
    piVar18 = piVar8 + (uVar12 >> 1) * 3;
    if (uVar14 < 0x601) {
      iVar11 = *piVar8;
      iVar20 = *piVar18;
      bVar6 = SBORROW4(iVar11,iVar20);
      bVar7 = iVar11 - iVar20 < 0;
      if (iVar11 == iVar20) {
        iVar20 = piVar8[1];
        iVar13 = piVar18[1];
        bVar6 = SBORROW4(iVar20,iVar13);
        bVar7 = iVar20 - iVar13 < 0;
        if (iVar20 == iVar13) {
          bVar6 = SBORROW4(piVar8[2],piVar18[2]);
          bVar7 = piVar8[2] - piVar18[2] < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar20 = *piVar17;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar8[1];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar8[2]);
            bVar7 = param_2[-1] - piVar8[2] < 0;
          }
        }
        if (bVar7 != bVar6) {
          uVar15 = *(undefined8 *)piVar8;
          iVar11 = piVar8[2];
          uVar16 = *(undefined8 *)piVar17;
          piVar8[2] = param_2[-1];
          *(undefined8 *)piVar8 = uVar16;
          param_2[-1] = iVar11;
          *(undefined8 *)piVar17 = uVar15;
          iVar11 = *piVar8;
          iVar20 = *piVar18;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar8[1];
            iVar20 = piVar18[1];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar8[2],piVar18[2]);
              bVar7 = piVar8[2] - piVar18[2] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar18;
            iVar11 = piVar18[2];
            uVar16 = *(undefined8 *)piVar8;
            piVar18[2] = piVar8[2];
            *(undefined8 *)piVar18 = uVar16;
            piVar8[2] = iVar11;
            *(undefined8 *)piVar8 = uVar15;
          }
        }
      }
      else {
        iVar20 = *piVar17;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar8[1];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar8[2]);
            bVar7 = param_2[-1] - piVar8[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          uVar15 = *(undefined8 *)piVar18;
          iVar11 = piVar18[2];
          uVar16 = *(undefined8 *)piVar8;
          piVar18[2] = piVar8[2];
          *(undefined8 *)piVar18 = uVar16;
          piVar8[2] = iVar11;
          *(undefined8 *)piVar8 = uVar15;
          iVar11 = *piVar17;
          iVar20 = *piVar8;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = param_2[-2];
            iVar11 = piVar8[1];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(param_2[-1],piVar8[2]);
              bVar7 = param_2[-1] - piVar8[2] < 0;
            }
          }
          if (bVar7 == bVar6) goto LAB_109954d40;
          uStack_80 = *(undefined8 *)piVar8;
          iStack_78 = piVar8[2];
          uVar15 = *(undefined8 *)piVar17;
          piVar8[2] = param_2[-1];
          *(undefined8 *)piVar8 = uVar15;
        }
        else {
          uStack_80 = *(undefined8 *)piVar18;
          iStack_78 = piVar18[2];
          uVar15 = *(undefined8 *)piVar17;
          piVar18[2] = param_2[-1];
          *(undefined8 *)piVar18 = uVar15;
        }
        param_2[-1] = iStack_78;
        *(undefined8 *)piVar17 = uStack_80;
      }
    }
    else {
      iVar11 = *piVar18;
      iVar20 = *piVar8;
      bVar6 = SBORROW4(iVar11,iVar20);
      bVar7 = iVar11 - iVar20 < 0;
      if (iVar11 == iVar20) {
        iVar20 = piVar18[1];
        iVar13 = piVar8[1];
        bVar6 = SBORROW4(iVar20,iVar13);
        bVar7 = iVar20 - iVar13 < 0;
        if (iVar20 == iVar13) {
          bVar6 = SBORROW4(piVar18[2],piVar8[2]);
          bVar7 = piVar18[2] - piVar8[2] < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar20 = *piVar17;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar18[1];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar18[2]);
            bVar7 = param_2[-1] - piVar18[2] < 0;
          }
        }
        if (bVar7 != bVar6) {
          uVar15 = *(undefined8 *)piVar18;
          iVar11 = piVar18[2];
          uVar16 = *(undefined8 *)piVar17;
          piVar18[2] = param_2[-1];
          *(undefined8 *)piVar18 = uVar16;
          param_2[-1] = iVar11;
          *(undefined8 *)piVar17 = uVar15;
          iVar11 = *piVar18;
          iVar20 = *piVar8;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar18[1];
            iVar20 = piVar8[1];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar18[2],piVar8[2]);
              bVar7 = piVar18[2] - piVar8[2] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar8;
            iVar11 = piVar8[2];
            uVar16 = *(undefined8 *)piVar18;
            piVar8[2] = piVar18[2];
            *(undefined8 *)piVar8 = uVar16;
            piVar18[2] = iVar11;
            *(undefined8 *)piVar18 = uVar15;
          }
        }
      }
      else {
        iVar20 = *piVar17;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar20 = param_2[-2];
          iVar11 = piVar18[1];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-1],piVar18[2]);
            bVar7 = param_2[-1] - piVar18[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          uVar15 = *(undefined8 *)piVar8;
          iVar11 = piVar8[2];
          uVar16 = *(undefined8 *)piVar18;
          piVar8[2] = piVar18[2];
          *(undefined8 *)piVar8 = uVar16;
          piVar18[2] = iVar11;
          *(undefined8 *)piVar18 = uVar15;
          iVar11 = *piVar17;
          iVar20 = *piVar18;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = param_2[-2];
            iVar11 = piVar18[1];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(param_2[-1],piVar18[2]);
              bVar7 = param_2[-1] - piVar18[2] < 0;
            }
          }
          if (bVar7 == bVar6) goto LAB_109954710;
          uStack_80 = *(undefined8 *)piVar18;
          iStack_78 = piVar18[2];
          uVar15 = *(undefined8 *)piVar17;
          piVar18[2] = param_2[-1];
          *(undefined8 *)piVar18 = uVar15;
        }
        else {
          uStack_80 = *(undefined8 *)piVar8;
          iStack_78 = piVar8[2];
          uVar15 = *(undefined8 *)piVar17;
          piVar8[2] = param_2[-1];
          *(undefined8 *)piVar8 = uVar15;
        }
        param_2[-1] = iStack_78;
        *(undefined8 *)piVar17 = uStack_80;
      }
LAB_109954710:
      piVar10 = piVar8 + 3;
      iVar11 = *piVar10;
      piVar9 = piVar18 + -3;
      iVar20 = *piVar9;
      bVar6 = SBORROW4(iVar20,iVar11);
      bVar7 = iVar20 - iVar11 < 0;
      if (iVar20 == iVar11) {
        iVar13 = piVar18[-2];
        iVar11 = piVar8[4];
        bVar6 = SBORROW4(iVar13,iVar11);
        bVar7 = iVar13 - iVar11 < 0;
        if (iVar13 == iVar11) {
          bVar6 = SBORROW4(piVar18[-1],piVar8[5]);
          bVar7 = piVar18[-1] - piVar8[5] < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar11 = *piVar30;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = param_2[-5];
          iVar20 = piVar18[-2];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(param_2[-4],piVar18[-1]);
            bVar7 = param_2[-4] - piVar18[-1] < 0;
          }
        }
        if (bVar7 != bVar6) {
          uVar15 = *(undefined8 *)piVar9;
          iVar11 = piVar18[-1];
          uVar16 = *(undefined8 *)piVar30;
          piVar18[-1] = param_2[-4];
          *(undefined8 *)piVar9 = uVar16;
          param_2[-4] = iVar11;
          *(undefined8 *)piVar30 = uVar15;
          iVar11 = *piVar9;
          iVar20 = *piVar10;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = piVar18[-2];
            iVar11 = piVar8[4];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(piVar18[-1],piVar8[5]);
              bVar7 = piVar18[-1] - piVar8[5] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar10;
            iVar11 = piVar8[5];
            iVar20 = piVar18[-1];
            *(undefined8 *)piVar10 = *(undefined8 *)piVar9;
            piVar8[5] = iVar20;
            piVar18[-1] = iVar11;
            *(undefined8 *)piVar9 = uVar15;
          }
        }
      }
      else {
        iVar11 = *piVar30;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = param_2[-5];
          iVar20 = piVar18[-2];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(param_2[-4],piVar18[-1]);
            bVar7 = param_2[-4] - piVar18[-1] < 0;
          }
        }
        if (bVar7 == bVar6) {
          uVar15 = *(undefined8 *)piVar10;
          iVar11 = piVar8[5];
          iVar20 = piVar18[-1];
          *(undefined8 *)piVar10 = *(undefined8 *)piVar9;
          piVar8[5] = iVar20;
          piVar18[-1] = iVar11;
          *(undefined8 *)piVar9 = uVar15;
          iVar11 = *piVar30;
          iVar20 = (int)uVar15;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = param_2[-5];
            iVar20 = piVar18[-2];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(param_2[-4],piVar18[-1]);
              bVar7 = param_2[-4] - piVar18[-1] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar9;
            iVar11 = piVar18[-1];
            uVar16 = *(undefined8 *)piVar30;
            piVar18[-1] = param_2[-4];
            *(undefined8 *)piVar9 = uVar16;
            param_2[-4] = iVar11;
            *(undefined8 *)piVar30 = uVar15;
          }
        }
        else {
          uVar15 = *(undefined8 *)piVar10;
          iVar11 = piVar8[5];
          iVar20 = param_2[-4];
          *(undefined8 *)piVar10 = *(undefined8 *)piVar30;
          piVar8[5] = iVar20;
          param_2[-4] = iVar11;
          *(undefined8 *)piVar30 = uVar15;
        }
      }
      piVar21 = piVar8 + 6;
      iVar11 = *piVar21;
      piVar10 = piVar18 + 3;
      iVar20 = *piVar10;
      bVar6 = SBORROW4(iVar20,iVar11);
      bVar7 = iVar20 - iVar11 < 0;
      if (iVar20 == iVar11) {
        iVar11 = piVar18[4];
        iVar13 = piVar8[7];
        bVar6 = SBORROW4(iVar11,iVar13);
        bVar7 = iVar11 - iVar13 < 0;
        if (iVar11 == iVar13) {
          bVar6 = SBORROW4(piVar18[5],piVar8[8]);
          bVar7 = piVar18[5] - piVar8[8] < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar11 = *piVar27;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar20 = param_2[-8];
          iVar11 = piVar18[4];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-7],piVar18[5]);
            bVar7 = param_2[-7] - piVar18[5] < 0;
          }
        }
        if (bVar7 != bVar6) {
          uVar15 = *(undefined8 *)piVar10;
          iVar11 = piVar18[5];
          uVar16 = *(undefined8 *)piVar27;
          piVar18[5] = param_2[-7];
          *(undefined8 *)piVar10 = uVar16;
          param_2[-7] = iVar11;
          *(undefined8 *)piVar27 = uVar15;
          iVar11 = *piVar10;
          iVar20 = *piVar21;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar18[4];
            iVar20 = piVar8[7];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar18[5],piVar8[8]);
              bVar7 = piVar18[5] - piVar8[8] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar21;
            iVar11 = piVar8[8];
            iVar20 = piVar18[5];
            *(undefined8 *)piVar21 = *(undefined8 *)piVar10;
            piVar8[8] = iVar20;
            piVar18[5] = iVar11;
            *(undefined8 *)piVar10 = uVar15;
          }
        }
      }
      else {
        iVar11 = *piVar27;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar20 = param_2[-8];
          iVar11 = piVar18[4];
          bVar6 = SBORROW4(iVar20,iVar11);
          bVar7 = iVar20 - iVar11 < 0;
          if (iVar20 == iVar11) {
            bVar6 = SBORROW4(param_2[-7],piVar18[5]);
            bVar7 = param_2[-7] - piVar18[5] < 0;
          }
        }
        if (bVar7 == bVar6) {
          uVar15 = *(undefined8 *)piVar21;
          iVar11 = piVar8[8];
          iVar20 = piVar18[5];
          *(undefined8 *)piVar21 = *(undefined8 *)piVar10;
          piVar8[8] = iVar20;
          piVar18[5] = iVar11;
          *(undefined8 *)piVar10 = uVar15;
          iVar11 = *piVar27;
          iVar20 = (int)uVar15;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar20 = param_2[-8];
            iVar11 = piVar18[4];
            bVar6 = SBORROW4(iVar20,iVar11);
            bVar7 = iVar20 - iVar11 < 0;
            if (iVar20 == iVar11) {
              bVar6 = SBORROW4(param_2[-7],piVar18[5]);
              bVar7 = param_2[-7] - piVar18[5] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar10;
            iVar11 = piVar18[5];
            uVar16 = *(undefined8 *)piVar27;
            piVar18[5] = param_2[-7];
            *(undefined8 *)piVar10 = uVar16;
            param_2[-7] = iVar11;
            *(undefined8 *)piVar27 = uVar15;
          }
        }
        else {
          uVar15 = *(undefined8 *)piVar21;
          iVar11 = piVar8[8];
          iVar20 = param_2[-7];
          *(undefined8 *)piVar21 = *(undefined8 *)piVar27;
          piVar8[8] = iVar20;
          param_2[-7] = iVar11;
          *(undefined8 *)piVar27 = uVar15;
        }
      }
      iVar11 = *piVar18;
      iVar20 = piVar18[-3];
      bVar6 = SBORROW4(iVar11,iVar20);
      bVar7 = iVar11 - iVar20 < 0;
      if (iVar11 == iVar20) {
        iVar20 = piVar18[1];
        iVar13 = piVar18[-2];
        bVar6 = SBORROW4(iVar20,iVar13);
        bVar7 = iVar20 - iVar13 < 0;
        if (iVar20 == iVar13) {
          bVar6 = SBORROW4(piVar18[2],piVar18[-1]);
          bVar7 = piVar18[2] - piVar18[-1] < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar20 = *piVar10;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar11 = piVar18[4];
          iVar20 = piVar18[1];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar18[5],piVar18[2]);
            bVar7 = piVar18[5] - piVar18[2] < 0;
          }
        }
        if (bVar7 != bVar6) {
          uVar15 = *(undefined8 *)piVar18;
          iVar11 = piVar18[2];
          *(undefined8 *)piVar18 = *(undefined8 *)piVar10;
          piVar18[2] = piVar18[5];
          piVar18[5] = iVar11;
          *(undefined8 *)piVar10 = uVar15;
          iVar11 = *piVar18;
          iVar20 = piVar18[-3];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar18[1];
            iVar20 = piVar18[-2];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar18[2],piVar18[-1]);
              bVar7 = piVar18[2] - piVar18[-1] < 0;
            }
          }
          if (bVar7 != bVar6) {
            uVar15 = *(undefined8 *)piVar9;
            iVar11 = piVar18[-1];
            *(undefined8 *)piVar9 = *(undefined8 *)piVar18;
            piVar18[-1] = piVar18[2];
            piVar18[2] = iVar11;
            *(undefined8 *)piVar18 = uVar15;
          }
        }
      }
      else {
        iVar20 = *piVar10;
        bVar6 = SBORROW4(iVar20,iVar11);
        bVar7 = iVar20 - iVar11 < 0;
        if (iVar20 == iVar11) {
          iVar11 = piVar18[4];
          iVar20 = piVar18[1];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar18[5],piVar18[2]);
            bVar7 = piVar18[5] - piVar18[2] < 0;
          }
        }
        if (bVar7 == bVar6) {
          uVar15 = *(undefined8 *)piVar9;
          iVar20 = piVar18[-1];
          *(undefined8 *)piVar9 = *(undefined8 *)piVar18;
          iVar11 = piVar18[3];
          piVar18[-1] = piVar18[2];
          piVar18[2] = iVar20;
          *(undefined8 *)piVar18 = uVar15;
          iVar20 = (int)uVar15;
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            iVar11 = piVar18[4];
            iVar20 = piVar18[1];
            bVar6 = SBORROW4(iVar11,iVar20);
            bVar7 = iVar11 - iVar20 < 0;
            if (iVar11 == iVar20) {
              bVar6 = SBORROW4(piVar18[5],piVar18[2]);
              bVar7 = piVar18[5] - piVar18[2] < 0;
            }
          }
          if (bVar7 == bVar6) goto LAB_109954d10;
          uStack_80 = *(undefined8 *)piVar18;
          iStack_78 = piVar18[2];
          *(undefined8 *)piVar18 = *(undefined8 *)piVar10;
          piVar18[2] = piVar18[5];
        }
        else {
          uStack_80 = *(undefined8 *)piVar9;
          iStack_78 = piVar18[-1];
          *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
          piVar18[-1] = piVar18[5];
        }
        piVar18[5] = iStack_78;
        *(undefined8 *)piVar10 = uStack_80;
      }
LAB_109954d10:
      uVar15 = *(undefined8 *)piVar8;
      iVar11 = piVar8[2];
      uVar16 = *(undefined8 *)piVar18;
      piVar8[2] = piVar18[2];
      *(undefined8 *)piVar8 = uVar16;
      piVar18[2] = iVar11;
      *(undefined8 *)piVar18 = uVar15;
    }
LAB_109954d40:
    param_3 = param_3 + -1;
    iVar11 = *piVar8;
    if ((param_4 & 1) != 0) {
LAB_109954d8c:
      lVar24 = 0;
      iVar20 = piVar8[1];
      iVar13 = piVar8[2];
      while( true ) {
        iVar22 = *(int *)((long)piVar8 + lVar24 + 0xc);
        bVar6 = SBORROW4(iVar22,iVar11);
        bVar7 = iVar22 - iVar11 < 0;
        if (iVar22 == iVar11) {
          iVar22 = *(int *)((long)piVar8 + lVar24 + 0x10);
          bVar6 = SBORROW4(iVar22,iVar20);
          bVar7 = iVar22 - iVar20 < 0;
          if (iVar22 == iVar20) {
            iVar22 = *(int *)((long)piVar8 + lVar24 + 0x14);
            bVar6 = SBORROW4(iVar22,iVar13);
            bVar7 = iVar22 - iVar13 < 0;
          }
        }
        if (bVar7 == bVar6) break;
        lVar24 = lVar24 + 0xc;
      }
      piVar9 = (int *)((long)piVar8 + lVar24 + 0xc);
      piVar10 = piVar17;
      if (lVar24 == 0) {
        piVar18 = piVar17;
        piVar10 = param_2;
        if (piVar9 < param_2) {
          do {
            piVar10 = piVar18;
            if (*piVar18 == iVar11) {
              if (piVar18[1] == iVar20) {
                if ((piVar18 <= piVar9) || (piVar18[2] < iVar13)) break;
              }
              else if ((piVar18 <= piVar9) || (piVar18[1] < iVar20)) break;
            }
            else if (*piVar18 < iVar11 || piVar18 <= piVar9) break;
            piVar18 = piVar18 + -3;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar22 = *piVar10;
          bVar6 = SBORROW4(iVar22,iVar11);
          bVar7 = iVar22 - iVar11 < 0;
          if (iVar22 == iVar11) {
            iVar22 = piVar10[1];
            bVar6 = SBORROW4(iVar22,iVar20);
            bVar7 = iVar22 - iVar20 < 0;
            if (iVar22 == iVar20) {
              bVar6 = SBORROW4(piVar10[2],iVar13);
              bVar7 = piVar10[2] - iVar13 < 0;
            }
          }
          if (bVar7 != bVar6) break;
          piVar10 = piVar10 + -3;
        }
      }
      piVar21 = piVar10;
      piVar18 = piVar9;
      piVar29 = piVar9;
      if (piVar9 < piVar10) {
        do {
          uVar15 = *(undefined8 *)piVar29;
          iVar22 = piVar29[2];
          uVar16 = *(undefined8 *)piVar21;
          piVar29[2] = piVar21[2];
          *(undefined8 *)piVar29 = uVar16;
          piVar21[2] = iVar22;
          *(undefined8 *)piVar21 = uVar15;
          do {
            piVar18 = piVar29 + 3;
            iVar22 = *piVar18;
            bVar6 = SBORROW4(iVar22,iVar11);
            bVar7 = iVar22 - iVar11 < 0;
            if (iVar22 == iVar11) {
              iVar22 = piVar29[4];
              bVar6 = SBORROW4(iVar22,iVar20);
              bVar7 = iVar22 - iVar20 < 0;
              if (iVar22 == iVar20) {
                bVar6 = SBORROW4(piVar29[5],iVar13);
                bVar7 = piVar29[5] - iVar13 < 0;
              }
            }
            piVar29 = piVar18;
          } while (bVar7 != bVar6);
          do {
            piVar25 = piVar21 + -3;
            iVar22 = *piVar25;
            bVar6 = SBORROW4(iVar22,iVar11);
            bVar7 = iVar22 - iVar11 < 0;
            if (iVar22 == iVar11) {
              iVar22 = piVar21[-2];
              bVar6 = SBORROW4(iVar22,iVar20);
              bVar7 = iVar22 - iVar20 < 0;
              if (iVar22 == iVar20) {
                bVar6 = SBORROW4(piVar21[-1],iVar13);
                bVar7 = piVar21[-1] - iVar13 < 0;
              }
            }
            piVar21 = piVar25;
          } while (bVar7 == bVar6);
        } while (piVar18 < piVar25);
      }
      piVar21 = piVar18 + -3;
      if (piVar21 != piVar8) {
        uVar15 = *(undefined8 *)piVar21;
        piVar8[2] = piVar18[-1];
        *(undefined8 *)piVar8 = uVar15;
      }
      piVar18[-3] = iVar11;
      piVar18[-2] = iVar20;
      piVar18[-1] = iVar13;
      if (piVar10 <= piVar9) {
        piVar9 = piVar8;
        FUN_109955c8c(piVar8,piVar21);
        piVar10 = piVar18;
        FUN_109955c8c(piVar18,param_2);
        if ((int)piVar10 != 0) goto LAB_1099550dc;
        if (((ulong)piVar9 & 1) != 0) goto LAB_109954398;
      }
      FUN_109954358(piVar8,piVar21,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109954398;
    }
    if (piVar8[-3] != iVar11) {
      if (iVar11 <= piVar8[-3]) {
        iVar13 = piVar8[1];
        goto LAB_109954f68;
      }
      goto LAB_109954d8c;
    }
    iVar13 = piVar8[-2];
    iVar20 = piVar8[1];
    if (iVar13 != iVar20) {
      bVar7 = iVar20 <= iVar13;
      iVar13 = iVar20;
      if (bVar7) goto LAB_109954f68;
      goto LAB_109954d8c;
    }
    if (piVar8[-1] < piVar8[2]) goto LAB_109954d8c;
LAB_109954f68:
    iVar20 = piVar8[2];
    iVar22 = *piVar17;
    bVar6 = SBORROW4(iVar11,iVar22);
    bVar7 = iVar11 - iVar22 < 0;
    if (iVar11 == iVar22) {
      iVar5 = param_2[-2];
      bVar6 = SBORROW4(iVar13,iVar5);
      bVar7 = iVar13 - iVar5 < 0;
      if (iVar13 == iVar5) {
        bVar6 = SBORROW4(iVar20,param_2[-1]);
        bVar7 = iVar20 - param_2[-1] < 0;
      }
    }
    piVar9 = piVar8;
    if (bVar7 == bVar6) {
      do {
        piVar18 = piVar9 + 3;
        if (param_2 <= piVar18) break;
        iVar5 = *piVar18;
        bVar6 = SBORROW4(iVar11,iVar5);
        bVar7 = iVar11 - iVar5 < 0;
        if (iVar11 == iVar5) {
          iVar5 = piVar9[4];
          bVar6 = SBORROW4(iVar13,iVar5);
          bVar7 = iVar13 - iVar5 < 0;
          if (iVar13 == iVar5) {
            bVar6 = SBORROW4(iVar20,piVar9[5]);
            bVar7 = iVar20 - piVar9[5] < 0;
          }
        }
        piVar9 = piVar18;
      } while (bVar7 == bVar6);
    }
    else {
      do {
        piVar18 = piVar9 + 3;
        iVar5 = *piVar18;
        bVar6 = SBORROW4(iVar11,iVar5);
        bVar7 = iVar11 - iVar5 < 0;
        if (iVar11 == iVar5) {
          iVar5 = piVar9[4];
          bVar6 = SBORROW4(iVar13,iVar5);
          bVar7 = iVar13 - iVar5 < 0;
          if (iVar13 == iVar5) {
            bVar6 = SBORROW4(iVar20,piVar9[5]);
            bVar7 = iVar20 - piVar9[5] < 0;
          }
        }
        piVar9 = piVar18;
      } while (bVar7 == bVar6);
    }
    piVar9 = param_2;
    piVar10 = piVar17;
    if (piVar18 < param_2) {
      while( true ) {
        piVar9 = piVar10;
        bVar6 = SBORROW4(iVar11,iVar22);
        bVar7 = iVar11 - iVar22 < 0;
        if (iVar11 == iVar22) {
          iVar22 = piVar9[1];
          bVar6 = SBORROW4(iVar13,iVar22);
          bVar7 = iVar13 - iVar22 < 0;
          if (iVar13 == iVar22) {
            bVar6 = SBORROW4(iVar20,piVar9[2]);
            bVar7 = iVar20 - piVar9[2] < 0;
          }
        }
        if (bVar7 == bVar6) break;
        iVar22 = piVar9[-3];
        piVar10 = piVar9 + -3;
      }
    }
    while (piVar18 < piVar9) {
      uVar15 = *(undefined8 *)piVar18;
      iVar22 = piVar18[2];
      uVar16 = *(undefined8 *)piVar9;
      piVar18[2] = piVar9[2];
      *(undefined8 *)piVar18 = uVar16;
      piVar9[2] = iVar22;
      *(undefined8 *)piVar9 = uVar15;
      piVar10 = piVar18;
      do {
        piVar18 = piVar10 + 3;
        iVar22 = *piVar18;
        bVar6 = SBORROW4(iVar11,iVar22);
        bVar7 = iVar11 - iVar22 < 0;
        if (iVar11 == iVar22) {
          iVar22 = piVar10[4];
          bVar6 = SBORROW4(iVar13,iVar22);
          bVar7 = iVar13 - iVar22 < 0;
          if (iVar13 == iVar22) {
            bVar6 = SBORROW4(iVar20,piVar10[5]);
            bVar7 = iVar20 - piVar10[5] < 0;
          }
        }
        piVar21 = piVar9;
        piVar10 = piVar18;
      } while (bVar7 == bVar6);
      do {
        piVar9 = piVar21 + -3;
        iVar22 = *piVar9;
        bVar6 = SBORROW4(iVar11,iVar22);
        bVar7 = iVar11 - iVar22 < 0;
        if (iVar11 == iVar22) {
          iVar22 = piVar21[-2];
          bVar6 = SBORROW4(iVar13,iVar22);
          bVar7 = iVar13 - iVar22 < 0;
          if (iVar13 == iVar22) {
            bVar6 = SBORROW4(iVar20,piVar21[-1]);
            bVar7 = iVar20 - piVar21[-1] < 0;
          }
        }
        piVar21 = piVar9;
      } while (bVar7 != bVar6);
    }
    if (piVar18 + -3 != piVar8) {
      uVar15 = *(undefined8 *)(piVar18 + -3);
      piVar8[2] = piVar18[-1];
      *(undefined8 *)piVar8 = uVar15;
    }
    param_4 = 0;
    piVar18[-3] = iVar11;
    piVar18[-2] = iVar13;
    piVar18[-1] = iVar20;
  } while( true );
LAB_1099558c8:
  piVar17 = piVar18;
  iVar11 = piVar8[3];
  if (iVar11 == *piVar8) {
    iVar20 = piVar8[4];
    iVar22 = piVar8[1];
    bVar7 = SBORROW4(iVar20,iVar22);
    iVar13 = iVar20 - iVar22;
    if (iVar20 == iVar22) {
      bVar7 = SBORROW4(piVar8[5],piVar8[2]);
      iVar13 = piVar8[5] - piVar8[2];
    }
    if (iVar13 < 0 != bVar7) {
LAB_10995590c:
      iVar13 = piVar8[5];
      do {
        piVar18 = piVar8;
        *(undefined8 *)(piVar18 + 3) = *(undefined8 *)piVar18;
        piVar18[5] = piVar18[2];
        iVar22 = piVar18[-3];
        bVar6 = SBORROW4(iVar11,iVar22);
        bVar7 = iVar11 - iVar22 < 0;
        if (iVar11 == iVar22) {
          iVar22 = piVar18[-2];
          bVar6 = SBORROW4(iVar20,iVar22);
          bVar7 = iVar20 - iVar22 < 0;
          if (iVar20 == iVar22) {
            bVar6 = SBORROW4(iVar13,piVar18[-1]);
            bVar7 = iVar13 - piVar18[-1] < 0;
          }
        }
        piVar8 = piVar18 + -3;
      } while (bVar7 != bVar6);
      *piVar18 = iVar11;
      piVar18[1] = iVar20;
      piVar18[2] = iVar13;
    }
  }
  else if (iVar11 < *piVar8) {
    iVar20 = piVar8[4];
    goto LAB_10995590c;
  }
  piVar18 = piVar17 + 3;
  piVar8 = piVar17;
  if (piVar18 == param_2) {
    return;
  }
  goto LAB_1099558c8;
LAB_1099553a8:
  iVar11 = piVar17[3];
  if (iVar11 == *piVar17) {
    iVar20 = piVar17[4];
    iVar22 = piVar17[1];
    bVar7 = SBORROW4(iVar20,iVar22);
    iVar13 = iVar20 - iVar22;
    if (iVar20 == iVar22) {
      bVar7 = SBORROW4(piVar17[5],piVar17[2]);
      iVar13 = piVar17[5] - piVar17[2];
    }
    if (iVar13 < 0 != bVar7) {
LAB_1099553ec:
      iVar13 = piVar17[5];
      *(undefined8 *)piVar18 = *(undefined8 *)piVar17;
      piVar18[2] = piVar17[2];
      piVar27 = piVar8;
      lVar26 = lVar24;
      if (piVar17 != piVar8) {
        do {
          puVar3 = (undefined8 *)((long)piVar8 + lVar26);
          iVar22 = *(int *)((long)puVar3 + -0xc);
          if (iVar11 == iVar22) {
            iVar5 = *(int *)(puVar3 + -1);
            bVar7 = SBORROW4(iVar20,iVar5);
            iVar22 = iVar20 - iVar5;
            if (iVar20 == iVar5) {
              iVar22 = *(int *)((long)piVar8 + lVar26 + -4);
              bVar7 = SBORROW4(iVar13,iVar22);
              iVar22 = iVar13 - iVar22;
            }
            piVar27 = piVar17;
            if (iVar22 < 0 == bVar7) break;
          }
          else if (iVar22 <= iVar11) {
            piVar27 = (int *)((long)piVar8 + lVar26);
            break;
          }
          piVar17 = piVar17 + -3;
          *puVar3 = *(undefined8 *)((long)puVar3 + -0xc);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((long)puVar3 + -4);
          lVar26 = lVar26 + -0xc;
          piVar27 = piVar8;
        } while (lVar26 != 0);
      }
      *piVar27 = iVar11;
      piVar27[1] = iVar20;
      piVar27[2] = iVar13;
    }
  }
  else if (iVar11 < *piVar17) {
    iVar20 = piVar17[4];
    goto LAB_1099553ec;
  }
  piVar27 = piVar18 + 3;
  lVar24 = lVar24 + 0xc;
  piVar17 = piVar18;
  piVar18 = piVar27;
  if (piVar27 == param_2) {
    return;
  }
  goto LAB_1099553a8;
LAB_1099554a8:
  do {
    if ((long)uVar23 <= (long)uVar19) {
      uVar28 = (uVar23 & 0x3fffffffffffffff) << 1 | 1;
      piVar18 = piVar8 + uVar28 * 3;
      uVar1 = uVar23 * 2 + 2;
      if ((long)uVar1 < (long)uVar12) {
        iVar20 = piVar18[3];
        iVar11 = *piVar18;
        bVar6 = SBORROW4(iVar11,iVar20);
        bVar7 = iVar11 - iVar20 < 0;
        if (iVar11 == iVar20) {
          iVar11 = piVar18[1];
          iVar20 = piVar18[4];
          bVar6 = SBORROW4(iVar11,iVar20);
          bVar7 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar6 = SBORROW4(piVar18[2],piVar18[5]);
            bVar7 = piVar18[2] - piVar18[5] < 0;
          }
        }
        if (bVar7 != bVar6) {
          piVar18 = piVar18 + 3;
          uVar28 = uVar1;
        }
      }
      piVar17 = piVar8 + uVar23 * 3;
      iVar11 = *piVar17;
      if (*piVar18 == iVar11) {
        iVar13 = piVar18[1];
        iVar20 = piVar17[1];
        if (iVar13 == iVar20) {
          iVar20 = iVar13;
          if (piVar17[2] <= piVar18[2]) {
LAB_109955554:
            iVar13 = piVar17[2];
            iVar22 = piVar18[2];
            *(undefined8 *)piVar17 = *(undefined8 *)piVar18;
            piVar17[2] = iVar22;
            if (uVar28 <= uVar19) {
              do {
                uVar4 = uVar28 << 1 | 1;
                piVar17 = piVar8 + uVar4 * 3;
                uVar1 = uVar28 * 2 + 2;
                uVar28 = uVar4;
                if ((long)uVar1 < (long)uVar12) {
                  iVar5 = piVar17[3];
                  iVar22 = *piVar17;
                  bVar6 = SBORROW4(iVar22,iVar5);
                  bVar7 = iVar22 - iVar5 < 0;
                  if (iVar22 == iVar5) {
                    iVar22 = piVar17[1];
                    iVar5 = piVar17[4];
                    bVar6 = SBORROW4(iVar22,iVar5);
                    bVar7 = iVar22 - iVar5 < 0;
                    if (iVar22 == iVar5) {
                      bVar6 = SBORROW4(piVar17[2],piVar17[5]);
                      bVar7 = piVar17[2] - piVar17[5] < 0;
                    }
                  }
                  if (bVar7 != bVar6) {
                    piVar17 = piVar17 + 3;
                    uVar28 = uVar1;
                  }
                }
                iVar22 = *piVar17;
                bVar6 = SBORROW4(iVar22,iVar11);
                bVar7 = iVar22 - iVar11 < 0;
                if (iVar22 == iVar11) {
                  iVar22 = piVar17[1];
                  bVar6 = SBORROW4(iVar22,iVar20);
                  bVar7 = iVar22 - iVar20 < 0;
                  if (iVar22 == iVar20) {
                    bVar6 = SBORROW4(piVar17[2],iVar13);
                    bVar7 = piVar17[2] - iVar13 < 0;
                  }
                }
                if (bVar7 != bVar6) break;
                uVar15 = *(undefined8 *)piVar17;
                piVar18[2] = piVar17[2];
                *(undefined8 *)piVar18 = uVar15;
                piVar18 = piVar17;
              } while ((long)uVar28 <= (long)uVar19);
            }
            *piVar18 = iVar11;
            piVar18[1] = iVar20;
            piVar18[2] = iVar13;
          }
        }
        else if (iVar20 <= iVar13) goto LAB_109955554;
      }
      else if (iVar11 <= *piVar18) {
        iVar20 = piVar17[1];
        goto LAB_109955554;
      }
    }
    bVar7 = 0 < (long)uVar23;
    uVar23 = uVar23 - 1;
  } while (bVar7);
  lVar24 = (uVar14 >> 2) * -0x5555555555555555;
  do {
    uVar15 = *(undefined8 *)piVar8;
    iVar11 = piVar8[2];
    piVar18 = piVar8;
    uVar12 = 0;
    do {
      uVar23 = uVar12 << 1 | 1;
      uVar14 = uVar12 * 2 + 2;
      piVar17 = piVar18 + uVar12 * 3 + 3;
      if ((long)uVar14 < lVar24) {
        iVar13 = piVar18[uVar12 * 3 + 6];
        iVar20 = piVar18[uVar12 * 3 + 3];
        bVar6 = SBORROW4(iVar20,iVar13);
        bVar7 = iVar20 - iVar13 < 0;
        if (iVar20 == iVar13) {
          iVar20 = piVar18[uVar12 * 3 + 4];
          iVar13 = piVar18[uVar12 * 3 + 7];
          bVar6 = SBORROW4(iVar20,iVar13);
          bVar7 = iVar20 - iVar13 < 0;
          if (iVar20 == iVar13) {
            bVar6 = SBORROW4(piVar18[uVar12 * 3 + 5],piVar18[uVar12 * 3 + 8]);
            bVar7 = piVar18[uVar12 * 3 + 5] - piVar18[uVar12 * 3 + 8] < 0;
          }
        }
        if (bVar7 != bVar6) {
          piVar17 = piVar18 + uVar12 * 3 + 6;
          uVar23 = uVar14;
        }
      }
      uVar16 = *(undefined8 *)piVar17;
      piVar18[2] = piVar17[2];
      *(undefined8 *)piVar18 = uVar16;
      piVar18 = piVar17;
      uVar12 = uVar23;
    } while ((long)uVar23 <= (long)(lVar24 - 2U >> 1));
    piVar18 = param_2 + -3;
    if (piVar17 == piVar18) {
      piVar17[2] = iVar11;
      *(undefined8 *)piVar17 = uVar15;
    }
    else {
      uVar16 = *(undefined8 *)piVar18;
      piVar17[2] = param_2[-1];
      *(undefined8 *)piVar17 = uVar16;
      param_2[-1] = iVar11;
      *(undefined8 *)piVar18 = uVar15;
      puVar2 = (undefined *)((long)piVar17 + (0xc - (long)piVar8));
      if (0xc < (long)puVar2) {
        uVar14 = ((ulong)puVar2 >> 2) * -0x5555555555555555 - 2;
        uVar12 = uVar14 >> 1;
        piVar27 = piVar8 + uVar12 * 3;
        iVar11 = *piVar17;
        if (*piVar27 == iVar11) {
          iVar13 = piVar27[1];
          iVar20 = piVar17[1];
          if (iVar13 == iVar20) {
            iVar20 = iVar13;
            if (piVar27[2] < piVar17[2]) {
LAB_109955784:
              iVar13 = piVar17[2];
              iVar22 = piVar27[2];
              *(undefined8 *)piVar17 = *(undefined8 *)piVar27;
              piVar17[2] = iVar22;
              while (1 < uVar14) {
                uVar14 = uVar12 - 1;
                uVar12 = uVar14 >> 1;
                piVar17 = piVar8 + uVar12 * 3;
                iVar22 = *piVar17;
                bVar6 = SBORROW4(iVar22,iVar11);
                bVar7 = iVar22 - iVar11 < 0;
                if (iVar22 == iVar11) {
                  iVar22 = piVar17[1];
                  bVar6 = SBORROW4(iVar22,iVar20);
                  bVar7 = iVar22 - iVar20 < 0;
                  if (iVar22 == iVar20) {
                    bVar6 = SBORROW4(piVar17[2],iVar13);
                    bVar7 = piVar17[2] - iVar13 < 0;
                  }
                }
                if (bVar7 == bVar6) break;
                uVar15 = *(undefined8 *)piVar17;
                piVar27[2] = piVar17[2];
                *(undefined8 *)piVar27 = uVar15;
                piVar27 = piVar17;
              }
              *piVar27 = iVar11;
              piVar27[1] = iVar20;
              piVar27[2] = iVar13;
            }
          }
          else if (iVar13 < iVar20) goto LAB_109955784;
        }
        else if (*piVar27 < iVar11) {
          iVar20 = piVar17[1];
          goto LAB_109955784;
        }
      }
    }
    bVar7 = lVar24 < 3;
    lVar24 = lVar24 + -1;
    param_2 = piVar18;
    if (bVar7) {
      return;
    }
  } while( true );
LAB_1099550dc:
  param_2 = piVar21;
  if (((ulong)piVar9 & 1) != 0) {
    return;
  }
  goto LAB_109954388;
}



/* Entry: 109954358; end: 109955a07;  */

void FUN_109954358(int *param_1,int *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  int *piVar27;
  int *piVar28;
  undefined8 uStack_70;
  int iStack_68;
  
LAB_109954388:
  piVar15 = param_2 + -3;
  piVar28 = param_2 + -6;
  piVar25 = param_2 + -9;
  piVar16 = param_1;
LAB_109954398:
  do {
    param_1 = piVar16;
    uVar12 = (long)param_2 - (long)param_1;
    uVar10 = ((long)uVar12 >> 2) * -0x5555555555555555;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        piVar16 = param_2 + -3;
        iVar18 = *piVar16;
        iVar9 = *param_1;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = param_1[1];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],param_1[2]);
            bVar6 = param_2[-1] - param_1[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        uVar13 = *(undefined8 *)param_1;
        iVar9 = param_1[2];
        uVar14 = *(undefined8 *)piVar16;
        param_1[2] = param_2[-1];
        *(undefined8 *)param_1 = uVar14;
        param_2[-1] = iVar9;
        *(undefined8 *)piVar16 = uVar13;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        piVar16 = param_1 + 3;
        iVar18 = *piVar16;
        iVar9 = *param_1;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar9 = param_1[4];
          iVar11 = param_1[1];
          bVar5 = SBORROW4(iVar9,iVar11);
          bVar6 = iVar9 - iVar11 < 0;
          if (iVar9 == iVar11) {
            bVar5 = SBORROW4(param_1[5],param_1[2]);
            bVar6 = param_1[5] - param_1[2] < 0;
          }
        }
        if (bVar6 != bVar5) {
          iVar9 = *piVar15;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = param_2[-2];
            iVar9 = param_1[4];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(param_2[-1],param_1[5]);
              bVar6 = param_2[-1] - param_1[5] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)param_1;
            iVar9 = param_1[2];
            uVar14 = *(undefined8 *)piVar15;
            param_1[2] = param_2[-1];
            *(undefined8 *)param_1 = uVar14;
            param_2[-1] = iVar9;
            *(undefined8 *)piVar15 = uVar13;
            return;
          }
          uVar13 = *(undefined8 *)param_1;
          iVar9 = param_1[2];
          *(undefined8 *)param_1 = *(undefined8 *)piVar16;
          param_1[2] = param_1[5];
          *(undefined8 *)piVar16 = uVar13;
          param_1[5] = iVar9;
          iVar9 = *piVar15;
          iVar18 = param_1[3];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = param_2[-2];
            iVar9 = param_1[4];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(param_2[-1],param_1[5]);
              bVar6 = param_2[-1] - param_1[5] < 0;
            }
          }
          if (bVar6 == bVar5) {
            return;
          }
          uVar13 = *(undefined8 *)piVar16;
          iVar9 = param_1[5];
          iVar18 = param_2[-1];
          *(undefined8 *)piVar16 = *(undefined8 *)piVar15;
          param_1[5] = iVar18;
          param_2[-1] = iVar9;
          *(undefined8 *)piVar15 = uVar13;
          return;
        }
        iVar9 = *piVar15;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar18 = param_2[-2];
          iVar9 = param_1[4];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],param_1[5]);
            bVar6 = param_2[-1] - param_1[5] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        uVar13 = *(undefined8 *)piVar16;
        iVar9 = param_1[5];
        iVar18 = param_2[-1];
        *(undefined8 *)piVar16 = *(undefined8 *)piVar15;
        param_1[5] = iVar18;
        param_2[-1] = iVar9;
        *(undefined8 *)piVar15 = uVar13;
        iVar9 = param_1[3];
        iVar18 = *param_1;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_1[4];
          iVar18 = param_1[1];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_1[5],param_1[2]);
            bVar6 = param_1[5] - param_1[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        uVar13 = *(undefined8 *)param_1;
        iVar9 = param_1[2];
        *(undefined8 *)param_1 = *(undefined8 *)piVar16;
        param_1[2] = param_1[5];
        *(undefined8 *)piVar16 = uVar13;
        param_1[5] = iVar9;
        return;
      }
      if (uVar10 == 4) {
        piVar16 = param_1 + 3;
        piVar25 = param_1 + 6;
        iVar9 = *piVar16;
        iVar18 = *param_1;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar18 = param_1[4];
          iVar11 = param_1[1];
          bVar5 = SBORROW4(iVar18,iVar11);
          bVar6 = iVar18 - iVar11 < 0;
          if (iVar18 == iVar11) {
            bVar5 = SBORROW4(param_1[5],param_1[2]);
            bVar6 = param_1[5] - param_1[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          iVar18 = *piVar25;
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            iVar9 = param_1[7];
            iVar18 = param_1[4];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(param_1[8],param_1[5]);
              bVar6 = param_1[8] - param_1[5] < 0;
            }
          }
          if (bVar6 != bVar5) {
            iVar9 = param_1[5];
            uVar13 = *(undefined8 *)piVar16;
            *(undefined8 *)piVar16 = *(undefined8 *)piVar25;
            param_1[5] = param_1[8];
            *(undefined8 *)piVar25 = uVar13;
            param_1[8] = iVar9;
            iVar9 = *piVar16;
            iVar18 = *param_1;
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              iVar9 = param_1[4];
              iVar18 = param_1[1];
              bVar5 = SBORROW4(iVar9,iVar18);
              bVar6 = iVar9 - iVar18 < 0;
              if (iVar9 == iVar18) {
                bVar5 = SBORROW4(param_1[5],param_1[2]);
                bVar6 = param_1[5] - param_1[2] < 0;
              }
            }
            if (bVar6 != bVar5) {
              iVar9 = param_1[2];
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)piVar16;
              param_1[2] = param_1[5];
              *(undefined8 *)piVar16 = uVar13;
              param_1[5] = iVar9;
            }
          }
        }
        else {
          iVar18 = *piVar25;
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            iVar9 = param_1[7];
            iVar18 = param_1[4];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(param_1[8],param_1[5]);
              bVar6 = param_1[8] - param_1[5] < 0;
            }
          }
          if (bVar6 == bVar5) {
            iVar9 = param_1[2];
            uVar13 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)piVar16;
            param_1[2] = param_1[5];
            *(undefined8 *)piVar16 = uVar13;
            param_1[5] = iVar9;
            iVar9 = *piVar25;
            iVar18 = (int)uVar13;
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              iVar9 = param_1[7];
              iVar18 = param_1[4];
              bVar5 = SBORROW4(iVar9,iVar18);
              bVar6 = iVar9 - iVar18 < 0;
              if (iVar9 == iVar18) {
                bVar5 = SBORROW4(param_1[8],param_1[5]);
                bVar6 = param_1[8] - param_1[5] < 0;
              }
            }
            if (bVar6 == bVar5) goto LAB_109955b94;
            iVar9 = param_1[5];
            uVar13 = *(undefined8 *)piVar16;
            *(undefined8 *)piVar16 = *(undefined8 *)piVar25;
            param_1[5] = param_1[8];
          }
          else {
            iVar9 = param_1[2];
            uVar13 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)piVar25;
            param_1[2] = param_1[8];
          }
          *(undefined8 *)piVar25 = uVar13;
          param_1[8] = iVar9;
        }
LAB_109955b94:
        iVar9 = *piVar15;
        iVar18 = *piVar25;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_2[-2];
          iVar18 = param_1[7];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_2[-1],param_1[8]);
            bVar6 = param_2[-1] - param_1[8] < 0;
          }
        }
        if (bVar6 != bVar5) {
          iVar9 = param_1[8];
          uVar13 = *(undefined8 *)piVar25;
          iVar18 = param_2[-1];
          *(undefined8 *)piVar25 = *(undefined8 *)piVar15;
          param_1[8] = iVar18;
          *(undefined8 *)piVar15 = uVar13;
          param_2[-1] = iVar9;
          iVar9 = *piVar25;
          iVar18 = *piVar16;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = param_1[7];
            iVar18 = param_1[4];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(param_1[8],param_1[5]);
              bVar6 = param_1[8] - param_1[5] < 0;
            }
          }
          if (bVar6 != bVar5) {
            iVar9 = param_1[5];
            uVar13 = *(undefined8 *)piVar16;
            *(undefined8 *)piVar16 = *(undefined8 *)piVar25;
            param_1[5] = param_1[8];
            *(undefined8 *)piVar25 = uVar13;
            param_1[8] = iVar9;
            iVar9 = *piVar16;
            iVar18 = *param_1;
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              iVar9 = param_1[4];
              iVar18 = param_1[1];
              bVar5 = SBORROW4(iVar9,iVar18);
              bVar6 = iVar9 - iVar18 < 0;
              if (iVar9 == iVar18) {
                bVar5 = SBORROW4(param_1[5],param_1[2]);
                bVar6 = param_1[5] - param_1[2] < 0;
              }
            }
            if (bVar6 != bVar5) {
              iVar9 = param_1[2];
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)piVar16;
              param_1[2] = param_1[5];
              *(undefined8 *)piVar16 = uVar13;
              param_1[5] = iVar9;
            }
          }
        }
        return;
      }
      if (uVar10 == 5) {
        FUN_109955a08(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
        piVar16 = param_2 + -3;
        iVar18 = *piVar16;
        iVar9 = param_1[9];
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = param_1[10];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],param_1[0xb]);
            bVar6 = param_2[-1] - param_1[0xb] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        uVar13 = *(undefined8 *)(param_1 + 9);
        iVar18 = param_1[0xb];
        iVar9 = param_2[-1];
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)piVar16;
        param_1[0xb] = iVar9;
        param_2[-1] = iVar18;
        *(undefined8 *)piVar16 = uVar13;
        iVar9 = param_1[9];
        iVar18 = param_1[6];
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_1[10];
          iVar18 = param_1[7];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_1[0xb],param_1[8]);
            bVar6 = param_1[0xb] - param_1[8] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        iVar9 = param_1[8];
        uVar13 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 9);
        param_1[8] = param_1[0xb];
        *(undefined8 *)(param_1 + 9) = uVar13;
        param_1[0xb] = iVar9;
        iVar9 = param_1[6];
        iVar18 = param_1[3];
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_1[7];
          iVar18 = param_1[4];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_1[8],param_1[5]);
            bVar6 = param_1[8] - param_1[5] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        iVar9 = param_1[5];
        uVar13 = *(undefined8 *)(param_1 + 3);
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_1 + 6);
        param_1[5] = param_1[8];
        *(undefined8 *)(param_1 + 6) = uVar13;
        param_1[8] = iVar9;
        iVar9 = param_1[3];
        iVar18 = *param_1;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_1[4];
          iVar18 = param_1[1];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_1[5],param_1[2]);
            bVar6 = param_1[5] - param_1[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          return;
        }
        uVar13 = *(undefined8 *)param_1;
        iVar9 = param_1[2];
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
        param_1[2] = param_1[5];
        *(undefined8 *)(param_1 + 3) = uVar13;
        param_1[5] = iVar9;
        return;
      }
    }
    if ((long)uVar12 < 0x120) {
      piVar16 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || piVar16 == param_2) {
          return;
        }
        break;
      }
      if (param_1 == param_2 || piVar16 == param_2) {
        return;
      }
      lVar22 = 0;
      piVar15 = param_1;
      goto LAB_1099553a8;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar10 - 2 >> 1;
      uVar21 = uVar17;
      goto LAB_1099554a8;
    }
    piVar16 = param_1 + (uVar10 >> 1) * 3;
    if (uVar12 < 0x601) {
      iVar9 = *param_1;
      iVar18 = *piVar16;
      bVar5 = SBORROW4(iVar9,iVar18);
      bVar6 = iVar9 - iVar18 < 0;
      if (iVar9 == iVar18) {
        iVar18 = param_1[1];
        iVar11 = piVar16[1];
        bVar5 = SBORROW4(iVar18,iVar11);
        bVar6 = iVar18 - iVar11 < 0;
        if (iVar18 == iVar11) {
          bVar5 = SBORROW4(param_1[2],piVar16[2]);
          bVar6 = param_1[2] - piVar16[2] < 0;
        }
      }
      if (bVar6 == bVar5) {
        iVar18 = *piVar15;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = param_1[1];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],param_1[2]);
            bVar6 = param_2[-1] - param_1[2] < 0;
          }
        }
        if (bVar6 != bVar5) {
          uVar13 = *(undefined8 *)param_1;
          iVar9 = param_1[2];
          uVar14 = *(undefined8 *)piVar15;
          param_1[2] = param_2[-1];
          *(undefined8 *)param_1 = uVar14;
          param_2[-1] = iVar9;
          *(undefined8 *)piVar15 = uVar13;
          iVar9 = *param_1;
          iVar18 = *piVar16;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = param_1[1];
            iVar18 = piVar16[1];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(param_1[2],piVar16[2]);
              bVar6 = param_1[2] - piVar16[2] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar16;
            iVar9 = piVar16[2];
            uVar14 = *(undefined8 *)param_1;
            piVar16[2] = param_1[2];
            *(undefined8 *)piVar16 = uVar14;
            param_1[2] = iVar9;
            *(undefined8 *)param_1 = uVar13;
          }
        }
      }
      else {
        iVar18 = *piVar15;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = param_1[1];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],param_1[2]);
            bVar6 = param_2[-1] - param_1[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          uVar13 = *(undefined8 *)piVar16;
          iVar9 = piVar16[2];
          uVar14 = *(undefined8 *)param_1;
          piVar16[2] = param_1[2];
          *(undefined8 *)piVar16 = uVar14;
          param_1[2] = iVar9;
          *(undefined8 *)param_1 = uVar13;
          iVar9 = *piVar15;
          iVar18 = *param_1;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = param_2[-2];
            iVar9 = param_1[1];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(param_2[-1],param_1[2]);
              bVar6 = param_2[-1] - param_1[2] < 0;
            }
          }
          if (bVar6 == bVar5) goto LAB_109954d40;
          uStack_70 = *(undefined8 *)param_1;
          iStack_68 = param_1[2];
          uVar13 = *(undefined8 *)piVar15;
          param_1[2] = param_2[-1];
          *(undefined8 *)param_1 = uVar13;
        }
        else {
          uStack_70 = *(undefined8 *)piVar16;
          iStack_68 = piVar16[2];
          uVar13 = *(undefined8 *)piVar15;
          piVar16[2] = param_2[-1];
          *(undefined8 *)piVar16 = uVar13;
        }
        param_2[-1] = iStack_68;
        *(undefined8 *)piVar15 = uStack_70;
      }
    }
    else {
      iVar9 = *piVar16;
      iVar18 = *param_1;
      bVar5 = SBORROW4(iVar9,iVar18);
      bVar6 = iVar9 - iVar18 < 0;
      if (iVar9 == iVar18) {
        iVar18 = piVar16[1];
        iVar11 = param_1[1];
        bVar5 = SBORROW4(iVar18,iVar11);
        bVar6 = iVar18 - iVar11 < 0;
        if (iVar18 == iVar11) {
          bVar5 = SBORROW4(piVar16[2],param_1[2]);
          bVar6 = piVar16[2] - param_1[2] < 0;
        }
      }
      if (bVar6 == bVar5) {
        iVar18 = *piVar15;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = piVar16[1];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],piVar16[2]);
            bVar6 = param_2[-1] - piVar16[2] < 0;
          }
        }
        if (bVar6 != bVar5) {
          uVar13 = *(undefined8 *)piVar16;
          iVar9 = piVar16[2];
          uVar14 = *(undefined8 *)piVar15;
          piVar16[2] = param_2[-1];
          *(undefined8 *)piVar16 = uVar14;
          param_2[-1] = iVar9;
          *(undefined8 *)piVar15 = uVar13;
          iVar9 = *piVar16;
          iVar18 = *param_1;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = piVar16[1];
            iVar18 = param_1[1];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(piVar16[2],param_1[2]);
              bVar6 = piVar16[2] - param_1[2] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)param_1;
            iVar9 = param_1[2];
            uVar14 = *(undefined8 *)piVar16;
            param_1[2] = piVar16[2];
            *(undefined8 *)param_1 = uVar14;
            piVar16[2] = iVar9;
            *(undefined8 *)piVar16 = uVar13;
          }
        }
      }
      else {
        iVar18 = *piVar15;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar18 = param_2[-2];
          iVar9 = piVar16[1];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-1],piVar16[2]);
            bVar6 = param_2[-1] - piVar16[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          uVar13 = *(undefined8 *)param_1;
          iVar9 = param_1[2];
          uVar14 = *(undefined8 *)piVar16;
          param_1[2] = piVar16[2];
          *(undefined8 *)param_1 = uVar14;
          piVar16[2] = iVar9;
          *(undefined8 *)piVar16 = uVar13;
          iVar9 = *piVar15;
          iVar18 = *piVar16;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = param_2[-2];
            iVar9 = piVar16[1];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(param_2[-1],piVar16[2]);
              bVar6 = param_2[-1] - piVar16[2] < 0;
            }
          }
          if (bVar6 == bVar5) goto LAB_109954710;
          uStack_70 = *(undefined8 *)piVar16;
          iStack_68 = piVar16[2];
          uVar13 = *(undefined8 *)piVar15;
          piVar16[2] = param_2[-1];
          *(undefined8 *)piVar16 = uVar13;
        }
        else {
          uStack_70 = *(undefined8 *)param_1;
          iStack_68 = param_1[2];
          uVar13 = *(undefined8 *)piVar15;
          param_1[2] = param_2[-1];
          *(undefined8 *)param_1 = uVar13;
        }
        param_2[-1] = iStack_68;
        *(undefined8 *)piVar15 = uStack_70;
      }
LAB_109954710:
      piVar8 = param_1 + 3;
      iVar9 = *piVar8;
      piVar7 = piVar16 + -3;
      iVar18 = *piVar7;
      bVar5 = SBORROW4(iVar18,iVar9);
      bVar6 = iVar18 - iVar9 < 0;
      if (iVar18 == iVar9) {
        iVar11 = piVar16[-2];
        iVar9 = param_1[4];
        bVar5 = SBORROW4(iVar11,iVar9);
        bVar6 = iVar11 - iVar9 < 0;
        if (iVar11 == iVar9) {
          bVar5 = SBORROW4(piVar16[-1],param_1[5]);
          bVar6 = piVar16[-1] - param_1[5] < 0;
        }
      }
      if (bVar6 == bVar5) {
        iVar9 = *piVar28;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_2[-5];
          iVar18 = piVar16[-2];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_2[-4],piVar16[-1]);
            bVar6 = param_2[-4] - piVar16[-1] < 0;
          }
        }
        if (bVar6 != bVar5) {
          uVar13 = *(undefined8 *)piVar7;
          iVar9 = piVar16[-1];
          uVar14 = *(undefined8 *)piVar28;
          piVar16[-1] = param_2[-4];
          *(undefined8 *)piVar7 = uVar14;
          param_2[-4] = iVar9;
          *(undefined8 *)piVar28 = uVar13;
          iVar9 = *piVar7;
          iVar18 = *piVar8;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = piVar16[-2];
            iVar9 = param_1[4];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(piVar16[-1],param_1[5]);
              bVar6 = piVar16[-1] - param_1[5] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar8;
            iVar9 = param_1[5];
            iVar18 = piVar16[-1];
            *(undefined8 *)piVar8 = *(undefined8 *)piVar7;
            param_1[5] = iVar18;
            piVar16[-1] = iVar9;
            *(undefined8 *)piVar7 = uVar13;
          }
        }
      }
      else {
        iVar9 = *piVar28;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = param_2[-5];
          iVar18 = piVar16[-2];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(param_2[-4],piVar16[-1]);
            bVar6 = param_2[-4] - piVar16[-1] < 0;
          }
        }
        if (bVar6 == bVar5) {
          uVar13 = *(undefined8 *)piVar8;
          iVar9 = param_1[5];
          iVar18 = piVar16[-1];
          *(undefined8 *)piVar8 = *(undefined8 *)piVar7;
          param_1[5] = iVar18;
          piVar16[-1] = iVar9;
          *(undefined8 *)piVar7 = uVar13;
          iVar9 = *piVar28;
          iVar18 = (int)uVar13;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = param_2[-5];
            iVar18 = piVar16[-2];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(param_2[-4],piVar16[-1]);
              bVar6 = param_2[-4] - piVar16[-1] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar7;
            iVar9 = piVar16[-1];
            uVar14 = *(undefined8 *)piVar28;
            piVar16[-1] = param_2[-4];
            *(undefined8 *)piVar7 = uVar14;
            param_2[-4] = iVar9;
            *(undefined8 *)piVar28 = uVar13;
          }
        }
        else {
          uVar13 = *(undefined8 *)piVar8;
          iVar9 = param_1[5];
          iVar18 = param_2[-4];
          *(undefined8 *)piVar8 = *(undefined8 *)piVar28;
          param_1[5] = iVar18;
          param_2[-4] = iVar9;
          *(undefined8 *)piVar28 = uVar13;
        }
      }
      piVar19 = param_1 + 6;
      iVar9 = *piVar19;
      piVar8 = piVar16 + 3;
      iVar18 = *piVar8;
      bVar5 = SBORROW4(iVar18,iVar9);
      bVar6 = iVar18 - iVar9 < 0;
      if (iVar18 == iVar9) {
        iVar9 = piVar16[4];
        iVar11 = param_1[7];
        bVar5 = SBORROW4(iVar9,iVar11);
        bVar6 = iVar9 - iVar11 < 0;
        if (iVar9 == iVar11) {
          bVar5 = SBORROW4(piVar16[5],param_1[8]);
          bVar6 = piVar16[5] - param_1[8] < 0;
        }
      }
      if (bVar6 == bVar5) {
        iVar9 = *piVar25;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar18 = param_2[-8];
          iVar9 = piVar16[4];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-7],piVar16[5]);
            bVar6 = param_2[-7] - piVar16[5] < 0;
          }
        }
        if (bVar6 != bVar5) {
          uVar13 = *(undefined8 *)piVar8;
          iVar9 = piVar16[5];
          uVar14 = *(undefined8 *)piVar25;
          piVar16[5] = param_2[-7];
          *(undefined8 *)piVar8 = uVar14;
          param_2[-7] = iVar9;
          *(undefined8 *)piVar25 = uVar13;
          iVar9 = *piVar8;
          iVar18 = *piVar19;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = piVar16[4];
            iVar18 = param_1[7];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(piVar16[5],param_1[8]);
              bVar6 = piVar16[5] - param_1[8] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar19;
            iVar9 = param_1[8];
            iVar18 = piVar16[5];
            *(undefined8 *)piVar19 = *(undefined8 *)piVar8;
            param_1[8] = iVar18;
            piVar16[5] = iVar9;
            *(undefined8 *)piVar8 = uVar13;
          }
        }
      }
      else {
        iVar9 = *piVar25;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar18 = param_2[-8];
          iVar9 = piVar16[4];
          bVar5 = SBORROW4(iVar18,iVar9);
          bVar6 = iVar18 - iVar9 < 0;
          if (iVar18 == iVar9) {
            bVar5 = SBORROW4(param_2[-7],piVar16[5]);
            bVar6 = param_2[-7] - piVar16[5] < 0;
          }
        }
        if (bVar6 == bVar5) {
          uVar13 = *(undefined8 *)piVar19;
          iVar9 = param_1[8];
          iVar18 = piVar16[5];
          *(undefined8 *)piVar19 = *(undefined8 *)piVar8;
          param_1[8] = iVar18;
          piVar16[5] = iVar9;
          *(undefined8 *)piVar8 = uVar13;
          iVar9 = *piVar25;
          iVar18 = (int)uVar13;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar18 = param_2[-8];
            iVar9 = piVar16[4];
            bVar5 = SBORROW4(iVar18,iVar9);
            bVar6 = iVar18 - iVar9 < 0;
            if (iVar18 == iVar9) {
              bVar5 = SBORROW4(param_2[-7],piVar16[5]);
              bVar6 = param_2[-7] - piVar16[5] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar8;
            iVar9 = piVar16[5];
            uVar14 = *(undefined8 *)piVar25;
            piVar16[5] = param_2[-7];
            *(undefined8 *)piVar8 = uVar14;
            param_2[-7] = iVar9;
            *(undefined8 *)piVar25 = uVar13;
          }
        }
        else {
          uVar13 = *(undefined8 *)piVar19;
          iVar9 = param_1[8];
          iVar18 = param_2[-7];
          *(undefined8 *)piVar19 = *(undefined8 *)piVar25;
          param_1[8] = iVar18;
          param_2[-7] = iVar9;
          *(undefined8 *)piVar25 = uVar13;
        }
      }
      iVar9 = *piVar16;
      iVar18 = piVar16[-3];
      bVar5 = SBORROW4(iVar9,iVar18);
      bVar6 = iVar9 - iVar18 < 0;
      if (iVar9 == iVar18) {
        iVar18 = piVar16[1];
        iVar11 = piVar16[-2];
        bVar5 = SBORROW4(iVar18,iVar11);
        bVar6 = iVar18 - iVar11 < 0;
        if (iVar18 == iVar11) {
          bVar5 = SBORROW4(piVar16[2],piVar16[-1]);
          bVar6 = piVar16[2] - piVar16[-1] < 0;
        }
      }
      if (bVar6 == bVar5) {
        iVar18 = *piVar8;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar9 = piVar16[4];
          iVar18 = piVar16[1];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(piVar16[5],piVar16[2]);
            bVar6 = piVar16[5] - piVar16[2] < 0;
          }
        }
        if (bVar6 != bVar5) {
          uVar13 = *(undefined8 *)piVar16;
          iVar9 = piVar16[2];
          *(undefined8 *)piVar16 = *(undefined8 *)piVar8;
          piVar16[2] = piVar16[5];
          piVar16[5] = iVar9;
          *(undefined8 *)piVar8 = uVar13;
          iVar9 = *piVar16;
          iVar18 = piVar16[-3];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = piVar16[1];
            iVar18 = piVar16[-2];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(piVar16[2],piVar16[-1]);
              bVar6 = piVar16[2] - piVar16[-1] < 0;
            }
          }
          if (bVar6 != bVar5) {
            uVar13 = *(undefined8 *)piVar7;
            iVar9 = piVar16[-1];
            *(undefined8 *)piVar7 = *(undefined8 *)piVar16;
            piVar16[-1] = piVar16[2];
            piVar16[2] = iVar9;
            *(undefined8 *)piVar16 = uVar13;
          }
        }
      }
      else {
        iVar18 = *piVar8;
        bVar5 = SBORROW4(iVar18,iVar9);
        bVar6 = iVar18 - iVar9 < 0;
        if (iVar18 == iVar9) {
          iVar9 = piVar16[4];
          iVar18 = piVar16[1];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(piVar16[5],piVar16[2]);
            bVar6 = piVar16[5] - piVar16[2] < 0;
          }
        }
        if (bVar6 == bVar5) {
          uVar13 = *(undefined8 *)piVar7;
          iVar18 = piVar16[-1];
          *(undefined8 *)piVar7 = *(undefined8 *)piVar16;
          iVar9 = piVar16[3];
          piVar16[-1] = piVar16[2];
          piVar16[2] = iVar18;
          *(undefined8 *)piVar16 = uVar13;
          iVar18 = (int)uVar13;
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            iVar9 = piVar16[4];
            iVar18 = piVar16[1];
            bVar5 = SBORROW4(iVar9,iVar18);
            bVar6 = iVar9 - iVar18 < 0;
            if (iVar9 == iVar18) {
              bVar5 = SBORROW4(piVar16[5],piVar16[2]);
              bVar6 = piVar16[5] - piVar16[2] < 0;
            }
          }
          if (bVar6 == bVar5) goto LAB_109954d10;
          uStack_70 = *(undefined8 *)piVar16;
          iStack_68 = piVar16[2];
          *(undefined8 *)piVar16 = *(undefined8 *)piVar8;
          piVar16[2] = piVar16[5];
        }
        else {
          uStack_70 = *(undefined8 *)piVar7;
          iStack_68 = piVar16[-1];
          *(undefined8 *)piVar7 = *(undefined8 *)piVar8;
          piVar16[-1] = piVar16[5];
        }
        piVar16[5] = iStack_68;
        *(undefined8 *)piVar8 = uStack_70;
      }
LAB_109954d10:
      uVar13 = *(undefined8 *)param_1;
      iVar9 = param_1[2];
      uVar14 = *(undefined8 *)piVar16;
      param_1[2] = piVar16[2];
      *(undefined8 *)param_1 = uVar14;
      piVar16[2] = iVar9;
      *(undefined8 *)piVar16 = uVar13;
    }
LAB_109954d40:
    param_3 = param_3 + -1;
    iVar9 = *param_1;
    if ((param_4 & 1) != 0) {
LAB_109954d8c:
      lVar22 = 0;
      iVar18 = param_1[1];
      iVar11 = param_1[2];
      while( true ) {
        iVar20 = *(int *)((long)param_1 + lVar22 + 0xc);
        bVar5 = SBORROW4(iVar20,iVar9);
        bVar6 = iVar20 - iVar9 < 0;
        if (iVar20 == iVar9) {
          iVar20 = *(int *)((long)param_1 + lVar22 + 0x10);
          bVar5 = SBORROW4(iVar20,iVar18);
          bVar6 = iVar20 - iVar18 < 0;
          if (iVar20 == iVar18) {
            iVar20 = *(int *)((long)param_1 + lVar22 + 0x14);
            bVar5 = SBORROW4(iVar20,iVar11);
            bVar6 = iVar20 - iVar11 < 0;
          }
        }
        if (bVar6 == bVar5) break;
        lVar22 = lVar22 + 0xc;
      }
      piVar7 = (int *)((long)param_1 + lVar22 + 0xc);
      piVar8 = piVar15;
      if (lVar22 == 0) {
        piVar16 = piVar15;
        piVar8 = param_2;
        if (piVar7 < param_2) {
          do {
            piVar8 = piVar16;
            if (*piVar16 == iVar9) {
              if (piVar16[1] == iVar18) {
                if ((piVar16 <= piVar7) || (piVar16[2] < iVar11)) break;
              }
              else if ((piVar16 <= piVar7) || (piVar16[1] < iVar18)) break;
            }
            else if (*piVar16 < iVar9 || piVar16 <= piVar7) break;
            piVar16 = piVar16 + -3;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar20 = *piVar8;
          bVar5 = SBORROW4(iVar20,iVar9);
          bVar6 = iVar20 - iVar9 < 0;
          if (iVar20 == iVar9) {
            iVar20 = piVar8[1];
            bVar5 = SBORROW4(iVar20,iVar18);
            bVar6 = iVar20 - iVar18 < 0;
            if (iVar20 == iVar18) {
              bVar5 = SBORROW4(piVar8[2],iVar11);
              bVar6 = piVar8[2] - iVar11 < 0;
            }
          }
          if (bVar6 != bVar5) break;
          piVar8 = piVar8 + -3;
        }
      }
      piVar19 = piVar8;
      piVar16 = piVar7;
      piVar27 = piVar7;
      if (piVar7 < piVar8) {
        do {
          uVar13 = *(undefined8 *)piVar27;
          iVar20 = piVar27[2];
          uVar14 = *(undefined8 *)piVar19;
          piVar27[2] = piVar19[2];
          *(undefined8 *)piVar27 = uVar14;
          piVar19[2] = iVar20;
          *(undefined8 *)piVar19 = uVar13;
          do {
            piVar16 = piVar27 + 3;
            iVar20 = *piVar16;
            bVar5 = SBORROW4(iVar20,iVar9);
            bVar6 = iVar20 - iVar9 < 0;
            if (iVar20 == iVar9) {
              iVar20 = piVar27[4];
              bVar5 = SBORROW4(iVar20,iVar18);
              bVar6 = iVar20 - iVar18 < 0;
              if (iVar20 == iVar18) {
                bVar5 = SBORROW4(piVar27[5],iVar11);
                bVar6 = piVar27[5] - iVar11 < 0;
              }
            }
            piVar27 = piVar16;
          } while (bVar6 != bVar5);
          do {
            piVar23 = piVar19 + -3;
            iVar20 = *piVar23;
            bVar5 = SBORROW4(iVar20,iVar9);
            bVar6 = iVar20 - iVar9 < 0;
            if (iVar20 == iVar9) {
              iVar20 = piVar19[-2];
              bVar5 = SBORROW4(iVar20,iVar18);
              bVar6 = iVar20 - iVar18 < 0;
              if (iVar20 == iVar18) {
                bVar5 = SBORROW4(piVar19[-1],iVar11);
                bVar6 = piVar19[-1] - iVar11 < 0;
              }
            }
            piVar19 = piVar23;
          } while (bVar6 == bVar5);
        } while (piVar16 < piVar23);
      }
      piVar19 = piVar16 + -3;
      if (piVar19 != param_1) {
        uVar13 = *(undefined8 *)piVar19;
        param_1[2] = piVar16[-1];
        *(undefined8 *)param_1 = uVar13;
      }
      piVar16[-3] = iVar9;
      piVar16[-2] = iVar18;
      piVar16[-1] = iVar11;
      if (piVar8 <= piVar7) {
        piVar7 = param_1;
        FUN_109955c8c(param_1,piVar19);
        piVar8 = piVar16;
        FUN_109955c8c(piVar16,param_2);
        if ((int)piVar8 != 0) goto LAB_1099550dc;
        if (((ulong)piVar7 & 1) != 0) goto LAB_109954398;
      }
      FUN_109954358(param_1,piVar19,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_109954398;
    }
    if (param_1[-3] != iVar9) {
      if (iVar9 <= param_1[-3]) {
        iVar11 = param_1[1];
        goto LAB_109954f68;
      }
      goto LAB_109954d8c;
    }
    iVar11 = param_1[-2];
    iVar18 = param_1[1];
    if (iVar11 != iVar18) {
      bVar6 = iVar18 <= iVar11;
      iVar11 = iVar18;
      if (bVar6) goto LAB_109954f68;
      goto LAB_109954d8c;
    }
    if (param_1[-1] < param_1[2]) goto LAB_109954d8c;
LAB_109954f68:
    iVar18 = param_1[2];
    iVar20 = *piVar15;
    bVar5 = SBORROW4(iVar9,iVar20);
    bVar6 = iVar9 - iVar20 < 0;
    if (iVar9 == iVar20) {
      iVar4 = param_2[-2];
      bVar5 = SBORROW4(iVar11,iVar4);
      bVar6 = iVar11 - iVar4 < 0;
      if (iVar11 == iVar4) {
        bVar5 = SBORROW4(iVar18,param_2[-1]);
        bVar6 = iVar18 - param_2[-1] < 0;
      }
    }
    piVar7 = param_1;
    if (bVar6 == bVar5) {
      do {
        piVar16 = piVar7 + 3;
        if (param_2 <= piVar16) break;
        iVar4 = *piVar16;
        bVar5 = SBORROW4(iVar9,iVar4);
        bVar6 = iVar9 - iVar4 < 0;
        if (iVar9 == iVar4) {
          iVar4 = piVar7[4];
          bVar5 = SBORROW4(iVar11,iVar4);
          bVar6 = iVar11 - iVar4 < 0;
          if (iVar11 == iVar4) {
            bVar5 = SBORROW4(iVar18,piVar7[5]);
            bVar6 = iVar18 - piVar7[5] < 0;
          }
        }
        piVar7 = piVar16;
      } while (bVar6 == bVar5);
    }
    else {
      do {
        piVar16 = piVar7 + 3;
        iVar4 = *piVar16;
        bVar5 = SBORROW4(iVar9,iVar4);
        bVar6 = iVar9 - iVar4 < 0;
        if (iVar9 == iVar4) {
          iVar4 = piVar7[4];
          bVar5 = SBORROW4(iVar11,iVar4);
          bVar6 = iVar11 - iVar4 < 0;
          if (iVar11 == iVar4) {
            bVar5 = SBORROW4(iVar18,piVar7[5]);
            bVar6 = iVar18 - piVar7[5] < 0;
          }
        }
        piVar7 = piVar16;
      } while (bVar6 == bVar5);
    }
    piVar7 = param_2;
    piVar8 = piVar15;
    if (piVar16 < param_2) {
      while( true ) {
        piVar7 = piVar8;
        bVar5 = SBORROW4(iVar9,iVar20);
        bVar6 = iVar9 - iVar20 < 0;
        if (iVar9 == iVar20) {
          iVar20 = piVar7[1];
          bVar5 = SBORROW4(iVar11,iVar20);
          bVar6 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar5 = SBORROW4(iVar18,piVar7[2]);
            bVar6 = iVar18 - piVar7[2] < 0;
          }
        }
        if (bVar6 == bVar5) break;
        iVar20 = piVar7[-3];
        piVar8 = piVar7 + -3;
      }
    }
    while (piVar16 < piVar7) {
      uVar13 = *(undefined8 *)piVar16;
      iVar20 = piVar16[2];
      uVar14 = *(undefined8 *)piVar7;
      piVar16[2] = piVar7[2];
      *(undefined8 *)piVar16 = uVar14;
      piVar7[2] = iVar20;
      *(undefined8 *)piVar7 = uVar13;
      piVar8 = piVar16;
      do {
        piVar16 = piVar8 + 3;
        iVar20 = *piVar16;
        bVar5 = SBORROW4(iVar9,iVar20);
        bVar6 = iVar9 - iVar20 < 0;
        if (iVar9 == iVar20) {
          iVar20 = piVar8[4];
          bVar5 = SBORROW4(iVar11,iVar20);
          bVar6 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar5 = SBORROW4(iVar18,piVar8[5]);
            bVar6 = iVar18 - piVar8[5] < 0;
          }
        }
        piVar19 = piVar7;
        piVar8 = piVar16;
      } while (bVar6 == bVar5);
      do {
        piVar7 = piVar19 + -3;
        iVar20 = *piVar7;
        bVar5 = SBORROW4(iVar9,iVar20);
        bVar6 = iVar9 - iVar20 < 0;
        if (iVar9 == iVar20) {
          iVar20 = piVar19[-2];
          bVar5 = SBORROW4(iVar11,iVar20);
          bVar6 = iVar11 - iVar20 < 0;
          if (iVar11 == iVar20) {
            bVar5 = SBORROW4(iVar18,piVar19[-1]);
            bVar6 = iVar18 - piVar19[-1] < 0;
          }
        }
        piVar19 = piVar7;
      } while (bVar6 != bVar5);
    }
    if (piVar16 + -3 != param_1) {
      uVar13 = *(undefined8 *)(piVar16 + -3);
      param_1[2] = piVar16[-1];
      *(undefined8 *)param_1 = uVar13;
    }
    param_4 = 0;
    piVar16[-3] = iVar9;
    piVar16[-2] = iVar11;
    piVar16[-1] = iVar18;
  } while( true );
LAB_1099558c8:
  piVar15 = piVar16;
  iVar9 = param_1[3];
  if (iVar9 == *param_1) {
    iVar18 = param_1[4];
    iVar20 = param_1[1];
    bVar6 = SBORROW4(iVar18,iVar20);
    iVar11 = iVar18 - iVar20;
    if (iVar18 == iVar20) {
      bVar6 = SBORROW4(param_1[5],param_1[2]);
      iVar11 = param_1[5] - param_1[2];
    }
    if (iVar11 < 0 != bVar6) {
LAB_10995590c:
      iVar11 = param_1[5];
      do {
        piVar16 = param_1;
        *(undefined8 *)(piVar16 + 3) = *(undefined8 *)piVar16;
        piVar16[5] = piVar16[2];
        iVar20 = piVar16[-3];
        bVar5 = SBORROW4(iVar9,iVar20);
        bVar6 = iVar9 - iVar20 < 0;
        if (iVar9 == iVar20) {
          iVar20 = piVar16[-2];
          bVar5 = SBORROW4(iVar18,iVar20);
          bVar6 = iVar18 - iVar20 < 0;
          if (iVar18 == iVar20) {
            bVar5 = SBORROW4(iVar11,piVar16[-1]);
            bVar6 = iVar11 - piVar16[-1] < 0;
          }
        }
        param_1 = piVar16 + -3;
      } while (bVar6 != bVar5);
      *piVar16 = iVar9;
      piVar16[1] = iVar18;
      piVar16[2] = iVar11;
    }
  }
  else if (iVar9 < *param_1) {
    iVar18 = param_1[4];
    goto LAB_10995590c;
  }
  piVar16 = piVar15 + 3;
  param_1 = piVar15;
  if (piVar16 == param_2) {
    return;
  }
  goto LAB_1099558c8;
LAB_1099553a8:
  iVar9 = piVar15[3];
  if (iVar9 == *piVar15) {
    iVar18 = piVar15[4];
    iVar20 = piVar15[1];
    bVar6 = SBORROW4(iVar18,iVar20);
    iVar11 = iVar18 - iVar20;
    if (iVar18 == iVar20) {
      bVar6 = SBORROW4(piVar15[5],piVar15[2]);
      iVar11 = piVar15[5] - piVar15[2];
    }
    if (iVar11 < 0 != bVar6) {
LAB_1099553ec:
      iVar11 = piVar15[5];
      *(undefined8 *)piVar16 = *(undefined8 *)piVar15;
      piVar16[2] = piVar15[2];
      piVar25 = param_1;
      lVar24 = lVar22;
      if (piVar15 != param_1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar24);
          iVar20 = *(int *)((long)puVar2 + -0xc);
          if (iVar9 == iVar20) {
            iVar4 = *(int *)(puVar2 + -1);
            bVar6 = SBORROW4(iVar18,iVar4);
            iVar20 = iVar18 - iVar4;
            if (iVar18 == iVar4) {
              iVar20 = *(int *)((long)param_1 + lVar24 + -4);
              bVar6 = SBORROW4(iVar11,iVar20);
              iVar20 = iVar11 - iVar20;
            }
            piVar25 = piVar15;
            if (iVar20 < 0 == bVar6) break;
          }
          else if (iVar20 <= iVar9) {
            piVar25 = (int *)((long)param_1 + lVar24);
            break;
          }
          piVar15 = piVar15 + -3;
          *puVar2 = *(undefined8 *)((long)puVar2 + -0xc);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((long)puVar2 + -4);
          lVar24 = lVar24 + -0xc;
          piVar25 = param_1;
        } while (lVar24 != 0);
      }
      *piVar25 = iVar9;
      piVar25[1] = iVar18;
      piVar25[2] = iVar11;
    }
  }
  else if (iVar9 < *piVar15) {
    iVar18 = piVar15[4];
    goto LAB_1099553ec;
  }
  piVar25 = piVar16 + 3;
  lVar22 = lVar22 + 0xc;
  piVar15 = piVar16;
  piVar16 = piVar25;
  if (piVar25 == param_2) {
    return;
  }
  goto LAB_1099553a8;
LAB_1099554a8:
  do {
    if ((long)uVar21 <= (long)uVar17) {
      uVar26 = (uVar21 & 0x3fffffffffffffff) << 1 | 1;
      piVar16 = param_1 + uVar26 * 3;
      uVar1 = uVar21 * 2 + 2;
      if ((long)uVar1 < (long)uVar10) {
        iVar18 = piVar16[3];
        iVar9 = *piVar16;
        bVar5 = SBORROW4(iVar9,iVar18);
        bVar6 = iVar9 - iVar18 < 0;
        if (iVar9 == iVar18) {
          iVar9 = piVar16[1];
          iVar18 = piVar16[4];
          bVar5 = SBORROW4(iVar9,iVar18);
          bVar6 = iVar9 - iVar18 < 0;
          if (iVar9 == iVar18) {
            bVar5 = SBORROW4(piVar16[2],piVar16[5]);
            bVar6 = piVar16[2] - piVar16[5] < 0;
          }
        }
        if (bVar6 != bVar5) {
          piVar16 = piVar16 + 3;
          uVar26 = uVar1;
        }
      }
      piVar15 = param_1 + uVar21 * 3;
      iVar9 = *piVar15;
      if (*piVar16 == iVar9) {
        iVar11 = piVar16[1];
        iVar18 = piVar15[1];
        if (iVar11 == iVar18) {
          iVar18 = iVar11;
          if (piVar15[2] <= piVar16[2]) {
LAB_109955554:
            iVar11 = piVar15[2];
            iVar20 = piVar16[2];
            *(undefined8 *)piVar15 = *(undefined8 *)piVar16;
            piVar15[2] = iVar20;
            if (uVar26 <= uVar17) {
              do {
                uVar3 = uVar26 << 1 | 1;
                piVar15 = param_1 + uVar3 * 3;
                uVar1 = uVar26 * 2 + 2;
                uVar26 = uVar3;
                if ((long)uVar1 < (long)uVar10) {
                  iVar4 = piVar15[3];
                  iVar20 = *piVar15;
                  bVar5 = SBORROW4(iVar20,iVar4);
                  bVar6 = iVar20 - iVar4 < 0;
                  if (iVar20 == iVar4) {
                    iVar20 = piVar15[1];
                    iVar4 = piVar15[4];
                    bVar5 = SBORROW4(iVar20,iVar4);
                    bVar6 = iVar20 - iVar4 < 0;
                    if (iVar20 == iVar4) {
                      bVar5 = SBORROW4(piVar15[2],piVar15[5]);
                      bVar6 = piVar15[2] - piVar15[5] < 0;
                    }
                  }
                  if (bVar6 != bVar5) {
                    piVar15 = piVar15 + 3;
                    uVar26 = uVar1;
                  }
                }
                iVar20 = *piVar15;
                bVar5 = SBORROW4(iVar20,iVar9);
                bVar6 = iVar20 - iVar9 < 0;
                if (iVar20 == iVar9) {
                  iVar20 = piVar15[1];
                  bVar5 = SBORROW4(iVar20,iVar18);
                  bVar6 = iVar20 - iVar18 < 0;
                  if (iVar20 == iVar18) {
                    bVar5 = SBORROW4(piVar15[2],iVar11);
                    bVar6 = piVar15[2] - iVar11 < 0;
                  }
                }
                if (bVar6 != bVar5) break;
                uVar13 = *(undefined8 *)piVar15;
                piVar16[2] = piVar15[2];
                *(undefined8 *)piVar16 = uVar13;
                piVar16 = piVar15;
              } while ((long)uVar26 <= (long)uVar17);
            }
            *piVar16 = iVar9;
            piVar16[1] = iVar18;
            piVar16[2] = iVar11;
          }
        }
        else if (iVar18 <= iVar11) goto LAB_109955554;
      }
      else if (iVar9 <= *piVar16) {
        iVar18 = piVar15[1];
        goto LAB_109955554;
      }
    }
    bVar6 = 0 < (long)uVar21;
    uVar21 = uVar21 - 1;
  } while (bVar6);
  lVar22 = (uVar12 >> 2) * -0x5555555555555555;
  do {
    uVar13 = *(undefined8 *)param_1;
    iVar9 = param_1[2];
    piVar16 = param_1;
    uVar10 = 0;
    do {
      uVar21 = uVar10 << 1 | 1;
      uVar12 = uVar10 * 2 + 2;
      piVar15 = piVar16 + uVar10 * 3 + 3;
      if ((long)uVar12 < lVar22) {
        iVar11 = piVar16[uVar10 * 3 + 6];
        iVar18 = piVar16[uVar10 * 3 + 3];
        bVar5 = SBORROW4(iVar18,iVar11);
        bVar6 = iVar18 - iVar11 < 0;
        if (iVar18 == iVar11) {
          iVar18 = piVar16[uVar10 * 3 + 4];
          iVar11 = piVar16[uVar10 * 3 + 7];
          bVar5 = SBORROW4(iVar18,iVar11);
          bVar6 = iVar18 - iVar11 < 0;
          if (iVar18 == iVar11) {
            bVar5 = SBORROW4(piVar16[uVar10 * 3 + 5],piVar16[uVar10 * 3 + 8]);
            bVar6 = piVar16[uVar10 * 3 + 5] - piVar16[uVar10 * 3 + 8] < 0;
          }
        }
        if (bVar6 != bVar5) {
          piVar15 = piVar16 + uVar10 * 3 + 6;
          uVar21 = uVar12;
        }
      }
      uVar14 = *(undefined8 *)piVar15;
      piVar16[2] = piVar15[2];
      *(undefined8 *)piVar16 = uVar14;
      piVar16 = piVar15;
      uVar10 = uVar21;
    } while ((long)uVar21 <= (long)(lVar22 - 2U >> 1));
    piVar16 = param_2 + -3;
    if (piVar15 == piVar16) {
      piVar15[2] = iVar9;
      *(undefined8 *)piVar15 = uVar13;
    }
    else {
      uVar14 = *(undefined8 *)piVar16;
      piVar15[2] = param_2[-1];
      *(undefined8 *)piVar15 = uVar14;
      param_2[-1] = iVar9;
      *(undefined8 *)piVar16 = uVar13;
      uVar10 = (long)piVar15 + (0xc - (long)param_1);
      if (0xc < (long)uVar10) {
        uVar12 = (uVar10 >> 2) * -0x5555555555555555 - 2;
        uVar10 = uVar12 >> 1;
        piVar25 = param_1 + uVar10 * 3;
        iVar9 = *piVar15;
        if (*piVar25 == iVar9) {
          iVar11 = piVar25[1];
          iVar18 = piVar15[1];
          if (iVar11 == iVar18) {
            iVar18 = iVar11;
            if (piVar25[2] < piVar15[2]) {
LAB_109955784:
              iVar11 = piVar15[2];
              iVar20 = piVar25[2];
              *(undefined8 *)piVar15 = *(undefined8 *)piVar25;
              piVar15[2] = iVar20;
              while (1 < uVar12) {
                uVar12 = uVar10 - 1;
                uVar10 = uVar12 >> 1;
                piVar15 = param_1 + uVar10 * 3;
                iVar20 = *piVar15;
                bVar5 = SBORROW4(iVar20,iVar9);
                bVar6 = iVar20 - iVar9 < 0;
                if (iVar20 == iVar9) {
                  iVar20 = piVar15[1];
                  bVar5 = SBORROW4(iVar20,iVar18);
                  bVar6 = iVar20 - iVar18 < 0;
                  if (iVar20 == iVar18) {
                    bVar5 = SBORROW4(piVar15[2],iVar11);
                    bVar6 = piVar15[2] - iVar11 < 0;
                  }
                }
                if (bVar6 == bVar5) break;
                uVar13 = *(undefined8 *)piVar15;
                piVar25[2] = piVar15[2];
                *(undefined8 *)piVar25 = uVar13;
                piVar25 = piVar15;
              }
              *piVar25 = iVar9;
              piVar25[1] = iVar18;
              piVar25[2] = iVar11;
            }
          }
          else if (iVar11 < iVar18) goto LAB_109955784;
        }
        else if (*piVar25 < iVar9) {
          iVar18 = piVar15[1];
          goto LAB_109955784;
        }
      }
    }
    bVar6 = lVar22 < 3;
    lVar22 = lVar22 + -1;
    param_2 = piVar16;
    if (bVar6) {
      return;
    }
  } while( true );
LAB_1099550dc:
  param_2 = piVar19;
  if (((ulong)piVar7 & 1) != 0) {
    return;
  }
  goto LAB_109954388;
}



/* Entry: 109955a08; end: 109955c8b;  */

void FUN_109955a08(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *param_2;
  iVar1 = *param_1;
  bVar3 = SBORROW4(iVar5,iVar1);
  bVar4 = iVar5 - iVar1 < 0;
  if (iVar5 == iVar1) {
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      bVar3 = SBORROW4(param_2[2],param_1[2]);
      bVar4 = param_2[2] - param_1[2] < 0;
    }
  }
  if (bVar4 == bVar3) {
    iVar1 = *param_3;
    bVar3 = SBORROW4(iVar1,iVar5);
    bVar4 = iVar1 - iVar5 < 0;
    if (iVar1 == iVar5) {
      iVar5 = param_3[1];
      iVar1 = param_2[1];
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        bVar3 = SBORROW4(param_3[2],param_2[2]);
        bVar4 = param_3[2] - param_2[2] < 0;
      }
    }
    if (bVar4 != bVar3) {
      iVar5 = param_2[2];
      uVar6 = *(undefined8 *)param_2;
      iVar1 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = iVar1;
      *(undefined8 *)param_3 = uVar6;
      param_3[2] = iVar5;
      iVar5 = *param_2;
      iVar1 = *param_1;
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        iVar5 = param_2[1];
        iVar1 = param_1[1];
        bVar3 = SBORROW4(iVar5,iVar1);
        bVar4 = iVar5 - iVar1 < 0;
        if (iVar5 == iVar1) {
          bVar3 = SBORROW4(param_2[2],param_1[2]);
          bVar4 = param_2[2] - param_1[2] < 0;
        }
      }
      if (bVar4 != bVar3) {
        iVar5 = param_1[2];
        uVar6 = *(undefined8 *)param_1;
        iVar1 = param_2[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        param_1[2] = iVar1;
        *(undefined8 *)param_2 = uVar6;
        param_2[2] = iVar5;
      }
    }
  }
  else {
    iVar1 = *param_3;
    bVar3 = SBORROW4(iVar1,iVar5);
    bVar4 = iVar1 - iVar5 < 0;
    if (iVar1 == iVar5) {
      iVar5 = param_3[1];
      iVar1 = param_2[1];
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        bVar3 = SBORROW4(param_3[2],param_2[2]);
        bVar4 = param_3[2] - param_2[2] < 0;
      }
    }
    if (bVar4 == bVar3) {
      iVar5 = param_1[2];
      uVar6 = *(undefined8 *)param_1;
      iVar1 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = iVar1;
      *(undefined8 *)param_2 = uVar6;
      param_2[2] = iVar5;
      iVar5 = *param_3;
      iVar1 = (int)uVar6;
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        iVar5 = param_3[1];
        iVar1 = param_2[1];
        bVar3 = SBORROW4(iVar5,iVar1);
        bVar4 = iVar5 - iVar1 < 0;
        if (iVar5 == iVar1) {
          bVar3 = SBORROW4(param_3[2],param_2[2]);
          bVar4 = param_3[2] - param_2[2] < 0;
        }
      }
      if (bVar4 == bVar3) goto LAB_109955b94;
      iVar5 = param_2[2];
      uVar6 = *(undefined8 *)param_2;
      iVar1 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = iVar1;
    }
    else {
      iVar5 = param_1[2];
      uVar6 = *(undefined8 *)param_1;
      iVar1 = param_3[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = iVar1;
    }
    *(undefined8 *)param_3 = uVar6;
    param_3[2] = iVar5;
  }
LAB_109955b94:
  iVar5 = *param_4;
  iVar1 = *param_3;
  bVar3 = SBORROW4(iVar5,iVar1);
  bVar4 = iVar5 - iVar1 < 0;
  if (iVar5 == iVar1) {
    iVar5 = param_4[1];
    iVar1 = param_3[1];
    bVar3 = SBORROW4(iVar5,iVar1);
    bVar4 = iVar5 - iVar1 < 0;
    if (iVar5 == iVar1) {
      bVar3 = SBORROW4(param_4[2],param_3[2]);
      bVar4 = param_4[2] - param_3[2] < 0;
    }
  }
  if (bVar4 != bVar3) {
    iVar5 = param_3[2];
    uVar6 = *(undefined8 *)param_3;
    iVar1 = param_4[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    param_3[2] = iVar1;
    *(undefined8 *)param_4 = uVar6;
    param_4[2] = iVar5;
    iVar5 = *param_3;
    iVar1 = *param_2;
    bVar3 = SBORROW4(iVar5,iVar1);
    bVar4 = iVar5 - iVar1 < 0;
    if (iVar5 == iVar1) {
      iVar5 = param_3[1];
      iVar1 = param_2[1];
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        bVar3 = SBORROW4(param_3[2],param_2[2]);
        bVar4 = param_3[2] - param_2[2] < 0;
      }
    }
    if (bVar4 != bVar3) {
      iVar5 = param_2[2];
      uVar6 = *(undefined8 *)param_2;
      iVar1 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = iVar1;
      *(undefined8 *)param_3 = uVar6;
      param_3[2] = iVar5;
      iVar5 = *param_2;
      iVar1 = *param_1;
      bVar3 = SBORROW4(iVar5,iVar1);
      bVar4 = iVar5 - iVar1 < 0;
      if (iVar5 == iVar1) {
        iVar5 = param_2[1];
        iVar1 = param_1[1];
        bVar3 = SBORROW4(iVar5,iVar1);
        bVar4 = iVar5 - iVar1 < 0;
        if (iVar5 == iVar1) {
          bVar3 = SBORROW4(param_2[2],param_1[2]);
          bVar4 = param_2[2] - param_1[2] < 0;
        }
      }
      if (bVar4 != bVar3) {
        iVar5 = param_1[2];
        uVar6 = *(undefined8 *)param_1;
        iVar1 = param_2[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        param_1[2] = iVar1;
        *(undefined8 *)param_2 = uVar6;
        param_2[2] = iVar5;
      }
    }
  }
  return;
}



/* Entry: 109955c8c; end: 1099562f3;  */

bool FUN_109955c8c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_109955f24:
      piVar7 = param_1 + 6;
      iVar9 = *param_1;
      piVar10 = param_1 + 3;
      iVar13 = *piVar10;
      bVar4 = SBORROW4(iVar13,iVar9);
      bVar5 = iVar13 - iVar9 < 0;
      if (iVar13 == iVar9) {
        iVar14 = param_1[4];
        iVar1 = param_1[1];
        bVar4 = SBORROW4(iVar14,iVar1);
        bVar5 = iVar14 - iVar1 < 0;
        if (iVar14 == iVar1) {
          bVar4 = SBORROW4(param_1[5],param_1[2]);
          bVar5 = param_1[5] - param_1[2] < 0;
        }
      }
      if (bVar5 == bVar4) {
        iVar14 = *piVar7;
        bVar4 = SBORROW4(iVar14,iVar13);
        bVar5 = iVar14 - iVar13 < 0;
        if (iVar14 == iVar13) {
          iVar13 = param_1[7];
          iVar14 = param_1[4];
          bVar4 = SBORROW4(iVar13,iVar14);
          bVar5 = iVar13 - iVar14 < 0;
          if (iVar13 == iVar14) {
            bVar4 = SBORROW4(param_1[8],param_1[5]);
            bVar5 = param_1[8] - param_1[5] < 0;
          }
        }
        if (bVar5 != bVar4) {
          iVar13 = param_1[5];
          uVar11 = *(undefined8 *)piVar10;
          *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
          param_1[5] = param_1[8];
          *(undefined8 *)piVar7 = uVar11;
          param_1[8] = iVar13;
          iVar13 = *piVar10;
          bVar4 = SBORROW4(iVar13,iVar9);
          bVar5 = iVar13 - iVar9 < 0;
          if (iVar13 == iVar9) {
            iVar9 = param_1[4];
            iVar13 = param_1[1];
            bVar4 = SBORROW4(iVar9,iVar13);
            bVar5 = iVar9 - iVar13 < 0;
            if (iVar9 == iVar13) {
              bVar4 = SBORROW4(param_1[5],param_1[2]);
              bVar5 = param_1[5] - param_1[2] < 0;
            }
          }
          if (bVar5 != bVar4) {
            iVar9 = param_1[2];
            uVar11 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)piVar10;
            param_1[2] = param_1[5];
            *(undefined8 *)piVar10 = uVar11;
            param_1[5] = iVar9;
          }
        }
      }
      else {
        iVar9 = *piVar7;
        bVar4 = SBORROW4(iVar9,iVar13);
        bVar5 = iVar9 - iVar13 < 0;
        if (iVar9 == iVar13) {
          iVar13 = param_1[7];
          iVar14 = param_1[4];
          bVar4 = SBORROW4(iVar13,iVar14);
          bVar5 = iVar13 - iVar14 < 0;
          if (iVar13 == iVar14) {
            bVar4 = SBORROW4(param_1[8],param_1[5]);
            bVar5 = param_1[8] - param_1[5] < 0;
          }
        }
        if (bVar5 == bVar4) {
          iVar13 = param_1[2];
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)piVar10;
          param_1[2] = param_1[5];
          *(undefined8 *)piVar10 = uVar11;
          param_1[5] = iVar13;
          iVar13 = param_1[3];
          bVar4 = SBORROW4(iVar9,iVar13);
          bVar5 = iVar9 - iVar13 < 0;
          if (iVar9 == iVar13) {
            iVar9 = param_1[7];
            iVar13 = param_1[4];
            bVar4 = SBORROW4(iVar9,iVar13);
            bVar5 = iVar9 - iVar13 < 0;
            if (iVar9 == iVar13) {
              bVar4 = SBORROW4(param_1[8],param_1[5]);
              bVar5 = param_1[8] - param_1[5] < 0;
            }
          }
          if (bVar5 != bVar4) {
            iVar9 = param_1[5];
            uVar11 = *(undefined8 *)piVar10;
            *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
            param_1[5] = param_1[8];
            *(undefined8 *)piVar7 = uVar11;
            param_1[8] = iVar9;
          }
        }
        else {
          iVar9 = param_1[2];
          uVar11 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)piVar7;
          param_1[2] = param_1[8];
          *(undefined8 *)piVar7 = uVar11;
          param_1[8] = iVar9;
        }
      }
      if (param_1 + 9 == param_2) {
        return true;
      }
      lVar12 = 0;
      iVar9 = 0;
      piVar10 = param_1 + 9;
      do {
        iVar13 = *piVar10;
        if (iVar13 == *piVar7) {
          iVar14 = piVar10[1];
          iVar2 = piVar7[1];
          bVar5 = SBORROW4(iVar14,iVar2);
          iVar1 = iVar14 - iVar2;
          if (iVar14 == iVar2) {
            bVar5 = SBORROW4(piVar10[2],piVar7[2]);
            iVar1 = piVar10[2] - piVar7[2];
          }
          if (iVar1 < 0 != bVar5) {
LAB_109956224:
            iVar1 = piVar10[2];
            *(undefined8 *)piVar10 = *(undefined8 *)piVar7;
            piVar10[2] = piVar7[2];
            lVar15 = lVar12;
            do {
              piVar16 = (int *)((long)param_1 + lVar15 + 0xc);
              iVar3 = *piVar16;
              bVar5 = SBORROW4(iVar13,iVar3);
              iVar2 = iVar13 - iVar3;
              if (iVar13 == iVar3) {
                iVar2 = *(int *)((long)param_1 + lVar15 + 0x10);
                if (iVar14 == iVar2) {
                  iVar2 = *(int *)((long)param_1 + lVar15 + 0x14);
                  bVar5 = SBORROW4(iVar1,iVar2);
                  iVar2 = iVar1 - iVar2;
                  goto LAB_109956268;
                }
                if (iVar2 <= iVar14) {
                  piVar8 = (int *)((long)param_1 + lVar15 + 0x18);
                  break;
                }
              }
              else {
LAB_109956268:
                piVar8 = piVar7;
                if (iVar2 < 0 == bVar5) break;
              }
              piVar7 = piVar7 + -3;
              *(undefined8 *)((long)param_1 + lVar15 + 0x18) = *(undefined8 *)piVar16;
              *(undefined4 *)((long)param_1 + lVar15 + 0x20) =
                   *(undefined4 *)((long)param_1 + lVar15 + 0x14);
              lVar15 = lVar15 + -0xc;
              piVar8 = param_1;
            } while (lVar15 != -0x18);
            *piVar8 = iVar13;
            piVar8[1] = iVar14;
            piVar8[2] = iVar1;
            iVar9 = iVar9 + 1;
            if (iVar9 == 8) {
              return piVar10 + 3 == param_2;
            }
          }
        }
        else if (iVar13 < *piVar7) {
          iVar14 = piVar10[1];
          goto LAB_109956224;
        }
        piVar16 = piVar10 + 3;
        lVar12 = lVar12 + 0xc;
        piVar7 = piVar10;
        piVar10 = piVar16;
        if (piVar16 == param_2) {
          return true;
        }
      } while( true );
    }
    piVar7 = param_2 + -3;
    iVar13 = *piVar7;
    iVar9 = *param_1;
    bVar4 = SBORROW4(iVar13,iVar9);
    bVar5 = iVar13 - iVar9 < 0;
    if (iVar13 == iVar9) {
      iVar13 = param_2[-2];
      iVar9 = param_1[1];
      bVar4 = SBORROW4(iVar13,iVar9);
      bVar5 = iVar13 - iVar9 < 0;
      if (iVar13 == iVar9) {
        bVar4 = SBORROW4(param_2[-1],param_1[2]);
        bVar5 = param_2[-1] - param_1[2] < 0;
      }
    }
    if (bVar5 == bVar4) {
      return true;
    }
    iVar9 = param_1[2];
    uVar11 = *(undefined8 *)param_1;
    iVar13 = param_2[-1];
    *(undefined8 *)param_1 = *(undefined8 *)piVar7;
  }
  else {
    if (uVar6 != 3) {
      if (uVar6 == 4) {
        FUN_109955a08(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
        return true;
      }
      if (uVar6 == 5) {
        FUN_109955a08(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
        piVar7 = param_2 + -3;
        iVar13 = *piVar7;
        iVar9 = param_1[9];
        bVar4 = SBORROW4(iVar13,iVar9);
        bVar5 = iVar13 - iVar9 < 0;
        if (iVar13 == iVar9) {
          iVar13 = param_2[-2];
          iVar9 = param_1[10];
          bVar4 = SBORROW4(iVar13,iVar9);
          bVar5 = iVar13 - iVar9 < 0;
          if (iVar13 == iVar9) {
            bVar4 = SBORROW4(param_2[-1],param_1[0xb]);
            bVar5 = param_2[-1] - param_1[0xb] < 0;
          }
        }
        if (bVar5 == bVar4) {
          return true;
        }
        iVar13 = param_1[0xb];
        uVar11 = *(undefined8 *)(param_1 + 9);
        iVar9 = param_2[-1];
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)piVar7;
        param_1[0xb] = iVar9;
        *(undefined8 *)piVar7 = uVar11;
        param_2[-1] = iVar13;
        iVar9 = param_1[9];
        iVar13 = param_1[6];
        bVar4 = SBORROW4(iVar9,iVar13);
        bVar5 = iVar9 - iVar13 < 0;
        if (iVar9 == iVar13) {
          iVar9 = param_1[10];
          iVar13 = param_1[7];
          bVar4 = SBORROW4(iVar9,iVar13);
          bVar5 = iVar9 - iVar13 < 0;
          if (iVar9 == iVar13) {
            bVar4 = SBORROW4(param_1[0xb],param_1[8]);
            bVar5 = param_1[0xb] - param_1[8] < 0;
          }
        }
        if (bVar5 == bVar4) {
          return true;
        }
        iVar9 = param_1[8];
        uVar11 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 9);
        param_1[8] = param_1[0xb];
        *(undefined8 *)(param_1 + 9) = uVar11;
        param_1[0xb] = iVar9;
        iVar9 = param_1[6];
        iVar13 = param_1[3];
        bVar4 = SBORROW4(iVar9,iVar13);
        bVar5 = iVar9 - iVar13 < 0;
        if (iVar9 == iVar13) {
          iVar9 = param_1[7];
          iVar13 = param_1[4];
          bVar4 = SBORROW4(iVar9,iVar13);
          bVar5 = iVar9 - iVar13 < 0;
          if (iVar9 == iVar13) {
            bVar4 = SBORROW4(param_1[8],param_1[5]);
            bVar5 = param_1[8] - param_1[5] < 0;
          }
        }
        if (bVar5 == bVar4) {
          return true;
        }
        iVar9 = param_1[5];
        uVar11 = *(undefined8 *)(param_1 + 3);
        *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_1 + 6);
        param_1[5] = param_1[8];
        *(undefined8 *)(param_1 + 6) = uVar11;
        param_1[8] = iVar9;
        iVar9 = param_1[3];
        iVar13 = *param_1;
        bVar4 = SBORROW4(iVar9,iVar13);
        bVar5 = iVar9 - iVar13 < 0;
        if (iVar9 == iVar13) {
          iVar9 = param_1[4];
          iVar13 = param_1[1];
          bVar4 = SBORROW4(iVar9,iVar13);
          bVar5 = iVar9 - iVar13 < 0;
          if (iVar9 == iVar13) {
            bVar4 = SBORROW4(param_1[5],param_1[2]);
            bVar5 = param_1[5] - param_1[2] < 0;
          }
        }
        if (bVar5 == bVar4) {
          return true;
        }
        iVar9 = param_1[2];
        uVar11 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
        param_1[2] = param_1[5];
        *(undefined8 *)(param_1 + 3) = uVar11;
        param_1[5] = iVar9;
        return true;
      }
      goto LAB_109955f24;
    }
    piVar7 = param_1 + 3;
    iVar13 = *piVar7;
    piVar10 = param_2 + -3;
    iVar9 = *param_1;
    bVar4 = SBORROW4(iVar13,iVar9);
    bVar5 = iVar13 - iVar9 < 0;
    if (iVar13 == iVar9) {
      iVar9 = param_1[4];
      iVar14 = param_1[1];
      bVar4 = SBORROW4(iVar9,iVar14);
      bVar5 = iVar9 - iVar14 < 0;
      if (iVar9 == iVar14) {
        bVar4 = SBORROW4(param_1[5],param_1[2]);
        bVar5 = param_1[5] - param_1[2] < 0;
      }
    }
    if (bVar5 != bVar4) {
      iVar9 = *piVar10;
      bVar4 = SBORROW4(iVar9,iVar13);
      bVar5 = iVar9 - iVar13 < 0;
      if (iVar9 == iVar13) {
        iVar13 = param_2[-2];
        iVar9 = param_1[4];
        bVar4 = SBORROW4(iVar13,iVar9);
        bVar5 = iVar13 - iVar9 < 0;
        if (iVar13 == iVar9) {
          bVar4 = SBORROW4(param_2[-1],param_1[5]);
          bVar5 = param_2[-1] - param_1[5] < 0;
        }
      }
      if (bVar5 != bVar4) {
        iVar9 = param_1[2];
        uVar11 = *(undefined8 *)param_1;
        iVar13 = param_2[-1];
        *(undefined8 *)param_1 = *(undefined8 *)piVar10;
        param_1[2] = iVar13;
        *(undefined8 *)piVar10 = uVar11;
        param_2[-1] = iVar9;
        return true;
      }
      iVar9 = param_1[2];
      uVar11 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)piVar7;
      param_1[2] = param_1[5];
      *(undefined8 *)piVar7 = uVar11;
      param_1[5] = iVar9;
      iVar9 = *piVar10;
      iVar13 = param_1[3];
      bVar4 = SBORROW4(iVar9,iVar13);
      bVar5 = iVar9 - iVar13 < 0;
      if (iVar9 == iVar13) {
        iVar13 = param_2[-2];
        iVar9 = param_1[4];
        bVar4 = SBORROW4(iVar13,iVar9);
        bVar5 = iVar13 - iVar9 < 0;
        if (iVar13 == iVar9) {
          bVar4 = SBORROW4(param_2[-1],param_1[5]);
          bVar5 = param_2[-1] - param_1[5] < 0;
        }
      }
      if (bVar5 == bVar4) {
        return true;
      }
      iVar9 = param_1[5];
      uVar11 = *(undefined8 *)piVar7;
      iVar13 = param_2[-1];
      *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
      param_1[5] = iVar13;
      *(undefined8 *)piVar10 = uVar11;
      param_2[-1] = iVar9;
      return true;
    }
    iVar9 = *piVar10;
    bVar4 = SBORROW4(iVar9,iVar13);
    bVar5 = iVar9 - iVar13 < 0;
    if (iVar9 == iVar13) {
      iVar13 = param_2[-2];
      iVar9 = param_1[4];
      bVar4 = SBORROW4(iVar13,iVar9);
      bVar5 = iVar13 - iVar9 < 0;
      if (iVar13 == iVar9) {
        bVar4 = SBORROW4(param_2[-1],param_1[5]);
        bVar5 = param_2[-1] - param_1[5] < 0;
      }
    }
    if (bVar5 == bVar4) {
      return true;
    }
    iVar9 = param_1[5];
    uVar11 = *(undefined8 *)piVar7;
    iVar13 = param_2[-1];
    *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
    param_1[5] = iVar13;
    *(undefined8 *)piVar10 = uVar11;
    param_2[-1] = iVar9;
    iVar9 = param_1[3];
    iVar13 = *param_1;
    bVar4 = SBORROW4(iVar9,iVar13);
    bVar5 = iVar9 - iVar13 < 0;
    if (iVar9 == iVar13) {
      iVar9 = param_1[4];
      iVar13 = param_1[1];
      bVar4 = SBORROW4(iVar9,iVar13);
      bVar5 = iVar9 - iVar13 < 0;
      if (iVar9 == iVar13) {
        bVar4 = SBORROW4(param_1[5],param_1[2]);
        bVar5 = param_1[5] - param_1[2] < 0;
      }
    }
    if (bVar5 == bVar4) {
      return true;
    }
    iVar9 = param_1[2];
    uVar11 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)piVar7;
    iVar13 = param_1[5];
  }
  param_1[2] = iVar13;
  *(undefined8 *)piVar7 = uVar11;
  piVar7[2] = iVar9;
  return true;
}



/* Entry: 1099562f4; end: 109956397;  */

long ** FUN_1099562f4(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plStack_28;
  
  FUN_1099ab908(&plStack_28,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plStack_28,*param_1);
  FUN_1092b4db8(plStack_28,&UNK_10f593767,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(plStack_28,*param_2);
  pplVar1 = &plStack_28;
  FUN_1099ab984(pplVar1);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar1;
}



/* Entry: 109956398; end: 10995641f;  */

undefined8 * FUN_109956398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1e438;
  _free(param_1[6]);
  _free(param_1[4]);
  _free(param_1[2]);
  return param_1;
}



/* Entry: 109956420; end: 109956777;  */

void FUN_109956420(long param_1,long *param_2,double *param_3,long *param_4,double *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  double *pdVar8;
  double *pdVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  double *pdVar15;
  double *pdVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))();
  iVar3 = (int)plVar4;
  uVar17 = (ulong)iVar3;
  if (*(long *)(param_1 + 0x18) != (long)iVar3) {
    _free(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar17 << 3;
      _malloc();
      if (lVar5 == 0) goto LAB_109956500;
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  *(ulong *)(param_1 + 0x18) = uVar17;
  if (*(ulong *)(param_1 + 0x28) != uVar17) {
    _free(*(undefined8 *)(param_1 + 0x20));
    if (iVar3 < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = uVar17 << 3;
      _malloc();
      if (lVar5 == 0) goto LAB_109956500;
    }
    *(long *)(param_1 + 0x20) = lVar5;
  }
  *(ulong *)(param_1 + 0x28) = uVar17;
  if (*(ulong *)(param_1 + 0x38) == uVar17) goto LAB_109956528;
  _free(*(undefined8 *)(param_1 + 0x30));
  if (iVar3 < 1) goto LAB_109956520;
  lVar5 = uVar17 << 3;
  _malloc();
  if (lVar5 != 0) goto LAB_109956524;
LAB_109956500:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109956520:
  lVar5 = 0;
LAB_109956524:
  *(long *)(param_1 + 0x30) = lVar5;
LAB_109956528:
  *(ulong *)(param_1 + 0x38) = uVar17;
  if (*(int *)(param_1 + 8) < 1) {
    return;
  }
  iVar3 = 0;
  uVar7 = (ulong)param_5 >> 3 & 1;
  if ((long)uVar17 <= (long)uVar7) {
    uVar7 = uVar17;
  }
  if (((ulong)param_5 & 7) != 0) {
    uVar7 = uVar17;
  }
  lVar11 = uVar17 - uVar7;
  uVar1 = lVar11 - (lVar11 >> 0x3f);
  lVar5 = (uVar1 & 0xfffffffffffffffe) + uVar7;
  uVar1 = uVar1 & 0x1ffffffffffffffe;
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if (0 < *(long *)(param_1 + 0x38)) {
      _bzero(uVar2,*(long *)(param_1 + 0x38) << 3);
    }
    (**(code **)(*param_2 + 0x10))(param_2,param_5,uVar2);
    pdVar9 = *(double **)(param_1 + 0x30);
    uVar14 = *(ulong *)(param_1 + 0x38);
    pdVar6 = *(double **)(param_1 + 0x10);
    if (*(ulong *)(param_1 + 0x18) != uVar14) {
      _free();
      if ((long)uVar14 < 1) {
        pdVar6 = (double *)0x0;
      }
      else {
        if (uVar14 >> 0x3d != 0) goto LAB_109956500;
        pdVar6 = (double *)(uVar14 << 3);
        _malloc();
        if (pdVar6 == (double *)0x0) goto LAB_109956500;
      }
      *(double **)(param_1 + 0x10) = pdVar6;
      *(ulong *)(param_1 + 0x18) = uVar14;
    }
    uVar10 = uVar14 - ((long)uVar14 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < (long)uVar14) {
      lVar12 = 0;
      pdVar8 = pdVar6;
      pdVar15 = param_3;
      pdVar16 = pdVar9;
      do {
        dVar18 = *pdVar15;
        dVar19 = *pdVar16;
        pdVar8[1] = pdVar15[1] - pdVar16[1];
        *pdVar8 = dVar18 - dVar19;
        lVar12 = lVar12 + 2;
        pdVar8 = pdVar8 + 2;
        pdVar15 = pdVar15 + 2;
        pdVar16 = pdVar16 + 2;
      } while (lVar12 < (long)uVar10);
    }
    lVar12 = (long)uVar14 % 2;
    if (lVar12 != 0 && (long)uVar10 <= (long)uVar14) {
      lVar13 = (long)uVar14 / 2;
      pdVar9 = pdVar9 + lVar13 * 2;
      pdVar8 = param_3 + lVar13 * 2;
      pdVar6 = pdVar6 + lVar13 * 2;
      do {
        *pdVar6 = *pdVar8 - *pdVar9;
        lVar12 = lVar12 + -1;
        pdVar9 = pdVar9 + 1;
        pdVar8 = pdVar8 + 1;
        pdVar6 = pdVar6 + 1;
      } while (lVar12 != 0);
    }
    uStack_78 = 0;
    uStack_70 = 0;
    lStack_68 = 0;
    (**(code **)(*param_4 + 0x20))
              (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),&uStack_78);
    pdVar8 = *(double **)(param_1 + 0x20);
    pdVar9 = param_5;
    pdVar6 = pdVar8;
    uVar14 = uVar7;
    if (0 < (long)uVar7) {
      do {
        *pdVar9 = *pdVar6 + *pdVar9;
        uVar14 = uVar14 - 1;
        pdVar9 = pdVar9 + 1;
        pdVar6 = pdVar6 + 1;
      } while (uVar14 != 0);
    }
    if (1 < lVar11) {
      pdVar9 = pdVar8 + uVar7;
      pdVar6 = param_5 + uVar7;
      uVar14 = uVar7;
      do {
        dVar18 = *pdVar9;
        pdVar6[1] = pdVar9[1] + pdVar6[1];
        *pdVar6 = dVar18 + *pdVar6;
        uVar14 = uVar14 + 2;
        pdVar9 = pdVar9 + 2;
        pdVar6 = pdVar6 + 2;
      } while ((long)uVar14 < lVar5);
    }
    if (lVar5 < (long)uVar17) {
      pdVar9 = pdVar8 + uVar7 + uVar1;
      pdVar6 = param_5 + uVar7 + uVar1;
      lVar12 = lVar11 % 2;
      do {
        *pdVar6 = *pdVar9 + *pdVar6;
        lVar12 = lVar12 + -1;
        pdVar9 = pdVar9 + 1;
        pdVar6 = pdVar6 + 1;
      } while (lVar12 != 0);
    }
    if (lStack_68 < 0) {
      __ZdlPv(uStack_78);
    }
    iVar3 = iVar3 + 1;
    if (*(int *)(param_1 + 8) <= iVar3) {
      return;
    }
  } while( true );
}



/* Entry: 109956778; end: 10995687f;  */

undefined8 * FUN_109956778(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  _free(param_1[0x1b]);
  plVar1 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar2 != 0) {
    FUN_109953554();
    __ZdlPv();
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b1d718;
  FUN_1099215c8(param_1 + 9,param_1[10]);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109956880; end: 10995713f;  */

/* WARNING: Removing unreachable block (ram,0x000109956d2c) */
/* WARNING: Removing unreachable block (ram,0x000109956da0) */

undefined ***
FUN_109956880(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined ***pppuStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined ***pppuStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined7 uStack_150;
  char cStack_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_f0 [5];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  ppuVar4 = (undefined **)0x28;
  __Znwm();
  uStack_150 = 0x28;
  cStack_149 = -0x80;
  lStack_158 = 0x25;
  ppuVar4[1] = (undefined *)0x6f43727568635365;
  *ppuVar4 = (undefined *)0x7669746172657449;
  ppuVar4[3] = (undefined *)0x3a3a7265766c6f53;
  ppuVar4[2] = (undefined *)0x746e656d656c706d;
  *(undefined8 *)((long)ppuVar4 + 0x1d) = 0x65766c6f533a3a72;
  *(undefined1 *)((long)ppuVar4 + 0x25) = 0;
  ppuStack_160 = ppuVar4;
  FUN_109997918(appuStack_f0,&ppuStack_160);
  if (cStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  if (*(long *)(param_3 + 0x20) == 0) {
    ppuStack_160 = (undefined **)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_148 = 0;
    uStack_141 = 0;
    uStack_150 = 0;
    cStack_149 = '\0';
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    FUN_1099a9f0c(&ppuStack_160,&UNK_10f58c6bf,0x46,3,FUN_1099aa768,0);
    puVar12 = &UNK_10f58c759;
    FUN_1092b4db8(lStack_158 + 0x7540,&UNK_10f58c759,0x2e);
    pppuVar9 = &ppuStack_160;
    func_0x0001099ab7c0();
LAB_109957130:
    FUN_109997a28(appuStack_f0);
    pppuVar10 = pppuVar9;
    __Unwind_Resume();
    pcStack_1b8 = FUN_109957140;
    *pppuVar10 = &PTR_FUN_110b1e4c0;
    ppuVar4 = *(undefined ***)(puVar12 + 8);
    pppuVar10[1] = ppuVar4;
    ppuVar16 = *(undefined ***)(puVar12 + 0x10);
    pppuVar10[3] = *(undefined ***)(puVar12 + 0x18);
    pppuVar10[2] = ppuVar16;
    ppuVar16 = *(undefined ***)(puVar12 + 0x20);
    pppuVar11 = pppuVar10 + 4;
    *pppuVar11 = ppuVar16;
    ppuVar17 = *(undefined ***)(puVar12 + 0x28);
    pppuVar13 = pppuVar10 + 5;
    *pppuVar13 = ppuVar17;
    pppuVar10[6] = (undefined **)0x4000000000000000;
    *(undefined1 *)(pppuVar10 + 7) = 0;
    pppuVar10[9] = (undefined **)0x0;
    pppuVar10[8] = (undefined **)0x0;
    pppuVar10[0xb] = (undefined **)0x0;
    pppuVar10[10] = (undefined **)0x0;
    lStack_1e0 = param_3;
    lStack_1d8 = param_2;
    pppuStack_1d0 = pppuVar9;
    puStack_1c8 = param_1;
    puStack_1c0 = &stack0xfffffffffffffff0;
    if (ppuVar4 == (undefined **)0x0) {
      ppuStack_240 = (undefined **)0x0;
      uStack_1e8 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1f0 = 0;
      FUN_1099a9f0c(&ppuStack_240,&UNK_10f58c81f,0x3a,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_238 + 0x7540,&UNK_10f58b790,0x28);
    }
    else {
      ppuStack_240 = (undefined **)0x0;
      if ((double)ppuVar16 <= 0.0) {
        pppuVar9 = pppuVar11;
        FUN_10991e5b0(pppuVar11,&ppuStack_240,&UNK_10f58b7b9);
        if (pppuVar9 != (undefined ***)0x0) {
          pppuStack_248 = pppuVar9;
          FUN_1099ab8e4(&ppuStack_240,&UNK_10f58c81f,0x3b,&pppuStack_248);
          goto LAB_109957304;
        }
        ppuVar16 = *pppuVar11;
        ppuVar17 = *pppuVar13;
        pppuStack_248 = (undefined ***)0x0;
      }
      if (((double)ppuVar16 <= (double)ppuVar17) ||
         (FUN_10991e5b0(pppuVar11,pppuVar13,&UNK_10f58b7cd), pppuStack_248 = pppuVar11,
         pppuVar11 == (undefined ***)0x0)) {
        ppuStack_240 = (undefined **)0x0;
        if ((double)pppuVar10[3] <= 0.0) {
          pppuVar9 = pppuVar10 + 3;
          FUN_10991e5b0(pppuVar9,&ppuStack_240,&UNK_10f58b7ec);
          if (pppuVar9 != (undefined ***)0x0) {
            pppuStack_248 = pppuVar9;
            FUN_1099ab8e4(&ppuStack_240,&UNK_10f58c81f,0x3d,&pppuStack_248);
            goto LAB_109957304;
          }
        }
        return pppuVar10;
      }
      FUN_1099ab8e4(&ppuStack_240,&UNK_10f58c81f,0x3c,&pppuStack_248);
    }
LAB_109957304:
    pppuVar9 = &ppuStack_240;
    func_0x0001099ab7c0();
    _free(pppuVar10[10]);
    _free(pppuVar10[8]);
    __Unwind_Resume();
    _free(pppuVar9[10]);
    _free(pppuVar9[8]);
    return pppuVar9;
  }
  iVar3 = **(int **)(param_2 + 0x88);
  if (*(long *)(param_2 + 200) == 0) {
    FUN_1099333ec(*(long *)(param_3 + 0x20),iVar3,param_2 + 0xa4,param_2 + 0xa8,param_2 + 0xac);
    puVar5 = (undefined8 *)0x88;
    __Znwm();
    *puVar5 = &PTR_FUN_110b1e3d0;
    puVar5[1] = param_2 + 0x60;
    puVar5[3] = 0;
    puVar5[2] = 0;
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
    lVar15 = *(long *)(param_2 + 200);
    *(undefined8 **)(param_2 + 200) = puVar5;
    if (lVar15 != 0) {
      FUN_109953554(lVar15);
      __ZdlPv();
    }
  }
  FUN_1099525ac();
  if (iVar3 != (int)((ulong)((*(long **)(param_3 + 0x20))[1] - **(long **)(param_3 + 0x20)) >> 3)) {
    plVar6 = *(long **)(*(long *)(param_2 + 200) + 0x10);
    (**(code **)(*plVar6 + 0x68))();
    iVar3 = (int)plVar6;
    lVar15 = (long)iVar3;
    if (*(long *)(param_2 + 0xe0) != (long)iVar3) {
      _free(*(undefined8 *)(param_2 + 0xd8));
      if (iVar3 < 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar15 << 3;
        _malloc();
        if (lVar7 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109956f88;
        }
      }
      *(long *)(param_2 + 0xd8) = lVar7;
    }
    *(long *)(param_2 + 0xe0) = lVar15;
    if (0 < iVar3) {
      _bzero(*(undefined8 *)(param_2 + 0xd8),lVar15 << 3);
    }
    lStack_158 = 0x100000002;
    uStack_140 = *(undefined8 *)(param_2 + 0x78);
    uStack_148 = 0;
    uStack_150 = 0;
    cStack_149 = '\0';
    ppuStack_160 = &PTR_FUN_110b1d840;
    uStack_138 = CONCAT44(uStack_138._4_4_,1);
    lStack_130 = 0;
    uStack_120 = 0;
    lStack_128 = 0;
    uStack_110 = 0xffffffffffffffff;
    uStack_118 = 0xffffffff0000000a;
    uStack_108 = uStack_108 & 0xffffff00;
    uStack_104 = 0;
    uStack_100 = 0xffffffff;
    uStack_f8 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_168 = param_5[3];
    uStack_170 = param_5[2];
    iVar3 = *(int *)(param_2 + 100);
    if ((iVar3 != 0) && (*(long *)(param_2 + 0xd0) == 0)) {
      uStack_194 = *(undefined4 *)(param_2 + 0x68);
      uStack_190 = *(undefined4 *)(param_2 + 0x70);
      uStack_18c = *(undefined4 *)(param_2 + 0x80);
      uStack_1a0 = *(undefined4 *)(param_2 + 0xa4);
      uStack_19c = *(undefined4 *)(param_2 + 0xa8);
      uStack_198 = *(undefined4 *)(param_2 + 0xac);
      lVar15 = *(long *)(param_2 + 0x88);
      lVar7 = *(long *)(param_2 + 0x90);
      lVar1 = lVar7 - lVar15;
      if (lVar1 == 0) {
        lStack_188 = 0;
      }
      else {
        if (lVar1 < 0) {
          FUN_10923f788();
LAB_109956f88:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109956f8c);
          (*pcVar2)();
        }
        lVar14 = lVar1;
        __Znwm();
        lStack_188 = lVar14;
        _memcpy();
      }
      lVar14 = *(long *)(param_2 + 0xc0);
      if (lVar14 == 0) {
        uStack_c8 = (undefined **)0x0;
        uStack_70 = 0;
        lStack_b0 = 0;
        uStack_b8 = 0;
        lStack_a0 = 0;
        lStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_80 = 0;
        lStack_88 = 0;
        uStack_78 = 0;
        FUN_1099a9f0c(&uStack_c8,&UNK_10f58c6bf,0x99,3,FUN_1099aa768,0);
        puVar12 = &UNK_10f58c7d8;
        FUN_1092b4db8(CONCAT44(uStack_bc,uStack_c0) + 0x7540,&UNK_10f58c7d8,0x2a);
LAB_1099570f4:
        pppuVar9 = (undefined ***)&uStack_c8;
        func_0x0001099ab7c0();
        if (lStack_188 != 0) {
          __ZdlPv(lStack_188);
        }
        if (lStack_130 != 0) {
          lStack_128 = lStack_130;
          __ZdlPv();
        }
        goto LAB_109957130;
      }
      if (iVar3 - 3U < 2) {
        uStack_1b0 = *(undefined8 *)(param_3 + 0x20);
        uVar8 = 0xe0;
        __Znwm();
        uStack_c8 = (undefined **)CONCAT44(uStack_194,iVar3);
        uStack_c0 = uStack_190;
        uStack_bc = 0xffffffff;
        uStack_b8 = CONCAT44(uStack_18c,(int)uStack_b8) & 0xffffffffffffff00;
        lStack_a8 = 0;
        lStack_a0 = 0;
        lStack_b0 = 0;
        uStack_1a8 = uVar8;
        if (lVar7 != lVar15) {
          lVar15 = lVar1;
          __Znwm();
          lStack_b0 = lVar15;
          lStack_a0 = lVar15 + lVar1;
          _memcpy();
          lStack_a8 = lVar15 + lVar1;
        }
        uVar8 = uStack_1a8;
        uStack_98 = CONCAT44(uStack_19c,uStack_1a0);
        uStack_90 = CONCAT44(uStack_90._4_4_,uStack_198);
        lStack_88 = lVar14;
        FUN_109991218(uStack_1a8,uStack_1b0,&uStack_c8);
        if (lStack_b0 != 0) {
          __ZdlPv();
        }
        plVar6 = *(long **)(param_2 + 0xd0);
        *(undefined8 *)(param_2 + 0xd0) = uVar8;
      }
      else if (iVar3 == 2) {
        uStack_1a8 = *(undefined8 *)(param_3 + 0x20);
        uVar8 = 0x60;
        __Znwm();
        uStack_c8 = (undefined **)CONCAT44(uStack_194,2);
        uStack_c0 = uStack_190;
        uStack_bc = 0xffffffff;
        uStack_b8 = CONCAT44(uStack_18c,(int)uStack_b8) & 0xffffffffffffff00;
        lStack_a8 = 0;
        lStack_a0 = 0;
        lStack_b0 = 0;
        if (lVar7 != lVar15) {
          lVar15 = lVar1;
          __Znwm();
          lStack_b0 = lVar15;
          lStack_a0 = lVar15 + lVar1;
          _memcpy();
          lStack_a8 = lVar15 + lVar1;
        }
        uStack_98 = CONCAT44(uStack_19c,uStack_1a0);
        uStack_90 = CONCAT44(uStack_90._4_4_,uStack_198);
        lStack_88 = lVar14;
        FUN_109986bdc(uVar8,uStack_1a8,&uStack_c8);
        if (lStack_b0 != 0) {
          __ZdlPv();
        }
        plVar6 = *(long **)(param_2 + 0xd0);
        *(undefined8 *)(param_2 + 0xd0) = uVar8;
      }
      else {
        if (iVar3 != 1) {
          uStack_c8 = (undefined **)0x0;
          uStack_70 = 0;
          lStack_b0 = 0;
          uStack_b8 = 0;
          lStack_a0 = 0;
          lStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_80 = 0;
          lStack_88 = 0;
          uStack_78 = 0;
          FUN_1099a9f0c(&uStack_c8,&UNK_10f58c6bf,0xab,3,FUN_1099aa768,0);
          puVar12 = &UNK_10f58c803;
          FUN_109365950(CONCAT44(uStack_bc,uStack_c0) + 0x7540);
          goto LAB_1099570f4;
        }
        uVar8 = 0x10;
        __Znwm();
        FUN_109971dd4();
        plVar6 = *(long **)(param_2 + 0xd0);
        *(undefined8 *)(param_2 + 0xd0) = uVar8;
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (lStack_188 != 0) {
        __ZdlPv();
      }
    }
    plVar6 = *(long **)(param_2 + 0xd0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,param_3,*param_5);
      if (((ulong)plVar6 & 1) == 0) {
        *param_1 = 0xbff0000000000000;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[1] = 0x200000000;
        func_0x000107c2c4d8(param_1 + 2,&UNK_10f58c7ba,0x1d);
        goto LAB_109956df8;
      }
      uStack_178 = *(undefined8 *)(param_2 + 0xd0);
    }
    uStack_b8 = CONCAT17(5,(undefined7)uStack_b8);
    uStack_c8 = (undefined **)CONCAT26(uStack_c8._6_2_,0x7075746553);
    FUN_109997c38(appuStack_f0,&uStack_c8);
    FUN_10992619c(param_1,&ppuStack_160,*(long *)(param_2 + 200),
                  *(undefined8 *)(*(long *)(param_2 + 200) + 0x38),&uStack_180,
                  *(undefined8 *)(param_2 + 0xd8));
    if (*(int *)((long)param_1 + 0xc) - 4U < 0xfffffffe) {
      FUN_109953270(*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0xd8),param_6);
    }
    uStack_b8 = CONCAT17(5,(undefined7)uStack_b8);
    uStack_c8 = (undefined **)CONCAT26(uStack_c8._6_2_,0x65766c6f53);
    FUN_109997c38(appuStack_f0,&uStack_c8);
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    goto LAB_109956df8;
  }
  if (piRam000000011373cdc0 == (int *)0x0) {
    iVar3 = 0x1373cdc0;
    FUN_1099adbb8(0x11373cdc0,0x11382bb14,&UNK_10f58c6bf,2);
    if (iVar3 != 0) goto LAB_109956a54;
  }
  else if (1 < *piRam000000011373cdc0) {
LAB_109956a54:
    ppuStack_160 = (undefined **)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_148 = 0;
    uStack_141 = 0;
    uStack_150 = 0;
    cStack_149 = '\0';
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    FUN_1099a9f0c(&ppuStack_160,&UNK_10f58c6bf,0x56,0,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_158 + 0x7540,&UNK_10f58c788,0x31);
    FUN_1099ab3b0(&ppuStack_160);
  }
  *param_1 = 0xbff0000000000000;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_109953270(*(undefined8 *)(param_2 + 200),0,param_6);
LAB_109956df8:
  pppuVar9 = appuStack_f0;
  FUN_109997a28(pppuVar9);
  return pppuVar9;
}



/* Entry: 109957140; end: 109957327;  */

undefined8 * FUN_109957140(undefined8 *param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  long lVar4;
  double *pdVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double *pdStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_110b1e4c0;
  lVar4 = *(long *)(param_2 + 8);
  param_1[1] = lVar4;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar6;
  dVar7 = *(double *)(param_2 + 0x20);
  pdVar2 = (double *)(param_1 + 4);
  *pdVar2 = dVar7;
  dVar8 = *(double *)(param_2 + 0x28);
  pdVar5 = (double *)(param_1 + 5);
  *pdVar5 = dVar8;
  param_1[6] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (lVar4 == 0) {
    uStack_90 = 0;
    uStack_38 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    FUN_1099a9f0c(&uStack_90,&UNK_10f58c81f,0x3a,3,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f58b790,0x28);
  }
  else {
    uStack_90 = 0;
    if (dVar7 <= 0.0) {
      pdVar1 = pdVar2;
      FUN_10991e5b0(pdVar2,&uStack_90,&UNK_10f58b7b9);
      if (pdVar1 != (double *)0x0) {
        pdStack_98 = pdVar1;
        FUN_1099ab8e4(&uStack_90,&UNK_10f58c81f,0x3b,&pdStack_98);
        goto LAB_109957304;
      }
      dVar7 = *pdVar2;
      dVar8 = *pdVar5;
      pdStack_98 = (double *)0x0;
    }
    if ((dVar7 <= dVar8) ||
       (FUN_10991e5b0(pdVar2,pdVar5,&UNK_10f58b7cd), pdStack_98 = pdVar2, pdVar2 == (double *)0x0))
    {
      uStack_90 = 0;
      if ((double)param_1[3] <= 0.0) {
        pdVar2 = (double *)(param_1 + 3);
        FUN_10991e5b0(pdVar2,&uStack_90,&UNK_10f58b7ec);
        if (pdVar2 != (double *)0x0) {
          pdStack_98 = pdVar2;
          FUN_1099ab8e4(&uStack_90,&UNK_10f58c81f,0x3d,&pdStack_98);
          goto LAB_109957304;
        }
      }
      return param_1;
    }
    FUN_1099ab8e4(&uStack_90,&UNK_10f58c81f,0x3c,&pdStack_98);
  }
LAB_109957304:
  puVar3 = &uStack_90;
  func_0x0001099ab7c0();
  _free(param_1[10]);
  _free(param_1[8]);
  __Unwind_Resume();
  _free(puVar3[10]);
  _free(puVar3[8]);
  return puVar3;
}



/* Entry: 109957328; end: 109957387;  */

long FUN_109957328(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x50));
  _free(*(undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 109957388; end: 109957a93;  */

undefined1  [16]
FUN_109957388(long param_1,undefined8 *param_2,long *param_3,long param_4,double *param_5)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long lVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  double *pdVar14;
  ulong uVar15;
  int iVar16;
  double *pdVar17;
  ulong unaff_x27;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_1c0 [12];
  double *pdStack_160;
  double dStack_158;
  double dStack_120;
  undefined1 auStack_108 [12];
  int iStack_fc;
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == (long *)0x0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    dVar19 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x47,3,FUN_1099aa768,0);
    puVar8 = &UNK_10f58b7fe;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58b7fe,0x22);
LAB_109957a8c:
    puVar5 = &uStack_c0;
    func_0x0001099ab7c0();
    puVar9 = auStack_1c0;
    puVar7 = auStack_1c0;
    auStack_1c0[0] = 0;
    puVar6 = puVar5;
    dStack_158 = dVar19;
    if (dVar19 <= 0.0) {
      pdVar17 = &dStack_158;
      FUN_10991e5b0(pdVar17,auStack_1c0,&UNK_10f58ba43);
      if (pdVar17 != (double *)0x0) {
        puVar8 = &UNK_10f58c81f;
        pdStack_160 = pdVar17;
        FUN_1099ab8e4(auStack_1c0,&UNK_10f58c81f,0x94,&pdStack_160);
        func_0x0001099ab7c0();
        dVar19 = *(double *)((long)puVar7 + 0x30);
        *(double *)((long)puVar7 + 0x10) = *(double *)((long)puVar7 + 0x10) / dVar19;
        *(double *)((long)puVar7 + 0x30) = dVar19 + dVar19;
        *(undefined1 *)((long)puVar7 + 0x38) = 1;
        auVar22._8_8_ = puVar8;
        auVar22._0_8_ = puVar7;
        return auVar22;
      }
      puVar6 = (undefined8 *)0x0;
      pdStack_160 = (double *)0x0;
      puVar8 = (undefined *)puVar9;
    }
    dVar20 = (double)puVar5[2];
    dVar18 = dStack_158 * 2.0 + -1.0;
    _pow(dVar18,0x4008000000000000);
    dVar19 = 1.0 - dVar18;
    if (1.0 - dVar18 <= 0.3333333333333333) {
      dVar19 = 0.3333333333333333;
    }
    dVar18 = dVar20 / dVar19;
    if ((double)puVar5[3] <= dVar20 / dVar19) {
      dVar18 = (double)puVar5[3];
    }
    puVar5[2] = dVar18;
    puVar5[6] = 0x4000000000000000;
    *(undefined1 *)(puVar5 + 7) = 0;
    auVar21._8_8_ = puVar8;
    auVar21._0_8_ = puVar6;
    return auVar21;
  }
  if (param_4 == 0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    dVar19 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x48,3,FUN_1099aa768,0);
    puVar8 = &UNK_10f58febc;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58febc,0x23);
    goto LAB_109957a8c;
  }
  if (param_5 == (double *)0x0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    dVar19 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x49,3,FUN_1099aa768,0);
    puVar8 = &UNK_10f58b821;
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58b821,0x1e);
    goto LAB_109957a8c;
  }
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x28))();
  iVar16 = (int)plVar2;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    if (*(long *)(param_1 + 0x48) == (long)iVar16) {
LAB_109957424:
      (**(code **)(*param_3 + 0x30))(param_3);
      if (0 < iVar16) {
        uVar10 = (ulong)plVar2 & 0xffffffff;
        pdVar17 = *(double **)(param_1 + 0x40);
        do {
          dVar19 = *(double *)(param_1 + 0x20);
          if (*(double *)(param_1 + 0x20) <= *pdVar17) {
            dVar19 = *pdVar17;
          }
          dVar18 = *(double *)(param_1 + 0x28);
          if (dVar19 <= *(double *)(param_1 + 0x28)) {
            dVar18 = dVar19;
          }
          *pdVar17 = dVar18;
          uVar10 = uVar10 - 1;
          pdVar17 = pdVar17 + 1;
        } while (uVar10 != 0);
      }
      goto LAB_109957468;
    }
    pdVar17 = (double *)(long)iVar16;
    _free(*(undefined8 *)(param_1 + 0x40));
    if (iVar16 < 1) {
      lVar3 = 0;
LAB_109957420:
      *(long *)(param_1 + 0x40) = lVar3;
      *(double **)(param_1 + 0x48) = pdVar17;
      goto LAB_109957424;
    }
    lVar3 = (long)pdVar17 << 3;
    _malloc();
    if (lVar3 != 0) goto LAB_109957420;
    goto LAB_1099574a0;
  }
LAB_109957468:
  dStack_120 = *(double *)(param_1 + 0x10);
  pdVar17 = *(double **)(param_1 + 0x40);
  unaff_x27 = *(ulong *)(param_1 + 0x48);
  pdVar4 = *(double **)(param_1 + 0x50);
  if (*(ulong *)(param_1 + 0x58) != unaff_x27) {
    _free();
    if ((long)unaff_x27 < 1) {
LAB_1099574c0:
      pdVar4 = (double *)0x0;
    }
    else {
      if (unaff_x27 >> 0x3d != 0) {
LAB_1099574a0:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_1099574c0;
      }
      pdVar4 = (double *)(unaff_x27 << 3);
      _malloc();
      if (pdVar4 == (double *)0x0) goto LAB_1099574a0;
    }
    *(double **)(param_1 + 0x50) = pdVar4;
    *(ulong *)(param_1 + 0x58) = unaff_x27;
  }
  uVar10 = unaff_x27 - ((long)unaff_x27 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)unaff_x27) {
    lVar3 = 0;
    pdVar13 = pdVar4;
    pdVar14 = pdVar17;
    do {
      dVar19 = *pdVar14;
      pdVar13[1] = SQRT(pdVar14[1] / dStack_120);
      *pdVar13 = SQRT(dVar19 / dStack_120);
      lVar3 = lVar3 + 2;
      pdVar13 = pdVar13 + 2;
      pdVar14 = pdVar14 + 2;
    } while (lVar3 < (long)uVar10);
  }
  lVar3 = (long)unaff_x27 % 2;
  if (lVar3 != 0 && lVar3 < 0 == SBORROW8(unaff_x27,uVar10)) {
    pdVar17 = pdVar17 + ((long)unaff_x27 / 2) * 2;
    pdVar4 = pdVar4 + ((long)unaff_x27 / 2) * 2;
    do {
      *pdVar4 = SQRT(*pdVar17 / dStack_120);
      lVar3 = lVar3 + -1;
      pdVar17 = pdVar17 + 1;
      pdVar4 = pdVar4 + 1;
    } while (lVar3 != 0);
  }
  uStack_e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = 0;
  uStack_c8 = *param_2;
  uStack_d0 = 0xbff0000000000000;
  if (0 < iVar16) {
    _memset_pattern16(param_5,&UNK_10e00cee0,((ulong)plVar2 & 0xffffffff) << 3);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (auStack_108,*(long **)(param_1 + 8),param_3,param_4,&uStack_e0,param_5);
  if (iStack_fc == 2) {
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x73,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58c8d0,0x31);
    FUN_1092b4db8();
LAB_1099576a4:
    FUN_1099ab3b0(&uStack_c0);
  }
  else {
    if (iStack_fc == 3) {
      uStack_c0 = 0;
      uStack_68 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x70,1,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58c8b4,0x1b);
      FUN_1092b4db8();
      goto LAB_1099576a4;
    }
    if (0 < iVar16) {
      uVar10 = (ulong)plVar2 & 0xffffffff;
      pdVar17 = param_5;
      do {
        if ((0x7fefffffffffffff < (ulong)ABS(*pdVar17)) || (*pdVar17 == 1e+302)) {
          uStack_c0 = 0;
          uStack_68 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_70 = 0;
          FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x76,1,FUN_1099aa768,0);
          FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58c902,0x37);
          FUN_1099ab3b0(&uStack_c0);
          iStack_fc = 2;
          goto LAB_1099576ac;
        }
        uVar10 = uVar10 - 1;
        pdVar17 = pdVar17 + 1;
      } while (uVar10 != 0);
    }
    uVar11 = (ulong)iVar16;
    uVar10 = (ulong)param_5 >> 3 & 1;
    if ((long)iVar16 <= (long)uVar10) {
      uVar10 = uVar11;
    }
    if (((ulong)param_5 & 7) != 0) {
      uVar10 = uVar11;
    }
    lVar3 = uVar11 - uVar10;
    pdVar17 = param_5;
    uVar15 = uVar10;
    if (0 < (long)uVar10) {
      do {
        *pdVar17 = -*pdVar17;
        uVar15 = uVar15 - 1;
        pdVar17 = pdVar17 + 1;
      } while (uVar15 != 0);
    }
    lVar12 = (lVar3 - (lVar3 >> 0x3f) & 0xfffffffffffffffeU) + uVar10;
    if (1 < lVar3) {
      pdVar17 = param_5 + uVar10;
      uVar15 = uVar10;
      do {
        pdVar17[1] = -pdVar17[1];
        *pdVar17 = -*pdVar17;
        uVar15 = uVar15 + 2;
        pdVar17 = pdVar17 + 2;
      } while ((long)uVar15 < lVar12);
    }
    if (lVar12 < (long)uVar11) {
      lVar12 = lVar3 % 2;
      pdVar17 = param_5 + uVar10 + (lVar3 / 2) * 2;
      do {
        *pdVar17 = -*pdVar17;
        lVar12 = lVar12 + -1;
        pdVar17 = pdVar17 + 1;
      } while (lVar12 != 0);
    }
  }
LAB_1099576ac:
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(int *)(param_2 + 1) != 0) {
    uVar10 = param_2[3];
    if (-1 < (char)*(byte *)((long)param_2 + 0x27)) {
      uVar10 = (ulong)*(byte *)((long)param_2 + 0x27);
    }
    if (uVar10 == 0) goto LAB_109957788;
  }
  puVar5 = param_2 + 2;
  FUN_109962f70(puVar5,*(int *)(param_2 + 1),param_3,uStack_e0,param_4,param_5,0);
  if (((ulong)puVar5 & 1) == 0) {
    uStack_c0 = 0;
    uStack_68 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    FUN_1099a9f0c(&uStack_c0,&UNK_10f58c81f,0x87,2,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58b9fe,0x24);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1099ab3b0(&uStack_c0);
  }
LAB_109957788:
  auVar1._12_4_ = iStack_fc;
  auVar1._0_12_ = auStack_108;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  return auVar1;
}



/* Entry: 109957a94; end: 109957b5f;  */

void FUN_109957a94(double param_1,long param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 auStack_a0 [12];
  double *pdStack_40;
  double dStack_38;
  
  puVar2 = auStack_a0;
  auStack_a0[0] = 0;
  dStack_38 = param_1;
  if (param_1 <= 0.0) {
    pdVar1 = &dStack_38;
    FUN_10991e5b0(pdVar1,auStack_a0,&UNK_10f58ba43);
    if (pdVar1 != (double *)0x0) {
      pdStack_40 = pdVar1;
      FUN_1099ab8e4(auStack_a0,&UNK_10f58c81f,0x94,&pdStack_40);
      func_0x0001099ab7c0();
      dVar5 = *(double *)((long)puVar2 + 0x30);
      *(double *)((long)puVar2 + 0x10) = *(double *)((long)puVar2 + 0x10) / dVar5;
      *(double *)((long)puVar2 + 0x30) = dVar5 + dVar5;
      *(undefined1 *)((long)puVar2 + 0x38) = 1;
      return;
    }
    pdStack_40 = (double *)0x0;
  }
  dVar5 = *(double *)(param_2 + 0x10);
  dVar3 = dStack_38 * 2.0 + -1.0;
  _pow(dVar3,0x4008000000000000);
  dVar4 = 1.0 - dVar3;
  if (1.0 - dVar3 <= 0.3333333333333333) {
    dVar4 = 0.3333333333333333;
  }
  dVar5 = dVar5 / dVar4;
  if (*(double *)(param_2 + 0x18) <= dVar5) {
    dVar5 = *(double *)(param_2 + 0x18);
  }
  *(double *)(param_2 + 0x10) = dVar5;
  *(undefined8 *)(param_2 + 0x30) = 0x4000000000000000;
  *(undefined1 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 109957b60; end: 109957baf;  */

void FUN_109957b60(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x30);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) / dVar1;
  *(double *)(param_1 + 0x30) = dVar1 + dVar1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 109957bb0; end: 109957c57;  */

undefined8 FUN_109957bb0(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_109988e2c(&ppuStack_38,&UNK_10f58c35d);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  FUN_1092b4db8(param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 109957c58; end: 109957feb;  */

void FUN_109957c58(undefined8 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined8 **ppuVar8;
  byte bVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 ***pppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 **ppuStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  byte bStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 1) {
    puVar11 = (undefined8 *)0x58;
    __Znwm();
    uVar20 = param_3[1];
    uVar19 = *param_3;
    uVar16 = param_3[2];
    puVar11[4] = param_3[3];
    puVar11[3] = uVar16;
    uVar16 = param_3[4];
    uVar22 = param_3[7];
    uVar21 = param_3[6];
    puVar11[6] = param_3[5];
    puVar11[5] = uVar16;
    puVar11[8] = uVar22;
    puVar11[7] = uVar21;
    uVar16 = param_3[8];
    puVar11[10] = param_3[9];
    puVar11[9] = uVar16;
    puVar11[2] = uVar20;
    puVar11[1] = uVar19;
    ppuVar14 = &PTR_DAT_110b1e548;
LAB_109957d00:
    *puVar11 = ppuVar14;
  }
  else {
    if (param_2 == 0) {
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      uVar20 = param_3[1];
      uVar19 = *param_3;
      uVar16 = param_3[2];
      puVar11[4] = param_3[3];
      puVar11[3] = uVar16;
      uVar16 = param_3[4];
      uVar22 = param_3[7];
      uVar21 = param_3[6];
      puVar11[6] = param_3[5];
      puVar11[5] = uVar16;
      puVar11[8] = uVar22;
      puVar11[7] = uVar21;
      uVar16 = param_3[8];
      puVar11[10] = param_3[9];
      puVar11[9] = uVar16;
      puVar11[2] = uVar20;
      puVar11[1] = uVar19;
      ppuVar14 = &PTR_FUN_110b1e520;
      goto LAB_109957d00;
    }
    puVar11 = (undefined8 *)0x28;
    __Znwm();
    *(undefined4 *)(puVar11 + 4) = 0x203a6570;
    puVar11[1] = 0x61657320656e696c;
    *puVar11 = 0x2064696c61766e49;
    puVar11[3] = 0x7974206d68746972;
    puVar11[2] = 0x6f676c6120686372;
    *(undefined1 *)((long)puVar11 + 0x24) = 0;
    pppuVar12 = (undefined8 ***)0x50;
    __Znwm();
    pppuVar12[1] = (undefined8 **)0x61657320656e696c;
    *pppuVar12 = (undefined8 **)0x2064696c61766e49;
    pppuVar12[3] = (undefined8 **)0x7974206d68746972;
    pppuVar12[2] = (undefined8 **)0x6f676c6120686372;
    *(undefined4 *)(pppuVar12 + 4) = 0x203a6570;
    *(undefined4 *)((long)pppuVar12 + 0x24) = 0x4e4b4e55;
    *(undefined4 *)((long)pppuVar12 + 0x27) = 0x4e574f4e;
    __ZdlPv(puVar11);
    *(undefined1 *)((long)pppuVar12 + 0x2b) = 0;
    uStack_80 = 0x50;
    bStack_79 = 0x80;
    uStack_88 = 0x2b;
    uStack_81 = 0;
    puVar11 = (undefined8 *)0x20;
    ppuStack_90 = pppuVar12;
    __Znwm();
    bVar9 = bStack_79;
    puVar11[1] = 0x61657263206f7420;
    *puVar11 = 0x656c62616e75202c;
    *(undefined8 *)((long)puVar11 + 0x17) = 0x2e68637261657320;
    *(undefined8 *)((long)puVar11 + 0xf) = 0x656e696c20657461;
    *(undefined1 *)((long)puVar11 + 0x1f) = 0;
    uVar17 = (CONCAT17(bStack_79,uStack_80) & 0x7fffffffffffffff) - 1;
    uVar4 = CONCAT17(uStack_81,uStack_88);
    if (-1 < (char)bStack_79) {
      uVar17 = 0x16;
      uVar4 = (ulong)bStack_79;
    }
    if (uVar17 - uVar4 < 0x1f) {
      uVar1 = uVar4 + 0x1f;
      if (0x7ffffffffffffff6 - uVar17 < uVar1 - uVar17) goto LAB_109957fa4;
      pppuVar12 = (undefined8 ***)ppuStack_90;
      if (-1 < (char)bStack_79) {
        pppuVar12 = &ppuStack_90;
      }
      if (uVar17 < 0x3ffffffffffffff3) {
        uVar5 = uVar1;
        if (uVar1 <= uVar17 * 2) {
          uVar5 = uVar17 << 1;
        }
        pppuVar13 = (undefined8 ***)0x19;
        if ((uVar5 | 7) != 0x17) {
          pppuVar13 = (undefined8 ***)((uVar5 | 7) + 1);
        }
        pppuVar18 = (undefined8 ***)0x17;
        if (0x16 < uVar5) {
          pppuVar18 = pppuVar13;
        }
      }
      else {
        pppuVar18 = (undefined8 ***)0x7ffffffffffffff7;
      }
      pppuVar13 = pppuVar18;
      __Znwm();
      if (uVar4 != 0) {
        _memmove(pppuVar13,pppuVar12,uVar4);
      }
      puVar3 = (undefined8 *)((long)pppuVar13 + uVar4);
      uVar16 = *puVar11;
      puVar3[1] = puVar11[1];
      *puVar3 = uVar16;
      uVar16 = *(undefined8 *)((long)puVar11 + 0xf);
      *(undefined8 *)((long)puVar3 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
      *(undefined8 *)((long)puVar3 + 0xf) = uVar16;
      if (uVar17 != 0x16) {
        __ZdlPv(pppuVar12);
      }
      bStack_79 = (byte)((ulong)pppuVar18 >> 0x38) | 0x80;
      uStack_88 = (undefined7)uVar1;
      uStack_81 = (undefined1)(uVar1 >> 0x38);
      uStack_80 = SUB87(pppuVar18,0);
      puVar15 = (undefined1 *)((long)pppuVar13 + uVar1);
      ppuStack_90 = pppuVar13;
    }
    else {
      pppuVar12 = (undefined8 ***)ppuStack_90;
      if (-1 < (char)bStack_79) {
        pppuVar12 = &ppuStack_90;
      }
      puVar3 = (undefined8 *)((long)pppuVar12 + uVar4);
      uVar20 = puVar11[1];
      uVar19 = *puVar11;
      uVar16 = puVar11[2];
      uVar6 = *(undefined1 *)((long)puVar11 + 0x1e);
      uVar7 = *(undefined2 *)((long)puVar11 + 0x1c);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar11 + 3);
      *(undefined2 *)((long)puVar3 + 0x1c) = uVar7;
      *(undefined1 *)((long)puVar3 + 0x1e) = uVar6;
      puVar3[2] = uVar16;
      puVar3[1] = uVar20;
      *puVar3 = uVar19;
      lVar2 = uVar4 + 0x1f;
      if ((char)bVar9 < '\0') {
        uStack_88 = (undefined7)lVar2;
        uStack_81 = (undefined1)((ulong)lVar2 >> 0x38);
      }
      else {
        bStack_79 = (byte)lVar2 & 0x7f;
      }
      puVar15 = (undefined1 *)((long)pppuVar12 + lVar2);
    }
    *puVar15 = 0;
    bVar9 = bStack_79;
    ppuVar8 = ppuStack_90;
    uStack_78 = uStack_88;
    uStack_71 = uStack_81;
    uStack_70 = uStack_80;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    bStack_79 = 0;
    ppuStack_90 = (undefined8 ***)0x0;
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    *param_4 = ppuVar8;
    param_4[1] = CONCAT17(uStack_71,uStack_78);
    *(ulong *)((long)param_4 + 0xf) = CONCAT71(uStack_70,uStack_71);
    *(byte *)((long)param_4 + 0x17) = bVar9;
    __ZdlPv(puVar11);
    if ((char)bStack_79 < '\0') {
      __ZdlPv(ppuStack_90);
    }
    puVar11 = (undefined8 *)0x0;
  }
  *param_1 = puVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109957fa4:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109957fac);
  (*pcVar10)();
}



/* Entry: 109957fec; end: 109958187;  */

undefined8 * FUN_109957fec(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = param_2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))();
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = (int)plVar3;
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)iVar2 << 3;
      _malloc();
      if (lVar4 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109958124;
      }
    }
    param_1[1] = lVar4;
  }
  param_1[2] = (long)iVar2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))();
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = (int)plVar3;
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)iVar2 << 3;
      _malloc();
      if (lVar4 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109958124;
      }
    }
    param_1[3] = lVar4;
  }
  param_1[4] = (long)iVar2;
  (**(code **)(*param_2 + 0x30))();
  param_1[5] = 0;
  param_1[6] = 0;
  iVar2 = (int)param_2;
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)iVar2 << 3;
      _malloc();
      if (lVar4 == 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
LAB_109958124:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109958128);
        (*pcVar1)();
      }
    }
    param_1[5] = lVar4;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = (long)iVar2;
  return param_1;
}



/* Entry: 109958188; end: 1099582eb;  */

void FUN_109958188(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(ulong *)(param_1 + 0x10) != uVar4) {
    _free();
    if ((long)uVar4 < 1) {
      puVar1 = (undefined8 *)0x0;
LAB_1099581d8:
      *(undefined8 **)(param_1 + 8) = puVar1;
      *(ulong *)(param_1 + 0x10) = uVar4;
      goto LAB_1099581dc;
    }
    if (uVar4 >> 0x3d == 0) {
      puVar1 = (undefined8 *)(uVar4 << 3);
      _malloc();
      if (puVar1 != (undefined8 *)0x0) goto LAB_1099581d8;
    }
    goto LAB_109958260;
  }
LAB_1099581dc:
  uVar3 = uVar4 - ((long)uVar4 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar4) {
    lVar5 = 0;
    puVar6 = puVar1;
    puVar7 = puVar2;
    do {
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      lVar5 = lVar5 + 2;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar5 < (long)uVar3);
  }
  lVar5 = (long)uVar4 % 2;
  if (lVar5 != 0 && (long)uVar3 <= (long)uVar4) {
    puVar2 = puVar2 + ((long)uVar4 / 2) * 2;
    puVar1 = puVar1 + ((long)uVar4 / 2) * 2;
    do {
      *puVar1 = *puVar2;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (lVar5 != 0);
  }
  puVar2 = (undefined8 *)*param_3;
  param_3 = (long *)param_3[1];
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (*(long **)(param_1 + 0x20) == param_3) goto LAB_109958288;
  _free();
  if ((long)param_3 < 1) {
LAB_109958280:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)param_3 >> 0x3d != 0) {
LAB_109958260:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109958280;
    }
    puVar1 = (undefined8 *)((long)param_3 << 3);
    _malloc();
    if (puVar1 == (undefined8 *)0x0) goto LAB_109958260;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  *(long **)(param_1 + 0x20) = param_3;
LAB_109958288:
  uVar4 = (long)param_3 - ((long)param_3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)param_3) {
    lVar5 = 0;
    puVar6 = puVar1;
    puVar7 = puVar2;
    do {
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      lVar5 = lVar5 + 2;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (lVar5 < (long)uVar4);
  }
  lVar5 = (long)param_3 % 2;
  if (lVar5 != 0 && lVar5 < 0 == SBORROW8((long)param_3,uVar4)) {
    puVar2 = puVar2 + ((long)param_3 / 2) * 2;
    puVar1 = puVar1 + ((long)param_3 / 2) * 2;
    do {
      *puVar1 = *puVar2;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1099582ec; end: 109958623;  */

void FUN_1099582ec(double param_1,undefined8 *param_2,int param_3,double *param_4)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined2 uStack_42;
  
  *param_4 = param_1;
  *(undefined1 *)(param_4 + 3) = 0;
  *(undefined1 *)(param_4 + 5) = 0;
  *(undefined1 *)(param_4 + 10) = 0;
  *(undefined1 *)(param_4 + 8) = 0;
  pdVar4 = (double *)param_2[3];
  uVar7 = param_2[4];
  pdVar1 = (double *)param_2[5];
  if (param_2[6] != uVar7) {
    _free();
    if ((long)uVar7 < 1) {
      pdVar1 = (double *)0x0;
LAB_109958360:
      param_2[5] = pdVar1;
      param_2[6] = uVar7;
      goto LAB_109958368;
    }
    if (uVar7 >> 0x3d == 0) {
      pdVar1 = (double *)(uVar7 << 3);
      _malloc();
      if (pdVar1 != (double *)0x0) goto LAB_109958360;
    }
    goto LAB_109958468;
  }
LAB_109958368:
  uVar8 = uVar7 - ((long)uVar7 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar7) {
    lVar9 = 0;
    pdVar5 = pdVar1;
    pdVar6 = pdVar4;
    do {
      dVar3 = *pdVar6;
      pdVar5[1] = pdVar6[1] * param_1;
      *pdVar5 = dVar3 * param_1;
      lVar9 = lVar9 + 2;
      pdVar5 = pdVar5 + 2;
      pdVar6 = pdVar6 + 2;
    } while (lVar9 < (long)uVar8);
  }
  lVar9 = (long)uVar7 % 2;
  if (lVar9 != 0 && (long)uVar8 <= (long)uVar7) {
    pdVar4 = pdVar4 + ((long)uVar7 / 2) * 2;
    pdVar1 = pdVar1 + ((long)uVar7 / 2) * 2;
    do {
      *pdVar1 = param_1 * *pdVar4;
      lVar9 = lVar9 + -1;
      pdVar4 = pdVar4 + 1;
      pdVar1 = pdVar1 + 1;
    } while (lVar9 != 0);
  }
  dVar3 = (double)param_2[2];
  if (param_4[2] != dVar3) {
    _free(param_4[1]);
    if ((long)dVar3 < 1) {
      dVar10 = 0.0;
LAB_109958404:
      param_4[1] = dVar10;
      goto LAB_109958408;
    }
    if ((ulong)dVar3 >> 0x3d == 0) {
      dVar10 = (double)((long)dVar3 << 3);
      _malloc();
      if (dVar10 != 0.0) goto LAB_109958404;
    }
    goto LAB_109958468;
  }
LAB_109958408:
  param_4[2] = dVar3;
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2[1],param_2[5]);
  if ((int)plVar2 == 0) {
    return;
  }
  *(undefined1 *)(param_4 + 3) = 1;
  if (param_3 == 0) {
LAB_109958488:
    dVar3 = 0.0;
  }
  else {
    dVar10 = (double)param_2[4];
    dVar3 = param_4[6];
    if (param_4[7] != dVar10) {
      _free(dVar3);
      if (0 < (long)dVar10) {
        if ((ulong)dVar10 >> 0x3d == 0) {
          dVar3 = (double)((long)dVar10 << 3);
          _malloc();
          if (dVar3 != 0.0) goto LAB_109958494;
        }
LAB_109958468:
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_109958488;
      }
      dVar3 = 0.0;
LAB_109958494:
      param_4[6] = dVar3;
    }
    param_4[7] = dVar10;
  }
  plVar2 = (long *)*param_2;
  uStack_42 = 0x101;
  (**(code **)(*plVar2 + 0x18))(plVar2,&uStack_42,param_4[1],param_4 + 4,0,dVar3,0);
  if ((((int)plVar2 != 0) && ((ulong)ABS(param_4[4]) < 0x7ff0000000000000)) &&
     (*(undefined1 *)(param_4 + 5) = 1, param_3 != 0)) {
    dVar3 = param_4[7];
    if (dVar3 == 0.0) {
      dVar10 = 0.0;
    }
    else {
      pdVar4 = (double *)param_2[3];
      pdVar1 = (double *)param_4[6];
      dVar12 = (double)((long)dVar3 + 3);
      if (-1 < (long)dVar3) {
        dVar12 = dVar3;
      }
      if ((long)dVar3 + 1U < 3) {
        dVar10 = *pdVar4 * *pdVar1;
      }
      else {
        uVar7 = (long)dVar3 - ((long)dVar3 >> 0x3f) & 0xfffffffffffffffe;
        dVar10 = *pdVar4 * *pdVar1;
        dVar11 = pdVar4[1] * pdVar1[1];
        if (3 < (long)dVar3) {
          uVar8 = (ulong)dVar12 & 0xfffffffffffffffc;
          dVar12 = pdVar4[2] * pdVar1[2];
          dVar13 = pdVar4[3] * pdVar1[3];
          if (7 < (ulong)dVar3) {
            pdVar5 = pdVar1 + 6;
            pdVar6 = pdVar4 + 6;
            lVar9 = 4;
            do {
              dVar10 = dVar10 + pdVar6[-2] * pdVar5[-2];
              dVar11 = dVar11 + pdVar6[-1] * pdVar5[-1];
              dVar12 = dVar12 + *pdVar6 * *pdVar5;
              dVar13 = dVar13 + pdVar6[1] * pdVar5[1];
              lVar9 = lVar9 + 4;
              pdVar5 = pdVar5 + 4;
              pdVar6 = pdVar6 + 4;
            } while (lVar9 < (long)uVar8);
          }
          dVar10 = dVar12 + dVar10;
          dVar11 = dVar13 + dVar11;
          if ((long)uVar8 < (long)uVar7) {
            dVar10 = dVar10 + pdVar4[uVar8] * pdVar1[uVar8];
            dVar11 = dVar11 + (pdVar4 + uVar8)[1] * (pdVar1 + uVar8)[1];
          }
        }
        dVar10 = dVar10 + dVar11;
        lVar9 = (long)dVar3 % 2;
        if (lVar9 != 0 && lVar9 < 0 == SBORROW8((long)dVar3,uVar7)) {
          pdVar4 = pdVar4 + ((long)dVar3 / 2) * 2;
          pdVar1 = pdVar1 + ((long)dVar3 / 2) * 2;
          do {
            dVar10 = dVar10 + *pdVar4 * *pdVar1;
            lVar9 = lVar9 + -1;
            pdVar4 = pdVar4 + 1;
            pdVar1 = pdVar1 + 1;
          } while (lVar9 != 0);
        }
      }
    }
    param_4[9] = dVar10;
    if ((ulong)ABS(dVar10) < 0x7ff0000000000000) {
      *(undefined1 *)(param_4 + 10) = 1;
      *(undefined1 *)(param_4 + 8) = 1;
    }
  }
  return;
}



/* Entry: 109958624; end: 10995885f;  */

void FUN_109958624(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  undefined1 uStack_6d;
  undefined1 uStack_69;
  undefined1 auStack_68 [8];
  undefined8 ***apppuStack_60 [2];
  int iVar3;
  
  iVar2 = (int)&uStack_80;
  iVar3 = (int)&uStack_80;
  (**(code **)(*(long *)*param_1 + 0x40))(auStack_68);
  uStack_69 = 0x13;
  uStack_78 = 0x697365523a3a72;
  uStack_71 = 0x6c617564;
  uStack_80 = 0x6f7461756c617645;
  uStack_6d = 0;
  if ((undefined8 ****)apppuStack_60[0] == (undefined8 ****)0x0) {
    pppuVar5 = (undefined8 ***)0x0;
    param_1[7] = 0;
    goto LAB_109958834;
  }
  ppppuVar6 = apppuStack_60;
  ppppuVar4 = (undefined8 ****)apppuStack_60[0];
  do {
    ppppuVar7 = ppppuVar4;
    pppuVar5 = ppppuVar7[5];
    ppppuVar4 = (undefined8 ****)ppppuVar7[4];
    if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x37)) {
      pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x37);
      ppppuVar4 = ppppuVar7 + 4;
    }
    pppuVar1 = pppuVar5;
    if ((undefined8 ***)0x12 < pppuVar5) {
      pppuVar1 = (undefined8 ***)0x13;
    }
    _memcmp(ppppuVar4,&uStack_80,pppuVar1);
    ppppuVar8 = ppppuVar7;
    if ((int)ppppuVar4 == 0) {
      if (pppuVar5 < (undefined8 ***)0x13) goto LAB_1099586e8;
    }
    else if ((int)ppppuVar4 < 0) {
LAB_1099586e8:
      ppppuVar8 = ppppuVar7 + 1;
      ppppuVar7 = ppppuVar6;
    }
    ppppuVar6 = ppppuVar7;
    ppppuVar4 = (undefined8 ****)*ppppuVar8;
  } while ((undefined8 ****)*ppppuVar8 != (undefined8 ****)0x0);
  if (ppppuVar7 == apppuStack_60) {
LAB_109958754:
    pppuVar5 = (undefined8 ***)0x0;
  }
  else {
    pppuVar5 = ppppuVar7[5];
    ppppuVar6 = (undefined8 ****)ppppuVar7[4];
    if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x37)) {
      pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x37);
      ppppuVar6 = ppppuVar7 + 4;
    }
    pppuVar1 = pppuVar5;
    if ((undefined8 ***)0x12 < pppuVar5) {
      pppuVar1 = (undefined8 ***)0x13;
    }
    _memcmp(&uStack_80,ppppuVar6,pppuVar1);
    if (iVar2 == 0) {
      if ((undefined8 ***)0x13 < pppuVar5) goto LAB_109958754;
    }
    else if (iVar2 < 0) goto LAB_109958754;
    pppuVar5 = ppppuVar7[7];
  }
  param_1[7] = pppuVar5;
  uStack_69 = 0x13;
  uStack_78 = 0x6f63614a3a3a72;
  uStack_71 = 0x6e616962;
  uStack_80 = 0x6f7461756c617645;
  uStack_6d = 0;
  ppppuVar6 = apppuStack_60;
  ppppuVar4 = (undefined8 ****)apppuStack_60[0];
  do {
    ppppuVar7 = ppppuVar4;
    pppuVar5 = ppppuVar7[5];
    ppppuVar4 = (undefined8 ****)ppppuVar7[4];
    if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x37)) {
      pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x37);
      ppppuVar4 = ppppuVar7 + 4;
    }
    pppuVar1 = pppuVar5;
    if ((undefined8 ***)0x12 < pppuVar5) {
      pppuVar1 = (undefined8 ***)0x13;
    }
    _memcmp(ppppuVar4,&uStack_80,pppuVar1);
    ppppuVar8 = ppppuVar7;
    if ((int)ppppuVar4 == 0) {
      if (pppuVar5 < (undefined8 ***)0x13) goto LAB_1099587d0;
    }
    else if ((int)ppppuVar4 < 0) {
LAB_1099587d0:
      ppppuVar8 = ppppuVar7 + 1;
      ppppuVar7 = ppppuVar6;
    }
    ppppuVar6 = ppppuVar7;
    ppppuVar4 = (undefined8 ****)*ppppuVar8;
  } while ((undefined8 ****)*ppppuVar8 != (undefined8 ****)0x0);
  if (ppppuVar7 == apppuStack_60) {
LAB_109958830:
    pppuVar5 = (undefined8 ***)0x0;
  }
  else {
    pppuVar5 = ppppuVar7[5];
    ppppuVar6 = (undefined8 ****)ppppuVar7[4];
    if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x37)) {
      pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x37);
      ppppuVar6 = ppppuVar7 + 4;
    }
    pppuVar1 = pppuVar5;
    if ((undefined8 ***)0x12 < pppuVar5) {
      pppuVar1 = (undefined8 ***)0x13;
    }
    _memcmp(&uStack_80,ppppuVar6,pppuVar1);
    if (iVar3 == 0) {
      if ((undefined8 ***)0x13 < pppuVar5) goto LAB_109958830;
    }
    else if (iVar3 < 0) goto LAB_109958830;
    pppuVar5 = ppppuVar7[7];
  }
LAB_109958834:
  param_1[8] = pppuVar5;
  FUN_1099215c8(auStack_68,apppuStack_60[0]);
  return;
}



/* Entry: 109958860; end: 109958ac3;  */

void FUN_109958860(undefined8 *param_1,double *param_2,double *param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined4 uStack_91;
  undefined1 uStack_8d;
  undefined1 uStack_89;
  undefined1 auStack_88 [8];
  undefined8 ***apppuStack_80 [2];
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  (**(code **)(*(long *)*param_1 + 0x40))(auStack_88);
  uStack_89 = 0x13;
  uStack_98 = 0x697365523a3a72;
  uStack_91 = 0x6c617564;
  uStack_a0 = 0x6f7461756c617645;
  uStack_8d = 0;
  pppuVar9 = (undefined8 ***)0x0;
  pppuVar8 = (undefined8 ***)0x0;
  ppppuVar5 = apppuStack_80;
  ppppuVar4 = (undefined8 ****)apppuStack_80[0];
  if ((undefined8 ****)apppuStack_80[0] != (undefined8 ****)0x0) {
    do {
      ppppuVar6 = ppppuVar4;
      pppuVar8 = ppppuVar6[5];
      ppppuVar4 = (undefined8 ****)ppppuVar6[4];
      if (-1 < (char)*(byte *)((long)ppppuVar6 + 0x37)) {
        pppuVar8 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar6 + 0x37);
        ppppuVar4 = ppppuVar6 + 4;
      }
      pppuVar1 = pppuVar8;
      if ((undefined8 ***)0x12 < pppuVar8) {
        pppuVar1 = (undefined8 ***)0x13;
      }
      _memcmp(ppppuVar4,&uStack_a0,pppuVar1);
      ppppuVar7 = ppppuVar6;
      if ((int)ppppuVar4 == 0) {
        if (pppuVar8 < (undefined8 ***)0x13) goto LAB_109958938;
      }
      else if ((int)ppppuVar4 < 0) {
LAB_109958938:
        ppppuVar7 = ppppuVar6 + 1;
        ppppuVar6 = ppppuVar5;
      }
      ppppuVar5 = ppppuVar6;
      ppppuVar4 = (undefined8 ****)*ppppuVar7;
    } while ((undefined8 ****)*ppppuVar7 != (undefined8 ****)0x0);
    pppuVar8 = (undefined8 ***)0x0;
    if (ppppuVar6 != apppuStack_80) {
      pppuVar1 = ppppuVar6[5];
      ppppuVar5 = (undefined8 ****)ppppuVar6[4];
      if (-1 < (char)*(byte *)((long)ppppuVar6 + 0x37)) {
        pppuVar1 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar6 + 0x37);
        ppppuVar5 = ppppuVar6 + 4;
      }
      pppuVar8 = pppuVar1;
      if ((undefined8 ***)0x12 < pppuVar1) {
        pppuVar8 = (undefined8 ***)0x13;
      }
      _memcmp(&uStack_a0,ppppuVar5,pppuVar8);
      pppuVar8 = (undefined8 ***)0x0;
      if (iVar2 == 0) {
        if (pppuVar1 < (undefined8 ***)0x14) goto LAB_109958990;
      }
      else if (-1 < iVar2) {
LAB_109958990:
        pppuVar8 = ppppuVar6[7];
      }
    }
  }
  *param_2 = (double)pppuVar8 - (double)param_1[7];
  uStack_89 = 0x13;
  uStack_98 = 0x6f63614a3a3a72;
  uStack_91 = 0x6e616962;
  uStack_a0 = 0x6f7461756c617645;
  uStack_8d = 0;
  ppppuVar5 = apppuStack_80;
  ppppuVar4 = (undefined8 ****)apppuStack_80[0];
  if ((undefined8 ****)apppuStack_80[0] != (undefined8 ****)0x0) {
    do {
      ppppuVar6 = ppppuVar4;
      pppuVar8 = ppppuVar6[5];
      ppppuVar4 = (undefined8 ****)ppppuVar6[4];
      if (-1 < (char)*(byte *)((long)ppppuVar6 + 0x37)) {
        pppuVar8 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar6 + 0x37);
        ppppuVar4 = ppppuVar6 + 4;
      }
      pppuVar1 = pppuVar8;
      if ((undefined8 ***)0x12 < pppuVar8) {
        pppuVar1 = (undefined8 ***)0x13;
      }
      _memcmp(ppppuVar4,&uStack_a0,pppuVar1);
      ppppuVar7 = ppppuVar6;
      if ((int)ppppuVar4 == 0) {
        if (pppuVar8 < (undefined8 ***)0x13) goto LAB_109958a1c;
      }
      else if ((int)ppppuVar4 < 0) {
LAB_109958a1c:
        ppppuVar7 = ppppuVar6 + 1;
        ppppuVar6 = ppppuVar5;
      }
      ppppuVar5 = ppppuVar6;
      ppppuVar4 = (undefined8 ****)*ppppuVar7;
    } while ((undefined8 ****)*ppppuVar7 != (undefined8 ****)0x0);
    if (ppppuVar6 != apppuStack_80) {
      pppuVar8 = ppppuVar6[5];
      ppppuVar5 = (undefined8 ****)ppppuVar6[4];
      if (-1 < (char)*(byte *)((long)ppppuVar6 + 0x37)) {
        pppuVar8 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar6 + 0x37);
        ppppuVar5 = ppppuVar6 + 4;
      }
      pppuVar1 = pppuVar8;
      if ((undefined8 ***)0x12 < pppuVar8) {
        pppuVar1 = (undefined8 ***)0x13;
      }
      _memcmp(&uStack_a0,ppppuVar5,pppuVar1);
      if (iVar3 == 0) {
        if ((undefined8 ***)0x13 < pppuVar8) goto LAB_109958a70;
      }
      else if (iVar3 < 0) goto LAB_109958a70;
      pppuVar9 = ppppuVar6[7];
    }
  }
LAB_109958a70:
  *param_3 = (double)pppuVar9 - (double)param_1[8];
  FUN_1099215c8(auStack_88,apppuStack_80[0]);
  return;
}



/* Entry: 109958ac4; end: 109958cbb;  */

/* WARNING: Type propagation algorithm not settling */

double *******
FUN_109958ac4(undefined8 param_1,double ******param_2,undefined8 param_3,long *param_4,
             undefined1 *param_5,undefined8 param_6,double *param_7)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  double *******pppppppdVar6;
  double *******pppppppdVar7;
  double *******pppppppdVar8;
  double *******pppppppdVar9;
  undefined *puVar10;
  undefined *puVar11;
  double *******pppppppdVar12;
  double *******pppppppdVar13;
  long lVar14;
  double *****pppppdVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  double ******ppppppdVar20;
  undefined8 uVar21;
  long lVar22;
  double *******pppppppdVar23;
  double *******pppppppdVar24;
  double dVar25;
  double dVar26;
  double ******ppppppdVar27;
  double ******ppppppdVar28;
  undefined8 uStack_1c8;
  double *******pppppppdStack_1c0;
  double *******pppppppdStack_1b8;
  double *******pppppppdStack_1b0;
  double *******pppppppdStack_1a8;
  double *******pppppppdStack_1a0;
  double *******pppppppdStack_198;
  double *******pppppppdStack_190;
  double *******pppppppdStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  double ******ppppppdStack_148;
  double ******ppppppdStack_140;
  undefined8 uStack_138;
  double ******ppppppdStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  pppppppdVar9 = &ppppppdStack_e0;
  pppppppdVar7 = &ppppppdStack_e0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppdVar27 = param_2;
  _gettimeofday(&ppppppdStack_e0,0);
  ppppppdVar28 = ppppppdStack_e0;
  if (param_5 == (undefined1 *)0x0) {
    ppppppdStack_e0 = (double ******)0x0;
    uStack_88 = 0;
    dVar25 = 0.0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    param_7 = (double *)0x3;
    FUN_1099a9f0c(&ppppppdStack_e0,&UNK_10f58c97f,0xc2,3,FUN_1099aa768,0);
    puVar11 = &UNK_10f58ca03;
    puVar19 = (undefined8 *)0x21;
    FUN_1092b4db8(lStack_d8 + 0x7540);
  }
  else {
    iVar2 = (int)lStack_d8;
    lStack_d8 = 0;
    ppppppdStack_e0 = (double ******)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    *param_5 = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    uVar18 = *(undefined8 *)(param_5 + 0x10);
    param_5[0x30] = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    uVar21 = *(undefined8 *)(param_5 + 0x38);
    *(undefined8 *)(param_5 + 0x50) = 0;
    *(undefined8 *)(param_5 + 0x48) = 0;
    param_5[0x58] = 0;
    *(undefined8 *)(param_5 + 0x40) = 0;
    *(undefined8 *)(param_5 + 0x38) = 0;
    *(undefined8 *)(param_5 + 0x68) = 0;
    *(undefined8 *)(param_5 + 0x60) = 0;
    *(undefined8 *)(param_5 + 0x78) = 0;
    *(undefined8 *)(param_5 + 0x70) = 0;
    *(undefined8 *)(param_5 + 0x88) = 0;
    *(undefined8 *)(param_5 + 0x80) = 0;
    if ((char)param_5[0xa7] < '\0') {
      __ZdlPv(*(undefined8 *)(param_5 + 0x90));
    }
    *(undefined8 *)(param_5 + 0x90) = 0;
    *(undefined8 *)(param_5 + 0x98) = 0;
    *(undefined8 *)(param_5 + 0xa0) = 0;
    _free(uVar21);
    _free(uVar18);
    *(undefined8 *)(param_5 + 0x80) = 0;
    puVar19 = (undefined8 *)(param_5 + 0x78);
    *puVar19 = 0;
    *(undefined8 *)(param_5 + 0x70) = 0;
    FUN_109958624(param_4[10]);
    (**(code **)(*param_4 + 0x10))(param_1,param_2,param_3,param_4,param_5);
    FUN_109958860(param_4[10],param_5 + 0x70);
    puVar11 = (undefined *)0x0;
    _gettimeofday(&ppppppdStack_e0);
    ppppppdVar27 = (double ******)(double)(int)lStack_d8;
    dVar25 = ((double)(long)ppppppdStack_e0 + (double)ppppppdVar27 * 1e-06) -
             ((double)(long)ppppppdVar28 + (double)iVar2 * 1e-06);
    *(double *)(param_5 + 0x88) = dVar25;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return pppppppdVar9;
    }
    ___stack_chk_fail();
  }
  func_0x0001099ab7c0();
  __Unwind_Resume();
  dVar26 = *param_7;
  if (*(char *)(param_7 + 5) != '\x01') {
    return pppppppdVar7;
  }
  bVar4 = true;
  bVar5 = false;
  if (*(uint *)pppppppdVar7 == 0) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(dVar26) && !NAN((double)ppppppdVar27)) {
      bVar4 = dVar26 < (double)ppppppdVar27;
      bVar5 = false;
    }
  }
  if (bVar4 == bVar5) {
    return pppppppdVar7;
  }
  ppppppdStack_148 = ppppppdVar27;
  ppppppdStack_140 = param_2;
  uStack_138 = param_3;
  if (*(uint *)pppppppdVar7 == 0) {
    if (dVar26 < (double)ppppppdVar27) {
      return pppppppdVar7;
    }
    pppppppdVar7 = &ppppppdStack_148;
    FUN_10991e5b0(pppppppdVar7,param_7,&UNK_10f58ca25);
    if (pppppppdVar7 == (double *******)0x0) {
      return (double *******)0x0;
    }
    pppppppdStack_1c0 = pppppppdVar7;
    FUN_1099ab8e4(&pppppppdStack_1a8,&UNK_10f58c97f,0xe1,&pppppppdStack_1c0);
LAB_109959804:
    pppppppdVar7 = (double *******)&pppppppdStack_1a8;
    func_0x0001099ab7c0();
    ppppppdVar28 = *pppppppdVar7;
    if (ppppppdVar28 != (double ******)0x0) {
      ppppppdVar27 = ppppppdVar28;
      ppppppdVar20 = pppppppdVar7[1];
      if (pppppppdVar7[1] != ppppppdVar28) {
        do {
          ppppppdVar27 = ppppppdVar20 + -0xb;
          _free(ppppppdVar20[-5]);
          _free(ppppppdVar20[-10]);
          ppppppdVar20 = ppppppdVar27;
        } while (ppppppdVar27 != ppppppdVar28);
        ppppppdVar27 = *pppppppdVar7;
      }
      pppppppdVar7[1] = ppppppdVar28;
      __ZdlPv(ppppppdVar27);
    }
    return pppppppdVar7;
  }
  if ((puVar11[0x28] & 1) == 0) {
    pppppppdStack_1a8 = (double *******)0x0;
    uStack_150 = 0;
    pppppppdStack_190 = (double *******)0x0;
    pppppppdStack_198 = (double *******)0x0;
    uStack_180 = 0;
    pppppppdStack_188 = (double *******)0x0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_158 = 0;
    FUN_1099a9f0c(&pppppppdStack_1a8,&UNK_10f58c97f,0xec,3,FUN_1099aa768,0);
    pppppppdVar9 = pppppppdStack_1a0 + 0xea8;
    FUN_1092b4db8(pppppppdVar9,&UNK_10f58ca3f,0x28);
    ppppppdVar28 = *pppppppdVar9;
    pppppdVar15 = ppppppdVar28[-3];
    *(uint *)((long)pppppppdVar9 + (long)(pppppdVar15 + 1)) =
         *(uint *)((long)pppppppdVar9 + (long)(pppppdVar15 + 1)) & 0xfffffffb | 0x100;
    *(undefined8 *)((long)pppppppdVar9 + (long)(ppppppdVar28[-3] + 2)) = 8;
    FUN_1092b4db8();
    FUN_1092b4db8();
    if (*(uint *)pppppppdVar7 < 3) {
      puVar11 = (&PTR_DAT_110b1e5a0)[*(uint *)pppppppdVar7];
    }
    else {
      puVar11 = &UNK_10f5931ae;
    }
    puVar10 = puVar11;
    _strlen(puVar11);
    FUN_1092b4db8(pppppppdVar9,puVar11,puVar10);
    FUN_1092b4db8();
    FUN_109957bb0();
    FUN_1092b4db8();
    FUN_109957bb0();
    FUN_1092b4db8();
    FUN_109957bb0();
    goto LAB_109959804;
  }
  pppppppdStack_1c0 = (double *******)0x0;
  pppppppdStack_1b8 = (double *******)0x0;
  pppppppdStack_1b0 = (double *******)0x0;
  pppppppdStack_188 = (double *******)&pppppppdStack_1c0;
  pppppppdVar6 = (double *******)0x58;
  __Znwm();
  pppppppdVar9 = pppppppdVar6 + 0xb;
  pppppppdStack_1a8 = pppppppdVar6;
  pppppppdStack_1a0 = pppppppdVar6;
  pppppppdStack_198 = pppppppdVar6;
  pppppppdStack_190 = pppppppdVar9;
  FUN_10995c240();
  pppppppdVar12 = pppppppdStack_1b8;
  pppppppdVar24 =
       (double *******)((long)pppppppdVar6 + ((long)pppppppdStack_1c0 - (long)pppppppdStack_1b8));
  pppppppdVar8 = pppppppdStack_1c0;
  pppppppdVar13 = pppppppdVar24;
  if (pppppppdStack_1b8 != pppppppdStack_1c0) {
    do {
      *pppppppdVar13 = *pppppppdVar8;
      pppppppdVar13[1] = pppppppdVar8[1];
      pppppppdVar13[2] = pppppppdVar8[2];
      pppppppdVar8[1] = (double ******)0x0;
      pppppppdVar8[2] = (double ******)0x0;
      ppppppdVar27 = pppppppdVar8[4];
      ppppppdVar28 = pppppppdVar8[3];
      *(undefined1 *)(pppppppdVar13 + 5) = *(undefined1 *)(pppppppdVar8 + 5);
      pppppppdVar13[4] = ppppppdVar27;
      pppppppdVar13[3] = ppppppdVar28;
      pppppppdVar13[6] = pppppppdVar8[6];
      pppppppdVar13[7] = pppppppdVar8[7];
      pppppppdVar8[6] = (double ******)0x0;
      pppppppdVar8[7] = (double ******)0x0;
      ppppppdVar27 = pppppppdVar8[9];
      ppppppdVar28 = pppppppdVar8[8];
      *(undefined1 *)(pppppppdVar13 + 10) = *(undefined1 *)(pppppppdVar8 + 10);
      pppppppdVar13[9] = ppppppdVar27;
      pppppppdVar13[8] = ppppppdVar28;
      pppppppdVar8 = pppppppdVar8 + 0xb;
      pppppppdVar13 = pppppppdVar13 + 0xb;
      pppppppdVar23 = pppppppdStack_1c0;
    } while (pppppppdVar8 != pppppppdStack_1b8);
    do {
      _free(pppppppdVar23[6]);
      _free(pppppppdVar23[1]);
      pppppppdVar23 = pppppppdVar23 + 0xb;
    } while (pppppppdVar23 != pppppppdVar12);
  }
  pppppppdStack_1b0 = pppppppdVar9;
  if (pppppppdStack_1c0 != (double *******)0x0) {
    ppppppdVar28 = (double ******)pppppppdStack_1c0;
    pppppppdStack_1c0 = pppppppdVar24;
    pppppppdStack_1b8 = pppppppdVar9;
    __ZdlPv(ppppppdVar28);
    pppppppdVar24 = pppppppdStack_1c0;
  }
  pppppppdStack_1c0 = pppppppdVar24;
  pppppppdVar8 = pppppppdStack_1c0;
  if (*(uint *)pppppppdVar7 != 2) {
    if (*(uint *)pppppppdVar7 != 1) {
      pppppppdStack_1a8 = (double *******)0x0;
      uStack_150 = 0;
      pppppppdStack_190 = (double *******)0x0;
      pppppppdStack_198 = (double *******)0x0;
      uStack_180 = 0;
      pppppppdStack_188 = (double *******)0x0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      pppppppdStack_1b8 = pppppppdVar9;
      FUN_1099a9f0c(&pppppppdStack_1a8,&UNK_10f58c97f,0x10d,3,FUN_1099aa768,0);
      pppppppdVar9 = pppppppdStack_1a0 + 0xea8;
      FUN_1092b4db8(pppppppdVar9,&UNK_10f58cb02,0x2e);
      if (*(uint *)pppppppdVar7 < 3) {
        puVar11 = (&PTR_DAT_110b1e5a0)[*(uint *)pppppppdVar7];
      }
      else {
        puVar11 = &UNK_10f5931ae;
      }
      puVar10 = puVar11;
      _strlen(puVar11);
      FUN_1092b4db8(pppppppdVar9,puVar11,puVar10);
      FUN_109365950();
      goto LAB_109959804;
    }
    if (pppppppdVar9 < pppppppdStack_1b0) {
      ppppppdVar28 = (double ******)param_7[4];
      pppppppdVar6[0xb] = (double ******)*param_7;
      pppppppdVar6[0xc] = (double ******)0x0;
      pppppppdVar6[0xd] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar6 + 0xe) = 0;
      pppppppdVar6[0xf] = ppppppdVar28;
      *(undefined1 *)(pppppppdVar6 + 0x10) = 1;
      pppppppdVar6[0x14] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar6 + 0x15) = 0;
      pppppppdVar6[0x11] = (double ******)0x0;
      pppppppdVar6[0x12] = (double ******)0x0;
      pppppppdVar24 = pppppppdVar6 + 0x16;
      *(undefined1 *)(pppppppdVar6 + 0x13) = 0;
    }
    else {
      lVar22 = (long)pppppppdVar9 - (long)pppppppdStack_1c0;
      uVar16 = (lVar22 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
      pppppppdStack_1b8 = pppppppdVar9;
      if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_1099596d8;
      lVar14 = (long)pppppppdStack_1b0 - (long)pppppppdStack_1c0 >> 3;
      uVar17 = lVar14 * 0x5d1745d1745d1746;
      if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
        uVar17 = uVar16;
      }
      if (0x1745d1745d1745c < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3)) {
        uVar17 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar17 == 0) {
        pppppppdVar7 = (double *******)0x0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar17) goto LAB_109959760;
        pppppppdVar7 = (double *******)(uVar17 * 0x58);
        __Znwm();
      }
      pdVar1 = (double *)((long)pppppppdVar7 + lVar22);
      dVar26 = param_7[4];
      *pdVar1 = *param_7;
      pdVar1[1] = 0.0;
      pdVar1[2] = 0.0;
      *(undefined1 *)(pdVar1 + 3) = 0;
      pdVar1[4] = dVar26;
      *(undefined1 *)(pdVar1 + 5) = 1;
      pdVar1[9] = 0.0;
      *(undefined1 *)(pdVar1 + 10) = 0;
      pdVar1[6] = 0.0;
      pdVar1[7] = 0.0;
      pppppppdVar24 = (double *******)(pdVar1 + 0xb);
      *(undefined1 *)(pdVar1 + 8) = 0;
      pppppppdVar12 = pppppppdVar8;
      pppppppdVar13 = pppppppdVar7;
      if (pppppppdVar8 != pppppppdVar9) {
        do {
          *pppppppdVar13 = *pppppppdVar12;
          pppppppdVar13[1] = pppppppdVar12[1];
          pppppppdVar13[2] = pppppppdVar12[2];
          pppppppdVar12[1] = (double ******)0x0;
          pppppppdVar12[2] = (double ******)0x0;
          ppppppdVar27 = pppppppdVar12[4];
          ppppppdVar28 = pppppppdVar12[3];
          *(undefined1 *)(pppppppdVar13 + 5) = *(undefined1 *)(pppppppdVar12 + 5);
          pppppppdVar13[4] = ppppppdVar27;
          pppppppdVar13[3] = ppppppdVar28;
          pppppppdVar13[6] = pppppppdVar12[6];
          pppppppdVar13[7] = pppppppdVar12[7];
          pppppppdVar12[6] = (double ******)0x0;
          pppppppdVar12[7] = (double ******)0x0;
          ppppppdVar27 = pppppppdVar12[9];
          ppppppdVar28 = pppppppdVar12[8];
          *(undefined1 *)(pppppppdVar13 + 10) = *(undefined1 *)(pppppppdVar12 + 10);
          pppppppdVar13[9] = ppppppdVar27;
          pppppppdVar13[8] = ppppppdVar28;
          bVar4 = pppppppdVar12 != pppppppdVar6;
          pppppppdVar12 = pppppppdVar12 + 0xb;
          pppppppdVar13 = pppppppdVar13 + 0xb;
        } while (bVar4);
        pppppppdVar9 = pppppppdVar8 + -0xb;
        do {
          _free(pppppppdVar9[0x11]);
          _free(pppppppdVar9[0xc]);
          pppppppdVar9 = pppppppdVar9 + 0xb;
          pppppppdVar8 = pppppppdStack_1c0;
        } while (pppppppdVar9 != pppppppdVar6);
      }
      pppppppdStack_1c0 = pppppppdVar7;
      pppppppdStack_1b0 = pppppppdVar7 + uVar17 * 0xb;
      if (pppppppdVar8 != (double *******)0x0) {
        pppppppdStack_1b8 = pppppppdVar24;
        __ZdlPv(pppppppdVar8);
      }
    }
    pppppppdVar7 = pppppppdStack_1c0;
    pppppppdStack_1b8 = pppppppdVar24;
    if (*(char *)(puVar19 + 5) != '\x01') goto LAB_109959534;
    if (pppppppdVar24 < pppppppdStack_1b0) {
      ppppppdVar28 = (double ******)puVar19[4];
      *pppppppdVar24 = (double ******)*puVar19;
      pppppppdVar24[1] = (double ******)0x0;
      pppppppdVar24[2] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar24 + 3) = 0;
      pppppppdVar24[4] = ppppppdVar28;
      *(undefined1 *)(pppppppdVar24 + 5) = 1;
      pppppppdVar24[9] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar24 + 10) = 0;
      pppppppdVar24[6] = (double ******)0x0;
      pppppppdVar24[7] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar24 + 8) = 0;
      pppppppdStack_1b8 = pppppppdVar24 + 0xb;
      goto LAB_109959534;
    }
    lVar22 = (long)pppppppdVar24 - (long)pppppppdStack_1c0;
    uVar16 = (lVar22 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_1099596d8;
    lVar14 = (long)pppppppdStack_1b0 - (long)pppppppdStack_1c0 >> 3;
    uVar17 = lVar14 * 0x5d1745d1745d1746;
    if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
      uVar17 = uVar16;
    }
    if (0x1745d1745d1745c < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3)) {
      uVar17 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar17 == 0) {
      pppppppdVar9 = (double *******)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar17) goto LAB_109959760;
      pppppppdVar9 = (double *******)(uVar17 * 0x58);
      __Znwm();
    }
    pppppppdVar6 = (double *******)((long)pppppppdVar9 + lVar22);
    uVar18 = puVar19[4];
    *pppppppdVar6 = (double ******)*puVar19;
    pppppppdVar6[1] = (double ******)0x0;
    pppppppdVar6[2] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 3) = 0;
    pppppppdVar6[4] = (double ******)uVar18;
    *(undefined1 *)(pppppppdVar6 + 5) = 1;
    pppppppdVar6[9] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 10) = 0;
    pppppppdVar6[6] = (double ******)0x0;
    pppppppdVar6[7] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 8) = 0;
    pppppppdVar8 = pppppppdVar7;
    pppppppdVar12 = pppppppdVar9;
    pppppppdVar13 = pppppppdVar9 + uVar17 * 0xb;
    if (pppppppdVar7 != pppppppdVar24) {
      do {
        *pppppppdVar12 = *pppppppdVar8;
        pppppppdVar12[1] = pppppppdVar8[1];
        pppppppdVar12[2] = pppppppdVar8[2];
        pppppppdVar8[1] = (double ******)0x0;
        pppppppdVar8[2] = (double ******)0x0;
        ppppppdVar27 = pppppppdVar8[4];
        ppppppdVar28 = pppppppdVar8[3];
        *(undefined1 *)(pppppppdVar12 + 5) = *(undefined1 *)(pppppppdVar8 + 5);
        pppppppdVar12[4] = ppppppdVar27;
        pppppppdVar12[3] = ppppppdVar28;
        pppppppdVar12[6] = pppppppdVar8[6];
        pppppppdVar12[7] = pppppppdVar8[7];
        pppppppdVar8[6] = (double ******)0x0;
        pppppppdVar8[7] = (double ******)0x0;
        ppppppdVar27 = pppppppdVar8[9];
        ppppppdVar28 = pppppppdVar8[8];
        *(undefined1 *)(pppppppdVar12 + 10) = *(undefined1 *)(pppppppdVar8 + 10);
        pppppppdVar12[9] = ppppppdVar27;
        pppppppdVar12[8] = ppppppdVar28;
        pppppppdVar8 = pppppppdVar8 + 0xb;
        pppppppdVar12 = pppppppdVar12 + 0xb;
      } while (pppppppdVar8 != pppppppdVar24);
      do {
        _free(pppppppdVar7[6]);
        _free(pppppppdVar7[1]);
        pppppppdVar7 = pppppppdVar7 + 0xb;
        pppppppdVar8 = pppppppdStack_1c0;
      } while (pppppppdVar7 != pppppppdVar24);
    }
joined_r0x000109959524:
    pppppppdStack_1b0 = pppppppdVar13;
    pppppppdStack_1c0 = pppppppdVar9;
    uVar18 = (long)pppppppdVar6 + 0x58;
    pppppppdStack_1b8 = (double *******)uVar18;
    if (pppppppdVar8 != (double *******)0x0) {
      __ZdlPv(pppppppdVar8);
      pppppppdStack_1b8 = (double *******)uVar18;
    }
LAB_109959534:
    pppppppdStack_1a8 = (double *******)0x0;
    uStack_1c8 = 0;
    pppppppdVar7 = (double *******)&pppppppdStack_1c0;
    FUN_109970918(dVar25,ppppppdStack_148,pppppppdVar7,&pppppppdStack_1a8,&uStack_1c8);
    pppppppdVar8 = pppppppdStack_1c0;
    pppppppdVar9 = pppppppdStack_1b8;
    if (pppppppdStack_1c0 != (double *******)0x0) {
      for (; pppppppdVar7 = pppppppdStack_1c0, pppppppdStack_1c0 = pppppppdVar7,
          pppppppdVar9 != pppppppdVar8; pppppppdVar9 = pppppppdVar9 + -0xb) {
        _free(pppppppdVar9[-5]);
        _free(pppppppdVar9[-10]);
      }
      pppppppdStack_1b8 = pppppppdVar8;
      __ZdlPv(pppppppdVar7);
    }
    return pppppppdVar7;
  }
  if (pppppppdVar9 < pppppppdStack_1b0) {
    pppppppdStack_1b8 = pppppppdVar9;
    FUN_10995c240(pppppppdVar9,param_7);
    pppppppdVar6 = pppppppdVar6 + 0x16;
    pppppppdVar8 = pppppppdStack_1c0;
LAB_1099590e0:
    pppppppdStack_1c0 = pppppppdVar8;
    pppppppdStack_1b8 = pppppppdVar6;
    if (*(char *)(puVar19 + 5) != '\x01') goto LAB_109959534;
    if (pppppppdVar6 < pppppppdStack_1b0) {
      FUN_10995c240(pppppppdVar6,puVar19);
      pppppppdStack_1b8 = pppppppdVar6 + 0xb;
      goto LAB_109959534;
    }
    lVar22 = (long)pppppppdVar6 - (long)pppppppdStack_1c0;
    uVar16 = (lVar22 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar16 < 0x2e8ba2e8ba2e8bb) {
      lVar14 = (long)pppppppdStack_1b0 - (long)pppppppdStack_1c0 >> 3;
      uVar17 = lVar14 * 0x5d1745d1745d1746;
      if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
        uVar17 = uVar16;
      }
      if (0x1745d1745d1745c < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3)) {
        uVar17 = 0x2e8ba2e8ba2e8ba;
      }
      pppppppdStack_188 = (double *******)&pppppppdStack_1c0;
      if (uVar17 == 0) {
        pppppppdVar7 = (double *******)0x0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar17) goto LAB_109959760;
        pppppppdVar7 = (double *******)(uVar17 * 0x58);
        __Znwm();
      }
      pppppppdVar6 = (double *******)((long)pppppppdVar7 + lVar22);
      pppppppdStack_1a8 = pppppppdVar7;
      pppppppdStack_1a0 = pppppppdVar6;
      pppppppdStack_198 = pppppppdVar6;
      pppppppdStack_190 = pppppppdVar7 + uVar17 * 0xb;
      FUN_10995c240(pppppppdVar6,puVar19);
      pppppppdVar24 = pppppppdStack_1b8;
      pppppppdVar9 = (double *******)
                     ((long)pppppppdVar6 + ((long)pppppppdStack_1c0 - (long)pppppppdStack_1b8));
      pppppppdVar8 = pppppppdStack_1c0;
      pppppppdVar12 = pppppppdVar9;
      pppppppdVar13 = pppppppdVar7 + uVar17 * 0xb;
      if (pppppppdStack_1b8 != pppppppdStack_1c0) {
        do {
          *pppppppdVar12 = *pppppppdVar8;
          pppppppdVar12[1] = pppppppdVar8[1];
          pppppppdVar12[2] = pppppppdVar8[2];
          pppppppdVar8[1] = (double ******)0x0;
          pppppppdVar8[2] = (double ******)0x0;
          ppppppdVar27 = pppppppdVar8[4];
          ppppppdVar28 = pppppppdVar8[3];
          *(undefined1 *)(pppppppdVar12 + 5) = *(undefined1 *)(pppppppdVar8 + 5);
          pppppppdVar12[4] = ppppppdVar27;
          pppppppdVar12[3] = ppppppdVar28;
          pppppppdVar12[6] = pppppppdVar8[6];
          pppppppdVar12[7] = pppppppdVar8[7];
          pppppppdVar8[6] = (double ******)0x0;
          pppppppdVar8[7] = (double ******)0x0;
          ppppppdVar27 = pppppppdVar8[9];
          ppppppdVar28 = pppppppdVar8[8];
          *(undefined1 *)(pppppppdVar12 + 10) = *(undefined1 *)(pppppppdVar8 + 10);
          pppppppdVar12[9] = ppppppdVar27;
          pppppppdVar12[8] = ppppppdVar28;
          pppppppdVar8 = pppppppdVar8 + 0xb;
          pppppppdVar12 = pppppppdVar12 + 0xb;
          pppppppdVar7 = pppppppdStack_1c0;
        } while (pppppppdVar8 != pppppppdStack_1b8);
        do {
          _free(pppppppdVar7[6]);
          _free(pppppppdVar7[1]);
          pppppppdVar7 = pppppppdVar7 + 0xb;
          pppppppdVar8 = pppppppdStack_1c0;
          pppppppdVar13 = pppppppdStack_190;
        } while (pppppppdVar7 != pppppppdVar24);
      }
      goto joined_r0x000109959524;
    }
  }
  else {
    lVar22 = (long)pppppppdVar9 - (long)pppppppdStack_1c0;
    uVar16 = (lVar22 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    pppppppdStack_1b8 = pppppppdVar9;
    if (uVar16 < 0x2e8ba2e8ba2e8bb) {
      lVar14 = (long)pppppppdStack_1b0 - (long)pppppppdStack_1c0 >> 3;
      uVar17 = lVar14 * 0x5d1745d1745d1746;
      if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
        uVar17 = uVar16;
      }
      if (0x1745d1745d1745c < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3)) {
        uVar17 = 0x2e8ba2e8ba2e8ba;
      }
      pppppppdStack_188 = (double *******)&pppppppdStack_1c0;
      if (uVar17 == 0) {
        pppppppdVar7 = (double *******)0x0;
LAB_10995900c:
        pppppppdVar8 = (double *******)((long)pppppppdVar7 + lVar22);
        pppppppdStack_1a8 = pppppppdVar7;
        pppppppdStack_1a0 = pppppppdVar8;
        pppppppdStack_198 = pppppppdVar8;
        pppppppdStack_190 = pppppppdVar7 + uVar17 * 0xb;
        FUN_10995c240(pppppppdVar8,param_7);
        pppppppdVar24 = pppppppdStack_1b8;
        pppppppdVar6 = pppppppdVar8 + 0xb;
        pppppppdVar8 = (double *******)
                       ((long)pppppppdVar8 + ((long)pppppppdStack_1c0 - (long)pppppppdStack_1b8));
        pppppppdVar9 = pppppppdStack_1c0;
        pppppppdVar12 = pppppppdVar8;
        pppppppdVar7 = pppppppdVar7 + uVar17 * 0xb;
        if (pppppppdStack_1b8 != pppppppdStack_1c0) {
          do {
            *pppppppdVar12 = *pppppppdVar9;
            pppppppdVar12[1] = pppppppdVar9[1];
            pppppppdVar12[2] = pppppppdVar9[2];
            pppppppdVar9[1] = (double ******)0x0;
            pppppppdVar9[2] = (double ******)0x0;
            ppppppdVar27 = pppppppdVar9[4];
            ppppppdVar28 = pppppppdVar9[3];
            *(undefined1 *)(pppppppdVar12 + 5) = *(undefined1 *)(pppppppdVar9 + 5);
            pppppppdVar12[4] = ppppppdVar27;
            pppppppdVar12[3] = ppppppdVar28;
            pppppppdVar12[6] = pppppppdVar9[6];
            pppppppdVar12[7] = pppppppdVar9[7];
            pppppppdVar9[6] = (double ******)0x0;
            pppppppdVar9[7] = (double ******)0x0;
            ppppppdVar27 = pppppppdVar9[9];
            ppppppdVar28 = pppppppdVar9[8];
            *(undefined1 *)(pppppppdVar12 + 10) = *(undefined1 *)(pppppppdVar9 + 10);
            pppppppdVar12[9] = ppppppdVar27;
            pppppppdVar12[8] = ppppppdVar28;
            pppppppdVar9 = pppppppdVar9 + 0xb;
            pppppppdVar12 = pppppppdVar12 + 0xb;
            pppppppdVar13 = pppppppdStack_1c0;
          } while (pppppppdVar9 != pppppppdStack_1b8);
          do {
            _free(pppppppdVar13[6]);
            _free(pppppppdVar13[1]);
            pppppppdVar13 = pppppppdVar13 + 0xb;
            pppppppdVar7 = pppppppdStack_190;
          } while (pppppppdVar13 != pppppppdVar24);
        }
        pppppppdStack_1b0 = pppppppdVar7;
        if (pppppppdStack_1c0 != (double *******)0x0) {
          pppppppdVar7 = pppppppdStack_1c0;
          pppppppdStack_1c0 = pppppppdVar8;
          pppppppdStack_1b8 = pppppppdVar6;
          __ZdlPv(pppppppdVar7);
          pppppppdVar8 = pppppppdStack_1c0;
        }
        goto LAB_1099590e0;
      }
      if (uVar17 < 0x2e8ba2e8ba2e8bb) {
        pppppppdVar7 = (double *******)(uVar17 * 0x58);
        __Znwm();
        goto LAB_10995900c;
      }
LAB_109959760:
      func_0x000104c4f740();
      goto LAB_109959764;
    }
  }
LAB_1099596d8:
  FUN_10995c22c();
LAB_109959764:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109959768);
  (*pcVar3)();
}



/* Entry: 109958cbc; end: 10995980b;  */

/* WARNING: Type propagation algorithm not settling */

double *******
FUN_109958cbc(undefined8 param_1,double ******param_2,double *******param_3,long param_4,
             undefined8 *param_5,double *param_6)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  double *******pppppppdVar5;
  double *******pppppppdVar6;
  double *******pppppppdVar7;
  double *******pppppppdVar8;
  undefined *puVar9;
  double ******ppppppdVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  long lVar13;
  double *****pppppdVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  double ******ppppppdVar18;
  long lVar19;
  double *******pppppppdVar20;
  double dVar21;
  double ******ppppppdVar22;
  undefined8 uVar23;
  undefined8 uStack_e8;
  double *******pppppppdStack_e0;
  double *******pppppppdStack_d8;
  double *******pppppppdStack_d0;
  double *******pppppppdStack_c8;
  double *******pppppppdStack_c0;
  double *******pppppppdStack_b8;
  double *******pppppppdStack_b0;
  double *******pppppppdStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  double ******ppppppdStack_68;
  
  dVar21 = *param_6;
  if (*(char *)(param_6 + 5) != '\x01') {
    return param_3;
  }
  bVar3 = true;
  bVar4 = false;
  if (*(uint *)param_3 == 0) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(dVar21) && !NAN((double)param_2)) {
      bVar3 = dVar21 < (double)param_2;
      bVar4 = false;
    }
  }
  if (bVar3 == bVar4) {
    return param_3;
  }
  ppppppdStack_68 = param_2;
  if (*(uint *)param_3 == 0) {
    if (dVar21 < (double)param_2) {
      return param_3;
    }
    pppppppdVar7 = &ppppppdStack_68;
    FUN_10991e5b0(pppppppdVar7,param_6,&UNK_10f58ca25);
    if (pppppppdVar7 == (double *******)0x0) {
      return (double *******)0x0;
    }
    pppppppdStack_e0 = pppppppdVar7;
    FUN_1099ab8e4(&pppppppdStack_c8,&UNK_10f58c97f,0xe1,&pppppppdStack_e0);
LAB_109959804:
    pppppppdVar7 = (double *******)&pppppppdStack_c8;
    func_0x0001099ab7c0();
    ppppppdVar22 = *pppppppdVar7;
    if (ppppppdVar22 != (double ******)0x0) {
      ppppppdVar10 = ppppppdVar22;
      ppppppdVar18 = pppppppdVar7[1];
      if (pppppppdVar7[1] != ppppppdVar22) {
        do {
          ppppppdVar10 = ppppppdVar18 + -0xb;
          _free(ppppppdVar18[-5]);
          _free(ppppppdVar18[-10]);
          ppppppdVar18 = ppppppdVar10;
        } while (ppppppdVar10 != ppppppdVar22);
        ppppppdVar10 = *pppppppdVar7;
      }
      pppppppdVar7[1] = ppppppdVar22;
      __ZdlPv(ppppppdVar10);
    }
    return pppppppdVar7;
  }
  if ((*(byte *)(param_4 + 0x28) & 1) == 0) {
    pppppppdStack_c8 = (double *******)0x0;
    uStack_70 = 0;
    pppppppdStack_b0 = (double *******)0x0;
    pppppppdStack_b8 = (double *******)0x0;
    uStack_a0 = 0;
    pppppppdStack_a8 = (double *******)0x0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_1099a9f0c(&pppppppdStack_c8,&UNK_10f58c97f,0xec,3,FUN_1099aa768,0);
    pppppppdVar7 = pppppppdStack_c0 + 0xea8;
    FUN_1092b4db8(pppppppdVar7,&UNK_10f58ca3f,0x28);
    ppppppdVar22 = *pppppppdVar7;
    pppppdVar14 = ppppppdVar22[-3];
    *(uint *)((long)pppppppdVar7 + (long)(pppppdVar14 + 1)) =
         *(uint *)((long)pppppppdVar7 + (long)(pppppdVar14 + 1)) & 0xfffffffb | 0x100;
    *(undefined8 *)((long)pppppppdVar7 + (long)(ppppppdVar22[-3] + 2)) = 8;
    FUN_1092b4db8();
    FUN_1092b4db8();
    if (*(uint *)param_3 < 3) {
      puVar17 = (&PTR_DAT_110b1e5a0)[*(uint *)param_3];
    }
    else {
      puVar17 = &UNK_10f5931ae;
    }
    puVar9 = puVar17;
    _strlen(puVar17);
    FUN_1092b4db8(pppppppdVar7,puVar17,puVar9);
    FUN_1092b4db8();
    FUN_109957bb0();
    FUN_1092b4db8();
    FUN_109957bb0();
    FUN_1092b4db8();
    FUN_109957bb0();
    goto LAB_109959804;
  }
  pppppppdStack_e0 = (double *******)0x0;
  pppppppdStack_d8 = (double *******)0x0;
  pppppppdStack_d0 = (double *******)0x0;
  pppppppdStack_a8 = (double *******)&pppppppdStack_e0;
  pppppppdVar5 = (double *******)0x58;
  __Znwm();
  pppppppdVar7 = pppppppdVar5 + 0xb;
  pppppppdStack_c8 = pppppppdVar5;
  pppppppdStack_c0 = pppppppdVar5;
  pppppppdStack_b8 = pppppppdVar5;
  pppppppdStack_b0 = pppppppdVar7;
  FUN_10995c240();
  pppppppdVar20 = pppppppdStack_d8;
  pppppppdVar6 = (double *******)
                 ((long)pppppppdVar5 + ((long)pppppppdStack_e0 - (long)pppppppdStack_d8));
  pppppppdVar8 = pppppppdStack_e0;
  pppppppdVar11 = pppppppdVar6;
  if (pppppppdStack_d8 != pppppppdStack_e0) {
    do {
      *pppppppdVar11 = *pppppppdVar8;
      pppppppdVar11[1] = pppppppdVar8[1];
      pppppppdVar11[2] = pppppppdVar8[2];
      pppppppdVar8[1] = (double ******)0x0;
      pppppppdVar8[2] = (double ******)0x0;
      ppppppdVar10 = pppppppdVar8[4];
      ppppppdVar22 = pppppppdVar8[3];
      *(undefined1 *)(pppppppdVar11 + 5) = *(undefined1 *)(pppppppdVar8 + 5);
      pppppppdVar11[4] = ppppppdVar10;
      pppppppdVar11[3] = ppppppdVar22;
      pppppppdVar11[6] = pppppppdVar8[6];
      pppppppdVar11[7] = pppppppdVar8[7];
      pppppppdVar8[6] = (double ******)0x0;
      pppppppdVar8[7] = (double ******)0x0;
      ppppppdVar10 = pppppppdVar8[9];
      ppppppdVar22 = pppppppdVar8[8];
      *(undefined1 *)(pppppppdVar11 + 10) = *(undefined1 *)(pppppppdVar8 + 10);
      pppppppdVar11[9] = ppppppdVar10;
      pppppppdVar11[8] = ppppppdVar22;
      pppppppdVar8 = pppppppdVar8 + 0xb;
      pppppppdVar11 = pppppppdVar11 + 0xb;
      pppppppdVar12 = pppppppdStack_e0;
    } while (pppppppdVar8 != pppppppdStack_d8);
    do {
      _free(pppppppdVar12[6]);
      _free(pppppppdVar12[1]);
      pppppppdVar12 = pppppppdVar12 + 0xb;
    } while (pppppppdVar12 != pppppppdVar20);
  }
  pppppppdStack_d0 = pppppppdVar7;
  if (pppppppdStack_e0 != (double *******)0x0) {
    ppppppdVar22 = (double ******)pppppppdStack_e0;
    pppppppdStack_e0 = pppppppdVar6;
    pppppppdStack_d8 = pppppppdVar7;
    __ZdlPv(ppppppdVar22);
    pppppppdVar6 = pppppppdStack_e0;
  }
  pppppppdStack_e0 = pppppppdVar6;
  pppppppdVar8 = pppppppdStack_e0;
  if (*(uint *)param_3 != 2) {
    if (*(uint *)param_3 != 1) {
      pppppppdStack_c8 = (double *******)0x0;
      uStack_70 = 0;
      pppppppdStack_b0 = (double *******)0x0;
      pppppppdStack_b8 = (double *******)0x0;
      uStack_a0 = 0;
      pppppppdStack_a8 = (double *******)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      pppppppdStack_d8 = pppppppdVar7;
      FUN_1099a9f0c(&pppppppdStack_c8,&UNK_10f58c97f,0x10d,3,FUN_1099aa768,0);
      pppppppdVar7 = pppppppdStack_c0 + 0xea8;
      FUN_1092b4db8(pppppppdVar7,&UNK_10f58cb02,0x2e);
      if (*(uint *)param_3 < 3) {
        puVar17 = (&PTR_DAT_110b1e5a0)[*(uint *)param_3];
      }
      else {
        puVar17 = &UNK_10f5931ae;
      }
      puVar9 = puVar17;
      _strlen(puVar17);
      FUN_1092b4db8(pppppppdVar7,puVar17,puVar9);
      FUN_109365950();
      goto LAB_109959804;
    }
    if (pppppppdVar7 < pppppppdStack_d0) {
      ppppppdVar22 = (double ******)param_6[4];
      pppppppdVar5[0xb] = (double ******)*param_6;
      pppppppdVar5[0xc] = (double ******)0x0;
      pppppppdVar5[0xd] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar5 + 0xe) = 0;
      pppppppdVar5[0xf] = ppppppdVar22;
      *(undefined1 *)(pppppppdVar5 + 0x10) = 1;
      pppppppdVar5[0x14] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar5 + 0x15) = 0;
      pppppppdVar5[0x11] = (double ******)0x0;
      pppppppdVar5[0x12] = (double ******)0x0;
      pppppppdVar20 = pppppppdVar5 + 0x16;
      *(undefined1 *)(pppppppdVar5 + 0x13) = 0;
    }
    else {
      lVar19 = (long)pppppppdVar7 - (long)pppppppdStack_e0;
      uVar15 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
      pppppppdStack_d8 = pppppppdVar7;
      if (0x2e8ba2e8ba2e8ba < uVar15) goto LAB_1099596d8;
      lVar13 = (long)pppppppdStack_d0 - (long)pppppppdStack_e0 >> 3;
      uVar16 = lVar13 * 0x5d1745d1745d1746;
      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
        uVar16 = uVar15;
      }
      if (0x1745d1745d1745c < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
        uVar16 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar16 == 0) {
        pppppppdVar6 = (double *******)0x0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_109959760;
        pppppppdVar6 = (double *******)(uVar16 * 0x58);
        __Znwm();
      }
      pdVar1 = (double *)((long)pppppppdVar6 + lVar19);
      dVar21 = param_6[4];
      *pdVar1 = *param_6;
      pdVar1[1] = 0.0;
      pdVar1[2] = 0.0;
      *(undefined1 *)(pdVar1 + 3) = 0;
      pdVar1[4] = dVar21;
      *(undefined1 *)(pdVar1 + 5) = 1;
      pdVar1[9] = 0.0;
      *(undefined1 *)(pdVar1 + 10) = 0;
      pdVar1[6] = 0.0;
      pdVar1[7] = 0.0;
      pppppppdVar20 = (double *******)(pdVar1 + 0xb);
      *(undefined1 *)(pdVar1 + 8) = 0;
      pppppppdVar11 = pppppppdVar8;
      pppppppdVar12 = pppppppdVar6;
      if (pppppppdVar8 != pppppppdVar7) {
        do {
          *pppppppdVar12 = *pppppppdVar11;
          pppppppdVar12[1] = pppppppdVar11[1];
          pppppppdVar12[2] = pppppppdVar11[2];
          pppppppdVar11[1] = (double ******)0x0;
          pppppppdVar11[2] = (double ******)0x0;
          ppppppdVar10 = pppppppdVar11[4];
          ppppppdVar22 = pppppppdVar11[3];
          *(undefined1 *)(pppppppdVar12 + 5) = *(undefined1 *)(pppppppdVar11 + 5);
          pppppppdVar12[4] = ppppppdVar10;
          pppppppdVar12[3] = ppppppdVar22;
          pppppppdVar12[6] = pppppppdVar11[6];
          pppppppdVar12[7] = pppppppdVar11[7];
          pppppppdVar11[6] = (double ******)0x0;
          pppppppdVar11[7] = (double ******)0x0;
          ppppppdVar10 = pppppppdVar11[9];
          ppppppdVar22 = pppppppdVar11[8];
          *(undefined1 *)(pppppppdVar12 + 10) = *(undefined1 *)(pppppppdVar11 + 10);
          pppppppdVar12[9] = ppppppdVar10;
          pppppppdVar12[8] = ppppppdVar22;
          bVar3 = pppppppdVar11 != pppppppdVar5;
          pppppppdVar11 = pppppppdVar11 + 0xb;
          pppppppdVar12 = pppppppdVar12 + 0xb;
        } while (bVar3);
        pppppppdVar7 = pppppppdVar8 + -0xb;
        do {
          _free(pppppppdVar7[0x11]);
          _free(pppppppdVar7[0xc]);
          pppppppdVar7 = pppppppdVar7 + 0xb;
          pppppppdVar8 = pppppppdStack_e0;
        } while (pppppppdVar7 != pppppppdVar5);
      }
      pppppppdStack_e0 = pppppppdVar6;
      pppppppdStack_d0 = pppppppdVar6 + uVar16 * 0xb;
      if (pppppppdVar8 != (double *******)0x0) {
        pppppppdStack_d8 = pppppppdVar20;
        __ZdlPv(pppppppdVar8);
      }
    }
    pppppppdVar7 = pppppppdStack_e0;
    pppppppdStack_d8 = pppppppdVar20;
    if (*(char *)(param_5 + 5) != '\x01') goto LAB_109959534;
    if (pppppppdVar20 < pppppppdStack_d0) {
      ppppppdVar22 = (double ******)param_5[4];
      *pppppppdVar20 = (double ******)*param_5;
      pppppppdVar20[1] = (double ******)0x0;
      pppppppdVar20[2] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar20 + 3) = 0;
      pppppppdVar20[4] = ppppppdVar22;
      *(undefined1 *)(pppppppdVar20 + 5) = 1;
      pppppppdVar20[9] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar20 + 10) = 0;
      pppppppdVar20[6] = (double ******)0x0;
      pppppppdVar20[7] = (double ******)0x0;
      *(undefined1 *)(pppppppdVar20 + 8) = 0;
      pppppppdStack_d8 = pppppppdVar20 + 0xb;
      goto LAB_109959534;
    }
    lVar19 = (long)pppppppdVar20 - (long)pppppppdStack_e0;
    uVar15 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar15) goto LAB_1099596d8;
    lVar13 = (long)pppppppdStack_d0 - (long)pppppppdStack_e0 >> 3;
    uVar16 = lVar13 * 0x5d1745d1745d1746;
    if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
      uVar16 = uVar15;
    }
    if (0x1745d1745d1745c < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
      uVar16 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar16 == 0) {
      pppppppdVar8 = (double *******)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_109959760;
      pppppppdVar8 = (double *******)(uVar16 * 0x58);
      __Znwm();
    }
    pppppppdVar6 = (double *******)((long)pppppppdVar8 + lVar19);
    uVar23 = param_5[4];
    *pppppppdVar6 = (double ******)*param_5;
    pppppppdVar6[1] = (double ******)0x0;
    pppppppdVar6[2] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 3) = 0;
    pppppppdVar6[4] = (double ******)uVar23;
    *(undefined1 *)(pppppppdVar6 + 5) = 1;
    pppppppdVar6[9] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 10) = 0;
    pppppppdVar6[6] = (double ******)0x0;
    pppppppdVar6[7] = (double ******)0x0;
    *(undefined1 *)(pppppppdVar6 + 8) = 0;
    pppppppdVar5 = pppppppdVar7;
    pppppppdVar11 = pppppppdVar8;
    pppppppdVar12 = pppppppdVar8 + uVar16 * 0xb;
    if (pppppppdVar7 != pppppppdVar20) {
      do {
        *pppppppdVar11 = *pppppppdVar5;
        pppppppdVar11[1] = pppppppdVar5[1];
        pppppppdVar11[2] = pppppppdVar5[2];
        pppppppdVar5[1] = (double ******)0x0;
        pppppppdVar5[2] = (double ******)0x0;
        ppppppdVar10 = pppppppdVar5[4];
        ppppppdVar22 = pppppppdVar5[3];
        *(undefined1 *)(pppppppdVar11 + 5) = *(undefined1 *)(pppppppdVar5 + 5);
        pppppppdVar11[4] = ppppppdVar10;
        pppppppdVar11[3] = ppppppdVar22;
        pppppppdVar11[6] = pppppppdVar5[6];
        pppppppdVar11[7] = pppppppdVar5[7];
        pppppppdVar5[6] = (double ******)0x0;
        pppppppdVar5[7] = (double ******)0x0;
        ppppppdVar10 = pppppppdVar5[9];
        ppppppdVar22 = pppppppdVar5[8];
        *(undefined1 *)(pppppppdVar11 + 10) = *(undefined1 *)(pppppppdVar5 + 10);
        pppppppdVar11[9] = ppppppdVar10;
        pppppppdVar11[8] = ppppppdVar22;
        pppppppdVar5 = pppppppdVar5 + 0xb;
        pppppppdVar11 = pppppppdVar11 + 0xb;
      } while (pppppppdVar5 != pppppppdVar20);
      do {
        _free(pppppppdVar7[6]);
        _free(pppppppdVar7[1]);
        pppppppdVar7 = pppppppdVar7 + 0xb;
        pppppppdVar5 = pppppppdStack_e0;
      } while (pppppppdVar7 != pppppppdVar20);
    }
joined_r0x000109959524:
    pppppppdStack_d0 = pppppppdVar12;
    pppppppdStack_e0 = pppppppdVar8;
    uVar23 = (long)pppppppdVar6 + 0x58;
    pppppppdStack_d8 = (double *******)uVar23;
    if (pppppppdVar5 != (double *******)0x0) {
      __ZdlPv(pppppppdVar5);
      pppppppdStack_d8 = (double *******)uVar23;
    }
LAB_109959534:
    pppppppdStack_c8 = (double *******)0x0;
    uStack_e8 = 0;
    pppppppdVar7 = (double *******)&pppppppdStack_e0;
    FUN_109970918(param_1,ppppppdStack_68,pppppppdVar7,&pppppppdStack_c8,&uStack_e8);
    pppppppdVar5 = pppppppdStack_e0;
    pppppppdVar8 = pppppppdStack_d8;
    if (pppppppdStack_e0 != (double *******)0x0) {
      for (; pppppppdVar7 = pppppppdStack_e0, pppppppdStack_e0 = pppppppdVar7,
          pppppppdVar8 != pppppppdVar5; pppppppdVar8 = pppppppdVar8 + -0xb) {
        _free(pppppppdVar8[-5]);
        _free(pppppppdVar8[-10]);
      }
      pppppppdStack_d8 = pppppppdVar5;
      __ZdlPv(pppppppdVar7);
    }
    return pppppppdVar7;
  }
  if (pppppppdVar7 < pppppppdStack_d0) {
    pppppppdStack_d8 = pppppppdVar7;
    FUN_10995c240(pppppppdVar7,param_6);
    pppppppdVar5 = pppppppdVar5 + 0x16;
    pppppppdVar6 = pppppppdStack_e0;
LAB_1099590e0:
    pppppppdStack_e0 = pppppppdVar6;
    pppppppdStack_d8 = pppppppdVar5;
    if (*(char *)(param_5 + 5) != '\x01') goto LAB_109959534;
    if (pppppppdVar5 < pppppppdStack_d0) {
      FUN_10995c240(pppppppdVar5,param_5);
      pppppppdStack_d8 = pppppppdVar5 + 0xb;
      goto LAB_109959534;
    }
    lVar19 = (long)pppppppdVar5 - (long)pppppppdStack_e0;
    uVar15 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar15 < 0x2e8ba2e8ba2e8bb) {
      lVar13 = (long)pppppppdStack_d0 - (long)pppppppdStack_e0 >> 3;
      uVar16 = lVar13 * 0x5d1745d1745d1746;
      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
        uVar16 = uVar15;
      }
      if (0x1745d1745d1745c < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
        uVar16 = 0x2e8ba2e8ba2e8ba;
      }
      pppppppdStack_a8 = (double *******)&pppppppdStack_e0;
      if (uVar16 == 0) {
        pppppppdVar7 = (double *******)0x0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_109959760;
        pppppppdVar7 = (double *******)(uVar16 * 0x58);
        __Znwm();
      }
      pppppppdVar6 = (double *******)((long)pppppppdVar7 + lVar19);
      pppppppdStack_c8 = pppppppdVar7;
      pppppppdStack_c0 = pppppppdVar6;
      pppppppdStack_b8 = pppppppdVar6;
      pppppppdStack_b0 = pppppppdVar7 + uVar16 * 0xb;
      FUN_10995c240(pppppppdVar6,param_5);
      pppppppdVar20 = pppppppdStack_d8;
      pppppppdVar8 = (double *******)
                     ((long)pppppppdVar6 + ((long)pppppppdStack_e0 - (long)pppppppdStack_d8));
      pppppppdVar5 = pppppppdStack_e0;
      pppppppdVar11 = pppppppdVar8;
      pppppppdVar12 = pppppppdVar7 + uVar16 * 0xb;
      if (pppppppdStack_d8 != pppppppdStack_e0) {
        do {
          *pppppppdVar11 = *pppppppdVar5;
          pppppppdVar11[1] = pppppppdVar5[1];
          pppppppdVar11[2] = pppppppdVar5[2];
          pppppppdVar5[1] = (double ******)0x0;
          pppppppdVar5[2] = (double ******)0x0;
          ppppppdVar10 = pppppppdVar5[4];
          ppppppdVar22 = pppppppdVar5[3];
          *(undefined1 *)(pppppppdVar11 + 5) = *(undefined1 *)(pppppppdVar5 + 5);
          pppppppdVar11[4] = ppppppdVar10;
          pppppppdVar11[3] = ppppppdVar22;
          pppppppdVar11[6] = pppppppdVar5[6];
          pppppppdVar11[7] = pppppppdVar5[7];
          pppppppdVar5[6] = (double ******)0x0;
          pppppppdVar5[7] = (double ******)0x0;
          ppppppdVar10 = pppppppdVar5[9];
          ppppppdVar22 = pppppppdVar5[8];
          *(undefined1 *)(pppppppdVar11 + 10) = *(undefined1 *)(pppppppdVar5 + 10);
          pppppppdVar11[9] = ppppppdVar10;
          pppppppdVar11[8] = ppppppdVar22;
          pppppppdVar5 = pppppppdVar5 + 0xb;
          pppppppdVar11 = pppppppdVar11 + 0xb;
          pppppppdVar7 = pppppppdStack_e0;
        } while (pppppppdVar5 != pppppppdStack_d8);
        do {
          _free(pppppppdVar7[6]);
          _free(pppppppdVar7[1]);
          pppppppdVar7 = pppppppdVar7 + 0xb;
          pppppppdVar5 = pppppppdStack_e0;
          pppppppdVar12 = pppppppdStack_b0;
        } while (pppppppdVar7 != pppppppdVar20);
      }
      goto joined_r0x000109959524;
    }
  }
  else {
    lVar19 = (long)pppppppdVar7 - (long)pppppppdStack_e0;
    uVar15 = (lVar19 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    pppppppdStack_d8 = pppppppdVar7;
    if (uVar15 < 0x2e8ba2e8ba2e8bb) {
      lVar13 = (long)pppppppdStack_d0 - (long)pppppppdStack_e0 >> 3;
      uVar16 = lVar13 * 0x5d1745d1745d1746;
      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
        uVar16 = uVar15;
      }
      if (0x1745d1745d1745c < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
        uVar16 = 0x2e8ba2e8ba2e8ba;
      }
      pppppppdStack_a8 = (double *******)&pppppppdStack_e0;
      if (uVar16 == 0) {
        pppppppdVar8 = (double *******)0x0;
LAB_10995900c:
        pppppppdVar6 = (double *******)((long)pppppppdVar8 + lVar19);
        pppppppdStack_c8 = pppppppdVar8;
        pppppppdStack_c0 = pppppppdVar6;
        pppppppdStack_b8 = pppppppdVar6;
        pppppppdStack_b0 = pppppppdVar8 + uVar16 * 0xb;
        FUN_10995c240(pppppppdVar6,param_6);
        pppppppdVar20 = pppppppdStack_d8;
        pppppppdVar5 = pppppppdVar6 + 0xb;
        pppppppdVar6 = (double *******)
                       ((long)pppppppdVar6 + ((long)pppppppdStack_e0 - (long)pppppppdStack_d8));
        pppppppdVar7 = pppppppdStack_e0;
        pppppppdVar11 = pppppppdVar6;
        pppppppdVar8 = pppppppdVar8 + uVar16 * 0xb;
        if (pppppppdStack_d8 != pppppppdStack_e0) {
          do {
            *pppppppdVar11 = *pppppppdVar7;
            pppppppdVar11[1] = pppppppdVar7[1];
            pppppppdVar11[2] = pppppppdVar7[2];
            pppppppdVar7[1] = (double ******)0x0;
            pppppppdVar7[2] = (double ******)0x0;
            ppppppdVar10 = pppppppdVar7[4];
            ppppppdVar22 = pppppppdVar7[3];
            *(undefined1 *)(pppppppdVar11 + 5) = *(undefined1 *)(pppppppdVar7 + 5);
            pppppppdVar11[4] = ppppppdVar10;
            pppppppdVar11[3] = ppppppdVar22;
            pppppppdVar11[6] = pppppppdVar7[6];
            pppppppdVar11[7] = pppppppdVar7[7];
            pppppppdVar7[6] = (double ******)0x0;
            pppppppdVar7[7] = (double ******)0x0;
            ppppppdVar10 = pppppppdVar7[9];
            ppppppdVar22 = pppppppdVar7[8];
            *(undefined1 *)(pppppppdVar11 + 10) = *(undefined1 *)(pppppppdVar7 + 10);
            pppppppdVar11[9] = ppppppdVar10;
            pppppppdVar11[8] = ppppppdVar22;
            pppppppdVar7 = pppppppdVar7 + 0xb;
            pppppppdVar11 = pppppppdVar11 + 0xb;
            pppppppdVar12 = pppppppdStack_e0;
          } while (pppppppdVar7 != pppppppdStack_d8);
          do {
            _free(pppppppdVar12[6]);
            _free(pppppppdVar12[1]);
            pppppppdVar12 = pppppppdVar12 + 0xb;
            pppppppdVar8 = pppppppdStack_b0;
          } while (pppppppdVar12 != pppppppdVar20);
        }
        pppppppdStack_d0 = pppppppdVar8;
        if (pppppppdStack_e0 != (double *******)0x0) {
          pppppppdVar7 = pppppppdStack_e0;
          pppppppdStack_e0 = pppppppdVar6;
          pppppppdStack_d8 = pppppppdVar5;
          __ZdlPv(pppppppdVar7);
          pppppppdVar6 = pppppppdStack_e0;
        }
        goto LAB_1099590e0;
      }
      if (uVar16 < 0x2e8ba2e8ba2e8bb) {
        pppppppdVar8 = (double *******)(uVar16 * 0x58);
        __Znwm();
        goto LAB_10995900c;
      }
LAB_109959760:
      func_0x000104c4f740();
      goto LAB_109959764;
    }
  }
LAB_1099596d8:
  FUN_10995c22c();
LAB_109959764:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109959768);
  (*pcVar2)();
}



/* Entry: 10995980c; end: 109959877;  */

long * FUN_10995980c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    lVar2 = param_1[1];
    if (param_1[1] != lVar1) {
      do {
        lVar3 = lVar2 + -0x58;
        _free(*(undefined8 *)(lVar2 + -0x28));
        _free(*(undefined8 *)(lVar2 + -0x50));
        lVar2 = lVar3;
      } while (lVar3 != lVar1);
      lVar3 = *param_1;
    }
    param_1[1] = lVar1;
    __ZdlPv(lVar3);
  }
  return param_1;
}



/* Entry: 109959878; end: 109959f8b;  */

double * FUN_109959878(double param_1,double param_2,double param_3,long param_4,undefined1 *param_5
                      )

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double *pdVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  double *pdVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  double dStack_1e0;
  char cStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  double *pdStack_150;
  double *pdStack_148;
  ulong uStack_140;
  undefined1 uStack_138;
  double dStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  double dStack_108;
  undefined1 uStack_100;
  double dStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  
  dStack_f8 = 0.0;
  dStack_98 = param_1;
  if (0.0 <= param_1) {
LAB_1099598c4:
    pdVar18 = (double *)(param_4 + 0x10);
    dVar20 = *pdVar18;
    dStack_f8 = 0.0;
    if (dVar20 <= 0.0) {
      pdVar6 = pdVar18;
      FUN_10991e5b0(pdVar18,&dStack_f8,&UNK_10f58cb6c);
      if (pdVar6 != (double *)0x0) {
        uVar8 = 0x120;
        pdStack_150 = pdVar6;
        goto LAB_109959f0c;
      }
      dVar20 = *pdVar18;
      pdStack_150 = (double *)0x0;
    }
    dStack_f8 = 1.0;
    if ((dVar20 < 1.0) ||
       (pdVar6 = pdVar18, FUN_10991e5b0(pdVar18,&dStack_f8,&UNK_10f58cb90), pdStack_150 = pdVar6,
       pdVar6 == (double *)0x0)) {
      dStack_f8 = (double)CONCAT44(dStack_f8._4_4_,*(int *)(param_4 + 0x30));
      pdStack_150 = (double *)((ulong)pdStack_150 & 0xffffffff00000000);
      if (*(int *)(param_4 + 0x30) < 1) {
        pdVar6 = &dStack_f8;
        FUN_109904144(pdVar6,&pdStack_150,&UNK_10f58cbb4);
        if (pdVar6 != (double *)0x0) {
          uVar8 = 0x122;
          pdStack_150 = pdVar6;
          goto LAB_109959f0c;
        }
      }
      lVar19 = *(long *)(param_4 + 0x50);
      pdStack_150 = (double *)0x0;
      pdStack_148 = (double *)0x0;
      uStack_140 = 0;
      uStack_128 = 1;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_100 = 1;
      lVar17 = *(long *)(lVar19 + 8);
      uVar12 = *(ulong *)(lVar19 + 0x10);
      dStack_130 = param_2;
      dStack_108 = param_3;
      if (uVar12 == 0) {
        uVar9 = 0;
      }
      else {
        if (0 < (long)uVar12) {
          if (uVar12 >> 0x3d == 0) {
            pdVar6 = (double *)(uVar12 << 3);
            _malloc();
            if (pdVar6 != (double *)0x0) {
              uVar9 = uVar12 & 0x1ffffffffffffffe;
              pdStack_148 = pdVar6;
              uStack_140 = uVar12;
              if (uVar12 != 1) {
                lVar11 = 0;
                uVar13 = 0;
                do {
                  puVar7 = (undefined8 *)(lVar17 + lVar11);
                  uVar8 = *puVar7;
                  ((undefined8 *)((long)pdVar6 + lVar11))[1] = puVar7[1];
                  *(undefined8 *)((long)pdVar6 + lVar11) = uVar8;
                  uVar13 = uVar13 + 2;
                  lVar11 = lVar11 + 0x10;
                } while (uVar13 < uVar9);
              }
              goto LAB_1099599a0;
            }
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109959ef8);
          (*pcVar5)();
        }
        uVar9 = -(-uVar12 & 0xfffffffffffffffe);
        uStack_140 = uVar12;
      }
LAB_1099599a0:
      lVar11 = uVar12 - uVar9;
      if (lVar11 != 0 && (long)uVar9 <= (long)uVar12) {
        pdVar6 = pdStack_148 + uVar9;
        pdVar14 = (double *)(lVar17 + uVar9 * 8);
        do {
          *pdVar6 = *pdVar14;
          lVar11 = lVar11 + -1;
          pdVar6 = pdVar6 + 1;
          pdVar14 = pdVar14 + 1;
        } while (lVar11 != 0);
      }
      uStack_138 = 1;
      uVar12 = *(ulong *)(lVar19 + 0x20);
      if (uVar12 == 0) {
        dVar20 = 0.0;
      }
      else {
        pdVar6 = *(double **)(lVar19 + 0x18);
        uVar9 = uVar12 + 3;
        if (-1 < (long)uVar12) {
          uVar9 = uVar12;
        }
        if (uVar12 + 1 < 3) {
          dVar20 = ABS(*pdVar6);
        }
        else {
          uVar13 = uVar12 - ((long)uVar12 >> 0x3f) & 0xfffffffffffffffe;
          auVar22._0_8_ = ABS(*pdVar6);
          auVar22._8_8_ = ABS(pdVar6[1]);
          if (3 < (long)uVar12) {
            uVar9 = uVar9 & 0xfffffffffffffffc;
            auVar23._0_8_ = ABS(pdVar6[2]);
            auVar23._8_8_ = ABS(pdVar6[3]);
            if (7 < uVar12) {
              pdVar14 = pdVar6 + 6;
              lVar17 = 4;
              do {
                auVar3._8_8_ = ABS(pdVar14[-1]);
                auVar3._0_8_ = ABS(pdVar14[-2]);
                auVar22 = NEON_fmax(auVar22,auVar3,8);
                auVar4._8_8_ = ABS(pdVar14[1]);
                auVar4._0_8_ = ABS(*pdVar14);
                auVar23 = NEON_fmax(auVar23,auVar4,8);
                lVar17 = lVar17 + 4;
                pdVar14 = pdVar14 + 4;
              } while (lVar17 < (long)uVar9);
            }
            auVar22 = NEON_fmax(auVar22,auVar23,8);
            if ((long)uVar9 < (long)uVar13) {
              auVar24._0_8_ = ABS(pdVar6[uVar9]);
              auVar24._8_8_ = ABS((pdVar6 + uVar9)[1]);
              auVar22 = NEON_fmax(auVar22,auVar24,8);
            }
          }
          dVar20 = auVar22._8_8_;
          if (auVar22._8_8_ <= auVar22._0_8_) {
            dVar20 = auVar22._0_8_;
          }
          lVar17 = (long)uVar12 % 2;
          if (lVar17 != 0 && lVar17 < 0 == SBORROW8(uVar12,uVar13)) {
            pdVar6 = pdVar6 + ((long)uVar12 / 2) * 2;
            dVar25 = dVar20;
            do {
              dVar20 = ABS(*pdVar6);
              if (ABS(*pdVar6) <= dVar25) {
                dVar20 = dVar25;
              }
              lVar17 = lVar17 + -1;
              pdVar6 = pdVar6 + 1;
              dVar25 = dVar20;
            } while (lVar17 != 0);
          }
        }
      }
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1a8 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      dStack_1e0 = 0.0;
      cStack_1d8 = '\0';
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      dStack_200 = 0.0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      iVar1 = *(int *)(param_4 + 8);
      *(int *)(param_5 + 0x60) = *(int *)(param_5 + 0x60) + 1;
      if (iVar1 == 2) {
        *(int *)(param_5 + 100) = *(int *)(param_5 + 100) + 1;
      }
      FUN_1099582ec(dStack_98,lVar19,iVar1 == 2,&dStack_200);
      while( true ) {
        if ((cStack_1d8 == '\x01') && (dStack_1e0 <= param_2 + dStack_200 * param_3 * *pdVar18)) {
          FUN_109959f8c(param_5 + 8,&dStack_200);
          *param_5 = 1;
          goto LAB_109959db8;
        }
        iVar2 = *(int *)(param_5 + 0x68);
        *(int *)(param_5 + 0x68) = iVar2 + 1;
        uVar12 = (ulong)*(uint *)(param_4 + 0x30);
        if ((int)*(uint *)(param_4 + 0x30) <= iVar2 + 1) break;
        _gettimeofday(&dStack_f8,0);
        iVar2 = iStack_f0;
        dVar25 = dStack_f8;
        dVar21 = (double)FUN_109958cbc(*(double *)(param_4 + 0x18) * dStack_200,
                                       dStack_200 * *(double *)(param_4 + 0x20),(int *)(param_4 + 8)
                                       ,&pdStack_150,&uStack_1a8,&dStack_200);
        _gettimeofday(&dStack_f8,0);
        *(double *)(param_5 + 0x80) =
             *(double *)(param_5 + 0x80) +
             (((double)(long)dStack_f8 + (double)iStack_f0 * 1e-06) -
             ((double)(long)dVar25 + (double)iVar2 * 1e-06));
        if (dVar20 * dVar21 < *(double *)(param_4 + 0x28)) {
          FUN_109988e2c(&dStack_f8,&UNK_10f58cc5d);
          pdVar18 = (double *)(param_5 + 0x90);
          if ((char)param_5[0xa7] < '\0') {
            __ZdlPv(*pdVar18);
          }
          *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_ec,iStack_f0);
          *pdVar18 = dStack_f8;
          *(undefined8 *)(param_5 + 0xa0) = uStack_e8;
          if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
            dStack_f8 = 0.0;
            uStack_a0 = 0;
            uStack_e0 = 0;
            uStack_e8 = 0;
            uStack_d0 = 0;
            uStack_d8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_b0 = 0;
            uStack_b8 = 0;
            uStack_a8 = 0;
            FUN_1099a9f0c(&dStack_f8,&UNK_10f58c97f,0x15f,1,FUN_1099aa768,0,in_x6,in_x7,dVar21,
                          dVar20);
            uVar12 = *(ulong *)(param_5 + 0x98);
            pdVar6 = *(double **)(param_5 + 0x90);
            if (-1 < (char)param_5[0xa7]) {
              uVar12 = (ulong)(byte)param_5[0xa7];
              pdVar6 = pdVar18;
            }
            FUN_1092b4db8(CONCAT44(uStack_ec,iStack_f0) + 0x7540,pdVar6,uVar12);
LAB_109959d98:
            FUN_1099ab3b0(&dStack_f8);
          }
LAB_109959db8:
          _free(uStack_1d0);
          _free(uStack_1f8);
          _free(uStack_178);
          _free(uStack_1a0);
          _free(uStack_120);
          _free(pdStack_148);
          return pdStack_148;
        }
        FUN_109959f8c(&uStack_1a8,&dStack_200);
        *(int *)(param_5 + 0x60) = *(int *)(param_5 + 0x60) + 1;
        if (iVar1 == 2) {
          *(int *)(param_5 + 100) = *(int *)(param_5 + 100) + 1;
        }
        FUN_1099582ec(dVar21,lVar19,iVar1 == 2,&dStack_200);
      }
      FUN_109988e2c(&dStack_f8,&UNK_10f58cbd5);
      pdVar18 = (double *)(param_5 + 0x90);
      if ((char)param_5[0xa7] < '\0') {
        __ZdlPv(*pdVar18);
      }
      *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_ec,iStack_f0);
      *pdVar18 = dStack_f8;
      *(undefined8 *)(param_5 + 0xa0) = uStack_e8;
      if ((*(byte *)(param_4 + 0x48) & 1) != 0) goto LAB_109959db8;
      dStack_f8 = 0.0;
      uStack_a0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      FUN_1099a9f0c(&dStack_f8,&UNK_10f58c97f,0x148,1,FUN_1099aa768,0,in_x6,in_x7,uVar12);
      uVar12 = *(ulong *)(param_5 + 0x98);
      pdVar6 = *(double **)(param_5 + 0x90);
      if (-1 < (char)param_5[0xa7]) {
        uVar12 = (ulong)(byte)param_5[0xa7];
        pdVar6 = pdVar18;
      }
      FUN_1092b4db8(CONCAT44(uStack_ec,iStack_f0) + 0x7540,pdVar6,uVar12);
      goto LAB_109959d98;
    }
    uVar8 = 0x121;
  }
  else {
    pdVar18 = &dStack_98;
    FUN_10991e5b0(pdVar18,&dStack_f8,&UNK_10f58cb52);
    pdStack_150 = pdVar18;
    if (pdVar18 == (double *)0x0) goto LAB_1099598c4;
    uVar8 = 0x11f;
  }
LAB_109959f0c:
  pdVar6 = (double *)&UNK_10f58c97f;
  pdVar18 = &dStack_f8;
  FUN_1099ab8e4(pdVar18,&UNK_10f58c97f,uVar8,&pdStack_150);
  func_0x0001099ab7c0();
  FUN_1099ab3b0(&dStack_f8);
  _free(uStack_1d0);
  _free(uStack_1f8);
  _free(uStack_178);
  _free(uStack_1a0);
  _free(uStack_120);
  _free(pdStack_148);
  __Unwind_Resume();
  *pdVar18 = *pdVar6;
  puVar10 = (undefined8 *)pdVar6[1];
  dVar20 = pdVar6[2];
  puVar7 = (undefined8 *)pdVar18[1];
  if (pdVar18[2] != dVar20) {
    _free();
    if ((long)dVar20 < 1) {
      puVar7 = (undefined8 *)0x0;
LAB_109959fe4:
      pdVar18[1] = (double)puVar7;
      pdVar18[2] = dVar20;
      goto LAB_109959fe8;
    }
    if ((ulong)dVar20 >> 0x3d == 0) {
      puVar7 = (undefined8 *)((long)dVar20 << 3);
      _malloc();
      if (puVar7 != (undefined8 *)0x0) goto LAB_109959fe4;
    }
    goto LAB_10995a07c;
  }
LAB_109959fe8:
  uVar12 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)dVar20) {
    lVar17 = 0;
    puVar15 = puVar7;
    puVar16 = puVar10;
    do {
      uVar8 = *puVar16;
      puVar15[1] = puVar16[1];
      *puVar15 = uVar8;
      lVar17 = lVar17 + 2;
      puVar15 = puVar15 + 2;
      puVar16 = puVar16 + 2;
    } while (lVar17 < (long)uVar12);
  }
  lVar17 = (long)dVar20 % 2;
  if (lVar17 != 0 && (long)uVar12 <= (long)dVar20) {
    puVar10 = puVar10 + ((long)dVar20 / 2) * 2;
    puVar7 = puVar7 + ((long)dVar20 / 2) * 2;
    do {
      *puVar7 = *puVar10;
      lVar17 = lVar17 + -1;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar17 != 0);
  }
  dVar20 = pdVar6[3];
  dVar25 = pdVar6[4];
  *(undefined1 *)(pdVar18 + 5) = *(undefined1 *)(pdVar6 + 5);
  pdVar18[4] = dVar25;
  pdVar18[3] = dVar20;
  puVar10 = (undefined8 *)pdVar6[6];
  dVar20 = pdVar6[7];
  puVar7 = (undefined8 *)pdVar18[6];
  if (pdVar18[7] == dVar20) goto LAB_10995a0a4;
  _free();
  if ((long)dVar20 < 1) {
LAB_10995a09c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)dVar20 >> 0x3d != 0) {
LAB_10995a07c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995a09c;
    }
    puVar7 = (undefined8 *)((long)dVar20 << 3);
    _malloc();
    if (puVar7 == (undefined8 *)0x0) goto LAB_10995a07c;
  }
  pdVar18[6] = (double)puVar7;
  pdVar18[7] = dVar20;
LAB_10995a0a4:
  uVar12 = (long)dVar20 - ((long)dVar20 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)dVar20) {
    lVar17 = 0;
    puVar15 = puVar7;
    puVar16 = puVar10;
    do {
      uVar8 = *puVar16;
      puVar15[1] = puVar16[1];
      *puVar15 = uVar8;
      lVar17 = lVar17 + 2;
      puVar15 = puVar15 + 2;
      puVar16 = puVar16 + 2;
    } while (lVar17 < (long)uVar12);
  }
  lVar17 = (long)dVar20 % 2;
  if (lVar17 != 0 && lVar17 < 0 == SBORROW8((long)dVar20,uVar12)) {
    puVar10 = puVar10 + ((long)dVar20 / 2) * 2;
    puVar7 = puVar7 + ((long)dVar20 / 2) * 2;
    do {
      *puVar7 = *puVar10;
      lVar17 = lVar17 + -1;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar17 != 0);
  }
  dVar20 = pdVar6[8];
  dVar25 = pdVar6[9];
  *(undefined1 *)(pdVar18 + 10) = *(undefined1 *)(pdVar6 + 10);
  pdVar18[9] = dVar25;
  pdVar18[8] = dVar20;
  return pdVar18;
}



/* Entry: 109959f8c; end: 10995a11b;  */

undefined8 * FUN_109959f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar7 = param_2[2];
  puVar1 = (undefined8 *)param_1[1];
  if (param_1[2] != uVar7) {
    _free();
    if ((long)uVar7 < 1) {
      puVar1 = (undefined8 *)0x0;
LAB_109959fe4:
      param_1[1] = puVar1;
      param_1[2] = uVar7;
      goto LAB_109959fe8;
    }
    if (uVar7 >> 0x3d == 0) {
      puVar1 = (undefined8 *)(uVar7 << 3);
      _malloc();
      if (puVar1 != (undefined8 *)0x0) goto LAB_109959fe4;
    }
    goto LAB_10995a07c;
  }
LAB_109959fe8:
  uVar3 = uVar7 - ((long)uVar7 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar7) {
    lVar4 = 0;
    puVar5 = puVar1;
    puVar6 = puVar2;
    do {
      uVar8 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar8;
      lVar4 = lVar4 + 2;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (lVar4 < (long)uVar3);
  }
  lVar4 = (long)uVar7 % 2;
  if (lVar4 != 0 && (long)uVar3 <= (long)uVar7) {
    puVar2 = puVar2 + ((long)uVar7 / 2) * 2;
    puVar1 = puVar1 + ((long)uVar7 / 2) * 2;
    do {
      *puVar1 = *puVar2;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (lVar4 != 0);
  }
  uVar9 = param_2[4];
  uVar8 = param_2[3];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar9;
  param_1[3] = uVar8;
  puVar2 = (undefined8 *)param_2[6];
  uVar7 = param_2[7];
  puVar1 = (undefined8 *)param_1[6];
  if (param_1[7] == uVar7) goto LAB_10995a0a4;
  _free();
  if ((long)uVar7 < 1) {
LAB_10995a09c:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) {
LAB_10995a07c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995a09c;
    }
    puVar1 = (undefined8 *)(uVar7 << 3);
    _malloc();
    if (puVar1 == (undefined8 *)0x0) goto LAB_10995a07c;
  }
  param_1[6] = puVar1;
  param_1[7] = uVar7;
LAB_10995a0a4:
  uVar3 = uVar7 - ((long)uVar7 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar7) {
    lVar4 = 0;
    puVar5 = puVar1;
    puVar6 = puVar2;
    do {
      uVar8 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar8;
      lVar4 = lVar4 + 2;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (lVar4 < (long)uVar3);
  }
  lVar4 = (long)uVar7 % 2;
  if (lVar4 != 0 && lVar4 < 0 == SBORROW8(uVar7,uVar3)) {
    puVar2 = puVar2 + ((long)uVar7 / 2) * 2;
    puVar1 = puVar1 + ((long)uVar7 / 2) * 2;
    do {
      *puVar1 = *puVar2;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (lVar4 != 0);
  }
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  return param_1;
}



/* Entry: 10995a11c; end: 10995c1bb;  */

void FUN_10995a11c(double ****param_1,double param_2,double param_3,long param_4,undefined1 *param_5
                  )

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *****pppppuVar6;
  ulong *puVar7;
  double **ppdVar8;
  byte bVar9;
  double dVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  double *****pppppdVar16;
  long *plVar17;
  ulong *puVar18;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  double *pdVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  double *pdVar26;
  double *****pppppdVar27;
  double *****pppppdVar28;
  double *****pppppdVar29;
  long lVar30;
  ulong uVar31;
  double ****ppppdVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double ****ppppdVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double *****pppppdVar44;
  double ***pppdVar45;
  double ***pppdVar46;
  double **ppdStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  double dStack_408;
  byte bStack_400;
  long lStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  double ***pppdStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  double dStack_3b0;
  char cStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  double dStack_388;
  byte bStack_380;
  double **ppdStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  double dStack_358;
  byte bStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined8 uStack_330;
  undefined1 uStack_328;
  double ***pppdStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  double dStack_300;
  char cStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  double dStack_2d8;
  byte bStack_2d0;
  double **ppdStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  double dStack_2a8;
  byte bStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  double dStack_280;
  byte bStack_278;
  undefined8 uStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  double dStack_250;
  char cStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  double dStack_228;
  undefined1 uStack_220;
  double ***pppdStack_218;
  undefined8 ****ppppuStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  double ****ppppdStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 uStack_1a0;
  double dStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  double dStack_170;
  undefined1 uStack_168;
  double ****ppppdStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  double dStack_140;
  char cStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  double dStack_118;
  undefined1 uStack_110;
  ulong uStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_108 = 0;
  pppdStack_218 = (double ***)param_1;
  if ((double)param_1 < 0.0) {
    pppppdVar27 = (double *****)&pppdStack_218;
    FUN_10991e5b0(pppppdVar27,&uStack_108,&UNK_10f58cb52);
    ppppdStack_160 = (double ****)pppppdVar27;
    if (pppppdVar27 == (double *****)0x0) goto LAB_10995a16c;
    uVar34 = 0x17b;
  }
  else {
LAB_10995a16c:
    pppppdVar27 = (double *****)(param_4 + 0x10);
    ppppdVar32 = *pppppdVar27;
    uStack_108 = 0;
    if ((double)ppppdVar32 <= 0.0) {
      pppppdVar28 = pppppdVar27;
      FUN_10991e5b0(pppppdVar27,&uStack_108,&UNK_10f58cb6c);
      if (pppppdVar28 != (double *****)0x0) {
        uVar34 = 0x17c;
        ppppdStack_160 = (double ****)pppppdVar28;
        goto LAB_10995bf70;
      }
      ppppdVar32 = *pppppdVar27;
      ppppdStack_160 = (double ****)0x0;
    }
    pppppdVar28 = (double *****)(param_4 + 0x38);
    ppppdVar37 = *pppppdVar28;
    if ((double)ppppdVar37 <= (double)ppppdVar32) {
      pppppdVar29 = pppppdVar28;
      FUN_10991e5b0(pppppdVar28,pppppdVar27,&UNK_10f58ccb2);
      if (pppppdVar29 != (double *****)0x0) {
        uVar34 = 0x17e;
        ppppdStack_160 = (double ****)pppppdVar29;
        goto LAB_10995bf70;
      }
      ppppdVar37 = *pppppdVar28;
      ppppdStack_160 = (double ****)0x0;
    }
    uStack_108 = 0x3ff0000000000000;
    if (((double)ppppdVar37 < 1.0) ||
       (pppppdVar29 = pppppdVar28, FUN_10991e5b0(pppppdVar28,&uStack_108,&UNK_10f58ccfa),
       ppppdStack_160 = (double ****)pppppdVar29, pppppdVar29 == (double *****)0x0)) {
      pppppdVar29 = (double *****)(param_4 + 0x40);
      uStack_108 = 0x3ff0000000000000;
      if ((1.0 < (double)*pppppdVar29) ||
         (pppppdVar16 = pppppdVar29, FUN_10991e5b0(pppppdVar29,&uStack_108,&UNK_10f58cd28),
         ppppdStack_160 = (double ****)pppppdVar16, pppppdVar16 == (double *****)0x0)) {
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_260 = 0;
        cStack_248 = '\x01';
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_230 = 0;
        uStack_220 = 1;
        lVar30 = *(long *)(*(long *)(param_4 + 0x50) + 8);
        uVar31 = *(ulong *)(*(long *)(param_4 + 0x50) + 0x10);
        dStack_250 = param_2;
        dStack_228 = param_3;
        if (uVar31 == 0) {
          uVar20 = 0;
        }
        else {
          if (0 < (long)uVar31) {
            if (uVar31 >> 0x3d == 0) {
              lVar15 = uVar31 << 3;
              _malloc();
              if (lVar15 != 0) {
                uVar20 = uVar31 & 0x1ffffffffffffffe;
                lStack_268 = lVar15;
                uStack_260 = uVar31;
                if (uVar31 != 1) {
                  lVar23 = 0;
                  uVar24 = 0;
                  do {
                    puVar21 = (undefined8 *)(lVar30 + lVar23);
                    uVar34 = *puVar21;
                    ((undefined8 *)(lVar15 + lVar23))[1] = puVar21[1];
                    *(undefined8 *)(lVar15 + lVar23) = uVar34;
                    uVar24 = uVar24 + 2;
                    lVar23 = lVar23 + 0x10;
                  } while (uVar24 < uVar20);
                }
                goto LAB_10995a26c;
              }
            }
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10995bf40;
          }
          uVar20 = -(-uVar31 & 0xfffffffffffffffe);
          uStack_260 = uVar31;
        }
LAB_10995a26c:
        pppdVar45 = pppdStack_218;
        uVar24 = uStack_260;
        lVar15 = uVar31 - uVar20;
        if (lVar15 != 0 && (long)uVar20 <= (long)uVar31) {
          puVar21 = (undefined8 *)(lStack_268 + uVar20 * 8);
          puVar25 = (undefined8 *)(lVar30 + uVar20 * 8);
          do {
            *puVar21 = *puVar25;
            lVar15 = lVar15 + -1;
            puVar21 = puVar21 + 1;
            puVar25 = puVar25 + 1;
          } while (lVar15 != 0);
        }
        uStack_258 = 1;
        dStack_2a8 = 0.0;
        bStack_2a0 = 0;
        dStack_280 = 0.0;
        bStack_278 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        ppdStack_2c8 = (double **)0x0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        uStack_288 = 0;
        dStack_300 = 0.0;
        cStack_2f8 = '\0';
        dStack_2d8 = 0.0;
        bStack_2d0 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        pppdStack_320 = (double ***)0x0;
        uStack_308 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        dStack_358 = 0.0;
        bStack_350 = 0;
        uStack_330 = 0;
        uStack_328 = 0;
        uStack_370 = 0;
        uStack_368 = 0;
        ppdStack_378 = (double **)0x0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_340 = 0;
        uStack_338 = 0;
        lVar30 = *(long *)(param_4 + 0x50);
        ppppdStack_160 = (double ****)0x0;
        if (uStack_260 == 0) {
          uStack_158 = 0;
          uStack_150 = 0;
LAB_10995a358:
          uVar31 = uStack_238;
          uStack_148 = CONCAT71(uStack_257,uStack_258);
          dStack_140 = dStack_250;
          cStack_138 = cStack_248;
          if (uStack_238 == 0) {
            lStack_130 = 0;
            uStack_128 = 0;
LAB_10995a3b0:
            uStack_120 = CONCAT71(uStack_22f,uStack_230);
            dStack_118 = dStack_228;
            uStack_110 = uStack_220;
            dStack_198 = 0.0;
            cStack_190 = '\0';
            dStack_170 = 0.0;
            uStack_168 = 0;
            uStack_1a8 = 0;
            ppppdStack_1b8 = (double ****)0x0;
            uStack_1b0 = 0;
            uStack_1a0 = 0;
            uStack_180 = 0;
            uStack_188 = 0;
            uStack_178 = 0;
            uVar31 = *(ulong *)(lVar30 + 0x20);
            if (uVar31 == 0) {
              dVar42 = 0.0;
            }
            else {
              pdVar22 = *(double **)(lVar30 + 0x18);
              uVar20 = uVar31 + 3;
              if (-1 < (long)uVar31) {
                uVar20 = uVar31;
              }
              if (uVar31 + 1 < 3) {
                dVar42 = ABS(*pdVar22);
              }
              else {
                uVar24 = uVar31 - ((long)uVar31 >> 0x3f) & 0xfffffffffffffffe;
                auVar35._0_8_ = ABS(*pdVar22);
                auVar35._8_8_ = ABS(pdVar22[1]);
                if (3 < (long)uVar31) {
                  uVar20 = uVar20 & 0xfffffffffffffffc;
                  auVar38._0_8_ = ABS(pdVar22[2]);
                  auVar38._8_8_ = ABS(pdVar22[3]);
                  if (7 < uVar31) {
                    pdVar26 = pdVar22 + 6;
                    lVar15 = 4;
                    do {
                      auVar4._8_8_ = ABS(pdVar26[-1]);
                      auVar4._0_8_ = ABS(pdVar26[-2]);
                      auVar35 = NEON_fmax(auVar35,auVar4,8);
                      auVar5._8_8_ = ABS(pdVar26[1]);
                      auVar5._0_8_ = ABS(*pdVar26);
                      auVar38 = NEON_fmax(auVar38,auVar5,8);
                      lVar15 = lVar15 + 4;
                      pdVar26 = pdVar26 + 4;
                    } while (lVar15 < (long)uVar20);
                  }
                  auVar35 = NEON_fmax(auVar35,auVar38,8);
                  if ((long)uVar20 < (long)uVar24) {
                    auVar39._0_8_ = ABS(pdVar22[uVar20]);
                    auVar39._8_8_ = ABS((pdVar22 + uVar20)[1]);
                    auVar35 = NEON_fmax(auVar35,auVar39,8);
                  }
                }
                dVar42 = auVar35._8_8_;
                if (auVar35._8_8_ <= auVar35._0_8_) {
                  dVar42 = auVar35._0_8_;
                }
                lVar15 = (long)uVar31 % 2;
                if (lVar15 != 0 && lVar15 < 0 == SBORROW8(uVar31,uVar24)) {
                  pdVar22 = pdVar22 + ((long)uVar31 / 2) * 2;
                  dVar43 = dVar42;
                  do {
                    dVar42 = ABS(*pdVar22);
                    if (ABS(*pdVar22) <= dVar43) {
                      dVar42 = dVar43;
                    }
                    lVar15 = lVar15 + -1;
                    pdVar22 = pdVar22 + 1;
                    dVar43 = dVar42;
                  } while (lVar15 != 0);
                }
              }
            }
            FUN_109959f8c(&pppdStack_320,&uStack_270);
            *(ulong *)(param_5 + 0x60) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x60) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_5 + 0x60) + 1);
            FUN_1099582ec(pppdVar45,lVar30,1,&ppppdStack_1b8);
            dVar10 = dStack_228;
            dVar43 = dStack_250;
            puVar18 = (ulong *)(param_5 + 0x90);
            do {
              ppppdVar32 = ppppdStack_160;
              iVar19 = *(int *)(param_5 + 0x68) + 1;
              *(int *)(param_5 + 0x68) = iVar19;
              if (cStack_190 == '\x01') {
                if (dVar43 + (double)ppppdStack_1b8 * (double)*pppppdVar27 * dVar10 < dStack_198) {
LAB_10995a6bc:
                  FUN_109959f8c(&pppdStack_320,&ppppdStack_160);
                  FUN_109959f8c(&ppdStack_378,&ppppdStack_1b8);
                  if (piRam000000011373ce00 == (int *)0x0) {
                    iVar19 = 0x1373ce00;
                    FUN_1099adbb8(0x11373ce00,0x11382bb14,&UNK_10f58c97f,3);
                    if (iVar19 != 0) goto LAB_10995aa38;
                  }
                  else if (2 < *piRam000000011373ce00) {
LAB_10995aa38:
                    uStack_108 = 0;
                    uStack_b0 = 0;
                    uStack_f0 = 0;
                    uStack_f8 = 0;
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    uStack_d0 = 0;
                    uStack_d8 = 0;
                    uStack_c0 = 0;
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x221,0,FUN_1099aa768,0);
                    lVar30 = CONCAT44(uStack_fc,iStack_100) + 0x7540;
                    lVar23 = *(long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
                    lVar15 = lVar30 + *(long *)(lVar23 + -0x18);
                    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) & 0xfffffffb | 0x100;
                    *(undefined8 *)(lVar30 + *(long *)(lVar23 + -0x18) + 0x10) = 8;
                    FUN_1092b4db8(lVar30,&UNK_10f58cdbc,0x1d);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdStack_1b8);
                    FUN_1092b4db8();
                    FUN_1092b4db8();
                    goto LAB_10995ad50;
                  }
LAB_10995ad58:
                  if (dVar42 * ABS((double)ppdStack_378 - (double)pppdStack_320) <
                      *(double *)(param_4 + 0x28)) goto LAB_10995ad74;
                  bVar12 = true;
                }
                else {
                  bVar12 = false;
                  bVar13 = true;
                  bVar14 = false;
                  if (cStack_138 == '\x01') {
                    bVar12 = false;
                    bVar13 = false;
                    bVar14 = true;
                    if (!NAN(dStack_198) && !NAN(dStack_140)) {
                      bVar12 = dStack_198 < dStack_140;
                      bVar13 = dStack_198 == dStack_140;
                      bVar14 = false;
                    }
                  }
                  if (!bVar13 && bVar12 == bVar14) goto LAB_10995a6bc;
                  if (-((double)*pppppdVar28 * dVar10) < ABS(dStack_170)) {
                    if (dStack_170 < 0.0) {
                      if (dVar42 * ABS((double)ppppdStack_1b8 - (double)ppppdStack_160) <
                          *(double *)(param_4 + 0x28)) {
                        if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
                          uStack_108 = 0;
                          uStack_b0 = 0;
                          uStack_f0 = 0;
                          uStack_f8 = 0;
                          uStack_e0 = 0;
                          uStack_e8 = 0;
                          uStack_d0 = 0;
                          uStack_d8 = 0;
                          uStack_c0 = 0;
                          uStack_c8 = 0;
                          uStack_b8 = 0;
                          FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x250,1,FUN_1099aa768,0);
                          FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,&UNK_10f58cef1,0x32)
                          ;
                          FUN_1092b4db8();
                          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                                    (ABS((double)ppppdStack_1b8 - (double)ppppdVar32));
                          FUN_1092b4db8();
                          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
                                    (*(undefined8 *)(param_4 + 0x28));
                          FUN_1092b4db8();
                          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar42);
                          FUN_1092b4db8();
                          FUN_1092b4db8();
                          FUN_1092b4db8();
                          FUN_1092b4db8();
                          FUN_1092b4db8();
                          FUN_1099ab3b0(&uStack_108);
                        }
                        goto LAB_10995aa04;
                      }
                      uVar1 = *(uint *)(param_4 + 0x30);
                      if ((int)uVar1 <= iVar19) goto LAB_10995a6f4;
                      pppppdVar16 = (double *****)ppppdStack_1b8;
                      pppppdVar44 = (double *****)((double)ppppdStack_1b8 * (double)*pppppdVar29);
                      goto LAB_10995a5dc;
                    }
                    FUN_109959f8c(&pppdStack_320,&ppppdStack_1b8);
                    FUN_109959f8c(&ppdStack_378,&ppppdStack_160);
                    if (piRam000000011373ce40 == (int *)0x0) {
                      iVar19 = 0x1373ce40;
                      FUN_1099adbb8(0x11373ce40,0x11382bb14,&UNK_10f58c97f,3);
                      if (iVar19 != 0) goto LAB_10995acc8;
                      goto LAB_10995ad58;
                    }
                    if (*piRam000000011373ce40 < 3) goto LAB_10995ad58;
LAB_10995acc8:
                    uStack_108 = 0;
                    uStack_b0 = 0;
                    uStack_f0 = 0;
                    uStack_f8 = 0;
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    uStack_d0 = 0;
                    uStack_d8 = 0;
                    uStack_c0 = 0;
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x241,0,FUN_1099aa768,0);
                    FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,&UNK_10f58cdbc,0x1d);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdStack_1b8);
                    FUN_1092b4db8();
                    FUN_1092b4db8();
LAB_10995ad50:
                    FUN_1099ab3b0(&uStack_108);
                    goto LAB_10995ad58;
                  }
                  FUN_109959f8c(&pppdStack_320,&ppppdStack_1b8);
                  FUN_109959f8c(&ppdStack_378,&ppppdStack_1b8);
                  if (piRam000000011373ce20 == (int *)0x0) {
                    iVar19 = 0x1373ce20;
                    FUN_1099adbb8(0x11373ce20,0x11382bb14,&UNK_10f58c97f,3);
                    if (iVar19 != 0) goto LAB_10995ab14;
                  }
                  else if (2 < *piRam000000011373ce20) {
LAB_10995ab14:
                    uStack_108 = 0;
                    uStack_b0 = 0;
                    uStack_f0 = 0;
                    uStack_f8 = 0;
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    uStack_d0 = 0;
                    uStack_d8 = 0;
                    uStack_c0 = 0;
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x230,0,FUN_1099aa768,0);
                    lVar30 = CONCAT44(uStack_fc,iStack_100) + 0x7540;
                    lVar23 = *(long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
                    lVar15 = lVar30 + *(long *)(lVar23 + -0x18);
                    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) & 0xfffffffb | 0x100;
                    *(undefined8 *)(lVar30 + *(long *)(lVar23 + -0x18) + 0x10) = 8;
                    FUN_1092b4db8(lVar30,&UNK_10f58ce3c,0x22);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppppdStack_1b8);
                    FUN_1092b4db8();
                    FUN_109988e2c(&ppppuStack_210,&UNK_10f58c35d);
                    uVar31 = uStack_208;
                    pppppuVar6 = (undefined8 *****)ppppuStack_210;
                    if (-1 < (long)uStack_200) {
                      uVar31 = uStack_200 >> 0x38;
                      pppppuVar6 = &ppppuStack_210;
                    }
                    FUN_1092b4db8(lVar30,pppppuVar6,uVar31);
                    if ((long)uStack_200 < 0) {
                      __ZdlPv(ppppuStack_210);
                    }
                    FUN_1092b4db8(lVar30,&UNK_10f58caf6,0xb);
                    FUN_109988e2c(&ppppuStack_210,&UNK_10f58c35d);
                    uVar31 = uStack_208;
                    pppppuVar6 = (undefined8 *****)ppppuStack_210;
                    if (-1 < (long)uStack_200) {
                      uVar31 = uStack_200 >> 0x38;
                      pppppuVar6 = &ppppuStack_210;
                    }
                    FUN_1092b4db8(lVar30,pppppuVar6,uVar31);
                    if ((long)uStack_200 < 0) {
                      __ZdlPv(ppppuStack_210);
                    }
                    FUN_1099ab3b0(&uStack_108);
                  }
LAB_10995ad74:
                  bVar12 = false;
                }
                bVar13 = true;
                goto LAB_10995ad84;
              }
              uVar1 = *(uint *)(param_4 + 0x30);
              pppppdVar16 = (double *****)ppppdStack_160;
              pppppdVar44 = (double *****)ppppdStack_1b8;
              if ((int)uVar1 <= iVar19) {
LAB_10995a6f4:
                uVar31 = (ulong)uVar1;
                FUN_109988e2c(&uStack_108,&UNK_10f58d02b);
                if ((char)param_5[0xa7] < '\0') {
                  __ZdlPv(*puVar18);
                }
                *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
                *puVar18 = uStack_108;
                *(ulong *)(param_5 + 0xa0) = uStack_f8;
                if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
                  uStack_108 = 0;
                  uStack_b0 = 0;
                  uStack_f0 = 0;
                  uStack_f8 = 0;
                  uStack_e0 = 0;
                  uStack_e8 = 0;
                  uStack_d0 = 0;
                  uStack_d8 = 0;
                  uStack_c0 = 0;
                  uStack_c8 = 0;
                  uStack_b8 = 0;
                  FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x268,1,FUN_1099aa768,0,in_x6,in_x7,
                                uVar31);
                  uVar31 = *(ulong *)(param_5 + 0x98);
                  puVar7 = *(ulong **)(param_5 + 0x90);
                  if (-1 < (char)param_5[0xa7]) {
                    uVar31 = (ulong)(byte)param_5[0xa7];
                    puVar7 = puVar18;
                  }
                  FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
                  FUN_1099ab3b0(&uStack_108);
                }
                if ((cStack_190 != '\x01') || (dStack_300 <= dStack_198)) {
                  pppppdVar29 = (double *****)&pppdStack_320;
                }
                else {
LAB_10995aa04:
                  pppppdVar29 = &ppppdStack_1b8;
                }
                FUN_109959f8c(&pppdStack_320,pppppdVar29);
                goto LAB_10995ad74;
              }
LAB_10995a5dc:
              uStack_1f0 = 0;
              uStack_1e8 = 0;
              uStack_1c8 = 0;
              uStack_1c0 = 0;
              uStack_200 = 0;
              ppppuStack_210 = (undefined8 *****)0x0;
              uStack_208 = 0;
              uStack_1f8 = 0;
              uStack_1e0 = 0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
              _gettimeofday(&uStack_108,0);
              iVar19 = iStack_100;
              uVar31 = uStack_108;
              dVar33 = (double)FUN_109958cbc(pppppdVar16,pppppdVar44,param_4 + 8,&ppppdStack_160,
                                             &ppppuStack_210,&ppppdStack_1b8);
              _gettimeofday(&uStack_108,0);
              *(double *)(param_5 + 0x80) =
                   *(double *)(param_5 + 0x80) +
                   (((double)(long)uStack_108 + (double)iStack_100 * 1e-06) -
                   ((double)(long)uVar31 + (double)iVar19 * 1e-06));
              if (dVar42 * dVar33 < *(double *)(param_4 + 0x28)) goto LAB_10995a7cc;
              pppppdVar16 = &ppppdStack_1b8;
              if (cStack_190 == '\0') {
                pppppdVar16 = &ppppdStack_160;
              }
              FUN_109959f8c(&ppppdStack_160,pppppdVar16);
              *(ulong *)(param_5 + 0x60) =
                   CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x60) >> 0x20) + 1,
                            (int)*(undefined8 *)(param_5 + 0x60) + 1);
              FUN_1099582ec(dVar33,lVar30,1,&ppppdStack_1b8);
            } while( true );
          }
          if (uStack_238 >> 0x3d == 0) {
            lVar15 = uStack_238 << 3;
            _malloc();
            if (lVar15 != 0) {
              uStack_128 = uVar31;
              lStack_130 = lVar15;
              _memcpy();
              goto LAB_10995a3b0;
            }
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
        }
        else {
          if (uStack_260 >> 0x3d == 0) {
            uVar31 = uStack_260 << 3;
            _malloc();
            if (uVar31 != 0) {
              uStack_150 = uVar24;
              uStack_158 = uVar31;
              _memcpy();
              goto LAB_10995a358;
            }
          }
LAB_10995be6c:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
        }
LAB_10995bf40:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10995bf44);
        (*pcVar11)();
      }
      uVar34 = 0x180;
    }
    else {
      uVar34 = 0x17f;
    }
  }
LAB_10995bf70:
  puVar18 = &uStack_108;
  FUN_1099ab8e4(puVar18,&UNK_10f58c97f,uVar34,&ppppdStack_160);
  func_0x0001099ab7c0();
LAB_10995c148:
  _free(lStack_3f8);
  _free(lStack_420);
  _free(lStack_3a0);
  _free(lStack_3c8);
  _free(uStack_348);
  _free(uStack_370);
  _free(uStack_2f0);
  _free(uStack_318);
  _free(uStack_298);
  _free(uStack_2c0);
  lVar30 = lStack_268;
  _free(uStack_240);
  _free(lVar30);
  __Unwind_Resume(puVar18);
  return;
LAB_10995a7cc:
  FUN_109988e2c(&uStack_108,&UNK_10f58d0de);
  if ((char)param_5[0xa7] < '\0') {
    __ZdlPv(*puVar18);
  }
  *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
  *puVar18 = uStack_108;
  *(ulong *)(param_5 + 0xa0) = uStack_f8;
  if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
    uStack_108 = 0;
    uStack_b0 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0;
    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x29f,1,FUN_1099aa768,0,in_x6,in_x7,dVar33,dVar42);
    uVar31 = *(ulong *)(param_5 + 0x98);
    puVar7 = *(ulong **)(param_5 + 0x90);
    if (-1 < (char)param_5[0xa7]) {
      uVar31 = (ulong)(byte)param_5[0xa7];
      puVar7 = puVar18;
    }
    FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
    FUN_1099ab3b0(&uStack_108);
  }
  bVar12 = false;
  bVar13 = false;
LAB_10995ad84:
  _free(uStack_188);
  _free(uStack_1b0);
  _free(lStack_130);
  _free(uStack_158);
  if (!bVar13) goto LAB_10995b8e4;
  if (!bVar12) {
LAB_10995b8d0:
    ppppdVar32 = &pppdStack_320;
LAB_10995b8d4:
    FUN_109959f8c(param_5 + 8,ppppdVar32);
    *param_5 = 1;
LAB_10995b8e4:
    _free(uStack_348);
    _free(uStack_370);
    _free(uStack_2f0);
    _free(uStack_318);
    _free(uStack_298);
    _free(uStack_2c0);
    _free(uStack_240);
    _free(lStack_268);
    return;
  }
  if (piRam000000011373cde0 == (int *)0x0) {
    iVar19 = 0x1373cde0;
    FUN_1099adbb8(0x11373cde0,0x11382bb14,&UNK_10f58c97f,3);
    if (iVar19 != 0) goto LAB_10995adec;
  }
  else if (2 < *piRam000000011373cde0) {
LAB_10995adec:
    uStack_108 = 0;
    uStack_b0 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0;
    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x1b5,0,FUN_1099aa768,0);
    lVar30 = CONCAT44(uStack_fc,iStack_100) + 0x7540;
    lVar23 = *(long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
    lVar15 = lVar30 + *(long *)(lVar23 + -0x18);
    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) & 0xfffffffb | 0x100;
    *(undefined8 *)(lVar30 + *(long *)(lVar23 + -0x18) + 0x10) = 8;
    FUN_1092b4db8(lVar30,&UNK_10f58cd4b,0x32);
    dVar42 = dStack_300;
    pppdVar45 = pppdStack_320;
    FUN_109988e2c(&ppppdStack_160,&UNK_10f58c35d);
    uVar31 = uStack_158;
    pppppdVar29 = (double *****)ppppdStack_160;
    if (-1 < (long)uStack_150) {
      uVar31 = uStack_150 >> 0x38;
      pppppdVar29 = &ppppdStack_160;
    }
    FUN_1092b4db8(lVar30,pppppdVar29,uVar31);
    if ((long)uStack_150 < 0) {
      __ZdlPv(ppppdStack_160);
    }
    FUN_1092b4db8(lVar30,&UNK_10f58cd7e,0x10);
    dVar33 = dStack_358;
    ppdVar8 = ppdStack_378;
    FUN_109988e2c(&ppppdStack_160,&UNK_10f58c35d);
    uVar31 = uStack_158;
    pppppdVar29 = (double *****)ppppdStack_160;
    if (-1 < (long)uStack_150) {
      uVar31 = uStack_150 >> 0x38;
      pppppdVar29 = &ppppdStack_160;
    }
    FUN_1092b4db8(lVar30,pppppdVar29,uVar31);
    if ((long)uStack_150 < 0) {
      __ZdlPv(ppppdStack_160);
    }
    FUN_1092b4db8(lVar30,&UNK_10f58cd8f,0x11);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ABS((double)pppdVar45 - (double)ppdVar8));
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ABS(dVar42 - dVar33));
    FUN_1099ab3b0(&uStack_108);
  }
  uVar31 = uStack_310;
  pppdVar45 = pppdStack_320;
  pppdStack_3d0 = pppdStack_320;
  if (uStack_310 == 0) {
    lStack_3c8 = 0;
    uStack_3c0 = 0;
LAB_10995afec:
    uVar31 = uStack_2e8;
    uStack_3b8 = CONCAT71(uStack_307,uStack_308);
    dStack_3b0 = dStack_300;
    cStack_3a8 = cStack_2f8;
    if (uStack_2e8 != 0) {
      if (uStack_2e8 >> 0x3d == 0) {
        lVar30 = uStack_2e8 << 3;
        _malloc();
        if (lVar30 != 0) {
          uStack_398 = uVar31;
          lStack_3a0 = lVar30;
          _memcpy();
          goto LAB_10995b044;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995bf40;
    }
    lStack_3a0 = 0;
    uStack_398 = 0;
LAB_10995b044:
    uVar31 = uStack_368;
    ppdVar8 = ppdStack_378;
    uStack_390 = CONCAT71(uStack_2df,uStack_2e0);
    dStack_388 = dStack_2d8;
    bStack_380 = bStack_2d0;
    ppdStack_428 = ppdStack_378;
    if (uStack_368 != 0) {
      if (uStack_368 >> 0x3d == 0) {
        lVar30 = uStack_368 << 3;
        _malloc();
        if (lVar30 != 0) {
          uStack_418 = uVar31;
          lStack_420 = lVar30;
          _memcpy();
          goto LAB_10995b0a8;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995bf40;
    }
    lStack_420 = 0;
    uStack_418 = 0;
LAB_10995b0a8:
    uVar31 = uStack_340;
    uStack_410 = CONCAT71(uStack_35f,uStack_360);
    dStack_408 = dStack_358;
    bStack_400 = bStack_350;
    if (uStack_340 != 0) {
      if (uStack_340 >> 0x3d == 0) {
        lVar30 = uStack_340 << 3;
        _malloc();
        if (lVar30 != 0) {
          uStack_3f0 = uVar31;
          lStack_3f8 = lVar30;
          _memcpy();
          goto LAB_10995b0f4;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995bf40;
    }
    lStack_3f8 = 0;
    uStack_3f0 = 0;
LAB_10995b0f4:
    uStack_3e8 = CONCAT71(uStack_337,uStack_338);
    uStack_3e0 = uStack_330;
    uStack_3d8 = uStack_328;
    if ((cStack_3a8 == '\x01') && ((bStack_380 & 1) != 0)) {
      if ((bStack_400 & 1) != 0) {
        if (0.0 <= ((double)ppdVar8 - (double)pppdVar45) * dStack_388) {
          FUN_109988e2c(&ppppdStack_160,&UNK_10f58c35d);
          FUN_109988e2c(&ppppdStack_1b8,&UNK_10f58c35d);
          FUN_109988e2c(&ppppuStack_210,&UNK_10f58c35d);
          FUN_109988e2c(&uStack_108,&UNK_10f58d27d);
          if ((char)param_5[0xa7] < '\0') {
            __ZdlPv(*puVar18);
          }
          *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
          *puVar18 = uStack_108;
          *(ulong *)(param_5 + 0xa0) = uStack_f8;
          uStack_f8 = uStack_f8 & 0xffffffffffffff;
          uStack_108 = uStack_108 & 0xffffffffffffff00;
          if ((long)uStack_200 < 0) {
            __ZdlPv(ppppuStack_210);
          }
          if ((long)uStack_1a8 < 0) {
            __ZdlPv(ppppdStack_1b8);
          }
          if ((long)uStack_150 < 0) {
            __ZdlPv(ppppdStack_160);
          }
          if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
            uStack_108 = 0;
            uStack_b0 = 0;
            uStack_f0 = 0;
            uStack_f8 = 0;
            uStack_e0 = 0;
            uStack_e8 = 0;
            uStack_d0 = 0;
            uStack_d8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_b8 = 0;
            FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x2f1,1,FUN_1099aa768,0);
            uVar31 = *(ulong *)(param_5 + 0x98);
            puVar7 = *(ulong **)(param_5 + 0x90);
            if (-1 < (char)param_5[0xa7]) {
              uVar31 = (ulong)(byte)param_5[0xa7];
              puVar7 = puVar18;
            }
            FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
            FUN_1099ab3b0(&uStack_108);
          }
          bVar12 = false;
          bStack_2a0 = 0;
        }
        else {
          lVar30 = *(long *)(param_4 + 0x50);
          uVar31 = *(ulong *)(lVar30 + 0x20);
          if (uVar31 == 0) {
            dVar42 = 0.0;
          }
          else {
            pdVar22 = *(double **)(lVar30 + 0x18);
            uVar20 = uVar31 + 3;
            if (-1 < (long)uVar31) {
              uVar20 = uVar31;
            }
            if (uVar31 + 1 < 3) {
              dVar42 = ABS(*pdVar22);
            }
            else {
              uVar24 = uVar31 - ((long)uVar31 >> 0x3f) & 0xfffffffffffffffe;
              auVar36._0_8_ = ABS(*pdVar22);
              auVar36._8_8_ = ABS(pdVar22[1]);
              if (3 < (long)uVar31) {
                uVar20 = uVar20 & 0xfffffffffffffffc;
                auVar40._0_8_ = ABS(pdVar22[2]);
                auVar40._8_8_ = ABS(pdVar22[3]);
                if (7 < uVar31) {
                  pdVar26 = pdVar22 + 6;
                  lVar15 = 4;
                  do {
                    auVar2._8_8_ = ABS(pdVar26[-1]);
                    auVar2._0_8_ = ABS(pdVar26[-2]);
                    auVar36 = NEON_fmax(auVar36,auVar2,8);
                    auVar3._8_8_ = ABS(pdVar26[1]);
                    auVar3._0_8_ = ABS(*pdVar26);
                    auVar40 = NEON_fmax(auVar40,auVar3,8);
                    lVar15 = lVar15 + 4;
                    pdVar26 = pdVar26 + 4;
                  } while (lVar15 < (long)uVar20);
                }
                auVar36 = NEON_fmax(auVar36,auVar40,8);
                if ((long)uVar20 < (long)uVar24) {
                  auVar41._0_8_ = ABS(pdVar22[uVar20]);
                  auVar41._8_8_ = ABS((pdVar22 + uVar20)[1]);
                  auVar36 = NEON_fmax(auVar36,auVar41,8);
                }
              }
              dVar42 = auVar36._8_8_;
              if (auVar36._8_8_ <= auVar36._0_8_) {
                dVar42 = auVar36._0_8_;
              }
              lVar15 = (long)uVar31 % 2;
              if (lVar15 != 0 && lVar15 < 0 == SBORROW8(uVar31,uVar24)) {
                pdVar22 = pdVar22 + ((long)uVar31 / 2) * 2;
                dVar33 = dVar42;
                do {
                  dVar42 = ABS(*pdVar22);
                  if (ABS(*pdVar22) <= dVar33) {
                    dVar42 = dVar33;
                  }
                  lVar15 = lVar15 + -1;
                  pdVar22 = pdVar22 + 1;
                  dVar33 = dVar42;
                } while (lVar15 != 0);
              }
            }
          }
          uVar31 = (ulong)*(uint *)(param_5 + 0x68);
          FUN_109959f8c(&ppdStack_2c8,&pppdStack_3d0);
          iVar19 = *(int *)(param_5 + 0x68);
          uVar1 = *(uint *)(param_4 + 0x30);
          if (iVar19 < (int)uVar1) {
            do {
              pppdVar45 = pppdStack_3d0;
              ppdVar8 = ppdStack_428;
              dVar33 = ABS((double)ppdStack_428 - (double)pppdStack_3d0);
              if (dVar42 * dVar33 < *(double *)(param_4 + 0x28)) {
                FUN_109988e2c(&uStack_108,&UNK_10f58d46b);
                if ((char)param_5[0xa7] < '\0') {
                  __ZdlPv(*puVar18);
                }
                *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
                *puVar18 = uStack_108;
                *(ulong *)(param_5 + 0xa0) = uStack_f8;
                if ((*(byte *)(param_4 + 0x48) & 1) != 0) goto LAB_10995b878;
                uStack_108 = 0;
                uStack_b0 = 0;
                uStack_f0 = 0;
                uStack_f8 = 0;
                uStack_e0 = 0;
                uStack_e8 = 0;
                uStack_d0 = 0;
                uStack_d8 = 0;
                uStack_c0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x316,1,FUN_1099aa768,0,in_x6,in_x7,dVar33,
                              dVar42);
                uVar31 = *(ulong *)(param_5 + 0x98);
                puVar7 = *(ulong **)(param_5 + 0x90);
                if (-1 < (char)param_5[0xa7]) {
                  uVar31 = (ulong)(byte)param_5[0xa7];
                  puVar7 = puVar18;
                }
                FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
                goto LAB_10995b870;
              }
              *(int *)(param_5 + 0x68) = iVar19 + 1;
              dStack_140 = 0.0;
              cStack_138 = '\0';
              dStack_118 = 0.0;
              uStack_110 = 0;
              uStack_150 = 0;
              ppppdStack_160 = (double ****)0x0;
              uStack_158 = 0;
              uStack_148 = uStack_148 & 0xffffffffffffff00;
              lStack_130 = 0;
              uStack_128 = 0;
              uStack_120 = uStack_120 & 0xffffffffffffff00;
              _gettimeofday(&uStack_108,0);
              iVar19 = iStack_100;
              uVar20 = uStack_108;
              ppppdVar32 = &pppdStack_3d0;
              ppppdVar37 = (double ****)&ppdStack_428;
              if ((double)ppdVar8 <= (double)pppdVar45) {
                ppppdVar32 = (double ****)&ppdStack_428;
                ppppdVar37 = &pppdStack_3d0;
              }
              uVar34 = FUN_109958cbc(*ppppdVar32,*ppppdVar37,param_4 + 8,ppppdVar32,&ppppdStack_160)
              ;
              _gettimeofday(&uStack_108,0);
              *(double *)(param_5 + 0x80) =
                   *(double *)(param_5 + 0x80) +
                   (((double)(long)uStack_108 + (double)iStack_100 * 1e-06) -
                   ((double)(long)uVar20 + (double)iVar19 * 1e-06));
              *(ulong *)(param_5 + 0x60) =
                   CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x60) >> 0x20) + 1,
                            (int)*(undefined8 *)(param_5 + 0x60) + 1);
              FUN_1099582ec(uVar34,lVar30,1,&ppdStack_2c8);
              if ((bStack_2a0 != 1) || ((bStack_278 & 1) == 0)) {
                pppdVar45 = (double ***)ppdStack_2c8;
                ppppdVar32 = (double ****)pppdStack_3d0;
                pppdVar46 = (double ***)ppdStack_428;
                FUN_109988e2c(&uStack_108,&UNK_10f58d4cf);
                if ((char)param_5[0xa7] < '\0') {
                  __ZdlPv(*puVar18);
                }
                *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
                *puVar18 = uStack_108;
                *(ulong *)(param_5 + 0xa0) = uStack_f8;
                if ((*(byte *)(param_4 + 0x48) & 1) != 0) goto LAB_10995b878;
                uStack_108 = 0;
                uStack_b0 = 0;
                uStack_f0 = 0;
                uStack_f8 = 0;
                uStack_e0 = 0;
                uStack_e8 = 0;
                uStack_d0 = 0;
                uStack_d8 = 0;
                uStack_c0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x34c,1,FUN_1099aa768,0,in_x6,in_x7,
                              pppdVar45,ppppdVar32,pppdVar46);
                uVar31 = *(ulong *)(param_5 + 0x98);
                puVar7 = *(ulong **)(param_5 + 0x90);
                if (-1 < (char)param_5[0xa7]) {
                  uVar31 = (ulong)(byte)param_5[0xa7];
                  puVar7 = puVar18;
                }
                FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
                goto LAB_10995b870;
              }
              if (piRam000000011373ce60 == (int *)0x0) {
                iVar19 = 0x1373ce60;
                FUN_1099adbb8(0x11373ce60,0x11382bb14,&UNK_10f58c97f,3);
                if (iVar19 != 0) goto LAB_10995b540;
              }
              else if (2 < *piRam000000011373ce60) {
LAB_10995b540:
                uStack_108 = 0;
                uStack_b0 = 0;
                uStack_f0 = 0;
                uStack_f8 = 0;
                uStack_e0 = 0;
                uStack_e8 = 0;
                uStack_d0 = 0;
                uStack_d8 = 0;
                uStack_c0 = 0;
                uStack_c8 = 0;
                uStack_b8 = 0;
                FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x351,0,FUN_1099aa768,0);
                lVar15 = CONCAT44(uStack_fc,iStack_100) + 0x7540;
                FUN_1092b4db8(lVar15,&UNK_10f58d571,0x10);
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                FUN_109988e2c(&ppppdStack_1b8,&UNK_10f58c35d);
                uVar20 = uStack_1b0;
                pppppdVar29 = (double *****)ppppdStack_1b8;
                if (-1 < (long)uStack_1a8) {
                  uVar20 = uStack_1a8 >> 0x38;
                  pppppdVar29 = &ppppdStack_1b8;
                }
                FUN_1092b4db8(lVar15,pppppdVar29,uVar20);
                if ((long)uStack_1a8 < 0) {
                  __ZdlPv(ppppdStack_1b8);
                }
                FUN_1092b4db8(lVar15,&UNK_10f58cd7e,0x10);
                FUN_109988e2c(&ppppdStack_1b8,&UNK_10f58c35d);
                uVar20 = uStack_1b0;
                pppppdVar29 = (double *****)ppppdStack_1b8;
                if (-1 < (long)uStack_1a8) {
                  uVar20 = uStack_1a8 >> 0x38;
                  pppppdVar29 = &ppppdStack_1b8;
                }
                FUN_1092b4db8(lVar15,pppppdVar29,uVar20);
                if ((long)uStack_1a8 < 0) {
                  __ZdlPv(ppppdStack_1b8);
                }
                FUN_1092b4db8(lVar15,&UNK_10f58d582,0x17);
                FUN_109988e2c(&ppppdStack_1b8,&UNK_10f58c35d);
                uVar20 = uStack_1b0;
                pppppdVar29 = (double *****)ppppdStack_1b8;
                if (-1 < (long)uStack_1a8) {
                  uVar20 = uStack_1a8 >> 0x38;
                  pppppdVar29 = &ppppdStack_1b8;
                }
                FUN_1092b4db8(lVar15,pppppdVar29,uVar20);
                if ((long)uStack_1a8 < 0) {
                  __ZdlPv(ppppdStack_1b8);
                }
                FUN_1099ab3b0(&uStack_108);
              }
              bVar12 = false;
              bVar13 = false;
              if (dStack_2a8 <= dVar43 + (double)ppdStack_2c8 * (double)*pppppdVar27 * dVar10) {
                bVar12 = false;
                bVar13 = true;
                if (!NAN(dStack_2a8) && !NAN(dStack_3b0)) {
                  bVar12 = dStack_2a8 < dStack_3b0;
                  bVar13 = false;
                }
              }
              if (bVar12 == bVar13) {
                ppppdVar32 = (double ****)&ppdStack_428;
              }
              else {
                if (ABS(dStack_280) <= -((double)*pppppdVar28 * dVar10)) {
                  if (piRam000000011373ce80 == (int *)0x0) {
                    iVar19 = 0x1373ce80;
                    FUN_1099adbb8(0x11373ce80,0x11382bb14,&UNK_10f58c97f,3);
                    if (iVar19 != 0) goto LAB_10995bb04;
                  }
                  else if (2 < *piRam000000011373ce80) {
LAB_10995bb04:
                    uStack_108 = 0;
                    uStack_b0 = 0;
                    uStack_f0 = 0;
                    uStack_f8 = 0;
                    uStack_e0 = 0;
                    uStack_e8 = 0;
                    uStack_d0 = 0;
                    uStack_d8 = 0;
                    uStack_c0 = 0;
                    uStack_c8 = 0;
                    uStack_b8 = 0;
                    FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x365,0,FUN_1099aa768,0);
                    lVar30 = CONCAT44(uStack_fc,iStack_100) + 0x7540;
                    lVar23 = *(long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
                    lVar15 = lVar30 + *(long *)(lVar23 + -0x18);
                    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) & 0xfffffffb | 0x100;
                    *(undefined8 *)(lVar30 + *(long *)(lVar23 + -0x18) + 0x10) = 8;
                    FUN_1092b4db8(lVar30,&UNK_10f58d59a,0x1c);
                    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(ppdStack_2c8);
                    FUN_1092b4db8();
                    FUN_1099ab3b0(&uStack_108);
                  }
                  bVar12 = true;
                  goto LAB_10995b87c;
                }
                ppppdVar32 = &pppdStack_3d0;
                if (0.0 <= dStack_280 * ((double)ppdStack_428 - (double)pppdStack_3d0)) {
                  FUN_109959f8c(&ppdStack_428,&pppdStack_3d0);
                }
              }
              FUN_109959f8c(ppppdVar32,&ppdStack_2c8);
              FUN_109959f8c(&ppdStack_2c8,&pppdStack_3d0);
              iVar19 = *(int *)(param_5 + 0x68);
              uVar1 = *(uint *)(param_4 + 0x30);
            } while (iVar19 < (int)uVar1);
          }
          uVar20 = (ulong)uVar1;
          FUN_109988e2c(&uStack_108,&UNK_10f58d3b8);
          if ((char)param_5[0xa7] < '\0') {
            __ZdlPv(*puVar18);
          }
          *(ulong *)(param_5 + 0x98) = CONCAT44(uStack_fc,iStack_100);
          *puVar18 = uStack_108;
          *(ulong *)(param_5 + 0xa0) = uStack_f8;
          if ((*(byte *)(param_4 + 0x48) & 1) == 0) {
            uStack_108 = 0;
            uStack_b0 = 0;
            uStack_f0 = 0;
            uStack_f8 = 0;
            uStack_e0 = 0;
            uStack_e8 = 0;
            uStack_d0 = 0;
            uStack_d8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_b8 = 0;
            FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x308,1,FUN_1099aa768,0,in_x6,in_x7,uVar20,
                          uVar31);
            uVar31 = *(ulong *)(param_5 + 0x98);
            puVar7 = *(ulong **)(param_5 + 0x90);
            if (-1 < (char)param_5[0xa7]) {
              uVar31 = (ulong)(byte)param_5[0xa7];
              puVar7 = puVar18;
            }
            FUN_1092b4db8(CONCAT44(uStack_fc,iStack_100) + 0x7540,puVar7,uVar31);
LAB_10995b870:
            FUN_1099ab3b0(&uStack_108);
          }
LAB_10995b878:
          bVar12 = false;
        }
LAB_10995b87c:
        bVar9 = bStack_2a0;
        _free(lStack_3f8);
        _free(lStack_420);
        _free(lStack_3a0);
        _free(lStack_3c8);
        if ((!bVar12) && ((bVar9 & 1) == 0)) goto LAB_10995b8e4;
        if (bStack_2a0 != 1) goto LAB_10995b8d0;
        ppppdVar32 = &pppdStack_320;
        if (dStack_2a8 <= dStack_300) {
          ppppdVar32 = (double ****)&ppdStack_2c8;
        }
        goto LAB_10995b8d4;
      }
      uStack_108 = 0;
      uStack_b0 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x2d5,3,FUN_1099aa768,0);
      plVar17 = (long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
      FUN_1092b4db8(plVar17,&UNK_10f58d1ef,0x2a);
      lVar30 = *plVar17;
      lVar15 = *(long *)(lVar30 + -0x18);
      *(uint *)((long)plVar17 + lVar15 + 8) =
           *(uint *)((long)plVar17 + lVar15 + 8) & 0xfffffffb | 0x100;
      *(undefined8 *)((long)plVar17 + *(long *)(lVar30 + -0x18) + 0x10) = 8;
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_109957bb0();
      FUN_1092b4db8();
      FUN_109957bb0();
      FUN_1092b4db8();
      FUN_109957bb0();
    }
    else {
      uStack_108 = 0;
      uStack_b0 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      FUN_1099a9f0c(&uStack_108,&UNK_10f58c97f,0x2c4,3,FUN_1099aa768,0);
      plVar17 = (long *)(CONCAT44(uStack_fc,iStack_100) + 0x7540);
      FUN_1092b4db8(plVar17,&UNK_10f58d132,0x4a);
      lVar30 = *plVar17;
      lVar15 = *(long *)(lVar30 + -0x18);
      *(uint *)((long)plVar17 + lVar15 + 8) =
           *(uint *)((long)plVar17 + lVar15 + 8) & 0xfffffffb | 0x100;
      *(undefined8 *)((long)plVar17 + *(long *)(lVar30 + -0x18) + 0x10) = 8;
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_109957bb0();
      FUN_1092b4db8();
      FUN_109957bb0();
      FUN_1092b4db8();
      FUN_109957bb0();
    }
    puVar18 = &uStack_108;
    func_0x0001099ab7c0(puVar18);
    goto LAB_10995c148;
  }
  if (uStack_310 >> 0x3d == 0) {
    lVar30 = uStack_310 << 3;
    _malloc();
    if (lVar30 != 0) {
      uStack_3c0 = uVar31;
      lStack_3c8 = lVar30;
      _memcpy();
      goto LAB_10995afec;
    }
  }
  goto LAB_10995be6c;
}



/* Entry: 10995c1bc; end: 10995c1cb;  */

void FUN_10995c1bc(void)

{
  return;
}



/* Entry: 10995c1cc; end: 10995c22b;  */

long * FUN_10995c1cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    _free(*(undefined8 *)(lVar2 + -0x28));
    _free(*(undefined8 *)(lVar2 + -0x50));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10995c22c; end: 10995c23f;  */

undefined8 * FUN_10995c22c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar2 = *param_2;
  uVar4 = param_2[2];
  if (uVar4 == 0) {
LAB_10995c29c:
    lVar3 = 0;
  }
  else {
    if (uVar4 >> 0x3d != 0) {
LAB_10995c27c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995c29c;
    }
    lVar3 = uVar4 << 3;
    _malloc();
    if (lVar3 == 0) goto LAB_10995c27c;
  }
  puVar2[1] = lVar3;
  puVar2[2] = uVar4;
  if (param_2[2] != 0) {
    _memcpy();
  }
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_2 + 5);
  puVar2[4] = uVar6;
  puVar2[3] = uVar5;
  uVar4 = param_2[7];
  if (uVar4 != 0) {
    if (uVar4 >> 0x3d == 0) {
      lVar3 = uVar4 << 3;
      _malloc();
      if (lVar3 != 0) goto LAB_10995c30c;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10995c308);
    (*pcVar1)();
  }
  lVar3 = 0;
LAB_10995c30c:
  puVar2[6] = lVar3;
  puVar2[7] = uVar4;
  if (param_2[7] != 0) {
    _memcpy();
  }
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(param_2 + 10);
  puVar2[9] = uVar6;
  puVar2[8] = uVar5;
  return puVar2;
}



/* Entry: 10995c240; end: 10995c35b;  */

undefined8 * FUN_10995c240(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[2];
  if (uVar3 == 0) {
LAB_10995c29c:
    lVar2 = 0;
  }
  else {
    if (uVar3 >> 0x3d != 0) {
LAB_10995c27c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995c29c;
    }
    lVar2 = uVar3 << 3;
    _malloc();
    if (lVar2 == 0) goto LAB_10995c27c;
  }
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  if (param_2[2] != 0) {
    _memcpy();
  }
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  uVar3 = param_2[7];
  if (uVar3 != 0) {
    if (uVar3 >> 0x3d == 0) {
      lVar2 = uVar3 << 3;
      _malloc();
      if (lVar2 != 0) goto LAB_10995c30c;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10995c308);
    (*pcVar1)();
  }
  lVar2 = 0;
LAB_10995c30c:
  param_1[6] = lVar2;
  param_1[7] = uVar3;
  if (param_2[7] != 0) {
    _memcpy();
  }
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  return param_1;
}



/* Entry: 10995c35c; end: 10995c4e3;  */

void FUN_10995c35c(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = param_2[1];
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar5 = (undefined8 *)0x8;
      __Znwm();
      *puVar5 = &PTR_FUN_110b1e5d8;
      goto LAB_10995c4a4;
    }
    if (iVar1 == 1) {
      puVar5 = (undefined8 *)0x18;
      __Znwm();
      uVar2 = param_2[2];
      uVar6 = *(undefined8 *)(param_2 + 4);
      *puVar5 = &PTR_FUN_110b1e618;
      *(undefined4 *)(puVar5 + 1) = uVar2;
      puVar5[2] = uVar6;
      goto LAB_10995c4a4;
    }
  }
  else {
    if (iVar1 == 2) {
      puVar5 = (undefined8 *)0x88;
      __Znwm();
      uVar2 = *param_2;
      uVar3 = param_2[6];
      uVar4 = *(undefined1 *)(param_2 + 7);
      *puVar5 = &PTR_FUN_110b1e658;
      FUN_109965408(puVar5 + 1,uVar2,uVar3,uVar4);
      *(undefined1 *)(puVar5 + 0x10) = 1;
      goto LAB_10995c4a4;
    }
    if (iVar1 == 3) {
      puVar5 = (undefined8 *)0x30;
      __Znwm();
      FUN_10995d52c();
      goto LAB_10995c4a4;
    }
  }
  uStack_90 = 0;
  uStack_38 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_1099a9f0c(&uStack_90,&UNK_10f58d5dd,0x16e,2,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_88 + 0x7540,&UNK_10f58d66b,0x24);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_1099ab3b0(&uStack_90);
  puVar5 = (undefined8 *)0x0;
LAB_10995c4a4:
  *param_1 = puVar5;
  return;
}



/* Entry: 10995c4e4; end: 10995c4eb;  */

void FUN_10995c4e4(void)

{
  return;
}



/* Entry: 10995c4ec; end: 10995c5c7;  */

undefined8 FUN_10995c4ec(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  double *pdVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  pdVar3 = *(double **)(param_3 + 8);
  uVar1 = *(ulong *)(param_3 + 0x10);
  pdVar2 = (double *)*param_4;
  if (param_4[1] == uVar1) goto LAB_10995c558;
  _free();
  if ((long)uVar1 < 1) {
LAB_10995c550:
    pdVar2 = (double *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
LAB_10995c530:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995c550;
    }
    pdVar2 = (double *)(uVar1 << 3);
    _malloc();
    if (pdVar2 == (double *)0x0) goto LAB_10995c530;
  }
  *param_4 = (long)pdVar2;
  param_4[1] = uVar1;
LAB_10995c558:
  uVar4 = uVar1 - ((long)uVar1 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar1) {
    lVar5 = 0;
    pdVar6 = pdVar2;
    pdVar7 = pdVar3;
    do {
      dVar8 = *pdVar7;
      pdVar6[1] = -pdVar7[1];
      *pdVar6 = -dVar8;
      lVar5 = lVar5 + 2;
      pdVar6 = pdVar6 + 2;
      pdVar7 = pdVar7 + 2;
    } while (lVar5 < (long)uVar4);
  }
  lVar5 = (long)uVar1 % 2;
  if (lVar5 != 0 && (long)uVar4 <= (long)uVar1) {
    pdVar3 = pdVar3 + ((long)uVar1 / 2) * 2;
    pdVar2 = pdVar2 + ((long)uVar1 / 2) * 2;
    do {
      *pdVar2 = -*pdVar3;
      lVar5 = lVar5 + -1;
      pdVar3 = pdVar3 + 1;
      pdVar2 = pdVar2 + 1;
    } while (lVar5 != 0);
  }
  return 1;
}



/* Entry: 10995c5c8; end: 10995c5cf;  */

void FUN_10995c5c8(void)

{
  return;
}



/* Entry: 10995c5d0; end: 10995ce3f;  */

undefined8 * FUN_10995c5d0(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  code *pcVar2;
  double *pdVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  long lVar11;
  double *pdVar12;
  ulong uVar13;
  double *pdVar14;
  double *pdVar15;
  long *plVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2) {
    pdVar17 = *(double **)(param_3 + 8);
    lVar8 = *(long *)(param_2 + 8);
    uVar9 = *(ulong *)(param_2 + 0x10);
    if (0 < (long)uVar9) {
      if (uVar9 >> 0x3d == 0) {
        pdVar15 = (double *)(uVar9 << 3);
        _malloc();
        if (pdVar15 != (double *)0x0) {
          if (uVar9 == 1) {
            uVar13 = 0;
          }
          else {
            lVar11 = 0;
            uVar6 = 0;
            uVar13 = uVar9 & 0x1ffffffffffffffe;
            do {
              dVar18 = *(double *)((long)pdVar17 + lVar11);
              pdVar7 = (double *)(lVar8 + lVar11);
              dVar19 = *pdVar7;
              ((double *)((long)pdVar15 + lVar11))[1] =
                   ((double *)((long)pdVar17 + lVar11))[1] - pdVar7[1];
              *(double *)((long)pdVar15 + lVar11) = dVar18 - dVar19;
              uVar6 = uVar6 + 2;
              lVar11 = lVar11 + 0x10;
            } while (uVar6 < uVar13);
          }
          goto LAB_10995c840;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995cd90;
    }
    pdVar15 = (double *)0x0;
    uVar13 = -(-uVar9 & 0xfffffffffffffffe);
LAB_10995c840:
    lVar11 = uVar9 - uVar13;
    if (lVar11 != 0 && (long)uVar13 <= (long)uVar9) {
      pdVar7 = pdVar15 + uVar13;
      pdVar3 = (double *)(lVar8 + uVar13 * 8);
      pdVar10 = pdVar17 + uVar13;
      do {
        *pdVar7 = *pdVar10 - *pdVar3;
        lVar11 = lVar11 + -1;
        pdVar7 = pdVar7 + 1;
        pdVar3 = pdVar3 + 1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
    if (uVar9 == 0) {
      dVar18 = 0.0;
      dVar19 = 0.0;
    }
    else {
      uVar6 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9;
      }
      if (uVar9 + 1 < 3) {
        dVar18 = *pdVar17 * *pdVar15;
        dVar19 = *pdVar15 * **(double **)(param_2 + 0x28);
      }
      else {
        uVar6 = uVar6 & 0xfffffffffffffffc;
        uVar13 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
        dVar18 = *pdVar17 * *pdVar15;
        dVar19 = pdVar17[1] * pdVar15[1];
        if (3 < (long)uVar9) {
          dVar20 = pdVar17[2] * pdVar15[2];
          dVar21 = pdVar17[3] * pdVar15[3];
          if (7 < uVar9) {
            pdVar7 = pdVar15 + 6;
            pdVar3 = pdVar17 + 6;
            lVar8 = 4;
            do {
              dVar18 = dVar18 + pdVar3[-2] * pdVar7[-2];
              dVar19 = dVar19 + pdVar3[-1] * pdVar7[-1];
              dVar20 = dVar20 + *pdVar3 * *pdVar7;
              dVar21 = dVar21 + pdVar3[1] * pdVar7[1];
              lVar8 = lVar8 + 4;
              pdVar7 = pdVar7 + 4;
              pdVar3 = pdVar3 + 4;
            } while (lVar8 < (long)uVar6);
          }
          dVar18 = dVar20 + dVar18;
          dVar19 = dVar21 + dVar19;
          if ((long)uVar6 < (long)uVar13) {
            dVar18 = dVar18 + pdVar17[uVar6] * pdVar15[uVar6];
            dVar19 = dVar19 + (pdVar17 + uVar6)[1] * (pdVar15 + uVar6)[1];
          }
        }
        lVar11 = (long)uVar9 / 2;
        dVar18 = dVar18 + dVar19;
        lVar8 = (long)uVar9 % 2;
        if (lVar8 != 0 && (long)uVar13 <= (long)uVar9) {
          pdVar7 = pdVar15 + lVar11 * 2;
          pdVar3 = pdVar17 + lVar11 * 2;
          do {
            dVar18 = dVar18 + *pdVar3 * *pdVar7;
            lVar8 = lVar8 + -1;
            pdVar7 = pdVar7 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar8 != 0);
        }
        pdVar7 = *(double **)(param_2 + 0x28);
        dVar19 = *pdVar15 * *pdVar7;
        dVar20 = pdVar15[1] * pdVar7[1];
        if (3 < (long)uVar9) {
          dVar21 = pdVar7[2] * pdVar15[2];
          dVar22 = pdVar7[3] * pdVar15[3];
          if (7 < uVar9) {
            pdVar3 = pdVar15 + 6;
            pdVar10 = pdVar7 + 6;
            lVar8 = 4;
            do {
              dVar19 = dVar19 + pdVar10[-2] * pdVar3[-2];
              dVar20 = dVar20 + pdVar10[-1] * pdVar3[-1];
              dVar21 = dVar21 + *pdVar10 * *pdVar3;
              dVar22 = dVar22 + pdVar10[1] * pdVar3[1];
              lVar8 = lVar8 + 4;
              pdVar3 = pdVar3 + 4;
              pdVar10 = pdVar10 + 4;
            } while (lVar8 < (long)uVar6);
          }
          dVar19 = dVar21 + dVar19;
          dVar20 = dVar22 + dVar20;
          if ((long)uVar6 < (long)uVar13) {
            dVar19 = dVar19 + pdVar7[uVar6] * pdVar15[uVar6];
            dVar20 = dVar20 + (pdVar7 + uVar6)[1] * (pdVar15 + uVar6)[1];
          }
        }
        dVar19 = dVar19 + dVar20;
        lVar8 = (long)uVar9 % 2;
        if (lVar8 != 0 && (long)uVar13 <= (long)uVar9) {
          pdVar3 = pdVar15 + lVar11 * 2;
          pdVar7 = pdVar7 + lVar11 * 2;
          do {
            dVar19 = dVar19 + *pdVar7 * *pdVar3;
            lVar8 = lVar8 + -1;
            pdVar3 = pdVar3 + 1;
            pdVar7 = pdVar7 + 1;
          } while (lVar8 != 0);
        }
      }
    }
  }
  else if (iVar1 == 1) {
    pdVar17 = *(double **)(param_3 + 8);
    lVar8 = *(long *)(param_2 + 8);
    uVar9 = *(ulong *)(param_2 + 0x10);
    if (0 < (long)uVar9) {
      if (uVar9 >> 0x3d == 0) {
        pdVar15 = (double *)(uVar9 << 3);
        _malloc();
        if (pdVar15 != (double *)0x0) {
          if (uVar9 == 1) {
            uVar13 = 0;
          }
          else {
            lVar11 = 0;
            uVar6 = 0;
            uVar13 = uVar9 & 0x1ffffffffffffffe;
            do {
              dVar18 = *(double *)((long)pdVar17 + lVar11);
              pdVar7 = (double *)(lVar8 + lVar11);
              dVar19 = *pdVar7;
              ((double *)((long)pdVar15 + lVar11))[1] =
                   ((double *)((long)pdVar17 + lVar11))[1] - pdVar7[1];
              *(double *)((long)pdVar15 + lVar11) = dVar18 - dVar19;
              uVar6 = uVar6 + 2;
              lVar11 = lVar11 + 0x10;
            } while (uVar6 < uVar13);
          }
          goto LAB_10995c6f0;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995cd90;
    }
    pdVar15 = (double *)0x0;
    uVar13 = -(-uVar9 & 0xfffffffffffffffe);
LAB_10995c6f0:
    lVar11 = uVar9 - uVar13;
    if (lVar11 != 0 && (long)uVar13 <= (long)uVar9) {
      pdVar7 = pdVar15 + uVar13;
      pdVar3 = (double *)(lVar8 + uVar13 * 8);
      pdVar10 = pdVar17 + uVar13;
      do {
        *pdVar7 = *pdVar10 - *pdVar3;
        lVar11 = lVar11 + -1;
        pdVar7 = pdVar7 + 1;
        pdVar3 = pdVar3 + 1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
    }
    if (uVar9 == 0) {
      dVar18 = 0.0;
    }
    else {
      uVar6 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9;
      }
      if (uVar9 + 1 < 3) {
        dVar18 = *pdVar17 * *pdVar15;
      }
      else {
        uVar13 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
        dVar18 = *pdVar17 * *pdVar15;
        dVar19 = pdVar17[1] * pdVar15[1];
        if (3 < (long)uVar9) {
          uVar6 = uVar6 & 0xfffffffffffffffc;
          dVar20 = pdVar17[2] * pdVar15[2];
          dVar21 = pdVar17[3] * pdVar15[3];
          if (7 < uVar9) {
            pdVar7 = pdVar15 + 6;
            pdVar3 = pdVar17 + 6;
            lVar8 = 4;
            do {
              dVar18 = dVar18 + pdVar3[-2] * pdVar7[-2];
              dVar19 = dVar19 + pdVar3[-1] * pdVar7[-1];
              dVar20 = dVar20 + *pdVar3 * *pdVar7;
              dVar21 = dVar21 + pdVar3[1] * pdVar7[1];
              lVar8 = lVar8 + 4;
              pdVar7 = pdVar7 + 4;
              pdVar3 = pdVar3 + 4;
            } while (lVar8 < (long)uVar6);
          }
          dVar18 = dVar20 + dVar18;
          dVar19 = dVar21 + dVar19;
          if ((long)uVar6 < (long)uVar13) {
            dVar18 = dVar18 + pdVar17[uVar6] * pdVar15[uVar6];
            dVar19 = dVar19 + (pdVar17 + uVar6)[1] * (pdVar15 + uVar6)[1];
          }
        }
        dVar18 = dVar18 + dVar19;
        lVar8 = (long)uVar9 % 2;
        if (lVar8 != 0 && (long)uVar13 <= (long)uVar9) {
          pdVar7 = pdVar15 + ((long)uVar9 / 2) * 2;
          pdVar3 = pdVar17 + ((long)uVar9 / 2) * 2;
          do {
            dVar18 = dVar18 + *pdVar3 * *pdVar7;
            lVar8 = lVar8 + -1;
            pdVar7 = pdVar7 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar8 != 0);
        }
      }
    }
    dVar19 = *(double *)(param_2 + 0x18);
  }
  else {
    if (iVar1 != 0) {
      uStack_c0 = 0;
      uStack_68 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      FUN_1099a9f0c(&uStack_c0,&UNK_10f58d5dd,0x51,3,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58d690,0x2b);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      puVar4 = &uStack_c0;
      func_0x0001099ab7c0();
      _free(0);
      __Unwind_Resume();
      if (puVar4[0xf] != 0) {
        plVar16 = (long *)puVar4[0xe];
        plVar5 = *(long **)(puVar4[0xd] + 8);
        lVar8 = *plVar16;
        *(long **)(lVar8 + 8) = plVar5;
        *plVar5 = lVar8;
        puVar4[0xf] = 0;
        while (plVar16 != puVar4 + 0xd) {
          plVar16 = (long *)plVar16[1];
          __ZdlPv();
        }
      }
      _free(puVar4[0xb]);
      _free(puVar4[8]);
      _free(puVar4[5]);
      return puVar4;
    }
    pdVar15 = (double *)0x0;
    dVar18 = *(double *)(param_3 + 0x18);
    dVar19 = *(double *)(param_2 + 0x18);
    pdVar17 = *(double **)(param_3 + 8);
  }
  dVar18 = dVar18 / dVar19;
  pdVar7 = *(double **)(param_2 + 0x28);
  uVar9 = *(ulong *)(param_2 + 0x30);
  pdVar3 = (double *)*param_4;
  if (param_4[1] != uVar9) {
    _free();
    if (0 < (long)uVar9) {
      if (uVar9 >> 0x3d == 0) {
        pdVar3 = (double *)(uVar9 << 3);
        _malloc();
        if (pdVar3 != (double *)0x0) goto LAB_10995ca78;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995cd90;
    }
    pdVar3 = (double *)0x0;
LAB_10995ca78:
    *param_4 = (long)pdVar3;
    param_4[1] = uVar9;
  }
  uVar6 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar9) {
    lVar8 = 0;
    pdVar10 = pdVar3;
    pdVar12 = pdVar17;
    pdVar14 = pdVar7;
    do {
      dVar19 = *pdVar12;
      dVar20 = *pdVar14;
      pdVar10[1] = pdVar14[1] * dVar18 - pdVar12[1];
      *pdVar10 = dVar20 * dVar18 - dVar19;
      lVar8 = lVar8 + 2;
      pdVar10 = pdVar10 + 2;
      pdVar12 = pdVar12 + 2;
      pdVar14 = pdVar14 + 2;
    } while (lVar8 < (long)uVar6);
  }
  lVar8 = (long)uVar9 % 2;
  if (lVar8 != 0 && (long)uVar6 <= (long)uVar9) {
    lVar11 = (long)uVar9 / 2;
    pdVar7 = pdVar7 + lVar11 * 2;
    pdVar17 = pdVar17 + lVar11 * 2;
    pdVar3 = pdVar3 + lVar11 * 2;
    do {
      *pdVar3 = dVar18 * *pdVar7 - *pdVar17;
      lVar8 = lVar8 + -1;
      pdVar7 = pdVar7 + 1;
      pdVar17 = pdVar17 + 1;
      pdVar3 = pdVar3 + 1;
    } while (lVar8 != 0);
  }
  uVar9 = param_4[1];
  if (uVar9 == 0) {
    dVar18 = 0.0;
  }
  else {
    pdVar17 = *(double **)(param_3 + 8);
    pdVar7 = (double *)*param_4;
    uVar6 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar6 = uVar9;
    }
    if (uVar9 + 1 < 3) {
      dVar18 = *pdVar17 * *pdVar7;
    }
    else {
      uVar13 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
      dVar18 = *pdVar17 * *pdVar7;
      dVar19 = pdVar17[1] * pdVar7[1];
      if (3 < (long)uVar9) {
        uVar6 = uVar6 & 0xfffffffffffffffc;
        dVar20 = pdVar17[2] * pdVar7[2];
        dVar21 = pdVar17[3] * pdVar7[3];
        if (7 < uVar9) {
          pdVar3 = pdVar7 + 6;
          pdVar10 = pdVar17 + 6;
          lVar8 = 4;
          do {
            dVar18 = dVar18 + pdVar10[-2] * pdVar3[-2];
            dVar19 = dVar19 + pdVar10[-1] * pdVar3[-1];
            dVar20 = dVar20 + *pdVar10 * *pdVar3;
            dVar21 = dVar21 + pdVar10[1] * pdVar3[1];
            lVar8 = lVar8 + 4;
            pdVar3 = pdVar3 + 4;
            pdVar10 = pdVar10 + 4;
          } while (lVar8 < (long)uVar6);
        }
        dVar18 = dVar20 + dVar18;
        dVar19 = dVar21 + dVar19;
        if ((long)uVar6 < (long)uVar13) {
          dVar18 = dVar18 + pdVar17[uVar6] * pdVar7[uVar6];
          dVar19 = dVar19 + (pdVar17 + uVar6)[1] * (pdVar7 + uVar6)[1];
        }
      }
      dVar18 = dVar18 + dVar19;
      lVar8 = (long)uVar9 % 2;
      if (lVar8 != 0 && lVar8 < 0 == SBORROW8(uVar9,uVar13)) {
        pdVar17 = pdVar17 + ((long)uVar9 / 2) * 2;
        pdVar7 = pdVar7 + ((long)uVar9 / 2) * 2;
        do {
          dVar18 = dVar18 + *pdVar17 * *pdVar7;
          lVar8 = lVar8 + -1;
          pdVar17 = pdVar17 + 1;
          pdVar7 = pdVar7 + 1;
        } while (lVar8 != 0);
      }
    }
  }
  if (dVar18 <= -*(double *)(param_1 + 0x10)) goto LAB_10995cd20;
  uStack_c0 = 0;
  uStack_68 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  FUN_1099a9f0c(&uStack_c0,&UNK_10f58d5dd,0x58,1,FUN_1099aa768,0);
  FUN_1092b4db8(lStack_b8 + 0x7540,&UNK_10f58d6bc,0x2b);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar18);
  FUN_1099ab3b0(&uStack_c0);
  pdVar17 = *(double **)(param_3 + 8);
  uVar9 = *(ulong *)(param_3 + 0x10);
  pdVar7 = (double *)*param_4;
  if (param_4[1] != uVar9) {
    _free();
    if (0 < (long)uVar9) {
      if (uVar9 >> 0x3d == 0) {
        pdVar7 = (double *)(uVar9 << 3);
        _malloc();
        if (pdVar7 != (double *)0x0) goto LAB_10995ccc0;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
LAB_10995cd90:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10995cd94);
      (*pcVar2)();
    }
    pdVar7 = (double *)0x0;
LAB_10995ccc0:
    *param_4 = (long)pdVar7;
    param_4[1] = uVar9;
  }
  uVar6 = uVar9 - ((long)uVar9 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (long)uVar9) {
    lVar8 = 0;
    pdVar3 = pdVar7;
    pdVar10 = pdVar17;
    do {
      dVar18 = *pdVar10;
      pdVar3[1] = -pdVar10[1];
      *pdVar3 = -dVar18;
      lVar8 = lVar8 + 2;
      pdVar3 = pdVar3 + 2;
      pdVar10 = pdVar10 + 2;
    } while (lVar8 < (long)uVar6);
  }
  lVar8 = (long)uVar9 % 2;
  if (lVar8 != 0 && (long)uVar6 <= (long)uVar9) {
    pdVar17 = pdVar17 + ((long)uVar9 / 2) * 2;
    pdVar7 = pdVar7 + ((long)uVar9 / 2) * 2;
    do {
      *pdVar7 = -*pdVar17;
      lVar8 = lVar8 + -1;
      pdVar17 = pdVar17 + 1;
      pdVar7 = pdVar7 + 1;
    } while (lVar8 != 0);
  }
LAB_10995cd20:
  _free(pdVar15);
  return (undefined8 *)0x1;
}



/* Entry: 10995ce40; end: 10995cf3f;  */

long FUN_10995ce40(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar3 = *(long **)(param_1 + 0x70);
    plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x78) = 0;
    while (plVar3 != (long *)(param_1 + 0x68)) {
      plVar3 = (long *)plVar3[1];
      __ZdlPv();
    }
  }
  _free(*(undefined8 *)(param_1 + 0x58));
  _free(*(undefined8 *)(param_1 + 0x40));
  _free(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 10995cf40; end: 10995d52b;  */

long * FUN_10995cf40(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined1 uVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  double *pdVar15;
  long *plVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    lStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&lStack_a0,&UNK_10f58d5dd,0x72,3,FUN_1099aa768,0);
    FUN_1092b4db8(uStack_98 + 0x7540,&UNK_10f58d6e8,0x24);
    FUN_1092b4db8();
    FUN_1092b4db8();
    iVar5 = 0xf58d789;
    uVar6 = 0xb;
    FUN_1092b4db8();
    plVar4 = &lStack_a0;
    func_0x0001099ab7c0();
    lVar7 = 0;
    lVar2 = 0;
    *(int *)(plVar4 + 1) = iVar5;
    *plVar4 = (long)&PTR_FUN_110b1e698;
    *(undefined1 *)((long)plVar4 + 0xc) = uVar6;
    *(undefined2 *)(plVar4 + 5) = 0x100;
    plVar16 = plVar4 + 2;
    *plVar16 = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    if (999 < iVar5) {
      uStack_160 = 0;
      uStack_108 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_110 = 0;
      FUN_1099a9f0c(&uStack_160,&UNK_10f58d5dd,0x99,1,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_158 + 0x7540,&UNK_10f58d830,0x25);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1099ab3b0(&uStack_160);
      lVar2 = plVar4[3];
      lVar7 = plVar4[4];
    }
    lVar3 = (long)iVar5;
    if ((lVar2 != iVar5) || (lVar7 != lVar3)) {
      if (iVar5 != 0) {
        lVar14 = 0;
        if (lVar3 != 0) {
          lVar14 = 0x7fffffffffffffff / lVar3;
        }
        if (lVar14 < lVar3) goto LAB_10995d6a8;
      }
      uVar17 = (long)iVar5 * (long)iVar5;
      if (lVar2 * lVar7 - uVar17 != 0) {
        _free(*plVar16);
        if (iVar5 == 0) {
          lVar2 = 0;
        }
        else {
          if (uVar17 >> 0x3d != 0) {
LAB_10995d6a8:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10995d6cc);
            (*pcVar1)();
          }
          lVar2 = uVar17 * 8;
          _malloc();
          if (lVar2 == 0) goto LAB_10995d6a8;
        }
        *plVar16 = lVar2;
      }
      plVar4[3] = lVar3;
      plVar4[4] = lVar3;
    }
    if (0 < iVar5) {
      lVar2 = 0;
      lVar7 = *plVar16;
      do {
        lVar14 = 0;
        do {
          uVar22 = 0x3ff0000000000000;
          if (lVar2 != lVar14) {
            uVar22 = 0;
          }
          *(undefined8 *)(lVar7 + lVar14 * 8) = uVar22;
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar14);
        lVar2 = lVar2 + 1;
        lVar7 = lVar7 + lVar3 * 8;
      } while (lVar2 != lVar3);
    }
    return plVar4;
  }
  uVar17 = *(ulong *)(param_2 + 0x30);
  dVar19 = *(double *)(param_2 + 0x40);
  lStack_a0 = 0;
  uStack_98 = 0;
  if (uVar17 != 0) {
    if (0 < (long)uVar17) {
      if (uVar17 >> 0x3d == 0) {
        lVar2 = uVar17 << 3;
        _malloc();
        if (lVar2 != 0) {
          lVar7 = *(long *)(param_2 + 0x28);
          lStack_a0 = lVar2;
          if (uVar17 == 1) {
            uVar9 = 0;
          }
          else {
            lVar3 = 0;
            uVar10 = 0;
            uVar9 = uVar17 & 0x1ffffffffffffffe;
            do {
              dVar18 = *(double *)(lVar7 + lVar3);
              ((double *)(lVar2 + lVar3))[1] = ((double *)(lVar7 + lVar3))[1] * dVar19;
              *(double *)(lVar2 + lVar3) = dVar18 * dVar19;
              uVar10 = uVar10 + 2;
              lVar3 = lVar3 + 0x10;
            } while (uVar10 < uVar9);
          }
          goto LAB_10995d000;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995d4e8;
    }
    lVar7 = *(long *)(param_2 + 0x28);
    uVar9 = -(-uVar17 & 0xfffffffffffffffe);
LAB_10995d000:
    lVar2 = uVar17 - uVar9;
    uStack_98 = uVar17;
    if (lVar2 != 0 && (long)uVar9 <= (long)uVar17) {
      pdVar8 = (double *)(lVar7 + uVar9 * 8);
      pdVar11 = (double *)(lStack_a0 + uVar9 * 8);
      do {
        *pdVar11 = dVar19 * *pdVar8;
        lVar2 = lVar2 + -1;
        pdVar8 = pdVar8 + 1;
        pdVar11 = pdVar11 + 1;
      } while (lVar2 != 0);
    }
  }
  lStack_b0 = 0;
  uStack_a8 = 0;
  uVar17 = *(ulong *)(param_2 + 0x10);
  if (uVar17 == 0) {
    uVar10 = 0;
    lVar2 = *(long *)(param_3 + 8);
    lVar7 = *(long *)(param_2 + 8);
    goto LAB_10995d0cc;
  }
  if ((long)uVar17 < 1) {
    lVar3 = 0;
LAB_10995d088:
    lVar2 = *(long *)(param_3 + 8);
    lVar7 = *(long *)(param_2 + 8);
    uVar10 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
    lStack_b0 = lVar3;
    uStack_a8 = uVar17;
    if (1 < (long)uVar17) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        dVar19 = *(double *)(lVar2 + lVar13);
        dVar18 = *(double *)(lVar7 + lVar13);
        ((double *)(lVar3 + lVar13))[1] =
             ((double *)(lVar2 + lVar13))[1] - ((double *)(lVar7 + lVar13))[1];
        *(double *)(lVar3 + lVar13) = dVar19 - dVar18;
        lVar14 = lVar14 + 2;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < (long)uVar10);
    }
LAB_10995d0cc:
    lVar3 = uVar17 - uVar10;
    if (lVar3 != 0 && (long)uVar10 <= (long)uVar17) {
      pdVar8 = (double *)(lVar2 + uVar10 * 8);
      pdVar11 = (double *)(lStack_b0 + uVar10 * 8);
      pdVar12 = (double *)(lVar7 + uVar10 * 8);
      do {
        *pdVar11 = *pdVar8 - *pdVar12;
        lVar3 = lVar3 + -1;
        pdVar8 = pdVar8 + 1;
        pdVar11 = pdVar11 + 1;
        pdVar12 = pdVar12 + 1;
      } while (lVar3 != 0);
    }
    FUN_1099655e0(param_1 + 8,&lStack_a0,&lStack_b0);
    _free(lStack_b0);
    _free(lStack_a0);
    lVar2 = *param_4;
    if (0 < param_4[1]) {
      _bzero(lVar2,param_4[1] << 3);
    }
    FUN_109965aec(param_1 + 8,*(undefined8 *)(param_3 + 8),lVar2);
    pdVar8 = (double *)*param_4;
    lVar2 = param_4[1];
    uVar17 = lVar2 - (lVar2 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < lVar2) {
      lVar7 = 0;
      pdVar11 = pdVar8;
      do {
        pdVar11[1] = -pdVar11[1];
        *pdVar11 = -*pdVar11;
        lVar7 = lVar7 + 2;
        pdVar11 = pdVar11 + 2;
      } while (lVar7 < (long)uVar17);
    }
    lVar7 = lVar2 % 2;
    if (lVar7 != 0 && (long)uVar17 <= lVar2) {
      pdVar8 = pdVar8 + (lVar2 / 2) * 2;
      do {
        *pdVar8 = -*pdVar8;
        lVar7 = lVar7 + -1;
        pdVar8 = pdVar8 + 1;
      } while (lVar7 != 0);
    }
    uVar17 = *(ulong *)(param_3 + 0x10);
    if (uVar17 != 0) {
      pdVar8 = (double *)*param_4;
      pdVar11 = *(double **)(param_3 + 8);
      uVar10 = uVar17 + 3;
      if (-1 < (long)uVar17) {
        uVar10 = uVar17;
      }
      if (uVar17 + 1 < 3) {
        dVar19 = *pdVar8 * *pdVar11;
      }
      else {
        uVar9 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
        dVar19 = *pdVar8 * *pdVar11;
        dVar18 = pdVar8[1] * pdVar11[1];
        if (3 < (long)uVar17) {
          uVar10 = uVar10 & 0xfffffffffffffffc;
          dVar20 = pdVar8[2] * pdVar11[2];
          dVar21 = pdVar8[3] * pdVar11[3];
          if (7 < uVar17) {
            pdVar12 = pdVar11 + 6;
            pdVar15 = pdVar8 + 6;
            lVar2 = 4;
            do {
              dVar19 = dVar19 + pdVar15[-2] * pdVar12[-2];
              dVar18 = dVar18 + pdVar15[-1] * pdVar12[-1];
              dVar20 = dVar20 + *pdVar15 * *pdVar12;
              dVar21 = dVar21 + pdVar15[1] * pdVar12[1];
              lVar2 = lVar2 + 4;
              pdVar12 = pdVar12 + 4;
              pdVar15 = pdVar15 + 4;
            } while (lVar2 < (long)uVar10);
          }
          dVar19 = dVar20 + dVar19;
          dVar18 = dVar21 + dVar18;
          if ((long)uVar10 < (long)uVar9) {
            dVar19 = dVar19 + pdVar8[uVar10] * pdVar11[uVar10];
            dVar18 = dVar18 + (pdVar8 + uVar10)[1] * (pdVar11 + uVar10)[1];
          }
        }
        dVar19 = dVar19 + dVar18;
        lVar2 = (long)uVar17 % 2;
        if (lVar2 != 0 && lVar2 < 0 == SBORROW8(uVar17,uVar9)) {
          pdVar8 = pdVar8 + ((long)uVar17 / 2) * 2;
          pdVar11 = pdVar11 + ((long)uVar17 / 2) * 2;
          do {
            dVar19 = dVar19 + *pdVar8 * *pdVar11;
            lVar2 = lVar2 + -1;
            pdVar8 = pdVar8 + 1;
            pdVar11 = pdVar11 + 1;
          } while (lVar2 != 0);
        }
      }
      if (dVar19 < 0.0) {
        return (long *)0x1;
      }
    }
    lStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&lStack_a0,&UNK_10f58d5dd,0x81,1,FUN_1099aa768,0);
    FUN_1092b4db8(uStack_98 + 0x7540,&UNK_10f58d795,0x34);
    FUN_1092b4db8();
    FUN_1092b4db8();
    uVar17 = *(ulong *)(param_3 + 0x10);
    if (uVar17 == 0) {
      dVar19 = 0.0;
    }
    else {
      pdVar8 = (double *)*param_4;
      pdVar11 = *(double **)(param_3 + 8);
      uVar10 = uVar17 + 3;
      if (-1 < (long)uVar17) {
        uVar10 = uVar17;
      }
      if (uVar17 + 1 < 3) {
        dVar19 = *pdVar8 * *pdVar11;
      }
      else {
        uVar9 = uVar17 - ((long)uVar17 >> 0x3f) & 0xfffffffffffffffe;
        dVar19 = *pdVar8 * *pdVar11;
        dVar18 = pdVar8[1] * pdVar11[1];
        if (3 < (long)uVar17) {
          uVar10 = uVar10 & 0xfffffffffffffffc;
          dVar20 = pdVar8[2] * pdVar11[2];
          dVar21 = pdVar8[3] * pdVar11[3];
          if (7 < uVar17) {
            pdVar12 = pdVar11 + 6;
            pdVar15 = pdVar8 + 6;
            lVar2 = 4;
            do {
              dVar19 = dVar19 + pdVar15[-2] * pdVar12[-2];
              dVar18 = dVar18 + pdVar15[-1] * pdVar12[-1];
              dVar20 = dVar20 + *pdVar15 * *pdVar12;
              dVar21 = dVar21 + pdVar15[1] * pdVar12[1];
              lVar2 = lVar2 + 4;
              pdVar12 = pdVar12 + 4;
              pdVar15 = pdVar15 + 4;
            } while (lVar2 < (long)uVar10);
          }
          dVar19 = dVar20 + dVar19;
          dVar18 = dVar21 + dVar18;
          if ((long)uVar10 < (long)uVar9) {
            dVar19 = dVar19 + pdVar8[uVar10] * pdVar11[uVar10];
            dVar18 = dVar18 + (pdVar8 + uVar10)[1] * (pdVar11 + uVar10)[1];
          }
        }
        dVar19 = dVar19 + dVar18;
        lVar2 = (long)uVar17 % 2;
        if (lVar2 != 0 && lVar2 < 0 == SBORROW8(uVar17,uVar9)) {
          pdVar8 = pdVar8 + ((long)uVar17 / 2) * 2;
          pdVar11 = pdVar11 + ((long)uVar17 / 2) * 2;
          do {
            dVar19 = dVar19 + *pdVar8 * *pdVar11;
            lVar2 = lVar2 + -1;
            pdVar8 = pdVar8 + 1;
            pdVar11 = pdVar11 + 1;
          } while (lVar2 != 0);
        }
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar19);
    FUN_1099ab3b0(&lStack_a0);
    *(undefined1 *)(param_1 + 0x80) = 0;
    return (long *)0x0;
  }
  if (uVar17 >> 0x3d == 0) {
    lVar3 = uVar17 << 3;
    _malloc();
    if (lVar3 != 0) goto LAB_10995d088;
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995d4e8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10995d4ec);
  (*pcVar1)();
}



/* Entry: 10995d52c; end: 10995d763;  */

undefined8 * FUN_10995d52c(undefined8 *param_1,int param_2,undefined1 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = 0;
  lVar2 = 0;
  *(int *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_110b1e698;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 5) = 0x100;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (999 < param_2) {
    uStack_a0 = 0;
    uStack_48 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    FUN_1099a9f0c(&uStack_a0,&UNK_10f58d5dd,0x99,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_98 + 0x7540,&UNK_10f58d830,0x25);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1099ab3b0(&uStack_a0);
    lVar2 = param_1[3];
    lVar3 = param_1[4];
  }
  lVar6 = (long)param_2;
  if ((lVar2 != param_2) || (lVar3 != lVar6)) {
    if (param_2 != 0) {
      lVar4 = 0;
      if (lVar6 != 0) {
        lVar4 = 0x7fffffffffffffff / lVar6;
      }
      if (lVar4 < lVar6) goto LAB_10995d6a8;
    }
    uVar7 = (long)param_2 * (long)param_2;
    if (lVar2 * lVar3 - uVar7 != 0) {
      _free(*plVar5);
      if (param_2 == 0) {
        lVar2 = 0;
      }
      else {
        if (uVar7 >> 0x3d != 0) {
LAB_10995d6a8:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10995d6cc);
          (*pcVar1)();
        }
        lVar2 = uVar7 * 8;
        _malloc();
        if (lVar2 == 0) goto LAB_10995d6a8;
      }
      *plVar5 = lVar2;
    }
    param_1[3] = lVar6;
    param_1[4] = lVar6;
  }
  if (0 < param_2) {
    lVar2 = 0;
    lVar3 = *plVar5;
    do {
      lVar4 = 0;
      do {
        uVar8 = 0x3ff0000000000000;
        if (lVar2 != lVar4) {
          uVar8 = 0;
        }
        *(undefined8 *)(lVar3 + lVar4 * 8) = uVar8;
        lVar4 = lVar4 + 1;
      } while (lVar6 != lVar4);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + lVar6 * 8;
    } while (lVar2 != lVar6);
  }
  return param_1;
}



/* Entry: 10995d764; end: 10995d7b3;  */

long FUN_10995d764(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10995d7b4; end: 10995e713;  */

double * FUN_10995d7b4(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double **ppdVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double ***pppdVar12;
  long lVar13;
  undefined *puVar14;
  double *pdVar15;
  long lVar16;
  double **ppdVar17;
  long lVar18;
  double *pdVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  double **ppdVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double **ppdVar28;
  long lVar29;
  undefined8 *puVar30;
  double **ppdVar31;
  double **ppdVar32;
  double **ppdVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dStack_1a0;
  double *pdStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  double *pdStack_108;
  ulong uStack_100;
  double *pdStack_f8;
  ulong uStack_f0;
  double *pdStack_e8;
  double dStack_e0;
  double **ppdStack_d8;
  double **ppdStack_d0;
  double **ppdStack_c8;
  ulong uStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    ppdStack_d8 = (double **)0x0;
    uStack_80 = 0;
    uStack_c0 = 0;
    ppdStack_c8 = (double **)0x0;
    uStack_b0 = 0;
    pdStack_b8 = (double *)0x0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    FUN_1099a9f0c(&ppdStack_d8,&UNK_10f58d5dd,0xa8,3,FUN_1099aa768,0);
    FUN_1092b4db8(ppdStack_d0 + 0xea8,&UNK_10f58d6e8,0x24);
    FUN_1092b4db8();
    FUN_1092b4db8();
    puVar14 = &UNK_10f58d789;
    puVar10 = (undefined8 *)0xb;
    FUN_1092b4db8();
    pppdVar12 = &ppdStack_d8;
    func_0x0001099ab7c0();
    __Unwind_Resume();
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar20 = puVar10[1];
    uVar36 = *(ulong *)(lVar20 + 0x10);
    pdVar6 = (double *)(uVar36 * 8);
    if (pdVar6 < (double *)0x20001) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pdVar7 = (double *)((long)&dStack_1a0 - ((long)pdVar6 + 0x1eU & 0xfffffffffffffff0));
      if (pdVar7 == (double *)0x0) goto LAB_10995e798;
      bVar3 = false;
LAB_10995e7b4:
      pdStack_198 = (double *)0x0;
      uStack_190 = 0;
      pdVar19 = pdStack_198;
      uVar24 = uStack_190;
      if (uVar36 != 0) {
        lVar26 = 0;
        if (uVar36 != 0) {
          lVar26 = 0x7fffffffffffffff / (long)uVar36;
        }
        if (0 < lVar26) {
          uVar24 = uVar36;
          if ((long)uVar36 < 1) goto LAB_10995e808;
          if (uVar36 >> 0x3d == 0) {
            pdVar19 = (double *)0x1;
            _calloc(1,pdVar6);
            if (pdVar19 != (double *)0x0) goto LAB_10995e808;
          }
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10995e9f4;
      }
LAB_10995e808:
      uStack_190 = uVar24;
      pdStack_198 = pdVar19;
      pdVar6 = pdStack_198;
      FUN_10995ea14(0x3ff0000000000000,&pdStack_198,lVar20,*puVar10);
      uVar24 = uVar36 - ((long)uVar36 >> 0x3f) & 0xfffffffffffffffe;
      if (1 < (long)uVar36) {
        lVar20 = 0;
        pdVar19 = pdVar7;
        pdVar15 = pdVar6;
        do {
          dVar39 = *pdVar15;
          pdVar19[1] = pdVar15[1];
          *pdVar19 = dVar39;
          lVar20 = lVar20 + 2;
          pdVar19 = pdVar19 + 2;
          pdVar15 = pdVar15 + 2;
        } while (lVar20 < (long)uVar24);
      }
      lVar20 = (long)uVar36 % 2;
      if (lVar20 != 0 && lVar20 < 0 == SBORROW8(uVar36,uVar24)) {
        pdVar19 = pdVar6 + ((long)uVar36 / 2) * 2;
        pdVar15 = pdVar7 + ((long)uVar36 / 2) * 2;
        do {
          *pdVar15 = *pdVar19;
          lVar20 = lVar20 + -1;
          pdVar19 = pdVar19 + 1;
          pdVar15 = pdVar15 + 1;
        } while (lVar20 != 0);
      }
      _free(pdVar6);
      ppdVar23 = pppdVar12[1];
      if (0 < (long)ppdVar23) {
        lVar20 = 0;
        ppdVar8 = (double **)0x0;
        do {
          ppdVar28 = *pppdVar12;
          ppdVar31 = pppdVar12[2];
          dVar39 = *(double *)(puVar14 + (long)ppdVar8 * 8);
          ppdVar32 = (double **)((ulong)(ppdVar28 + (long)ppdVar31 * (long)ppdVar8) >> 3 & 1);
          if ((long)ppdVar31 <= (long)ppdVar32) {
            ppdVar32 = ppdVar31;
          }
          if (((ulong)(ppdVar28 + (long)ppdVar31 * (long)ppdVar8) & 7) != 0) {
            ppdVar32 = ppdVar31;
          }
          if (0 < (long)ppdVar32) {
            ppdVar33 = (double **)((long)ppdVar28 + (long)ppdVar31 * lVar20);
            pdVar19 = pdVar7;
            ppdVar17 = ppdVar32;
            do {
              *ppdVar33 = (double *)(dVar39 * *pdVar19);
              ppdVar17 = (double **)((long)ppdVar17 + -1);
              ppdVar33 = ppdVar33 + 1;
              pdVar19 = pdVar19 + 1;
            } while (ppdVar17 != (double **)0x0);
          }
          lVar29 = (long)ppdVar31 - (long)ppdVar32;
          lVar26 = (lVar29 - (lVar29 >> 0x3f) & 0xfffffffffffffffeU) + (long)ppdVar32;
          if (1 < lVar29) {
            pdVar19 = pdVar7 + (long)ppdVar32;
            pdVar15 = (double *)((long)ppdVar28 + (long)ppdVar31 * lVar20 + (long)ppdVar32 * 8);
            ppdVar17 = ppdVar32;
            do {
              pdVar6 = pdVar19 + 2;
              dVar37 = *pdVar19;
              pdVar15[1] = pdVar19[1] * dVar39;
              *pdVar15 = dVar37 * dVar39;
              ppdVar17 = (double **)((long)ppdVar17 + 2);
              pdVar19 = pdVar6;
              pdVar15 = pdVar15 + 2;
            } while ((long)ppdVar17 < lVar26);
          }
          if (lVar26 < (long)ppdVar31) {
            lVar26 = lVar29 % 2;
            pdVar19 = (double *)
                      ((long)ppdVar28 +
                      (lVar29 / 2) * 0x10 + (long)ppdVar32 * 8 + (long)ppdVar31 * lVar20);
            pdVar15 = pdVar7 + (long)ppdVar32 + (lVar29 / 2) * 2;
            do {
              *pdVar19 = dVar39 * *pdVar15;
              lVar26 = lVar26 + -1;
              pdVar19 = pdVar19 + 1;
              pdVar15 = pdVar15 + 1;
            } while (lVar26 != 0);
          }
          ppdVar8 = (double **)((long)ppdVar8 + 1);
          lVar20 = lVar20 + 8;
        } while (ppdVar8 != ppdVar23);
      }
      if (bVar3) {
        _free(pdVar7);
        pdVar6 = pdVar7;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
        return pdVar6;
      }
      ___stack_chk_fail();
    }
    else {
LAB_10995e798:
      pdVar7 = pdVar6;
      _malloc();
      if (pdVar6 == (double *)0x0 || pdVar7 != (double *)0x0) {
        bVar3 = true;
        goto LAB_10995e7b4;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10995e9f4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10995e9f8);
    (*pcVar4)();
  }
  uVar36 = *(ulong *)(param_2 + 0x30);
  dVar39 = *(double *)(param_2 + 0x40);
  pdStack_f8 = (double *)0x0;
  uStack_f0 = 0;
  if (uVar36 == 0) {
LAB_10995d8c0:
    pdVar6 = pdStack_f8;
    pdStack_108 = (double *)0x0;
    uStack_100 = 0;
    uVar24 = *(ulong *)(param_2 + 0x10);
    uVar36 = uVar24 - ((long)uVar24 >> 0x3f);
    if (uVar24 == 0) {
      uVar21 = 0;
      lVar20 = *(long *)(param_3 + 8);
      lVar26 = *(long *)(param_2 + 8);
    }
    else {
      if (0 < (long)uVar24) {
        if (uVar24 >> 0x3d == 0) {
          pdVar7 = (double *)(uVar24 << 3);
          _malloc();
          if (pdVar7 != (double *)0x0) goto LAB_10995d928;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10995e66c;
      }
      pdVar7 = (double *)0x0;
LAB_10995d928:
      lVar20 = *(long *)(param_3 + 8);
      uVar21 = uVar36 & 0xfffffffffffffffe;
      lVar26 = *(long *)(param_2 + 8);
      pdStack_108 = pdVar7;
      uStack_100 = uVar24;
      if (1 < (long)uVar24) {
        lVar27 = 0;
        lVar29 = 0;
        do {
          dVar39 = *(double *)(lVar20 + lVar27);
          dVar37 = *(double *)(lVar26 + lVar27);
          ((double *)((long)pdVar7 + lVar27))[1] =
               ((double *)(lVar20 + lVar27))[1] - ((double *)(lVar26 + lVar27))[1];
          *(double *)((long)pdVar7 + lVar27) = dVar39 - dVar37;
          lVar29 = lVar29 + 2;
          lVar27 = lVar27 + 0x10;
        } while (lVar29 < (long)uVar21);
      }
    }
    lVar29 = uVar24 - uVar21;
    if (lVar29 != 0 && (long)uVar21 <= (long)uVar24) {
      pdVar7 = pdStack_108 + uVar21;
      pdVar19 = (double *)(lVar20 + uVar21 * 8);
      pdVar15 = (double *)(lVar26 + uVar21 * 8);
      do {
        *pdVar7 = *pdVar19 - *pdVar15;
        lVar29 = lVar29 + -1;
        pdVar7 = pdVar7 + 1;
        pdVar19 = pdVar19 + 1;
        pdVar15 = pdVar15 + 1;
      } while (lVar29 != 0);
    }
    if (uVar24 == 0) {
      dVar39 = 0.0;
LAB_10995dab4:
      if (piRam000000011373cea0 == (int *)0x0) {
        iVar5 = 0x1373cea0;
        FUN_1099adbb8(0x11373cea0,0x11382bb14,&UNK_10f58d5dd,2);
        if (iVar5 != 0) goto LAB_10995daf4;
      }
      else if (1 < *piRam000000011373cea0) {
LAB_10995daf4:
        ppdStack_d8 = (double **)0x0;
        uStack_80 = 0;
        uStack_c0 = 0;
        ppdStack_c8 = (double **)0x0;
        uStack_b0 = 0;
        pdStack_b8 = (double *)0x0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_88 = 0;
        FUN_1099a9f0c(&ppdStack_d8,&UNK_10f58d5dd,0xd5,0,FUN_1099aa768,0);
        FUN_1092b4db8(ppdStack_d0 + 0xea8,&UNK_10f58d933,0x35);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar39);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(0x3d06849b86a12b9b);
        FUN_1092b4db8();
        FUN_1099ab3b0(&ppdStack_d8);
      }
    }
    else {
      uVar21 = uVar24 + 3;
      if (-1 < (long)uVar24) {
        uVar21 = uVar24;
      }
      uVar21 = uVar21 & 0xfffffffffffffffc;
      lVar20 = (long)uVar24 / 2;
      uVar36 = uVar36 & 0xfffffffffffffffe;
      if (uVar24 + 1 < 3) {
        dVar37 = *pdStack_108;
        dVar39 = *pdVar6 * dVar37;
      }
      else {
        dVar37 = *pdStack_108;
        dVar39 = *pdVar6 * dVar37;
        dVar40 = pdVar6[1] * pdStack_108[1];
        if (3 < (long)uVar24) {
          dVar42 = pdVar6[2] * pdStack_108[2];
          dVar41 = pdVar6[3] * pdStack_108[3];
          if (7 < uVar24) {
            pdVar7 = pdStack_108 + 6;
            pdVar19 = pdVar6 + 6;
            lVar26 = 4;
            do {
              dVar39 = dVar39 + pdVar19[-2] * pdVar7[-2];
              dVar40 = dVar40 + pdVar19[-1] * pdVar7[-1];
              dVar42 = dVar42 + *pdVar19 * *pdVar7;
              dVar41 = dVar41 + pdVar19[1] * pdVar7[1];
              lVar26 = lVar26 + 4;
              pdVar7 = pdVar7 + 4;
              pdVar19 = pdVar19 + 4;
            } while (lVar26 < (long)uVar21);
          }
          dVar39 = dVar42 + dVar39;
          dVar40 = dVar41 + dVar40;
          if ((long)uVar21 < (long)uVar36) {
            dVar39 = dVar39 + pdVar6[uVar21] * pdStack_108[uVar21];
            dVar40 = dVar40 + (pdVar6 + uVar21)[1] * (pdStack_108 + uVar21)[1];
          }
        }
        dVar39 = dVar39 + dVar40;
        lVar26 = (long)uVar24 % 2;
        if (lVar26 != 0 && lVar26 < 0 == SBORROW8(uVar24,uVar36)) {
          pdVar7 = pdStack_108 + lVar20 * 2;
          pdVar6 = pdVar6 + lVar20 * 2;
          do {
            dVar39 = dVar39 + *pdVar6 * *pdVar7;
            lVar26 = lVar26 + -1;
            pdVar7 = pdVar7 + 1;
            pdVar6 = pdVar6 + 1;
          } while (lVar26 != 0);
        }
      }
      if (dVar39 <= 1e-14) goto LAB_10995dab4;
      if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 0xc) == '\x01')) {
        if (uVar24 + 1 < 3) {
          dVar37 = dVar37 * dVar37;
        }
        else {
          dVar37 = *pdStack_108 * *pdStack_108;
          dVar40 = pdStack_108[1] * pdStack_108[1];
          if (3 < (long)uVar24) {
            dVar42 = pdStack_108[2] * pdStack_108[2];
            dVar41 = pdStack_108[3] * pdStack_108[3];
            if (7 < uVar24) {
              pdVar6 = pdStack_108 + 6;
              lVar26 = 4;
              do {
                dVar37 = dVar37 + pdVar6[-2] * pdVar6[-2];
                dVar40 = dVar40 + pdVar6[-1] * pdVar6[-1];
                dVar42 = dVar42 + *pdVar6 * *pdVar6;
                dVar41 = dVar41 + pdVar6[1] * pdVar6[1];
                lVar26 = lVar26 + 4;
                pdVar6 = pdVar6 + 4;
              } while (lVar26 < (long)uVar21);
            }
            dVar37 = dVar42 + dVar37;
            dVar40 = dVar41 + dVar40;
            if ((long)uVar21 < (long)uVar36) {
              dVar41 = (pdStack_108 + uVar21)[1];
              dVar42 = pdStack_108[uVar21];
              dVar37 = dVar37 + dVar42 * dVar42;
              dVar40 = dVar40 + dVar41 * dVar41;
            }
          }
          dVar37 = dVar37 + dVar40;
          lVar26 = (long)uVar24 % 2;
          if (lVar26 != 0 && lVar26 < 0 == SBORROW8(uVar24,uVar36)) {
            pdVar6 = pdStack_108 + lVar20 * 2;
            do {
              dVar37 = dVar37 + *pdVar6 * *pdVar6;
              lVar26 = lVar26 + -1;
              pdVar6 = pdVar6 + 1;
            } while (lVar26 != 0);
          }
        }
        dVar37 = dVar39 / dVar37;
        pdVar6 = *(double **)(param_1 + 0x10);
        lVar20 = *(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x18);
        uVar36 = lVar20 - (lVar20 >> 0x3f) & 0xfffffffffffffffe;
        if (1 < lVar20) {
          lVar26 = 0;
          pdVar7 = pdVar6;
          do {
            pdVar7[1] = pdVar7[1] * dVar37;
            *pdVar7 = *pdVar7 * dVar37;
            lVar26 = lVar26 + 2;
            pdVar7 = pdVar7 + 2;
          } while (lVar26 < (long)uVar36);
        }
        lVar26 = lVar20 % 2;
        if (lVar26 != 0 && lVar26 < 0 == SBORROW8(lVar20,uVar36)) {
          pdVar6 = pdVar6 + (lVar20 / 2) * 2;
          do {
            *pdVar6 = dVar37 * *pdVar6;
            lVar26 = lVar26 + -1;
            pdVar6 = pdVar6 + 1;
          } while (lVar26 != 0);
        }
        if (piRam000000011373cec0 == (int *)0x0) {
          iVar5 = 0x1373cec0;
          FUN_1099adbb8(0x11373cec0,0x11382bb14,&UNK_10f58d5dd,4);
          if (iVar5 != 0) goto LAB_10995dcd8;
        }
        else if (3 < *piRam000000011373cec0) {
LAB_10995dcd8:
          ppdStack_d8 = (double **)0x0;
          uStack_80 = 0;
          uStack_c0 = 0;
          ppdStack_c8 = (double **)0x0;
          uStack_b0 = 0;
          pdStack_b8 = (double *)0x0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          uStack_88 = 0;
          FUN_1099a9f0c(&ppdStack_d8,&UNK_10f58d5dd,0x100,0,FUN_1099aa768,0);
          FUN_1092b4db8(ppdStack_d0 + 0xea8,&UNK_10f58d994,0x27);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar37);
          FUN_1092b4db8();
          FUN_1092b4db8();
          FUN_1099ab3b0(&ppdStack_d8);
        }
      }
      uVar36 = uStack_f0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      ppdVar23 = (double **)(param_1 + 0x10);
      ppdStack_d8 = &pdStack_f8;
      ppdStack_d0 = &pdStack_108;
      uStack_118 = 0;
      lStack_110 = 0;
      lStack_120 = 0;
      lVar20 = *(long *)(param_1 + 0x20);
      ppdStack_c8 = ppdVar23;
      if ((uStack_f0 != 0) && (lVar20 != 0)) {
        lVar26 = 0;
        if (lVar20 != 0) {
          lVar26 = 0x7fffffffffffffff / lVar20;
        }
        if ((long)uStack_f0 <= lVar26) goto LAB_10995ddac;
        goto LAB_10995de38;
      }
LAB_10995ddac:
      uVar24 = lVar20 * uStack_f0;
      lVar26 = lStack_120;
      if (uVar24 != 0) {
        if ((long)uVar24 < 1) {
          lVar26 = 0;
          goto LAB_10995dde4;
        }
        if (uVar24 >> 0x3d == 0) {
          lVar26 = uVar24 * 8;
          _malloc();
          if (lVar26 != 0) goto LAB_10995dde4;
        }
        goto LAB_10995de38;
      }
LAB_10995dde4:
      lStack_120 = lVar26;
      uStack_118 = uVar36;
      lVar29 = *(long *)(param_1 + 0x20);
      lVar26 = lStack_120;
      if (lVar20 != lVar29) {
        lStack_110 = lVar20;
        lVar20 = lVar29;
        if ((uVar36 == 0) || (lVar29 == 0)) {
          if (uVar36 == 0) goto LAB_10995de68;
        }
        else {
          lVar26 = 0;
          if (lVar29 != 0) {
            lVar26 = 0x7fffffffffffffff / lVar29;
          }
          if (lVar26 < (long)uVar36) goto LAB_10995de38;
        }
        uVar24 = lVar29 * uVar36;
        _free();
        if (0 < (long)uVar24) {
          if (uVar24 >> 0x3d == 0) {
            lVar26 = uVar24 * 8;
            _malloc();
            if (lVar26 != 0) goto LAB_10995de68;
          }
LAB_10995de38:
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10995e66c;
        }
        lVar26 = 0;
      }
LAB_10995de68:
      lStack_110 = lVar20;
      lStack_120 = lVar26;
      uStack_118 = uVar36;
      FUN_10995e714(&lStack_120,pdStack_f8,&ppdStack_d0);
      pdStack_e8 = &dStack_e0;
      dVar39 = 1.0 / dVar39;
      if (uStack_100 == 0) {
        dVar37 = 0.0;
      }
      else {
        uVar24 = *(ulong *)(param_1 + 0x20);
        ppdStack_c8 = (double **)0x0;
        uStack_c0 = 0;
        ppdVar8 = ppdStack_c8;
        uVar36 = uStack_c0;
        if (uVar24 != 0) {
          lVar20 = 0;
          if (uVar24 != 0) {
            lVar20 = 0x7fffffffffffffff / (long)uVar24;
          }
          if (0 < lVar20) {
            uVar36 = uVar24;
            if ((long)uVar24 < 1) goto LAB_10995def8;
            if (uVar24 >> 0x3d == 0) {
              ppdVar8 = (double **)0x1;
              _calloc(1,uVar24 << 3);
              if (ppdVar8 != (double **)0x0) goto LAB_10995def8;
            }
          }
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10995e66c;
        }
LAB_10995def8:
        uStack_c0 = uVar36;
        ppdStack_c8 = ppdVar8;
        ppdVar8 = ppdStack_c8;
        ppdStack_d0 = ppdStack_c8;
        FUN_10995eebc(dVar39,0x3ff0000000000000,&ppdStack_c8,ppdVar23,&pdStack_108);
        pdStack_b8 = pdStack_108;
        uVar36 = uStack_100 + 3;
        if (-1 < (long)uStack_100) {
          uVar36 = uStack_100;
        }
        if (uStack_100 + 1 < 3) {
          dVar37 = (double)*ppdVar8 * *pdStack_108;
        }
        else {
          uVar24 = uStack_100 - ((long)uStack_100 >> 0x3f) & 0xfffffffffffffffe;
          dVar37 = (double)*ppdVar8 * *pdStack_108;
          dVar40 = (double)ppdVar8[1] * pdStack_108[1];
          if (3 < (long)uStack_100) {
            uVar36 = uVar36 & 0xfffffffffffffffc;
            dVar42 = (double)ppdVar8[2] * pdStack_108[2];
            dVar41 = (double)ppdVar8[3] * pdStack_108[3];
            if (7 < uStack_100) {
              pdVar6 = pdStack_108 + 6;
              ppdVar23 = ppdVar8 + 6;
              lVar20 = 4;
              do {
                dVar37 = dVar37 + (double)ppdVar23[-2] * pdVar6[-2];
                dVar40 = dVar40 + (double)ppdVar23[-1] * pdVar6[-1];
                dVar42 = dVar42 + (double)*ppdVar23 * *pdVar6;
                dVar41 = dVar41 + (double)ppdVar23[1] * pdVar6[1];
                lVar20 = lVar20 + 4;
                pdVar6 = pdVar6 + 4;
                ppdVar23 = ppdVar23 + 4;
              } while (lVar20 < (long)uVar36);
            }
            dVar37 = dVar42 + dVar37;
            dVar40 = dVar41 + dVar40;
            if ((long)uVar36 < (long)uVar24) {
              dVar37 = dVar37 + (double)ppdVar8[uVar36] * pdStack_108[uVar36];
              dVar40 = dVar40 + (double)(ppdVar8 + uVar36)[1] * (pdStack_108 + uVar36)[1];
            }
          }
          dVar37 = dVar37 + dVar40;
          lVar20 = (long)uStack_100 % 2;
          if (lVar20 != 0 && (long)uVar24 <= (long)uStack_100) {
            pdVar6 = pdStack_108 + ((long)uStack_100 / 2) * 2;
            ppdVar23 = ppdVar8 + ((long)uStack_100 / 2) * 2;
            do {
              dVar37 = dVar37 + (double)*ppdVar23 * *pdVar6;
              lVar20 = lVar20 + -1;
              pdVar6 = pdVar6 + 1;
              ppdVar23 = ppdVar23 + 1;
            } while (lVar20 != 0);
          }
        }
        _free(ppdVar8);
      }
      dStack_e0 = dVar37;
      dVar37 = *pdStack_e8;
      iVar5 = *(int *)(param_1 + 8);
      lVar20 = (long)iVar5;
      if (iVar5 != 0) {
        lVar26 = 0;
        if (lVar20 != 0) {
          lVar26 = 0x7fffffffffffffff / lVar20;
        }
        if (lVar20 <= lVar26 && (ulong)((long)iVar5 * (long)iVar5) >> 0x3d == 0) {
          lVar26 = 1;
          _calloc(1,(long)iVar5 * (long)iVar5 * 8);
          if (lVar26 != 0) goto LAB_10995e078;
        }
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10995e66c;
      }
      lVar26 = 0;
LAB_10995e078:
      FUN_10995f0c8(dVar37 + 1.0,lVar26,lVar20,pdStack_f8,uStack_f0);
      lVar29 = lStack_120;
      lVar27 = *(long *)(param_1 + 0x20);
      if (0 < lVar27) {
        lVar25 = 0;
        lVar1 = *(long *)(param_1 + 0x10);
        lVar2 = *(long *)(param_1 + 0x18);
        lVar9 = lStack_120;
        lVar13 = lStack_120;
        lVar34 = lVar1;
        lVar35 = lVar26;
        do {
          lVar18 = lVar2;
          if (lVar25 <= lVar2) {
            lVar18 = lVar25;
          }
          if (lVar25 < lVar2) {
            lVar16 = lVar1 + lVar18 * lVar27 * 8;
            dVar37 = *(double *)(lStack_120 + lVar18 * lStack_110 * 8 + lVar18 * 8);
            *(double *)(lVar16 + lVar18 * 8) =
                 *(double *)(lVar16 + lVar18 * 8) +
                 dVar39 * ((*(double *)(lVar26 + lVar18 * lVar20 * 8 + lVar18 * 8) - dVar37) -
                          dVar37);
            lVar18 = lVar18 + 1;
          }
          lVar16 = lVar2 - lVar18;
          if (lVar16 != 0 && lVar18 <= lVar2) {
            pdVar6 = (double *)(lVar9 + lStack_110 * 8 * lVar18);
            pdVar7 = (double *)(lVar35 + lVar20 * 8 * lVar18);
            pdVar19 = (double *)(lVar34 + lVar27 * 8 * lVar18);
            pdVar15 = (double *)(lVar13 + lVar18 * 8);
            do {
              *pdVar19 = *pdVar19 + dVar39 * ((*pdVar7 - *pdVar6) - *pdVar15);
              pdVar6 = pdVar6 + lStack_110;
              pdVar7 = pdVar7 + lVar20;
              pdVar19 = pdVar19 + lVar27;
              lVar16 = lVar16 + -1;
              pdVar15 = pdVar15 + 1;
            } while (lVar16 != 0);
          }
          lVar25 = lVar25 + 1;
          lVar13 = lVar13 + lStack_110 * 8;
          lVar9 = lVar9 + 8;
          lVar35 = lVar35 + 8;
          lVar34 = lVar34 + 8;
        } while (lVar25 != lVar27);
      }
      _free(lVar26);
      _free(lVar29);
    }
    uVar36 = *(ulong *)(param_1 + 0x18);
    if (0 < (long)uVar36) {
      if (uVar36 >> 0x3d == 0) {
        puVar10 = (undefined8 *)0x1;
        _calloc(1,uVar36 << 3);
        if (puVar10 != (undefined8 *)0x0) goto LAB_10995e1e4;
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995e66c;
    }
    puVar10 = (undefined8 *)0x0;
LAB_10995e1e4:
    FUN_10995f2ac(0xbff0000000000000,0x3ff0000000000000,puVar10,uVar36,param_1 + 0x10,param_3 + 8);
    puVar11 = (undefined8 *)*param_4;
    if (param_4[1] != uVar36) {
      _free();
      if ((long)uVar36 < 1) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)(uVar36 << 3);
        _malloc();
        if (puVar11 == (undefined8 *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10995e66c;
        }
      }
      *param_4 = (long)puVar11;
      param_4[1] = uVar36;
    }
    uVar24 = uVar36 - ((long)uVar36 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < (long)uVar36) {
      lVar20 = 0;
      puVar22 = puVar11;
      puVar30 = puVar10;
      do {
        uVar38 = *puVar30;
        puVar22[1] = puVar30[1];
        *puVar22 = uVar38;
        lVar20 = lVar20 + 2;
        puVar22 = puVar22 + 2;
        puVar30 = puVar30 + 2;
      } while (lVar20 < (long)uVar24);
    }
    lVar20 = (long)uVar36 % 2;
    if (lVar20 != 0 && lVar20 < 0 == SBORROW8(uVar36,uVar24)) {
      puVar22 = puVar10 + ((long)uVar36 / 2) * 2;
      puVar11 = puVar11 + ((long)uVar36 / 2) * 2;
      do {
        *puVar11 = *puVar22;
        lVar20 = lVar20 + -1;
        puVar22 = puVar22 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar20 != 0);
    }
    _free(puVar10);
    uVar36 = *(ulong *)(param_3 + 0x10);
    if (uVar36 == 0) {
LAB_10995e3b0:
      ppdStack_d8 = (double **)0x0;
      uStack_80 = 0;
      uStack_c0 = 0;
      ppdStack_c8 = (double **)0x0;
      uStack_b0 = 0;
      pdStack_b8 = (double *)0x0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      FUN_1099a9f0c(&ppdStack_d8,&UNK_10f58d5dd,0x141,1,FUN_1099aa768,0);
      FUN_1092b4db8(ppdStack_d0 + 0xea8,&UNK_10f58d9e8,0x32);
      FUN_1092b4db8();
      FUN_1092b4db8();
      uVar36 = *(ulong *)(param_3 + 0x10);
      if (uVar36 == 0) {
        dVar39 = 0.0;
      }
      else {
        pdVar6 = (double *)*param_4;
        pdVar7 = *(double **)(param_3 + 8);
        uVar24 = uVar36 + 3;
        if (-1 < (long)uVar36) {
          uVar24 = uVar36;
        }
        if (uVar36 + 1 < 3) {
          dVar39 = *pdVar6 * *pdVar7;
        }
        else {
          uVar21 = uVar36 - ((long)uVar36 >> 0x3f) & 0xfffffffffffffffe;
          dVar39 = *pdVar6 * *pdVar7;
          dVar37 = pdVar6[1] * pdVar7[1];
          if (3 < (long)uVar36) {
            uVar24 = uVar24 & 0xfffffffffffffffc;
            dVar40 = pdVar6[2] * pdVar7[2];
            dVar42 = pdVar6[3] * pdVar7[3];
            if (7 < uVar36) {
              pdVar19 = pdVar7 + 6;
              pdVar15 = pdVar6 + 6;
              lVar20 = 4;
              do {
                dVar39 = dVar39 + pdVar15[-2] * pdVar19[-2];
                dVar37 = dVar37 + pdVar15[-1] * pdVar19[-1];
                dVar40 = dVar40 + *pdVar15 * *pdVar19;
                dVar42 = dVar42 + pdVar15[1] * pdVar19[1];
                lVar20 = lVar20 + 4;
                pdVar19 = pdVar19 + 4;
                pdVar15 = pdVar15 + 4;
              } while (lVar20 < (long)uVar24);
            }
            dVar39 = dVar40 + dVar39;
            dVar37 = dVar42 + dVar37;
            if ((long)uVar24 < (long)uVar21) {
              dVar39 = dVar39 + pdVar6[uVar24] * pdVar7[uVar24];
              dVar37 = dVar37 + (pdVar6 + uVar24)[1] * (pdVar7 + uVar24)[1];
            }
          }
          dVar39 = dVar39 + dVar37;
          lVar20 = (long)uVar36 % 2;
          if (lVar20 != 0 && lVar20 < 0 == SBORROW8(uVar36,uVar21)) {
            pdVar6 = pdVar6 + ((long)uVar36 / 2) * 2;
            pdVar7 = pdVar7 + ((long)uVar36 / 2) * 2;
            do {
              dVar39 = dVar39 + *pdVar6 * *pdVar7;
              lVar20 = lVar20 + -1;
              pdVar6 = pdVar6 + 1;
              pdVar7 = pdVar7 + 1;
            } while (lVar20 != 0);
          }
        }
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(dVar39);
      FUN_1099ab3b0(&ppdStack_d8);
      pdVar6 = (double *)0x0;
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    else {
      pdVar6 = (double *)*param_4;
      pdVar7 = *(double **)(param_3 + 8);
      uVar24 = uVar36 + 3;
      if (-1 < (long)uVar36) {
        uVar24 = uVar36;
      }
      if (uVar36 + 1 < 3) {
        dVar39 = *pdVar6 * *pdVar7;
      }
      else {
        uVar21 = uVar36 - ((long)uVar36 >> 0x3f) & 0xfffffffffffffffe;
        dVar39 = *pdVar6 * *pdVar7;
        dVar37 = pdVar6[1] * pdVar7[1];
        if (3 < (long)uVar36) {
          uVar24 = uVar24 & 0xfffffffffffffffc;
          dVar40 = pdVar6[2] * pdVar7[2];
          dVar42 = pdVar6[3] * pdVar7[3];
          if (7 < uVar36) {
            pdVar19 = pdVar7 + 6;
            pdVar15 = pdVar6 + 6;
            lVar20 = 4;
            do {
              dVar39 = dVar39 + pdVar15[-2] * pdVar19[-2];
              dVar37 = dVar37 + pdVar15[-1] * pdVar19[-1];
              dVar40 = dVar40 + *pdVar15 * *pdVar19;
              dVar42 = dVar42 + pdVar15[1] * pdVar19[1];
              lVar20 = lVar20 + 4;
              pdVar19 = pdVar19 + 4;
              pdVar15 = pdVar15 + 4;
            } while (lVar20 < (long)uVar24);
          }
          dVar39 = dVar40 + dVar39;
          dVar37 = dVar42 + dVar37;
          if ((long)uVar24 < (long)uVar21) {
            dVar39 = dVar39 + pdVar6[uVar24] * pdVar7[uVar24];
            dVar37 = dVar37 + (pdVar6 + uVar24)[1] * (pdVar7 + uVar24)[1];
          }
        }
        dVar39 = dVar39 + dVar37;
        lVar20 = (long)uVar36 % 2;
        if (lVar20 != 0 && lVar20 < 0 == SBORROW8(uVar36,uVar21)) {
          pdVar6 = pdVar6 + ((long)uVar36 / 2) * 2;
          pdVar7 = pdVar7 + ((long)uVar36 / 2) * 2;
          do {
            dVar39 = dVar39 + *pdVar6 * *pdVar7;
            lVar20 = lVar20 + -1;
            pdVar6 = pdVar6 + 1;
            pdVar7 = pdVar7 + 1;
          } while (lVar20 != 0);
        }
      }
      if (0.0 <= dVar39) goto LAB_10995e3b0;
      pdVar6 = (double *)0x1;
    }
    _free(pdStack_108);
    _free(pdStack_f8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return pdVar6;
    }
    ___stack_chk_fail();
  }
  else {
    if ((long)uVar36 < 1) {
      lVar20 = *(long *)(param_2 + 0x28);
      uVar24 = -(-uVar36 & 0xfffffffffffffffe);
LAB_10995d8a0:
      uStack_f0 = uVar36;
      if ((long)uVar24 < (long)uVar36) {
        do {
          pdStack_f8[uVar24] = dVar39 * *(double *)(lVar20 + uVar24 * 8);
          uVar24 = uVar24 + 1;
        } while (uVar36 != uVar24);
      }
      goto LAB_10995d8c0;
    }
    if (uVar36 >> 0x3d == 0) {
      pdVar6 = (double *)(uVar36 << 3);
      _malloc();
      if (pdVar6 != (double *)0x0) {
        lVar20 = *(long *)(param_2 + 0x28);
        pdStack_f8 = pdVar6;
        if (uVar36 == 1) {
          uVar24 = 0;
        }
        else {
          lVar26 = 0;
          uVar21 = 0;
          uVar24 = uVar36 & 0x1ffffffffffffffe;
          do {
            dVar37 = *(double *)(lVar20 + lVar26);
            ((double *)((long)pdVar6 + lVar26))[1] = ((double *)(lVar20 + lVar26))[1] * dVar39;
            *(double *)((long)pdVar6 + lVar26) = dVar37 * dVar39;
            uVar21 = uVar21 + 2;
            lVar26 = lVar26 + 0x10;
          } while (uVar21 < uVar24);
        }
        goto LAB_10995d8a0;
      }
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995e66c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10995e670);
  (*pcVar4)();
}



/* Entry: 10995e714; end: 10995ea13;  */

void FUN_10995e714(long *param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  code *pcVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dStack_70;
  double *pdStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_3[1];
  uVar15 = *(ulong *)(lVar14 + 0x10);
  pdVar13 = (double *)(uVar15 * 8);
  if (pdVar13 < (double *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pdVar3 = (double *)((long)&dStack_70 - ((long)pdVar13 + 0x1eU & 0xfffffffffffffff0));
    if (pdVar3 == (double *)0x0) goto LAB_10995e798;
    bVar1 = false;
LAB_10995e7b4:
    pdStack_68 = (double *)0x0;
    uStack_60 = 0;
    pdVar4 = pdStack_68;
    uVar5 = uStack_60;
    if (uVar15 != 0) {
      lVar8 = 0;
      if (uVar15 != 0) {
        lVar8 = 0x7fffffffffffffff / (long)uVar15;
      }
      if (0 < lVar8) {
        uVar5 = uVar15;
        if ((long)uVar15 < 1) goto LAB_10995e808;
        if (uVar15 >> 0x3d == 0) {
          pdVar4 = (double *)0x1;
          _calloc(1,pdVar13);
          if (pdVar4 != (double *)0x0) goto LAB_10995e808;
        }
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995e9f4;
    }
LAB_10995e808:
    uStack_60 = uVar5;
    pdStack_68 = pdVar4;
    pdVar13 = pdStack_68;
    FUN_10995ea14(0x3ff0000000000000,&pdStack_68,lVar14,*param_3);
    uVar5 = uVar15 - ((long)uVar15 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < (long)uVar15) {
      lVar14 = 0;
      pdVar4 = pdVar3;
      pdVar7 = pdVar13;
      do {
        dVar16 = *pdVar7;
        pdVar4[1] = pdVar7[1];
        *pdVar4 = dVar16;
        lVar14 = lVar14 + 2;
        pdVar4 = pdVar4 + 2;
        pdVar7 = pdVar7 + 2;
      } while (lVar14 < (long)uVar5);
    }
    lVar14 = (long)uVar15 % 2;
    if (lVar14 != 0 && lVar14 < 0 == SBORROW8(uVar15,uVar5)) {
      pdVar4 = pdVar13 + ((long)uVar15 / 2) * 2;
      pdVar7 = pdVar3 + ((long)uVar15 / 2) * 2;
      do {
        *pdVar7 = *pdVar4;
        lVar14 = lVar14 + -1;
        pdVar4 = pdVar4 + 1;
        pdVar7 = pdVar7 + 1;
      } while (lVar14 != 0);
    }
    _free(pdVar13);
    lVar14 = param_1[1];
    if (0 < lVar14) {
      lVar6 = 0;
      lVar8 = 0;
      do {
        lVar9 = *param_1;
        uVar10 = param_1[2];
        uVar15 = lVar9 + uVar10 * lVar8 * 8;
        dVar16 = *(double *)(param_2 + lVar8 * 8);
        uVar5 = uVar15 >> 3 & 1;
        if ((long)uVar10 <= (long)uVar5) {
          uVar5 = uVar10;
        }
        if ((uVar15 & 7) != 0) {
          uVar5 = uVar10;
        }
        if (0 < (long)uVar5) {
          pdVar13 = (double *)(lVar9 + uVar10 * lVar6);
          pdVar4 = pdVar3;
          uVar15 = uVar5;
          do {
            *pdVar13 = dVar16 * *pdVar4;
            uVar15 = uVar15 - 1;
            pdVar13 = pdVar13 + 1;
            pdVar4 = pdVar4 + 1;
          } while (uVar15 != 0);
        }
        lVar11 = uVar10 - uVar5;
        lVar12 = (lVar11 - (lVar11 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
        if (1 < lVar11) {
          pdVar13 = pdVar3 + uVar5;
          pdVar4 = (double *)(lVar9 + uVar10 * lVar6 + uVar5 * 8);
          uVar15 = uVar5;
          do {
            dVar17 = *pdVar13;
            pdVar4[1] = pdVar13[1] * dVar16;
            *pdVar4 = dVar17 * dVar16;
            uVar15 = uVar15 + 2;
            pdVar13 = pdVar13 + 2;
            pdVar4 = pdVar4 + 2;
          } while ((long)uVar15 < lVar12);
        }
        if (lVar12 < (long)uVar10) {
          lVar12 = lVar11 % 2;
          pdVar13 = (double *)(lVar9 + (lVar11 / 2) * 0x10 + uVar5 * 8 + uVar10 * lVar6);
          pdVar4 = pdVar3 + uVar5 + (lVar11 / 2) * 2;
          do {
            *pdVar13 = dVar16 * *pdVar4;
            lVar12 = lVar12 + -1;
            pdVar13 = pdVar13 + 1;
            pdVar4 = pdVar4 + 1;
          } while (lVar12 != 0);
        }
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar8 != lVar14);
    }
    if (bVar1) {
      _free(pdVar3);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10995e798:
    pdVar3 = pdVar13;
    _malloc();
    if (pdVar13 == (double *)0x0 || pdVar3 != (double *)0x0) {
      bVar1 = true;
      goto LAB_10995e7b4;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995e9f4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10995e9f8);
  (*pcVar2)();
}



/* Entry: 10995ea14; end: 10995ec1b;  */

void FUN_10995ea14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar2 = auStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2[1];
  if (uVar7 >> 0x3d == 0) {
    if ((undefined1 *)*param_2 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 << 3);
      if (uVar7 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar2 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puVar4 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puVar5 = puVar4;
      }
      else {
        _malloc();
        puVar5 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_10995eb90;
      }
    }
    else {
      puVar4 = (undefined1 *)0x0;
      puVar2 = auStack_60;
      puVar5 = (undefined1 *)*param_2;
    }
    uVar8 = param_4[1];
    if (uVar8 >> 0x3d == 0) {
      lVar3 = *param_4;
      if (lVar3 == 0) {
        lVar3 = uVar8 << 3;
        if (uVar8 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar3 = (long)puVar2 - (lVar3 + 0x1eU & 0xfffffffffffffff0);
          lVar6 = lVar3;
          goto LAB_10995eb24;
        }
        _malloc();
        lVar6 = lVar3;
        if (lVar3 != 0) goto LAB_10995eb24;
      }
      else {
        lVar6 = 0;
LAB_10995eb24:
        FUN_10995ec1c(param_1,param_3[2],*param_3,param_3[2],lVar3,puVar5);
        if (0x4000 < uVar8) {
          _free(lVar6);
        }
        if (0x4000 < uVar7) {
          _free(puVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995ebf8;
    }
  }
  else {
LAB_10995eb90:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995ebf8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10995ebfc);
  (*pcVar1)();
}



/* Entry: 10995ec1c; end: 10995eebb;  */

void FUN_10995ec1c(double param_1,long param_2,long param_3,long param_4,double *param_5,
                  double *param_6)

{
  uint uVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
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
  
  lVar10 = param_2;
  if (param_2 < 9) {
    lVar10 = 8;
  }
  uVar1 = (int)lVar10 - 8;
  uVar6 = param_2 - ((ulong)uVar1 & 0xfffffffe);
  if ((uVar1 & 0xfffffffe) != 0) {
    uVar8 = (ulong)param_6 >> 3 & 1;
    pdVar9 = (double *)(param_3 + (param_4 + param_4 * uVar6) * 8);
    pdVar11 = (double *)(param_3 + param_4 * uVar6 * 8);
    uVar7 = uVar6;
    do {
      lVar10 = uVar7 + 1;
      lVar14 = param_3 + lVar10 * param_4 * 8;
      dVar16 = param_1 * param_5[uVar7];
      dVar17 = param_1 * param_5[lVar10];
      uVar12 = uVar8;
      if ((long)uVar7 <= (long)uVar8) {
        uVar12 = uVar7;
      }
      if (((ulong)param_6 & 7) != 0) {
        uVar12 = uVar7;
      }
      dVar18 = param_6[uVar7] + dVar16 * *(double *)(param_3 + uVar7 * param_4 * 8 + uVar7 * 8);
      param_6[uVar7] = dVar18;
      param_6[lVar10] = param_6[lVar10] + dVar17 * *(double *)(lVar14 + lVar10 * 8);
      param_6[uVar7] = dVar18 + dVar17 * *(double *)(lVar14 + uVar7 * 8);
      dVar19 = 0.0;
      dVar18 = *(double *)(lVar14 + uVar7 * 8) * param_5[uVar7] + 0.0;
      pdVar2 = pdVar9;
      pdVar4 = param_6;
      pdVar5 = param_5;
      pdVar13 = pdVar11;
      uVar15 = uVar12;
      if (0 < (long)uVar12) {
        do {
          *pdVar4 = *pdVar4 + dVar16 * *pdVar13 + dVar17 * *pdVar2;
          dVar19 = dVar19 + *pdVar13 * *pdVar5;
          dVar18 = dVar18 + *pdVar5 * *pdVar2;
          uVar15 = uVar15 - 1;
          pdVar2 = pdVar2 + 1;
          pdVar4 = pdVar4 + 1;
          pdVar5 = pdVar5 + 1;
          pdVar13 = pdVar13 + 1;
        } while (uVar15 != 0);
      }
      lVar3 = uVar7 - uVar12;
      lVar14 = (lVar3 - (lVar3 >> 0x3f) & 0xfffffffffffffffeU) + uVar12;
      dVar20 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      dVar23 = 0.0;
      if (1 < lVar3) {
        lVar3 = uVar12 << 3;
        do {
          dVar25 = ((double *)((long)pdVar11 + lVar3))[1];
          dVar24 = *(double *)((long)pdVar11 + lVar3);
          dVar27 = ((double *)((long)pdVar9 + lVar3))[1];
          dVar26 = *(double *)((long)pdVar9 + lVar3);
          dVar29 = ((double *)((long)param_5 + lVar3))[1];
          dVar28 = *(double *)((long)param_5 + lVar3);
          dVar30 = *(double *)((long)param_6 + lVar3);
          dVar22 = dVar22 + dVar28 * dVar24;
          dVar23 = dVar23 + dVar29 * dVar25;
          dVar20 = dVar20 + dVar28 * dVar26;
          dVar21 = dVar21 + dVar29 * dVar27;
          ((double *)((long)param_6 + lVar3))[1] =
               ((double *)((long)param_6 + lVar3))[1] + dVar27 * dVar17 + dVar25 * dVar16;
          *(double *)((long)param_6 + lVar3) = dVar30 + dVar26 * dVar17 + dVar24 * dVar16;
          uVar12 = uVar12 + 2;
          lVar3 = lVar3 + 0x10;
        } while ((long)uVar12 < lVar14);
      }
      for (; lVar14 < (long)uVar7; lVar14 = lVar14 + 1) {
        param_6[lVar14] = param_6[lVar14] + dVar16 * pdVar11[lVar14] + dVar17 * pdVar9[lVar14];
        dVar19 = dVar19 + pdVar11[lVar14] * param_5[lVar14];
        dVar18 = dVar18 + param_5[lVar14] * pdVar9[lVar14];
      }
      param_6[uVar7] = param_6[uVar7] + (dVar22 + dVar23 + dVar19) * param_1;
      param_6[lVar10] = param_6[lVar10] + (dVar20 + dVar21 + dVar18) * param_1;
      uVar7 = uVar7 + 2;
      pdVar9 = pdVar9 + param_4 * 2;
      pdVar11 = pdVar11 + param_4 * 2;
    } while ((long)uVar7 < param_2);
  }
  if (0 < (long)uVar6) {
    uVar7 = 0;
    lVar10 = param_3;
    do {
      dVar16 = param_5[uVar7];
      dVar17 = param_6[uVar7] +
               *(double *)(param_3 + uVar7 * param_4 * 8 + uVar7 * 8) * param_1 * dVar16;
      param_6[uVar7] = dVar17;
      if (uVar7 == 0) {
        dVar18 = 0.0;
      }
      else {
        uVar8 = 0;
        dVar18 = 0.0;
        do {
          param_6[uVar8] = param_6[uVar8] + param_1 * dVar16 * *(double *)(lVar10 + uVar8 * 8);
          dVar18 = dVar18 + *(double *)(lVar10 + uVar8 * 8) * param_5[uVar8];
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
        dVar17 = param_6[uVar7];
      }
      param_6[uVar7] = dVar17 + dVar18 * param_1;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + param_4 * 8;
    } while (uVar7 != uVar6);
  }
  return;
}



/* Entry: 10995eebc; end: 10995f0c7;  */

void FUN_10995eebc(double param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar2 = auStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_3[1];
  if (uVar7 >> 0x3d == 0) {
    if ((undefined1 *)*param_3 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar7 << 3);
      if (uVar7 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar2 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puVar4 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puVar5 = puVar4;
      }
      else {
        _malloc();
        puVar5 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_10995f03c;
      }
    }
    else {
      puVar4 = (undefined1 *)0x0;
      puVar2 = auStack_60;
      puVar5 = (undefined1 *)*param_3;
    }
    uVar8 = param_5[1];
    if (uVar8 >> 0x3d == 0) {
      lVar3 = *param_5;
      if (lVar3 == 0) {
        lVar3 = uVar8 << 3;
        if (uVar8 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar3 = (long)puVar2 - (lVar3 + 0x1eU & 0xfffffffffffffff0);
          lVar6 = lVar3;
          goto LAB_10995efd0;
        }
        _malloc();
        lVar6 = lVar3;
        if (lVar3 != 0) goto LAB_10995efd0;
      }
      else {
        lVar6 = 0;
LAB_10995efd0:
        FUN_10995ec1c(param_1 * param_2,param_4[2],*param_4,param_4[2],lVar3,puVar5);
        if (0x4000 < uVar8) {
          _free(lVar6);
        }
        if (0x4000 < uVar7) {
          _free(puVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995f0a4;
    }
  }
  else {
LAB_10995f03c:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995f0a4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10995f0a8);
  (*pcVar1)();
}



/* Entry: 10995f0c8; end: 10995f2ab;  */

void FUN_10995f0c8(double param_1,double param_2,double *param_3,undefined *param_4,double *param_5,
                  long *param_6)

{
  bool bVar1;
  long *plVar2;
  double *pdVar3;
  code *pcVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  double *pdVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  undefined *unaff_x20;
  double *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar15;
  double dVar16;
  double unaff_d8;
  undefined8 unaff_d9;
  double dStack_50;
  long lStack_48;
  
  pdVar11 = &dStack_50;
  pdVar7 = &dStack_50;
  pdVar5 = &dStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_6;
  dVar16 = param_1;
  if ((ulong)param_6 >> 0x3d == 0) {
    puVar8 = param_4;
    unaff_x19 = param_6;
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_d8 = param_1;
    if (param_5 == (double *)0x0) {
      pdVar6 = (double *)((long)param_6 << 3);
      if (param_6 < (long *)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar10 = -((long)pdVar6 + 0x1eU & 0xfffffffffffffff0);
        pdVar7 = (double *)((long)&dStack_50 + lVar10);
        pdVar6 = (double *)((long)&dStack_50 + lVar10);
        param_5 = pdVar6;
        goto LAB_10995f150;
      }
      _malloc();
      if (pdVar6 == (double *)0x0) goto LAB_10995f288;
      bVar1 = true;
      param_5 = pdVar6;
LAB_10995f170:
      pdVar5 = param_3;
      plVar12 = (long *)0x0;
      do {
        dVar16 = param_1 * param_5[(long)plVar12];
        plVar2 = (long *)((long)plVar12 + 1);
        uVar15 = (ulong)((uint)((int)param_3 + (int)plVar12 * (int)param_4 * 8) >> 3) & 1;
        if ((long)plVar2 <= (long)uVar15) {
          uVar15 = (long)plVar12 + 1;
        }
        pdVar7 = param_5;
        pdVar3 = pdVar5;
        uVar13 = uVar15;
        if (((ulong)param_3 & 7) != 0) {
          uVar15 = (long)plVar12 + 1;
          uVar13 = uVar15;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          param_2 = dVar16 * *pdVar7 + *pdVar3;
          *pdVar3 = param_2;
          pdVar7 = pdVar7 + 1;
          pdVar3 = pdVar3 + 1;
        }
        lVar14 = (long)plVar2 - uVar13;
        lVar10 = (lVar14 - (lVar14 >> 0x3f) & 0xfffffffffffffffeU) + uVar13;
        if (1 < lVar14) {
          lVar14 = uVar13 << 3;
          do {
            param_2 = *(double *)((long)pdVar5 + lVar14) +
                      *(double *)((long)param_5 + lVar14) * dVar16;
            ((double *)((long)pdVar5 + lVar14))[1] =
                 ((double *)((long)pdVar5 + lVar14))[1] +
                 ((double *)((long)param_5 + lVar14))[1] * dVar16;
            *(double *)((long)pdVar5 + lVar14) = param_2;
            uVar13 = uVar13 + 2;
            lVar14 = lVar14 + 0x10;
          } while ((long)uVar13 < lVar10);
        }
        if (lVar10 <= (long)plVar12) {
          do {
            param_2 = dVar16 * param_5[lVar10] + pdVar5[lVar10];
            pdVar5[lVar10] = param_2;
            lVar10 = lVar10 + 1;
          } while ((long)plVar12 + 1U != lVar10);
        }
        pdVar5 = pdVar5 + (long)param_4;
        pdVar7 = pdVar11;
        plVar12 = plVar2;
      } while (plVar2 != param_6);
    }
    else {
      pdVar6 = (double *)0x0;
LAB_10995f150:
      bVar1 = (long *)0x4000 < param_6;
      pdVar11 = pdVar7;
      if (param_6 != (long *)0x0) goto LAB_10995f170;
    }
    if (bVar1) {
      _free();
    }
    pdVar5 = pdVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
LAB_10995f288:
    pdVar6 = (double *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar8 = PTR___ZTISt9bad_alloc_110346a68;
    param_5 = (double *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)pdVar5 + -0x50) = unaff_d9;
  *(double *)((long)pdVar5 + -0x48) = unaff_d8;
  *(undefined8 *)((long)pdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pdVar5 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pdVar5 + -0x30) = unaff_x22;
  *(double **)((long)pdVar5 + -0x28) = unaff_x21;
  *(undefined **)((long)pdVar5 + -0x20) = unaff_x20;
  *(long **)((long)pdVar5 + -0x18) = unaff_x19;
  *(undefined1 **)((long)pdVar5 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)pdVar5 + -8) = FUN_10995f2ac;
  pdVar11 = (double *)((long)pdVar5 + -0x60);
  *(undefined8 *)((long)pdVar5 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar8 >> 0x3d == 0) {
    if (pdVar6 == (double *)0x0) {
      pdVar7 = (double *)((long)puVar8 << 3);
      if (puVar8 < (undefined *)0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        pdVar11 = (double *)((long)pdVar5 + (-0x60 - ((long)pdVar7 + 0x1eU & 0xfffffffffffffff0)));
        pdVar7 = pdVar11;
        pdVar6 = pdVar11;
      }
      else {
        _malloc();
        pdVar6 = pdVar7;
        if (pdVar7 == (double *)0x0) goto LAB_10995f428;
      }
    }
    else {
      pdVar11 = (double *)((long)pdVar5 + -0x60);
      pdVar7 = (double *)0x0;
    }
    uVar15 = plVar9[1];
    if (uVar15 >> 0x3d == 0) {
      lVar10 = *plVar9;
      if (lVar10 == 0) {
        lVar10 = uVar15 << 3;
        if (uVar15 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar10 = (long)pdVar11 - (lVar10 + 0x1eU & 0xfffffffffffffff0);
          lVar14 = lVar10;
          goto LAB_10995f3c0;
        }
        _malloc();
        lVar14 = lVar10;
        if (lVar10 != 0) goto LAB_10995f3c0;
      }
      else {
        lVar14 = 0;
LAB_10995f3c0:
        FUN_10995f4b4(dVar16 * param_2,param_5[1],*param_5,param_5[2],lVar10,pdVar6);
        if (0x4000 < uVar15) {
          _free(lVar14);
        }
        if ((undefined *)0x4000 < puVar8) {
          _free(pdVar7);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar5 + -0x58)) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995f490;
    }
  }
  else {
LAB_10995f428:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995f490:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10995f494);
  (*pcVar4)();
}



/* Entry: 10995f2ac; end: 10995f4b3;  */

void FUN_10995f2ac(double param_1,double param_2,undefined1 *param_3,ulong param_4,
                  undefined8 *param_5,long *param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar2 = auStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3d == 0) {
    if (param_3 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(param_4 << 3);
      if (param_4 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar2 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puVar4 = auStack_60 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        param_3 = puVar4;
      }
      else {
        _malloc();
        param_3 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_10995f428;
      }
    }
    else {
      puVar4 = (undefined1 *)0x0;
      puVar2 = auStack_60;
    }
    uVar6 = param_6[1];
    if (uVar6 >> 0x3d == 0) {
      lVar3 = *param_6;
      if (lVar3 == 0) {
        lVar3 = uVar6 << 3;
        if (uVar6 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar3 = (long)puVar2 - (lVar3 + 0x1eU & 0xfffffffffffffff0);
          lVar5 = lVar3;
          goto LAB_10995f3c0;
        }
        _malloc();
        lVar5 = lVar3;
        if (lVar3 != 0) goto LAB_10995f3c0;
      }
      else {
        lVar5 = 0;
LAB_10995f3c0:
        FUN_10995f4b4(param_1 * param_2,param_5[1],*param_5,param_5[2],lVar3,param_3);
        if (0x4000 < uVar6) {
          _free(lVar5);
        }
        if (0x4000 < param_4) {
          _free(puVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10995f490;
    }
  }
  else {
LAB_10995f428:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10995f490:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10995f494);
  (*pcVar1)();
}



/* Entry: 10995f4b4; end: 10995f753;  */

void FUN_10995f4b4(double param_1,long param_2,long param_3,long param_4,double *param_5,
                  double *param_6)

{
  uint uVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double *pdVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
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
  
  lVar10 = param_2;
  if (param_2 < 9) {
    lVar10 = 8;
  }
  uVar1 = (int)lVar10 - 8;
  uVar6 = param_2 - ((ulong)uVar1 & 0xfffffffe);
  if ((uVar1 & 0xfffffffe) != 0) {
    uVar8 = (ulong)param_6 >> 3 & 1;
    pdVar9 = (double *)(param_3 + (param_4 + param_4 * uVar6) * 8);
    pdVar11 = (double *)(param_3 + param_4 * uVar6 * 8);
    uVar7 = uVar6;
    do {
      lVar10 = uVar7 + 1;
      lVar14 = param_3 + lVar10 * param_4 * 8;
      dVar16 = param_1 * param_5[uVar7];
      dVar17 = param_1 * param_5[lVar10];
      uVar12 = uVar8;
      if ((long)uVar7 <= (long)uVar8) {
        uVar12 = uVar7;
      }
      if (((ulong)param_6 & 7) != 0) {
        uVar12 = uVar7;
      }
      dVar18 = param_6[uVar7] + dVar16 * *(double *)(param_3 + uVar7 * param_4 * 8 + uVar7 * 8);
      param_6[uVar7] = dVar18;
      param_6[lVar10] = param_6[lVar10] + dVar17 * *(double *)(lVar14 + lVar10 * 8);
      param_6[uVar7] = dVar18 + dVar17 * *(double *)(lVar14 + uVar7 * 8);
      dVar19 = 0.0;
      dVar18 = *(double *)(lVar14 + uVar7 * 8) * param_5[uVar7] + 0.0;
      pdVar2 = pdVar9;
      pdVar4 = param_6;
      pdVar5 = param_5;
      pdVar13 = pdVar11;
      uVar15 = uVar12;
      if (0 < (long)uVar12) {
        do {
          *pdVar4 = *pdVar4 + dVar16 * *pdVar13 + dVar17 * *pdVar2;
          dVar19 = dVar19 + *pdVar13 * *pdVar5;
          dVar18 = dVar18 + *pdVar5 * *pdVar2;
          uVar15 = uVar15 - 1;
          pdVar2 = pdVar2 + 1;
          pdVar4 = pdVar4 + 1;
          pdVar5 = pdVar5 + 1;
          pdVar13 = pdVar13 + 1;
        } while (uVar15 != 0);
      }
      lVar3 = uVar7 - uVar12;
      lVar14 = (lVar3 - (lVar3 >> 0x3f) & 0xfffffffffffffffeU) + uVar12;
      dVar20 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      dVar23 = 0.0;
      if (1 < lVar3) {
        lVar3 = uVar12 << 3;
        do {
          dVar25 = ((double *)((long)pdVar11 + lVar3))[1];
          dVar24 = *(double *)((long)pdVar11 + lVar3);
          dVar27 = ((double *)((long)pdVar9 + lVar3))[1];
          dVar26 = *(double *)((long)pdVar9 + lVar3);
          dVar29 = ((double *)((long)param_5 + lVar3))[1];
          dVar28 = *(double *)((long)param_5 + lVar3);
          dVar30 = *(double *)((long)param_6 + lVar3);
          dVar22 = dVar22 + dVar28 * dVar24;
          dVar23 = dVar23 + dVar29 * dVar25;
          dVar20 = dVar20 + dVar28 * dVar26;
          dVar21 = dVar21 + dVar29 * dVar27;
          ((double *)((long)param_6 + lVar3))[1] =
               ((double *)((long)param_6 + lVar3))[1] + dVar27 * dVar17 + dVar25 * dVar16;
          *(double *)((long)param_6 + lVar3) = dVar30 + dVar26 * dVar17 + dVar24 * dVar16;
          uVar12 = uVar12 + 2;
          lVar3 = lVar3 + 0x10;
        } while ((long)uVar12 < lVar14);
      }
      for (; lVar14 < (long)uVar7; lVar14 = lVar14 + 1) {
        param_6[lVar14] = param_6[lVar14] + dVar16 * pdVar11[lVar14] + dVar17 * pdVar9[lVar14];
        dVar19 = dVar19 + pdVar11[lVar14] * param_5[lVar14];
        dVar18 = dVar18 + param_5[lVar14] * pdVar9[lVar14];
      }
      param_6[uVar7] = param_6[uVar7] + (dVar22 + dVar23 + dVar19) * param_1;
      param_6[lVar10] = param_6[lVar10] + (dVar20 + dVar21 + dVar18) * param_1;
      uVar7 = uVar7 + 2;
      pdVar9 = pdVar9 + param_4 * 2;
      pdVar11 = pdVar11 + param_4 * 2;
    } while ((long)uVar7 < param_2);
  }
  if (0 < (long)uVar6) {
    uVar7 = 0;
    lVar10 = param_3;
    do {
      dVar16 = param_5[uVar7];
      dVar17 = param_6[uVar7] +
               *(double *)(param_3 + uVar7 * param_4 * 8 + uVar7 * 8) * param_1 * dVar16;
      param_6[uVar7] = dVar17;
      if (uVar7 == 0) {
        dVar18 = 0.0;
      }
      else {
        uVar8 = 0;
        dVar18 = 0.0;
        do {
          param_6[uVar8] = param_6[uVar8] + param_1 * dVar16 * *(double *)(lVar10 + uVar8 * 8);
          dVar18 = dVar18 + *(double *)(lVar10 + uVar8 * 8) * param_5[uVar8];
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
        dVar17 = param_6[uVar7];
      }
      param_6[uVar7] = dVar17 + dVar18 * param_1;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + param_4 * 8;
    } while (uVar7 != uVar6);
  }
  return;
}



/* Entry: 10995f754; end: 109961c1f;  */

long ** FUN_10995f754(undefined8 param_1,int *param_2,double *param_3,long **param_4)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  long **pplVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  undefined *puVar20;
  long **pplVar21;
  double *pdVar22;
  long **pplVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  double *pdVar28;
  double *pdVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  double *pdVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long **pplVar38;
  long lVar39;
  uint uVar40;
  undefined5 *puVar42;
  undefined3 *puVar43;
  long *plVar44;
  ulong *puVar45;
  long **pplVar46;
  undefined *puVar47;
  ulong uVar48;
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined5 uStack_310;
  uint3 uStack_30b;
  undefined5 uStack_308;
  undefined3 uStack_303;
  ulong uStack_300;
  undefined3 uStack_2f8;
  undefined5 uStack_2f5;
  undefined1 uStack_2f0;
  undefined2 uStack_2ef;
  undefined5 uStack_2ed;
  undefined3 uStack_2e8;
  undefined5 uStack_2e5;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  int iStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long *plStack_278;
  int aiStack_270 [2];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int iStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  long *plStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined8 uStack_1c0;
  int iStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_130;
  long **pplStack_128;
  ulong uStack_120;
  double dStack_118;
  double dStack_110;
  long **pplStack_108;
  ulong uStack_100;
  double dStack_f8;
  ulong uStack_f0;
  double dStack_e8;
  long **pplStack_e0;
  ulong uStack_d8;
  double dStack_d0;
  double dStack_c8;
  long **pplStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  ulong uStack_a8;
  long *plVar41;
  
  bVar7 = *(byte *)(param_2 + 0x3a);
  _gettimeofday(&plStack_320,0);
  uVar5 = (uint)uStack_318;
  plVar27 = plStack_320;
  plVar44 = *(long **)(param_2 + 0x42);
  if (plVar44 == (long *)0x0) {
    plStack_320 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_308 = 0;
    uStack_303 = 0;
    uStack_310 = 0;
    uStack_30b = 0;
    uStack_2f8 = 0;
    uStack_2f5 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2e5 = 0;
    uStack_2f0 = 0;
    uStack_2ef = 0;
    uStack_2ed = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    uVar26 = 3;
    FUN_1099a9f0c(&plStack_320,&UNK_10f58da1b,0x5d,3,FUN_1099aa768,0);
    puVar24 = (undefined8 *)&UNK_10f58daa9;
    lVar25 = 0x2b;
    FUN_1092b4db8(CONCAT44(uStack_318._4_4_,(uint)uStack_318) + 0x7540);
LAB_109961c18:
    pplVar23 = &plStack_320;
    func_0x0001099ab7c0();
    uVar48 = *(ulong *)(lVar25 + 0x10);
    if ((long)uVar48 < 1) {
      lVar39 = 0;
      lVar37 = *(long *)(lVar25 + 8);
      uVar30 = -(-uVar48 & 0xfffffffffffffffe);
    }
    else {
      if (uVar48 >> 0x3d != 0) {
LAB_109961f74:
        pplVar23 = (long **)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        _free(param_4);
        __Unwind_Resume();
        if (*(char *)((long)pplVar23 + 0xa7) < '\0') {
          __ZdlPv(pplVar23[0x12]);
        }
        _free(pplVar23[7]);
        _free(pplVar23[2]);
        return pplVar23;
      }
      lVar39 = uVar48 << 3;
      _malloc();
      if (lVar39 == 0) goto LAB_109961f74;
      lVar37 = *(long *)(lVar25 + 8);
      if (uVar48 == 1) {
        uVar30 = 0;
      }
      else {
        lVar36 = 0;
        uVar35 = 0;
        uVar30 = uVar48 & 0x1ffffffffffffffe;
        do {
          dVar57 = *(double *)(lVar37 + lVar36);
          ((double *)(lVar39 + lVar36))[1] = -((double *)(lVar37 + lVar36))[1];
          *(double *)(lVar39 + lVar36) = -dVar57;
          uVar35 = uVar35 + 2;
          lVar36 = lVar36 + 0x10;
        } while (uVar35 < uVar30);
      }
    }
    lVar36 = uVar48 - uVar30;
    if (lVar36 != 0 && (long)uVar30 <= (long)uVar48) {
      pdVar22 = (double *)(lVar37 + uVar30 * 8);
      pdVar29 = (double *)(lVar39 + uVar30 * 8);
      do {
        *pdVar29 = -*pdVar22;
        lVar36 = lVar36 + -1;
        pdVar22 = pdVar22 + 1;
        pdVar29 = pdVar29 + 1;
      } while (lVar36 != 0);
    }
    uVar48 = puVar24[1];
    if ((long)uVar48 < 1) {
      pdVar22 = (double *)0x0;
LAB_109961d30:
      (*(code *)(*pplVar23)[4])(pplVar23,*puVar24,lVar39,pdVar22);
      if (((ulong)pplVar23 & 1) == 0) {
        func_0x000107c2c4d8(uVar26,&UNK_10f58df41,0x34);
      }
      else {
        if (uVar48 == 0) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
          dVar57 = 0.0;
        }
        else {
          pdVar29 = (double *)*puVar24;
          uVar30 = uVar48 + 3;
          if (-1 < (long)uVar48) {
            uVar30 = uVar48;
          }
          if (uVar48 + 1 < 3) {
            dVar58 = *pdVar22;
            dVar57 = *pdVar29 - dVar58;
            *(double *)(lVar25 + 0x18) = dVar57 * dVar57;
            dVar57 = ABS(*pdVar29 - dVar58);
          }
          else {
            uVar30 = uVar30 & 0xfffffffffffffffc;
            uVar35 = uVar48 - ((long)uVar48 >> 0x3f) & 0xfffffffffffffffe;
            dVar57 = *pdVar22;
            dVar58 = pdVar22[1];
            dVar51 = *pdVar29 - dVar57;
            dVar50 = pdVar29[1] - dVar58;
            dVar51 = dVar51 * dVar51;
            dVar50 = dVar50 * dVar50;
            if (3 < (long)uVar48) {
              dVar54 = (pdVar29[2] - pdVar22[2]) * (pdVar29[2] - pdVar22[2]);
              dVar55 = (pdVar29[3] - pdVar22[3]) * (pdVar29[3] - pdVar22[3]);
              if (7 < uVar48) {
                pdVar34 = pdVar22 + 6;
                pdVar28 = pdVar29 + 6;
                lVar37 = 4;
                do {
                  dVar51 = dVar51 + (pdVar28[-2] - pdVar34[-2]) * (pdVar28[-2] - pdVar34[-2]);
                  dVar50 = dVar50 + (pdVar28[-1] - pdVar34[-1]) * (pdVar28[-1] - pdVar34[-1]);
                  dVar54 = dVar54 + (*pdVar28 - *pdVar34) * (*pdVar28 - *pdVar34);
                  dVar55 = dVar55 + (pdVar28[1] - pdVar34[1]) * (pdVar28[1] - pdVar34[1]);
                  lVar37 = lVar37 + 4;
                  pdVar34 = pdVar34 + 4;
                  pdVar28 = pdVar28 + 4;
                } while (lVar37 < (long)uVar30);
              }
              dVar51 = dVar54 + dVar51;
              dVar50 = dVar55 + dVar50;
              if ((long)uVar30 < (long)uVar35) {
                dVar54 = pdVar29[uVar30] - pdVar22[uVar30];
                dVar55 = (pdVar29 + uVar30)[1] - (pdVar22 + uVar30)[1];
                dVar51 = dVar51 + dVar54 * dVar54;
                dVar50 = dVar50 + dVar55 * dVar55;
              }
            }
            dVar51 = dVar51 + dVar50;
            lVar37 = (long)uVar48 % 2;
            pdVar34 = pdVar29 + ((long)uVar48 / 2) * 2;
            pdVar28 = pdVar22 + ((long)uVar48 / 2) * 2;
            if (lVar37 != 0 && lVar37 < 0 == SBORROW8(uVar48,uVar35)) {
              do {
                dVar51 = dVar51 + (*pdVar34 - *pdVar28) * (*pdVar34 - *pdVar28);
                lVar37 = lVar37 + -1;
                pdVar34 = pdVar34 + 1;
                pdVar28 = pdVar28 + 1;
              } while (lVar37 != 0);
            }
            *(double *)(lVar25 + 0x18) = dVar51;
            auVar49._0_8_ = ABS(*pdVar29 - dVar57);
            auVar49._8_8_ = ABS(pdVar29[1] - dVar58);
            if (3 < (long)uVar48) {
              auVar52._0_8_ = ABS(pdVar29[2] - pdVar22[2]);
              auVar52._8_8_ = ABS(pdVar29[3] - pdVar22[3]);
              if (7 < uVar48) {
                pdVar34 = pdVar22 + 6;
                pdVar28 = pdVar29 + 6;
                lVar37 = 4;
                do {
                  auVar9._8_8_ = ABS(pdVar28[-1] - pdVar34[-1]);
                  auVar9._0_8_ = ABS(pdVar28[-2] - pdVar34[-2]);
                  auVar49 = NEON_fmax(auVar49,auVar9,8);
                  auVar10._8_8_ = ABS(pdVar28[1] - pdVar34[1]);
                  auVar10._0_8_ = ABS(*pdVar28 - *pdVar34);
                  auVar52 = NEON_fmax(auVar52,auVar10,8);
                  lVar37 = lVar37 + 4;
                  pdVar34 = pdVar34 + 4;
                  pdVar28 = pdVar28 + 4;
                } while (lVar37 < (long)uVar30);
              }
              auVar49 = NEON_fmax(auVar49,auVar52,8);
              if ((long)uVar30 < (long)uVar35) {
                auVar53._0_8_ = ABS(pdVar29[uVar30] - pdVar22[uVar30]);
                auVar53._8_8_ = ABS((pdVar29 + uVar30)[1] - (pdVar22 + uVar30)[1]);
                auVar49 = NEON_fmax(auVar49,auVar53,8);
              }
            }
            dVar57 = auVar49._8_8_;
            if (auVar49._8_8_ <= auVar49._0_8_) {
              dVar57 = auVar49._0_8_;
            }
            lVar37 = (long)uVar48 % 2;
            pdVar34 = pdVar22 + ((long)uVar48 / 2) * 2;
            pdVar29 = pdVar29 + ((long)uVar48 / 2) * 2;
            dVar58 = dVar57;
            if (lVar37 != 0 && lVar37 < 0 == SBORROW8(uVar48,uVar35)) {
              do {
                dVar57 = ABS(*pdVar29 - *pdVar34);
                if (ABS(*pdVar29 - *pdVar34) <= dVar58) {
                  dVar57 = dVar58;
                }
                lVar37 = lVar37 + -1;
                pdVar34 = pdVar34 + 1;
                pdVar29 = pdVar29 + 1;
                dVar58 = dVar57;
              } while (lVar37 != 0);
            }
          }
        }
        *(double *)(lVar25 + 0x20) = dVar57;
      }
      _free(pdVar22);
      _free(lVar39);
      return pplVar23;
    }
    if (uVar48 >> 0x3d == 0) {
      pdVar22 = (double *)(uVar48 << 3);
      _malloc();
      if (pdVar22 != (double *)0x0) goto LAB_109961d30;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x109961d2c);
    (*pcVar14)();
  }
  plVar41 = plVar44;
  (**(code **)(*plVar44 + 0x28))();
  plVar17 = plVar44;
  (**(code **)(*plVar44 + 0x30))();
  *(undefined4 *)((long)param_4 + 4) = 1;
  param_4[10] = (long *)0x0;
  iVar15 = (int)plVar17;
  uVar48 = (ulong)iVar15;
  dStack_e8 = 0.0;
  pplStack_e0 = (long **)0x0;
  uStack_d8 = 0;
  if (iVar15 == 0) {
    pplVar23 = (long **)0x0;
    dStack_d0 = 0.0;
    pplStack_c0 = (long **)0x0;
    dStack_b0 = 0.0;
    uStack_a8 = 0;
    pplStack_128 = (long **)0x0;
    dStack_130 = 0.0;
    dStack_118 = 0.0;
    pplStack_108 = (long **)0x0;
    uStack_120 = uVar48;
    pplVar46 = pplStack_108;
    uStack_d8 = uVar48;
    uStack_b8 = uVar48;
  }
  else if (iVar15 < 1) {
    pplVar23 = (long **)0x0;
    dStack_d0 = 0.0;
    pplStack_c0 = (long **)0x0;
    dStack_b0 = 0.0;
    uStack_a8 = 0;
    pplStack_128 = (long **)0x0;
    dStack_130 = 0.0;
    dStack_118 = 0.0;
    uStack_120 = uVar48;
    pplVar46 = (long **)0x0;
    uStack_d8 = uVar48;
    uStack_b8 = uVar48;
  }
  else {
    pplVar46 = (long **)(uVar48 << 3);
    pplVar23 = pplVar46;
    _malloc();
    if (pplVar23 == (long **)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109961a2c;
    }
    pplStack_c0 = (long **)0x0;
    uStack_b8 = 0;
    dStack_d0 = 0.0;
    pplVar21 = pplVar46;
    pplStack_e0 = pplVar23;
    uStack_d8 = uVar48;
    _malloc();
    if (pplVar21 == (long **)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109961a2c;
    }
    dStack_b0 = 0.0;
    uStack_a8 = 0;
    pplStack_128 = (long **)0x0;
    dStack_130 = 0.0;
    uStack_120 = 0;
    pplVar16 = pplVar46;
    pplStack_c0 = pplVar21;
    uStack_b8 = uVar48;
    _malloc();
    if (pplVar16 == (long **)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109961a2c;
    }
    uStack_100 = 0;
    dStack_118 = 0.0;
    pplStack_108 = (long **)0x0;
    pplStack_128 = pplVar16;
    uStack_120 = uVar48;
    _malloc();
    if (pplVar46 == (long **)0x0) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109961a2c;
    }
  }
  pplStack_108 = pplVar46;
  uStack_f0 = 0;
  dStack_f8 = 0.0;
  uStack_1b0 = uStack_1b0 & 0xff00000000000000;
  dStack_1a0 = 0.0;
  plStack_1a8 = (long *)0x0;
  dStack_190 = 0.0;
  dStack_198 = 0.0;
  uStack_180 = 0;
  dStack_188 = 0.0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  dStack_150 = 0.0;
  uStack_158 = 0;
  dStack_140 = 0.0;
  dStack_148 = 0.0;
  plStack_320 = (long *)CONCAT62(plStack_320._2_6_,0x101);
  plVar17 = plVar44;
  uStack_100 = uVar48;
  (**(code **)(*plVar44 + 0x18))(plVar44,&plStack_320,param_3,&dStack_e8,0,pplVar23,0);
  if (((ulong)plVar17 & 1) == 0) {
    *(undefined4 *)((long)param_4 + 4) = 2;
    func_0x000107c2c4d8(param_4 + 1,&UNK_10f58dad5,0x2c);
    if ((bVar7 & 1) != 0) goto LAB_109960de4;
    plStack_320 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_308 = 0;
    uStack_303 = 0;
    uStack_310 = 0;
    uStack_30b = 0;
    uStack_2f8 = 0;
    uStack_2f5 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2e5 = 0;
    uStack_2f0 = 0;
    uStack_2ef = 0;
    uStack_2ed = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    FUN_1099a9f0c(&plStack_320,&UNK_10f58da1b,0x7f,1,FUN_1099aa768,0);
    FUN_1092b4db8(CONCAT44(uStack_318._4_4_,(uint)uStack_318) + 0x7540,&UNK_10f58db02,0xd);
    FUN_1092b4db8();
  }
  else {
    uVar40 = (uint)plVar41;
    plVar41 = (long *)(long)(int)uVar40;
    plStack_320 = (long *)0x0;
    uStack_318._0_4_ = 0;
    uStack_318._4_4_ = 0;
    iVar12 = uStack_318._4_4_;
    if (uVar40 == 0) {
      plVar17 = (long *)0x0;
    }
    else {
      uStack_318._4_4_ = (int)uVar40 >> 0x1f;
      iVar13 = uStack_318._4_4_;
      if ((int)uVar40 < 1) {
        plVar17 = (long *)0x0;
        uVar48 = -(-(long)plVar41 & 0xfffffffffffffffeU);
        uStack_318._0_4_ = uVar40;
        uStack_318._4_4_ = iVar13;
      }
      else {
        plVar17 = (long *)((long)plVar41 << 3);
        uStack_318._4_4_ = iVar12;
        _malloc();
        if (plVar17 == (long *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_109961a2c;
        }
        plStack_320 = plVar17;
        if (uVar40 == 1) {
          uVar48 = 0;
          uStack_318._0_4_ = uVar40;
          uStack_318._4_4_ = iVar13;
        }
        else {
          uVar48 = (ulong)plVar41 & 0x7ffffffe;
          uVar30 = uVar48;
          if (uVar48 < 3) {
            uVar30 = 2;
          }
          uStack_318._0_4_ = uVar40;
          uStack_318._4_4_ = iVar13;
          _memcpy(plVar17,param_3,uVar30 * 8);
        }
      }
      if ((long)plVar41 - uVar48 != 0 && (long)uVar48 <= (long)plVar41) {
        _memcpy(plVar17 + uVar48,param_3 + uVar48,((long)plVar41 - uVar48) * 8);
      }
    }
    pplVar23 = param_4 + 1;
    plVar18 = plVar44;
    FUN_109961c20(plVar44,&plStack_320,&dStack_e8,pplVar23);
    _free(plVar17);
    if (((ulong)plVar18 & 1) != 0) {
      plStack_1a8 = (long *)(dStack_e8 + (double)param_4[6]);
      param_4[4] = plStack_1a8;
      dStack_190 = SQRT(dStack_d0);
      dStack_198 = dStack_c8;
      if (dStack_c8 <= *(double *)(param_2 + 6)) {
        FUN_109988e2c(&plStack_320,&UNK_10f58db4c);
        if (*(char *)((long)param_4 + 0x1f) < '\0') {
          __ZdlPv(*pplVar23);
        }
        param_4[2] = uStack_318;
        *pplVar23 = plStack_320;
        param_4[3] = (long *)CONCAT35(uStack_30b,uStack_310);
        *(undefined4 *)((long)param_4 + 4) = 0;
        if ((bVar7 & 1) != 0) goto LAB_109960de4;
        if (piRam000000011373cee0 == (int *)0x0) {
          iVar15 = 0x1373cee0;
          FUN_1099adbb8(0x11373cee0,0x11382bb14,&UNK_10f58da1b,1);
          if (iVar15 == 0) goto LAB_109960de4;
        }
        else if (*piRam000000011373cee0 < 1) goto LAB_109960de4;
        plStack_320 = (long *)0x0;
        uStack_2c8 = 0;
        uStack_308 = 0;
        uStack_303 = 0;
        uStack_310 = 0;
        uStack_30b = 0;
        uStack_2f8 = 0;
        uStack_2f5 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2e5 = 0;
        uStack_2f0 = 0;
        uStack_2ef = 0;
        uStack_2ed = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        FUN_1099a9f0c(&plStack_320,&UNK_10f58da1b,0x9b,0,FUN_1099aa768,0);
        FUN_1092b4db8(CONCAT44(uStack_318._4_4_,(uint)uStack_318) + 0x7540,&UNK_10f58db02,0xd);
        FUN_1092b4db8();
        goto LAB_109960ddc;
      }
      dVar57 = (double)(long)plVar27 + (double)(int)uVar5 * 1e-06;
      _gettimeofday(&plStack_320,0);
      dStack_150 = ((double)(long)plStack_320 + (double)(int)(uint)uStack_318 * 1e-06) - dVar57;
      _gettimeofday(&plStack_320,0);
      dStack_140 = (double)param_4[0xc] +
                   (((double)(long)plStack_320 + (double)(int)(uint)uStack_318 * 1e-06) - dVar57);
      puVar45 = (ulong *)param_4[8];
      if (puVar45 < param_4[9]) {
        puVar45[5] = (ulong)dStack_188;
        puVar45[4] = (ulong)dStack_190;
        puVar45[7] = uStack_178;
        puVar45[6] = uStack_180;
        puVar45[1] = (ulong)plStack_1a8;
        *puVar45 = uStack_1b0;
        puVar45[3] = (ulong)dStack_198;
        puVar45[2] = (ulong)dStack_1a0;
        puVar45[0xe] = (ulong)dStack_140;
        puVar45[0xb] = uStack_158;
        puVar45[10] = uStack_160;
        puVar45[0xd] = (ulong)dStack_148;
        puVar45[0xc] = (ulong)dStack_150;
        puVar45[9] = uStack_168;
        puVar45[8] = uStack_170;
        puVar45 = puVar45 + 0xf;
      }
      else {
        plVar27 = param_4[7];
        uVar48 = ((long)puVar45 - (long)plVar27 >> 3) * -0x1111111111111111 + 1;
        if (0x222222222222222 < uVar48) {
          FUN_109962038();
LAB_109961a2c:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x109961a30);
          (*pcVar14)();
        }
        lVar25 = (long)param_4[9] - (long)plVar27 >> 3;
        uVar30 = lVar25 * -0x2222222222222222;
        if (uVar30 < uVar48 || uVar30 - uVar48 == 0) {
          uVar30 = uVar48;
        }
        if (0x111111111111110 < (ulong)(lVar25 * -0x1111111111111111)) {
          uVar30 = 0x222222222222222;
        }
        if (0x222222222222222 < uVar30) {
          func_0x000104c4f740();
          goto LAB_109961a2c;
        }
        plVar17 = (long *)(uVar30 * 0x78);
        __Znwm();
        puVar2 = (ulong *)((long)plVar17 + ((long)puVar45 - (long)plVar27));
        puVar2[9] = uStack_168;
        puVar2[8] = uStack_170;
        puVar2[0xb] = uStack_158;
        puVar2[10] = uStack_160;
        puVar2[0xd] = (ulong)dStack_148;
        puVar2[0xc] = (ulong)dStack_150;
        puVar2[0xe] = (ulong)dStack_140;
        puVar2[1] = (ulong)plStack_1a8;
        *puVar2 = uStack_1b0;
        puVar2[3] = (ulong)dStack_198;
        puVar2[2] = (ulong)dStack_1a0;
        puVar45 = puVar2 + 0xf;
        puVar2[5] = (ulong)dStack_188;
        puVar2[4] = (ulong)dStack_190;
        puVar2[7] = uStack_178;
        puVar2[6] = uStack_180;
        _memcpy();
        param_4[7] = plVar17;
        param_4[8] = (long *)puVar45;
        param_4[9] = plVar17 + uVar30 * 0xf;
        if (plVar27 != (long *)0x0) {
          __ZdlPv(plVar27);
        }
      }
      param_4[8] = (long *)puVar45;
      uStack_1c0 = 0x3d719799812dea11;
      iStack_1cc = param_2[0x24];
      iStack_1c8 = param_2[0x26];
      iStack_1b8 = param_2[0x27];
      uStack_1b4 = (undefined1)param_2[0x28];
      iStack_1d0 = iVar15;
      FUN_10995c35c(&plStack_1d8,&iStack_1d0);
      FUN_109957fec(auStack_220,plVar44);
      aiStack_270[0] = param_2[0x29];
      uStack_250 = *(undefined8 *)(param_2 + 0x2a);
      uStack_268 = *(undefined8 *)(param_2 + 0x2c);
      uStack_260 = *(undefined8 *)(param_2 + 0x2e);
      uStack_258 = *(undefined8 *)(param_2 + 0x30);
      iStack_248 = param_2[0x32];
      uStack_240 = *(undefined8 *)(param_2 + 0x34);
      uStack_238 = *(undefined8 *)(param_2 + 0x36);
      uStack_230 = (undefined1)param_2[0x3a];
      puStack_228 = auStack_220;
      FUN_109957c58(&plStack_278,param_2[0x25],aiStack_270,pplVar23);
      if (plStack_278 == (long *)0x0) {
        *(undefined4 *)((long)param_4 + 4) = 2;
        if ((bVar7 & 1) == 0) {
          plStack_320 = (long *)0x0;
          uStack_2c8 = 0;
          uStack_308 = 0;
          uStack_303 = 0;
          uStack_310 = 0;
          uStack_30b = 0;
          uStack_2f8 = 0;
          uStack_2f5 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2e5 = 0;
          uStack_2f0 = 0;
          uStack_2ef = 0;
          uStack_2ed = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
          FUN_1099a9f0c(&plStack_320,&UNK_10f58da1b,0xcb,2,FUN_1099aa768,0);
          FUN_1092b4db8(CONCAT44(uStack_318._4_4_,(uint)uStack_318) + 0x7540,&UNK_10f58db02,0xd);
          FUN_1092b4db8();
          FUN_1099ab3b0(&plStack_320);
          goto LAB_109961780;
        }
      }
      else {
        iVar15 = 0;
        plStack_320 = (long *)((ulong)plStack_320 & 0xffffffffffffff00);
        uStack_2f8 = 0;
        uStack_2f5 = 0;
        uStack_2f0 = 0;
        uStack_2d0 = 0;
        uVar48 = (ulong)plVar41 & 0x7ffffffe;
        uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
        uStack_310 = 0;
        uStack_30b = 0;
        uStack_308 = 0;
        uStack_303 = 0;
        uVar5 = uVar40 + 3;
        if (-1 < (int)uVar40) {
          uVar5 = uVar40;
        }
        uVar30 = -(ulong)((uint)((int)uVar5 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(uint)((int)uVar5 >> 2) << 2;
        uStack_318._0_4_ = 0;
        uStack_318._4_4_ = 0;
        uStack_300 = uStack_300 & 0xffffffffffffff00;
        uVar3 = (int)uVar40 / 2;
        uVar35 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        uStack_2e8 = 0;
        uStack_2e5 = 0;
        uStack_2e0 = 0;
        pdVar22 = param_3 + ((long)((ulong)uVar5 << 0x20) >> 0x22) * 4;
        uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
        plVar27 = (long *)((ulong)param_3 >> 3 & 1);
        if ((long)plVar41 <= (long)plVar27) {
          plVar27 = plVar41;
        }
        uStack_2c0 = 0;
        if (((ulong)param_3 & 7) != 0) {
          plVar27 = plVar41;
        }
        lVar39 = (long)plVar41 - (long)plVar27;
        iStack_2b8 = 0;
        uVar1 = lVar39 - (lVar39 >> 0x3f);
        lVar25 = (uVar1 & 0xfffffffffffffffe) + (long)plVar27;
        dStack_2a8 = 0.0;
        dStack_2b0 = 0.0;
        dStack_298 = 0.0;
        dStack_2a0 = 0.0;
        uStack_288 = 0;
        uStack_290 = 0;
        uVar6 = uVar48;
        if (uVar48 < 3) {
          uVar6 = 2;
        }
        lStack_280 = 0;
        lVar37 = (long)plVar41 + (long)(int)uVar3 * -2;
        uVar1 = uVar1 & 0x1ffffffffffffffe;
        do {
          piVar19 = param_2;
          FUN_109966408(param_2,&uStack_1b0,param_4);
          if (((ulong)piVar19 & 1) == 0) goto LAB_109961760;
          _gettimeofday(&plStack_380,0);
          uVar32 = uStack_d8;
          pplVar46 = pplStack_e0;
          plVar17 = plStack_1d8;
          if (*param_2 <= (int)uStack_1b0) {
            func_0x000107c2c4d8(pplVar23,&UNK_10f58ac79,0x25);
            *(undefined4 *)((long)param_4 + 4) = 1;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            if (piRam000000011373cf00 == (int *)0x0) {
              iVar15 = 0x1373cf00;
              FUN_1099adbb8(0x11373cf00,0x11382bb14,&UNK_10f58da1b,1);
              if (iVar15 == 0) goto LAB_109961760;
            }
            else if (*piRam000000011373cf00 < 1) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0xdd,0,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
          dVar58 = (double)(long)plStack_380 + (double)(int)plStack_378 * 1e-06;
          if (*(double *)(param_2 + 2) <= (dVar58 - dVar57) + (double)param_4[0xc]) {
            func_0x000107c2c4d8(pplVar23,&UNK_10f58db84,0x1c);
            *(undefined4 *)((long)param_4 + 4) = 1;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            if (piRam000000011373cf20 == (int *)0x0) {
              iVar15 = 0x1373cf20;
              FUN_1099adbb8(0x11373cf20,0x11382bb14,&UNK_10f58da1b,1);
              if (iVar15 == 0) goto LAB_109961760;
            }
            else if (*piRam000000011373cf20 < 1) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0xe8,0,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
          dStack_140 = 0.0;
          uStack_158 = 0;
          uStack_160 = 0;
          dStack_148 = 0.0;
          dStack_150 = 0.0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          dStack_198 = 0.0;
          dStack_1a0 = 0.0;
          dStack_188 = 0.0;
          dStack_190 = 0.0;
          plStack_1a8 = (long *)0x0;
          uStack_1b0 = (ulong)((int)param_4[8][-0xf] + 1);
          if ((int)param_4[8][-0xf] == 0) {
            if (uStack_b8 != uStack_d8) {
              _free();
              if (0 < (long)uVar32) {
                if (uVar32 >> 0x3d == 0) {
                  pplVar21 = (long **)(uVar32 << 3);
                  _malloc();
                  if (pplVar21 != (long **)0x0) goto LAB_1099602b4;
                }
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109961a2c;
              }
              pplVar21 = (long **)0x0;
LAB_1099602b4:
              uStack_b8 = uVar32;
              pplStack_c0 = pplVar21;
            }
            uVar33 = uVar32 - ((long)uVar32 >> 0x3f) & 0xfffffffffffffffe;
            if (1 < (long)uVar32) {
              lVar36 = 0;
              pplVar21 = pplStack_c0;
              pplVar16 = pplVar46;
              do {
                plVar17 = *pplVar16;
                pplVar21[1] = (long *)-(double)pplVar16[1];
                *pplVar21 = (long *)-(double)plVar17;
                lVar36 = lVar36 + 2;
                pplVar21 = pplVar21 + 2;
                pplVar16 = pplVar16 + 2;
              } while (lVar36 < (long)uVar33);
            }
            lVar36 = (long)uVar32 % 2;
            if (lVar36 != 0 && (long)uVar33 <= (long)uVar32) {
              pplVar46 = pplVar46 + ((long)uVar32 / 2) * 2;
              pplVar21 = pplStack_c0 + ((long)uVar32 / 2) * 2;
              do {
                *pplVar21 = (long *)-(double)*pplVar46;
                lVar36 = lVar36 + -1;
                pplVar46 = pplVar46 + 1;
                pplVar21 = pplVar21 + 1;
              } while (lVar36 != 0);
            }
            bVar11 = true;
          }
          else {
            plVar18 = plStack_1d8;
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8,&dStack_130,&dStack_e8,&pplStack_c0);
            if (((ulong)plVar18 & 1) == 0) {
              if (param_2[0x33] <= iVar15) {
                FUN_109988e2c(&plStack_380,&UNK_10f58dba1);
                if (*(char *)((long)param_4 + 0x1f) < '\0') {
                  __ZdlPv(*pplVar23);
                }
                param_4[2] = plStack_378;
                *pplVar23 = plStack_380;
                param_4[3] = plStack_370;
                *(undefined4 *)((long)param_4 + 4) = 2;
                if ((bVar7 & 1) != 0) goto LAB_109961760;
                plStack_380 = (long *)0x0;
                uStack_328 = 0;
                uStack_368 = 0;
                plStack_370 = (long *)0x0;
                uStack_358 = 0;
                uStack_360 = 0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                uStack_330 = uStack_330 & 0xffffffff00000000;
                FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x106,1,FUN_1099aa768,0);
                FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
                FUN_1092b4db8();
                goto LAB_109961758;
              }
              iVar15 = iVar15 + 1;
              if ((bVar7 & 1) == 0) {
                plStack_380 = (long *)0x0;
                uStack_328 = 0;
                uStack_368 = 0;
                plStack_370 = (long *)0x0;
                uStack_358 = 0;
                uStack_360 = 0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                uStack_330 = uStack_330 & 0xffffffff00000000;
                FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x111,1,FUN_1099aa768,0);
                plVar18 = plStack_378 + 0xea8;
                FUN_1092b4db8(plVar18,&UNK_10f58dbfe,0x21);
                puVar47 = &UNK_10f5931ae;
                if ((uint)param_2[0x24] < 4) {
                  puVar47 = (&PTR_DAT_110b1e708)[(uint)param_2[0x24]];
                }
                puVar20 = puVar47;
                _strlen(puVar47);
                FUN_1092b4db8(plVar18,puVar47,puVar20);
                FUN_1092b4db8();
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                FUN_1092b4db8();
                FUN_1099ab3b0(&plStack_380);
              }
              FUN_10995c35c(&plStack_380,&iStack_1d0);
              plStack_1d8 = plStack_380;
              (**(code **)(*plVar17 + 8))(plVar17);
              uVar32 = uStack_d8;
              pplVar46 = pplStack_e0;
              if (uStack_b8 != uStack_d8) {
                _free();
                if (0 < (long)uVar32) {
                  if (uVar32 >> 0x3d == 0) {
                    pplVar21 = (long **)(uVar32 << 3);
                    _malloc();
                    if (pplVar21 != (long **)0x0) goto LAB_109960320;
                  }
                  ___cxa_allocate_exception(8);
                  __ZNSt9bad_allocC1Ev();
                  ___cxa_throw();
                  goto LAB_109961a2c;
                }
                pplVar21 = (long **)0x0;
LAB_109960320:
                uStack_b8 = uVar32;
                pplStack_c0 = pplVar21;
              }
              uVar33 = uVar32 - ((long)uVar32 >> 0x3f) & 0xfffffffffffffffe;
              if (1 < (long)uVar32) {
                lVar36 = 0;
                pplVar21 = pplStack_c0;
                pplVar16 = pplVar46;
                do {
                  plVar17 = *pplVar16;
                  pplVar21[1] = (long *)-(double)pplVar16[1];
                  *pplVar21 = (long *)-(double)plVar17;
                  lVar36 = lVar36 + 2;
                  pplVar21 = pplVar21 + 2;
                  pplVar16 = pplVar16 + 2;
                } while (lVar36 < (long)uVar33);
              }
              lVar36 = (long)uVar32 % 2;
              if (lVar36 != 0 && (long)uVar33 <= (long)uVar32) {
                pplVar46 = pplVar46 + ((long)uVar32 / 2) * 2;
                pplVar21 = pplStack_c0 + ((long)uVar32 / 2) * 2;
                do {
                  *pplVar21 = (long *)-(double)*pplVar46;
                  lVar36 = lVar36 + -1;
                  pplVar46 = pplVar46 + 1;
                  pplVar21 = pplVar21 + 1;
                } while (lVar36 != 0);
              }
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
          }
          plStack_380 = (long *)0x0;
          plStack_378 = (long *)0x0;
          if (uVar40 != 0) {
            if ((int)uVar40 < 1) {
              plVar17 = (long *)0x0;
              uVar32 = -(-(long)plVar41 & 0xfffffffffffffffeU);
              plStack_378 = plVar41;
            }
            else {
              plVar17 = (long *)((long)plVar41 * 8);
              _malloc();
              if (plVar17 == (long *)0x0) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109961a2c;
              }
              plStack_380 = plVar17;
              if (uVar40 == 1) {
                uVar32 = 0;
                plStack_378 = plVar41;
              }
              else {
                plStack_378 = plVar41;
                _memcpy(plVar17,param_3,uVar6 * 8);
                uVar32 = uVar48;
              }
            }
            if ((long)uVar32 < (long)plVar41) {
              _memcpy(plVar17 + uVar32,param_3 + uVar32,(long *)((long)plVar41 * 8) + -uVar32);
            }
          }
          FUN_109958188(auStack_220,&plStack_380,&pplStack_c0);
          _free(plStack_380);
          if (uStack_b8 == 0) {
            dStack_b0 = 0.0;
          }
          else {
            uVar32 = uStack_b8 + 3;
            if (-1 < (long)uStack_b8) {
              uVar32 = uStack_b8;
            }
            if (uStack_b8 + 1 < 3) {
              dStack_b0 = (double)*pplStack_e0 * (double)*pplStack_c0;
            }
            else {
              uVar33 = uStack_b8 - ((long)uStack_b8 >> 0x3f) & 0xfffffffffffffffe;
              dStack_b0 = (double)*pplStack_e0 * (double)*pplStack_c0;
              dVar51 = (double)pplStack_e0[1] * (double)pplStack_c0[1];
              if (3 < (long)uStack_b8) {
                uVar32 = uVar32 & 0xfffffffffffffffc;
                dVar50 = (double)pplStack_e0[2] * (double)pplStack_c0[2];
                dVar54 = (double)pplStack_e0[3] * (double)pplStack_c0[3];
                if (7 < uStack_b8) {
                  pplVar46 = pplStack_c0 + 6;
                  pplVar21 = pplStack_e0 + 6;
                  lVar36 = 4;
                  do {
                    dStack_b0 = dStack_b0 + (double)pplVar21[-2] * (double)pplVar46[-2];
                    dVar51 = dVar51 + (double)pplVar21[-1] * (double)pplVar46[-1];
                    dVar50 = dVar50 + (double)*pplVar21 * (double)*pplVar46;
                    dVar54 = dVar54 + (double)pplVar21[1] * (double)pplVar46[1];
                    lVar36 = lVar36 + 4;
                    pplVar46 = pplVar46 + 4;
                    pplVar21 = pplVar21 + 4;
                  } while (lVar36 < (long)uVar32);
                }
                dStack_b0 = dVar50 + dStack_b0;
                dVar51 = dVar54 + dVar51;
                if ((long)uVar32 < (long)uVar33) {
                  dStack_b0 = dStack_b0 + (double)pplStack_e0[uVar32] * (double)pplStack_c0[uVar32];
                  dVar51 = dVar51 + (double)(pplStack_e0 + uVar32)[1] *
                                    (double)(pplStack_c0 + uVar32)[1];
                }
              }
              dStack_b0 = dStack_b0 + dVar51;
              lVar36 = (long)uStack_b8 % 2;
              if (lVar36 != 0 && lVar36 < 0 == SBORROW8(uStack_b8,uVar33)) {
                pplVar46 = pplStack_e0 + ((long)uStack_b8 / 2) * 2;
                pplVar21 = pplStack_c0 + ((long)uStack_b8 / 2) * 2;
                do {
                  dStack_b0 = dStack_b0 + (double)*pplVar46 * (double)*pplVar21;
                  lVar36 = lVar36 + -1;
                  pplVar46 = pplVar46 + 1;
                  pplVar21 = pplVar21 + 1;
                } while (lVar36 != 0);
              }
            }
          }
          bVar4 = false;
          if ((int)uStack_1b0 != 1) {
            bVar4 = bVar11;
          }
          if (bVar4) {
            plStack_380 = (long *)0x3ff0000000000000;
            plStack_388 = (long *)(((dStack_e8 - dStack_130) + (dStack_e8 - dStack_130)) / dStack_b0
                                  );
          }
          else {
            plStack_380 = (long *)0x3ff0000000000000;
            plStack_388 = (long *)(1.0 / dStack_c8);
          }
          plStack_380 = (long *)0x3ff0000000000000;
          pplVar46 = &plStack_388;
          if (1.0 <= (double)plStack_388) {
            pplVar46 = &plStack_380;
          }
          if ((double)*pplVar46 < 0.0) {
            FUN_109988e2c(&plStack_380,&UNK_10f58dc85);
            if (*(char *)((long)param_4 + 0x1f) < '\0') {
              __ZdlPv(*pplVar23);
            }
            param_4[2] = plStack_378;
            *pplVar23 = plStack_380;
            param_4[3] = plStack_370;
            *(undefined4 *)((long)param_4 + 4) = 2;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x13d,1,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
          FUN_109958ac4(*pplVar46,dStack_e8,plStack_278,&plStack_320);
          uVar32 = uStack_d8;
          pplVar46 = pplStack_e0;
          if (((ulong)plStack_320 & 1) == 0) {
            FUN_109988e2c(&plStack_380,&UNK_10f58dd0f);
            if (*(char *)((long)param_4 + 0x1f) < '\0') {
              __ZdlPv(*pplVar23);
            }
            param_4[2] = plStack_378;
            *pplVar23 = plStack_380;
            param_4[3] = plStack_370;
            if ((bVar7 & 1) == 0) {
              plStack_380 = (long *)0x0;
              uStack_328 = 0;
              uStack_368 = 0;
              plStack_370 = (long *)0x0;
              uStack_358 = 0;
              uStack_360 = 0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_330 = uStack_330 & 0xffffffff00000000;
              FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x150,1,FUN_1099aa768,0);
              FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
              FUN_1092b4db8();
              FUN_1099ab3b0(&plStack_380);
            }
            *(undefined4 *)((long)param_4 + 4) = 2;
            goto LAB_109961760;
          }
          if ((uStack_300 & 1) == 0) {
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            uVar26 = 3;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x157,3,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58ddbe,0x2e);
            puVar24 = (undefined8 *)&UNK_10f58dded;
            lVar25 = 0x3c;
            FUN_1092b4db8();
            param_4 = &plStack_380;
            func_0x0001099ab7c0();
            FUN_109961fb8(&plStack_320);
            plVar27 = plStack_278;
            plStack_278 = (long *)0x0;
            if (plVar27 != (long *)0x0) {
              (**(code **)(*plVar27 + 8))();
            }
            func_0x000109961ff8(auStack_220);
            if (plStack_1d8 != (long *)0x0) {
              (**(code **)(*plStack_1d8 + 8))();
            }
            _free(pplStack_108);
            _free(pplStack_128);
            _free(pplStack_c0);
            _free(pplStack_e0);
            __Unwind_Resume(param_4);
            goto LAB_109961c18;
          }
          uStack_a8 = CONCAT44(uStack_318._4_4_,(uint)uStack_318);
          dStack_130 = dStack_e8;
          if (uStack_120 != uStack_d8) {
            _free();
            if ((long)uVar32 < 1) {
              pplVar21 = (long **)0x0;
LAB_1099605e8:
              uStack_120 = uVar32;
              pplStack_128 = pplVar21;
              goto LAB_1099605f0;
            }
            if (uVar32 >> 0x3d == 0) {
              pplVar21 = (long **)(uVar32 << 3);
              _malloc();
              if (pplVar21 != (long **)0x0) goto LAB_1099605e8;
            }
            goto LAB_109961928;
          }
LAB_1099605f0:
          uVar33 = uStack_b8;
          pplVar21 = pplStack_c0;
          uVar31 = uVar32 - ((long)uVar32 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)uVar32) {
            lVar36 = 0;
            pplVar16 = pplStack_128;
            pplVar38 = pplVar46;
            do {
              plVar17 = *pplVar38;
              pplVar16[1] = pplVar38[1];
              *pplVar16 = plVar17;
              lVar36 = lVar36 + 2;
              pplVar16 = pplVar16 + 2;
              pplVar38 = pplVar38 + 2;
            } while (lVar36 < (long)uVar31);
          }
          lVar36 = (long)uVar32 % 2;
          if (lVar36 != 0 && (long)uVar31 <= (long)uVar32) {
            pplVar46 = pplVar46 + ((long)uVar32 / 2) * 2;
            pplVar16 = pplStack_128 + ((long)uVar32 / 2) * 2;
            do {
              *pplVar16 = *pplVar46;
              lVar36 = lVar36 + -1;
              pplVar46 = pplVar46 + 1;
              pplVar16 = pplVar16 + 1;
            } while (lVar36 != 0);
          }
          dStack_110 = dStack_c8;
          dStack_118 = dStack_d0;
          if (uStack_100 != uStack_b8) {
            _free();
            if (0 < (long)uVar33) {
              if (uVar33 >> 0x3d == 0) {
                pplVar46 = (long **)(uVar33 << 3);
                _malloc();
                if (pplVar46 != (long **)0x0) goto LAB_109960690;
              }
LAB_109961928:
              ___cxa_allocate_exception(8);
              __ZNSt9bad_allocC1Ev();
              ___cxa_throw();
              goto LAB_109961a2c;
            }
            pplVar46 = (long **)0x0;
LAB_109960690:
            uStack_100 = uVar33;
            pplStack_108 = pplVar46;
          }
          uVar32 = uVar33 - ((long)uVar33 >> 0x3f) & 0xfffffffffffffffe;
          if (1 < (long)uVar33) {
            lVar36 = 0;
            pplVar46 = pplStack_108;
            pplVar16 = pplVar21;
            do {
              plVar17 = *pplVar16;
              pplVar46[1] = pplVar16[1];
              *pplVar46 = plVar17;
              lVar36 = lVar36 + 2;
              pplVar46 = pplVar46 + 2;
              pplVar16 = pplVar16 + 2;
            } while (lVar36 < (long)uVar32);
          }
          lVar36 = (long)uVar33 % 2;
          if (lVar36 != 0 && (long)uVar32 <= (long)uVar33) {
            pplVar46 = pplVar21 + ((long)uVar33 / 2) * 2;
            pplVar21 = pplStack_108 + ((long)uVar33 / 2) * 2;
            do {
              *pplVar21 = *pplVar46;
              lVar36 = lVar36 + -1;
              pplVar46 = pplVar46 + 1;
              pplVar21 = pplVar21 + 1;
            } while (lVar36 != 0);
          }
          uStack_f0 = uStack_a8;
          dStack_f8 = dStack_b0;
          _gettimeofday(&plStack_380,0);
          uVar32 = uStack_2e0;
          dStack_148 = ((double)(long)plStack_380 + (double)(int)plStack_378 * 1e-06) - dVar58;
          if ((char)uStack_2d8 == '\x01') {
            dStack_e8 = (double)CONCAT53(uStack_2f5,uStack_2f8);
            pdVar29 = (double *)CONCAT53(uStack_2e5,uStack_2e8);
            if (uStack_d8 != uStack_2e0) {
              _free();
              if (0 < (long)uVar32) {
                if (uVar32 >> 0x3d == 0) {
                  pplVar46 = (long **)(uVar32 << 3);
                  _malloc();
                  if (pplVar46 != (long **)0x0) goto LAB_1099607ac;
                }
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                goto LAB_109961a2c;
              }
              pplVar46 = (long **)0x0;
LAB_1099607ac:
              uStack_d8 = uVar32;
              pplStack_e0 = pplVar46;
            }
            uVar33 = uVar32 - ((long)uVar32 >> 0x3f) & 0xfffffffffffffffe;
            if (1 < (long)uVar32) {
              lVar36 = 0;
              pplVar46 = pplStack_e0;
              pdVar34 = pdVar29;
              do {
                plVar17 = (long *)*pdVar34;
                pplVar46[1] = (long *)pdVar34[1];
                *pplVar46 = plVar17;
                lVar36 = lVar36 + 2;
                pplVar46 = pplVar46 + 2;
                pdVar34 = pdVar34 + 2;
              } while (lVar36 < (long)uVar33);
            }
            lVar36 = (long)uVar32 % 2;
            if (lVar36 != 0 && (long)uVar33 <= (long)uVar32) {
              pdVar29 = pdVar29 + ((long)uVar32 / 2) * 2;
              pplVar46 = pplStack_e0 + ((long)uVar32 / 2) * 2;
              do {
                *pplVar46 = (long *)*pdVar29;
                lVar36 = lVar36 + -1;
                pdVar29 = pdVar29 + 1;
                pplVar46 = pplVar46 + 1;
              } while (lVar36 != 0);
            }
          }
          else {
            plStack_388 = (long *)CONCAT62(plStack_388._2_6_,1);
            plVar17 = plVar44;
            (**(code **)(*plVar44 + 0x18))
                      (plVar44,&plStack_388,CONCAT35(uStack_30b,uStack_310),&dStack_e8,0,pplStack_e0
                       ,0);
            if (((ulong)plVar17 & 1) == 0) {
              *(undefined4 *)((long)param_4 + 4) = 2;
              func_0x000107c2c4d8(pplVar23,&UNK_10f58de2a,0x24);
              if ((bVar7 & 1) != 0) goto LAB_109961760;
              plStack_380 = (long *)0x0;
              uStack_328 = 0;
              uStack_368 = 0;
              plStack_370 = (long *)0x0;
              uStack_358 = 0;
              uStack_360 = 0;
              uStack_348 = 0;
              uStack_350 = 0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_330 = uStack_330 & 0xffffffff00000000;
              FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x16d,1,FUN_1099aa768,0);
              FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
              FUN_1092b4db8();
              goto LAB_109961758;
            }
          }
          plVar17 = plVar44;
          FUN_109961c20(plVar44,&uStack_310,&dStack_e8,pplVar23);
          uVar32 = uStack_1b0;
          if (((ulong)plVar17 & 1) == 0) {
            *(undefined4 *)((long)param_4 + 4) = 2;
            bVar8 = *(byte *)((long)param_4 + 0x1f);
            plVar27 = param_4[2];
            if (-1 < (char)bVar8) {
              plVar27 = (long *)(ulong)bVar8;
            }
            plVar44 = (long *)((long)plVar27 + 0x7d);
            if ((long *)0x7ffffffffffffff7 < plVar44) {
              func_0x000104c4f6b8();
              goto LAB_109961a2c;
            }
            if (plVar44 < (long *)0x17) {
              uStack_338 = 0x6177207469206e65;
              uStack_340 = 0x68772064696c6176;
              uStack_328 = 0x6874207962206465;
              uStack_330 = 0x7463656c65732073;
              uStack_318._0_4_ = 0x63726165;
              plStack_320 = (long *)0x7320656e696c2065;
              uStack_30b = 0x617465;
              uStack_308 = 0x203a736c69;
              uStack_318._4_4_ = 0x4d202e68;
              uStack_310 = 0x642065726f;
              plStack_378 = (long *)0x65206f742064656c;
              plStack_380 = (long *)0x6961662070657453;
              uStack_368 = 0x6873207369685420;
              plStack_370 = (long *)0x2e657461756c6176;
              puVar43 = &uStack_303;
              uStack_358 = 0x206e657070616820;
              uStack_360 = 0x746f6e20646c756f;
              uStack_348 = 0x2073617720706574;
              uStack_350 = 0x7320656874207361;
LAB_1099612d8:
              pplVar46 = (long **)*pplVar23;
              if (-1 < (char)bVar8) {
                pplVar46 = pplVar23;
              }
              _memmove(puVar43,pplVar46,plVar27);
            }
            else {
              plVar41 = (long *)0x19;
              if (((ulong)plVar44 | 7) != 0x17) {
                plVar41 = (long *)(((ulong)plVar44 | 7) + 1);
              }
              plVar17 = plVar41;
              __Znwm();
              plStack_370 = (long *)((ulong)plVar41 | 0x8000000000000000);
              plVar17[9] = 0x6177207469206e65;
              plVar17[8] = 0x68772064696c6176;
              plVar17[0xb] = 0x6874207962206465;
              plVar17[10] = 0x7463656c65732073;
              plVar17[0xd] = 0x4d202e6863726165;
              plVar17[0xc] = 0x7320656e696c2065;
              *(undefined8 *)((long)plVar17 + 0x75) = 0x203a736c69617465;
              *(undefined8 *)((long)plVar17 + 0x6d) = 0x642065726f4d202e;
              plVar17[1] = 0x65206f742064656c;
              *plVar17 = 0x6961662070657453;
              plVar17[3] = 0x6873207369685420;
              plVar17[2] = 0x2e657461756c6176;
              puVar43 = (undefined3 *)((long)plVar17 + 0x7d);
              plVar17[5] = 0x206e657070616820;
              plVar17[4] = 0x746f6e20646c756f;
              plVar17[7] = 0x2073617720706574;
              plVar17[6] = 0x7320656874207361;
              plStack_380 = plVar17;
              plStack_378 = plVar44;
              if (plVar27 != (long *)0x0) goto LAB_1099612d8;
            }
            *(undefined1 *)((long)puVar43 + (long)plVar27) = 0;
            if ((char)bVar8 < '\0') {
              __ZdlPv(*pplVar23);
            }
            param_4[2] = plStack_378;
            *pplVar23 = plStack_380;
            param_4[3] = plStack_370;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x17d,1,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
          if (uVar40 == 0) {
            dStack_188 = 0.0;
            dVar51 = 0.0;
          }
          else {
            pdVar29 = (double *)CONCAT35(uStack_30b,uStack_310);
            if ((long)plVar41 + 1U < 3) {
              dVar51 = *param_3;
              dStack_188 = SQRT((*pdVar29 - dVar51) * (*pdVar29 - dVar51));
              dVar51 = dVar51 * dVar51;
            }
            else {
              dVar51 = *param_3;
              dVar50 = param_3[1];
              dStack_188 = (*pdVar29 - dVar51) * (*pdVar29 - dVar51);
              dVar54 = (pdVar29[1] - dVar50) * (pdVar29[1] - dVar50);
              if (3 < (int)uVar40) {
                dVar55 = (pdVar29[2] - param_3[2]) * (pdVar29[2] - param_3[2]);
                dVar56 = (pdVar29[3] - param_3[3]) * (pdVar29[3] - param_3[3]);
                if (7 < uVar40) {
                  pdVar34 = pdVar29 + 6;
                  lVar36 = 4;
                  pdVar28 = param_3 + 6;
                  do {
                    dStack_188 = dStack_188 +
                                 (pdVar34[-2] - pdVar28[-2]) * (pdVar34[-2] - pdVar28[-2]);
                    dVar54 = dVar54 + (pdVar34[-1] - pdVar28[-1]) * (pdVar34[-1] - pdVar28[-1]);
                    dVar55 = dVar55 + (*pdVar34 - *pdVar28) * (*pdVar34 - *pdVar28);
                    dVar56 = dVar56 + (pdVar34[1] - pdVar28[1]) * (pdVar34[1] - pdVar28[1]);
                    lVar36 = lVar36 + 4;
                    pdVar28 = pdVar28 + 4;
                    pdVar34 = pdVar34 + 4;
                  } while (lVar36 < (long)uVar30);
                }
                dStack_188 = dVar55 + dStack_188;
                dVar54 = dVar56 + dVar54;
                if ((long)uVar30 < (long)uVar35) {
                  dVar55 = pdVar29[uVar30] - *pdVar22;
                  dVar56 = (pdVar29 + uVar30)[1] - pdVar22[1];
                  dStack_188 = dStack_188 + dVar55 * dVar55;
                  dVar54 = dVar54 + dVar56 * dVar56;
                }
              }
              dStack_188 = dStack_188 + dVar54;
              if ((long)uVar35 < (long)plVar41) {
                pdVar29 = (double *)
                          ((long)pdVar29 +
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4));
                pdVar34 = param_3 + (long)(int)uVar3 * 2;
                lVar36 = lVar37;
                do {
                  dStack_188 = dStack_188 + (*pdVar29 - *pdVar34) * (*pdVar29 - *pdVar34);
                  lVar36 = lVar36 + -1;
                  pdVar29 = pdVar29 + 1;
                  pdVar34 = pdVar34 + 1;
                } while (lVar36 != 0);
              }
              dStack_188 = SQRT(dStack_188);
              dVar51 = dVar51 * dVar51;
              dVar50 = dVar50 * dVar50;
              if (3 < (int)uVar40) {
                dVar54 = param_3[2] * param_3[2];
                dVar55 = param_3[3] * param_3[3];
                if (7 < uVar40) {
                  lVar36 = 4;
                  pdVar29 = param_3 + 6;
                  do {
                    dVar51 = dVar51 + pdVar29[-2] * pdVar29[-2];
                    dVar50 = dVar50 + pdVar29[-1] * pdVar29[-1];
                    dVar54 = dVar54 + *pdVar29 * *pdVar29;
                    dVar55 = dVar55 + pdVar29[1] * pdVar29[1];
                    lVar36 = lVar36 + 4;
                    pdVar29 = pdVar29 + 4;
                  } while (lVar36 < (long)uVar30);
                }
                dVar51 = dVar54 + dVar51;
                dVar50 = dVar55 + dVar50;
                if ((long)uVar30 < (long)uVar35) {
                  dVar51 = dVar51 + *pdVar22 * *pdVar22;
                  dVar50 = dVar50 + pdVar22[1] * pdVar22[1];
                }
              }
              dVar51 = dVar51 + dVar50;
              pdVar29 = param_3 + (long)(int)uVar3 * 2;
              lVar36 = lVar37;
              if ((long)uVar35 < (long)plVar41) {
                do {
                  dVar51 = dVar51 + *pdVar29 * *pdVar29;
                  lVar36 = lVar36 + -1;
                  pdVar29 = pdVar29 + 1;
                } while (lVar36 != 0);
              }
            }
          }
          pdVar28 = (double *)CONCAT35(uStack_30b,uStack_310);
          pdVar29 = param_3;
          pdVar34 = pdVar28;
          plVar17 = plVar27;
          if (0 < (long)plVar27) {
            do {
              *pdVar29 = *pdVar34;
              plVar17 = (long *)((long)plVar17 + -1);
              pdVar29 = pdVar29 + 1;
              pdVar34 = pdVar34 + 1;
            } while (plVar17 != (long *)0x0);
          }
          if (1 < lVar39) {
            pdVar29 = pdVar28 + (long)plVar27;
            pdVar34 = param_3 + (long)plVar27;
            plVar17 = plVar27;
            do {
              dVar50 = *pdVar29;
              pdVar34[1] = pdVar29[1];
              *pdVar34 = dVar50;
              plVar17 = (long *)((long)plVar17 + 2);
              pdVar29 = pdVar29 + 2;
              pdVar34 = pdVar34 + 2;
            } while ((long)plVar17 < lVar25);
          }
          if (lVar25 < (long)plVar41) {
            pdVar29 = pdVar28 + (long)plVar27 + uVar1;
            pdVar34 = param_3 + (long)plVar27 + uVar1;
            lVar36 = lVar39 % 2;
            do {
              *pdVar34 = *pdVar29;
              lVar36 = lVar36 + -1;
              pdVar29 = pdVar29 + 1;
              pdVar34 = pdVar34 + 1;
            } while (lVar36 != 0);
          }
          dStack_190 = SQRT(dStack_d0);
          dStack_198 = dStack_c8;
          dStack_1a0 = dStack_130 - dStack_e8;
          plStack_1a8 = (long *)(dStack_e8 + (double)param_4[6]);
          uStack_1b0._0_5_ = CONCAT14(1,(int)uStack_1b0);
          uVar26 = uStack_1b0;
          uStack_1b0._7_1_ = SUB81(uVar32,7);
          uStack_1b0._0_7_ = CONCAT16(1,(int6)uVar26);
          uStack_168 = uStack_a8;
          uStack_160 = uStack_2c0;
          uStack_158 = CONCAT44(uStack_158._4_4_,iStack_2b8);
          _gettimeofday(&plStack_380,0);
          dStack_150 = ((double)(long)plStack_380 + (double)(int)plStack_378 * 1e-06) - dVar58;
          _gettimeofday(&plStack_380,0);
          dStack_140 = (double)param_4[0xc] +
                       (((double)(long)plStack_380 + (double)(int)plStack_378 * 1e-06) - dVar57);
          puVar45 = (ulong *)param_4[8];
          if (puVar45 < param_4[9]) {
            puVar45[5] = (ulong)dStack_188;
            puVar45[4] = (ulong)dStack_190;
            puVar45[7] = uStack_178;
            puVar45[6] = uStack_180;
            puVar45[1] = (ulong)plStack_1a8;
            *puVar45 = uStack_1b0;
            puVar45[3] = (ulong)dStack_198;
            puVar45[2] = (ulong)dStack_1a0;
            puVar45[0xe] = (ulong)dStack_140;
            puVar45[0xb] = uStack_158;
            puVar45[10] = uStack_160;
            puVar45[0xd] = (ulong)dStack_148;
            puVar45[0xc] = (ulong)dStack_150;
            puVar45[9] = uStack_168;
            puVar45[8] = uStack_170;
            puVar45 = puVar45 + 0xf;
          }
          else {
            plVar17 = param_4[7];
            uVar32 = ((long)puVar45 - (long)plVar17 >> 3) * -0x1111111111111111 + 1;
            if (0x222222222222222 < uVar32) {
              FUN_109962038();
              goto LAB_109961a2c;
            }
            lVar36 = (long)param_4[9] - (long)plVar17 >> 3;
            uVar33 = lVar36 * -0x2222222222222222;
            if (uVar33 < uVar32 || uVar33 - uVar32 == 0) {
              uVar33 = uVar32;
            }
            if (0x111111111111110 < (ulong)(lVar36 * -0x1111111111111111)) {
              uVar33 = 0x222222222222222;
            }
            if (0x222222222222222 < uVar33) {
              func_0x000104c4f740();
              goto LAB_109961a2c;
            }
            plVar18 = (long *)(uVar33 * 0x78);
            __Znwm();
            puVar2 = (ulong *)((long)plVar18 + ((long)puVar45 - (long)plVar17));
            puVar2[9] = uStack_168;
            puVar2[8] = uStack_170;
            puVar2[0xb] = uStack_158;
            puVar2[10] = uStack_160;
            puVar2[0xd] = (ulong)dStack_148;
            puVar2[0xc] = (ulong)dStack_150;
            puVar2[0xe] = (ulong)dStack_140;
            puVar2[1] = (ulong)plStack_1a8;
            *puVar2 = uStack_1b0;
            puVar2[3] = (ulong)dStack_198;
            puVar2[2] = (ulong)dStack_1a0;
            puVar45 = puVar2 + 0xf;
            puVar2[5] = (ulong)dStack_188;
            puVar2[4] = (ulong)dStack_190;
            puVar2[7] = uStack_178;
            puVar2[6] = uStack_180;
            _memcpy();
            param_4[7] = plVar18;
            param_4[8] = (long *)puVar45;
            param_4[9] = plVar18 + uVar33 * 0xf;
            if (plVar17 != (long *)0x0) {
              __ZdlPv(plVar17);
            }
          }
          param_4[8] = (long *)puVar45;
          *(int *)((long)param_4 + 0x5c) = *(int *)((long)param_4 + 0x5c) + iStack_2b8;
          param_4[0x18] = (long *)(dStack_2a8 + (double)param_4[0x18]);
          param_4[0x17] = (long *)(dStack_2b0 + (double)param_4[0x17]);
          param_4[0x1a] = (long *)(dStack_298 + (double)param_4[0x1a]);
          param_4[0x19] = (long *)(dStack_2a0 + (double)param_4[0x19]);
          *(int *)(param_4 + 10) = *(int *)(param_4 + 10) + 1;
          if (dStack_188 <= *(double *)(param_2 + 8) * (SQRT(dVar51) + *(double *)(param_2 + 8))) {
            FUN_109988e2c(&plStack_380,&UNK_10f58decd);
            if (*(char *)((long)param_4 + 0x1f) < '\0') {
              __ZdlPv(*pplVar23);
            }
            param_4[2] = plStack_378;
            *pplVar23 = plStack_380;
            param_4[3] = plStack_370;
            *(undefined4 *)((long)param_4 + 4) = 0;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            if (piRam000000011373cf40 == (int *)0x0) {
              iVar15 = 0x1373cf40;
              FUN_1099adbb8(0x11373cf40,0x11382bb14,&UNK_10f58da1b,1);
              if (iVar15 == 0) goto LAB_109961760;
            }
            else if (*piRam000000011373cf40 < 1) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x1b8,0,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
          if (dStack_198 <= *(double *)(param_2 + 6)) {
            FUN_109988e2c(&plStack_380,&UNK_10f58db4c);
            if (*(char *)((long)param_4 + 0x1f) < '\0') {
              __ZdlPv(*pplVar23);
            }
            param_4[2] = plStack_378;
            *pplVar23 = plStack_380;
            param_4[3] = plStack_370;
            *(undefined4 *)((long)param_4 + 4) = 0;
            if ((bVar7 & 1) != 0) goto LAB_109961760;
            if (piRam000000011373cf60 == (int *)0x0) {
              iVar15 = 0x1373cf60;
              FUN_1099adbb8(0x11373cf60,0x11382bb14,&UNK_10f58da1b,1);
              if (iVar15 == 0) goto LAB_109961760;
            }
            else if (*piRam000000011373cf60 < 1) goto LAB_109961760;
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x1c5,0,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
            goto LAB_109961758;
          }
        } while (*(double *)(param_2 + 10) * ABS(dStack_130) < ABS(dStack_1a0));
        FUN_109988e2c(&plStack_380,&UNK_10f58df08);
        if (*(char *)((long)param_4 + 0x1f) < '\0') {
          __ZdlPv(*pplVar23);
        }
        param_4[2] = plStack_378;
        *pplVar23 = plStack_380;
        param_4[3] = plStack_370;
        *(undefined4 *)((long)param_4 + 4) = 0;
        if ((bVar7 & 1) == 0) {
          if (piRam000000011373cf80 == (int *)0x0) {
            iVar15 = 0x1373cf80;
            FUN_1099adbb8(0x11373cf80,0x11382bb14,&UNK_10f58da1b,1);
            if (iVar15 != 0) goto LAB_1099616e4;
          }
          else if (0 < *piRam000000011373cf80) {
LAB_1099616e4:
            plStack_380 = (long *)0x0;
            uStack_328 = 0;
            uStack_368 = 0;
            plStack_370 = (long *)0x0;
            uStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = uStack_330 & 0xffffffff00000000;
            FUN_1099a9f0c(&plStack_380,&UNK_10f58da1b,0x1d5,0,FUN_1099aa768,0);
            FUN_1092b4db8(plStack_378 + 0xea8,&UNK_10f58db02,0xd);
            FUN_1092b4db8();
LAB_109961758:
            FUN_1099ab3b0(&plStack_380);
          }
        }
LAB_109961760:
        if (lStack_280 < 0) {
          __ZdlPv(uStack_290);
        }
        _free(CONCAT53(uStack_2e5,uStack_2e8));
        _free(CONCAT35(uStack_30b,uStack_310));
LAB_109961780:
        plVar27 = plStack_278;
        plStack_278 = (long *)0x0;
        if (plVar27 != (long *)0x0) {
          (**(code **)(*plVar27 + 8))();
        }
      }
      _free(uStack_1f8);
      _free(uStack_208);
      _free(uStack_218);
      if (plStack_1d8 != (long *)0x0) {
        (**(code **)(*plStack_1d8 + 8))();
      }
      goto LAB_109960de4;
    }
    *(undefined4 *)((long)param_4 + 4) = 2;
    bVar8 = *(byte *)((long)param_4 + 0x1f);
    plVar27 = param_4[2];
    if (-1 < (char)bVar8) {
      plVar27 = (long *)(ulong)bVar8;
    }
    plVar44 = (long *)((long)plVar27 + 0x3b);
    if ((long *)0x7ffffffffffffff7 < plVar44) {
      func_0x000104c4f6b8();
      goto LAB_109961a2c;
    }
    if (plVar44 < (long *)0x17) {
      plVar44 = (long *)0x646e612074736f63;
      plStack_320 = (long *)0x206c616974696e49;
      uStack_308 = 0x617665206e;
      uStack_303 = 0x61756c;
      uStack_310 = 0x6f63616a20;
      uStack_30b = 0x616962;
      uStack_2f8 = 0x64656c;
      uStack_300 = 0x696166206e6f6974;
      uStack_2ed = 0x6c69617465;
      uStack_2e8 = 0x203a73;
      uStack_2f5 = 0x726f4d202e;
      uStack_2f0 = 0x65;
      uStack_2ef = 0x6420;
      puVar42 = &uStack_2e5;
LAB_10995fcc4:
      pplVar46 = (long **)*pplVar23;
      if (-1 < (char)bVar8) {
        pplVar46 = pplVar23;
      }
      uStack_318 = plVar44;
      _memmove(puVar42,pplVar46,plVar27);
      plVar44 = uStack_318;
    }
    else {
      plVar41 = (long *)0x19;
      if (((ulong)plVar44 | 7) != 0x17) {
        plVar41 = (long *)(((ulong)plVar44 | 7) + 1);
      }
      plVar17 = plVar41;
      __Znwm();
      uStack_30b = (uint3)((ulong)plVar41 >> 0x28) | 0x800000;
      uStack_310 = SUB85(plVar41,0);
      plVar17[1] = 0x646e612074736f63;
      *plVar17 = 0x206c616974696e49;
      plVar17[3] = 0x61756c617665206e;
      plVar17[2] = 0x6169626f63616a20;
      plVar17[5] = 0x726f4d202e64656c;
      plVar17[4] = 0x696166206e6f6974;
      *(undefined8 *)((long)plVar17 + 0x33) = 0x203a736c69617465;
      *(undefined8 *)((long)plVar17 + 0x2b) = 0x642065726f4d202e;
      puVar42 = (undefined5 *)((long)plVar17 + 0x3b);
      plStack_320 = plVar17;
      if (plVar27 != (long *)0x0) goto LAB_10995fcc4;
    }
    *(undefined1 *)((long)puVar42 + (long)plVar27) = 0;
    uStack_318 = plVar44;
    if ((char)bVar8 < '\0') {
      __ZdlPv(*pplVar23);
    }
    param_4[2] = uStack_318;
    *pplVar23 = plStack_320;
    param_4[3] = (long *)CONCAT35(uStack_30b,uStack_310);
    if ((bVar7 & 1) != 0) goto LAB_109960de4;
    plStack_320 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_308 = 0;
    uStack_303 = 0;
    uStack_310 = 0;
    uStack_30b = 0;
    uStack_2f8 = 0;
    uStack_2f5 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2e5 = 0;
    uStack_2f0 = 0;
    uStack_2ef = 0;
    uStack_2ed = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    FUN_1099a9f0c(&plStack_320,&UNK_10f58da1b,0x8a,1,FUN_1099aa768,0);
    FUN_1092b4db8(uStack_318 + 0xea8,&UNK_10f58db02,0xd);
    FUN_1092b4db8();
  }
LAB_109960ddc:
  FUN_1099ab3b0(&plStack_320);
LAB_109960de4:
  _free(pplStack_108);
  _free(pplStack_128);
  _free(pplStack_c0);
  _free(pplStack_e0);
  return pplStack_e0;
}



/* Entry: 109961c20; end: 109961fb7;  */

long * FUN_109961c20(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  double *pdVar5;
  long *plVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  
  uVar14 = *(ulong *)(param_3 + 0x10);
  if ((long)uVar14 < 1) {
    lVar4 = 0;
    lVar7 = *(long *)(param_3 + 8);
    uVar9 = -(-uVar14 & 0xfffffffffffffffe);
  }
  else {
    if (uVar14 >> 0x3d != 0) {
LAB_109961f74:
      plVar6 = (long *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      _free();
      __Unwind_Resume();
      if (*(char *)((long)plVar6 + 0xa7) < '\0') {
        __ZdlPv(plVar6[0x12]);
      }
      _free(plVar6[7]);
      _free(plVar6[2]);
      return plVar6;
    }
    lVar4 = uVar14 << 3;
    _malloc();
    if (lVar4 == 0) goto LAB_109961f74;
    lVar7 = *(long *)(param_3 + 8);
    if (uVar14 == 1) {
      uVar9 = 0;
    }
    else {
      lVar11 = 0;
      uVar10 = 0;
      uVar9 = uVar14 & 0x1ffffffffffffffe;
      do {
        dVar15 = *(double *)(lVar7 + lVar11);
        ((double *)(lVar4 + lVar11))[1] = -((double *)(lVar7 + lVar11))[1];
        *(double *)(lVar4 + lVar11) = -dVar15;
        uVar10 = uVar10 + 2;
        lVar11 = lVar11 + 0x10;
      } while (uVar10 < uVar9);
    }
  }
  lVar11 = uVar14 - uVar9;
  if (lVar11 != 0 && (long)uVar9 <= (long)uVar14) {
    pdVar5 = (double *)(lVar7 + uVar9 * 8);
    pdVar8 = (double *)(lVar4 + uVar9 * 8);
    do {
      *pdVar8 = -*pdVar5;
      lVar11 = lVar11 + -1;
      pdVar5 = pdVar5 + 1;
      pdVar8 = pdVar8 + 1;
    } while (lVar11 != 0);
  }
  uVar14 = param_2[1];
  if (0 < (long)uVar14) {
    if (uVar14 >> 0x3d == 0) {
      pdVar5 = (double *)(uVar14 << 3);
      _malloc();
      if (pdVar5 != (double *)0x0) goto LAB_109961d30;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109961d2c);
    (*pcVar3)();
  }
  pdVar5 = (double *)0x0;
LAB_109961d30:
  (**(code **)(*param_1 + 0x20))(param_1,*param_2,lVar4,pdVar5);
  if (((ulong)param_1 & 1) == 0) {
    func_0x000107c2c4d8(param_4,&UNK_10f58df41,0x34);
  }
  else {
    if (uVar14 == 0) {
      *(undefined8 *)(param_3 + 0x18) = 0;
      dVar15 = 0.0;
    }
    else {
      pdVar8 = (double *)*param_2;
      uVar9 = uVar14 + 3;
      if (-1 < (long)uVar14) {
        uVar9 = uVar14;
      }
      if (uVar14 + 1 < 3) {
        dVar17 = *pdVar5;
        dVar15 = *pdVar8 - dVar17;
        *(double *)(param_3 + 0x18) = dVar15 * dVar15;
        dVar15 = ABS(*pdVar8 - dVar17);
      }
      else {
        uVar9 = uVar9 & 0xfffffffffffffffc;
        uVar10 = uVar14 - ((long)uVar14 >> 0x3f) & 0xfffffffffffffffe;
        dVar15 = *pdVar5;
        dVar17 = pdVar5[1];
        dVar18 = *pdVar8 - dVar15;
        dVar21 = pdVar8[1] - dVar17;
        dVar18 = dVar18 * dVar18;
        dVar21 = dVar21 * dVar21;
        if (3 < (long)uVar14) {
          dVar22 = (pdVar8[2] - pdVar5[2]) * (pdVar8[2] - pdVar5[2]);
          dVar23 = (pdVar8[3] - pdVar5[3]) * (pdVar8[3] - pdVar5[3]);
          if (7 < uVar14) {
            pdVar12 = pdVar5 + 6;
            pdVar13 = pdVar8 + 6;
            lVar7 = 4;
            do {
              dVar18 = dVar18 + (pdVar13[-2] - pdVar12[-2]) * (pdVar13[-2] - pdVar12[-2]);
              dVar21 = dVar21 + (pdVar13[-1] - pdVar12[-1]) * (pdVar13[-1] - pdVar12[-1]);
              dVar22 = dVar22 + (*pdVar13 - *pdVar12) * (*pdVar13 - *pdVar12);
              dVar23 = dVar23 + (pdVar13[1] - pdVar12[1]) * (pdVar13[1] - pdVar12[1]);
              lVar7 = lVar7 + 4;
              pdVar12 = pdVar12 + 4;
              pdVar13 = pdVar13 + 4;
            } while (lVar7 < (long)uVar9);
          }
          dVar18 = dVar22 + dVar18;
          dVar21 = dVar23 + dVar21;
          if ((long)uVar9 < (long)uVar10) {
            dVar22 = pdVar8[uVar9] - pdVar5[uVar9];
            dVar23 = (pdVar8 + uVar9)[1] - (pdVar5 + uVar9)[1];
            dVar18 = dVar18 + dVar22 * dVar22;
            dVar21 = dVar21 + dVar23 * dVar23;
          }
        }
        dVar18 = dVar18 + dVar21;
        lVar7 = (long)uVar14 % 2;
        pdVar12 = pdVar8 + ((long)uVar14 / 2) * 2;
        pdVar13 = pdVar5 + ((long)uVar14 / 2) * 2;
        if (lVar7 != 0 && lVar7 < 0 == SBORROW8(uVar14,uVar10)) {
          do {
            dVar18 = dVar18 + (*pdVar12 - *pdVar13) * (*pdVar12 - *pdVar13);
            lVar7 = lVar7 + -1;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          } while (lVar7 != 0);
        }
        *(double *)(param_3 + 0x18) = dVar18;
        auVar16._0_8_ = ABS(*pdVar8 - dVar15);
        auVar16._8_8_ = ABS(pdVar8[1] - dVar17);
        if (3 < (long)uVar14) {
          auVar19._0_8_ = ABS(pdVar8[2] - pdVar5[2]);
          auVar19._8_8_ = ABS(pdVar8[3] - pdVar5[3]);
          if (7 < uVar14) {
            pdVar12 = pdVar5 + 6;
            pdVar13 = pdVar8 + 6;
            lVar7 = 4;
            do {
              auVar1._8_8_ = ABS(pdVar13[-1] - pdVar12[-1]);
              auVar1._0_8_ = ABS(pdVar13[-2] - pdVar12[-2]);
              auVar16 = NEON_fmax(auVar16,auVar1,8);
              auVar2._8_8_ = ABS(pdVar13[1] - pdVar12[1]);
              auVar2._0_8_ = ABS(*pdVar13 - *pdVar12);
              auVar19 = NEON_fmax(auVar19,auVar2,8);
              lVar7 = lVar7 + 4;
              pdVar12 = pdVar12 + 4;
              pdVar13 = pdVar13 + 4;
            } while (lVar7 < (long)uVar9);
          }
          auVar16 = NEON_fmax(auVar16,auVar19,8);
          if ((long)uVar9 < (long)uVar10) {
            auVar20._0_8_ = ABS(pdVar8[uVar9] - pdVar5[uVar9]);
            auVar20._8_8_ = ABS((pdVar8 + uVar9)[1] - (pdVar5 + uVar9)[1]);
            auVar16 = NEON_fmax(auVar16,auVar20,8);
          }
        }
        dVar15 = auVar16._8_8_;
        if (auVar16._8_8_ <= auVar16._0_8_) {
          dVar15 = auVar16._0_8_;
        }
        lVar7 = (long)uVar14 % 2;
        pdVar12 = pdVar5 + ((long)uVar14 / 2) * 2;
        pdVar8 = pdVar8 + ((long)uVar14 / 2) * 2;
        dVar17 = dVar15;
        if (lVar7 != 0 && lVar7 < 0 == SBORROW8(uVar14,uVar10)) {
          do {
            dVar15 = ABS(*pdVar8 - *pdVar12);
            if (ABS(*pdVar8 - *pdVar12) <= dVar17) {
              dVar15 = dVar17;
            }
            lVar7 = lVar7 + -1;
            pdVar12 = pdVar12 + 1;
            pdVar8 = pdVar8 + 1;
            dVar17 = dVar15;
          } while (lVar7 != 0);
        }
      }
    }
    *(double *)(param_3 + 0x20) = dVar15;
  }
  _free(pdVar5);
  _free(lVar4);
  return param_1;
}



/* Entry: 109961fb8; end: 10996202f;  */

long FUN_109961fb8(long param_1)

{
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  _free(*(undefined8 *)(param_1 + 0x38));
  _free(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}


